//Decompiled with MagicRDR v1.0
//Function Count : 259
//Statics Count : 111
//Natives Count : 334
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	bool bLocal_24 = false;
	vector3 vLocal_25 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_28 = false;
	struct<12> Local_29[6];
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	char* cLocal_106 = NULL;
	int iLocal_107 = 0;
	bool bLocal_108 = false;
	bool bLocal_109 = false;
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
	
	iLocal_20 = 4294967295;
	iLocal_21 = 0;
	iLocal_22 = 0;
	iLocal_23 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_258("STARTS");
	Function_255(uScriptParam_0);
	iLocal_102 = 0;
	Function_253(uScriptParam_0, &iLocal_102);
	while (IS_GRINGO_ACTIVE())
	{
		Function_252(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_103);
		}
		iVar2 = 0;
		bLocal_108 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_102 - 1))
			{
				if (Local_29[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_102;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_108 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_247(&(Local_29[iVar312]), &bVar4))
						{
							Function_245(GRINGO_GET_REQUESTING_ACTOR(), Local_29[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_247(&(Local_29[iVar312]), &bVar4))
						{
							Function_245(GRINGO_GET_REQUESTING_ACTOR(), Local_29[iVar312].f_12);
							if (bVar4)
							{
								Function_241(&(Local_29[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_29[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_240("eGRINGO_EndUse: Stop use by request", Local_29[iVar312].f_16);
							Function_239(Local_29[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_29[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_29[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_29[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_29[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_135(&(Local_29[iVar312]), 0);
							}
							else if (Local_29[iVar312].f_44 < 8)
							{
								Function_134(&(Local_29[iVar312]));
								Local_29[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_258("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_102 - 1))
			{
				if (Function_133(Local_29[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_29[iVar012])))
					{
						Function_258("Quitting due to update end");
						Function_135(&(Local_29[iVar012]), 1);
					}
				}
				if (Function_15(&(Local_29[iVar012]), 0))
				{
					Function_5(&(Local_29[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_102 - 1))
		{
			if (Function_133(Local_29[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_108)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_109))
	{
		Function_258("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_109);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_102 - 1))
	{
		if (Function_133(Local_29[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_29[iVar012].f_16);
			Function_135(&(Local_29[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_29[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_29[iVar012].f_12);
		}
		Function_15(&(Local_29[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_258("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x42B / 1067
{
	iParam0 = iParam0;
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x435 / 1077
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

int Function_3() //Position: 0x470 / 1136
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x477 / 1143
{
	vector3 vVar0;
	
	iParam0 = iParam0;
	if (!iLocal_21)
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar0);
		CLEAR_AREA_OF_GRASS(vVar0, 0.25f);
		iLocal_21 = 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x4A1 / 1185
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_133(iParam0->f_40, 2))
	{
		Function_239(iParam0->f_16, 0);
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
								bLocal_108 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_109))
								{
									Function_258("ManagePlayerQuit: Create quit context");
									if (Function_7(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_109 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_109 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_109))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_134(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_109))
									{
										Function_258("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_109);
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
										Function_134(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_109))
										{
											Function_258("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_109);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_109))
							{
								Function_258("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_109);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_109))
		{
			Function_258("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_109);
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x78B / 1931
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

bool Function_7(bool bParam0, bool bParam1, int iParam2) //Position: 0x885 / 2181
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

bool Function_8(bool bParam0, int iParam1) //Position: 0x8A1 / 2209
{
	return Function_9(bParam0, "UseQuit", iParam1);
}

bool Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x8B8 / 2232
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

float Function_10(bool bParam0) //Position: 0x8FD / 2301
{
	return Function_11(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(bool bParam0, bool bParam1, int iParam2) //Position: 0x91A / 2330
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_12(int iParam0) //Position: 0x930 / 2352
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

bool Function_13(int iParam0) //Position: 0x9F8 / 2552
{
	return Function_133(*iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xA05 / 2565
{
	return Function_133(*iParam0, 1);
}

bool Function_15(var uParam0, int iParam1) //Position: 0xA12 / 2578
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

bool Function_16(int iParam0) //Position: 0xA5A / 2650
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
	bool bVar44;
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
	
	bVar12 = Function_132(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_240("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_7(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_240("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_240("Incapacitation quit", iParam0->f_16);
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
			bLocal_108 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_131(iParam0->f_12, &fVar24))
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
				if (Function_126(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_125(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_125(iParam0);
			}
			if (!Function_124(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_108 = true;
			Function_123(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_133(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_62(iParam0->f_12);
			}
			fVar20 = Function_61(iParam0->f_12);
			if (Function_12(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_133(iParam0->f_40, 1))
			{
				Function_56(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_133(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_55(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_55(iParam0 + 40, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, true, Function_54());
				}
				if (!Function_133(iParam0->f_40, 1024))
				{
					Function_55(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_126(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_133(iParam0->f_40, 1024))
				{
					Function_55(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_133(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_55(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_55(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_133(iParam0->f_40, 32))
			{
				bLocal_108 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_53(iParam0->f_12);
			bLocal_108 = true;
			Function_52(iParam0);
			Function_49(iParam0, Function_51(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_133(iParam0->f_40, 1);
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
					Function_38(iParam0, bVar8, &iLocal_107, &cLocal_106);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_55(iParam0 + 40, 256);
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
				if (Function_133(iParam0->f_40, 16))
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
						Function_55(iParam0 + 40, 8);
					}
					else
					{
						Function_37(iParam0 + 40, 8);
					}
					if (Function_133(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
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
			if (Function_133(iParam0->f_40, 1))
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
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_133(iParam0->f_40, 1));
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
								if (GET_CURRENT_GAME_TIME() - fVar42) <= RAND_FLOAT_RANGE(fVar45, bVar44)
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
			Function_258("nRewarding");
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			Function_20(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_55(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_108 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_7(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_62(iParam0->f_12);
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
			if (Function_133(iParam0->f_40, 1024))
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
			bLocal_108 = true;
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_133(iParam0->f_40, 1));
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

void Function_17(bool bParam0, int iParam1) //Position: 0x1BAB / 7083
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1BC0 / 7104
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_19() //Position: 0x1BCE / 7118
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

void Function_20(var uParam0, bool bParam1) //Position: 0x1BFF / 7167
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
			iVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
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

void Function_21(var uParam0, bool bParam1) //Position: 0x1C73 / 7283
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
			iVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
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

void Function_22(var uParam0, int iParam1) //Position: 0x1CE5 / 7397
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1CF3 / 7411
{
	return Function_11(bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1D09 / 7433
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1D16 / 7446
{
	return Function_11(bParam0, "MoveAllowance", 1.5f);
}

bool Function_26(bool bParam0, int iParam1) //Position: 0x1D36 / 7478
{
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0) && !iLocal_23)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "find_a"))
		{
			iLocal_23 = 1;
			SAY_SINGLE_LINE_CONTEXT(bParam0, 362, false, 1, 1, 0, 4294967295, 4294967295, 0, 1);
		}
	}
	DECOR_SET_INT(bParam0, "iLockerOpen", true);
	return 1;
}

bool Function_27(bool bParam0) //Position: 0x1D8A / 7562
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_28() //Position: 0x1DA9 / 7593
{
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x1DAF / 7599
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_30(int iParam0) //Position: 0x1DBD / 7613
{
	iParam0 = iParam0;
	return 1;
}

bool Function_31(bool bParam0) //Position: 0x1DC8 / 7624
{
	return Function_7(bParam0, "OneShotKill", 0);
}

bool Function_32(bool bParam0, int iParam1) //Position: 0x1DE2 / 7650
{
	return Function_9(bParam0, "ParentAnimNode", iParam1);
}

bool Function_33(bool bParam0) //Position: 0x1E00 / 7680
{
	return Function_7(bParam0, "LinkToParentAnim", 0);
}

bool Function_34(bool bParam0) //Position: 0x1E1F / 7711
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_29 - 1))
	{
		if (Local_29[iVar012].f_12 == bParam0)
		{
			return Local_29[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_35(bool bParam0) //Position: 0x1E52 / 7762
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_36(bool bParam0) //Position: 0x1E71 / 7793
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_37(int iParam0, int iParam1) //Position: 0x1E8B / 7819
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_38(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1E9E / 7838
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

var Function_39() //Position: 0x2186 / 8582
{
	int iVar0;
	
	return iVar0;
}

bool Function_40(bool bParam0, bool bParam1) //Position: 0x218E / 8590
{
	return Function_9(bParam0, "TargetLocator", bParam1);
}

void Function_41() //Position: 0x21AB / 8619
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_42(bool bParam0, int iParam1) //Position: 0x21BA / 8634
{
	return Function_9(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_43(bool bParam0, int iParam1) //Position: 0x21DC / 8668
{
	return Function_9(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_44(bool bParam0) //Position: 0x2200 / 8704
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_45(bool bParam0, int iParam1) //Position: 0x221D / 8733
{
	return Function_9(bParam0, "TargetAttachBone", iParam1);
}

bool Function_46(bool bParam0, int iParam1) //Position: 0x223D / 8765
{
	return Function_9(bParam0, "TargetAttachSlot", iParam1);
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x225D / 8797
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

bool Function_48(bool bParam0, bool bParam1, bool bParam2) //Position: 0x230B / 8971
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

void Function_49(int iParam0, float fParam1) //Position: 0x237B / 9083
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, fParam1);
	}
	return;
}

void Function_50(int iParam0, float fParam1) //Position: 0x2391 / 9105
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_55(iParam0, 1);
	Function_37(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_51(bool bParam0) //Position: 0x23B2 / 9138
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(bParam0, "RandUseTime", 0.0f));
}

void Function_52(int iParam0) //Position: 0x23D2 / 9170
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_53(var uParam0) //Position: 0x23E6 / 9190
{
	uParam0 = uParam0;
	return;
}

int Function_54() //Position: 0x23F0 / 9200
{
	return 1;
}

void Function_55(var uParam0, int iParam1) //Position: 0x23F7 / 9207
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_56(bool bParam0, var uParam1, int iParam2) //Position: 0x2406 / 9222
{
	bool bVar0;
	
	Function_59(bParam0);
	*uParam1 = { StackVal, StackVal, Function_59(bParam0) };
	*iParam2 = Function_58(bParam0);
	bVar0 = Function_57(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_57(bool bParam0) //Position: 0x2445 / 9285
{
	return Function_11(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_58(bool bParam0) //Position: 0x2470 / 9328
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_59(bool bParam0) //Position: 0x247B / 9339
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_60(bParam0))
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

bool Function_60(bool bParam0) //Position: 0x2571 / 9585
{
	return Function_7(bParam0, "UsePosActorRelative", 0);
}

bool Function_61(bool bParam0) //Position: 0x2593 / 9619
{
	return Function_11(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_62(int iParam0) //Position: 0x25BA / 9658
{
	bool bVar0;
	
	iParam0 = iParam0;
	if (!iLocal_22)
	{
		iLocal_22 = 1;
		HUD_ENABLE(false);
		bVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
		if (STRING_CONTAINS_STRING(bVar0, "1"))
		{
			bLocal_24 = Function_115(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "2"))
		{
			bLocal_24 = Function_107(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "3"))
		{
			bLocal_24 = Function_99(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "4"))
		{
			bLocal_24 = Function_91(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "5"))
		{
			bLocal_24 = Function_83(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "6"))
		{
			bLocal_24 = Function_79(Global_30616, 0, Global_34573, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "7"))
		{
			bLocal_24 = Function_74(Global_30616, 0, Global_34573, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "8"))
		{
			bLocal_24 = Function_69(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "9") || STRING_CONTAINS_STRING(bVar0, "final"))
		{
			bLocal_24 = Function_64(Global_30616, 0, 1, 0, 0);
		}
		if (!Function_63(StackVal, StackVal, vLocal_25))
		{
			TELEPORT_ACTOR(Global_12976.f_36, &vLocal_25, 0, 1, 1);
			TASK_STAND_STILL(Global_12976.f_36, -1.0f, 1, 0);
		}
	}
	return;
}

bool Function_63(vector3 vParam0) //Position: 0x2700 / 9984
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x2718 / 10008
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure9", 3, 1);
	}
	Function_65(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_65(int iParam0) //Position: 0x2794 / 10132
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_68(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_67(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_66(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 13.0f, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 100.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0f);
	return;
}

void Function_66(int iParam0) //Position: 0x2802 / 10242
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.13694f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -729.7554f, 228.3827f, 1106.957f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.256301f, 0.645528f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_67(int iParam0) //Position: 0x286C / 10348
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.13694f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -729.5964f, 227.6443f, 1104.041f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.111271f, 2.57844f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_68(int iParam0) //Position: 0x28D6 / 10454
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.13694f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -732.0171f, 228.4102f, 1103.902f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.273105f, -2.208663f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_69(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x2940 / 10560
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure8", 3, 1);
	}
	Function_70(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_70(int iParam0) //Position: 0x29BC / 10684
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_73(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_72(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_71(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 15.0f, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 100.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0f);
	return;
}

void Function_71(int iParam0) //Position: 0x2A2A / 10794
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.39744f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 148.3418f, 129.7081f, 1386.483f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.019448f, 2.110423f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_72(int iParam0) //Position: 0x2A94 / 10900
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.39744f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 145.8083f, 129.1071f, 1386.071f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.051116f, -2.242977f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_73(bool bParam0) //Position: 0x2AFE / 11006
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 43.39744f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 145.015f, 129.1525f, 1384.344f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.1462f, -2.67566f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

bool Function_74(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x2B68 / 11112
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure7", 3, 1);
	}
	Function_75(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_75(var uParam0, int iParam1) //Position: 0x2BE6 / 11238
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_78(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_77(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_76(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 15.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 100.0f, 2);
	return;
}

void Function_76(var uParam0, bool bParam1) //Position: 0x2C4D / 11341
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.627228f, 1.744904f, 0.343633f, -15.41549f, -30.20318f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.115882f, 1.464634f, -0.534769f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_77(var uParam0, bool bParam1) //Position: 0x2CD9 / 11481
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.97427f, 0.803337f, -0.290319f, -7.555651f, -54.71271f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.385619f, 0.707687f, -0.706823f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_78(var uParam0, bool bParam1) //Position: 0x2D65 / 11621
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.697796f, 1.441544f, -0.969471f, -3.739409f, -118.576f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.32587f, 1.365368f, -0.412007f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

bool Function_79(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x2DF1 / 11761
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure6", 2, 1);
	}
	Function_80(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_80(var uParam0, int iParam1) //Position: 0x2E6F / 11887
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_82(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_81(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 16.5f, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 30.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 30.0f, 1, 0f);
	return;
}

void Function_81(int iParam0) //Position: 0x2EC3 / 11971
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 20.00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2745.12f, 56.24567f, 4655.606f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.12123f, 1.216153f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_82(var uParam0, bool bParam1) //Position: 0x2F2D / 12077
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 4.777088f, 0.886692f, -3.096477f, -3.263281f, 113.0842f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.412431f, 0.565052f, -0.885274f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

bool Function_83(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x2FB2 / 12210
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombie_Player_Treasure5", 6, 1);
	}
	Function_84(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_84(int iParam0) //Position: 0x3035 / 12341
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_90(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_89(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_88(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_87(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_86(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_85(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 8.2f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 4, 5, 4.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 100.0f, 3);
	return;
}

void Function_85(int iParam0) //Position: 0x30D0 / 12496
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 28.32921f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1101.02f, 29.13726f, 3933.269f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.977477f, -0.175641f, 0.116976f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_86(int iParam0) //Position: 0x313E / 12606
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 28.32921f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1100.501f, 28.93633f, 3933.117f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.97436f, 0.211705f, -0.076147f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_87(int iParam0) //Position: 0x31AC / 12716
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.98074f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1099.162f, 28.56483f, 3932.347f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.92598f, 0.042338f, -0.375186f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_88(int iParam0) //Position: 0x321A / 12826
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.98074f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1098.957f, 28.55146f, 3931.514f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.86149f, -0.031359f, -0.506803f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_89(int iParam0) //Position: 0x3288 / 12936
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1094.115f, 29.11774f, 3930.706f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.973139f, -0.030732f, -0.228159f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_90(int iParam0) //Position: 0x32F6 / 13046
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1093.379f, 29.10404f, 3928.995f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.935919f, -0.014974f, -0.351896f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3364 / 13156
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombie_Player_Treasure4", 6, 1);
	}
	Function_92(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_92(int iParam0) //Position: 0x33E7 / 13287
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_98(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_97(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_96(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_95(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_94(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_93(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 8.2f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 4, 5, 4.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 100.0f, 3);
	return;
}

void Function_93(int iParam0) //Position: 0x3482 / 13442
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.53638f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1342.108f, 7.699836f, 4492.4f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.886203f, -0.019019f, -0.462901f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_94(int iParam0) //Position: 0x34F0 / 13552
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.53638f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1342.664f, 7.589338f, 4492.063f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.783501f, 0.294704f, -0.547058f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_95(int iParam0) //Position: 0x355E / 13662
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 38.10059f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1340.707f, 6.966434f, 4491.258f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.250413f, 0.010813f, -0.968077f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_96(int iParam0) //Position: 0x35CC / 13772
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 38.10059f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1340.613f, 6.952372f, 4490.751f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.335125f, -0.031967f, -0.941629f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_97(int iParam0) //Position: 0x363A / 13882
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51.55154f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1337.054f, 7.422613f, 4480.699f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.431274f, -0.047727f, -0.900956f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_98(int iParam0) //Position: 0x36A8 / 13992
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51.55154f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1335.285f, 7.220216f, 4479.583f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.51387f, -0.116623f, -0.849905f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_99(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3716 / 14102
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombie_Player_Treasure3", 6, 1);
	}
	Function_100(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_100(int iParam0) //Position: 0x3799 / 14233
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_106(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_105(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_104(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_103(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_102(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_101(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 8.2f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 4, 5, 4.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 100.0f, 3);
	return;
}

void Function_101(int iParam0) //Position: 0x3834 / 14388
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 28.51326f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4338.266f, 25.96084f, 3692.455f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.424391f, -0.104f, 0.899484f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_102(int iParam0) //Position: 0x38A2 / 14498
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 28.51326f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4338.142f, 25.66759f, 3692.715f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.414932f, 0.26149f, 0.871464f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_103(int iParam0) //Position: 0x3910 / 14608
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.55105f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4336.956f, 25.03564f, 3693.511f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.64489f, -0.115531f, 0.75549f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_104(int iParam0) //Position: 0x397E / 14718
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.55105f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4336.974f, 24.99867f, 3693.978f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.57304f, -0.094021f, 0.814115f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_105(int iParam0) //Position: 0x39EC / 14828
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46.96131f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4327.437f, 22.67949f, 3699.924f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.800561f, -0.248686f, 0.545213f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_106(int iParam0) //Position: 0x3A5A / 14938
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46.96131f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4324.13f, 21.36829f, 3702.1f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.792294f, -0.324502f, 0.516691f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_107(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3AC8 / 15048
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombie_Player_Treasure2", 6, 1);
	}
	Function_108(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_108(int iParam0) //Position: 0x3B4B / 15179
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_114(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_113(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_112(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_111(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_110(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_109(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 8.2f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 4, 5, 4.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 100.0f, 3);
	return;
}

void Function_109(int iParam0) //Position: 0x3BE6 / 15334
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 27.67334f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1382.941f, 62.65892f, 3016.868f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.997881f, -0.063864f, -0.01203f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_110(int iParam0) //Position: 0x3C54 / 15444
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 27.67334f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1382.993f, 62.34421f, 3016.847f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.944441f, 0.263302f, -0.19671f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_111(int iParam0) //Position: 0x3CC2 / 15554
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 39.86909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.792f, 61.87089f, 3017.669f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.978989f, -0.037415f, 0.200429f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_112(int iParam0) //Position: 0x3D30 / 15664
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 39.86909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1384.192f, 61.86403f, 3017.537f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.992141f, -0.026819f, 0.122186f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_113(int iParam0) //Position: 0x3D9E / 15774
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51.91422f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1387.379f, 61.7955f, 3022.959f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.883265f, -0.114239f, 0.454739f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_114(int iParam0) //Position: 0x3E0C / 15884
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51.91422f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1389.215f, 61.6151f, 3023.716f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.938436f, -0.141f, 0.31536f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_115(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3E7A / 15994
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombie_Player_Treasure1", 6, 1);
	}
	Function_116(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_116(int iParam0) //Position: 0x3EFD / 16125
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_122(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_121(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_120(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_119(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_118(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_117(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 8.2f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 4, 5, 4.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 100.0f, 3);
	return;
}

void Function_117(int iParam0) //Position: 0x3F98 / 16280
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.44486f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1514.158f, 220.1958f, 1739.122f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.854167f, -0.163918f, 0.493479f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_118(int iParam0) //Position: 0x4007 / 16391
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.44486f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1514.27f, 220.1347f, 1739.409f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.779498f, 0.180602f, 0.599797f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_119(int iParam0) //Position: 0x4075 / 16501
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.44486f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1513.514f, 219.8443f, 1740.609f);
	SET_CAMERASHOT_DIRECTION(*iParam0, 0.186632f, 0.155387f, 0.97006f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_120(int iParam0) //Position: 0x40E3 / 16611
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.44486f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1513.899f, 219.8453f, 1740.643f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.076728f, 0.183699f, 0.97998f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_121(int iParam0) //Position: 0x4151 / 16721
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1520.008f, 219.5641f, 1740.932f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.931211f, -0.130079f, 0.340474f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_122(int iParam0) //Position: 0x41BF / 16831
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1520.975f, 219.4062f, 1740.987f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.852872f, -0.398211f, 0.337686f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_123(int iParam0) //Position: 0x422D / 16941
{
	iParam0 = iParam0;
	return;
}

bool Function_124(bool bParam0) //Position: 0x4237 / 16951
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_125(int iParam0) //Position: 0x4255 / 16981
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, 0.0f);
	}
	return;
}

bool Function_126(bool bParam0, bool bParam1) //Position: 0x426A / 17002
{
	vector3 vVar0;
	bool bVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	
	Function_59(bParam1);
	vVar0 = { StackVal, StackVal, Function_59(bParam1) };
	bVar3 = Function_58(bParam1);
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
		return Function_130(bParam0, bParam1);
	}
	uVar4 = Function_129(bParam1);
	uVar5 = Function_57(bParam1);
	Function_127(bParam1);
	vVar6 = { StackVal, StackVal, Function_127(bParam1) };
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(bParam0, &vVar0, &vVar6, uVar4, 0.2f, 1, bVar3, uVar5, 0, 0);
}

vector3 Function_127(int iParam0) //Position: 0x42F1 / 17137
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Function_128(StackVal, StackVal, iParam0, "UserOffset", vVar0);
	return StackVal, StackVal, Function_128(StackVal, StackVal, iParam0, "UserOffset", vVar0);
}

vector3 Function_128(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x4314 / 17172
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_129(bool bParam0) //Position: 0x4332 / 17202
{
	return Function_11(bParam0, "UseLocationTolerance", 0.0f);
}

int Function_130(bool bParam0, bool bParam1) //Position: 0x4355 / 17237
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
	
	bVar0 = Function_129(bParam1);
	fVar1 = Function_57(bParam1);
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
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &vVar2, bVar0, 0.2f, 1, bVar5, fVar1, 1, 0);
}

bool Function_131(bool bParam0, int iParam1) //Position: 0x4470 / 17520
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_132(bool bParam0) //Position: 0x449B / 17563
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

bool Function_133(var uParam0, int iParam1) //Position: 0x45A0 / 17824
{
	return (uParam0 && iParam1) == 0;
}

void Function_134(int iParam0) //Position: 0x45AD / 17837
{
	if (Function_133(iParam0->f_40, 16))
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

void Function_135(int iParam0, bool bParam1) //Position: 0x4620 / 17952
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
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_133(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_141(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_133(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_133(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_133(iParam0->f_40, 16))
			{
				Function_134(iParam0);
				Function_37(iParam0 + 40, 16);
			}
			if (Function_133(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_140(iParam0->f_12) && Function_133(iParam0->f_40, 512))
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
	Function_139(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_138(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_133(iParam0->f_40, 256))
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
	if (iParam0->f_12 == iLocal_107)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_106));
		iLocal_107 = iVar13;
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_109))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_109);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_52(iParam0);
	Function_125(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_137(iParam0->f_12), iParam0->f_12);
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
			Function_136();
		}
	}
	else
	{
		Function_136();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_136() //Position: 0x4B1E / 19230
{
	if (IS_OBJECT_VALID(bLocal_24))
	{
		DESTROY_OBJECT(bLocal_24);
	}
	return;
}

bool Function_137(bool bParam0) //Position: 0x4B31 / 19249
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_138(var uParam0, int iParam1) //Position: 0x4B4E / 19278
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

void Function_139(int iParam0) //Position: 0x4B86 / 19334
{
	iParam0 = iParam0;
	return;
}

bool Function_140(bool bParam0) //Position: 0x4B90 / 19344
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_141(bool bParam0, int iParam1) //Position: 0x4BB1 / 19377
{
	int iVar0;
	
	iParam1 = iParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_REMOVE(bParam0, "iLockerOpen");
	}
	HUD_ENABLE(true);
	iVar0 = Function_238(3);
	switch (iVar0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			Function_142(3, &Global_49310[322] + 8);
			break;
	}
	if (IS_VOLUME_VALID(bLocal_28))
	{
		DESTROY_VOLUME(bLocal_28);
	}
	iLocal_23 = 0;
	AI_STOP_IGNORING_ACTORS();
	return;
}

void Function_142(bool bParam0, int iParam1) //Position: 0x4C28 / 19496
{
	switch (*iParam1)
	{
		case 0x00000000:
			Function_236(bParam0);
			Function_232(bParam0, iParam1, 1, 0, 0, 1);
			break;
		
		case 0x00000001:
			Function_236(bParam0);
			Function_232(bParam0, iParam1, 2, 0, 0, 1);
			break;
		
		case 0x00000002:
			Function_236(bParam0);
			Function_232(bParam0, iParam1, 3, 0, 0, 1);
			break;
		
		case 0x00000003:
			Function_236(bParam0);
			Function_232(bParam0, iParam1, 4, 0, 0, 1);
			break;
		
		case 0x00000004:
			Function_231(bParam0);
			Function_143(bParam0, iParam1, 0);
			break;
	}
	return;
}

void Function_143(bool bParam0, var uParam1, bool bParam2) //Position: 0x4CB0 / 19632
{
	Function_230(bParam0, 1);
	*uParam1 = 10;
	Function_225(bParam0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_04_128";
	}
	Function_221(bParam0, 11);
	Function_219(bParam0, 10, 1.0f, 1);
	Function_146();
	Function_145();
	Function_144(bParam0, 4);
	return;
}

void Function_144(int iParam0, int iParam1) //Position: 0x4D02 / 19714
{
	if (Global_34165.f_44)
	{
		Function_37(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_37(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_145() //Position: 0x4D2F / 19759
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(94))
	{
		if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
		{
			AWARD_ACHIEVEMENT(94);
		}
	}
	return;
}

void Function_146() //Position: 0x4D76 / 19830
{
	if (!Function_215(4, 0))
	{
		Function_198(19, 0, 0, 0, 0);
	}
	else
	{
		Function_198(22, 0, 0, 0, 0);
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
	{
		if (!Function_215(4, 0))
		{
			Function_147(19, 0, 1);
		}
		else
		{
			Function_147(22, 0, 1);
		}
	}
	return;
}

void Function_147(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4DE6 / 19942
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_197(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_196(bParam0))
	{
		if (!Function_194(bParam0))
		{
			Function_198(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_193(457, 1, 0, 0);
		Function_192(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_191(0, 0, 1, 1))
			{
				Function_151(1);
				Function_149(1, 0);
			}
			else
			{
				Function_148();
			}
		}
	}
	return;
}

void Function_148() //Position: 0x4F85 / 20357
{
	return;
}

void Function_149(int iParam0, int iParam1) //Position: 0x4F8B / 20363
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_150())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_150() //Position: 0x4FCD / 20429
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_151(bool bParam0) //Position: 0x4FD6 / 20438
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_181();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_152();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_37(&Global_63095, 1);
		Function_37(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_152() //Position: 0x5027 / 20519
{
	Function_179();
	Function_178();
	Function_178();
	Function_177();
	Function_177();
	Function_176();
	Function_176();
	Function_160(0);
	Function_160(0);
	if (!Function_150())
	{
		Function_157();
		Function_156();
		Function_155();
		Function_154();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_153();
	return;
}

void Function_153() //Position: 0x5079 / 20601
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_154() //Position: 0x517F / 20863
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_155() //Position: 0x51B2 / 20914
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_156() //Position: 0x5340 / 21312
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_157() //Position: 0x54F4 / 21748
{
	Function_158(&Global_28260, 1, 0);
	return;
}

void Function_158(int iParam0, bool bParam1, var uParam2) //Position: 0x5502 / 21762
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_159();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_159() //Position: 0x56F3 / 22259
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_160(int iParam0) //Position: 0x5708 / 22280
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_175((50 + iVar4)) + Function_175((183 + iVar4))) + Function_175((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_161(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_161(int iParam0, bool bParam1, bool bParam2) //Position: 0x57AE / 22446
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_174(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_173(iParam0);
	if (bParam2)
	{
		Function_162(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_162(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x5A49 / 23113
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_172(390))), 32);
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
					bVar19 = (Function_171(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_171(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_169(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_166(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_163(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_39(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_163(int iParam0) //Position: 0x6076 / 24694
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_164(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x6087 / 24711
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_165(char* cParam0, bool bParam1) //Position: 0x617C / 24956
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_166(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x6195 / 24981
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_168(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_167(Function_168(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_167(int iParam0, int iParam1) //Position: 0x61FA / 25082
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_168(int iParam0, bool bParam1) //Position: 0x620C / 25100
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_169(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x621E / 25118
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
	if (((Function_170(iParam0) != 19 || Function_170(iParam0) != 17) || Function_170(iParam0) != 10) || Function_170(iParam0) != 9)
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

int Function_170(int iParam0) //Position: 0x634E / 25422
{
	return Global_35278[iParam020].f_48;
}

float Function_171(int iParam0) //Position: 0x635D / 25437
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_172(int iParam0) //Position: 0x6396 / 25494
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_173(int iParam0) //Position: 0x63D3 / 25555
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

int Function_174(int iParam0, bool bParam1, bool bParam2) //Position: 0x656D / 25965
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
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = bParam1;
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

int Function_175(bool bParam0) //Position: 0x67B1 / 26545
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_176() //Position: 0x67F2 / 26610
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_175((50 + iVar3) + 15) + Function_175((183 + iVar3) + 15)) + Function_175((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_161(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_177() //Position: 0x687B / 26747
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_175((50 + iVar3) + 8) + Function_175((183 + iVar3) + 8)) + Function_175((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_161(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_178() //Position: 0x6912 / 26898
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_175((50 + iVar3)) + Function_175((183 + iVar3))) + Function_175((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_161(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_179() //Position: 0x6991 / 27025
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_180(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_161(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x69CA / 27082
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_174(iParam0, bParam1, 1);
	Function_173(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_162(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_181() //Position: 0x6BD4 / 27604
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_190())
	{
		Function_187(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_187(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_182(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_182(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_63(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

vector3 Function_182(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6C8F / 27791
{
	int iVar0;
	
	iVar0 = Function_185(uParam2, uParam3);
	if (Function_184(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_55(&Global_63095, 1);
			Function_37(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_55(&Global_63095, 2);
			Function_37(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_55(&Global_63095, 2);
		Function_37(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_183();
	return StackVal, StackVal, Function_183();
}

vector3 Function_183() //Position: 0x6D76 / 28022
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_184(int iParam0) //Position: 0x6D7F / 28031
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_185(bool bParam0, bool bParam1) //Position: 0x6D95 / 28053
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_186(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_186(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_184(bVar0) && !bParam1)
	{
		bVar0 = Function_185(bParam0, 1);
	}
	return bVar0;
}

float Function_186(vector3 vParam0, vector3 vParam3) //Position: 0x6E5C / 28252
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_187(var uParam0, int iParam1) //Position: 0x6E79 / 28281
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_189(Global_34573, &vVar4);
	if (!Function_188(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_188(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_55(&Global_63095, 2);
	Function_37(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_63(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_188(int iParam0) //Position: 0x769E / 30366
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_133(uVar0, 0x1000000) || Function_133(uVar0, 0x2000000)) || Function_133(uVar0, 0x4000000)) || !Function_133(uVar0, 0x10000000));
}

void Function_189(bool bParam0, bool bParam1) //Position: 0x76D9 / 30425
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_190() //Position: 0x76E6 / 30438
{
	if (Function_133(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_191(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7701 / 30465
{
	iParam0 = iParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && iParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_192(bool bParam0, int iParam1) //Position: 0x77A5 / 30629
{
	if (!Function_197(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_193(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x77FA / 30714
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
	Function_174(iParam0, TO_FLOAT(bParam1), 1);
	Function_173(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_162(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

bool Function_194(int iParam0) //Position: 0x7A1A / 31258
{
	if (!Function_197(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_195(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_195(int iParam0, int iParam1) //Position: 0x7A6C / 31340
{
	int iVar0;
	
	if (!Function_197(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_196(int iParam0) //Position: 0x7A99 / 31385
{
	if (!Function_197(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_195(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_197(int iParam0) //Position: 0x7AEA / 31466
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_198(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7B00 / 31488
{
	char* cVar0[32];
	
	if (!Function_197(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_214(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_194(bParam0))
	{
		Function_193(456, 1, 0, 0);
		Function_192(bParam0, 2);
		if (bParam2)
		{
			if (!Function_191(0, 0, 1, 1))
			{
				Function_151(1);
				Function_149(1, 5);
			}
			else
			{
				Function_148();
			}
		}
		Function_208(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_207() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_207() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_205(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_190())
		{
			if (!Function_204(Global_76846, 2))
			{
				Function_199(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_199(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x7C55 / 31829
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_201(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_200(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_200(char* cParam0, int iParam1) //Position: 0x7CC1 / 31937
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_201(bool bParam0, var uParam1, int iParam2) //Position: 0x7CF8 / 31992
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_203(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_202(uVar0))
		{
			case 0x00000002:
				if (!Function_204(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_202(char* cParam0) //Position: 0x7D70 / 32112
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_203(int iParam0) //Position: 0x7E11 / 32273
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_37(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

bool Function_204(int iParam0, int iParam1) //Position: 0x7E4E / 32334
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_205(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7E61 / 32353
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_206(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_206(int iParam0) //Position: 0x7EDC / 32476
{
	char* cVar0[16];
	
	if (!Function_190())
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

bool Function_207() //Position: 0x7F1B / 32539
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_208(bool bParam0) //Position: 0x7F48 / 32584
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_212(bParam0, Function_213(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_212(bParam0, Function_213(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_211(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_210(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_209(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_209(int iParam0) //Position: 0x80F9 / 33017
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_197(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_210(bool bParam0, bool bParam1) //Position: 0x8150 / 33104
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_211(int iParam0) //Position: 0x8175 / 33141
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_197(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_212(bool bParam0, int iParam1) //Position: 0x81CB / 33227
{
	int iVar0;
	
	if (!Function_197(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_213(bool bParam0) //Position: 0x822A / 33322
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_214(int iParam0) //Position: 0x8236 / 33334
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_215(int iParam0, bool bParam1) //Position: 0x8252 / 33362
{
	int iVar0;
	
	iVar0 = Function_217(iParam0);
	if (!Function_216(iVar0))
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

bool Function_216(int iParam0) //Position: 0x828F / 33423
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_217(int iParam0) //Position: 0x82A6 / 33446
{
	if (!Function_218(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_218(int iParam0) //Position: 0x82C0 / 33472
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_219(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x82D6 / 33494
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam3)
	{
		if (Function_150() || Global_34165.f_44)
		{
			(*&Global_49399[bParam022] + 36)[bParam1] = bParam2;
		}
		else
		{
			(*&Global_49310[bParam022] + 36)[bParam1] = bParam2;
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_220();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

var Function_220() //Position: 0x838D / 33677
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

int Function_221(bool bParam0, int iParam1) //Position: 0x83DA / 33754
{
	int iVar0;
	
	if (Function_150() || Global_34165.f_44)
	{
		if (bParam0 >= Global_49399)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (bParam0 >= Global_49310)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	iVar0 = Function_222();
	Global_63000[iVar08] = bParam0;
	Global_63000[iVar08].f_4 = iParam1;
	Global_63082 = Function_150();
	return 1;
}

int Function_222() //Position: 0x8489 / 33929
{
	int iVar0;
	
	iVar0 = (Global_63000 - 1);
	while (iVar0 >= 0)
	{
		if (Global_63000[iVar08] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_223();
	return 0;
}

void Function_223() //Position: 0x84B7 / 33975
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_63000 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_63000[iVar08] = Global_63000[iVar18];
		Global_63000[iVar08].f_4 = StackVal;
		*(&Global_63000[iVar08] + 8) = { StackVal, StackVal, StackVal, *(&Global_63000[iVar18] + 8) };
		*(&Global_63000[iVar08] + 24) = { StackVal, *(&Global_63000[iVar18] + 24) };
		Function_224(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_224(int iParam0) //Position: 0x852E / 34094
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_225(int iParam0) //Position: 0x856A / 34154
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_229(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_228(iParam0) };
	if (Function_150() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_227(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[iParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_226(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_229(iParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_229(iParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_229(iParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_226(int iParam0) //Position: 0x85DD / 34269
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_227(iParam0) };
	if (Global_34165.f_44 || Function_150())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_227(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_227(int iParam0) //Position: 0x863A / 34362
{
	char* cVar0[24];
	
	if (Function_150() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_228(int iParam0) //Position: 0x86AC / 34476
{
	char* cVar0[24];
	
	if (Function_150() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_229(int iParam0) //Position: 0x8718 / 34584
{
	if (Function_150() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

void Function_230(bool bParam0, bool bParam1) //Position: 0x8740 / 34624
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_220();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			if (Function_150() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (Function_150() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		if (Function_150() || Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
		}
	}
	return;
}

void Function_231(bool bParam0) //Position: 0x8900 / 35072
{
	Function_236(bParam0);
	return;
}

void Function_232(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x890B / 35083
{
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_04_128";
	}
	*uParam1 = iParam2;
	if (bParam5)
	{
		Function_230(bParam0, 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_229(bParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_229(bParam0), (TO_FLOAT(Global_49310[bParam022].f_28) / TO_FLOAT(bParam3)), false, 0);
	}
	Function_234(bParam0, 0);
	Function_221(bParam0, *uParam1);
	Function_219(bParam0, 10, 1.0f, 1);
	Function_233(bParam0, 4);
}

void Function_233(int iParam0, int iParam1) //Position: 0x898A / 35210
{
	if (Function_150() || Global_34165.f_44)
	{
		Function_55(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_55(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_234(int iParam0, bool bParam1) //Position: 0x89BB / 35259
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_229(iParam0));
	if ((bParam1 && Function_235(iParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_229(iParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_228(iParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_227(iParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_226(iParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_229(iParam0), &Var6, 0, 2, Function_235(iParam0, 4));
		if (iParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_229(iParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_233(iParam0, 4);
		}
	}
	return;
}

bool Function_235(int iParam0, int iParam1) //Position: 0x8A42 / 35394
{
	if (Function_150() || Global_34165.f_44)
	{
		return Function_133(Global_49399[iParam022].f_32, iParam1);
	}
	return Function_133(Global_49310[iParam022].f_32, iParam1);
}

void Function_236(bool bParam0) //Position: 0x8A74 / 35444
{
	if (Function_150() || Global_34165.f_44)
	{
		Function_237(bParam0, 0, Global_49399[bParam022].f_28);
	}
	else
	{
		Function_237(bParam0, 0, Global_49310[bParam022].f_28);
	}
	return;
}

int Function_237(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8AA9 / 35497
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_220();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

int Function_238(int iParam0) //Position: 0x8B1D / 35613
{
	if (Function_150() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_239(bool bParam0, bool bParam1) //Position: 0x8B45 / 35653
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_258("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_258("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_109))
			{
				if (bParam1)
				{
					Function_258("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_109);
			}
		}
	}
	if (bParam1)
	{
		Function_258("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_240(bool bParam0, bool bParam1) //Position: 0x8C4D / 35917
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_241(int iParam0) //Position: 0x8C63 / 35939
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
	Function_55(iParam0 + 40, 2);
	Function_37(iParam0 + 40, 8);
	Function_37(iParam0 + 40, 16);
	Function_37(iParam0 + 40, 64);
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
	if (!Function_244(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_55(iParam0 + 40, 32);
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
		if (Function_133(iParam0->f_40, 32))
		{
			Function_55(iParam0 + 40, 128);
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
	if (Function_243(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_55(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_55(iParam0 + 40, 128);
		}
	}
	if (Function_140(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_55(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_242(iParam0->f_16, bVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_242(bool bParam0, int iParam1) //Position: 0x8F19 / 36633
{
	vector3 vVar0;
	
	iParam1 = iParam1;
	bParam0 = bParam0;
	iLocal_23 = 0;
	AI_IGNORE_ACTOR(bParam0);
	if (!Global_3365 && IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
	}
	GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar0);
	bLocal_28 = CREATE_VOLUME_IN_LAYOUT(Global_34573, Function_39(), 3, vVar0, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_28);
	vLocal_25 = { 0.0f, 0.0f, 0.0f };
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (!IS_ACTOR_VALID(GET_RIDER(Global_12976.f_36)))
		{
			if (IS_ACTOR_IN_VOLUME(Global_12976.f_36, bLocal_28))
			{
				bLocal_19 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
				if (STRING_CONTAINS_STRING(bLocal_19, "1"))
				{
					vLocal_25 = { -1894.371f, 26.573f, 2245.176f };
				}
				else if (STRING_CONTAINS_STRING(bLocal_19, "4"))
				{
					vLocal_25 = { -2811.85f, 14.399f, 3981.293f };
				}
				else if (STRING_CONTAINS_STRING(bLocal_19, "6"))
				{
					vLocal_25 = { -2756.306f, 54.087f, 4650.601f };
				}
				else if (STRING_CONTAINS_STRING(bLocal_19, "7"))
				{
					vLocal_25 = { -1523.101f, 61.918f, 3706.569f };
				}
				else if (STRING_CONTAINS_STRING(bLocal_19, "8"))
				{
					vLocal_25 = { 144.928f, 129.034f, 1397.844f };
				}
			}
		}
	}
	return;
}

bool Function_243(bool bParam0) //Position: 0x903E / 36926
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_244(bool bParam0) //Position: 0x9057 / 36951
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_245(bool bParam0, int iParam1) //Position: 0x9071 / 36977
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_246(iParam1, &bVar0);
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

bool Function_246(var uParam0, int iParam1) //Position: 0x90A9 / 37033
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_247(int iParam0, int iParam1) //Position: 0x90C0 / 37056
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
				if (!Function_214(6))
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
		if (!Function_251(bVar1, iParam0->f_12))
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
		if (!Function_133(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_55(iParam0 + 40, 1);
			}
			else
			{
				Function_37(iParam0 + 40, 1);
			}
			if (Function_133(iParam0->f_40, 1))
			{
				Function_240("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_59(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_59(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_250(iParam0->f_12);
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
				if (!Function_249(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_248(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_58(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_58(iParam0->f_12));
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

bool Function_248(bool bParam0) //Position: 0x9389 / 37769
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_249(bool bParam0, bool bParam1) //Position: 0x93A6 / 37798
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
	Function_59(bParam1);
	Var0 = { StackVal, StackVal, Function_59(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_59(bParam1);
	Var0 = { StackVal, StackVal, Function_59(bParam1) };
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

bool Function_250(int iParam0) //Position: 0x9442 / 37954
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_251(var uParam0, int iParam1) //Position: 0x9461 / 37985
{
	char* cVar0[16];
	
	iParam1 = iParam1;
	uParam0 = uParam0;
	if (!Global_3365)
	{
		return 1;
	}
	strcpy(&cVar0, "hunting_", 16);
	if (Function_238(3) == 9)
	{
		strcpy(&cVar0, "hunting_fin", 16);
	}
	else if (Function_238(3) >= 9)
	{
		strcpy(&cVar0, "AllDone", 16);
	}
	else if (GET_ITEM_COUNT(SS_GET_STRING(1, 11), Global_34573) >= 0)
	{
		stradd(&cVar0, INT_TO_STRING(Function_238(3) + 1), 16);
	}
	else
	{
		stradd(&cVar0, "XX", 16);
	}
	bLocal_19 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if (!STRING_CONTAINS_STRING(bLocal_19, &cVar0))
	{
		return 0;
	}
	return 1;
}

void Function_252(int iParam0) //Position: 0x94FE / 38142
{
	iParam0 = iParam0;
	return;
}

void Function_253(bool bParam0, int iParam1) //Position: 0x9508 / 38152
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_254(&(Local_29[iLocal_10212]), bParam0);
		iLocal_102++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 6)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_253(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0x956A / 38250
{
	iParam0->f_12 = iParam1;
	Function_37(iParam0 + 40, 1);
	return;
}

void Function_255(var uParam0) //Position: 0x957E / 38270
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
	uParam0 = uParam0;
	bVar0 = "default";
	if (iLocal_20 == 4294967295)
	{
		bVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
		STRING_CLEAR_TOKENIZER();
		SET_OWNERSHIP_STRAGGLER(bVar1, "_");
		bVar0 = STRING_GET_TOKEN(2);
		iLocal_20 = STRING_TO_INT(STRING_GET_TOKEN(2));
	}
	if (iLocal_20 <= Function_175(357))
	{
		if (Global_3365)
		{
			if (Function_175(357) == 8)
			{
				if (!STRINGS_ARE_EQUAL(bVar0, "final"))
				{
					if (!Function_150() || Function_256())
					{
						DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
					}
				}
			}
			else if (!Function_150() || Function_256())
			{
				DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	else
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &uVar2);
		bVar5 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/stand_open_chest", &uVar2, 1.0f, 0);
		if (IS_GRINGO_VALID(bVar5))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bVar5));
		}
	}
	return;
}

int Function_256() //Position: 0x9670 / 38512
{
	if (Function_150())
	{
		return (Function_257() != 1 || Function_257() != 0);
	}
	return 0;
}

int Function_257() //Position: 0x9689 / 38537
{
	return Global_79349.f_16;
}

void Function_258(int iParam0) //Position: 0x9695 / 38549
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

