//Decompiled with MagicRDR v1.0
//Function Count : 247
//Statics Count : 61
//Natives Count : 401
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	var uLocal_1 = 1;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	float fLocal_5 = 0.0f;
	float fLocal_6 = 0.0f;
	float fLocal_7 = 0.0f;
	float fLocal_8 = 0.0f;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
	bool bLocal_17 = false;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	int iLocal_26 = 0;
	struct<12> Local_27[2];
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	char* cLocal_56 = NULL;
	int iLocal_57 = 0;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
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
	
	iLocal_9 = 0;
	iLocal_10 = 0;
	iLocal_11 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_246("STARTS");
	Function_245(uScriptParam_0);
	iLocal_52 = 0;
	Function_243(uScriptParam_0, &iLocal_52);
	while (IS_GRINGO_ACTIVE())
	{
		Function_242(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_53);
		}
		iVar2 = 0;
		bLocal_58 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_52 - 1))
			{
				if (Local_27[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_52;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_58 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_236(&(Local_27[iVar312]), &bVar4))
						{
							Function_234(GRINGO_GET_REQUESTING_ACTOR(), Local_27[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_236(&(Local_27[iVar312]), &bVar4))
						{
							Function_234(GRINGO_GET_REQUESTING_ACTOR(), Local_27[iVar312].f_12);
							if (bVar4)
							{
								Function_228(&(Local_27[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_27[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_227("eGRINGO_EndUse: Stop use by request", Local_27[iVar312].f_16);
							Function_226(Local_27[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_27[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_27[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_27[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_27[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_188(&(Local_27[iVar312]), 0);
							}
							else if (Local_27[iVar312].f_44 < 8)
							{
								Function_187(&(Local_27[iVar312]));
								Local_27[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_246("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_52 - 1))
			{
				if (Function_186(Local_27[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_27[iVar012])))
					{
						Function_246("Quitting due to update end");
						Function_188(&(Local_27[iVar012]), 1);
					}
				}
				if (Function_15(&(Local_27[iVar012]), 0))
				{
					Function_5(&(Local_27[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_52 - 1))
		{
			if (Function_186(Local_27[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_58)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_59))
	{
		Function_246("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_59);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_52 - 1))
	{
		if (Function_186(Local_27[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_27[iVar012].f_16);
			Function_188(&(Local_27[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_27[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_27[iVar012].f_12);
		}
		Function_15(&(Local_27[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_246("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x428 / 1064
{
	iParam0 = iParam0;
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x432 / 1074
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

int Function_3() //Position: 0x46D / 1133
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x474 / 1140
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	iParam0 = iParam0;
	if (!iLocal_11)
	{
		bVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
		if (STRING_CONTAINS_STRING(bVar0, "NoProp"))
		{
			GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &uVar1);
			bVar4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Safe", &uVar1, 2.0f, 0);
			if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(bVar4)))
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bVar4));
				iLocal_11 = 1;
			}
		}
		else
		{
			iLocal_11 = 1;
		}
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0x50B / 1291
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_186(bParam0->f_40, 2))
	{
		Function_226(bParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_14(bParam0))
	{
		if (bParam0->f_44 == 6)
		{
			if (Function_12(bParam0) <= Function_10(bParam0->f_12))
			{
				if (IS_ACTOR_VALID(bParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(bParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							bVar1 = Function_8(bParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_58 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_59))
								{
									Function_246("ManagePlayerQuit: Create quit context");
									if (Function_7(bParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_59 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_59 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_59))
								{
									Function_2("USE CONTEXT QUIT", bParam0->f_16);
									Function_187(bParam0);
									bParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_59))
									{
										Function_246("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_59);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", bParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(bParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(bParam0->f_16, "LobbyGringo"))
								{
									if (Function_6(bParam0->f_16))
									{
										Function_187(bParam0);
										Function_2("STICK QUIT", bParam0->f_16);
										bParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_59))
										{
											Function_246("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_59);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_59))
							{
								Function_246("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_59);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_59))
		{
			Function_246("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_59);
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x7F5 / 2037
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

bool Function_7(bool bParam0, bool bParam1, int iParam2) //Position: 0x8EF / 2287
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

bool Function_8(bool bParam0, int iParam1) //Position: 0x90B / 2315
{
	return Function_9(bParam0, "UseQuit", iParam1);
}

bool Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x922 / 2338
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

float Function_10(bool bParam0) //Position: 0x967 / 2407
{
	return Function_11(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(bool bParam0, bool bParam1, int iParam2) //Position: 0x984 / 2436
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_12(bool bParam0) //Position: 0x99A / 2458
{
	if (Function_14(bParam0))
	{
		if (Function_13(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_13(bool bParam0) //Position: 0xA62 / 2658
{
	return Function_186(*bParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xA6F / 2671
{
	return Function_186(*iParam0, 1);
}

bool Function_15(var uParam0, int iParam1) //Position: 0xA7C / 2684
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

bool Function_16(bool bParam0) //Position: 0xAC4 / 2756
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
	
	bVar12 = Function_185(bParam0->f_12);
	if (!(IS_ACTOR_VALID(bParam0->f_16) && IS_ACTOR_ALIVE(bParam0->f_16)))
	{
		Function_227("UpdateUse with invalid actor", bParam0->f_16);
		return 0;
	}
	if (!Function_7(bParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bParam0->f_16)) >= 0.5f)
		{
			Function_227("Damage quit", bParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(bParam0->f_16))
	{
		Function_227("Incapacitation quit", bParam0->f_16);
		return 0;
	}
	GET_POSITION(bParam0->f_16, &vVar17);
	bVar21 = true;
	if (bParam0->f_44 < 4)
	{
		iVar23 = STRING_TO_HASH("SharedPropName");
	}
	switch (bParam0->f_44)
	{
		case 0x00000002:
			bLocal_58 = true;
			if (IS_ACTOR_PLAYER(bParam0->f_16))
			{
				if (Function_184(bParam0->f_12, &fVar24))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar25);
					vVar25.f_4 = (vVar25.y + (fVar24 + 0.1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						bVar28 = IS_AREA_OBSTRUCTED2(vVar25, fVar24, GET_PHYSINST_FROM_ACTOR(bParam0->f_16), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						bVar28 = IS_AREA_OBSTRUCTED(vVar25, fVar24, bParam0->f_16, 0);
					}
					if (IS_ACTOR_ON_TRAIN(bParam0->f_16, 0) || bVar28)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						bParam0->f_44 = 7;
						Function_2("Skip to eRewarding", bParam0->f_16);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(bParam0->f_12))
			{
				if (Function_179(bParam0->f_16, bParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", bParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(bParam0->f_16, 1);
					bParam0->f_44 = 1;
					Function_178(bParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(bParam0->f_16, 1);
				bParam0->f_44 = 1;
				Function_178(bParam0);
			}
			if (!Function_177(bParam0->f_12) && bParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", bParam0->f_16);
				SET_ACTOR_POSTURE(bParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_58 = true;
			Function_176(bParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(bParam0->f_16)) && !Function_186(bParam0->f_40, 1)) && !DECOR_CHECK_EXIST(bParam0->f_16, "NoGringoCamera"))
			{
				Function_175(bParam0->f_12);
			}
			fVar20 = Function_174(bParam0->f_12);
			if (Function_12(bParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", bParam0->f_16);
				return 0;
			}
			if (Function_186(bParam0->f_40, 1))
			{
				Function_169(bParam0->f_12, &vVar3, &uVar6);
				if (!Function_186(bParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(bParam0->f_12))
					{
						Function_2("SUSPEND MOVER", bParam0->f_16);
						SUSPEND_MOVER(bParam0->f_16);
						Function_168(bParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(bParam0->f_12))
					{
						Function_2("nFIX MOVER", bParam0->f_16);
						SET_MOVER_FROZEN(bParam0->f_16, 1);
						Function_168(bParam0 + 40, 16);
					}
				}
				Function_2("MID ACTION TELEPORT", bParam0->f_16);
				vVar29.y = uVar6;
				if (DECOR_CHECK_EXIST(bParam0->f_16, "NoTeleport"))
				{
					SET_OBJECT_POSITION(bParam0->f_16, vVar3);
					SET_OBJECT_ORIENTATION(bParam0->f_16, vVar29);
					DECOR_REMOVE(bParam0->f_16, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(bParam0->f_16, vVar3, uVar6, 1, 1, Function_167());
				}
				if (!Function_186(bParam0->f_40, 1024))
				{
					Function_168(bParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(bParam0->f_16, Function_7(bParam0->f_12, "AllowGestures", 1));
				}
				bParam0->f_44 = 3;
			}
			else if (Function_179(bParam0->f_16, bParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(bParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", bParam0->f_16);
				if (!Function_186(bParam0->f_40, 1024))
				{
					Function_168(bParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(bParam0->f_16, Function_7(bParam0->f_12, "AllowGestures", 1));
				}
				bParam0->f_44 = 3;
			}
			if (bParam0->f_44 != 3 && !Function_186(bParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(bParam0->f_12))
				{
					Function_2("SUSPEND MOVER", bParam0->f_16);
					SUSPEND_MOVER(bParam0->f_16);
					Function_168(bParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(bParam0->f_12))
				{
					Function_2("nFIX MOVER", bParam0->f_16);
					SET_MOVER_FROZEN(bParam0->f_16, 1);
					Function_168(bParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_186(bParam0->f_40, 32))
			{
				bLocal_58 = true;
				if (!ACTOR_IS_HOLSTERED(bParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", bParam0->f_16);
			}
			bParam0->f_44 = 4;
		
		case 0x00000004:
			Function_166(bParam0->f_12);
			bLocal_58 = true;
			Function_165(bParam0);
			Function_163(bParam0, Function_164(bParam0->f_12));
			if (DECOR_CHECK_EXIST(bParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(bParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", bParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_186(bParam0->f_40, 1);
			}
			bVar0 = Function_162(bParam0->f_16, bParam0->f_12, bVar33);
			if (!IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				bParam0->f_44 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(bParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(bParam0->f_12))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(bParam0->f_16, 1);
				}
			}
			else if (bVar12)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(bParam0->f_16, bVar0, bVar33))
				{
					if (IS_ACTOR_LOCAL_PLAYER(bParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(bParam0->f_12))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(bParam0->f_16, 1);
					}
					bParam0->f_44 = 5;
					iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0->f_12, 0);
					while (iVar11 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, bParam0->f_12);
						if (GRINGO_ATTACH_PROP_TO_ANIM(bParam0->f_16, bVar1, Function_9(bVar1, "AttachBone", &bVar10), Function_9(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_161(bVar1, bParam0->f_16);
							if (DECOR_CHECK_EXIST(bParam0->f_16, "LobbyGringo"))
							{
								bVar34 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
								if (IS_PHYSINST_VALID(bVar34))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar34, 0);
								}
							}
						}
						iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0->f_12, iVar11 + 1);
					}
					bVar13 = false;
					uVar15 = GRINGO_GET_ATTRIBUTE(bParam0->f_12, bVar13);
					while (bVar13 <= GRINGO_GET_ATTRIBUTE_COUNT(bParam0->f_12))
					{
						uVar15 = GRINGO_GET_ATTRIBUTE(bParam0->f_12, bVar13);
						if (GRINGO_IS_ATTRIBUTE_VALID(uVar15))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar15) == 2)
							{
								if (iVar23 == GRINGO_GET_ATTRIBUTE_HASH(uVar15))
								{
									iVar16 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar15, &uVar14);
									iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(bParam0->f_12, 0), 0);
									while (iVar11 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, GRINGO_GET_PARENT_COMPONENT(bParam0->f_12, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(bParam0->f_16, bVar1, Function_9(bVar1, "AttachBone", &bVar10), Function_9(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(bParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_161(bVar1, bParam0->f_16);
										}
										iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(bParam0->f_12, 0), iVar11 + 1);
									}
								}
							}
						}
						bVar13++;
					}
				}
			}
			if (bParam0->f_44 == 5)
			{
				Function_2("KICKED TO DOING START", bParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_153(bParam0, bVar8, &iLocal_57, &cLocal_56);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_168(bParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_152(bParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, bParam0 + 20);
				if (Function_186(bParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(bParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNSUSPEND", bParam0->f_16);
						UNK_0x4A1D2E25(bParam0->f_16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(bParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNFIX", bParam0->f_16);
						UNK_0x817B6952(bParam0->f_16);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(bParam0->f_12, 1);
				if (Function_151(bParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(bParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_150(bParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(bParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_149(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_148(bParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(bParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_149(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, bParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_147(bParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(bParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_149(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_146(bParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(bParam0->f_16))
					{
						Function_168(bParam0 + 40, 8);
					}
					else
					{
						Function_152(bParam0 + 40, 8);
					}
					if (Function_186(bParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(bParam0->f_16, 1);
					}
				}
				else
				{
					Function_152(bParam0 + 40, 8);
				}
				if (Function_145(bParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(bParam0->f_16, 1, 1);
					UNK_0xC17BAD12(bParam0->f_16);
				}
				bVar37 = Function_9(bParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(bParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_7(bParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(bParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(bParam0->f_16, 0);
					}
				}
				Function_102(bParam0->f_16, bParam0->f_12);
				bVar40 = Function_7(bParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(bParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(bParam0->f_16))
			{
				Function_101();
			}
			bParam0->f_44 = 6;
			if (Function_186(bParam0->f_40, 1))
			{
				if (Function_100(bParam0->f_12))
				{
					Function_2("MID ACTION NODE", bParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_26(bParam0->f_16, bParam0->f_12))
			{
				Function_2("CUSTOM QUIT DURING USE", bParam0->f_16);
				bParam0->f_44 = 8;
			}
			bVar0 = Function_162(bParam0->f_16, bParam0->f_12, Function_186(bParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(bParam0->f_16, bVar0))
				{
					Function_2("ANIMATION QUIT DURING USE", bParam0->f_16);
					if (GRINGO_WAS_USE_SUCCESSFUL(bParam0->f_16))
					{
						bParam0->f_44 = 7;
					}
					else
					{
						bParam0->f_44 = 8;
					}
				}
			}
			if (Function_12(bParam0) <= Function_10(bParam0->f_12))
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(bParam0->f_16, bParam0->f_12);
			}
			if (!IS_ACTOR_PLAYER(bParam0->f_16))
			{
				if (AI_SPEECH_GET_ALLOW_FOR_ACTOR(bParam0->f_16))
				{
					bVar41 = GRINGO_GET_FIRST_NAMED_CHILD("SpeechConts", 4, bParam0->f_12);
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
									SAY_SINGLE_LINE_STRING(bParam0->f_16, bVar53, bVar48, bVar47, iVar54, 0, bVar49, bVar50);
								}
							}
						}
					}
				}
			}
			if (bParam0->f_44 == 6)
			{
				bVar60 = Function_25(bParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(bParam0 + 20)) < bVar60)
					{
						Function_2("UPDATE USE TOO FAR", bParam0->f_16);
						if (Function_24())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(vVar57, *(bParam0 + 20)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(bVar60);
							PRINTSTRING(" ] ");
							PRINTNL();
						}
						bParam0->f_44 = 8;
					}
				}
			}
			if (bParam0->f_44 == 6)
			{
				if (NET_IS_IN_SESSION())
				{
					bVar21 = NET_IS_OBJECT_LOCAL(bParam0->f_16);
				}
				if (IS_TASKED_TO_USE_GRINGO_FOREVER(bParam0->f_16, GRINGO_GET_MY_GRINGO_ID()))
				{
					bVar21 = false;
				}
				if (bVar21)
				{
					if (Function_23(bParam0->f_12) <= 0.0f)
					{
						if (Function_12(bParam0) < Function_23(bParam0->f_12))
						{
							Function_2("UPDATE USE USETIME SATISFIED", bParam0->f_16);
							bParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_246("nRewarding");
			Function_22(bParam0->f_16, bParam0->f_12);
			Function_21(bParam0->f_16, bParam0->f_12);
			Function_20(bParam0->f_16, bParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(bParam0->f_16, "LastUserObject", bParam0->f_12);
			Function_168(bParam0 + 40, 64);
			bParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_58 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(bParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(bParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_7(bParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_175(bParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(bParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_7(bParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", bParam0->f_16);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", bParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(bParam0->f_16);
			bParam0->f_44 = 9;
			Function_18(bParam0->f_16, bParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_186(bParam0->f_40, 1024))
			{
				Function_152(bParam0 + 40, 1024);
				if (!Function_7(bParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(bParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(bParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(bParam0->f_16, 1);
			}
			bLocal_58 = true;
			bVar0 = Function_162(bParam0->f_16, bParam0->f_12, Function_186(bParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(bParam0->f_16, bVar0))
				{
					Function_2("ANIMATION FINISHED", bParam0->f_16);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_17(bParam0->f_16, bParam0->f_44);
	return 1;
}

void Function_17(bool bParam0, int iParam1) //Position: 0x1C15 / 7189
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1C2A / 7210
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_19() //Position: 0x1C38 / 7224
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

void Function_20(var uParam0, bool bParam1) //Position: 0x1C69 / 7273
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

void Function_21(var uParam0, bool bParam1) //Position: 0x1CDD / 7389
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

void Function_22(var uParam0, int iParam1) //Position: 0x1D4F / 7503
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1D5D / 7517
{
	return Function_11(bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1D73 / 7539
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1D80 / 7552
{
	return Function_11(bParam0, "MoveAllowance", 1.5f);
}

bool Function_26(bool bParam0, int iParam1) //Position: 0x1DA0 / 7584
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iParam1 = iParam1;
	bParam0 = bParam0;
	if ((IS_ACTOR_LOCAL_PLAYER(bParam0) && HAS_STRING_TABLE_LOADED("nminigames")) && UNK_0x9D20BDC4("numberSystem"))
	{
		if (IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/picking/stoped") && iLocal_9 > 4)
		{
			if (!IS_OBJECT_VALID(bLocal_20))
			{
				iLocal_26 = 0;
				FLASH_SET_BOOL("numberSystem", "showCrackSafe", 1);
				FLASH_SET_FLOAT("numberSystem", "rotCrackSafe", 0.0f);
				FLASH_SET_INT("numberSystem", "lock1active", false);
				FLASH_SET_INT("numberSystem", "lock2active", false);
				FLASH_SET_INT("numberSystem", "lock3active", false);
				FLASH_SET_INT("numberSystem", "unlock1", false);
				FLASH_SET_INT("numberSystem", "unlock2", false);
				FLASH_SET_INT("numberSystem", "unlock3", false);
				FLASH_SET_INT("numberSystem", "lockval", false);
				if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "SOL_Safe"))
				{
					bLocal_20 = Function_96(GET_AMBIENT_LAYOUT(), 0, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1, 0, 0);
				}
				else
				{
					bLocal_20 = Function_92(GET_AMBIENT_LAYOUT(), 0, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1, 0, 1);
					if (!IS_OBJECT_VALID(bLocal_20))
					{
						bLocal_20 = Function_88(GET_AMBIENT_LAYOUT(), 0, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1, 0, 0);
					}
				}
				if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "iLockerFail"))
				{
					DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "iLockerFail");
				}
				Function_178(&bLocal_21);
			}
		}
		if (IS_OBJECT_VALID(bLocal_20))
		{
			fVar0 = GET_STICK_X(Function_86(), 0, 1);
			if (fVar0 < -0.3f && fVar0 > 0.3f)
			{
				fVar0 = 0.0f;
			}
			iLocal_26 = (iLocal_26 + FLOOR((fVar0 * 2.0f)));
			if (iLocal_26 <= 0)
			{
				iLocal_26 += 360;
			}
			else if (iLocal_26 > 360)
			{
				iLocal_26 = (iLocal_26 - 360);
			}
			bVar1 = FLOOR(FLASH_GET_FLOAT("numberSystem", "rotCrackSafe"));
			if (iLocal_9 <= 4)
			{
				if (iLocal_26 >= 4294966296)
				{
					if (iLocal_26 >= bVar1)
					{
						iVar3 = (iLocal_26 - bVar1);
						if (iVar3 >= 10)
						{
							if (bVar1 <= 10)
							{
								iVar4 = (360 - iLocal_26);
							}
							else
							{
								iVar4 = 10;
							}
						}
						else
						{
							iVar4 = iVar3;
						}
						PLAY_SOUND_FRONTEND("HUD_SAFE_TUMBLER_TURN_MASTER");
						if (iVar3 >= 180)
						{
							bVar2 = (bVar1 - iVar4);
							if (iLocal_4 == 0)
							{
								iLocal_3++;
							}
							else
							{
								iLocal_3 = 0;
							}
							iLocal_4 = 0;
							if (!IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/picking/left"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bParam0, "knl_picksafe/picking/left");
							}
						}
						else
						{
							bVar2 = (bVar1 + iVar4);
							if (iLocal_4 == 1)
							{
								iLocal_3++;
							}
							else
							{
								iLocal_3 = 0;
							}
							iLocal_4 = 1;
							if (!IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/picking/right"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bParam0, "knl_picksafe/picking/right");
							}
						}
					}
					else if (iLocal_26 <= bVar1)
					{
						iVar3 = (bVar1 - iLocal_26);
						if (iVar3 >= 10)
						{
							if (bVar1 >= 350)
							{
								iVar4 = (iLocal_26 + 360 - bVar1);
							}
							else
							{
								iVar4 = 10;
							}
						}
						else
						{
							iVar4 = iVar3;
						}
						PLAY_SOUND_FRONTEND("HUD_SAFE_TUMBLER_TURN_MASTER");
						if (iVar3 >= 180)
						{
							bVar2 = (bVar1 + iVar4);
							if (iLocal_4 == 1)
							{
								iLocal_3++;
							}
							else
							{
								iLocal_3 = 0;
							}
							iLocal_4 = 1;
							if (!IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/picking/right"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bParam0, "knl_picksafe/picking/right");
							}
						}
						else
						{
							bVar2 = (bVar1 - iVar4);
							if (iLocal_4 == 0)
							{
								iLocal_3++;
							}
							else
							{
								iLocal_3 = 0;
							}
							iLocal_4 = 0;
							if (!IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/picking/left"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bParam0, "knl_picksafe/picking/left");
							}
						}
					}
					else
					{
						bVar2 = bVar1;
						if (!IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/picking/stoped"))
						{
							if (!IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/pre"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bParam0, "knl_picksafe/picking/stoped");
							}
						}
					}
					if (bVar2 <= 0)
					{
						bVar2 += 360;
					}
					else if (bVar2 > 360)
					{
						bVar2 = (bVar2 - 360);
					}
					FLASH_SET_FLOAT("numberSystem", "rotCrackSafe", TO_FLOAT(bVar2));
				}
				else if (!IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/picking/stoped"))
				{
					if (!IS_ACTION_NODE_PLAYING(bParam0, "knl_picksafe/pre"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bParam0, "knl_picksafe/picking/stoped");
					}
				}
			}
			if (IS_OBJECT_VALID(bLocal_20) && iLocal_9 > 4)
			{
				Function_82(1, 13, "SafeCracking_MoveDial", 1, 0, 0, 0, 0);
			}
			switch (iLocal_9)
			{
				case 0x00000000:
					if (IS_OBJECT_VALID(bLocal_20))
					{
						if (Function_76(&uLocal_1, 0))
						{
							Function_75("SafeCracking_ResetToZero", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					FLASH_SET_INT("numberSystem", "lock1active", false);
					FLASH_SET_INT("numberSystem", "lock2active", false);
					FLASH_SET_INT("numberSystem", "lock3active", false);
					FLASH_SET_INT("numberSystem", "unlock1", false);
					FLASH_SET_INT("numberSystem", "unlock2", false);
					FLASH_SET_INT("numberSystem", "unlock3", false);
					FLASH_SET_INT("numberSystem", "lockval", false);
					fLocal_6 = 345.0f;
					fLocal_5 = 15.0f;
					fLocal_8 = 345.0f;
					fLocal_7 = 15.0f;
					if ((IntToFloat(bVar1) >= fLocal_5 && bVar1 <= 0) || ((bVar1 >= 360 && IntToFloat(bVar1) < fLocal_6) && iLocal_26 < 4294966296))
					{
						PLAYER_RUMBLE("RUMBLE_LOCKPICK", 4294967295, 0);
						if ((IntToFloat(bVar1) >= fLocal_7 && bVar1 <= 0) || ((bVar1 >= 360 && IntToFloat(bVar1) < fLocal_8) && iLocal_26 < 4294966296))
						{
							if (Function_13(&bLocal_17))
							{
								Function_73(&bLocal_17);
							}
							PLAYER_RUMBLE("RUMBLE_LOCKPICK2", 4294967295, 0);
							if (Function_12(&bLocal_17) < 0.75f)
							{
								iLocal_9++;
								iLocal_4 = 0;
								iLocal_3 = 0;
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_70("SafeCracking_1stNumberUnlocked", -1.0f, 0, 2, 0, 0, 0, 0);
							}
						}
						else
						{
							Function_69(&bLocal_17);
						}
					}
					else
					{
						Function_69(&bLocal_17);
					}
					break;
				
				case 0x00000001:
					if (IS_OBJECT_VALID(bLocal_20))
					{
						if (Function_76(&uLocal_1, 1))
						{
							Function_75("SafeCracking_1stNumberClockWise", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_70("SafeCracking_1stNumberUnlocked", -1.0f, 0, 2, 0, 0, 0, 0);
					}
					FLASH_SET_INT("numberSystem", "lock1active", true);
					fLocal_6 = (fLocal_12[iLocal_9] - 15.0f);
					fLocal_5 = (fLocal_12[iLocal_9] + 15.0f);
					fLocal_8 = (fLocal_12[iLocal_9] - 15.0f);
					fLocal_7 = (fLocal_12[iLocal_9] + 15.0f);
					if (((IntToFloat(bVar1) >= fLocal_5 && IntToFloat(bVar1) <= fLocal_6) && iLocal_4 != 1) && iLocal_26 < 4294966296)
					{
						PLAYER_RUMBLE("RUMBLE_LOCKPICK", 4294967295, 0);
						FLASH_SET_INT("numberSystem", "lockval", true);
						if ((IntToFloat(bVar1) >= fLocal_7 && IntToFloat(bVar1) <= fLocal_8) && iLocal_26 < 4294966296)
						{
							if (Function_13(&bLocal_17))
							{
								Function_73(&bLocal_17);
							}
							PLAYER_RUMBLE("RUMBLE_LOCKPICK2", 4294967295, 0);
							FLASH_SET_INT("numberSystem", "lockval", 2);
							if (Function_12(&bLocal_17) < 0.75f)
							{
								FLASH_SET_INT("numberSystem", "unlock1", true);
								FLASH_SET_INT("numberSystem", "lockval", false);
								FLASH_SET_INT("numberSystem", "lock1active", false);
								iLocal_9++;
								iLocal_4 = 0;
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_70("SafeCracking_2ndNumberUnlocked", -1.0f, 0, 2, 0, 0, 0, 0);
								PLAY_SOUND("HUD_SAFE_COMBINATION_LOCK_RELEASE_MASTER");
								iLocal_3 = 0;
							}
						}
						else
						{
							Function_69(&bLocal_17);
						}
					}
					else
					{
						Function_69(&bLocal_17);
						FLASH_SET_INT("numberSystem", "lockval", false);
					}
					if (iLocal_4 != 0 && iLocal_3 < 12)
					{
						Function_68();
						iLocal_9 = 0;
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_70("SafeCracking_Retry", -1.0f, 0, 2, 0, 0, 0, 0);
						Function_69(&bLocal_17);
						DECOR_SET_INT(bParam0, "iLockerFail", true);
					}
					break;
				
				case 0x00000002:
					if (IS_OBJECT_VALID(bLocal_20))
					{
						if (Function_76(&uLocal_1, 2))
						{
							Function_75("SafeCracking_2ndNumberCounterClockWise", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					FLASH_SET_INT("numberSystem", "lock2active", true);
					fLocal_6 = (fLocal_12[iLocal_9] - 15.0f);
					fLocal_5 = (fLocal_12[iLocal_9] + 15.0f);
					fLocal_8 = (fLocal_12[iLocal_9] - 15.0f);
					fLocal_7 = (fLocal_12[iLocal_9] + 15.0f);
					if (((IntToFloat(bVar1) >= fLocal_5 && IntToFloat(bVar1) <= fLocal_6) && iLocal_4 != 0) && iLocal_26 < 4294966296)
					{
						PLAYER_RUMBLE("RUMBLE_LOCKPICK", 4294967295, 0);
						FLASH_SET_INT("numberSystem", "lockval", true);
						if ((IntToFloat(bVar1) >= fLocal_7 && IntToFloat(bVar1) <= fLocal_8) && iLocal_26 < 4294966296)
						{
							if (Function_13(&bLocal_17))
							{
								Function_73(&bLocal_17);
							}
							PLAYER_RUMBLE("RUMBLE_LOCKPICK2", 4294967295, 0);
							FLASH_SET_INT("numberSystem", "lockval", 2);
							if (Function_12(&bLocal_17) < 0.75f)
							{
								FLASH_SET_INT("numberSystem", "unlock2", true);
								FLASH_SET_INT("numberSystem", "lockval", false);
								FLASH_SET_INT("numberSystem", "lock2active", false);
								iLocal_9++;
								iLocal_4 = 1;
								iLocal_3 = 0;
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_70("SafeCracking_3rdNumberUnlocked", -1.0f, 0, 2, 0, 0, 0, 0);
								PLAY_SOUND("HUD_SAFE_COMBINATION_LOCK_RELEASE_MASTER");
							}
						}
						else
						{
							Function_69(&bLocal_17);
						}
					}
					else
					{
						Function_69(&bLocal_17);
						FLASH_SET_INT("numberSystem", "lockval", false);
					}
					if (iLocal_4 != 1 && iLocal_3 < 12)
					{
						Function_68();
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_70("SafeCracking_Retry", -1.0f, 0, 2, 0, 0, 0, 0);
						iLocal_9 = 0;
						Function_69(&bLocal_17);
						DECOR_SET_INT(bParam0, "iLockerFail", true);
					}
					break;
				
				case 0x00000003:
					if (IS_OBJECT_VALID(bLocal_20))
					{
						if (Function_76(&uLocal_1, 3))
						{
							Function_75("SafeCracking_3rdNumberClockWise", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					FLASH_SET_INT("numberSystem", "lock3active", true);
					fLocal_6 = (fLocal_12[iLocal_9] - 15.0f);
					fLocal_5 = (fLocal_12[iLocal_9] + 15.0f);
					fLocal_8 = (fLocal_12[iLocal_9] - 15.0f);
					fLocal_7 = (fLocal_12[iLocal_9] + 15.0f);
					if (fLocal_6 > 0.0f)
					{
						fLocal_6 = (360.0f + fLocal_6);
					}
					if (fLocal_5 < 360.0f)
					{
						fLocal_5 = (fLocal_5 - 360.0f);
					}
					if (fLocal_8 > 0.0f)
					{
						fLocal_8 = (360.0f + fLocal_8);
					}
					if (fLocal_7 < 360.0f)
					{
						fLocal_7 = (fLocal_7 - 360.0f);
					}
					if (((IntToFloat(bVar1) >= fLocal_5 && IntToFloat(bVar1) <= fLocal_6) && iLocal_4 != 1) && iLocal_26 < 4294966296)
					{
						PLAYER_RUMBLE("RUMBLE_LOCKPICK", 4294967295, 0);
						FLASH_SET_INT("numberSystem", "lockval", true);
						if ((IntToFloat(bVar1) >= fLocal_7 && IntToFloat(bVar1) <= fLocal_8) && iLocal_26 < 4294966296)
						{
							if (Function_13(&bLocal_17))
							{
								Function_73(&bLocal_17);
							}
							PLAYER_RUMBLE("RUMBLE_LOCKPICK2", 4294967295, 0);
							FLASH_SET_INT("numberSystem", "lockval", 2);
							if (Function_12(&bLocal_17) < 0.75f)
							{
								FLASH_SET_INT("numberSystem", "unlock3", true);
								FLASH_SET_INT("numberSystem", "lockval", false);
								FLASH_SET_INT("numberSystem", "lock3active", false);
								iLocal_9++;
								Function_68();
								Function_73(&bLocal_17);
								PLAY_SOUND("HUD_SAFE_COMBINATION_LOCK_RELEASE_MASTER");
							}
						}
						else
						{
							Function_69(&bLocal_17);
						}
					}
					else
					{
						Function_69(&bLocal_17);
						FLASH_SET_INT("numberSystem", "lockval", false);
					}
					if (iLocal_4 != 0 && iLocal_3 < 12)
					{
						Function_68();
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_70("SafeCracking_Retry", -1.0f, 0, 2, 0, 0, 0, 0);
						iLocal_9 = 0;
						Function_69(&bLocal_17);
						DECOR_SET_INT(bParam0, "iLockerFail", true);
					}
					break;
				
				case 0x00000004:
					if (Function_12(&bLocal_17) < 0.5f)
					{
						Function_67(0);
						Function_67(1);
						Function_67(2);
						FLASH_SET_INT("numberSystem", "iHowManyPressed", false);
						FLASH_SET_BOOL("numberSystem", "showCrackSafe", 0);
						if (!Global_3380 && !DECOR_CHECK_EXIST(Global_34573, "FortMercerSafe"))
						{
							Function_29(4294967196, 1, 0);
						}
						iLocal_10 = 1;
						DECOR_SET_INT(bParam0, "iLockerOpen", true);
						SET_ACTION_NODE_FOR_ACTOR(bParam0, "knl_picksafe/Completed");
						PLAY_SOUND_FRONTEND("HUD_PICKUP_MONEY_MASTER");
						Function_69(&bLocal_21);
						if (CAMERA_GET_CURRENT_TRANSITION_TYPE(GET_CAMERA_FROM_CUTSCENEOBJECT(bLocal_20)) == 1)
						{
							END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(bLocal_20));
						}
						Function_27();
						Function_82(0, 1, "SafeCracking_Skip", 1, 0, 0, 0, 0);
						iLocal_9++;
					}
					break;
				
				case 0x00000005:
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "knl_picksafe"))
					{
						return 0;
					}
					if (IS_BUTTON_PRESSED(Function_86(), 6, 1, 0))
					{
						Function_67(0);
						HUD_FADE_OUT(1.0f, 1f, 1);
						iLocal_9 = 6;
					}
					break;
				
				case 0x00000006:
					if (HUD_IS_FADED())
					{
						DESTROY_OBJECT(bLocal_20);
						RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
						if (!IS_GAME_RESETTING())
						{
							HUD_FADE_IN(1.0f, 1065353216);
						}
						return 0;
					}
					break;
				}
		}
		if (IS_OBJECT_VALID(bLocal_20) && iLocal_9 > 4)
		{
			if (IS_BUTTON_PRESSED(Function_86(), 5, 1, 0))
			{
				if (CAMERA_GET_CURRENT_TRANSITION_TYPE(GET_CAMERA_FROM_CUTSCENEOBJECT(bLocal_20)) == 1)
				{
					END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(bLocal_20));
				}
				Function_27();
				iLocal_10 = 0;
				return 0;
			}
			Function_82(2, 2, "MG_LOCKPICK_Quit", 1, 0, 0, 0, 0);
		}
		else
		{
			Function_67(2);
			Function_67(1);
		}
	}
	return 1;
}

void Function_27() //Position: 0x3059 / 12377
{
	Function_68();
	Function_28();
	FLASH_SET_INT("numberSystem", "iHowManyPressed", false);
	FLASH_SET_BOOL("numberSystem", "showCrackSafe", 0);
	Function_67(0);
	Function_67(1);
	Function_67(2);
	return;
}

void Function_28() //Position: 0x30BE / 12478
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_29(int iParam0, bool bParam1, bool bParam2) //Position: 0x30D0 / 12496
{
	int iVar0;
	bool bVar1;
	
	if (Function_66(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_65())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_64(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_63(1, bVar1);
			if (!bParam2)
			{
				if (!Function_62(Global_76848, 1))
				{
					Function_57(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_55(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_62(Global_76848, 2))
				{
					Function_57(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_54(1, bVar1, 0, 0);
	}
	else
	{
		Function_53(1, (4294967295 * bVar1), 0);
	}
	if (Function_64(1) <= 4294962296)
	{
		Function_39(1, 4294962296, 0);
	}
	else if (Function_64(1) >= 5000)
	{
		Function_39(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_38(1));
	iVar0 = Function_64(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_31(2, Function_37(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_31(2, Function_37(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_31(2, Function_37(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_31(2, Function_37(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_31(2, Function_37(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_31(2, Function_37(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_31(2, Function_37(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_31(2, Function_37(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_31(2, Function_37(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_31(2, Function_37(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_31(2, Function_37(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_31(2, Function_37(Global_12976.f_152), 0);
			}
			break;
	}
	Function_30(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_30(int iParam0, int iParam1) //Position: 0x33F1 / 13297
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_31(int iParam0, char* cParam1, bool bParam2) //Position: 0x364F / 13903
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_35(iParam0, cParam1, 0, 1);
	iVar1 = Function_32();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_32() //Position: 0x37D4 / 14292
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
	Function_33();
	return 0;
}

void Function_33() //Position: 0x3873 / 14451
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
		Function_34(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_34(int iParam0) //Position: 0x3922 / 14626
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

int Function_35(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3980 / 14720
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_36(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_36(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3CD2 / 15570
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

var Function_37(int iParam0) //Position: 0x3D55 / 15701
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

float Function_38(int iParam0) //Position: 0x3DF8 / 15864
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_39(int iParam0, bool bParam1, bool bParam2) //Position: 0x3E31 / 15921
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
		Function_52(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_51(iParam0);
	if (bParam2)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x40D6 / 16598
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_50(390))), 32);
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
					bVar19 = (Function_38(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_38(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_48(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_45(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_42(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_41(), &Var9);
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

var Function_41() //Position: 0x4703 / 18179
{
	int iVar0;
	
	return iVar0;
}

var Function_42(int iParam0) //Position: 0x470B / 18187
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_43(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x471C / 18204
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_44(char* cParam0, bool bParam1) //Position: 0x4811 / 18449
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_45(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x482A / 18474
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_47(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_46(Function_47(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_46(int iParam0, int iParam1) //Position: 0x488F / 18575
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_47(int iParam0, bool bParam1) //Position: 0x48A1 / 18593
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_48(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x48B3 / 18611
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
	if (((Function_49(iParam0) != 19 || Function_49(iParam0) != 17) || Function_49(iParam0) != 10) || Function_49(iParam0) != 9)
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

int Function_49(int iParam0) //Position: 0x49E3 / 18915
{
	return Global_35278[iParam020].f_48;
}

var Function_50(int iParam0) //Position: 0x49F2 / 18930
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_51(int iParam0) //Position: 0x4A2F / 18991
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x4BC9 / 19401
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

int Function_53(int iParam0, bool bParam1, int iParam2) //Position: 0x4E0D / 19981
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_54(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5008 / 20488
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
	Function_52(iParam0, TO_FLOAT(bParam1), 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

int Function_55(int iParam0, bool bParam1) //Position: 0x5228 / 21032
{
	bool bVar0;
	int iVar1;
	
	Function_53(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_56(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_32();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_56(int iParam0, int iParam1) //Position: 0x53C4 / 21444
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

void Function_57(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5405 / 21509
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_59(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_58(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_58(char* cParam0, int iParam1) //Position: 0x5471 / 21617
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

bool Function_59(bool bParam0, var uParam1, int iParam2) //Position: 0x54A8 / 21672
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
		if (Function_61(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_60(uVar0))
		{
			case 0x00000002:
				if (!Function_62(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_60(char* cParam0) //Position: 0x5520 / 21792
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

int Function_61(int iParam0) //Position: 0x55C1 / 21953
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_152(&iVar1, 2147483648);
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

bool Function_62(var uParam0, int iParam1) //Position: 0x55FE / 22014
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_63(int iParam0, bool bParam1) //Position: 0x5611 / 22033
{
	bool bVar0;
	int iVar1;
	
	Function_54(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_56(iParam0, 4294967295);
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
	iVar1 = Function_32();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_64(bool bParam0) //Position: 0x57AE / 22446
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_65() //Position: 0x57EF / 22511
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_66(int iParam0) //Position: 0x581A / 22554
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_67(int iParam0) //Position: 0x5829 / 22569
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_68() //Position: 0x5835 / 22581
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_69(bool bParam0) //Position: 0x584A / 22602
{
	if (Function_14(bParam0))
	{
		if (!Function_13(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_168(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_70(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x5909 / 22793
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_71(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_71(int iParam0) //Position: 0x598E / 22926
{
	char* cVar0[16];
	
	if (!Function_72())
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

bool Function_72() //Position: 0x59CD / 22989
{
	if (Function_186(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_73(bool bParam0) //Position: 0x59E8 / 23016
{
	Function_74(bParam0, 0.0f);
	return;
}

void Function_74(int iParam0, float fParam1) //Position: 0x59F4 / 23028
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_168(iParam0, 1);
	Function_152(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_75(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5A15 / 23061
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_71(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_76(var uParam0, int iParam1) //Position: 0x5A90 / 23184
{
	if (!Function_81(uParam0, iParam1))
	{
		Function_77(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_77(var uParam0, int iParam1) //Position: 0x5AAB / 23211
{
	Function_168(uParam0[Function_80(iParam1)], Function_78(iParam1));
	return;
}

int Function_78(int iParam0) //Position: 0x5AC2 / 23234
{
	return Function_79((iParam0 % 32));
}

int Function_79(bool bParam0) //Position: 0x5AD0 / 23248
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_80(int iParam0) //Position: 0x5ADC / 23260
{
	return (iParam0 / 32);
}

bool Function_81(var uParam0, bool bParam1) //Position: 0x5AE7 / 23271
{
	return Function_186((*uParam0)[Function_80(bParam1)], Function_78(bParam1));
}

int Function_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x5AFE / 23294
{
	if (!Function_85(iParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_84(iParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_83(iParam0, iParam2);
}

int Function_83(var uParam0, int iParam1) //Position: 0x5B38 / 23352
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_84(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5B46 / 23366
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_85(var uParam0, int iParam1) //Position: 0x5B80 / 23424
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

int Function_86() //Position: 0x5B8E / 23438
{
	bool bVar0;
	
	bVar0 = Function_87();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_87() //Position: 0x5BA8 / 23464
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_88(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5BBD / 23485
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_41(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "SafeCracking_0_Flipped", 2, 1);
	}
	Function_89(&bVar0, uParam2);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_89(var uParam0, int iParam1) //Position: 0x5C41 / 23617
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_91(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_90(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 2.25f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_90(var uParam0, bool bParam1) //Position: 0x5C90 / 23696
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.22185f, 1.636313f, 0.612422f, -11.46059f, 45.33958f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.107341f, 1.318646f, -0.488954f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_91(var uParam0, bool bParam1) //Position: 0x5D23 / 23843
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.044852f, 0.977959f, 0.231767f, -2.080238f, -49.6131f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.298049f, 0.942358f, -0.403175f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.298049f, 0.942358f, -0.403175f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_92(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5DD5 / 24021
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_41(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "SafeCracking_0", 2, 1);
	}
	Function_93(&bVar0, uParam2);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_93(var uParam0, int iParam1) //Position: 0x5E51 / 24145
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_95(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_94(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 2.25f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_94(var uParam0, bool bParam1) //Position: 0x5EA0 / 24224
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.22185f, 1.636313f, 0.612422f, -11.46059f, 45.33958f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.107341f, 1.318646f, -0.488954f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_95(var uParam0, bool bParam1) //Position: 0x5F33 / 24371
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.044691f, 0.977957f, 0.231934f, -4.057458f, 48.81056f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.289551f, 0.906784f, -0.428467f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.289551f, 0.906784f, -0.428467f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_96(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5FE5 / 24549
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_41(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Safecracking_SOL", 2, 1);
	}
	Function_97(&bVar0, uParam2);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_97(var uParam0, int iParam1) //Position: 0x6063 / 24675
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_99(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_98(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 1);
	return;
}

void Function_98(var uParam0, bool bParam1) //Position: 0x60A2 / 24738
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.534812f, 2.018189f, 0.668812f, -9.613142f, -72.52207f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_99(var uParam0, bool bParam1) //Position: 0x6122 / 24866
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.285104f, 1.520304f, 0.723406f, -10.0612f, 17.83933f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.025606f, 1.340399f, -0.241668f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

bool Function_100(bool bParam0) //Position: 0x61AE / 25006
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_101() //Position: 0x61CD / 25037
{
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x61D3 / 25043
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	UI_PUSH("Minigame");
	if (!Function_144(0, 10, 4))
	{
		Function_141(0, 10, 4, 4294967295);
	}
	bLocal_25 = Function_139(0, 10, 4);
	if ((Global_3380 || Global_3382) || Global_3392)
	{
		Function_103(bLocal_25, 0);
	}
	else
	{
		Function_103(bLocal_25, 1);
	}
	return;
}

void Function_103(bool bParam0, int iParam1) //Position: 0x6229 / 25129
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	char* cVar12;
	
	if (!Function_137(bParam0))
	{
		Function_135();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_134(bParam0);
	if (StackVal != 2)
	{
		Function_132("DEED_START", bParam0);
	}
	Global_13172[bParam011].f_8 = StackVal + 1;
	Global_13172[bParam011].f_4 = 2;
	Global_6271 = bParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_107(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_105(bParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_71(Global_6269) };
		}
		cVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(cVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar12);
		APPEND_JOURNAL_ENTRY(cVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

struct<24> Function_104(char* cParam0) //Position: 0x6339 / 25401
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_105(bool bParam0) //Position: 0x658F / 25999
{
	if (!Function_106(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_106(int iParam0) //Position: 0x65AF / 26031
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_107(bool bParam0) //Position: 0x65C6 / 26054
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_122();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_108();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_152(&Global_63095, 1);
		Function_152(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_108() //Position: 0x6617 / 26135
{
	Function_120();
	Function_119();
	Function_119();
	Function_118();
	Function_118();
	Function_117();
	Function_117();
	Function_116(0);
	Function_116(0);
	if (!Function_115())
	{
		Function_113();
		Function_112();
		Function_111();
		Function_110();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_109();
	return;
}

void Function_109() //Position: 0x6669 / 26217
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

void Function_110() //Position: 0x676F / 26479
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

void Function_111() //Position: 0x67A2 / 26530
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

void Function_112() //Position: 0x6930 / 26928
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

void Function_113() //Position: 0x6AE4 / 27364
{
	Function_114(&Global_28260, 1, 0);
	return;
}

void Function_114(int iParam0, bool bParam1, var uParam2) //Position: 0x6AF2 / 27378
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
	
	bVar0 = Function_87();
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

bool Function_115() //Position: 0x6CE3 / 27875
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_116(char* cParam0) //Position: 0x6CEC / 27884
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_64((50 + iVar4)) + Function_64((183 + iVar4))) + Function_64((90 + iVar4)));
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
	Function_39(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_117() //Position: 0x6D92 / 28050
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
		iVar2 = ((Function_64((50 + iVar3) + 15) + Function_64((183 + iVar3) + 15)) + Function_64((90 + iVar3) + 15));
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
	Function_39(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_118() //Position: 0x6E1B / 28187
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
			iVar2 = ((Function_64((50 + iVar3) + 8) + Function_64((183 + iVar3) + 8)) + Function_64((90 + iVar3) + 8));
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
	Function_39(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_119() //Position: 0x6EB2 / 28338
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
		iVar2 = ((Function_64((50 + iVar3)) + Function_64((183 + iVar3))) + Function_64((90 + iVar3)));
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
	Function_39(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_120() //Position: 0x6F31 / 28465
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_121(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_39(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_121(int iParam0, bool bParam1, int iParam2) //Position: 0x6F6A / 28522
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
	Function_52(iParam0, bParam1, 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_40(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_122() //Position: 0x7174 / 29044
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_72())
	{
		Function_129(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_129(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_124(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_124(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_123(StackVal, StackVal, vVar0))
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

bool Function_123(vector3 vParam0) //Position: 0x722F / 29231
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_124(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7247 / 29255
{
	int iVar0;
	
	iVar0 = Function_127(uParam2, uParam3);
	if (Function_126(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_168(&Global_63095, 1);
			Function_152(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_168(&Global_63095, 2);
			Function_152(&Global_63095, 1);
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
		Function_168(&Global_63095, 2);
		Function_152(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_125();
	return StackVal, StackVal, Function_125();
}

vector3 Function_125() //Position: 0x732E / 29486
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_126(int iParam0) //Position: 0x7337 / 29495
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_127(bool bParam0, bool bParam1) //Position: 0x734D / 29517
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
				fVar2 = Function_128(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_128(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_126(bVar0) && !bParam1)
	{
		bVar0 = Function_127(bParam0, 1);
	}
	return bVar0;
}

float Function_128(vector3 vParam0, vector3 vParam3) //Position: 0x7414 / 29716
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_129(var uParam0, int iParam1) //Position: 0x7431 / 29745
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_131(Global_34573, &vVar4);
	if (!Function_130(Global_30640[0]))
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
	if (!Function_130(Global_30640[2]))
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
	if (!Function_130(Global_30640[1]))
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
	if (!Function_130(Global_30658[1]))
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
	if (!Function_130(Global_30658[3]))
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
	if (!Function_130(Global_30658[2]))
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
	if (!Function_130(Global_30658[4]))
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
	if (!Function_130(Global_30668[0]))
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
	if (!Function_130(Global_30668[1]))
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
	if (!Function_130(Global_30668[2]))
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
	if (!Function_130(Global_30679[0]))
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
	if (!Function_130(Global_30685[0]))
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
	if (!Function_130(Global_30685[1]))
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
	if (!Function_130(Global_30685[2]))
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
	if (!Function_130(Global_30693[0]))
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
	if (!Function_130(Global_30693[1]))
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
	if (!Function_130(Global_30693[2]))
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
	if (!Function_130(Global_30707[2]))
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
	if (!Function_130(Global_30707[3]))
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
	if (!Function_130(Global_30707[0]))
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
	if (!Function_130(Global_30717[0]))
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
	if (!Function_130(Global_30723[2]))
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
	if (!Function_130(Global_30723[1]))
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
	if (!Function_130(Global_30723[0]))
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
	if (!Function_130(Global_30679[1]))
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
	if (!Function_130(Global_30707[1]))
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
	Function_168(&Global_63095, 2);
	Function_152(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_123(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_130(int iParam0) //Position: 0x7C56 / 31830
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_186(uVar0, 0x1000000) || Function_186(uVar0, 0x2000000)) || Function_186(uVar0, 0x4000000)) || !Function_186(uVar0, 0x10000000));
}

void Function_131(bool bParam0, bool bParam1) //Position: 0x7C91 / 31889
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_132(char* cParam0, bool bParam1) //Position: 0x7C9E / 31902
{
	struct<4> Var0;
	
	if (!Function_137(bParam1))
	{
		return;
	}
	switch (Function_134(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_133(Function_105(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_134(bParam1), Function_105(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_134(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_134(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_134(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_134(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_134(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_133(int iParam0) //Position: 0x7DC2 / 32194
{
	char* cVar0[16];
	
	if (!Function_72())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_134(bool bParam0) //Position: 0x7DFC / 32252
{
	if (!Function_106(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_135() //Position: 0x7E17 / 32279
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_136(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_136(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8065 / 32869
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_137(int iParam0) //Position: 0x808E / 32910
{
	if (!Function_106(iParam0))
	{
		return 0;
	}
	if (!Function_138(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_138(int iParam0) //Position: 0x80B2 / 32946
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_139(bool bParam0, bool bParam1, bool bParam2) //Position: 0x80C7 / 32967
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_140(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_141(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_141(bParam0, bParam1, bParam2, 4294967295);
}

var Function_140(int iParam0, int iParam1, int iParam2) //Position: 0x8125 / 33061
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_141(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8145 / 33093
{
	var uVar0;
	
	if (!Function_143(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_140(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_142(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_142(int iParam0) //Position: 0x829A / 33434
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_143(int iParam0) //Position: 0x82D8 / 33496
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

bool Function_144(var uParam0, var uParam1, int iParam2) //Position: 0x82ED / 33517
{
	int iVar0;
	
	iVar0 = Function_139(uParam0, uParam1, iParam2);
	return Function_137(iVar0);
}

bool Function_145(int iParam0) //Position: 0x8303 / 33539
{
	iParam0 = iParam0;
	return 1;
}

bool Function_146(bool bParam0) //Position: 0x830E / 33550
{
	return Function_7(bParam0, "OneShotKill", 0);
}

bool Function_147(bool bParam0, int iParam1) //Position: 0x8328 / 33576
{
	return Function_9(bParam0, "ParentAnimNode", iParam1);
}

bool Function_148(bool bParam0) //Position: 0x8346 / 33606
{
	return Function_7(bParam0, "LinkToParentAnim", 0);
}

bool Function_149(bool bParam0) //Position: 0x8365 / 33637
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_27 - 1))
	{
		if (Local_27[iVar012].f_12 == bParam0)
		{
			return Local_27[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_150(bool bParam0) //Position: 0x8398 / 33688
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_151(bool bParam0) //Position: 0x83B7 / 33719
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_152(int iParam0, int iParam1) //Position: 0x83D1 / 33745
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_153(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x83E4 / 33764
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
	iVar2 = Function_160(uParam0->f_12, &bVar0);
	uVar3 = Function_159(uParam0->f_12, &bVar1);
	bVar4 = Function_158(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_157(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_156(uParam0->f_12, &bVar7);
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
			Function_155();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_154(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_41(), Function_154(uParam0->f_12, &bVar10), false, bVar9);
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
					Function_155();
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

bool Function_154(bool bParam0, bool bParam1) //Position: 0x86CC / 34508
{
	return Function_9(bParam0, "TargetLocator", bParam1);
}

void Function_155() //Position: 0x86E9 / 34537
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_156(bool bParam0, int iParam1) //Position: 0x86F8 / 34552
{
	return Function_9(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_157(bool bParam0, int iParam1) //Position: 0x871A / 34586
{
	return Function_9(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_158(bool bParam0) //Position: 0x873E / 34622
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_159(bool bParam0, int iParam1) //Position: 0x875B / 34651
{
	return Function_9(bParam0, "TargetAttachBone", iParam1);
}

bool Function_160(bool bParam0, int iParam1) //Position: 0x877B / 34683
{
	return Function_9(bParam0, "TargetAttachSlot", iParam1);
}

void Function_161(bool bParam0, bool bParam1) //Position: 0x879B / 34715
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

bool Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8849 / 34889
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

void Function_163(int iParam0, float fParam1) //Position: 0x88B9 / 35001
{
	if (!Function_14(iParam0))
	{
		Function_74(iParam0, fParam1);
	}
	return;
}

var Function_164(bool bParam0) //Position: 0x88CF / 35023
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(bParam0, "RandUseTime", 0.0f));
}

void Function_165(int iParam0) //Position: 0x88EF / 35055
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_166(var uParam0) //Position: 0x8903 / 35075
{
	uParam0 = uParam0;
	return;
}

int Function_167() //Position: 0x890D / 35085
{
	return 1;
}

void Function_168(int iParam0, int iParam1) //Position: 0x8914 / 35092
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_169(bool bParam0, var uParam1, int iParam2) //Position: 0x8923 / 35107
{
	float fVar0;
	
	Function_172(bParam0);
	*uParam1 = { StackVal, StackVal, Function_172(bParam0) };
	*iParam2 = Function_171(bParam0);
	fVar0 = Function_170(bParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

bool Function_170(bool bParam0) //Position: 0x8962 / 35170
{
	return Function_11(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_171(bool bParam0) //Position: 0x898D / 35213
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_172(bool bParam0) //Position: 0x8998 / 35224
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_173(bParam0))
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

bool Function_173(bool bParam0) //Position: 0x8A8E / 35470
{
	return Function_7(bParam0, "UsePosActorRelative", 0);
}

bool Function_174(bool bParam0) //Position: 0x8AB0 / 35504
{
	return Function_11(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_175(int iParam0) //Position: 0x8AD7 / 35543
{
	iParam0 = iParam0;
	return;
}

void Function_176(int iParam0) //Position: 0x8AE1 / 35553
{
	iParam0 = iParam0;
	return;
}

bool Function_177(bool bParam0) //Position: 0x8AEB / 35563
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_178(int iParam0) //Position: 0x8B09 / 35593
{
	if (!Function_14(iParam0))
	{
		Function_74(iParam0, 0.0f);
	}
	return;
}

bool Function_179(bool bParam0, bool bParam1) //Position: 0x8B1E / 35614
{
	vector3 vVar0;
	bool bVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	
	Function_172(bParam1);
	vVar0 = { StackVal, StackVal, Function_172(bParam1) };
	bVar3 = Function_171(bParam1);
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
		TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, bVar3, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(bParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_183(bParam0, bParam1);
	}
	uVar4 = Function_182(bParam1);
	uVar5 = Function_170(bParam1);
	Function_180(bParam1);
	vVar6 = { StackVal, StackVal, Function_180(bParam1) };
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(bParam0, &vVar0, &vVar6, uVar4, 0.2f, 1, bVar3, uVar5, 0, 0);
}

vector3 Function_180(int iParam0) //Position: 0x8BAB / 35755
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Function_181(StackVal, StackVal, iParam0, "UserOffset", vVar0);
	return StackVal, StackVal, Function_181(StackVal, StackVal, iParam0, "UserOffset", vVar0);
}

vector3 Function_181(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x8BCE / 35790
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_182(bool bParam0) //Position: 0x8BEC / 35820
{
	return Function_11(bParam0, "UseLocationTolerance", 0.0f);
}

int Function_183(bool bParam0, bool bParam1) //Position: 0x8C0F / 35855
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
	
	bVar0 = Function_182(bParam1);
	fVar1 = Function_170(bParam1);
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

bool Function_184(bool bParam0, int iParam1) //Position: 0x8D2A / 36138
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_185(bool bParam0) //Position: 0x8D55 / 36181
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

bool Function_186(var uParam0, int iParam1) //Position: 0x8E5A / 36442
{
	return (uParam0 && iParam1) == 0;
}

void Function_187(bool bParam0) //Position: 0x8E67 / 36455
{
	if (Function_186(bParam0->f_40, 16))
	{
		if (bParam0->f_44 > 5 && bParam0->f_44 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(bParam0->f_12))
			{
				Function_2("UNSUSPEND MOVER", bParam0->f_16);
				ENABLE_MOVER(bParam0->f_16);
			}
			if (GRINGO_SHOULD_FIX_MOVER(bParam0->f_12))
			{
				Function_2("UNFIX MOVER", bParam0->f_16);
				SET_MOVER_FROZEN(bParam0->f_16, 0);
			}
		}
	}
	return;
}

void Function_188(int iParam0, bool bParam1) //Position: 0x8EDA / 36570
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
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_186(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_194(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_186(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_186(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_150(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_186(iParam0->f_40, 16))
			{
				Function_187(iParam0);
				Function_152(iParam0 + 40, 16);
			}
			if (Function_186(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 0);
			}
			if (Function_193(iParam0->f_12) && Function_186(iParam0->f_40, 512))
			{
				Function_152(iParam0 + 40, 512);
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
	if (Function_148(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_149(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_192(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_191(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_186(iParam0->f_40, 256))
			{
				Function_152(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_57)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_56));
		iLocal_57 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_151(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_59))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_59);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_165(iParam0);
	Function_178(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_190(iParam0->f_12), iParam0->f_12);
	}
	Function_152(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_189();
		}
	}
	else
	{
		Function_189();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_189() //Position: 0x93D8 / 37848
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

bool Function_190(bool bParam0) //Position: 0x940F / 37903
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_191(var uParam0, int iParam1) //Position: 0x942C / 37932
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_160(uParam0->f_12, &uVar0);
	Function_159(uParam0->f_12, &uVar1);
	bVar2 = Function_158(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_192(int iParam0) //Position: 0x9464 / 37988
{
	iParam0 = iParam0;
	return;
}

bool Function_193(bool bParam0) //Position: 0x946E / 37998
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_194(bool bParam0, int iParam1) //Position: 0x948F / 38031
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_24))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_24);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			SET_GRINGO_OBJECT_REF_ATTR(GET_OBJECT_FROM_ACTOR(bParam0), "LastUserObject", iParam1);
			SET_GRINGO_OBJECT_REF_ATTR(bVar0, "UserObject", iParam1);
			TASK_CLEAR(bParam0);
			if (DECOR_CHECK_EXIST(bParam0, "iLockerOpen"))
			{
				if (Function_225(bLocal_25))
				{
					Function_212(bLocal_25, 0, 1, 0);
				}
				bVar1 = Function_211(bLocal_25);
				bVar2 = ROUND(Function_12(&bLocal_21));
				PRINTSTRING("iNewest time is ");
				PRINTINT(bVar2);
				PRINTNL();
				PRINTSTRING("iFastestTimeToUnlockSafe is ");
				PRINTINT(bVar1);
				PRINTNL();
				if (bVar2 > bVar1 || bVar1 != 0)
				{
					Function_210(bLocal_25, bVar2);
					Function_209(251, TO_FLOAT(bVar2), 0);
				}
				if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "SOL_Safe"))
				{
					Function_207((Function_208(2, 2, 1, 1, 0) + DECOR_GET_INT(GRINGO_GET_MY_OBJECT_REF(), "SOL_Safe")), 1);
					DECOR_SET_BOOL(bParam0, "SOL_UsedSafe", true);
				}
				else if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Rebel03_Safe"))
				{
					Function_207(200, 1);
					Function_205(9, 0, 0);
					GIVE_WEAPON_TO_ACTOR(bParam0, 5, 0.0f, 1, 0);
					_ADD_AMMO_OF_TYPE(bParam0, 7, RAND_FLOAT_RANGE(10.0f, 20.0f), 0, 1);
					DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Rebel03_Safe");
				}
				else
				{
					Function_207(Function_208(2, 1, 1, 1, 0), 1);
				}
			}
			else if (Function_225(bLocal_25))
			{
				Function_204(bLocal_25);
			}
		}
	}
	Function_27();
	UI_POP("Minigame");
	iLocal_9 = 0;
	if (IS_OBJECT_VALID(bLocal_20))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_20);
		while (IS_OBJECT_VALID(bLocal_20) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	Function_67(2);
	Function_28();
	Function_68();
	REMOVE_STRING_TABLE("nminigames");
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (DECOR_CHECK_EXIST(bParam0, "iLockerOpen"))
			{
				Function_195(3, 25, bParam0, GRINGO_GET_MY_OBJECT_REF(), 0);
			}
		}
	}
	if (HUD_IS_FADED() && !IS_GAME_RESETTING())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	if (iLocal_10)
	{
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	return;
}

var Function_195(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9703 / 38659
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_203(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_202(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_198(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_41(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_196();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_196() //Position: 0x9993 / 39315
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_197(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_197(bool bParam0, bool bParam1) //Position: 0x99F6 / 39414
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_198(bool bParam0) //Position: 0x9A25 / 39461
{
	if (Function_201(256))
	{
		return 0;
	}
	if (Function_201(262144))
	{
		return 0;
	}
	if (Function_200())
	{
		return 0;
	}
	if (!Function_201(1))
	{
		return 0;
	}
	if (!Function_201(4096))
	{
		return 0;
	}
	if (bParam0 && Function_199(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_201(2048))
	{
		return 0;
	}
	if (Function_115() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_199(int iParam0) //Position: 0x9A9B / 39579
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_200() //Position: 0x9AAC / 39596
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_201(int iParam0) //Position: 0x9AC5 / 39621
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_202(int iParam0) //Position: 0x9AE3 / 39651
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_203(int iParam0) //Position: 0x9AF9 / 39673
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_204(bool bParam0) //Position: 0x9B0E / 39694
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_137(bParam0))
	{
		return;
	}
	iVar0 = Function_134(bParam0);
	if (StackVal == 2)
	{
		Function_132("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_71(Global_6269) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_3376 = 1;
	return;
}

int Function_205(bool bParam0, bool bParam1, int iParam2) //Position: 0x9BB4 / 39860
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_206(bParam0), Function_87()) == 0)
		{
			ADD_ITEM(Function_206(bParam0), Function_87(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_206(bParam0), Function_87(), iParam2);
	return 1;
}

var Function_206(bool bParam0) //Position: 0x9BFF / 39935
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

int Function_207(bool bParam0, bool bParam1) //Position: 0x9CF0 / 40176
{
	bool bVar0;
	
	bVar0 = Function_64(0);
	if ((Function_64(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_54(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_64(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_54(597, bParam0, 0, 0);
	}
	if ((Function_64(597) + Function_64(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9DBB / 40379
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_64(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_206(17), Global_34573))
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

int Function_209(int iParam0, bool bParam1, bool bParam2) //Position: 0x9EBD / 40637
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_52(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_51(iParam0);
	if (bParam2)
	{
		Function_40(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_210(int iParam0, int iParam1) //Position: 0xA129 / 41257
{
	if (!Function_137(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

var Function_211(int iParam0) //Position: 0xA144 / 41284
{
	if (!Function_137(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

void Function_212(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA15E / 41310
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_137(bParam0))
	{
		Function_135();
		return;
	}
	bVar0 = Function_134(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_65())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_105(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_71(Global_6269) };
		}
		if (Function_65())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_221();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_65())
	{
		Function_220();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_132("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_215(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_105(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_107(1);
			Function_214(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_213(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_213(int iParam0, int iParam1) //Position: 0xA3B2 / 41906
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_214(var uParam0, int iParam1) //Position: 0xA3EC / 41964
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_115())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_215(bool bParam0) //Position: 0xA42E / 42030
{
	int iVar0;
	int iVar1;
	
	if (!Function_106(bParam0))
	{
		return;
	}
	switch (Function_134(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_105(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_54(12, 1, 0, 0);
				Function_219(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_54(13, 1, 0, 0);
				Function_219(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_54(14, 1, 0, 0);
				Function_219(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_54(15, 1, 0, 0);
				Function_219(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_54(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_105(bParam0))
			{
				case 0x00000000:
					if (Function_218(bParam0) == 1)
					{
						iVar0 = Function_217(bParam0);
						if (Function_216(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_219(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_219(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_219(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_219(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_219(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_219(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_219(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_219(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_219(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_219(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_219(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_219(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_219(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_219(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_219(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_219(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_219(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_219(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_219(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_219(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_54(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_54(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_54(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_217(bParam0) == 0)
			{
				if (Function_218(bParam0) == 1)
				{
					Function_54(458, 1, 0, 0);
					iVar0 = Function_105(bParam0);
					if (Function_216(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_219(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_219(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_219(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_219(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_219(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_219(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_219(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_219(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_218(bParam0) == 1)
			{
				Function_54(400, 1, 0, 0);
			}
			switch (Function_105(bParam0))
			{
				case 0x00000001:
					Function_54(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_219(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_219(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_219(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_54(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_219(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_219(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

bool Function_216(int iParam0) //Position: 0xA90A / 43274
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_217(bool bParam0) //Position: 0xA920 / 43296
{
	if (!Function_106(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_218(bool bParam0) //Position: 0xA93F / 43327
{
	if (!Function_106(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_219(int iParam0, bool bParam1) //Position: 0xA959 / 43353
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

void Function_220() //Position: 0xA9C0 / 43456
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_64(0));
	PLAYSTAT_INT("HC_FAME", Function_64(3));
	PLAYSTAT_INT("HC_HONOR", Function_64(1));
	return;
}

void Function_221() //Position: 0xAB18 / 43800
{
	int iVar0;
	int iVar1;
	
	if (!Function_224(Global_6269))
	{
		return;
	}
	iVar0 = Function_64(24);
	iVar1 = Function_223(Global_6269);
	if (!Function_224(iVar0) && Function_222(iVar1) < 0)
	{
		Function_39(24, Global_6269, 0);
		Function_35(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_222(Function_223(iVar0)))
	{
		Function_39(24, Global_6269, 0);
		Function_35(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_222(int iParam0) //Position: 0xAB98 / 43928
{
	if (!Function_137(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_223(int iParam0) //Position: 0xABB2 / 43954
{
	if (!Function_224(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_224(int iParam0) //Position: 0xABCC / 43980
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_225(int iParam0) //Position: 0xABE2 / 44002
{
	if (!Function_137(iParam0))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_226(bool bParam0, bool bParam1) //Position: 0xAC03 / 44035
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_246("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_246("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_59))
			{
				if (bParam1)
				{
					Function_246("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_59);
			}
		}
	}
	if (bParam1)
	{
		Function_246("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_227(bool bParam0, bool bParam1) //Position: 0xAD0B / 44299
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_228(int iParam0) //Position: 0xAD21 / 44321
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
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_41(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_165(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_168(iParam0 + 40, 2);
	Function_152(iParam0 + 40, 8);
	Function_152(iParam0 + 40, 16);
	Function_152(iParam0 + 40, 64);
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
	if (!Function_233(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_168(iParam0 + 40, 32);
			}
			else
			{
				Function_152(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_152(iParam0 + 40, 32);
		}
		if (Function_186(iParam0->f_40, 32))
		{
			Function_168(iParam0 + 40, 128);
		}
		else
		{
			Function_152(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_152(iParam0 + 40, 32);
	}
	if (Function_232(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_168(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_168(iParam0 + 40, 128);
		}
	}
	if (Function_193(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_168(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_229(iParam0->f_16, iVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_229(bool bParam0, int iParam1) //Position: 0xAFD7 / 45015
{
	bool bVar0;
	bool bVar1;
	
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		HUD_CLEAR_SMALL_TEXT();
		AI_IGNORE_ACTOR(bParam0);
		fLocal_12[0] = 0.0f;
		fLocal_12[1] = TO_FLOAT(RAND_INT_RANGE(90, 315));
		bVar0 = FLOOR((fLocal_12[1] + 45.0f));
		bVar1 = FLOOR((fLocal_12[1] + 270.0f));
		fLocal_12[2] = TO_FLOAT(RAND_INT_RANGE(bVar0, bVar1));
		while (fLocal_12[2] < 360.0f)
		{
			fLocal_12[2] = (fLocal_12[2] - 360.0f);
		}
		if (fLocal_12[2] >= 15.0f)
		{
			fLocal_12[2] = (fLocal_12[2] + 15.0f);
		}
		else if (fLocal_12[2] <= 345.0f)
		{
			fLocal_12[2] = (fLocal_12[2] - 15.0f);
		}
		bVar0 = FLOOR((fLocal_12[2] + 90.0f));
		bVar1 = FLOOR(((fLocal_12[2] + 270.0f) + 45.0f));
		fLocal_12[3] = TO_FLOAT(RAND_INT_RANGE(bVar0, bVar1));
		while (fLocal_12[3] < 360.0f)
		{
			fLocal_12[3] = (fLocal_12[3] - 360.0f);
		}
		if (fLocal_12[3] >= 15.0f)
		{
			fLocal_12[3] = (fLocal_12[3] + 15.0f);
		}
		else if (fLocal_12[3] <= 345.0f)
		{
			fLocal_12[3] = (fLocal_12[3] - 15.0f);
		}
		PRINTSTRING("Button Presses 1 = ");
		PRINTFLOAT(fLocal_12[1]);
		PRINTNL();
		PRINTSTRING("Button Presses 2 = ");
		PRINTFLOAT(fLocal_12[2]);
		PRINTNL();
		PRINTSTRING("Button Presses 3 = ");
		PRINTFLOAT(fLocal_12[3]);
		PRINTNL();
		Function_178(&bLocal_17);
		iLocal_9 = 1;
		Function_230(&uLocal_1);
		DECOR_REMOVE(bParam0, "iLockerOpen");
		REQUEST_STRING_TABLE("nminigames");
	}
	return;
}

void Function_230(int iParam0) //Position: 0xB1CC / 45516
{
	Function_231(iParam0);
	return;
}

void Function_231(int iParam0) //Position: 0xB1D7 / 45527
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

bool Function_232(bool bParam0) //Position: 0xB1F6 / 45558
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_233(bool bParam0) //Position: 0xB20F / 45583
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_234(bool bParam0, int iParam1) //Position: 0xB229 / 45609
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_235(iParam1, &bVar0);
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

bool Function_235(var uParam0, int iParam1) //Position: 0xB261 / 45665
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_236(int iParam0, int iParam1) //Position: 0xB278 / 45688
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
				if (!Function_241(6))
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
		if (!Function_240(bVar1, iParam0->f_12))
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
		if (!Function_186(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_168(iParam0 + 40, 1);
			}
			else
			{
				Function_152(iParam0 + 40, 1);
			}
			if (Function_186(iParam0->f_40, 1))
			{
				Function_227("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_172(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_172(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_239(iParam0->f_12);
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
				if (!Function_238(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_237(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_171(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_171(iParam0->f_12));
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

bool Function_237(bool bParam0) //Position: 0xB541 / 46401
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_238(bool bParam0, bool bParam1) //Position: 0xB55E / 46430
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
	Function_172(bParam1);
	Var0 = { StackVal, StackVal, Function_172(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_172(bParam1);
	Var0 = { StackVal, StackVal, Function_172(bParam1) };
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

bool Function_239(int iParam0) //Position: 0xB5FA / 46586
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_240(bool bParam0, bool bParam1) //Position: 0xB619 / 46617
{
	vector3 vVar0;
	vector3 vVar3;
	
	bParam1 = bParam1;
	bParam0 = bParam0;
	GRINGO_GET_USE_COMPONENT_POSITION(&vVar0, bParam1);
	GET_POSITION(bParam0, &vVar3);
	if (VDIST(vVar3, vVar0) < 0.5f)
	{
		return 0;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "item_binoculars"))
	{
		return 0;
	}
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		if (Function_115())
		{
			return 0;
		}
	}
	if (Global_3403)
	{
		return 0;
	}
	return 1;
}

bool Function_241(int iParam0) //Position: 0xB68A / 46730
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_242(int iParam0) //Position: 0xB6A6 / 46758
{
	iParam0 = iParam0;
	return;
}

void Function_243(bool bParam0, int iParam1) //Position: 0xB6B0 / 46768
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_244(&(Local_27[iLocal_5212]), bParam0);
		iLocal_52++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 2)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_243(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0xB712 / 46866
{
	iParam0->f_12 = iParam1;
	Function_152(iParam0 + 40, 1);
	return;
}

void Function_245(int iParam0) //Position: 0xB726 / 46886
{
	iParam0 = iParam0;
	return;
}

void Function_246(int iParam0) //Position: 0xB730 / 46896
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

