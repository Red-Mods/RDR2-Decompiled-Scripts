//Decompiled with MagicRDR v1.0
//Function Count : 111
//Statics Count : 45
//Natives Count : 267
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	float fLocal_6 = 0.0f;
	float fLocal_7 = 0.0f;
	char* cLocal_8 = NULL;
	bool bLocal_9 = false;
	int iLocal_10 = 0;
	struct<12> Local_11[2];
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	char* cLocal_40 = NULL;
	int iLocal_41 = 0;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_110("STARTS");
	Function_109(uScriptParam_0);
	iLocal_36 = 0;
	Function_107(uScriptParam_0, &iLocal_36);
	while (IS_GRINGO_ACTIVE())
	{
		Function_106(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_37);
		}
		iVar2 = 0;
		bLocal_42 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_36 - 1))
			{
				if (Local_11[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_36;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				iVar5 = 0;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_42 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_100(&(Local_11[iVar312]), &bVar4))
						{
							Function_98(GRINGO_GET_REQUESTING_ACTOR(), Local_11[iVar312].f_12);
							iVar5 = 1;
						}
						break;
					
					case 0x00000001:
						if (Function_100(&(Local_11[iVar312]), &bVar4))
						{
							Function_98(GRINGO_GET_REQUESTING_ACTOR(), Local_11[iVar312].f_12);
							if (bVar4)
							{
								Function_92(&(Local_11[iVar312]));
							}
							iVar5 = 1;
						}
						break;
					
					case 0x00000002:
						if (Local_11[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_91("eGRINGO_EndUse: Stop use by request", Local_11[iVar312].f_16);
							Function_90(Local_11[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_11[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_11[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_11[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_11[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_82(&(Local_11[iVar312]), 0);
							}
							else if (Local_11[iVar312].f_44 < 8)
							{
								Function_81(&(Local_11[iVar312]));
								Local_11[iVar312].f_44 = 8;
							}
							iVar5 = 1;
						}
						else
						{
							Function_110("Stop use request actor mismatch!!");
						}
						break;
				}
				GRINGO_SET_MESSAGE_RETURN(iVar5);
			}
			else
			{
				GRINGO_SET_MESSAGE_RETURN(0);
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (iLocal_36 - 1))
			{
				if (Function_80(Local_11[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_11[iVar012])))
					{
						Function_110("Quitting due to update end");
						Function_82(&(Local_11[iVar012]), 1);
					}
				}
				if (Function_15(&(Local_11[iVar012]), 0))
				{
					Function_5(&(Local_11[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_36 - 1))
		{
			if (Function_80(Local_11[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_42)
			{
				GRINGO_WAIT(false);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(false);
			}
			else
			{
				GRINGO_WAIT(Function_3());
			}
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_43))
	{
		Function_110("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_43);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_36 - 1))
	{
		if (Function_80(Local_11[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_11[iVar012].f_16);
			Function_82(&(Local_11[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_11[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_11[iVar012].f_12);
		}
		Function_15(&(Local_11[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_110("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x41F / 1055
{
	iParam0 = iParam0;
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x429 / 1065
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

var Function_3() //Position: 0x464 / 1124
{
	return iLocal_10;
}

int Function_4(int iParam0) //Position: 0x46C / 1132
{
	iParam0 = iParam0;
	return 0;
}

void Function_5(int iParam0) //Position: 0x477 / 1143
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_80(iParam0->f_40, 2))
	{
		Function_90(iParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_14(iParam0))
	{
		if (iParam0->f_44 == 6)
		{
			if (Function_12(iParam0) <= Function_10(iParam0->f_12))
			{
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							iVar1 = Function_8(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_42 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_43))
								{
									Function_110("ManagePlayerQuit: Create quit context");
									if (Function_7(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_43 = ADD_SCRIPT_USE_CONTEXT(iVar1, 500, 5, 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_43 = ADD_SCRIPT_USE_CONTEXT(iVar1, 500, 4, 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_43))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_81(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_43))
									{
										Function_110("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_43);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", iParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
								{
									if (Function_6(iParam0->f_16))
									{
										Function_81(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_43))
										{
											Function_110("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_43);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_43))
							{
								Function_110("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_43);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_43))
		{
			Function_110("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_43);
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x761 / 1889
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	float fVar6;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	fVar1 = GET_CURRENT_GAME_TIME();
	vVar2 = { GET_STICK_X(iVar0, 0, 1), GET_STICK_Y(iVar0, 0, 1), 0.0f };
	bVar5 = VMAG(vVar2);
	if (bVar5 >= 0.2f)
	{
		DECOR_SET_BOOL(bParam0, "StickReset", true);
	}
	else if (bVar5 < 0.75f && DECOR_CHECK_EXIST(bParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(bParam0, "DisconnectTime", &fVar6))
		{
			DECOR_SET_FLOAT(bParam0, "DisconnectTime", fVar1);
		}
		else if ((fVar1 - fVar6) < 0.15f)
		{
			DECOR_REMOVE(bParam0, "StickReset");
			DECOR_REMOVE(bParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(bParam0, "DisconnectTime");
	return 0;
}

bool Function_7(bool bParam0, bool bParam1, int iParam2) //Position: 0x85B / 2139
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

bool Function_8(bool bParam0, int iParam1) //Position: 0x877 / 2167
{
	return Function_9(bParam0, "UseQuit", iParam1);
}

bool Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x88E / 2190
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
			return bLocal_0;
		}
		return bVar1;
	}
	return bLocal_0;
}

float Function_10(bool bParam0) //Position: 0x8D3 / 2259
{
	return Function_11(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(bool bParam0, bool bParam1, int iParam2) //Position: 0x8F0 / 2288
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_12(int iParam0) //Position: 0x906 / 2310
{
	if (Function_14(iParam0))
	{
		if (Function_13(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_13(int iParam0) //Position: 0x9CE / 2510
{
	return Function_80(*iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0x9DB / 2523
{
	return Function_80(*iParam0, 1);
}

bool Function_15(var uParam0, int iParam1) //Position: 0x9E8 / 2536
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

bool Function_16(int iParam0) //Position: 0xA30 / 2608
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
	int iVar11;
	bool bVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	vector3 vVar17;
	float fVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	float fVar24;
	vector3 vVar25;
	var uVar28;
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
	float fVar44;
	float fVar45;
	int iVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	int iVar51;
	var uVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	vector3 vVar57;
	bool bVar60;
	
	bVar12 = Function_79(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_91("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_7(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_91("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_91("Incapacitation quit", iParam0->f_16);
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
			bLocal_42 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_78(iParam0->f_12, &fVar24))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar25);
					vVar25.f_4 = (vVar25.y + (fVar24 + 0.1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						uVar28 = IS_AREA_OBSTRUCTED2(vVar25, fVar24, GET_PHYSINST_FROM_ACTOR(iParam0->f_16), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						uVar28 = IS_AREA_OBSTRUCTED(vVar25, fVar24, iParam0->f_16, 0);
					}
					if (IS_ACTOR_ON_TRAIN(iParam0->f_16, 0) || uVar28)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						iParam0->f_44 = 7;
						Function_2("Skip to eRewarding", iParam0->f_16);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_73(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_72(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_72(iParam0);
			}
			if (!Function_71(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_42 = true;
			Function_70(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_80(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_69(iParam0->f_12);
			}
			fVar20 = Function_68(iParam0->f_12);
			if (Function_12(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_80(iParam0->f_40, 1))
			{
				Function_63(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_80(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_62(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_62(iParam0 + 40, 16);
					}
				}
				Function_2("MID ACTION TELEPORT", iParam0->f_16);
				vVar29.y = uVar6;
				if (DECOR_CHECK_EXIST(iParam0->f_16, "NoTeleport"))
				{
					SET_OBJECT_POSITION(iParam0->f_16, vVar3);
					SET_OBJECT_ORIENTATION(iParam0->f_16, vVar29);
					DECOR_REMOVE(iParam0->f_16, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, 1, Function_61());
				}
				if (!Function_80(iParam0->f_40, 1024))
				{
					Function_62(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_73(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_80(iParam0->f_40, 1024))
				{
					Function_62(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_80(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_62(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_62(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_80(iParam0->f_40, 32))
			{
				bLocal_42 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_60(iParam0->f_12);
			bLocal_42 = true;
			Function_59(iParam0);
			Function_56(iParam0, Function_58(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_80(iParam0->f_40, 1);
			}
			bVar0 = Function_55(iParam0->f_16, iParam0->f_12, bVar33);
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
					iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
					while (iVar11 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, iParam0->f_12);
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_9(bVar1, "AttachBone", &bVar10), Function_9(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_54(bVar1, iParam0->f_16);
							if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
							{
								bVar34 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
								if (IS_PHYSINST_VALID(bVar34))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar34, 0);
								}
							}
						}
						iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, iVar11 + 1);
					}
					iVar13 = 0;
					uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, iVar13);
					while (iVar13 <= GRINGO_GET_ATTRIBUTE_COUNT(iParam0->f_12))
					{
						uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, iVar13);
						if (GRINGO_IS_ATTRIBUTE_VALID(uVar15))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar15) == 2)
							{
								if (iVar23 == GRINGO_GET_ATTRIBUTE_HASH(uVar15))
								{
									iVar16 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar15, &uVar14);
									iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), 0);
									while (iVar11 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_9(bVar1, "AttachBone", &bVar10), Function_9(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_54(bVar1, iParam0->f_16);
										}
										iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), iVar11 + 1);
									}
								}
							}
						}
						iVar13++;
					}
				}
			}
			if (iParam0->f_44 == 5)
			{
				Function_2("KICKED TO DOING START", iParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_45(iParam0, bVar8, &iLocal_41, &cLocal_40);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_62(iParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_44(iParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_80(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNSUSPEND", iParam0->f_16);
						UNK_0x4A1D2E25(iParam0->f_16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNFIX", iParam0->f_16);
						UNK_0x817B6952(iParam0->f_16);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 1);
				if (Function_43(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_42(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_41(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_40(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_41(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_39(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_41(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_38(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_62(iParam0 + 40, 8);
					}
					else
					{
						Function_44(iParam0 + 40, 8);
					}
					if (Function_80(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 1);
					}
				}
				else
				{
					Function_44(iParam0 + 40, 8);
				}
				if (Function_37(iParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(iParam0->f_16, 1, 1);
					UNK_0xC17BAD12(iParam0->f_16);
				}
				bVar37 = Function_9(iParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(iParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_7(iParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(iParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 0);
					}
				}
				Function_36(iParam0->f_16, iParam0->f_12);
				bVar40 = Function_7(iParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(iParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				Function_35();
			}
			iParam0->f_44 = 6;
			if (Function_80(iParam0->f_40, 1))
			{
				if (Function_34(iParam0->f_12))
				{
					Function_2("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_26(iParam0->f_16, iParam0->f_12))
			{
				Function_2("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_55(iParam0->f_16, iParam0->f_12, Function_80(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_2("ANIMATION QUIT DURING USE", iParam0->f_16);
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
			if (Function_12(iParam0) <= Function_10(iParam0->f_12))
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
							if (!GET_GRINGO_FLOAT_ATTR(&fVar45, "MinDelay", bVar41))
							{
								fVar45 = 10.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							if (!GET_GRINGO_FLOAT_ATTR(&fVar44, "MaxDelay", bVar41))
							{
								fVar44 = 30.0f;
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
								if (GET_CURRENT_GAME_TIME() - fVar42) <= RAND_FLOAT_RANGE(fVar45, fVar44)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									iVar51 = RAND_INT_RANGE(0, (iVar43 - 1));
									uVar52 = GRINGO_GET_ATTRIBUTE(bVar41, iVar51);
									bVar53 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar52, &iVar46);
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
				bVar60 = Function_25(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_2("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_24())
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
					if (Function_23(iParam0->f_12) <= 0.0f)
					{
						if (Function_12(iParam0) < Function_23(iParam0->f_12))
						{
							Function_2("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_110("nRewarding");
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			Function_20(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_62(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_42 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_7(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_69(iParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(iParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_18(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_80(iParam0->f_40, 1024))
			{
				Function_44(iParam0 + 40, 1024);
				if (!Function_7(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_42 = true;
			bVar0 = Function_55(iParam0->f_16, iParam0->f_12, Function_80(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_2("ANIMATION FINISHED", iParam0->f_16);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_17(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_17(bool bParam0, int iParam1) //Position: 0x1B81 / 7041
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1B96 / 7062
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_19() //Position: 0x1BA4 / 7076
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

void Function_20(var uParam0, bool bParam1) //Position: 0x1BD5 / 7125
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, iVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(uParam0, uVar6))
				{
					REMOVE_CAPABILITY(uParam0, uVar6);
				}
			}
		}
		iVar1++;
	}
	return;
}

void Function_21(var uParam0, bool bParam1) //Position: 0x1C49 / 7241
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, iVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(uParam0, uVar6))
				{
					ADD_CAPABILITY(uParam0, uVar6);
				}
			}
		}
		iVar1++;
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x1CBB / 7355
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1CC9 / 7369
{
	return Function_11(bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1CDF / 7391
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1CEC / 7404
{
	return Function_11(bParam0, "MoveAllowance", 1.5f);
}

bool Function_26(bool bParam0, int iParam1) //Position: 0x1D0C / 7436
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		switch (iLocal_1)
		{
			case 0x00000000:
				Function_91("Mini-Game Started", bParam0);
				fLocal_6 = 0.0f;
				fLocal_7 = 0.0f;
				iLocal_10 = 0;
				START_MINIGAME(4);
				PUSH_MINIGAME_INPUT(27, 0);
				SET_MINIGAME_WIN_STATE(0);
				UNK_0x6AAD0420("ButtonMash", "StartingGracePeriod", 2.5f, 0);
				UNK_0x6AAD0420("ButtonMash", "InputInterval", 2.0f, 0);
				UNK_0x6AAD0420("ButtonMash", "RepeatMaximumTime", 10.0f, 0);
				UNK_0x655D350B("ButtonMash", "RepeatMaximumCount", 4, 0);
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_2);
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_3);
				cLocal_8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_TARGET_OBJECT());
				if (IS_OBJECT_ANIMATOR_VALID(cLocal_8))
				{
					LINK_OBJECT_ANIMATOR_TO_ACTOR(cLocal_8, bParam0, false);
				}
				else
				{
					LOG_ERROR("Failed to find Crank object animator!");
					return 0;
				}
				bLocal_9 = ADD_SCRIPT_USE_CONTEXT("carcrank_stop", 100, 4, 0, 0, 0, 0, 4294967295, 0);
				Function_32(GET_TARGET_OBJECT(), 0.0f, 0.5f, -3.0f, 0.0f, 0.5f, -2.5f, -1.0f, 0, 0);
				iLocal_1 = 1;
				return 1;
				break;
			
			case 0x00000001:
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_9))
				{
					Function_91("Mini-Game Stopped", bParam0);
					iLocal_4 = 10;
					iLocal_5 = 0;
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_9);
					END_CURRENT_MINIGAME();
					iLocal_1 = 2;
					return 1;
				}
				if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_2))
				{
					Function_91("Mini-Game Succeeded", bParam0);
					iLocal_5 = 1;
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_9);
					Function_29("carcrank_win", 4.0f, 1, 0, 2, 1, 0);
					END_CURRENT_MINIGAME();
					iLocal_1 = 2;
					return 1;
				}
				if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_3))
				{
					Function_91("Mini-Game Failed", bParam0);
					iLocal_4++;
					iLocal_5 = 0;
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_9);
					Function_29("carcrank_lose", 4.0f, 1, 0, 2, 1, 0);
					END_CURRENT_MINIGAME();
					iLocal_1 = 2;
					return 1;
				}
				if (Function_28())
				{
					Function_27();
				}
				if (IS_PIP_ENABLED(0))
				{
					ENABLE_PIP(0, 0, 1);
				}
				fVar0 = GET_STICK_X(GET_PLAYER_PADINDEX(bParam0), 0, 1);
				if (fVar0 <= -0.15f && fVar0 >= 0.15f)
				{
					fVar0 = 0.0f;
				}
				fVar1 = GET_STICK_Y(GET_PLAYER_PADINDEX(bParam0), 0, 1);
				if (fVar1 <= -0.15f && fVar1 >= 0.15f)
				{
					fVar1 = 1.0f;
				}
				fVar2 = (ATAN2_DEGREE(fVar0, -fVar1) + 180.0f);
				bVar3 = (fVar2 - fLocal_6);
				fVar4 = FABS(bVar3);
				if (fVar4 < 180.0f)
				{
					if (bVar3 < 0.0f)
					{
						bVar3 = (fVar4 - 360.0f);
					}
					else
					{
						bVar3 = (360.0f - fVar4);
					}
				}
				if (bVar3 <= 30.0f)
				{
					fLocal_6 = (fLocal_6 + 30.0f);
				}
				else if (bVar3 >= -30.0f)
				{
					fLocal_6 = (fLocal_6 - 30.0f);
				}
				else
				{
					fLocal_6 = (fLocal_6 + bVar3);
				}
				if (fLocal_6 <= 360.0f)
				{
					fLocal_6 = (fLocal_6 - 360.0f);
				}
				else if (fLocal_6 > 0.0f)
				{
					fLocal_6 = 0.0f;
				}
				fLocal_7 = (fLocal_6 / 360.0f);
				SET_PANIM_PHASE(bParam0, fLocal_7);
				SET_OBJECT_ANIMATOR_RATE(cLocal_8, 0.0f);
				SET_OBJECT_ANIMATOR_PHASE(cLocal_8, fLocal_7);
				break;
			
			case 0x00000002:
				if (fLocal_7 != 0.0f || fLocal_7 != 1.0f)
				{
					Function_91("Mini-Game Finished", bParam0);
					if (iLocal_5 || iLocal_4 <= 10)
					{
						iLocal_10 = 0;
						iLocal_1 = 3;
						return 1;
					}
					iLocal_10 = 1500;
					iLocal_1 = 0;
					return 1;
				}
				if (fLocal_7 < 0.5f)
				{
					if (fLocal_7 >= 0.95f)
					{
						fLocal_7 = (fLocal_7 + 0.05f);
					}
					else if (fLocal_7 > 1.0f)
					{
						fLocal_7 = 1.0f;
					}
				}
				else if (fLocal_7 <= 0.05f)
				{
					fLocal_7 = (fLocal_7 - 0.05f);
				}
				else if (fLocal_7 < 0.0f)
				{
					fLocal_7 = 0.0f;
				}
				SET_PANIM_PHASE(bParam0, fLocal_7);
				SET_OBJECT_ANIMATOR_RATE(cLocal_8, 0.0f);
				SET_OBJECT_ANIMATOR_PHASE(cLocal_8, fLocal_7);
				break;
			
			case 0x00000003:
				Function_91("Mini-Game Done", bParam0);
				iLocal_10 = 0;
				DESTROY_OBJECT(bLocal_2);
				DESTROY_OBJECT(bLocal_3);
				DESTROY_OBJECT_ANIMATOR(cLocal_8);
				Function_32(GET_TARGET_OBJECT(), 0.0f, 1.0f, -4.0f, 0.0f, 1.0f, -2.5f, -1.0f, 0, 0);
				iLocal_1 = 3;
				return 0;
				break;
			}
	}
	return 1;
}

void Function_27() //Position: 0x21A1 / 8609
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_28() //Position: 0x21B6 / 8630
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x21E3 / 8675
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_30(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_30(int iParam0) //Position: 0x225E / 8798
{
	char* cVar0[16];
	
	if (!Function_31())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_31() //Position: 0x229D / 8861
{
	if (Function_80(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_32(bool bParam0, vector3 vParam1, vector3 vParam4, float fParam7, bool bParam8, bool bParam9) //Position: 0x22B8 / 8888
{
	Function_33(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	if (!IS_STRING_VALID(bParam8))
	{
		bParam8 = "";
	}
	if (fParam7 >= 0.0f)
	{
		fParam7 = 9999.0f;
	}
	ATTACH_OBJECTS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), bParam0, bParam8, vParam1, 0.0f, 0.0f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), bParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam4, 0.0f, 0.0f, 0.0f, 0);
	Global_63098.f_4 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, Global_63098, 0f, fParam7);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 0);
	Global_63098.f_8 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), bParam9))
	{
		PLAY_CUTSCENEOBJECT(Global_63098, bParam9, Global_63098.f_12, Global_63098.f_16, Global_63098.f_20, Global_63098.f_24, Global_63098.f_28, Global_63098.f_32, Global_63098.f_36, Global_63098.f_40);
	}
}

void Function_33(bool bParam0) //Position: 0x23BD / 9149
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

bool Function_34(bool bParam0) //Position: 0x23CE / 9166
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_35() //Position: 0x23ED / 9197
{
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x23F3 / 9203
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_37(int iParam0) //Position: 0x2401 / 9217
{
	iParam0 = iParam0;
	return 1;
}

bool Function_38(bool bParam0) //Position: 0x240C / 9228
{
	return Function_7(bParam0, "OneShotKill", 0);
}

bool Function_39(bool bParam0, int iParam1) //Position: 0x2426 / 9254
{
	return Function_9(bParam0, "ParentAnimNode", iParam1);
}

bool Function_40(bool bParam0) //Position: 0x2444 / 9284
{
	return Function_7(bParam0, "LinkToParentAnim", 0);
}

bool Function_41(bool bParam0) //Position: 0x2463 / 9315
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_11 - 1))
	{
		if (Local_11[iVar012].f_12 == bParam0)
		{
			return Local_11[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_42(bool bParam0) //Position: 0x2496 / 9366
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_43(bool bParam0) //Position: 0x24B5 / 9397
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_44(var uParam0, int iParam1) //Position: 0x24CF / 9423
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_45(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x24E2 / 9442
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	char* cVar12;
	bool bVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	uVar2 = Function_53(uParam0->f_12, &bVar0);
	uVar3 = Function_52(uParam0->f_12, &bVar1);
	bVar4 = Function_51(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		uVar6 = Function_50(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_49(uParam0->f_12, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			uParam0->f_32 = ATTACH_OBJECTS_PHYSICAL(bParam1, uParam0->f_16, uVar6, uVar8, 0.02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(uVar2);
		if (Function_24())
		{
			Function_48();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_47(uParam0->f_12, &bVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_46(), Function_47(uParam0->f_12, &bVar10), 0, bVar9);
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
		uVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar4, uParam0->f_16);
		cVar12 = GRINGO_ANIM_GET_ACT_FILENAME(bVar4);
		bVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar4);
		*uParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bParam1, uVar11, cVar12, bVar13);
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			if (Function_7(bVar4, "LinkToUser", 0))
			{
				if (Function_24())
				{
					Function_48();
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

var Function_46() //Position: 0x27CA / 10186
{
	int iVar0;
	
	return iVar0;
}

bool Function_47(bool bParam0, bool bParam1) //Position: 0x27D2 / 10194
{
	return Function_9(bParam0, "TargetLocator", bParam1);
}

void Function_48() //Position: 0x27EF / 10223
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_49(bool bParam0, int iParam1) //Position: 0x27FE / 10238
{
	return Function_9(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_50(bool bParam0, int iParam1) //Position: 0x2820 / 10272
{
	return Function_9(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_51(bool bParam0) //Position: 0x2844 / 10308
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_52(bool bParam0, int iParam1) //Position: 0x2861 / 10337
{
	return Function_9(bParam0, "TargetAttachBone", iParam1);
}

bool Function_53(bool bParam0, int iParam1) //Position: 0x2881 / 10369
{
	return Function_9(bParam0, "TargetAttachSlot", iParam1);
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x28A1 / 10401
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	char* cVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6;
	
	bVar0 = GRINGO_GET_FIRST_CHILD(2, bParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar0, iParam1);
		cVar3 = GRINGO_ANIM_GET_ACT_FILENAME(bVar0);
		bVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar0);
		bVar1 = GRINGO_GET_PHYSINST(bParam0);
		if (IS_PHYSINST_VALID(bVar1))
		{
			cVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar1);
			if (IS_OBJECT_ANIMATOR_VALID(cVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(cVar5);
			}
			cVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar1, uVar2, cVar3, bVar4);
			if (IS_OBJECT_ANIMATOR_VALID(cVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(cVar6, iParam1, GRINGO_GET_PROP_ATTACH_SLOT(bParam0));
			}
		}
	}
	return;
}

bool Function_55(bool bParam0, bool bParam1, bool bParam2) //Position: 0x294F / 10575
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

void Function_56(int iParam0, float fParam1) //Position: 0x29BF / 10687
{
	if (!Function_14(iParam0))
	{
		Function_57(iParam0, fParam1);
	}
	return;
}

void Function_57(int iParam0, float fParam1) //Position: 0x29D5 / 10709
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_62(iParam0, 1);
	Function_44(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_58(bool bParam0) //Position: 0x29F6 / 10742
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(bParam0, "RandUseTime", 0.0f));
}

void Function_59(int iParam0) //Position: 0x2A16 / 10774
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_60(var uParam0) //Position: 0x2A2A / 10794
{
	uParam0 = uParam0;
	return;
}

int Function_61() //Position: 0x2A34 / 10804
{
	return 1;
}

void Function_62(var uParam0, int iParam1) //Position: 0x2A3B / 10811
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_63(bool bParam0, var uParam1, int iParam2) //Position: 0x2A4A / 10826
{
	float fVar0;
	
	Function_66(bParam0);
	*uParam1 = { StackVal, StackVal, Function_66(bParam0) };
	*iParam2 = Function_65(bParam0);
	fVar0 = Function_64(bParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

bool Function_64(bool bParam0) //Position: 0x2A89 / 10889
{
	return Function_11(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_65(bool bParam0) //Position: 0x2AB4 / 10932
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_66(bool bParam0) //Position: 0x2ABF / 10943
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_67(bParam0))
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

bool Function_67(bool bParam0) //Position: 0x2BB5 / 11189
{
	return Function_7(bParam0, "UsePosActorRelative", 0);
}

bool Function_68(bool bParam0) //Position: 0x2BD7 / 11223
{
	return Function_11(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_69(int iParam0) //Position: 0x2BFE / 11262
{
	iParam0 = iParam0;
	return;
}

void Function_70(int iParam0) //Position: 0x2C08 / 11272
{
	iParam0 = iParam0;
	return;
}

bool Function_71(bool bParam0) //Position: 0x2C12 / 11282
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_72(int iParam0) //Position: 0x2C30 / 11312
{
	if (!Function_14(iParam0))
	{
		Function_57(iParam0, 0.0f);
	}
	return;
}

bool Function_73(bool bParam0, bool bParam1) //Position: 0x2C45 / 11333
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	
	Function_66(bParam1);
	vVar0 = { StackVal, StackVal, Function_66(bParam1) };
	fVar3 = Function_65(bParam1);
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, fVar3, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(bParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_77(bParam0, bParam1);
	}
	uVar4 = Function_76(bParam1);
	uVar5 = Function_64(bParam1);
	Function_74(bParam1);
	vVar6 = { StackVal, StackVal, Function_74(bParam1) };
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(bParam0, &vVar0, &vVar6, uVar4, 0.2f, 1, fVar3, uVar5, 0, 0);
}

vector3 Function_74(int iParam0) //Position: 0x2CCC / 11468
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Function_75(StackVal, StackVal, iParam0, "UserOffset", vVar0);
	return StackVal, StackVal, Function_75(StackVal, StackVal, iParam0, "UserOffset", vVar0);
}

vector3 Function_75(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x2CEF / 11503
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_76(bool bParam0) //Position: 0x2D0D / 11533
{
	return Function_11(bParam0, "UseLocationTolerance", 0.0f);
}

int Function_77(bool bParam0, bool bParam1) //Position: 0x2D30 / 11568
{
	var uVar0;
	var uVar1;
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
	
	uVar0 = Function_76(bParam1);
	uVar1 = Function_64(bParam1);
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
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &vVar2, uVar0, 0.2f, 1, bVar5, uVar1, 1, 0);
}

bool Function_78(bool bParam0, int iParam1) //Position: 0x2E4B / 11851
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_79(bool bParam0) //Position: 0x2E76 / 11894
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
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
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (iVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bParam0)))
		{
			return 0;
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, iVar1 + 1);
	}
	iVar2 = 0;
	uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, iVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (iVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(bParam0))
	{
		uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, iVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(uVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(uVar4))
				{
					iVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar4, &uVar3);
					iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), 0);
					while (iVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0))))
						{
							return 0;
						}
						iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), iVar1 + 1);
					}
				}
			}
		}
		iVar2++;
	}
	return 1;
}

bool Function_80(var uParam0, int iParam1) //Position: 0x2F7B / 12155
{
	return (uParam0 && iParam1) == 0;
}

void Function_81(int iParam0) //Position: 0x2F88 / 12168
{
	if (Function_80(iParam0->f_40, 16))
	{
		if (iParam0->f_44 > 5 && iParam0->f_44 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
			{
				Function_2("UNSUSPEND MOVER", iParam0->f_16);
				ENABLE_MOVER(iParam0->f_16);
			}
			if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
			{
				Function_2("UNFIX MOVER", iParam0->f_16);
				SET_MOVER_FROZEN(iParam0->f_16, 0);
			}
		}
	}
	return;
}

void Function_82(int iParam0, bool bParam1) //Position: 0x2FFB / 12283
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	char* cVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	char* cVar14;
	
	if (bParam1)
	{
		Function_2("<<<STOP USE [delay allowed]", iParam0->f_16);
	}
	else
	{
		Function_2("<<<STOP USE [NO delay allowed]", iParam0->f_16);
	}
	Function_9(iParam0->f_12, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			RESET_REACT_NODE_FOR_ACTOR(iParam0->f_16);
		}
	}
	iVar1 = 1;
	bVar2 = Function_7(iParam0->f_12, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 1);
		}
	}
	bVar3 = Function_7(iParam0->f_12, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(iParam0->f_16, 0);
	}
	if (iParam0->f_44 < 8)
	{
		Function_18(iParam0->f_16, iParam0->f_12);
	}
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_80(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_88(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_80(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_80(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_42(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_80(iParam0->f_40, 16))
			{
				Function_81(iParam0);
				Function_44(iParam0 + 40, 16);
			}
			if (Function_80(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 0);
			}
			if (Function_87(iParam0->f_12) && Function_80(iParam0->f_40, 512))
			{
				Function_44(iParam0 + 40, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 1);
				Function_2("Allow Bump Reactions", iParam0->f_16);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
		}
	}
	iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
	while (iVar5 >= 4294967295)
	{
		bVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar5, iParam0->f_12);
		bVar7 = GRINGO_GET_PHYSINST(bVar6);
		if (IS_PHYSINST_VALID(bVar7))
		{
			cVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar7));
			if (IS_OBJECT_ANIMATOR_VALID(cVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cVar8));
			}
			if (!IS_ACTOR_VALID(iParam0->f_16))
			{
				RESET_PROP(bVar7);
			}
		}
		iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, iVar5 + 1);
	}
	if (Function_40(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_41(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_86(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_85(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_80(iParam0->f_40, 256))
			{
				Function_44(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_41)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_40));
		iLocal_41 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_43(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_43))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_43);
	}
	SET_GRINGO_OBJECT_REF_ATTR(cVar14, "UserObject", iParam0->f_12);
	Function_59(iParam0);
	Function_72(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_84(iParam0->f_12), iParam0->f_12);
	}
	Function_44(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_83();
		}
	}
	else
	{
		Function_83();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_83() //Position: 0x34F9 / 13561
{
	return;
}

bool Function_84(bool bParam0) //Position: 0x34FF / 13567
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_85(var uParam0, int iParam1) //Position: 0x351C / 13596
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_53(uParam0->f_12, &uVar0);
	Function_52(uParam0->f_12, &uVar1);
	bVar2 = Function_51(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_86(int iParam0) //Position: 0x3554 / 13652
{
	iParam0 = iParam0;
	return;
}

bool Function_87(bool bParam0) //Position: 0x355E / 13662
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_88(bool bParam0, var uParam1) //Position: 0x357F / 13695
{
	uParam1 = uParam1;
	bParam0 = bParam0;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		Function_91("Mini-Game Cleanup", bParam0);
		iLocal_10 = 2000;
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		Function_89();
		CAMERA_RESET(0);
		if (IS_MINIGAME_RUNNING())
		{
			END_CURRENT_MINIGAME();
		}
		if (IS_OBJECT_VALID(bLocal_2))
		{
			DESTROY_OBJECT(bLocal_2);
		}
		if (IS_OBJECT_VALID(bLocal_3))
		{
			DESTROY_OBJECT(bLocal_3);
		}
		if (IS_OBJECT_ANIMATOR_VALID(cLocal_8))
		{
			DESTROY_OBJECT_ANIMATOR(cLocal_8);
		}
		if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_9))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_9);
		}
		if (iLocal_5)
		{
			DECOR_SET_BOOL(GET_TARGET_OBJECT(), "carCranked", true);
		}
	}
	else if (!IS_ACTOR_PLAYER(bParam0))
	{
		DECOR_SET_BOOL(GET_TARGET_OBJECT(), "carCranked", true);
	}
	return;
}

void Function_89() //Position: 0x3639 / 13881
{
	if (VMAG(*(&Global_63098 + 44)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_63098.f_16 < 0.0f)
	{
		Global_63098.f_4 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, StackVal, Global_63098, Global_63098.f_16);
		Global_63098.f_16 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(Global_63098));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(Global_63098) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
		}
	}
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 4;
	return;
}

void Function_90(bool bParam0, bool bParam1) //Position: 0x3753 / 14163
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_110("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_110("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_43))
			{
				if (bParam1)
				{
					Function_110("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_43);
			}
		}
	}
	if (bParam1)
	{
		Function_110("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_91(char* cParam0, bool bParam1) //Position: 0x385B / 14427
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, cParam0, 0, 0, 0);
	return;
}

void Function_92(int iParam0) //Position: 0x3871 / 14449
{
	int iVar0;
	bool bVar1;
	char* cVar2;
	
	iParam0->f_16 = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(iParam0->f_16))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	iVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	iParam0->f_12 = iVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(iVar0))
	{
		if (IS_ACTOR_HORSE(iParam0->f_16))
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.75f, 2.0f);
		}
		else
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f, 1.0f, 0.5f);
		}
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_46(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_59(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_62(iParam0 + 40, 2);
	Function_44(iParam0 + 40, 8);
	Function_44(iParam0 + 40, 16);
	Function_44(iParam0 + 40, 64);
	SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "UserObject", iVar0);
	GRINGO_SET_COMPONENT_USER(iParam0->f_16, iVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		bVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar1))
		{
			SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(cVar2, "LastUserObject", iParam0->f_12);
	if (!Function_97(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_62(iParam0 + 40, 32);
			}
			else
			{
				Function_44(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_44(iParam0 + 40, 32);
		}
		if (Function_80(iParam0->f_40, 32))
		{
			Function_62(iParam0 + 40, 128);
		}
		else
		{
			Function_44(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_44(iParam0 + 40, 32);
	}
	if (Function_96(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_62(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_62(iParam0 + 40, 128);
		}
	}
	if (Function_87(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_62(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_93(iParam0->f_16, iVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_93(bool bParam0, float fParam1) //Position: 0x3B27 / 15143
{
	fParam1 = fParam1;
	bParam0 = bParam0;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		Function_91("Mini-Game Init", bParam0);
		iLocal_4 = 0;
		iLocal_5 = 0;
		iLocal_10 = 0;
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (Function_28())
		{
			Function_27();
		}
		if (IS_PIP_ENABLED(0))
		{
			ENABLE_PIP(0, 0, 1);
		}
		Function_94(GET_AMBIENT_LAYOUT(), 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
		Function_32(GET_TARGET_OBJECT(), 0.0f, 1.0f, -4.0f, 0.0f, 1.0f, -2.5f, -1.0f, 0, 0);
		bLocal_2 = CREATE_EVENT_TRAP("CrankMiniGameSucceeded", 55, GRINGO_GET_MY_OBJECT_REF());
		bLocal_3 = CREATE_EVENT_TRAP("CrankMiniGameFailed", 56, GRINGO_GET_MY_OBJECT_REF());
		iLocal_1 = 0;
		return;
	}
	return;
}

void Function_94(bool bParam0, float fParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0x3BF2 / 15346
{
	Function_95(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_46(), 2, 1);
	Global_63098.f_12 = uParam3;
	Global_63098.f_16 = uParam4;
	Global_63098.f_20 = uParam5;
	Global_63098.f_24 = uParam6;
	Global_63098.f_28 = uParam7;
	Global_63098.f_32 = uParam8;
	Global_63098.f_36 = uParam9;
	Global_63098.f_40 = uParam10;
	Global_63098.f_44 = uParam11;
	(&Global_63098 + 44)->f_4 = uParam12;
	(&Global_63098 + 44)->f_8 = uParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	if (bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), fParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1), fParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), fParam1);
	Global_63098.f_4 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 0);
	Global_63098.f_8 = 0;
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 0;
}

void Function_95(bool bParam0, bool bParam1) //Position: 0x3CCB / 15563
{
	if (bParam0)
	{
		if (VMAG(*(&Global_63098 + 44)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(Global_63098))
	{
		if (!bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(Global_63098, 0);
		}
		DESTROY_OBJECT(Global_63098);
	}
	return;
}

bool Function_96(bool bParam0) //Position: 0x3D17 / 15639
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_97(bool bParam0) //Position: 0x3D30 / 15664
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_98(int iParam0, int iParam1) //Position: 0x3D4A / 15690
{
	bool bVar0;
	var uVar1;
	
	iParam0 = iParam0;
	uVar1 = Function_99(iParam1, &bVar0);
	if (!bVar0)
	{
		if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
		{
			if (IS_ACTOR_LOCAL_PLAYER(GRINGO_GET_REQUESTING_ACTOR()))
			{
				uVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	GRINGO_SET_REQUEST_STRING(uVar1);
	return;
}

bool Function_99(var uParam0, int iParam1) //Position: 0x3D82 / 15746
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_100(int iParam0, int iParam1) //Position: 0x3D99 / 15769
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
		if (ACTOR_HAS_ANIM_SET(bVar1, "stand_hostage") && !Function_7(iParam0->f_12, "CutFreeGringo", 0))
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
				if (!Function_105(6))
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
		if (!Function_104(bVar1, iParam0->f_12))
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
		if (!Function_80(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_62(iParam0 + 40, 1);
			}
			else
			{
				Function_44(iParam0 + 40, 1);
			}
			if (Function_80(iParam0->f_40, 1))
			{
				Function_91("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_66(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_66(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_103(iParam0->f_12);
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
				if (!Function_102(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_101(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_65(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_65(iParam0->f_12));
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

bool Function_101(bool bParam0) //Position: 0x4064 / 16484
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_102(bool bParam0, bool bParam1) //Position: 0x4081 / 16513
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	
	fVar3 = GRINGO_GET_USE_COMPONENT_HEADING(bParam1);
	bVar4 = GET_HEADING(bParam0);
	fVar5 = Function_11(bParam1, "HeadingTolerance", -1.0f);
	fVar6 = (fVar3 - bVar4);
	if (fVar5 != -1.0f)
	{
		return 1;
	}
	Function_66(bParam1);
	Var0 = { StackVal, StackVal, Function_66(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_66(bParam1);
	Var0 = { StackVal, StackVal, Function_66(bParam1) };
	Var0.f_4 = (StackVal + 1.5f);
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

bool Function_103(int iParam0) //Position: 0x411D / 16669
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_104(var uParam0, int iParam1) //Position: 0x413C / 16700
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return 1;
}

bool Function_105(int iParam0) //Position: 0x414B / 16715
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_106(int iParam0) //Position: 0x4167 / 16743
{
	iParam0 = iParam0;
	return;
}

void Function_107(bool bParam0, int iParam1) //Position: 0x4171 / 16753
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_108(&(Local_11[iLocal_3612]), bParam0);
		iLocal_36++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 2)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_107(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_108(int iParam0, int iParam1) //Position: 0x41D3 / 16851
{
	iParam0->f_12 = iParam1;
	Function_44(iParam0 + 40, 1);
	return;
}

void Function_109(int iParam0) //Position: 0x41E7 / 16871
{
	iParam0 = iParam0;
	return;
}

void Function_110(int iParam0) //Position: 0x41F1 / 16881
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

