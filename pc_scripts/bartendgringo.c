//Decompiled with MagicRDR v1.0
//Function Count : 163
//Statics Count : 88
//Natives Count : 337
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	bool bLocal_16 = false;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	bool bLocal_29 = false;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	struct<9> Local_37[2];
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
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
	int iLocal_84 = 0;
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
	int iVar5;
	
	iLocal_8 = 0;
	iLocal_13 = 0;
	iLocal_14 = 0;
	iLocal_15 = 0;
	bLocal_16 = false;
	bLocal_17 = false;
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_20 = 0;
	iLocal_21 = 0;
	iLocal_22 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_162("STARTS");
	Function_161(&uScriptParam_0);
	iLocal_75 = 0;
	Function_159(&uScriptParam_0, &iLocal_75);
	while (IS_GRINGO_ACTIVE())
	{
		Function_158(&uScriptParam_0);
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
				if (&vLocal_37[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_75;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				iVar5 = 0;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_83 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_148(&(vLocal_37[iVar39]), &bVar4))
						{
							Function_146(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_37[iVar39] + 16);
							iVar5 = 1;
						}
						break;
					
					case 0x00000001:
						if (Function_148(&(vLocal_37[iVar39]), &bVar4))
						{
							Function_146(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_37[iVar39] + 16);
							if (bVar4)
							{
								Function_135(&(vLocal_37[iVar39]));
							}
							iVar5 = 1;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_37[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_134("eGRINGO_EndUse: Stop use by request", &vLocal_37[iVar39] + 24);
							Function_133(&vLocal_37[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_37[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_37[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_37[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_37[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_112(&(vLocal_37[iVar39]), 0);
							}
							else if (vLocal_37[iVar39].f_68 < 8)
							{
								Function_111(&(vLocal_37[iVar39]));
								vLocal_37[iVar39].f_68 = 8;
							}
							iVar5 = 1;
						}
						else
						{
							Function_162("Stop use request actor mismatch!!");
						}
						break;
				}
				GRINGO_SET_MESSAGE_RETURN(iVar5);
			}
			else
			{
				GRINGO_SET_MESSAGE_RETURN(0);
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (iLocal_75 - 1))
			{
				if (Function_110(vLocal_37[iVar09].f_64, 2))
				{
					if (!Function_16(&(vLocal_37[iVar09])))
					{
						Function_162("Quitting due to update end");
						Function_112(&(vLocal_37[iVar09]), 1);
					}
				}
				if (Function_15(&(vLocal_37[iVar09]), 0))
				{
					Function_5(&(vLocal_37[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_75 - 1))
		{
			if (Function_110(vLocal_37[iVar09].f_64, 2))
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_84))
	{
		Function_162("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&iLocal_84);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_75 - 1))
	{
		if (Function_110(vLocal_37[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_37[iVar09] + 24);
			Function_112(&(vLocal_37[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_37[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_37[iVar09] + 16);
		}
		Function_15(&(vLocal_37[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_162("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x457 / 1111
{
	iParam0 = &iParam0;
	return;
}

void Function_2(int iParam0, char* cParam1) //Position: 0x463 / 1123
{
	var uVar0;
	
	uVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(&cParam1))
	{
		uVar0 = GET_OBJECT_NAME(&cParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), &cParam1, GET_TARGET_OBJECT(), &uVar0, ": ", &iParam0, 0);
	return;
}

int Function_3() //Position: 0x4A5 / 1189
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x4AC / 1196
{
	iParam0 = &iParam0;
	return 0;
}

void Function_5(struct<69> Param0) //Position: 0x4B9 / 1209
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_110(Param0.f_64, 2))
	{
		Function_133(&Param0 + 24, 0);
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
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_84))
								{
									Function_162("ManagePlayerQuit: Create quit context");
									if (Function_7(&Param0 + 16, "UseQuitBOverride", 0))
									{
										iLocal_84 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										iLocal_84 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&iLocal_84))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_111(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_84))
									{
										Function_162("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&iLocal_84);
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
										Function_111(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_84))
										{
											Function_162("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&iLocal_84);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_84))
							{
								Function_162("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&iLocal_84);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_84))
		{
			Function_162("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&iLocal_84);
		}
	}
	return;
}

bool Function_6(int iParam0) //Position: 0x7ED / 2029
{
	float fVar0;
	struct<2> Var1;
	float fVar3;
	float fVar4;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	Var1 = Vector(GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1), GET_ANALOGUE_ACTION("@GENERIC.MOVE_Y", 1), 0.0f);
	fVar3 = VMAG(Var1);
	if (fVar3 >= 0,2f)
	{
		DECOR_SET_BOOL(&iParam0, "StickReset", 1);
	}
	else if (fVar3 < 0,75f && DECOR_CHECK_EXIST(&iParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(&iParam0, "DisconnectTime", &fVar4))
		{
			DECOR_SET_FLOAT(&iParam0, "DisconnectTime", fVar0);
		}
		else if ((fVar0 - fVar4) < 0,15f)
		{
			DECOR_REMOVE(&iParam0, "StickReset");
			DECOR_REMOVE(&iParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(&iParam0, "DisconnectTime");
	return 0;
}

bool Function_7(bool bParam0, var uParam1, int iParam2) //Position: 0x906 / 2310
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

bool Function_8(int iParam0, int iParam1) //Position: 0x924 / 2340
{
	return Function_9(&iParam0, "UseQuit", &iParam1);
}

bool Function_9(int iParam0, int iParam1, int iParam2) //Position: 0x93D / 2365
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GRINGO_STRING_ATTR(&iParam1, &iParam0, &iVar0);
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

float Function_10(int iParam0) //Position: 0x98D / 2445
{
	return Function_11(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_11(float fParam0, var uParam1, int iParam2) //Position: 0x9AB / 2475
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &fParam0);
	return iVar0;
}

float Function_12(vector3 vParam0) //Position: 0x9C3 / 2499
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

bool Function_13(int iParam0) //Position: 0xA90 / 2704
{
	return Function_110(iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xA9E / 2718
{
	return Function_110(iParam0, 1);
}

bool Function_15(int iParam0, int iParam1) //Position: 0xAAC / 2732
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

bool Function_16(struct<69> Param0) //Position: 0xAF9 / 2809
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
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
	var uVar25;
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
	float fVar40;
	float fVar41;
	int iVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	int iVar51;
	var uVar52;
	struct<2> Var53;
	float fVar55;
	
	bVar11 = Function_109(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_134("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_7(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_134("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_134("Incapacitation quit", &Param0 + 24);
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
				if (Function_108(&Param0 + 16, &fVar22))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var23);
					Var23.f_4 = (StackVal + (fVar22 + 0,1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						uVar25 = IS_AREA_OBSTRUCTED2(Var23, fVar22, GET_PHYSINST_FROM_ACTOR(&Param0 + 24), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						uVar25 = IS_AREA_OBSTRUCTED(Var23, fVar22, &Param0 + 24, 0);
					}
					if (IS_ACTOR_ON_TRAIN(&Param0 + 24, 0) || uVar25)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", 1);
						Param0.f_68 = 7;
						Function_2("Skip to eRewarding", &Param0 + 24);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_103(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_102(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_102(&Param0);
			}
			if (!Function_101(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_83 = true;
			Function_100(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_110(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_94(&Param0 + 16);
			}
			fVar18 = Function_93(&Param0 + 16);
			if (Function_12(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_110(Param0.f_64, 1))
			{
				Function_88(&Param0 + 16, &Var3, &uVar5);
				if (!Function_110(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_87(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, 1);
						Function_87(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_86());
				}
				if (!Function_110(Param0.f_64, 1024))
				{
					Function_87(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_103(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_110(Param0.f_64, 1024))
				{
					Function_87(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_110(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_87(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, 1);
					Function_87(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_110(Param0.f_64, 32))
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
			Function_85(&Param0 + 16);
			bLocal_83 = true;
			Function_84(&Param0);
			Function_82(&Param0, Function_83(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_110(Param0.f_64, 1);
			}
			iVar0 = Function_81(&Param0 + 24, &Param0 + 16, bVar29);
			if (!IS_GRINGO_COMPONENT_VALID(&iVar0))
			{
				Param0.f_68 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
				}
			}
			else if (bVar11)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 24, &iVar0, bVar29))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
					}
					Param0.f_68 = 5;
					iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
					while (iVar10 >= 4294967295)
					{
						iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar10, &Param0 + 16);
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &iVar1, Function_9(&iVar1, "AttachBone", &bVar9), Function_9(&iVar1, "AttachLocator", &bVar9), 1))
						{
							Function_80(&iVar1, &Param0 + 24);
							if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
							{
								uVar30 = GRINGO_GET_PROP_FROM_COMPONENT(&iVar1);
								if (IS_PHYSINST_VALID(&uVar30))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar30, 0);
								}
							}
						}
						iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, iVar10 + 1);
					}
					iVar12 = 0;
					uVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, iVar12);
					while (iVar12 <= GRINGO_GET_ATTRIBUTE_COUNT(&Param0 + 16))
					{
						uVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, iVar12);
						if (GRINGO_IS_ATTRIBUTE_VALID(&uVar14))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&uVar14) == 2)
							{
								if (iVar21 == GRINGO_GET_ATTRIBUTE_HASH(&uVar14))
								{
									uVar15 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar14, &uVar13);
									iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), 0);
									while (iVar10 >= 4294967295)
									{
										iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar10, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &iVar1, Function_9(&iVar1, "AttachBone", &bVar9), Function_9(&iVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&iVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_80(&iVar1, &Param0 + 24);
										}
										iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), iVar10 + 1);
									}
								}
							}
						}
						iVar12++;
					}
				}
			}
			if (Param0.f_68 == 5)
			{
				Function_2("KICKED TO DOING START", &Param0 + 24);
				uVar7 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(&uVar7))
				{
					Function_72(&Param0, &uVar7, &iLocal_81, &uLocal_79);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_87(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_71(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_110(Param0.f_64, 16))
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
				if (Function_70(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&iVar0))
				{
					if (Function_69(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_68(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_67(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_68(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_66(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_68(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_65(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_87(&Param0 + 64, 8);
					}
					else
					{
						Function_71(&Param0 + 64, 8);
					}
					if (Function_110(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, 1);
					}
				}
				else
				{
					Function_71(&Param0 + 64, 8);
				}
				if (Function_64(&Param0 + 16))
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
				Function_63(&Param0 + 24, &Param0 + 16);
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
				Function_62();
			}
			Param0.f_68 = 6;
			if (Function_110(Param0.f_64, 1))
			{
				if (Function_61(&Param0 + 16))
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
			iVar0 = Function_81(&Param0 + 24, &Param0 + 16, Function_110(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&iVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &iVar0))
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
							if (!GET_GRINGO_FLOAT_ATTR(&fVar40, "MaxDelay", &uVar37))
							{
								fVar40 = 30.0f;
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
								if (GET_CURRENT_GAME_TIME() - fVar38) <= RAND_FLOAT_RANGE(fVar41, fVar40)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									iVar47 = RAND_INT_RANGE(0, (iVar39 - 1));
									uVar48 = GRINGO_GET_ATTRIBUTE(&uVar37, iVar47);
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
				fVar55 = Function_25(&Param0 + 16);
				if (fVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, *(&Param0 + 32)) < fVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_24())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(Var53, *(&Param0 + 32)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(fVar55);
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
			Function_162("nRewarding");
			Function_22(&Param0 + 24, &Param0 + 16);
			Function_21(&Param0 + 24, &Param0 + 16);
			Function_20(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_87(&Param0 + 64, 64);
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
							Function_94(&Param0 + 16);
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
			if (Function_110(Param0.f_64, 1024))
			{
				Function_71(&Param0 + 64, 1024);
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
			iVar0 = Function_81(&Param0 + 24, &Param0 + 16, Function_110(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&iVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &iVar0))
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

void Function_17(var uParam0, int iParam1) //Position: 0x1E2E / 7726
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1E45 / 7749
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_19() //Position: 0x1E57 / 7767
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

void Function_20(var uParam0, int iParam1) //Position: 0x1E8A / 7818
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, iVar1);
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
		iVar1++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x1F08 / 7944
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, iVar1);
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
		iVar1++;
	}
	return;
}

void Function_22(int iParam0, int iParam1) //Position: 0x1F84 / 8068
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_23(int iParam0) //Position: 0x1F96 / 8086
{
	return Function_11(&iParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1FAD / 8109
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_25(int iParam0) //Position: 0x1FBA / 8122
{
	return Function_11(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_26(int iParam0, int iParam1) //Position: 0x1FDB / 8155
{
	int iVar0;
	bool bVar1;
	
	uLocal_31 = GRINGO_GET_MY_OBJECT_REF();
	if (!bLocal_16)
	{
		bLocal_16 = Function_54(&uLocal_2);
	}
	if (!IS_OBJECT_VALID(Function_53(GET_GRINGO_FROM_OBJECT(&uLocal_31), "BarmanPlayer")) && IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "idle"))
	{
		Global_6663 = 0;
		if (!Function_14(&iLocal_9))
		{
			Function_51(&iLocal_9);
		}
		else if (Function_50(&iLocal_9, RAND_FLOAT_RANGE(6.0f, 12.0f)))
		{
			Function_51(&iLocal_9);
			if (Function_49(&Global_54076, &uLocal_23) < 2.0f)
			{
				if (!Function_47(&uLocal_23, &Global_54076))
				{
					DECOR_SET_BOOL(&Global_54076, "Barman_OnLeft", 1);
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "Barman_OnLeft"))
				{
					DECOR_REMOVE(&Global_54076, "Barman_OnLeft");
				}
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "drink_player/Player/LookAround");
			}
		}
		return 1;
	}
	Global_6663 = 1;
	if (IS_ACTOR_LOCAL_PLAYER(&iParam0))
	{
		switch (iLocal_8)
		{
			case 0x00000000:
				if (!IS_ANY_SPEECH_PLAYING(&uLocal_23) && iLocal_22)
				{
					iLocal_8 = 1;
				}
				break;
			
			case 0x00000001:
				if (Global_46722[Global_43787] != Global_46722[0] || Global_46722[Global_43787] != Global_46722[2])
				{
					iVar0 = RAND_INT_RANGE(0, 4);
					if (iVar0 == 0)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_BOURBON", true, false, 0, 0, true, false);
					}
					else if (iVar0 == 1)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_GIN", true, false, 0, 0, true, false);
					}
					else if (iVar0 == 2)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_WHISKEY", true, false, 0, 0, true, false);
					}
					else if (iVar0 == 3)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_BRANDY", true, false, 0, 0, true, false);
					}
					else
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_RUM", true, false, 0, 0, true, false);
					}
				}
				else
				{
					iVar0 = RAND_INT_RANGE(0, 2);
					if (iVar0 == 0)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_PULQUE", true, false, 0, 0, true, false);
					}
					else if (iVar0 == 1)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_RUM", true, false, 0, 0, true, false);
					}
					else
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_TEQUILA", true, false, 0, 0, true, false);
					}
				}
				iLocal_13 = 1;
				FORCE_LOOK_AT_ACTOR(&Global_54076, &uLocal_23, 0,2f);
				FORCE_LOOK_AT_ACTOR(&uLocal_23, &Global_54076, 0,2f);
				iLocal_8 = 2;
				break;
			
			case 0x00000002:
				if (!iLocal_21)
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&uLocal_23, "serve_first_drink"))
					{
						Function_44(449, 1, 0, 0);
						if (!bLocal_17)
						{
							Function_29(2, 1);
						}
						iLocal_21 = 1;
					}
				}
				if (!DECOR_CHECK_EXIST(&uLocal_23, "ServeDrink_Bartender"))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "drink") && !IS_ANY_SPEECH_PLAYING(&Global_54076))
					{
						SAY_SINGLE_LINE_CONTEXT(&uLocal_23, 5, GET_ACTOR_FROM_OBJECT(&uLocal_27), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						DECOR_SET_BOOL(&uLocal_23, "ServeDrink_Bartender", 1);
						Function_44(449, 1, 0, 0);
						if (!bLocal_17)
						{
							Function_29(2, 1);
						}
					}
				}
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "idle"))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&uLocal_23, "idle"))
					{
						GET_GRINGO_INT_ATTR(&bVar1, "TimesDrank", &iParam1);
						bVar1++;
						if (bVar1 == 4)
						{
							SET_ACTION_NODE_FOR_ACTOR(&uLocal_23, "drink_player/Bartender/exit");
							SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "drink_player/Player/exit");
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							iLocal_20 = 1;
							iLocal_8 = 0;
							return 0;
						}
						iLocal_8 = 3;
						SET_GRINGO_INT_ATTR(bVar1, "TimesDrank", &iParam1);
						DECOR_SET_INT(&Global_54076, "BarUsed", bVar1);
					}
				}
				break;
			
			case 0x00000003:
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33) && !IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_35))
				{
					if (Function_27() > 2)
					{
						uLocal_33 = ADD_SCRIPT_USE_CONTEXT("Player_Drink_Bar", 10, "@UI.ACCEPT", 0, 0, 0, 0, 4294967295, 0);
					}
					uLocal_35 = ADD_SCRIPT_USE_CONTEXT("Player_Leave_Bar", 10, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
				}
				else
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_33))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_35);
							SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ORDERS_ANOTHER_DRINK", true, false, 0, 0, true, false);
							DECOR_REMOVE(&uLocal_23, "ServeDrink_Bartender");
							SET_ACTION_NODE_FOR_ACTOR(&uLocal_23, "drink_player/Bartender/serve");
							iLocal_13++;
							iLocal_14 = 0;
							iLocal_8 = 2;
							break;
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_35))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_35))
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
							{
								RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
							}
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_35);
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 366, &uLocal_23, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							DECOR_REMOVE(&uLocal_23, "ServeDrink_Bartender");
							SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "drink_player/Player/exit");
							SET_ACTION_NODE_FOR_ACTOR(&uLocal_23, "drink_player/Bartender/exit");
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							iLocal_15 = 0;
							GRINGO_SET_CHILD_USE_ACTIVATIONS(&iParam1, 0);
							iLocal_8 = 4;
							break;
						}
					}
				}
				iLocal_14++;
				if (iLocal_14 >= 45)
				{
					SAY_SINGLE_LINE_CONTEXT(&uLocal_23, 23, GET_ACTOR_FROM_OBJECT(&uLocal_27), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_14 = 0;
				}
				break;
			
			case 0x00000004:
				if (iLocal_15 >= 45)
				{
					SET_ACTION_NODE_FOR_ACTOR(&uLocal_23, "drink_player/Bartender/exit");
					iLocal_8 = 0;
					return 0;
				}
				iLocal_15++;
				break;
			}
	}
	return 1;
}

int Function_27() //Position: 0x2692 / 9874
{
	return Function_28(0);
}

int Function_28(int iParam0) //Position: 0x269C / 9884
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_29(int iParam0, bool bParam1) //Position: 0x26DD / 9949
{
	bool bVar0;
	
	bVar0 = Function_28(0);
	if ((Function_28(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_30(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_28(0));
	return 1;
}

int Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x276E / 10094
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_43(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_31(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x296B / 10603
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_42(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_41(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_41(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_39(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_36(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_33(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_32(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_32() //Position: 0x2FA9 / 12201
{
	int iVar0;
	
	return &iVar0;
}

var Function_33(int iParam0) //Position: 0x2FB2 / 12210
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2FC3 / 12227
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_35(char* cParam0) //Position: 0x30BA / 12474
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_36(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x30D5 / 12501
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_38(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_37(Function_38(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_37(int iParam0, int iParam1) //Position: 0x313C / 12604
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_38(int iParam0, int iParam1) //Position: 0x314E / 12622
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_39(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3160 / 12640
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
	if (((Function_40(iParam0) != 19 || Function_40(iParam0) != 17) || Function_40(iParam0) != 10) || Function_40(iParam0) != 9)
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

int Function_40(int iParam0) //Position: 0x3294 / 12948
{
	return Global_55480[iParam016].f_96;
}

float Function_41(int iParam0) //Position: 0x32A3 / 12963
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_42(int iParam0) //Position: 0x32DC / 13020
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_43(int iParam0) //Position: 0x3319 / 13081
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

int Function_44(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x34B3 / 13491
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_46(iParam0, TO_FLOAT(bParam1), 1);
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_31(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_45(iParam0);
	return 1;
}

void Function_45(int iParam0) //Position: 0x36DB / 14043
{
	switch (iParam0)
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

int Function_46(int iParam0, float fParam1, bool bParam2) //Position: 0x3779 / 14201
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

bool Function_47(var uParam0, int iParam1) //Position: 0x39BD / 14781
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam1, &Var0);
	return Function_48(StackVal, &uParam0, Var0);
}

int Function_48(var uParam0, struct<2> Param1) //Position: 0x39D6 / 14806
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&uParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

float Function_49(var uParam0, int iParam1) //Position: 0x3A11 / 14865
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_50(int iParam0, float fParam1) //Position: 0x3B06 / 15110
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

void Function_51(int iParam0) //Position: 0x3B24 / 15140
{
	Function_52(&iParam0, 0.0f);
	return;
}

void Function_52(vector3 vParam0) //Position: 0x3B31 / 15153
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_87(&vParam0, 1);
	Function_71(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_53(int iParam0, int iParam1) //Position: 0x3B56 / 15190
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&iParam0, &iParam1);
}

bool Function_54(struct<2>[] Param0) //Position: 0x3B65 / 15205
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_60();
	iVar1 = 0;
	if (!Function_59(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_58(&(Param0[iVar02]), 8);
		}
		else if (Function_57())
		{
			iVar1 = 1;
			Function_58(&(Param0[iVar02]), 8);
		}
		Function_58(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_59(&(Param0[iVar02]), 4))
		{
			if (!Function_59(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_59(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_59(&(Param0[02]), 8) || iVar1));
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
				Function_58(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_59(&(Param0[iVar02]), 4))
		{
			if (!Function_59(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_58(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_58(&(Param0[iVar02]), 2);
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
							Function_58(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_58(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_58(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_58(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_58(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_58(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_58(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_58(&(Param0[iVar02]), 2);
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
	Function_55();
	return 1;
}

void Function_55() //Position: 0x3F27 / 16167
{
	if (!Function_56(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_56(int iParam0) //Position: 0x3F67 / 16231
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_57() //Position: 0x3F83 / 16259
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

void Function_58(struct<13> Param0) //Position: 0x3FB1 / 16305
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

bool Function_59(struct<13> Param0) //Position: 0x3FC4 / 16324
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_60() //Position: 0x3FE2 / 16354
{
	if (!Function_56(128))
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

bool Function_61(bool bParam0) //Position: 0x402A / 16426
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_62() //Position: 0x404A / 16458
{
	return;
}

void Function_63(int iParam0, bool bParam1) //Position: 0x4050 / 16464
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_64(int iParam0) //Position: 0x4062 / 16482
{
	iParam0 = &iParam0;
	return 1;
}

bool Function_65(int iParam0) //Position: 0x406F / 16495
{
	return Function_7(&iParam0, "OneShotKill", 0);
}

bool Function_66(int iParam0, int iParam1) //Position: 0x408A / 16522
{
	return Function_9(&iParam0, "ParentAnimNode", &iParam1);
}

bool Function_67(int iParam0) //Position: 0x40AA / 16554
{
	return Function_7(&iParam0, "LinkToParentAnim", 0);
}

var Function_68(int iParam0) //Position: 0x40CA / 16586
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_37 - 1))
	{
		if (&vLocal_37[iVar09] + 16 == &iParam0)
		{
			return &vLocal_37[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_69(int iParam0) //Position: 0x4101 / 16641
{
	return Function_7(&iParam0, "LinkParentToAnim", 0);
}

bool Function_70(int iParam0) //Position: 0x4121 / 16673
{
	return Function_7(&iParam0, "SingularUse", 0);
}

void Function_71(var uParam0, int iParam1) //Position: 0x413C / 16700
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_72(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4152 / 16722
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
	uVar2 = Function_79(&iParam0 + 16, &bVar0);
	uVar3 = Function_78(&iParam0 + 16, &bVar1);
	uVar4 = Function_77(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_76(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_75(&iParam0 + 16, &bVar7);
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
			Function_74();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_73(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_32(), Function_73(&iParam0 + 16, &iVar10), 0, bVar9);
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
					Function_74();
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

bool Function_73(int iParam0, int iParam1) //Position: 0x4476 / 17526
{
	return Function_9(&iParam0, "TargetLocator", &iParam1);
}

void Function_74() //Position: 0x4495 / 17557
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_75(int iParam0, int iParam1) //Position: 0x44A4 / 17572
{
	return Function_9(&iParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_76(int iParam0, int iParam1) //Position: 0x44C8 / 17608
{
	return Function_9(&iParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_77(int iParam0) //Position: 0x44EE / 17646
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_78(var uParam0, int iParam1) //Position: 0x450C / 17676
{
	return Function_9(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_79(var uParam0, int iParam1) //Position: 0x452E / 17710
{
	return Function_9(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_80(int iParam0, int iParam1) //Position: 0x4550 / 17744
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GRINGO_GET_FIRST_CHILD(2, &iParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar0, &iParam1);
		uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar0);
		uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar0);
		uVar1 = GRINGO_GET_PHYSINST(&iParam0);
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
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&iVar6, &iParam1, GRINGO_GET_PROP_ATTACH_SLOT(&iParam0));
			}
		}
	}
	return;
}

var Function_81(var uParam0, int iParam1, bool bParam2) //Position: 0x4618 / 17944
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

void Function_82(int iParam0, float fParam1) //Position: 0x4694 / 18068
{
	if (!Function_14(&iParam0))
	{
		Function_52(&iParam0, fParam1);
	}
	return;
}

var Function_83(int iParam0) //Position: 0x46AC / 18092
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(&iParam0, "RandUseTime", 0.0f));
}

void Function_84(vector3 vParam0) //Position: 0x46CD / 18125
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_85(var uParam0) //Position: 0x46E4 / 18148
{
	uParam0 = &uParam0;
	return;
}

int Function_86() //Position: 0x46F0 / 18160
{
	return 1;
}

void Function_87(var uParam0, int iParam1) //Position: 0x46F7 / 18167
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_88(int iParam0, var uParam1, int iParam2) //Position: 0x4708 / 18184
{
	float fVar0;
	
	Function_91(&iParam0);
	uParam1 = Function_91(&iParam0);
	iParam2 = Function_90(&iParam0);
	fVar0 = Function_89(&iParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

int Function_89(int iParam0) //Position: 0x474D / 18253
{
	return Function_11(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_90(int iParam0) //Position: 0x4779 / 18297
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_91(int iParam0) //Position: 0x4785 / 18309
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_92(&iParam0))
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

bool Function_92(int iParam0) //Position: 0x4887 / 18567
{
	return Function_7(&iParam0, "UsePosActorRelative", 0);
}

int Function_93(int iParam0) //Position: 0x48AA / 18602
{
	return Function_11(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_94(bool bParam0) //Position: 0x48D2 / 18642
{
	struct<8> Var0;
	
	bParam0 = &bParam0;
	if (iLocal_18 && !iLocal_19)
	{
		iLocal_19 = 1;
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("BarDrinkLayout") };
		uLocal_25 = CREATE_LAYOUT(&Var0);
		bLocal_29 = Function_95(&uLocal_25, 0, &Global_54076, 1, 0, 0);
		HUD_ENABLE(0);
	}
	return;
}

var Function_95(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4920 / 18720
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_32(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nBar_Drink", 1, 1);
	}
	Function_96(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_96(var uParam0, var uParam1) //Position: 0x49A6 / 18854
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_97(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 1000.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 1000.0f, 1, 0);
	return;
}

void Function_97(int iParam0, var uParam1) //Position: 0x49E5 / 18917
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,05136f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(1,246414f, 1,324261f, -0,029126f), Vector(3,091966f, 68,11855f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,252122f, 1,382172f, -0,428668f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

struct<32> Function_98(char* cParam0) //Position: 0x4A82 / 19074
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_99("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_99(char* cParam0) //Position: 0x4AEE / 19182
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_100(int iParam0) //Position: 0x4B10 / 19216
{
	iParam0 = &iParam0;
	return;
}

bool Function_101(int iParam0) //Position: 0x4B1C / 19228
{
	return Function_7(&iParam0, "MaintainPosture", 0);
}

void Function_102(int iParam0) //Position: 0x4B3B / 19259
{
	if (!Function_14(&iParam0))
	{
		Function_52(&iParam0, 0.0f);
	}
	return;
}

bool Function_103(var uParam0, int iParam1) //Position: 0x4B52 / 19282
{
	struct<2> Var0;
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Function_91(&iParam1);
	Var0 = Function_91(&iParam1);
	fVar2 = Function_90(&iParam1);
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var0, fVar2, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(&iParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_107(&uParam0, &iParam1);
	}
	uVar3 = Function_106(&iParam1);
	uVar4 = Function_89(&iParam1);
	Function_104(&iParam1);
	iVar5 = Function_104(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar5, uVar3, 0,2f, 1, fVar2, uVar4, 0, 0);
}

struct<8> Function_104(int iParam0) //Position: 0x4BE3 / 19427
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_105(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_105(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_105(var uParam0, var uParam1, struct<2> Param2) //Position: 0x4C07 / 19463
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_106(int iParam0) //Position: 0x4C26 / 19494
{
	return Function_11(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_107(var uParam0, int iParam1) //Position: 0x4C4A / 19530
{
	var uVar0;
	var uVar1;
	var uVar2;
	float fVar4;
	var uVar5;
	var uVar6;
	var uVar8;
	var uVar10;
	var uVar12;
	struct<2> Var13;
	var uVar15;
	bool bVar17;
	
	uVar0 = Function_106(&iParam1);
	uVar1 = Function_89(&iParam1);
	if (!GET_GRINGO_BOOL_ATTR("RandomPointSet", &iParam1, &uVar5))
	{
		fVar4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		uVar12 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "Volume"));
		if (IS_ACTOR_IN_VOLUME(&uParam0, &uVar12) && DECOR_CHECK_EXIST(&uParam0, "VolOnly"))
		{
			return 1;
		}
		GENERATE_RANDOM_POINT_IN_VOLUME(&uVar12, &uVar6);
		FIND_VOL_SURFACE_POINTS_FOR_POINT(&uVar12, &uVar6, &uVar8, &uVar10);
		bVar17 = false;
		bVar17 = FIND_INTERSECTION(&uVar8, &uVar10, &Var13, &uVar15, 1, 4294967295, 4194304);
		if (bVar17)
		{
			uVar2 = Var13;
			SET_GRINGO_VECTOR_ATTR(&Var13, "RandomPoint", &iParam1);
			SET_GRINGO_FLOAT_ATTR(fVar4, "RandomDirection", &iParam1);
			SET_GRINGO_BOOL_ATTR(1, "RandomPointSet", &iParam1);
		}
		else
		{
			return 0;
		}
	}
	GET_GRINGO_VECTOR_ATTR(&uVar2, "RandomPoint", &iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(&uParam0, &uVar2, uVar0, 0,2f, 1, fVar4, uVar1, 1, 0);
}

bool Function_108(var uParam0, int iParam1) //Position: 0x4D72 / 19826
{
	iParam1 = Function_11(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_109(var uParam0) //Position: 0x4DA0 / 19872
{
	var uVar0;
	int iVar1;
	int iVar2;
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
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, 0);
	while (iVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uParam0)))
		{
			return 0;
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, iVar1 + 1);
	}
	iVar2 = 0;
	iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, iVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (iVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(&uParam0))
	{
		iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, iVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(&iVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&iVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(&iVar4))
				{
					uVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&iVar4, &uVar3);
					iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), 0);
					while (iVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0))))
						{
							return 0;
						}
						iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), iVar1 + 1);
					}
				}
			}
		}
		iVar2++;
	}
	return 1;
}

bool Function_110(var uParam0, int iParam1) //Position: 0x4EB9 / 20153
{
	return (uParam0 && iParam1) == 0;
}

void Function_111(struct<69> Param0) //Position: 0x4EC6 / 20166
{
	if (Function_110(Param0.f_64, 16))
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
				SET_MOVER_FROZEN(&Param0 + 24, 0);
			}
		}
	}
	return;
}

void Function_112(struct<69> Param0) //Position: 0x4F48 / 20296
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
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
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_110(Param0.f_64, 32)) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_118(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_110(Param0.f_64, 64));
		Function_17(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_7(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_110(Param0.f_64, 128) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_69(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_110(Param0.f_64, 16))
			{
				Function_111(&Param0);
				Function_71(&Param0 + 64, 16);
			}
			if (Function_110(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, 0);
			}
			if (Function_117(&Param0 + 16) && Function_110(Param0.f_64, 512))
			{
				Function_71(&Param0 + 64, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 1);
				Function_2("Allow Bump Reactions", &Param0 + 24);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
		}
	}
	iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
	while (iVar5 >= 4294967295)
	{
		uVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar5, &Param0 + 16);
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
		iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, iVar5 + 1);
	}
	if (Function_67(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_68(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_116(&Param0 + 16);
	bVar11 = Function_7(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_115(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_110(Param0.f_64, 256))
			{
				Function_71(&Param0 + 64, 256);
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
	if (Function_70(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_84))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iLocal_84);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_84(&Param0);
	Function_102(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_114(&Param0 + 16), &Param0 + 16);
	}
	Function_71(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_113();
		}
	}
	else
	{
		Function_113();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_113() //Position: 0x54F3 / 21747
{
	return;
}

int Function_114(int iParam0) //Position: 0x54F9 / 21753
{
	return Function_11(&iParam0, "ReuseDelay", 15.0f);
}

void Function_115(int iParam0, var uParam1) //Position: 0x5517 / 21783
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_79(&iParam0 + 16, &uVar0);
	Function_78(&iParam0 + 16, &uVar1);
	iVar2 = Function_77(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_116(int iParam0) //Position: 0x5558 / 21848
{
	iParam0 = &iParam0;
	return;
}

bool Function_117(int iParam0) //Position: 0x5564 / 21860
{
	return Function_7(&iParam0, "BlockBumpReactions", 0);
}

void Function_118(var uParam0, int iParam1) //Position: 0x5586 / 21894
{
	float fVar0;
	var uVar1;
	bool bVar2;
	
	iLocal_22 = 0;
	if (GRINGO_COMPONENT_CHECK_NAME("UseCasePlayer", &iParam1))
	{
		if (iLocal_20 & 1)
		{
			Function_131(&uParam0, "Drunk");
		}
		SATCHEL_SET_ENABLED(1);
		if (DECOR_CHECK_EXIST(&Global_54076, "BarUsed"))
		{
			DECOR_REMOVE(&Global_54076, "BarUsed");
		}
		if (iLocal_13 != 0)
		{
			fVar0 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
			SET_GRINGO_FLOAT_ATTR(fVar0, "TimeLastUpdated", &iParam1);
		}
		if (IS_ACTOR_VALID(&uLocal_23))
		{
			if (Global_43789 == Global_46760[0])
			{
				Function_123(&Global_11014, &Global_12796, 2, 0);
			}
			else if (Global_43789 == Global_46816[1])
			{
				Function_123(&Global_11646, &Global_13732, 1, 0);
			}
			else if (Global_43789 == Global_46850[0])
			{
				Function_123(&Global_11836, &Global_14012, 6, 0);
			}
			else if (Global_43789 == Global_46866[0])
			{
				Function_123(&Global_12048, &Global_14326, 0, 0);
			}
			else if (Global_43789 == Global_46894[2])
			{
				Function_123(&Global_12284, &Global_14676, 0, 0);
			}
			else if (Global_43789 == Global_46914[0])
			{
				bVar2 = true;
				uVar1 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "blkv_saloon_set");
				if (IS_VOLUME_VALID(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar1))
					{
						Function_123(&Global_12488, &Global_14976, 18, 0);
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					uVar1 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "blk_mstarBar");
					if (IS_VOLUME_VALID(&uVar1))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar1))
						{
							Function_123(&Global_12488, &Global_14976, 35, 0);
						}
					}
				}
			}
			uLocal_23 = "";
		}
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		HUD_ENABLE(1);
		iLocal_19 = 0;
		if (IS_OBJECT_VALID(&bLocal_29))
		{
			CAMERA_RESET(0);
			DESTROY_OBJECT(&bLocal_29);
		}
		if (IS_LAYOUTREF_VALID(&uLocal_25))
		{
			DESTROY_LAYOUT_OBJECTS(&uLocal_25);
			DESTROY_LAYOUT(&uLocal_25);
		}
		iLocal_8 = 0;
		iLocal_13 = 0;
		bLocal_17 = false;
	}
	else if (!(GRINGO_COMPONENT_CHECK_NAME("Barman", &iParam1) || GRINGO_COMPONENT_CHECK_NAME("BarmanPlayer", &iParam1)))
	{
		Function_122(&uParam0, "Drunk", 75);
	}
	else
	{
		SET_ACTOR_CAN_PLAY_GESTURES(&uParam0, true);
	}
	Function_119(&uLocal_2);
	bLocal_16 = false;
	return;
}

void Function_119(int iParam0) //Position: 0x57BF / 22463
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_120(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_120(struct<2>[] Param0, int iParam1) //Position: 0x57E7 / 22503
{
	if (Function_59(&(Param0[iParam12]), 4))
	{
		if (Function_59(&(Param0[iParam12]), 1))
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
			Function_121(&(Param0[iParam12]), 1);
			Function_121(&(Param0[iParam12]), 2);
			Function_121(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_121(struct<13> Param0) //Position: 0x5932 / 22834
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_122(var uParam0, char* cParam1, int iParam2) //Position: 0x594F / 22863
{
	int iVar0;
	
	if (iParam2 <= 100)
	{
		iVar0 = RAND_INT_RANGE(0, 100);
		if (iVar0 >= iParam2)
		{
			return 0;
		}
	}
	return Function_131(&uParam0, &cParam1);
}

void Function_123(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x5976 / 22902
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_130(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_130(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_130(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_129(&(Param0[iVar02]), 8);
	}
	Function_129(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_128(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_124(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_124(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x5A1E / 23070
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_127(&(Param0[iParam22]), 4);
				(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_126(Global_43790), Function_125(Global_43790), 0, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_130(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_130(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_127(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_126(Global_43790), Function_125(Global_43790), 0, 0);
	}
}

int Function_125(int iParam0) //Position: 0x5B84 / 23428
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_126(int iParam0) //Position: 0x5BAF / 23471
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_127(var uParam0, int iParam1) //Position: 0x5BE3 / 23523
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_128(int iParam0) //Position: 0x5BF4 / 23540
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_129(var uParam0, int iParam1) //Position: 0x5C9D / 23709
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_130(var uParam0, int iParam1) //Position: 0x5CB7 / 23735
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_131(var uParam0, char* cParam1) //Position: 0x5CD4 / 23764
{
	var uVar0;
	char* cVar1[64];
	var uVar17;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam0))
	{
		return 0;
	}
	if (Function_132(&uParam0))
	{
		return 0;
	}
	uVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "Small_Brain");
	if (IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	uVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	if (!(STRING_CONTAINS_STRING(&cParam1, "\\") || STRING_CONTAINS_STRING(&cParam1, "/")))
	{
		strcpy(&cVar1, "$/content/scripting/gringo/gringobrains/SmallBrains/", 64);
		stradd(&cVar1, &cParam1, 64);
	}
	uVar17 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(&uParam0), "Small_Brain", &cVar1, Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	if (IS_OBJECT_VALID(&uVar17))
	{
		REFERENCE_ACTOR(&uParam0);
		return 1;
	}
	return 0;
}

bool Function_132(int iParam0) //Position: 0x5DE6 / 24038
{
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "bACTOR_AVOID_SMALLBRAINS"))
	{
		return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam0), "bACTOR_AVOID_SMALLBRAINS");
	}
	return 0;
}

void Function_133(var uParam0, bool bParam1) //Position: 0x5E39 / 24121
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_162("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_162("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_84))
			{
				if (&bParam1)
				{
					Function_162("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&iLocal_84);
			}
		}
	}
	if (&bParam1)
	{
		Function_162("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_134(int iParam0, int iParam1) //Position: 0x5F49 / 24393
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_135(struct<69> Param0) //Position: 0x5F61 / 24417
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
	Function_84(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_87(&Param0 + 64, 2);
	Function_71(&Param0 + 64, 8);
	Function_71(&Param0 + 64, 16);
	Function_71(&Param0 + 64, 64);
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
	if (!Function_145(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_87(&Param0 + 64, 32);
			}
			else
			{
				Function_71(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_71(&Param0 + 64, 32);
		}
		if (Function_110(Param0.f_64, 32))
		{
			Function_87(&Param0 + 64, 128);
		}
		else
		{
			Function_71(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_71(&Param0 + 64, 32);
	}
	if (Function_144(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 1), 1))
			{
				Function_87(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_87(&Param0 + 64, 128);
		}
	}
	if (Function_117(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_87(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_136(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_136(int iParam0, var uParam1) //Position: 0x627D / 25213
{
	Function_142(&uLocal_2, "$/content/scripting/gringo/gringobrains/smallbrains/Drunk", 1, 0);
	if (IS_ACTOR_LOCAL_PLAYER(&iParam0))
	{
		iLocal_18 = 1;
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		GRINGO_SET_CHILD_USE_ACTIVATIONS(&uParam1, 1);
		Function_138();
		SET_ACTOR_CAN_PLAY_GESTURES(&uLocal_23, false);
		if (Function_137() > 4)
		{
			bLocal_17 = true;
		}
		SATCHEL_SET_ENABLED(0);
		FORCE_LOOK_AT_ACTOR(&Global_54076, &uLocal_23, 3212836864);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Barman", &uParam1) || GRINGO_COMPONENT_CHECK_NAME("BarmanPlayer", &uParam1))
	{
		if (GRINGO_COMPONENT_CHECK_NAME("Barman", &uParam1))
		{
			uLocal_27 = Function_53(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase1");
			SAY_SINGLE_LINE_CONTEXT(&iParam0, 4, GET_ACTOR_FROM_OBJECT(&uLocal_27), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			uLocal_27 = GET_OBJECT_FROM_ACTOR(&Global_54076);
			if (Function_137() > 4)
			{
				SAY_SINGLE_LINE_CONTEXT(&uLocal_23, 9, &iParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&uLocal_23, 7, &iParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			iLocal_22 = 1;
		}
	}
	return;
}

int Function_137() //Position: 0x63AE / 25518
{
	return Global_21369.f_248;
}

int Function_138() //Position: 0x63B9 / 25529
{
	var uVar0;
	
	if (Global_43789 == Global_46760[0])
	{
		uLocal_23 = Function_139(&Global_11014, &Global_12796, 2, 0, 0, 1);
	}
	else if (Global_43789 == Global_46816[1])
	{
		uLocal_23 = Function_139(&Global_11646, &Global_13732, 1, 0, 0, 1);
	}
	else if (Global_43789 == Global_46850[0])
	{
		uLocal_23 = Function_139(&Global_11836, &Global_14012, 6, 0, 0, 1);
	}
	else if (Global_43789 == Global_46866[0])
	{
		uLocal_23 = Function_139(&Global_12048, &Global_14326, 0, 0, 0, 1);
	}
	else if (Global_43789 == Global_46894[2])
	{
		uLocal_23 = Function_139(&Global_12284, &Global_14676, 0, 0, 0, 1);
	}
	else if (Global_43789 == Global_46914[0])
	{
		uVar0 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "blkv_saloon_set");
		if (IS_VOLUME_VALID(&uVar0))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar0))
			{
				uLocal_23 = Function_139(&Global_12488, &Global_14976, 18, 0, 0, 1);
			}
		}
		if (!IS_ACTOR_VALID(&uLocal_23))
		{
			uVar0 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "blk_mstarBar");
			if (IS_VOLUME_VALID(&uVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar0))
				{
					uLocal_23 = Function_139(&Global_12488, &Global_14976, 35, 0, 0, 1);
				}
			}
		}
	}
	if (IS_ACTOR_VALID(&uLocal_23))
	{
		if (IS_ACTOR_ALIVE(&uLocal_23))
		{
			RESET_ANIM_SET_FOR_ACTOR(&uLocal_23, 1);
			TASK_CLEAR(&uLocal_23);
			TASK_USE_GRINGO(&uLocal_23, GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "BarmanPlayer", 1, 1);
			FORCE_LOOK_AT_ACTOR(&uLocal_23, &Global_54076, 3212836864);
			return 1;
		}
	}
	return 0;
}

var Function_139(struct<2>[] Param0, vector3[] vParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x6541 / 25921
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_130(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_130(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || iParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_130(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_127(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_141(StackVal, &Global_10996, Function_32(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_130(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_127(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_127(&(Param0[iVar02]), 1);
	Function_140(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_140(int iParam0, bool bParam1) //Position: 0x6708 / 26376
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 0);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_141(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x67BA / 26554
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_32(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

var Function_142(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x68E1 / 26849
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_143(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_58(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_143(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x691F / 26911
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_59(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_58(&(Param0[iVar02]), 4);
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

bool Function_144(int iParam0) //Position: 0x69EE / 27118
{
	return Function_7(&iParam0, "DrawWeapon", 0);
}

bool Function_145(int iParam0) //Position: 0x6A08 / 27144
{
	return Function_7(&iParam0, "AllowWeapon", 0);
}

void Function_146(int iParam0, var uParam1) //Position: 0x6A23 / 27171
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_147(&uParam1, &bVar0);
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

bool Function_147(var uParam0, int iParam1) //Position: 0x6A61 / 27233
{
	return Function_9(&uParam0, "UseName", &iParam1);
}

bool Function_148(struct<65> Param0) //Position: 0x6A7A / 27258
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
	float fVar13;
	char* cVar14[64];
	float fVar30;
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
				if (!Function_157(6))
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
		if (!Function_152(&uVar1, &Param0 + 16))
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
		if (!Function_110(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_87(&Param0 + 64, 1);
			}
			else
			{
				Function_71(&Param0 + 64, 1);
			}
			if (Function_110(Param0.f_64, 1))
			{
				Function_134("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_91(&Param0 + 16);
				Var8 = Function_91(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_151(&Param0 + 16);
				fVar13 = VMAG(Var10);
				if (fVar13 < fVar12 && !GRINGO_HANDLES_MOVEMENT(&uVar0))
				{
					strcpy(&cVar14, "nTOO FAR (", 64);
					straddi(&cVar14, FLOOR((fVar13 * 10.0f)), 64);
					stradd(&cVar14, " > ", 64);
					straddi(&cVar14, FLOOR((fVar12 * 10.0f)), 64);
					stradd(&cVar14, ")", 64);
					GRINGO_SET_REQUEST_FAILURE_REASON(5);
					return 0;
				}
				if (!Function_150(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				fVar30 = Function_149(&Param0 + 16);
				if (!fVar30 != 0.0f)
				{
					if (fVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_90(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_90(&Param0 + 16));
					}
					if (fVar31 < 180.0f)
					{
						fVar31 = (fVar31 - 360.0f);
					}
					else if (fVar31 > -180.0f)
					{
						fVar31 = (fVar31 + 360.0f);
					}
					if (fVar31 < FABS(fVar30))
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

int Function_149(int iParam0) //Position: 0x6D72 / 28018
{
	return Function_11(&iParam0, "ActivationCone", 0.0f);
}

bool Function_150(var uParam0, int iParam1) //Position: 0x6D90 / 28048
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	fVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_11(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - fVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_91(&iParam1);
	Var0 = Function_91(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_91(&iParam1);
	Var0 = Function_91(&iParam1);
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

int Function_151(int iParam0) //Position: 0x6E30 / 28208
{
	return Function_11(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_152(var uParam0, int iParam1) //Position: 0x6E50 / 28240
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	iParam1 = &iParam1;
	if (GRINGO_COMPONENT_CHECK_NAME("UseCasePlayer", &iParam1) && !DECOR_CHECK_EXIST(&Global_54076, "BarUsed"))
	{
		iVar0 = 4294956185;
		GET_GRINGO_INT_ATTR(&iVar0, "TimesDrank", &iParam1);
		if (iVar0 >= 4294967295)
		{
			fVar1 = 0.0f;
			GET_GRINGO_FLOAT_ATTR(&fVar1, "TimeLastUpdated", &iParam1);
			if (fVar1 < 0.0f)
			{
				if ((TO_FLOAT(GET_TIME_OF_DAY_AS_INT()) - fVar1) < 300.0f)
				{
					iVar0 = (iVar0 - 1);
					SET_GRINGO_INT_ATTR(iVar0, "TimesDrank", &iParam1);
					fVar2 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
					SET_GRINGO_FLOAT_ATTR(fVar2, "TimeLastUpdated", &iParam1);
				}
			}
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		if (Global_6623)
		{
			return 0;
		}
		if (IS_ACTOR_DRUNK(&uParam0))
		{
			return 0;
		}
		if (!Function_155(&uVar3))
		{
			return 0;
		}
		if (Function_154(0))
		{
			return 0;
		}
		if (Function_27() <= 2)
		{
			return 0;
		}
		if (Global_6646)
		{
			return 0;
		}
	}
	if (Function_153(&(Global_43791[Global_43789]), 256))
	{
		return 0;
	}
	return 1;
}

bool Function_153(var uParam0, int iParam1) //Position: 0x6F74 / 28532
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_154(int iParam0) //Position: 0x6F91 / 28561
{
	return (*&Global_21369 + 168)[iParam0];
}

bool Function_155(int iParam0) //Position: 0x6FA0 / 28576
{
	var uVar0;
	
	if (Global_43789 == Global_46760[0])
	{
		iParam0 = GET_ACTOR_FROM_PERS_CHAR(Function_156(&Global_11014, &Global_12796, 2));
	}
	else if (Global_43789 == Global_46816[1])
	{
		iParam0 = GET_ACTOR_FROM_PERS_CHAR(Function_156(&Global_11646, &Global_13732, 1));
	}
	else if (Global_43789 == Global_46850[0])
	{
		iParam0 = GET_ACTOR_FROM_PERS_CHAR(Function_156(&Global_11836, &Global_14012, 6));
	}
	else if (Global_43789 == Global_46866[0])
	{
		iParam0 = GET_ACTOR_FROM_PERS_CHAR(Function_156(&Global_12048, &Global_14326, 0));
	}
	else if (Global_43789 == Global_46894[2])
	{
		iParam0 = GET_ACTOR_FROM_PERS_CHAR(Function_156(&Global_12284, &Global_14676, 0));
	}
	else if (Global_43789 == Global_46914[0])
	{
		uVar0 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "blkv_saloon_set");
		if (IS_VOLUME_VALID(&uVar0))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar0))
			{
				iParam0 = GET_ACTOR_FROM_PERS_CHAR(Function_156(&Global_12488, &Global_14976, 18));
			}
		}
		if (!IS_ACTOR_VALID(&iParam0))
		{
			uVar0 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "blk_mstarBar");
			if (IS_VOLUME_VALID(&uVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar0))
				{
					iParam0 = GET_ACTOR_FROM_PERS_CHAR(Function_156(&Global_12488, &Global_14976, 35));
				}
			}
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
		{
			return 0;
		}
		return IS_ACTOR_ALIVE(&iParam0);
	}
	return 0;
}

var Function_156(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x7105 / 28933
{
	int iVar0;
	
	iVar0 = iParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_130(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_157(int iParam0) //Position: 0x715F / 29023
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_158(int iParam0) //Position: 0x717B / 29051
{
	iParam0 = &iParam0;
	return;
}

void Function_159(var uParam0, int iParam1) //Position: 0x7187 / 29063
{
	int iVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_160(&(vLocal_37[iLocal_759]), &uParam0);
		iLocal_75++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, iVar0);
		while (iVar0 <= 0 && iParam1 > 2)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, &uParam0);
			Function_159(&uVar1, &iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_160(int iParam0, int iParam1) //Position: 0x71F3 / 29171
{
	(&iParam0 + 16) = &iParam1;
	Function_71(&iParam0 + 64, 1);
	return;
}

void Function_161(int iParam0) //Position: 0x720B / 29195
{
	iParam0 = &iParam0;
	return;
}

void Function_162(int iParam0) //Position: 0x7217 / 29207
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

