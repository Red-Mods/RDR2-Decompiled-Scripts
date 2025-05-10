//Decompiled with MagicRDR v1.0
//Function Count : 201
//Statics Count : 49
//Natives Count : 335
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	float fLocal_11 = 0.0f;
	float fLocal_12 = 0.0f;
	bool bLocal_13 = false;
	bool bLocal_14 = false;
	struct<12> Local_15[2];
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* cLocal_44 = NULL;
	int iLocal_45 = 0;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
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
	
	iLocal_1 = 1;
	bLocal_2 = false;
	bLocal_3 = false;
	iLocal_4 = 0;
	iLocal_5 = 0;
	bLocal_6 = false;
	iLocal_7 = 0;
	fLocal_11 = 0.0f;
	fLocal_12 = 0.0f;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_200("STARTS");
	Function_199(uScriptParam_0);
	iLocal_40 = 0;
	Function_197(uScriptParam_0, &iLocal_40);
	while (IS_GRINGO_ACTIVE())
	{
		Function_196(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_41);
		}
		iVar2 = 0;
		bLocal_46 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_40 - 1))
			{
				if (Local_15[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_40;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_46 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_191(&(Local_15[iVar312]), &bVar4))
						{
							Function_189(GRINGO_GET_REQUESTING_ACTOR(), Local_15[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_191(&(Local_15[iVar312]), &bVar4))
						{
							Function_189(GRINGO_GET_REQUESTING_ACTOR(), Local_15[iVar312].f_12);
							if (bVar4)
							{
								Function_185(&(Local_15[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_15[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_184("eGRINGO_EndUse: Stop use by request", Local_15[iVar312].f_16);
							Function_183(Local_15[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_15[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_15[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_15[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_15[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_84(&(Local_15[iVar312]), 0);
							}
							else if (Local_15[iVar312].f_44 < 8)
							{
								Function_83(&(Local_15[iVar312]));
								Local_15[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_200("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_40 - 1))
			{
				if (Function_82(Local_15[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_15[iVar012])))
					{
						Function_200("Quitting due to update end");
						Function_84(&(Local_15[iVar012]), 1);
					}
				}
				if (Function_15(&(Local_15[iVar012]), 0))
				{
					Function_5(&(Local_15[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_40 - 1))
		{
			if (Function_82(Local_15[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_46)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_47))
	{
		Function_200("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_47);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_40 - 1))
	{
		if (Function_82(Local_15[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_15[iVar012].f_16);
			Function_84(&(Local_15[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_15[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_15[iVar012].f_12);
		}
		Function_15(&(Local_15[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_200("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x43A / 1082
{
	iParam0 = iParam0;
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x444 / 1092
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

int Function_3() //Position: 0x47F / 1151
{
	return 200;
}

int Function_4(int iParam0) //Position: 0x487 / 1159
{
	iParam0 = iParam0;
	return 0;
}

void Function_5(int iParam0) //Position: 0x492 / 1170
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_82(iParam0->f_40, 2))
	{
		Function_183(iParam0->f_16, 0);
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
								bLocal_46 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_47))
								{
									Function_200("ManagePlayerQuit: Create quit context");
									if (Function_7(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_47 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_47 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_47))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_83(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_47))
									{
										Function_200("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_47);
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
										Function_83(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_47))
										{
											Function_200("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_47);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_47))
							{
								Function_200("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_47);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_47))
		{
			Function_200("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_47);
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x77C / 1916
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

bool Function_7(bool bParam0, bool bParam1, int iParam2) //Position: 0x876 / 2166
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

bool Function_8(bool bParam0, int iParam1) //Position: 0x892 / 2194
{
	return Function_9(bParam0, "UseQuit", iParam1);
}

bool Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x8A9 / 2217
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

float Function_10(bool bParam0) //Position: 0x8EE / 2286
{
	return Function_11(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(bool bParam0, bool bParam1, int iParam2) //Position: 0x90B / 2315
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_12(int iParam0) //Position: 0x921 / 2337
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

bool Function_13(int iParam0) //Position: 0x9E9 / 2537
{
	return Function_82(*iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0x9F6 / 2550
{
	return Function_82(*iParam0, 1);
}

bool Function_15(var uParam0, int iParam1) //Position: 0xA03 / 2563
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

bool Function_16(int iParam0) //Position: 0xA4B / 2635
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
	
	bVar12 = Function_81(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_184("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_7(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_184("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_184("Incapacitation quit", iParam0->f_16);
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
			bLocal_46 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_80(iParam0->f_12, &fVar24))
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
						bLocal_6 = true;
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_79(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_78(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_78(iParam0);
			}
			if (!Function_77(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_46 = true;
			Function_76(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_82(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_62(iParam0->f_12);
			}
			fVar20 = Function_61(iParam0->f_12);
			if (Function_12(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_82(iParam0->f_40, 1))
			{
				Function_56(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_82(iParam0->f_40, 16))
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
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, 1, Function_54());
				}
				if (!Function_82(iParam0->f_40, 1024))
				{
					Function_55(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_79(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_82(iParam0->f_40, 1024))
				{
					Function_55(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_82(iParam0->f_40, 16))
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
			if (Function_82(iParam0->f_40, 32))
			{
				bLocal_46 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_53(iParam0->f_12);
			bLocal_46 = true;
			Function_52(iParam0);
			Function_49(iParam0, Function_51(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_82(iParam0->f_40, 1);
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
					Function_38(iParam0, bVar8, &iLocal_45, &cLocal_44);
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
				if (Function_82(iParam0->f_40, 16))
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
					if (Function_82(iParam0->f_40, 8))
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
			if (Function_82(iParam0->f_40, 1))
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
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_82(iParam0->f_40, 1));
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
			Function_200("nRewarding");
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			Function_20(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_55(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_46 = true;
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
			if (Function_82(iParam0->f_40, 1024))
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
			bLocal_46 = true;
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_82(iParam0->f_40, 1));
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

void Function_17(bool bParam0, int iParam1) //Position: 0x1B9F / 7071
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_18(bool bParam0, var uParam1) //Position: 0x1BB4 / 7092
{
	uParam1 = uParam1;
	if (iLocal_4 && IS_OBJECT_VALID(bLocal_14))
	{
		if (Function_12(&uLocal_8) <= 1.0f)
		{
			SET_ACTOR_HEADING(bParam0, fLocal_11, 1);
			DESTROY_OBJECT(bLocal_14);
			CAMERA_RESET(0);
		}
	}
	return;
}

bool Function_19() //Position: 0x1BE4 / 7140
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

void Function_20(var uParam0, bool bParam1) //Position: 0x1C15 / 7189
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

void Function_21(var uParam0, bool bParam1) //Position: 0x1C89 / 7305
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

void Function_22(var uParam0, int iParam1) //Position: 0x1CFB / 7419
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1D09 / 7433
{
	return Function_11(bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1D1F / 7455
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1D2C / 7468
{
	return Function_11(bParam0, "MoveAllowance", 1.5f);
}

bool Function_26(var uParam0, int iParam1) //Position: 0x1D4C / 7500
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return 1;
}

bool Function_27(bool bParam0) //Position: 0x1D5B / 7515
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_28() //Position: 0x1D7A / 7546
{
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x1D80 / 7552
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_30(int iParam0) //Position: 0x1D8E / 7566
{
	iParam0 = iParam0;
	return 1;
}

bool Function_31(bool bParam0) //Position: 0x1D99 / 7577
{
	return Function_7(bParam0, "OneShotKill", 0);
}

bool Function_32(bool bParam0, int iParam1) //Position: 0x1DB3 / 7603
{
	return Function_9(bParam0, "ParentAnimNode", iParam1);
}

bool Function_33(bool bParam0) //Position: 0x1DD1 / 7633
{
	return Function_7(bParam0, "LinkToParentAnim", 0);
}

bool Function_34(bool bParam0) //Position: 0x1DF0 / 7664
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_15 - 1))
	{
		if (Local_15[iVar012].f_12 == bParam0)
		{
			return Local_15[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_35(bool bParam0) //Position: 0x1E23 / 7715
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_36(bool bParam0) //Position: 0x1E42 / 7746
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_37(int iParam0, int iParam1) //Position: 0x1E5C / 7772
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_38(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1E6F / 7791
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

var Function_39() //Position: 0x2157 / 8535
{
	int iVar0;
	
	return iVar0;
}

bool Function_40(bool bParam0, bool bParam1) //Position: 0x215F / 8543
{
	return Function_9(bParam0, "TargetLocator", bParam1);
}

void Function_41() //Position: 0x217C / 8572
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_42(bool bParam0, int iParam1) //Position: 0x218B / 8587
{
	return Function_9(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_43(bool bParam0, int iParam1) //Position: 0x21AD / 8621
{
	return Function_9(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_44(bool bParam0) //Position: 0x21D1 / 8657
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_45(bool bParam0, int iParam1) //Position: 0x21EE / 8686
{
	return Function_9(bParam0, "TargetAttachBone", iParam1);
}

bool Function_46(bool bParam0, int iParam1) //Position: 0x220E / 8718
{
	return Function_9(bParam0, "TargetAttachSlot", iParam1);
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x222E / 8750
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

bool Function_48(bool bParam0, bool bParam1, bool bParam2) //Position: 0x22DC / 8924
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

void Function_49(int iParam0, float fParam1) //Position: 0x234C / 9036
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, fParam1);
	}
	return;
}

void Function_50(int iParam0, float fParam1) //Position: 0x2362 / 9058
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_55(iParam0, 1);
	Function_37(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_51(bool bParam0) //Position: 0x2383 / 9091
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(bParam0, "RandUseTime", 0.0f));
}

void Function_52(int iParam0) //Position: 0x23A3 / 9123
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_53(var uParam0) //Position: 0x23B7 / 9143
{
	uParam0 = uParam0;
	return;
}

int Function_54() //Position: 0x23C1 / 9153
{
	return 1;
}

void Function_55(var uParam0, int iParam1) //Position: 0x23C8 / 9160
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_56(bool bParam0, var uParam1, int iParam2) //Position: 0x23D7 / 9175
{
	float fVar0;
	
	Function_59(bParam0);
	*uParam1 = { StackVal, StackVal, Function_59(bParam0) };
	*iParam2 = Function_58(bParam0);
	fVar0 = Function_57(bParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

bool Function_57(bool bParam0) //Position: 0x2416 / 9238
{
	return Function_11(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_58(bool bParam0) //Position: 0x2441 / 9281
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_59(bool bParam0) //Position: 0x244C / 9292
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

bool Function_60(bool bParam0) //Position: 0x2542 / 9538
{
	return Function_7(bParam0, "UsePosActorRelative", 0);
}

bool Function_61(bool bParam0) //Position: 0x2564 / 9572
{
	return Function_11(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_62(bool bParam0) //Position: 0x258B / 9611
{
	struct<25> Var0;
	var uVar27;
	
	bParam0 = bParam0;
	if (!bLocal_6)
	{
		if (iLocal_4 && !iLocal_5)
		{
			iLocal_5 = 1;
			Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("LootCorpse_Layout") };
			cLocal_13 = CREATE_LAYOUT(&Var7);
			Function_73(GRINGO_GET_MY_OBJECT_REF());
			vVar15 = { StackVal, StackVal, Function_73(GRINGO_GET_MY_OBJECT_REF()) };
			Function_72(Global_34573);
			vVar18 = { StackVal, StackVal, Function_72(Global_34573) };
			vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar18, vVar15, StackVal) };
			fLocal_12 = UNK_0x9C40E671(&vVar21);
			VNORMALIZE(&vVar21);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar21, vVar18, StackVal) * Vector(-0.45f, -0.45f, -0.45f), StackVal, StackVal) };
			if (FABS((fLocal_12 - Function_71(Global_34573))) < 40.0f)
			{
				SET_ACTOR_HEADING(Global_34573, fLocal_12, 1);
			}
			FIND_GROUND_INTERSECTION(&vVar18, 0.75f, &vVar24, &uVar27);
			if (!Function_70(StackVal, StackVal, vVar24))
			{
				*(&Var0 + 12) = { StackVal, StackVal, vVar24 };
			}
			else
			{
				Function_72(Global_34573);
				*(&Var0 + 12) = { StackVal, StackVal, Function_72(Global_34573) };
			}
			Var0 = { 0.0f, fLocal_12, 0.0f };
			Var0.f_24 = 0;
			Function_69(&uLocal_8);
			if ((RAND_INT_RANGE(false, 10000) % 100) >= 50)
			{
				bLocal_14 = Function_66(cLocal_13, 0, &Var0, 1, 0, 0);
			}
			else
			{
				bLocal_14 = Function_63(cLocal_13, 0, &Var0, 1, 0, 0);
			}
		}
	}
	return;
}

bool Function_63(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x269A / 9882
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "LootCorpse", 1, 1);
	}
	Function_64(&bVar0, uParam2);
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

void Function_64(var uParam0, int iParam1) //Position: 0x2712 / 10002
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_65(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.1f, 0);
	return;
}

void Function_65(var uParam0, bool bParam1) //Position: 0x273D / 10045
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -0.657326f, 0.52081f, -0.977692f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.815566f, -0.016175f, -0.578438f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

bool Function_66(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x27E9 / 10217
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "LootCorpse2", 1, 1);
	}
	Function_67(&bVar0, uParam2);
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

void Function_67(var uParam0, int iParam1) //Position: 0x2862 / 10338
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_68(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.1f, 0);
	return;
}

void Function_68(var uParam0, bool bParam1) //Position: 0x288D / 10381
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 49.45479f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.615967f, 0.397173f, -1.056881f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.7267f, -0.149429f, -0.670506f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_69(int iParam0) //Position: 0x2939 / 10553
{
	Function_50(iParam0, 0.0f);
	return;
}

bool Function_70(vector3 vParam0) //Position: 0x2945 / 10565
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_71(bool bParam0) //Position: 0x295D / 10589
{
	return GET_HEADING(bParam0);
}

vector3 Function_72(bool bParam0) //Position: 0x2968 / 10600
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_73(bool bParam0) //Position: 0x2979 / 10617
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

struct<32> Function_74(bool bParam0) //Position: 0x29A0 / 10656
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_75(char* cParam0, char* cParam1, char* cParam2) //Position: 0x2A0A / 10762
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_76(int iParam0) //Position: 0x2A29 / 10793
{
	iParam0 = iParam0;
	return;
}

bool Function_77(bool bParam0) //Position: 0x2A33 / 10803
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_78(int iParam0) //Position: 0x2A51 / 10833
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, 0.0f);
	}
	return;
}

bool Function_79(bool bParam0, int iParam1) //Position: 0x2A66 / 10854
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	vector3 vVar12;
	
	iParam1 = iParam1;
	RAND_SET_SEED(ROUND(GET_CURRENT_GAME_TIME()));
	Function_73(GRINGO_GET_MY_OBJECT_REF());
	vVar0 = { StackVal, StackVal, Function_73(GRINGO_GET_MY_OBJECT_REF()) };
	Function_72(bParam0);
	vVar3 = { StackVal, StackVal, Function_72(bParam0) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar0, StackVal) };
	fLocal_12 = UNK_0x9C40E671(&vVar12);
	VNORMALIZE(&vVar12);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar12, vVar3, StackVal) * Vector(-0.25f, -0.25f, -0.25f), StackVal, StackVal) };
	if (FABS((fLocal_12 - Function_71(bParam0))) < 40.0f)
	{
		SET_ACTOR_HEADING(bParam0, fLocal_12, 1);
	}
	FIND_GROUND_INTERSECTION(&vVar3, 0.1f, &vVar6, &uVar9);
	if (!Function_70(StackVal, StackVal, vVar6))
	{
		SET_OBJECT_POSITION(bParam0, vVar6);
	}
	return 1;
}

bool Function_80(bool bParam0, int iParam1) //Position: 0x2AFA / 11002
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_81(bool bParam0) //Position: 0x2B25 / 11045
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

bool Function_82(bool bParam0, int iParam1) //Position: 0x2C2A / 11306
{
	return (bParam0 && iParam1) == 0;
}

void Function_83(int iParam0) //Position: 0x2C37 / 11319
{
	if (Function_82(iParam0->f_40, 16))
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

void Function_84(int iParam0, bool bParam1) //Position: 0x2CAA / 11434
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
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_82(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_90(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_82(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_82(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_82(iParam0->f_40, 16))
			{
				Function_83(iParam0);
				Function_37(iParam0 + 40, 16);
			}
			if (Function_82(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 0);
			}
			if (Function_89(iParam0->f_12) && Function_82(iParam0->f_40, 512))
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
	Function_88(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_87(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_82(iParam0->f_40, 256))
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
	if (iParam0->f_12 == iLocal_45)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_44));
		iLocal_45 = iVar13;
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_47))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_47);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_52(iParam0);
	Function_78(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_86(iParam0->f_12), iParam0->f_12);
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
			Function_85();
		}
	}
	else
	{
		Function_85();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_85() //Position: 0x31A8 / 12712
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

bool Function_86(bool bParam0) //Position: 0x31DF / 12767
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_87(var uParam0, int iParam1) //Position: 0x31FC / 12796
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

void Function_88(int iParam0) //Position: 0x3234 / 12852
{
	iParam0 = iParam0;
	return;
}

bool Function_89(bool bParam0) //Position: 0x323E / 12862
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_90(bool bParam0, int iParam1) //Position: 0x325F / 12895
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	iParam1 = iParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_PLAYER(bParam0))
		{
			DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
			return;
		}
		if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "IsDugGrave"))
		{
			if (!Function_182())
			{
				Function_180(Function_181(0, 1, 1, 1, 1), 1);
			}
			Function_126(GET_TARGET_OBJECT());
			return;
		}
		bVar0 = 50;
		fVar1 = 1.0f;
		iVar2 = 0;
		iVar3 = (RAND_INT_RANGE(false, 10000) % 100);
		if (iVar3 < 2)
		{
			fVar1 = 4.0f;
			if (Function_125())
			{
				fVar1 = 2.0f;
			}
		}
		else if (Function_125())
		{
			fVar1 = 0.5f;
		}
		if (GET_OBJECT_TYPE(GET_TARGET_OBJECT()) == 29)
		{
			bVar4 = GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT());
		}
		else
		{
			bVar4 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(GET_TARGET_OBJECT()));
		}
		bVar5 = GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar4);
		if (STRING_CONTAINS_STRING(bVar5, "Hard"))
		{
			fVar1 = (fVar1 + 0.2f);
		}
		else if (STRING_CONTAINS_STRING(bVar5, "Medium"))
		{
			fVar1 = (fVar1 + 0.0f);
		}
		else
		{
			fVar1 = (fVar1 + -0.2f);
			if (STRING_CONTAINS_STRING(bVar5, "Doctor"))
			{
				iVar2 = 1;
			}
			else if (STRING_CONTAINS_STRING(bVar5, "Gunslinger"))
			{
				iVar2 = 2;
			}
			else if (STRING_CONTAINS_STRING(bVar5, "nBartender"))
			{
				iVar2 = 3;
			}
		}
		if (HAS_ITEM("RABBITS_FOOT", bParam0))
		{
			fVar1 = (fVar1 + 0.2f);
		}
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bParam0)) >= 8.0f)
		{
			fVar1 = (fVar1 + 0.1f);
		}
		fVar6 = (Function_123(bParam0) * 100.0f);
		bVar0 = ROUND(FABS((fVar6 - 100.0f)));
		if (bVar0 <= 0)
		{
			bVar0 = false;
		}
		else if (bVar0 >= 90)
		{
			bVar0 = 90;
		}
		bVar7 = GET_TARGET_OBJECT();
		if (!IS_OBJECT_VALID(bVar7))
		{
			Function_126(bVar7);
			return;
		}
		if (Function_182())
		{
			if (DECOR_CHECK_EXIST(bVar7, "iSSAmmoType") && DECOR_CHECK_EXIST(bVar7, "fSSAmmoAmt"))
			{
				bVar8 = DECOR_GET_INT(bVar7, "iSSAmmoType");
				bVar9 = DECOR_GET_FLOAT(bVar7, "fSSAmmoAmt");
				_ADD_AMMO_OF_TYPE(bParam0, bVar8, bVar9, 1, 1);
				if (bLocal_6 && iLocal_1)
				{
					iLocal_1 = 0;
					PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
				}
				Function_126(bVar7);
				return;
			}
		}
		if (DECOR_CHECK_EXIST(bVar7, "HitsByThrowingKnife"))
		{
			bVar10 = DECOR_GET_INT(bVar7, "HitsByThrowingKnife");
			if (bVar10 != 0)
			{
				_ADD_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(25), TO_FLOAT(bVar10), 1, 1);
				if (bLocal_6 && iLocal_1)
				{
					iLocal_1 = 0;
					PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
				}
			}
		}
		if (DECOR_CHECK_EXIST(bVar7, "HitsByTomahawk"))
		{
			bVar11 = DECOR_GET_INT(bVar7, "HitsByTomahawk");
			if (bVar11 != 0)
			{
				_ADD_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(29), TO_FLOAT(bVar11), 1, 1);
				if (bLocal_6 && iLocal_1)
				{
					iLocal_1 = 0;
					PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
				}
			}
		}
		if (DECOR_CHECK_EXIST(bVar7, "LootType"))
		{
			DECOR_SET_INT(bParam0, "LootType", DECOR_GET_INT(bVar7, "LootType"));
		}
		if (!Function_182())
		{
			Function_122(&bVar7);
		}
		if (iVar2 == 1)
		{
			ADD_ITEM(Function_121(3), bParam0, 1);
			if (bLocal_6 && iLocal_1)
			{
				iLocal_1 = 0;
				PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
			}
			Function_126(bVar7);
			return;
		}
		if (iVar2 == 2)
		{
			if (Function_117(11, 0))
			{
				ADD_ITEM(Function_121(0), bParam0, 1);
				if (bLocal_6 && iLocal_1)
				{
					iLocal_1 = 0;
					PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
				}
				Function_126(bVar7);
				return;
			}
		}
		if (iVar2 == 3)
		{
			if (Global_29004 != 0 || Global_29004 != 1)
			{
				ADD_ITEM(Function_121(2), bParam0, 1);
			}
			else if (Global_29004 != 2 || Global_29004 != 3)
			{
				ADD_ITEM(Function_121(1), bParam0, 1);
			}
			if (bLocal_6 && iLocal_1)
			{
				iLocal_1 = 0;
				PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
			}
			Function_126(bVar7);
			return;
		}
		if (!Function_182())
		{
			bLocal_2 = Function_115(&bVar7);
		}
		iVar12 = (RAND_INT_RANGE(false, 100000) % 100);
		iVar13 = 0;
		if (iVar12 < bVar0)
		{
			bVar14 = DECOR_GET_INT(bVar7, "Weapon");
			bVar15 = bVar14;
			bVar16 = GET_AMMOENUM_FOR_WEAPONENUM(bVar15);
			if (!bVar16 != 4294967295)
			{
				bVar17 = RAND_FLOAT_RANGE(GET_WEAPON_MAX_AMMO(bVar15), (GET_WEAPON_MAX_AMMO(bVar15) * 2.0f));
				bVar17 = (bVar17 * fVar1);
				if (HAS_ITEM(Function_121(17), Global_34573))
				{
					bVar17 = (bVar17 * 1.2f);
				}
				bVar17 = TO_FLOAT(ROUND(bVar17));
				if (bVar17 == 0.0f && _GET_AMMO_AMOUNT(bParam0, bVar16, 1) > (_GET_MAX_AMMO_AMOUNT(bParam0, bVar16) - 15.0f))
				{
					if (Function_125())
					{
						bVar17 = (bVar17 * 0.8f);
						if (bVar17 >= 0.0f)
						{
							bVar17 = 1.0f;
						}
					}
					_ADD_AMMO_OF_TYPE(bParam0, bVar16, bVar17, 1, 1);
					if (bLocal_6 && iLocal_1)
					{
						iLocal_1 = 0;
						PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
					}
					iVar13 = 1;
				}
			}
		}
		if (!((bLocal_3 || bLocal_2) || iVar13))
		{
			if (!Function_182())
			{
				if (!bLocal_3)
				{
					bVar18 = Function_181(0, 1, 1, 1, 1);
					if (Function_125())
					{
						bVar18 = (bVar18 / 2);
						if (bVar18 < 1)
						{
							bVar18 = true;
						}
					}
					Function_180(bVar18, 1);
					if (bLocal_6 && iLocal_1)
					{
						iLocal_1 = 0;
						PLAY_SOUND_FRONTEND("HUD_PICKUP_MONEY_MASTER");
					}
				}
				else
				{
					Function_96(533, 1);
					if (bLocal_6 && iLocal_1)
					{
						iLocal_1 = 0;
						PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
					}
				}
			}
			else if (Function_92(0))
			{
				if (bLocal_6 && iLocal_1)
				{
					iLocal_1 = 0;
					PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
				}
			}
			else if (Function_91(0))
			{
				if (bLocal_6 && iLocal_1)
				{
					iLocal_1 = 0;
					PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
				}
			}
		}
		Function_126(bVar7);
	}
	Function_126(GET_TARGET_OBJECT());
	return;
}

bool Function_91(int iParam0) //Position: 0x38CB / 14539
{
	iParam0 = iParam0;
	if (GET_ITEM_COUNT(Function_121(8), Global_34573) <= GET_MAX_ITEM_COUNT(Function_121(8)))
	{
		ADD_ITEM(Function_121(8), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_121(7), Global_34573) <= GET_MAX_ITEM_COUNT(Function_121(7)))
	{
		ADD_ITEM(Function_121(7), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_121(2), Global_34573) <= GET_MAX_ITEM_COUNT(Function_121(2)))
	{
		ADD_ITEM(Function_121(2), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_121(0), Global_34573) <= GET_MAX_ITEM_COUNT(Function_121(0)))
	{
		ADD_ITEM(Function_121(0), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_121(1), Global_34573) <= GET_MAX_ITEM_COUNT(Function_121(1)))
	{
		ADD_ITEM(Function_121(1), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_121(3), Global_34573) <= GET_MAX_ITEM_COUNT(Function_121(3)))
	{
		ADD_ITEM(Function_121(3), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_121(12), Global_34573) <= GET_MAX_ITEM_COUNT(Function_121(12)))
	{
		ADD_ITEM(Function_121(12), Global_34573, 1);
		return 1;
	}
	return 0;
}

bool Function_92(bool bParam0) //Position: 0x39CA / 14794
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = 0.0f;
	if (bParam0)
	{
		bVar0 = RAND_FLOAT_RANGE(5.0f, 8.0f);
	}
	else
	{
		bVar0 = RAND_FLOAT_RANGE(1.0f, 4.0f);
	}
	if (Function_95(40))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 7, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_95(39))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 6))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 6, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_95(41))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 8))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 8, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_95(42))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 9))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 9, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_95(44))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 11, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_95(43))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 10, bVar0, 1, 1);
			return 1;
		}
	}
	bVar1 = 0.0f;
	if (bParam0)
	{
		bVar1 = RAND_FLOAT_RANGE(1.0f, 3.0f);
	}
	else
	{
		bVar1 = 1.0f;
	}
	if (!IS_WEAPONENUM_LOCKED(23))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 4, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 4))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 4, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(35))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 16, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 16))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 16, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(24))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 5, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 5))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 5, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(31))
	{
		if (ACTOR_HAS_WEAPON(Global_34573, 31))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 13, bVar1, 1, 1);
				return 1;
			}
		}
	}
	if (Function_93(32))
	{
		if (!IS_WEAPONENUM_LOCKED(29))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 12, bVar1, 1, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_93(int iParam0) //Position: 0x3BE8 / 15336
{
	return Function_94(Global_83864.f_1252, iParam0);
}

int Function_94(var uParam0, int iParam1) //Position: 0x3BFA / 15354
{
	return (uParam0 && iParam1) == 0;
}

bool Function_95(int iParam0) //Position: 0x3C07 / 15367
{
	switch (iParam0)
	{
		case 0x00000028:
			if (ACTOR_HAS_WEAPON(Global_34573, 4))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 5))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 6))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 7))
			{
				return 1;
			}
			break;
		
		case 0x00000027:
			if (ACTOR_HAS_WEAPON(Global_34573, false))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, true))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 2))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 3))
			{
				return 1;
			}
			break;
		
		case 0x00000029:
			if (ACTOR_HAS_WEAPON(Global_34573, 8))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 9))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 10))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 11))
			{
				return 1;
			}
			break;
		
		case 0x0000002A:
			if (ACTOR_HAS_WEAPON(Global_34573, 12))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 13))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 14))
			{
				return 1;
			}
			break;
		
		case 0x0000002C:
			if (ACTOR_HAS_WEAPON(Global_34573, 19))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 20))
			{
				return 1;
			}
			break;
		
		case 0x0000002B:
			if (ACTOR_HAS_WEAPON(Global_34573, 16))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 15))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 17))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 18))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_96(int iParam0, bool bParam1) //Position: 0x3D81 / 15745
{
	bool bVar0;
	int iVar1;
	
	Function_101(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_100(iParam0, 4294967295);
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
	iVar1 = Function_97();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_97() //Position: 0x3F1E / 16158
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
	Function_98();
	return 0;
}

void Function_98() //Position: 0x3FBD / 16317
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
		Function_99(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_99(int iParam0) //Position: 0x406D / 16493
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

var Function_100(int iParam0, int iParam1) //Position: 0x40CB / 16587
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

int Function_101(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x410C / 16652
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
	Function_114(iParam0, TO_FLOAT(bParam1), 1);
	Function_113(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_102(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_102(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x432C / 17196
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_112(390))), 32);
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
					bVar19 = (Function_111(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_111(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_109(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_106(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_103(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_39(), &Var9);
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

var Function_103(int iParam0) //Position: 0x4959 / 18777
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_104(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x496A / 18794
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_105(char* cParam0, bool bParam1) //Position: 0x4A5F / 19039
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_106(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4A78 / 19064
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_108(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_107(Function_108(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_107(int iParam0, int iParam1) //Position: 0x4ADD / 19165
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_108(int iParam0, bool bParam1) //Position: 0x4AEF / 19183
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_109(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4B01 / 19201
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
	if (((Function_110(iParam0) != 19 || Function_110(iParam0) != 17) || Function_110(iParam0) != 10) || Function_110(iParam0) != 9)
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

int Function_110(int iParam0) //Position: 0x4C31 / 19505
{
	return Global_35278[iParam020].f_48;
}

float Function_111(int iParam0) //Position: 0x4C40 / 19520
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_112(int iParam0) //Position: 0x4C79 / 19577
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_113(int iParam0) //Position: 0x4CB6 / 19638
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

int Function_114(int iParam0, bool bParam1, bool bParam2) //Position: 0x4E50 / 20048
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

bool Function_115(int iParam0) //Position: 0x5094 / 20628
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (DECOR_CHECK_EXIST(*iParam0, "iSpecificItem") && !bLocal_2)
	{
		bVar0 = DECOR_GET_INT(*iParam0, "iSpecificItem");
		if (bVar0 == 11)
		{
			ADD_ITEM(Function_121(bVar0), Global_34573, 1);
			return 1;
		}
		if (bVar0 == 0)
		{
			if (!Function_117(11, 0))
			{
				bVar1 = Function_116();
				if (bVar1 != 4294967295)
				{
					ADD_ITEM(Function_121(bVar1), Global_34573, 1);
					return 1;
				}
				return 0;
			}
		}
		ADD_ITEM(Function_121(bVar0), Global_34573, 1);
		return 1;
		DECOR_REMOVE(*iParam0, "iSpecificItem");
		if (bLocal_6 && iLocal_1)
		{
			iLocal_1 = 0;
			PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
		}
	}
	else if ((RAND_INT_RANGE(false, 10000) % 100) < 10)
	{
		bVar2 = Function_116();
		if (bVar2 != 4294967295)
		{
			ADD_ITEM(Function_121(bVar2), Global_34573, 1);
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_116() //Position: 0x519A / 20890
{
	int iVar0;
	
	iVar0 = (RAND_INT_RANGE(false, 100000) % 5);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (iVar0 == 1)
	{
		return 2;
	}
	if (iVar0 == 2)
	{
		return 6;
	}
	if (iVar0 == 3)
	{
		return 7;
	}
	if (iVar0 == 4)
	{
		return 8;
	}
	return 4294967295;
}

bool Function_117(int iParam0, bool bParam1) //Position: 0x51E2 / 20962
{
	int iVar0;
	
	iVar0 = Function_119(iParam0);
	if (!Function_118(iVar0))
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

bool Function_118(int iParam0) //Position: 0x521F / 21023
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_119(int iParam0) //Position: 0x5236 / 21046
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_120(int iParam0) //Position: 0x5250 / 21072
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_121(bool bParam0) //Position: 0x5266 / 21094
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

int Function_122(int iParam0) //Position: 0x5357 / 21335
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!DECOR_CHECK_EXIST(*iParam0, "NoMoney"))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "iAdditionalMoney"))
		{
			bVar0 = (Function_181(0, 1, 1, 1, 1) + DECOR_GET_INT(*iParam0, "iAdditionalMoney"));
			DECOR_REMOVE(*iParam0, "iAdditionalMoney");
		}
		else if (DECOR_CHECK_EXIST(*iParam0, "nOnlyMoney"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "nOnlyMoney");
			DECOR_REMOVE(*iParam0, "nOnlyMoney");
			bLocal_2 = true;
		}
	}
	else
	{
		bLocal_3 = true;
		DECOR_REMOVE(*iParam0, "NoMoney");
	}
	if (bVar0 != 4294967295)
	{
		if (Function_125())
		{
			bVar0 = (bVar0 / 2);
		}
		if (bVar0 < 0)
		{
			bVar0 = true;
		}
		Function_180(bVar0, 1);
		bLocal_3 = true;
		if (bLocal_6 && iLocal_1)
		{
			iLocal_1 = 0;
			PLAY_SOUND_FRONTEND("HUD_PICKUP_MONEY_MASTER");
		}
		return 1;
	}
	return 0;
}

float Function_123(bool bParam0) //Position: 0x5477 / 21623
{
	bool bVar0[4];
	bool bVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	bVar5 = GET_WEAPON_IN_HAND(bParam0);
	bVar0[0] = GET_WEAPON_EQUIPPED(bParam0, 5);
	bVar0[1] = GET_WEAPON_EQUIPPED(bParam0, true);
	bVar0[2] = GET_WEAPON_EQUIPPED(bParam0, 6);
	bVar0[3] = GET_WEAPON_EQUIPPED(bParam0, 4);
	if (bVar5 != 4294967295)
	{
		if (GET_ITEM_EQUIPSLOT(bVar5) == 5)
		{
			bVar0[0] = bVar5;
		}
		else if (GET_ITEM_EQUIPSLOT(bVar5) == 1)
		{
			bVar0[1] = bVar5;
		}
		else if (GET_ITEM_EQUIPSLOT(bVar5) == 6)
		{
			bVar0[2] = bVar5;
		}
		else if (GET_ITEM_EQUIPSLOT(bVar5) == 4)
		{
			bVar0[3] = bVar5;
		}
	}
	fVar6 = 0.0f;
	iVar7 = 0;
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (bVar0[iVar7] != 4294967295)
		{
			fVar9 = Function_124(bParam0, bVar0[iVar7]);
			fVar10 = GET_WEAPON_MAX_AMMO(bVar0[iVar7]);
			fVar11 = _GET_MAX_AMMO_AMOUNT(bParam0, GET_AMMO_ENUM(bVar0[iVar7]));
			fVar6 = (fVar6 + (fVar9 / (fVar10 + fVar11)));
			bVar8++;
		}
		iVar7++;
	}
	return (fVar6 / TO_FLOAT(bVar8));
}

var Function_124(bool bParam0, bool bParam1) //Position: 0x556C / 21868
{
	bool bVar0;
	
	bVar0 = _GET_AMMO_AMOUNT(bParam0, GET_AMMO_ENUM(bParam1), 0);
	if (ACTOR_HAS_WEAPON_IN_HAND(bParam0, bParam1) || GET_WEAPON_EQUIPPED(bParam0, false) != bParam1)
	{
		bVar0 = (bVar0 + ACTOR_GET_WEAPON_AMMO(bParam0, bParam1));
	}
	return bVar0;
}

bool Function_125() //Position: 0x55A1 / 21921
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_126(bool bParam0) //Position: 0x55CC / 21964
{
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		Function_127(GET_ACTOR_ENUM_FACTION(GET_CORPSE_ACTOR_ENUM(bParam0)));
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam0));
	}
	if (IS_LAYOUTREF_VALID(cLocal_13))
	{
		if (IS_OBJECT_VALID(bLocal_14))
		{
			DESTROY_OBJECT(bLocal_14);
		}
		iLocal_5 = 1;
		DESTROY_LAYOUT_OBJECTS(bLocal_13);
		DESTROY_LAYOUT(bLocal_13);
	}
	DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	return;
}

void Function_127(int iParam0) //Position: 0x5622 / 22050
{
	int iVar0;
	
	if (!IS_FACTION_VALID(iParam0))
	{
		return;
	}
	if (!Function_179(3))
	{
		return;
	}
	if (Function_178())
	{
		return;
	}
	if (Function_182())
	{
		return;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 0x00000019:
			if (IS_PS3() || Function_177())
			{
				iVar0 = 4;
			}
			break;
		
		case 0x0000000E:
			iVar0 = 5;
			break;
		
		case 0x00000018:
			iVar0 = 6;
			break;
		
		case 0x0000000C:
			iVar0 = 7;
			break;
	}
	if (!iVar0 != 0)
	{
		Function_128(iVar0, 0, 1, 1, 0);
	}
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x569E / 22174
{
	char* cVar0[32];
	
	if (!Function_176(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_179(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_174(bParam0))
	{
		Function_101(456, 1, 0, 0);
		Function_173(bParam0, 2);
		if (bParam2)
		{
			if (!Function_172(0, 0, 1, 1))
			{
				Function_146(1);
				Function_145(1, 5);
			}
			else
			{
				Function_144();
			}
		}
		Function_138(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_137() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_137() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_135(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_182())
		{
			if (!Function_134(Global_76846, 2))
			{
				Function_129(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_129(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x57F3 / 22515
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_131(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_130(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_130(char* cParam0, int iParam1) //Position: 0x585F / 22623
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

bool Function_131(bool bParam0, var uParam1, int iParam2) //Position: 0x5896 / 22678
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
		if (Function_133(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_132(uVar0))
		{
			case 0x00000002:
				if (!Function_134(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_132(char* cParam0) //Position: 0x590E / 22798
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

int Function_133(int iParam0) //Position: 0x59AF / 22959
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

bool Function_134(int iParam0, int iParam1) //Position: 0x59EC / 23020
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_135(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x59FF / 23039
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_136(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_136(int iParam0) //Position: 0x5A7A / 23162
{
	char* cVar0[16];
	
	if (!Function_182())
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

bool Function_137() //Position: 0x5AB9 / 23225
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_138(bool bParam0) //Position: 0x5AE6 / 23270
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
			if (Function_142(bParam0, Function_143(bVar24)))
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
			if (Function_142(bParam0, Function_143(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_141(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_140(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_139(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_139(int iParam0) //Position: 0x5C96 / 23702
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_176(iParam0))
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

void Function_140(char* cParam0, bool bParam1) //Position: 0x5CED / 23789
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_141(int iParam0) //Position: 0x5D12 / 23826
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_176(iParam0))
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

bool Function_142(bool bParam0, int iParam1) //Position: 0x5D68 / 23912
{
	int iVar0;
	
	if (!Function_176(bParam0))
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

int Function_143(bool bParam0) //Position: 0x5DC7 / 24007
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_144() //Position: 0x5DD3 / 24019
{
	return;
}

void Function_145(var uParam0, int iParam1) //Position: 0x5DD9 / 24025
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_178())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_146(bool bParam0) //Position: 0x5E1B / 24091
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_163();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_147();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_37(&Global_63095, 1);
		Function_37(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_147() //Position: 0x5E6C / 24172
{
	Function_161();
	Function_160();
	Function_160();
	Function_159();
	Function_159();
	Function_158();
	Function_158();
	Function_155(0);
	Function_155(0);
	if (!Function_178())
	{
		Function_152();
		Function_151();
		Function_150();
		Function_149();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_148();
	return;
}

void Function_148() //Position: 0x5EBE / 24254
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

void Function_149() //Position: 0x5FC4 / 24516
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

void Function_150() //Position: 0x5FF7 / 24567
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_151() //Position: 0x6185 / 24965
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_152() //Position: 0x6339 / 25401
{
	Function_153(&Global_28260, 1, 0);
	return;
}

void Function_153(int iParam0, bool bParam1, var uParam2) //Position: 0x6347 / 25415
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
	
	bVar0 = Function_154();
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

var Function_154() //Position: 0x6538 / 25912
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_155(int iParam0) //Position: 0x654D / 25933
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
					iVar2 = ((Function_157((50 + iVar4)) + Function_157((183 + iVar4))) + Function_157((90 + iVar4)));
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
	Function_156(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_156(int iParam0, bool bParam1, bool bParam2) //Position: 0x65F3 / 26099
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
		Function_114(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_113(iParam0);
	if (bParam2)
	{
		Function_102(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_157(bool bParam0) //Position: 0x688E / 26766
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_158() //Position: 0x68CF / 26831
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
		iVar2 = ((Function_157((50 + iVar3) + 15) + Function_157((183 + iVar3) + 15)) + Function_157((90 + iVar3) + 15));
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
	Function_156(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_159() //Position: 0x6958 / 26968
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
			iVar2 = ((Function_157((50 + iVar3) + 8) + Function_157((183 + iVar3) + 8)) + Function_157((90 + iVar3) + 8));
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
	Function_156(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_160() //Position: 0x69EF / 27119
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
		iVar2 = ((Function_157((50 + iVar3)) + Function_157((183 + iVar3))) + Function_157((90 + iVar3)));
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
	Function_156(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_161() //Position: 0x6A6E / 27246
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_162(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_156(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_162(int iParam0, bool bParam1, int iParam2) //Position: 0x6AA7 / 27303
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
	Function_114(iParam0, bParam1, 1);
	Function_113(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_102(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_163() //Position: 0x6CB1 / 27825
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_182())
	{
		Function_169(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_169(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_164(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_164(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_70(StackVal, StackVal, vVar0))
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

vector3 Function_164(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6D6C / 28012
{
	int iVar0;
	
	iVar0 = Function_167(uParam2, uParam3);
	if (Function_166(iVar0))
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
	Function_165();
	return StackVal, StackVal, Function_165();
}

vector3 Function_165() //Position: 0x6E53 / 28243
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_166(int iParam0) //Position: 0x6E5C / 28252
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_167(bool bParam0, bool bParam1) //Position: 0x6E72 / 28274
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
				fVar2 = Function_168(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_168(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_166(bVar0) && !bParam1)
	{
		bVar0 = Function_167(bParam0, 1);
	}
	return bVar0;
}

float Function_168(vector3 vParam0, vector3 vParam3) //Position: 0x6F39 / 28473
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_169(var uParam0, int iParam1) //Position: 0x6F56 / 28502
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_171(Global_34573, &vVar4);
	if (!Function_170(Global_30640[0]))
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
	if (!Function_170(Global_30640[2]))
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
	if (!Function_170(Global_30640[1]))
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
	if (!Function_170(Global_30658[1]))
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
	if (!Function_170(Global_30658[3]))
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
	if (!Function_170(Global_30658[2]))
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
	if (!Function_170(Global_30658[4]))
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
	if (!Function_170(Global_30668[0]))
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
	if (!Function_170(Global_30668[1]))
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
	if (!Function_170(Global_30668[2]))
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
	if (!Function_170(Global_30679[0]))
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
	if (!Function_170(Global_30685[0]))
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
	if (!Function_170(Global_30685[1]))
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
	if (!Function_170(Global_30685[2]))
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
	if (!Function_170(Global_30693[0]))
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
	if (!Function_170(Global_30693[1]))
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
	if (!Function_170(Global_30693[2]))
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
	if (!Function_170(Global_30707[2]))
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
	if (!Function_170(Global_30707[3]))
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
	if (!Function_170(Global_30707[0]))
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
	if (!Function_170(Global_30717[0]))
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
	if (!Function_170(Global_30723[2]))
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
	if (!Function_170(Global_30723[1]))
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
	if (!Function_170(Global_30723[0]))
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
	if (!Function_170(Global_30679[1]))
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
	if (!Function_170(Global_30707[1]))
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
	if (Function_70(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_170(int iParam0) //Position: 0x777B / 30587
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_82(bVar0, 0x1000000) || Function_82(bVar0, 0x2000000)) || Function_82(bVar0, 0x4000000)) || !Function_82(bVar0, 0x10000000));
}

void Function_171(bool bParam0, bool bParam1) //Position: 0x77B6 / 30646
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_172(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x77C3 / 30659
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_173(int iParam0, int iParam1) //Position: 0x7867 / 30823
{
	if (!Function_176(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_174(int iParam0) //Position: 0x78BC / 30908
{
	if (!Function_176(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_175(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_175(int iParam0, int iParam1) //Position: 0x790E / 30990
{
	int iVar0;
	
	if (!Function_176(iParam0))
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

bool Function_176(int iParam0) //Position: 0x793B / 31035
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_177() //Position: 0x7951 / 31057
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_82(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_178() //Position: 0x7981 / 31105
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_179(int iParam0) //Position: 0x798A / 31114
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_180(bool bParam0, bool bParam1) //Position: 0x79A6 / 31142
{
	bool bVar0;
	
	bVar0 = Function_157(0);
	if ((Function_157(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_101(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_157(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_101(597, bParam0, 0, 0);
	}
	if ((Function_157(597) + Function_157(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

var Function_181(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7A71 / 31345
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_157(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_121(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

bool Function_182() //Position: 0x7B73 / 31603
{
	if (Function_82(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_183(bool bParam0, bool bParam1) //Position: 0x7B8E / 31630
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_200("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_200("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_47))
			{
				if (bParam1)
				{
					Function_200("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_47);
			}
		}
	}
	if (bParam1)
	{
		Function_200("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_184(bool bParam0, bool bParam1) //Position: 0x7C96 / 31894
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_185(int iParam0) //Position: 0x7CAC / 31916
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
	Function_55(iParam0 + 40, 2);
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
	if (!Function_188(iParam0->f_12))
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
		if (Function_82(iParam0->f_40, 32))
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
	if (Function_187(iParam0->f_12))
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
	if (Function_89(iParam0->f_12))
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
	Function_186(iParam0->f_16, iVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_186(bool bParam0, int iParam1) //Position: 0x7F62 / 32610
{
	bool bVar0;
	
	iLocal_5 = 0;
	iParam1 = iParam1;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		fLocal_11 = Function_71(bParam0);
		iLocal_4 = 1;
		if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "IsMale"))
		{
			bVar0 = DECOR_GET_BOOL(GET_TARGET_OBJECT(), "IsMale");
			if (bVar0)
			{
				AUDIO_TRIGGER_PLAYER_LOOTING_MALE_SPEECH();
			}
			else
			{
				AUDIO_TRIGGER_PLAYER_LOOTING_FEMALE_SPEECH();
			}
			DECOR_REMOVE(GET_TARGET_OBJECT(), "IsMale");
		}
	}
	return;
}

bool Function_187(bool bParam0) //Position: 0x7FC2 / 32706
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_188(bool bParam0) //Position: 0x7FDB / 32731
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_189(bool bParam0, int iParam1) //Position: 0x7FF5 / 32757
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_190(iParam1, &bVar0);
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

bool Function_190(var uParam0, int iParam1) //Position: 0x802F / 32815
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_191(int iParam0, int iParam1) //Position: 0x8046 / 32838
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
				if (!Function_179(6))
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
		if (!Function_195(bVar1, iParam0->f_12))
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
		if (!Function_82(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_55(iParam0 + 40, 1);
			}
			else
			{
				Function_37(iParam0 + 40, 1);
			}
			if (Function_82(iParam0->f_40, 1))
			{
				Function_184("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_59(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_59(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_194(iParam0->f_12);
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
				if (!Function_193(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_192(iParam0->f_12);
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

bool Function_192(bool bParam0) //Position: 0x830F / 33551
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_193(bool bParam0, bool bParam1) //Position: 0x832C / 33580
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

bool Function_194(int iParam0) //Position: 0x83C8 / 33736
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_195(bool bParam0, int iParam1) //Position: 0x83E7 / 33767
{
	iParam1 = iParam1;
	if (NET_IS_IN_SESSION() || Function_178())
	{
		return 0;
	}
	if (IS_ACTOR_ON_BOAT(bParam0))
	{
		return 0;
	}
	if (!iLocal_7)
	{
		if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "Corpse_loot_gringo"))
		{
			if (!DECOR_GET_BOOL(GET_TARGET_OBJECT(), "Corpse_loot_gringo"))
			{
				iLocal_7 = 1;
				return 0;
			}
		}
	}
	return 0;
	if (Global_34207 != 4294967295)
	{
		if (TRAIN_GET_LOD_LEVEL(Global_34207) != 1 && TRAIN_GET_NUM_CARS(Global_34207) < 0)
		{
			if (TRAIN_GET_VELOCITY(Global_34207) < 0.0f)
			{
				if (IS_ACTOR_ON_TRAIN(bParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (Global_34206 != 4294967295)
	{
		if (TRAIN_GET_LOD_LEVEL(Global_34206) != 1 && TRAIN_GET_NUM_CARS(Global_34206) < 0)
		{
			if (TRAIN_GET_VELOCITY(Global_34206) < 0.0f)
			{
				if (IS_ACTOR_ON_TRAIN(bParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void Function_196(int iParam0) //Position: 0x84B7 / 33975
{
	iParam0 = iParam0;
	return;
}

void Function_197(bool bParam0, int iParam1) //Position: 0x84C1 / 33985
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_198(&(Local_15[iLocal_4012]), bParam0);
		iLocal_40++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 2)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_197(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_198(int iParam0, int iParam1) //Position: 0x8523 / 34083
{
	iParam0->f_12 = iParam1;
	Function_37(iParam0 + 40, 1);
	return;
}

void Function_199(int iParam0) //Position: 0x8537 / 34103
{
	iParam0 = iParam0;
	return;
}

void Function_200(int iParam0) //Position: 0x8541 / 34113
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

