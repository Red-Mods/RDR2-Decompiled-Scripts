//Decompiled with MagicRDR v1.0
//Function Count : 118
//Statics Count : 90
//Natives Count : 270
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 1;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	bool bLocal_7 = false;
	struct<12> Local_8[6];
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	bool bLocal_85 = false;
	int iLocal_86 = 0;
	bool bLocal_87 = false;
	bool bLocal_88 = false;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	bLocal_0 = "";
	iLocal_1 = 0;
	iLocal_2 = 1000;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_117("STARTS");
	Function_116(uScriptParam_0);
	iLocal_81 = 0;
	Function_114(uScriptParam_0, &iLocal_81);
	while (IS_GRINGO_ACTIVE())
	{
		Function_113(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_82);
		}
		iVar2 = 0;
		bLocal_87 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_81 - 1))
			{
				if (Local_8[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_81;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_87 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_107(&(Local_8[iVar312]), &bVar4))
						{
							Function_105(GRINGO_GET_REQUESTING_ACTOR(), Local_8[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_107(&(Local_8[iVar312]), &bVar4))
						{
							Function_105(GRINGO_GET_REQUESTING_ACTOR(), Local_8[iVar312].f_12);
							if (bVar4)
							{
								Function_101(&(Local_8[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_8[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_100("eGRINGO_EndUse: Stop use by request", Local_8[iVar312].f_16);
							Function_99(Local_8[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_8[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_8[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_8[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_8[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_92(&(Local_8[iVar312]), 0);
							}
							else if (Local_8[iVar312].f_44 < 8)
							{
								Function_91(&(Local_8[iVar312]));
								Local_8[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_117("Stop use request actor mismatch!!");
						}
						break;
				}
				GRINGO_SET_MESSAGE_RETURN(bVar5);
			}
			else
			{
				GRINGO_SET_MESSAGE_RETURN(false);
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (iLocal_81 - 1))
			{
				if (Function_90(Local_8[iVar012].f_40, 2))
				{
					if (!Function_31(&(Local_8[iVar012])))
					{
						Function_117("Quitting due to update end");
						Function_92(&(Local_8[iVar012]), 1);
					}
				}
				if (Function_30(&(Local_8[iVar012]), 0))
				{
					Function_20(&(Local_8[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_81 - 1))
		{
			if (Function_90(Local_8[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_8(uScriptParam_0))
		{
			if (bLocal_87)
			{
				GRINGO_WAIT(false);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(false);
			}
			else
			{
				GRINGO_WAIT(Function_7());
			}
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
	{
		Function_117("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_81 - 1))
	{
		if (Function_90(Local_8[iVar012].f_40, 2))
		{
			Function_6("Gringo termination calls StopUse", Local_8[iVar012].f_16);
			Function_92(&(Local_8[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_8[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_8[iVar012].f_12);
		}
		Function_30(&(Local_8[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_117("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x42B / 1067
{
	iParam0 = iParam0;
	Function_2(&uLocal_3);
	return;
}

void Function_2(int iParam0) //Position: 0x43A / 1082
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x460 / 1120
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x58E / 1422
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x5A8 / 1448
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0, bool bParam1) //Position: 0x5C5 / 1477
{
	char* cVar0;
	
	cVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(bParam1))
	{
		cVar0 = GET_OBJECT_NAME(bParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), bParam1, GET_TARGET_OBJECT(), cVar0, ": ", iParam0, 0);
	return;
}

var Function_7() //Position: 0x600 / 1536
{
	return iLocal_2;
}

int Function_8(int iParam0) //Position: 0x608 / 1544
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	
	iParam0 = iParam0;
	if (Function_16(48, 0))
	{
		if (IS_ACTOR_VALID(bLocal_0))
		{
			iLocal_2 = 4000;
			return 1;
		}
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar0);
		bVar3 = LOCATE_ACTOR_OF_TYPE(vVar0, 10.0f, 4294967295, 1194);
		if (IS_ACTOR_VALID(bVar3))
		{
			bLocal_0 = bVar3;
			iLocal_2 = 4000;
			return 1;
		}
		bVar3 = GET_VEHICLE(Global_34573);
		if (IS_ACTOR_VALID(bVar3))
		{
			bLocal_0 = bVar3;
			iLocal_2 = 4000;
			return 1;
		}
		iLocal_2 = 1000;
		if (!iLocal_1)
		{
			Function_15(&uLocal_3, 1194, 3, 0);
			iLocal_1 = 1;
			iLocal_2 = 10;
		}
		if (Function_9(&uLocal_3))
		{
			if (IS_LAYOUTREF_VALID(Global_30616))
			{
				if (!WOULD_ACTOR_BE_VISIBLE(1194, &vVar0, 3212836864) || HUD_IS_FADED())
				{
					GET_OBJECT_ORIENTATION(GRINGO_GET_MY_OBJECT_REF(), &vVar4);
					bLocal_0 = CREATE_ACTOR_IN_LAYOUT(Global_30616, "PlayerCarGringo_Car", 1194, vVar0, vVar4);
					iLocal_2 = 4000;
				}
				else
				{
					iLocal_2 = 1000;
				}
			}
			else
			{
				iLocal_2 = 1000;
			}
		}
		return 1;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x703 / 1795
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_14();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_13(iParam0[iVar03], 8);
		}
		else if (Function_12())
		{
			iVar1 = 1;
			Function_13(iParam0[iVar03], 8);
		}
		Function_13(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_13(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_13(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_10();
	return 1;
}

void Function_10() //Position: 0xA7E / 2686
{
	if (!Function_11(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_11(int iParam0) //Position: 0xABE / 2750
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_12() //Position: 0xADA / 2778
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_13(var uParam0, int iParam1) //Position: 0xB05 / 2821
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14() //Position: 0xB16 / 2838
{
	if (!Function_11(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

var Function_15(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xB58 / 2904
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_13(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_13(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_16(var uParam0, bool bParam1) //Position: 0xC28 / 3112
{
	int iVar0;
	
	iVar0 = Function_18(uParam0);
	if (!Function_17(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_17(int iParam0) //Position: 0xC65 / 3173
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_18(int iParam0) //Position: 0xC7C / 3196
{
	if (!Function_19(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_19(int iParam0) //Position: 0xC96 / 3222
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0xCAC / 3244
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_90(iParam0->f_40, 2))
	{
		Function_99(iParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_29(iParam0))
	{
		if (iParam0->f_44 == 6)
		{
			if (Function_27(iParam0) <= Function_25(iParam0->f_12))
			{
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							bVar1 = Function_23(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_87 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
								{
									Function_117("ManagePlayerQuit: Create quit context");
									if (Function_22(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_88 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_88 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_88))
								{
									Function_6("USE CONTEXT QUIT", iParam0->f_16);
									Function_91(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
									{
										Function_117("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", iParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
								{
									if (Function_21(iParam0->f_16))
									{
										Function_91(iParam0);
										Function_6("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
										{
											Function_117("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
							{
								Function_117("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
		{
			Function_117("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
		}
	}
	return;
}

bool Function_21(bool bParam0) //Position: 0xF96 / 3990
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	float fVar6;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = GET_CURRENT_GAME_TIME();
	vVar2 = { GET_STICK_X(iVar0, 0, 1), GET_STICK_Y(iVar0, 0, 1), 0.0f };
	bVar5 = VMAG(vVar2);
	if (bVar5 >= 0,2f)
	{
		DECOR_SET_BOOL(bParam0, "StickReset", true);
	}
	else if (bVar5 < 0,75f && DECOR_CHECK_EXIST(bParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(bParam0, "DisconnectTime", &fVar6))
		{
			DECOR_SET_FLOAT(bParam0, "DisconnectTime", bVar1);
		}
		else if ((bVar1 - fVar6) < 0,15f)
		{
			DECOR_REMOVE(bParam0, "StickReset");
			DECOR_REMOVE(bParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(bParam0, "DisconnectTime");
	return 0;
}

bool Function_22(bool bParam0, bool bParam1, int iParam2) //Position: 0x1090 / 4240
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_BOOL_ATTR(bParam1, bParam0, &iVar0);
	if (iVar0 >= 0)
	{
		return bVar1;
	}
	return iParam2;
}

bool Function_23(bool bParam0, int iParam1) //Position: 0x10AC / 4268
{
	return Function_24(bParam0, "UseQuit", iParam1);
}

bool Function_24(bool bParam0, bool bParam1, int iParam2) //Position: 0x10C3 / 4291
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_STRING_ATTR(bParam1, bParam0, &iVar0);
	*iParam2 = iVar0 < 0;
	if (*iParam2)
	{
		if (STRING_LENGTH(bVar1) != 0 || STRINGS_ARE_EQUAL(bVar1, "NoString"))
		{
			*iParam2 = 0;
			return bLocal_7;
		}
		return bVar1;
	}
	return bLocal_7;
}

float Function_25(bool bParam0) //Position: 0x1108 / 4360
{
	return Function_26(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_26(bool bParam0, bool bParam1, int iParam2) //Position: 0x1125 / 4389
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_27(int iParam0) //Position: 0x113B / 4411
{
	if (Function_29(iParam0))
	{
		if (Function_28(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0x1203 / 4611
{
	return Function_90(*iParam0, 2);
}

bool Function_29(int iParam0) //Position: 0x1210 / 4624
{
	return Function_90(*iParam0, 1);
}

bool Function_30(var uParam0, int iParam1) //Position: 0x121D / 4637
{
	bool bVar0;
	
	bVar0 = DECOR_CHECK_EXIST(uParam0->f_16, "GringoNoQuit");
	if (!bVar0)
	{
		return 1;
	}
	if (iParam1 && bVar0)
	{
		DECOR_REMOVE(uParam0->f_16, "GringoNoQuit");
		return 0;
	}
	return 0;
}

bool Function_31(int iParam0) //Position: 0x1265 / 4709
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	float fVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	float fVar24;
	vector3 vVar25;
	bool bVar28;
	vector3 vVar29;
	int iVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	int iVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	float fVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	int iVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	vector3 vVar57;
	bool bVar60;
	
	bVar12 = Function_89(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_100("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_22(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0,5f)
		{
			Function_100("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_100("Incapacitation quit", iParam0->f_16);
		return 0;
	}
	GET_POSITION(iParam0->f_16, &vVar17);
	bVar21 = true;
	if (iParam0->f_44 < 4)
	{
		iVar23 = STRING_TO_HASH("SharedPropName");
	}
	switch (iParam0->f_44)
	{
		case 0x00000002:
			bLocal_87 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_88(iParam0->f_12, &fVar24))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar25);
					vVar25.f_4 = (vVar25.y + (fVar24 + 0,1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						bVar28 = IS_AREA_OBSTRUCTED2(vVar25, fVar24, GET_PHYSINST_FROM_ACTOR(iParam0->f_16), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						bVar28 = IS_AREA_OBSTRUCTED(vVar25, fVar24, iParam0->f_16, 0);
					}
					if (IS_ACTOR_ON_TRAIN(iParam0->f_16, 0) || bVar28)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						iParam0->f_44 = 7;
						Function_6("Skip to eRewarding", iParam0->f_16);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_83(iParam0->f_16, iParam0->f_12))
				{
					Function_6("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_82(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_82(iParam0);
			}
			if (!Function_81(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_6("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_87 = true;
			Function_80(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_90(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_77(iParam0->f_12);
			}
			fVar20 = Function_76(iParam0->f_12);
			if (Function_27(iParam0) < fVar20)
			{
				Function_6("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_90(iParam0->f_40, 1))
			{
				Function_71(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_90(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_6("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_70(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_6("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, true);
						Function_70(iParam0 + 40, 16);
					}
				}
				Function_6("MID ACTION TELEPORT", iParam0->f_16);
				vVar29.y = uVar6;
				if (DECOR_CHECK_EXIST(iParam0->f_16, "NoTeleport"))
				{
					SET_OBJECT_POSITION(iParam0->f_16, vVar3);
					SET_OBJECT_ORIENTATION(iParam0->f_16, vVar29);
					DECOR_REMOVE(iParam0->f_16, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, true, Function_69());
				}
				if (!Function_90(iParam0->f_40, 1024))
				{
					Function_70(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_22(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_83(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_6("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_90(iParam0->f_40, 1024))
				{
					Function_70(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_22(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_90(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_6("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_70(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_6("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, true);
					Function_70(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_90(iParam0->f_40, 32))
			{
				bLocal_87 = true;
				if (GET_WEAPON_IN_HAND(iParam0->f_16) != 4294967295)
				{
					break;
				}
				Function_6("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_68(iParam0->f_12);
			bLocal_87 = true;
			Function_67(iParam0);
			Function_64(iParam0, Function_66(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_90(iParam0->f_40, 1);
			}
			bVar0 = Function_63(iParam0->f_16, iParam0->f_12, bVar33);
			if (!IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				iParam0->f_44 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
				}
			}
			else if (bVar12)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(iParam0->f_16, bVar0, bVar33))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
					}
					iParam0->f_44 = 5;
					bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
					while (bVar11 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar11, iParam0->f_12);
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_24(bVar1, "AttachBone", &bVar10), Function_24(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_62(bVar1, iParam0->f_16);
							if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
							{
								bVar34 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
								if (IS_PHYSINST_VALID(bVar34))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar34, 0);
								}
							}
						}
						bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, bVar11 + 1);
					}
					bVar13 = false;
					bVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
					while (bVar13 <= GRINGO_GET_ATTRIBUTE_COUNT(iParam0->f_12))
					{
						bVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
						if (GRINGO_IS_ATTRIBUTE_VALID(bVar15))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(bVar15) == 2)
							{
								if (iVar23 == GRINGO_GET_ATTRIBUTE_HASH(bVar15))
								{
									iVar16 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar15, &uVar14);
									bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), 0);
									while (bVar11 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar11, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_24(bVar1, "AttachBone", &bVar10), Function_24(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_62(bVar1, iParam0->f_16);
										}
										bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), bVar11 + 1);
									}
								}
							}
						}
						bVar13++;
					}
				}
			}
			if (iParam0->f_44 == 5)
			{
				Function_6("KICKED TO DOING START", iParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_53(iParam0, bVar8, &iLocal_86, &bLocal_85);
					bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
					if (IS_PHYSINST_VALID(bVar22))
					{
						if (!IS_PROP_FIXED(bVar22))
						{
							Function_70(iParam0 + 40, 256);
							SET_PROP_FIXED(bVar22, 1);
						}
						else
						{
							Function_52(iParam0 + 40, 256);
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_90(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_6("SCHEDULE STOP CUSTOM UNSUSPEND", iParam0->f_16);
						UNK_0x4A1D2E25(iParam0->f_16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_6("SCHEDULE STOP CUSTOM UNFIX", iParam0->f_16);
						UNK_0x817B6952(iParam0->f_16);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 1);
				if (Function_51(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_50(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_49(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_48(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_49(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_47(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_49(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_46(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_70(iParam0 + 40, 8);
					}
					else
					{
						Function_52(iParam0 + 40, 8);
					}
					if (Function_90(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
					}
				}
				else
				{
					Function_52(iParam0 + 40, 8);
				}
				if (Function_45(iParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(iParam0->f_16, 1, 1);
					UNK_0xC17BAD12(iParam0->f_16);
				}
				bVar37 = Function_24(iParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(iParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_22(iParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(iParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 0);
					}
				}
				Function_44(iParam0->f_16, iParam0->f_12);
				bVar40 = Function_22(iParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(iParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				Function_43();
			}
			iParam0->f_44 = 6;
			if (Function_90(iParam0->f_40, 1))
			{
				if (Function_42(iParam0->f_12))
				{
					Function_6("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_41(iParam0->f_16, iParam0->f_12))
			{
				Function_6("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_63(iParam0->f_16, iParam0->f_12, Function_90(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_6("ANIMATION QUIT DURING USE", iParam0->f_16);
					if (GRINGO_WAS_USE_SUCCESSFUL(iParam0->f_16))
					{
						iParam0->f_44 = 7;
					}
					else
					{
						iParam0->f_44 = 8;
					}
				}
			}
			if (Function_27(iParam0) <= Function_25(iParam0->f_12))
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(iParam0->f_16, iParam0->f_12);
			}
			if (!IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (AI_SPEECH_GET_ALLOW_FOR_ACTOR(iParam0->f_16))
				{
					bVar41 = GRINGO_GET_FIRST_NAMED_CHILD("SpeechConts", 4, iParam0->f_12);
					if (IS_GRINGO_COMPONENT_VALID(bVar41))
					{
						if (!DECOR_GET_FLOAT_VERBOSE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", &fVar42))
						{
							DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
						}
						else
						{
							iVar43 = GRINGO_GET_ATTRIBUTE_COUNT(bVar41);
							if (!GET_GRINGO_FLOAT_ATTR(&bVar45, "MinDelay", bVar41))
							{
								bVar45 = 10.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							if (!GET_GRINGO_FLOAT_ATTR(&bVar44, "MaxDelay", bVar41))
							{
								bVar44 = 30.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							bVar48 = GET_GRINGO_BOOL_ATTR("nForcePlay", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar47 = GET_GRINGO_BOOL_ATTR("AllowRepeat", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar49 = GET_GRINGO_BOOL_ATTR("SubtitlesOn", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar50 = GET_GRINGO_BOOL_ATTR("ForceThruSpeechBlock", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							if (iVar43 >= 0)
							{
								if (GET_CURRENT_GAME_TIME() - fVar42) <= RAND_FLOAT_RANGE(bVar45, bVar44)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									bVar51 = RAND_INT_RANGE(false, (iVar43 - 1));
									bVar52 = GRINGO_GET_ATTRIBUTE(bVar41, bVar51);
									bVar53 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar52, &iVar46);
									iVar54 = 1;
									STRING_CLEAR_TOKENIZER();
									iVar55 = SET_OWNERSHIP_STRAGGLER(bVar53, ",");
									if (iVar55 >= 1)
									{
										bVar56 = STRING_GET_TOKEN(1);
										if (STRINGS_ARE_EQUAL("super", bVar56))
										{
											iVar54 = 3;
										}
										else if (STRINGS_ARE_EQUAL("shout", bVar56))
										{
											iVar54 = 2;
										}
										else
										{
											iVar54 = 1;
										}
										bVar53 = STRING_GET_TOKEN(0);
									}
									SAY_SINGLE_LINE_STRING(iParam0->f_16, bVar53, bVar48, bVar47, iVar54, 0, bVar49, bVar50);
								}
							}
						}
					}
				}
			}
			if (iParam0->f_44 == 6)
			{
				bVar60 = Function_40(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_6("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_39())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(vVar57, *(iParam0 + 20)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(bVar60);
							PRINTSTRING(" ] ");
							PRINTNL();
						}
						iParam0->f_44 = 8;
					}
				}
			}
			if (iParam0->f_44 == 6)
			{
				if (NET_IS_IN_SESSION())
				{
					bVar21 = NET_IS_OBJECT_LOCAL(iParam0->f_16);
				}
				if (IS_TASKED_TO_USE_GRINGO_FOREVER(iParam0->f_16, GRINGO_GET_MY_GRINGO_ID()))
				{
					bVar21 = false;
				}
				if (bVar21)
				{
					if (Function_38(iParam0->f_12) <= 0.0f)
					{
						if (Function_27(iParam0) < Function_38(iParam0->f_12))
						{
							Function_6("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_117("nRewarding");
			Function_37(iParam0->f_16, iParam0->f_12);
			Function_36(iParam0->f_16, iParam0->f_12);
			Function_35(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_70(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_87 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_22(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_34())
						{
							Function_77(iParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(iParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_22(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_6("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_6("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_33(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_90(iParam0->f_40, 1024))
			{
				Function_52(iParam0 + 40, 1024);
				if (!Function_22(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_87 = true;
			bVar0 = Function_63(iParam0->f_16, iParam0->f_12, Function_90(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_6("ANIMATION FINISHED", iParam0->f_16);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_32(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_32(bool bParam0, int iParam1) //Position: 0x23AC / 9132
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_33(var uParam0, var uParam1) //Position: 0x23C1 / 9153
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_34() //Position: 0x23CF / 9167
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_35(var uParam0, bool bParam1) //Position: 0x2400 / 9216
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		bVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(bVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			iVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(uParam0, iVar6))
				{
					REMOVE_CAPABILITY(uParam0, iVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_36(var uParam0, bool bParam1) //Position: 0x2474 / 9332
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		bVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(bVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			iVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(uParam0, iVar6))
				{
					ADD_CAPABILITY(uParam0, iVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x24E6 / 9446
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_38(bool bParam0) //Position: 0x24F4 / 9460
{
	return Function_26(bParam0, "UseTime", 5.0f);
}

bool Function_39() //Position: 0x250A / 9482
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_40(bool bParam0) //Position: 0x2517 / 9495
{
	return Function_26(bParam0, "MoveAllowance", 1,5f);
}

bool Function_41(var uParam0, int iParam1) //Position: 0x2537 / 9527
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return 1;
}

bool Function_42(bool bParam0) //Position: 0x2546 / 9542
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_43() //Position: 0x2565 / 9573
{
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0x256B / 9579
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_45(int iParam0) //Position: 0x2579 / 9593
{
	iParam0 = iParam0;
	return 1;
}

bool Function_46(bool bParam0) //Position: 0x2584 / 9604
{
	return Function_22(bParam0, "OneShotKill", 0);
}

bool Function_47(bool bParam0, int iParam1) //Position: 0x259E / 9630
{
	return Function_24(bParam0, "ParentAnimNode", iParam1);
}

bool Function_48(bool bParam0) //Position: 0x25BC / 9660
{
	return Function_22(bParam0, "LinkToParentAnim", 0);
}

bool Function_49(bool bParam0) //Position: 0x25DB / 9691
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_8 - 1))
	{
		if (Local_8[iVar012].f_12 == bParam0)
		{
			return Local_8[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_50(bool bParam0) //Position: 0x260E / 9742
{
	return Function_22(bParam0, "LinkParentToAnim", 0);
}

bool Function_51(bool bParam0) //Position: 0x262D / 9773
{
	return Function_22(bParam0, "SingularUse", 0);
}

void Function_52(var uParam0, int iParam1) //Position: 0x2647 / 9799
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_53(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x265A / 9818
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	bVar2 = Function_61(uParam0->f_12, &bVar0);
	uVar3 = Function_60(uParam0->f_12, &bVar1);
	bVar4 = Function_59(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_58(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_57(uParam0->f_12, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			uParam0->f_32 = ATTACH_OBJECTS_PHYSICAL(bParam1, uParam0->f_16, bVar6, bVar8, 0,02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(bVar2);
		if (Function_39())
		{
			Function_56();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_55(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_54(), Function_55(uParam0->f_12, &bVar10), false, bVar9);
	}
	if (IS_GRINGO_COMPONENT_VALID(bVar4))
	{
		PRINTSTRING("HAVE TARGET ANIM");
		PRINTNL();
		if (IS_GRINGO_COMPONENT_VALID(*uParam2))
		{
			LOG_ERROR("Cannot set a target skeleton anim while one is already playing");
			return;
		}
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly on previous anim");
			DESTROY_OBJECT_ANIMATOR(*uParam3);
		}
		bVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar4, uParam0->f_16);
		bVar12 = GRINGO_ANIM_GET_ACT_FILENAME(bVar4);
		bVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar4);
		*uParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bParam1, bVar11, bVar12, bVar13);
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			if (Function_22(bVar4, "LinkToUser", 0))
			{
				if (Function_39())
				{
					Function_56();
					PRINTSTRING(" - linking target at slot: ");
					PRINTINT(bVar9);
					PRINTNL();
				}
				LINK_OBJECT_ANIMATOR_TO_ACTOR(*uParam3, uParam0->f_16, bVar9);
			}
		}
		else
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly!");
		}
		*uParam2 = uParam0->f_12;
	}
}

var Function_54() //Position: 0x2942 / 10562
{
	int iVar0;
	
	return iVar0;
}

bool Function_55(bool bParam0, bool bParam1) //Position: 0x294A / 10570
{
	return Function_24(bParam0, "TargetLocator", bParam1);
}

void Function_56() //Position: 0x2967 / 10599
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_57(bool bParam0, int iParam1) //Position: 0x2976 / 10614
{
	return Function_24(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_58(bool bParam0, int iParam1) //Position: 0x2998 / 10648
{
	return Function_24(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_59(bool bParam0) //Position: 0x29BC / 10684
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_60(bool bParam0, int iParam1) //Position: 0x29D9 / 10713
{
	return Function_24(bParam0, "TargetAttachBone", iParam1);
}

bool Function_61(bool bParam0, int iParam1) //Position: 0x29F9 / 10745
{
	return Function_24(bParam0, "TargetAttachSlot", iParam1);
}

void Function_62(bool bParam0, bool bParam1) //Position: 0x2A19 / 10777
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GRINGO_GET_FIRST_CHILD(2, bParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar0, bParam1);
		bVar3 = GRINGO_ANIM_GET_ACT_FILENAME(bVar0);
		bVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar0);
		bVar1 = GRINGO_GET_PHYSINST(bParam0);
		if (IS_PHYSINST_VALID(bVar1))
		{
			bVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar1);
			if (IS_OBJECT_ANIMATOR_VALID(bVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(bVar5);
			}
			bVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar1, bVar2, bVar3, bVar4);
			if (IS_OBJECT_ANIMATOR_VALID(bVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(bVar6, bParam1, GRINGO_GET_PROP_ATTACH_SLOT(bParam0));
			}
		}
	}
	return;
}

bool Function_63(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2AC7 / 10951
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnimMidAction", 2, bParam1);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam1);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, bParam1);
	return bVar0;
}

void Function_64(int iParam0, float fParam1) //Position: 0x2B37 / 11063
{
	if (!Function_29(iParam0))
	{
		Function_65(iParam0, fParam1);
	}
	return;
}

void Function_65(int iParam0, float fParam1) //Position: 0x2B4D / 11085
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_70(iParam0, 1);
	Function_52(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_66(bool bParam0) //Position: 0x2B6E / 11118
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_26(bParam0, "RandUseTime", 0.0f));
}

void Function_67(int iParam0) //Position: 0x2B8E / 11150
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_68(var uParam0) //Position: 0x2BA2 / 11170
{
	uParam0 = uParam0;
	return;
}

int Function_69() //Position: 0x2BAC / 11180
{
	return 1;
}

void Function_70(var uParam0, int iParam1) //Position: 0x2BB3 / 11187
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_71(bool bParam0, var uParam1, int iParam2) //Position: 0x2BC2 / 11202
{
	bool bVar0;
	
	Function_74(bParam0);
	*uParam1 = { StackVal, StackVal, Function_74(bParam0) };
	*iParam2 = Function_73(bParam0);
	bVar0 = Function_72(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_72(bool bParam0) //Position: 0x2C01 / 11265
{
	return Function_26(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_73(bool bParam0) //Position: 0x2C2C / 11308
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_74(bool bParam0) //Position: 0x2C37 / 11319
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_75(bParam0))
	{
		bVar3 = GRINGO_GET_PARENT_COMPONENT(bParam0, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar3))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_COMPONENT_USER(bVar3));
			if (IS_ACTOR_VALID(bVar4))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_LOCAL(&vVar0, bParam0);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bVar4), vVar0, &vVar0);
			}
		}
		else
		{
			LOG_ERROR("Can only use 'UsePosActorRelative' attribute on child use cases");
		}
	}
	else if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar0, "CentreLocator", bParam0))
	{
		if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar0, "UseLocator", bParam0))
		{
			if (!GRINGO_GET_USE_COMPONENT_POSITION(&vVar0, bParam0))
			{
				LOG_ERROR("Failed to find use location!");
			}
		}
	}
	return StackVal, StackVal, vVar0;
}

bool Function_75(bool bParam0) //Position: 0x2D2D / 11565
{
	return Function_22(bParam0, "UsePosActorRelative", 0);
}

bool Function_76(bool bParam0) //Position: 0x2D4F / 11599
{
	return Function_26(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_77(bool bParam0) //Position: 0x2D76 / 11638
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	float fVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	float fVar27;
	bool bVar28;
	bool bVar29;
	vector3 vVar30;
	vector3 vVar33;
	vector3 vVar36;
	
	GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar6);
	bVar9 = GRINGO_GET_COMPONENT_USER(bParam0);
	GET_OBJECT_POSITION(bVar9, &vVar0);
	vVar0.f_4 = (vVar0.y + 1.0f);
	vVar3 = { StackVal, StackVal, vVar0 };
	bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (bVar10 >= 4294967295)
	{
		bVar11 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, bParam0);
		if (GRINGO_IS_PROP_READY(bVar11))
		{
			bVar12 = GRINGO_GET_PROP_FROM_COMPONENT(bVar11);
			bVar13 = GET_OBJECT_FROM_PHYSINST(bVar12);
			vVar14 = { 0.0f, 0.0f, 0.0f };
			if (GET_OBJECT_POSITION(bVar13, &vVar14))
			{
				Function_79(StackVal, StackVal, StackVal, StackVal, vVar3, vVar14);
				vVar3 = { StackVal, StackVal, Function_79(StackVal, StackVal, StackVal, StackVal, vVar3, vVar14) };
				Function_78(StackVal, StackVal, StackVal, StackVal, vVar0, vVar14);
				vVar0 = { StackVal, StackVal, Function_78(StackVal, StackVal, StackVal, StackVal, vVar0, vVar14) };
			}
		}
		bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, bVar10 + 1);
	}
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f) };
	vVar17 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vVar3, StackVal) };
	vVar20 = { StackVal, StackVal, vVar17 };
	vVar20 = { StackVal, StackVal, Vector(vVar20, StackVal, StackVal) + Vector(2.0f, 2.0f, 2.0f) };
	bVar24 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera", 1, 1);
	fVar23 = Function_26(bParam0, "GringoCamHoldTime", -1.0f);
	if (IS_OBJECT_VALID(bVar24))
	{
		bVar25 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar24, 0);
		bVar26 = CREATE_POINT_IN_LAYOUT(bVar25, Function_54(), vVar17, 0.0f, 0.0f, 0.0f);
		ATTACH_OBJECTS_CONTINUOUS(bVar26, bVar9, 4294967295);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(bVar25);
		SET_CAMERASHOT_TARGET_OBJECT(bVar25, bVar26, 0);
		SET_CAMERASHOT_POSITION(bVar25, vVar20);
		SET_CAMERASHOT_COLLISION_ENABLED(bVar25, 0);
		if (fVar23 < -1.0f)
		{
			CUTSCENEOBJECT_ADD_TRANSITION_HOLD(bVar24, 0, fVar23, 4294967295);
		}
		else
		{
			CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(bVar24, 0, 4294967295);
		}
		SET_CAMERASHOT_FROM_LENS(bVar25, 6);
		FORCE_CAMERASHOT_UPDATE(bVar25);
		fVar27 = 2.0f;
		while (!CAMERASHOT_IS_VISIBLE_ACTOR(bVar25, GET_ACTOR_FROM_OBJECT(bVar9), 1065353216, 1117126656, 1, 1, 0) && fVar27 > 10.0f)
		{
			vVar20.x = (vVar20.x - fVar27);
			vVar20.f_8 = (vVar20.z - fVar27);
			SET_CAMERASHOT_POSITION(bVar25, vVar20);
			fVar27 = (fVar27 + 1,5f);
		}
		if (!CAMERASHOT_IS_VISIBLE_ACTOR(bVar25, GET_ACTOR_FROM_OBJECT(bVar9), 1065353216, 1117126656, 1, 1, 0))
		{
			SET_CAMERASHOT_POSITION(bVar25, vVar6);
			SET_CAMERASHOT_FROM_LENS(bVar25, 3);
		}
		bVar28 = false;
		bVar29 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
		while (IS_OBJECT_VALID(bVar29) && !bVar28)
		{
			if (GET_OBJECT_TYPE(bVar29) == 13)
			{
				bVar28 = true;
			}
			bVar29 = GET_OBJECT_OWNER(bVar29);
		}
		if (bVar28)
		{
			GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar30);
			vVar33 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar30, vVar20, StackVal) };
			ATTACH_CAMERASHOT(bVar25, GRINGO_GET_MY_OBJECT_REF(), vVar33, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			vVar36 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar30, vVar17, StackVal) };
			ATTACH_OBJECTS(bVar26, GRINGO_GET_MY_OBJECT_REF(), Function_54(), vVar36, 0.0f, 0.0f, 0.0f, 4294967295);
		}
		PLAY_CUTSCENEOBJECT(bVar24, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		Function_117("Failed to create gringo camera");
	}
	return;
}

vector3 Function_78(vector3 vParam0) //Position: 0x3035 / 12341
{
	vector3 vVar0;
	
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = vParam0.x;
	}
	else
	{
		vVar0.x = vParam3.x;
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_4 = vParam0.y;
	}
	else
	{
		vVar0.f_4 = vParam3.y;
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_8 = vParam0.z;
	}
	else
	{
		vVar0.f_8 = vParam3.z;
	}
	return StackVal, StackVal, vVar0;
}

vector3 Function_79(vector3 vParam0) //Position: 0x3092 / 12434
{
	vector3 vVar0;
	
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = vParam0.x;
	}
	else
	{
		vVar0.x = vParam3.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_4 = vParam0.y;
	}
	else
	{
		vVar0.f_4 = vParam3.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_8 = vParam0.z;
	}
	else
	{
		vVar0.f_8 = vParam3.z;
	}
	return StackVal, StackVal, vVar0;
}

void Function_80(int iParam0) //Position: 0x30EF / 12527
{
	iParam0 = iParam0;
	return;
}

bool Function_81(bool bParam0) //Position: 0x30F9 / 12537
{
	return Function_22(bParam0, "MaintainPosture", 0);
}

void Function_82(int iParam0) //Position: 0x3117 / 12567
{
	if (!Function_29(iParam0))
	{
		Function_65(iParam0, 0.0f);
	}
	return;
}

bool Function_83(bool bParam0, bool bParam1) //Position: 0x312C / 12588
{
	vector3 vVar0;
	bool bVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	
	Function_74(bParam1);
	vVar0 = { StackVal, StackVal, Function_74(bParam1) };
	bVar3 = Function_73(bParam1);
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, bVar3, 0, true, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(bParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_87(bParam0, bParam1);
	}
	uVar4 = Function_86(bParam1);
	uVar5 = Function_72(bParam1);
	Function_84(bParam1);
	vVar6 = { StackVal, StackVal, Function_84(bParam1) };
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(bParam0, &vVar0, &vVar6, uVar4, 0,2f, 1, bVar3, uVar5, 0, 0);
}

vector3 Function_84(int iParam0) //Position: 0x31B3 / 12723
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Function_85(StackVal, StackVal, iParam0, "UserOffset", vVar0);
	return StackVal, StackVal, Function_85(StackVal, StackVal, iParam0, "UserOffset", vVar0);
}

vector3 Function_85(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x31D6 / 12758
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_86(bool bParam0) //Position: 0x31F4 / 12788
{
	return Function_26(bParam0, "UseLocationTolerance", 0.0f);
}

int Function_87(bool bParam0, bool bParam1) //Position: 0x3217 / 12823
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	bool bVar16;
	vector3 vVar17;
	var uVar20;
	bool bVar23;
	
	bVar0 = Function_86(bParam1);
	fVar1 = Function_72(bParam1);
	if (!GET_GRINGO_BOOL_ATTR("RandomPointSet", bParam1, &uVar6))
	{
		bVar5 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		bVar16 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "Volume"));
		if (IS_ACTOR_IN_VOLUME(bParam0, bVar16) && DECOR_CHECK_EXIST(bParam0, "VolOnly"))
		{
			return 1;
		}
		GENERATE_RANDOM_POINT_IN_VOLUME(bVar16, &uVar7);
		FIND_VOL_SURFACE_POINTS_FOR_POINT(bVar16, &uVar7, &uVar10, &uVar13);
		bVar23 = false;
		bVar23 = FIND_INTERSECTION(&uVar10, &uVar13, &vVar17, &uVar20, 1, 4294967295, 4194304);
		if (bVar23)
		{
			vVar2 = { StackVal, StackVal, vVar17 };
			SET_GRINGO_VECTOR_ATTR(&vVar17, "RandomPoint", bParam1);
			SET_GRINGO_FLOAT_ATTR(bVar5, "RandomDirection", bParam1);
			SET_GRINGO_BOOL_ATTR(1, "RandomPointSet", bParam1);
		}
		else
		{
			return 0;
		}
	}
	GET_GRINGO_VECTOR_ATTR(&vVar2, "RandomPoint", bParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &vVar2, bVar0, 0,2f, 1, bVar5, fVar1, 1, 0);
}

bool Function_88(bool bParam0, int iParam1) //Position: 0x3332 / 13106
{
	*iParam1 = Function_26(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_89(bool bParam0) //Position: 0x335D / 13149
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	bVar0 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!GRINGO_IS_TARGET_OBJECT_READY())
		{
			return 0;
		}
	}
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (bVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bParam0)))
		{
			return 0;
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, bVar1 + 1);
	}
	bVar2 = false;
	bVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(bParam0))
	{
		bVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(bVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(bVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(bVar4))
				{
					iVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar4, &uVar3);
					bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), 0);
					while (bVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0))))
						{
							return 0;
						}
						bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), bVar1 + 1);
					}
				}
			}
		}
		bVar2++;
	}
	return 1;
}

bool Function_90(var uParam0, int iParam1) //Position: 0x3462 / 13410
{
	return (uParam0 && iParam1) == 0;
}

void Function_91(int iParam0) //Position: 0x346F / 13423
{
	if (Function_90(iParam0->f_40, 16))
	{
		if (iParam0->f_44 > 5 && iParam0->f_44 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
			{
				Function_6("UNSUSPEND MOVER", iParam0->f_16);
				ENABLE_MOVER(iParam0->f_16);
			}
			if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
			{
				Function_6("UNFIX MOVER", iParam0->f_16);
				SET_MOVER_FROZEN(iParam0->f_16, false);
			}
		}
	}
	return;
}

void Function_92(int iParam0, bool bParam1) //Position: 0x34E2 / 13538
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	
	if (bParam1)
	{
		Function_6("<<<STOP USE [delay allowed]", iParam0->f_16);
	}
	else
	{
		Function_6("<<<STOP USE [NO delay allowed]", iParam0->f_16);
	}
	Function_24(iParam0->f_12, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			RESET_REACT_NODE_FOR_ACTOR(iParam0->f_16);
		}
	}
	iVar1 = 1;
	bVar2 = Function_22(iParam0->f_12, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 1);
		}
	}
	bVar3 = Function_22(iParam0->f_12, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(iParam0->f_16, 0);
	}
	if (iParam0->f_44 < 8)
	{
		Function_33(iParam0->f_16, iParam0->f_12);
	}
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_90(iParam0->f_40, 32)) && Function_22(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_98(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_90(iParam0->f_40, 64));
		Function_32(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_22(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_90(iParam0->f_40, 128) && Function_22(iParam0->f_12, "RedrawWeapon", 1))
			{
				ACTOR_END_FORCE_HOLSTER(iParam0->f_16);
			}
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
			{
				bVar4 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
				if (IS_PHYSINST_VALID(bVar4))
				{
					SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar4, 0);
				}
			}
			if (Function_50(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_90(iParam0->f_40, 16))
			{
				Function_91(iParam0);
				Function_52(iParam0 + 40, 16);
			}
			if (Function_90(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_97(iParam0->f_12) && Function_90(iParam0->f_40, 512))
			{
				Function_52(iParam0 + 40, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 1);
				Function_6("Allow Bump Reactions", iParam0->f_16);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
		}
	}
	bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
	while (bVar5 >= 4294967295)
	{
		bVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar5, iParam0->f_12);
		bVar7 = GRINGO_GET_PHYSINST(bVar6);
		if (IS_PHYSINST_VALID(bVar7))
		{
			bVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar7));
			if (IS_OBJECT_ANIMATOR_VALID(bVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(bVar8));
			}
			if (!IS_ACTOR_VALID(iParam0->f_16))
			{
				RESET_PROP(bVar7);
			}
		}
		bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, bVar5 + 1);
	}
	if (Function_48(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_49(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_96(iParam0->f_12);
	bVar11 = Function_22(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_95(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_90(iParam0->f_40, 256))
			{
				Function_52(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_86)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(bLocal_85));
		iLocal_86 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_51(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_67(iParam0);
	Function_82(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_6("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_94(iParam0->f_12), iParam0->f_12);
	}
	Function_52(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_93();
		}
	}
	else
	{
		Function_93();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_93() //Position: 0x39E0 / 14816
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
			CAMERA_RESET(0);
		}
	}
	return;
}

bool Function_94(bool bParam0) //Position: 0x3A17 / 14871
{
	return Function_26(bParam0, "ReuseDelay", 15.0f);
}

void Function_95(var uParam0, int iParam1) //Position: 0x3A34 / 14900
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_61(uParam0->f_12, &uVar0);
	Function_60(uParam0->f_12, &uVar1);
	bVar2 = Function_59(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_96(int iParam0) //Position: 0x3A6C / 14956
{
	iParam0 = iParam0;
	return;
}

bool Function_97(bool bParam0) //Position: 0x3A76 / 14966
{
	return Function_22(bParam0, "BlockBumpReactions", 0);
}

void Function_98(var uParam0, int iParam1) //Position: 0x3A97 / 14999
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

void Function_99(bool bParam0, bool bParam1) //Position: 0x3AA5 / 15013
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_117("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_117("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
			{
				if (bParam1)
				{
					Function_117("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
			}
		}
	}
	if (bParam1)
	{
		Function_117("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_100(bool bParam0, bool bParam1) //Position: 0x3BAD / 15277
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_101(int iParam0) //Position: 0x3BC3 / 15299
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam0->f_16 = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(iParam0->f_16))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	iParam0->f_12 = bVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(bVar0))
	{
		if (IS_ACTOR_HORSE(iParam0->f_16))
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1,75f, 2.0f);
		}
		else
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0,5f, 1.0f, 0,5f);
		}
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_54(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_67(iParam0);
	Function_6("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_70(iParam0 + 40, 2);
	Function_52(iParam0 + 40, 8);
	Function_52(iParam0 + 40, 16);
	Function_52(iParam0 + 40, 64);
	SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "UserObject", bVar0);
	GRINGO_SET_COMPONENT_USER(iParam0->f_16, bVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		bVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar1))
		{
			SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar2, "LastUserObject", iParam0->f_12);
	if (!Function_104(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_70(iParam0 + 40, 32);
			}
			else
			{
				Function_52(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_52(iParam0 + 40, 32);
		}
		if (Function_90(iParam0->f_40, 32))
		{
			Function_70(iParam0 + 40, 128);
		}
		else
		{
			Function_52(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_52(iParam0 + 40, 32);
	}
	if (Function_103(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_70(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_70(iParam0 + 40, 128);
		}
	}
	if (Function_97(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_70(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_6("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_102(iParam0->f_16, bVar0);
	Function_6("START: ", iParam0->f_16);
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x3E79 / 15993
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_103(bool bParam0) //Position: 0x3E87 / 16007
{
	return Function_22(bParam0, "DrawWeapon", 0);
}

bool Function_104(bool bParam0) //Position: 0x3EA0 / 16032
{
	return Function_22(bParam0, "AllowWeapon", 0);
}

void Function_105(bool bParam0, int iParam1) //Position: 0x3EBA / 16058
{
	bool bVar0;
	int iVar1;
	
	bParam0 = bParam0;
	iVar1 = Function_106(iParam1, &bVar0);
	if (!bVar0)
	{
		if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
		{
			if (IS_ACTOR_LOCAL_PLAYER(GRINGO_GET_REQUESTING_ACTOR()))
			{
				iVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	GRINGO_SET_REQUEST_STRING(iVar1);
	return;
}

bool Function_106(var uParam0, int iParam1) //Position: 0x3EF2 / 16114
{
	return Function_24(uParam0, "UseName", iParam1);
}

bool Function_107(int iParam0, int iParam1) //Position: 0x3F09 / 16137
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	char* cVar17[64];
	bool bVar33;
	float fVar34;
	
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	bVar1 = GRINGO_GET_REQUESTING_ACTOR();
	GRINGO_GET_USER_POS_WITH_OFFSET(&vVar2, bVar1, bVar0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar5 = GRINGO_IS_CHARACTER_BLEND_PAUSED(bVar0);
		if (GET_ACTOR_GAIT_TYPE(bVar1) != 4 && !bVar5)
		{
			return 0;
		}
		if (ACTOR_HAS_ANIM_SET(bVar1, "stand_hostage") && !Function_22(iParam0->f_12, "CutFreeGringo", 0))
		{
			return 0;
		}
		if (IS_ACTOR_LOCAL_PLAYER(bVar1))
		{
			if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bVar1)))
			{
				iVar6 = 0;
				GET_GRINGO_BOOL_ATTR("IsHogtieFriendly", bVar0, &iVar6);
				if (iVar6 == 0)
				{
					return 0;
				}
			}
		}
		if (Global_3365)
		{
			if (IS_ACTOR_LOCAL_PLAYER(bVar1))
			{
				if (!Function_112(6))
				{
					return 0;
				}
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(bVar1))
		{
			if (IS_PLAYER_USING_COVER(0))
			{
				return 0;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(bVar1) && !bVar5)
		{
			return 0;
		}
		if (GET_ACTOR_INCAPACITATED(bVar1))
		{
			return 0;
		}
		if (!Function_111(bVar1, iParam0->f_12))
		{
			GRINGO_SET_REQUEST_FAILURE_REASON(1);
			return 0;
		}
		if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
		{
			if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "Gringo_PropInUse"))
			{
				GRINGO_SET_REQUEST_FAILURE_REASON(2);
				return 0;
			}
		}
		bVar7 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(bVar7))
		{
			bVar8 = GET_PROP_FROM_OBJECT(bVar7);
			if (IS_PHYSINST_VALID(bVar8))
			{
				if (HAS_PHYSINST_BROKEN_APART(bVar8))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(3);
					return 0;
				}
			}
		}
		if (!Function_90(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_70(iParam0 + 40, 1);
			}
			else
			{
				Function_52(iParam0 + 40, 1);
			}
			if (Function_90(iParam0->f_40, 1))
			{
				Function_100("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_74(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_74(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_110(iParam0->f_12);
				bVar16 = VMAG(vVar12);
				if (bVar16 < fVar15 && !GRINGO_HANDLES_MOVEMENT(bVar0))
				{
					strcpy(&cVar17, "nTOO FAR (", 64);
					straddi(&cVar17, FLOOR((bVar16 * 10.0f)), 64);
					stradd(&cVar17, " > ", 64);
					straddi(&cVar17, FLOOR((fVar15 * 10.0f)), 64);
					stradd(&cVar17, ")", 64);
					GRINGO_SET_REQUEST_FAILURE_REASON(5);
					return 0;
				}
				if (!Function_109(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_108(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_73(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_73(iParam0->f_12));
					}
					if (fVar34 < 180.0f)
					{
						fVar34 = (fVar34 - 360.0f);
					}
					else if (fVar34 > -180.0f)
					{
						fVar34 = (fVar34 + 360.0f);
					}
					if (fVar34 < FABS(bVar33))
					{
						GRINGO_SET_REQUEST_FAILURE_REASON(7);
						return 0;
					}
				}
			}
			*iParam1 = 1;
			return 1;
		}
		if (iParam0->f_16 == GRINGO_GET_REQUESTING_ACTOR())
		{
			*iParam1 = 0;
			return 1;
		}
	}
	GRINGO_SET_REQUEST_FAILURE_REASON(8);
	return 0;
}

bool Function_108(bool bParam0) //Position: 0x41D5 / 16853
{
	return Function_26(bParam0, "ActivationCone", 0.0f);
}

bool Function_109(bool bParam0, bool bParam1) //Position: 0x41F2 / 16882
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	
	fVar3 = GRINGO_GET_USE_COMPONENT_HEADING(bParam1);
	bVar4 = GET_HEADING(bParam0);
	fVar5 = Function_26(bParam1, "HeadingTolerance", -1.0f);
	fVar6 = (fVar3 - bVar4);
	if (fVar5 != -1.0f)
	{
		return 1;
	}
	Function_74(bParam1);
	Var0 = { StackVal, StackVal, Function_74(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_74(bParam1);
	Var0 = { StackVal, StackVal, Function_74(bParam1) };
	Var0.f_4 = (StackVal + 1,5f);
	if (fVar6 > 0.0f)
	{
		fVar6 = (fVar6 + 360.0f);
	}
	if (fVar6 <= (360.0f - fVar5) || fVar6 >= fVar5)
	{
		return 1;
	}
	return 0;
}

bool Function_110(int iParam0) //Position: 0x428E / 17038
{
	return Function_26(iParam0, "ActivationRadius", 2.0f);
}

bool Function_111(var uParam0, int iParam1) //Position: 0x42AD / 17069
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return 0;
}

bool Function_112(int iParam0) //Position: 0x42BC / 17084
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_113(int iParam0) //Position: 0x42D8 / 17112
{
	iParam0 = iParam0;
	return;
}

void Function_114(bool bParam0, int iParam1) //Position: 0x42E2 / 17122
{
	bool bVar0;
	bool bVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_115(&(Local_8[iLocal_8112]), bParam0);
		iLocal_81++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, bVar0);
		while (bVar0 <= 0 && *iParam1 > 6)
		{
			bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, bParam0);
			Function_114(bVar1, iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_115(int iParam0, int iParam1) //Position: 0x4344 / 17220
{
	iParam0->f_12 = iParam1;
	Function_52(iParam0 + 40, 1);
	return;
}

void Function_116(int iParam0) //Position: 0x4358 / 17240
{
	iParam0 = iParam0;
	return;
}

void Function_117(int iParam0) //Position: 0x4362 / 17250
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

