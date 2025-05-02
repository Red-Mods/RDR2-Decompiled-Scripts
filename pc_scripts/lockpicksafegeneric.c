//Decompiled with MagicRDR v1.0
//Function Count : 247
//Statics Count : 95
//Natives Count : 396
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	float fLocal_8 = 0.0f;
	float fLocal_9 = 0.0f;
	float fLocal_10 = 0.0f;
	float fLocal_11 = 0.0f;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	float fLocal_15[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	bool bLocal_25 = false;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	bool bLocal_31 = false;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0.0f;
	float fLocal_38 = 0.0f;
	float fLocal_39 = 0.0f;
	float fLocal_40 = 0.0f;
	bool bLocal_41 = false;
	int iLocal_42 = 0;
	float fLocal_43 = 0.0f;
	struct<9> Local_44[2];
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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	bool bLocal_90 = false;
	bool bLocal_91 = false;
	var uLocal_92 = 0;
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
	
	iLocal_12 = 0;
	iLocal_13 = 0;
	iLocal_14 = 0;
	fLocal_39 = 0.0f;
	fLocal_40 = 0,03f;
	bLocal_41 = false;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_246("STARTS");
	Function_245(&uScriptParam_0);
	iLocal_82 = 0;
	Function_243(&uScriptParam_0, &iLocal_82);
	while (IS_GRINGO_ACTIVE())
	{
		Function_242(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_83);
		}
		iVar2 = 0;
		bLocal_90 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_82 - 1))
			{
				if (&vLocal_44[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_82;
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
						if (Function_236(&(vLocal_44[iVar39]), &bVar4))
						{
							Function_234(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_44[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_236(&(vLocal_44[iVar39]), &bVar4))
						{
							Function_234(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_44[iVar39] + 16);
							if (bVar4)
							{
								Function_228(&(vLocal_44[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_44[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_227("eGRINGO_EndUse: Stop use by request", &vLocal_44[iVar39] + 24);
							Function_226(&vLocal_44[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_44[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_44[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_44[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_44[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_188(&(vLocal_44[iVar39]), 0);
							}
							else if (vLocal_44[iVar39].f_68 < 8)
							{
								Function_187(&(vLocal_44[iVar39]));
								vLocal_44[iVar39].f_68 = 8;
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
			while (iVar0 < (iLocal_82 - 1))
			{
				if (Function_186(vLocal_44[iVar09].f_64, 2))
				{
					if (!Function_16(&(vLocal_44[iVar09])))
					{
						Function_246("Quitting due to update end");
						Function_188(&(vLocal_44[iVar09]), 1);
					}
				}
				if (Function_15(&(vLocal_44[iVar09]), 0))
				{
					Function_5(&(vLocal_44[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_82 - 1))
		{
			if (Function_186(vLocal_44[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_90)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_91))
	{
		Function_246("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_91);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_82 - 1))
	{
		if (Function_186(vLocal_44[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_44[iVar09] + 24);
			Function_188(&(vLocal_44[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_44[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_44[iVar09] + 16);
		}
		Function_15(&(vLocal_44[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_246("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x44C / 1100
{
	iParam0 = &iParam0;
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x458 / 1112
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

int Function_3() //Position: 0x49A / 1178
{
	return 0;
}

int Function_4(var uParam0) //Position: 0x4A1 / 1185
{
	var uVar0;
	var uVar1;
	int iVar3;
	
	uParam0 = &uParam0;
	if (!iLocal_14)
	{
		uVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
		if (STRING_CONTAINS_STRING(&uVar0, "NoProp"))
		{
			GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &uVar1);
			iVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Safe", &uVar1, 2.0f, 0);
			if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&iVar3)))
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&iVar3));
				iLocal_14 = 1;
			}
		}
		else
		{
			iLocal_14 = 1;
		}
	}
	return 0;
}

void Function_5(struct<69> Param0) //Position: 0x53F / 1343
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_186(Param0.f_64, 2))
	{
		Function_226(&Param0 + 24, 0);
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
								bLocal_90 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_91))
								{
									Function_246("ManagePlayerQuit: Create quit context");
									if (Function_7(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_91 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_91 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_91))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_187(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_91))
									{
										Function_246("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_91);
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
										Function_187(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_91))
										{
											Function_246("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_91);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_91))
							{
								Function_246("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_91);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_91))
		{
			Function_246("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_91);
		}
	}
	return;
}

bool Function_6(int iParam0) //Position: 0x873 / 2163
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
		DECOR_SET_BOOL(&iParam0, "StickReset", 1);
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

bool Function_7(bool bParam0, var uParam1, int iParam2) //Position: 0x98C / 2444
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

bool Function_8(char* cParam0, int iParam1) //Position: 0x9AA / 2474
{
	return Function_9(&cParam0, "UseQuit", &iParam1);
}

bool Function_9(char* cParam0, char* cParam1, int iParam2) //Position: 0x9C3 / 2499
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

float Function_10(int iParam0) //Position: 0xA13 / 2579
{
	return Function_11(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_11(float fParam0, var uParam1, int iParam2) //Position: 0xA31 / 2609
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &fParam0);
	return iVar0;
}

float Function_12(vector3 vParam0) //Position: 0xA49 / 2633
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

bool Function_13(bool bParam0) //Position: 0xB16 / 2838
{
	return Function_186(bParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xB24 / 2852
{
	return Function_186(iParam0, 1);
}

bool Function_15(int iParam0, int iParam1) //Position: 0xB32 / 2866
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

bool Function_16(struct<69> Param0) //Position: 0xB7F / 2943
{
	bool bVar0;
	char[] cVar1[4];
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
	float fVar40;
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
	
	bVar11 = Function_185(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_227("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_7(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_227("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_227("Incapacitation quit", &Param0 + 24);
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
			bLocal_90 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_184(&Param0 + 16, &fVar22))
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
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", 1);
						Param0.f_68 = 7;
						Function_2("Skip to eRewarding", &Param0 + 24);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_179(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_178(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_178(&Param0);
			}
			if (!Function_177(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_90 = true;
			Function_176(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_186(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_175(&Param0 + 16);
			}
			fVar18 = Function_174(&Param0 + 16);
			if (Function_12(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_186(Param0.f_64, 1))
			{
				Function_169(&Param0 + 16, &Var3, &uVar5);
				if (!Function_186(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_168(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, 1);
						Function_168(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_167());
				}
				if (!Function_186(Param0.f_64, 1024))
				{
					Function_168(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_179(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_186(Param0.f_64, 1024))
				{
					Function_168(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_186(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_168(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, 1);
					Function_168(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_186(Param0.f_64, 32))
			{
				bLocal_90 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_166(&Param0 + 16);
			bLocal_90 = true;
			Function_165(&Param0);
			Function_163(&Param0, Function_164(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_186(Param0.f_64, 1);
			}
			bVar0 = Function_162(&Param0 + 24, &Param0 + 16, bVar29);
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
						cVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, &Param0 + 16);
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &cVar1, Function_9(&cVar1, "AttachBone", &bVar9), Function_9(&cVar1, "AttachLocator", &bVar9), 1))
						{
							Function_161(&cVar1, &Param0 + 24);
							if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
							{
								uVar30 = GRINGO_GET_PROP_FROM_COMPONENT(&cVar1);
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
										cVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &cVar1, Function_9(&cVar1, "AttachBone", &bVar9), Function_9(&cVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&cVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_161(&cVar1, &Param0 + 24);
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
					Function_153(&Param0, &uVar7, &iLocal_88, &uLocal_86);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_168(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_152(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_186(Param0.f_64, 16))
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
				if (Function_151(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_150(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_149(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_148(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_149(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_147(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_149(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_146(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_168(&Param0 + 64, 8);
					}
					else
					{
						Function_152(&Param0 + 64, 8);
					}
					if (Function_186(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, 1);
					}
				}
				else
				{
					Function_152(&Param0 + 64, 8);
				}
				if (Function_145(&Param0 + 16))
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
				Function_102(&Param0 + 24, &Param0 + 16);
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
				Function_101();
			}
			Param0.f_68 = 6;
			if (Function_186(Param0.f_64, 1))
			{
				if (Function_100(&Param0 + 16))
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
			bVar0 = Function_162(&Param0 + 24, &Param0 + 16, Function_186(Param0.f_64, 1));
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
					if (VDIST(Var53, *(&Param0 + 32)) < bVar55)
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
			Function_246("nRewarding");
			Function_22(&Param0 + 24, &Param0 + 16);
			Function_21(&Param0 + 24, &Param0 + 16);
			Function_20(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_168(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_90 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_7(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_175(&Param0 + 16);
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
			if (Function_186(Param0.f_64, 1024))
			{
				Function_152(&Param0 + 64, 1024);
				if (!Function_7(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_90 = true;
			bVar0 = Function_162(&Param0 + 24, &Param0 + 16, Function_186(Param0.f_64, 1));
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

void Function_17(var uParam0, int iParam1) //Position: 0x1EB4 / 7860
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1ECB / 7883
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_19() //Position: 0x1EDD / 7901
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

void Function_20(var uParam0, int iParam1) //Position: 0x1F10 / 7952
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

void Function_21(var uParam0, int iParam1) //Position: 0x1F8E / 8078
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

void Function_22(int iParam0, int iParam1) //Position: 0x200A / 8202
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_23(int iParam0) //Position: 0x201C / 8220
{
	return Function_11(&iParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x2033 / 8243
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_25(int iParam0) //Position: 0x2040 / 8256
{
	return Function_11(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_26(var uParam0, int iParam1) //Position: 0x2061 / 8289
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	fLocal_37 = (GET_CURRENT_GAME_TIME() - fLocal_38);
	if (fLocal_37 < 0,033333f)
	{
		fLocal_37 = 0,0333333f;
	}
	fLocal_38 = GET_CURRENT_GAME_TIME();
	bLocal_41 = false;
	fLocal_39 = (fLocal_39 + fLocal_37);
	if (fLocal_39 < fLocal_40)
	{
		bLocal_41 = true;
		fLocal_39 = (fLocal_39 - fLocal_40);
		if (fLocal_39 > 0.0f)
		{
			fLocal_39 = 0.0f;
		}
	}
	if ((IS_ACTOR_LOCAL_PLAYER(&uParam0) && HAS_STRING_TABLE_LOADED("nminigames")) && UNK_0x9D20BDC4("numberSystem"))
	{
		if (IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/picking/stoped") && iLocal_12 > 4)
		{
			if (!IS_OBJECT_VALID(&uLocal_29))
			{
				fLocal_43 = 0.0f;
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
					uLocal_29 = Function_96(GET_AMBIENT_LAYOUT(), 0, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1, 0, 0);
				}
				else
				{
					uLocal_29 = Function_92(GET_AMBIENT_LAYOUT(), 0, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1, 0, 1);
					if (!IS_OBJECT_VALID(&uLocal_29))
					{
						uLocal_29 = Function_88(GET_AMBIENT_LAYOUT(), 0, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1, 0, 0);
					}
				}
				if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "iLockerFail"))
				{
					DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "iLockerFail");
				}
				Function_178(&bLocal_31);
			}
		}
		if (IS_OBJECT_VALID(&uLocal_29))
		{
			fVar0 = GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1);
			fLocal_43 = (fLocal_43 + (IntToFloat(ROUND((fVar0 * 2.0f))) * Function_87()));
			if (fLocal_43 > 0.0f)
			{
				fLocal_43 = (fLocal_43 + 360.0f);
			}
			else if (fLocal_43 <= 360.0f)
			{
				fLocal_43 = (fLocal_43 - 360.0f);
			}
			fVar1 = FLASH_GET_FLOAT("numberSystem", "rotCrackSafe");
			if (iLocal_12 <= 4)
			{
				if (fLocal_43 < -1000.0f)
				{
					if (fLocal_43 < fVar1)
					{
						fVar3 = (fLocal_43 - fVar1);
						if (fVar3 < 10.0f)
						{
							if (fVar1 > 10.0f)
							{
								fVar4 = (360.0f - fLocal_43);
							}
							else
							{
								fVar4 = 10.0f;
							}
						}
						else
						{
							fVar4 = fVar3;
						}
						if (bLocal_41)
						{
							PLAY_SOUND_FRONTEND("HUD_SAFE_TUMBLER_TURN_MASTER");
						}
						if (fVar3 < 180.0f)
						{
							fVar2 = (fVar1 - fVar4);
							if (iLocal_7 == 0)
							{
								iLocal_6++;
							}
							else
							{
								iLocal_6 = 0;
							}
							iLocal_7 = 0;
							if (!IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/picking/left"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uParam0, "knl_picksafe/picking/left");
							}
						}
						else
						{
							fVar2 = (fVar1 + fVar4);
							if (iLocal_7 == 1)
							{
								iLocal_6++;
							}
							else
							{
								iLocal_6 = 0;
							}
							iLocal_7 = 1;
							if (!IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/picking/right"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uParam0, "knl_picksafe/picking/right");
							}
						}
					}
					else if (fLocal_43 > fVar1)
					{
						fVar3 = (fVar1 - fLocal_43);
						if (fVar3 < 10.0f)
						{
							if (fVar1 < 350.0f)
							{
								fVar4 = ((fLocal_43 + 360.0f) - fVar1);
							}
							else
							{
								fVar4 = 10.0f;
							}
						}
						else
						{
							fVar4 = fVar3;
						}
						if (bLocal_41)
						{
							PLAY_SOUND_FRONTEND("HUD_SAFE_TUMBLER_TURN_MASTER");
						}
						if (fVar3 < 180.0f)
						{
							fVar2 = (fVar1 + fVar4);
							if (iLocal_7 == 1)
							{
								iLocal_6++;
							}
							else
							{
								iLocal_6 = 0;
							}
							iLocal_7 = 1;
							if (!IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/picking/right"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uParam0, "knl_picksafe/picking/right");
							}
						}
						else
						{
							fVar2 = (fVar1 - fVar4);
							if (iLocal_7 == 0)
							{
								iLocal_6++;
							}
							else
							{
								iLocal_6 = 0;
							}
							iLocal_7 = 0;
							if (!IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/picking/left"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uParam0, "knl_picksafe/picking/left");
							}
						}
					}
					else
					{
						fVar2 = fVar1;
						if (!IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/picking/stoped"))
						{
							if (!IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/pre"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uParam0, "knl_picksafe/picking/stoped");
							}
						}
					}
					if (fVar2 > 0.0f)
					{
						fVar2 = (fVar2 + 360.0f);
					}
					else if (fVar2 <= 360.0f)
					{
						fVar2 = (fVar2 - 360.0f);
					}
					FLASH_SET_FLOAT("numberSystem", "rotCrackSafe", fVar2);
				}
				else if (!IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/picking/stoped"))
				{
					if (!IS_ACTION_NODE_PLAYING(&uParam0, "knl_picksafe/pre"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&uParam0, "knl_picksafe/picking/stoped");
					}
				}
			}
			if (IS_OBJECT_VALID(&uLocal_29) && iLocal_12 > 4)
			{
				Function_83(1, "{@GENERIC.MOVE_LEFT}{@GENERIC.MOVE_RIGHT}", "SafeCracking_MoveDial", 1, 0, 0, 0, 0);
			}
			switch (iLocal_12)
			{
				case 0x00000000:
					if (IS_OBJECT_VALID(&uLocal_29))
					{
						if (Function_77(&uLocal_2, 0))
						{
							Function_76("SafeCracking_ResetToZero", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					FLASH_SET_INT("numberSystem", "lock1active", false);
					FLASH_SET_INT("numberSystem", "lock2active", false);
					FLASH_SET_INT("numberSystem", "lock3active", false);
					FLASH_SET_INT("numberSystem", "unlock1", false);
					FLASH_SET_INT("numberSystem", "unlock2", false);
					FLASH_SET_INT("numberSystem", "unlock3", false);
					FLASH_SET_INT("numberSystem", "lockval", false);
					fLocal_9 = 345.0f;
					fLocal_8 = 15.0f;
					fLocal_11 = 345.0f;
					fLocal_10 = 15.0f;
					if ((fVar1 >= fLocal_8 && fVar1 <= 0.0f) || ((fVar1 >= 360.0f && fVar1 < fLocal_9) && fLocal_43 < -1000.0f))
					{
						PLAYER_RUMBLE("RUMBLE_LOCKPICK", 4294967295, 0);
						if ((fVar1 >= fLocal_10 && fVar1 <= 0.0f) || ((fVar1 >= 360.0f && fVar1 < fLocal_11) && fLocal_43 < -1000.0f))
						{
							if (Function_13(&bLocal_25))
							{
								Function_74(&bLocal_25);
							}
							PLAYER_RUMBLE("RUMBLE_LOCKPICK2", 4294967295, 0);
							if (Function_12(&bLocal_25) < 0,75f)
							{
								iLocal_12++;
								iLocal_7 = 0;
								iLocal_6 = 0;
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_71("SafeCracking_1stNumberUnlocked", -1.0f, 0, 2, 0, 0, 0, 0);
							}
						}
						else
						{
							Function_70(&bLocal_25);
						}
					}
					else
					{
						Function_70(&bLocal_25);
					}
					break;
				
				case 0x00000001:
					if (IS_OBJECT_VALID(&uLocal_29))
					{
						if (Function_77(&uLocal_2, 1))
						{
							Function_76("SafeCracking_1stNumberClockWise", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_71("SafeCracking_1stNumberUnlocked", -1.0f, 0, 2, 0, 0, 0, 0);
					}
					FLASH_SET_INT("numberSystem", "lock1active", true);
					fLocal_9 = (fLocal_15[iLocal_12] - 15.0f);
					fLocal_8 = (fLocal_15[iLocal_12] + 15.0f);
					fLocal_11 = (fLocal_15[iLocal_12] - 15.0f);
					fLocal_10 = (fLocal_15[iLocal_12] + 15.0f);
					if (((fVar1 >= fLocal_8 && fVar1 <= fLocal_9) && iLocal_7 != 1) && fLocal_43 < -1000.0f)
					{
						PLAYER_RUMBLE("RUMBLE_LOCKPICK", 4294967295, 0);
						FLASH_SET_INT("numberSystem", "lockval", true);
						if ((fVar1 >= fLocal_10 && fVar1 <= fLocal_11) && fLocal_43 < -1000.0f)
						{
							if (Function_13(&bLocal_25))
							{
								Function_74(&bLocal_25);
							}
							PLAYER_RUMBLE("RUMBLE_LOCKPICK2", 4294967295, 0);
							FLASH_SET_INT("numberSystem", "lockval", 2);
							if (Function_12(&bLocal_25) < 0,75f)
							{
								FLASH_SET_INT("numberSystem", "unlock1", true);
								FLASH_SET_INT("numberSystem", "lockval", false);
								FLASH_SET_INT("numberSystem", "lock1active", false);
								iLocal_12++;
								iLocal_7 = 0;
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_71("SafeCracking_2ndNumberUnlocked", -1.0f, 0, 2, 0, 0, 0, 0);
								PLAY_SOUND("HUD_SAFE_COMBINATION_LOCK_RELEASE_MASTER");
								iLocal_6 = 0;
							}
						}
						else
						{
							Function_70(&bLocal_25);
						}
					}
					else
					{
						Function_70(&bLocal_25);
						FLASH_SET_INT("numberSystem", "lockval", false);
					}
					if (iLocal_7 != 0 && iLocal_6 < 12)
					{
						Function_69();
						iLocal_12 = 0;
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_71("SafeCracking_Retry", -1.0f, 0, 2, 0, 0, 0, 0);
						Function_70(&bLocal_25);
						DECOR_SET_INT(&uParam0, "iLockerFail", true);
					}
					break;
				
				case 0x00000002:
					if (IS_OBJECT_VALID(&uLocal_29))
					{
						if (Function_77(&uLocal_2, 2))
						{
							Function_76("SafeCracking_2ndNumberCounterClockWise", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					FLASH_SET_INT("numberSystem", "lock2active", true);
					fLocal_9 = (fLocal_15[iLocal_12] - 15.0f);
					fLocal_8 = (fLocal_15[iLocal_12] + 15.0f);
					fLocal_11 = (fLocal_15[iLocal_12] - 15.0f);
					fLocal_10 = (fLocal_15[iLocal_12] + 15.0f);
					if (((fVar1 >= fLocal_8 && fVar1 <= fLocal_9) && iLocal_7 != 0) && fLocal_43 < -1000.0f)
					{
						PLAYER_RUMBLE("RUMBLE_LOCKPICK", 4294967295, 0);
						FLASH_SET_INT("numberSystem", "lockval", true);
						if ((fVar1 >= fLocal_10 && fVar1 <= fLocal_11) && fLocal_43 < -1000.0f)
						{
							if (Function_13(&bLocal_25))
							{
								Function_74(&bLocal_25);
							}
							PLAYER_RUMBLE("RUMBLE_LOCKPICK2", 4294967295, 0);
							FLASH_SET_INT("numberSystem", "lockval", 2);
							if (Function_12(&bLocal_25) < 0,75f)
							{
								FLASH_SET_INT("numberSystem", "unlock2", true);
								FLASH_SET_INT("numberSystem", "lockval", false);
								FLASH_SET_INT("numberSystem", "lock2active", false);
								iLocal_12++;
								iLocal_7 = 1;
								iLocal_6 = 0;
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_71("SafeCracking_3rdNumberUnlocked", -1.0f, 0, 2, 0, 0, 0, 0);
								PLAY_SOUND("HUD_SAFE_COMBINATION_LOCK_RELEASE_MASTER");
							}
						}
						else
						{
							Function_70(&bLocal_25);
						}
					}
					else
					{
						Function_70(&bLocal_25);
						FLASH_SET_INT("numberSystem", "lockval", false);
					}
					if (iLocal_7 != 1 && iLocal_6 < 12)
					{
						Function_69();
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_71("SafeCracking_Retry", -1.0f, 0, 2, 0, 0, 0, 0);
						iLocal_12 = 0;
						Function_70(&bLocal_25);
						DECOR_SET_INT(&uParam0, "iLockerFail", true);
					}
					break;
				
				case 0x00000003:
					if (IS_OBJECT_VALID(&uLocal_29))
					{
						if (Function_77(&uLocal_2, 3))
						{
							Function_76("SafeCracking_3rdNumberClockWise", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					FLASH_SET_INT("numberSystem", "lock3active", true);
					fLocal_9 = (fLocal_15[iLocal_12] - 15.0f);
					fLocal_8 = (fLocal_15[iLocal_12] + 15.0f);
					fLocal_11 = (fLocal_15[iLocal_12] - 15.0f);
					fLocal_10 = (fLocal_15[iLocal_12] + 15.0f);
					if (fLocal_9 > 0.0f)
					{
						fLocal_9 = (360.0f + fLocal_9);
					}
					if (fLocal_8 < 360.0f)
					{
						fLocal_8 = (fLocal_8 - 360.0f);
					}
					if (fLocal_11 > 0.0f)
					{
						fLocal_11 = (360.0f + fLocal_11);
					}
					if (fLocal_10 < 360.0f)
					{
						fLocal_10 = (fLocal_10 - 360.0f);
					}
					if (((fVar1 >= fLocal_8 && fVar1 <= fLocal_9) && iLocal_7 != 1) && fLocal_43 < -1000.0f)
					{
						PLAYER_RUMBLE("RUMBLE_LOCKPICK", 4294967295, 0);
						FLASH_SET_INT("numberSystem", "lockval", true);
						if ((fVar1 >= fLocal_10 && fVar1 <= fLocal_11) && fLocal_43 < -1000.0f)
						{
							if (Function_13(&bLocal_25))
							{
								Function_74(&bLocal_25);
							}
							PLAYER_RUMBLE("RUMBLE_LOCKPICK2", 4294967295, 0);
							FLASH_SET_INT("numberSystem", "lockval", 2);
							if (Function_12(&bLocal_25) < 0,75f)
							{
								FLASH_SET_INT("numberSystem", "unlock3", true);
								FLASH_SET_INT("numberSystem", "lockval", false);
								FLASH_SET_INT("numberSystem", "lock3active", false);
								iLocal_12++;
								Function_69();
								Function_74(&bLocal_25);
								PLAY_SOUND("HUD_SAFE_COMBINATION_LOCK_RELEASE_MASTER");
							}
						}
						else
						{
							Function_70(&bLocal_25);
						}
					}
					else
					{
						Function_70(&bLocal_25);
						FLASH_SET_INT("numberSystem", "lockval", false);
					}
					if (iLocal_7 != 0 && iLocal_6 < 12)
					{
						Function_69();
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_71("SafeCracking_Retry", -1.0f, 0, 2, 0, 0, 0, 0);
						iLocal_12 = 0;
						Function_70(&bLocal_25);
						DECOR_SET_INT(&uParam0, "iLockerFail", true);
					}
					break;
				
				case 0x00000004:
					if (Function_12(&bLocal_25) < 0,5f)
					{
						Function_68(0);
						Function_68(1);
						Function_68(2);
						FLASH_SET_INT("numberSystem", "iHowManyPressed", false);
						FLASH_SET_BOOL("numberSystem", "showCrackSafe", 0);
						if (!Global_6623 && !DECOR_CHECK_EXIST(&Global_54076, "FortMercerSafe"))
						{
							Function_29(4294967196, 1, 0);
						}
						iLocal_13 = 1;
						DECOR_SET_INT(&uParam0, "iLockerOpen", true);
						SET_ACTION_NODE_FOR_ACTOR(&uParam0, "knl_picksafe/Completed");
						PLAY_SOUND_FRONTEND("HUD_PICKUP_MONEY_MASTER");
						Function_70(&bLocal_31);
						if (CAMERA_GET_CURRENT_TRANSITION_TYPE(GET_CAMERA_FROM_CUTSCENEOBJECT(&uLocal_29)) == 1)
						{
							END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&uLocal_29));
						}
						Function_27();
						Function_83(0, "{@UI.ACCEPT}", "SafeCracking_Skip", 1, 0, 0, 0, 0);
						iLocal_12++;
					}
					break;
				
				case 0x00000005:
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&uParam0, "knl_picksafe"))
					{
						return 0;
					}
					if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
					{
						Function_68(0);
						HUD_FADE_OUT(1.0f, 1f, 1);
						iLocal_12 = 6;
					}
					break;
				
				case 0x00000006:
					if (HUD_IS_FADED())
					{
						DESTROY_OBJECT(&uLocal_29);
						RESET_ANIM_SET_FOR_ACTOR(&uParam0, 0);
						if (!IS_GAME_RESETTING())
						{
							HUD_FADE_IN(1.0f, 1065353216);
						}
						return 0;
					}
					break;
				}
		}
		if (IS_OBJECT_VALID(&uLocal_29) && iLocal_12 > 4)
		{
			if (UNK_0xDA674AE0("@UI.CANCELMINIGAME", 1, 0))
			{
				if (CAMERA_GET_CURRENT_TRANSITION_TYPE(GET_CAMERA_FROM_CUTSCENEOBJECT(&uLocal_29)) == 1)
				{
					END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&uLocal_29));
				}
				Function_27();
				iLocal_13 = 0;
				return 0;
			}
			Function_83(2, "{@UI.CANCELMINIGAME}", "MG_LOCKPICK_Quit", 1, 0, 0, 0, 0);
		}
		else
		{
			Function_68(2);
			Function_68(1);
		}
	}
	return 1;
}

void Function_27() //Position: 0x3431 / 13361
{
	Function_69();
	Function_28();
	FLASH_SET_INT("numberSystem", "iHowManyPressed", false);
	FLASH_SET_BOOL("numberSystem", "showCrackSafe", 0);
	Function_68(0);
	Function_68(1);
	Function_68(2);
	return;
}

void Function_28() //Position: 0x3496 / 13462
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_29(int iParam0, bool bParam1, bool bParam2) //Position: 0x34A8 / 13480
{
	int iVar0;
	bool bVar1;
	
	if (Function_67(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_66())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_65(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_64(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_63(Global_119936, 1))
				{
					Function_58(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_56(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_63(Global_119936, 2))
				{
					Function_58(&Global_54076, 2, 3, 0);
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
	if (Function_65(1) <= 4294962296)
	{
		Function_39(1, 4294962296, 0);
	}
	else if (Function_65(1) >= 5000)
	{
		Function_39(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_38(1));
	iVar0 = Function_65(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_31(2, Function_37(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_31(2, Function_37(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_31(2, Function_37(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_31(2, Function_37(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_31(2, Function_37(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_31(2, Function_37(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_31(2, Function_37(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_31(2, Function_37(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_31(2, Function_37(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_31(2, Function_37(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_31(2, Function_37(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_31(2, Function_37(Global_21369.f_244), 0);
			}
			break;
	}
	Function_30(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_30(int iParam0, int iParam1) //Position: 0x37CF / 14287
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_31(int iParam0, char* cParam1) //Position: 0x3A39 / 14905
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_35(iParam0, &cParam1, 0, 1);
	iVar1 = Function_32();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_32() //Position: 0x3BC9 / 15305
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
	Function_33();
	return 0;
}

void Function_33() //Position: 0x3C6A / 15466
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
		Function_34(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_34(int iParam0) //Position: 0x3D28 / 15656
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

int Function_35(int iParam0, char* cParam1) //Position: 0x3D8E / 15758
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_36(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_36(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4106 / 16646
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_37(int iParam0) //Position: 0x418E / 16782
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

float Function_38(int iParam0) //Position: 0x4231 / 16945
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_39(int iParam0, bool bParam1, bool bParam2) //Position: 0x426A / 17002
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_52(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_51(iParam0);
	if (&bParam2)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x4506 / 17670
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_50(390))), 32);
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_45(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_42(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_41(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_41() //Position: 0x4B44 / 19268
{
	int iVar0;
	
	return &iVar0;
}

var Function_42(int iParam0) //Position: 0x4B4D / 19277
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_43(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4B5E / 19294
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_44(char* cParam0) //Position: 0x4C55 / 19541
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_45(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4C70 / 19568
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_47(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_46(Function_47(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_46(int iParam0, int iParam1) //Position: 0x4CD7 / 19671
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_47(int iParam0, bool bParam1) //Position: 0x4CE9 / 19689
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_48(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4CFB / 19707
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_49(int iParam0) //Position: 0x4E2F / 20015
{
	return Global_55480[iParam016].f_96;
}

var Function_50(int iParam0) //Position: 0x4E3E / 20030
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_51(int iParam0) //Position: 0x4E7B / 20091
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x5015 / 20501
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

int Function_53(int iParam0, bool bParam1, int iParam2) //Position: 0x5259 / 21081
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
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_54(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5456 / 21590
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
	Function_52(iParam0, TO_FLOAT(bParam1), 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_55(iParam0);
	return 1;
}

void Function_55(int iParam0) //Position: 0x567E / 22142
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

int Function_56(int iParam0, bool bParam1) //Position: 0x571C / 22300
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
	iVar1 = Function_57(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_32();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_57(int iParam0, int iParam1) //Position: 0x58C7 / 22727
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

void Function_58(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x590C / 22796
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_60(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_59(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_59(char* cParam0) //Position: 0x5981 / 22913
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_60(int iParam0, var uParam1, int iParam2) //Position: 0x59BB / 22971
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_62(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_61(uVar0))
		{
			case 0x00000002:
				if (!Function_63(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_61(char* cParam0) //Position: 0x5A37 / 23095
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

int Function_62(int iParam0) //Position: 0x5AD8 / 23256
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

bool Function_63(var uParam0, int iParam1) //Position: 0x5B15 / 23317
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_64(int iParam0, bool bParam1) //Position: 0x5B28 / 23336
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
	iVar1 = Function_57(iParam0, 4294967295);
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
	iVar1 = Function_32();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_65(bool bParam0) //Position: 0x5CD4 / 23764
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_66() //Position: 0x5D15 / 23829
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_67(int iParam0) //Position: 0x5D40 / 23872
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_68(int iParam0) //Position: 0x5D4F / 23887
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_69() //Position: 0x5D5B / 23899
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_70(vector3 vParam0) //Position: 0x5D70 / 23920
{
	if (Function_14(&vParam0))
	{
		if (!Function_13(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_168(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_71(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x5E34 / 24116
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_72(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

struct<16> Function_72(int iParam0) //Position: 0x5EC9 / 24265
{
	char* cVar0[16];
	
	if (!Function_73())
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

bool Function_73() //Position: 0x5F08 / 24328
{
	if (Function_186(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_74(bool bParam0) //Position: 0x5F23 / 24355
{
	Function_75(&bParam0, 0.0f);
	return;
}

void Function_75(vector3 vParam0) //Position: 0x5F30 / 24368
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_168(&vParam0, 1);
	Function_152(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_76(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5F55 / 24405
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_72(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_77(var uParam0, int iParam1) //Position: 0x5FE0 / 24544
{
	if (!Function_82(&uParam0, iParam1))
	{
		Function_78(&uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_78(var[] uParam0, int iParam1) //Position: 0x5FFD / 24573
{
	Function_168(&(uParam0[Function_81(iParam1)]), Function_79(iParam1));
	return;
}

int Function_79(int iParam0) //Position: 0x6015 / 24597
{
	return Function_80((iParam0 % 32));
}

int Function_80(bool bParam0) //Position: 0x6023 / 24611
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_81(int iParam0) //Position: 0x602F / 24623
{
	return (iParam0 / 32);
}

bool Function_82(var[] uParam0, bool bParam1) //Position: 0x603A / 24634
{
	return Function_186(uParam0[Function_81(bParam1)], Function_79(bParam1));
}

int Function_83(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x6052 / 24658
{
	if (!Function_86(uParam0, &iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam4))
	{
		return Function_85(uParam0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
	}
	return Function_84(uParam0, &iParam2);
}

int Function_84(var uParam0, int iParam1) //Position: 0x6095 / 24725
{
	UI_SET_PROMPT_STRING(uParam0, &iParam1);
	return 1;
}

var Function_85(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x60A4 / 24740
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", &uParam1, uParam0, uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_86(var uParam0, int iParam1) //Position: 0x60E3 / 24803
{
	UI_SET_PROMPT_ICON_STRING(uParam0, &iParam1);
	return 1;
}

float Function_87() //Position: 0x60F2 / 24818
{
	return (GET_LAST_FRAME_TIME() * 30.0f);
}

var Function_88(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6101 / 24833
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_41(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "SafeCracking_0_Flipped", 2, 1);
	}
	Function_89(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_89(var uParam0, int iParam1) //Position: 0x6194 / 24980
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_91(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_90(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 2,25f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 2);
	return;
}

void Function_90(int iParam0, int iParam1) //Position: 0x61ED / 25069
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-1,22185f, 1,636313f, 0,612422f), Vector(-11,46059f, 45,33958f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,107341f, 1,318646f, -0,488954f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_91(var uParam0, bool bParam1) //Position: 0x6292 / 25234
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,044852f, 0,977959f, 0,231767f), Vector(-2,080238f, -49,6131f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,298049f, 0,942358f, -0,403175f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,298049f, 0,942358f, -0,403175f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_92(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x635B / 25435
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_41(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "SafeCracking_0", 2, 1);
	}
	Function_93(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_93(var uParam0, int iParam1) //Position: 0x63E6 / 25574
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_95(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_94(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 2,25f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 2);
	return;
}

void Function_94(int iParam0, int iParam1) //Position: 0x643F / 25663
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(1,22185f, 1,636313f, 0,612422f), Vector(-11,46059f, 45,33958f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,107341f, 1,318646f, -0,488954f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_95(var uParam0, bool bParam1) //Position: 0x64E4 / 25828
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,044691f, 0,977957f, 0,231934f), Vector(-4,057458f, 48,81056f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,289551f, 0,906784f, -0,428467f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,289551f, 0,906784f, -0,428467f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_96(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x65AD / 26029
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_41(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Safecracking_SOL", 2, 1);
	}
	Function_97(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_97(var uParam0, int iParam1) //Position: 0x663A / 26170
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_99(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_98(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 1);
	return;
}

void Function_98(int iParam0, int iParam1) //Position: 0x6682 / 26242
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-3,534812f, 2,018189f, 0,668812f), Vector(-9,613142f, -72,52207f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_99(int iParam0, var uParam1) //Position: 0x6713 / 26387
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(0,285104f, 1,520304f, 0,723406f), Vector(-10,0612f, 17,83933f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,025606f, 1,340399f, -0,241668f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

bool Function_100(bool bParam0) //Position: 0x67B0 / 26544
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_101() //Position: 0x67D0 / 26576
{
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x67D6 / 26582
{
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	UI_PUSH("Minigame");
	if (!Function_144(0, 10, 4))
	{
		Function_141(0, 10, 4, 4294967295);
	}
	iLocal_42 = Function_139(0, 10, 4);
	if ((Global_6623 || Global_6625) || Global_6635)
	{
		Function_103(iLocal_42, 0);
	}
	else
	{
		Function_103(iLocal_42, 1);
	}
	return;
}

void Function_103(int iParam0, int iParam1) //Position: 0x6830 / 26672
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	char* cVar12;
	
	if (!Function_137(iParam0))
	{
		Function_135();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_134(iParam0);
	if (StackVal != 2)
	{
		Function_132("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_107(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_105(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_72(Global_10966) };
		}
		cVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(cVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar12);
		APPEND_JOURNAL_ENTRY(cVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

struct<24> Function_104(char* cParam0) //Position: 0x6941 / 26945
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

int Function_105(int iParam0) //Position: 0x6B97 / 27543
{
	if (!Function_106(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_106(int iParam0) //Position: 0x6BB7 / 27575
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_107(bool bParam0) //Position: 0x6BCE / 27598
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_122();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_108();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_152(&Global_99144, 1);
		Function_152(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_108() //Position: 0x6C23 / 27683
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
	Function_113();
	Function_112();
	Function_111();
	Function_110();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_109();
	return;
}

void Function_109() //Position: 0x6C6E / 27758
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_110() //Position: 0x6D74 / 28020
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_111() //Position: 0x6DA7 / 28071
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_112() //Position: 0x6F3A / 28474
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_113() //Position: 0x70F3 / 28915
{
	Function_114(&Global_42918, 1, 0);
	return;
}

void Function_114(struct<2317> Param0) //Position: 0x7101 / 28929
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_115();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_115() //Position: 0x731E / 29470
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_116(char* cParam0) //Position: 0x7333 / 29491
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
					iVar2 = ((Function_65((50 + iVar4)) + Function_65((183 + iVar4))) + Function_65((90 + iVar4)));
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

struct<8> Function_117() //Position: 0x73DA / 29658
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
		iVar2 = ((Function_65((50 + iVar3) + 15) + Function_65((183 + iVar3) + 15)) + Function_65((90 + iVar3) + 15));
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

struct<8> Function_118() //Position: 0x7463 / 29795
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
			iVar2 = ((Function_65((50 + iVar3) + 8) + Function_65((183 + iVar3) + 8)) + Function_65((90 + iVar3) + 8));
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

struct<8> Function_119() //Position: 0x74FA / 29946
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
		iVar2 = ((Function_65((50 + iVar3)) + Function_65((183 + iVar3))) + Function_65((90 + iVar3)));
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

void Function_120() //Position: 0x7579 / 30073
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_121(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_39(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_121(int iParam0, bool bParam1, int iParam2) //Position: 0x75B6 / 30134
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_52(iParam0, bParam1, 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_40(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_122() //Position: 0x77C2 / 30658
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_73())
	{
		Function_129(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_129(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_124(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_124(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_123(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_123(vector3 vParam0) //Position: 0x7879 / 30841
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_124(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x7891 / 30865
{
	int iVar0;
	
	iVar0 = Function_127(&uParam2, &fParam3);
	if (Function_126(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_168(&Global_99144, 1);
			Function_152(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_168(&Global_99144, 2);
			Function_152(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_168(&Global_99144, 2);
		Function_152(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_125();
	return StackVal, Function_125();
}

struct<8> Function_125() //Position: 0x7989 / 31113
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_126(int iParam0) //Position: 0x7993 / 31123
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_127(bool bParam0, bool bParam1) //Position: 0x79A9 / 31145
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_128(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_128(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_126(iVar0) && !&bParam1)
	{
		iVar0 = Function_127(&bParam0, 1);
	}
	return iVar0;
}

float Function_128(struct<2> Param0, struct<2> Param2) //Position: 0x7A75 / 31349
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_129(float fParam0, int iParam1) //Position: 0x7A92 / 31378
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_131(&Global_54076, &Var3);
	if (!Function_130(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_130(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_168(&Global_99144, 2);
	Function_152(&Global_99144, 1);
	iParam1 = 0;
	if (Function_123(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_130(int iParam0) //Position: 0x82BF / 33471
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_186(uVar0, 0x1000000) || Function_186(uVar0, 0x2000000)) || Function_186(uVar0, 0x4000000)) || !Function_186(uVar0, 0x10000000));
}

void Function_131(var uParam0, int iParam1) //Position: 0x82FA / 33530
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_132(var uParam0, int iParam1) //Position: 0x8309 / 33545
{
	struct<4> Var0;
	
	if (!Function_137(iParam1))
	{
		return;
	}
	switch (Function_134(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_133(Function_105(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_134(iParam1), Function_105(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_134(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_134(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_134(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_134(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_134(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_133(int iParam0) //Position: 0x8433 / 33843
{
	char* cVar0[16];
	
	if (!Function_73())
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

int Function_134(int iParam0) //Position: 0x846D / 33901
{
	if (!Function_106(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_135() //Position: 0x8488 / 33928
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_136(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_136(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x86CF / 34511
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_137(int iParam0) //Position: 0x86FB / 34555
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

bool Function_138(int iParam0) //Position: 0x871F / 34591
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_139(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8734 / 34612
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_140(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_141(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_141(bParam0, bParam1, bParam2, 4294967295);
}

var Function_140(int iParam0, int iParam1, int iParam2) //Position: 0x8792 / 34706
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_141(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x87B2 / 34738
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
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_142(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_142(int iParam0) //Position: 0x8916 / 35094
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_143(int iParam0) //Position: 0x8954 / 35156
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

bool Function_144(var uParam0, var uParam1, int iParam2) //Position: 0x8969 / 35177
{
	int iVar0;
	
	iVar0 = Function_139(uParam0, uParam1, iParam2);
	return Function_137(iVar0);
}

bool Function_145(char* cParam0) //Position: 0x897F / 35199
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_146(int iParam0) //Position: 0x898C / 35212
{
	return Function_7(&iParam0, "OneShotKill", 0);
}

bool Function_147(char* cParam0, int iParam1) //Position: 0x89A7 / 35239
{
	return Function_9(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_148(int iParam0) //Position: 0x89C7 / 35271
{
	return Function_7(&iParam0, "LinkToParentAnim", 0);
}

var Function_149(int iParam0) //Position: 0x89E7 / 35303
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_44 - 1))
	{
		if (&vLocal_44[iVar09] + 16 == &iParam0)
		{
			return &vLocal_44[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_150(int iParam0) //Position: 0x8A1E / 35358
{
	return Function_7(&iParam0, "LinkParentToAnim", 0);
}

bool Function_151(int iParam0) //Position: 0x8A3E / 35390
{
	return Function_7(&iParam0, "SingularUse", 0);
}

void Function_152(int iParam0, int iParam1) //Position: 0x8A59 / 35417
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_153(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x8A6F / 35439
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
	uVar2 = Function_160(&iParam0 + 16, &bVar0);
	uVar3 = Function_159(&iParam0 + 16, &bVar1);
	uVar4 = Function_158(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_157(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_156(&iParam0 + 16, &bVar7);
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
			Function_155();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_154(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_41(), Function_154(&iParam0 + 16, &iVar10), 0, bVar9);
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
					Function_155();
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

bool Function_154(char* cParam0, int iParam1) //Position: 0x8D93 / 36243
{
	return Function_9(&cParam0, "TargetLocator", &iParam1);
}

void Function_155() //Position: 0x8DB2 / 36274
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_156(char* cParam0, int iParam1) //Position: 0x8DC1 / 36289
{
	return Function_9(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_157(char* cParam0, int iParam1) //Position: 0x8DE5 / 36325
{
	return Function_9(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_158(int iParam0) //Position: 0x8E0B / 36363
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_159(var uParam0, int iParam1) //Position: 0x8E29 / 36393
{
	return Function_9(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_160(var uParam0, int iParam1) //Position: 0x8E4B / 36427
{
	return Function_9(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_161(char* cParam0, int iParam1) //Position: 0x8E6D / 36461
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GRINGO_GET_FIRST_CHILD(2, &cParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar0, &iParam1);
		uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar0);
		uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar0);
		uVar1 = GRINGO_GET_PHYSINST(&cParam0);
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
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&iVar6, &iParam1, GRINGO_GET_PROP_ATTACH_SLOT(&cParam0));
			}
		}
	}
	return;
}

var Function_162(var uParam0, int iParam1, bool bParam2) //Position: 0x8F35 / 36661
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

void Function_163(int iParam0, float fParam1) //Position: 0x8FB1 / 36785
{
	if (!Function_14(&iParam0))
	{
		Function_75(&iParam0, fParam1);
	}
	return;
}

var Function_164(int iParam0) //Position: 0x8FC9 / 36809
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(&iParam0, "RandUseTime", 0.0f));
}

void Function_165(vector3 vParam0) //Position: 0x8FEA / 36842
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_166(var uParam0) //Position: 0x9001 / 36865
{
	uParam0 = &uParam0;
	return;
}

int Function_167() //Position: 0x900D / 36877
{
	return 1;
}

void Function_168(var uParam0, int iParam1) //Position: 0x9014 / 36884
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_169(int iParam0, var uParam1, int iParam2) //Position: 0x9025 / 36901
{
	float fVar0;
	
	Function_172(&iParam0);
	uParam1 = Function_172(&iParam0);
	iParam2 = Function_171(&iParam0);
	fVar0 = Function_170(&iParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

int Function_170(int iParam0) //Position: 0x906A / 36970
{
	return Function_11(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_171(int iParam0) //Position: 0x9096 / 37014
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_172(int iParam0) //Position: 0x90A2 / 37026
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_173(&iParam0))
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

bool Function_173(int iParam0) //Position: 0x91A4 / 37284
{
	return Function_7(&iParam0, "UsePosActorRelative", 0);
}

int Function_174(int iParam0) //Position: 0x91C7 / 37319
{
	return Function_11(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_175(int iParam0) //Position: 0x91EF / 37359
{
	iParam0 = &iParam0;
	return;
}

void Function_176(int iParam0) //Position: 0x91FB / 37371
{
	iParam0 = &iParam0;
	return;
}

bool Function_177(int iParam0) //Position: 0x9207 / 37383
{
	return Function_7(&iParam0, "MaintainPosture", 0);
}

void Function_178(int iParam0) //Position: 0x9226 / 37414
{
	if (!Function_14(&iParam0))
	{
		Function_75(&iParam0, 0.0f);
	}
	return;
}

bool Function_179(var uParam0, int iParam1) //Position: 0x923D / 37437
{
	struct<2> Var0;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Function_172(&iParam1);
	Var0 = Function_172(&iParam1);
	bVar2 = Function_171(&iParam1);
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&uParam0, 0);
		TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var0, bVar2, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(&iParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_183(&uParam0, &iParam1);
	}
	uVar3 = Function_182(&iParam1);
	uVar4 = Function_170(&iParam1);
	Function_180(&iParam1);
	iVar5 = Function_180(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar5, uVar3, 0,2f, 1, bVar2, uVar4, 0, 0);
}

struct<8> Function_180(int iParam0) //Position: 0x92D5 / 37589
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_181(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_181(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_181(var uParam0, var uParam1, struct<2> Param2) //Position: 0x92F9 / 37625
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_182(int iParam0) //Position: 0x9318 / 37656
{
	return Function_11(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_183(var uParam0, int iParam1) //Position: 0x933C / 37692
{
	bool bVar0;
	float fVar1;
	var uVar2;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar8;
	var uVar10;
	var uVar12;
	struct<2> Var13;
	var uVar15;
	bool bVar17;
	
	bVar0 = Function_182(&iParam1);
	fVar1 = Function_170(&iParam1);
	if (!GET_GRINGO_BOOL_ATTR("RandomPointSet", &iParam1, &uVar5))
	{
		bVar4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
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
			SET_GRINGO_FLOAT_ATTR(bVar4, "RandomDirection", &iParam1);
			SET_GRINGO_BOOL_ATTR(1, "RandomPointSet", &iParam1);
		}
		else
		{
			return 0;
		}
	}
	GET_GRINGO_VECTOR_ATTR(&uVar2, "RandomPoint", &iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(&uParam0, &uVar2, bVar0, 0,2f, 1, bVar4, fVar1, 1, 0);
}

bool Function_184(var uParam0, int iParam1) //Position: 0x9464 / 37988
{
	iParam1 = Function_11(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_185(var uParam0) //Position: 0x9492 / 38034
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

bool Function_186(var uParam0, int iParam1) //Position: 0x95AB / 38315
{
	return (uParam0 && iParam1) == 0;
}

void Function_187(struct<69> Param0) //Position: 0x95B8 / 38328
{
	if (Function_186(Param0.f_64, 16))
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

void Function_188(struct<69> Param0) //Position: 0x963A / 38458
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
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_186(Param0.f_64, 32)) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_194(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_186(Param0.f_64, 64));
		Function_17(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_7(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_186(Param0.f_64, 128) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_150(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_186(Param0.f_64, 16))
			{
				Function_187(&Param0);
				Function_152(&Param0 + 64, 16);
			}
			if (Function_186(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, 0);
			}
			if (Function_193(&Param0 + 16) && Function_186(Param0.f_64, 512))
			{
				Function_152(&Param0 + 64, 512);
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
	if (Function_148(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_149(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_192(&Param0 + 16);
	bVar11 = Function_7(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_191(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_186(Param0.f_64, 256))
			{
				Function_152(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_88)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_86));
		iLocal_88 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_151(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_91))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_91);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_165(&Param0);
	Function_178(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_190(&Param0 + 16), &Param0 + 16);
	}
	Function_152(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_189();
		}
	}
	else
	{
		Function_189();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_189() //Position: 0x9BE5 / 39909
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

int Function_190(int iParam0) //Position: 0x9C1F / 39967
{
	return Function_11(&iParam0, "ReuseDelay", 15.0f);
}

void Function_191(int iParam0, var uParam1) //Position: 0x9C3D / 39997
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_160(&iParam0 + 16, &uVar0);
	Function_159(&iParam0 + 16, &uVar1);
	iVar2 = Function_158(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_192(int iParam0) //Position: 0x9C7E / 40062
{
	iParam0 = &iParam0;
	return;
}

bool Function_193(int iParam0) //Position: 0x9C8A / 40074
{
	return Function_7(&iParam0, "BlockBumpReactions", 0);
}

void Function_194(var uParam0, int iParam1) //Position: 0x9CAC / 40108
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_35))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_35);
	}
	AI_STOP_IGNORING_ACTOR(&uParam0);
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			SET_GRINGO_OBJECT_REF_ATTR(GET_OBJECT_FROM_ACTOR(&uParam0), "LastUserObject", &iParam1);
			SET_GRINGO_OBJECT_REF_ATTR(&uVar0, "UserObject", &iParam1);
			TASK_CLEAR(&uParam0);
			if (DECOR_CHECK_EXIST(&uParam0, "iLockerOpen"))
			{
				if (Function_225(iLocal_42))
				{
					Function_212(iLocal_42, 0, 1, 0);
				}
				bVar1 = Function_211(iLocal_42);
				bVar2 = ROUND(Function_12(&bLocal_31));
				PRINTSTRING("iNewest time is ");
				PRINTINT(bVar2);
				PRINTNL();
				PRINTSTRING("iFastestTimeToUnlockSafe is ");
				PRINTINT(bVar1);
				PRINTNL();
				if (bVar2 > bVar1 || bVar1 != 0)
				{
					Function_210(iLocal_42, bVar2);
					Function_209(251, TO_FLOAT(bVar2), 0);
				}
				if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "SOL_Safe"))
				{
					Function_207((Function_208(2, 2, 1, 1, 0) + DECOR_GET_INT(GRINGO_GET_MY_OBJECT_REF(), "SOL_Safe")), 1, 1);
					DECOR_SET_BOOL(&uParam0, "SOL_UsedSafe", 1);
				}
				else if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Rebel03_Safe"))
				{
					Function_207(200, 1, 1);
					Function_205(9, 0, 0);
					GIVE_WEAPON_TO_ACTOR(&uParam0, 5, 0.0f, 1, 0);
					_ADD_AMMO_OF_TYPE(&uParam0, 7, RAND_FLOAT_RANGE(10.0f, 20.0f), 0, 1);
					DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Rebel03_Safe");
				}
				else
				{
					Function_207(Function_208(2, 1, 1, 1, 0), 1, 1);
				}
			}
			else if (Function_225(iLocal_42))
			{
				Function_204(iLocal_42);
			}
		}
	}
	Function_27();
	UI_POP("Minigame");
	iLocal_12 = 0;
	if (IS_OBJECT_VALID(&uLocal_29))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&uLocal_29);
		while (IS_OBJECT_VALID(&uLocal_29) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	Function_68(2);
	Function_28();
	Function_69();
	REMOVE_STRING_TABLE("nminigames");
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (DECOR_CHECK_EXIST(&uParam0, "iLockerOpen"))
			{
				Function_195(3, 25, &uParam0, GRINGO_GET_MY_OBJECT_REF(), 0);
			}
		}
	}
	if (HUD_IS_FADED() && !IS_GAME_RESETTING())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	if (iLocal_13)
	{
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	return;
}

var Function_195(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x9F3C / 40764
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
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
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_198(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_41(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_196();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_196() //Position: 0xA1EF / 41455
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_197(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_197(var uParam0, int iParam1) //Position: 0xA262 / 41570
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_198(bool bParam0) //Position: 0xA298 / 41624
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
	if (Global_6621)
	{
		return 0;
	}
	if (Function_201(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_199(int iParam0) //Position: 0xA30E / 41742
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_200() //Position: 0xA31F / 41759
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_201(int iParam0) //Position: 0xA338 / 41784
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_202(int iParam0) //Position: 0xA356 / 41814
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_203(int iParam0) //Position: 0xA36C / 41836
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_204(int iParam0) //Position: 0xA381 / 41857
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_137(iParam0))
	{
		return;
	}
	iVar0 = Function_134(iParam0);
	if (StackVal == 2)
	{
		Function_132("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_72(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

int Function_205(bool bParam0, bool bParam1, int iParam2) //Position: 0xA427 / 42023
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_206(bParam0), Function_115()) == 0)
		{
			ADD_ITEM(Function_206(bParam0), Function_115(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_206(bParam0), Function_115(), &iParam2);
	return 1;
}

var Function_206(bool bParam0) //Position: 0xA475 / 42101
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

int Function_207(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA569 / 42345
{
	bool bVar0;
	
	bVar0 = Function_65(0);
	if ((Function_65(0) + bParam0) >= 999999)
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
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_65(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_54(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_65(597) + Function_65(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

bool Function_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA63B / 42555
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
	switch (&iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_65(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_206(17), &Global_54076))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

int Function_209(int iParam0, bool bParam1, bool bParam2) //Position: 0xA742 / 42818
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_52(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_51(iParam0);
	if (&bParam2)
	{
		Function_40(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_210(int iParam0, int iParam1) //Position: 0xA9AF / 43439
{
	if (!Function_137(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

var Function_211(int iParam0) //Position: 0xA9CA / 43466
{
	if (!Function_137(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

void Function_212(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA9E4 / 43492
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_137(iParam0))
	{
		Function_135();
		return;
	}
	bVar0 = Function_134(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_66())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_105(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_72(Global_10966) };
		}
		if (Function_66())
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
	if (Function_66())
	{
		Function_220();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_132("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_215(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
						switch (Function_105(iParam0))
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
			Function_214(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_213(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_213(int iParam0, struct<41> Param1) //Position: 0xAC42 / 44098
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_214(var uParam0, int iParam1) //Position: 0xAC80 / 44160
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_215(int iParam0) //Position: 0xACBF / 44223
{
	int iVar0;
	int iVar1;
	
	if (!Function_106(iParam0))
	{
		return;
	}
	switch (Function_134(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_105(iParam0);
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
			switch (Function_105(iParam0))
			{
				case 0x00000000:
					if (Function_218(iParam0) == 1)
					{
						iVar0 = Function_217(iParam0);
						if (Function_216(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_219(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_219(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_219(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_219(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_219(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_219(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_219(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_219(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_219(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_219(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_219(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_219(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_219(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_219(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_219(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_219(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_219(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_219(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_219(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_219(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_54(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_54(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_54(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_217(iParam0) == 0)
			{
				if (Function_218(iParam0) == 1)
				{
					Function_54(458, 1, 0, 0);
					iVar0 = Function_105(iParam0);
					if (Function_216(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_219(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_219(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_219(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_219(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_219(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_219(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_219(2, 16);
						}
						else if (iVar0 == Global_46838[1])
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
			if (Function_218(iParam0) == 1)
			{
				Function_54(400, 1, 0, 0);
			}
			switch (Function_105(iParam0))
			{
				case 0x00000001:
					Function_54(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_219(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_219(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_219(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_54(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_219(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
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

bool Function_216(int iParam0) //Position: 0xB19B / 45467
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_217(int iParam0) //Position: 0xB1B1 / 45489
{
	if (!Function_106(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_218(int iParam0) //Position: 0xB1D0 / 45520
{
	if (!Function_106(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_219(int iParam0, int iParam1) //Position: 0xB1EA / 45546
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_220() //Position: 0xB254 / 45652
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_65(0));
	PLAYSTAT_INT("HC_FAME", Function_65(3));
	PLAYSTAT_INT("HC_HONOR", Function_65(1));
	return;
}

void Function_221() //Position: 0xB3B6 / 46006
{
	int iVar0;
	int iVar1;
	
	if (!Function_224(Global_10966))
	{
		return;
	}
	iVar0 = Function_65(24);
	iVar1 = Function_223(Global_10966);
	if (!Function_224(iVar0) && Function_222(iVar1) < 0)
	{
		Function_39(24, Global_10966, 0);
		Function_35(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_222(Function_223(iVar0)))
	{
		Function_39(24, Global_10966, 0);
		Function_35(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_222(int iParam0) //Position: 0xB436 / 46134
{
	if (!Function_137(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_223(int iParam0) //Position: 0xB450 / 46160
{
	if (!Function_224(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_224(int iParam0) //Position: 0xB46A / 46186
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_225(int iParam0) //Position: 0xB480 / 46208
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

void Function_226(var uParam0, bool bParam1) //Position: 0xB4A1 / 46241
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_246("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_246("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_91))
			{
				if (&bParam1)
				{
					Function_246("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_91);
			}
		}
	}
	if (&bParam1)
	{
		Function_246("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_227(int iParam0, int iParam1) //Position: 0xB5B1 / 46513
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_228(struct<69> Param0) //Position: 0xB5C9 / 46537
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
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_41(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_165(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_168(&Param0 + 64, 2);
	Function_152(&Param0 + 64, 8);
	Function_152(&Param0 + 64, 16);
	Function_152(&Param0 + 64, 64);
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
	if (!Function_233(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_168(&Param0 + 64, 32);
			}
			else
			{
				Function_152(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_152(&Param0 + 64, 32);
		}
		if (Function_186(Param0.f_64, 32))
		{
			Function_168(&Param0 + 64, 128);
		}
		else
		{
			Function_152(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_152(&Param0 + 64, 32);
	}
	if (Function_232(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 1), 1))
			{
				Function_168(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_168(&Param0 + 64, 128);
		}
	}
	if (Function_193(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_168(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_229(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_229(var uParam0, int iParam1) //Position: 0xB8E5 / 47333
{
	bool bVar0;
	bool bVar1;
	
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		HUD_CLEAR_SMALL_TEXT();
		AI_IGNORE_ACTOR(&uParam0);
		fLocal_15[0] = 0.0f;
		fLocal_15[1] = TO_FLOAT(RAND_INT_RANGE(90, 315));
		bVar0 = FLOOR((fLocal_15[1] + 45.0f));
		bVar1 = FLOOR((fLocal_15[1] + 270.0f));
		fLocal_15[2] = TO_FLOAT(RAND_INT_RANGE(bVar0, bVar1));
		while (fLocal_15[2] < 360.0f)
		{
			fLocal_15[2] = (fLocal_15[2] - 360.0f);
		}
		if (fLocal_15[2] >= 15.0f)
		{
			fLocal_15[2] = (fLocal_15[2] + 15.0f);
		}
		else if (fLocal_15[2] <= 345.0f)
		{
			fLocal_15[2] = (fLocal_15[2] - 15.0f);
		}
		bVar0 = FLOOR((fLocal_15[2] + 90.0f));
		bVar1 = FLOOR(((fLocal_15[2] + 270.0f) + 45.0f));
		fLocal_15[3] = TO_FLOAT(RAND_INT_RANGE(bVar0, bVar1));
		while (fLocal_15[3] < 360.0f)
		{
			fLocal_15[3] = (fLocal_15[3] - 360.0f);
		}
		if (fLocal_15[3] >= 15.0f)
		{
			fLocal_15[3] = (fLocal_15[3] + 15.0f);
		}
		else if (fLocal_15[3] <= 345.0f)
		{
			fLocal_15[3] = (fLocal_15[3] - 15.0f);
		}
		PRINTSTRING("Button Presses 1 = ");
		PRINTFLOAT(fLocal_15[1]);
		PRINTNL();
		PRINTSTRING("Button Presses 2 = ");
		PRINTFLOAT(fLocal_15[2]);
		PRINTNL();
		PRINTSTRING("Button Presses 3 = ");
		PRINTFLOAT(fLocal_15[3]);
		PRINTNL();
		Function_178(&bLocal_25);
		iLocal_12 = 1;
		Function_230(&uLocal_2);
		DECOR_REMOVE(&uParam0, "iLockerOpen");
		REQUEST_STRING_TABLE("nminigames");
	}
	return;
}

void Function_230(int iParam0) //Position: 0xBAE1 / 47841
{
	Function_231(&iParam0);
	return;
}

void Function_231(int[] iParam0) //Position: 0xBAED / 47853
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iParam0[iVar0] = 0;
		iVar0++;
	}
	return;
}

bool Function_232(int iParam0) //Position: 0xBB0D / 47885
{
	return Function_7(&iParam0, "DrawWeapon", 0);
}

bool Function_233(int iParam0) //Position: 0xBB27 / 47911
{
	return Function_7(&iParam0, "AllowWeapon", 0);
}

void Function_234(int iParam0, var uParam1) //Position: 0xBB42 / 47938
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_235(&uParam1, &bVar0);
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

bool Function_235(var uParam0, int iParam1) //Position: 0xBB80 / 48000
{
	return Function_9(&uParam0, "UseName", &iParam1);
}

bool Function_236(struct<65> Param0) //Position: 0xBB99 / 48025
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
				if (!Function_241(6))
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
		if (!Function_240(&uVar1, &Param0 + 16))
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
		if (!Function_186(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_168(&Param0 + 64, 1);
			}
			else
			{
				Function_152(&Param0 + 64, 1);
			}
			if (Function_186(Param0.f_64, 1))
			{
				Function_227("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_172(&Param0 + 16);
				Var8 = Function_172(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_239(&Param0 + 16);
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
				if (!Function_238(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_237(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_171(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_171(&Param0 + 16));
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

int Function_237(int iParam0) //Position: 0xBE91 / 48785
{
	return Function_11(&iParam0, "ActivationCone", 0.0f);
}

bool Function_238(var uParam0, int iParam1) //Position: 0xBEAF / 48815
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
	Function_172(&iParam1);
	Var0 = Function_172(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_172(&iParam1);
	Var0 = Function_172(&iParam1);
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

int Function_239(int iParam0) //Position: 0xBF4F / 48975
{
	return Function_11(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_240(int iParam0, int iParam1) //Position: 0xBF6F / 49007
{
	struct<2> Var0;
	struct<2> Var2;
	
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	GRINGO_GET_USE_COMPONENT_POSITION(&Var0, &iParam1);
	GET_POSITION(&iParam0, &Var2);
	if (VDIST(Var2, Var0) < 0,5f)
	{
		return 0;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "item_binoculars"))
	{
		return 0;
	}
	if (IS_ACTOR_LOCAL_PLAYER(&iParam0))
	{
	}
	if (Global_6646)
	{
		return 0;
	}
	return 1;
}

bool Function_241(int iParam0) //Position: 0xBFE0 / 49120
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_242(int iParam0) //Position: 0xC000 / 49152
{
	iParam0 = &iParam0;
	return;
}

void Function_243(var uParam0, int iParam1) //Position: 0xC00C / 49164
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_244(&(vLocal_44[iLocal_829]), &uParam0);
		iLocal_82++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 2)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_243(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0xC078 / 49272
{
	*(&iParam0 + 16) = &iParam1;
	Function_152(&iParam0 + 64, 1);
	return;
}

void Function_245(int iParam0) //Position: 0xC090 / 49296
{
	iParam0 = &iParam0;
	return;
}

void Function_246(int iParam0) //Position: 0xC09C / 49308
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

