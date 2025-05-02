//Decompiled with MagicRDR v1.0
//Function Count : 170
//Statics Count : 88
//Natives Count : 342
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	bool bLocal_2 = false;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	bool bLocal_5 = false;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	float fLocal_9 = 0.0f;
	float fLocal_10 = 0.0f;
	float fLocal_11 = 0.0f;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 7;
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
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<9> Local_55[1];
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	var uLocal_85 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	iLocal_2 = 4294967295;
	iLocal_3 = 4294967295;
	bLocal_5 = false;
	iLocal_8 = 0;
	fLocal_9 = 0.0f;
	fLocal_10 = 0.0f;
	fLocal_11 = 0.0f;
	iLocal_16 = 0;
	uLocal_49 = "";
	uLocal_51 = "";
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_169("STARTS");
	Function_168(&uScriptParam_0);
	iLocal_75 = 0;
	Function_166(&uScriptParam_0, &iLocal_75);
	while (IS_GRINGO_ACTIVE())
	{
		Function_165(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_76);
		}
		iVar2 = 0;
		bLocal_83 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_75 - 1))
			{
				if (&vLocal_55[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_75;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_83 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_155(&(vLocal_55[iVar39]), &bVar4))
						{
							Function_153(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_55[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_155(&(vLocal_55[iVar39]), &bVar4))
						{
							Function_153(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_55[iVar39] + 16);
							if (bVar4)
							{
								Function_143(&(vLocal_55[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_55[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_142("eGRINGO_EndUse: Stop use by request", &vLocal_55[iVar39] + 24);
							Function_141(&vLocal_55[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_55[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_55[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_55[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_55[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_106(&(vLocal_55[iVar39]), 0);
							}
							else if (vLocal_55[iVar39].f_68 < 8)
							{
								Function_105(&(vLocal_55[iVar39]));
								vLocal_55[iVar39].f_68 = 8;
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
			while (iVar0 < (iLocal_75 - 1))
			{
				if (Function_104(vLocal_55[iVar09].f_64, 2))
				{
					if (!Function_16(&(vLocal_55[iVar09])))
					{
						Function_169("Quitting due to update end");
						Function_106(&(vLocal_55[iVar09]), 1);
					}
				}
				if (Function_15(&(vLocal_55[iVar09]), 0))
				{
					Function_5(&(vLocal_55[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_75 - 1))
		{
			if (Function_104(vLocal_55[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_83)
			{
				GRINGO_WAIT(0);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(0);
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_84))
	{
		Function_169("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_84);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_75 - 1))
	{
		if (Function_104(vLocal_55[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_55[iVar09] + 24);
			Function_106(&(vLocal_55[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_55[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_55[iVar09] + 16);
		}
		Function_15(&(vLocal_55[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_169("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x458 / 1112
{
	iParam0 = &iParam0;
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x464 / 1124
{
	var uVar0;
	
	uVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(&cParam1))
	{
		uVar0 = GET_OBJECT_NAME(&cParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), &cParam1, GET_TARGET_OBJECT(), &uVar0, ": ", &bParam0, 0);
	return;
}

int Function_3() //Position: 0x4A6 / 1190
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x4AD / 1197
{
	iParam0 = &iParam0;
	return 0;
}

void Function_5(struct<69> Param0) //Position: 0x4BA / 1210
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_104(Param0.f_64, 2))
	{
		Function_141(&Param0 + 24, 0);
	}
	else if (UNK_0x0A0E660E() || Function_14(&Param0))
	{
		if (Param0.f_68 == 6)
		{
			if (Function_12(&Param0) <= Function_10(&Param0 + 16))
			{
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
					{
						if (UNK_0x0A0E660E() || !Global_6663)
						{
							iVar1 = Function_8(&Param0 + 16, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_83 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_84))
								{
									Function_169("ManagePlayerQuit: Create quit context");
									if (Function_7(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_84 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_84 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_84))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_105(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_84))
									{
										Function_169("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_84);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", &Param0 + 16, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
								{
									if (Function_6(&Param0 + 24))
									{
										Function_105(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_84))
										{
											Function_169("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_84);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_84))
							{
								Function_169("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_84);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_84))
		{
			Function_169("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_84);
		}
	}
	return;
}

bool Function_6(int iParam0) //Position: 0x7EE / 2030
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	float fVar4;
	
	bVar0 = GET_CURRENT_GAME_TIME();
	Var1 = Vector(GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1), GET_ANALOGUE_ACTION("@GENERIC.MOVE_Y", 1), 0.0f);
	bVar3 = VMAG(Var1);
	if (bVar3 >= 0,2f)
	{
		DECOR_SET_BOOL(&iParam0, "StickReset", true);
	}
	else if (bVar3 < 0,75f && DECOR_CHECK_EXIST(&iParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(&iParam0, "DisconnectTime", &fVar4))
		{
			DECOR_SET_FLOAT(&iParam0, "DisconnectTime", bVar0);
		}
		else if ((bVar0 - fVar4) < 0,15f)
		{
			DECOR_REMOVE(&iParam0, "StickReset");
			DECOR_REMOVE(&iParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(&iParam0, "DisconnectTime");
	return 0;
}

bool Function_7(bool bParam0, var uParam1, int iParam2) //Position: 0x907 / 2311
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_BOOL_ATTR(&uParam1, &bParam0, &iVar0);
	if (iVar0 >= 0)
	{
		return bVar1;
	}
	return iParam2;
}

bool Function_8(char* cParam0, int iParam1) //Position: 0x925 / 2341
{
	return Function_9(&cParam0, "UseQuit", &iParam1);
}

bool Function_9(char* cParam0, char* cParam1, int iParam2) //Position: 0x93E / 2366
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GRINGO_STRING_ATTR(&cParam1, &cParam0, &iVar0);
	iParam2 = iVar0 < 0;
	if (iParam2)
	{
		if (STRING_LENGTH(&iVar1) != 0 || STRINGS_ARE_EQUAL(&iVar1, "NoString"))
		{
			iParam2 = 0;
			return &iLocal_0;
		}
		return &iVar1;
	}
	return &iLocal_0;
}

float Function_10(int iParam0) //Position: 0x98E / 2446
{
	return Function_11(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_11(bool bParam0, var uParam1, int iParam2) //Position: 0x9AC / 2476
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &bParam0);
	return iVar0;
}

float Function_12(vector3 vParam0) //Position: 0x9C4 / 2500
{
	if (Function_14(&vParam0))
	{
		if (Function_13(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_13(int iParam0) //Position: 0xA91 / 2705
{
	return Function_104(iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xA9F / 2719
{
	return Function_104(iParam0, 1);
}

bool Function_15(int iParam0, int iParam1) //Position: 0xAAD / 2733
{
	bool bVar0;
	
	bVar0 = DECOR_CHECK_EXIST(&iParam0 + 24, "GringoNoQuit");
	if (!bVar0)
	{
		return 1;
	}
	if (iParam1 && bVar0)
	{
		DECOR_REMOVE(&iParam0 + 24, "GringoNoQuit");
		return 0;
	}
	return 0;
}

bool Function_16(struct<69> Param0) //Position: 0xAFA / 2810
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	struct<2> Var16;
	float fVar18;
	bool bVar19;
	var uVar20;
	int iVar21;
	float fVar22;
	struct<2> Var23;
	bool bVar25;
	struct<2> Var26;
	int iVar28;
	bool bVar29;
	var uVar30;
	var uVar31;
	bool bVar32;
	var uVar33;
	int iVar34;
	bool bVar35;
	bool bVar36;
	var uVar37;
	float fVar38;
	int iVar39;
	bool bVar40;
	float fVar41;
	int iVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	int iVar51;
	var uVar52;
	struct<2> Var53;
	bool bVar55;
	
	bVar11 = Function_103(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_142("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_7(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_142("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_142("Incapacitation quit", &Param0 + 24);
		return 0;
	}
	GET_POSITION(&Param0 + 24, &Var16);
	bVar19 = true;
	if (Param0.f_68 < 4)
	{
		iVar21 = STRING_TO_HASH("SharedPropName");
	}
	switch (Param0.f_68)
	{
		case 0x00000002:
			bLocal_83 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_102(&Param0 + 16, &fVar22))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var23);
					Var23.f_4 = (StackVal + (fVar22 + 0,1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						bVar25 = IS_AREA_OBSTRUCTED2(Var23, fVar22, GET_PHYSINST_FROM_ACTOR(&Param0 + 24), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						bVar25 = IS_AREA_OBSTRUCTED(Var23, fVar22, &Param0 + 24, 0);
					}
					if (IS_ACTOR_ON_TRAIN(&Param0 + 24, 0) || bVar25)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						Param0.f_68 = 7;
						Function_2("Skip to eRewarding", &Param0 + 24);
						bLocal_5 = true;
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_98(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_97(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_97(&Param0);
			}
			if (!Function_96(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_83 = true;
			Function_95(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_104(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_74(&Param0 + 16);
			}
			fVar18 = Function_73(&Param0 + 16);
			if (Function_12(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_104(Param0.f_64, 1))
			{
				Function_68(&Param0 + 16, &Var3, &uVar5);
				if (!Function_104(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_67(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_67(&Param0 + 64, 16);
					}
				}
				Function_2("MID ACTION TELEPORT", &Param0 + 24);
				Var26.f_4 = uVar5;
				if (DECOR_CHECK_EXIST(&Param0 + 24, "NoTeleport"))
				{
					SET_OBJECT_POSITION(&Param0 + 24, Var3);
					SET_OBJECT_ORIENTATION(&Param0 + 24, Var26);
					DECOR_REMOVE(&Param0 + 24, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_66());
				}
				if (!Function_104(Param0.f_64, 1024))
				{
					Function_67(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_98(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_104(Param0.f_64, 1024))
				{
					Function_67(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_104(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_67(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_67(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_104(Param0.f_64, 32))
			{
				bLocal_83 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_65(&Param0 + 16);
			bLocal_83 = true;
			Function_64(&Param0);
			Function_61(&Param0, Function_63(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_104(Param0.f_64, 1);
			}
			bVar0 = Function_60(&Param0 + 24, &Param0 + 16, bVar29);
			if (!IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				Param0.f_68 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
				}
			}
			else if (bVar11)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 24, &bVar0, bVar29))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
					}
					Param0.f_68 = 5;
					bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
					while (bVar10 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, &Param0 + 16);
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_9(&bVar1, "AttachBone", &bVar9), Function_9(&bVar1, "AttachLocator", &bVar9), 1))
						{
							Function_59(&bVar1, &Param0 + 24);
							if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
							{
								uVar30 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
								if (IS_PHYSINST_VALID(&uVar30))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar30, 0);
								}
							}
						}
						bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, bVar10 + 1);
					}
					bVar12 = false;
					uVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, bVar12);
					while (bVar12 <= GRINGO_GET_ATTRIBUTE_COUNT(&Param0 + 16))
					{
						uVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, bVar12);
						if (GRINGO_IS_ATTRIBUTE_VALID(&uVar14))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&uVar14) == 2)
							{
								if (iVar21 == GRINGO_GET_ATTRIBUTE_HASH(&uVar14))
								{
									uVar15 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar14, &uVar13);
									bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), 0);
									while (bVar10 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_9(&bVar1, "AttachBone", &bVar9), Function_9(&bVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_59(&bVar1, &Param0 + 24);
										}
										bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), bVar10 + 1);
									}
								}
							}
						}
						bVar12++;
					}
				}
			}
			if (Param0.f_68 == 5)
			{
				Function_2("KICKED TO DOING START", &Param0 + 24);
				uVar7 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(&uVar7))
				{
					Function_51(&Param0, &uVar7, &iLocal_81, &uLocal_79);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_67(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_50(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_104(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SCHEDULE STOP CUSTOM UNSUSPEND", &Param0 + 24);
						UNK_0x4A1D2E25(&Param0 + 24);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("SCHEDULE STOP CUSTOM UNFIX", &Param0 + 24);
						UNK_0x817B6952(&Param0 + 24);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 1);
				if (Function_49(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_48(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_47(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_46(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_47(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_45(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_47(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_44(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_67(&Param0 + 64, 8);
					}
					else
					{
						Function_50(&Param0 + 64, 8);
					}
					if (Function_104(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_50(&Param0 + 64, 8);
				}
				if (Function_43(&Param0 + 16))
				{
					NET_SET_NODE_REPLICATION(&Param0 + 24, 1, 1);
					UNK_0xC17BAD12(&Param0 + 24);
				}
				uVar33 = Function_9(&Param0 + 16, "CustomReactNode", &bVar32);
				if (bVar32)
				{
					SET_REACT_NODE_FOR_ACTOR(&Param0 + 24, &uVar33);
				}
				iVar34 = 1;
				bVar35 = Function_7(&Param0 + 16, "CanAnimalsAttack", iVar34);
				if (!bVar35)
				{
					if (IS_ACTOR_VALID(&Param0 + 24))
					{
						SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 0);
					}
				}
				Function_42(&Param0 + 24, &Param0 + 16);
				bVar36 = Function_7(&Param0 + 16, "AllowTalking", 1);
				if (!bVar36)
				{
					STOP_PED_SPEAKING(&Param0 + 24, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				Function_41();
			}
			Param0.f_68 = 6;
			if (Function_104(Param0.f_64, 1))
			{
				if (Function_40(&Param0 + 16))
				{
					Function_2("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_26(&Param0 + 24, &Param0 + 16))
			{
				Function_2("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_60(&Param0 + 24, &Param0 + 16, Function_104(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &bVar0))
				{
					Function_2("ANIMATION QUIT DURING USE", &Param0 + 24);
					if (GRINGO_WAS_USE_SUCCESSFUL(&Param0 + 24))
					{
						Param0.f_68 = 7;
					}
					else
					{
						Param0.f_68 = 8;
					}
				}
			}
			if (Function_12(&Param0) <= Function_10(&Param0 + 16))
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(&Param0 + 24, &Param0 + 16);
			}
			if (!IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (AI_SPEECH_GET_ALLOW_FOR_ACTOR(&Param0 + 24))
				{
					uVar37 = GRINGO_GET_FIRST_NAMED_CHILD("SpeechConts", 4, &Param0 + 16);
					if (IS_GRINGO_COMPONENT_VALID(&uVar37))
					{
						if (!DECOR_GET_FLOAT_VERBOSE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", &fVar38))
						{
							DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
						}
						else
						{
							iVar39 = GRINGO_GET_ATTRIBUTE_COUNT(&uVar37);
							if (!GET_GRINGO_FLOAT_ATTR(&fVar41, "MinDelay", &uVar37))
							{
								fVar41 = 10.0f;
							}
							else
							{
								iVar39 = (iVar39 - 1);
							}
							if (!GET_GRINGO_FLOAT_ATTR(&bVar40, "MaxDelay", &uVar37))
							{
								bVar40 = 30.0f;
							}
							else
							{
								iVar39 = (iVar39 - 1);
							}
							bVar44 = GET_GRINGO_BOOL_ATTR("nForcePlay", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar43 = GET_GRINGO_BOOL_ATTR("AllowRepeat", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar45 = GET_GRINGO_BOOL_ATTR("SubtitlesOn", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar46 = GET_GRINGO_BOOL_ATTR("ForceThruSpeechBlock", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							if (iVar39 >= 0)
							{
								if (GET_CURRENT_GAME_TIME() - fVar38) <= RAND_FLOAT_RANGE(fVar41, bVar40)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									bVar47 = RAND_INT_RANGE(false, (iVar39 - 1));
									uVar48 = GRINGO_GET_ATTRIBUTE(&uVar37, bVar47);
									uVar49 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar48, &iVar42);
									iVar50 = 1;
									STRING_CLEAR_TOKENIZER();
									iVar51 = SET_OWNERSHIP_STRAGGLER(&uVar49, ",");
									if (iVar51 >= 1)
									{
										uVar52 = STRING_GET_TOKEN(1);
										if (STRINGS_ARE_EQUAL("super", &uVar52))
										{
											iVar50 = 3;
										}
										else if (STRINGS_ARE_EQUAL("shout", &uVar52))
										{
											iVar50 = 2;
										}
										else
										{
											iVar50 = 1;
										}
										uVar49 = STRING_GET_TOKEN(0);
									}
									SAY_SINGLE_LINE_STRING(&Param0 + 24, &uVar49, bVar44, bVar43, iVar50, 0, bVar45, bVar46);
								}
							}
						}
					}
				}
			}
			if (Param0.f_68 == 6)
			{
				bVar55 = Function_25(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, (&Param0 + 32)) < bVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_24())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(Var53, *(&Param0 + 32)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(bVar55);
							PRINTSTRING(" ] ");
							PRINTNL();
						}
						Param0.f_68 = 8;
					}
				}
			}
			if (Param0.f_68 == 6)
			{
				if (IS_TASKED_TO_USE_GRINGO_FOREVER(&Param0 + 24, GRINGO_GET_MY_GRINGO_ID()))
				{
					bVar19 = false;
				}
				if (bVar19)
				{
					if (Function_23(&Param0 + 16) <= 0.0f)
					{
						if (Function_12(&Param0) < Function_23(&Param0 + 16))
						{
							Function_2("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_169("nRewarding");
			Function_22(&Param0 + 24, &Param0 + 16);
			Function_21(&Param0 + 24, &Param0 + 16);
			Function_20(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_67(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_83 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_7(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_74(&Param0 + 16);
						}
					}
				}
				else
				{
					DECOR_REMOVE(&Param0 + 24, "NoGringoCamera");
				}
			}
			if (Function_7(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_18(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_104(Param0.f_64, 1024))
			{
				Function_50(&Param0 + 64, 1024);
				if (!Function_7(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_83 = true;
			bVar0 = Function_60(&Param0 + 24, &Param0 + 16, Function_104(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &bVar0))
				{
					Function_2("ANIMATION FINISHED", &Param0 + 24);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_17(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_17(var uParam0, int iParam1) //Position: 0x1E32 / 7730
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1E49 / 7753
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_19() //Position: 0x1E5B / 7771
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(&bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_20(var uParam0, int iParam1) //Position: 0x1E8E / 7822
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(&uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(&uParam0, &uVar6))
				{
					REMOVE_CAPABILITY(&uParam0, &uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x1F0C / 7948
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(&uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(&uParam0, &uVar6))
				{
					ADD_CAPABILITY(&uParam0, &uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_22(int iParam0, int iParam1) //Position: 0x1F88 / 8072
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_23(int iParam0) //Position: 0x1F9A / 8090
{
	return Function_11(&iParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1FB1 / 8113
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_25(int iParam0) //Position: 0x1FBE / 8126
{
	return Function_11(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_26(int iParam0, int iParam1) //Position: 0x1FDF / 8159
{
	float fVar0;
	int iVar1;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	struct<2> Var6;
	struct<2> Var8;
	struct<2> Var10;
	float fVar12;
	
	iParam1 = &iParam1;
	if (DECOR_CHECK_EXIST(&iParam0, "Skinning_TriggerCam") && !Function_104(iLocal_4, 16))
	{
		Function_67(&iLocal_4, 16);
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&uLocal_47);
		DECOR_REMOVE(&iParam0, "Skinning_TriggerCam");
	}
	else if (IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "pst") && Function_104(iLocal_4, 16))
	{
		Function_50(&iLocal_4, 16);
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&uLocal_47);
	}
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
	{
		Function_33(&uLocal_17);
		fVar0 = 3,95f;
		if (Function_104(iLocal_4, 64))
		{
			fVar0 = 1,55f;
		}
		if ((GET_CURRENT_GAME_TIME() - fLocal_11) < fVar0)
		{
			if ((GET_CURRENT_GAME_TIME() - fLocal_9) < fLocal_10)
			{
				fLocal_9 = GET_CURRENT_GAME_TIME();
				iVar1 = 2;
				if ((iLocal_16 != 4294967295 || iLocal_16 != 6) || iLocal_16 != 1)
				{
					iVar1 = 1;
				}
				else if (iLocal_16 != 3 || iLocal_16 != 2)
				{
					iVar1 = 4;
				}
				else if (iLocal_16 == 5)
				{
					iVar1 = 5;
				}
				if (iLocal_8 <= iVar1)
				{
					if (IS_OBJECT_VALID(&uLocal_51))
					{
						UNK_0xE18028C1(&uLocal_51);
						DESTROY_OBJECT(&uLocal_51);
					}
					Var2 = Vector(0.0f, 0.0f, 0.0f);
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var2);
					uLocal_51 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_49, "SkinAnimal", "anim_chicken_chop", Var2);
					UNK_0x6745191B(StackVal, &uLocal_51, Vector(0.0f, 0.0f, 0.0f));
					uVar4 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var2, 2,5f, "melee_knife", 1);
					if (IS_PHYSINST_VALID(&uVar4))
					{
						uVar5 = CREATE_OBJECT_LOCATOR(&uVar4, Function_32());
						OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar5, &uVar4, "impact_impale_locator", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						if (!Function_104(iLocal_4, 512))
						{
							Function_67(&iLocal_4, 512);
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 417, 0, 1, 1, 0, 4294967295, 4294967295, 0, 1);
						}
						GET_OBJECT_POSITION(&uVar5, &Var6);
						GET_OBJECT_AXIS(&uVar5, &Var8, 0);
						Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var8, Var6, StackVal) * Vector(1,1f, 1,1f, 1,1f), StackVal, StackVal);
						Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var8, StackVal);
						VNORMALIZE(&Var10);
						if (!Function_104(iLocal_4, 128))
						{
							Function_67(&iLocal_4, 128);
							CREATE_DECAL_WITH_NORMAL(StackVal, 2, Var6, Var10, Vector(0.0f, 1.0f, 0.0f), 0,21f);
						}
						else
						{
							CREATE_DECAL_WITH_NORMAL(StackVal, StackVal, StackVal, -Vector(Var10, Var6, 2), Vector(0.0f, 1.0f, 0.0f), 0,21f);
						}
						DESTROY_OBJECT(&uVar5);
					}
					UNK_0xD1C91A7F(RAND_FLOAT_RANGE(-1.0f, 1.0f), RAND_FLOAT_RANGE(-1.0f, 1.0f), 1.0f, RAND_FLOAT_RANGE(10.0f, 20.0f));
					iLocal_8++;
				}
				fLocal_10 = 1,5f;
			}
		}
		fVar12 = 4,5f;
		if (Function_104(iLocal_4, 2))
		{
			if (iLocal_16 != 3 || iLocal_16 != 5)
			{
				fVar12 = 12.0f;
			}
			else if ((iLocal_16 != 4 || iLocal_16 != 7) || iLocal_16 != 2)
			{
				fVar12 = 9.0f;
			}
		}
		if (Function_30(&uLocal_12, fVar12))
		{
			Function_27();
		}
	}
	return 1;
}

void Function_27() //Position: 0x22C1 / 8897
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	bool bVar5;
	float fVar6;
	struct<2> Var7;
	
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
	{
		Function_29(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF())));
		Var0 = Function_29(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF())));
		Function_28(&Global_54076);
		Var2 = Function_28(&Global_54076);
		Var0.f_4 = (StackVal + 0,5f);
		bVar5 = 0.0f;
		fVar6 = 0.0f;
		if (iLocal_16 == 2)
		{
			Var2.f_4 = (StackVal + 90.0f);
			uVar4 = CREATE_PROP_IN_LAYOUT(&Global_46715, Function_32(), "$/fragments/p_gen_carcassMedium01x", Var0, Var2, false);
			bVar5 = 0,8f;
			fVar6 = 0,35f;
		}
		else if (iLocal_16 == 4)
		{
			Var2.f_4 = (StackVal + 90.0f);
			uVar4 = CREATE_PROP_IN_LAYOUT(&Global_46715, Function_32(), "$/fragments/p_gen_carcassMediumExtra01x", Var0, Var2, false);
			bVar5 = 0,95f;
			fVar6 = 0,5f;
		}
		else if (iLocal_16 == 1)
		{
			uVar4 = CREATE_PROP_IN_LAYOUT(&Global_46715, Function_32(), "$/fragments/p_gen_carcassSmall01x", Var0, Var2, false);
			bVar5 = 0,6f;
			fVar6 = 0,35f;
		}
		else if (iLocal_16 == 3)
		{
			Var0.f_4 = (StackVal + 0,25f);
			Var2.f_4 = (StackVal + 90.0f);
			GET_ACTOR_AXIS(&Global_54076, &Var7, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var7, Var0, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal);
			uVar4 = CREATE_PROP_IN_LAYOUT(&Global_46715, Function_32(), "$/fragments/p_gen_carcassHorse01x", Var0, Var2, false);
			bVar5 = 1,2f;
			fVar6 = 0,75f;
		}
		else if (iLocal_16 == 5)
		{
			GET_ACTOR_AXIS(&Global_54076, &Var7, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var7, Var0, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal);
			Var0.f_4 = (StackVal + 0,25f);
			Var2.f_4 = (StackVal + 90.0f);
			uVar4 = CREATE_PROP_IN_LAYOUT(&Global_46715, Function_32(), "$/fragments/p_gen_carcassLarge01x", Var0, Var2, false);
			bVar5 = 1,2f;
			fVar6 = 0,75f;
		}
		else if (iLocal_16 == 6)
		{
			uVar4 = CREATE_PROP_IN_LAYOUT(&Global_46715, Function_32(), "$/fragments/p_gen_carcassSnake01x", Var0, Var2, false);
			bVar5 = 0,5f;
			fVar6 = 0,25f;
		}
		else if (iLocal_16 == 7)
		{
			GET_ACTOR_AXIS(&Global_54076, &Var7, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var7, Var0, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal);
			Var2.f_4 = (StackVal + 90.0f);
			uVar4 = CREATE_PROP_IN_LAYOUT(&Global_46715, Function_32(), "$/fragments/p_gen_carcassElk01x", Var0, Var2, false);
			bVar5 = 0,95f;
			fVar6 = 0,5f;
		}
		SNAP_OBJECT_TO_GROUND(&uVar4, 3,5f, true, 1092616192);
		RELEASE_OBJECT_REF(&uVar4);
		if (!bLocal_5)
		{
			if (4294967295 != iLocal_16)
			{
				SET_OBJECT_COLLIDE_WITH_OBJECT(&Global_54076, GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF())), false);
			}
		}
		CREATE_DECAL(2, Var0, bVar5, 1, 1);
		Var0 = (Var0 + fVar6);
		CREATE_DECAL(3, Var0, bVar5, 1, 1);
	}
	return;
}

struct<8> Function_28(int iParam0) //Position: 0x2644 / 9796
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_29(bool bParam0) //Position: 0x266D / 9837
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_30(int iParam0, int iParam1) //Position: 0x2696 / 9878
{
	if (Function_31(&iParam0, iParam1))
	{
		Function_64(&iParam0);
		return 1;
	}
	return 0;
}

bool Function_31(int iParam0, float fParam1) //Position: 0x26B0 / 9904
{
	if (Function_14(&iParam0))
	{
		if (Function_12(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

var Function_32() //Position: 0x26CE / 9934
{
	int iVar0;
	
	return &iVar0;
}

int Function_33(struct<2>[] Param0) //Position: 0x26D7 / 9943
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_39();
	iVar1 = 0;
	if (!Function_38(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_37(&(Param0[iVar02]), 8);
		}
		else if (Function_36())
		{
			iVar1 = 1;
			Function_37(&(Param0[iVar02]), 8);
		}
		Function_37(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_38(&(Param0[iVar02]), 4))
		{
			if (!Function_38(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_38(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_38(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_37(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_38(&(Param0[iVar02]), 4))
		{
			if (!Function_38(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_37(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_37(&(Param0[iVar02]), 2);
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

void Function_34() //Position: 0x2A99 / 10905
{
	if (!Function_35(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_35(int iParam0) //Position: 0x2AD9 / 10969
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_36() //Position: 0x2AF5 / 10997
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_37(struct<13> Param0) //Position: 0x2B23 / 11043
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

bool Function_38(struct<13> Param0) //Position: 0x2B36 / 11062
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_39() //Position: 0x2B54 / 11092
{
	if (!Function_35(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

bool Function_40(bool bParam0) //Position: 0x2B96 / 11158
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_41() //Position: 0x2BB6 / 11190
{
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0x2BBC / 11196
{
	bool bVar0;
	
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	fLocal_9 = GET_CURRENT_GAME_TIME();
	fLocal_11 = fLocal_9;
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT());
		if (!bLocal_5)
		{
			HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()));
		}
	}
	return;
}

bool Function_43(char* cParam0) //Position: 0x2C01 / 11265
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_44(int iParam0) //Position: 0x2C0E / 11278
{
	return Function_7(&iParam0, "OneShotKill", 0);
}

bool Function_45(char* cParam0, int iParam1) //Position: 0x2C29 / 11305
{
	return Function_9(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_46(int iParam0) //Position: 0x2C49 / 11337
{
	return Function_7(&iParam0, "LinkToParentAnim", 0);
}

var Function_47(int iParam0) //Position: 0x2C69 / 11369
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_55 - 1))
	{
		if (&vLocal_55[iVar09] + 16 == &iParam0)
		{
			return &vLocal_55[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_48(int iParam0) //Position: 0x2CA0 / 11424
{
	return Function_7(&iParam0, "LinkParentToAnim", 0);
}

bool Function_49(int iParam0) //Position: 0x2CC0 / 11456
{
	return Function_7(&iParam0, "SingularUse", 0);
}

void Function_50(int iParam0, int iParam1) //Position: 0x2CDB / 11483
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_51(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2CF1 / 11505
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	uVar2 = Function_58(&iParam0 + 16, &bVar0);
	uVar3 = Function_57(&iParam0 + 16, &bVar1);
	uVar4 = Function_56(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_55(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_54(&iParam0 + 16, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			*(&iParam0 + 48) = ATTACH_OBJECTS_PHYSICAL(&iParam1, &iParam0 + 24, &uVar6, &uVar8, 0,02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(&uVar2);
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
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_52(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_32(), Function_52(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	if (IS_GRINGO_COMPONENT_VALID(&uVar4))
	{
		PRINTSTRING("HAVE TARGET ANIM");
		PRINTNL();
		if (IS_GRINGO_COMPONENT_VALID(&bParam2))
		{
			LOG_ERROR("Cannot set a target skeleton anim while one is already playing");
			return;
		}
		if (IS_OBJECT_ANIMATOR_VALID(&bParam3))
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly on previous anim");
			DESTROY_OBJECT_ANIMATOR(&bParam3);
		}
		uVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar4, &iParam0 + 24);
		iVar12 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar4);
		uVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar4);
		bParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&iParam1, &uVar11, &iVar12, &uVar13);
		if (IS_OBJECT_ANIMATOR_VALID(&bParam3))
		{
			if (Function_7(&uVar4, "LinkToUser", 0))
			{
				if (Function_24())
				{
					Function_53();
					PRINTSTRING(" - linking target at slot: ");
					PRINTINT(bVar9);
					PRINTNL();
				}
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&bParam3, &iParam0 + 24, bVar9);
			}
		}
		else
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly!");
		}
		bParam2 = &iParam0 + 16;
	}
}

bool Function_52(char* cParam0, int iParam1) //Position: 0x3015 / 12309
{
	return Function_9(&cParam0, "TargetLocator", &iParam1);
}

void Function_53() //Position: 0x3034 / 12340
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_54(char* cParam0, int iParam1) //Position: 0x3043 / 12355
{
	return Function_9(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_55(char* cParam0, int iParam1) //Position: 0x3067 / 12391
{
	return Function_9(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_56(int iParam0) //Position: 0x308D / 12429
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_57(var uParam0, int iParam1) //Position: 0x30AB / 12459
{
	return Function_9(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_58(var uParam0, int iParam1) //Position: 0x30CD / 12493
{
	return Function_9(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_59(bool bParam0, int iParam1) //Position: 0x30EF / 12527
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GRINGO_GET_FIRST_CHILD(2, &bParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar0, &iParam1);
		uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar0);
		uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar0);
		uVar1 = GRINGO_GET_PHYSINST(&bParam0);
		if (IS_PHYSINST_VALID(&uVar1))
		{
			uVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uVar1);
			if (IS_OBJECT_ANIMATOR_VALID(&uVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(&uVar5);
			}
			iVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&uVar1, &uVar2, &uVar3, &uVar4);
			if (IS_OBJECT_ANIMATOR_VALID(&iVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&iVar6, &iParam1, GRINGO_GET_PROP_ATTACH_SLOT(&bParam0));
			}
		}
	}
	return;
}

var Function_60(var uParam0, int iParam1, bool bParam2) //Position: 0x31B7 / 12727
{
	int iVar0;
	
	if (bParam2)
	{
		iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnimMidAction", 2, &iParam1);
		if (IS_GRINGO_COMPONENT_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &iParam1);
		if (IS_GRINGO_COMPONENT_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, &iParam1);
	return &iVar0;
}

void Function_61(int iParam0, float fParam1) //Position: 0x3233 / 12851
{
	if (!Function_14(&iParam0))
	{
		Function_62(&iParam0, fParam1);
	}
	return;
}

void Function_62(vector3 vParam0) //Position: 0x324B / 12875
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_67(&vParam0, 1);
	Function_50(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_63(int iParam0) //Position: 0x3270 / 12912
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(&iParam0, "RandUseTime", 0.0f));
}

void Function_64(vector3 vParam0) //Position: 0x3291 / 12945
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_65(var uParam0) //Position: 0x32A8 / 12968
{
	uParam0 = &uParam0;
	return;
}

int Function_66() //Position: 0x32B4 / 12980
{
	return 1;
}

void Function_67(int iParam0, int iParam1) //Position: 0x32BB / 12987
{
	iParam0 = (iParam0 || iParam1);
	return;
}

void Function_68(int iParam0, var uParam1, int iParam2) //Position: 0x32CC / 13004
{
	bool bVar0;
	
	Function_71(&iParam0);
	uParam1 = Function_71(&iParam0);
	iParam2 = Function_70(&iParam0);
	bVar0 = Function_69(&iParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

int Function_69(int iParam0) //Position: 0x3311 / 13073
{
	return Function_11(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_70(int iParam0) //Position: 0x333D / 13117
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_71(int iParam0) //Position: 0x3349 / 13129
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_72(&iParam0))
	{
		uVar2 = GRINGO_GET_PARENT_COMPONENT(&iParam0, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar2))
		{
			uVar3 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_COMPONENT_USER(&uVar2));
			if (IS_ACTOR_VALID(&uVar3))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_LOCAL(&Var0, &iParam0);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&uVar3), Var0, &Var0);
			}
		}
		else
		{
			LOG_ERROR("Can only use 'UsePosActorRelative' attribute on child use cases");
		}
	}
	else if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&Var0, "CentreLocator", &iParam0))
	{
		if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&Var0, "UseLocator", &iParam0))
		{
			if (!GRINGO_GET_USE_COMPONENT_POSITION(&Var0, &iParam0))
			{
				LOG_ERROR("Failed to find use location!");
			}
		}
	}
	return StackVal, Var0;
}

bool Function_72(int iParam0) //Position: 0x344B / 13387
{
	return Function_7(&iParam0, "UsePosActorRelative", 0);
}

int Function_73(int iParam0) //Position: 0x346E / 13422
{
	return Function_11(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_74(bool bParam0) //Position: 0x3496 / 13462
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	bParam0 = &bParam0;
	if (!bLocal_5)
	{
		if (Function_104(iLocal_4, 4) && !Function_104(iLocal_4, 8))
		{
			Function_67(&iLocal_4, 8);
			uVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			if (STRING_CONTAINS_STRING(&uVar0, "skin"))
			{
				if (Function_104(iLocal_4, 2))
				{
					if (Function_104(iLocal_4, 256))
					{
						uLocal_47 = Function_90(&uLocal_49, 0, &Global_54076, 1, 0, 0);
					}
					else
					{
						uLocal_47 = Function_85(&uLocal_49, 0, &Global_54076, 1, 0, 0);
					}
				}
				else
				{
					uLocal_47 = Function_80(&uLocal_49, 0, &Global_54076, 1, 0, 0);
				}
			}
			else
			{
				uLocal_47 = Function_75(&uLocal_49, 0, &Global_54076, 1, 0, 0);
			}
			uLocal_6 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_49, Function_32(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f));
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_6, GRINGO_GET_MY_OBJECT_REF(), "", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_6);
			if (IS_ACTOR_VALID(&Global_21369 + 72))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_21369 + 72, &uLocal_6))
				{
					GET_ACTOR_AXIS(&Global_54076, &Var1, 2);
					GET_POSITION(&Global_54076, &Var3);
					Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var1, Var3, StackVal) * Vector(4,5f, 4,5f, 4,5f), StackVal, StackVal);
					if (!SET_OBJECT_POSITION_ON_GROUND(&Global_21369 + 72, Var3))
					{
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&Global_21369 + 72, &uLocal_6);
						Function_67(&iLocal_4, 1024);
					}
					TASK_STAND_STILL(&Global_21369 + 72, -1.0f, 0, 0);
				}
			}
		}
	}
	return;
}

var Function_75(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x35E3 / 13795
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_32(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PluckFeather", 3, 1);
	}
	Function_76(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_76(var uParam0, int iParam1) //Position: 0x366C / 13932
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_79(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_78(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_77(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,75f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1,65f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 2, 2);
	return;
}

void Function_77(int iParam0, int iParam1) //Position: 0x36DB / 14043
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(0,776102f, 1,626932f, -1,05084f), Vector(-9,761768f, 139,5969f, 5,7E-05f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,22042f, 1,362419f, 0,120133f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_78(int iParam0, var uParam1) //Position: 0x377C / 14204
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,57051f, 0,629068f, -1,019663f), Vector(1,217593f, -149,4037f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,016694f, 0,653587f, -0,026282f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_79(var uParam0, bool bParam1) //Position: 0x3819 / 14361
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(0,306341f, 0,47119f, -1,354674f), Vector(22,20756f, 167,2508f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,079903f, 0,889862f, -0,354395f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_80(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x38B6 / 14518
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_32(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Skinning_Low_NoKnife", 3, 1);
	}
	Function_81(&uVar0, &uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_81(var uParam0, int iParam1) //Position: 0x3947 / 14663
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_84(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_83(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_82(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 2, 2);
	return;
}

void Function_82(int iParam0, int iParam1) //Position: 0x39AC / 14764
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,15054f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,334075f, 0,820755f, -1,473873f), Vector(-4,245675f, -148,5864f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,439845f, 0,71051f, -0,206666f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_83(int iParam0, var uParam1) //Position: 0x3A49 / 14921
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,15054f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,334075f, 0,820755f, -1,473873f), Vector(-4,245675f, -148,5864f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,439845f, 0,71051f, -0,206666f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_84(var uParam0, bool bParam1) //Position: 0x3AE6 / 15078
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 43,15054f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,671808f, 0,993355f, -0,672763f), Vector(-9,863297f, -132,2437f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,134753f, 0,803932f, 0,059559f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_85(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x3B83 / 15235
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_32(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Skinning_High_NoKnife", 3, 1);
	}
	Function_86(&uVar0, &uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_86(var uParam0, var uParam1) //Position: 0x3C15 / 15381
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_89(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_88(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_87(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 1);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 1,5f, 1, 0);
	return;
}

void Function_87(int iParam0, var uParam1) //Position: 0x3C8A / 15498
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,183191f, 0,536072f, -1,508552f), Vector(31,17652f, -176,2945f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,126681f, 1,064484f, -0,637045f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_88(int iParam0, var uParam1) //Position: 0x3D27 / 15655
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(0,492018f, 0,468582f, -1,210122f), Vector(25,27425f, 142,346f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,026176f, 0,869156f, -0,538683f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_89(var uParam0, bool bParam1) //Position: 0x3DC4 / 15812
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,82318f, 1,093231f, -0,813308f), Vector(14,61724f, -134,8103f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,243373f, 1,304413f, -0,23743f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_90(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x3E61 / 15969
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_32(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Skinning_High_Knife", 3, 1);
	}
	Function_91(&uVar0, &uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_91(var uParam0, var uParam1) //Position: 0x3EF1 / 16113
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_94(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_93(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_92(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 1);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 1,5f, 1, 0);
	return;
}

void Function_92(int iParam0, var uParam1) //Position: 0x3F66 / 16230
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,183191f, 0,536072f, -1,508552f), Vector(31,17652f, -176,2945f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,126681f, 1,064484f, -0,637045f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_93(int iParam0, var uParam1) //Position: 0x4004 / 16388
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,131527f, 0,526192f, -1,157479f), Vector(22,58491f, -153,017f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,205833f, 0,83551f, -0,49482f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_94(int iParam0, var uParam1) //Position: 0x40A1 / 16545
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(0,889393f, 1,009293f, -0,60367f), Vector(17,50552f, 113,3907f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,273556f, 1,220909f, -0,337419f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_95(int iParam0) //Position: 0x413E / 16702
{
	iParam0 = &iParam0;
	return;
}

bool Function_96(int iParam0) //Position: 0x414A / 16714
{
	return Function_7(&iParam0, "MaintainPosture", 0);
}

void Function_97(int iParam0) //Position: 0x4169 / 16745
{
	if (!Function_14(&iParam0))
	{
		Function_62(&iParam0, 0.0f);
	}
	return;
}

bool Function_98(var uParam0, int iParam1) //Position: 0x4180 / 16768
{
	var uVar0;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	var uVar8;
	struct<2> Var10;
	struct<2> Var12;
	var uVar14;
	bool bVar16;
	bool bVar17;
	float fVar18;
	
	Function_71(&iParam1);
	uVar0 = Function_71(&iParam1);
	bVar2 = Function_70(&iParam1);
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
		{
			Var3 = Vector(0.0f, 0.0f, 0.0f);
			Var5 = Vector(0.0f, 0.0f, 0.0f);
			GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(StackVal, GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase", Vector(0,85f, 0.0f, 0.0f), &Var3);
			Function_29(GRINGO_GET_MY_OBJECT_REF());
			Var5 = Function_29(GRINGO_GET_MY_OBJECT_REF());
			bVar7 = Function_100(StackVal, StackVal, Var3, Var5);
			TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var3, bVar7, 1, 1, true);
		}
		else
		{
			uVar8 = Vector(0.0f, 0.0f, 0.0f);
			Var10 = Vector(0.0f, 0.0f, 0.0f);
			Var12 = Vector(0.0f, 0.0f, 0.0f);
			uVar14 = Vector(0.0f, 0.0f, 0.0f);
			GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(StackVal, GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase", Vector(-0,99f, 0.0f, -0,99f), &uVar8);
			FIND_GROUND_INTERSECTION(&uVar8, 3.0f, &Var10, &uVar14);
			Function_29(GRINGO_GET_MY_OBJECT_REF());
			Var12 = Function_29(GRINGO_GET_MY_OBJECT_REF());
			bVar16 = Function_100(StackVal, StackVal, Var10, Var12);
			TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var10, bVar16, 1, 1, true);
		}
		return 1;
	}
	bVar17 = Function_99(&iParam1);
	fVar18 = Function_69(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(&uParam0, &uVar0, bVar17, 0,2f, 1, bVar2, fVar18, 0, 0);
}

int Function_99(int iParam0) //Position: 0x429D / 17053
{
	return Function_11(&iParam0, "UseLocationTolerance", 0.0f);
}

var Function_100(struct<2> Param0, struct<2> Param2) //Position: 0x42C1 / 17089
{
	var uVar0;
	
	Function_101(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_101(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x42DB / 17115
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

bool Function_102(var uParam0, int iParam1) //Position: 0x42FF / 17151
{
	iParam1 = Function_11(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_103(var uParam0) //Position: 0x432D / 17197
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (!GRINGO_IS_TARGET_OBJECT_READY())
		{
			return 0;
		}
	}
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, 0);
	while (bVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, &uParam0)))
		{
			return 0;
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, bVar1 + 1);
	}
	bVar2 = false;
	iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(&uParam0))
	{
		iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, bVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(&iVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&iVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(&iVar4))
				{
					uVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&iVar4, &uVar3);
					bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), 0);
					while (bVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0))))
						{
							return 0;
						}
						bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), bVar1 + 1);
					}
				}
			}
		}
		bVar2++;
	}
	return 1;
}

bool Function_104(int iParam0, int iParam1) //Position: 0x4446 / 17478
{
	return (iParam0 && iParam1) == 0;
}

void Function_105(struct<69> Param0) //Position: 0x4453 / 17491
{
	if (Function_104(Param0.f_64, 16))
	{
		if (Param0.f_68 > 5 && Param0.f_68 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
			{
				Function_2("UNSUSPEND MOVER", &Param0 + 24);
				ENABLE_MOVER(&Param0 + 24);
			}
			if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
			{
				Function_2("UNFIX MOVER", &Param0 + 24);
				SET_MOVER_FROZEN(&Param0 + 24, false);
			}
		}
	}
	return;
}

void Function_106(struct<69> Param0) //Position: 0x44D5 / 17621
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	bool bVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	
	if (bParam1)
	{
		Function_2("<<<STOP USE [delay allowed]", &Param0 + 24);
	}
	else
	{
		Function_2("<<<STOP USE [NO delay allowed]", &Param0 + 24);
	}
	Function_9(&Param0 + 16, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			RESET_REACT_NODE_FOR_ACTOR(&Param0 + 24);
		}
	}
	iVar1 = 1;
	bVar2 = Function_7(&Param0 + 16, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 1);
		}
	}
	bVar3 = Function_7(&Param0 + 16, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(&Param0 + 24, 0);
	}
	if (Param0.f_68 < 8)
	{
		Function_18(&Param0 + 24, &Param0 + 16);
	}
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_104(Param0.f_64, 32)) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_112(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_104(Param0.f_64, 64));
		Function_17(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_7(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_104(Param0.f_64, 128) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
			{
				ACTOR_END_FORCE_HOLSTER(&Param0 + 24);
			}
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
			{
				uVar4 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
				if (IS_PHYSINST_VALID(&uVar4))
				{
					SUPRESS_MOVER_COLLISIONS(&Param0 + 24, &uVar4, 0);
				}
			}
			if (Function_48(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_104(Param0.f_64, 16))
			{
				Function_105(&Param0);
				Function_50(&Param0 + 64, 16);
			}
			if (Function_104(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_111(&Param0 + 16) && Function_104(Param0.f_64, 512))
			{
				Function_50(&Param0 + 64, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 1);
				Function_2("Allow Bump Reactions", &Param0 + 24);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
		}
	}
	bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
	while (bVar5 >= 4294967295)
	{
		uVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar5, &Param0 + 16);
		uVar7 = GRINGO_GET_PHYSINST(&uVar6);
		if (IS_PHYSINST_VALID(&uVar7))
		{
			uVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(&uVar7));
			if (IS_OBJECT_ANIMATOR_VALID(&uVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uVar8));
			}
			if (!IS_ACTOR_VALID(&Param0 + 24))
			{
				RESET_PROP(&uVar7);
			}
		}
		bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, bVar5 + 1);
	}
	if (Function_46(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_47(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_110(&Param0 + 16);
	bVar11 = Function_7(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_109(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_104(Param0.f_64, 256))
			{
				Function_50(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_81)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_79));
		iLocal_81 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_49(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_84))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_84);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_64(&Param0);
	Function_97(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_108(&Param0 + 16), &Param0 + 16);
	}
	Function_50(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_107();
		}
	}
	else
	{
		Function_107();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_107() //Position: 0x4A80 / 19072
{
	int iVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		iVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
			CAMERA_RESET(0);
		}
	}
	return;
}

int Function_108(int iParam0) //Position: 0x4ABA / 19130
{
	return Function_11(&iParam0, "ReuseDelay", 15.0f);
}

void Function_109(int iParam0, var uParam1) //Position: 0x4AD8 / 19160
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_58(&iParam0 + 16, &uVar0);
	Function_57(&iParam0 + 16, &uVar1);
	iVar2 = Function_56(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_110(int iParam0) //Position: 0x4B19 / 19225
{
	iParam0 = &iParam0;
	return;
}

bool Function_111(int iParam0) //Position: 0x4B25 / 19237
{
	return Function_7(&iParam0, "BlockBumpReactions", 0);
}

void Function_112(var uParam0, int iParam1) //Position: 0x4B47 / 19271
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
	
	iParam1 = &iParam1;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (IS_VOLUME_VALID(&uLocal_6))
	{
		if (Function_104(iLocal_4, 1024))
		{
			REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME(&Global_21369 + 72, &uLocal_6);
		}
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_6);
		DESTROY_VOLUME(&uLocal_6);
	}
	HUD_ENABLE(1);
	UI_POP("NoHUD");
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			iVar0 = (RAND_INT_RANGE(false, 10000) % 100);
			iVar1 = (RAND_INT_RANGE(false, 10000) % 100);
			iVar2 = (RAND_INT_RANGE(false, 10000) % 100);
			bVar3 = GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT());
			bVar4 = true;
			if (Function_140(16))
			{
				bVar4 = 2;
			}
			bVar5 = GET_ACTORENUM_SPECIES(bVar3);
			iVar6 = Function_139(348);
			switch (bVar5)
			{
				case 0x0000001B:
					if (bVar3 == 1080)
					{
						Function_134(598, 1);
						Function_134(520, bVar4);
						Function_134(572, bVar4);
						Global_54086[304] = (Global_54086[304] - 1.0f);
					}
					else
					{
						Function_134(572, bVar4);
					}
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000000D:
					Function_134(531, bVar4);
					Function_134(532, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000010:
				case 0x00000021:
					Function_134(536, bVar4);
					Function_134(537, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
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
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
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
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
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
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000001:
					Function_134(500, bVar4);
					Function_134(501, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
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
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
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
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001C:
					Function_134(573, bVar4);
					Function_134(574, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001E:
					Function_134(577, bVar4);
					Function_134(578, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000014:
					Function_134(543, bVar4);
					Function_134(544, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000013:
					Function_134(540, bVar4);
					Function_134(541, bVar4);
					if (iVar0 < 50)
					{
						Function_134(542, bVar4);
					}
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000005:
					Function_134(509, bVar4);
					Function_134(510, bVar4);
					if (iVar0 < 50)
					{
						Function_134(511, bVar4);
					}
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000007:
					Function_134(517, bVar4);
					Function_134(516, bVar4);
					Function_134(515, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000004:
					Function_134(508, bVar4);
					Function_134(507, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000008:
					Function_134(523, bVar4);
					Function_134(521, bVar4);
					Function_134(522, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000000C:
				case 0x00000009:
					Function_134(529, bVar4);
					Function_134(530, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000018:
					Function_134(596, bVar4);
					Function_134(553, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001D:
					Function_134(575, bVar4);
					Function_134(576, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x0000001A:
					Function_134(571, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000015:
					Function_134(545, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
					break;
				
				case 0x00000017:
					Function_134(580, bVar4);
					Function_134(581, bVar4);
					Function_118(348, FLOOR((IntToFloat(Function_133(bVar5)) * 0,4f)), 0, 0);
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
			Global_6627 = 0;
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(22))
			{
				if (Function_139(276) > 18)
				{
					AWARD_ACHIEVEMENT(22);
				}
			}
			if (Function_117(1) >= 9)
			{
				if (GET_ITEM_COUNT(Function_116(4), &uParam0) <= 5)
				{
					iVar7 = Function_139(348);
					if (iVar7 != iVar6)
					{
						if ((iVar7 - iVar6) > 100)
						{
							ADD_ITEM(Function_116(4), &uParam0, 1);
						}
						else if (iVar6 % 100) > (iVar7 % 100)
						{
							ADD_ITEM(Function_116(4), &uParam0, 1);
						}
					}
				}
			}
		}
		AI_CLEAR_DONT_HARM_ACTOR(&uParam0);
		if (iLocal_2 != 4294967295)
		{
			ACTOR_SET_NEXT_EQUIP_SLOT(&uParam0, iLocal_3, 0);
			ACTOR_SET_NEXT_WEAPON(&uParam0, iLocal_2);
			bLocal_2 = 4294967295;
		}
		else if (iLocal_3 != 4294967295)
		{
			ACTOR_SET_NEXT_EQUIP_SLOT(&uParam0, iLocal_3, 0);
		}
		Function_50(&iLocal_4, 1);
		if (DECOR_CHECK_EXIST(&uParam0, "AnimalSize"))
		{
			DECOR_REMOVE(&uParam0, "AnimalSize");
		}
	}
	if (Function_104(iLocal_4, 32))
	{
		bVar8 = GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT());
		if (GET_ACTORENUM_SPECIES(bVar8) == 19)
		{
			Function_134(540, 1);
			Function_134(541, 1);
		}
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	Function_113(&uLocal_17);
	if (IS_OBJECT_VALID(&uLocal_53))
	{
		DESTROY_OBJECT(&uLocal_53);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_49))
	{
		DESTROY_LAYOUT(&uLocal_49);
	}
	if (!bLocal_5)
	{
		if (4294967295 != iLocal_16)
		{
			DESTROY_OBJECT(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF())));
		}
	}
	iLocal_4 = 0;
	DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	return;
}

void Function_113(int iParam0) //Position: 0x556C / 21868
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_114(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_114(struct<2>[] Param0, int iParam1) //Position: 0x5594 / 21908
{
	if (Function_38(&(Param0[iParam12]), 4))
	{
		if (Function_38(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_115(&(Param0[iParam12]), 1);
			Function_115(&(Param0[iParam12]), 2);
			Function_115(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_115(struct<13> Param0) //Position: 0x56DF / 22239
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

var Function_116(bool bParam0) //Position: 0x56FC / 22268
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

int Function_117(int iParam0) //Position: 0x57F0 / 22512
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

int Function_118(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5818 / 22552
{
	int iVar0;
	int iVar1;
	
	iVar0 = bParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[bParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[bParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[bParam0] = (Global_54086[bParam0] + TO_FLOAT(bParam1));
	Function_132(bParam0, TO_FLOAT(bParam1), 1);
	Function_131(bParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_120(bParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[bParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[bParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_119(bParam0);
	return 1;
}

void Function_119(bool bParam0) //Position: 0x5A40 / 23104
{
	switch (bParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_120(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x5ADE / 23262
{
	char* cVar0[32];
	bool bVar8;
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
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_130(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_124(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_121(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_32(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_121(int iParam0) //Position: 0x611C / 24860
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_122(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x612D / 24877
{
	char* cVar0[32];
	
	if (&bParam3)
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_123(char* cParam0) //Position: 0x6224 / 25124
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_124(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x623F / 25151
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_126(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_125(Function_126(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_125(int iParam0, int iParam1) //Position: 0x62A6 / 25254
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_126(int iParam0, bool bParam1) //Position: 0x62B8 / 25272
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_127(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x62CA / 25290
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_128(int iParam0) //Position: 0x63FE / 25598
{
	return Global_55480[iParam016].f_96;
}

float Function_129(int iParam0) //Position: 0x640D / 25613
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_130(int iParam0) //Position: 0x6446 / 25670
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_131(int iParam0) //Position: 0x6483 / 25731
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_132(int iParam0, float fParam1, bool bParam2) //Position: 0x661D / 26141
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_133(bool bParam0) //Position: 0x6861 / 26721
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

int Function_134(int iParam0, bool bParam1) //Position: 0x6AE3 / 27363
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0, 0);
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
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_135();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_135() //Position: 0x6C8F / 27791
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_136();
	return 0;
}

void Function_136() //Position: 0x6D30 / 27952
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_137(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_137(int iParam0) //Position: 0x6DEE / 28142
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_138(int iParam0, int iParam1) //Position: 0x6E54 / 28244
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

int Function_139(int iParam0) //Position: 0x6E99 / 28313
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_140(int iParam0) //Position: 0x6EDA / 28378
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

void Function_141(var uParam0, bool bParam1) //Position: 0x6EEB / 28395
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_169("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_169("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_84))
			{
				if (&bParam1)
				{
					Function_169("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_84);
			}
		}
	}
	if (&bParam1)
	{
		Function_169("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_142(int iParam0, int iParam1) //Position: 0x6FFB / 28667
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_143(struct<69> Param0) //Position: 0x7013 / 28691
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	*(&Param0 + 24) = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(&Param0 + 24))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	*(&Param0 + 16) = &uVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(&uVar0))
	{
		if (IS_ACTOR_HORSE(&Param0 + 24))
		{
			*(&Param0 + 56) = CREATE_OBSTACLE_ON_OBJECT(StackVal, StackVal, StackVal, &Param0 + 24, "ngringoObs", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1,75f, 2.0f));
		}
		else
		{
			*(&Param0 + 56) = CREATE_OBSTACLE_ON_OBJECT(StackVal, StackVal, StackVal, &Param0 + 24, "ngringoObs", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(0,5f, 1.0f, 0,5f));
		}
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_32(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_64(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_67(&Param0 + 64, 2);
	Function_50(&Param0 + 64, 8);
	Function_50(&Param0 + 64, 16);
	Function_50(&Param0 + 64, 64);
	SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "UserObject", &uVar0);
	GRINGO_SET_COMPONENT_USER(&Param0 + 24, &uVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		uVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar1))
		{
			SUPRESS_MOVER_COLLISIONS(&Param0 + 24, &uVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar2, "LastUserObject", &Param0 + 16);
	if (!Function_152(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_67(&Param0 + 64, 32);
			}
			else
			{
				Function_50(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_50(&Param0 + 64, 32);
		}
		if (Function_104(Param0.f_64, 32))
		{
			Function_67(&Param0 + 64, 128);
		}
		else
		{
			Function_50(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_50(&Param0 + 64, 32);
	}
	if (Function_151(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_67(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_67(&Param0 + 64, 128);
		}
	}
	if (Function_111(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_67(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_144(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_144(var uParam0, int iParam1) //Position: 0x732F / 29487
{
	var uVar0;
	bool bVar1;
	struct<8> Var2;
	var uVar10;
	bool bVar11;
	struct<8> Var12;
	
	iParam1 = &iParam1;
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		uVar0 = GET_TARGET_OBJECT();
		bVar1 = GET_CORPSE_ACTOR_ENUM(&uVar0);
		Global_6627 = 1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_149("SkinLayout") };
		uLocal_49 = CREATE_LAYOUT(&Var2);
		Function_67(&iLocal_4, 4);
		UI_PUSH("NoHUD");
		HUD_ENABLE(0);
		Function_50(&iLocal_4, 32);
	}
	else
	{
		Function_50(&iLocal_4, 4);
		if (GET_ACTOR_ENUM(&uParam0) == 638)
		{
			uVar10 = GET_TARGET_OBJECT();
			bVar11 = GET_CORPSE_ACTOR_ENUM(&uVar10);
			Global_6627 = 1;
			Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_149("SkinLayout") };
			uLocal_49 = CREATE_LAYOUT(&Var12);
			UI_PUSH("NoHUD");
			HUD_ENABLE(0);
			Function_67(&iLocal_4, 32);
		}
	}
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "pluck"))
	{
		ACTOR_HOLSTER_WEAPON(&uParam0, 0);
	}
	else if (!GET_WEAPON_IN_HAND(&uParam0) != 22)
	{
		ACTOR_HOLSTER_WEAPON(&uParam0, 0);
		Function_50(&iLocal_4, 256);
	}
	else
	{
		Function_67(&iLocal_4, 256);
		if (GET_ACTOR_POSTURE(&uParam0) == 1)
		{
			Function_67(&iLocal_4, 64);
		}
	}
	AI_DONT_HARM_ACTOR(&uParam0);
	Function_67(&iLocal_4, 1);
	Function_50(&iLocal_4, 2);
	if (GET_ACTOR_POSTURE(&uParam0) == 0)
	{
		Function_67(&iLocal_4, 2);
	}
	iLocal_16 = Function_148(&uParam0, GET_CORPSE_ACTOR_ENUM(GET_TARGET_OBJECT()));
	if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()), "skin"))
	{
		Function_146(&uLocal_17, "$/fragments/p_gen_carcassSmall01x", 0, 0);
		Function_146(&uLocal_17, "$/fragments/p_gen_carcassSnake01x", 0, 0);
		Function_146(&uLocal_17, "$/fragments/p_gen_carcassMedium01x", 0, 0);
		Function_146(&uLocal_17, "$/fragments/p_gen_carcassHorse01x", 0, 0);
		Function_146(&uLocal_17, "$/fragments/p_gen_carcassMediumExtra01x", 0, 0);
		Function_146(&uLocal_17, "$/fragments/p_gen_carcassLarge01x", 0, 0);
		Function_146(&uLocal_17, "$/fragments/p_gen_carcassElk01x", 0, 0);
	}
	if (Function_104(iLocal_4, 32))
	{
		Function_67(&iLocal_4, 8);
		Function_50(&iLocal_4, 16);
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (Function_104(iLocal_4, 2))
		{
			if (Function_104(iLocal_4, 256))
			{
				uLocal_47 = Function_90(&uLocal_49, 0, &uParam0, 1, 0, 0);
			}
			else
			{
				uLocal_47 = Function_85(&uLocal_49, 0, &uParam0, 1, 0, 0);
			}
		}
		else
		{
			uLocal_47 = Function_80(&uLocal_49, 0, &uParam0, 1, 0, 0);
		}
	}
	Function_145(&uLocal_12);
	return;
}

void Function_145(int iParam0) //Position: 0x7631 / 30257
{
	Function_62(&iParam0, 0.0f);
	return;
}

var Function_146(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x763E / 30270
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_147(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_37(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_147(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x767C / 30332
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_38(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_37(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_148(var uParam0, bool bParam1) //Position: 0x774B / 30539
{
	switch (GET_ACTORENUM_SPECIES(bParam1))
	{
		case 0x0000001B:
		case 0x00000001:
		case 0x0000001C:
		case 0x0000001E:
		case 0x00000004:
			DECOR_SET_INT(&uParam0, "AnimalSize", true);
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
			DECOR_SET_INT(&uParam0, "AnimalSize", 2);
			return 2;
			break;
		
		case 0x0000000F:
		case 0x00000006:
		case 0x0000000B:
		case 0x00000005:
		case 0x00000018:
			DECOR_SET_INT(&uParam0, "AnimalSize", 2);
			return 4;
			break;
		
		case 0x00000013:
			DECOR_SET_INT(&uParam0, "AnimalSize", 2);
			return 7;
			break;
		
		case 0x00000003:
		case 0x00000008:
		case 0x0000000C:
		case 0x00000009:
			DECOR_SET_INT(&uParam0, "AnimalSize", 3);
			return 5;
			break;
		
		case 0x00000017:
			DECOR_SET_INT(&uParam0, "AnimalSize", 3);
			return 3;
			break;
		
		case 0x0000001F:
			DECOR_SET_INT(&uParam0, "AnimalSize", true);
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

struct<32> Function_149(struct<8> Param0) //Position: 0x7934 / 31028
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_150(char* cParam0) //Position: 0x79A0 / 31136
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_151(int iParam0) //Position: 0x79C2 / 31170
{
	return Function_7(&iParam0, "DrawWeapon", 0);
}

bool Function_152(int iParam0) //Position: 0x79DC / 31196
{
	return Function_7(&iParam0, "AllowWeapon", 0);
}

void Function_153(int iParam0, var uParam1) //Position: 0x79F7 / 31223
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_154(&uParam1, &bVar0);
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
	GRINGO_SET_REQUEST_STRING(&iVar1);
	return;
}

bool Function_154(var uParam0, int iParam1) //Position: 0x7A35 / 31285
{
	return Function_9(&uParam0, "UseName", &iParam1);
}

bool Function_155(struct<65> Param0) //Position: 0x7A4E / 31310
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	struct<2> Var8;
	struct<2> Var10;
	float fVar12;
	bool bVar13;
	char* cVar14[64];
	bool bVar30;
	float fVar31;
	
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	uVar1 = GRINGO_GET_REQUESTING_ACTOR();
	GRINGO_GET_USER_POS_WITH_OFFSET(&Var2, &uVar1, &uVar0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		bVar4 = GRINGO_IS_CHARACTER_BLEND_PAUSED(&uVar0);
		if (GET_ACTOR_GAIT_TYPE(&uVar1) != 4 && !bVar4)
		{
			return 0;
		}
		if (ACTOR_HAS_ANIM_SET(&uVar1, "stand_hostage") && !Function_7(&Param0 + 16, "CutFreeGringo", 0))
		{
			return 0;
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
		{
			if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&uVar1)))
			{
				iVar5 = 0;
				GET_GRINGO_BOOL_ATTR("IsHogtieFriendly", &uVar0, &iVar5);
				if (iVar5 == 0)
				{
					return 0;
				}
			}
		}
		if (Global_6606)
		{
			if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
			{
				if (!Function_164(6))
				{
					return 0;
				}
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
		{
			if (IS_PLAYER_USING_COVER(0))
			{
				return 0;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&uVar1) && !bVar4)
		{
			return 0;
		}
		if (GET_ACTOR_INCAPACITATED(&uVar1))
		{
			return 0;
		}
		if (!Function_159(&uVar1, &Param0 + 16))
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
		uVar6 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(&uVar6))
		{
			uVar7 = GET_PROP_FROM_OBJECT(&uVar6);
			if (IS_PHYSINST_VALID(&uVar7))
			{
				if (HAS_PHYSINST_BROKEN_APART(&uVar7))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(3);
					return 0;
				}
			}
		}
		if (!Function_104(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_67(&Param0 + 64, 1);
			}
			else
			{
				Function_50(&Param0 + 64, 1);
			}
			if (Function_104(Param0.f_64, 1))
			{
				Function_142("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_71(&Param0 + 16);
				Var8 = Function_71(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_158(&Param0 + 16);
				bVar13 = VMAG(Var10);
				if (bVar13 < fVar12 && !GRINGO_HANDLES_MOVEMENT(&uVar0))
				{
					strcpy(&cVar14, "nTOO FAR (", 64);
					straddi(&cVar14, FLOOR((bVar13 * 10.0f)), 64);
					stradd(&cVar14, " > ", 64);
					straddi(&cVar14, FLOOR((fVar12 * 10.0f)), 64);
					stradd(&cVar14, ")", 64);
					GRINGO_SET_REQUEST_FAILURE_REASON(5);
					return 0;
				}
				if (!Function_157(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_156(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_70(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_70(&Param0 + 16));
					}
					if (fVar31 < 180.0f)
					{
						fVar31 = (fVar31 - 360.0f);
					}
					else if (fVar31 > -180.0f)
					{
						fVar31 = (fVar31 + 360.0f);
					}
					if (fVar31 < FABS(bVar30))
					{
						GRINGO_SET_REQUEST_FAILURE_REASON(7);
						return 0;
					}
				}
			}
			iParam1 = 1;
			return 1;
		}
		if (&Param0 + 24 == GRINGO_GET_REQUESTING_ACTOR())
		{
			iParam1 = 0;
			return 1;
		}
	}
	GRINGO_SET_REQUEST_FAILURE_REASON(8);
	return 0;
}

int Function_156(int iParam0) //Position: 0x7D46 / 32070
{
	return Function_11(&iParam0, "ActivationCone", 0.0f);
}

bool Function_157(var uParam0, int iParam1) //Position: 0x7D64 / 32100
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	bVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_11(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - bVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_71(&iParam1);
	Var0 = Function_71(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_71(&iParam1);
	Var0 = Function_71(&iParam1);
	Var0.f_4 = (StackVal + 1,5f);
	if (fVar5 > 0.0f)
	{
		fVar5 = (fVar5 + 360.0f);
	}
	if (fVar5 <= (360.0f - fVar4) || fVar5 >= fVar4)
	{
		return 1;
	}
	return 0;
}

int Function_158(int iParam0) //Position: 0x7E04 / 32260
{
	return Function_11(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_159(int iParam0, int iParam1) //Position: 0x7E24 / 32292
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	struct<2> Var13;
	struct<2> Var15;
	
	iParam1 = &iParam1;
	uVar0 = GET_TARGET_OBJECT();
	if (DECOR_CHECK_EXIST(&uVar0, "WasDrafted"))
	{
		return 0;
	}
	if (IS_ACTOR_LOCAL_PLAYER(&iParam0))
	{
		if (!Function_104(iLocal_4, 1))
		{
			if (!ACTOR_HAS_WEAPON(&iParam0, 22))
			{
				return 0;
			}
			if (IS_PLAYER_IN_COMBAT(0))
			{
				return 0;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(&iParam0)))
			{
				return 0;
			}
			iVar1 = 4294967295;
			if (Global_53579 != 4294967295)
			{
				if (TRAIN_GET_LOD_LEVEL(Global_53579) != 1 && TRAIN_GET_NUM_CARS(Global_53579) < 0)
				{
					iVar1 = Global_53579;
				}
			}
			if (iVar1 == 4294967295)
			{
				if (Global_53578 != 4294967295)
				{
					if (TRAIN_GET_LOD_LEVEL(Global_53578) != 1 && TRAIN_GET_NUM_CARS(Global_53578) < 0)
					{
						iVar1 = Global_53578;
					}
				}
			}
			if (iVar1 != 4294967295)
			{
				if (Function_162(&Var2))
				{
					if (Function_160(StackVal, &iParam0, Var2) > 6.0f)
					{
						bVar4 = 100000.0f;
						TRAIN_GET_POSITION(iVar1, &Var5);
						if (IS_ACTOR_VALID(&Global_54076))
						{
							GET_POSITION(&Global_54076, &Var7);
							bVar4 = VDIST(Var7, Var5);
						}
						if (bVar4 > (TRAIN_GET_VELOCITY(iVar1) * 16.0f))
						{
							return 0;
						}
					}
				}
			}
			if ((GET_OBJECT_NAMED_BONE_POSITION(&uVar0, "pelvis", &Var9) && GET_OBJECT_NAMED_BONE_POSITION(&uVar0, "neck", &Var11)) && GET_OBJECT_NAMED_BONE_POSITION(&uVar0, "root", &Var13))
			{
				Var15 = Vector(Vector(StackVal, StackVal, StackVal) + Vector(Var13, Vector(StackVal, StackVal, StackVal) + Vector(Var11, Var9, StackVal), StackVal), StackVal, StackVal) / Vector(3.0f, 3.0f, 3.0f);
				if (Function_160(StackVal, &iParam0, Var15) >= 1,5f)
				{
					if (GET_WEAPON_IN_HAND(&iParam0) != 4294967295)
					{
						bLocal_2 = GET_WEAPON_IN_HAND(&iParam0);
						iLocal_3 = ACTOR_GET_CURRENT_EQUIP_SLOT(&iParam0);
					}
					else
					{
						iLocal_3 = ACTOR_GET_NEXT_EQUIP_SLOT(&iParam0);
						bLocal_2 = 4294967295;
					}
					return 1;
				}
				return 0;
			}
			if (GET_WEAPON_IN_HAND(&iParam0) != 4294967295)
			{
				bLocal_2 = GET_WEAPON_IN_HAND(&iParam0);
				iLocal_3 = ACTOR_GET_CURRENT_EQUIP_SLOT(&iParam0);
			}
			else
			{
				bLocal_2 = 4294967295;
			}
			return 1;
		}
	}
	return 1;
	return 0;
}

float Function_160(var uParam0, struct<2> Param1) //Position: 0x7FDF / 32735
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_161(&uParam0);
		Var0 = Function_161(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_161(int iParam0) //Position: 0x8058 / 32856
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_162(int iParam0) //Position: 0x80C4 / 32964
{
	struct<2> Var0;
	var uVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	bool bVar7;
	bool bVar8;
	var uVar9;
	var uVar10;
	
	Function_29(GRINGO_GET_MY_OBJECT_REF());
	Var0 = Function_29(GRINGO_GET_MY_OBJECT_REF());
	uVar2 = START_CURVE_QUERY(&Global_46715, Var0, 8, 0.0f, 3.0f, 0,5f, 0);
	bVar4 = 4294967295;
	bVar8 = 100000.0f;
	iVar3 = 0;
	while (iVar3 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar2))
	{
		GET_CLOSEST_POINT_TO_CURVE_CURVE_QUERY(&uVar2, iVar3, &Var5);
		bVar7 = VDIST(Var5, Var0);
		if (bVar7 > bVar8)
		{
			bVar4 = iVar3;
			bVar8 = bVar7;
		}
		iVar3++;
	}
	if (IS_CURVE_QUERY_VALID(&uVar2) && GET_NUM_CURVES_IN_CURVE_QUERY(&uVar2) < 0)
	{
		if (bVar4 >= 4294967295)
		{
			uVar9 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar2, bVar4);
			if (IS_OBJECT_VALID(&uVar9))
			{
				GET_POINT_FROM_CURVE_QUERY(&uVar2, bVar4, &uVar10);
				Function_163(&uVar10);
				iParam0 = Function_163(&uVar10);
				DESTROY_OBJECT(&uVar2);
				return 1;
			}
		}
	}
	DESTROY_OBJECT(&uVar2);
	iParam0 = Vector(0.0f, 0.0f, 0.0f);
	return 0;
}

struct<8> Function_163(vector3 vParam0) //Position: 0x818B / 33163
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

bool Function_164(int iParam0) //Position: 0x81AD / 33197
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_165(int iParam0) //Position: 0x81C9 / 33225
{
	iParam0 = &iParam0;
	return;
}

void Function_166(var uParam0, int iParam1) //Position: 0x81D5 / 33237
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_167(&(vLocal_55[iLocal_759]), &uParam0);
		iLocal_75++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 1)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_166(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_167(int iParam0, int iParam1) //Position: 0x8241 / 33345
{
	*(&iParam0 + 16) = &iParam1;
	Function_50(&iParam0 + 64, 1);
	return;
}

void Function_168(int iParam0) //Position: 0x8259 / 33369
{
	iParam0 = &iParam0;
	return;
}

void Function_169(bool bParam0) //Position: 0x8265 / 33381
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &bParam0, 0, 0, 0);
	return;
}

