//Decompiled with MagicRDR v1.0
//Function Count : 36
//Statics Count : 24
//Natives Count : 42
//Parameters Count : 1

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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* cScriptParam_0 = NULL;
#endregion

void main() //Position: 0x0 / 0
{
	struct<201> Var0;
	
	while (!Global_88795 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	*(&Var0 + 60) = 3;
	uVar54 = "fObjBaseScore";
	uVar55 = "fObjBonusScale";
	uVar56 = "_StatCount";
	fVar72 = 0.0f;
	iVar86 = 0;
	iVar88 = Function_35(&cScriptParam_0);
	iVar93 = 1;
	iVar94 = 0;
	iVar95 = 0;
	bVar101 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(cScriptParam_0);
	bVar100 = SC_CHALLENGE_GET_COMMUNITY_VALUE(cScriptParam_0);
	iVar102 = 4294967295;
	if (iVar88 == 4294967295)
	{
		iVar88 = Function_34(&cScriptParam_0);
		Function_33(&cScriptParam_0, iVar88);
	}
	Global_84611[iVar88140].f_68 = 1;
	if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, "nfPtScale0"))
	{
		fVar80 = SC_CHALLENGE_GET_VAR_FLOAT(cScriptParam_0, "nfPtScale0");
	}
	else
	{
		fVar80 = 1.0f;
	}
	while (Function_28() && !IS_EXITFLAG_SET())
	{
		WAIT(10000);
	}
	if (StackVal && !bVar100 <= bVar101)
	{
		Var0.f_8 = 1;
		Var0.f_16 = 1;
		iVar87 = 4;
	}
	else if (!Global_84611[iVar88140].f_84)
	{
		Function_27(cScriptParam_0);
		Global_84611[iVar88140].f_84 = 1;
	}
	Global_84611[iVar88140].f_64 = 0;
	while (((!IS_EXITFLAG_SET() && iVar93) && !Function_26()) && Global_88795)
	{
		switch (iVar87)
		{
			case 0x00000000:
				(*&Global_84611[iVar88140] + 144)[412] = 0.0f;
				Global_87412[iVar8869].f_24 = 0;
				Function_25(&Var0);
				if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, "nCCID"))
				{
					Var0.f_20 = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, "nCCID");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, "fGoal"))
				{
					Var0.f_196 = SC_CHALLENGE_GET_VAR_FLOAT(cScriptParam_0, "fGoal");
				}
				switch (Var0.f_20)
				{
					case 0x00000000:
						Var0.f_180 = Global_34581[597];
						Var0.f_188 = Function_24();
						break;
					
					case 0x00000001:
						Var0.f_180 = (Function_23() - TO_FLOAT(Global_84611[iVar88140].f_92));
						break;
				}
				Var0.f_176 = SC_CHALLENGE_GET_LEADERBOARD_ID(cScriptParam_0, 0);
				if (Var0.f_176 <= 0)
				{
					Var0.f_176 = 80;
				}
				uVar99 = Var0.f_176;
				Global_84611[iVar88140].f_88 = uVar99;
				Global_84611[iVar88140].f_72 = 1;
				if (bVar100 <= bVar101)
				{
					iVar87 = 1;
				}
				else
				{
					iVar87 = 0;
				}
				break;
			
			case 0x00000001:
				switch (Var0.f_20)
				{
					case 0x00000000:
						fVar75 = (Function_24() - Var0.f_188);
						fVar74 = (Global_34581[597] - Var0.f_180);
						break;
					
					case 0x00000001:
						fVar74 = (Function_23() - Var0.f_180);
						break;
				}
				if (!Function_22(&uVar51) && (fVar74 < 0.0f || fVar75 < 0.0f))
				{
					Function_19(&uVar51);
				}
				if (Function_16(&uVar51, 3.0f) && !HUD_IS_FADED())
				{
					if (fVar75 < 0.0f)
					{
						Function_15(cScriptParam_0, ((fVar74 + fVar75) * fVar80));
					}
					else
					{
						Function_15(cScriptParam_0, (fVar74 * fVar80));
					}
					Global_84611[iVar88140].f_64 = 1;
					iVar87 = 3;
				}
				break;
			
			case 0x00000003:
				if (!bVar96)
				{
					fVar97 = (*&Global_84611[iVar88140] + 144)[512];
					if (fVar97 < 0.0f)
					{
						bVar96 = true;
					}
				}
				bVar101 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(cScriptParam_0);
				bVar100 = SC_CHALLENGE_GET_COMMUNITY_VALUE(cScriptParam_0);
				fVar77 = Var0.f_184;
				fVar78 = Var0.f_192;
				switch (Var0.f_20)
				{
					case 0x00000000:
						Var0.f_192 = (Function_24() - Var0.f_188);
						if (Var0.f_192 < 0.0f && Var0.f_192 < fVar78)
						{
							fVar79 = Var0.f_192;
						}
						Var0.f_184 = (((Global_34581[597] - Var0.f_180) + fVar79) * fVar80);
						break;
					
					case 0x00000001:
						Var0.f_184 = (Function_23() - Var0.f_180);
						break;
				}
				(*&Global_84611[iVar88140] + 144)[412] = Var0.f_184;
				if (Var0.f_184 < fVar77 || TO_FLOAT(bVar100) < Var0.f_200)
				{
					(*&Global_84611[iVar88140] + 144)[212] = ((*&Global_84611[iVar88140] + 144)[212] + (Var0.f_184 - fVar77));
					Function_12(cScriptParam_0, &Var0 + 44, Var0.f_184, TO_FLOAT(bVar100), TO_FLOAT(bVar101));
					if (TO_FLOAT(bVar100) < Var0.f_200)
					{
						Var0.f_200 = TO_FLOAT(bVar100);
					}
					if (bVar96)
					{
						fVar98 = ((*&Global_84611[iVar88140] + 144)[512] - fVar97);
					}
					Function_8(cScriptParam_0, fVar98, TO_FLOAT(bVar101), bVar96);
				}
				if (bVar100 > bVar101)
				{
					Var0.f_8 = 1;
					Var0.f_16 = 1;
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(cScriptParam_0) == 3)
				{
					Var0 = 0;
					Var0.f_4 = 1;
					iVar87 = 4;
				}
				if (StackVal || StackVal)
				{
					Var0 = 0;
					iVar87 = 4;
				}
				break;
			
			case 0x00000004:
				UI_CHALLENGE_SET_TROPHY_TYPE(cScriptParam_0, 8);
				if (Var0.f_16)
				{
					Function_6(cScriptParam_0);
					if (!Global_84611[iVar88140].f_60)
					{
						Global_84611[iVar88140].f_60 = 1;
						UI_SET_STRING("SC_CC_Challenge_Title", UI_GET_STRING("SC_community_0_title"));
						Function_5("SC_CC_END_MESSAGE", 10.0f, 1, 0, 2, 1, 0);
						WAIT(100);
					}
					Function_4(11);
					Function_1(iVar88);
				}
				else if (StackVal)
				{
					iVar87 = 0;
				}
				else
				{
					iVar102 = 0;
					SC_CHALLENGE_PROCESS_EXPIRATION(cScriptParam_0);
					iVar87 = 5;
				}
			
			case 0x00000005:
				if (iVar102 == 0)
				{
					iVar102 = SC_CHALLENGE_GET_EXPIRATION_STATE(cScriptParam_0);
				}
				else
				{
					iVar93 = 0;
					if (iVar102 == 3)
					{
						iVar93 = 0;
					}
				}
				break;
		}
		WAIT(100);
	}
	Global_84611[iVar88140].f_64 = 0;
	SC_CHALLENGE_CLEAN_UP(cScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x533 / 1331
{
	if (!Function_3(Global_88819[iParam0], 1))
	{
		Function_2(&(Global_88819[iParam0]), 1);
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x555 / 1365
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_3(var uParam0, int iParam1) //Position: 0x564 / 1380
{
	return (uParam0 && iParam1) == 0;
}

void Function_4(int iParam0) //Position: 0x571 / 1393
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_5("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_5(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5A8 / 1448
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_6(char* cParam0) //Position: 0x5F3 / 1523
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	strcpy(&Var1, "SC_community", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
	return;
}

struct<32> Function_7(char* cParam0, char* cParam1) //Position: 0x66C / 1644
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_8(char* cParam0, bool bParam1, float fParam2, var uParam3) //Position: 0x685 / 1669
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	struct<8> Var33;
	struct<8> Var41;
	float fVar49;
	float fVar50;
	float fVar51;
	float fVar52;
	int iVar53;
	float fVar54;
	
	fVar49 = 0,2f;
	iVar53 = Function_35(&cParam0);
	fVar54 = ((*&Global_84611[iVar53140] + 144)[412] / fParam2);
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "fTickPercent1"))
	{
		fVar49 = SC_CHALLENGE_GET_VAR_FLOAT(cParam0, "fTickPercent1");
	}
	else
	{
		fVar49 = 0,2f;
	}
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "fTickPercent2"))
	{
		fVar50 = SC_CHALLENGE_GET_VAR_FLOAT(cParam0, "fTickPercent2");
	}
	else
	{
		fVar50 = 0,4f;
	}
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "fTickPercent3"))
	{
		fVar51 = SC_CHALLENGE_GET_VAR_FLOAT(cParam0, "fTickPercent3");
	}
	else
	{
		fVar51 = 0,6f;
	}
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "fTickPercent4"))
	{
		fVar52 = SC_CHALLENGE_GET_VAR_FLOAT(cParam0, "fTickPercent4");
	}
	else
	{
		fVar52 = 0,8f;
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, I2STR(bVar0)) };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_tick") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_ghostTick") };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "n_ghostTag") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "n_totalMsg") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "n_ghostMsg") };
	Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cParam0, (*&Global_84611[iVar53140] + 144)[412], Var25);
	Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cParam0, bParam1, Var33);
	UI_SET_STRING(&Var41, &Global_84611[iVar53140] + 144[512] + 8);
	if (fVar54 <= fVar52)
	{
		if (!Function_10(Global_88796[iVar53], 8))
		{
			Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
			Function_9(&(Global_88796[iVar53]), 8);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
		}
	}
	else if (fVar54 <= fVar51)
	{
		if (!Function_10(Global_88796[iVar53], 4))
		{
			Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
			Function_9(&(Global_88796[iVar53]), 4);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
		}
	}
	else if (fVar54 <= fVar50)
	{
		if (!Function_10(Global_88796[iVar53], 2))
		{
			Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
			Function_9(&(Global_88796[iVar53]), 2);
		}
	}
	else if (fVar54 <= fVar49)
	{
		if (!Function_10(Global_88796[iVar53], 1))
		{
			Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
			Function_9(&(Global_88796[iVar53]), 1);
		}
	}
}

void Function_9(var uParam0, int iParam1) //Position: 0x9BD / 2493
{
	Function_2(uParam0, iParam1);
	return;
}

bool Function_10(var uParam0, bool bParam1) //Position: 0x9CA / 2506
{
	return (uParam0 && bParam1) == 0;
}

void Function_11(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x9D7 / 2519
{
	int iVar0;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	if (iVar0 != 0 || iVar0 != 1)
	{
		UI_SET_MONEY("", &uParam2, ROUND(bParam1));
	}
	else
	{
		UI_SET_STRING(&uParam2, I2STR(ROUND(bParam1)));
	}
}

void Function_12(char* cParam0, var uParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0xA27 / 2599
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	struct<8> Var33;
	char* cVar41[16];
	
	if (bParam3 <= fParam4)
	{
		bParam3 = fParam4;
	}
	*uParam1 = (bParam3 / fParam4);
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_obj1") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_total") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_prg") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_pct") };
	UI_SET_STRING("SC_community_0_count", I2STR(ROUND(bParam2)));
	Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cParam0, bParam3, Var17);
	strcpy(&cVar41, FLOAT_TO_STRING_FORMATED((*uParam1 * 100.0f), 3, 2), 16);
	stradd(&cVar41, "%", 16);
	UI_SET_STRING(&Var33, &cVar41);
	UI_CHALLENGE_SET_OBJECTIVE(cParam0, 0, &Var9);
	UI_CHALLENGE_SET_PROGRESS(cParam0, 0.0f, 1.0f, -1.0f, &Var25);
	UI_CHALLENGE_SET_PROGRESS_DETAIL(cParam0, &Var33);
	if (!Function_14())
	{
		UI_CHALLENGE_MAKE_CURRENT(cParam0);
	}
	Function_13(cParam0, *uParam1);
}

void Function_13(char* cParam0, bool bParam1) //Position: 0xB55 / 2901
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	iVar33 = Function_35(&cParam0);
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "n_thrshhld") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_tick") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_prgMsg") };
	bParam1 = (bParam1 * 100.0f);
	Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cParam0, (*&Global_84611[iVar33140] + 144)[212], Var25);
	UI_SET_STRING(&Var9, I2STR(ROUND(bParam1)));
	if (bParam1 <= 75.0f)
	{
		if (!Function_3((*&Global_84611[iVar33140] + 128)[2], 1))
		{
			Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_84611[iVar33140] + 128[0], 1);
			Function_2(&Global_84611[iVar33140] + 128[1], 1);
			Function_2(&Global_84611[iVar33140] + 128[2], 1);
		}
	}
	else if (bParam1 <= 50.0f)
	{
		if (!Function_3((*&Global_84611[iVar33140] + 128)[1], 1))
		{
			Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_84611[iVar33140] + 128[0], 1);
			Function_2(&Global_84611[iVar33140] + 128[1], 1);
		}
	}
	else if (bParam1 <= 25.0f)
	{
		if (!Function_3((*&Global_84611[iVar33140] + 128)[0], 1))
		{
			Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_84611[iVar33140] + 128[0], 1);
		}
	}
	return;
}

bool Function_14() //Position: 0xD14 / 3348
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = NET_MAILBOX_GET_MAX_NUM_CHALLENGES();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (NET_MAILBOX_IS_CHALLENGE_VALID(iVar1))
		{
			iVar2 = NET_MAILBOX_GET_CHALLENGE_BY_INDEX(iVar1);
			iVar3 = Function_35(&iVar2);
			if (iVar3 >= 4294967295)
			{
				if (Global_84611[iVar3140].f_64)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void Function_15(char* cParam0, float fParam1) //Position: 0xD63 / 3427
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	int iVar25;
	
	iVar25 = Function_35(&cParam0);
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_tick") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_tickMsg") };
	Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cParam0, (fParam1 + (*&Global_84611[iVar25140] + 144)[212]), Var9);
	if (!Function_3((*&Global_84611[iVar25140] + 16)[0], 1))
	{
		Function_5(&Var17, 10.0f, 1, 0, 0, 1, 0);
		Function_2(&Global_84611[iVar25140] + 16[0], 1);
	}
	return;
}

int Function_16(var uParam0, float fParam1) //Position: 0xE35 / 3637
{
	if (Function_22(uParam0))
	{
		if (Function_17(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_17(int iParam0) //Position: 0xE51 / 3665
{
	if (Function_22(iParam0))
	{
		if (Function_18(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0xF19 / 3865
{
	return Function_3(*iParam0, 2);
}

void Function_19(int iParam0) //Position: 0xF26 / 3878
{
	if (!Function_22(iParam0))
	{
		Function_20(iParam0, 0.0f);
	}
	return;
}

void Function_20(var uParam0, float fParam1) //Position: 0xF3B / 3899
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_2(uParam0, 1);
	Function_21(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0xF5C / 3932
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_22(var uParam0) //Position: 0xF6F / 3951
{
	return Function_3(*uParam0, 1);
}

float Function_23() //Position: 0xF7C / 3964
{
	float fVar0;
	int iVar1;
	
	iVar1 = 226;
	while (iVar1 < 250)
	{
		fVar0 = (fVar0 + Global_34581[iVar1]);
		iVar1++;
	}
	return fVar0;
}

float Function_24() //Position: 0xFA4 / 4004
{
	return (((((Global_34581[441] + Global_34581[445]) + Global_34581[437]) + Global_34581[433]) + Global_34581[429]) + Global_34581[411]);
}

void Function_25(int iParam0) //Position: 0xFDF / 4063
{
	int iVar0;
	
	*iParam0 = 0;
	iParam0->f_16 = 0;
	iParam0->f_4 = 0;
	iParam0->f_8 = 0;
	iParam0->f_32 = 0.0f;
	iParam0->f_36 = 0.0f;
	iParam0->f_40 = 0.0f;
	iParam0->f_28 = 0;
	iParam0->f_24 = 0;
	iParam0->f_48 = 0;
	iParam0->f_196 = 0.0f;
	iParam0->f_52 = 0.0f;
	iParam0->f_12 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*iParam0 + 60)[iVar08] = 0;
		(iParam0 + 60[iVar08])->f_4 = 0;
		(iParam0 + 60[iVar08])->f_8 = 0;
		(iParam0 + 60[iVar08])->f_12 = 0.0f;
		(iParam0 + 60[iVar08])->f_24 = 0.0f;
		(iParam0 + 60[iVar08])->f_28 = 0.0f;
		(iParam0 + 60[iVar08])->f_16 = 0.0f;
		(iParam0 + 60[iVar08])->f_20 = 0.0f;
		iVar0++;
	}
	return;
}

bool Function_26() //Position: 0x108D / 4237
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_27(char* cParam0) //Position: 0x1096 / 4246
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var1, "_active") };
	Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
	return;
}

int Function_28() //Position: 0x110E / 4366
{
	if (!Function_29(2, 0))
	{
		return 1;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		return 1;
	}
	if (((((((((Global_3380 || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573))
	{
		return 1;
	}
	return 0;
}

bool Function_29(var uParam0, bool bParam1) //Position: 0x1162 / 4450
{
	int iVar0;
	
	iVar0 = Function_31(uParam0);
	if (!Function_30(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_30(int iParam0) //Position: 0x119F / 4511
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_31(int iParam0) //Position: 0x11B6 / 4534
{
	if (!Function_32(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_32(int iParam0) //Position: 0x11D0 / 4560
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_33(var uParam0, int iParam1) //Position: 0x11E6 / 4582
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	struct<8> Var19;
	struct<8> Var27;
	char* cVar35[32];
	char* cVar43[32];
	struct<8> Var51;
	struct<8> Var59;
	struct<8> Var67;
	char* cVar75[16];
	float fVar79;
	
	if (iParam1 < 4294967295 && iParam1 > 20)
	{
		bVar1 = SC_CHALLENGE_GET_COMMUNITY_VALUE(*uParam0);
		bVar2 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(*uParam0);
		if (bVar1 > bVar2)
		{
			bVar1 = bVar2;
		}
		fVar79 = (TO_FLOAT(bVar1) / TO_FLOAT(bVar2));
		strcpy(&Var3, "SC_community", 32);
		if (SC_CHALLENGE_IS_VAR_VALID(*uParam0, "nCCID"))
		{
			bVar0 = SC_CHALLENGE_GET_VAR_INT(*uParam0, "nCCID");
		}
		strcpy(&cVar35, "SC_CC_ICON_", 32);
		straddi(&cVar35, bVar0, 32);
		Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var3, "_") };
		Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var3, I2STR(bVar0)) };
		Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var3, "_title") };
		Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var3, "_des") };
		Var51 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var3, "_prg") };
		Var59 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var3, "_total") };
		Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var3, "_pct") };
		stradd(&cVar43, "_count", 32);
		Var27 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_7(&Var3, "_obj1") };
		PRINTSTRING("INIT SC CC ");
		PRINTSTRING(&Var3);
		PRINTSTRING(" Current = ");
		PRINTINT(bVar1);
		PRINTSTRING(" Goal = ");
		PRINTINT(bVar2);
		PRINTNL();
		Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0, TO_FLOAT(Global_84611[iParam1140].f_92), cVar43);
		Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0, TO_FLOAT(bVar1), Var59);
		UI_SET_STRING("SC_CCChallenge_Title", UI_GET_STRING(&Var11));
		strcpy(&cVar75, FLOAT_TO_STRING_FORMATED((fVar79 * 100.0f), 3, 2), 16);
		stradd(&cVar75, "%", 16);
		UI_SET_STRING(&Var67, &cVar75);
		UI_CHALLENGE_CREATE(*uParam0, &Var11, &Var19);
		UI_CHALLENGE_SET_TROPHY_TYPE(*uParam0, 4);
		if (SC_CHALLENGE_GET_COMMUNITY_VALUE(*uParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(*uParam0))
		{
			Function_6(*uParam0);
		}
		else
		{
			UI_CHALLENGE_SET_DESCRIPTION(*uParam0, &Var19);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(*uParam0, &cVar35);
		UI_CHALLENGE_SET_PROGRESS(*uParam0, 0.0f, 1.0f, -1.0f, &Var51);
		UI_CHALLENGE_SET_PROGRESS_DETAIL(*uParam0, &Var67);
		UI_CHALLENGE_SET_OBJECTIVE(*uParam0, 0, &Var27);
		if (!Function_14())
		{
			UI_CHALLENGE_MAKE_CURRENT(*uParam0);
		}
	}
	return;
}

int Function_34(int iParam0) //Position: 0x140D / 5133
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (Global_84611[iVar0140] == 0)
		{
			Global_84611[iVar0140] = *iParam0;
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

var Function_35(int iParam0) //Position: 0x1441 / 5185
{
	int iVar0;
	int iVar1;
	
	iVar0 = *iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_84611[iVar1140] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

