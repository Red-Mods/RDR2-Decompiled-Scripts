//Decompiled with MagicRDR v1.0
//Function Count : 39
//Statics Count : 33
//Natives Count : 40
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
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<749> Var0;
	
	while (!Global_140633 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	*(&Var0 + 12) = 25;
	*(&Var0 + 220) = 25;
	*(&Var0 + 428) = 25;
	uVar96 = "fObjBaseScore";
	uVar97 = "fObjBonusScale";
	uVar98 = "_StatCount";
	fVar114 = 0.0f;
	iVar124 = 0;
	iVar126 = Function_38(&iScriptParam_0);
	iVar131 = 1;
	iVar132 = 0;
	iVar133 = 0;
	bVar140 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iScriptParam_0);
	bVar139 = SC_CHALLENGE_GET_COMMUNITY_VALUE(&iScriptParam_0);
	iVar141 = 4294967295;
	if (iVar126 == 4294967295)
	{
		iVar126 = Function_37(&iScriptParam_0);
		Function_36(&iScriptParam_0, iVar126);
	}
	Global_132987[iVar126125].f_120 = 1;
	while (Function_31() && !IS_EXITFLAG_SET())
	{
		WAIT(10000);
	}
	if (bVar139 <= bVar140 && !Var0.f_644)
	{
		Var0.f_644 = 1;
		Var0.f_652 = 1;
		iVar125 = 4;
	}
	else if (!Global_132987[iVar126125].f_136)
	{
		Function_30(&iScriptParam_0);
		Global_132987[iVar126125].f_136 = 1;
	}
	Global_132987[iVar126125].f_116 = 0;
	while (((!IS_EXITFLAG_SET() && iVar131) && 1) && Global_140633)
	{
		switch (iVar125)
		{
			case 0x00000000:
				Function_29(&Var0);
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nCCID"))
				{
					iVar146 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nCCID");
				}
				Var0.f_732 = SC_CHALLENGE_GET_LEADERBOARD_ID(&iScriptParam_0, 0);
				if (Var0.f_732 < 0)
				{
					Var0.f_732 = 82;
				}
				uVar138 = Var0.f_732;
				Global_132987[iVar126125].f_140 = uVar138;
				Global_132987[iVar126125].f_124 = 1;
				Function_28(&iScriptParam_0, &Var0);
				if (bVar139 <= bVar140)
				{
					iVar125 = 1;
				}
				else
				{
					iVar125 = 0;
				}
				break;
			
			case 0x00000001:
				if ((!Function_27(&uVar94) && Function_26(&Var0)) && ((((Function_25(Global_119935, 32768) || Function_25(Global_119935, 0x2000000)) || Function_25(Global_119935, 8192)) || Function_25(Global_119935, 1)) || Function_25(Global_119935, 4)))
				{
					Function_22(&uVar94);
				}
				if (Function_19(&uVar94, 10.0f) && !HUD_IS_FADED())
				{
					Function_18(&iScriptParam_0, Var0.f_684);
					Global_132987[iVar126125].f_116 = 1;
					iVar125 = 3;
				}
				break;
			
			case 0x00000003:
				if (!bVar135)
				{
					fVar136 = (*&Global_132987[iVar126125] + 212)[511];
					if (fVar136 < 0.0f)
					{
						bVar135 = true;
					}
				}
				bVar140 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iScriptParam_0);
				bVar139 = SC_CHALLENGE_GET_COMMUNITY_VALUE(&iScriptParam_0);
				fVar118 = Var0.f_740;
				Function_17(&Var0, iVar126);
				if (Var0.f_740 < fVar118 || TO_FLOAT(bVar139) < Var0.f_748)
				{
					(*&Global_132987[iVar126125] + 212)[211] = ((*&Global_132987[iVar126125] + 212)[211] + (Var0.f_740 - fVar118));
					Function_14(&iScriptParam_0, &Var0 + 680, Var0.f_740, TO_FLOAT(bVar139), TO_FLOAT(bVar140));
					if (TO_FLOAT(bVar139) < Var0.f_748)
					{
						Var0.f_748 = TO_FLOAT(bVar139);
					}
					if (bVar135)
					{
						fVar137 = ((*&Global_132987[iVar126125] + 212)[511] - fVar136);
					}
					Function_11(&iScriptParam_0, fVar137, TO_FLOAT(bVar140), bVar135);
				}
				if (bVar139 > bVar140)
				{
					Var0.f_644 = 1;
					Var0.f_652 = 1;
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0) == 3)
				{
					Var0.f_636 = 0;
					Var0.f_640 = 1;
					iVar125 = 4;
				}
				if (Var0.f_644 || Var0.f_640)
				{
					Var0.f_636 = 0;
					iVar125 = 4;
				}
				break;
			
			case 0x00000004:
				UI_CHALLENGE_SET_TROPHY_TYPE(&iScriptParam_0, 8);
				if (Var0.f_652)
				{
					Function_9(&iScriptParam_0);
					if (!Global_132987[iVar126125].f_112)
					{
						Global_132987[iVar126125].f_112 = 1;
						UI_SET_STRING("SC_CC_Challenge_Title", UI_GET_STRING("SC_community_1_title"));
						Function_6("SC_CC_END_MESSAGE", 10.0f, 1, 0, 2, 1, 0);
						WAIT(100);
					}
					if (Global_53524.f_44)
					{
						Function_4(8);
					}
					Function_1(iVar126);
				}
				else if (Var0.f_640)
				{
					iVar125 = 0;
				}
				else
				{
					iVar141 = 0;
					SC_CHALLENGE_PROCESS_EXPIRATION(&iScriptParam_0);
					iVar125 = 5;
				}
			
			case 0x00000005:
				if (iVar141 == 0)
				{
					iVar141 = SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0);
				}
				else
				{
					iVar131 = 0;
					if (iVar141 == 3)
					{
						iVar131 = 0;
					}
				}
				break;
		}
		WAIT(100);
	}
	Global_132987[iVar126125].f_116 = 0;
	SC_CHALLENGE_CLEAN_UP(&iScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x444 / 1092
{
	if (!Function_3(Global_140678[iParam0], 1))
	{
		Function_2(&(Global_140678[iParam0]), 1);
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x466 / 1126
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_3(var uParam0, int iParam1) //Position: 0x477 / 1143
{
	return (uParam0 && iParam1) == 0;
}

void Function_4(int iParam0) //Position: 0x484 / 1156
{
	Function_5(&Global_131807 + 1304, iParam0);
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x496 / 1174
{
	Function_2(&uParam0, iParam1);
	return;
}

void Function_6(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4A4 / 1188
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_7(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_7(int iParam0) //Position: 0x52F / 1327
{
	char* cVar0[16];
	
	if (!Function_8())
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

bool Function_8() //Position: 0x56E / 1390
{
	if (Function_3(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x589 / 1417
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	strcpy(&cVar1, "SC_community", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var9);
	return;
}

struct<32> Function_10(char* cParam0) //Position: 0x606 / 1542
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_11(int iParam0, bool bParam1, float fParam2, var uParam3) //Position: 0x621 / 1569
{
	bool bVar0;
	char* cVar1[32];
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
	iVar53 = Function_38(&iParam0);
	fVar54 = ((*&Global_132987[iVar53125] + 212)[411] / fParam2);
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "fTickPercent1"))
	{
		fVar49 = SC_CHALLENGE_GET_VAR_FLOAT(&iParam0, "fTickPercent1");
	}
	else
	{
		fVar49 = 0,2f;
	}
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "fTickPercent2"))
	{
		fVar50 = SC_CHALLENGE_GET_VAR_FLOAT(&iParam0, "fTickPercent2");
	}
	else
	{
		fVar50 = 0,4f;
	}
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "fTickPercent3"))
	{
		fVar51 = SC_CHALLENGE_GET_VAR_FLOAT(&iParam0, "fTickPercent3");
	}
	else
	{
		fVar51 = 0,6f;
	}
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "fTickPercent4"))
	{
		fVar52 = SC_CHALLENGE_GET_VAR_FLOAT(&iParam0, "fTickPercent4");
	}
	else
	{
		fVar52 = 0,8f;
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, I2STR(bVar0)) };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_tick") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_ghostTick") };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "n_ghostTag") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "n_totalMsg") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "n_ghostMsg") };
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iVar53125] + 212)[411], Var25);
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, bParam1, Var33);
	UI_SET_STRING(&Var41, &Global_132987[iVar53125] + 212[511] + 8);
	if (fVar54 <= fVar52)
	{
		if (!Function_12(Global_140634[iVar53], 8))
		{
			Function_6(&Var9, 10.0f, 1, 0, 2, 1, 0);
			Function_5(&(Global_140634[iVar53]), 8);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_6(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
		}
	}
	else if (fVar54 <= fVar51)
	{
		if (!Function_12(Global_140634[iVar53], 4))
		{
			Function_6(&Var9, 10.0f, 1, 0, 2, 1, 0);
			Function_5(&(Global_140634[iVar53]), 4);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_6(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
		}
	}
	else if (fVar54 <= fVar50)
	{
		if (!Function_12(Global_140634[iVar53], 2))
		{
			Function_6(&Var9, 10.0f, 1, 0, 2, 1, 0);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_6(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
			Function_5(&(Global_140634[iVar53]), 2);
		}
	}
	else if (fVar54 <= fVar49)
	{
		if (!Function_12(Global_140634[iVar53], 1))
		{
			Function_6(&Var9, 10.0f, 1, 0, 2, 1, 0);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_6(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
			Function_5(&(Global_140634[iVar53]), 1);
		}
	}
}

bool Function_12(var uParam0, bool bParam1) //Position: 0x969 / 2409
{
	return (uParam0 && bParam1) == 0;
}

void Function_13(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x976 / 2422
{
	int iVar0;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
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

void Function_14(int iParam0, var uParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0x9C8 / 2504
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	struct<8> Var33;
	char* cVar41[16];
	
	if (bParam3 <= fParam4)
	{
		bParam3 = fParam4;
	}
	uParam1 = (bParam3 / fParam4);
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_obj1") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_total") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_prg") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_pct") };
	UI_SET_STRING("SC_community_0_count", I2STR(ROUND(bParam2)));
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, bParam3, Var17);
	strcpy(&cVar41, FLOAT_TO_STRING_FORMATED((uParam1 * 100.0f), 3, 2), 16);
	stradd(&cVar41, "%", 16);
	UI_SET_STRING(&Var33, &cVar41);
	UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 0, &Var9);
	UI_CHALLENGE_SET_PROGRESS(&iParam0, 0.0f, 1.0f, -1.0f, &Var25);
	UI_CHALLENGE_SET_PROGRESS_DETAIL(&iParam0, &Var33);
	if (!Function_16())
	{
		UI_CHALLENGE_MAKE_CURRENT(&iParam0);
	}
	Function_15(&iParam0, uParam1);
}

void Function_15(int iParam0, bool bParam1) //Position: 0xB01 / 2817
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	iVar33 = Function_38(&iParam0);
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "n_thrshhld") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_tick") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_prgMsg") };
	bParam1 = (bParam1 * 100.0f);
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iVar33125] + 212)[211], Var25);
	UI_SET_STRING(&Var9, I2STR(ROUND(bParam1)));
	if (bParam1 <= 75.0f)
	{
		if (!Function_3((*&Global_132987[iVar33125] + 180)[2], 1))
		{
			Function_6(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_132987[iVar33125] + 180[0], 1);
			Function_2(&Global_132987[iVar33125] + 180[1], 1);
			Function_2(&Global_132987[iVar33125] + 180[2], 1);
		}
	}
	else if (bParam1 <= 50.0f)
	{
		if (!Function_3((*&Global_132987[iVar33125] + 180)[1], 1))
		{
			Function_6(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_132987[iVar33125] + 180[0], 1);
			Function_2(&Global_132987[iVar33125] + 180[1], 1);
		}
	}
	else if (bParam1 <= 25.0f)
	{
		if (!Function_3((*&Global_132987[iVar33125] + 180)[0], 1))
		{
			Function_6(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_132987[iVar33125] + 180[0], 1);
		}
	}
	return;
}

bool Function_16() //Position: 0xCC3 / 3267
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
			iVar3 = Function_38(&iVar2);
			if (iVar3 >= 4294967295)
			{
				if (Global_132987[iVar3125].f_116)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void Function_17(struct<741> Param0) //Position: 0xD13 / 3347
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		fVar1 = (fVar1 + ((Global_54086[(*&Param0 + 428)[iVar0]] - (*&Param0 + 220)[iVar0]) * (*&Param0 + 12)[iVar0]));
		(*&Global_132987[iParam1125] + 748)[iVar0] = ROUND((Global_54086[(*&Param0 + 428)[iVar0]] - (*&Param0 + 220)[iVar0]));
		iVar0++;
	}
	Param0.f_740 = fVar1;
	(*&Global_132987[iParam1125] + 212)[411] = Param0.f_740;
	return;
}

void Function_18(int iParam0, float fParam1) //Position: 0xD9A / 3482
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	int iVar25;
	
	iVar25 = Function_38(&iParam0);
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_tick") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_tickMsg") };
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (fParam1 + (*&Global_132987[iVar25125] + 212)[211]), Var9);
	if (!Function_3((*&Global_132987[iVar25125] + 24)[0], 1))
	{
		Function_6(&Var17, 10.0f, 1, 0, 0, 1, 0);
		Function_2(&Global_132987[iVar25125] + 24[0], 1);
	}
	return;
}

int Function_19(int iParam0, float fParam1) //Position: 0xE72 / 3698
{
	if (Function_27(&iParam0))
	{
		if (Function_20(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_20(vector3 vParam0) //Position: 0xE90 / 3728
{
	if (Function_27(&vParam0))
	{
		if (Function_21(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_21(int iParam0) //Position: 0xF5D / 3933
{
	return Function_3(iParam0, 2);
}

void Function_22(int iParam0) //Position: 0xF6B / 3947
{
	if (!Function_27(&iParam0))
	{
		Function_23(&iParam0, 0.0f);
	}
	return;
}

void Function_23(vector3 vParam0) //Position: 0xF82 / 3970
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_2(&vParam0, 1);
	Function_24(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0xFA7 / 4007
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

int Function_25(var uParam0, int iParam1) //Position: 0xFBD / 4029
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

var Function_26(struct<685> Param0) //Position: 0xFD0 / 4048
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		fVar1 = (fVar1 + ((Global_54086[(*&Param0 + 428)[iVar0]] - (*&Param0 + 220)[iVar0]) * (*&Param0 + 12)[iVar0]));
		iVar0++;
	}
	Param0.f_684 = fVar1;
	return Param0.f_684 < 0.0f;
}

bool Function_27(int iParam0) //Position: 0x1021 / 4129
{
	return Function_3(iParam0, 1);
}

void Function_28(int iParam0, struct<737> Param1) //Position: 0x102F / 4143
{
	char* cVar0[16];
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fPtScale", 16);
	iVar4 = Function_38(&iParam0);
	if (iVar4 >= 4294967295)
	{
		(*&Global_132987[iVar4125] + 212)[411] = 0.0f;
		Global_137989[iVar466].f_24 = 0;
	}
	(*&Param1 + 428)[0] = 226;
	(*&Param1 + 428)[1] = 227;
	(*&Param1 + 428)[2] = 228;
	(*&Param1 + 428)[3] = 229;
	(*&Param1 + 428)[4] = 230;
	(*&Param1 + 428)[5] = 231;
	(*&Param1 + 428)[6] = 232;
	(*&Param1 + 428)[7] = 233;
	(*&Param1 + 428)[8] = 234;
	(*&Param1 + 428)[9] = 235;
	(*&Param1 + 428)[10] = 236;
	(*&Param1 + 428)[11] = 237;
	(*&Param1 + 428)[12] = 238;
	(*&Param1 + 428)[13] = 239;
	(*&Param1 + 428)[14] = 240;
	(*&Param1 + 428)[15] = 241;
	(*&Param1 + 428)[16] = 242;
	(*&Param1 + 428)[17] = 243;
	(*&Param1 + 428)[18] = 244;
	(*&Param1 + 428)[19] = 245;
	(*&Param1 + 428)[20] = 246;
	(*&Param1 + 428)[21] = 247;
	(*&Param1 + 428)[22] = 248;
	(*&Param1 + 428)[23] = 249;
	(*&Param1 + 428)[24] = 250;
	(*&Param1 + 12)[0] = 1.0f;
	(*&Param1 + 12)[1] = 5.0f;
	(*&Param1 + 12)[2] = 5.0f;
	(*&Param1 + 12)[3] = 10.0f;
	(*&Param1 + 12)[4] = 20.0f;
	(*&Param1 + 12)[5] = 20.0f;
	(*&Param1 + 12)[6] = 20.0f;
	(*&Param1 + 12)[7] = 5.0f;
	(*&Param1 + 12)[8] = 5.0f;
	(*&Param1 + 12)[9] = 5.0f;
	(*&Param1 + 12)[10] = 40.0f;
	(*&Param1 + 12)[11] = 50.0f;
	(*&Param1 + 12)[12] = 20.0f;
	(*&Param1 + 12)[13] = 20.0f;
	(*&Param1 + 12)[14] = 5.0f;
	(*&Param1 + 12)[15] = 20.0f;
	(*&Param1 + 12)[16] = 20.0f;
	(*&Param1 + 12)[17] = 20.0f;
	(*&Param1 + 12)[18] = 30.0f;
	(*&Param1 + 12)[19] = 50.0f;
	(*&Param1 + 12)[20] = 100.0f;
	(*&Param1 + 12)[21] = 5.0f;
	(*&Param1 + 12)[22] = 10.0f;
	(*&Param1 + 12)[23] = 25.0f;
	(*&Param1 + 12)[24] = 5.0f;
	iVar5 = 0;
	while (iVar5 <= 25)
	{
		straddi(&cVar0, iVar5, 16);
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, &cVar0))
		{
			(*&Param1 + 12)[iVar5] = ((*&Param1 + 12)[iVar5] * SC_CHALLENGE_GET_VAR_FLOAT(&iParam0, &cVar0));
		}
		else
		{
			(*&Param1 + 12)[iVar5] = ((*&Param1 + 12)[iVar5] * 1.0f);
		}
		(*&Param1 + 220)[iVar5] = (Global_54086[(*&Param1 + 428)[iVar5]] - 0.0f);
		Param1.f_736 = (Param1.f_736 + (*&Param1 + 220)[iVar5]);
		if (iVar4 >= 4294967295)
		{
			(*&Global_137989[iVar466] + 276)[iVar5] = 0;
			(*&Global_132987[iVar4125] + 748)[iVar5] = 0;
		}
		strcpy(&cVar0, "fPtScale", 16);
		iVar5++;
	}
	return;
}

void Function_29(struct<745> Param0) //Position: 0x136A / 4970
{
	Param0.f_636 = 0;
	Param0.f_652 = 0;
	Param0.f_640 = 0;
	Param0.f_644 = 0;
	Param0.f_656 = 4294967295;
	Param0.f_8 = 0;
	Param0.f_668 = 0.0f;
	Param0.f_672 = 0.0f;
	Param0.f_676 = 0.0f;
	Param0.f_664 = 0;
	Param0.f_660 = 0;
	Param0.f_688 = 0;
	Param0.f_744 = 0.0f;
	Param0.f_692 = 0.0f;
	Param0.f_648 = 0;
	return;
}

void Function_30(var uParam0) //Position: 0x13D8 / 5080
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&uParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar1, "_active") };
	Function_6(&Var9, 10.0f, 1, 0, 2, 1, 0);
	return;
}

int Function_31() //Position: 0x1452 / 5202
{
	if (!Function_32(2, 0))
	{
		return 1;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		return 1;
	}
	if (((((((((Global_6623 || Global_6625) || Global_6608) || Global_99146) || Global_6638) || Global_6637) || Global_6627) || Global_6610) || Global_6639) || !IS_ACTOR_ALIVE(&Global_54076))
	{
		return 1;
	}
	return 0;
}

bool Function_32(var uParam0, bool bParam1) //Position: 0x14A8 / 5288
{
	int iVar0;
	
	iVar0 = Function_34(uParam0);
	if (!Function_33(iVar0))
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

bool Function_33(int iParam0) //Position: 0x14E6 / 5350
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_34(int iParam0) //Position: 0x14FD / 5373
{
	if (!Function_35(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_35(int iParam0) //Position: 0x1517 / 5399
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_36(var uParam0, int iParam1) //Position: 0x152D / 5421
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[32];
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
		bVar1 = SC_CHALLENGE_GET_COMMUNITY_VALUE(&uParam0);
		bVar2 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(&uParam0);
		if (bVar1 > bVar2)
		{
			bVar1 = bVar2;
		}
		fVar79 = (TO_FLOAT(bVar1) / TO_FLOAT(bVar2));
		strcpy(&cVar3, "SC_community", 32);
		if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nCCID"))
		{
			bVar0 = SC_CHALLENGE_GET_VAR_INT(&uParam0, "nCCID");
		}
		strcpy(&cVar35, "SC_CC_ICON_", 32);
		straddi(&cVar35, bVar0, 32);
		cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3, "_") };
		cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3, I2STR(bVar0)) };
		Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3, "_title") };
		Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3, "_des") };
		Var51 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3, "_prg") };
		Var59 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3, "_total") };
		Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3, "_pct") };
		stradd(&cVar43, "_count", 32);
		Var27 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3, "_obj1") };
		PRINTSTRING("INIT SC CC ");
		PRINTSTRING(&cVar3);
		PRINTSTRING(" Current = ");
		PRINTINT(bVar1);
		PRINTSTRING(" Goal = ");
		PRINTINT(bVar2);
		PRINTNL();
		Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uParam0, TO_FLOAT(Global_132987[iParam1125].f_144), cVar43);
		Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uParam0, TO_FLOAT(bVar1), Var59);
		UI_SET_STRING("SC_CCChallenge_Title", UI_GET_STRING(&Var11));
		strcpy(&cVar75, FLOAT_TO_STRING_FORMATED((fVar79 * 100.0f), 3, 2), 16);
		stradd(&cVar75, "%", 16);
		UI_SET_STRING(&Var67, &cVar75);
		UI_CHALLENGE_CREATE(&uParam0, &Var11, &Var19);
		UI_CHALLENGE_SET_TROPHY_TYPE(&uParam0, 4);
		if (SC_CHALLENGE_GET_COMMUNITY_VALUE(&uParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(&uParam0))
		{
			Function_9(&uParam0);
		}
		else
		{
			UI_CHALLENGE_SET_DESCRIPTION(&uParam0, &Var19);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(&uParam0, &cVar35);
		UI_CHALLENGE_SET_PROGRESS(&uParam0, 0.0f, 1.0f, -1.0f, &Var51);
		UI_CHALLENGE_SET_PROGRESS_DETAIL(&uParam0, &Var67);
		UI_CHALLENGE_SET_OBJECTIVE(&uParam0, 0, &Var27);
		if (!Function_16())
		{
			UI_CHALLENGE_MAKE_CURRENT(&uParam0);
		}
	}
	return;
}

int Function_37(int iParam0) //Position: 0x1765 / 5989
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (Global_132987[iVar0125] == 0)
		{
			Global_132987[iVar0125] = &iParam0;
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

var Function_38(int iParam0) //Position: 0x179A / 6042
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

