//Decompiled with MagicRDR v1.0
//Function Count : 111
//Statics Count : 133
//Natives Count : 236
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	struct<9> Local_10[6];
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
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	bool bLocal_128 = false;
	bool bLocal_129 = false;
	var uLocal_130 = 0;
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
	
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_110("STARTS");
	Function_109(&uScriptParam_0);
	iLocal_120 = 0;
	Function_107(&uScriptParam_0, &iLocal_120);
	while (IS_GRINGO_ACTIVE())
	{
		Function_106(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_121);
		}
		iVar2 = 0;
		bLocal_128 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_120 - 1))
			{
				if (&vLocal_10[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_120;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_128 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_95(&(vLocal_10[iVar39]), &bVar4))
						{
							Function_93(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_10[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_95(&(vLocal_10[iVar39]), &bVar4))
						{
							Function_93(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_10[iVar39] + 16);
							if (bVar4)
							{
								Function_88(&(vLocal_10[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_10[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_87("eGRINGO_EndUse: Stop use by request", &vLocal_10[iVar39] + 24);
							Function_86(&vLocal_10[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_10[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_10[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_10[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_10[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_80(&(vLocal_10[iVar39]), 0);
							}
							else if (vLocal_10[iVar39].f_68 < 8)
							{
								Function_79(&(vLocal_10[iVar39]));
								vLocal_10[iVar39].f_68 = 8;
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
			while (iVar0 < (iLocal_120 - 1))
			{
				if (Function_78(vLocal_10[iVar09].f_64, 2))
				{
					if (!Function_17(&(vLocal_10[iVar09])))
					{
						Function_110("Quitting due to update end");
						Function_80(&(vLocal_10[iVar09]), 1);
					}
				}
				if (Function_16(&(vLocal_10[iVar09]), 0))
				{
					Function_6(&(vLocal_10[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_120 - 1))
		{
			if (Function_78(vLocal_10[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_5(&uScriptParam_0))
		{
			if (bLocal_128)
			{
				GRINGO_WAIT(0);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(0);
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_129))
	{
		Function_110("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_129);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_120 - 1))
	{
		if (Function_78(vLocal_10[iVar09].f_64, 2))
		{
			Function_3("Gringo termination calls StopUse", &vLocal_10[iVar09] + 24);
			Function_80(&(vLocal_10[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_10[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_10[iVar09] + 16);
		}
		Function_16(&(vLocal_10[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_110("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x436 / 1078
{
	var uVar0;
	
	iParam0 = &iParam0;
	Function_2();
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Water_Bucket_User"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Water_Bucket_User");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&uLocal_4), "Water_Bucket_Ref"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&uLocal_4), "Water_Bucket_Ref");
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
	}
	if (IS_ACTOR_VALID(&uLocal_4))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_6, &uLocal_4, true);
		SET_OBJECT_COLLIDE_WITH_MOVABLES(&uLocal_6, 1);
		SET_ACTION_NODE_FOR_ACTOR(&uLocal_4, "carry_bucket/player/pst_interrupt");
		ACTOR_END_FORCE_HOLSTER(&uLocal_4);
		CLEAR_ACTOR_GRINGO_RESTRICTION(&uLocal_4);
		uLocal_4 = "";
	}
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &iParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		SET_GRINGO_INT_ATTR(false, "CurrentState", &uVar0);
	}
	return;
}

void Function_2() //Position: 0x55A / 1370
{
	if (IS_OBJECT_VALID(&iLocal_8))
	{
		DESTROY_OBJECT(&iLocal_8);
	}
	return;
}

void Function_3(bool bParam0, char* cParam1) //Position: 0x56F / 1391
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

int Function_4() //Position: 0x5B1 / 1457
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

int Function_5(int iParam0) //Position: 0x5FB / 1531
{
	iParam0 = &iParam0;
	return 0;
}

void Function_6(struct<69> Param0) //Position: 0x608 / 1544
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_78(Param0.f_64, 2))
	{
		Function_86(&Param0 + 24, 0);
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
								bLocal_128 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_129))
								{
									Function_110("ManagePlayerQuit: Create quit context");
									if (Function_8(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_129 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_129 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_129))
								{
									Function_3("USE CONTEXT QUIT", &Param0 + 24);
									Function_79(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_129))
									{
										Function_110("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_129);
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
										Function_79(&Param0);
										Function_3("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_129))
										{
											Function_110("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_129);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_129))
							{
								Function_110("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_129);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_129))
		{
			Function_110("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_129);
		}
	}
	return;
}

bool Function_7(int iParam0) //Position: 0x93C / 2364
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

bool Function_8(bool bParam0, var uParam1, int iParam2) //Position: 0xA55 / 2645
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

bool Function_9(char* cParam0, int iParam1) //Position: 0xA73 / 2675
{
	return Function_10(&cParam0, "UseQuit", &iParam1);
}

bool Function_10(char* cParam0, char* cParam1, int iParam2) //Position: 0xA8C / 2700
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

float Function_11(int iParam0) //Position: 0xADC / 2780
{
	return Function_12(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_12(bool bParam0, var uParam1, int iParam2) //Position: 0xAFA / 2810
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &bParam0);
	return iVar0;
}

float Function_13(vector3 vParam0) //Position: 0xB12 / 2834
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

bool Function_14(int iParam0) //Position: 0xBDF / 3039
{
	return Function_78(iParam0, 2);
}

bool Function_15(int iParam0) //Position: 0xBED / 3053
{
	return Function_78(iParam0, 1);
}

bool Function_16(int iParam0, int iParam1) //Position: 0xBFB / 3067
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

bool Function_17(struct<69> Param0) //Position: 0xC48 / 3144
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
	
	bVar11 = Function_77(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_87("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_8(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_87("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_87("Incapacitation quit", &Param0 + 24);
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
			bLocal_128 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_76(&Param0 + 16, &fVar22))
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
						Function_3("Skip to eRewarding", &Param0 + 24);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_75(&Param0 + 24, &Param0 + 16))
				{
					Function_3("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_74(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_74(&Param0);
			}
			if (!Function_73(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_3("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_128 = true;
			Function_72(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_78(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_69(&Param0 + 16);
			}
			fVar18 = Function_68(&Param0 + 16);
			if (Function_13(&Param0) < fVar18)
			{
				Function_3("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_78(Param0.f_64, 1))
			{
				Function_63(&Param0 + 16, &Var3, &uVar5);
				if (!Function_78(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_3("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_62(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_3("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_62(&Param0 + 64, 16);
					}
				}
				Function_3("MID ACTION TELEPORT", &Param0 + 24);
				Var26.f_4 = uVar5;
				if (DECOR_CHECK_EXIST(&Param0 + 24, "NoTeleport"))
				{
					SET_OBJECT_POSITION(&Param0 + 24, Var3);
					SET_OBJECT_ORIENTATION(&Param0 + 24, Var26);
					DECOR_REMOVE(&Param0 + 24, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_61());
				}
				if (!Function_78(Param0.f_64, 1024))
				{
					Function_62(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_8(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_75(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_3("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_78(Param0.f_64, 1024))
				{
					Function_62(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_8(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_78(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_3("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_62(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_3("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_62(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_78(Param0.f_64, 32))
			{
				bLocal_128 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_3("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_60(&Param0 + 16);
			bLocal_128 = true;
			Function_59(&Param0);
			Function_56(&Param0, Function_58(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_78(Param0.f_64, 1);
			}
			bVar0 = Function_55(&Param0 + 24, &Param0 + 16, bVar29);
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
							Function_54(&bVar1, &Param0 + 24);
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
											Function_54(&bVar1, &Param0 + 24);
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
				Function_3("KICKED TO DOING START", &Param0 + 24);
				uVar7 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(&uVar7))
				{
					Function_45(&Param0, &uVar7, &iLocal_126, &uLocal_124);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_62(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_44(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_78(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_3("SCHEDULE STOP CUSTOM UNSUSPEND", &Param0 + 24);
						UNK_0x4A1D2E25(&Param0 + 24);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_3("SCHEDULE STOP CUSTOM UNFIX", &Param0 + 24);
						UNK_0x817B6952(&Param0 + 24);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 1);
				if (Function_43(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_42(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_41(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_40(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_41(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_39(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_41(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_38(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_62(&Param0 + 64, 8);
					}
					else
					{
						Function_44(&Param0 + 64, 8);
					}
					if (Function_78(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_44(&Param0 + 64, 8);
				}
				if (Function_37(&Param0 + 16))
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
				Function_36(&Param0 + 24, &Param0 + 16);
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
				Function_35();
			}
			Param0.f_68 = 6;
			if (Function_78(Param0.f_64, 1))
			{
				if (Function_34(&Param0 + 16))
				{
					Function_3("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_33(&Param0 + 24, &Param0 + 16))
			{
				Function_3("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_55(&Param0 + 24, &Param0 + 16, Function_78(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &bVar0))
				{
					Function_3("ANIMATION QUIT DURING USE", &Param0 + 24);
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
				bVar55 = Function_32(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, (&Param0 + 32)) < bVar55)
					{
						Function_3("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_31())
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
					if (Function_30(&Param0 + 16) <= 0.0f)
					{
						if (Function_13(&Param0) < Function_30(&Param0 + 16))
						{
							Function_3("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_110("nRewarding");
			Function_23(&Param0 + 24, &Param0 + 16);
			Function_22(&Param0 + 24, &Param0 + 16);
			Function_21(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_62(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_128 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_8(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_20())
						{
							Function_69(&Param0 + 16);
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
				Function_3("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_3("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_19(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_78(Param0.f_64, 1024))
			{
				Function_44(&Param0 + 64, 1024);
				if (!Function_8(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_128 = true;
			bVar0 = Function_55(&Param0 + 24, &Param0 + 16, Function_78(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &bVar0))
				{
					Function_3("ANIMATION FINISHED", &Param0 + 24);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_18(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_18(var uParam0, int iParam1) //Position: 0x1F7D / 8061
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_19(var uParam0, var uParam1) //Position: 0x1F94 / 8084
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_20() //Position: 0x1FA6 / 8102
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

void Function_21(var uParam0, int iParam1) //Position: 0x1FD9 / 8153
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

void Function_22(var uParam0, int iParam1) //Position: 0x2057 / 8279
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

void Function_23(var uParam0, int iParam1) //Position: 0x20D3 / 8403
{
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	if (GRINGO_COMPONENT_CHECK_NAME("nGet_Water", &iParam1))
	{
		Function_29(&iParam1, 2);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Bucket", &iParam1))
	{
		Function_29(&iParam1, 1);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Toss_Water", &iParam1))
	{
		Function_24(&uParam0, &iParam1);
		Function_29(&iParam1, 1);
	}
	return;
}

int Function_24(float fParam0, int iParam1) //Position: 0x2151 / 8529
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	var uVar5;
	
	uVar0 = GRINGO_GET_PARENT_COMPONENT(&iParam1, 0);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		uVar2 = Function_28(&iParam1);
		Function_26(&fParam0, &iParam1);
		Var3 = Function_26(&fParam0, &iParam1);
		if (COUNT_FLAMES_IN_SPHERE(Var3, uVar2) >= 0)
		{
			uVar5 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(GRINGO_GET_MY_OBJECT_REF(), "water_bucket_steam", "cs_ranch04_fire_out_steam", Var3);
			Function_25();
			UNK_0x6745191B(&uVar5, Function_25());
		}
		STOP_ALL_FIRE_IN_SPHERE(Var3, uVar2);
		return 1;
	}
	LOG_ERROR("WATER_BUCKET_PUT_OUT_FLAMES: failed to get position, component invalid");
	return 0;
}

struct<8> Function_25() //Position: 0x2249 / 8777
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_26(float fParam0, int iParam1) //Position: 0x2253 / 8787
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar4;
	struct<2> Var6;
	
	uVar0 = GRINGO_GET_PARENT_COMPONENT(&iParam1, 0);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		Function_27(StackVal, &uVar1, "ThrowOffsetFromUser", Vector(0.0f, 0.0f, -1.0f));
		uVar2 = Function_27(StackVal, &uVar1, "ThrowOffsetFromUser", Vector(0.0f, 0.0f, -1.0f));
		GET_ACTOR_OFFSET_WORLD_COORDS(&fParam0, &uVar2, &uVar4);
		FIND_GROUND_INTERSECTION(&uVar4, 25.0f, &Var6, &uVar4);
		return StackVal, Var6;
	}
	LOG_ERROR("WATER_BUCKET_GET_POS_THROWN_WATER: failed to get position, component invalid");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_27(var uParam0, var uParam1, struct<2> Param2) //Position: 0x2322 / 8994
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_28(int iParam0) //Position: 0x2341 / 9025
{
	var uVar0;
	var uVar1;
	
	uVar0 = GRINGO_GET_PARENT_COMPONENT(&iParam0, 0);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		return Function_12(&uVar1, "FireExtinguishRadius", 2,5f);
	}
	return 2,5f;
}

int Function_29(var uParam0, int iParam1) //Position: 0x239D / 9117
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	uVar1 = GRINGO_GET_PARENT_COMPONENT(&uParam0, 0);
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar1);
	if (IS_GRINGO_COMPONENT_VALID(&uVar2))
	{
		iVar0 = iParam1;
		return SET_GRINGO_INT_ATTR(iVar0, "CurrentState", &uVar2);
	}
	LOG_ERROR("GetCurrentState: GlobalSettings is invalid");
	return 0;
}

float Function_30(int iParam0) //Position: 0x2421 / 9249
{
	return Function_12(&iParam0, "UseTime", 5.0f);
}

bool Function_31() //Position: 0x2438 / 9272
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_32(int iParam0) //Position: 0x2445 / 9285
{
	return Function_12(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_33(int iParam0, bool bParam1) //Position: 0x2466 / 9318
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return 1;
}

bool Function_34(bool bParam0) //Position: 0x2479 / 9337
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_35() //Position: 0x2499 / 9369
{
	return;
}

void Function_36(int iParam0, bool bParam1) //Position: 0x249F / 9375
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_37(char* cParam0) //Position: 0x24B1 / 9393
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_38(int iParam0) //Position: 0x24BE / 9406
{
	return Function_8(&iParam0, "OneShotKill", 0);
}

bool Function_39(char* cParam0, int iParam1) //Position: 0x24D9 / 9433
{
	return Function_10(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_40(int iParam0) //Position: 0x24F9 / 9465
{
	return Function_8(&iParam0, "LinkToParentAnim", 0);
}

var Function_41(int iParam0) //Position: 0x2519 / 9497
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_10 - 1))
	{
		if (&vLocal_10[iVar09] + 16 == &iParam0)
		{
			return &vLocal_10[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_42(int iParam0) //Position: 0x2550 / 9552
{
	return Function_8(&iParam0, "LinkParentToAnim", 0);
}

bool Function_43(int iParam0) //Position: 0x2570 / 9584
{
	return Function_8(&iParam0, "SingularUse", 0);
}

void Function_44(var uParam0, int iParam1) //Position: 0x258B / 9611
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_45(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25A1 / 9633
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
	uVar2 = Function_53(&iParam0 + 16, &bVar0);
	uVar3 = Function_52(&iParam0 + 16, &bVar1);
	uVar4 = Function_51(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_50(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_49(&iParam0 + 16, &bVar7);
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
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_47(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_46(), Function_47(&iParam0 + 16, &iVar10), 0, bVar9);
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
				if (Function_31())
				{
					Function_48();
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

var Function_46() //Position: 0x28C5 / 10437
{
	int iVar0;
	
	return &iVar0;
}

bool Function_47(char* cParam0, int iParam1) //Position: 0x28CE / 10446
{
	return Function_10(&cParam0, "TargetLocator", &iParam1);
}

void Function_48() //Position: 0x28ED / 10477
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_49(char* cParam0, int iParam1) //Position: 0x28FC / 10492
{
	return Function_10(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_50(char* cParam0, int iParam1) //Position: 0x2920 / 10528
{
	return Function_10(&cParam0, "TargetPhysAttachBone", &iParam1);
}

var Function_51(int iParam0) //Position: 0x2946 / 10566
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_52(char* cParam0, int iParam1) //Position: 0x2964 / 10596
{
	return Function_10(&cParam0, "TargetAttachBone", &iParam1);
}

bool Function_53(char* cParam0, int iParam1) //Position: 0x2986 / 10630
{
	return Function_10(&cParam0, "TargetAttachSlot", &iParam1);
}

void Function_54(bool bParam0, int iParam1) //Position: 0x29A8 / 10664
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

var Function_55(var uParam0, int iParam1, bool bParam2) //Position: 0x2A70 / 10864
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

void Function_56(int iParam0, float fParam1) //Position: 0x2AEC / 10988
{
	if (!Function_15(&iParam0))
	{
		Function_57(&iParam0, fParam1);
	}
	return;
}

void Function_57(vector3 vParam0) //Position: 0x2B04 / 11012
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_62(&vParam0, 1);
	Function_44(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_58(int iParam0) //Position: 0x2B29 / 11049
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_12(&iParam0, "RandUseTime", 0.0f));
}

void Function_59(vector3 vParam0) //Position: 0x2B4A / 11082
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_60(var uParam0) //Position: 0x2B61 / 11105
{
	uParam0 = &uParam0;
	return;
}

int Function_61() //Position: 0x2B6D / 11117
{
	return 1;
}

void Function_62(var uParam0, int iParam1) //Position: 0x2B74 / 11124
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_63(int iParam0, var uParam1, int iParam2) //Position: 0x2B85 / 11141
{
	bool bVar0;
	
	Function_66(&iParam0);
	uParam1 = Function_66(&iParam0);
	iParam2 = Function_65(&iParam0);
	bVar0 = Function_64(&iParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

int Function_64(int iParam0) //Position: 0x2BCA / 11210
{
	return Function_12(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_65(int iParam0) //Position: 0x2BF6 / 11254
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_66(int iParam0) //Position: 0x2C02 / 11266
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_67(&iParam0))
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

bool Function_67(int iParam0) //Position: 0x2D04 / 11524
{
	return Function_8(&iParam0, "UsePosActorRelative", 0);
}

int Function_68(int iParam0) //Position: 0x2D27 / 11559
{
	return Function_12(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_69(int iParam0) //Position: 0x2D4F / 11599
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	float fVar6;
	bool bVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	struct<2> Var11;
	struct<2> Var13;
	struct<2> Var15;
	float fVar17;
	var uVar18;
	float fVar19;
	var uVar20;
	float fVar21;
	bool bVar22;
	var uVar23;
	struct<2> Var24;
	struct<2> Var26;
	struct<2> Var28;
	
	GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var4);
	fVar6 = GRINGO_GET_COMPONENT_USER(&iParam0);
	GET_OBJECT_POSITION(&fVar6, &Var0);
	Var0.f_4 = (StackVal + 1.0f);
	Var2 = Var0;
	bVar7 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &iParam0, 0);
	while (bVar7 >= 4294967295)
	{
		uVar8 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar7, &iParam0);
		if (GRINGO_IS_PROP_READY(&uVar8))
		{
			uVar9 = GRINGO_GET_PROP_FROM_COMPONENT(&uVar8);
			uVar10 = GET_OBJECT_FROM_PHYSINST(&uVar9);
			Var11 = Vector(0.0f, 0.0f, 0.0f);
			if (GET_OBJECT_POSITION(&uVar10, &Var11))
			{
				Function_71(StackVal, StackVal, Var2, Var11);
				Var2 = Function_71(StackVal, StackVal, Var2, Var11);
				Function_70(StackVal, StackVal, Var0, Var11);
				Var0 = Function_70(StackVal, StackVal, Var0, Var11);
			}
		}
		bVar7 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &iParam0, bVar7 + 1);
	}
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var0, StackVal);
	Var0 = Vector(Var0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	Var13 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Var2, StackVal);
	Var15 = Var13;
	Var15 = Vector(Var15, StackVal, StackVal) + Vector(2.0f, 2.0f, 2.0f);
	uVar18 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera", 1, 1);
	fVar17 = Function_12(&iParam0, "GringoCamHoldTime", -1.0f);
	if (IS_OBJECT_VALID(&uVar18))
	{
		fVar19 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uVar18, 0);
		uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, &fVar19, Function_46(), Var13, Vector(0.0f, 0.0f, 0.0f));
		ATTACH_OBJECTS_CONTINUOUS(&uVar20, &fVar6, 4294967295);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(&fVar19);
		SET_CAMERASHOT_TARGET_OBJECT(&fVar19, &uVar20, 0);
		SET_CAMERASHOT_POSITION(&fVar19, Var15);
		SET_CAMERASHOT_COLLISION_ENABLED(&fVar19, 0);
		if (fVar17 < -1.0f)
		{
			CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uVar18, 0, fVar17, 4294967295);
		}
		else
		{
			CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uVar18, 0, 4294967295);
		}
		SET_CAMERASHOT_FROM_LENS(&fVar19, 6);
		FORCE_CAMERASHOT_UPDATE(&fVar19);
		fVar21 = 2.0f;
		while (!CAMERASHOT_IS_VISIBLE_ACTOR(&fVar19, GET_ACTOR_FROM_OBJECT(&fVar6), 1065353216, 1117126656, 1, 1, 0) && fVar21 > 10.0f)
		{
			Var15 = (Var15 - fVar21);
			Var15.f_8 = (StackVal - fVar21);
			SET_CAMERASHOT_POSITION(&fVar19, Var15);
			fVar21 = (fVar21 + 1,5f);
		}
		if (!CAMERASHOT_IS_VISIBLE_ACTOR(&fVar19, GET_ACTOR_FROM_OBJECT(&fVar6), 1065353216, 1117126656, 1, 1, 0))
		{
			SET_CAMERASHOT_POSITION(&fVar19, Var4);
			SET_CAMERASHOT_FROM_LENS(&fVar19, 3);
		}
		bVar22 = false;
		uVar23 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
		while (IS_OBJECT_VALID(&uVar23) && !bVar22)
		{
			if (GET_OBJECT_TYPE(&uVar23) == 13)
			{
				bVar22 = true;
			}
			uVar23 = GET_OBJECT_OWNER(&uVar23);
		}
		if (bVar22)
		{
			GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var24);
			Var26 = Vector(StackVal, StackVal, StackVal) - Vector(Var24, Var15, StackVal);
			ATTACH_CAMERASHOT(StackVal, StackVal, &fVar19, GRINGO_GET_MY_OBJECT_REF(), Var26, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
			Var28 = Vector(StackVal, StackVal, StackVal) - Vector(Var24, Var13, StackVal);
			ATTACH_OBJECTS(StackVal, &uVar20, GRINGO_GET_MY_OBJECT_REF(), Function_46(), Var28, Vector(0.0f, 0.0f, 0.0f), 4294967295);
		}
		PLAY_CUTSCENEOBJECT(&uVar18, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		Function_110("Failed to create gringo camera");
	}
	return;
}

struct<8> Function_70(vector3 vParam0) //Position: 0x3036 / 12342
{
	struct<2> Var0;
	
	if (vParam0.x < vParam2.x)
	{
		Var0 = vParam0.x;
	}
	else
	{
		Var0 = vParam2.x;
	}
	if (vParam0.y < vParam2.y)
	{
		Var0.f_4 = vParam0.y;
	}
	else
	{
		Var0.f_4 = vParam2.y;
	}
	if (vParam0.z < vParam2.z)
	{
		Var0.f_8 = vParam0.z;
	}
	else
	{
		Var0.f_8 = vParam2.z;
	}
	return StackVal, Var0;
}

struct<8> Function_71(vector3 vParam0) //Position: 0x3093 / 12435
{
	struct<2> Var0;
	
	if (vParam0.x > vParam2.x)
	{
		Var0 = vParam0.x;
	}
	else
	{
		Var0 = vParam2.x;
	}
	if (vParam0.y > vParam2.y)
	{
		Var0.f_4 = vParam0.y;
	}
	else
	{
		Var0.f_4 = vParam2.y;
	}
	if (vParam0.z > vParam2.z)
	{
		Var0.f_8 = vParam0.z;
	}
	else
	{
		Var0.f_8 = vParam2.z;
	}
	return StackVal, Var0;
}

void Function_72(int iParam0) //Position: 0x30F0 / 12528
{
	iParam0 = &iParam0;
	return;
}

bool Function_73(int iParam0) //Position: 0x30FC / 12540
{
	return Function_8(&iParam0, "MaintainPosture", 0);
}

void Function_74(int iParam0) //Position: 0x311B / 12571
{
	if (!Function_15(&iParam0))
	{
		Function_57(&iParam0, 0.0f);
	}
	return;
}

bool Function_75(var uParam0, int iParam1) //Position: 0x3132 / 12594
{
	uParam0 = &uParam0;
	iParam1 = &iParam1;
	return 1;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x3145 / 12613
{
	iParam1 = Function_12(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_77(var uParam0) //Position: 0x3173 / 12659
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

bool Function_78(var uParam0, int iParam1) //Position: 0x328C / 12940
{
	return (uParam0 && iParam1) == 0;
}

void Function_79(struct<69> Param0) //Position: 0x3299 / 12953
{
	if (Function_78(Param0.f_64, 16))
	{
		if (Param0.f_68 > 5 && Param0.f_68 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
			{
				Function_3("UNSUSPEND MOVER", &Param0 + 24);
				ENABLE_MOVER(&Param0 + 24);
			}
			if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
			{
				Function_3("UNFIX MOVER", &Param0 + 24);
				SET_MOVER_FROZEN(&Param0 + 24, false);
			}
		}
	}
	return;
}

void Function_80(struct<69> Param0) //Position: 0x331B / 13083
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
	var uVar11;
	var uVar12;
	
	if (bParam1)
	{
		Function_3("<<<STOP USE [delay allowed]", &Param0 + 24);
	}
	else
	{
		Function_3("<<<STOP USE [NO delay allowed]", &Param0 + 24);
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
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_78(Param0.f_64, 32)) && Function_8(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_85(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_78(Param0.f_64, 64));
		Function_18(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_8(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_78(Param0.f_64, 128) && Function_8(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_42(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_78(Param0.f_64, 16))
			{
				Function_79(&Param0);
				Function_44(&Param0 + 64, 16);
			}
			if (Function_78(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_84(&Param0 + 16) && Function_78(Param0.f_64, 512))
			{
				Function_44(&Param0 + 64, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 1);
				Function_3("Allow Bump Reactions", &Param0 + 24);
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
	if (Function_40(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_41(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_83(&Param0 + 16);
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_126)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_124));
		iLocal_126 = &uVar11;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_43(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_129))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_129);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar12, "UserObject", &Param0 + 16);
	Function_59(&Param0);
	Function_74(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_3("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_82(&Param0 + 16), &Param0 + 16);
	}
	Function_44(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_81();
		}
	}
	else
	{
		Function_81();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_81() //Position: 0x3852 / 14418
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

int Function_82(int iParam0) //Position: 0x388C / 14476
{
	return Function_12(&iParam0, "ReuseDelay", 15.0f);
}

void Function_83(int iParam0) //Position: 0x38AA / 14506
{
	iParam0 = &iParam0;
	return;
}

bool Function_84(int iParam0) //Position: 0x38B6 / 14518
{
	return Function_8(&iParam0, "BlockBumpReactions", 0);
}

void Function_85(var uParam0, int iParam1) //Position: 0x38D8 / 14552
{
	iParam1 = &iParam1;
	SET_OBJECT_COLLIDE_WITH_OBJECT(GET_TARGET_ACTOR(), &uParam0, true);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_TARGET_ACTOR(), 1);
	return;
}

void Function_86(var uParam0, bool bParam1) //Position: 0x38F5 / 14581
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_110("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_110("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_129))
			{
				if (&bParam1)
				{
					Function_110("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_129);
			}
		}
	}
	if (&bParam1)
	{
		Function_110("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_87(int iParam0, int iParam1) //Position: 0x3A05 / 14853
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_88(struct<69> Param0) //Position: 0x3A1D / 14877
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
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_46(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_59(&Param0);
	Function_3("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_62(&Param0 + 64, 2);
	Function_44(&Param0 + 64, 8);
	Function_44(&Param0 + 64, 16);
	Function_44(&Param0 + 64, 64);
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
	if (!Function_92(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_62(&Param0 + 64, 32);
			}
			else
			{
				Function_44(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_44(&Param0 + 64, 32);
		}
		if (Function_78(Param0.f_64, 32))
		{
			Function_62(&Param0 + 64, 128);
		}
		else
		{
			Function_44(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_44(&Param0 + 64, 32);
	}
	if (Function_91(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_62(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_62(&Param0 + 64, 128);
		}
	}
	if (Function_84(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_62(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_3("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_89(&Param0 + 24, &uVar0);
	Function_3("START: ", &Param0 + 24);
	return;
}

void Function_89(var uParam0, int iParam1) //Position: 0x3D39 / 15673
{
	iParam1 = &iParam1;
	uLocal_4 = &uParam0;
	uLocal_6 = GET_TARGET_ACTOR();
	Function_90(&uParam0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_TARGET_ACTOR(), 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(GET_TARGET_ACTOR(), &uParam0, false);
	DECOR_SET_OBJECT(&uLocal_6, "Water_Bucket_User", GET_OBJECT_FROM_ACTOR(&uParam0));
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "Water_Bucket_Ref", &uLocal_6);
	return;
}

void Function_90(var uParam0) //Position: 0x3DA9 / 15785
{
	struct<2> Var0;
	
	if (!IS_OBJECT_VALID(&iLocal_8))
	{
		GET_POSITION(&uParam0, &Var0);
		iLocal_8 = CREATE_POINT_IN_LAYOUT(StackVal, GET_OBJECT_OWNER(&uParam0), Function_46(), Var0, Vector(0.0f, 0.0f, 0.0f));
		ATTACH_OBJECTS(StackVal, StackVal, &iLocal_8, GET_OBJECT_FROM_ACTOR(&uParam0), Function_46(), Vector(0.0f, 0,2f, -0,6f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	return;
}

bool Function_91(int iParam0) //Position: 0x3DF9 / 15865
{
	return Function_8(&iParam0, "DrawWeapon", 0);
}

bool Function_92(int iParam0) //Position: 0x3E13 / 15891
{
	return Function_8(&iParam0, "AllowWeapon", 0);
}

void Function_93(int iParam0, var uParam1) //Position: 0x3E2E / 15918
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_94(&uParam1, &bVar0);
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

bool Function_94(var uParam0, int iParam1) //Position: 0x3E6C / 15980
{
	return Function_10(&uParam0, "UseName", &iParam1);
}

bool Function_95(struct<65> Param0) //Position: 0x3E85 / 16005
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
				if (!Function_105(6))
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
		if (!Function_99(&uVar1, &Param0 + 16))
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
		if (!Function_78(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_62(&Param0 + 64, 1);
			}
			else
			{
				Function_44(&Param0 + 64, 1);
			}
			if (Function_78(Param0.f_64, 1))
			{
				Function_87("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_66(&Param0 + 16);
				Var8 = Function_66(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_98(&Param0 + 16);
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
				if (!Function_97(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_96(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_65(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_65(&Param0 + 16));
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

int Function_96(int iParam0) //Position: 0x417D / 16765
{
	return Function_12(&iParam0, "ActivationCone", 0.0f);
}

bool Function_97(var uParam0, int iParam1) //Position: 0x419B / 16795
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
	Function_66(&iParam1);
	Var0 = Function_66(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_66(&iParam1);
	Var0 = Function_66(&iParam1);
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

int Function_98(int iParam0) //Position: 0x423B / 16955
{
	return Function_12(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_99(var uParam0, int iParam1) //Position: 0x425B / 16987
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_103(&iParam1);
	if (bVar0 == 4294967295)
	{
		return 0;
	}
	Function_102();
	switch (bVar0)
	{
		case 0x00000000:
			if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Bucket", &iParam1))
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			if (Function_101(&uParam0, &iParam1))
			{
				return 0;
			}
			SET_ACTOR_GRINGO_RESTRICTION(&uParam0, GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()));
			if (GRINGO_COMPONENT_CHECK_NAME("nGet_Water", &iParam1))
			{
				if (Function_100(&uParam0, &iParam1))
				{
					return 1;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&uParam0, &iParam1))
			{
				return 0;
			}
			SET_ACTOR_GRINGO_RESTRICTION(&uParam0, GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()));
			if (GRINGO_COMPONENT_CHECK_NAME("Toss_Water", &iParam1))
			{
				uVar1 = Function_28(&iParam1);
				Function_26(&uParam0, &iParam1);
				uVar2 = Function_26(&uParam0, &iParam1);
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_100(var uParam0, int iParam1) //Position: 0x4335 / 17205
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	float fVar4;
	struct<2> Var5;
	var uVar7;
	
	uVar0 = GRINGO_GET_PARENT_COMPONENT(&iParam1, 0);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		uVar3 = Function_10(&uVar1, "WaterSourceName", &bVar2);
		if (bVar2)
		{
			fVar4 = 2.0f;
			GET_POSITION(&uParam0, &Var5);
			uVar7 = LOCATE_NAMED_VOLUME(Var5, fVar4, &uVar3, 1);
			if (IS_OBJECT_VALID(&uVar7))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_8, &uVar7))
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

bool Function_101(var uParam0, int iParam1) //Position: 0x444D / 17485
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
	{
		if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_2))
		{
			uLocal_4 = "";
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "carry_bucket/player/pst_interrupt");
			ACTOR_END_FORCE_HOLSTER(&uParam0);
			Function_29(&iParam1, 0);
			CLEAR_ACTOR_GRINGO_RESTRICTION(&uParam0);
			RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
			return 1;
		}
	}
	uLocal_2 = ADD_SCRIPT_USE_CONTEXT("Drop_Bucket", 100, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
	return 0;
}

void Function_102() //Position: 0x44DF / 17631
{
	int iVar0;
	
	iVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "water_bucket_steam");
	if (IS_OBJECT_VALID(&iVar0))
	{
		if (IS_RMPTFX_FINISHED(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

var Function_103(int iParam0) //Position: 0x451B / 17691
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	uVar1 = GRINGO_GET_PARENT_COMPONENT(&iParam0, 0);
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar1);
	if (IS_GRINGO_COMPONENT_VALID(&uVar2))
	{
		iVar0 = Function_104(&uVar2, "CurrentState", 4294967295);
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

var Function_104(var uParam0, var uParam1, int iParam2) //Position: 0x45D5 / 17877
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_INT_ATTR(&iVar0, &uParam1, &uParam0);
	return iVar0;
}

bool Function_105(int iParam0) //Position: 0x45ED / 17901
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_106(int iParam0) //Position: 0x4609 / 17929
{
	iParam0 = &iParam0;
	return;
}

void Function_107(var uParam0, int iParam1) //Position: 0x4615 / 17941
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_108(&(vLocal_10[iLocal_1209]), &uParam0);
		iLocal_120++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 6)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_107(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_108(int iParam0, int iParam1) //Position: 0x4681 / 18049
{
	(&iParam0 + 16) = &iParam1;
	Function_44(&iParam0 + 64, 1);
	return;
}

void Function_109(int iParam0) //Position: 0x4699 / 18073
{
	iParam0 = &iParam0;
	return;
}

void Function_110(bool bParam0) //Position: 0x46A5 / 18085
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &bParam0, 0, 0, 0);
	return;
}

