//Decompiled with MagicRDR v1.0
//Function Count : 128
//Statics Count : 136
//Natives Count : 284
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	float fLocal_6 = 0.0f;
	float fLocal_7 = 0.0f;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	bool bLocal_10 = false;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	struct<9> Local_13[6];
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
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	var uLocal_133 = 0;
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
	Function_127("STARTS");
	Function_126(&uScriptParam_0);
	iLocal_123 = 0;
	Function_124(&uScriptParam_0, &iLocal_123);
	while (IS_GRINGO_ACTIVE())
	{
		Function_123(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_124);
		}
		iVar2 = 0;
		bLocal_131 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_123 - 1))
			{
				if (&vLocal_13[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_123;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_131 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_117(&(vLocal_13[iVar39]), &bVar4))
						{
							Function_115(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_13[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_117(&(vLocal_13[iVar39]), &bVar4))
						{
							Function_115(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_13[iVar39] + 16);
							if (bVar4)
							{
								Function_111(&(vLocal_13[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_13[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_110("eGRINGO_EndUse: Stop use by request", &vLocal_13[iVar39] + 24);
							Function_109(&vLocal_13[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_13[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_13[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_13[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_13[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_99(&(vLocal_13[iVar39]), 0);
							}
							else if (vLocal_13[iVar39].f_68 < 8)
							{
								Function_98(&(vLocal_13[iVar39]));
								vLocal_13[iVar39].f_68 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_127("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_123 - 1))
			{
				if (Function_97(vLocal_13[iVar09].f_64, 2))
				{
					if (!Function_28(&(vLocal_13[iVar09])))
					{
						Function_127("Quitting due to update end");
						Function_99(&(vLocal_13[iVar09]), 1);
					}
				}
				if (Function_27(&(vLocal_13[iVar09]), 0))
				{
					Function_17(&(vLocal_13[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_123 - 1))
		{
			if (Function_97(vLocal_13[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_131)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_132))
	{
		Function_127("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_132);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_123 - 1))
	{
		if (Function_97(vLocal_13[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_13[iVar09] + 24);
			Function_99(&(vLocal_13[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_13[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_13[iVar09] + 16);
		}
		Function_27(&(vLocal_13[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_127("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x436 / 1078
{
	iParam0 = &iParam0;
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_4))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_4);
	}
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x460 / 1120
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

int Function_3() //Position: 0x4A2 / 1186
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x4A9 / 1193
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	iParam0 = &iParam0;
	if (!DECOR_CHECK_EXIST(&Global_54076, "DoingFastTravel") && iLocal_8)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		iLocal_8 = 0;
	}
	bVar9 = GRINGO_GET_MY_OBJECT_REF();
	if (((!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2) && !DECOR_CHECK_EXIST(GET_TARGET_ACTOR(), "ChangeOutfits")) && GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&bVar9))) && !UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		fLocal_7 = Function_14(&Global_54076, GRINGO_GET_MY_OBJECT_REF());
		if ((((fLocal_7 >= 1,75f && !Function_10(&Global_54076, 0, 0)) && 1) && !Function_9(0, 0, 1, 1)) && (!Function_5(49, 0) || Function_5(57, 0)))
		{
			uLocal_2 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Outfits", 36, "@GENERIC.USE2", false, 0, 0, 0, 4294967295, 0);
		}
	}
	else
	{
		if ((DECOR_CHECK_EXIST(GET_TARGET_ACTOR(), "ChangeOutfits") || !GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&bVar9))) || UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
			}
			return 0;
		}
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_2))
		{
			SATCHEL_TOGGLE_NO_PAUSE_OUTFIT(1);
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_4))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_4);
			}
			RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
			SET_ACTOR_DRUNK(&Global_54076, 0);
			strcpy(&cVar0, "out_", 32);
			stradd(&cVar0, &Global_42265[Global_428259] + 32, 32);
			iVar8 = STRING_TO_HASH(&cVar0);
			SATCHEL_SET_CURRENT_OUTFIT(iVar8);
			SATCHEL_ALLOW_OUTFIT_CHANGE(1);
			DECOR_SET_BOOL(&Global_54076, "SwitchOutfitsHouse", true);
			UI_ENTER("OutfitMenuProxy");
			return 0;
		}
		fLocal_7 = Function_14(&Global_54076, &bVar9);
		if (fLocal_7 < 1,75f)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
			}
		}
		else if (Function_10(&Global_54076, 0, 0))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
			}
		}
	}
	if (((!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_4) && !DECOR_CHECK_EXIST(GET_TARGET_ACTOR(), "ChangeOutfits")) && GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&bVar9))) && !UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		fLocal_7 = Function_14(&Global_54076, GRINGO_GET_MY_OBJECT_REF());
		if (((fLocal_7 >= 1,75f && !Function_10(&Global_54076, 0, 0)) && 1) && !Function_9(0, 0, 1, 1))
		{
			uLocal_4 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Travel", 36, "@UI.CANCELMINIGAME", false, 0, 0, 0, 4294967295, 0);
		}
	}
	else
	{
		if ((DECOR_CHECK_EXIST(GET_TARGET_ACTOR(), "ChangeOutfits") || !GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&bVar9))) || UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_4))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_4);
			}
			return 0;
		}
		fLocal_7 = Function_14(&Global_54076, &bVar9);
		if (fLocal_7 < 1,75f)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_4))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_4);
			}
			return 0;
		}
		if (Function_10(&Global_54076, 0, 0))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_4))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_4);
			}
			return 0;
		}
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_4))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
			}
			RELEASE_SCRIPT_USE_CONTEXT(&uLocal_4);
			SET_ACTOR_DRUNK(&Global_54076, 0);
			DECOR_SET_BOOL(&Global_54076, "DoingFastTravel", true);
			DECOR_SET_BOOL(&Global_54076, "playerFastTravelOnFoot", true);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			iLocal_8 = 1;
			return 0;
		}
	}
	return 0;
}

bool Function_5(int iParam0, bool bParam1) //Position: 0x88A / 2186
{
	int iVar0;
	
	iVar0 = Function_7(iParam0);
	if (!Function_6(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_6(int iParam0) //Position: 0x8C8 / 2248
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_7(int iParam0) //Position: 0x8DF / 2271
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_8(int iParam0) //Position: 0x8F9 / 2297
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x90F / 2319
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_10(int iParam0, bool bParam1, bool bParam2) //Position: 0x9BE / 2494
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
	if (Function_13(&iParam0))
	{
		return 1;
	}
	if (Function_12(&iParam0))
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
	if (Function_11())
	{
		return 1;
	}
	return 0;
}

bool Function_11() //Position: 0xA82 / 2690
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_12(int iParam0) //Position: 0xA99 / 2713
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_13(int iParam0) //Position: 0xAA5 / 2725
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

float Function_14(var uParam0, bool bParam1) //Position: 0xAB4 / 2740
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_16(&uParam0);
			Var0 = Function_16(&uParam0);
			Function_15(&bParam1);
			Var2 = Function_15(&bParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_15(int iParam0) //Position: 0xB56 / 2902
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_16(int iParam0) //Position: 0xBC4 / 3012
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

void Function_17(struct<69> Param0) //Position: 0xC30 / 3120
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_97(Param0.f_64, 2))
	{
		Function_109(&Param0 + 24, 0);
	}
	else if (UNK_0x0A0E660E() || Function_26(&Param0))
	{
		if (Param0.f_68 == 6)
		{
			if (Function_24(&Param0) <= Function_22(&Param0 + 16))
			{
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
					{
						if (UNK_0x0A0E660E() || !Global_6663)
						{
							iVar1 = Function_20(&Param0 + 16, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_131 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_132))
								{
									Function_127("ManagePlayerQuit: Create quit context");
									if (Function_19(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_132 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_132 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_132))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_98(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_132))
									{
										Function_127("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_132);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", &Param0 + 16, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
								{
									if (Function_18(&Param0 + 24))
									{
										Function_98(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_132))
										{
											Function_127("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_132);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_132))
							{
								Function_127("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_132);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_132))
		{
			Function_127("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_132);
		}
	}
	return;
}

bool Function_18(int iParam0) //Position: 0xF64 / 3940
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

bool Function_19(bool bParam0, var uParam1, int iParam2) //Position: 0x107D / 4221
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

bool Function_20(char* cParam0, int iParam1) //Position: 0x109B / 4251
{
	return Function_21(&cParam0, "UseQuit", &iParam1);
}

bool Function_21(char* cParam0, char* cParam1, int iParam2) //Position: 0x10B4 / 4276
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

float Function_22(int iParam0) //Position: 0x1104 / 4356
{
	return Function_23(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_23(bool bParam0, var uParam1, int iParam2) //Position: 0x1122 / 4386
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &bParam0);
	return iVar0;
}

float Function_24(vector3 vParam0) //Position: 0x113A / 4410
{
	if (Function_26(&vParam0))
	{
		if (Function_25(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_25(int iParam0) //Position: 0x1207 / 4615
{
	return Function_97(iParam0, 2);
}

bool Function_26(int iParam0) //Position: 0x1215 / 4629
{
	return Function_97(iParam0, 1);
}

bool Function_27(int iParam0, int iParam1) //Position: 0x1223 / 4643
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

bool Function_28(struct<69> Param0) //Position: 0x1270 / 4720
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
	
	bVar11 = Function_96(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_110("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_19(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_110("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_110("Incapacitation quit", &Param0 + 24);
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
			bLocal_131 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_95(&Param0 + 16, &fVar22))
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
				if (Function_90(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_89(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_89(&Param0);
			}
			if (!Function_88(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_131 = true;
			Function_87(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_97(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_78(&Param0 + 16);
			}
			fVar18 = Function_77(&Param0 + 16);
			if (Function_24(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_97(Param0.f_64, 1))
			{
				Function_72(&Param0 + 16, &Var3, &uVar5);
				if (!Function_97(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_71(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_71(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_70());
				}
				if (!Function_97(Param0.f_64, 1024))
				{
					Function_71(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_19(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_90(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_97(Param0.f_64, 1024))
				{
					Function_71(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_19(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_97(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_71(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_71(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_97(Param0.f_64, 32))
			{
				bLocal_131 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_69(&Param0 + 16);
			bLocal_131 = true;
			Function_68(&Param0);
			Function_65(&Param0, Function_67(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_97(Param0.f_64, 1);
			}
			bVar0 = Function_64(&Param0 + 24, &Param0 + 16, bVar29);
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
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_21(&bVar1, "AttachBone", &bVar9), Function_21(&bVar1, "AttachLocator", &bVar9), 1))
						{
							Function_63(&bVar1, &Param0 + 24);
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
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_21(&bVar1, "AttachBone", &bVar9), Function_21(&bVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_63(&bVar1, &Param0 + 24);
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
					Function_54(&Param0, &uVar7, &iLocal_129, &uLocal_127);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_71(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_53(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_97(Param0.f_64, 16))
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
				if (Function_52(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_51(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_50(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_49(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_50(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_48(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_50(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_47(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_71(&Param0 + 64, 8);
					}
					else
					{
						Function_53(&Param0 + 64, 8);
					}
					if (Function_97(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_53(&Param0 + 64, 8);
				}
				if (Function_46(&Param0 + 16))
				{
					NET_SET_NODE_REPLICATION(&Param0 + 24, 1, 1);
					UNK_0xC17BAD12(&Param0 + 24);
				}
				uVar33 = Function_21(&Param0 + 16, "CustomReactNode", &bVar32);
				if (bVar32)
				{
					SET_REACT_NODE_FOR_ACTOR(&Param0 + 24, &uVar33);
				}
				iVar34 = 1;
				bVar35 = Function_19(&Param0 + 16, "CanAnimalsAttack", iVar34);
				if (!bVar35)
				{
					if (IS_ACTOR_VALID(&Param0 + 24))
					{
						SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 0);
					}
				}
				Function_41(&Param0 + 24, &Param0 + 16);
				bVar36 = Function_19(&Param0 + 16, "AllowTalking", 1);
				if (!bVar36)
				{
					STOP_PED_SPEAKING(&Param0 + 24, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				Function_40();
			}
			Param0.f_68 = 6;
			if (Function_97(Param0.f_64, 1))
			{
				if (Function_39(&Param0 + 16))
				{
					Function_2("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_38(&Param0 + 24, &Param0 + 16))
			{
				Function_2("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_64(&Param0 + 24, &Param0 + 16, Function_97(Param0.f_64, 1));
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
			if (Function_24(&Param0) <= Function_22(&Param0 + 16))
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
				bVar55 = Function_37(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, *(&Param0 + 32)) < bVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_36())
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
					if (Function_35(&Param0 + 16) <= 0.0f)
					{
						if (Function_24(&Param0) < Function_35(&Param0 + 16))
						{
							Function_2("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_127("nRewarding");
			Function_34(&Param0 + 24, &Param0 + 16);
			Function_33(&Param0 + 24, &Param0 + 16);
			Function_32(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_71(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_131 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_19(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_31())
						{
							Function_78(&Param0 + 16);
						}
					}
				}
				else
				{
					DECOR_REMOVE(&Param0 + 24, "NoGringoCamera");
				}
			}
			if (Function_19(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_30(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_97(Param0.f_64, 1024))
			{
				Function_53(&Param0 + 64, 1024);
				if (!Function_19(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_131 = true;
			bVar0 = Function_64(&Param0 + 24, &Param0 + 16, Function_97(Param0.f_64, 1));
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
	Function_29(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_29(var uParam0, int iParam1) //Position: 0x25A5 / 9637
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_30(var uParam0, var uParam1) //Position: 0x25BC / 9660
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_31() //Position: 0x25CE / 9678
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

void Function_32(var uParam0, int iParam1) //Position: 0x2601 / 9729
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

void Function_33(var uParam0, int iParam1) //Position: 0x267F / 9855
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

void Function_34(int iParam0, int iParam1) //Position: 0x26FB / 9979
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_35(int iParam0) //Position: 0x270D / 9997
{
	return Function_23(&iParam0, "UseTime", 5.0f);
}

bool Function_36() //Position: 0x2724 / 10020
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_37(int iParam0) //Position: 0x2731 / 10033
{
	return Function_23(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_38(bool bParam0, bool bParam1) //Position: 0x2752 / 10066
{
	int iVar0;
	
	if (GET_CURRENT_GAME_TIME() - fLocal_6) < Function_23(&bParam1, "TimeBeforeSave", 5.0f)
	{
		if (DECOR_CHECK_EXIST(&bParam0, "CanSaveNowCamp"))
		{
			DECOR_SET_BOOL(&bParam0, "CanSaveNowCamp", true);
		}
		if (DECOR_CHECK_EXIST(&bParam0, "CanSaveNowBed"))
		{
			DECOR_SET_BOOL(&bParam0, "CanSaveNowBed", true);
		}
	}
	bParam1 = &bParam1;
	if (HUD_IS_FADED())
	{
		if (IS_LAYOUTREF_VALID(&uLocal_11))
		{
			iVar0 = FIND_NAMED_LAYOUT("RCM_Ricketts2_Layout");
			if (IS_LAYOUTREF_VALID(&iVar0))
			{
				DESTROY_LAYOUT_OBJECTS(&iVar0);
				DESTROY_LAYOUT(&iVar0);
			}
			DESTROY_LAYOUT_OBJECTS(&uLocal_11);
			DESTROY_LAYOUT(&uLocal_11);
			CAMERA_RESET(0);
		}
	}
	return 1;
}

bool Function_39(bool bParam0) //Position: 0x2836 / 10294
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_40() //Position: 0x2856 / 10326
{
	return;
}

void Function_41(int iParam0, bool bParam1) //Position: 0x285C / 10332
{
	var uVar0;
	
	if (Function_19(&bParam1, "IsCamp", 1))
	{
		DECOR_SET_BOOL(&iParam0, "CanSaveNowCamp", false);
	}
	else
	{
		DECOR_SET_BOOL(&iParam0, "CanSaveNowBed", false);
		uVar0 = LOCATE_NAMED_POINT(Global_54078, 10.0f, "player_save", 1);
		if (IS_OBJECT_VALID(&uVar0))
		{
			SET_GRINGO_OBJECT_REF_ATTR(&uVar0, "MyRestartFlag", &bParam1);
			DECOR_SET_OBJECT(&iParam0, "SAVE_restartFlag", &uVar0);
		}
	}
	if (DECOR_CHECK_EXIST(&iParam0, "bPlayerSleeping"))
	{
		DECOR_REMOVE(&iParam0, "bPlayerSleeping");
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_4))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_4);
	}
	Function_44(0, 0);
	Function_42(6);
	fLocal_6 = GET_CURRENT_GAME_TIME();
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

void Function_42(int iParam0) //Position: 0x2974 / 10612
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 101;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		iVar2 = 0;
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_43(&(Global_26652[iVar04]));
		}
		if (GET_DAY(&(Global_26652[iVar04])) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_26652[iVar04]), iVar2, &iParam0, false, 0);
		*(&Global_27462[iVar052] + 376) = &Global_26652[iVar04];
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_43(&(Global_26652[iVar04]));
		}
		iVar0++;
	}
	return;
}

void Function_43(int iParam0) //Position: 0x2A3A / 10810
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_44(int iParam0, int iParam1) //Position: 0x2A84 / 10884
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_45(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_45(struct<113> Param0) //Position: 0x2B0B / 11019
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

bool Function_46(char* cParam0) //Position: 0x2B69 / 11113
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2B76 / 11126
{
	return Function_19(&iParam0, "OneShotKill", 0);
}

bool Function_48(char* cParam0, int iParam1) //Position: 0x2B91 / 11153
{
	return Function_21(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_49(int iParam0) //Position: 0x2BB1 / 11185
{
	return Function_19(&iParam0, "LinkToParentAnim", 0);
}

var Function_50(int iParam0) //Position: 0x2BD1 / 11217
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_13 - 1))
	{
		if (&vLocal_13[iVar09] + 16 == &iParam0)
		{
			return &vLocal_13[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_51(int iParam0) //Position: 0x2C08 / 11272
{
	return Function_19(&iParam0, "LinkParentToAnim", 0);
}

bool Function_52(int iParam0) //Position: 0x2C28 / 11304
{
	return Function_19(&iParam0, "SingularUse", 0);
}

void Function_53(var uParam0, int iParam1) //Position: 0x2C43 / 11331
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_54(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2C59 / 11353
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
	uVar2 = Function_62(&iParam0 + 16, &bVar0);
	uVar3 = Function_61(&iParam0 + 16, &bVar1);
	uVar4 = Function_60(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_59(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_58(&iParam0 + 16, &bVar7);
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
		if (Function_36())
		{
			Function_57();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_56(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_55(), Function_56(&iParam0 + 16, &iVar10), 0, bVar9);
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
			if (Function_19(&uVar4, "LinkToUser", 0))
			{
				if (Function_36())
				{
					Function_57();
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

var Function_55() //Position: 0x2F7D / 12157
{
	int iVar0;
	
	return &iVar0;
}

bool Function_56(char* cParam0, int iParam1) //Position: 0x2F86 / 12166
{
	return Function_21(&cParam0, "TargetLocator", &iParam1);
}

void Function_57() //Position: 0x2FA5 / 12197
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_58(char* cParam0, int iParam1) //Position: 0x2FB4 / 12212
{
	return Function_21(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_59(char* cParam0, int iParam1) //Position: 0x2FD8 / 12248
{
	return Function_21(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_60(int iParam0) //Position: 0x2FFE / 12286
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_61(var uParam0, int iParam1) //Position: 0x301C / 12316
{
	return Function_21(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_62(var uParam0, int iParam1) //Position: 0x303E / 12350
{
	return Function_21(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_63(bool bParam0, int iParam1) //Position: 0x3060 / 12384
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

var Function_64(var uParam0, int iParam1, bool bParam2) //Position: 0x3128 / 12584
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

void Function_65(int iParam0, float fParam1) //Position: 0x31A4 / 12708
{
	if (!Function_26(&iParam0))
	{
		Function_66(&iParam0, fParam1);
	}
	return;
}

void Function_66(vector3 vParam0) //Position: 0x31BC / 12732
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_71(&vParam0, 1);
	Function_53(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_67(int iParam0) //Position: 0x31E1 / 12769
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_23(&iParam0, "RandUseTime", 0.0f));
}

void Function_68(vector3 vParam0) //Position: 0x3202 / 12802
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_69(var uParam0) //Position: 0x3219 / 12825
{
	uParam0 = &uParam0;
	return;
}

int Function_70() //Position: 0x3225 / 12837
{
	return 1;
}

void Function_71(var uParam0, int iParam1) //Position: 0x322C / 12844
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_72(int iParam0, var uParam1, int iParam2) //Position: 0x323D / 12861
{
	bool bVar0;
	
	Function_75(&iParam0);
	uParam1 = Function_75(&iParam0);
	iParam2 = Function_74(&iParam0);
	bVar0 = Function_73(&iParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

int Function_73(int iParam0) //Position: 0x3282 / 12930
{
	return Function_23(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_74(int iParam0) //Position: 0x32AE / 12974
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_75(int iParam0) //Position: 0x32BA / 12986
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_76(&iParam0))
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

bool Function_76(int iParam0) //Position: 0x33BC / 13244
{
	return Function_19(&iParam0, "UsePosActorRelative", 0);
}

int Function_77(int iParam0) //Position: 0x33DF / 13279
{
	return Function_23(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_78(bool bParam0) //Position: 0x3407 / 13319
{
	struct<25> Var0;
	
	bParam0 = &bParam0;
	if (!iLocal_9)
	{
		uLocal_11 = CREATE_LAYOUT("sleepBedSave_Layout");
		iLocal_9 = 1;
		Function_86(GRINGO_GET_MY_OBJECT_REF());
		*(&Var0 + 12) = Function_86(GRINGO_GET_MY_OBJECT_REF());
		Function_85(GRINGO_GET_MY_OBJECT_REF());
		Var0 = Function_85(GRINGO_GET_MY_OBJECT_REF());
		Var0.f_24 = 0;
		if (bLocal_10)
		{
			Function_82(&uLocal_11, 0, &Var0, 1, 0, 0);
		}
		else
		{
			Function_79(&uLocal_11, 0, &Var0, 1, 0, 0);
		}
	}
	return;
}

var Function_79(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x3473 / 13427
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nSleepBedR", 1, 1);
	}
	Function_80(&uVar0, &uParam2);
	if (fParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_80(Vector3 vParam0, var uParam1) //Position: 0x34F9 / 13561
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 0);
	Function_81(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&vParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&vParam0, 0, 100.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 100.0f, 1, 0);
	return;
}

void Function_81(bool bParam0, struct<25> Param1) //Position: 0x3538 / 13624
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 54,53894f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(1,736862f, 1,131546f, -0,78833f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&bParam0, Var0);
	SET_CAMERASHOT_DIRECTION(StackVal, &bParam0, Vector(0,847467f, 0,029813f, -0,53001f), 0);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_82(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x35E8 / 13800
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nSleepBedL", 1, 1);
	}
	Function_83(&uVar0, &uParam2);
	if (fParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_83(var uParam0, var uParam1) //Position: 0x366E / 13934
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_84(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 100.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 100.0f, 1, 0);
	return;
}

void Function_84(int iParam0, struct<25> Param1) //Position: 0x36AD / 13997
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 54,53894f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0,91394f, 1,191498f, -1,790283f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&iParam0, Var0);
	SET_CAMERASHOT_DIRECTION(StackVal, &iParam0, Vector(0,385359f, 0,069064f, -0,920178f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

struct<8> Function_85(int iParam0) //Position: 0x375D / 14173
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

struct<8> Function_86(int iParam0) //Position: 0x3786 / 14214
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

void Function_87(int iParam0) //Position: 0x37AF / 14255
{
	iParam0 = &iParam0;
	return;
}

bool Function_88(int iParam0) //Position: 0x37BB / 14267
{
	return Function_19(&iParam0, "MaintainPosture", 0);
}

void Function_89(int iParam0) //Position: 0x37DA / 14298
{
	if (!Function_26(&iParam0))
	{
		Function_66(&iParam0, 0.0f);
	}
	return;
}

bool Function_90(var uParam0, int iParam1) //Position: 0x37F1 / 14321
{
	struct<2> Var0;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Function_75(&iParam1);
	Var0 = Function_75(&iParam1);
	bVar2 = Function_74(&iParam1);
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var0, bVar2, 0, 1, true);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(&iParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_94(&uParam0, &iParam1);
	}
	uVar3 = Function_93(&iParam1);
	uVar4 = Function_73(&iParam1);
	Function_91(&iParam1);
	iVar5 = Function_91(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar5, uVar3, 0,2f, 1, bVar2, uVar4, 0, 0);
}

struct<8> Function_91(int iParam0) //Position: 0x3882 / 14466
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_92(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_92(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_92(var uParam0, var uParam1, struct<2> Param2) //Position: 0x38A6 / 14502
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_93(int iParam0) //Position: 0x38C5 / 14533
{
	return Function_23(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_94(var uParam0, int iParam1) //Position: 0x38E9 / 14569
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
	
	bVar0 = Function_93(&iParam1);
	fVar1 = Function_73(&iParam1);
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

bool Function_95(var uParam0, int iParam1) //Position: 0x3A11 / 14865
{
	iParam1 = Function_23(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_96(var uParam0) //Position: 0x3A3F / 14911
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

bool Function_97(var uParam0, int iParam1) //Position: 0x3B58 / 15192
{
	return (uParam0 && iParam1) == 0;
}

void Function_98(struct<69> Param0) //Position: 0x3B65 / 15205
{
	if (Function_97(Param0.f_64, 16))
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

void Function_99(struct<69> Param0) //Position: 0x3BE7 / 15335
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
	Function_21(&Param0 + 16, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			RESET_REACT_NODE_FOR_ACTOR(&Param0 + 24);
		}
	}
	iVar1 = 1;
	bVar2 = Function_19(&Param0 + 16, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 1);
		}
	}
	bVar3 = Function_19(&Param0 + 16, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(&Param0 + 24, 0);
	}
	if (Param0.f_68 < 8)
	{
		Function_30(&Param0 + 24, &Param0 + 16);
	}
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_97(Param0.f_64, 32)) && Function_19(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_106(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_97(Param0.f_64, 64));
		Function_29(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_19(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_97(Param0.f_64, 128) && Function_19(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_51(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_97(Param0.f_64, 16))
			{
				Function_98(&Param0);
				Function_53(&Param0 + 64, 16);
			}
			if (Function_97(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_105(&Param0 + 16) && Function_97(Param0.f_64, 512))
			{
				Function_53(&Param0 + 64, 512);
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
	if (Function_49(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_50(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_104(&Param0 + 16);
	bVar11 = Function_19(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_103(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_97(Param0.f_64, 256))
			{
				Function_53(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_129)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_127));
		iLocal_129 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_52(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_132))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_132);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_68(&Param0);
	Function_89(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_102(&Param0 + 16), &Param0 + 16);
	}
	Function_53(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_100();
		}
	}
	else
	{
		Function_100();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_100() //Position: 0x4193 / 16787
{
	var uVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		uVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(&uVar0))
		{
			DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(Function_101()), "SaveCameraObject", &uVar0);
		}
	}
	return;
}

var Function_101() //Position: 0x41E3 / 16867
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_102(int iParam0) //Position: 0x41F8 / 16888
{
	return Function_23(&iParam0, "ReuseDelay", 15.0f);
}

void Function_103(int iParam0, var uParam1) //Position: 0x4216 / 16918
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_62(&iParam0 + 16, &uVar0);
	Function_61(&iParam0 + 16, &uVar1);
	iVar2 = Function_60(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_104(int iParam0) //Position: 0x4257 / 16983
{
	iParam0 = &iParam0;
	return;
}

bool Function_105(int iParam0) //Position: 0x4263 / 16995
{
	return Function_19(&iParam0, "BlockBumpReactions", 0);
}

void Function_106(var uParam0, var uParam1) //Position: 0x4285 / 17029
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	if (IS_LAYOUTREF_VALID(&uLocal_11))
	{
		DESTROY_LAYOUT_OBJECTS(&uLocal_11);
		DESTROY_LAYOUT(&uLocal_11);
		CAMERA_RESET(0);
		iLocal_9 = 0;
	}
	Function_108(0);
	Function_107();
	if (IS_ACTOR_VALID(&Global_21369 + 72) && !IS_GAME_RESETTING())
	{
		DESTROY_ACTOR(&Global_21369 + 72);
		(&Global_21369 + 72 + 36) = 4294967294;
	}
	DECOR_REMOVE(&uParam0, "SAVE_restartFlag");
	DECOR_REMOVE(&uParam0, "CanSaveNowCamp");
	DECOR_REMOVE(&uParam0, "CanSaveNowBed");
	DECOR_REMOVE(&uParam0, "bPlayerSleeping");
	SET_ACTOR_INVULNERABILITY(&uParam0, false);
	AI_STOP_IGNORING_ACTOR(&uParam0);
	SET_SAVING_GAME_ZOMBIE(0);
	UI_POP("nCutscenes");
	return;
}

void Function_107() //Position: 0x4362 / 17250
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26200)
	{
		if (Global_26200[iVar014].f_40 == 1)
		{
			if (IS_OBJECT_VALID(&Global_26200[iVar014] + 104))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iVar014] + 104), false);
			}
		}
		iVar0++;
	}
	return;
}

void Function_108(bool bParam0) //Position: 0x43AA / 17322
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26200)
	{
		if (Global_26200[iVar014].f_40 == 4)
		{
			Global_26200[iVar014].f_40 = 1;
			if (&bParam0)
			{
				DECOR_SET_BOOL(&Global_54076, "OnLoad_ForceSpawnPlayerHorse", true);
			}
		}
		iVar0++;
	}
	return;
}

void Function_109(var uParam0, bool bParam1) //Position: 0x4409 / 17417
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_127("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_127("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_132))
			{
				if (&bParam1)
				{
					Function_127("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_132);
			}
		}
	}
	if (&bParam1)
	{
		Function_127("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_110(int iParam0, int iParam1) //Position: 0x4519 / 17689
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_111(struct<69> Param0) //Position: 0x4531 / 17713
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
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_55(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_68(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_71(&Param0 + 64, 2);
	Function_53(&Param0 + 64, 8);
	Function_53(&Param0 + 64, 16);
	Function_53(&Param0 + 64, 64);
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
	if (!Function_114(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_71(&Param0 + 64, 32);
			}
			else
			{
				Function_53(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_53(&Param0 + 64, 32);
		}
		if (Function_97(Param0.f_64, 32))
		{
			Function_71(&Param0 + 64, 128);
		}
		else
		{
			Function_53(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_53(&Param0 + 64, 32);
	}
	if (Function_113(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_71(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_71(&Param0 + 64, 128);
		}
	}
	if (Function_105(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_71(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_112(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_112(var uParam0, int iParam1) //Position: 0x484D / 18509
{
	var uVar0;
	
	uParam0 = &uParam0;
	iParam1 = &iParam1;
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_4))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_4);
	}
	bLocal_10 = false;
	uVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if (STRING_CONTAINS_STRING(&uVar0, "bed_L"))
	{
		bLocal_10 = true;
	}
	SET_ACTOR_INVULNERABILITY(&uParam0, true);
	AI_IGNORE_ACTOR(&uParam0);
	SET_SAVING_GAME_ZOMBIE(1);
	UI_PUSH("nCutscenes");
	return;
}

bool Function_113(int iParam0) //Position: 0x48BE / 18622
{
	return Function_19(&iParam0, "DrawWeapon", 0);
}

bool Function_114(int iParam0) //Position: 0x48D8 / 18648
{
	return Function_19(&iParam0, "AllowWeapon", 0);
}

void Function_115(int iParam0, int iParam1) //Position: 0x48F3 / 18675
{
	var uVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	if (IS_PLAYER_SIGNED_IN() && !(SAVE_MANAGER_IS_SAVING_DISABLED() || SAVE_MANAGER_IS_SP_SAVING_DISABLED()))
	{
		iVar1 = Function_116(&iParam1, &uVar0);
	}
	else
	{
		iVar1 = "PlayerSleep_NoSignedIn";
	}
	GRINGO_SET_REQUEST_STRING(&iVar1);
	return;
}

bool Function_116(var uParam0, int iParam1) //Position: 0x493E / 18750
{
	return Function_21(&uParam0, "UseName", &iParam1);
}

bool Function_117(struct<65> Param0) //Position: 0x4957 / 18775
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
		if (ACTOR_HAS_ANIM_SET(&uVar1, "stand_hostage") && !Function_19(&Param0 + 16, "CutFreeGringo", 0))
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
				if (!Function_122(6))
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
		if (!Function_121(&uVar1, &Param0 + 16))
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
		if (!Function_97(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_71(&Param0 + 64, 1);
			}
			else
			{
				Function_53(&Param0 + 64, 1);
			}
			if (Function_97(Param0.f_64, 1))
			{
				Function_110("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_75(&Param0 + 16);
				Var8 = Function_75(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_120(&Param0 + 16);
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
				if (!Function_119(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_118(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_74(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_74(&Param0 + 16));
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

int Function_118(int iParam0) //Position: 0x4C4F / 19535
{
	return Function_23(&iParam0, "ActivationCone", 0.0f);
}

bool Function_119(var uParam0, int iParam1) //Position: 0x4C6D / 19565
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	bVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_23(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - bVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_75(&iParam1);
	Var0 = Function_75(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_75(&iParam1);
	Var0 = Function_75(&iParam1);
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

int Function_120(int iParam0) //Position: 0x4D0D / 19725
{
	return Function_23(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_121(var uParam0, int iParam1) //Position: 0x4D2D / 19757
{
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	if ((Global_6646 || Global_6647) || Function_9(0, 0, 1, 1))
	{
		return 0;
	}
	if (UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		return 0;
	}
	if ((DECOR_CHECK_EXIST(&uParam0, "CanSaveNowCamp") || DECOR_CHECK_EXIST(&uParam0, "CanSaveNowBed")) || DECOR_CHECK_EXIST(&uParam0, "SAVE_restartFlag"))
	{
		return 0;
	}
	return 1;
}

bool Function_122(int iParam0) //Position: 0x4DC5 / 19909
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_123(int iParam0) //Position: 0x4DE1 / 19937
{
	iParam0 = &iParam0;
	return;
}

void Function_124(var uParam0, int iParam1) //Position: 0x4DED / 19949
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_125(&(vLocal_13[iLocal_1239]), &uParam0);
		iLocal_123++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 6)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_124(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_125(int iParam0, int iParam1) //Position: 0x4E59 / 20057
{
	*(&iParam0 + 16) = &iParam1;
	Function_53(&iParam0 + 64, 1);
	return;
}

void Function_126(int iParam0) //Position: 0x4E71 / 20081
{
	iParam0 = &iParam0;
	return;
}

void Function_127(bool bParam0) //Position: 0x4E7D / 20093
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &bParam0, 0, 0, 0);
	return;
}

