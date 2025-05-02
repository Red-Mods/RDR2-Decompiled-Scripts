//Decompiled with MagicRDR v1.0
//Function Count : 111
//Statics Count : 87
//Natives Count : 240
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	bool bLocal_4 = false;
	struct<12> Local_5[6];
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = false;
	int iLocal_83 = 0;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
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
	Function_110("STARTS");
	Function_109(uScriptParam_0);
	iLocal_78 = 0;
	Function_107(uScriptParam_0, &iLocal_78);
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
			GET_OBJECT_POSITION(bVar1, &uLocal_79);
		}
		iVar2 = 0;
		bLocal_84 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_78 - 1))
			{
				if (Local_5[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_78;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_84 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_95(&(Local_5[iVar312]), &bVar4))
						{
							Function_93(GRINGO_GET_REQUESTING_ACTOR(), Local_5[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_95(&(Local_5[iVar312]), &bVar4))
						{
							Function_93(GRINGO_GET_REQUESTING_ACTOR(), Local_5[iVar312].f_12);
							if (bVar4)
							{
								Function_88(&(Local_5[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_5[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_87("eGRINGO_EndUse: Stop use by request", Local_5[iVar312].f_16);
							Function_86(Local_5[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_5[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_5[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_5[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_5[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_80(&(Local_5[iVar312]), 0);
							}
							else if (Local_5[iVar312].f_44 < 8)
							{
								Function_79(&(Local_5[iVar312]));
								Local_5[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_110("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_78 - 1))
			{
				if (Function_78(Local_5[iVar012].f_40, 2))
				{
					if (!Function_17(&(Local_5[iVar012])))
					{
						Function_110("Quitting due to update end");
						Function_80(&(Local_5[iVar012]), 1);
					}
				}
				if (Function_16(&(Local_5[iVar012]), 0))
				{
					Function_6(&(Local_5[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_78 - 1))
		{
			if (Function_78(Local_5[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_5(uScriptParam_0))
		{
			if (bLocal_84)
			{
				GRINGO_WAIT(false);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(false);
			}
			else
			{
				GRINGO_WAIT(Function_4());
			}
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_85))
	{
		Function_110("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_85);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_78 - 1))
	{
		if (Function_78(Local_5[iVar012].f_40, 2))
		{
			Function_3("Gringo termination calls StopUse", Local_5[iVar012].f_16);
			Function_80(&(Local_5[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_5[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_5[iVar012].f_12);
		}
		Function_16(&(Local_5[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_110("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x41F / 1055
{
	bool bVar0;
	
	bParam0 = bParam0;
	Function_2();
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Water_Bucket_User"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Water_Bucket_User");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_2), "Water_Bucket_Ref"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_2), "Water_Bucket_Ref");
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1);
	}
	if (IS_ACTOR_VALID(bLocal_2))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_3, bLocal_2, true);
		SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_3, 1);
		SET_ACTION_NODE_FOR_ACTOR(bLocal_2, "carry_bucket/player/pst_interrupt");
		ACTOR_END_FORCE_HOLSTER(bLocal_2);
		CLEAR_ACTOR_GRINGO_RESTRICTION(bLocal_2);
		bLocal_2 = "";
	}
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		SET_GRINGO_INT_ATTR(false, "CurrentState", bVar0);
	}
	return;
}

void Function_2() //Position: 0x531 / 1329
{
	if (IS_OBJECT_VALID(bLocal_4))
	{
		DESTROY_OBJECT(bLocal_4);
	}
	return;
}

void Function_3(int iParam0, bool bParam1) //Position: 0x544 / 1348
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

int Function_4() //Position: 0x57F / 1407
{
	int iVar0;
	int iVar1;
	
	iVar0 = GRINGO_QUERY_INT(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "GlobalSettings", "CurrentState", &iVar1);
	if (iVar1 >= 0)
	{
		if (iVar0 != 2 || iVar0 != 1)
		{
			return 0;
		}
	}
	return 1000;
}

int Function_5(int iParam0) //Position: 0x5C9 / 1481
{
	iParam0 = iParam0;
	return 0;
}

void Function_6(int iParam0) //Position: 0x5D4 / 1492
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_78(iParam0->f_40, 2))
	{
		Function_86(iParam0->f_16, 0);
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
								bLocal_84 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_85))
								{
									Function_110("ManagePlayerQuit: Create quit context");
									if (Function_8(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_85 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_85 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_85))
								{
									Function_3("USE CONTEXT QUIT", iParam0->f_16);
									Function_79(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_85))
									{
										Function_110("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_85);
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
										Function_79(iParam0);
										Function_3("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_85))
										{
											Function_110("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_85);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_85))
							{
								Function_110("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_85);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_85))
		{
			Function_110("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_85);
		}
	}
	return;
}

bool Function_7(bool bParam0) //Position: 0x8BE / 2238
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

bool Function_8(bool bParam0, bool bParam1, int iParam2) //Position: 0x9B8 / 2488
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

bool Function_9(bool bParam0, int iParam1) //Position: 0x9D4 / 2516
{
	return Function_10(bParam0, "UseQuit", iParam1);
}

bool Function_10(bool bParam0, bool bParam1, int iParam2) //Position: 0x9EB / 2539
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

float Function_11(bool bParam0) //Position: 0xA30 / 2608
{
	return Function_12(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_12(bool bParam0, bool bParam1, int iParam2) //Position: 0xA4D / 2637
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_13(int iParam0) //Position: 0xA63 / 2659
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

bool Function_14(int iParam0) //Position: 0xB2B / 2859
{
	return Function_78(*iParam0, 2);
}

bool Function_15(int iParam0) //Position: 0xB38 / 2872
{
	return Function_78(*iParam0, 1);
}

bool Function_16(var uParam0, int iParam1) //Position: 0xB45 / 2885
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

bool Function_17(int iParam0) //Position: 0xB8D / 2957
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
	
	bVar12 = Function_77(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_87("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_8(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0,5f)
		{
			Function_87("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_87("Incapacitation quit", iParam0->f_16);
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
			bLocal_84 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_76(iParam0->f_12, &fVar24))
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
						Function_3("Skip to eRewarding", iParam0->f_16);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_75(iParam0->f_16, iParam0->f_12))
				{
					Function_3("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_74(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_74(iParam0);
			}
			if (!Function_73(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_3("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_84 = true;
			Function_72(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_78(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_69(iParam0->f_12);
			}
			fVar20 = Function_68(iParam0->f_12);
			if (Function_13(iParam0) < fVar20)
			{
				Function_3("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_78(iParam0->f_40, 1))
			{
				Function_63(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_78(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_3("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_62(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_3("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, true);
						Function_62(iParam0 + 40, 16);
					}
				}
				Function_3("MID ACTION TELEPORT", iParam0->f_16);
				vVar29.y = uVar6;
				if (DECOR_CHECK_EXIST(iParam0->f_16, "NoTeleport"))
				{
					SET_OBJECT_POSITION(iParam0->f_16, vVar3);
					SET_OBJECT_ORIENTATION(iParam0->f_16, vVar29);
					DECOR_REMOVE(iParam0->f_16, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, true, Function_61());
				}
				if (!Function_78(iParam0->f_40, 1024))
				{
					Function_62(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_8(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_75(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_3("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_78(iParam0->f_40, 1024))
				{
					Function_62(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_8(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_78(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_3("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_62(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_3("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, true);
					Function_62(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_78(iParam0->f_40, 32))
			{
				bLocal_84 = true;
				if (GET_WEAPON_IN_HAND(iParam0->f_16) != 4294967295)
				{
					break;
				}
				Function_3("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_60(iParam0->f_12);
			bLocal_84 = true;
			Function_59(iParam0);
			Function_56(iParam0, Function_58(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_78(iParam0->f_40, 1);
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
					bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
					while (bVar11 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar11, iParam0->f_12);
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_10(bVar1, "AttachBone", &bVar10), Function_10(bVar1, "AttachLocator", &bVar10), 1))
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
											Function_54(bVar1, iParam0->f_16);
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
				Function_3("KICKED TO DOING START", iParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_45(iParam0, bVar8, &iLocal_83, &bLocal_82);
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
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_78(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_3("SCHEDULE STOP CUSTOM UNSUSPEND", iParam0->f_16);
						UNK_0x4A1D2E25(iParam0->f_16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_3("SCHEDULE STOP CUSTOM UNFIX", iParam0->f_16);
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
					if (Function_78(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
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
				Function_36(iParam0->f_16, iParam0->f_12);
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
				Function_35();
			}
			iParam0->f_44 = 6;
			if (Function_78(iParam0->f_40, 1))
			{
				if (Function_34(iParam0->f_12))
				{
					Function_3("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_33(iParam0->f_16, iParam0->f_12))
			{
				Function_3("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_55(iParam0->f_16, iParam0->f_12, Function_78(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_3("ANIMATION QUIT DURING USE", iParam0->f_16);
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
				bVar60 = Function_32(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_3("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_31())
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
					if (Function_30(iParam0->f_12) <= 0.0f)
					{
						if (Function_13(iParam0) < Function_30(iParam0->f_12))
						{
							Function_3("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_110("nRewarding");
			Function_23(iParam0->f_16, iParam0->f_12);
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_62(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_84 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_8(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_20())
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
			if (Function_8(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_3("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_3("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_19(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_78(iParam0->f_40, 1024))
			{
				Function_44(iParam0 + 40, 1024);
				if (!Function_8(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_84 = true;
			bVar0 = Function_55(iParam0->f_16, iParam0->f_12, Function_78(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_3("ANIMATION FINISHED", iParam0->f_16);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_18(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_18(bool bParam0, int iParam1) //Position: 0x1CD4 / 7380
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_19(var uParam0, var uParam1) //Position: 0x1CE9 / 7401
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_20() //Position: 0x1CF7 / 7415
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

void Function_21(var uParam0, bool bParam1) //Position: 0x1D28 / 7464
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

void Function_22(var uParam0, bool bParam1) //Position: 0x1D9C / 7580
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

void Function_23(var uParam0, bool bParam1) //Position: 0x1E0E / 7694
{
	bParam1 = bParam1;
	uParam0 = uParam0;
	if (GRINGO_COMPONENT_CHECK_NAME("nGet_Water", bParam1))
	{
		Function_29(bParam1, 2);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Bucket", bParam1))
	{
		Function_29(bParam1, 1);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Toss_Water", bParam1))
	{
		Function_24(uParam0, bParam1);
		Function_29(bParam1, 1);
	}
	return;
}

int Function_24(bool bParam0, bool bParam1) //Position: 0x1E80 / 7808
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	vector3 vVar3;
	bool bVar6;
	
	bVar0 = GRINGO_GET_PARENT_COMPONENT(bParam1, 0);
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar0);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		uVar2 = Function_28(bParam1);
		Function_26(bParam0, bParam1);
		vVar3 = { StackVal, StackVal, Function_26(bParam0, bParam1) };
		if (COUNT_FLAMES_IN_SPHERE(vVar3, uVar2) >= 0)
		{
			bVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(GRINGO_GET_MY_OBJECT_REF(), "water_bucket_steam", "cs_ranch04_fire_out_steam", vVar3);
			Function_25();
			UNK_0x6745191B(bVar6, Function_25());
		}
		STOP_ALL_FIRE_IN_SPHERE(vVar3, uVar2);
		return 1;
	}
	LOG_ERROR("WATER_BUCKET_PUT_OUT_FLAMES: failed to get position, component invalid");
	return 0;
}

vector3 Function_25() //Position: 0x1F6F / 8047
{
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_26(bool bParam0, bool bParam1) //Position: 0x1F78 / 8056
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	vector3 vVar8;
	
	bVar0 = GRINGO_GET_PARENT_COMPONENT(bParam1, 0);
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar0);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		Function_27(bVar1, "ThrowOffsetFromUser", 0.0f, 0.0f, -1.0f);
		vVar2 = { StackVal, StackVal, Function_27(bVar1, "ThrowOffsetFromUser", 0.0f, 0.0f, -1.0f) };
		GET_ACTOR_OFFSET_WORLD_COORDS(bParam0, &vVar2, &uVar5);
		FIND_GROUND_INTERSECTION(&uVar5, 25.0f, &vVar8, &uVar5);
		return StackVal, StackVal, vVar8;
	}
	LOG_ERROR("WATER_BUCKET_GET_POS_THROWN_WATER: failed to get position, component invalid");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_27(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x203F / 8255
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_28(bool bParam0) //Position: 0x205D / 8285
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GRINGO_GET_PARENT_COMPONENT(bParam0, 0);
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar0);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		return Function_12(bVar1, "FireExtinguishRadius", 2,5f);
	}
	return 2,5f;
}

int Function_29(bool bParam0, int iParam1) //Position: 0x20B3 / 8371
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = GRINGO_GET_PARENT_COMPONENT(bParam0, 0);
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar1);
	if (IS_GRINGO_COMPONENT_VALID(bVar2))
	{
		bVar0 = iParam1;
		return SET_GRINGO_INT_ATTR(bVar0, "CurrentState", bVar2);
	}
	LOG_ERROR("GetCurrentState: GlobalSettings is invalid");
	return 0;
}

float Function_30(bool bParam0) //Position: 0x2131 / 8497
{
	return Function_12(bParam0, "UseTime", 5.0f);
}

bool Function_31() //Position: 0x2147 / 8519
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_32(bool bParam0) //Position: 0x2154 / 8532
{
	return Function_12(bParam0, "MoveAllowance", 1,5f);
}

bool Function_33(var uParam0, int iParam1) //Position: 0x2174 / 8564
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return 1;
}

bool Function_34(bool bParam0) //Position: 0x2183 / 8579
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_35() //Position: 0x21A2 / 8610
{
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x21A8 / 8616
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_37(int iParam0) //Position: 0x21B6 / 8630
{
	iParam0 = iParam0;
	return 1;
}

bool Function_38(bool bParam0) //Position: 0x21C1 / 8641
{
	return Function_8(bParam0, "OneShotKill", 0);
}

bool Function_39(bool bParam0, int iParam1) //Position: 0x21DB / 8667
{
	return Function_10(bParam0, "ParentAnimNode", iParam1);
}

bool Function_40(bool bParam0) //Position: 0x21F9 / 8697
{
	return Function_8(bParam0, "LinkToParentAnim", 0);
}

bool Function_41(bool bParam0) //Position: 0x2218 / 8728
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_5 - 1))
	{
		if (Local_5[iVar012].f_12 == bParam0)
		{
			return Local_5[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_42(bool bParam0) //Position: 0x224B / 8779
{
	return Function_8(bParam0, "LinkParentToAnim", 0);
}

bool Function_43(bool bParam0) //Position: 0x226A / 8810
{
	return Function_8(bParam0, "SingularUse", 0);
}

void Function_44(var uParam0, int iParam1) //Position: 0x2284 / 8836
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_45(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x2297 / 8855
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
	bVar2 = Function_53(uParam0->f_12, &bVar0);
	uVar3 = Function_52(uParam0->f_12, &bVar1);
	bVar4 = Function_51(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_50(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_49(uParam0->f_12, &bVar7);
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
		if (Function_31())
		{
			Function_48();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_47(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_46(), Function_47(uParam0->f_12, &bVar10), false, bVar9);
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
			if (Function_8(bVar4, "LinkToUser", 0))
			{
				if (Function_31())
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

var Function_46() //Position: 0x257F / 9599
{
	int iVar0;
	
	return iVar0;
}

bool Function_47(bool bParam0, bool bParam1) //Position: 0x2587 / 9607
{
	return Function_10(bParam0, "TargetLocator", bParam1);
}

void Function_48() //Position: 0x25A4 / 9636
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_49(bool bParam0, int iParam1) //Position: 0x25B3 / 9651
{
	return Function_10(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_50(bool bParam0, int iParam1) //Position: 0x25D5 / 9685
{
	return Function_10(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_51(bool bParam0) //Position: 0x25F9 / 9721
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_52(bool bParam0, int iParam1) //Position: 0x2616 / 9750
{
	return Function_10(bParam0, "TargetAttachBone", iParam1);
}

bool Function_53(bool bParam0, int iParam1) //Position: 0x2636 / 9782
{
	return Function_10(bParam0, "TargetAttachSlot", iParam1);
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x2656 / 9814
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

bool Function_55(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2704 / 9988
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

void Function_56(int iParam0, float fParam1) //Position: 0x2774 / 10100
{
	if (!Function_15(iParam0))
	{
		Function_57(iParam0, fParam1);
	}
	return;
}

void Function_57(int iParam0, float fParam1) //Position: 0x278A / 10122
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_62(iParam0, 1);
	Function_44(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_58(bool bParam0) //Position: 0x27AB / 10155
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_12(bParam0, "RandUseTime", 0.0f));
}

void Function_59(int iParam0) //Position: 0x27CB / 10187
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_60(var uParam0) //Position: 0x27DF / 10207
{
	uParam0 = uParam0;
	return;
}

int Function_61() //Position: 0x27E9 / 10217
{
	return 1;
}

void Function_62(var uParam0, int iParam1) //Position: 0x27F0 / 10224
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_63(bool bParam0, var uParam1, int iParam2) //Position: 0x27FF / 10239
{
	bool bVar0;
	
	Function_66(bParam0);
	*uParam1 = { StackVal, StackVal, Function_66(bParam0) };
	*iParam2 = Function_65(bParam0);
	bVar0 = Function_64(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_64(bool bParam0) //Position: 0x283E / 10302
{
	return Function_12(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_65(bool bParam0) //Position: 0x2869 / 10345
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_66(bool bParam0) //Position: 0x2874 / 10356
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

bool Function_67(bool bParam0) //Position: 0x296A / 10602
{
	return Function_8(bParam0, "UsePosActorRelative", 0);
}

bool Function_68(bool bParam0) //Position: 0x298C / 10636
{
	return Function_12(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_69(bool bParam0) //Position: 0x29B3 / 10675
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
				Function_71(StackVal, StackVal, StackVal, StackVal, vVar3, vVar14);
				vVar3 = { StackVal, StackVal, Function_71(StackVal, StackVal, StackVal, StackVal, vVar3, vVar14) };
				Function_70(StackVal, StackVal, StackVal, StackVal, vVar0, vVar14);
				vVar0 = { StackVal, StackVal, Function_70(StackVal, StackVal, StackVal, StackVal, vVar0, vVar14) };
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
	fVar23 = Function_12(bParam0, "GringoCamHoldTime", -1.0f);
	if (IS_OBJECT_VALID(bVar24))
	{
		bVar25 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar24, 0);
		bVar26 = CREATE_POINT_IN_LAYOUT(bVar25, Function_46(), vVar17, 0.0f, 0.0f, 0.0f);
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
			ATTACH_OBJECTS(bVar26, GRINGO_GET_MY_OBJECT_REF(), Function_46(), vVar36, 0.0f, 0.0f, 0.0f, 4294967295);
		}
		PLAY_CUTSCENEOBJECT(bVar24, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		Function_110("Failed to create gringo camera");
	}
	return;
}

vector3 Function_70(vector3 vParam0) //Position: 0x2C72 / 11378
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

vector3 Function_71(vector3 vParam0) //Position: 0x2CCF / 11471
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

void Function_72(int iParam0) //Position: 0x2D2C / 11564
{
	iParam0 = iParam0;
	return;
}

bool Function_73(bool bParam0) //Position: 0x2D36 / 11574
{
	return Function_8(bParam0, "MaintainPosture", 0);
}

void Function_74(int iParam0) //Position: 0x2D54 / 11604
{
	if (!Function_15(iParam0))
	{
		Function_57(iParam0, 0.0f);
	}
	return;
}

bool Function_75(var uParam0, int iParam1) //Position: 0x2D69 / 11625
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	return 1;
}

bool Function_76(bool bParam0, int iParam1) //Position: 0x2D78 / 11640
{
	*iParam1 = Function_12(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_77(bool bParam0) //Position: 0x2DA3 / 11683
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

bool Function_78(var uParam0, int iParam1) //Position: 0x2EA8 / 11944
{
	return (uParam0 && iParam1) == 0;
}

void Function_79(int iParam0) //Position: 0x2EB5 / 11957
{
	if (Function_78(iParam0->f_40, 16))
	{
		if (iParam0->f_44 > 5 && iParam0->f_44 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
			{
				Function_3("UNSUSPEND MOVER", iParam0->f_16);
				ENABLE_MOVER(iParam0->f_16);
			}
			if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
			{
				Function_3("UNFIX MOVER", iParam0->f_16);
				SET_MOVER_FROZEN(iParam0->f_16, false);
			}
		}
	}
	return;
}

void Function_80(int iParam0, bool bParam1) //Position: 0x2F28 / 12072
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
	int iVar11;
	bool bVar12;
	
	if (bParam1)
	{
		Function_3("<<<STOP USE [delay allowed]", iParam0->f_16);
	}
	else
	{
		Function_3("<<<STOP USE [NO delay allowed]", iParam0->f_16);
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
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_78(iParam0->f_40, 32)) && Function_8(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_85(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_78(iParam0->f_40, 64));
		Function_18(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_8(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_78(iParam0->f_40, 128) && Function_8(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_78(iParam0->f_40, 16))
			{
				Function_79(iParam0);
				Function_44(iParam0 + 40, 16);
			}
			if (Function_78(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_84(iParam0->f_12) && Function_78(iParam0->f_40, 512))
			{
				Function_44(iParam0 + 40, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 1);
				Function_3("Allow Bump Reactions", iParam0->f_16);
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
	Function_83(iParam0->f_12);
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_83)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(bLocal_82));
		iLocal_83 = iVar11;
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_85))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_85);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar12, "UserObject", iParam0->f_12);
	Function_59(iParam0);
	Function_74(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_3("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_82(iParam0->f_12), iParam0->f_12);
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
			Function_81();
		}
	}
	else
	{
		Function_81();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_81() //Position: 0x33BC / 13244
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

bool Function_82(bool bParam0) //Position: 0x33F3 / 13299
{
	return Function_12(bParam0, "ReuseDelay", 15.0f);
}

void Function_83(int iParam0) //Position: 0x3410 / 13328
{
	iParam0 = iParam0;
	return;
}

bool Function_84(bool bParam0) //Position: 0x341A / 13338
{
	return Function_8(bParam0, "BlockBumpReactions", 0);
}

void Function_85(bool bParam0, int iParam1) //Position: 0x343B / 13371
{
	iParam1 = iParam1;
	SET_OBJECT_COLLIDE_WITH_OBJECT(GET_TARGET_ACTOR(), bParam0, true);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_TARGET_ACTOR(), 1);
	return;
}

void Function_86(bool bParam0, bool bParam1) //Position: 0x3455 / 13397
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
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_85))
			{
				if (bParam1)
				{
					Function_110("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_85);
			}
		}
	}
	if (bParam1)
	{
		Function_110("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_87(bool bParam0, bool bParam1) //Position: 0x355D / 13661
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_88(int iParam0) //Position: 0x3573 / 13683
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
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_46(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_59(iParam0);
	Function_3("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_62(iParam0 + 40, 2);
	Function_44(iParam0 + 40, 8);
	Function_44(iParam0 + 40, 16);
	Function_44(iParam0 + 40, 64);
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
	if (!Function_92(iParam0->f_12))
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
		if (Function_78(iParam0->f_40, 32))
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
	if (Function_91(iParam0->f_12))
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
	if (Function_84(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_62(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_3("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_89(iParam0->f_16, bVar0);
	Function_3("START: ", iParam0->f_16);
	return;
}

void Function_89(bool bParam0, int iParam1) //Position: 0x3829 / 14377
{
	iParam1 = iParam1;
	bLocal_2 = bParam0;
	bLocal_3 = GET_TARGET_ACTOR();
	Function_90(bParam0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_TARGET_ACTOR(), 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(GET_TARGET_ACTOR(), bParam0, false);
	DECOR_SET_OBJECT(bLocal_3, "Water_Bucket_User", GET_OBJECT_FROM_ACTOR(bParam0));
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "Water_Bucket_Ref", bLocal_3);
	return;
}

void Function_90(bool bParam0) //Position: 0x388E / 14478
{
	vector3 vVar0;
	
	if (!IS_OBJECT_VALID(bLocal_4))
	{
		GET_POSITION(bParam0, &vVar0);
		bLocal_4 = CREATE_POINT_IN_LAYOUT(GET_OBJECT_OWNER(bParam0), Function_46(), vVar0, 0.0f, 0.0f, 0.0f);
		ATTACH_OBJECTS(bLocal_4, GET_OBJECT_FROM_ACTOR(bParam0), Function_46(), 0.0f, 0,2f, -0,6f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	return;
}

bool Function_91(bool bParam0) //Position: 0x38D5 / 14549
{
	return Function_8(bParam0, "DrawWeapon", 0);
}

bool Function_92(bool bParam0) //Position: 0x38EE / 14574
{
	return Function_8(bParam0, "AllowWeapon", 0);
}

void Function_93(bool bParam0, int iParam1) //Position: 0x3908 / 14600
{
	bool bVar0;
	int iVar1;
	
	bParam0 = bParam0;
	iVar1 = Function_94(iParam1, &bVar0);
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

bool Function_94(bool bParam0, int iParam1) //Position: 0x3940 / 14656
{
	return Function_10(bParam0, "UseName", iParam1);
}

bool Function_95(int iParam0, int iParam1) //Position: 0x3957 / 14679
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
		if (!Function_99(bVar1, iParam0->f_12))
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
		if (!Function_78(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_62(iParam0 + 40, 1);
			}
			else
			{
				Function_44(iParam0 + 40, 1);
			}
			if (Function_78(iParam0->f_40, 1))
			{
				Function_87("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_66(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_66(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_98(iParam0->f_12);
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
				if (!Function_97(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_96(iParam0->f_12);
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

bool Function_96(bool bParam0) //Position: 0x3C20 / 15392
{
	return Function_12(bParam0, "ActivationCone", 0.0f);
}

bool Function_97(bool bParam0, bool bParam1) //Position: 0x3C3D / 15421
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
	Function_66(bParam1);
	Var0 = { StackVal, StackVal, Function_66(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_66(bParam1);
	Var0 = { StackVal, StackVal, Function_66(bParam1) };
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

bool Function_98(bool bParam0) //Position: 0x3CD9 / 15577
{
	return Function_12(bParam0, "ActivationRadius", 2.0f);
}

bool Function_99(bool bParam0, bool bParam1) //Position: 0x3CF8 / 15608
{
	bool bVar0;
	var uVar1;
	vector3 vVar2;
	
	bVar0 = Function_103(bParam1);
	if (bVar0 == 4294967295)
	{
		return 0;
	}
	Function_102();
	switch (bVar0)
	{
		case 0x00000000:
			if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Bucket", bParam1))
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			if (Function_101(bParam0, bParam1))
			{
				return 0;
			}
			SET_ACTOR_GRINGO_RESTRICTION(bParam0, GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()));
			if (GRINGO_COMPONENT_CHECK_NAME("nGet_Water", bParam1))
			{
				if (Function_100(bParam0, bParam1))
				{
					return 1;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(bParam0, bParam1))
			{
				return 0;
			}
			SET_ACTOR_GRINGO_RESTRICTION(bParam0, GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()));
			if (GRINGO_COMPONENT_CHECK_NAME("Toss_Water", bParam1))
			{
				uVar1 = Function_28(bParam1);
				Function_26(bParam0, bParam1);
				vVar2 = { StackVal, StackVal, Function_26(bParam0, bParam1) };
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_100(bool bParam0, bool bParam1) //Position: 0x3DC4 / 15812
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	bool bVar8;
	
	bVar0 = GRINGO_GET_PARENT_COMPONENT(bParam1, 0);
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar0);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		iVar3 = Function_10(bVar1, "WaterSourceName", &bVar2);
		if (bVar2)
		{
			fVar4 = 2.0f;
			GET_POSITION(bParam0, &vVar5);
			bVar8 = LOCATE_NAMED_VOLUME(vVar5, fVar4, iVar3, 1);
			if (IS_OBJECT_VALID(bVar8))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_4, bVar8))
				{
					return 1;
				}
			}
			if (GET_DEBUG_DRAW_STATE())
			{
				LOG_WARNING("WATER_BUCKET_IS_NEAR_WATER: no water source found");
			}
		}
		else
		{
			LOG_ERROR("WATER_BUCKET_IS_NEAR_WATER: missing WaterSourceName in bucket XML data");
		}
	}
	return 0;
}

bool Function_101(bool bParam0, bool bParam1) //Position: 0x3ECF / 16079
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1))
	{
		if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1))
		{
			bLocal_2 = "";
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "carry_bucket/player/pst_interrupt");
			ACTOR_END_FORCE_HOLSTER(bParam0);
			Function_29(bParam1, 0);
			CLEAR_ACTOR_GRINGO_RESTRICTION(bParam0);
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_1);
			return 1;
		}
	}
	bLocal_1 = ADD_SCRIPT_USE_CONTEXT("Drop_Bucket", 100, 5, false, 0, 0, 0, 4294967295, 0);
	return 0;
}

void Function_102() //Position: 0x3F4C / 16204
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "water_bucket_steam");
	if (IS_OBJECT_VALID(bVar0))
	{
		if (IS_RMPTFX_FINISHED(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

var Function_103(bool bParam0) //Position: 0x3F84 / 16260
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = GRINGO_GET_PARENT_COMPONENT(bParam0, 0);
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar1);
	if (IS_GRINGO_COMPONENT_VALID(bVar2))
	{
		iVar0 = Function_104(bVar2, "CurrentState", 4294967295);
		if (iVar0 == 4294967295)
		{
			LOG_ERROR("GetCurrentState: CurrentState is invalid (-1)");
		}
	}
	else
	{
		LOG_ERROR("GetCurrentState: GlobalSettings is invalid");
	}
	return iVar0;
}

var Function_104(bool bParam0, bool bParam1, int iParam2) //Position: 0x4039 / 16441
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_INT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

bool Function_105(int iParam0) //Position: 0x404F / 16463
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_106(int iParam0) //Position: 0x406B / 16491
{
	iParam0 = iParam0;
	return;
}

void Function_107(bool bParam0, int iParam1) //Position: 0x4075 / 16501
{
	bool bVar0;
	bool bVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_108(&(Local_5[iLocal_7812]), bParam0);
		iLocal_78++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, bVar0);
		while (bVar0 <= 0 && *iParam1 > 6)
		{
			bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, bParam0);
			Function_107(bVar1, iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_108(int iParam0, int iParam1) //Position: 0x40D7 / 16599
{
	iParam0->f_12 = iParam1;
	Function_44(iParam0 + 40, 1);
	return;
}

void Function_109(int iParam0) //Position: 0x40EB / 16619
{
	iParam0 = iParam0;
	return;
}

void Function_110(int iParam0) //Position: 0x40F5 / 16629
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

