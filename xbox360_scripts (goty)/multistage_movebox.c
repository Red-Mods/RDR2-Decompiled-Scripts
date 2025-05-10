//Decompiled with MagicRDR v1.0
//Function Count : 118
//Statics Count : 98
//Natives Count : 275
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	bool bLocal_4 = false;
	bool bLocal_5 = false;
	bool bLocal_6 = false;
	var uLocal_7 = 0;
	bool bLocal_8 = false;
	vector3 vLocal_9 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_12 = false;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	struct<12> Local_16[6];
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	char* cLocal_93 = NULL;
	int iLocal_94 = 0;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
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
	
	iLocal_13 = 0;
	iLocal_14 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_117("STARTS");
	Function_116(uScriptParam_0);
	iLocal_89 = 0;
	Function_114(uScriptParam_0, &iLocal_89);
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
			GET_OBJECT_POSITION(bVar1, &uLocal_90);
		}
		iVar2 = 0;
		bLocal_95 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_89 - 1))
			{
				if (Local_16[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_89;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_95 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_104(&(Local_16[iVar312]), &bVar4))
						{
							Function_102(GRINGO_GET_REQUESTING_ACTOR(), Local_16[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_104(&(Local_16[iVar312]), &bVar4))
						{
							Function_102(GRINGO_GET_REQUESTING_ACTOR(), Local_16[iVar312].f_12);
							if (bVar4)
							{
								Function_97(&(Local_16[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_16[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_96("eGRINGO_EndUse: Stop use by request", Local_16[iVar312].f_16);
							Function_95(Local_16[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_16[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_16[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_16[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_16[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_87(&(Local_16[iVar312]), 0);
							}
							else if (Local_16[iVar312].f_44 < 8)
							{
								Function_86(&(Local_16[iVar312]));
								Local_16[iVar312].f_44 = 8;
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
			while (iVar0 < (iLocal_89 - 1))
			{
				if (Function_85(Local_16[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_16[iVar012])))
					{
						Function_117("Quitting due to update end");
						Function_87(&(Local_16[iVar012]), 1);
					}
				}
				if (Function_15(&(Local_16[iVar012]), 0))
				{
					Function_5(&(Local_16[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_89 - 1))
		{
			if (Function_85(Local_16[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_95)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_96))
	{
		Function_117("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_96);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_89 - 1))
	{
		if (Function_85(Local_16[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_16[iVar012].f_16);
			Function_87(&(Local_16[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_16[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_16[iVar012].f_12);
		}
		Function_15(&(Local_16[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_117("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x425 / 1061
{
	iParam0 = iParam0;
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x42F / 1071
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

var Function_3() //Position: 0x46A / 1130
{
	return iLocal_15;
}

int Function_4(int iParam0) //Position: 0x472 / 1138
{
	iParam0 = iParam0;
	return 0;
}

void Function_5(int iParam0) //Position: 0x47D / 1149
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_85(iParam0->f_40, 2))
	{
		Function_95(iParam0->f_16, 0);
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
								bLocal_95 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_96))
								{
									Function_117("ManagePlayerQuit: Create quit context");
									if (Function_7(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_96 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_96 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_96))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_86(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_96))
									{
										Function_117("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_96);
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
										Function_86(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_96))
										{
											Function_117("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_96);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_96))
							{
								Function_117("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_96);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_96))
		{
			Function_117("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_96);
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x767 / 1895
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

bool Function_7(bool bParam0, bool bParam1, int iParam2) //Position: 0x861 / 2145
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

bool Function_8(bool bParam0, int iParam1) //Position: 0x87D / 2173
{
	return Function_9(bParam0, "UseQuit", iParam1);
}

bool Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x894 / 2196
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

float Function_10(bool bParam0) //Position: 0x8D9 / 2265
{
	return Function_11(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(bool bParam0, bool bParam1, int iParam2) //Position: 0x8F6 / 2294
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_12(int iParam0) //Position: 0x90C / 2316
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

bool Function_13(int iParam0) //Position: 0x9D4 / 2516
{
	return Function_85(*iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0x9E1 / 2529
{
	return Function_85(*iParam0, 1);
}

bool Function_15(var uParam0, int iParam1) //Position: 0x9EE / 2542
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

bool Function_16(int iParam0) //Position: 0xA36 / 2614
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
	
	bVar12 = Function_84(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_96("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_7(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_96("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_96("Incapacitation quit", iParam0->f_16);
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
			bLocal_95 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_83(iParam0->f_12, &fVar24))
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
				if (Function_78(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_77(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_77(iParam0);
			}
			if (!Function_76(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_95 = true;
			Function_75(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_85(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_72(iParam0->f_12);
			}
			fVar20 = Function_71(iParam0->f_12);
			if (Function_12(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_85(iParam0->f_40, 1))
			{
				Function_66(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_85(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_65(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_65(iParam0 + 40, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, 1, Function_64());
				}
				if (!Function_85(iParam0->f_40, 1024))
				{
					Function_65(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_78(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_85(iParam0->f_40, 1024))
				{
					Function_65(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_85(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_65(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_65(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_85(iParam0->f_40, 32))
			{
				bLocal_95 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_63(iParam0->f_12);
			bLocal_95 = true;
			Function_62(iParam0);
			Function_59(iParam0, Function_61(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_85(iParam0->f_40, 1);
			}
			bVar0 = Function_58(iParam0->f_16, iParam0->f_12, bVar33);
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
							Function_57(bVar1, iParam0->f_16);
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
											Function_57(bVar1, iParam0->f_16);
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
					Function_49(iParam0, bVar8, &iLocal_94, &cLocal_93);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_65(iParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_48(iParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_85(iParam0->f_40, 16))
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
				if (Function_47(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_46(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_45(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_44(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_45(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_43(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_45(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_42(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_65(iParam0 + 40, 8);
					}
					else
					{
						Function_48(iParam0 + 40, 8);
					}
					if (Function_85(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 1);
					}
				}
				else
				{
					Function_48(iParam0 + 40, 8);
				}
				if (Function_41(iParam0->f_12))
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
				Function_40(iParam0->f_16, iParam0->f_12);
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
				Function_39();
			}
			iParam0->f_44 = 6;
			if (Function_85(iParam0->f_40, 1))
			{
				if (Function_38(iParam0->f_12))
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
			bVar0 = Function_58(iParam0->f_16, iParam0->f_12, Function_85(iParam0->f_40, 1));
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
			Function_117("nRewarding");
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			Function_20(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_65(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_95 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_7(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_72(iParam0->f_12);
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
			if (Function_85(iParam0->f_40, 1024))
			{
				Function_48(iParam0 + 40, 1024);
				if (!Function_7(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_95 = true;
			bVar0 = Function_58(iParam0->f_16, iParam0->f_12, Function_85(iParam0->f_40, 1));
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

void Function_17(bool bParam0, int iParam1) //Position: 0x1B87 / 7047
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1B9C / 7068
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_19() //Position: 0x1BAA / 7082
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

void Function_20(var uParam0, bool bParam1) //Position: 0x1BDB / 7131
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

void Function_21(var uParam0, bool bParam1) //Position: 0x1C4F / 7247
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

void Function_22(var uParam0, int iParam1) //Position: 0x1CC1 / 7361
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1CCF / 7375
{
	return Function_11(bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1CE5 / 7397
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1CF2 / 7410
{
	return Function_11(bParam0, "MoveAllowance", 1.5f);
}

bool Function_26(var uParam0, int iParam1) //Position: 0x1D12 / 7442
{
	return Function_27(uParam0, iParam1, &iLocal_15);
}

int Function_27(bool bParam0, bool bParam1, int iParam2) //Position: 0x1D21 / 7457
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	float fVar15;
	int iVar16;
	bool bVar17;
	float fVar18;
	
	Function_37(bParam0, 0);
	Function_36(bParam0, 0);
	Function_35(bParam0, 0);
	iVar1 = 1;
	if (!IS_ACTOR_PLAYER(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "MSMove_Run"))
		{
			iVar1 = 4;
		}
	}
	iVar2 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, bParam1);
	if (IS_ACTOR_PLAYER(bParam0))
	{
		Function_31(bParam1, bParam0, iParam2);
	}
	if (!IS_OBJECTSET_VALID(bLocal_1) && !IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (!iLocal_13)
	{
		if (IS_ACTOR_PLAYER(bParam0))
		{
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			Function_30(StackVal, StackVal, vVar3);
			vVar6 = { StackVal, StackVal, Function_30(StackVal, StackVal, vVar3) };
			if (VDIST(vVar3, vVar6) >= 1.5f)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_3))
				{
					bLocal_3 = ADD_SCRIPT_USE_CONTEXT(GET_GRINGO_STRING_ATTR("MidUse", bParam1, &uVar0), 50, 4, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_3))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_3);
					bVar10 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1);
					ADD_OBJECT_TO_OBJECTSET(bVar10, bLocal_2);
					uLocal_7 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1), "UseAnim");
					GRINGO_ANIM_PLAY_NODE_BY_HASH(bParam0, iVar2, uLocal_7);
					iLocal_13 = 1;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_3))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_3);
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_4))
			{
				bLocal_4 = ADD_SCRIPT_USE_CONTEXT("nDrop_Item", 9, 5, false, 0, 0, 0, 4294967295, 0);
			}
			else if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_4) || DECOR_GET_BOOL(bParam0, "PlayerBreakMSGringo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_4);
				uLocal_7 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(bLocal_1) - 1), bLocal_1), "UseAnim");
				GRINGO_ANIM_PLAY_NODE_BY_HASH(bParam0, iVar2, uLocal_7);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_3))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_3);
				}
				return 0;
			}
		}
		if (Function_29(StackVal, StackVal, vLocal_9))
		{
			bVar11 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1);
			if (DECOR_CHECK_EXIST(bVar11, "MSEndBlockCheck"))
			{
				bVar12 = false;
				while (bVar12 < (GET_OBJECTSET_SIZE(bLocal_1) - 1))
				{
					bVar13 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
					bVar11 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar12, bLocal_1);
					GET_OBJECT_POSITION(bVar11, &vLocal_9);
					bVar14 = LOCATE_GRINGO_OF_TYPE(bVar13, &vLocal_9, 3.0f, 1);
					if (!IS_GRINGO_VALID(bVar14))
					{
						bLocal_12 = GET_OBJECT_HEADING(bVar11);
						bLocal_8 = bVar12;
						bVar12 = 99999;
					}
					bVar12++;
				}
			}
			else
			{
				GET_OBJECT_POSITION(bVar11, &vLocal_9);
				bLocal_12 = GET_OBJECT_HEADING(bVar11);
			}
		}
		if (!DECOR_CHECK_EXIST(bParam0, "MultistageNoMove"))
		{
			bVar9 = 0.15f;
			if (DECOR_CHECK_EXIST(bParam0, "MSGringo_setMoveThreshold"))
			{
				bVar9 = DECOR_GET_FLOAT(bParam0, "MSGringo_setMoveThreshold");
			}
			else if (bLocal_8 != (GET_OBJECTSET_SIZE(bLocal_1) - 1))
			{
				bVar9 = Function_11(bParam1, "MidFlagUseLocTol", 0.15f);
			}
			if (bLocal_8 != (GET_OBJECTSET_SIZE(bLocal_1) - 1))
			{
				fVar15 = Function_11(bParam1, "MidFlagUseDirTol", 0.0f);
			}
			else
			{
				fVar15 = Function_11(bParam1, "EndFlagUseDirTol", 0.0f);
			}
			if (GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &vLocal_9, bVar9, bVar9, iVar1, bLocal_12, fVar15, 1, 1))
			{
				uLocal_7 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1), "UseAnim");
				GRINGO_ANIM_PLAY_NODE_BY_HASH(bParam0, iVar2, uLocal_7);
				iLocal_13 = 1;
				bLocal_8 = true;
				Function_28();
				vLocal_9 = { StackVal, StackVal, Function_28() };
				if (bLocal_8 <= bLocal_6 && !IS_ACTOR_PLAYER(bParam0))
				{
					bLocal_8 = false;
					return 1;
				}
			}
		}
	}
	if (!GRINGO_ANIM_IS_SUBNODE_PLAYING_BY_HASH(bParam0, iVar2, uLocal_7))
	{
		if (!iLocal_14)
		{
			iLocal_14 = 1;
			if (GET_GRINGO_INT_ATTR(&iVar16, "StationsUsed", bParam1))
			{
				iVar16++;
				SET_GRINGO_INT_ATTR(iVar16, "StationsUsed", bParam1);
			}
		}
		if (IS_ACTOR_PLAYER(bParam0))
		{
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			Function_30(StackVal, StackVal, vVar3);
			vVar6 = { StackVal, StackVal, Function_30(StackVal, StackVal, vVar3) };
			if (VDIST(vVar3, vVar6) >= 1.5f)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_3))
				{
					bLocal_3 = ADD_SCRIPT_USE_CONTEXT(GET_GRINGO_STRING_ATTR("MidUse", bParam1, &uVar0), 50, 4, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_3))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_3);
					bVar17 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1);
					ADD_OBJECT_TO_OBJECTSET(bVar17, bLocal_2);
					uLocal_7 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1), "UseAnim");
					GRINGO_ANIM_PLAY_NODE_BY_HASH(bParam0, iVar2, uLocal_7);
					iLocal_14 = 0;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_3))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_3);
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_4))
			{
				bLocal_4 = ADD_SCRIPT_USE_CONTEXT("nDrop_Item", 9, 5, false, 0, 0, 0, 4294967295, 0);
			}
			else if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_4) || DECOR_GET_BOOL(bParam0, "PlayerBreakMSGringo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_4);
				uLocal_7 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(bLocal_1) - 1), bLocal_1), "UseAnim");
				GRINGO_ANIM_PLAY_NODE_BY_HASH(bParam0, iVar2, uLocal_7);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_3))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_3);
				}
				return 0;
			}
		}
		if (bLocal_8 <= bLocal_6 && !IS_ACTOR_PLAYER(bParam0))
		{
			bLocal_8 = false;
			return 1;
		}
		if (Function_29(StackVal, StackVal, vLocal_9))
		{
			GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1), &vLocal_9);
			bLocal_12 = GET_OBJECT_HEADING(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1));
		}
		if (!DECOR_CHECK_EXIST(bParam0, "MultistageNoMove"))
		{
			bVar9 = 0.0f;
			if (DECOR_CHECK_EXIST(bParam0, "MSGringo_setMoveThreshold"))
			{
				bVar9 = DECOR_GET_FLOAT(bParam0, "MSGringo_setMoveThreshold");
			}
			else if (bLocal_8 != (GET_OBJECTSET_SIZE(bLocal_1) - 1))
			{
				bVar9 = Function_11(bParam1, "MidFlagUseLocTol", 0.15f);
			}
			if (bLocal_8 != (GET_OBJECTSET_SIZE(bLocal_1) - 1))
			{
				fVar18 = Function_11(bParam1, "MidFlagUseDirTol", 0.0f);
			}
			else
			{
				fVar18 = Function_11(bParam1, "EndFlagUseDirTol", 0.0f);
			}
			if (GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &vLocal_9, bVar9, 0.0f, iVar1, bLocal_12, fVar18, 1, 0))
			{
				uLocal_7 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_8, bLocal_1), "UseAnim");
				GRINGO_ANIM_PLAY_NODE_BY_HASH(bParam0, iVar2, uLocal_7);
				bLocal_8++;
				Function_28();
				vLocal_9 = { StackVal, StackVal, Function_28() };
			}
		}
	}
	return 1;
}

vector3 Function_28() //Position: 0x2369 / 9065
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_29(vector3 vParam0) //Position: 0x2372 / 9074
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_30(vector3 vParam0) //Position: 0x238A / 9098
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar9;
	
	bVar3 = 5000.0f;
	if (IS_OBJECTSET_VALID(bLocal_1))
	{
		bVar4 = false;
		while (bVar4 < (GET_OBJECTSET_SIZE(bLocal_1) - 2))
		{
			if (!STRING_CONTAINS_STRING(GET_OBJECT_NAME(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, bLocal_1)), "endflag"))
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, bLocal_1), &vVar6);
				if (VDIST(vVar6, vParam0) > bVar3)
				{
					bVar9 = true;
					bVar5 = false;
					while (bVar5 < (GET_OBJECTSET_SIZE(bLocal_2) - 1))
					{
						if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, bLocal_1)), GET_OBJECT_NAME(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, bLocal_2))))
						{
							bVar3 = 5000.0f;
							bVar9 = false;
						}
						bVar5++;
					}
					if (bVar9 && !DECOR_CHECK_EXIST(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, bLocal_1), "MS_Shovel_PlayerIgnore"))
					{
						vVar0 = { StackVal, StackVal, vVar6 };
						bVar3 = VDIST(vVar6, vParam0);
						bLocal_8 = bVar4;
					}
				}
			}
			bVar4++;
		}
	}
	return StackVal, StackVal, vVar0;
}

int Function_31(bool bParam0, bool bParam1, int iParam2) //Position: 0x2476 / 9334
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[32];
	bool bVar11;
	char* cVar12[8];
	bool bVar14;
	bool bVar15;
	
	if (Function_34() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	bVar1 = GRINGO_GET_MY_OBJECT_REF();
	bVar2 = Global_30616;
	if (DECOR_CHECK_EXIST(bVar1, "MSGringo_Layout"))
	{
		bVar2 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(bVar1, "MSGringo_Layout"));
	}
	strcpy(&cVar3, GET_GRINGO_STRING_ATTR("ChildFlags", bParam0, &iVar0), 32);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bVar1, "FlagSetNum"))
	{
		bVar11 = DECOR_GET_INT(bVar1, "FlagSetNum");
		strcpy(&cVar12, INT_TO_STRING(bVar11), 8);
		stradd(&cVar3, &cVar12, 32);
	}
	stradd(&cVar3, "Set", 32);
	if (!IS_LAYOUTREF_VALID(bVar2))
	{
		return 0;
	}
	bVar14 = CREATE_OBJECT_ITERATOR(bVar2);
	ITERATE_IN_LAYOUT(bVar14, bVar2);
	ITERATE_ON_OBJECT_TYPE(bVar14, 2);
	ITERATE_ON_PARTIAL_NAME(bVar14, &cVar3);
	bVar15 = START_OBJECT_ITERATOR(bVar14);
	DESTROY_ITERATOR(bVar14);
	if (!IS_OBJECT_VALID(bVar15))
	{
		if (!Global_3380)
		{
		}
		if (IS_ACTOR_PLAYER(bParam1))
		{
			*iParam2 = 4000;
			if (IS_OBJECTSET_VALID(bLocal_1))
			{
				LOG_WARNING("No flagset here; allowing the player to use MultiStage gringo.  Checking layoutUsing for flagset.");
				Function_33(bLocal_1);
			}
			return 1;
		}
		return 0;
	}
	bLocal_1 = GET_OBJECTSET_FROM_OBJECT(bVar15);
	bLocal_6 = GET_OBJECTSET_SIZE(bLocal_1);
	if (!IS_OBJECTSET_VALID(bLocal_2))
	{
		bLocal_2 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), bVar2, 4294967295, 0);
	}
	*iParam2 = 0;
	return 1;
}

var Function_32() //Position: 0x261D / 9757
{
	int iVar0;
	
	return iVar0;
}

void Function_33(bool bParam0) //Position: 0x2625 / 9765
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

var Function_34() //Position: 0x266A / 9834
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_35(bool bParam0, bool bParam1) //Position: 0x2673 / 9843
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x26A2 / 9890
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(bParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(bParam0);
	}
	return;
}

void Function_37(bool bParam0, bool bParam1) //Position: 0x26C4 / 9924
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[1]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[1], 0);
	}
	return;
}

bool Function_38(bool bParam0) //Position: 0x26F3 / 9971
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_39() //Position: 0x2712 / 10002
{
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x2718 / 10008
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_41(int iParam0) //Position: 0x2726 / 10022
{
	iParam0 = iParam0;
	return 1;
}

bool Function_42(bool bParam0) //Position: 0x2731 / 10033
{
	return Function_7(bParam0, "OneShotKill", 0);
}

bool Function_43(bool bParam0, int iParam1) //Position: 0x274B / 10059
{
	return Function_9(bParam0, "ParentAnimNode", iParam1);
}

bool Function_44(bool bParam0) //Position: 0x2769 / 10089
{
	return Function_7(bParam0, "LinkToParentAnim", 0);
}

bool Function_45(bool bParam0) //Position: 0x2788 / 10120
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_16 - 1))
	{
		if (Local_16[iVar012].f_12 == bParam0)
		{
			return Local_16[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_46(bool bParam0) //Position: 0x27BB / 10171
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_47(bool bParam0) //Position: 0x27DA / 10202
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_48(var uParam0, int iParam1) //Position: 0x27F4 / 10228
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_49(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x2807 / 10247
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
	iVar2 = Function_56(uParam0->f_12, &bVar0);
	uVar3 = Function_55(uParam0->f_12, &bVar1);
	bVar4 = Function_54(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_53(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_52(uParam0->f_12, &bVar7);
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
			Function_51();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_50(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_32(), Function_50(uParam0->f_12, &bVar10), false, bVar9);
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
					Function_51();
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

bool Function_50(bool bParam0, bool bParam1) //Position: 0x2AEF / 10991
{
	return Function_9(bParam0, "TargetLocator", bParam1);
}

void Function_51() //Position: 0x2B0C / 11020
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_52(bool bParam0, int iParam1) //Position: 0x2B1B / 11035
{
	return Function_9(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_53(bool bParam0, int iParam1) //Position: 0x2B3D / 11069
{
	return Function_9(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_54(bool bParam0) //Position: 0x2B61 / 11105
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_55(bool bParam0, int iParam1) //Position: 0x2B7E / 11134
{
	return Function_9(bParam0, "TargetAttachBone", iParam1);
}

bool Function_56(bool bParam0, int iParam1) //Position: 0x2B9E / 11166
{
	return Function_9(bParam0, "TargetAttachSlot", iParam1);
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x2BBE / 11198
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

bool Function_58(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2C6C / 11372
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

void Function_59(int iParam0, float fParam1) //Position: 0x2CDC / 11484
{
	if (!Function_14(iParam0))
	{
		Function_60(iParam0, fParam1);
	}
	return;
}

void Function_60(int iParam0, float fParam1) //Position: 0x2CF2 / 11506
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_65(iParam0, 1);
	Function_48(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_61(bool bParam0) //Position: 0x2D13 / 11539
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(bParam0, "RandUseTime", 0.0f));
}

void Function_62(int iParam0) //Position: 0x2D33 / 11571
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_63(var uParam0) //Position: 0x2D47 / 11591
{
	uParam0 = uParam0;
	return;
}

int Function_64() //Position: 0x2D51 / 11601
{
	return 1;
}

void Function_65(var uParam0, int iParam1) //Position: 0x2D58 / 11608
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_66(bool bParam0, var uParam1, int iParam2) //Position: 0x2D67 / 11623
{
	bool bVar0;
	
	Function_69(bParam0);
	*uParam1 = { StackVal, StackVal, Function_69(bParam0) };
	*iParam2 = Function_68(bParam0);
	bVar0 = Function_67(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_67(bool bParam0) //Position: 0x2DA6 / 11686
{
	return Function_11(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_68(bool bParam0) //Position: 0x2DD1 / 11729
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_69(bool bParam0) //Position: 0x2DDC / 11740
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_70(bParam0))
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

bool Function_70(bool bParam0) //Position: 0x2ED2 / 11986
{
	return Function_7(bParam0, "UsePosActorRelative", 0);
}

bool Function_71(bool bParam0) //Position: 0x2EF4 / 12020
{
	return Function_11(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_72(bool bParam0) //Position: 0x2F1B / 12059
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10;
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
	iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (iVar10 >= 4294967295)
	{
		bVar11 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar10, bParam0);
		if (GRINGO_IS_PROP_READY(bVar11))
		{
			bVar12 = GRINGO_GET_PROP_FROM_COMPONENT(bVar11);
			bVar13 = GET_OBJECT_FROM_PHYSINST(bVar12);
			vVar14 = { 0.0f, 0.0f, 0.0f };
			if (GET_OBJECT_POSITION(bVar13, &vVar14))
			{
				Function_74(StackVal, StackVal, StackVal, StackVal, vVar3, vVar14);
				vVar3 = { StackVal, StackVal, Function_74(StackVal, StackVal, StackVal, StackVal, vVar3, vVar14) };
				Function_73(StackVal, StackVal, StackVal, StackVal, vVar0, vVar14);
				vVar0 = { StackVal, StackVal, Function_73(StackVal, StackVal, StackVal, StackVal, vVar0, vVar14) };
			}
		}
		iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, iVar10 + 1);
	}
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
	vVar17 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vVar3, StackVal) };
	vVar20 = { StackVal, StackVal, vVar17 };
	vVar20 = { StackVal, StackVal, Vector(vVar20, StackVal, StackVal) + Vector(2.0f, 2.0f, 2.0f) };
	bVar24 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera", 1, 1);
	fVar23 = Function_11(bParam0, "GringoCamHoldTime", -1.0f);
	if (IS_OBJECT_VALID(bVar24))
	{
		bVar25 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar24, 0);
		bVar26 = CREATE_POINT_IN_LAYOUT(bVar25, Function_32(), vVar17, 0.0f, 0.0f, 0.0f);
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
			fVar27 = (fVar27 + 1.5f);
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
			ATTACH_OBJECTS(bVar26, GRINGO_GET_MY_OBJECT_REF(), Function_32(), vVar36, 0.0f, 0.0f, 0.0f, 4294967295);
		}
		PLAY_CUTSCENEOBJECT(bVar24, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		Function_117("Failed to create gringo camera");
	}
	return;
}

vector3 Function_73(vector3 vParam0) //Position: 0x31DA / 12762
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

vector3 Function_74(vector3 vParam0) //Position: 0x3237 / 12855
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

void Function_75(int iParam0) //Position: 0x3294 / 12948
{
	iParam0 = iParam0;
	return;
}

bool Function_76(bool bParam0) //Position: 0x329E / 12958
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_77(int iParam0) //Position: 0x32BC / 12988
{
	if (!Function_14(iParam0))
	{
		Function_60(iParam0, 0.0f);
	}
	return;
}

bool Function_78(bool bParam0, bool bParam1) //Position: 0x32D1 / 13009
{
	vector3 vVar0;
	bool bVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	
	Function_69(bParam1);
	vVar0 = { StackVal, StackVal, Function_69(bParam1) };
	bVar3 = Function_68(bParam1);
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, bVar3, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(bParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_82(bParam0, bParam1);
	}
	uVar4 = Function_81(bParam1);
	uVar5 = Function_67(bParam1);
	Function_79(bParam1);
	vVar6 = { StackVal, StackVal, Function_79(bParam1) };
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(bParam0, &vVar0, &vVar6, uVar4, 0.2f, 1, bVar3, uVar5, 0, 0);
}

vector3 Function_79(int iParam0) //Position: 0x3358 / 13144
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Function_80(StackVal, StackVal, iParam0, "UserOffset", vVar0);
	return StackVal, StackVal, Function_80(StackVal, StackVal, iParam0, "UserOffset", vVar0);
}

vector3 Function_80(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x337B / 13179
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_81(bool bParam0) //Position: 0x3399 / 13209
{
	return Function_11(bParam0, "UseLocationTolerance", 0.0f);
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x33BC / 13244
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
	
	bVar0 = Function_81(bParam1);
	fVar1 = Function_67(bParam1);
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

bool Function_83(bool bParam0, int iParam1) //Position: 0x34D7 / 13527
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_84(bool bParam0) //Position: 0x3502 / 13570
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

bool Function_85(var uParam0, int iParam1) //Position: 0x3607 / 13831
{
	return (uParam0 && iParam1) == 0;
}

void Function_86(int iParam0) //Position: 0x3614 / 13844
{
	if (Function_85(iParam0->f_40, 16))
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

void Function_87(int iParam0, bool bParam1) //Position: 0x3687 / 13959
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
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_85(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_93(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_85(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_85(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_46(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_85(iParam0->f_40, 16))
			{
				Function_86(iParam0);
				Function_48(iParam0 + 40, 16);
			}
			if (Function_85(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 0);
			}
			if (Function_92(iParam0->f_12) && Function_85(iParam0->f_40, 512))
			{
				Function_48(iParam0 + 40, 512);
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
	if (Function_44(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_45(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_91(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_90(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_85(iParam0->f_40, 256))
			{
				Function_48(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_94)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_93));
		iLocal_94 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_47(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_96);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_62(iParam0);
	Function_77(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_89(iParam0->f_12), iParam0->f_12);
	}
	Function_48(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_88();
		}
	}
	else
	{
		Function_88();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_88() //Position: 0x3B85 / 15237
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

bool Function_89(bool bParam0) //Position: 0x3BBC / 15292
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_90(var uParam0, int iParam1) //Position: 0x3BD9 / 15321
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_56(uParam0->f_12, &uVar0);
	Function_55(uParam0->f_12, &uVar1);
	bVar2 = Function_54(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_91(int iParam0) //Position: 0x3C11 / 15377
{
	iParam0 = iParam0;
	return;
}

bool Function_92(bool bParam0) //Position: 0x3C1B / 15387
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_93(var uParam0, int iParam1) //Position: 0x3C3C / 15420
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	Function_94(uParam0, iParam1);
	return;
}

void Function_94(bool bParam0, bool bParam1) //Position: 0x3C51 / 15441
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	iLocal_14 = 0;
	bLocal_8 = false;
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), false);
	}
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	if (GET_GRINGO_INT_ATTR(&uVar0, "StationsUsed", bParam1))
	{
		SET_GRINGO_INT_ATTR(0, "StationsUsed", bParam1);
	}
	if (DECOR_CHECK_EXIST(bLocal_5, "Gringo_PropInUse"))
	{
		DECOR_REMOVE(bLocal_5, "Gringo_PropInUse");
		bVar1 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(bVar1))
		{
			iVar2 = GET_OBJECT_TYPE(bVar1);
			if (iVar2 != 17 || iVar2 != 27)
			{
				SET_PROP_AI_OBSTACLE_ENABLED(bVar1, 1);
			}
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_3))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_3);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_4))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_3);
	}
	DECOR_REMOVE(bParam0, "MSGringo_setMoveThreshold");
	DESTROY_OBJECTSET(bLocal_2);
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_37(bParam0, 1);
		Function_36(bParam0, 1);
		Function_35(bParam0, 1);
	}
	return;
}

void Function_95(bool bParam0, bool bParam1) //Position: 0x3D5D / 15709
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
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_96))
			{
				if (bParam1)
				{
					Function_117("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_96);
			}
		}
	}
	if (bParam1)
	{
		Function_117("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_96(bool bParam0, bool bParam1) //Position: 0x3E65 / 15973
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_97(int iParam0) //Position: 0x3E7B / 15995
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
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_32(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_62(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_65(iParam0 + 40, 2);
	Function_48(iParam0 + 40, 8);
	Function_48(iParam0 + 40, 16);
	Function_48(iParam0 + 40, 64);
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
	if (!Function_101(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_65(iParam0 + 40, 32);
			}
			else
			{
				Function_48(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_48(iParam0 + 40, 32);
		}
		if (Function_85(iParam0->f_40, 32))
		{
			Function_65(iParam0 + 40, 128);
		}
		else
		{
			Function_48(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_48(iParam0 + 40, 32);
	}
	if (Function_100(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_65(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_65(iParam0 + 40, 128);
		}
	}
	if (Function_92(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_65(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_98(iParam0->f_16, iVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_98(var uParam0, int iParam1) //Position: 0x4132 / 16690
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	Function_99(&iParam1, 0);
	return;
}

void Function_99(var uParam0, bool bParam1) //Position: 0x4146 / 16710
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("AttachProp", 1, *uParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bLocal_5 = GET_OBJECT_FROM_PHYSINST(GRINGO_GET_PROP_FROM_COMPONENT(bVar0));
		DECOR_SET_BOOL(bLocal_5, "Gringo_PropInUse", true);
		SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(bLocal_5), 0);
	}
	bVar1 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(bVar1))
	{
		iVar2 = GET_OBJECT_TYPE(bVar1);
		if (iVar2 != 17 || iVar2 != 27)
		{
			SET_PROP_AI_OBSTACLE_ENABLED(bVar1, 0);
			SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(bVar1), 0);
			if (IS_ACTOR_VALID(bParam1))
			{
				SET_OBJECT_COLLIDE_WITH_OBJECT(bVar1, bParam1, 0);
			}
		}
	}
	if (IS_ACTOR_VALID(bParam1))
	{
		GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), bParam1);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam1, 0);
	}
	return;
}

bool Function_100(bool bParam0) //Position: 0x41F2 / 16882
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_101(bool bParam0) //Position: 0x420B / 16907
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_102(bool bParam0, int iParam1) //Position: 0x4225 / 16933
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_103(iParam1, &bVar0);
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

bool Function_103(var uParam0, int iParam1) //Position: 0x425D / 16989
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_104(int iParam0, int iParam1) //Position: 0x4274 / 17012
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
		if (!Function_108(bVar1, iParam0->f_12))
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
		if (!Function_85(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_65(iParam0 + 40, 1);
			}
			else
			{
				Function_48(iParam0 + 40, 1);
			}
			if (Function_85(iParam0->f_40, 1))
			{
				Function_96("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_69(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_69(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_107(iParam0->f_12);
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
				if (!Function_106(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_105(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_68(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_68(iParam0->f_12));
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

bool Function_105(bool bParam0) //Position: 0x453D / 17725
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_106(bool bParam0, bool bParam1) //Position: 0x455A / 17754
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
	Function_69(bParam1);
	Var0 = { StackVal, StackVal, Function_69(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_69(bParam1);
	Var0 = { StackVal, StackVal, Function_69(bParam1) };
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

bool Function_107(int iParam0) //Position: 0x45F6 / 17910
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_108(bool bParam0, int iParam1) //Position: 0x4615 / 17941
{
	bool bVar0;
	struct<8> Var1;
	
	bParam0 = bParam0;
	if (DECOR_CHECK_EXIST(bParam0, "MoveObj_Dest"))
	{
		bVar0 = DECOR_GET_OBJECT(bParam0, "MoveObj_Dest");
		if (!IS_OBJECT_VALID(bVar0))
		{
			return 0;
		}
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110("moveboxgrpset") };
		if (DECOR_GET_BOOL(bParam0, "MoveObj_IsVehicle"))
		{
			Function_109(&bVar0, &Var1, "Load");
		}
		else
		{
			Function_109(&bVar0, &Var1, "putdown");
		}
		return 1;
	}
	return Function_31(iParam1, bParam0, &iLocal_15);
	return 0;
}

void Function_109(var uParam0, bool bParam1, bool bParam2) //Position: 0x46C0 / 18112
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bParam2 = bParam2;
	bVar0 = Global_30616;
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "MSGringo_Layout"))
	{
		bVar0 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "MSGringo_Layout"));
	}
	if (!IS_OBJECTSET_VALID(bLocal_1))
	{
		if (!IS_LAYOUTREF_VALID(Global_30616))
		{
			LOG_ERROR("gLayout_LocalRegion is invalid!!");
		}
		bLocal_1 = CREATE_OBJECTSET_IN_LAYOUT(bParam1, bVar0, 4294967295, 0);
	}
	bVar2 = true;
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bLocal_1))
	{
		bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_1);
		if (bVar3 == *uParam0)
		{
			bVar2 = false;
			bVar1 = 999999;
		}
		bVar1++;
	}
	if (bVar2)
	{
		ADD_OBJECT_TO_OBJECTSET(*uParam0, bLocal_1);
	}
	DECOR_SET_STRING(*uParam0, "UseAnim", bParam2);
	bLocal_6 = true;
	if (!IS_OBJECTSET_VALID(bLocal_2))
	{
		bLocal_2 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), bVar0, 4294967295, 0);
	}
	return;
}

struct<32> Function_110(bool bParam0) //Position: 0x47B7 / 18359
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111("0", &cVar8, ""), 4);
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

struct<32> Function_111(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4821 / 18465
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_112(int iParam0) //Position: 0x4840 / 18496
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_113(int iParam0) //Position: 0x485C / 18524
{
	iParam0 = iParam0;
	return;
}

void Function_114(bool bParam0, int iParam1) //Position: 0x4866 / 18534
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_115(&(Local_16[iLocal_8912]), bParam0);
		iLocal_89++;
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

void Function_115(int iParam0, int iParam1) //Position: 0x48C8 / 18632
{
	iParam0->f_12 = iParam1;
	Function_48(iParam0 + 40, 1);
	return;
}

void Function_116(int iParam0) //Position: 0x48DC / 18652
{
	iParam0 = iParam0;
	return;
}

void Function_117(int iParam0) //Position: 0x48E6 / 18662
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

