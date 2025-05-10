//Decompiled with MagicRDR v1.0
//Function Count : 118
//Statics Count : 94
//Natives Count : 274
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	struct<7> Local_4 = { 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_11 = false;
	struct<12> Local_12[6];
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	char* cLocal_89 = NULL;
	int iLocal_90 = 0;
	bool bLocal_91 = false;
	bool bLocal_92 = false;
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
	
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_117("STARTS");
	Function_116(uScriptParam_0);
	iLocal_85 = 0;
	Function_114(uScriptParam_0, &iLocal_85);
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
			GET_OBJECT_POSITION(bVar1, &uLocal_86);
		}
		iVar2 = 0;
		bLocal_91 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_85 - 1))
			{
				if (Local_12[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_85;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_91 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_107(&(Local_12[iVar312]), &bVar4))
						{
							Function_105(GRINGO_GET_REQUESTING_ACTOR(), Local_12[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_107(&(Local_12[iVar312]), &bVar4))
						{
							Function_105(GRINGO_GET_REQUESTING_ACTOR(), Local_12[iVar312].f_12);
							if (bVar4)
							{
								Function_101(&(Local_12[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_12[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_100("eGRINGO_EndUse: Stop use by request", Local_12[iVar312].f_16);
							Function_99(Local_12[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_12[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_12[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_12[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_12[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_78(&(Local_12[iVar312]), 0);
							}
							else if (Local_12[iVar312].f_44 < 8)
							{
								Function_77(&(Local_12[iVar312]));
								Local_12[iVar312].f_44 = 8;
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
			while (iVar0 < (iLocal_85 - 1))
			{
				if (Function_76(Local_12[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_12[iVar012])))
					{
						Function_117("Quitting due to update end");
						Function_78(&(Local_12[iVar012]), 1);
					}
				}
				if (Function_15(&(Local_12[iVar012]), 0))
				{
					Function_5(&(Local_12[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_85 - 1))
		{
			if (Function_76(Local_12[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_91)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_92))
	{
		Function_117("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_92);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_85 - 1))
	{
		if (Function_76(Local_12[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_12[iVar012].f_16);
			Function_78(&(Local_12[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_12[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_12[iVar012].f_12);
		}
		Function_15(&(Local_12[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_117("QUITS");
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

int Function_3() //Position: 0x464 / 1124
{
	return 2000;
}

int Function_4(int iParam0) //Position: 0x46D / 1133
{
	iParam0 = iParam0;
	return 0;
}

void Function_5(int iParam0) //Position: 0x478 / 1144
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_76(iParam0->f_40, 2))
	{
		Function_99(iParam0->f_16, 0);
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
							bVar1 = Function_8(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_91 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_92))
								{
									Function_117("ManagePlayerQuit: Create quit context");
									if (Function_7(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_92 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_92 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_92))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_77(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_92))
									{
										Function_117("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_92);
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
										Function_77(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_92))
										{
											Function_117("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_92);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_92))
							{
								Function_117("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_92);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_92))
		{
			Function_117("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_92);
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x762 / 1890
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
	if (bVar5 >= 0.2f)
	{
		DECOR_SET_BOOL(bParam0, "StickReset", true);
	}
	else if (bVar5 < 0.75f && DECOR_CHECK_EXIST(bParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(bParam0, "DisconnectTime", &fVar6))
		{
			DECOR_SET_FLOAT(bParam0, "DisconnectTime", bVar1);
		}
		else if ((bVar1 - fVar6) < 0.15f)
		{
			DECOR_REMOVE(bParam0, "StickReset");
			DECOR_REMOVE(bParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(bParam0, "DisconnectTime");
	return 0;
}

bool Function_7(bool bParam0, bool bParam1, int iParam2) //Position: 0x85C / 2140
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

bool Function_8(bool bParam0, int iParam1) //Position: 0x878 / 2168
{
	return Function_9(bParam0, "UseQuit", iParam1);
}

bool Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x88F / 2191
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
			return bLocal_11;
		}
		return bVar1;
	}
	return bLocal_11;
}

float Function_10(bool bParam0) //Position: 0x8D4 / 2260
{
	return Function_11(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(bool bParam0, bool bParam1, int iParam2) //Position: 0x8F1 / 2289
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_12(int iParam0) //Position: 0x907 / 2311
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

bool Function_13(int iParam0) //Position: 0x9CF / 2511
{
	return Function_76(*iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0x9DC / 2524
{
	return Function_76(*iParam0, 1);
}

bool Function_15(var uParam0, int iParam1) //Position: 0x9E9 / 2537
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

bool Function_16(int iParam0) //Position: 0xA31 / 2609
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
	bool bVar13;
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
	float fVar44;
	float fVar45;
	int iVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	var uVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	vector3 vVar57;
	bool bVar60;
	
	bVar12 = Function_75(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_100("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_7(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
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
			bLocal_91 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_74(iParam0->f_12, &fVar24))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar25);
					vVar25.f_4 = (vVar25.y + (fVar24 + 0.1f));
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
						Function_2("Skip to eRewarding", iParam0->f_16);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_72(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_71(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_71(iParam0);
			}
			if (!Function_70(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_91 = true;
			Function_69(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_76(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_68(iParam0->f_12);
			}
			fVar20 = Function_67(iParam0->f_12);
			if (Function_12(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_76(iParam0->f_40, 1))
			{
				Function_62(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_76(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_61(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_61(iParam0 + 40, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, 1, Function_60());
				}
				if (!Function_76(iParam0->f_40, 1024))
				{
					Function_61(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_72(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_76(iParam0->f_40, 1024))
				{
					Function_61(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_76(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_61(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_61(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_76(iParam0->f_40, 32))
			{
				bLocal_91 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_53(iParam0->f_12);
			bLocal_91 = true;
			Function_52(iParam0);
			Function_49(iParam0, Function_51(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_76(iParam0->f_40, 1);
			}
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, bVar33);
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
							Function_47(bVar1, iParam0->f_16);
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
					bVar13 = false;
					uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
					while (bVar13 <= GRINGO_GET_ATTRIBUTE_COUNT(iParam0->f_12))
					{
						uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
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
											Function_47(bVar1, iParam0->f_16);
										}
										iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), iVar11 + 1);
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
				Function_2("KICKED TO DOING START", iParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_38(iParam0, bVar8, &iLocal_90, &cLocal_89);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_61(iParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_37(iParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_76(iParam0->f_40, 16))
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
				if (Function_36(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_35(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_34(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_33(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_34(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_32(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_34(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_31(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_61(iParam0 + 40, 8);
					}
					else
					{
						Function_37(iParam0 + 40, 8);
					}
					if (Function_76(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 1);
					}
				}
				else
				{
					Function_37(iParam0 + 40, 8);
				}
				if (Function_30(iParam0->f_12))
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
				Function_29(iParam0->f_16, iParam0->f_12);
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
				Function_28();
			}
			iParam0->f_44 = 6;
			if (Function_76(iParam0->f_40, 1))
			{
				if (Function_27(iParam0->f_12))
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
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_76(iParam0->f_40, 1));
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
									bVar51 = RAND_INT_RANGE(false, (iVar43 - 1));
									uVar52 = GRINGO_GET_ATTRIBUTE(bVar41, bVar51);
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
			Function_117("nRewarding");
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			Function_20(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_61(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_91 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_7(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_68(iParam0->f_12);
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
			if (Function_76(iParam0->f_40, 1024))
			{
				Function_37(iParam0 + 40, 1024);
				if (!Function_7(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_91 = true;
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_76(iParam0->f_40, 1));
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

void Function_17(bool bParam0, int iParam1) //Position: 0x1B82 / 7042
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1B97 / 7063
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_19() //Position: 0x1BA5 / 7077
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

void Function_20(var uParam0, bool bParam1) //Position: 0x1BD6 / 7126
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
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
		bVar1++;
	}
	return;
}

void Function_21(var uParam0, bool bParam1) //Position: 0x1C4A / 7242
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
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
		bVar1++;
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x1CBC / 7356
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1CCA / 7370
{
	return Function_11(bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1CE0 / 7392
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1CED / 7405
{
	return Function_11(bParam0, "MoveAllowance", 1.5f);
}

bool Function_26(var uParam0, int iParam1) //Position: 0x1D0D / 7437
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return 1;
}

bool Function_27(bool bParam0) //Position: 0x1D1C / 7452
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_28() //Position: 0x1D3B / 7483
{
	return;
}

void Function_29(bool bParam0, int iParam1) //Position: 0x1D41 / 7489
{
	bool bVar0;
	int iVar1[8];
	int iVar10;
	bool bVar11;
	
	iParam1 = iParam1;
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_SMALL_TEXT();
	bVar0 = GET_TARGET_ACTOR();
	SET_LINKED_ANIM_TARGET(bParam0, bVar0);
	if (!IS_ACTOR_LOCAL_PLAYER(bVar0))
	{
		iVar1[0] = GET_WEAPON_IN_HAND(bVar0);
		iVar1[1] = GET_WEAPON_EQUIPPED(bVar0, false);
		iVar1[2] = GET_WEAPON_EQUIPPED(bVar0, true);
		iVar1[3] = GET_WEAPON_EQUIPPED(bVar0, 2);
		iVar1[4] = GET_WEAPON_EQUIPPED(bVar0, 3);
		iVar1[5] = GET_WEAPON_EQUIPPED(bVar0, 4);
		iVar1[6] = GET_WEAPON_EQUIPPED(bVar0, 5);
		iVar1[7] = GET_WEAPON_EQUIPPED(bVar0, 6);
		iVar10 = 0;
		while (iVar10 < 7)
		{
			if (iVar1[iVar10] != 4294967295)
			{
				DELETE_WEAPON_FROM_ACTOR(bVar0, iVar1[iVar10]);
				if (!DECOR_CHECK_EXIST(bVar0, "Hogtie_DontGiveWeapons"))
				{
					if (IS_ACTOR_LOCAL_PLAYER(bParam0))
					{
						SET_WEAPONENUM_LOCKED(iVar1[iVar10], 0);
					}
					if (GET_AMMO_ENUM(iVar1[iVar10]) != 4294967295)
					{
						bVar11 = GET_AMMO_ENUM(iVar1[iVar10]);
						if (!ACTOR_HAS_WEAPON(bParam0, iVar1[iVar10]))
						{
							GIVE_WEAPON_TO_ACTOR(bParam0, iVar1[iVar10], 0.0f, 1, 0);
							if ((_GET_MAX_AMMO_AMOUNT(bParam0, bVar11) - _GET_AMMO_AMOUNT(bParam0, bVar11, 0)) < 5.0f)
							{
								_ADD_AMMO_OF_TYPE(bParam0, bVar11, GET_WEAPON_MAX_AMMO(iVar1[iVar10]), 1, 1);
							}
						}
						else if ((_GET_MAX_AMMO_AMOUNT(bParam0, bVar11) - _GET_AMMO_AMOUNT(bParam0, bVar11, 0)) < 5.0f)
						{
							_ADD_AMMO_OF_TYPE(bParam0, bVar11, GET_WEAPON_MAX_AMMO(iVar1[iVar10]), 1, 1);
						}
					}
				}
			}
			iVar10++;
		}
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
		AI_SET_DISARMED(bVar0, 1);
	}
	LASSO_EVENT(bParam0, 0);
	if (DECOR_CHECK_EXIST(bVar0, "lasso"))
	{
		DECOR_REMOVE(bVar0, "lasso");
	}
	if (!DECOR_CHECK_EXIST(bVar0, "hogtie"))
	{
		DECOR_SET_BOOL(bVar0, "hogtie", true);
	}
	DECOR_SET_BOOL(bVar0, "NoBleedOut", true);
	LASSO_EVENT(bParam0, 1);
	if (!DECOR_CHECK_EXIST(bVar0, "Hogtie_NoCripple") && !IS_ACTOR_CRIPPLED(bVar0, 5))
	{
		SET_CRIPPLE_FLAG(bVar0, RAND_INT_RANGE(true, 2));
	}
	AUDIO_PLAY_PLAYER_HOGTIE_LINE(bVar0);
	if (!DECOR_CHECK_EXIST(bVar0, "CanBeLasso"))
	{
		DECOR_SET_BOOL(bVar0, "CanBeLasso", false);
	}
	return;
}

bool Function_30(int iParam0) //Position: 0x1F6D / 8045
{
	iParam0 = iParam0;
	return 0;
}

bool Function_31(bool bParam0) //Position: 0x1F78 / 8056
{
	return Function_7(bParam0, "OneShotKill", 0);
}

bool Function_32(bool bParam0, int iParam1) //Position: 0x1F92 / 8082
{
	return Function_9(bParam0, "ParentAnimNode", iParam1);
}

bool Function_33(bool bParam0) //Position: 0x1FB0 / 8112
{
	return Function_7(bParam0, "LinkToParentAnim", 0);
}

bool Function_34(bool bParam0) //Position: 0x1FCF / 8143
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_12 - 1))
	{
		if (Local_12[iVar012].f_12 == bParam0)
		{
			return Local_12[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_35(bool bParam0) //Position: 0x2002 / 8194
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_36(bool bParam0) //Position: 0x2021 / 8225
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_37(var uParam0, int iParam1) //Position: 0x203B / 8251
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_38(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x204E / 8270
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	char* cVar11;
	char* cVar12;
	bool bVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	iVar2 = Function_46(uParam0->f_12, &bVar0);
	uVar3 = Function_45(uParam0->f_12, &bVar1);
	bVar4 = Function_44(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_43(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_42(uParam0->f_12, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			uParam0->f_32 = ATTACH_OBJECTS_PHYSICAL(bParam1, uParam0->f_16, bVar6, bVar8, 0.02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(iVar2);
		if (Function_24())
		{
			Function_41();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_40(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_39(), Function_40(uParam0->f_12, &bVar10), false, bVar9);
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
		cVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar4, uParam0->f_16);
		cVar12 = GRINGO_ANIM_GET_ACT_FILENAME(bVar4);
		bVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar4);
		*uParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bParam1, cVar11, cVar12, bVar13);
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			if (Function_7(bVar4, "LinkToUser", 0))
			{
				if (Function_24())
				{
					Function_41();
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

var Function_39() //Position: 0x2336 / 9014
{
	int iVar0;
	
	return iVar0;
}

bool Function_40(bool bParam0, bool bParam1) //Position: 0x233E / 9022
{
	return Function_9(bParam0, "TargetLocator", bParam1);
}

void Function_41() //Position: 0x235B / 9051
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_42(bool bParam0, int iParam1) //Position: 0x236A / 9066
{
	return Function_9(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_43(bool bParam0, int iParam1) //Position: 0x238C / 9100
{
	return Function_9(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_44(bool bParam0) //Position: 0x23B0 / 9136
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_45(bool bParam0, int iParam1) //Position: 0x23CD / 9165
{
	return Function_9(bParam0, "TargetAttachBone", iParam1);
}

bool Function_46(bool bParam0, int iParam1) //Position: 0x23ED / 9197
{
	return Function_9(bParam0, "TargetAttachSlot", iParam1);
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x240D / 9229
{
	bool bVar0;
	bool bVar1;
	char* cVar2;
	char* cVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6;
	
	bVar0 = GRINGO_GET_FIRST_CHILD(2, bParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		cVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar0, bParam1);
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
			cVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar1, cVar2, cVar3, bVar4);
			if (IS_OBJECT_ANIMATOR_VALID(cVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(cVar6, bParam1, GRINGO_GET_PROP_ATTACH_SLOT(bParam0));
			}
		}
	}
	return;
}

bool Function_48(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24BB / 9403
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

void Function_49(int iParam0, float fParam1) //Position: 0x252B / 9515
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, fParam1);
	}
	return;
}

void Function_50(int iParam0, float fParam1) //Position: 0x2541 / 9537
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_61(iParam0, 1);
	Function_37(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_51(bool bParam0) //Position: 0x2562 / 9570
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(bParam0, "RandUseTime", 0.0f));
}

void Function_52(int iParam0) //Position: 0x2582 / 9602
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_53(bool bParam0) //Position: 0x2596 / 9622
{
	bParam0 = bParam0;
	if (iLocal_2 && !iLocal_3)
	{
		iLocal_3 = 1;
		cLocal_0 = CREATE_LAYOUT("hogtieGringo_Layout");
		Function_59(Global_34573);
		*(&Local_4 + 12) = { StackVal, StackVal, Function_59(Global_34573) };
		Function_58(Global_34573);
		Local_4 = { StackVal, StackVal, Function_58(Global_34573) };
		Local_4.f_24 = 0;
		Local_4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_4 };
		bLocal_1 = Function_54(cLocal_0, 0, &Local_4, Global_34573, GET_TARGET_ACTOR(), 1, 0, 1);
		UI_PUSH("nCutscenes");
	}
	return;
}

bool Function_54(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x260C / 9740
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HogTie", 2, 1);
	}
	Function_55(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_55(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2684 / 9860
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_57(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_56(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 2.5f, 1, 1);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
}

void Function_56(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x26F7 / 9975
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 52.68325f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.807802f, 0.543602f, 0.300283f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.970749f, -0.235249f, 0.048004f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_57(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x27DF / 10207
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.17932f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.833933f, 0.532759f, 0.510557f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.69485f, -0.155595f, 0.70212f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	ATTACH_OBJECTS(*uParam0, bParam2, Function_39(), 0.69485f, 0.655595f, 0.70212f, 0.0f, 45.0f, 0.0f, 4294967295);
}

vector3 Function_58(bool bParam0) //Position: 0x28EA / 10474
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_59(bool bParam0) //Position: 0x2911 / 10513
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_60() //Position: 0x2938 / 10552
{
	return 1;
}

void Function_61(var uParam0, int iParam1) //Position: 0x293F / 10559
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_62(bool bParam0, var uParam1, int iParam2) //Position: 0x294E / 10574
{
	float fVar0;
	
	Function_65(bParam0);
	*uParam1 = { StackVal, StackVal, Function_65(bParam0) };
	*iParam2 = Function_64(bParam0);
	fVar0 = Function_63(bParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

bool Function_63(bool bParam0) //Position: 0x298D / 10637
{
	return Function_11(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_64(bool bParam0) //Position: 0x29B8 / 10680
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_65(bool bParam0) //Position: 0x29C3 / 10691
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_66(bParam0))
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

bool Function_66(bool bParam0) //Position: 0x2AB9 / 10937
{
	return Function_7(bParam0, "UsePosActorRelative", 0);
}

bool Function_67(bool bParam0) //Position: 0x2ADB / 10971
{
	return Function_11(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_68(int iParam0) //Position: 0x2B02 / 11010
{
	iParam0 = iParam0;
	return;
}

void Function_69(int iParam0) //Position: 0x2B0C / 11020
{
	iParam0 = iParam0;
	return;
}

bool Function_70(bool bParam0) //Position: 0x2B16 / 11030
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_71(int iParam0) //Position: 0x2B34 / 11060
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, 0.0f);
	}
	return;
}

bool Function_72(bool bParam0, int iParam1) //Position: 0x2B49 / 11081
{
	bool bVar0;
	
	iParam1 = iParam1;
	bVar0 = GET_TARGET_ACTOR();
	if (IS_ACTOR_PLAYER(bVar0))
	{
		AI_IGNORE_ACTOR(bVar0);
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		if (!Function_73())
		{
			AI_IGNORE_ACTOR(bParam0);
		}
	}
	else
	{
		AI_IGNORE_ACTOR(bParam0);
	}
	return 1;
}

bool Function_73() //Position: 0x2B85 / 11141
{
	if (Function_76(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_74(bool bParam0, int iParam1) //Position: 0x2BA0 / 11168
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_75(bool bParam0) //Position: 0x2BCB / 11211
{
	bool bVar0;
	int iVar1;
	bool bVar2;
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
	bVar2 = false;
	uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(bParam0))
	{
		uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
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
		bVar2++;
	}
	return 1;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x2CD0 / 11472
{
	return (uParam0 && iParam1) == 0;
}

void Function_77(int iParam0) //Position: 0x2CDD / 11485
{
	if (Function_76(iParam0->f_40, 16))
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

void Function_78(int iParam0, bool bParam1) //Position: 0x2D50 / 11600
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
	bool bVar14;
	
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
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_76(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_84(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_76(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_76(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_35(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_76(iParam0->f_40, 16))
			{
				Function_77(iParam0);
				Function_37(iParam0 + 40, 16);
			}
			if (Function_76(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 0);
			}
			if (Function_83(iParam0->f_12) && Function_76(iParam0->f_40, 512))
			{
				Function_37(iParam0 + 40, 512);
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
	if (Function_33(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_34(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_82(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_81(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_76(iParam0->f_40, 256))
			{
				Function_37(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_90)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_89));
		iLocal_90 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_36(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_92))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_92);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_52(iParam0);
	Function_71(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_80(iParam0->f_12), iParam0->f_12);
	}
	Function_37(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_79();
		}
	}
	else
	{
		Function_79();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_79() //Position: 0x324E / 12878
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

bool Function_80(bool bParam0) //Position: 0x3285 / 12933
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_81(var uParam0, int iParam1) //Position: 0x32A2 / 12962
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_46(uParam0->f_12, &uVar0);
	Function_45(uParam0->f_12, &uVar1);
	bVar2 = Function_44(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_82(int iParam0) //Position: 0x32DA / 13018
{
	iParam0 = iParam0;
	return;
}

bool Function_83(bool bParam0) //Position: 0x32E4 / 13028
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_84(bool bParam0, int iParam1) //Position: 0x3305 / 13061
{
	bool bVar0;
	
	iParam1 = iParam1;
	bParam0 = bParam0;
	bVar0 = GET_TARGET_ACTOR();
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	SET_ACTOR_INVULNERABILITY(bVar0, 0);
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		Function_85(398, 1, 0, 0);
		HUD_ENABLE(true);
		if (DECOR_CHECK_EXIST(bVar0, "Mission_RemoveWhenHogtied"))
		{
			DECOR_REMOVE(bVar0, "Mission_RemoveWhenHogtied");
		}
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Hogtie_NoCam"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Hogtie_NoCam");
	}
	AI_STOP_IGNORING_ACTORS();
	if (IS_ACTOR_PLAYER(bVar0))
	{
		AI_CLEAR_DONT_HARM_ACTOR(bVar0);
	}
	if (DECOR_CHECK_EXIST(bVar0, "hogtie"))
	{
		DECOR_REMOVE(bVar0, "hogtie");
	}
	MEMORY_CONSIDER_AS_ENEMY(bVar0, bParam0);
	if (IS_OBJECT_VALID(bLocal_1))
	{
		DESTROY_OBJECT(bLocal_1);
	}
	UI_POP("nCutscenes");
	if (IS_LAYOUTREF_VALID(cLocal_0))
	{
		DESTROY_LAYOUT_OBJECTS(bLocal_0);
		DESTROY_LAYOUT(bLocal_0);
	}
	DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	return;
}

int Function_85(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3419 / 13337
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_98(iParam0, TO_FLOAT(bParam1), 1);
	Function_97(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_86(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_86(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3639 / 13881
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(bParam2));
	}
	else
	{
		cVar0 = F2STR(bParam2, 6, 2);
	}
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(bParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((bParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
			if (bParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				bParam2 = (bParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_96(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_95(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_95(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_93(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_90(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_87(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_39(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_87(int iParam0) //Position: 0x3C66 / 15462
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_88(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3C77 / 15479
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_89(char* cParam0, bool bParam1) //Position: 0x3D6C / 15724
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_90(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3D85 / 15749
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_92(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_91(Function_92(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_91(int iParam0, int iParam1) //Position: 0x3DEA / 15850
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_92(int iParam0, bool bParam1) //Position: 0x3DFC / 15868
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_93(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3E0E / 15886
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
		return;
	}
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_94(iParam0) != 19 || Function_94(iParam0) != 17) || Function_94(iParam0) != 10) || Function_94(iParam0) != 9)
	{
		if (fParam1 > fVar1)
		{
			fParam1 = fVar1;
		}
		if (fParam1 < fVar0)
		{
			fParam1 = fVar0;
		}
		if (fParam2 > -(fParam1 - fVar1))
		{
			fParam2 = -(fParam1 - fVar1);
		}
		if (fParam2 < (fVar0 - fParam1))
		{
			fParam2 = (fVar0 - fParam1);
		}
		fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
		fVar3 = (fParam2 / (fVar0 - fVar1));
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_94(int iParam0) //Position: 0x3F3E / 16190
{
	return Global_35278[iParam020].f_48;
}

float Function_95(int iParam0) //Position: 0x3F4D / 16205
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_96(int iParam0) //Position: 0x3F86 / 16262
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_97(int iParam0) //Position: 0x3FC3 / 16323
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_98(int iParam0, float fParam1, bool bParam2) //Position: 0x4173 / 16755
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	iVar0 = iVar1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
		return 0;
	}
	if (bParam2)
	{
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

void Function_99(bool bParam0, bool bParam1) //Position: 0x43B7 / 17335
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
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_92))
			{
				if (bParam1)
				{
					Function_117("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_92);
			}
		}
	}
	if (bParam1)
	{
		Function_117("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_100(bool bParam0, bool bParam1) //Position: 0x44BF / 17599
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_101(int iParam0) //Position: 0x44D5 / 17621
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
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
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_39(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_52(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_61(iParam0 + 40, 2);
	Function_37(iParam0 + 40, 8);
	Function_37(iParam0 + 40, 16);
	Function_37(iParam0 + 40, 64);
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
	SET_GRINGO_OBJECT_REF_ATTR(bVar2, "LastUserObject", iParam0->f_12);
	if (!Function_104(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_61(iParam0 + 40, 32);
			}
			else
			{
				Function_37(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_37(iParam0 + 40, 32);
		}
		if (Function_76(iParam0->f_40, 32))
		{
			Function_61(iParam0 + 40, 128);
		}
		else
		{
			Function_37(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_37(iParam0 + 40, 32);
	}
	if (Function_103(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_61(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_61(iParam0 + 40, 128);
		}
	}
	if (Function_83(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_61(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_102(iParam0->f_16, iVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_102(bool bParam0, int iParam1) //Position: 0x478B / 18315
{
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		iLocal_2 = 1;
		HUD_ENABLE(false);
	}
	SET_ACTOR_CAN_PLAY_GESTURES(GET_TARGET_ACTOR(), false);
	if (!Function_73())
	{
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
		SET_ACTOR_INVULNERABILITY(GET_TARGET_ACTOR(), 1);
	}
	return;
}

bool Function_103(bool bParam0) //Position: 0x47C3 / 18371
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_104(bool bParam0) //Position: 0x47DC / 18396
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_105(bool bParam0, int iParam1) //Position: 0x47F6 / 18422
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_106(iParam1, &bVar0);
	if (!bVar0)
	{
		if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
		{
			if (IS_ACTOR_LOCAL_PLAYER(GRINGO_GET_REQUESTING_ACTOR()))
			{
				cVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	GRINGO_SET_REQUEST_STRING(cVar1);
	return;
}

bool Function_106(var uParam0, int iParam1) //Position: 0x482E / 18478
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_107(int iParam0, int iParam1) //Position: 0x4845 / 18501
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
		if (!Function_76(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_61(iParam0 + 40, 1);
			}
			else
			{
				Function_37(iParam0 + 40, 1);
			}
			if (Function_76(iParam0->f_40, 1))
			{
				Function_100("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_65(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_65(iParam0->f_12) };
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
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_64(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_64(iParam0->f_12));
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

bool Function_108(bool bParam0) //Position: 0x4B0E / 19214
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_109(bool bParam0, bool bParam1) //Position: 0x4B2B / 19243
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
	Function_65(bParam1);
	Var0 = { StackVal, StackVal, Function_65(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_65(bParam1);
	Var0 = { StackVal, StackVal, Function_65(bParam1) };
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

bool Function_110(int iParam0) //Position: 0x4BC7 / 19399
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_111(bool bParam0, int iParam1) //Position: 0x4BE6 / 19430
{
	int iVar0;
	
	iVar0 = GET_TARGET_ACTOR();
	if (iVar0 == bParam0)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(GET_LASSO_TARGET(bParam0)))
	{
		return 0;
	}
	if (GET_LASSO_TARGET(bParam0) != iVar0)
	{
		return 0;
	}
	if (!GET_WEAPON_IN_HAND(bParam0) != 21)
	{
		return 0;
	}
	if (!CAN_ACTOR_HOGTIE_TARGET(bParam0, iVar0))
	{
		return 0;
	}
	iParam1 = iParam1;
	return 1;
}

bool Function_112(int iParam0) //Position: 0x4C34 / 19508
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_113(int iParam0) //Position: 0x4C50 / 19536
{
	iParam0 = iParam0;
	return;
}

void Function_114(bool bParam0, int iParam1) //Position: 0x4C5A / 19546
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_115(&(Local_12[iLocal_8512]), bParam0);
		iLocal_85++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 6)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_114(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_115(int iParam0, int iParam1) //Position: 0x4CBC / 19644
{
	iParam0->f_12 = iParam1;
	Function_37(iParam0 + 40, 1);
	return;
}

void Function_116(int iParam0) //Position: 0x4CD0 / 19664
{
	iParam0 = iParam0;
	return;
}

void Function_117(int iParam0) //Position: 0x4CDA / 19674
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

