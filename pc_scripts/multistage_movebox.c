//Decompiled with MagicRDR v1.0
//Function Count : 117
//Statics Count : 145
//Natives Count : 270
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	bool bLocal_14 = false;
	struct<2> Local_15 = { 0, 0 } ;
	var uLocal_17 = 0;
	bool bLocal_18 = false;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	struct<9> Local_22[6];
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
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	var uLocal_142 = 0;
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
	
	iLocal_19 = 0;
	iLocal_20 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_116("STARTS");
	Function_115(&uScriptParam_0);
	iLocal_132 = 0;
	Function_113(&uScriptParam_0, &iLocal_132);
	while (IS_GRINGO_ACTIVE())
	{
		Function_112(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_133);
		}
		iVar2 = 0;
		bLocal_140 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_132 - 1))
			{
				if (&vLocal_22[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_132;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_140 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_103(&(vLocal_22[iVar39]), &bVar4))
						{
							Function_101(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_22[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_103(&(vLocal_22[iVar39]), &bVar4))
						{
							Function_101(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_22[iVar39] + 16);
							if (bVar4)
							{
								Function_96(&(vLocal_22[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_22[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_95("eGRINGO_EndUse: Stop use by request", &vLocal_22[iVar39] + 24);
							Function_94(&vLocal_22[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_22[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_22[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_22[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_22[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_86(&(vLocal_22[iVar39]), 0);
							}
							else if (vLocal_22[iVar39].f_68 < 8)
							{
								Function_85(&(vLocal_22[iVar39]));
								vLocal_22[iVar39].f_68 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_116("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_132 - 1))
			{
				if (Function_84(vLocal_22[iVar09].f_64, 2))
				{
					if (!Function_16(&(vLocal_22[iVar09])))
					{
						Function_116("Quitting due to update end");
						Function_86(&(vLocal_22[iVar09]), 1);
					}
				}
				if (Function_15(&(vLocal_22[iVar09]), 0))
				{
					Function_5(&(vLocal_22[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_132 - 1))
		{
			if (Function_84(vLocal_22[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_140)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_141))
	{
		Function_116("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_141);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_132 - 1))
	{
		if (Function_84(vLocal_22[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_22[iVar09] + 24);
			Function_86(&(vLocal_22[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_22[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_22[iVar09] + 16);
		}
		Function_15(&(vLocal_22[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_116("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x43C / 1084
{
	iParam0 = &iParam0;
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x448 / 1096
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

var Function_3() //Position: 0x48A / 1162
{
	return iLocal_21;
}

int Function_4(int iParam0) //Position: 0x492 / 1170
{
	iParam0 = &iParam0;
	return 0;
}

void Function_5(struct<69> Param0) //Position: 0x49F / 1183
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_84(Param0.f_64, 2))
	{
		Function_94(&Param0 + 24, 0);
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
								bLocal_140 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_141))
								{
									Function_116("ManagePlayerQuit: Create quit context");
									if (Function_7(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_141 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_141 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_141))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_85(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_141))
									{
										Function_116("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_141);
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
										Function_85(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_141))
										{
											Function_116("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_141);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_141))
							{
								Function_116("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_141);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_141))
		{
			Function_116("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_141);
		}
	}
	return;
}

bool Function_6(int iParam0) //Position: 0x7D3 / 2003
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

bool Function_7(bool bParam0, var uParam1, int iParam2) //Position: 0x8EC / 2284
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

bool Function_8(char* cParam0, int iParam1) //Position: 0x90A / 2314
{
	return Function_9(&cParam0, "UseQuit", &iParam1);
}

bool Function_9(char* cParam0, char* cParam1, int iParam2) //Position: 0x923 / 2339
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

float Function_10(bool bParam0) //Position: 0x973 / 2419
{
	return Function_11(&bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(float fParam0, bool bParam1, int iParam2) //Position: 0x991 / 2449
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &bParam1, &fParam0);
	return iVar0;
}

float Function_12(vector3 vParam0) //Position: 0x9A9 / 2473
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

bool Function_13(int iParam0) //Position: 0xA76 / 2678
{
	return Function_84(iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xA84 / 2692
{
	return Function_84(iParam0, 1);
}

bool Function_15(int iParam0, int iParam1) //Position: 0xA92 / 2706
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

bool Function_16(struct<69> Param0) //Position: 0xADF / 2783
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
	
	bVar11 = Function_83(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_95("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_7(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_95("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_95("Incapacitation quit", &Param0 + 24);
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
			bLocal_140 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_82(&Param0 + 16, &fVar22))
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
				if (Function_77(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_76(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_76(&Param0);
			}
			if (!Function_75(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_140 = true;
			Function_74(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_84(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_71(&Param0 + 16);
			}
			fVar18 = Function_70(&Param0 + 16);
			if (Function_12(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_84(Param0.f_64, 1))
			{
				Function_65(&Param0 + 16, &Var3, &uVar5);
				if (!Function_84(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_64(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_64(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_63());
				}
				if (!Function_84(Param0.f_64, 1024))
				{
					Function_64(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_77(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_84(Param0.f_64, 1024))
				{
					Function_64(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_84(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_64(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_64(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_84(Param0.f_64, 32))
			{
				bLocal_140 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_62(&Param0 + 16);
			bLocal_140 = true;
			Function_61(&Param0);
			Function_58(&Param0, Function_60(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_84(Param0.f_64, 1);
			}
			bVar0 = Function_57(&Param0 + 24, &Param0 + 16, bVar29);
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
							Function_56(&bVar1, &Param0 + 24);
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
											Function_56(&bVar1, &Param0 + 24);
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
					Function_48(&Param0, &uVar7, &iLocal_138, &uLocal_136);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_64(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_47(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_84(Param0.f_64, 16))
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
				if (Function_46(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_45(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_44(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_43(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_44(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_42(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_44(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_41(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_64(&Param0 + 64, 8);
					}
					else
					{
						Function_47(&Param0 + 64, 8);
					}
					if (Function_84(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_47(&Param0 + 64, 8);
				}
				if (Function_40(&Param0 + 16))
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
				Function_39(&Param0 + 24, &Param0 + 16);
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
				Function_38();
			}
			Param0.f_68 = 6;
			if (Function_84(Param0.f_64, 1))
			{
				if (Function_37(&Param0 + 16))
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
			bVar0 = Function_57(&Param0 + 24, &Param0 + 16, Function_84(Param0.f_64, 1));
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
			Function_116("nRewarding");
			Function_22(&Param0 + 24, &Param0 + 16);
			Function_21(&Param0 + 24, &Param0 + 16);
			Function_20(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_64(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_140 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_7(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_71(&Param0 + 16);
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
			if (Function_84(Param0.f_64, 1024))
			{
				Function_47(&Param0 + 64, 1024);
				if (!Function_7(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_140 = true;
			bVar0 = Function_57(&Param0 + 24, &Param0 + 16, Function_84(Param0.f_64, 1));
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

void Function_17(var uParam0, int iParam1) //Position: 0x1E14 / 7700
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1E2B / 7723
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_19() //Position: 0x1E3D / 7741
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

void Function_20(var uParam0, int iParam1) //Position: 0x1E70 / 7792
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

void Function_21(var uParam0, int iParam1) //Position: 0x1EEE / 7918
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

void Function_22(int iParam0, int iParam1) //Position: 0x1F6A / 8042
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1F7C / 8060
{
	return Function_11(&bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1F93 / 8083
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1FA0 / 8096
{
	return Function_11(&bParam0, "MoveAllowance", 1,5f);
}

bool Function_26(var uParam0, int iParam1) //Position: 0x1FC1 / 8129
{
	return Function_27(&uParam0, &iParam1, &iLocal_21);
}

int Function_27(int iParam0, bool bParam1, int iParam2) //Position: 0x1FD2 / 8146
{
	var uVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	var uVar8;
	var uVar9;
	bool bVar10;
	var uVar11;
	var uVar12;
	float fVar13;
	int iVar14;
	var uVar15;
	float fVar16;
	
	Function_36(&iParam0, 0);
	Function_35(&iParam0, 0);
	Function_34(&iParam0, 0);
	iVar1 = 1;
	if (!IS_ACTOR_PLAYER(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MSMove_Run"))
		{
			iVar1 = 4;
		}
	}
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, &bParam1);
	if (IS_ACTOR_PLAYER(&iParam0))
	{
		Function_31(&bParam1, &iParam0, &iParam2);
	}
	if (!IS_OBJECTSET_VALID(&uLocal_2) && !IS_ACTOR_PLAYER(&iParam0))
	{
		return 0;
	}
	if (!iLocal_19)
	{
		if (IS_ACTOR_PLAYER(&iParam0))
		{
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			Function_30(StackVal, Var3);
			Var5 = Function_30(StackVal, Var3);
			if (VDIST(Var3, Var5) >= 1,5f)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_6))
				{
					uLocal_6 = ADD_SCRIPT_USE_CONTEXT(GET_GRINGO_STRING_ATTR("MidUse", &bParam1, &uVar0), 50, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_6))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_6);
					uVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2);
					ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4);
					uLocal_13 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2), "UseAnim");
					GRINGO_ANIM_PLAY_NODE_BY_HASH(&iParam0, &uVar2, uLocal_13);
					iLocal_19 = 1;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_6))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_6);
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_8))
			{
				uLocal_8 = ADD_SCRIPT_USE_CONTEXT("nDrop_Item", 9, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
			}
			else if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_8) || DECOR_GET_BOOL(&iParam0, "PlayerBreakMSGringo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_8);
				uLocal_13 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(&uLocal_2) - 1), &uLocal_2), "UseAnim");
				GRINGO_ANIM_PLAY_NODE_BY_HASH(&iParam0, &uVar2, uLocal_13);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_6))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_6);
				}
				return 0;
			}
		}
		if (Function_29(StackVal, Local_15))
		{
			uVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2);
			if (DECOR_CHECK_EXIST(&uVar9, "MSEndBlockCheck"))
			{
				bVar10 = false;
				while (bVar10 < (GET_OBJECTSET_SIZE(&uLocal_2) - 1))
				{
					uVar11 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
					uVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar10, &uLocal_2);
					GET_OBJECT_POSITION(&uVar9, &Local_15);
					uVar12 = LOCATE_GRINGO_OF_TYPE(&uVar11, &Local_15, 3.0f, 1);
					if (!IS_GRINGO_VALID(&uVar12))
					{
						bLocal_18 = GET_OBJECT_HEADING(&uVar9);
						bLocal_14 = bVar10;
						bVar10 = 99999;
					}
					bVar10++;
				}
			}
			else
			{
				GET_OBJECT_POSITION(&uVar9, &Local_15);
				bLocal_18 = GET_OBJECT_HEADING(&uVar9);
			}
		}
		if (!DECOR_CHECK_EXIST(&iParam0, "MultistageNoMove"))
		{
			bVar7 = 0,15f;
			if (DECOR_CHECK_EXIST(&iParam0, "MSGringo_setMoveThreshold"))
			{
				bVar7 = DECOR_GET_FLOAT(&iParam0, "MSGringo_setMoveThreshold");
			}
			else if (bLocal_14 != (GET_OBJECTSET_SIZE(&uLocal_2) - 1))
			{
				bVar7 = Function_11(&bParam1, "MidFlagUseLocTol", 0,15f);
			}
			if (bLocal_14 != (GET_OBJECTSET_SIZE(&uLocal_2) - 1))
			{
				fVar13 = Function_11(&bParam1, "MidFlagUseDirTol", 0.0f);
			}
			else
			{
				fVar13 = Function_11(&bParam1, "EndFlagUseDirTol", 0.0f);
			}
			if (GRINGO_ACTOR_MOVE_TO_AND_FACE(&iParam0, &Local_15, bVar7, bVar7, iVar1, bLocal_18, fVar13, 1, 1))
			{
				uLocal_13 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2), "UseAnim");
				GRINGO_ANIM_PLAY_NODE_BY_HASH(&iParam0, &uVar2, uLocal_13);
				iLocal_19 = 1;
				bLocal_14 = true;
				Function_28();
				Local_15 = Function_28();
				if (bLocal_14 <= iLocal_12 && !IS_ACTOR_PLAYER(&iParam0))
				{
					bLocal_14 = false;
					return 1;
				}
			}
		}
	}
	if (!GRINGO_ANIM_IS_SUBNODE_PLAYING_BY_HASH(&iParam0, &uVar2, uLocal_13))
	{
		if (!iLocal_20)
		{
			iLocal_20 = 1;
			if (GET_GRINGO_INT_ATTR(&iVar14, "StationsUsed", &bParam1))
			{
				iVar14++;
				SET_GRINGO_INT_ATTR(iVar14, "StationsUsed", &bParam1);
			}
		}
		if (IS_ACTOR_PLAYER(&iParam0))
		{
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			Function_30(StackVal, Var3);
			Var5 = Function_30(StackVal, Var3);
			if (VDIST(Var3, Var5) >= 1,5f)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_6))
				{
					uLocal_6 = ADD_SCRIPT_USE_CONTEXT(GET_GRINGO_STRING_ATTR("MidUse", &bParam1, &uVar0), 50, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_6))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_6);
					uVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2);
					ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_4);
					uLocal_13 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2), "UseAnim");
					GRINGO_ANIM_PLAY_NODE_BY_HASH(&iParam0, &uVar2, uLocal_13);
					iLocal_20 = 0;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_6))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_6);
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_8))
			{
				uLocal_8 = ADD_SCRIPT_USE_CONTEXT("nDrop_Item", 9, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
			}
			else if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_8) || DECOR_GET_BOOL(&iParam0, "PlayerBreakMSGringo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_8);
				uLocal_13 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(&uLocal_2) - 1), &uLocal_2), "UseAnim");
				GRINGO_ANIM_PLAY_NODE_BY_HASH(&iParam0, &uVar2, uLocal_13);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_6))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_6);
				}
				return 0;
			}
		}
		if (bLocal_14 <= iLocal_12 && !IS_ACTOR_PLAYER(&iParam0))
		{
			bLocal_14 = false;
			return 1;
		}
		if (Function_29(StackVal, Local_15))
		{
			GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2), &Local_15);
			bLocal_18 = GET_OBJECT_HEADING(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2));
		}
		if (!DECOR_CHECK_EXIST(&iParam0, "MultistageNoMove"))
		{
			bVar7 = 0.0f;
			if (DECOR_CHECK_EXIST(&iParam0, "MSGringo_setMoveThreshold"))
			{
				bVar7 = DECOR_GET_FLOAT(&iParam0, "MSGringo_setMoveThreshold");
			}
			else if (bLocal_14 != (GET_OBJECTSET_SIZE(&uLocal_2) - 1))
			{
				bVar7 = Function_11(&bParam1, "MidFlagUseLocTol", 0,15f);
			}
			if (bLocal_14 != (GET_OBJECTSET_SIZE(&uLocal_2) - 1))
			{
				fVar16 = Function_11(&bParam1, "MidFlagUseDirTol", 0.0f);
			}
			else
			{
				fVar16 = Function_11(&bParam1, "EndFlagUseDirTol", 0.0f);
			}
			if (GRINGO_ACTOR_MOVE_TO_AND_FACE(&iParam0, &Local_15, bVar7, 0.0f, iVar1, bLocal_18, fVar16, 1, 0))
			{
				uLocal_13 = DECOR_GET_STRING_HASH(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_14, &uLocal_2), "UseAnim");
				GRINGO_ANIM_PLAY_NODE_BY_HASH(&iParam0, &uVar2, uLocal_13);
				bLocal_14++;
				Function_28();
				Local_15 = Function_28();
			}
		}
	}
	return 1;
}

struct<8> Function_28() //Position: 0x26B9 / 9913
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_29(vector3 vParam0) //Position: 0x26C3 / 9923
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_30(struct<2> Param0) //Position: 0x26DB / 9947
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<2> Var5;
	bool bVar7;
	
	bVar2 = 5000.0f;
	if (IS_OBJECTSET_VALID(&uLocal_2))
	{
		bVar3 = false;
		while (bVar3 < (GET_OBJECTSET_SIZE(&uLocal_2) - 2))
		{
			if (!STRING_CONTAINS_STRING(GET_OBJECT_NAME(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uLocal_2)), "endflag"))
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uLocal_2), &Var5);
				if (VDIST(Var5, Param0) > bVar2)
				{
					bVar7 = true;
					bVar4 = false;
					while (bVar4 < (GET_OBJECTSET_SIZE(&iLocal_4) - 1))
					{
						if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uLocal_2)), GET_OBJECT_NAME(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, &iLocal_4))))
						{
							bVar2 = 5000.0f;
							bVar7 = false;
						}
						bVar4++;
					}
					if (bVar7 && !DECOR_CHECK_EXIST(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uLocal_2), "MS_Shovel_PlayerIgnore"))
					{
						Var0 = Var5;
						bVar2 = VDIST(Var5, Param0);
						bLocal_14 = bVar3;
					}
				}
			}
			bVar3++;
		}
	}
	return StackVal, Var0;
}

int Function_31(bool bParam0, int iParam1, int iParam2) //Position: 0x27CE / 10190
{
	int iVar0;
	var uVar1;
	var uVar2;
	char* cVar3[32];
	bool bVar11;
	char* cVar12[8];
	var uVar14;
	var uVar15;
	
	uVar1 = GRINGO_GET_MY_OBJECT_REF();
	uVar2 = &Global_46715;
	if (DECOR_CHECK_EXIST(&uVar1, "MSGringo_Layout"))
	{
		uVar2 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(&uVar1, "MSGringo_Layout"));
	}
	strcpy(&cVar3, GET_GRINGO_STRING_ATTR("ChildFlags", &bParam0, &iVar0), 32);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&uVar1, "FlagSetNum"))
	{
		bVar11 = DECOR_GET_INT(&uVar1, "FlagSetNum");
		strcpy(&cVar12, INT_TO_STRING(bVar11), 8);
		stradd(&cVar3, &cVar12, 32);
	}
	stradd(&cVar3, "Set", 32);
	if (!IS_LAYOUTREF_VALID(&uVar2))
	{
		return 0;
	}
	uVar14 = CREATE_OBJECT_ITERATOR(&uVar2);
	ITERATE_IN_LAYOUT(&uVar14, &uVar2);
	ITERATE_ON_OBJECT_TYPE(&uVar14, 2);
	ITERATE_ON_PARTIAL_NAME(&uVar14, &cVar3);
	uVar15 = START_OBJECT_ITERATOR(&uVar14);
	DESTROY_ITERATOR(&uVar14);
	if (!IS_OBJECT_VALID(&uVar15))
	{
		if (!Global_6623)
		{
		}
		if (IS_ACTOR_PLAYER(&iParam1))
		{
			iParam2 = 4000;
			if (IS_OBJECTSET_VALID(&uLocal_2))
			{
				LOG_WARNING("No flagset here; allowing the player to use MultiStage gringo.  Checking layoutUsing for flagset.");
				Function_33(&uLocal_2);
			}
			return 1;
		}
		return 0;
	}
	uLocal_2 = GET_OBJECTSET_FROM_OBJECT(&uVar15);
	iLocal_12 = GET_OBJECTSET_SIZE(&uLocal_2);
	if (!IS_OBJECTSET_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), &uVar2, 4294967295, 0);
	}
	iParam2 = 0;
	return 1;
}

var Function_32() //Position: 0x2988 / 10632
{
	int iVar0;
	
	return &iVar0;
}

void Function_33(var uParam0) //Position: 0x2991 / 10641
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_34(var uParam0, bool bParam1) //Position: 0x29E0 / 10720
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[0]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[0]), 0);
	}
	return;
}

void Function_35(var uParam0, bool bParam1) //Position: 0x2A14 / 10772
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(&uParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(&uParam0);
	}
	return;
}

void Function_36(var uParam0, bool bParam1) //Position: 0x2A39 / 10809
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[1]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[1]), 0);
	}
	return;
}

bool Function_37(bool bParam0) //Position: 0x2A6D / 10861
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_38() //Position: 0x2A8D / 10893
{
	return;
}

void Function_39(int iParam0, bool bParam1) //Position: 0x2A93 / 10899
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_40(char* cParam0) //Position: 0x2AA5 / 10917
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_41(int iParam0) //Position: 0x2AB2 / 10930
{
	return Function_7(&iParam0, "OneShotKill", 0);
}

bool Function_42(char* cParam0, int iParam1) //Position: 0x2ACD / 10957
{
	return Function_9(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_43(int iParam0) //Position: 0x2AED / 10989
{
	return Function_7(&iParam0, "LinkToParentAnim", 0);
}

var Function_44(int iParam0) //Position: 0x2B0D / 11021
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_22 - 1))
	{
		if (&vLocal_22[iVar09] + 16 == &iParam0)
		{
			return &vLocal_22[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_45(int iParam0) //Position: 0x2B44 / 11076
{
	return Function_7(&iParam0, "LinkParentToAnim", 0);
}

bool Function_46(int iParam0) //Position: 0x2B64 / 11108
{
	return Function_7(&iParam0, "SingularUse", 0);
}

void Function_47(var uParam0, int iParam1) //Position: 0x2B7F / 11135
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2B95 / 11157
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
	uVar2 = Function_55(&iParam0 + 16, &bVar0);
	uVar3 = Function_54(&iParam0 + 16, &bVar1);
	uVar4 = Function_53(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_52(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_51(&iParam0 + 16, &bVar7);
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
			Function_50();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_49(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_32(), Function_49(&iParam0 + 16, &iVar10), 0, bVar9);
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
					Function_50();
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

bool Function_49(char* cParam0, int iParam1) //Position: 0x2EB9 / 11961
{
	return Function_9(&cParam0, "TargetLocator", &iParam1);
}

void Function_50() //Position: 0x2ED8 / 11992
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_51(char* cParam0, int iParam1) //Position: 0x2EE7 / 12007
{
	return Function_9(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_52(char* cParam0, int iParam1) //Position: 0x2F0B / 12043
{
	return Function_9(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_53(int iParam0) //Position: 0x2F31 / 12081
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_54(var uParam0, int iParam1) //Position: 0x2F4F / 12111
{
	return Function_9(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_55(var uParam0, int iParam1) //Position: 0x2F71 / 12145
{
	return Function_9(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_56(bool bParam0, int iParam1) //Position: 0x2F93 / 12179
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

var Function_57(var uParam0, int iParam1, bool bParam2) //Position: 0x305B / 12379
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

void Function_58(int iParam0, float fParam1) //Position: 0x30D7 / 12503
{
	if (!Function_14(&iParam0))
	{
		Function_59(&iParam0, fParam1);
	}
	return;
}

void Function_59(vector3 vParam0) //Position: 0x30EF / 12527
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_64(&vParam0, 1);
	Function_47(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_60(int iParam0) //Position: 0x3114 / 12564
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(&iParam0, "RandUseTime", 0.0f));
}

void Function_61(vector3 vParam0) //Position: 0x3135 / 12597
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_62(var uParam0) //Position: 0x314C / 12620
{
	uParam0 = &uParam0;
	return;
}

int Function_63() //Position: 0x3158 / 12632
{
	return 1;
}

void Function_64(var uParam0, int iParam1) //Position: 0x315F / 12639
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_65(int iParam0, var uParam1, int iParam2) //Position: 0x3170 / 12656
{
	float fVar0;
	
	Function_68(&iParam0);
	uParam1 = Function_68(&iParam0);
	iParam2 = Function_67(&iParam0);
	fVar0 = Function_66(&iParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

bool Function_66(int iParam0) //Position: 0x31B5 / 12725
{
	return Function_11(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_67(int iParam0) //Position: 0x31E1 / 12769
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_68(int iParam0) //Position: 0x31ED / 12781
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_69(&iParam0))
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

bool Function_69(int iParam0) //Position: 0x32EF / 13039
{
	return Function_7(&iParam0, "UsePosActorRelative", 0);
}

bool Function_70(int iParam0) //Position: 0x3312 / 13074
{
	return Function_11(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_71(int iParam0) //Position: 0x333A / 13114
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
				Function_73(StackVal, StackVal, Var2, Var11);
				Var2 = Function_73(StackVal, StackVal, Var2, Var11);
				Function_72(StackVal, StackVal, Var0, Var11);
				Var0 = Function_72(StackVal, StackVal, Var0, Var11);
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
	fVar17 = Function_11(&iParam0, "GringoCamHoldTime", -1.0f);
	if (IS_OBJECT_VALID(&uVar18))
	{
		fVar19 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uVar18, 0);
		uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, &fVar19, Function_32(), Var13, Vector(0.0f, 0.0f, 0.0f));
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
			ATTACH_OBJECTS(StackVal, &uVar20, GRINGO_GET_MY_OBJECT_REF(), Function_32(), Var28, Vector(0.0f, 0.0f, 0.0f), 4294967295);
		}
		PLAY_CUTSCENEOBJECT(&uVar18, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		Function_116("Failed to create gringo camera");
	}
	return;
}

struct<8> Function_72(vector3 vParam0) //Position: 0x3621 / 13857
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

struct<8> Function_73(vector3 vParam0) //Position: 0x367E / 13950
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

void Function_74(int iParam0) //Position: 0x36DB / 14043
{
	iParam0 = &iParam0;
	return;
}

bool Function_75(int iParam0) //Position: 0x36E7 / 14055
{
	return Function_7(&iParam0, "MaintainPosture", 0);
}

void Function_76(int iParam0) //Position: 0x3706 / 14086
{
	if (!Function_14(&iParam0))
	{
		Function_59(&iParam0, 0.0f);
	}
	return;
}

bool Function_77(var uParam0, int iParam1) //Position: 0x371D / 14109
{
	struct<2> Var0;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Function_68(&iParam1);
	Var0 = Function_68(&iParam1);
	bVar2 = Function_67(&iParam1);
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var0, bVar2, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(&iParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_81(&uParam0, &iParam1);
	}
	uVar3 = Function_80(&iParam1);
	uVar4 = Function_66(&iParam1);
	Function_78(&iParam1);
	iVar5 = Function_78(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar5, uVar3, 0,2f, 1, bVar2, uVar4, 0, 0);
}

struct<8> Function_78(int iParam0) //Position: 0x37AE / 14254
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_79(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_79(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_79(var uParam0, var uParam1, struct<2> Param2) //Position: 0x37D2 / 14290
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

bool Function_80(int iParam0) //Position: 0x37F1 / 14321
{
	return Function_11(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_81(var uParam0, int iParam1) //Position: 0x3815 / 14357
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
	
	bVar0 = Function_80(&iParam1);
	fVar1 = Function_66(&iParam1);
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

bool Function_82(var uParam0, int iParam1) //Position: 0x393D / 14653
{
	iParam1 = Function_11(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_83(var uParam0) //Position: 0x396B / 14699
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

bool Function_84(var uParam0, int iParam1) //Position: 0x3A84 / 14980
{
	return (uParam0 && iParam1) == 0;
}

void Function_85(struct<69> Param0) //Position: 0x3A91 / 14993
{
	if (Function_84(Param0.f_64, 16))
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

void Function_86(struct<69> Param0) //Position: 0x3B13 / 15123
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
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_84(Param0.f_64, 32)) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_92(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_84(Param0.f_64, 64));
		Function_17(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_7(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_84(Param0.f_64, 128) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_45(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_84(Param0.f_64, 16))
			{
				Function_85(&Param0);
				Function_47(&Param0 + 64, 16);
			}
			if (Function_84(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_91(&Param0 + 16) && Function_84(Param0.f_64, 512))
			{
				Function_47(&Param0 + 64, 512);
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
	if (Function_43(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_44(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_90(&Param0 + 16);
	bVar11 = Function_7(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_89(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_84(Param0.f_64, 256))
			{
				Function_47(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_138)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_136));
		iLocal_138 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_46(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_141))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_141);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_61(&Param0);
	Function_76(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_88(&Param0 + 16), &Param0 + 16);
	}
	Function_47(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_87();
		}
	}
	else
	{
		Function_87();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_87() //Position: 0x40C0 / 16576
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

bool Function_88(int iParam0) //Position: 0x40FA / 16634
{
	return Function_11(&iParam0, "ReuseDelay", 15.0f);
}

void Function_89(int iParam0, var uParam1) //Position: 0x4118 / 16664
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_55(&iParam0 + 16, &uVar0);
	Function_54(&iParam0 + 16, &uVar1);
	iVar2 = Function_53(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_90(int iParam0) //Position: 0x4159 / 16729
{
	iParam0 = &iParam0;
	return;
}

bool Function_91(int iParam0) //Position: 0x4165 / 16741
{
	return Function_7(&iParam0, "BlockBumpReactions", 0);
}

void Function_92(var uParam0, int iParam1) //Position: 0x4187 / 16775
{
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	Function_93(&uParam0, &iParam1);
	return;
}

void Function_93(var uParam0, int iParam1) //Position: 0x41A2 / 16802
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	iLocal_20 = 0;
	bLocal_14 = false;
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), 0);
	}
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&uParam0, 1);
	if (GET_GRINGO_INT_ATTR(&uVar0, "StationsUsed", &iParam1))
	{
		SET_GRINGO_INT_ATTR(false, "StationsUsed", &iParam1);
	}
	if (DECOR_CHECK_EXIST(&uLocal_10, "Gringo_PropInUse"))
	{
		DECOR_REMOVE(&uLocal_10, "Gringo_PropInUse");
		uVar1 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(&uVar1))
		{
			iVar2 = GET_OBJECT_TYPE(&uVar1);
			if (iVar2 != 17 || iVar2 != 27)
			{
				SET_PROP_AI_OBSTACLE_ENABLED(&uVar1, 1);
			}
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_6))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_6);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_8))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_6);
	}
	DECOR_REMOVE(&uParam0, "MSGringo_setMoveThreshold");
	DESTROY_OBJECTSET(&iLocal_4);
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_36(&uParam0, 1);
		Function_35(&uParam0, 1);
		Function_34(&uParam0, 1);
	}
	return;
}

void Function_94(var uParam0, bool bParam1) //Position: 0x42C1 / 17089
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_116("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_116("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_141))
			{
				if (&bParam1)
				{
					Function_116("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_141);
			}
		}
	}
	if (&bParam1)
	{
		Function_116("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_95(int iParam0, int iParam1) //Position: 0x43D1 / 17361
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_96(struct<69> Param0) //Position: 0x43E9 / 17385
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
	Function_61(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_64(&Param0 + 64, 2);
	Function_47(&Param0 + 64, 8);
	Function_47(&Param0 + 64, 16);
	Function_47(&Param0 + 64, 64);
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
	if (!Function_100(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_64(&Param0 + 64, 32);
			}
			else
			{
				Function_47(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_47(&Param0 + 64, 32);
		}
		if (Function_84(Param0.f_64, 32))
		{
			Function_64(&Param0 + 64, 128);
		}
		else
		{
			Function_47(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_47(&Param0 + 64, 32);
	}
	if (Function_99(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_64(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_64(&Param0 + 64, 128);
		}
	}
	if (Function_91(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_64(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_97(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_97(var uParam0, int iParam1) //Position: 0x4705 / 18181
{
	uParam0 = &uParam0;
	iParam1 = &iParam1;
	Function_98(&iParam1, 0);
	return;
}

void Function_98(var uParam0, int iParam1) //Position: 0x471D / 18205
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("AttachProp", 1, &uParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uLocal_10 = GET_OBJECT_FROM_PHYSINST(GRINGO_GET_PROP_FROM_COMPONENT(&uVar0));
		DECOR_SET_BOOL(&uLocal_10, "Gringo_PropInUse", true);
		SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(&uLocal_10), 0);
	}
	uVar1 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(&uVar1))
	{
		iVar2 = GET_OBJECT_TYPE(&uVar1);
		if (iVar2 != 17 || iVar2 != 27)
		{
			SET_PROP_AI_OBSTACLE_ENABLED(&uVar1, 0);
			SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(&uVar1), 0);
			if (IS_ACTOR_VALID(&iParam1))
			{
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar1, &iParam1, 0);
			}
		}
	}
	if (IS_ACTOR_VALID(&iParam1))
	{
		GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), &iParam1);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam1, 0);
	}
	return;
}

bool Function_99(int iParam0) //Position: 0x47DB / 18395
{
	return Function_7(&iParam0, "DrawWeapon", 0);
}

bool Function_100(int iParam0) //Position: 0x47F5 / 18421
{
	return Function_7(&iParam0, "AllowWeapon", 0);
}

void Function_101(int iParam0, var uParam1) //Position: 0x4810 / 18448
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_102(&uParam1, &bVar0);
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

bool Function_102(var uParam0, int iParam1) //Position: 0x484E / 18510
{
	return Function_9(&uParam0, "UseName", &iParam1);
}

bool Function_103(struct<65> Param0) //Position: 0x4867 / 18535
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
				if (!Function_111(6))
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
		if (!Function_107(&uVar1, &Param0 + 16))
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
		if (!Function_84(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_64(&Param0 + 64, 1);
			}
			else
			{
				Function_47(&Param0 + 64, 1);
			}
			if (Function_84(Param0.f_64, 1))
			{
				Function_95("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_68(&Param0 + 16);
				Var8 = Function_68(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_106(&Param0 + 16);
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
				if (!Function_105(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_104(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_67(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_67(&Param0 + 16));
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

bool Function_104(int iParam0) //Position: 0x4B5F / 19295
{
	return Function_11(&iParam0, "ActivationCone", 0.0f);
}

bool Function_105(var uParam0, int iParam1) //Position: 0x4B7D / 19325
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
	Function_68(&iParam1);
	Var0 = Function_68(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_68(&iParam1);
	Var0 = Function_68(&iParam1);
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

bool Function_106(int iParam0) //Position: 0x4C1D / 19485
{
	return Function_11(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_107(var uParam0, int iParam1) //Position: 0x4C3D / 19517
{
	var uVar0;
	struct<8> Var1;
	
	uParam0 = &uParam0;
	if (DECOR_CHECK_EXIST(&uParam0, "MoveObj_Dest"))
	{
		uVar0 = DECOR_GET_OBJECT(&uParam0, "MoveObj_Dest");
		if (!IS_OBJECT_VALID(&uVar0))
		{
			return 0;
		}
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_109("moveboxgrpset") };
		if (DECOR_GET_BOOL(&uParam0, "MoveObj_IsVehicle"))
		{
			Function_108(&uVar0, &Var1, "Load");
		}
		else
		{
			Function_108(&uVar0, &Var1, "putdown");
		}
		return 1;
	}
	return Function_31(&iParam1, &uParam0, &iLocal_21);
	return 0;
}

void Function_108(int iParam0, var uParam1, var uParam2) //Position: 0x4CF1 / 19697
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	uParam2 = &uParam2;
	uVar0 = &Global_46715;
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "MSGringo_Layout"))
	{
		uVar0 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "MSGringo_Layout"));
	}
	if (!IS_OBJECTSET_VALID(&uLocal_2))
	{
		if (!IS_LAYOUTREF_VALID(&Global_46715))
		{
			LOG_ERROR("gLayout_LocalRegion is invalid!!");
		}
		uLocal_2 = CREATE_OBJECTSET_IN_LAYOUT(&uParam1, &uVar0, 4294967295, 0);
	}
	bVar2 = true;
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uLocal_2))
	{
		iVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_2);
		if (&iVar3 == &iParam0)
		{
			bVar2 = false;
			bVar1 = 999999;
		}
		bVar1++;
	}
	if (bVar2)
	{
		ADD_OBJECT_TO_OBJECTSET(&iParam0, &uLocal_2);
	}
	DECOR_SET_STRING(&iParam0, "UseAnim", &uParam2);
	iLocal_12 = 1;
	if (!IS_OBJECTSET_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), &uVar0, 4294967295, 0);
	}
	return;
}

struct<32> Function_109(char* cParam0) //Position: 0x4DFE / 19966
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110("0", &cVar8, ""), 4);
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

struct<32> Function_110(char* cParam0) //Position: 0x4E6A / 20074
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_111(int iParam0) //Position: 0x4E8C / 20108
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_112(int iParam0) //Position: 0x4EA8 / 20136
{
	iParam0 = &iParam0;
	return;
}

void Function_113(var uParam0, int iParam1) //Position: 0x4EB4 / 20148
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_114(&(vLocal_22[iLocal_1329]), &uParam0);
		iLocal_132++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 6)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_113(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x4F20 / 20256
{
	*(&iParam0 + 16) = &iParam1;
	Function_47(&iParam0 + 64, 1);
	return;
}

void Function_115(int iParam0) //Position: 0x4F38 / 20280
{
	iParam0 = &iParam0;
	return;
}

void Function_116(int iParam0) //Position: 0x4F44 / 20292
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

