//Decompiled with MagicRDR v1.0
//Function Count : 163
//Statics Count : 50
//Natives Count : 277
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	bool bLocal_9 = false;
	bool bLocal_10 = false;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	bool bLocal_13 = false;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	struct<9> Local_17[1];
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
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	var uLocal_47 = 0;
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
	
	iLocal_0 = 1;
	iLocal_1 = 0;
	iLocal_2 = 0;
	bLocal_3 = false;
	iLocal_4 = 0;
	bLocal_9 = 0.0f;
	bLocal_10 = 0.0f;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_162("STARTS");
	Function_161(&uScriptParam_0);
	iLocal_37 = 0;
	Function_159(&uScriptParam_0, &iLocal_37);
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
			GET_OBJECT_POSITION(&uVar1, &uLocal_38);
		}
		iVar2 = 0;
		bLocal_45 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_37 - 1))
			{
				if (&vLocal_17[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_37;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_45 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_148(&(vLocal_17[iVar39]), &bVar4))
						{
							Function_146(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_17[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_148(&(vLocal_17[iVar39]), &bVar4))
						{
							Function_146(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_17[iVar39] + 16);
							if (bVar4)
							{
								Function_142(&(vLocal_17[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_17[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_141("eGRINGO_EndUse: Stop use by request", &vLocal_17[iVar39] + 24);
							Function_140(&vLocal_17[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_17[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_17[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_17[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_17[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_84(&(vLocal_17[iVar39]), 0);
							}
							else if (vLocal_17[iVar39].f_68 < 8)
							{
								Function_83(&(vLocal_17[iVar39]));
								vLocal_17[iVar39].f_68 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_162("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_37 - 1))
			{
				if (Function_82(vLocal_17[iVar09].f_64, 2))
				{
					if (!Function_16(&(vLocal_17[iVar09])))
					{
						Function_162("Quitting due to update end");
						Function_84(&(vLocal_17[iVar09]), 1);
					}
				}
				if (Function_15(&(vLocal_17[iVar09]), 0))
				{
					Function_5(&(vLocal_17[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_37 - 1))
		{
			if (Function_82(vLocal_17[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_45)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_46))
	{
		Function_162("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_46);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_37 - 1))
	{
		if (Function_82(vLocal_17[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_17[iVar09] + 24);
			Function_84(&(vLocal_17[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_17[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_17[iVar09] + 16);
		}
		Function_15(&(vLocal_17[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_162("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x44B / 1099
{
	iParam0 = &iParam0;
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x457 / 1111
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

int Function_3() //Position: 0x499 / 1177
{
	return 200;
}

int Function_4(int iParam0) //Position: 0x4A1 / 1185
{
	iParam0 = &iParam0;
	return 0;
}

void Function_5(struct<69> Param0) //Position: 0x4AE / 1198
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_82(Param0.f_64, 2))
	{
		Function_140(&Param0 + 24, 0);
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
								bLocal_45 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_46))
								{
									Function_162("ManagePlayerQuit: Create quit context");
									if (Function_7(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_46 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_46 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_46))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_83(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_46))
									{
										Function_162("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_46);
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
										Function_83(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_46))
										{
											Function_162("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_46);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_46))
							{
								Function_162("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_46);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_46))
		{
			Function_162("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_46);
		}
	}
	return;
}

bool Function_6(int iParam0) //Position: 0x7E2 / 2018
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

bool Function_7(bool bParam0, var uParam1, int iParam2) //Position: 0x8FB / 2299
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

bool Function_8(char* cParam0, int iParam1) //Position: 0x919 / 2329
{
	return Function_9(&cParam0, "UseQuit", &iParam1);
}

bool Function_9(char* cParam0, char* cParam1, int iParam2) //Position: 0x932 / 2354
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
			return &iLocal_15;
		}
		return &iVar1;
	}
	return &iLocal_15;
}

float Function_10(int iParam0) //Position: 0x982 / 2434
{
	return Function_11(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_11(bool bParam0, var uParam1, int iParam2) //Position: 0x9A0 / 2464
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &bParam0);
	return iVar0;
}

float Function_12(vector3 vParam0) //Position: 0x9B8 / 2488
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

bool Function_13(int iParam0) //Position: 0xA85 / 2693
{
	return Function_82(iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xA93 / 2707
{
	return Function_82(iParam0, 1);
}

bool Function_15(int iParam0, int iParam1) //Position: 0xAA1 / 2721
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

bool Function_16(struct<69> Param0) //Position: 0xAEE / 2798
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
	
	bVar11 = Function_81(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_141("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_7(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_141("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_141("Incapacitation quit", &Param0 + 24);
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
			bLocal_45 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_80(&Param0 + 16, &fVar22))
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
						bLocal_3 = true;
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_78(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_77(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_77(&Param0);
			}
			if (!Function_76(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_45 = true;
			Function_75(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_82(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_62(&Param0 + 16);
			}
			fVar18 = Function_61(&Param0 + 16);
			if (Function_12(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_82(Param0.f_64, 1))
			{
				Function_56(&Param0 + 16, &Var3, &uVar5);
				if (!Function_82(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_55(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_55(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_54());
				}
				if (!Function_82(Param0.f_64, 1024))
				{
					Function_55(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_78(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_82(Param0.f_64, 1024))
				{
					Function_55(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_82(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_55(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_55(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_82(Param0.f_64, 32))
			{
				bLocal_45 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_53(&Param0 + 16);
			bLocal_45 = true;
			Function_52(&Param0);
			Function_49(&Param0, Function_51(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_82(Param0.f_64, 1);
			}
			bVar0 = Function_48(&Param0 + 24, &Param0 + 16, bVar29);
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
							Function_47(&bVar1, &Param0 + 24);
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
											Function_47(&bVar1, &Param0 + 24);
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
					Function_38(&Param0, &uVar7, &iLocal_43, &uLocal_41);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_55(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_37(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_82(Param0.f_64, 16))
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
				if (Function_36(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_35(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_34(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_33(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_34(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_32(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_34(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_31(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_55(&Param0 + 64, 8);
					}
					else
					{
						Function_37(&Param0 + 64, 8);
					}
					if (Function_82(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_37(&Param0 + 64, 8);
				}
				if (Function_30(&Param0 + 16))
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
				Function_29(&Param0 + 24, &Param0 + 16);
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
				Function_28();
			}
			Param0.f_68 = 6;
			if (Function_82(Param0.f_64, 1))
			{
				if (Function_27(&Param0 + 16))
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
			bVar0 = Function_48(&Param0 + 24, &Param0 + 16, Function_82(Param0.f_64, 1));
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
			Function_162("nRewarding");
			Function_22(&Param0 + 24, &Param0 + 16);
			Function_21(&Param0 + 24, &Param0 + 16);
			Function_20(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_55(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_45 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_7(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_62(&Param0 + 16);
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
			if (Function_82(Param0.f_64, 1024))
			{
				Function_37(&Param0 + 64, 1024);
				if (!Function_7(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_45 = true;
			bVar0 = Function_48(&Param0 + 24, &Param0 + 16, Function_82(Param0.f_64, 1));
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

void Function_17(var uParam0, int iParam1) //Position: 0x1E26 / 7718
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1E3D / 7741
{
	uParam1 = &uParam1;
	if (iLocal_1 && IS_OBJECT_VALID(&bLocal_13))
	{
		if (Function_12(&uLocal_5) <= 1.0f)
		{
			SET_ACTOR_HEADING(&uParam0, bLocal_9, 1);
			DESTROY_OBJECT(&bLocal_13);
			CAMERA_RESET(0);
		}
	}
	return;
}

bool Function_19() //Position: 0x1E72 / 7794
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

void Function_20(var uParam0, int iParam1) //Position: 0x1EA5 / 7845
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

void Function_21(var uParam0, int iParam1) //Position: 0x1F23 / 7971
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

void Function_22(int iParam0, int iParam1) //Position: 0x1F9F / 8095
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_23(int iParam0) //Position: 0x1FB1 / 8113
{
	return Function_11(&iParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1FC8 / 8136
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_25(int iParam0) //Position: 0x1FD5 / 8149
{
	return Function_11(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_26(int iParam0, bool bParam1) //Position: 0x1FF6 / 8182
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return 1;
}

bool Function_27(bool bParam0) //Position: 0x2009 / 8201
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_28() //Position: 0x2029 / 8233
{
	return;
}

void Function_29(int iParam0, bool bParam1) //Position: 0x202F / 8239
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_30(char* cParam0) //Position: 0x2041 / 8257
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_31(int iParam0) //Position: 0x204E / 8270
{
	return Function_7(&iParam0, "OneShotKill", 0);
}

bool Function_32(char* cParam0, int iParam1) //Position: 0x2069 / 8297
{
	return Function_9(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_33(int iParam0) //Position: 0x2089 / 8329
{
	return Function_7(&iParam0, "LinkToParentAnim", 0);
}

var Function_34(int iParam0) //Position: 0x20A9 / 8361
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_17 - 1))
	{
		if (&vLocal_17[iVar09] + 16 == &iParam0)
		{
			return &vLocal_17[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_35(int iParam0) //Position: 0x20E0 / 8416
{
	return Function_7(&iParam0, "LinkParentToAnim", 0);
}

bool Function_36(int iParam0) //Position: 0x2100 / 8448
{
	return Function_7(&iParam0, "SingularUse", 0);
}

void Function_37(int iParam0, int iParam1) //Position: 0x211B / 8475
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2131 / 8497
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
	uVar2 = Function_46(&iParam0 + 16, &bVar0);
	uVar3 = Function_45(&iParam0 + 16, &bVar1);
	uVar4 = Function_44(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_43(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_42(&iParam0 + 16, &bVar7);
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
			Function_41();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_40(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_39(), Function_40(&iParam0 + 16, &iVar10), 0, bVar9);
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
					Function_41();
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

var Function_39() //Position: 0x2455 / 9301
{
	int iVar0;
	
	return &iVar0;
}

bool Function_40(char* cParam0, int iParam1) //Position: 0x245E / 9310
{
	return Function_9(&cParam0, "TargetLocator", &iParam1);
}

void Function_41() //Position: 0x247D / 9341
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_42(char* cParam0, int iParam1) //Position: 0x248C / 9356
{
	return Function_9(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_43(char* cParam0, int iParam1) //Position: 0x24B0 / 9392
{
	return Function_9(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_44(int iParam0) //Position: 0x24D6 / 9430
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_45(var uParam0, int iParam1) //Position: 0x24F4 / 9460
{
	return Function_9(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_46(var uParam0, int iParam1) //Position: 0x2516 / 9494
{
	return Function_9(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_47(bool bParam0, int iParam1) //Position: 0x2538 / 9528
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

var Function_48(var uParam0, int iParam1, bool bParam2) //Position: 0x2600 / 9728
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

void Function_49(int iParam0, float fParam1) //Position: 0x267C / 9852
{
	if (!Function_14(&iParam0))
	{
		Function_50(&iParam0, fParam1);
	}
	return;
}

void Function_50(vector3 vParam0) //Position: 0x2694 / 9876
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_55(&vParam0, 1);
	Function_37(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_51(int iParam0) //Position: 0x26B9 / 9913
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(&iParam0, "RandUseTime", 0.0f));
}

void Function_52(vector3 vParam0) //Position: 0x26DA / 9946
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_53(var uParam0) //Position: 0x26F1 / 9969
{
	uParam0 = &uParam0;
	return;
}

int Function_54() //Position: 0x26FD / 9981
{
	return 1;
}

void Function_55(var uParam0, int iParam1) //Position: 0x2704 / 9988
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_56(int iParam0, var uParam1, int iParam2) //Position: 0x2715 / 10005
{
	bool bVar0;
	
	Function_59(&iParam0);
	uParam1 = Function_59(&iParam0);
	iParam2 = Function_58(&iParam0);
	bVar0 = Function_57(&iParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

int Function_57(int iParam0) //Position: 0x275A / 10074
{
	return Function_11(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_58(int iParam0) //Position: 0x2786 / 10118
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_59(int iParam0) //Position: 0x2792 / 10130
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_60(&iParam0))
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

bool Function_60(int iParam0) //Position: 0x2894 / 10388
{
	return Function_7(&iParam0, "UsePosActorRelative", 0);
}

int Function_61(int iParam0) //Position: 0x28B7 / 10423
{
	return Function_11(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_62(bool bParam0) //Position: 0x28DF / 10463
{
	struct<8> Var0;
	struct<2> Var8;
	struct<2> Var10;
	struct<2> Var12;
	
	bParam0 = &bParam0;
	if (!bLocal_3)
	{
		if (iLocal_1 && !iLocal_2)
		{
			iLocal_2 = 1;
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("LootCorpse_Layout") };
			uLocal_11 = CREATE_LAYOUT(&Var0);
			Function_72(GRINGO_GET_MY_OBJECT_REF());
			Var8 = Function_72(GRINGO_GET_MY_OBJECT_REF());
			Function_71(&Global_54076);
			Var10 = Function_71(&Global_54076);
			Var12 = Vector(StackVal, StackVal, StackVal) - Vector(Var10, Var8, StackVal);
			bLocal_10 = UNK_0x9C40E671(&Var12);
			VNORMALIZE(&Var12);
			Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var12, Var10, StackVal) * Vector(-0,45f, -0,45f, -0,45f), StackVal, StackVal);
			if (FABS((bLocal_10 - Function_70(&Global_54076))) < 40.0f)
			{
				SET_ACTOR_HEADING(&Global_54076, bLocal_10, 1);
			}
			Function_69(&uLocal_5);
			if (RAND_INT_RANGE(false, 100000) <= 50000)
			{
				bLocal_13 = Function_66(&uLocal_11, 0, &Global_54076, 1, 0, 0);
			}
			else
			{
				bLocal_13 = Function_63(&uLocal_11, 0, &Global_54076, 1, 0, 0);
			}
		}
	}
	return;
}

var Function_63(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x29B8 / 10680
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_39(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Z_LOOT_CORPSE2", 1, 1);
	}
	Function_64(&uVar0, &uParam2);
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

void Function_64(var uParam0, var uParam1) //Position: 0x2A43 / 10819
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_65(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 1000.0f, 0);
	return;
}

void Function_65(var uParam0, bool bParam1) //Position: 0x2A73 / 10867
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 35.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,65f, 0,5f, -0,85f), Vector(8,594367f, -122.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_66(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x2B0D / 11021
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_39(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Z_LOOT_CORPSE2", 1, 1);
	}
	Function_67(&uVar0, &uParam2);
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

void Function_67(var uParam0, int iParam1) //Position: 0x2B98 / 11160
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_68(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 1000.0f, 0);
	return;
}

void Function_68(int iParam0, int iParam1) //Position: 0x2BC8 / 11208
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(0,75f, 0,5f, -0,75f), Vector(8,594367f, 114,5916f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &iParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

void Function_69(int iParam0) //Position: 0x2C62 / 11362
{
	Function_50(&iParam0, 0.0f);
	return;
}

float Function_70(int iParam0) //Position: 0x2C6F / 11375
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_71(int iParam0) //Position: 0x2C7B / 11387
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_72(bool bParam0) //Position: 0x2C8D / 11405
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

struct<32> Function_73(char* cParam0) //Position: 0x2CB6 / 11446
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("0", &cVar8, ""), 4);
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

struct<32> Function_74(char* cParam0) //Position: 0x2D22 / 11554
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_75(int iParam0) //Position: 0x2D44 / 11588
{
	iParam0 = &iParam0;
	return;
}

bool Function_76(int iParam0) //Position: 0x2D50 / 11600
{
	return Function_7(&iParam0, "MaintainPosture", 0);
}

void Function_77(int iParam0) //Position: 0x2D6F / 11631
{
	if (!Function_14(&iParam0))
	{
		Function_50(&iParam0, 0.0f);
	}
	return;
}

bool Function_78(int iParam0, int iParam1) //Position: 0x2D86 / 11654
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	struct<2> Var8;
	
	iParam1 = &iParam1;
	RAND_SET_SEED(ROUND(GET_CURRENT_GAME_TIME()));
	Function_72(GRINGO_GET_MY_OBJECT_REF());
	Var0 = Function_72(GRINGO_GET_MY_OBJECT_REF());
	Function_71(&iParam0);
	Var2 = Function_71(&iParam0);
	Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var0, StackVal);
	bLocal_10 = UNK_0x9C40E671(&Var8);
	VNORMALIZE(&Var8);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var8, Var2, StackVal) * Vector(-0,25f, -0,25f, -0,25f), StackVal, StackVal);
	if (FABS((bLocal_10 - Function_70(&iParam0))) < 40.0f)
	{
		SET_ACTOR_HEADING(&iParam0, bLocal_10, 1);
	}
	FIND_GROUND_INTERSECTION(&Var2, 0,1f, &Var4, &uVar6);
	if (!Function_79(StackVal, Var4))
	{
		SET_OBJECT_POSITION(&iParam0, Var4);
	}
	return 1;
}

bool Function_79(vector3 vParam0) //Position: 0x2E1C / 11804
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_80(var uParam0, int iParam1) //Position: 0x2E34 / 11828
{
	iParam1 = Function_11(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_81(var uParam0) //Position: 0x2E62 / 11874
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

bool Function_82(var uParam0, int iParam1) //Position: 0x2F7B / 12155
{
	return (uParam0 && iParam1) == 0;
}

void Function_83(struct<69> Param0) //Position: 0x2F88 / 12168
{
	if (Function_82(Param0.f_64, 16))
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

void Function_84(struct<69> Param0) //Position: 0x300A / 12298
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
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_82(Param0.f_64, 32)) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_90(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_82(Param0.f_64, 64));
		Function_17(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_7(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_82(Param0.f_64, 128) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_35(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_82(Param0.f_64, 16))
			{
				Function_83(&Param0);
				Function_37(&Param0 + 64, 16);
			}
			if (Function_82(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_89(&Param0 + 16) && Function_82(Param0.f_64, 512))
			{
				Function_37(&Param0 + 64, 512);
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
	if (Function_33(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_34(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_88(&Param0 + 16);
	bVar11 = Function_7(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_87(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_82(Param0.f_64, 256))
			{
				Function_37(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_43)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_41));
		iLocal_43 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_36(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_46))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_46);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_52(&Param0);
	Function_77(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_86(&Param0 + 16), &Param0 + 16);
	}
	Function_37(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_85();
		}
	}
	else
	{
		Function_85();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_85() //Position: 0x35B5 / 13749
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

int Function_86(int iParam0) //Position: 0x35EF / 13807
{
	return Function_11(&iParam0, "ReuseDelay", 15.0f);
}

void Function_87(int iParam0, var uParam1) //Position: 0x360D / 13837
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_46(&iParam0 + 16, &uVar0);
	Function_45(&iParam0 + 16, &uVar1);
	iVar2 = Function_44(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_88(int iParam0) //Position: 0x364E / 13902
{
	iParam0 = &iParam0;
	return;
}

bool Function_89(int iParam0) //Position: 0x365A / 13914
{
	return Function_7(&iParam0, "BlockBumpReactions", 0);
}

void Function_90(var uParam0, int iParam1) //Position: 0x367C / 13948
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	iParam1 = &iParam1;
	uVar0 = GET_TARGET_OBJECT();
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_PLAYER(&uParam0))
		{
			DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
			return;
		}
		bVar1 = false;
		bVar2 = false;
		iVar3 = 0;
		bVar4 = true;
		if (DECOR_CHECK_EXIST(&uVar0, "iSpecificItem"))
		{
			bVar5 = DECOR_GET_INT(&uVar0, "iSpecificItem");
			if (GET_ITEM_COUNT(Function_139(bVar5), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_139(bVar5)))
			{
				ADD_ITEM(Function_139(bVar5), &Global_54076, 1);
				bVar1 = true;
			}
			DECOR_REMOVE(&uVar0, "iSpecificItem");
		}
		if (!bVar1)
		{
			if (GET_OBJECT_TYPE(&uVar0) == 29)
			{
				bVar6 = GET_CORPSE_ACTOR_ENUM(&uVar0);
			}
			else
			{
				bVar6 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar0));
			}
			bVar7 = (bVar6 <= 1263 && bVar6 >= 1267);
			bVar8 = (bVar6 <= 1240 && bVar6 >= 1251);
			bVar9 = (bVar6 <= 1204 && bVar6 >= 1254);
			if ((bVar9 || bVar7) || DECOR_GET_BOOL(&uVar0, "Zombie"))
			{
				if (bVar8 || bVar7)
				{
					if (Function_138(bVar6))
					{
						iVar3 = 1;
						bVar4 = false;
					}
				}
				else
				{
					if (DECOR_CHECK_EXIST(&uVar0, "bZombieCorpseArmed"))
					{
						DECOR_REMOVE(&uVar0, "bZombieCorpseArmed");
						bVar2 = Function_122(0);
						if (!bVar2)
						{
							bVar2 = Function_118(0);
						}
					}
					if (!bVar2)
					{
						if (!IS_WEAPONENUM_LOCKED(34))
						{
							bVar10 = false;
							if (DECOR_CHECK_EXIST(&uVar0, "ReducedZombieLoot"))
							{
								if (!DECOR_CHECK_EXIST(&uVar0, "Zombie_NoHead"))
								{
									if (RAND_INT_RANGE(false, 100000) <= 50000)
									{
										bVar10 = (RAND_INT_RANGE(false, 10000) % 10) + 1;
										if ((Function_117(604) + TO_FLOAT(bVar10)) < 99.0f)
										{
											bVar10 = FLOOR((99.0f - Function_117(604)));
										}
										if (bVar10 >= 0)
										{
											Function_112(604, bVar10);
											iVar3 = 1;
										}
									}
									else
									{
										bVar10 = (RAND_INT_RANGE(false, 10000) % 2) + 1;
										if ((Function_117(605) + TO_FLOAT(bVar10)) < 99.0f)
										{
											bVar10 = FLOOR((99.0f - Function_117(605)));
										}
										if (bVar10 >= 0)
										{
											Function_112(605, bVar10);
											iVar3 = 1;
										}
									}
								}
								else
								{
									bVar10 = (RAND_INT_RANGE(false, 10000) % 5) + 3;
									if ((Function_117(607) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_117(607)));
									}
									if (bVar10 >= 0)
									{
										Function_112(607, bVar10);
										iVar3 = 1;
									}
								}
							}
							else if (!DECOR_CHECK_EXIST(&uVar0, "Zombie_NoHead"))
							{
								bVar10 = (RAND_INT_RANGE(false, 10000) % 5) + 1;
								if ((Function_117(607) + TO_FLOAT(bVar10)) < 99.0f)
								{
									bVar10 = FLOOR((99.0f - Function_117(607)));
								}
								if (bVar10 >= 0)
								{
									Function_112(607, bVar10);
									iVar3 = 1;
								}
								if (RAND_INT_RANGE(false, 1000) <= 500)
								{
									bVar10 = (RAND_INT_RANGE(false, 10000) % 2) + 1;
									if ((Function_117(605) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_117(605)));
									}
									if (bVar10 >= 0)
									{
										Function_112(605, bVar10);
										iVar3 = 1;
									}
								}
								if (RAND_INT_RANGE(false, 1000) <= 333)
								{
									bVar10 = true;
									if ((Function_117(606) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_117(606)));
									}
									if (bVar10 >= 0)
									{
										Function_112(606, bVar10);
										iVar3 = 1;
									}
								}
								if (RAND_INT_RANGE(false, 1000) <= 333)
								{
									bVar10 = (RAND_INT_RANGE(false, 10000) % 2) + 1;
									if ((Function_117(608) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_117(608)));
									}
									if (bVar10 >= 0)
									{
										Function_112(608, bVar10);
										iVar3 = 1;
									}
								}
								if (RAND_INT_RANGE(false, 1000) <= 500)
								{
									bVar10 = (RAND_INT_RANGE(false, 10000) % 5) + 2;
									if ((Function_117(607) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_117(607)));
									}
									if (bVar10 >= 0)
									{
										Function_112(607, bVar10);
										iVar3 = 1;
									}
								}
							}
							else
							{
								bVar10 = (RAND_INT_RANGE(false, 10000) % 5) + 3;
								if ((Function_117(607) + TO_FLOAT(bVar10)) < 99.0f)
								{
									bVar10 = FLOOR((99.0f - Function_117(607)));
								}
								if (bVar10 >= 0)
								{
									Function_112(607, bVar10);
									iVar3 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (DECOR_CHECK_EXIST(&uVar0, "HitsByThrowingKnife"))
		{
			bVar11 = DECOR_GET_INT(&uVar0, "HitsByThrowingKnife");
			if (bVar11 != 0)
			{
				_ADD_AMMO_OF_TYPE(&uParam0, GET_AMMO_ENUM(25), TO_FLOAT(bVar11), 1, 1);
				bVar1 = true;
			}
		}
		if (DECOR_CHECK_EXIST(&uVar0, "HitsByTomahawk"))
		{
			bVar12 = DECOR_GET_INT(&uVar0, "HitsByTomahawk");
			if (bVar12 != 0)
			{
				_ADD_AMMO_OF_TYPE(&uParam0, GET_AMMO_ENUM(29), TO_FLOAT(bVar12), 1, 1);
				bVar1 = true;
			}
		}
		if (DECOR_CHECK_EXIST(&uVar0, "LootType"))
		{
			DECOR_SET_INT(&uParam0, "LootType", DECOR_GET_INT(&uVar0, "LootType"));
		}
		if ((bVar1 || bVar2) || iVar3)
		{
			if (bLocal_3 && iLocal_0)
			{
				iLocal_0 = 0;
				PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
			}
			if (bVar4)
			{
				Function_98(609, 1, 0, 0);
			}
			if (bVar2)
			{
				if (!Function_97(Global_119934, 1048576))
				{
					Function_92(&Global_54076, 1048576, 1, 0);
				}
			}
			else if (iVar3 && bVar4)
			{
				if (!Function_97(Global_119934, 2097152))
				{
					Function_92(&Global_54076, 2097152, 1, 0);
				}
			}
		}
		else
		{
			SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_LOOT_NO_LUCK", false, false, 0, 0, true, false);
		}
		Function_91(&uVar0);
	}
	return;
}

void Function_91(int iParam0) //Position: 0x3C9E / 15518
{
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam0));
	}
	if (IS_LAYOUTREF_VALID(&uLocal_11))
	{
		if (IS_OBJECT_VALID(&bLocal_13))
		{
			DESTROY_OBJECT(&bLocal_13);
		}
		iLocal_2 = 1;
		DESTROY_LAYOUT_OBJECTS(&uLocal_11);
		DESTROY_LAYOUT(&uLocal_11);
	}
	DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	return;
}

void Function_92(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3CE6 / 15590
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_94(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_93(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_93(char* cParam0) //Position: 0x3D5B / 15707
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

bool Function_94(int iParam0, var uParam1, int iParam2) //Position: 0x3D95 / 15765
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
		if (Function_96(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_95(uVar0))
		{
			case 0x00000002:
				if (!Function_97(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_95(char* cParam0) //Position: 0x3E11 / 15889
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

int Function_96(int iParam0) //Position: 0x3EB2 / 16050
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

bool Function_97(var uParam0, int iParam1) //Position: 0x3EEF / 16111
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_98(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3F02 / 16130
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
	Function_111(iParam0, TO_FLOAT(bParam1), 1);
	Function_110(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_100(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_99(iParam0);
	return 1;
}

void Function_99(bool bParam0) //Position: 0x4162 / 16738
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

void Function_100(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x4200 / 16896
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_109(390))), 32);
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
						Function_107(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_104(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_102(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_101(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_39(), &Var9);
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

var Function_101(int iParam0) //Position: 0x483E / 18494
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_102(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x484F / 18511
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_103("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_103("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_103("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_103(char* cParam0) //Position: 0x4946 / 18758
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_104(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4961 / 18785
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_106(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_105(Function_106(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_105(int iParam0, int iParam1) //Position: 0x49C8 / 18888
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_106(int iParam0, bool bParam1) //Position: 0x49DA / 18906
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_107(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x49EC / 18924
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
	if (((Function_108(iParam0) != 19 || Function_108(iParam0) != 17) || Function_108(iParam0) != 10) || Function_108(iParam0) != 9)
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

int Function_108(int iParam0) //Position: 0x4B20 / 19232
{
	return Global_55480[iParam016].f_96;
}

var Function_109(int iParam0) //Position: 0x4B2F / 19247
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_110(int iParam0) //Position: 0x4B6C / 19308
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

int Function_111(int iParam0, float fParam1, bool bParam2) //Position: 0x4D06 / 19718
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

int Function_112(int iParam0, bool bParam1) //Position: 0x4F4A / 20298
{
	bool bVar0;
	int iVar1;
	
	Function_98(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_116(iParam0, 4294967295);
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
	iVar1 = Function_113();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_113() //Position: 0x50F6 / 20726
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
	Function_114();
	return 0;
}

void Function_114() //Position: 0x5197 / 20887
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
		Function_115(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_115(int iParam0) //Position: 0x5255 / 21077
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

var Function_116(int iParam0, int iParam1) //Position: 0x52BB / 21179
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

float Function_117(int iParam0) //Position: 0x5300 / 21248
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

bool Function_118(bool bParam0) //Position: 0x5339 / 21305
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
	if (Function_121(40))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 7))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 7, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_121(39))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 6, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 6))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 6, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_121(41))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 8, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 8))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 8, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_121(42))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 9, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 9))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 9, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_121(44))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 11))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 11, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_121(43))
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
	if (Function_119(32))
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

bool Function_119(int iParam0) //Position: 0x5579 / 21881
{
	return Function_120(Global_131807.f_1304, iParam0);
}

int Function_120(var uParam0, int iParam1) //Position: 0x558B / 21899
{
	return (uParam0 && iParam1) == 0;
}

bool Function_121(int iParam0) //Position: 0x5598 / 21912
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

int Function_122(bool bParam0) //Position: 0x5727 / 22311
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
	iVar2 = Function_137(Global_43789);
	if (iVar2 != 0)
	{
		if (bParam0 || Function_133(iVar2))
		{
			uVar3 = 10;
			iVar14 = Function_132(&uVar3, Global_43789);
			iVar15 = Function_130(iVar2);
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
				if (Function_129())
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
	if (Function_128(22) && !Function_128(23))
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
		if (Function_121(44))
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
		if (Function_129())
		{
			return 1;
		}
	}
	if (RAND_INT_RANGE(false, 100000) >= 20000)
	{
		bVar27 = RAND_INT_RANGE(false, 100000);
		if (bVar27 < 90000 && Function_121(40))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 7))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 7, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 80000 && Function_121(39))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 6, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 6))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 6, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 60000 && Function_121(41))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 8, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 8))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 8, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 40000 && Function_121(42))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 9, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 9))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 9, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 30000 && Function_121(44))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 11))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 11, bVar0, 1, 1);
				return 1;
			}
		}
		if (Function_121(43))
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
				if (Global_21684[Function_123(10, 1, 5)7].f_20 == 10)
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
	if (Function_119(32))
	{
		if (!IS_WEAPONENUM_LOCKED(29))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
			{
				if (Global_21684[Function_123(9, 1, 5)7].f_20 == 10)
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

int Function_123(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5E40 / 24128
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_127(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_124(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_124(bParam0, bParam1, bParam2, 4294967295);
}

int Function_124(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5E9E / 24222
{
	var uVar0;
	
	if (!Function_126(bParam2))
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
	uVar0 = Function_127(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_125(uVar0);
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

var Function_125(int iParam0) //Position: 0x6002 / 24578
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

bool Function_126(int iParam0) //Position: 0x6040 / 24640
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_127(int iParam0, int iParam1, int iParam2) //Position: 0x6055 / 24661
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_128(int iParam0) //Position: 0x6075 / 24693
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_129() //Position: 0x608A / 24714
{
	if (Function_121(40))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 7, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_121(39))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 6, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 6, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_121(41))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 8, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 8, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_121(42))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 9, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 9, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_121(44))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 11, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 11, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_121(43))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, 10, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 10, 7.0f, 1, 1);
			return 1;
		}
	}
	return 0;
}

var Function_130(int iParam0) //Position: 0x616B / 24939
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_131(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_132(&iVar1, iVar0);
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
			if (!Function_82(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

var Function_131(int iParam0) //Position: 0x6355 / 25429
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

int Function_132(int[] iParam0) //Position: 0x64DB / 25819
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

int Function_133(int iParam0) //Position: 0x690A / 26890
{
	int iVar0;
	
	iVar0 = Function_131(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_135(iVar0) || Function_134(iParam0));
}

var Function_134(int iParam0) //Position: 0x6949 / 26953
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_131(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

int Function_135(int iParam0) //Position: 0x696D / 26989
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
	return (((Function_82(uVar0, 0x1000000) || Function_82(uVar0, 0x2000000)) || Function_82(uVar0, 0x4000000)) || Function_136(iParam0));
}

var Function_136(int iParam0) //Position: 0x69E0 / 27104
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

int Function_137(int iParam0) //Position: 0x69FD / 27133
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

bool Function_138(int iParam0) //Position: 0x6B83 / 27523
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = false;
	iVar1 = 0;
	bVar2 = RAND_INT_RANGE(false, 10000);
	bVar3 = RAND_INT_RANGE(false, 10000);
	bVar4 = RAND_INT_RANGE(false, 10000);
	if (iParam0 == 1244)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_117(616) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(616)));
		}
		if (bVar0 >= 0)
		{
			Function_112(616, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2);
			if ((Function_117(615) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(615)));
			}
			if (bVar0 >= 0)
			{
				Function_112(615, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
			if ((Function_117(617) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(617)));
			}
			if (bVar0 >= 0)
			{
				Function_112(617, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_117(618) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(618)));
			}
			if (bVar0 >= 0)
			{
				Function_112(618, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(619, 1, 0, 0);
	}
	else if (iParam0 == 1241)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_117(621) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(621)));
		}
		if (bVar0 >= 0)
		{
			Function_112(621, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2);
			if ((Function_117(620) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(620)));
			}
			if (bVar0 >= 0)
			{
				Function_112(620, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
			if ((Function_117(622) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(622)));
			}
			if (bVar0 >= 0)
			{
				Function_112(622, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_117(623) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(623)));
			}
			if (bVar0 >= 0)
			{
				Function_112(623, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(624, 1, 0, 0);
	}
	else if (iParam0 == 1242)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_117(626) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(626)));
		}
		if (bVar0 >= 0)
		{
			Function_112(626, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2);
			if ((Function_117(625) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(625)));
			}
			if (bVar0 >= 0)
			{
				Function_112(625, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
			if ((Function_117(627) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(627)));
			}
			if (bVar0 >= 0)
			{
				Function_112(627, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_117(628) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(628)));
			}
			if (bVar0 >= 0)
			{
				Function_112(628, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(629, 1, 0, 0);
	}
	else if (iParam0 == 1246)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_117(611) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(611)));
		}
		if (bVar0 >= 0)
		{
			Function_112(611, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2);
			if ((Function_117(610) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(610)));
			}
			if (bVar0 >= 0)
			{
				Function_112(610, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
			if ((Function_117(612) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(612)));
			}
			if (bVar0 >= 0)
			{
				Function_112(612, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_117(613) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(613)));
			}
			if (bVar0 >= 0)
			{
				Function_112(613, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(614, 1, 0, 0);
	}
	else if (iParam0 == 1247)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_117(645) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(645)));
		}
		if (bVar0 >= 0)
		{
			Function_112(645, bVar0);
			iVar1 = 1;
		}
		Function_98(646, 1, 0, 0);
	}
	else if (iParam0 <= 1248 && iParam0 >= 1251)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_117(630) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(630)));
		}
		if (bVar0 >= 0)
		{
			Function_112(630, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = true;
			if ((Function_117(631) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(631)));
			}
			if (bVar0 >= 0)
			{
				Function_112(631, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(632, 1, 0, 0);
	}
	else if (iParam0 == 1240)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_117(647) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(647)));
		}
		if (bVar0 >= 0)
		{
			Function_112(647, bVar0);
			iVar1 = 1;
		}
		if (bVar3 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_117(648) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(648)));
			}
			if (bVar0 >= 0)
			{
				Function_112(648, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(649, 1, 0, 0);
	}
	else if (iParam0 == 1243)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_117(650) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(650)));
		}
		if (bVar0 >= 0)
		{
			Function_112(650, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_117(651) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(651)));
			}
			if (bVar0 >= 0)
			{
				Function_112(651, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(652, 1, 0, 0);
	}
	else if (iParam0 == 1245)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_117(653) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(653)));
		}
		if (bVar0 >= 0)
		{
			Function_112(653, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_117(654) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(654)));
			}
			if (bVar0 >= 0)
			{
				Function_112(654, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(655, 1, 0, 0);
	}
	else if (iParam0 == 1266)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_117(634) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(634)));
		}
		if (bVar0 >= 0)
		{
			Function_112(634, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_117(635) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(635)));
			}
			if (bVar0 >= 0)
			{
				Function_112(635, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_117(633) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(633)));
			}
			if (bVar0 >= 0)
			{
				Function_112(633, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_117(636) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(636)));
			}
			if (bVar0 >= 0)
			{
				Function_112(636, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(637, 1, 0, 0);
	}
	else if (iParam0 == 1267)
	{
		bVar0 = true;
		if ((Function_117(642) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(642)));
		}
		if (bVar0 >= 0)
		{
			Function_112(642, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = true;
			if ((Function_117(643) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(643)));
			}
			if (bVar0 >= 0)
			{
				Function_112(643, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(644, 1, 0, 0);
	}
	else if (iParam0 <= 1263 && iParam0 >= 1265)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
		if ((Function_117(639) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_117(639)));
		}
		if (bVar0 >= 0)
		{
			Function_112(639, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_117(638) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(638)));
			}
			if (bVar0 >= 0)
			{
				Function_112(638, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 2500)
		{
			bVar0 = true;
			if ((Function_117(640) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_117(640)));
			}
			if (bVar0 >= 0)
			{
				Function_112(640, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(641, 1, 0, 0);
	}
	return iVar1;
}

var Function_139(bool bParam0) //Position: 0x7632 / 30258
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

void Function_140(var uParam0, bool bParam1) //Position: 0x7726 / 30502
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
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_46))
			{
				if (&bParam1)
				{
					Function_162("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_46);
			}
		}
	}
	if (&bParam1)
	{
		Function_162("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_141(int iParam0, int iParam1) //Position: 0x7836 / 30774
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_142(struct<69> Param0) //Position: 0x784E / 30798
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
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_39(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_52(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_55(&Param0 + 64, 2);
	Function_37(&Param0 + 64, 8);
	Function_37(&Param0 + 64, 16);
	Function_37(&Param0 + 64, 64);
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
				Function_55(&Param0 + 64, 32);
			}
			else
			{
				Function_37(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_37(&Param0 + 64, 32);
		}
		if (Function_82(Param0.f_64, 32))
		{
			Function_55(&Param0 + 64, 128);
		}
		else
		{
			Function_37(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_37(&Param0 + 64, 32);
	}
	if (Function_144(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_55(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_55(&Param0 + 64, 128);
		}
	}
	if (Function_89(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_55(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_143(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_143(var uParam0, int iParam1) //Position: 0x7B6A / 31594
{
	bool bVar0;
	
	iLocal_2 = 0;
	iParam1 = &iParam1;
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		iLocal_1 = 1;
		bLocal_9 = Function_70(&uParam0);
		if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "IsMale"))
		{
			if (RAND_INT_RANGE(false, 100000) <= 33000)
			{
				bVar0 = DECOR_GET_BOOL(GET_TARGET_OBJECT(), "IsMale");
				if (bVar0)
				{
					SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_LOOTING_ZOMBIE_M", true, true, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_LOOTING_ZOMBIE_F", true, true, 0, 0, true, false);
				}
			}
			DECOR_REMOVE(GET_TARGET_OBJECT(), "IsMale");
		}
	}
	return;
}

bool Function_144(int iParam0) //Position: 0x7C25 / 31781
{
	return Function_7(&iParam0, "DrawWeapon", 0);
}

bool Function_145(int iParam0) //Position: 0x7C3F / 31807
{
	return Function_7(&iParam0, "AllowWeapon", 0);
}

void Function_146(int iParam0, var uParam1) //Position: 0x7C5A / 31834
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

bool Function_147(var uParam0, int iParam1) //Position: 0x7C98 / 31896
{
	return Function_9(&uParam0, "UseName", &iParam1);
}

bool Function_148(struct<65> Param0) //Position: 0x7CB1 / 31921
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
		if (!Function_82(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_55(&Param0 + 64, 1);
			}
			else
			{
				Function_37(&Param0 + 64, 1);
			}
			if (Function_82(Param0.f_64, 1))
			{
				Function_141("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_59(&Param0 + 16);
				Var8 = Function_59(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_151(&Param0 + 16);
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
				if (!Function_150(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_149(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_58(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_58(&Param0 + 16));
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

int Function_149(int iParam0) //Position: 0x7FA9 / 32681
{
	return Function_11(&iParam0, "ActivationCone", 0.0f);
}

bool Function_150(var uParam0, int iParam1) //Position: 0x7FC7 / 32711
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
	Function_59(&iParam1);
	Var0 = Function_59(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_59(&iParam1);
	Var0 = Function_59(&iParam1);
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

int Function_151(int iParam0) //Position: 0x8068 / 32872
{
	return Function_11(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_152(int iParam0, int iParam1) //Position: 0x8088 / 32904
{
	iParam1 = &iParam1;
	if (IS_ACTOR_ON_BOAT(&iParam0))
	{
		return 0;
	}
	if (Function_153(&iParam0, 0, 0))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "zombieB/Melee_AI/Strike/Grab") || IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "zombieC/Melee_AI/Strike/Grab"))
	{
		return 0;
	}
	if (!iLocal_4)
	{
		if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "Corpse_loot_gringo"))
		{
			if (!DECOR_GET_BOOL(GET_TARGET_OBJECT(), "Corpse_loot_gringo"))
			{
				iLocal_4 = 1;
				return 0;
			}
		}
	}
	return 0;
	if (Global_53579 != 4294967295)
	{
		if (TRAIN_GET_LOD_LEVEL(Global_53579) != 1 && TRAIN_GET_NUM_CARS(Global_53579) < 0)
		{
			if (TRAIN_GET_VELOCITY(Global_53579) < 0.0f)
			{
				if (IS_ACTOR_ON_TRAIN(&iParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (Global_53578 != 4294967295)
	{
		if (TRAIN_GET_LOD_LEVEL(Global_53578) != 1 && TRAIN_GET_NUM_CARS(Global_53578) < 0)
		{
			if (TRAIN_GET_VELOCITY(Global_53578) < 0.0f)
			{
				if (IS_ACTOR_ON_TRAIN(&iParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool Function_153(int iParam0, bool bParam1, bool bParam2) //Position: 0x81AE / 33198
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_156(&iParam0))
	{
		return 1;
	}
	if (Function_155(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_154())
	{
		return 1;
	}
	return 0;
}

bool Function_154() //Position: 0x8272 / 33394
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_155(int iParam0) //Position: 0x8289 / 33417
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_156(int iParam0) //Position: 0x8295 / 33429
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

bool Function_157(int iParam0) //Position: 0x82A4 / 33444
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_158(int iParam0) //Position: 0x82C0 / 33472
{
	iParam0 = &iParam0;
	return;
}

void Function_159(var uParam0, int iParam1) //Position: 0x82CC / 33484
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_160(&(vLocal_17[iLocal_379]), &uParam0);
		iLocal_37++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 1)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_159(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_160(int iParam0, int iParam1) //Position: 0x8338 / 33592
{
	*(&iParam0 + 16) = &iParam1;
	Function_37(&iParam0 + 64, 1);
	return;
}

void Function_161(int iParam0) //Position: 0x8350 / 33616
{
	iParam0 = &iParam0;
	return;
}

void Function_162(bool bParam0) //Position: 0x835C / 33628
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &bParam0, 0, 0, 0);
	return;
}

