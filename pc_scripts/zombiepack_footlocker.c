//Decompiled with MagicRDR v1.0
//Function Count : 142
//Statics Count : 62
//Natives Count : 264
//Parameters Count : 2

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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	struct<9> Local_29[1];
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
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	var uLocal_59 = 0;
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
	
	iLocal_13 = 0;
	iLocal_18 = 0;
	iLocal_19 = 0;
	bLocal_20 = false;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_141("STARTS");
	Function_140(&uScriptParam_0);
	iLocal_49 = 0;
	Function_138(&uScriptParam_0, &iLocal_49);
	while (IS_GRINGO_ACTIVE())
	{
		Function_137(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_50);
		}
		iVar2 = 0;
		bLocal_57 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_49 - 1))
			{
				if (&vLocal_29[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_49;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_57 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_131(&(vLocal_29[iVar39]), &bVar4))
						{
							Function_129(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_29[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_131(&(vLocal_29[iVar39]), &bVar4))
						{
							Function_129(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_29[iVar39] + 16);
							if (bVar4)
							{
								Function_124(&(vLocal_29[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_29[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_123("eGRINGO_EndUse: Stop use by request", &vLocal_29[iVar39] + 24);
							Function_122(&vLocal_29[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_29[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_29[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_29[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_29[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_76(&(vLocal_29[iVar39]), 0);
							}
							else if (vLocal_29[iVar39].f_68 < 8)
							{
								Function_75(&(vLocal_29[iVar39]));
								vLocal_29[iVar39].f_68 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_141("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_49 - 1))
			{
				if (Function_74(vLocal_29[iVar09].f_64, 2))
				{
					if (!Function_17(&(vLocal_29[iVar09])))
					{
						Function_141("Quitting due to update end");
						Function_76(&(vLocal_29[iVar09]), 1);
					}
				}
				if (Function_16(&(vLocal_29[iVar09]), 0))
				{
					Function_6(&(vLocal_29[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_49 - 1))
		{
			if (Function_74(vLocal_29[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_57)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_58))
	{
		Function_141("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_58);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_49 - 1))
	{
		if (Function_74(vLocal_29[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_29[iVar09] + 24);
			Function_76(&(vLocal_29[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_29[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_29[iVar09] + 16);
		}
		Function_16(&(vLocal_29[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_141("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x442 / 1090
{
	iParam0 = &iParam0;
	if (IS_OBJECT_ANIMATOR_VALID(&uLocal_27))
	{
		DESTROY_OBJECT_ANIMATOR(&uLocal_27);
	}
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x45D / 1117
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

int Function_3() //Position: 0x49F / 1183
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x4A6 / 1190
{
	var uVar0;
	struct<2> Var1;
	var uVar3;
	
	iParam0 = &iParam0;
	uVar0 = GRINGO_GET_MY_OBJECT_REF();
	if (DECOR_CHECK_EXIST(&uVar0, "GringoIsDone"))
	{
		if (!bLocal_20)
		{
			Function_5(GRINGO_GET_MY_OBJECT_REF());
			Var1 = Function_5(GRINGO_GET_MY_OBJECT_REF());
			uVar3 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var1, 0,66f, "footlocker", 1);
			if (IS_OBJECT_VALID(&uVar3))
			{
				uLocal_27 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uVar3);
				if (!IS_OBJECT_ANIMATOR_VALID(&uLocal_27))
				{
					uLocal_27 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&uVar3, "chest", "$chest", "chest");
				}
				SET_OBJECT_ANIMATOR_NODE(&uLocal_27, "/global/chest/stay_open");
			}
		}
	}
	return 0;
}

struct<8> Function_5(int iParam0) //Position: 0x55C / 1372
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_6(struct<69> Param0) //Position: 0x585 / 1413
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_74(Param0.f_64, 2))
	{
		Function_122(&Param0 + 24, 0);
	}
	else if (UNK_0x0A0E660E() || Function_15(&Param0))
	{
		if (Param0.f_68 == 6)
		{
			if (Function_13(&Param0) <= Function_11(&Param0 + 16))
			{
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
					{
						if (UNK_0x0A0E660E() || !Global_6663)
						{
							iVar1 = Function_9(&Param0 + 16, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_57 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_58))
								{
									Function_141("ManagePlayerQuit: Create quit context");
									if (Function_8(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_58 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_58 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_58))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_75(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_58))
									{
										Function_141("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_58);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", &Param0 + 16, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
								{
									if (Function_7(&Param0 + 24))
									{
										Function_75(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_58))
										{
											Function_141("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_58);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_58))
							{
								Function_141("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_58);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_58))
		{
			Function_141("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_58);
		}
	}
	return;
}

bool Function_7(int iParam0) //Position: 0x8B9 / 2233
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

bool Function_8(bool bParam0, var uParam1, int iParam2) //Position: 0x9D2 / 2514
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

bool Function_9(char* cParam0, int iParam1) //Position: 0x9F0 / 2544
{
	return Function_10(&cParam0, "UseQuit", &iParam1);
}

bool Function_10(char* cParam0, char* cParam1, int iParam2) //Position: 0xA09 / 2569
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
			return &iLocal_14;
		}
		return &iVar1;
	}
	return &iLocal_14;
}

float Function_11(int iParam0) //Position: 0xA59 / 2649
{
	return Function_12(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_12(bool bParam0, var uParam1, int iParam2) //Position: 0xA77 / 2679
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &bParam0);
	return iVar0;
}

float Function_13(vector3 vParam0) //Position: 0xA8F / 2703
{
	if (Function_15(&vParam0))
	{
		if (Function_14(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_14(int iParam0) //Position: 0xB5C / 2908
{
	return Function_74(iParam0, 2);
}

bool Function_15(int iParam0) //Position: 0xB6A / 2922
{
	return Function_74(iParam0, 1);
}

bool Function_16(int iParam0, int iParam1) //Position: 0xB78 / 2936
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

bool Function_17(struct<69> Param0) //Position: 0xBC5 / 3013
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
	
	bVar11 = Function_73(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_123("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_8(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_123("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_123("Incapacitation quit", &Param0 + 24);
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
			bLocal_57 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_72(&Param0 + 16, &fVar22))
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
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_70(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_69(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_69(&Param0);
			}
			if (!Function_68(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_57 = true;
			Function_67(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_74(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_63(&Param0 + 16);
			}
			fVar18 = Function_62(&Param0 + 16);
			if (Function_13(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_74(Param0.f_64, 1))
			{
				Function_57(&Param0 + 16, &Var3, &uVar5);
				if (!Function_74(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_56(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_56(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_55());
				}
				if (!Function_74(Param0.f_64, 1024))
				{
					Function_56(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_8(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_70(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_74(Param0.f_64, 1024))
				{
					Function_56(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_8(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_74(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_56(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_56(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_74(Param0.f_64, 32))
			{
				bLocal_57 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_54(&Param0 + 16);
			bLocal_57 = true;
			Function_53(&Param0);
			Function_50(&Param0, Function_52(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_74(Param0.f_64, 1);
			}
			bVar0 = Function_49(&Param0 + 24, &Param0 + 16, bVar29);
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
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_10(&bVar1, "AttachBone", &bVar9), Function_10(&bVar1, "AttachLocator", &bVar9), 1))
						{
							Function_48(&bVar1, &Param0 + 24);
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
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_10(&bVar1, "AttachBone", &bVar9), Function_10(&bVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_48(&bVar1, &Param0 + 24);
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
					Function_39(&Param0, &uVar7, &iLocal_55, &uLocal_53);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_56(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_38(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_74(Param0.f_64, 16))
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
				if (Function_37(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_36(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_35(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_34(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_35(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_33(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_35(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_32(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_56(&Param0 + 64, 8);
					}
					else
					{
						Function_38(&Param0 + 64, 8);
					}
					if (Function_74(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_38(&Param0 + 64, 8);
				}
				if (Function_31(&Param0 + 16))
				{
					NET_SET_NODE_REPLICATION(&Param0 + 24, 1, 1);
					UNK_0xC17BAD12(&Param0 + 24);
				}
				uVar33 = Function_10(&Param0 + 16, "CustomReactNode", &bVar32);
				if (bVar32)
				{
					SET_REACT_NODE_FOR_ACTOR(&Param0 + 24, &uVar33);
				}
				iVar34 = 1;
				bVar35 = Function_8(&Param0 + 16, "CanAnimalsAttack", iVar34);
				if (!bVar35)
				{
					if (IS_ACTOR_VALID(&Param0 + 24))
					{
						SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 0);
					}
				}
				Function_30(&Param0 + 24, &Param0 + 16);
				bVar36 = Function_8(&Param0 + 16, "AllowTalking", 1);
				if (!bVar36)
				{
					STOP_PED_SPEAKING(&Param0 + 24, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				Function_29();
			}
			Param0.f_68 = 6;
			if (Function_74(Param0.f_64, 1))
			{
				if (Function_28(&Param0 + 16))
				{
					Function_2("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_27(&Param0 + 24, &Param0 + 16))
			{
				Function_2("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_49(&Param0 + 24, &Param0 + 16, Function_74(Param0.f_64, 1));
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
			if (Function_13(&Param0) <= Function_11(&Param0 + 16))
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
				bVar55 = Function_26(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, *(&Param0 + 32)) < bVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_25())
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
					if (Function_24(&Param0 + 16) <= 0.0f)
					{
						if (Function_13(&Param0) < Function_24(&Param0 + 16))
						{
							Function_2("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_141("nRewarding");
			Function_23(&Param0 + 24, &Param0 + 16);
			Function_22(&Param0 + 24, &Param0 + 16);
			Function_21(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_56(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_57 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_8(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_20())
						{
							Function_63(&Param0 + 16);
						}
					}
				}
				else
				{
					DECOR_REMOVE(&Param0 + 24, "NoGringoCamera");
				}
			}
			if (Function_8(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_19(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_74(Param0.f_64, 1024))
			{
				Function_38(&Param0 + 64, 1024);
				if (!Function_8(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_57 = true;
			bVar0 = Function_49(&Param0 + 24, &Param0 + 16, Function_74(Param0.f_64, 1));
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
	Function_18(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_18(var uParam0, int iParam1) //Position: 0x1EFA / 7930
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_19(var uParam0, var uParam1) //Position: 0x1F11 / 7953
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_20() //Position: 0x1F23 / 7971
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

void Function_21(var uParam0, int iParam1) //Position: 0x1F56 / 8022
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

void Function_22(var uParam0, int iParam1) //Position: 0x1FD4 / 8148
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

void Function_23(int iParam0, int iParam1) //Position: 0x2050 / 8272
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_24(int iParam0) //Position: 0x2062 / 8290
{
	return Function_12(&iParam0, "UseTime", 5.0f);
}

bool Function_25() //Position: 0x2079 / 8313
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_26(int iParam0) //Position: 0x2086 / 8326
{
	return Function_12(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_27(bool bParam0, int iParam1) //Position: 0x20A7 / 8359
{
	iParam1 = &iParam1;
	bParam0 = &bParam0;
	if (Function_13(&iLocal_21) < 3.0f)
	{
		return 0;
	}
	return 1;
}

bool Function_28(bool bParam0) //Position: 0x20C6 / 8390
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_29() //Position: 0x20E6 / 8422
{
	return;
}

void Function_30(var uParam0, var uParam1) //Position: 0x20EC / 8428
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	uVar0 = GRINGO_GET_MY_OBJECT_REF();
	if (IS_OBJECT_ATTACHED(&uVar0))
	{
		uVar1 = _GET_OBJECT_ATTACHMENT(&uVar0);
		if (IS_ATTACHMENT_VALID(&uVar1))
		{
			uVar2 = GET_OBJECT_ATTACHED_TO(&uVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				iLocal_16 = ATTACH_OBJECTS_CONTINUOUS(&uParam0, &uVar2, 4294967295);
			}
		}
	}
	return;
}

bool Function_31(char* cParam0) //Position: 0x2138 / 8504
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_32(int iParam0) //Position: 0x2145 / 8517
{
	return Function_8(&iParam0, "OneShotKill", 0);
}

bool Function_33(char* cParam0, int iParam1) //Position: 0x2160 / 8544
{
	return Function_10(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_34(int iParam0) //Position: 0x2180 / 8576
{
	return Function_8(&iParam0, "LinkToParentAnim", 0);
}

var Function_35(int iParam0) //Position: 0x21A0 / 8608
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_29 - 1))
	{
		if (&vLocal_29[iVar09] + 16 == &iParam0)
		{
			return &vLocal_29[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_36(int iParam0) //Position: 0x21D7 / 8663
{
	return Function_8(&iParam0, "LinkParentToAnim", 0);
}

bool Function_37(int iParam0) //Position: 0x21F7 / 8695
{
	return Function_8(&iParam0, "SingularUse", 0);
}

void Function_38(var uParam0, int iParam1) //Position: 0x2212 / 8722
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2228 / 8744
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
	uVar2 = Function_47(&iParam0 + 16, &bVar0);
	uVar3 = Function_46(&iParam0 + 16, &bVar1);
	uVar4 = Function_45(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_44(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_43(&iParam0 + 16, &bVar7);
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
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_41(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_40(), Function_41(&iParam0 + 16, &iVar10), 0, bVar9);
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
			if (Function_8(&uVar4, "LinkToUser", 0))
			{
				if (Function_25())
				{
					Function_42();
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

var Function_40() //Position: 0x254C / 9548
{
	int iVar0;
	
	return &iVar0;
}

bool Function_41(char* cParam0, int iParam1) //Position: 0x2555 / 9557
{
	return Function_10(&cParam0, "TargetLocator", &iParam1);
}

void Function_42() //Position: 0x2574 / 9588
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_43(char* cParam0, int iParam1) //Position: 0x2583 / 9603
{
	return Function_10(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_44(char* cParam0, int iParam1) //Position: 0x25A7 / 9639
{
	return Function_10(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_45(int iParam0) //Position: 0x25CD / 9677
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_46(var uParam0, int iParam1) //Position: 0x25EB / 9707
{
	return Function_10(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_47(var uParam0, int iParam1) //Position: 0x260D / 9741
{
	return Function_10(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_48(bool bParam0, int iParam1) //Position: 0x262F / 9775
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

var Function_49(var uParam0, int iParam1, bool bParam2) //Position: 0x26F7 / 9975
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

void Function_50(int iParam0, float fParam1) //Position: 0x2773 / 10099
{
	if (!Function_15(&iParam0))
	{
		Function_51(&iParam0, fParam1);
	}
	return;
}

void Function_51(vector3 vParam0) //Position: 0x278B / 10123
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_56(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_52(int iParam0) //Position: 0x27B0 / 10160
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_12(&iParam0, "RandUseTime", 0.0f));
}

void Function_53(vector3 vParam0) //Position: 0x27D1 / 10193
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_54(var uParam0) //Position: 0x27E8 / 10216
{
	uParam0 = &uParam0;
	return;
}

int Function_55() //Position: 0x27F4 / 10228
{
	return 1;
}

void Function_56(var uParam0, int iParam1) //Position: 0x27FB / 10235
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_57(int iParam0, var uParam1, int iParam2) //Position: 0x280C / 10252
{
	bool bVar0;
	
	Function_60(&iParam0);
	uParam1 = Function_60(&iParam0);
	iParam2 = Function_59(&iParam0);
	bVar0 = Function_58(&iParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

int Function_58(int iParam0) //Position: 0x2851 / 10321
{
	return Function_12(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_59(int iParam0) //Position: 0x287D / 10365
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_60(int iParam0) //Position: 0x2889 / 10377
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_61(&iParam0))
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

bool Function_61(int iParam0) //Position: 0x298B / 10635
{
	return Function_8(&iParam0, "UsePosActorRelative", 0);
}

int Function_62(int iParam0) //Position: 0x29AE / 10670
{
	return Function_12(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_63(bool bParam0) //Position: 0x29D6 / 10710
{
	bParam0 = &bParam0;
	if (iLocal_18 && !iLocal_19)
	{
		iLocal_19 = 1;
		uLocal_25 = CREATE_LAYOUT("Footlocker_Gringo_Layout");
		Function_64(&uLocal_25, 0, &Global_54076, 1, 0, 1);
	}
	return;
}

var Function_64(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x2A1E / 10782
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_40(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Footlocker", 1, 1);
	}
	Function_65(&uVar0, &uParam2);
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

void Function_65(var uParam0, int iParam1) //Position: 0x2AA5 / 10917
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_66(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 2,5f, 0);
	return;
}

void Function_66(int iParam0, int iParam1) //Position: 0x2AD5 / 10965
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(0,547648f, 2,15242f, 0,03383f), Vector(-58,11488f, 30,01009f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,0225f, 0,464561f, -0,875453f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_67(int iParam0) //Position: 0x2B72 / 11122
{
	iParam0 = &iParam0;
	return;
}

bool Function_68(int iParam0) //Position: 0x2B7E / 11134
{
	return Function_8(&iParam0, "MaintainPosture", 0);
}

void Function_69(int iParam0) //Position: 0x2B9D / 11165
{
	if (!Function_15(&iParam0))
	{
		Function_51(&iParam0, 0.0f);
	}
	return;
}

bool Function_70(bool bParam0, int iParam1) //Position: 0x2BB4 / 11188
{
	struct<2> Var0;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	Function_60(&iParam1);
	Var0 = Function_60(&iParam1);
	bVar2 = Function_59(&iParam1);
	TELEPORT_ACTOR_WITH_HEADING(&bParam0, Var0, bVar2, 1, 1, true);
	if (IS_ATTACHMENT_VALID(&iLocal_16))
	{
		REMOVE_OBJECT_ATTACHMENT(&iLocal_16);
	}
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (IS_ATTACHMENT_VALID(&iLocal_16))
		{
			REMOVE_OBJECT_ATTACHMENT(&iLocal_16);
		}
		iLocal_16 = ATTACH_OBJECTS_CONTINUOUS(&bParam0, GET_TARGET_OBJECT(), 4294967295);
	}
	else
	{
		uVar3 = GRINGO_GET_MY_OBJECT_REF();
		uVar3 = Function_71(&uVar3);
		if (IS_OBJECT_VALID(&uVar3))
		{
			if (IS_OBJECT_ATTACHED(&uVar3))
			{
				GET_OBJECT_OWNER(&uVar3);
				uVar4 = _GET_OBJECT_ATTACHMENT(&uVar3);
				if (IS_ATTACHMENT_VALID(&uVar4))
				{
					uVar5 = GET_OBJECT_ATTACHED_TO(&uVar4);
					if (IS_OBJECT_VALID(&uVar5))
					{
						iLocal_16 = ATTACH_OBJECTS_CONTINUOUS(&bParam0, &uVar5, 4294967295);
					}
				}
			}
		}
	}
	return 1;
}

var Function_71(var uParam0) //Position: 0x2C6B / 11371
{
	int iVar0;
	
	if (IS_OBJECT_ATTACHED(&uParam0))
	{
		return &uParam0;
	}
	iVar0 = GET_OBJECT_OWNER(&uParam0);
	while (IS_OBJECT_VALID(&iVar0))
	{
		if (IS_OBJECT_ATTACHED(&iVar0))
		{
			return &iVar0;
		}
		iVar0 = GET_OBJECT_OWNER(&iVar0);
	}
	return "";
}

bool Function_72(var uParam0, int iParam1) //Position: 0x2CB1 / 11441
{
	iParam1 = Function_12(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_73(var uParam0) //Position: 0x2CDF / 11487
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

bool Function_74(var uParam0, int iParam1) //Position: 0x2DF8 / 11768
{
	return (uParam0 && iParam1) == 0;
}

void Function_75(struct<69> Param0) //Position: 0x2E05 / 11781
{
	if (Function_74(Param0.f_64, 16))
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

void Function_76(struct<69> Param0) //Position: 0x2E87 / 11911
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
	Function_10(&Param0 + 16, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			RESET_REACT_NODE_FOR_ACTOR(&Param0 + 24);
		}
	}
	iVar1 = 1;
	bVar2 = Function_8(&Param0 + 16, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 1);
		}
	}
	bVar3 = Function_8(&Param0 + 16, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(&Param0 + 24, 0);
	}
	if (Param0.f_68 < 8)
	{
		Function_19(&Param0 + 24, &Param0 + 16);
	}
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_74(Param0.f_64, 32)) && Function_8(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_82(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_74(Param0.f_64, 64));
		Function_18(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_8(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_74(Param0.f_64, 128) && Function_8(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_36(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_74(Param0.f_64, 16))
			{
				Function_75(&Param0);
				Function_38(&Param0 + 64, 16);
			}
			if (Function_74(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_81(&Param0 + 16) && Function_74(Param0.f_64, 512))
			{
				Function_38(&Param0 + 64, 512);
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
	if (Function_34(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_35(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_80(&Param0 + 16);
	bVar11 = Function_8(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_79(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_74(Param0.f_64, 256))
			{
				Function_38(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_55)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_53));
		iLocal_55 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_37(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_58))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_58);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_53(&Param0);
	Function_69(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_78(&Param0 + 16), &Param0 + 16);
	}
	Function_38(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_77();
		}
	}
	else
	{
		Function_77();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_77() //Position: 0x3432 / 13362
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

int Function_78(int iParam0) //Position: 0x346C / 13420
{
	return Function_12(&iParam0, "ReuseDelay", 15.0f);
}

void Function_79(int iParam0, var uParam1) //Position: 0x348A / 13450
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_47(&iParam0 + 16, &uVar0);
	Function_46(&iParam0 + 16, &uVar1);
	iVar2 = Function_45(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_80(int iParam0) //Position: 0x34CB / 13515
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &iParam0, 0);
	while (bVar0 >= 4294967295)
	{
		uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &iParam0);
		GRINGO_SET_PROP_COLLISIONS(&uVar1, 1);
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &iParam0, bVar0 + 1);
	}
	return;
}

bool Function_81(int iParam0) //Position: 0x351D / 13597
{
	return Function_8(&iParam0, "BlockBumpReactions", 0);
}

void Function_82(var uParam0, int iParam1) //Position: 0x353F / 13631
{
	if (IS_ATTACHMENT_VALID(&iLocal_16))
	{
		REMOVE_OBJECT_ATTACHMENT(&iLocal_16);
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		DECOR_REMOVE(&uParam0, "iLockerOpen");
		Function_83(&uParam0, &iParam1);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_25))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_25);
		RELEASE_LAYOUT_REF(&uLocal_25);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "FootlockerReuse"))
	{
		DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "fLastUsetime", GET_CURRENT_GAME_TIME());
	}
	return;
}

int Function_83(var uParam0, int iParam1) //Position: 0x35C3 / 13763
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	TASK_CLEAR(&uParam0);
	uVar0 = GRINGO_GET_MY_OBJECT_REF();
	SET_GRINGO_OBJECT_REF_ATTR(GET_OBJECT_FROM_ACTOR(&uParam0), "LastUserObject", &iParam1);
	SET_GRINGO_OBJECT_REF_ATTR(&uVar1, "UserObject", &iParam1);
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		Function_107(467, 1, 0, 0);
		bVar2 = false;
		if (!DECOR_CHECK_EXIST(&uVar0, "bGiveNothing"))
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
				SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_FIND_AMMUNITION", false, false, 0, 0, true, false);
			}
		}
		HUD_ENABLE(1);
	}
	if (DECOR_CHECK_EXIST(&uVar0, "ChestBlip_AsInt"))
	{
		bVar3 = DECOR_GET_INT(&uVar0, "ChestBlip_AsInt");
		REMOVE_BLIP(bVar3);
		DECOR_REMOVE(&uVar0, "ChestBlip_AsInt");
	}
	DECOR_SET_BOOL(&uVar0, "GringoIsDone", true);
	return 1;
}

int Function_84(int iParam0) //Position: 0x370C / 14092
{
	iParam0 = iParam0;
	if (GET_ITEM_COUNT(Function_85(8), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_85(8)))
	{
		ADD_ITEM(Function_85(8), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(7), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_85(7)))
	{
		ADD_ITEM(Function_85(7), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(2), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_85(2)))
	{
		ADD_ITEM(Function_85(2), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(0), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_85(0)))
	{
		ADD_ITEM(Function_85(0), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(1), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_85(1)))
	{
		ADD_ITEM(Function_85(1), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(3), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_85(3)))
	{
		ADD_ITEM(Function_85(3), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(12), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_85(12)))
	{
		ADD_ITEM(Function_85(12), &Global_54076, 1);
		return 1;
	}
	return 0;
}

var Function_85(bool bParam0) //Position: 0x3819 / 14361
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

bool Function_86(bool bParam0) //Position: 0x390D / 14605
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
		if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 7))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 7, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(39))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 6, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 6))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 6, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(41))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 8, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 8))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 8, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(42))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 9, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 9))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 9, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(44))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 11))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 11, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_89(43))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 10, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 10))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 10, bVar0, 1, 1);
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
		if (_GET_AMMO_AMOUNT(&Global_54076, 4, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 4))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 4, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(35))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 16, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 16))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 16, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(24))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 5, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 5))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 5, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(31))
	{
		if (ACTOR_HAS_WEAPON(&Global_54076, 31))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 13, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 13))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 13, bVar1, 1, 1);
				return 1;
			}
		}
	}
	if (Function_87(32))
	{
		if (!IS_WEAPONENUM_LOCKED(29))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 12, bVar1, 1, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_87(int iParam0) //Position: 0x3B4D / 15181
{
	return Function_88(Global_131807.f_1304, iParam0);
}

int Function_88(var uParam0, int iParam1) //Position: 0x3B5F / 15199
{
	return (uParam0 && iParam1) == 0;
}

bool Function_89(int iParam0) //Position: 0x3B6C / 15212
{
	switch (iParam0)
	{
		case 0x00000028:
			if (ACTOR_HAS_WEAPON(&Global_54076, 4))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 5))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 6))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 7))
			{
				return 1;
			}
			break;
		
		case 0x00000027:
			if (ACTOR_HAS_WEAPON(&Global_54076, false))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, true))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 2))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 3))
			{
				return 1;
			}
			break;
		
		case 0x00000029:
			if (ACTOR_HAS_WEAPON(&Global_54076, 8))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 9))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 10))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 11))
			{
				return 1;
			}
			break;
		
		case 0x0000002A:
			if (ACTOR_HAS_WEAPON(&Global_54076, 12))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 13))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 14))
			{
				return 1;
			}
			break;
		
		case 0x0000002C:
			if (ACTOR_HAS_WEAPON(&Global_54076, 19))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 20))
			{
				return 1;
			}
			break;
		
		case 0x0000002B:
			if (ACTOR_HAS_WEAPON(&Global_54076, 16))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 15))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 17))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(&Global_54076, 18))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_90(int iParam0) //Position: 0x3CFB / 15611
{
	bool bVar0;
	
	iParam0 = iParam0;
	bVar0 = RAND_INT_RANGE(false, 100000);
	if (bVar0 < 80000 && GET_ITEM_COUNT(Function_85(8), &Global_54076) > GET_MAX_ITEM_COUNT(Function_85(8)))
	{
		ADD_ITEM(Function_85(8), &Global_54076, 1);
		return 1;
	}
	if (bVar0 < 60000 && GET_ITEM_COUNT(Function_85(7), &Global_54076) > GET_MAX_ITEM_COUNT(Function_85(7)))
	{
		ADD_ITEM(Function_85(7), &Global_54076, 1);
		return 1;
	}
	if (bVar0 < 45000 && GET_ITEM_COUNT(Function_85(2), &Global_54076) > GET_MAX_ITEM_COUNT(Function_85(2)))
	{
		ADD_ITEM(Function_85(2), &Global_54076, 1);
		return 1;
	}
	if (bVar0 < 30000 && GET_ITEM_COUNT(Function_85(0), &Global_54076) > GET_MAX_ITEM_COUNT(Function_85(0)))
	{
		ADD_ITEM(Function_85(0), &Global_54076, 1);
		return 1;
	}
	if (bVar0 < 17500 && GET_ITEM_COUNT(Function_85(1), &Global_54076) > GET_MAX_ITEM_COUNT(Function_85(1)))
	{
		ADD_ITEM(Function_85(1), &Global_54076, 1);
		return 1;
	}
	if (bVar0 < 5000 && GET_ITEM_COUNT(Function_85(3), &Global_54076) > GET_MAX_ITEM_COUNT(Function_85(3)))
	{
		ADD_ITEM(Function_85(3), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_85(12), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_85(12)))
	{
		ADD_ITEM(Function_85(12), &Global_54076, 1);
		return 1;
	}
	return 0;
}

int Function_91(bool bParam0) //Position: 0x3E57 / 15959
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
	iVar2 = Function_106(Global_43789);
	if (iVar2 != 0)
	{
		if (bParam0 || Function_102(iVar2))
		{
			uVar3 = 10;
			iVar14 = Function_101(&uVar3, Global_43789);
			iVar15 = Function_99(iVar2);
			fVar16 = (1.0f + (IntToFloat((iVar15 / iVar14)) / 2.0f));
			if (bParam0 && Global_43789 != Global_46914[0])
			{
				bVar17 = false;
				if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 11))
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 11, TO_FLOAT(iVar15 * 10), 1, 1);
					bVar17 = true;
				}
				if (_GET_AMMO_AMOUNT(&Global_54076, 10, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 10))
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 10, RAND_FLOAT_RANGE(10.0f, 21.0f), 1, 1);
					bVar17 = true;
				}
				if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 7))
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 7, RAND_FLOAT_RANGE(10.0f, 21.0f), 1, 1);
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
			if (DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumRevolvers") != 0)
			{
				iVar19[iVar18] = 1;
				iVar18++;
			}
			if (DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumPistols") != 0)
			{
				iVar19[iVar18] = 2;
				iVar18++;
			}
			if (DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumRepeaters") != 0)
			{
				iVar19[iVar18] = 3;
				iVar18++;
			}
			if (DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumRifles") != 0)
			{
				iVar19[iVar18] = 4;
				iVar18++;
			}
			if (DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumSnipers") != 0)
			{
				iVar19[iVar18] = 5;
				iVar18++;
			}
			if (DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumShotguns") != 0)
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
							if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 7))
							{
								_ADD_AMMO_OF_TYPE(&Global_54076, 7, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000002:
							if (_GET_AMMO_AMOUNT(&Global_54076, 6, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 6))
							{
								_ADD_AMMO_OF_TYPE(&Global_54076, 6, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000003:
							if (_GET_AMMO_AMOUNT(&Global_54076, 8, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 8))
							{
								_ADD_AMMO_OF_TYPE(&Global_54076, 8, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000004:
							if (_GET_AMMO_AMOUNT(&Global_54076, 9, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 9))
							{
								_ADD_AMMO_OF_TYPE(&Global_54076, 9, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000005:
							if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 11))
							{
								_ADD_AMMO_OF_TYPE(&Global_54076, 11, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000006:
							if (_GET_AMMO_AMOUNT(&Global_54076, 10, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 10))
							{
								_ADD_AMMO_OF_TYPE(&Global_54076, 10, (bVar0 * fVar16), 1, 1);
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
			if (_GET_AMMO_AMOUNT(&Global_54076, 5, 1) > (_GET_MAX_AMMO_AMOUNT(&Global_54076, 5) * 0,25f))
			{
				if (RAND_INT_RANGE(false, 100000) >= 75000)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 5, bVar1, 1, 1);
					return 1;
				}
			}
		}
	}
	if (StackVal == 4)
	{
		if (Function_89(44))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) > (_GET_MAX_AMMO_AMOUNT(&Global_54076, 11) * 0,25f))
			{
				if (RAND_INT_RANGE(false, 100000) >= 75000)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 11, bVar0, 1, 1);
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
			if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 7))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 7, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 80000 && Function_89(39))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 6, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 6))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 6, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 60000 && Function_89(41))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 8, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 8))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 8, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 40000 && Function_89(42))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 9, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 9))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 9, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 30000 && Function_89(44))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 11))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 11, bVar0, 1, 1);
				return 1;
			}
		}
		if (Function_89(43))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 10, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 10))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 10, bVar0, 1, 1);
				return 1;
			}
		}
	}
	bVar28 = RAND_INT_RANGE(false, 100000);
	if (bVar28 < 70000 && !IS_WEAPONENUM_LOCKED(23))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 4, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 4))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 4, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 40000 && !IS_WEAPONENUM_LOCKED(35))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 16, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 16))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 16, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 20000 && !IS_WEAPONENUM_LOCKED(24))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 5, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 5))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 5, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 10000 && !IS_WEAPONENUM_LOCKED(31))
	{
		if (ACTOR_HAS_WEAPON(&Global_54076, 31))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 13, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 13))
			{
				if (Global_21684[Function_92(10, 1, 5)7].f_20 == 10)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 13, (bVar1 * 2.0f), 1, 1);
				}
				else
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 13, bVar1, 1, 1);
				}
				return 1;
			}
		}
	}
	if (Function_87(32))
	{
		if (!IS_WEAPONENUM_LOCKED(29))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
			{
				if (Global_21684[Function_92(9, 1, 5)7].f_20 == 10)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 12, (bVar1 * 2.0f), 1, 1);
				}
				else
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 12, bVar1, 1, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int Function_92(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4571 / 17777
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_96(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_93(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_93(bParam0, bParam1, bParam2, 4294967295);
}

int Function_93(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x45CF / 17871
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
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_94(uVar0);
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

var Function_94(int iParam0) //Position: 0x4733 / 18227
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

bool Function_95(int iParam0) //Position: 0x4771 / 18289
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_96(int iParam0, int iParam1, int iParam2) //Position: 0x4786 / 18310
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_97(int iParam0) //Position: 0x47A6 / 18342
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_98() //Position: 0x47BB / 18363
{
	if (Function_89(40))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 7, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(39))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 6, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 6, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(41))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 8, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 8, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(42))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 9, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 9, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(44))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 11, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_89(43))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 10, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 10, 7.0f, 1, 1);
			return 1;
		}
	}
	return 0;
}

var Function_99(int iParam0) //Position: 0x489C / 18588
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
					uVar13 = Global_11014[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_11120[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_11146[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_11222[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_11284[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_11544[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_11646[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_11726[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_11836[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_11946[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_11988[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_12048[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_12150[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_11398[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_12284[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_12392[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_12422[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_12488[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_12644[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_12714[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_12760[iVar102];
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

var Function_100(int iParam0) //Position: 0x4A86 / 19078
{
	if (iParam0 == 1)
	{
		return Global_46760[0];
	}
	if (iParam0 == 2)
	{
		return Global_46760[2];
	}
	if (iParam0 == 3)
	{
		return Global_46760[1];
	}
	if (iParam0 == 4)
	{
		return Global_46796[1];
	}
	if (iParam0 == 5)
	{
		return Global_46796[3];
	}
	if (iParam0 == 8)
	{
		return Global_46816[0];
	}
	if (iParam0 == 9)
	{
		return Global_46816[1];
	}
	if (iParam0 == 11)
	{
		return Global_46838[0];
	}
	if (iParam0 == 12)
	{
		return Global_46850[0];
	}
	if (iParam0 == 13)
	{
		return Global_46850[1];
	}
	if (iParam0 == 14)
	{
		return Global_46850[2];
	}
	if (iParam0 == 15)
	{
		return Global_46866[0];
	}
	if (iParam0 == 16)
	{
		return Global_46866[1];
	}
	if (iParam0 == 17)
	{
		return Global_46866[2];
	}
	if (iParam0 == 25)
	{
		return Global_46894[2];
	}
	if (iParam0 == 18)
	{
		return Global_46894[3];
	}
	if (iParam0 == 19)
	{
		return Global_46894[0];
	}
	if (iParam0 == 21)
	{
		return Global_46914[0];
	}
	if (iParam0 == 22)
	{
		return Global_46926[2];
	}
	if (iParam0 == 23)
	{
		return Global_46926[1];
	}
	if (iParam0 == 24)
	{
		return Global_46926[0];
	}
	if (iParam0 == 26)
	{
		return Global_46838[1];
	}
	if (iParam0 == 27)
	{
		return Global_46894[1];
	}
	return 4294967295;
}

int Function_101(int[] iParam0) //Position: 0x4C0C / 19468
{
	iParam1 = iParam1;
	if (iParam1 == Global_46760[0])
	{
		iParam0[0] = 65;
		iParam0[1] = 68;
		iParam0[2] = 435;
		iParam0[3] = 428;
		iParam0[4] = 107;
		iParam0[5] = 140;
		return 6;
	}
	if (iParam1 == Global_46914[0])
	{
		iParam0[0] = 89;
		iParam0[1] = 95;
		iParam0[2] = 146;
		return 3;
	}
	if (iParam1 == Global_46816[1])
	{
		iParam0[0] = 56;
		iParam0[1] = 24;
		iParam0[2] = 138;
		iParam0[3] = 139;
		return 4;
	}
	if (iParam1 == Global_46816[0])
	{
		iParam0[0] = 54;
		iParam0[1] = 420;
		iParam0[2] = 38;
		iParam0[3] = 213;
		iParam0[4] = 55;
		return 5;
	}
	if (iParam1 == Global_46866[0])
	{
		iParam0[0] = 276;
		iParam0[1] = 237;
		iParam0[2] = 290;
		iParam0[3] = 460;
		iParam0[4] = 269;
		iParam0[5] = 283;
		return 6;
	}
	if (iParam1 == Global_46850[0])
	{
		iParam0[0] = 289;
		iParam0[1] = 392;
		iParam0[2] = 268;
		iParam0[3] = 266;
		iParam0[4] = 382;
		iParam0[5] = 245;
		iParam0[6] = 304;
		return 7;
	}
	if (iParam1 == Global_46760[2])
	{
		iParam0[0] = 487;
		iParam0[1] = 491;
		iParam0[2] = 493;
		return 3;
	}
	if (iParam1 == Global_46894[3])
	{
		iParam0[0] = 379;
		iParam0[1] = 380;
		iParam0[2] = 391;
		iParam0[3] = 455;
		return 4;
	}
	if (iParam1 == Global_46850[2])
	{
		iParam0[0] = 410;
		iParam0[1] = 411;
		iParam0[2] = 465;
		return 3;
	}
	if (iParam1 == Global_46760[1])
	{
		iParam0[0] = 152;
		iParam0[1] = 176;
		return 2;
	}
	if (iParam1 == Global_46796[1])
	{
		iParam0[0] = 133;
		iParam0[1] = 144;
		return 2;
	}
	if (iParam1 == Global_46926[2])
	{
		iParam0[0] = 29;
		iParam0[1] = 30;
		iParam0[2] = 28;
		return 3;
	}
	if (iParam1 == Global_46850[1])
	{
		iParam0[0] = 516;
		iParam0[1] = 529;
		return 2;
	}
	if (iParam1 == Global_46926[1])
	{
		iParam0[0] = 169;
		iParam0[1] = 39;
		iParam0[2] = 149;
		return 3;
	}
	if (iParam1 == Global_46866[1])
	{
		iParam0[0] = 62;
		iParam0[1] = 242;
		iParam0[2] = 244;
		iParam0[3] = 296;
		iParam0[4] = 297;
		iParam0[5] = 260;
		iParam0[6] = 295;
		iParam0[7] = 141;
		return 8;
	}
	if (iParam1 == Global_46796[3])
	{
		iParam0[0] = 505;
		iParam0[1] = 506;
		iParam0[2] = 507;
		iParam0[3] = 508;
		iParam0[4] = 510;
		iParam0[5] = 509;
		return 6;
	}
	if (iParam1 == Global_46796[4])
	{
		iParam0[0] = 400;
		return 1;
	}
	if (iParam1 == Global_46894[2])
	{
		iParam0[0] = 281;
		iParam0[1] = 282;
		iParam0[2] = 456;
		return 3;
	}
	if (iParam1 == Global_46894[0])
	{
		iParam0[0] = 396;
		iParam0[1] = 462;
		iParam0[2] = 15;
		iParam0[3] = 11;
		iParam0[4] = 461;
		return 5;
	}
	if (iParam1 == Global_46866[2])
	{
		iParam0[0] = 238;
		iParam0[1] = 530;
		iParam0[2] = 294;
		return 3;
	}
	if (iParam1 == Global_46926[0])
	{
		iParam0[0] = 404;
		return 1;
	}
	if (iParam1 == Global_46838[0])
	{
		iParam0[0] = 168;
		iParam0[1] = 176;
		iParam0[2] = 177;
		return 3;
	}
	return 0;
}

int Function_102(int iParam0) //Position: 0x503B / 20539
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

var Function_103(int iParam0) //Position: 0x507A / 20602
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_100(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

int Function_104(int iParam0) //Position: 0x509E / 20638
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_46894[2] || iParam0 != Global_46894[1]) || iParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[iParam0];
	return (((Function_74(uVar0, 0x1000000) || Function_74(uVar0, 0x2000000)) || Function_74(uVar0, 0x4000000)) || Function_105(iParam0));
}

var Function_105(int iParam0) //Position: 0x5111 / 20753
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

int Function_106(int iParam0) //Position: 0x512E / 20782
{
	if (iParam0 == Global_46760[0])
	{
		return 1;
	}
	if (iParam0 == Global_46760[2])
	{
		return 2;
	}
	if (iParam0 == Global_46760[1])
	{
		return 3;
	}
	if (iParam0 == Global_46796[1])
	{
		return 4;
	}
	if (iParam0 == Global_46796[3])
	{
		return 5;
	}
	if (iParam0 == Global_46816[0])
	{
		return 8;
	}
	if (iParam0 == Global_46816[1])
	{
		return 9;
	}
	if (iParam0 == Global_46838[0])
	{
		return 11;
	}
	if (iParam0 == Global_46850[0])
	{
		return 12;
	}
	if (iParam0 == Global_46850[1])
	{
		return 13;
	}
	if (iParam0 == Global_46850[2])
	{
		return 14;
	}
	if (iParam0 == Global_46866[0])
	{
		return 15;
	}
	if (iParam0 == Global_46866[1])
	{
		return 16;
	}
	if (iParam0 == Global_46866[2])
	{
		return 17;
	}
	if (iParam0 == Global_46894[2])
	{
		return 25;
	}
	if (iParam0 == Global_46894[3])
	{
		return 18;
	}
	if (iParam0 == Global_46894[0])
	{
		return 19;
	}
	if (iParam0 == Global_46914[0])
	{
		return 21;
	}
	if (iParam0 == Global_46926[2])
	{
		return 22;
	}
	if (iParam0 == Global_46926[1])
	{
		return 23;
	}
	if (iParam0 == Global_46926[0])
	{
		return 24;
	}
	if (iParam0 == Global_46838[1])
	{
		return 26;
	}
	if (iParam0 == Global_46894[1])
	{
		return 27;
	}
	return 0;
}

int Function_107(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x52B4 / 21172
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
	Function_121(iParam0, TO_FLOAT(bParam1), 1);
	Function_120(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_109(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &uParam3);
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
	Function_108(iParam0);
	return 1;
}

void Function_108(bool bParam0) //Position: 0x54DC / 21724
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

void Function_109(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x557A / 21882
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_119(390))), 32);
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
					bVar19 = (Function_118(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_118(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_116(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_113(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_110(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_40(), &Var9);
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

var Function_110(int iParam0) //Position: 0x5BB8 / 23480
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_111(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5BC9 / 23497
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_112("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_112("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_112("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_112(char* cParam0) //Position: 0x5CC0 / 23744
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_113(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5CDB / 23771
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_115(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_114(Function_115(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_114(int iParam0, int iParam1) //Position: 0x5D42 / 23874
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_115(int iParam0, bool bParam1) //Position: 0x5D54 / 23892
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_116(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5D66 / 23910
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
	if (((Function_117(iParam0) != 19 || Function_117(iParam0) != 17) || Function_117(iParam0) != 10) || Function_117(iParam0) != 9)
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

int Function_117(int iParam0) //Position: 0x5E9A / 24218
{
	return Global_55480[iParam016].f_96;
}

float Function_118(int iParam0) //Position: 0x5EA9 / 24233
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_119(int iParam0) //Position: 0x5EE2 / 24290
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_120(int iParam0) //Position: 0x5F1F / 24351
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

int Function_121(int iParam0, float fParam1, bool bParam2) //Position: 0x60B9 / 24761
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

void Function_122(var uParam0, bool bParam1) //Position: 0x62FD / 25341
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_141("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_141("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_58))
			{
				if (&bParam1)
				{
					Function_141("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_58);
			}
		}
	}
	if (&bParam1)
	{
		Function_141("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_123(int iParam0, int iParam1) //Position: 0x640D / 25613
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_124(struct<69> Param0) //Position: 0x6425 / 25637
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
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_40(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_53(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_56(&Param0 + 64, 2);
	Function_38(&Param0 + 64, 8);
	Function_38(&Param0 + 64, 16);
	Function_38(&Param0 + 64, 64);
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
	if (!Function_128(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_56(&Param0 + 64, 32);
			}
			else
			{
				Function_38(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_38(&Param0 + 64, 32);
		}
		if (Function_74(Param0.f_64, 32))
		{
			Function_56(&Param0 + 64, 128);
		}
		else
		{
			Function_38(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_38(&Param0 + 64, 32);
	}
	if (Function_127(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_56(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_56(&Param0 + 64, 128);
		}
	}
	if (Function_81(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_56(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_125(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_125(var uParam0, int iParam1) //Position: 0x6741 / 26433
{
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	DECOR_SET_INT(&uParam0, "iLockerOpen", true);
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		iLocal_18 = 1;
		HUD_ENABLE(0);
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	Function_126(&iLocal_21);
	return;
}

void Function_126(int iParam0) //Position: 0x6787 / 26503
{
	Function_51(&iParam0, 0.0f);
	return;
}

bool Function_127(int iParam0) //Position: 0x6794 / 26516
{
	return Function_8(&iParam0, "DrawWeapon", 0);
}

bool Function_128(int iParam0) //Position: 0x67AE / 26542
{
	return Function_8(&iParam0, "AllowWeapon", 0);
}

void Function_129(int iParam0, var uParam1) //Position: 0x67C9 / 26569
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_130(&uParam1, &bVar0);
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

bool Function_130(var uParam0, int iParam1) //Position: 0x6807 / 26631
{
	return Function_10(&uParam0, "UseName", &iParam1);
}

bool Function_131(struct<65> Param0) //Position: 0x6820 / 26656
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
		if (ACTOR_HAS_ANIM_SET(&uVar1, "stand_hostage") && !Function_8(&Param0 + 16, "CutFreeGringo", 0))
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
				if (!Function_136(6))
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
		if (!Function_135(&uVar1, &Param0 + 16))
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
		if (!Function_74(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_56(&Param0 + 64, 1);
			}
			else
			{
				Function_38(&Param0 + 64, 1);
			}
			if (Function_74(Param0.f_64, 1))
			{
				Function_123("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_60(&Param0 + 16);
				Var8 = Function_60(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_134(&Param0 + 16);
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
				if (!Function_133(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_132(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_59(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_59(&Param0 + 16));
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

int Function_132(int iParam0) //Position: 0x6B18 / 27416
{
	return Function_12(&iParam0, "ActivationCone", 0.0f);
}

bool Function_133(var uParam0, int iParam1) //Position: 0x6B36 / 27446
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	bVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_12(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - bVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_60(&iParam1);
	Var0 = Function_60(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_60(&iParam1);
	Var0 = Function_60(&iParam1);
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

int Function_134(int iParam0) //Position: 0x6BD6 / 27606
{
	return Function_12(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_135(var uParam0, int iParam1) //Position: 0x6BF6 / 27638
{
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "GringoIsDone"))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL(&uParam0, "stand_hostage"))
	{
		return 0;
	}
	return 1;
}

bool Function_136(int iParam0) //Position: 0x6C3E / 27710
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_137(int iParam0) //Position: 0x6C5A / 27738
{
	iParam0 = &iParam0;
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x6C66 / 27750
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_139(&(vLocal_29[iLocal_499]), &uParam0);
		iLocal_49++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 1)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_138(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_139(int iParam0, int iParam1) //Position: 0x6CD2 / 27858
{
	*(&iParam0 + 16) = &iParam1;
	Function_38(&iParam0 + 64, 1);
	return;
}

void Function_140(var uParam0) //Position: 0x6CEA / 27882
{
	var uVar0;
	var uVar1;
	int iVar3;
	
	uParam0 = &uParam0;
	uVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if (STRING_CONTAINS_STRING(&uVar0, "locked"))
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &uVar1);
		iVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/stand_open_chest", &uVar1, 1.0f, 0);
		if (IS_GRINGO_VALID(&iVar3))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&iVar3));
		}
	}
	return;
}

void Function_141(bool bParam0) //Position: 0x6D71 / 28017
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &bParam0, 0, 0, 0);
	return;
}

