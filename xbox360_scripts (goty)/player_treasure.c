//Decompiled with MagicRDR v1.0
//Function Count : 170
//Statics Count : 93
//Natives Count : 268
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	vector3 vLocal_7 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_10 = false;
	struct<12> Local_11[6];
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	char* cLocal_88 = NULL;
	int iLocal_89 = 0;
	bool bLocal_90 = false;
	bool bLocal_91 = false;
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
	
	iLocal_2 = 4294967295;
	iLocal_3 = 0;
	iLocal_4 = 0;
	iLocal_5 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_169("STARTS");
	Function_165(uScriptParam_0);
	iLocal_84 = 0;
	Function_163(uScriptParam_0, &iLocal_84);
	while (IS_GRINGO_ACTIVE())
	{
		Function_162(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_85);
		}
		iVar2 = 0;
		bLocal_90 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_84 - 1))
			{
				if (Local_11[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_84;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_90 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_156(&(Local_11[iVar312]), &bVar4))
						{
							Function_154(GRINGO_GET_REQUESTING_ACTOR(), Local_11[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_156(&(Local_11[iVar312]), &bVar4))
						{
							Function_154(GRINGO_GET_REQUESTING_ACTOR(), Local_11[iVar312].f_12);
							if (bVar4)
							{
								Function_150(&(Local_11[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_11[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_149("eGRINGO_EndUse: Stop use by request", Local_11[iVar312].f_16);
							Function_148(Local_11[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_11[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_11[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_11[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_11[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_120(&(Local_11[iVar312]), 0);
							}
							else if (Local_11[iVar312].f_44 < 8)
							{
								Function_119(&(Local_11[iVar312]));
								Local_11[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_169("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_84 - 1))
			{
				if (Function_118(Local_11[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_11[iVar012])))
					{
						Function_169("Quitting due to update end");
						Function_120(&(Local_11[iVar012]), 1);
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
		while (iVar0 < (iLocal_84 - 1))
		{
			if (Function_118(Local_11[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_90)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_91))
	{
		Function_169("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_91);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_84 - 1))
	{
		if (Function_118(Local_11[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_11[iVar012].f_16);
			Function_120(&(Local_11[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_11[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_11[iVar012].f_12);
		}
		Function_15(&(Local_11[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_169("QUITS");
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
	if (!iLocal_3)
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar0);
		CLEAR_AREA_OF_GRASS(vVar0, 0.25f);
		iLocal_3 = 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x4A1 / 1185
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_118(iParam0->f_40, 2))
	{
		Function_148(iParam0->f_16, 0);
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
								bLocal_90 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_91))
								{
									Function_169("ManagePlayerQuit: Create quit context");
									if (Function_7(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_91 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_91 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_91))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_119(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_91))
									{
										Function_169("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_91);
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
										Function_119(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_91))
										{
											Function_169("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_91);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_91))
							{
								Function_169("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_91);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_91))
		{
			Function_169("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_91);
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
	return Function_118(*iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xA05 / 2565
{
	return Function_118(*iParam0, 1);
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
	
	bVar12 = Function_117(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_149("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_7(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_149("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_149("Incapacitation quit", iParam0->f_16);
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
			bLocal_90 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_116(iParam0->f_12, &fVar24))
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
				if (Function_111(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_110(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_110(iParam0);
			}
			if (!Function_109(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_90 = true;
			Function_108(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_118(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_62(iParam0->f_12);
			}
			fVar20 = Function_61(iParam0->f_12);
			if (Function_12(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_118(iParam0->f_40, 1))
			{
				Function_56(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_118(iParam0->f_40, 16))
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
				if (!Function_118(iParam0->f_40, 1024))
				{
					Function_55(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_111(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_118(iParam0->f_40, 1024))
				{
					Function_55(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_118(iParam0->f_40, 16))
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
			if (Function_118(iParam0->f_40, 32))
			{
				bLocal_90 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_53(iParam0->f_12);
			bLocal_90 = true;
			Function_52(iParam0);
			Function_49(iParam0, Function_51(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_118(iParam0->f_40, 1);
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
					Function_38(iParam0, bVar8, &iLocal_89, &cLocal_88);
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
				if (Function_118(iParam0->f_40, 16))
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
					if (Function_118(iParam0->f_40, 8))
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
			if (Function_118(iParam0->f_40, 1))
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
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_118(iParam0->f_40, 1));
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
			Function_169("nRewarding");
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			Function_20(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_55(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_90 = true;
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
			if (Function_118(iParam0->f_40, 1024))
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
			bLocal_90 = true;
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_118(iParam0->f_40, 1));
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

void Function_21(var uParam0, bool bParam1) //Position: 0x1C73 / 7283
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
	if (IS_ACTOR_LOCAL_PLAYER(bParam0) && !iLocal_5)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "find_a"))
		{
			iLocal_5 = 1;
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

bool Function_35(bool bParam0) //Position: 0x1E52 / 7762
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_36(bool bParam0) //Position: 0x1E71 / 7793
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_37(var uParam0, int iParam1) //Position: 0x1E8B / 7819
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
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
	if (!iLocal_4)
	{
		iLocal_4 = 1;
		HUD_ENABLE(false);
		bVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
		if (STRING_CONTAINS_STRING(bVar0, "1"))
		{
			bLocal_6 = Function_103(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "2"))
		{
			bLocal_6 = Function_98(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "3"))
		{
			bLocal_6 = Function_93(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "4"))
		{
			bLocal_6 = Function_88(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "5"))
		{
			bLocal_6 = Function_83(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "6"))
		{
			bLocal_6 = Function_79(Global_30616, 0, Global_34573, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "7"))
		{
			bLocal_6 = Function_74(Global_30616, 0, Global_34573, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "8"))
		{
			bLocal_6 = Function_69(Global_30616, 0, 1, 0, 0);
		}
		else if (STRING_CONTAINS_STRING(bVar0, "9") || STRING_CONTAINS_STRING(bVar0, "final"))
		{
			bLocal_6 = Function_64(Global_30616, 0, 1, 0, 0);
		}
		if (!Function_63(StackVal, StackVal, vLocal_7))
		{
			TELEPORT_ACTOR(Global_12976.f_36, &vLocal_7, 0, 1, 1);
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
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure5", 3, 1);
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

void Function_84(int iParam0) //Position: 0x302E / 12334
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_87(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_86(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_85(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 15.0f, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 100.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0f);
	return;
}

void Function_85(int iParam0) //Position: 0x309C / 12444
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.15521f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3861.104f, 16.49298f, 4317.42f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.011631f, -0.887312f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_86(int iParam0) //Position: 0x3106 / 12550
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.15521f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3858.692f, 15.78359f, 4318.053f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.024083f, 1.08069f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_87(int iParam0) //Position: 0x3170 / 12656
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.15521f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3861.173f, 16.42888f, 4320.16f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.085023f, -0.637618f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_88(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x31DA / 12762
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure4", 3, 1);
	}
	Function_89(&bVar0);
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

void Function_89(int iParam0) //Position: 0x3256 / 12886
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_92(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_91(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_90(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.6f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 15.0f, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 100.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0f);
	return;
}

void Function_90(int iParam0) //Position: 0x32C4 / 12996
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.06049f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2813.56f, 14.75953f, 3973.934f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.152252f, 1.272557f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_91(int iParam0) //Position: 0x332E / 13102
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.06049f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2814.256f, 13.77526f, 3971.298f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.002291f, 3.039589f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_92(int iParam0) //Position: 0x3398 / 13208
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.06049f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2814.903f, 14.19791f, 3971.825f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.228709f, -2.955492f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3402 / 13314
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure3", 3, 1);
	}
	Function_94(&bVar0);
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

void Function_94(int iParam0) //Position: 0x347E / 13438
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_97(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_96(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_95(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.6f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 15.0f, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 100.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0f);
	return;
}

void Function_95(int iParam0) //Position: 0x34EC / 13548
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54.53894f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4089.414f, 35.43062f, 2932.434f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.031501f, 1.224209f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_96(int iParam0) //Position: 0x3556 / 13654
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54.53894f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4091.456f, 34.53726f, 2930.675f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.046482f, -2.352416f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_97(int iParam0) //Position: 0x35C0 / 13760
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54.53894f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4092.104f, 36.74055f, 2931.914f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.737038f, -1.229879f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_98(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x362A / 13866
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure2", 3, 1);
	}
	Function_99(&bVar0);
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

void Function_99(int iParam0) //Position: 0x36A6 / 13990
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_102(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_101(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_100(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.6f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 14.97f, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 100.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0f);
	return;
}

void Function_100(int iParam0) //Position: 0x3714 / 14100
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.06838f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1990.93f, 33.72362f, 3616.541f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.06504f, -2.277584f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_101(int iParam0) //Position: 0x377E / 14206
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.06838f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1991.633f, 32.97052f, 3616.964f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.011604f, -2.146168f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_102(int iParam0) //Position: 0x37E8 / 14312
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.06838f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1992.837f, 34.112f, 3616.104f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.244737f, -2.124207f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_103(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3852 / 14418
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Player_Treasure1", 3, 1);
	}
	Function_104(&bVar0);
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

void Function_104(int iParam0) //Position: 0x38CE / 14542
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_107(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_106(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_105(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.6f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 15.0f, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 100.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0.0f);
	return;
}

void Function_105(int iParam0) //Position: 0x393C / 14652
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.03442f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1901.215f, 28.9122f, 2250.947f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.064542f, -2.140382f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_106(int iParam0) //Position: 0x39A6 / 14758
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.03442f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1901.427f, 28.27365f, 2250.028f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.124078f, -2.801709f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_107(int iParam0) //Position: 0x3A10 / 14864
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.03442f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1901.144f, 28.83703f, 2250.507f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.072262f, -2.533389f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_108(int iParam0) //Position: 0x3A7A / 14970
{
	iParam0 = iParam0;
	return;
}

bool Function_109(bool bParam0) //Position: 0x3A84 / 14980
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_110(int iParam0) //Position: 0x3AA2 / 15010
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, 0.0f);
	}
	return;
}

bool Function_111(bool bParam0, bool bParam1) //Position: 0x3AB7 / 15031
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
		return Function_115(bParam0, bParam1);
	}
	uVar4 = Function_114(bParam1);
	uVar5 = Function_57(bParam1);
	Function_112(bParam1);
	vVar6 = { StackVal, StackVal, Function_112(bParam1) };
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(bParam0, &vVar0, &vVar6, uVar4, 0.2f, 1, bVar3, uVar5, 0, 0);
}

vector3 Function_112(int iParam0) //Position: 0x3B3E / 15166
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Function_113(StackVal, StackVal, iParam0, "UserOffset", vVar0);
	return StackVal, StackVal, Function_113(StackVal, StackVal, iParam0, "UserOffset", vVar0);
}

vector3 Function_113(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x3B61 / 15201
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_114(bool bParam0) //Position: 0x3B7F / 15231
{
	return Function_11(bParam0, "UseLocationTolerance", 0.0f);
}

int Function_115(bool bParam0, bool bParam1) //Position: 0x3BA2 / 15266
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
	
	bVar0 = Function_114(bParam1);
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

bool Function_116(bool bParam0, int iParam1) //Position: 0x3CBD / 15549
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_117(bool bParam0) //Position: 0x3CE8 / 15592
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

bool Function_118(var uParam0, int iParam1) //Position: 0x3DED / 15853
{
	return (uParam0 && iParam1) == 0;
}

void Function_119(int iParam0) //Position: 0x3DFA / 15866
{
	if (Function_118(iParam0->f_40, 16))
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

void Function_120(int iParam0, bool bParam1) //Position: 0x3E6D / 15981
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
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_118(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_126(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_118(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_118(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_118(iParam0->f_40, 16))
			{
				Function_119(iParam0);
				Function_37(iParam0 + 40, 16);
			}
			if (Function_118(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_125(iParam0->f_12) && Function_118(iParam0->f_40, 512))
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
	Function_124(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_123(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_118(iParam0->f_40, 256))
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
	if (iParam0->f_12 == iLocal_89)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_88));
		iLocal_89 = iVar13;
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_91))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_91);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_52(iParam0);
	Function_110(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_122(iParam0->f_12), iParam0->f_12);
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
			Function_121();
		}
	}
	else
	{
		Function_121();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_121() //Position: 0x436C / 17260
{
	if (IS_OBJECT_VALID(bLocal_6))
	{
		SNAP_OBJECT_TO_GROUND(Global_34573, 1.0f, false, 1092616192);
		DESTROY_OBJECT(bLocal_6);
	}
	return;
}

bool Function_122(bool bParam0) //Position: 0x438D / 17293
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_123(var uParam0, int iParam1) //Position: 0x43AA / 17322
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

void Function_124(int iParam0) //Position: 0x43E2 / 17378
{
	iParam0 = iParam0;
	return;
}

bool Function_125(bool bParam0) //Position: 0x43EC / 17388
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_126(bool bParam0, int iParam1) //Position: 0x440D / 17421
{
	int iVar0;
	
	iParam1 = iParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_REMOVE(bParam0, "iLockerOpen");
	}
	HUD_ENABLE(true);
	iVar0 = Function_146(3);
	switch (iVar0)
	{
		case 0x00000001:
			Function_127(587, 1);
			break;
		
		case 0x00000002:
			Function_127(588, 1);
			break;
		
		case 0x00000003:
			Function_127(589, 1);
			break;
		
		case 0x00000004:
			Function_127(590, 1);
			break;
		
		case 0x00000005:
			Function_127(591, 1);
			break;
		
		case 0x00000006:
			Function_127(592, 1);
			break;
		
		case 0x00000007:
			Function_127(593, 1);
			break;
		
		case 0x00000008:
			Function_127(594, 1);
			break;
		
		case 0x00000009:
			Function_127(595, 1);
			break;
	}
	if (IS_VOLUME_VALID(bLocal_10))
	{
		DESTROY_VOLUME(bLocal_10);
	}
	iLocal_5 = 0;
	AI_STOP_IGNORING_ACTORS();
	return;
}

int Function_127(int iParam0, bool bParam1) //Position: 0x44F0 / 17648
{
	bool bVar0;
	int iVar1;
	
	Function_132(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_131(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_128();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_128() //Position: 0x468D / 18061
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_129();
	return 0;
}

void Function_129() //Position: 0x472C / 18220
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_130(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_130(int iParam0) //Position: 0x47DB / 18395
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_131(int iParam0, int iParam1) //Position: 0x4839 / 18489
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

int Function_132(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x487A / 18554
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
	Function_145(iParam0, TO_FLOAT(bParam1), 1);
	Function_144(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_133(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_133(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4A9A / 19098
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_143(390))), 32);
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
					bVar19 = (Function_142(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_142(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_140(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_137(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_135(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_134(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_39(), &Var9);
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

var Function_134(int iParam0) //Position: 0x50C7 / 20679
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_135(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x50D8 / 20696
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_136(char* cParam0, bool bParam1) //Position: 0x51CD / 20941
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_137(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x51E6 / 20966
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_139(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_138(Function_139(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_138(int iParam0, int iParam1) //Position: 0x524B / 21067
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_139(int iParam0, bool bParam1) //Position: 0x525D / 21085
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_140(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x526F / 21103
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
	if (((Function_141(iParam0) != 19 || Function_141(iParam0) != 17) || Function_141(iParam0) != 10) || Function_141(iParam0) != 9)
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

int Function_141(int iParam0) //Position: 0x539F / 21407
{
	return Global_35278[iParam020].f_48;
}

float Function_142(int iParam0) //Position: 0x53AE / 21422
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_143(int iParam0) //Position: 0x53E7 / 21479
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_144(int iParam0) //Position: 0x5424 / 21540
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

int Function_145(int iParam0, float fParam1, bool bParam2) //Position: 0x55BE / 21950
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

int Function_146(int iParam0) //Position: 0x5802 / 22530
{
	if (Function_147() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

bool Function_147() //Position: 0x582A / 22570
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_148(bool bParam0, bool bParam1) //Position: 0x5833 / 22579
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_169("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_169("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_91))
			{
				if (bParam1)
				{
					Function_169("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_91);
			}
		}
	}
	if (bParam1)
	{
		Function_169("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_149(bool bParam0, bool bParam1) //Position: 0x593B / 22843
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_150(int iParam0) //Position: 0x5951 / 22865
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
	if (!Function_153(iParam0->f_12))
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
		if (Function_118(iParam0->f_40, 32))
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
	if (Function_152(iParam0->f_12))
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
	if (Function_125(iParam0->f_12))
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
	Function_151(iParam0->f_16, bVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_151(bool bParam0, int iParam1) //Position: 0x5C07 / 23559
{
	vector3 vVar0;
	
	iParam1 = iParam1;
	bParam0 = bParam0;
	iLocal_5 = 0;
	AI_IGNORE_ACTOR(bParam0);
	if (!Global_3365 && IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
	}
	GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar0);
	bLocal_10 = CREATE_VOLUME_IN_LAYOUT(Global_34573, Function_39(), 3, vVar0, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_10);
	vLocal_7 = { 0.0f, 0.0f, 0.0f };
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (!IS_ACTOR_VALID(GET_RIDER(Global_12976.f_36)))
		{
			if (IS_ACTOR_IN_VOLUME(Global_12976.f_36, bLocal_10))
			{
				bLocal_1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
				if (STRING_CONTAINS_STRING(bLocal_1, "1"))
				{
					vLocal_7 = { -1894.371f, 26.573f, 2245.176f };
				}
				else if (STRING_CONTAINS_STRING(bLocal_1, "4"))
				{
					vLocal_7 = { -2811.85f, 14.399f, 3981.293f };
				}
				else if (STRING_CONTAINS_STRING(bLocal_1, "6"))
				{
					vLocal_7 = { -2756.306f, 54.087f, 4650.601f };
				}
				else if (STRING_CONTAINS_STRING(bLocal_1, "7"))
				{
					vLocal_7 = { -1523.101f, 61.918f, 3706.569f };
				}
				else if (STRING_CONTAINS_STRING(bLocal_1, "8"))
				{
					vLocal_7 = { 144.928f, 129.034f, 1397.844f };
				}
			}
		}
	}
	return;
}

bool Function_152(bool bParam0) //Position: 0x5D2C / 23852
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_153(bool bParam0) //Position: 0x5D45 / 23877
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_154(bool bParam0, int iParam1) //Position: 0x5D5F / 23903
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_155(iParam1, &bVar0);
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

bool Function_155(var uParam0, int iParam1) //Position: 0x5D97 / 23959
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_156(int iParam0, int iParam1) //Position: 0x5DAE / 23982
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
				if (!Function_161(6))
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
		if (!Function_160(bVar1, iParam0->f_12))
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
		if (!Function_118(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_55(iParam0 + 40, 1);
			}
			else
			{
				Function_37(iParam0 + 40, 1);
			}
			if (Function_118(iParam0->f_40, 1))
			{
				Function_149("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_59(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_59(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_159(iParam0->f_12);
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
				if (!Function_158(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_157(iParam0->f_12);
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

bool Function_157(bool bParam0) //Position: 0x6077 / 24695
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_158(bool bParam0, bool bParam1) //Position: 0x6094 / 24724
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

bool Function_159(int iParam0) //Position: 0x6130 / 24880
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_160(var uParam0, int iParam1) //Position: 0x614F / 24911
{
	char* cVar0[16];
	
	iParam1 = iParam1;
	uParam0 = uParam0;
	if (!Global_3365)
	{
		return 1;
	}
	strcpy(&cVar0, "hunting_", 16);
	if (Function_146(3) == 9)
	{
		strcpy(&cVar0, "hunting_fin", 16);
	}
	else if (Function_146(3) >= 9)
	{
		strcpy(&cVar0, "AllDone", 16);
	}
	else
	{
		stradd(&cVar0, INT_TO_STRING(Function_146(3)), 16);
	}
	bLocal_1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if (!STRING_CONTAINS_STRING(bLocal_1, &cVar0))
	{
		return 0;
	}
	return 1;
}

bool Function_161(int iParam0) //Position: 0x61CE / 25038
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_162(int iParam0) //Position: 0x61EA / 25066
{
	iParam0 = iParam0;
	return;
}

void Function_163(bool bParam0, int iParam1) //Position: 0x61F4 / 25076
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_164(&(Local_11[iLocal_8412]), bParam0);
		iLocal_84++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 6)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_163(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_164(int iParam0, int iParam1) //Position: 0x6256 / 25174
{
	iParam0->f_12 = iParam1;
	Function_37(iParam0 + 40, 1);
	return;
}

void Function_165(var uParam0) //Position: 0x626A / 25194
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
	uParam0 = uParam0;
	bVar0 = "default";
	if (iLocal_2 == 4294967295)
	{
		bVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
		STRING_CLEAR_TOKENIZER();
		SET_OWNERSHIP_STRAGGLER(bVar1, "_");
		bVar0 = STRING_GET_TOKEN(2);
		iLocal_2 = STRING_TO_INT(STRING_GET_TOKEN(2));
	}
	if (iLocal_2 <= Function_168(357))
	{
		if (Global_3365)
		{
			if (Function_168(357) == 8)
			{
				if (!STRINGS_ARE_EQUAL(bVar0, "final"))
				{
					if (!Function_147() || Function_166())
					{
						DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
					}
				}
			}
			else if (!Function_147() || Function_166())
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

int Function_166() //Position: 0x635C / 25436
{
	if (Function_147())
	{
		return (Function_167() != 1 || Function_167() != 0);
	}
	return 0;
}

int Function_167() //Position: 0x6375 / 25461
{
	return Global_79349.f_16;
}

int Function_168(int iParam0) //Position: 0x6381 / 25473
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_169(int iParam0) //Position: 0x63C2 / 25538
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

