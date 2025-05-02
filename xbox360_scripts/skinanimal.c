//Decompiled with MagicRDR v1.0
//Function Count : 169
//Statics Count : 62
//Natives Count : 344
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	void fLocal_2 = 0;
	int iLocal_3 = 0;
	bool bLocal_4 = false;
	bool bLocal_5 = false;
	int iLocal_6 = 0;
	float fLocal_7 = 0.0f;
	float fLocal_8 = 0.0f;
	float fLocal_9 = 0.0f;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	bool bLocal_14 = true;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	struct<12> Local_40[1];
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	bool bLocal_57 = false;
	int iLocal_58 = 0;
	bool bLocal_59 = false;
	bool bLocal_60 = false;
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
	
	iLocal_1 = 4294967295;
	fLocal_2 = 4294967295;
	bLocal_4 = false;
	iLocal_6 = 0;
	fLocal_7 = 0.0f;
	fLocal_8 = 0.0f;
	fLocal_9 = 0.0f;
	iLocal_13 = 0;
	bLocal_37 = "";
	bLocal_38 = "";
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_168("STARTS");
	Function_167(uScriptParam_0);
	iLocal_53 = 0;
	Function_165(uScriptParam_0, &iLocal_53);
	while (IS_GRINGO_ACTIVE())
	{
		Function_164(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_54);
		}
		iVar2 = 0;
		bLocal_59 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_53 - 1))
			{
				if (Local_40[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_53;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_59 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_154(&(Local_40[iVar312]), &bVar4))
						{
							Function_152(GRINGO_GET_REQUESTING_ACTOR(), Local_40[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_154(&(Local_40[iVar312]), &bVar4))
						{
							Function_152(GRINGO_GET_REQUESTING_ACTOR(), Local_40[iVar312].f_12);
							if (bVar4)
							{
								Function_142(&(Local_40[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_40[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_141("eGRINGO_EndUse: Stop use by request", Local_40[iVar312].f_16);
							Function_140(Local_40[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_40[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_40[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_40[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_40[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_106(&(Local_40[iVar312]), 0);
							}
							else if (Local_40[iVar312].f_44 < 8)
							{
								Function_105(&(Local_40[iVar312]));
								Local_40[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_168("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_53 - 1))
			{
				if (Function_104(Local_40[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_40[iVar012])))
					{
						Function_168("Quitting due to update end");
						Function_106(&(Local_40[iVar012]), 1);
					}
				}
				if (Function_15(&(Local_40[iVar012]), 0))
				{
					Function_5(&(Local_40[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_53 - 1))
		{
			if (Function_104(Local_40[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_59)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_60))
	{
		Function_168("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_60);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_53 - 1))
	{
		if (Function_104(Local_40[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_40[iVar012].f_16);
			Function_106(&(Local_40[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_40[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_40[iVar012].f_12);
		}
		Function_15(&(Local_40[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_168("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x43F / 1087
{
	iParam0 = iParam0;
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x449 / 1097
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

int Function_3() //Position: 0x484 / 1156
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x48B / 1163
{
	iParam0 = iParam0;
	return 0;
}

void Function_5(int iParam0) //Position: 0x496 / 1174
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_104(iParam0->f_40, 2))
	{
		Function_140(iParam0->f_16, 0);
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
								bLocal_59 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_60))
								{
									Function_168("ManagePlayerQuit: Create quit context");
									if (Function_7(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_60 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_60 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_60))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_105(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_60))
									{
										Function_168("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_60);
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
										Function_105(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_60))
										{
											Function_168("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_60);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_60))
							{
								Function_168("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_60);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_60))
		{
			Function_168("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_60);
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x780 / 1920
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

bool Function_7(bool bParam0, bool bParam1, int iParam2) //Position: 0x87A / 2170
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

bool Function_8(bool bParam0, int iParam1) //Position: 0x896 / 2198
{
	return Function_9(bParam0, "UseQuit", iParam1);
}

bool Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x8AD / 2221
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

float Function_10(bool bParam0) //Position: 0x8F2 / 2290
{
	return Function_11(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(bool bParam0, bool bParam1, int iParam2) //Position: 0x90F / 2319
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_12(int iParam0) //Position: 0x925 / 2341
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

bool Function_13(int iParam0) //Position: 0x9ED / 2541
{
	return Function_104(*iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0x9FA / 2554
{
	return Function_104(*iParam0, 1);
}

bool Function_15(var uParam0, int iParam1) //Position: 0xA07 / 2567
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

bool Function_16(int iParam0) //Position: 0xA4F / 2639
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
	
	bVar12 = Function_103(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_141("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_7(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0,5f)
		{
			Function_141("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_141("Incapacitation quit", iParam0->f_16);
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
			bLocal_59 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_102(iParam0->f_12, &fVar24))
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
						Function_2("Skip to eRewarding", iParam0->f_16);
						bLocal_4 = true;
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_98(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_97(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_97(iParam0);
			}
			if (!Function_96(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_59 = true;
			Function_95(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_104(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_74(iParam0->f_12);
			}
			fVar20 = Function_73(iParam0->f_12);
			if (Function_12(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_104(iParam0->f_40, 1))
			{
				Function_68(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_104(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_67(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, true);
						Function_67(iParam0 + 40, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, true, Function_66());
				}
				if (!Function_104(iParam0->f_40, 1024))
				{
					Function_67(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_98(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_104(iParam0->f_40, 1024))
				{
					Function_67(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_104(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_67(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, true);
					Function_67(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_104(iParam0->f_40, 32))
			{
				bLocal_59 = true;
				if (GET_WEAPON_IN_HAND(iParam0->f_16) != 4294967295)
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_65(iParam0->f_12);
			bLocal_59 = true;
			Function_64(iParam0);
			Function_61(iParam0, Function_63(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_104(iParam0->f_40, 1);
			}
			bVar0 = Function_60(iParam0->f_16, iParam0->f_12, bVar33);
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
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_9(bVar1, "AttachBone", &bVar10), Function_9(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_59(bVar1, iParam0->f_16);
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
											Function_59(bVar1, iParam0->f_16);
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
				Function_2("KICKED TO DOING START", iParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_51(iParam0, bVar8, &iLocal_58, &bLocal_57);
					bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
					if (IS_PHYSINST_VALID(bVar22))
					{
						if (!IS_PROP_FIXED(bVar22))
						{
							Function_67(iParam0 + 40, 256);
							SET_PROP_FIXED(bVar22, 1);
						}
						else
						{
							Function_50(iParam0 + 40, 256);
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_104(iParam0->f_40, 16))
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
				if (Function_49(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_48(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_47(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_46(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_47(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_45(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_47(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_44(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_67(iParam0 + 40, 8);
					}
					else
					{
						Function_50(iParam0 + 40, 8);
					}
					if (Function_104(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
					}
				}
				else
				{
					Function_50(iParam0 + 40, 8);
				}
				if (Function_43(iParam0->f_12))
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
				Function_42(iParam0->f_16, iParam0->f_12);
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
				Function_41();
			}
			iParam0->f_44 = 6;
			if (Function_104(iParam0->f_40, 1))
			{
				if (Function_40(iParam0->f_12))
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
			bVar0 = Function_60(iParam0->f_16, iParam0->f_12, Function_104(iParam0->f_40, 1));
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
			Function_168("nRewarding");
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			Function_20(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_67(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_59 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_7(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_74(iParam0->f_12);
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
			if (Function_104(iParam0->f_40, 1024))
			{
				Function_50(iParam0 + 40, 1024);
				if (!Function_7(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_59 = true;
			bVar0 = Function_60(iParam0->f_16, iParam0->f_12, Function_104(iParam0->f_40, 1));
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

void Function_17(bool bParam0, int iParam1) //Position: 0x1B99 / 7065
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1BAE / 7086
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_19() //Position: 0x1BBC / 7100
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

void Function_20(var uParam0, bool bParam1) //Position: 0x1BED / 7149
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

void Function_21(var uParam0, bool bParam1) //Position: 0x1C61 / 7265
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

void Function_22(var uParam0, int iParam1) //Position: 0x1CD3 / 7379
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1CE1 / 7393
{
	return Function_11(bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1CF7 / 7415
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1D04 / 7428
{
	return Function_11(bParam0, "MoveAllowance", 1,5f);
}

bool Function_26(bool bParam0, int iParam1) //Position: 0x1D24 / 7460
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	
	iParam1 = iParam1;
	if (DECOR_CHECK_EXIST(bParam0, "Skinning_TriggerCam") && !Function_104(iLocal_3, 16))
	{
		Function_67(&iLocal_3, 16);
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_36);
		DECOR_REMOVE(bParam0, "Skinning_TriggerCam");
	}
	else if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "pst") && Function_104(iLocal_3, 16))
	{
		Function_50(&iLocal_3, 16);
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_36);
	}
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
	{
		Function_33(&bLocal_14);
		fVar0 = 3,95f;
		if (Function_104(iLocal_3, 64))
		{
			fVar0 = 1,55f;
		}
		if ((GET_CURRENT_GAME_TIME() - fLocal_9) < fVar0)
		{
			if ((GET_CURRENT_GAME_TIME() - fLocal_7) < fLocal_8)
			{
				fLocal_7 = GET_CURRENT_GAME_TIME();
				iVar1 = 2;
				if ((iLocal_13 != 4294967295 || iLocal_13 != 6) || iLocal_13 != 1)
				{
					iVar1 = 1;
				}
				else if (iLocal_13 != 3 || iLocal_13 != 2)
				{
					iVar1 = 4;
				}
				else if (iLocal_13 == 5)
				{
					iVar1 = 5;
				}
				if (iLocal_6 <= iVar1)
				{
					if (IS_OBJECT_VALID(bLocal_38))
					{
						UNK_0xE18028C1(bLocal_38);
						DESTROY_OBJECT(bLocal_38);
					}
					vVar2 = { 0.0f, 0.0f, 0.0f };
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar2);
					bLocal_38 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_37, "SkinAnimal", "anim_chicken_chop", vVar2);
					UNK_0x6745191B(bLocal_38, 0.0f, 0.0f, 0.0f);
					bVar5 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar2, 2,5f, "melee_knife", 1);
					if (IS_PHYSINST_VALID(bVar5))
					{
						bVar6 = CREATE_OBJECT_LOCATOR(bVar5, Function_32());
						OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar6, bVar5, "impact_impale_locator", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						if (!Function_104(iLocal_3, 512))
						{
							Function_67(&iLocal_3, 512);
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 417, false, 1, 1, 0, 4294967295, 4294967295, 0, 1);
						}
						GET_OBJECT_POSITION(bVar6, &vVar7);
						GET_OBJECT_AXIS(bVar6, &vVar10, 0);
						vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar10, vVar7, StackVal) * Vector(1,1f, 1,1f, 1,1f), StackVal, StackVal) };
						vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar7, vVar10, StackVal) };
						VNORMALIZE(&vVar13);
						if (!Function_104(iLocal_3, 128))
						{
							Function_67(&iLocal_3, 128);
							CREATE_DECAL_WITH_NORMAL(2, vVar7, vVar13, 0.0f, 1.0f, 0.0f, 0,21f);
						}
						else
						{
							CREATE_DECAL_WITH_NORMAL(StackVal, StackVal, StackVal, StackVal, -Vector(vVar13, vVar7, 2), 0.0f, 1.0f, 0.0f, 0,21f);
						}
						DESTROY_OBJECT(bVar6);
					}
					UNK_0xD1C91A7F(RAND_FLOAT_RANGE(-1.0f, 1.0f), RAND_FLOAT_RANGE(-1.0f, 1.0f), 1.0f, RAND_FLOAT_RANGE(10.0f, 20.0f));
					iLocal_6++;
				}
				fLocal_8 = 1,5f;
			}
		}
		fVar16 = 4,5f;
		if (Function_104(iLocal_3, 2))
		{
			if (iLocal_13 != 3 || iLocal_13 != 5)
			{
				fVar16 = 12.0f;
			}
			else if ((iLocal_13 != 4 || iLocal_13 != 7) || iLocal_13 != 2)
			{
				fVar16 = 9.0f;
			}
		}
		if (Function_30(&uLocal_10, fVar16))
		{
			Function_27();
		}
	}
	return 1;
}

void Function_27() //Position: 0x1FEC / 8172
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	float fVar8;
	vector3 vVar9;
	
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
	{
		Function_29(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF())));
		vVar0 = { StackVal, StackVal, Function_29(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()))) };
		Function_28(Global_34573);
		vVar3 = { StackVal, StackVal, Function_28(Global_34573) };
		vVar0.f_4 = (vVar0.y + 0,5f);
		bVar7 = 0.0f;
		fVar8 = 0.0f;
		if (iLocal_13 == 2)
		{
			vVar3.f_4 = (vVar3.y + 90.0f);
			bVar6 = CREATE_PROP_IN_LAYOUT(Global_30616, Function_32(), "$/fragments/p_gen_carcassMedium01x", vVar0, vVar3, 0);
			bVar7 = 0,8f;
			fVar8 = 0,35f;
		}
		else if (iLocal_13 == 4)
		{
			vVar3.f_4 = (vVar3.y + 90.0f);
			bVar6 = CREATE_PROP_IN_LAYOUT(Global_30616, Function_32(), "$/fragments/p_gen_carcassMediumExtra01x", vVar0, vVar3, 0);
			bVar7 = 0,95f;
			fVar8 = 0,5f;
		}
		else if (iLocal_13 == 1)
		{
			bVar6 = CREATE_PROP_IN_LAYOUT(Global_30616, Function_32(), "$/fragments/p_gen_carcassSmall01x", vVar0, vVar3, 0);
			bVar7 = 0,6f;
			fVar8 = 0,35f;
		}
		else if (iLocal_13 == 3)
		{
			vVar0.f_4 = (vVar0.y + 0,25f);
			vVar3.f_4 = (vVar3.y + 90.0f);
			GET_ACTOR_AXIS(Global_34573, &vVar9, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar0, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
			bVar6 = CREATE_PROP_IN_LAYOUT(Global_30616, Function_32(), "$/fragments/p_gen_carcassHorse01x", vVar0, vVar3, 0);
			bVar7 = 1,2f;
			fVar8 = 0,75f;
		}
		else if (iLocal_13 == 5)
		{
			GET_ACTOR_AXIS(Global_34573, &vVar9, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar0, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
			vVar0.f_4 = (vVar0.y + 0,25f);
			vVar3.f_4 = (vVar3.y + 90.0f);
			bVar6 = CREATE_PROP_IN_LAYOUT(Global_30616, Function_32(), "$/fragments/p_gen_carcassLarge01x", vVar0, vVar3, 0);
			bVar7 = 1,2f;
			fVar8 = 0,75f;
		}
		else if (iLocal_13 == 6)
		{
			bVar6 = CREATE_PROP_IN_LAYOUT(Global_30616, Function_32(), "$/fragments/p_gen_carcassSnake01x", vVar0, vVar3, 0);
			bVar7 = 0,5f;
			fVar8 = 0,25f;
		}
		else if (iLocal_13 == 7)
		{
			GET_ACTOR_AXIS(Global_34573, &vVar9, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar0, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
			vVar3.f_4 = (vVar3.y + 90.0f);
			bVar6 = CREATE_PROP_IN_LAYOUT(Global_30616, Function_32(), "$/fragments/p_gen_carcassElk01x", vVar0, vVar3, 0);
			bVar7 = 0,95f;
			fVar8 = 0,5f;
		}
		SNAP_OBJECT_TO_GROUND(bVar6, 3,5f, true, 1092616192);
		RELEASE_OBJECT_REF(bVar6);
		if (!bLocal_4)
		{
			if (4294967295 != iLocal_13)
			{
				SET_OBJECT_COLLIDE_WITH_OBJECT(Global_34573, GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF())), false);
			}
		}
		CREATE_DECAL(2, vVar0, bVar7, 1, 1);
		vVar0.x = (vVar0.x + fVar8);
		CREATE_DECAL(3, vVar0, bVar7, 1, 1);
	}
	return;
}

vector3 Function_28(bool bParam0) //Position: 0x235F / 9055
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

vector3 Function_29(bool bParam0) //Position: 0x2386 / 9094
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

bool Function_30(int iParam0, int iParam1) //Position: 0x23AD / 9133
{
	if (Function_31(iParam0, iParam1))
	{
		Function_64(iParam0);
		return 1;
	}
	return 0;
}

bool Function_31(int iParam0, float fParam1) //Position: 0x23C5 / 9157
{
	if (Function_14(iParam0))
	{
		if (Function_12(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

var Function_32() //Position: 0x23E1 / 9185
{
	int iVar0;
	
	return iVar0;
}

int Function_33(int iParam0) //Position: 0x23E9 / 9193
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_39();
	iVar1 = 0;
	if (!Function_38(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_37(iParam0[iVar03], 8);
		}
		else if (Function_36())
		{
			iVar1 = 1;
			Function_37(iParam0[iVar03], 8);
		}
		Function_37(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_38(iParam0[iVar03], 4))
		{
			if (!Function_38(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_38(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_38(iParam0[03], 8) || iVar1));
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
				Function_37(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_38(iParam0[iVar03], 4))
		{
			if (!Function_38(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_37(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_37(iParam0[iVar03], 2);
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
							Function_37(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_37(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_37(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_37(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_37(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_37(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_37(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_37(iParam0[iVar03], 2);
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
	Function_34();
	return 1;
}

void Function_34() //Position: 0x2764 / 10084
{
	if (!Function_35(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_35(int iParam0) //Position: 0x27A4 / 10148
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_36() //Position: 0x27C0 / 10176
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

void Function_37(var uParam0, int iParam1) //Position: 0x27EB / 10219
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

bool Function_38(int iParam0, int iParam1) //Position: 0x27FC / 10236
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_39() //Position: 0x2819 / 10265
{
	if (!Function_35(128))
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

bool Function_40(bool bParam0) //Position: 0x285B / 10331
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_41() //Position: 0x287A / 10362
{
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0x2880 / 10368
{
	bool bVar0;
	
	iParam1 = iParam1;
	uParam0 = uParam0;
	fLocal_7 = GET_CURRENT_GAME_TIME();
	fLocal_9 = fLocal_7;
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT());
		if (!bLocal_4)
		{
			HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()));
		}
	}
	return;
}

bool Function_43(int iParam0) //Position: 0x28C1 / 10433
{
	iParam0 = iParam0;
	return 1;
}

bool Function_44(bool bParam0) //Position: 0x28CC / 10444
{
	return Function_7(bParam0, "OneShotKill", 0);
}

bool Function_45(bool bParam0, int iParam1) //Position: 0x28E6 / 10470
{
	return Function_9(bParam0, "ParentAnimNode", iParam1);
}

bool Function_46(bool bParam0) //Position: 0x2904 / 10500
{
	return Function_7(bParam0, "LinkToParentAnim", 0);
}

bool Function_47(bool bParam0) //Position: 0x2923 / 10531
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_40 - 1))
	{
		if (Local_40[iVar012].f_12 == bParam0)
		{
			return Local_40[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_48(bool bParam0) //Position: 0x2956 / 10582
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_49(bool bParam0) //Position: 0x2975 / 10613
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_50(int iParam0, int iParam1) //Position: 0x298F / 10639
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_51(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x29A2 / 10658
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
	bVar2 = Function_58(uParam0->f_12, &bVar0);
	uVar3 = Function_57(uParam0->f_12, &bVar1);
	bVar4 = Function_56(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_55(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_54(uParam0->f_12, &bVar7);
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
		if (Function_24())
		{
			Function_53();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_52(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_32(), Function_52(uParam0->f_12, &bVar10), false, bVar9);
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
			if (Function_7(bVar4, "LinkToUser", 0))
			{
				if (Function_24())
				{
					Function_53();
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

bool Function_52(bool bParam0, bool bParam1) //Position: 0x2C8A / 11402
{
	return Function_9(bParam0, "TargetLocator", bParam1);
}

void Function_53() //Position: 0x2CA7 / 11431
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_54(bool bParam0, int iParam1) //Position: 0x2CB6 / 11446
{
	return Function_9(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_55(bool bParam0, int iParam1) //Position: 0x2CD8 / 11480
{
	return Function_9(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_56(bool bParam0) //Position: 0x2CFC / 11516
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_57(bool bParam0, int iParam1) //Position: 0x2D19 / 11545
{
	return Function_9(bParam0, "TargetAttachBone", iParam1);
}

bool Function_58(bool bParam0, int iParam1) //Position: 0x2D39 / 11577
{
	return Function_9(bParam0, "TargetAttachSlot", iParam1);
}

void Function_59(bool bParam0, bool bParam1) //Position: 0x2D59 / 11609
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

bool Function_60(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2E07 / 11783
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

void Function_61(int iParam0, float fParam1) //Position: 0x2E77 / 11895
{
	if (!Function_14(iParam0))
	{
		Function_62(iParam0, fParam1);
	}
	return;
}

void Function_62(int iParam0, float fParam1) //Position: 0x2E8D / 11917
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_67(iParam0, 1);
	Function_50(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_63(bool bParam0) //Position: 0x2EAE / 11950
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(bParam0, "RandUseTime", 0.0f));
}

void Function_64(int iParam0) //Position: 0x2ECE / 11982
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_65(var uParam0) //Position: 0x2EE2 / 12002
{
	uParam0 = uParam0;
	return;
}

int Function_66() //Position: 0x2EEC / 12012
{
	return 1;
}

void Function_67(int iParam0, int iParam1) //Position: 0x2EF3 / 12019
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_68(bool bParam0, var uParam1, int iParam2) //Position: 0x2F02 / 12034
{
	bool bVar0;
	
	Function_71(bParam0);
	*uParam1 = { StackVal, StackVal, Function_71(bParam0) };
	*iParam2 = Function_70(bParam0);
	bVar0 = Function_69(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_69(bool bParam0) //Position: 0x2F41 / 12097
{
	return Function_11(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_70(bool bParam0) //Position: 0x2F6C / 12140
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_71(bool bParam0) //Position: 0x2F77 / 12151
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_72(bParam0))
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

bool Function_72(bool bParam0) //Position: 0x306D / 12397
{
	return Function_7(bParam0, "UsePosActorRelative", 0);
}

bool Function_73(bool bParam0) //Position: 0x308F / 12431
{
	return Function_11(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_74(bool bParam0) //Position: 0x30B6 / 12470
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bParam0 = bParam0;
	if (!bLocal_4)
	{
		if (Function_104(iLocal_3, 4) && !Function_104(iLocal_3, 8))
		{
			Function_67(&iLocal_3, 8);
			bVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			if (STRING_CONTAINS_STRING(bVar0, "skin"))
			{
				if (Function_104(iLocal_3, 2))
				{
					if (Function_104(iLocal_3, 256))
					{
						bLocal_36 = Function_90(bLocal_37, 0, Global_34573, 1, 0, 0);
					}
					else
					{
						bLocal_36 = Function_85(bLocal_37, 0, Global_34573, 1, 0, 0);
					}
				}
				else
				{
					bLocal_36 = Function_80(bLocal_37, 0, Global_34573, 1, 0, 0);
				}
			}
			else
			{
				bLocal_36 = Function_75(bLocal_37, 0, Global_34573, 1, 0, 0);
			}
			bLocal_5 = CREATE_VOLUME_IN_LAYOUT(bLocal_37, Function_32(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f);
			ATTACH_OBJECTS(bLocal_5, GRINGO_GET_MY_OBJECT_REF(), "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_5);
			if (IS_ACTOR_VALID(Global_12976.f_36))
			{
				if (IS_ACTOR_IN_VOLUME(Global_12976.f_36, bLocal_5))
				{
					GET_ACTOR_AXIS(Global_34573, &vVar1, 2);
					GET_POSITION(Global_34573, &vVar4);
					vVar4 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar1, vVar4, StackVal) * Vector(4,5f, 4,5f, 4,5f), StackVal, StackVal) };
					if (!SET_OBJECT_POSITION_ON_GROUND(Global_12976.f_36, vVar4))
					{
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(Global_12976.f_36, bLocal_5);
						Function_67(&iLocal_3, 1024);
					}
					TASK_STAND_STILL(Global_12976.f_36, -1.0f, 0, 0);
				}
			}
		}
	}
	return;
}

var Function_75(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x31E2 / 12770
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PluckFeather", 3, 1);
	}
	Function_76(&bVar0, uParam2);
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

void Function_76(var uParam0, int iParam1) //Position: 0x325C / 12892
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_79(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_78(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_77(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,75f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1,65f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 2, 2);
	return;
}

void Function_77(var uParam0, bool bParam1) //Position: 0x32BE / 12990
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,776102f, 1,626932f, -1,05084f, -9,761768f, 139,5969f, 5,7E-05f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,22042f, 1,362419f, 0,120133f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_78(var uParam0, bool bParam1) //Position: 0x334E / 13134
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,57051f, 0,629068f, -1,019663f, 1,217593f, -149,4037f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,016694f, 0,653587f, -0,026282f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_79(var uParam0, bool bParam1) //Position: 0x33DA / 13274
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,306341f, 0,47119f, -1,354674f, 22,20756f, 167,2508f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,079903f, 0,889862f, -0,354395f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_80(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x3466 / 13414
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Skinning_Low_NoKnife", 3, 1);
	}
	Function_81(&bVar0, uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_81(var uParam0, int iParam1) //Position: 0x34E8 / 13544
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_84(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_83(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_82(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 2, 2);
	return;
}

void Function_82(var uParam0, bool bParam1) //Position: 0x3540 / 13632
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43,15054f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,334075f, 0,820755f, -1,473873f, -4,245675f, -148,5864f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,439845f, 0,71051f, -0,206666f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_83(var uParam0, bool bParam1) //Position: 0x35CC / 13772
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43,15054f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,334075f, 0,820755f, -1,473873f, -4,245675f, -148,5864f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,439845f, 0,71051f, -0,206666f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_84(var uParam0, bool bParam1) //Position: 0x3658 / 13912
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43,15054f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,671808f, 0,993355f, -0,672763f, -9,863297f, -132,2437f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,134753f, 0,803932f, 0,059559f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_85(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x36E4 / 14052
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Skinning_High_NoKnife", 3, 1);
	}
	Function_86(&bVar0, uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_86(var uParam0, int iParam1) //Position: 0x3767 / 14183
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_89(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_88(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_87(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1,5f, 1, 0);
	return;
}

void Function_87(var uParam0, bool bParam1) //Position: 0x37CD / 14285
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,183191f, 0,536072f, -1,508552f, 31,17652f, -176,2945f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,126681f, 1,064484f, -0,637045f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_88(var uParam0, bool bParam1) //Position: 0x3859 / 14425
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,492018f, 0,468582f, -1,210122f, 25,27425f, 142,346f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,026176f, 0,869156f, -0,538683f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_89(var uParam0, bool bParam1) //Position: 0x38E5 / 14565
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,82318f, 1,093231f, -0,813308f, 14,61724f, -134,8103f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,243373f, 1,304413f, -0,23743f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_90(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x3971 / 14705
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Skinning_High_Knife", 3, 1);
	}
	Function_91(&bVar0, uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_91(var uParam0, int iParam1) //Position: 0x39F2 / 14834
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_94(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_93(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_92(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1,5f, 1, 0);
	return;
}

void Function_92(var uParam0, bool bParam1) //Position: 0x3A58 / 14936
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,183191f, 0,536072f, -1,508552f, 31,17652f, -176,2945f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,126681f, 1,064484f, -0,637045f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_93(var uParam0, bool bParam1) //Position: 0x3AE4 / 15076
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,131527f, 0,526192f, -1,157479f, 22,58491f, -153,017f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,205833f, 0,83551f, -0,49482f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_94(var uParam0, bool bParam1) //Position: 0x3B70 / 15216
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,889393f, 1,009293f, -0,60367f, 17,50552f, 113,3907f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,273556f, 1,220909f, -0,337419f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_95(int iParam0) //Position: 0x3BFC / 15356
{
	iParam0 = iParam0;
	return;
}

bool Function_96(bool bParam0) //Position: 0x3C06 / 15366
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_97(int iParam0) //Position: 0x3C24 / 15396
{
	if (!Function_14(iParam0))
	{
		Function_62(iParam0, 0.0f);
	}
	return;
}

bool Function_98(bool bParam0, bool bParam1) //Position: 0x3C39 / 15417
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	bool bVar23;
	bool bVar24;
	float fVar25;
	
	Function_71(bParam1);
	vVar0 = { StackVal, StackVal, Function_71(bParam1) };
	bVar3 = Function_70(bParam1);
	if (IS_ACTOR_PLAYER(bParam0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
		{
			vVar4 = { 0.0f, 0.0f, 0.0f };
			vVar7 = { 0.0f, 0.0f, 0.0f };
			GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase", 0,85f, 0.0f, 0.0f, &vVar4);
			Function_29(GRINGO_GET_MY_OBJECT_REF());
			vVar7 = { StackVal, StackVal, Function_29(GRINGO_GET_MY_OBJECT_REF()) };
			bVar10 = Function_100(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7);
			TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar4, bVar10, 1, true, 1);
		}
		else
		{
			vVar11 = { 0.0f, 0.0f, 0.0f };
			vVar14 = { 0.0f, 0.0f, 0.0f };
			vVar17 = { 0.0f, 0.0f, 0.0f };
			vVar20 = { 0.0f, 0.0f, 0.0f };
			GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase", -0,99f, 0.0f, -0,99f, &vVar11);
			FIND_GROUND_INTERSECTION(&vVar11, 3.0f, &vVar14, &vVar20);
			Function_29(GRINGO_GET_MY_OBJECT_REF());
			vVar17 = { StackVal, StackVal, Function_29(GRINGO_GET_MY_OBJECT_REF()) };
			bVar23 = Function_100(StackVal, StackVal, StackVal, StackVal, vVar14, vVar17);
			TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar14, bVar23, 1, true, 1);
		}
		return 1;
	}
	bVar24 = Function_99(bParam1);
	fVar25 = Function_69(bParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &vVar0, bVar24, 0,2f, 1, bVar3, fVar25, 0, 0);
}

bool Function_99(bool bParam0) //Position: 0x3D4F / 15695
{
	return Function_11(bParam0, "UseLocationTolerance", 0.0f);
}

var Function_100(vector3 vParam0, vector3 vParam3) //Position: 0x3D72 / 15730
{
	var uVar0;
	
	Function_101(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_101(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x3D8C / 15756
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_102(bool bParam0, int iParam1) //Position: 0x3DAF / 15791
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_103(bool bParam0) //Position: 0x3DDA / 15834
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

bool Function_104(int iParam0, int iParam1) //Position: 0x3EDF / 16095
{
	return (iParam0 && iParam1) == 0;
}

void Function_105(int iParam0) //Position: 0x3EEC / 16108
{
	if (Function_104(iParam0->f_40, 16))
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
				SET_MOVER_FROZEN(iParam0->f_16, false);
			}
		}
	}
	return;
}

void Function_106(int iParam0, bool bParam1) //Position: 0x3F5F / 16223
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
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_104(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_112(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_104(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_104(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_48(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_104(iParam0->f_40, 16))
			{
				Function_105(iParam0);
				Function_50(iParam0 + 40, 16);
			}
			if (Function_104(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_111(iParam0->f_12) && Function_104(iParam0->f_40, 512))
			{
				Function_50(iParam0 + 40, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 1);
				Function_2("Allow Bump Reactions", iParam0->f_16);
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
	if (Function_46(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_47(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_110(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_109(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_104(iParam0->f_40, 256))
			{
				Function_50(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_58)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(bLocal_57));
		iLocal_58 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_49(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_60))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_60);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_64(iParam0);
	Function_97(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_108(iParam0->f_12), iParam0->f_12);
	}
	Function_50(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_107();
		}
	}
	else
	{
		Function_107();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_107() //Position: 0x446B / 17515
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

bool Function_108(bool bParam0) //Position: 0x44A2 / 17570
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_109(var uParam0, int iParam1) //Position: 0x44BF / 17599
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_58(uParam0->f_12, &uVar0);
	Function_57(uParam0->f_12, &uVar1);
	bVar2 = Function_56(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_110(int iParam0) //Position: 0x44F7 / 17655
{
	iParam0 = iParam0;
	return;
}

bool Function_111(bool bParam0) //Position: 0x4501 / 17665
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_112(bool bParam0, int iParam1) //Position: 0x4522 / 17698
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	iParam1 = iParam1;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (IS_VOLUME_VALID(bLocal_5))
	{
		if (Function_104(iLocal_3, 1024))
		{
			REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME(Global_12976.f_36, bLocal_5);
		}
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_5);
		DESTROY_VOLUME(bLocal_5);
	}
	HUD_ENABLE(true);
	UI_POP("NoHUD");
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			iVar0 = (RAND_INT_RANGE(false, 10000) % 100);
			iVar1 = (RAND_INT_RANGE(false, 10000) % 100);
			iVar2 = (RAND_INT_RANGE(false, 10000) % 100);
			bVar3 = GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT());
			bVar4 = true;
			bVar5 = GET_ACTORENUM_SPECIES(bVar3);
			iVar6 = Function_139(348);
			switch (bVar5)
			{
				case 0x0000001B:
					Function_134(572, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000000D:
					Function_134(531, bVar4);
					Function_134(532, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000010:
				case 0x00000021:
					Function_134(536, bVar4);
					Function_134(537, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000000F:
					if (bVar3 <= 1116 && bVar3 >= 1117)
					{
						Function_134(520, bVar4);
						Function_134(518, bVar4);
						Function_134(519, bVar4);
					}
					else
					{
						Function_134(534, bVar4);
						Function_134(535, bVar4);
					}
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000023:
					if (1072 == bVar3)
					{
						Function_134(554, bVar4);
						Function_134(555, bVar4);
						Function_134(556, 1);
					}
					else
					{
						Function_134(584, bVar4);
						Function_134(585, bVar4);
						if (iVar0 < 50)
						{
							Function_134(586, 1);
						}
					}
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000006:
					if (1077 == bVar3)
					{
						Function_134(566, bVar4);
						Function_134(567, bVar4);
						Function_134(568, 1);
						Function_134(569, bVar4);
					}
					else
					{
						Function_134(512, bVar4);
						Function_134(513, bVar4);
						if (iVar0 < 50)
						{
							Function_134(514, bVar4);
						}
					}
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000001:
					Function_134(500, bVar4);
					Function_134(501, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000000B:
					if (1094 == bVar3)
					{
						Function_134(562, bVar4);
						Function_134(563, bVar4);
						Function_134(565, bVar4);
						Function_134(564, 1);
					}
					else
					{
						Function_134(525, bVar4);
						Function_134(526, bVar4);
						if (iVar0 < 50)
						{
							Function_134(527, bVar4);
						}
						if (iVar1 < 33)
						{
							Function_134(528, bVar4);
						}
					}
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000003:
					if ((((((1098 != bVar3 || 1099 != bVar3) || 1100 != bVar3) || 1101 != bVar3) || 1102 != bVar3) || 1103 != bVar3) || 1104 != bVar3)
					{
						Function_134(546, bVar4);
						Function_134(547, bVar4);
						if (iVar0 < 50)
						{
							Function_134(548, bVar4);
						}
						if (iVar1 < 33)
						{
							Function_134(549, bVar4);
						}
						if (iVar2 < 15)
						{
							Function_134(550, 1);
						}
					}
					else if (1105 == bVar3)
					{
						Function_134(557, bVar4);
						Function_134(558, bVar4);
						Function_134(560, bVar4);
						Function_134(559, 1);
						Function_134(561, bVar4);
					}
					else
					{
						Function_134(503, bVar4);
						Function_134(504, bVar4);
						if (iVar0 < 50)
						{
							Function_134(505, bVar4);
						}
						if (iVar1 < 33)
						{
							Function_134(506, bVar4);
						}
					}
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001C:
					Function_134(573, bVar4);
					Function_134(574, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001E:
					Function_134(577, bVar4);
					Function_134(578, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000014:
					Function_134(543, bVar4);
					Function_134(544, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000013:
					Function_134(540, bVar4);
					Function_134(541, bVar4);
					if (iVar0 < 50)
					{
						Function_134(542, bVar4);
					}
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000005:
					Function_134(509, bVar4);
					Function_134(510, bVar4);
					if (iVar0 < 50)
					{
						Function_134(511, bVar4);
					}
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000007:
					Function_134(517, bVar4);
					Function_134(516, bVar4);
					Function_134(515, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000004:
					Function_134(508, bVar4);
					Function_134(507, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000008:
					Function_134(523, bVar4);
					Function_134(521, bVar4);
					Function_134(522, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000000C:
				case 0x00000009:
					Function_134(529, bVar4);
					Function_134(530, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000018:
					Function_134(596, bVar4);
					Function_134(553, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001D:
					Function_134(575, bVar4);
					Function_134(576, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001A:
					Function_134(571, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000015:
					Function_134(545, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000017:
					Function_134(580, bVar4);
					Function_134(581, bVar4);
					Function_119(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001F:
					Function_134(579, bVar4);
					break;
				
				case 0x00000019:
					Function_134(570, RAND_INT_RANGE((1 * bVar4), (3 * bVar4)));
					break;
				
				case 0x0000000A:
					Function_134(524, RAND_INT_RANGE((1 * bVar4), (4 * bVar4)));
					break;
				
				case 0x00000012:
					Function_134(539, RAND_INT_RANGE((1 * bVar4), (3 * bVar4)));
					break;
				
				case 0x00000016:
					Function_134(552, RAND_INT_RANGE((1 * bVar4), (4 * bVar4)));
					break;
				
				case 0x00000011:
					Function_134(538, RAND_INT_RANGE((1 * bVar4), (4 * bVar4)));
					break;
				
				case 0x00000002:
					if (bVar4 == 2)
					{
						Function_134(502, 2);
					}
					else
					{
						Function_134(502, RAND_INT_RANGE(true, 2));
					}
					break;
				
				case 0x00000022:
					Function_134(583, RAND_INT_RANGE((1 * bVar4), (3 * bVar4)));
					break;
				
				case 0x0000000E:
					if (bVar3 <= 1131 && bVar3 >= 1133)
					{
						Function_134(533, RAND_INT_RANGE((1 * bVar4), (3 * bVar4)));
					}
					else
					{
						Function_134(551, RAND_INT_RANGE((1 * bVar4), (3 * bVar4)));
					}
					break;
				
				case 0x00000020:
					Function_134(582, RAND_INT_RANGE((1 * bVar4), (3 * bVar4)));
					break;
				
				default:
					LOG_ERROR("REMEMBER WHAT YOU SKINNED. TELL RYAN PARADIS THIS HAPPENED.");
					break;
			}
			Global_3384 = 0;
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(22))
			{
				if (Function_139(276) > 18)
				{
					AWARD_ACHIEVEMENT(22);
				}
			}
			if (Function_117(1) >= 9)
			{
				if (GET_ITEM_COUNT(Function_116(4), bParam0) <= 5)
				{
					iVar7 = Function_139(348);
					if (iVar7 != iVar6)
					{
						if ((iVar7 - iVar6) > 100)
						{
							ADD_ITEM(Function_116(4), bParam0, true);
						}
						else if (iVar6 % 100) > (iVar7 % 100)
						{
							ADD_ITEM(Function_116(4), bParam0, true);
						}
					}
				}
			}
		}
		AI_CLEAR_DONT_HARM_ACTOR(bParam0);
		if (iLocal_1 != 4294967295)
		{
			ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, fLocal_2, 0);
			ACTOR_SET_NEXT_WEAPON(bParam0, iLocal_1);
			bLocal_1 = 4294967295;
		}
		Function_50(&iLocal_3, 1);
		if (DECOR_CHECK_EXIST(bParam0, "AnimalSize"))
		{
			DECOR_REMOVE(bParam0, "AnimalSize");
		}
	}
	if (Function_104(iLocal_3, 32))
	{
		bVar8 = GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT());
		if (GET_ACTORENUM_SPECIES(bVar8) == 19)
		{
			Function_134(540, 1);
			Function_134(541, 1);
		}
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	Function_113(&bLocal_14);
	if (IS_OBJECT_VALID(bLocal_39))
	{
		DESTROY_OBJECT(bLocal_39);
	}
	if (IS_LAYOUTREF_VALID(bLocal_37))
	{
		DESTROY_LAYOUT(bLocal_37);
	}
	if (!bLocal_4)
	{
		if (4294967295 != iLocal_13)
		{
			DESTROY_OBJECT(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF())));
		}
	}
	iLocal_3 = 0;
	DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	return;
}

void Function_113(int iParam0) //Position: 0x4EDD / 20189
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_114(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_114(var uParam0, int iParam1) //Position: 0x4F03 / 20227
{
	if (Function_38(uParam0[iParam13], 4))
	{
		if (Function_38(uParam0[iParam13], 1))
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
			Function_115(uParam0[iParam13], 1);
			Function_115(uParam0[iParam13], 2);
			Function_115(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_115(var uParam0, int iParam1) //Position: 0x5031 / 20529
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

var Function_116(bool bParam0) //Position: 0x504B / 20555
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

int Function_117(int iParam0) //Position: 0x513C / 20796
{
	if (Function_118() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

bool Function_118() //Position: 0x5164 / 20836
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_119(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x516D / 20845
{
	int iVar0;
	int iVar1;
	
	iVar0 = bParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[bParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[bParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[bParam0] = (Global_34581[bParam0] + TO_FLOAT(bParam1));
	Function_132(bParam0, TO_FLOAT(bParam1), 1);
	Function_131(bParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_120(bParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[bParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[bParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_120(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x538D / 21389
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
			bParam2 = (bParam2 * 3,28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_130(390))), 32);
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
					bVar19 = (Function_129(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_129(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_127(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_124(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_121(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_32(), &Var9);
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

var Function_121(int iParam0) //Position: 0x59BA / 22970
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_122(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x59CB / 22987
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_123("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_123("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_123("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_123(char* cParam0, char* cParam1) //Position: 0x5AC0 / 23232
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_124(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5AD9 / 23257
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_126(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_125(Function_126(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_125(int iParam0, int iParam1) //Position: 0x5B3E / 23358
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_126(int iParam0, bool bParam1) //Position: 0x5B50 / 23376
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_127(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5B62 / 23394
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
	if (((Function_128(iParam0) != 19 || Function_128(iParam0) != 17) || Function_128(iParam0) != 10) || Function_128(iParam0) != 9)
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

int Function_128(int iParam0) //Position: 0x5C92 / 23698
{
	return Global_35278[iParam020].f_48;
}

float Function_129(int iParam0) //Position: 0x5CA1 / 23713
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_130(int iParam0) //Position: 0x5CDA / 23770
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_131(int iParam0) //Position: 0x5D17 / 23831
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

int Function_132(int iParam0, float fParam1, bool bParam2) //Position: 0x5EB1 / 24241
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
		Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
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

int Function_133(bool bParam0) //Position: 0x60CB / 24779
{
	switch (bParam0)
	{
		case 0x00000000:
			LOG_ERROR("GET_ANIMAL_WEIGHT_LBS called with a human actor!");
			return 0;
			break;
		
		case 0x00000001:
			return RAND_INT_RANGE(40, 70);
			break;
		
		case 0x00000002:
			return RAND_INT_RANGE(2, 3);
			break;
		
		case 0x00000003:
			return RAND_INT_RANGE(300, 850);
			break;
		
		case 0x00000005:
			return RAND_INT_RANGE(140, 300);
			break;
		
		case 0x00000004:
			return RAND_INT_RANGE(55, 65);
			break;
		
		case 0x00000006:
			return RAND_INT_RANGE(390, 490);
			break;
		
		case 0x00000007:
			return RAND_INT_RANGE(10, 28);
			break;
		
		case 0x00000008:
			return RAND_INT_RANGE(900, 2000);
			break;
		
		case 0x00000009:
		case 0x0000000C:
			return RAND_INT_RANGE(900, 1000);
			break;
		
		case 0x0000000A:
			return RAND_INT_RANGE(5, 7);
			break;
		
		case 0x0000000B:
			return RAND_INT_RANGE(115, 198);
			break;
		
		case 0x0000000D:
			return RAND_INT_RANGE(20, 50);
			break;
		
		case 0x0000000E:
			return 1;
			break;
		
		case 0x0000000F:
			return RAND_INT_RANGE(110, 300);
			break;
		
		case 0x00000021:
			return RAND_INT_RANGE(35, 55);
			break;
		
		case 0x00000010:
			return RAND_INT_RANGE(55, 80);
			break;
		
		case 0x00000011:
			return RAND_INT_RANGE(2, 3);
			break;
		
		case 0x00000012:
			return RAND_INT_RANGE(7, 14);
			break;
		
		case 0x00000013:
			return RAND_INT_RANGE(325, 1100);
			break;
		
		case 0x00000014:
			return RAND_INT_RANGE(7, 24);
			break;
		
		case 0x00000015:
			return RAND_INT_RANGE(100, 300);
			break;
		
		case 0x00000016:
			return RAND_INT_RANGE(2, 4);
			break;
		
		case 0x00000017:
			return RAND_INT_RANGE(928, 1392);
			break;
		
		case 0x00000018:
			return RAND_INT_RANGE(800, 1000);
			break;
		
		case 0x00000019:
			return RAND_INT_RANGE(2, 6);
			break;
		
		case 0x0000001A:
			return RAND_INT_RANGE(330, 550);
			break;
		
		case 0x0000001B:
			return RAND_INT_RANGE(2, 4);
			break;
		
		case 0x0000001C:
			return RAND_INT_RANGE(10, 18);
			break;
		
		case 0x0000001D:
			return RAND_INT_RANGE(100, 225);
			break;
		
		case 0x0000001E:
			return RAND_INT_RANGE(5, 14);
			break;
		
		case 0x0000001F:
			return RAND_INT_RANGE(4, 6);
			break;
		
		case 0x00000020:
			return 1;
			break;
		
		case 0x00000022:
			return RAND_INT_RANGE(6, 10);
			break;
		
		case 0x00000023:
			return RAND_INT_RANGE(100, 175);
			break;
	}
	return 0;
}

int Function_134(int iParam0, bool bParam1) //Position: 0x634D / 25421
{
	bool bVar0;
	int iVar1;
	
	Function_119(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_138(iParam0, 4294967295);
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
	iVar1 = Function_135();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_135() //Position: 0x64EA / 25834
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
	Function_136();
	return 0;
}

void Function_136() //Position: 0x6589 / 25993
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
		Function_137(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_137(int iParam0) //Position: 0x6638 / 26168
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

var Function_138(int iParam0, int iParam1) //Position: 0x6696 / 26262
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

int Function_139(int iParam0) //Position: 0x66D7 / 26327
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x6718 / 26392
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_168("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_168("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_60))
			{
				if (bParam1)
				{
					Function_168("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_60);
			}
		}
	}
	if (bParam1)
	{
		Function_168("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_141(bool bParam0, bool bParam1) //Position: 0x6820 / 26656
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_142(int iParam0) //Position: 0x6836 / 26678
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
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_32(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_64(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_67(iParam0 + 40, 2);
	Function_50(iParam0 + 40, 8);
	Function_50(iParam0 + 40, 16);
	Function_50(iParam0 + 40, 64);
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
	if (!Function_151(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_67(iParam0 + 40, 32);
			}
			else
			{
				Function_50(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_50(iParam0 + 40, 32);
		}
		if (Function_104(iParam0->f_40, 32))
		{
			Function_67(iParam0 + 40, 128);
		}
		else
		{
			Function_50(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_50(iParam0 + 40, 32);
	}
	if (Function_150(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_67(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_67(iParam0 + 40, 128);
		}
	}
	if (Function_111(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_67(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_143(iParam0->f_16, bVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_143(bool bParam0, int iParam1) //Position: 0x6AEC / 27372
{
	bool bVar0;
	bool bVar1;
	struct<8> Var2;
	bool bVar10;
	bool bVar11;
	struct<8> Var12;
	
	iParam1 = iParam1;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		bVar0 = GET_TARGET_OBJECT();
		bVar1 = GET_CORPSE_ACTOR_ENUM(bVar0);
		Global_3384 = 1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_148("SkinLayout") };
		bLocal_37 = CREATE_LAYOUT(&Var2);
		Function_67(&iLocal_3, 4);
		UI_PUSH("NoHUD");
		HUD_ENABLE(false);
		Function_50(&iLocal_3, 32);
	}
	else
	{
		Function_50(&iLocal_3, 4);
		if (GET_ACTOR_ENUM(bParam0) == 638)
		{
			bVar10 = GET_TARGET_OBJECT();
			bVar11 = GET_CORPSE_ACTOR_ENUM(bVar10);
			Global_3384 = 1;
			Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_148("SkinLayout") };
			bLocal_37 = CREATE_LAYOUT(&Var12);
			UI_PUSH("NoHUD");
			HUD_ENABLE(false);
			Function_67(&iLocal_3, 32);
		}
	}
	if (!GET_WEAPON_IN_HAND(bParam0) != 22)
	{
		ACTOR_HOLSTER_WEAPON(bParam0, 0);
		Function_50(&iLocal_3, 256);
	}
	else
	{
		Function_67(&iLocal_3, 256);
		if (GET_ACTOR_POSTURE(bParam0) == 1)
		{
			Function_67(&iLocal_3, 64);
		}
	}
	AI_DONT_HARM_ACTOR(bParam0);
	Function_67(&iLocal_3, 1);
	Function_50(&iLocal_3, 2);
	if (GET_ACTOR_POSTURE(bParam0) == 0)
	{
		Function_67(&iLocal_3, 2);
	}
	iLocal_13 = Function_147(&bParam0, GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT()));
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
	{
		Function_145(&bLocal_14, "$/fragments/p_gen_carcassSmall01x", 0, 0);
		Function_145(&bLocal_14, "$/fragments/p_gen_carcassSnake01x", 0, 0);
		Function_145(&bLocal_14, "$/fragments/p_gen_carcassMedium01x", 0, 0);
		Function_145(&bLocal_14, "$/fragments/p_gen_carcassHorse01x", 0, 0);
		Function_145(&bLocal_14, "$/fragments/p_gen_carcassMediumExtra01x", 0, 0);
		Function_145(&bLocal_14, "$/fragments/p_gen_carcassLarge01x", 0, 0);
		Function_145(&bLocal_14, "$/fragments/p_gen_carcassElk01x", 0, 0);
	}
	if (Function_104(iLocal_3, 32))
	{
		Function_67(&iLocal_3, 8);
		Function_50(&iLocal_3, 16);
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (Function_104(iLocal_3, 2))
		{
			if (Function_104(iLocal_3, 256))
			{
				bLocal_36 = Function_90(bLocal_37, 0, bParam0, 1, 0, 0);
			}
			else
			{
				bLocal_36 = Function_85(bLocal_37, 0, bParam0, 1, 0, 0);
			}
		}
		else
		{
			bLocal_36 = Function_80(bLocal_37, 0, bParam0, 1, 0, 0);
		}
	}
	Function_144(&uLocal_10);
	return;
}

void Function_144(int iParam0) //Position: 0x6DB7 / 28087
{
	Function_62(iParam0, 0.0f);
	return;
}

var Function_145(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6DC3 / 28099
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_146(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_37(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_146(var uParam0, int iParam1, int iParam2) //Position: 0x6DFB / 28155
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_38(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_37(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_147(var uParam0, bool bParam1) //Position: 0x6EBF / 28351
{
	switch (GET_ACTORENUM_SPECIES(bParam1))
	{
		case 0x0000001B:
		case 0x00000001:
		case 0x0000001C:
		case 0x0000001E:
		case 0x00000004:
			DECOR_SET_INT(*uParam0, "AnimalSize", true);
			return 1;
			break;
		
		case 0x00000023:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000007:
		case 0x00000010:
		case 0x00000021:
		case 0x0000001D:
		case 0x0000001A:
		case 0x00000015:
			DECOR_SET_INT(*uParam0, "AnimalSize", 2);
			return 2;
			break;
		
		case 0x0000000F:
		case 0x00000006:
		case 0x0000000B:
		case 0x00000005:
		case 0x00000018:
			DECOR_SET_INT(*uParam0, "AnimalSize", 2);
			return 4;
			break;
		
		case 0x00000013:
			DECOR_SET_INT(*uParam0, "AnimalSize", 2);
			return 7;
			break;
		
		case 0x00000003:
		case 0x00000008:
		case 0x0000000C:
		case 0x00000009:
			DECOR_SET_INT(*uParam0, "AnimalSize", 3);
			return 5;
			break;
		
		case 0x00000017:
			DECOR_SET_INT(*uParam0, "AnimalSize", 3);
			return 3;
			break;
		
		case 0x0000001F:
			DECOR_SET_INT(*uParam0, "AnimalSize", true);
			return 6;
			break;
		
		case 0x00000019:
		case 0x0000000A:
		case 0x00000012:
		case 0x00000016:
		case 0x00000011:
		case 0x00000002:
		case 0x00000022:
		case 0x0000000E:
		case 0x00000020:
			return 4294967295;
			break;
		
		default:
			LOG_ERROR("REMEMBER WHAT YOU SKINNED. TELL RYAN PARADIS THIS HAPPENED.");
			break;
	}
	return 4294967295;
}

struct<32> Function_148(bool bParam0) //Position: 0x70A1 / 28833
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_149("0", &cVar8, ""), 4);
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

struct<32> Function_149(char* cParam0, char* cParam1, char* cParam2) //Position: 0x710B / 28939
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_150(bool bParam0) //Position: 0x712A / 28970
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_151(bool bParam0) //Position: 0x7143 / 28995
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_152(bool bParam0, int iParam1) //Position: 0x715D / 29021
{
	bool bVar0;
	int iVar1;
	
	bParam0 = bParam0;
	iVar1 = Function_153(iParam1, &bVar0);
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

bool Function_153(var uParam0, int iParam1) //Position: 0x7195 / 29077
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_154(int iParam0, int iParam1) //Position: 0x71AC / 29100
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
				if (!Function_163(6))
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
		if (!Function_158(bVar1, iParam0->f_12))
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
		if (!Function_104(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_67(iParam0 + 40, 1);
			}
			else
			{
				Function_50(iParam0 + 40, 1);
			}
			if (Function_104(iParam0->f_40, 1))
			{
				Function_141("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_71(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_71(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_157(iParam0->f_12);
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
				if (!Function_156(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_155(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_70(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_70(iParam0->f_12));
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

bool Function_155(bool bParam0) //Position: 0x7475 / 29813
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_156(bool bParam0, bool bParam1) //Position: 0x7492 / 29842
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
	Function_71(bParam1);
	Var0 = { StackVal, StackVal, Function_71(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_71(bParam1);
	Var0 = { StackVal, StackVal, Function_71(bParam1) };
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

bool Function_157(int iParam0) //Position: 0x752E / 29998
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_158(bool bParam0, int iParam1) //Position: 0x754D / 30029
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	
	iParam1 = iParam1;
	if (Function_118())
	{
		return 0;
	}
	bVar0 = GET_TARGET_OBJECT();
	if (DECOR_CHECK_EXIST(bVar0, "WasDrafted"))
	{
		return 0;
	}
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		if (!Function_104(iLocal_3, 1))
		{
			if (!ACTOR_HAS_WEAPON(bParam0, 22))
			{
				return 0;
			}
			if (IS_PLAYER_IN_COMBAT(0))
			{
				return 0;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(bParam0)))
			{
				return 0;
			}
			bVar1 = 4294967295;
			if (Global_34207 != 4294967295)
			{
				if (TRAIN_GET_LOD_LEVEL(Global_34207) != 1 && TRAIN_GET_NUM_CARS(Global_34207) < 0)
				{
					bVar1 = Global_34207;
				}
			}
			if (bVar1 == 4294967295)
			{
				if (Global_34206 != 4294967295)
				{
					if (TRAIN_GET_LOD_LEVEL(Global_34206) != 1 && TRAIN_GET_NUM_CARS(Global_34206) < 0)
					{
						bVar1 = Global_34206;
					}
				}
			}
			if (bVar1 != 4294967295)
			{
				if (Function_161(&vVar2))
				{
					if (Function_159(StackVal, StackVal, bParam0, vVar2) > 6.0f)
					{
						bVar5 = 100000.0f;
						TRAIN_GET_POSITION(bVar1, &vVar6);
						if (IS_ACTOR_VALID(Global_34573))
						{
							GET_POSITION(Global_34573, &vVar9);
							bVar5 = VDIST(vVar9, vVar6);
						}
						if (bVar5 > (TRAIN_GET_VELOCITY(bVar1) * 16.0f))
						{
							return 0;
						}
					}
				}
			}
			if ((GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar12) && GET_OBJECT_NAMED_BONE_POSITION(bVar0, "neck", &vVar15)) && GET_OBJECT_NAMED_BONE_POSITION(bVar0, "root", &vVar18))
			{
				vVar21 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(vVar18, Vector(StackVal, StackVal, StackVal) + Vector(vVar15, vVar12, StackVal), StackVal), StackVal, StackVal) / Vector(3.0f, 3.0f, 3.0f) };
				if (Function_159(StackVal, StackVal, bParam0, vVar21) >= 1,5f)
				{
					if (GET_WEAPON_IN_HAND(bParam0) != 4294967295)
					{
						bLocal_1 = GET_WEAPON_IN_HAND(bParam0);
						fLocal_2 = ACTOR_GET_CURRENT_EQUIP_SLOT(bParam0);
					}
					else
					{
						bLocal_1 = 4294967295;
					}
					return 1;
				}
				return 0;
			}
			if (GET_WEAPON_IN_HAND(bParam0) != 4294967295)
			{
				bLocal_1 = GET_WEAPON_IN_HAND(bParam0);
				fLocal_2 = ACTOR_GET_CURRENT_EQUIP_SLOT(bParam0);
			}
			else
			{
				bLocal_1 = 4294967295;
			}
			return 1;
		}
	}
	return 1;
	return 0;
}

float Function_159(bool bParam0, vector3 vParam1) //Position: 0x76F5 / 30453
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_160(bParam0);
		vVar0 = { StackVal, StackVal, Function_160(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_160(bool bParam0) //Position: 0x776F / 30575
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_161(int iParam0) //Position: 0x77D9 / 30681
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	var uVar12;
	
	Function_29(GRINGO_GET_MY_OBJECT_REF());
	vVar0 = { StackVal, StackVal, Function_29(GRINGO_GET_MY_OBJECT_REF()) };
	bVar3 = START_CURVE_QUERY(Global_30616, vVar0, 1,121039E-44f, 0.0f, 3.0f, 0,5f, 0);
	bVar5 = 4294967295;
	bVar10 = 100000.0f;
	iVar4 = 0;
	while (iVar4 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar3))
	{
		GET_CLOSEST_POINT_TO_CURVE_CURVE_QUERY(bVar3, iVar4, &vVar6);
		bVar9 = VDIST(vVar6, vVar0);
		if (bVar9 > bVar10)
		{
			bVar5 = iVar4;
			bVar10 = bVar9;
		}
		iVar4++;
	}
	if (IS_CURVE_QUERY_VALID(bVar3) && GET_NUM_CURVES_IN_CURVE_QUERY(bVar3) < 0)
	{
		if (bVar5 >= 4294967295)
		{
			bVar11 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar3, bVar5);
			if (IS_OBJECT_VALID(bVar11))
			{
				GET_POINT_FROM_CURVE_QUERY(bVar3, bVar5, &uVar12);
				Function_162(&uVar12);
				*iParam0 = { StackVal, StackVal, Function_162(&uVar12) };
				DESTROY_OBJECT(bVar3);
				return 1;
			}
		}
	}
	DESTROY_OBJECT(bVar3);
	*iParam0 = { 0.0f, 0.0f, 0.0f };
	return 0;
}

vector3 Function_162(int iParam0) //Position: 0x7894 / 30868
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

bool Function_163(int iParam0) //Position: 0x78B3 / 30899
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_164(int iParam0) //Position: 0x78CF / 30927
{
	iParam0 = iParam0;
	return;
}

void Function_165(bool bParam0, int iParam1) //Position: 0x78D9 / 30937
{
	bool bVar0;
	bool bVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_166(&(Local_40[iLocal_5312]), bParam0);
		iLocal_53++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, bVar0);
		while (bVar0 <= 0 && *iParam1 > 1)
		{
			bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, bParam0);
			Function_165(bVar1, iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_166(int iParam0, int iParam1) //Position: 0x793B / 31035
{
	iParam0->f_12 = iParam1;
	Function_50(iParam0 + 40, 1);
	return;
}

void Function_167(int iParam0) //Position: 0x794F / 31055
{
	iParam0 = iParam0;
	return;
}

void Function_168(int iParam0) //Position: 0x7959 / 31065
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

