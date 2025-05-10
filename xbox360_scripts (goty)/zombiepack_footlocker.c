//Decompiled with MagicRDR v1.0
//Function Count : 140
//Statics Count : 41
//Natives Count : 268
//Parameters Count : 1

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	char* cLocal_18 = NULL;
	struct<12> Local_19[1];
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	char* cLocal_36 = NULL;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
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
	
	iLocal_10 = 0;
	iLocal_13 = 0;
	iLocal_14 = 0;
	bLocal_15 = false;
	iLocal_16 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_139("STARTS");
	Function_138(uScriptParam_0);
	iLocal_32 = 0;
	Function_136(uScriptParam_0, &iLocal_32);
	while (IS_GRINGO_ACTIVE())
	{
		Function_135(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_33);
		}
		iVar2 = 0;
		bLocal_38 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_32 - 1))
			{
				if (Local_19[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_32;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_38 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_129(&(Local_19[iVar312]), &bVar4))
						{
							Function_127(GRINGO_GET_REQUESTING_ACTOR(), Local_19[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_129(&(Local_19[iVar312]), &bVar4))
						{
							Function_127(GRINGO_GET_REQUESTING_ACTOR(), Local_19[iVar312].f_12);
							if (bVar4)
							{
								Function_123(&(Local_19[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_19[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_122("eGRINGO_EndUse: Stop use by request", Local_19[iVar312].f_16);
							Function_121(Local_19[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_19[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_19[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_19[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_19[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_76(&(Local_19[iVar312]), 0);
							}
							else if (Local_19[iVar312].f_44 < 8)
							{
								Function_75(&(Local_19[iVar312]));
								Local_19[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_139("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_32 - 1))
			{
				if (Function_74(Local_19[iVar012].f_40, 2))
				{
					if (!Function_17(&(Local_19[iVar012])))
					{
						Function_139("Quitting due to update end");
						Function_76(&(Local_19[iVar012]), 1);
					}
				}
				if (Function_16(&(Local_19[iVar012]), 0))
				{
					Function_6(&(Local_19[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_32 - 1))
		{
			if (Function_74(Local_19[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_38)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_39))
	{
		Function_139("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_39);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_32 - 1))
	{
		if (Function_74(Local_19[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_19[iVar012].f_16);
			Function_76(&(Local_19[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_19[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_19[iVar012].f_12);
		}
		Function_16(&(Local_19[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_139("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x42E / 1070
{
	iParam0 = iParam0;
	if (IS_OBJECT_ANIMATOR_VALID(cLocal_18))
	{
		DESTROY_OBJECT_ANIMATOR(cLocal_18);
	}
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x445 / 1093
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

int Function_3() //Position: 0x480 / 1152
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x487 / 1159
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	iParam0 = iParam0;
	bVar0 = GRINGO_GET_MY_OBJECT_REF();
	if (DECOR_CHECK_EXIST(bVar0, "GringoIsDone"))
	{
		if (!bLocal_15)
		{
			Function_5(GRINGO_GET_MY_OBJECT_REF());
			vVar1 = { StackVal, StackVal, Function_5(GRINGO_GET_MY_OBJECT_REF()) };
			bVar4 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 0.66f, "footlocker", 1);
			if (IS_OBJECT_VALID(bVar4))
			{
				cLocal_18 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar4);
				if (!IS_OBJECT_ANIMATOR_VALID(cLocal_18))
				{
					cLocal_18 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar4, "chest", "$chest", "chest");
				}
				SET_OBJECT_ANIMATOR_NODE(cLocal_18, "/global/chest/stay_open");
			}
		}
	}
	return 0;
}

vector3 Function_5(bool bParam0) //Position: 0x532 / 1330
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

void Function_6(int iParam0) //Position: 0x559 / 1369
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_74(iParam0->f_40, 2))
	{
		Function_121(iParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_15(iParam0))
	{
		if (iParam0->f_44 == 6)
		{
			if (Function_13(iParam0) <= Function_11(iParam0->f_12))
			{
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							bVar1 = Function_9(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_38 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_39))
								{
									Function_139("ManagePlayerQuit: Create quit context");
									if (Function_8(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_39 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_39 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_39))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_75(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_39))
									{
										Function_139("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_39);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", iParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
								{
									if (Function_7(iParam0->f_16))
									{
										Function_75(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_39))
										{
											Function_139("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_39);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_39))
							{
								Function_139("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_39);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_39))
		{
			Function_139("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_39);
		}
	}
	return;
}

bool Function_7(bool bParam0) //Position: 0x843 / 2115
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

bool Function_8(bool bParam0, bool bParam1, int iParam2) //Position: 0x93D / 2365
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

bool Function_9(bool bParam0, int iParam1) //Position: 0x959 / 2393
{
	return Function_10(bParam0, "UseQuit", iParam1);
}

bool Function_10(bool bParam0, bool bParam1, int iParam2) //Position: 0x970 / 2416
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

float Function_11(bool bParam0) //Position: 0x9B5 / 2485
{
	return Function_12(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_12(bool bParam0, bool bParam1, int iParam2) //Position: 0x9D2 / 2514
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_13(int iParam0) //Position: 0x9E8 / 2536
{
	if (Function_15(iParam0))
	{
		if (Function_14(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_14(int iParam0) //Position: 0xAB0 / 2736
{
	return Function_74(*iParam0, 2);
}

bool Function_15(int iParam0) //Position: 0xABD / 2749
{
	return Function_74(*iParam0, 1);
}

bool Function_16(var uParam0, int iParam1) //Position: 0xACA / 2762
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

bool Function_17(int iParam0) //Position: 0xB12 / 2834
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
	
	bVar12 = Function_73(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_122("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_8(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_122("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_122("Incapacitation quit", iParam0->f_16);
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
			bLocal_38 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_72(iParam0->f_12, &fVar24))
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
				if (Function_70(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_69(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_69(iParam0);
			}
			if (!Function_68(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_38 = true;
			Function_67(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_74(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_63(iParam0->f_12);
			}
			fVar20 = Function_62(iParam0->f_12);
			if (Function_13(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_74(iParam0->f_40, 1))
			{
				Function_57(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_74(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_56(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_56(iParam0 + 40, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, true, Function_55());
				}
				if (!Function_74(iParam0->f_40, 1024))
				{
					Function_56(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_8(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_70(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_74(iParam0->f_40, 1024))
				{
					Function_56(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_8(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_74(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_56(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_56(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_74(iParam0->f_40, 32))
			{
				bLocal_38 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_54(iParam0->f_12);
			bLocal_38 = true;
			Function_53(iParam0);
			Function_50(iParam0, Function_52(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_74(iParam0->f_40, 1);
			}
			bVar0 = Function_49(iParam0->f_16, iParam0->f_12, bVar33);
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
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_10(bVar1, "AttachBone", &bVar10), Function_10(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_48(bVar1, iParam0->f_16);
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
										if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_10(bVar1, "AttachBone", &bVar10), Function_10(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_48(bVar1, iParam0->f_16);
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
					Function_39(iParam0, bVar8, &iLocal_37, &cLocal_36);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_56(iParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_38(iParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_74(iParam0->f_40, 16))
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
				if (Function_37(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_36(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_35(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_34(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_35(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_33(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_35(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_32(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_56(iParam0 + 40, 8);
					}
					else
					{
						Function_38(iParam0 + 40, 8);
					}
					if (Function_74(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
					}
				}
				else
				{
					Function_38(iParam0 + 40, 8);
				}
				if (Function_31(iParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(iParam0->f_16, 1, 1);
					UNK_0xC17BAD12(iParam0->f_16);
				}
				bVar37 = Function_10(iParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(iParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_8(iParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(iParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 0);
					}
				}
				Function_30(iParam0->f_16, iParam0->f_12);
				bVar40 = Function_8(iParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(iParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				Function_29();
			}
			iParam0->f_44 = 6;
			if (Function_74(iParam0->f_40, 1))
			{
				if (Function_28(iParam0->f_12))
				{
					Function_2("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_27(iParam0->f_16, iParam0->f_12))
			{
				Function_2("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_49(iParam0->f_16, iParam0->f_12, Function_74(iParam0->f_40, 1));
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
			if (Function_13(iParam0) <= Function_11(iParam0->f_12))
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
				bVar60 = Function_26(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_2("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_25())
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
					if (Function_24(iParam0->f_12) <= 0.0f)
					{
						if (Function_13(iParam0) < Function_24(iParam0->f_12))
						{
							Function_2("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_139("nRewarding");
			Function_23(iParam0->f_16, iParam0->f_12);
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_56(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_38 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_8(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_20())
						{
							Function_63(iParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(iParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_8(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_19(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_74(iParam0->f_40, 1024))
			{
				Function_38(iParam0 + 40, 1024);
				if (!Function_8(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_38 = true;
			bVar0 = Function_49(iParam0->f_16, iParam0->f_12, Function_74(iParam0->f_40, 1));
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
	Function_18(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_18(bool bParam0, int iParam1) //Position: 0x1C63 / 7267
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_19(var uParam0, var uParam1) //Position: 0x1C78 / 7288
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_20() //Position: 0x1C86 / 7302
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

void Function_21(var uParam0, bool bParam1) //Position: 0x1CB7 / 7351
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

void Function_22(var uParam0, bool bParam1) //Position: 0x1D2B / 7467
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

void Function_23(var uParam0, int iParam1) //Position: 0x1D9D / 7581
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_24(bool bParam0) //Position: 0x1DAB / 7595
{
	return Function_12(bParam0, "UseTime", 5.0f);
}

bool Function_25() //Position: 0x1DC1 / 7617
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_26(bool bParam0) //Position: 0x1DCE / 7630
{
	return Function_12(bParam0, "MoveAllowance", 1.5f);
}

bool Function_27(var uParam0, int iParam1) //Position: 0x1DEE / 7662
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	iLocal_16++;
	if (iLocal_16 > 90)
	{
		return 0;
	}
	return 1;
}

bool Function_28(bool bParam0) //Position: 0x1E0C / 7692
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_29() //Position: 0x1E2B / 7723
{
	return;
}

void Function_30(bool bParam0, int iParam1) //Position: 0x1E31 / 7729
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	bVar0 = GRINGO_GET_MY_OBJECT_REF();
	if (IS_OBJECT_ATTACHED(bVar0))
	{
		iVar1 = _GET_OBJECT_ATTACHMENT(bVar0);
		if (IS_ATTACHMENT_VALID(iVar1))
		{
			bVar2 = GET_OBJECT_ATTACHED_TO(iVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				iLocal_12 = ATTACH_OBJECTS_CONTINUOUS(bParam0, bVar2, 4294967295);
			}
		}
	}
	return;
}

bool Function_31(int iParam0) //Position: 0x1E70 / 7792
{
	iParam0 = iParam0;
	return 1;
}

bool Function_32(bool bParam0) //Position: 0x1E7B / 7803
{
	return Function_8(bParam0, "OneShotKill", 0);
}

bool Function_33(bool bParam0, int iParam1) //Position: 0x1E95 / 7829
{
	return Function_10(bParam0, "ParentAnimNode", iParam1);
}

bool Function_34(bool bParam0) //Position: 0x1EB3 / 7859
{
	return Function_8(bParam0, "LinkToParentAnim", 0);
}

bool Function_35(bool bParam0) //Position: 0x1ED2 / 7890
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_19 - 1))
	{
		if (Local_19[iVar012].f_12 == bParam0)
		{
			return Local_19[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_36(bool bParam0) //Position: 0x1F05 / 7941
{
	return Function_8(bParam0, "LinkParentToAnim", 0);
}

bool Function_37(bool bParam0) //Position: 0x1F24 / 7972
{
	return Function_8(bParam0, "SingularUse", 0);
}

void Function_38(var uParam0, int iParam1) //Position: 0x1F3E / 7998
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_39(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1F51 / 8017
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
	iVar2 = Function_47(uParam0->f_12, &bVar0);
	uVar3 = Function_46(uParam0->f_12, &bVar1);
	bVar4 = Function_45(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_44(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_43(uParam0->f_12, &bVar7);
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
		if (Function_25())
		{
			Function_42();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_41(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_40(), Function_41(uParam0->f_12, &bVar10), false, bVar9);
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
			if (Function_8(bVar4, "LinkToUser", 0))
			{
				if (Function_25())
				{
					Function_42();
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

var Function_40() //Position: 0x2239 / 8761
{
	int iVar0;
	
	return iVar0;
}

bool Function_41(bool bParam0, bool bParam1) //Position: 0x2241 / 8769
{
	return Function_10(bParam0, "TargetLocator", bParam1);
}

void Function_42() //Position: 0x225E / 8798
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_43(bool bParam0, int iParam1) //Position: 0x226D / 8813
{
	return Function_10(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_44(bool bParam0, int iParam1) //Position: 0x228F / 8847
{
	return Function_10(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_45(bool bParam0) //Position: 0x22B3 / 8883
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_46(bool bParam0, int iParam1) //Position: 0x22D0 / 8912
{
	return Function_10(bParam0, "TargetAttachBone", iParam1);
}

bool Function_47(bool bParam0, int iParam1) //Position: 0x22F0 / 8944
{
	return Function_10(bParam0, "TargetAttachSlot", iParam1);
}

void Function_48(bool bParam0, bool bParam1) //Position: 0x2310 / 8976
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

bool Function_49(bool bParam0, bool bParam1, bool bParam2) //Position: 0x23BE / 9150
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

void Function_50(int iParam0, float fParam1) //Position: 0x242E / 9262
{
	if (!Function_15(iParam0))
	{
		Function_51(iParam0, fParam1);
	}
	return;
}

void Function_51(int iParam0, float fParam1) //Position: 0x2444 / 9284
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_56(iParam0, 1);
	Function_38(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_52(bool bParam0) //Position: 0x2465 / 9317
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_12(bParam0, "RandUseTime", 0.0f));
}

void Function_53(int iParam0) //Position: 0x2485 / 9349
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_54(var uParam0) //Position: 0x2499 / 9369
{
	uParam0 = uParam0;
	return;
}

int Function_55() //Position: 0x24A3 / 9379
{
	return 1;
}

void Function_56(var uParam0, int iParam1) //Position: 0x24AA / 9386
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(bool bParam0, var uParam1, int iParam2) //Position: 0x24B9 / 9401
{
	bool bVar0;
	
	Function_60(bParam0);
	*uParam1 = { StackVal, StackVal, Function_60(bParam0) };
	*iParam2 = Function_59(bParam0);
	bVar0 = Function_58(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_58(bool bParam0) //Position: 0x24F8 / 9464
{
	return Function_12(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_59(bool bParam0) //Position: 0x2523 / 9507
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_60(bool bParam0) //Position: 0x252E / 9518
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_61(bParam0))
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

bool Function_61(bool bParam0) //Position: 0x2624 / 9764
{
	return Function_8(bParam0, "UsePosActorRelative", 0);
}

bool Function_62(bool bParam0) //Position: 0x2646 / 9798
{
	return Function_12(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_63(bool bParam0) //Position: 0x266D / 9837
{
	bParam0 = bParam0;
	if (iLocal_13 && !iLocal_14)
	{
		iLocal_14 = 1;
		cLocal_17 = CREATE_LAYOUT("Footlocker_Gringo_Layout");
		Function_64(cLocal_17, 0, Global_34573, 1, 0, 1);
	}
	return;
}

var Function_64(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x26B0 / 9904
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_40(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Footlocker", 1, 1);
	}
	Function_65(&bVar0, uParam2);
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

void Function_65(var uParam0, int iParam1) //Position: 0x2728 / 10024
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_66(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 0);
	return;
}

void Function_66(var uParam0, bool bParam1) //Position: 0x2753 / 10067
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.547648f, 2.15242f, 0.03383f, -58.11488f, 30.01009f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0225f, 0.464561f, -0.875453f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_67(int iParam0) //Position: 0x27DF / 10207
{
	iParam0 = iParam0;
	return;
}

bool Function_68(bool bParam0) //Position: 0x27E9 / 10217
{
	return Function_8(bParam0, "MaintainPosture", 0);
}

void Function_69(int iParam0) //Position: 0x2807 / 10247
{
	if (!Function_15(iParam0))
	{
		Function_51(iParam0, 0.0f);
	}
	return;
}

bool Function_70(bool bParam0, bool bParam1) //Position: 0x281C / 10268
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	Function_60(bParam1);
	vVar0 = { StackVal, StackVal, Function_60(bParam1) };
	bVar3 = Function_59(bParam1);
	TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, bVar3, 1, true, 1);
	if (IS_ATTACHMENT_VALID(iLocal_12))
	{
		REMOVE_OBJECT_ATTACHMENT(iLocal_12);
	}
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (IS_ATTACHMENT_VALID(iLocal_12))
		{
			REMOVE_OBJECT_ATTACHMENT(iLocal_12);
		}
		iLocal_12 = ATTACH_OBJECTS_CONTINUOUS(bParam0, GET_TARGET_OBJECT(), 4294967295);
	}
	else
	{
		bVar4 = GRINGO_GET_MY_OBJECT_REF();
		bVar4 = Function_71(bVar4);
		if (IS_OBJECT_VALID(bVar4))
		{
			if (IS_OBJECT_ATTACHED(bVar4))
			{
				GET_OBJECT_OWNER(bVar4);
				iVar5 = _GET_OBJECT_ATTACHMENT(bVar4);
				if (IS_ATTACHMENT_VALID(iVar5))
				{
					bVar6 = GET_OBJECT_ATTACHED_TO(iVar5);
					if (IS_OBJECT_VALID(bVar6))
					{
						iLocal_12 = ATTACH_OBJECTS_CONTINUOUS(bParam0, bVar6, 4294967295);
					}
				}
			}
		}
	}
	return 1;
}

bool Function_71(bool bParam0) //Position: 0x28BC / 10428
{
	bool bVar0;
	
	if (IS_OBJECT_ATTACHED(bParam0))
	{
		return bParam0;
	}
	bVar0 = GET_OBJECT_OWNER(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (IS_OBJECT_ATTACHED(bVar0))
		{
			return bVar0;
		}
		bVar0 = GET_OBJECT_OWNER(bVar0);
	}
	return "";
}

bool Function_72(bool bParam0, int iParam1) //Position: 0x28F9 / 10489
{
	*iParam1 = Function_12(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_73(bool bParam0) //Position: 0x2924 / 10532
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

bool Function_74(var uParam0, int iParam1) //Position: 0x2A29 / 10793
{
	return (uParam0 && iParam1) == 0;
}

void Function_75(int iParam0) //Position: 0x2A36 / 10806
{
	if (Function_74(iParam0->f_40, 16))
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

void Function_76(int iParam0, bool bParam1) //Position: 0x2AA9 / 10921
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
	Function_10(iParam0->f_12, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			RESET_REACT_NODE_FOR_ACTOR(iParam0->f_16);
		}
	}
	iVar1 = 1;
	bVar2 = Function_8(iParam0->f_12, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 1);
		}
	}
	bVar3 = Function_8(iParam0->f_12, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(iParam0->f_16, 0);
	}
	if (iParam0->f_44 < 8)
	{
		Function_19(iParam0->f_16, iParam0->f_12);
	}
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_74(iParam0->f_40, 32)) && Function_8(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_82(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_74(iParam0->f_40, 64));
		Function_18(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_8(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_74(iParam0->f_40, 128) && Function_8(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_36(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_74(iParam0->f_40, 16))
			{
				Function_75(iParam0);
				Function_38(iParam0 + 40, 16);
			}
			if (Function_74(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_81(iParam0->f_12) && Function_74(iParam0->f_40, 512))
			{
				Function_38(iParam0 + 40, 512);
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
	if (Function_34(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_35(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_80(iParam0->f_12);
	bVar11 = Function_8(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_79(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_74(iParam0->f_40, 256))
			{
				Function_38(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_37)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_36));
		iLocal_37 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_37(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_39))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_39);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_53(iParam0);
	Function_69(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_78(iParam0->f_12), iParam0->f_12);
	}
	Function_38(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_77();
		}
	}
	else
	{
		Function_77();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_77() //Position: 0x2FA7 / 12199
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

bool Function_78(bool bParam0) //Position: 0x2FDE / 12254
{
	return Function_12(bParam0, "ReuseDelay", 15.0f);
}

void Function_79(var uParam0, int iParam1) //Position: 0x2FFB / 12283
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_47(uParam0->f_12, &uVar0);
	Function_46(uParam0->f_12, &uVar1);
	bVar2 = Function_45(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_80(bool bParam0) //Position: 0x3033 / 12339
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (iVar0 >= 4294967295)
	{
		bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
		GRINGO_SET_PROP_COLLISIONS(bVar1, 1);
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, iVar0 + 1);
	}
	return;
}

bool Function_81(bool bParam0) //Position: 0x3080 / 12416
{
	return Function_8(bParam0, "BlockBumpReactions", 0);
}

void Function_82(bool bParam0, int iParam1) //Position: 0x30A1 / 12449
{
	if (IS_ATTACHMENT_VALID(iLocal_12))
	{
		REMOVE_OBJECT_ATTACHMENT(iLocal_12);
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_REMOVE(bParam0, "iLockerOpen");
		Function_83(&bParam0, &iParam1);
	}
	if (IS_LAYOUTREF_VALID(cLocal_17))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_17);
		RELEASE_LAYOUT_REF(bLocal_17);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "FootlockerReuse"))
	{
		DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "fLastUsetime", GET_CURRENT_GAME_TIME());
	}
	return;
}

int Function_83(var uParam0, int iParam1) //Position: 0x311E / 12574
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	TASK_CLEAR(*uParam0);
	bVar0 = GRINGO_GET_MY_OBJECT_REF();
	SET_GRINGO_OBJECT_REF_ATTR(GET_OBJECT_FROM_ACTOR(*uParam0), "LastUserObject", *iParam1);
	SET_GRINGO_OBJECT_REF_ATTR(bVar1, "UserObject", *iParam1);
	if (IS_ACTOR_PLAYER(*uParam0))
	{
		Function_107(467, 1, 0, 0);
		bVar2 = false;
		if (!DECOR_CHECK_EXIST(bVar0, "bGiveNothing"))
		{
			bVar2 = Function_91(1);
			if (!bVar2)
			{
				if (!Function_90(1))
				{
					bVar2 = Function_86(1);
					if (!bVar2)
					{
						Function_84(1);
					}
				}
			}
		}
		if (bVar2)
		{
			if (RAND_INT_RANGE(false, 100000) <= 50000)
			{
				SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_FIND_AMMUNITION", false, false, 0, 0, true, false);
			}
		}
		HUD_ENABLE(true);
	}
	if (DECOR_CHECK_EXIST(bVar0, "ChestBlip_AsInt"))
	{
		bVar3 = DECOR_GET_INT(bVar0, "ChestBlip_AsInt");
		REMOVE_BLIP(bVar3);
		DECOR_REMOVE(bVar0, "ChestBlip_AsInt");
	}
	DECOR_SET_BOOL(bVar0, "GringoIsDone", true);
	return 1;
}

int Function_84(int iParam0) //Position: 0x325A / 12890
{
	iParam0 = iParam0;
	if (GET_ITEM_COUNT(Function_85(8), Global_34573) <= GET_MAX_ITEM_COUNT(Function_85(8)))
	{
		ADD_ITEM(Function_85(8), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(7), Global_34573) <= GET_MAX_ITEM_COUNT(Function_85(7)))
	{
		ADD_ITEM(Function_85(7), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(2), Global_34573) <= GET_MAX_ITEM_COUNT(Function_85(2)))
	{
		ADD_ITEM(Function_85(2), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(0), Global_34573) <= GET_MAX_ITEM_COUNT(Function_85(0)))
	{
		ADD_ITEM(Function_85(0), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(1), Global_34573) <= GET_MAX_ITEM_COUNT(Function_85(1)))
	{
		ADD_ITEM(Function_85(1), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(3), Global_34573) <= GET_MAX_ITEM_COUNT(Function_85(3)))
	{
		ADD_ITEM(Function_85(3), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(12), Global_34573) <= GET_MAX_ITEM_COUNT(Function_85(12)))
	{
		ADD_ITEM(Function_85(12), Global_34573, 1);
		return 1;
	}
	return 0;
}

var Function_85(bool bParam0) //Position: 0x3359 / 13145
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

bool Function_86(bool bParam0) //Position: 0x344A / 13386
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
	if (Function_89(40))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 7, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(39))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 6))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 6, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(41))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 8))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 8, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(42))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 9))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 9, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(44))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 11, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(43))
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
	if (Function_87(32))
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

bool Function_87(int iParam0) //Position: 0x3668 / 13928
{
	return Function_88(Global_83864.f_1252, iParam0);
}

int Function_88(var uParam0, int iParam1) //Position: 0x367A / 13946
{
	return (uParam0 && iParam1) == 0;
}

bool Function_89(int iParam0) //Position: 0x3687 / 13959
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

bool Function_90(int iParam0) //Position: 0x3801 / 14337
{
	bool bVar0;
	
	iParam0 = iParam0;
	bVar0 = RAND_INT_RANGE(false, 100000);
	if (bVar0 < 80000 && GET_ITEM_COUNT(Function_85(8), Global_34573) > GET_MAX_ITEM_COUNT(Function_85(8)))
	{
		ADD_ITEM(Function_85(8), Global_34573, 1);
		return 1;
	}
	if (bVar0 < 60000 && GET_ITEM_COUNT(Function_85(7), Global_34573) > GET_MAX_ITEM_COUNT(Function_85(7)))
	{
		ADD_ITEM(Function_85(7), Global_34573, 1);
		return 1;
	}
	if (bVar0 < 45000 && GET_ITEM_COUNT(Function_85(2), Global_34573) > GET_MAX_ITEM_COUNT(Function_85(2)))
	{
		ADD_ITEM(Function_85(2), Global_34573, 1);
		return 1;
	}
	if (bVar0 < 30000 && GET_ITEM_COUNT(Function_85(0), Global_34573) > GET_MAX_ITEM_COUNT(Function_85(0)))
	{
		ADD_ITEM(Function_85(0), Global_34573, 1);
		return 1;
	}
	if (bVar0 < 17500 && GET_ITEM_COUNT(Function_85(1), Global_34573) > GET_MAX_ITEM_COUNT(Function_85(1)))
	{
		ADD_ITEM(Function_85(1), Global_34573, 1);
		return 1;
	}
	if (bVar0 < 5000 && GET_ITEM_COUNT(Function_85(3), Global_34573) > GET_MAX_ITEM_COUNT(Function_85(3)))
	{
		ADD_ITEM(Function_85(3), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(12), Global_34573) <= GET_MAX_ITEM_COUNT(Function_85(12)))
	{
		ADD_ITEM(Function_85(12), Global_34573, 1);
		return 1;
	}
	return 0;
}

int Function_91(bool bParam0) //Position: 0x394F / 14671
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar14;
	int iVar15;
	float fVar16;
	bool bVar17;
	int iVar18;
	int iVar19[6];
	int iVar26;
	bool bVar27;
	bool bVar28;
	
	bVar0 = 0.0f;
	bVar1 = 0.0f;
	if (bParam0)
	{
		bVar0 = RAND_FLOAT_RANGE(5.0f, 8.0f);
		bVar1 = RAND_FLOAT_RANGE(1.0f, 3.0f);
	}
	else
	{
		bVar0 = RAND_FLOAT_RANGE(1.0f, 4.0f);
		bVar1 = 1.0f;
	}
	iVar2 = Function_106(Global_29006);
	if (iVar2 != 0)
	{
		if (bParam0 || Function_102(iVar2))
		{
			uVar3 = 10;
			iVar14 = Function_101(&uVar3, Global_29006);
			iVar15 = Function_99(iVar2);
			fVar16 = (1.0f + (IntToFloat((iVar15 / iVar14)) / 2.0f));
			if (bParam0 && Global_29006 != Global_30717[0])
			{
				bVar17 = false;
				if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 11, TO_FLOAT(iVar15 * 10), 1, 1);
					bVar17 = true;
				}
				if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 10, RAND_FLOAT_RANGE(10.0f, 21.0f), 1, 1);
					bVar17 = true;
				}
				if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 7, RAND_FLOAT_RANGE(10.0f, 21.0f), 1, 1);
					bVar17 = true;
				}
				if (bVar17)
				{
					return 1;
				}
			}
			if (!bParam0)
			{
				if (Function_98())
				{
					return 1;
				}
			}
			iVar18 = 0;
			if (DECOR_GET_INT(StackVal, "ZP_NumRevolvers") != 0)
			{
				iVar19[iVar18] = 1;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumPistols") != 0)
			{
				iVar19[iVar18] = 2;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumRepeaters") != 0)
			{
				iVar19[iVar18] = 3;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumRifles") != 0)
			{
				iVar19[iVar18] = 4;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumSnipers") != 0)
			{
				iVar19[iVar18] = 5;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumShotguns") != 0)
			{
				iVar19[iVar18] = 6;
				iVar18++;
			}
			if (iVar18 >= 0)
			{
				iVar26 = 0;
				iVar26 = 0;
				while (iVar26 <= iVar18)
				{
					switch (iVar19[iVar26])
					{
						case 0x00000001:
							if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 7, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000002:
							if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 6))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 6, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000003:
							if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 8))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 8, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000004:
							if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 9))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 9, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000005:
							if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 11, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000006:
							if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 10, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
					}
					iVar26++;
				}
			}
		}
	}
	if (Function_97(22) && !Function_97(23))
	{
		if (!IS_WEAPONENUM_LOCKED(24))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 5, 1) > (_GET_MAX_AMMO_AMOUNT(Global_34573, 5) * 0.25f))
			{
				if (RAND_INT_RANGE(false, 100000) >= 75000)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 5, bVar1, 1, 1);
					return 1;
				}
			}
		}
	}
	if (StackVal == 4)
	{
		if (Function_89(44))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > (_GET_MAX_AMMO_AMOUNT(Global_34573, 11) * 0.25f))
			{
				if (RAND_INT_RANGE(false, 100000) >= 75000)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 11, bVar0, 1, 1);
					return 1;
				}
			}
		}
	}
	if (!bParam0)
	{
		if (Function_98())
		{
			return 1;
		}
	}
	if (RAND_INT_RANGE(false, 100000) >= 20000)
	{
		bVar27 = RAND_INT_RANGE(false, 100000);
		if (bVar27 < 90000 && Function_89(40))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 7, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 80000 && Function_89(39))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 6))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 6, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 60000 && Function_89(41))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 8))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 8, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 40000 && Function_89(42))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 9))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 9, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 30000 && Function_89(44))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 11, bVar0, 1, 1);
				return 1;
			}
		}
		if (Function_89(43))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 10, bVar0, 1, 1);
				return 1;
			}
		}
	}
	bVar28 = RAND_INT_RANGE(false, 100000);
	if (bVar28 < 70000 && !IS_WEAPONENUM_LOCKED(23))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 4, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 4))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 4, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 40000 && !IS_WEAPONENUM_LOCKED(35))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 16, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 16))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 16, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 20000 && !IS_WEAPONENUM_LOCKED(24))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 5, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 5))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 5, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 10000 && !IS_WEAPONENUM_LOCKED(31))
	{
		if (ACTOR_HAS_WEAPON(Global_34573, 31))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
			{
				if (Global_13172[Function_92(10, 1, 5)11].f_20 == 10)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 13, (bVar1 * 2.0f), 1, 1);
				}
				else
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 13, bVar1, 1, 1);
				}
				return 1;
			}
		}
	}
	if (Function_87(32))
	{
		if (!IS_WEAPONENUM_LOCKED(29))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
			{
				if (Global_13172[Function_92(9, 1, 5)11].f_20 == 10)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 12, (bVar1 * 2.0f), 1, 1);
				}
				else
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 12, bVar1, 1, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int Function_92(bool bParam0, bool bParam1, bool bParam2) //Position: 0x401E / 16414
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_96(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_93(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_93(bParam0, bParam1, bParam2, 4294967295);
}

int Function_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x407C / 16508
{
	var uVar0;
	
	if (!Function_95(bParam2))
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
	uVar0 = Function_96(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_94(uVar0);
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

int Function_94(int iParam0) //Position: 0x41D1 / 16849
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

bool Function_95(int iParam0) //Position: 0x420F / 16911
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_96(int iParam0, int iParam1, int iParam2) //Position: 0x4224 / 16932
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_97(int iParam0) //Position: 0x4244 / 16964
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_98() //Position: 0x4259 / 16985
{
	if (Function_89(40))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 7, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(39))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 6, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(41))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 8, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(42))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 9, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(44))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 11, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(43))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 10, 7.0f, 1, 1);
			return 1;
		}
	}
	return 0;
}

var Function_99(int iParam0) //Position: 0x432E / 17198
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_100(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_101(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_74(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

var Function_100(int iParam0) //Position: 0x4518 / 17688
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

int Function_101(int iParam0, int iParam1) //Position: 0x469E / 18078
{
	iParam1 = iParam1;
	if (iParam1 == Global_30640[0])
	{
		(*iParam0)[0] = 65;
		(*iParam0)[1] = 68;
		(*iParam0)[2] = 435;
		(*iParam0)[3] = 428;
		(*iParam0)[4] = 107;
		(*iParam0)[5] = 140;
		return 6;
	}
	if (iParam1 == Global_30717[0])
	{
		(*iParam0)[0] = 89;
		(*iParam0)[1] = 95;
		(*iParam0)[2] = 146;
		return 3;
	}
	if (iParam1 == Global_30668[1])
	{
		(*iParam0)[0] = 56;
		(*iParam0)[1] = 24;
		(*iParam0)[2] = 138;
		(*iParam0)[3] = 139;
		return 4;
	}
	if (iParam1 == Global_30668[0])
	{
		(*iParam0)[0] = 54;
		(*iParam0)[1] = 420;
		(*iParam0)[2] = 38;
		(*iParam0)[3] = 213;
		(*iParam0)[4] = 55;
		return 5;
	}
	if (iParam1 == Global_30693[0])
	{
		(*iParam0)[0] = 276;
		(*iParam0)[1] = 237;
		(*iParam0)[2] = 290;
		(*iParam0)[3] = 460;
		(*iParam0)[4] = 269;
		(*iParam0)[5] = 283;
		return 6;
	}
	if (iParam1 == Global_30685[0])
	{
		(*iParam0)[0] = 289;
		(*iParam0)[1] = 392;
		(*iParam0)[2] = 268;
		(*iParam0)[3] = 266;
		(*iParam0)[4] = 382;
		(*iParam0)[5] = 245;
		(*iParam0)[6] = 304;
		return 7;
	}
	if (iParam1 == Global_30640[2])
	{
		(*iParam0)[0] = 487;
		(*iParam0)[1] = 491;
		(*iParam0)[2] = 493;
		return 3;
	}
	if (iParam1 == Global_30707[3])
	{
		(*iParam0)[0] = 379;
		(*iParam0)[1] = 380;
		(*iParam0)[2] = 391;
		(*iParam0)[3] = 455;
		return 4;
	}
	if (iParam1 == Global_30685[2])
	{
		(*iParam0)[0] = 410;
		(*iParam0)[1] = 411;
		(*iParam0)[2] = 465;
		return 3;
	}
	if (iParam1 == Global_30640[1])
	{
		(*iParam0)[0] = 152;
		(*iParam0)[1] = 176;
		return 2;
	}
	if (iParam1 == Global_30658[1])
	{
		(*iParam0)[0] = 133;
		(*iParam0)[1] = 144;
		return 2;
	}
	if (iParam1 == Global_30723[2])
	{
		(*iParam0)[0] = 29;
		(*iParam0)[1] = 30;
		(*iParam0)[2] = 28;
		return 3;
	}
	if (iParam1 == Global_30685[1])
	{
		(*iParam0)[0] = 516;
		(*iParam0)[1] = 529;
		return 2;
	}
	if (iParam1 == Global_30723[1])
	{
		(*iParam0)[0] = 169;
		(*iParam0)[1] = 39;
		(*iParam0)[2] = 149;
		return 3;
	}
	if (iParam1 == Global_30693[1])
	{
		(*iParam0)[0] = 62;
		(*iParam0)[1] = 242;
		(*iParam0)[2] = 244;
		(*iParam0)[3] = 296;
		(*iParam0)[4] = 297;
		(*iParam0)[5] = 260;
		(*iParam0)[6] = 295;
		(*iParam0)[7] = 141;
		return 8;
	}
	if (iParam1 == Global_30658[3])
	{
		(*iParam0)[0] = 505;
		(*iParam0)[1] = 506;
		(*iParam0)[2] = 507;
		(*iParam0)[3] = 508;
		(*iParam0)[4] = 510;
		(*iParam0)[5] = 509;
		return 6;
	}
	if (iParam1 == Global_30658[4])
	{
		(*iParam0)[0] = 400;
		return 1;
	}
	if (iParam1 == Global_30707[2])
	{
		(*iParam0)[0] = 281;
		(*iParam0)[1] = 282;
		(*iParam0)[2] = 456;
		return 3;
	}
	if (iParam1 == Global_30707[0])
	{
		(*iParam0)[0] = 396;
		(*iParam0)[1] = 462;
		(*iParam0)[2] = 15;
		(*iParam0)[3] = 11;
		(*iParam0)[4] = 461;
		return 5;
	}
	if (iParam1 == Global_30693[2])
	{
		(*iParam0)[0] = 238;
		(*iParam0)[1] = 530;
		(*iParam0)[2] = 294;
		return 3;
	}
	if (iParam1 == Global_30723[0])
	{
		(*iParam0)[0] = 404;
		return 1;
	}
	if (iParam1 == Global_30679[0])
	{
		(*iParam0)[0] = 168;
		(*iParam0)[1] = 176;
		(*iParam0)[2] = 177;
		return 3;
	}
	return 0;
}

int Function_102(int iParam0) //Position: 0x4A7A / 19066
{
	int iVar0;
	
	iVar0 = Function_100(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_104(iVar0) || Function_103(iParam0));
}

var Function_103(int iParam0) //Position: 0x4AB9 / 19129
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_100(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

int Function_104(int iParam0) //Position: 0x4ADD / 19165
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[iParam0];
	return (((Function_74(uVar0, 0x1000000) || Function_74(uVar0, 0x2000000)) || Function_74(uVar0, 0x4000000)) || Function_105(iParam0));
}

var Function_105(int iParam0) //Position: 0x4B50 / 19280
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

int Function_106(int iParam0) //Position: 0x4B6D / 19309
{
	if (iParam0 == Global_30640[0])
	{
		return 1;
	}
	if (iParam0 == Global_30640[2])
	{
		return 2;
	}
	if (iParam0 == Global_30640[1])
	{
		return 3;
	}
	if (iParam0 == Global_30658[1])
	{
		return 4;
	}
	if (iParam0 == Global_30658[3])
	{
		return 5;
	}
	if (iParam0 == Global_30668[0])
	{
		return 8;
	}
	if (iParam0 == Global_30668[1])
	{
		return 9;
	}
	if (iParam0 == Global_30679[0])
	{
		return 11;
	}
	if (iParam0 == Global_30685[0])
	{
		return 12;
	}
	if (iParam0 == Global_30685[1])
	{
		return 13;
	}
	if (iParam0 == Global_30685[2])
	{
		return 14;
	}
	if (iParam0 == Global_30693[0])
	{
		return 15;
	}
	if (iParam0 == Global_30693[1])
	{
		return 16;
	}
	if (iParam0 == Global_30693[2])
	{
		return 17;
	}
	if (iParam0 == Global_30707[2])
	{
		return 25;
	}
	if (iParam0 == Global_30707[3])
	{
		return 18;
	}
	if (iParam0 == Global_30707[0])
	{
		return 19;
	}
	if (iParam0 == Global_30717[0])
	{
		return 21;
	}
	if (iParam0 == Global_30723[2])
	{
		return 22;
	}
	if (iParam0 == Global_30723[1])
	{
		return 23;
	}
	if (iParam0 == Global_30723[0])
	{
		return 24;
	}
	if (iParam0 == Global_30679[1])
	{
		return 26;
	}
	if (iParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

int Function_107(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x4CF3 / 19699
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
	Function_120(iParam0, TO_FLOAT(bParam1), 1);
	Function_119(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_108(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_108(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4F13 / 20243
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_118(390))), 32);
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
					bVar19 = (Function_117(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_117(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_115(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_112(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_109(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_40(), &Var9);
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

var Function_109(int iParam0) //Position: 0x5540 / 21824
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_110(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5551 / 21841
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_111(char* cParam0, bool bParam1) //Position: 0x5646 / 22086
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_112(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x565F / 22111
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_114(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_113(Function_114(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_113(int iParam0, int iParam1) //Position: 0x56C4 / 22212
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_114(int iParam0, bool bParam1) //Position: 0x56D6 / 22230
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_115(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x56E8 / 22248
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
	if (((Function_116(iParam0) != 19 || Function_116(iParam0) != 17) || Function_116(iParam0) != 10) || Function_116(iParam0) != 9)
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

int Function_116(int iParam0) //Position: 0x5818 / 22552
{
	return Global_35278[iParam020].f_48;
}

float Function_117(int iParam0) //Position: 0x5827 / 22567
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_118(int iParam0) //Position: 0x5860 / 22624
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_119(int iParam0) //Position: 0x589D / 22685
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

int Function_120(int iParam0, float fParam1, bool bParam2) //Position: 0x5A37 / 23095
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

void Function_121(bool bParam0, bool bParam1) //Position: 0x5C7B / 23675
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_139("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_139("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_39))
			{
				if (bParam1)
				{
					Function_139("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_39);
			}
		}
	}
	if (bParam1)
	{
		Function_139("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_122(bool bParam0, bool bParam1) //Position: 0x5D83 / 23939
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_123(int iParam0) //Position: 0x5D99 / 23961
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
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_40(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_53(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_56(iParam0 + 40, 2);
	Function_38(iParam0 + 40, 8);
	Function_38(iParam0 + 40, 16);
	Function_38(iParam0 + 40, 64);
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
	if (!Function_126(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_56(iParam0 + 40, 32);
			}
			else
			{
				Function_38(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_38(iParam0 + 40, 32);
		}
		if (Function_74(iParam0->f_40, 32))
		{
			Function_56(iParam0 + 40, 128);
		}
		else
		{
			Function_38(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_38(iParam0 + 40, 32);
	}
	if (Function_125(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_56(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_56(iParam0 + 40, 128);
		}
	}
	if (Function_81(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_56(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_124(iParam0->f_16, bVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_124(bool bParam0, int iParam1) //Position: 0x604F / 24655
{
	iParam1 = iParam1;
	bParam0 = bParam0;
	DECOR_SET_INT(bParam0, "iLockerOpen", true);
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		iLocal_13 = 1;
		HUD_ENABLE(false);
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

bool Function_125(bool bParam0) //Position: 0x608A / 24714
{
	return Function_8(bParam0, "DrawWeapon", 0);
}

bool Function_126(bool bParam0) //Position: 0x60A3 / 24739
{
	return Function_8(bParam0, "AllowWeapon", 0);
}

void Function_127(bool bParam0, int iParam1) //Position: 0x60BD / 24765
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_128(iParam1, &bVar0);
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

bool Function_128(var uParam0, int iParam1) //Position: 0x60F5 / 24821
{
	return Function_10(uParam0, "UseName", iParam1);
}

bool Function_129(int iParam0, int iParam1) //Position: 0x610C / 24844
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
		if (ACTOR_HAS_ANIM_SET(bVar1, "stand_hostage") && !Function_8(iParam0->f_12, "CutFreeGringo", 0))
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
				if (!Function_134(6))
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
		if (!Function_133(bVar1, iParam0->f_12))
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
		if (!Function_74(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_56(iParam0 + 40, 1);
			}
			else
			{
				Function_38(iParam0 + 40, 1);
			}
			if (Function_74(iParam0->f_40, 1))
			{
				Function_122("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_60(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_60(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_132(iParam0->f_12);
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
				if (!Function_131(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_130(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_59(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_59(iParam0->f_12));
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

bool Function_130(bool bParam0) //Position: 0x63D5 / 25557
{
	return Function_12(bParam0, "ActivationCone", 0.0f);
}

bool Function_131(bool bParam0, bool bParam1) //Position: 0x63F2 / 25586
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	
	fVar3 = GRINGO_GET_USE_COMPONENT_HEADING(bParam1);
	bVar4 = GET_HEADING(bParam0);
	fVar5 = Function_12(bParam1, "HeadingTolerance", -1.0f);
	fVar6 = (fVar3 - bVar4);
	if (fVar5 != -1.0f)
	{
		return 1;
	}
	Function_60(bParam1);
	Var0 = { StackVal, StackVal, Function_60(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_60(bParam1);
	Var0 = { StackVal, StackVal, Function_60(bParam1) };
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

bool Function_132(int iParam0) //Position: 0x648E / 25742
{
	return Function_12(iParam0, "ActivationRadius", 2.0f);
}

bool Function_133(bool bParam0, int iParam1) //Position: 0x64AD / 25773
{
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "GringoIsDone"))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "stand_hostage"))
	{
		return 0;
	}
	return 1;
}

bool Function_134(int iParam0) //Position: 0x64F0 / 25840
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_135(int iParam0) //Position: 0x650C / 25868
{
	iParam0 = iParam0;
	return;
}

void Function_136(bool bParam0, int iParam1) //Position: 0x6516 / 25878
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_137(&(Local_19[iLocal_3212]), bParam0);
		iLocal_32++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 1)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_136(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_137(int iParam0, int iParam1) //Position: 0x6578 / 25976
{
	iParam0->f_12 = iParam1;
	Function_38(iParam0 + 40, 1);
	return;
}

void Function_138(int iParam0) //Position: 0x658C / 25996
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	iParam0 = iParam0;
	bVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if (STRING_CONTAINS_STRING(bVar0, "locked"))
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &uVar1);
		bVar4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/stand_open_chest", &uVar1, 1.0f, 0);
		if (IS_GRINGO_VALID(bVar4))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bVar4));
		}
	}
	return;
}

void Function_139(int iParam0) //Position: 0x660C / 26124
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

