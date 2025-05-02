//Decompiled with MagicRDR v1.0
//Function Count : 146
//Statics Count : 74
//Natives Count : 276
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	char[] cLocal_3[4] = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	struct<2> Local_13 = { 0, 0 } ;
	var uLocal_15 = 0;
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	struct<9> Local_23[2];
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
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = false;
	bool bLocal_70 = false;
	var uLocal_71 = 0;
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
	
	iLocal_2 = 0;
	iLocal_7 = 0;
	bLocal_16 = false;
	iLocal_17 = 0;
	iLocal_19 = 0;
	iLocal_20 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_145("STARTS");
	Function_144(&uScriptParam_0);
	iLocal_61 = 0;
	Function_142(&uScriptParam_0, &iLocal_61);
	while (IS_GRINGO_ACTIVE())
	{
		Function_141(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_62);
		}
		iVar2 = 0;
		bLocal_69 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_61 - 1))
			{
				if (&vLocal_23[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_61;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_69 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_136(&(vLocal_23[iVar39]), &bVar4))
						{
							Function_134(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_23[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_136(&(vLocal_23[iVar39]), &bVar4))
						{
							Function_134(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_23[iVar39] + 16);
							if (bVar4)
							{
								Function_130(&(vLocal_23[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_23[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_129("eGRINGO_EndUse: Stop use by request", &vLocal_23[iVar39] + 24);
							Function_128(&vLocal_23[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_23[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_23[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_23[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_23[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_121(&(vLocal_23[iVar39]), 0);
							}
							else if (vLocal_23[iVar39].f_68 < 8)
							{
								Function_120(&(vLocal_23[iVar39]));
								vLocal_23[iVar39].f_68 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_145("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_61 - 1))
			{
				if (Function_119(vLocal_23[iVar09].f_64, 2))
				{
					if (!Function_34(&(vLocal_23[iVar09])))
					{
						Function_145("Quitting due to update end");
						Function_121(&(vLocal_23[iVar09]), 1);
					}
				}
				if (Function_33(&(vLocal_23[iVar09]), 0))
				{
					Function_23(&(vLocal_23[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_61 - 1))
		{
			if (Function_119(vLocal_23[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_69)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_70))
	{
		Function_145("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_70);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_61 - 1))
	{
		if (Function_119(vLocal_23[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_23[iVar09] + 24);
			Function_121(&(vLocal_23[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_23[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_23[iVar09] + 16);
		}
		Function_33(&(vLocal_23[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_145("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x448 / 1096
{
	iParam0 = &iParam0;
	if (IS_BLIP_VALID(&uLocal_5))
	{
		REMOVE_BLIP(&uLocal_5);
		iLocal_17 = 0;
	}
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x466 / 1126
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

int Function_3() //Position: 0x4A8 / 1192
{
	return 2000;
}

int Function_4(int iParam0) //Position: 0x4B1 / 1201
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	iParam0 = &iParam0;
	if (!Function_22(6))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Global_54076) || (0 && !Function_21()))
	{
		return 0;
	}
	if (!iLocal_17)
	{
		Function_16(&iParam0);
		if (iLocal_12 < 4294967295)
		{
			iLocal_17 = 1;
			iLocal_12 = Function_12(StackVal, Global_43788, iLocal_10, Local_13);
		}
	}
	bVar0 = DECOR_CHECK_EXIST(&Global_54076, "SurvivalistCampRunning");
	bVar1 = IS_BLIP_VALID(&uLocal_5);
	if ((((Function_11(&Global_98980) && !Function_10(0, 2, 1, 1)) && !bVar0) && Function_6(1, 0)) || Function_21())
	{
		if (iLocal_12 != 4294967295)
		{
			if (!iLocal_7)
			{
				iLocal_7 = 1;
				uLocal_8 = MAKE_TIME_OF_DAY_EX(GET_DAY(&Global_17367[iLocal_122] + 8) + 1, GET_HOUR(&Global_17367[iLocal_122] + 8), GET_MINUTE(&Global_17367[iLocal_122] + 8), GET_SECOND(&Global_17367[iLocal_122] + 8));
			}
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uLocal_8))
			{
				if ((!bVar1 && !bVar0) && !bLocal_16)
				{
					Function_5(GRINGO_GET_MY_OBJECT_REF());
					uVar2 = Function_5(GRINGO_GET_MY_OBJECT_REF());
					uLocal_5 = ADD_BLIP_FOR_COORD(&uVar2, 409, 0, 2, 0);
					SET_BLIP_MAX_DISTANCE(&uLocal_5, 0,25f);
					SET_BLIP_SCALE(&uLocal_5, 0,75f);
				}
				else if (IS_BLIP_VALID(&uLocal_5) && bVar0)
				{
					REMOVE_BLIP(&uLocal_5);
					bVar1 = false;
				}
			}
			else if (bVar1 && bVar0)
			{
				REMOVE_BLIP(&uLocal_5);
				bVar1 = false;
			}
		}
		else if (bVar1 && bVar0)
		{
			REMOVE_BLIP(&uLocal_5);
			bVar1 = false;
		}
	}
	else if (bVar1 && bVar0)
	{
		REMOVE_BLIP(&uLocal_5);
		bVar1 = false;
	}
	if (bVar1)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "survivalist"))
		{
			SET_BLIP_MAX_DISTANCE(&uLocal_5, 1,25f);
		}
		else
		{
			SET_BLIP_MAX_DISTANCE(&uLocal_5, 0,25f);
		}
	}
	return 1;
}

struct<8> Function_5(int iParam0) //Position: 0x667 / 1639
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

int Function_6(var uParam0, bool bParam1) //Position: 0x690 / 1680
{
	int iVar0;
	
	iVar0 = Function_8(uParam0);
	if (!Function_7(iVar0))
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

bool Function_7(int iParam0) //Position: 0x6CE / 1742
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_8(int iParam0) //Position: 0x6E5 / 1765
{
	if (!Function_9(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_9(int iParam0) //Position: 0x6FF / 1791
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_10(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x715 / 1813
{
	uParam0 = &uParam0;
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
	if (Global_6636 && uParam2)
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
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

int Function_11(int iParam0) //Position: 0x7C4 / 1988
{
	int iVar0;
	
	iVar0 = iParam0 & 1073741824;
	if (iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int Function_12(var uParam0, int iParam1, struct<2> Param2) //Position: 0x7E2 / 2018
{
	int iVar0;
	
	if (!Function_15(uParam0))
	{
		return 4294967295;
	}
	if (iParam1 == 4294967295)
	{
		return 4294967295;
	}
	if (Function_14(StackVal, Param2))
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= Global_17367)
	{
		if (Global_17367[iVar02] == 0)
		{
			Global_17367[iVar02] = iParam1;
			Global_17367[iVar02].f_4 = Function_13(StackVal, Param2);
			*(&Global_17367[iVar02] + 8) = MAKE_TIME_OF_DAY_EX(false, true, 1, 1);
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

var Function_13(vector3 vParam0) //Position: 0x85E / 2142
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

bool Function_14(vector3 vParam0) //Position: 0x8AC / 2220
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_15(int iParam0) //Position: 0x8C4 / 2244
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_16(int iParam0) //Position: 0x8DA / 2266
{
	var uVar0;
	var uVar1;
	
	if (iLocal_2 == 0)
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Local_13);
		uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase", 3, &iParam0);
		cLocal_3 = GET_GRINGO_STRING_ATTR("herbtype", &uVar1, &uVar0);
		iLocal_12 = Function_18(StackVal, Local_13);
		if (Function_17(&cLocal_3, "goldenCurrant"))
		{
			iLocal_2 = 16;
			iLocal_11 = 494;
			iLocal_10 = 267;
		}
		else if (Function_17(&cLocal_3, "woollyBlueCurls"))
		{
			iLocal_2 = 32;
			iLocal_11 = 495;
			iLocal_10 = 268;
		}
		else if (Function_17(&cLocal_3, "pricklyPear"))
		{
			iLocal_2 = 1;
			iLocal_11 = 490;
			iLocal_10 = 263;
		}
		else if (Function_17(&cLocal_3, "butterflyWeed"))
		{
			iLocal_2 = 2;
			iLocal_11 = 492;
			iLocal_10 = 265;
		}
		else if (Function_17(&cLocal_3, "desertSage"))
		{
			iLocal_2 = 4;
			iLocal_11 = 491;
			iLocal_10 = 264;
		}
		else if (Function_17(&cLocal_3, "hummingbirdSage"))
		{
			iLocal_2 = 64;
			iLocal_11 = 496;
			iLocal_10 = 269;
		}
		else if (Function_17(&cLocal_3, "violetSnowdrop"))
		{
			iLocal_2 = 128;
			iLocal_11 = 497;
			iLocal_10 = 270;
		}
		else if (Function_17(&cLocal_3, "prairiePoppy"))
		{
			iLocal_2 = 8;
			iLocal_11 = 493;
			iLocal_10 = 266;
		}
		else if (Function_17(&cLocal_3, "wildFeverFew"))
		{
			iLocal_2 = 256;
			iLocal_11 = 499;
			iLocal_10 = 272;
		}
		else if (Function_17(&cLocal_3, "redSage"))
		{
			iLocal_2 = 512;
			iLocal_11 = 498;
			iLocal_10 = 271;
		}
	}
	return;
}

bool Function_17(char* cParam0) //Position: 0xABA / 2746
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, &cParam0, 64);
	strcpy(&cVar16, &cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

int Function_18(struct<2> Param0) //Position: 0xAE7 / 2791
{
	int iVar0;
	
	if (Function_14(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= Global_17367)
	{
		if (Global_17367[iVar02] == 0)
		{
			return 4294967295;
		}
		Function_20(Param0);
		if (Function_19(StackVal, StackVal, StackVal, Function_20(Param0)) > 5.0f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

float Function_19(struct<2> Param0, struct<2> Param2) //Position: 0xB39 / 2873
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_20(int iParam0) //Position: 0xB56 / 2902
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

bool Function_21() //Position: 0xBAD / 2989
{
	return 0;
}

bool Function_22(int iParam0) //Position: 0xBB4 / 2996
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_23(struct<69> Param0) //Position: 0xBD0 / 3024
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_119(Param0.f_64, 2))
	{
		Function_128(&Param0 + 24, 0);
	}
	else if (UNK_0x0A0E660E() || Function_32(&Param0))
	{
		if (Param0.f_68 == 6)
		{
			if (Function_30(&Param0) <= Function_28(&Param0 + 16))
			{
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
					{
						if (UNK_0x0A0E660E() || !Global_6663)
						{
							iVar1 = Function_26(&Param0 + 16, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_69 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_70))
								{
									Function_145("ManagePlayerQuit: Create quit context");
									if (Function_25(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_70 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_70 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_70))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_120(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_70))
									{
										Function_145("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_70);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", &Param0 + 16, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
								{
									if (Function_24(&Param0 + 24))
									{
										Function_120(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_70))
										{
											Function_145("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_70);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_70))
							{
								Function_145("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_70);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_70))
		{
			Function_145("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_70);
		}
	}
	return;
}

bool Function_24(int iParam0) //Position: 0xF04 / 3844
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

bool Function_25(bool bParam0, var uParam1, int iParam2) //Position: 0x101D / 4125
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

bool Function_26(char* cParam0, int iParam1) //Position: 0x103B / 4155
{
	return Function_27(&cParam0, "UseQuit", &iParam1);
}

bool Function_27(char* cParam0, char* cParam1, int iParam2) //Position: 0x1054 / 4180
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

float Function_28(int iParam0) //Position: 0x10A4 / 4260
{
	return Function_29(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_29(float fParam0, var uParam1, int iParam2) //Position: 0x10C2 / 4290
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &fParam0);
	return iVar0;
}

float Function_30(vector3 vParam0) //Position: 0x10DA / 4314
{
	if (Function_32(&vParam0))
	{
		if (Function_31(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_31(int iParam0) //Position: 0x11A7 / 4519
{
	return Function_119(iParam0, 2);
}

bool Function_32(int iParam0) //Position: 0x11B5 / 4533
{
	return Function_119(iParam0, 1);
}

bool Function_33(int iParam0, int iParam1) //Position: 0x11C3 / 4547
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

bool Function_34(struct<69> Param0) //Position: 0x1210 / 4624
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
	
	bVar11 = Function_118(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_129("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_25(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_129("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_129("Incapacitation quit", &Param0 + 24);
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
			bLocal_69 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_117(&Param0 + 16, &fVar22))
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
				if (Function_112(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_111(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_111(&Param0);
			}
			if (!Function_110(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_69 = true;
			Function_109(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_119(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_104(&Param0 + 16);
			}
			fVar18 = Function_103(&Param0 + 16);
			if (Function_30(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_119(Param0.f_64, 1))
			{
				Function_98(&Param0 + 16, &Var3, &uVar5);
				if (!Function_119(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_97(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_97(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_96());
				}
				if (!Function_119(Param0.f_64, 1024))
				{
					Function_97(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_25(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_112(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_119(Param0.f_64, 1024))
				{
					Function_97(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_25(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_119(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_97(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_97(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_119(Param0.f_64, 32))
			{
				bLocal_69 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_95(&Param0 + 16);
			bLocal_69 = true;
			Function_94(&Param0);
			Function_91(&Param0, Function_93(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_119(Param0.f_64, 1);
			}
			bVar0 = Function_90(&Param0 + 24, &Param0 + 16, bVar29);
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
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_27(&bVar1, "AttachBone", &bVar9), Function_27(&bVar1, "AttachLocator", &bVar9), 1))
						{
							Function_89(&bVar1, &Param0 + 24);
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
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_27(&bVar1, "AttachBone", &bVar9), Function_27(&bVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_89(&bVar1, &Param0 + 24);
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
					Function_81(&Param0, &uVar7, &iLocal_67, &uLocal_65);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_97(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_80(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_119(Param0.f_64, 16))
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
				if (Function_79(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_78(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_77(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_76(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_77(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_75(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_77(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_74(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_97(&Param0 + 64, 8);
					}
					else
					{
						Function_80(&Param0 + 64, 8);
					}
					if (Function_119(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_80(&Param0 + 64, 8);
				}
				if (Function_73(&Param0 + 16))
				{
					NET_SET_NODE_REPLICATION(&Param0 + 24, 1, 1);
					UNK_0xC17BAD12(&Param0 + 24);
				}
				uVar33 = Function_27(&Param0 + 16, "CustomReactNode", &bVar32);
				if (bVar32)
				{
					SET_REACT_NODE_FOR_ACTOR(&Param0 + 24, &uVar33);
				}
				iVar34 = 1;
				bVar35 = Function_25(&Param0 + 16, "CanAnimalsAttack", iVar34);
				if (!bVar35)
				{
					if (IS_ACTOR_VALID(&Param0 + 24))
					{
						SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 0);
					}
				}
				Function_72(&Param0 + 24, &Param0 + 16);
				bVar36 = Function_25(&Param0 + 16, "AllowTalking", 1);
				if (!bVar36)
				{
					STOP_PED_SPEAKING(&Param0 + 24, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				Function_71();
			}
			Param0.f_68 = 6;
			if (Function_119(Param0.f_64, 1))
			{
				if (Function_70(&Param0 + 16))
				{
					Function_2("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_69(&Param0 + 24, &Param0 + 16))
			{
				Function_2("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_90(&Param0 + 24, &Param0 + 16, Function_119(Param0.f_64, 1));
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
			if (Function_30(&Param0) <= Function_28(&Param0 + 16))
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
				bVar55 = Function_68(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, *(&Param0 + 32)) < bVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_67())
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
					if (Function_66(&Param0 + 16) <= 0.0f)
					{
						if (Function_30(&Param0) < Function_66(&Param0 + 16))
						{
							Function_2("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_145("nRewarding");
			Function_40(&Param0 + 24, &Param0 + 16);
			Function_39(&Param0 + 24, &Param0 + 16);
			Function_38(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_97(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_69 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_25(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_37())
						{
							Function_104(&Param0 + 16);
						}
					}
				}
				else
				{
					DECOR_REMOVE(&Param0 + 24, "NoGringoCamera");
				}
			}
			if (Function_25(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_36(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_119(Param0.f_64, 1024))
			{
				Function_80(&Param0 + 64, 1024);
				if (!Function_25(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_69 = true;
			bVar0 = Function_90(&Param0 + 24, &Param0 + 16, Function_119(Param0.f_64, 1));
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
	Function_35(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_35(var uParam0, int iParam1) //Position: 0x2545 / 9541
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_36(var uParam0, var uParam1) //Position: 0x255C / 9564
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_37() //Position: 0x256E / 9582
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

void Function_38(var uParam0, int iParam1) //Position: 0x25A1 / 9633
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

void Function_39(var uParam0, int iParam1) //Position: 0x261F / 9759
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

void Function_40(var uParam0, int iParam1) //Position: 0x269B / 9883
{
	var uVar0;
	int iVar1;
	
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			uVar0 = GET_CURRENT_GRINGO(&uParam0);
			Function_61(iLocal_11, 1);
			PLAY_SOUND_FRONTEND("HUD_PICK_UP_HERB_MASTER");
			if (iLocal_12 != 4294967295)
			{
				Function_59(iLocal_12);
			}
			else
			{
				Function_12(StackVal, Global_43788, iLocal_10, Local_13);
			}
			uLocal_8 = MAKE_TIME_OF_DAY_EX(GET_DAY(&Global_17367[iLocal_122] + 8) + 1, GET_HOUR(&Global_17367[iLocal_122] + 8), GET_MINUTE(&Global_17367[iLocal_122] + 8), GET_SECOND(&Global_17367[iLocal_122] + 8));
			iVar1 = Global_96573[iLocal_11];
			Function_43(273, ROUND(Global_94645[iVar19]), 0, 0);
			bLocal_16 = true;
			if (IS_BLIP_VALID(&uLocal_5))
			{
				REMOVE_BLIP(&uLocal_5);
			}
			if (Function_42(2) >= 9)
			{
				ADD_ITEM(Function_41(5), &uParam0, 1);
			}
		}
	}
	return;
}

var Function_41(bool bParam0) //Position: 0x2782 / 10114
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

int Function_42(int iParam0) //Position: 0x2876 / 10358
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

int Function_43(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x289E / 10398
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
	Function_58(iParam0, TO_FLOAT(bParam1), 1);
	Function_57(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_45(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_44(iParam0);
	return 1;
}

void Function_44(bool bParam0) //Position: 0x2AC6 / 10950
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

void Function_45(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2B64 / 11108
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_56(390))), 32);
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
					bVar19 = (Function_55(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_55(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_53(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_50(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_47(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_46(), &Var9);
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

var Function_46() //Position: 0x31A2 / 12706
{
	int iVar0;
	
	return &iVar0;
}

var Function_47(int iParam0) //Position: 0x31AB / 12715
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x31BC / 12732
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_49(char* cParam0) //Position: 0x32B3 / 12979
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_50(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x32CE / 13006
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_52(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_51(Function_52(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_51(int iParam0, int iParam1) //Position: 0x3335 / 13109
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_52(int iParam0, bool bParam1) //Position: 0x3347 / 13127
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_53(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3359 / 13145
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
	if (((Function_54(iParam0) != 19 || Function_54(iParam0) != 17) || Function_54(iParam0) != 10) || Function_54(iParam0) != 9)
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

int Function_54(int iParam0) //Position: 0x348D / 13453
{
	return Global_55480[iParam016].f_96;
}

float Function_55(int iParam0) //Position: 0x349C / 13468
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_56(int iParam0) //Position: 0x34D5 / 13525
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_57(int iParam0) //Position: 0x3512 / 13586
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

int Function_58(int iParam0, float fParam1, bool bParam2) //Position: 0x36AC / 13996
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

void Function_59(int iParam0) //Position: 0x38F0 / 14576
{
	if (iParam0 >= 4294967295 && iParam0 <= 1000)
	{
		return;
	}
	*(&Global_17367[iParam02] + 8) = GET_TIME_OF_DAY();
	Function_60(&Global_17367[iParam02] + 8);
	PRINTNL();
	return;
}

void Function_60(int iParam0) //Position: 0x3922 / 14626
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

int Function_61(var uParam0, bool bParam1) //Position: 0x396C / 14700
{
	bool bVar0;
	int iVar1;
	
	Function_43(uParam0, bParam1, 0, 0);
	bVar0 = uParam0;
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
	iVar1 = Function_65(uParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = uParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_62();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = uParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_62() //Position: 0x3B18 / 15128
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
	Function_63();
	return 0;
}

void Function_63() //Position: 0x3BB9 / 15289
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
		Function_64(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_64(int iParam0) //Position: 0x3C77 / 15479
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

var Function_65(int iParam0, int iParam1) //Position: 0x3CDD / 15581
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

float Function_66(int iParam0) //Position: 0x3D22 / 15650
{
	return Function_29(&iParam0, "UseTime", 5.0f);
}

bool Function_67() //Position: 0x3D39 / 15673
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_68(int iParam0) //Position: 0x3D46 / 15686
{
	return Function_29(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_69(int iParam0, bool bParam1) //Position: 0x3D67 / 15719
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return 1;
}

bool Function_70(bool bParam0) //Position: 0x3D7A / 15738
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_71() //Position: 0x3D9A / 15770
{
	return;
}

void Function_72(int iParam0, bool bParam1) //Position: 0x3DA0 / 15776
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	if (&iParam0 == &Global_54076)
	{
		if ((RAND_INT_RANGE(false, 100000) % 100) <= 66)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 361, 0, 1, 1, 0, 4294967295, 4294967295, 0, 1);
		}
	}
	return;
}

bool Function_73(char* cParam0) //Position: 0x3DDE / 15838
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_74(int iParam0) //Position: 0x3DEB / 15851
{
	return Function_25(&iParam0, "OneShotKill", 0);
}

bool Function_75(char* cParam0, int iParam1) //Position: 0x3E06 / 15878
{
	return Function_27(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_76(int iParam0) //Position: 0x3E26 / 15910
{
	return Function_25(&iParam0, "LinkToParentAnim", 0);
}

var Function_77(int iParam0) //Position: 0x3E46 / 15942
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_23 - 1))
	{
		if (&vLocal_23[iVar09] + 16 == &iParam0)
		{
			return &vLocal_23[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_78(int iParam0) //Position: 0x3E7D / 15997
{
	return Function_25(&iParam0, "LinkParentToAnim", 0);
}

bool Function_79(int iParam0) //Position: 0x3E9D / 16029
{
	return Function_25(&iParam0, "SingularUse", 0);
}

void Function_80(var uParam0, int iParam1) //Position: 0x3EB8 / 16056
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_81(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3ECE / 16078
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
	uVar2 = Function_88(&iParam0 + 16, &bVar0);
	uVar3 = Function_87(&iParam0 + 16, &bVar1);
	uVar4 = Function_86(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_85(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_84(&iParam0 + 16, &bVar7);
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
		if (Function_67())
		{
			Function_83();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_82(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_46(), Function_82(&iParam0 + 16, &iVar10), 0, bVar9);
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
			if (Function_25(&uVar4, "LinkToUser", 0))
			{
				if (Function_67())
				{
					Function_83();
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

bool Function_82(char* cParam0, int iParam1) //Position: 0x420C / 16908
{
	return Function_27(&cParam0, "TargetLocator", &iParam1);
}

void Function_83() //Position: 0x422B / 16939
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_84(char* cParam0, int iParam1) //Position: 0x423A / 16954
{
	return Function_27(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_85(char* cParam0, int iParam1) //Position: 0x425E / 16990
{
	return Function_27(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_86(int iParam0) //Position: 0x4284 / 17028
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_87(var uParam0, int iParam1) //Position: 0x42A2 / 17058
{
	return Function_27(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_88(var uParam0, int iParam1) //Position: 0x42C4 / 17092
{
	return Function_27(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_89(bool bParam0, int iParam1) //Position: 0x42E6 / 17126
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

var Function_90(var uParam0, int iParam1, bool bParam2) //Position: 0x43AE / 17326
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

void Function_91(int iParam0, float fParam1) //Position: 0x442A / 17450
{
	if (!Function_32(&iParam0))
	{
		Function_92(&iParam0, fParam1);
	}
	return;
}

void Function_92(vector3 vParam0) //Position: 0x4442 / 17474
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_97(&vParam0, 1);
	Function_80(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_93(int iParam0) //Position: 0x4467 / 17511
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_29(&iParam0, "RandUseTime", 0.0f));
}

void Function_94(vector3 vParam0) //Position: 0x4488 / 17544
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_95(var uParam0) //Position: 0x449F / 17567
{
	uParam0 = &uParam0;
	return;
}

int Function_96() //Position: 0x44AB / 17579
{
	return 1;
}

void Function_97(var uParam0, int iParam1) //Position: 0x44B2 / 17586
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_98(int iParam0, var uParam1, int iParam2) //Position: 0x44C3 / 17603
{
	float fVar0;
	
	Function_101(&iParam0);
	uParam1 = Function_101(&iParam0);
	iParam2 = Function_100(&iParam0);
	fVar0 = Function_99(&iParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

int Function_99(int iParam0) //Position: 0x4508 / 17672
{
	return Function_29(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_100(int iParam0) //Position: 0x4534 / 17716
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_101(int iParam0) //Position: 0x4540 / 17728
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_102(&iParam0))
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

bool Function_102(int iParam0) //Position: 0x4642 / 17986
{
	return Function_25(&iParam0, "UsePosActorRelative", 0);
}

int Function_103(int iParam0) //Position: 0x4665 / 18021
{
	return Function_29(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_104(bool bParam0) //Position: 0x468D / 18061
{
	var uVar0;
	var uVar2;
	struct<2> Var4;
	struct<2> Var6;
	
	bParam0 = &bParam0;
	if (iLocal_19 && !iLocal_20)
	{
		iLocal_20 = 1;
		uLocal_21 = CREATE_LAYOUT("PickHerb_Layout");
		uVar0 = Vector(0.0f, 0.0f, 0.0f);
		uVar2 = Vector(-2,211426f, 1,77668f, -1,633419f);
		Function_101(&bParam0);
		Var6 = Function_101(&bParam0);
		GET_ACTOR_OFFSET_WORLD_COORDS(&Global_54076, &uVar2, &Var4);
		CAMERA_PROBE(&uVar0, Var4, Var6, &Global_54076, 0);
		Function_105(&uLocal_21, 0, &Global_54076, 1, 0, 0);
	}
	return;
}

var Function_105(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x470E / 18190
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_46(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PickHerbHigh", 2, 1);
	}
	Function_106(&uVar0, &uParam2);
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

void Function_106(var uParam0, var uParam1) //Position: 0x4797 / 18327
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_108(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_107(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 100.0f, 1, 0.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	return;
}

void Function_107(int iParam0, var uParam1) //Position: 0x47F6 / 18422
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 51,99636f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,866943f, 1,450439f, 0,679946f), Vector(-8,904498f, -48,2019f, 1,3E-05f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_108(int iParam0, var uParam1) //Position: 0x488B / 18571
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 51,99636f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-1,416504f, 0,622484f, 0,577896f), Vector(-3,94636f, -58,3576f, 1E-06f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_109(int iParam0) //Position: 0x4920 / 18720
{
	iParam0 = &iParam0;
	return;
}

bool Function_110(int iParam0) //Position: 0x492C / 18732
{
	return Function_25(&iParam0, "MaintainPosture", 0);
}

void Function_111(int iParam0) //Position: 0x494B / 18763
{
	if (!Function_32(&iParam0))
	{
		Function_92(&iParam0, 0.0f);
	}
	return;
}

bool Function_112(var uParam0, int iParam1) //Position: 0x4962 / 18786
{
	struct<2> Var0;
	bool bVar2;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	int iVar7;
	
	Function_101(&iParam1);
	Var0 = Function_101(&iParam1);
	bVar2 = Function_100(&iParam1);
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		GET_OBJECT_AXIS(GRINGO_GET_MY_OBJECT_REF(), &Var3, 0);
		VNORMALIZE(&Var3);
		Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var0, StackVal) * Vector(0,6f, 0,6f, 0,6f), StackVal, StackVal);
		TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var0, bVar2, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(&iParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_116(&uParam0, &iParam1);
	}
	uVar5 = Function_115(&iParam1);
	uVar6 = Function_99(&iParam1);
	Function_113(&iParam1);
	iVar7 = Function_113(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar7, uVar5, 0,2f, 1, bVar2, uVar6, 0, 0);
}

struct<8> Function_113(int iParam0) //Position: 0x4A15 / 18965
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_114(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_114(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_114(var uParam0, var uParam1, struct<2> Param2) //Position: 0x4A39 / 19001
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_115(int iParam0) //Position: 0x4A58 / 19032
{
	return Function_29(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_116(var uParam0, int iParam1) //Position: 0x4A7C / 19068
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
	
	bVar0 = Function_115(&iParam1);
	fVar1 = Function_99(&iParam1);
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

bool Function_117(var uParam0, int iParam1) //Position: 0x4BA4 / 19364
{
	iParam1 = Function_29(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_118(var uParam0) //Position: 0x4BD2 / 19410
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

bool Function_119(var uParam0, int iParam1) //Position: 0x4CEB / 19691
{
	return (uParam0 && iParam1) == 0;
}

void Function_120(struct<69> Param0) //Position: 0x4CF8 / 19704
{
	if (Function_119(Param0.f_64, 16))
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

void Function_121(struct<69> Param0) //Position: 0x4D7A / 19834
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
	Function_27(&Param0 + 16, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			RESET_REACT_NODE_FOR_ACTOR(&Param0 + 24);
		}
	}
	iVar1 = 1;
	bVar2 = Function_25(&Param0 + 16, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 1);
		}
	}
	bVar3 = Function_25(&Param0 + 16, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(&Param0 + 24, 0);
	}
	if (Param0.f_68 < 8)
	{
		Function_36(&Param0 + 24, &Param0 + 16);
	}
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_119(Param0.f_64, 32)) && Function_25(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_127(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_119(Param0.f_64, 64));
		Function_35(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_25(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_119(Param0.f_64, 128) && Function_25(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_78(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_119(Param0.f_64, 16))
			{
				Function_120(&Param0);
				Function_80(&Param0 + 64, 16);
			}
			if (Function_119(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_126(&Param0 + 16) && Function_119(Param0.f_64, 512))
			{
				Function_80(&Param0 + 64, 512);
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
	if (Function_76(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_77(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_125(&Param0 + 16);
	bVar11 = Function_25(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_124(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_119(Param0.f_64, 256))
			{
				Function_80(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_67)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_65));
		iLocal_67 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_79(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_70))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_70);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_94(&Param0);
	Function_111(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_123(&Param0 + 16), &Param0 + 16);
	}
	Function_80(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_122();
		}
	}
	else
	{
		Function_122();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_122() //Position: 0x5325 / 21285
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

int Function_123(int iParam0) //Position: 0x535F / 21343
{
	return Function_29(&iParam0, "ReuseDelay", 15.0f);
}

void Function_124(int iParam0, var uParam1) //Position: 0x537D / 21373
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_88(&iParam0 + 16, &uVar0);
	Function_87(&iParam0 + 16, &uVar1);
	iVar2 = Function_86(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_125(int iParam0) //Position: 0x53BE / 21438
{
	iParam0 = &iParam0;
	return;
}

bool Function_126(int iParam0) //Position: 0x53CA / 21450
{
	return Function_25(&iParam0, "BlockBumpReactions", 0);
}

void Function_127(var uParam0, int iParam1) //Position: 0x53EC / 21484
{
	iParam1 = &iParam1;
	HUD_ENABLE(1);
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_PLAYER(&uParam0))
		{
			SET_ACTOR_POSTURE(&uParam0, iLocal_18);
			AI_STOP_IGNORING_ACTOR(&uParam0);
		}
	}
	if (IS_LAYOUTREF_VALID(&uLocal_21))
	{
		DESTROY_LAYOUT_OBJECTS(&uLocal_21);
		DESTROY_LAYOUT(&uLocal_21);
	}
	return;
}

void Function_128(var uParam0, bool bParam1) //Position: 0x5432 / 21554
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_145("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_145("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_70))
			{
				if (&bParam1)
				{
					Function_145("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_70);
			}
		}
	}
	if (&bParam1)
	{
		Function_145("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_129(int iParam0, int iParam1) //Position: 0x5542 / 21826
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_130(struct<69> Param0) //Position: 0x555A / 21850
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
	Function_94(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_97(&Param0 + 64, 2);
	Function_80(&Param0 + 64, 8);
	Function_80(&Param0 + 64, 16);
	Function_80(&Param0 + 64, 64);
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
	if (!Function_133(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_97(&Param0 + 64, 32);
			}
			else
			{
				Function_80(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_80(&Param0 + 64, 32);
		}
		if (Function_119(Param0.f_64, 32))
		{
			Function_97(&Param0 + 64, 128);
		}
		else
		{
			Function_80(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_80(&Param0 + 64, 32);
	}
	if (Function_132(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_97(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_97(&Param0 + 64, 128);
		}
	}
	if (Function_126(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_97(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_131(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_131(var uParam0, int iParam1) //Position: 0x5876 / 22646
{
	iParam1 = &iParam1;
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		if (!iLocal_2 != 1073741824)
		{
			iLocal_18 = GET_ACTOR_POSTURE(&Global_54076);
			iLocal_19 = 1;
			HUD_ENABLE(0);
			ACTOR_HOLSTER_WEAPON(&uParam0, 0);
			AI_IGNORE_ACTOR(&uParam0);
		}
	}
	return;
}

bool Function_132(int iParam0) //Position: 0x58B6 / 22710
{
	return Function_25(&iParam0, "DrawWeapon", 0);
}

bool Function_133(int iParam0) //Position: 0x58D0 / 22736
{
	return Function_25(&iParam0, "AllowWeapon", 0);
}

void Function_134(int iParam0, var uParam1) //Position: 0x58EB / 22763
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_135(&uParam1, &bVar0);
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

bool Function_135(var uParam0, int iParam1) //Position: 0x5929 / 22825
{
	return Function_27(&uParam0, "UseName", &iParam1);
}

bool Function_136(struct<65> Param0) //Position: 0x5942 / 22850
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
		if (ACTOR_HAS_ANIM_SET(&uVar1, "stand_hostage") && !Function_25(&Param0 + 16, "CutFreeGringo", 0))
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
				if (!Function_22(6))
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
		if (!Function_140(&uVar1, &Param0 + 16))
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
		if (!Function_119(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_97(&Param0 + 64, 1);
			}
			else
			{
				Function_80(&Param0 + 64, 1);
			}
			if (Function_119(Param0.f_64, 1))
			{
				Function_129("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_101(&Param0 + 16);
				Var8 = Function_101(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_139(&Param0 + 16);
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
				if (!Function_138(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_137(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_100(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_100(&Param0 + 16));
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

int Function_137(int iParam0) //Position: 0x5C3A / 23610
{
	return Function_29(&iParam0, "ActivationCone", 0.0f);
}

bool Function_138(var uParam0, int iParam1) //Position: 0x5C58 / 23640
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	bVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_29(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - bVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_101(&iParam1);
	Var0 = Function_101(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_101(&iParam1);
	Var0 = Function_101(&iParam1);
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

int Function_139(int iParam0) //Position: 0x5CF8 / 23800
{
	return Function_29(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_140(int iParam0, int iParam1) //Position: 0x5D18 / 23832
{
	iParam1 = &iParam1;
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!Function_22(7))
	{
		return 0;
	}
	if (IS_ACTOR_LOCAL_PLAYER(&iParam0))
	{
		if (iLocal_12 != 4294967295)
		{
			if (!iLocal_7)
			{
				iLocal_7 = 1;
				uLocal_8 = MAKE_TIME_OF_DAY_EX(GET_DAY(&Global_17367[iLocal_122] + 8) + 1, GET_HOUR(&Global_17367[iLocal_122] + 8), GET_MINUTE(&Global_17367[iLocal_122] + 8), GET_SECOND(&Global_17367[iLocal_122] + 8));
			}
			if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uLocal_8))
			{
				return 0;
			}
		}
		if (0 && !Function_21())
		{
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(&iParam0)))
		{
			return 0;
		}
		return 1;
	}
	return 1;
	return 0;
}

void Function_141(int iParam0) //Position: 0x5DBD / 23997
{
	iParam0 = &iParam0;
	return;
}

void Function_142(var uParam0, int iParam1) //Position: 0x5DC9 / 24009
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_143(&(vLocal_23[iLocal_619]), &uParam0);
		iLocal_61++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 2)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_142(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_143(int iParam0, int iParam1) //Position: 0x5E35 / 24117
{
	*(&iParam0 + 16) = &iParam1;
	Function_80(&iParam0 + 64, 1);
	return;
}

void Function_144(int iParam0) //Position: 0x5E4D / 24141
{
	iParam0 = &iParam0;
	return;
}

void Function_145(int iParam0) //Position: 0x5E59 / 24153
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

