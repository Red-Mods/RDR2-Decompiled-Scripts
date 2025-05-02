//Decompiled with MagicRDR v1.0
//Function Count : 37
//Statics Count : 33
//Natives Count : 42
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
	struct<221> Var0;
	
	while (!Global_140633 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	*(&Var0 + 60) = 3;
	uVar30 = "fObjBaseScore";
	uVar31 = "fObjBonusScale";
	uVar32 = "_StatCount";
	fVar48 = 0.0f;
	iVar62 = 0;
	iVar64 = Function_36(&iScriptParam_0);
	iVar69 = 1;
	iVar70 = 0;
	iVar71 = 0;
	bVar77 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iScriptParam_0);
	bVar76 = SC_CHALLENGE_GET_COMMUNITY_VALUE(&iScriptParam_0);
	iVar78 = 4294967295;
	if (iVar64 == 4294967295)
	{
		iVar64 = Function_35(&iScriptParam_0);
		Function_34(&iScriptParam_0, iVar64);
	}
	Global_132987[iVar64125].f_120 = 1;
	if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nfPtScale0"))
	{
		fVar56 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "nfPtScale0");
	}
	else
	{
		fVar56 = 1.0f;
	}
	while (Function_29() && !IS_EXITFLAG_SET())
	{
		WAIT(10000);
	}
	if (StackVal && !bVar76 <= bVar77)
	{
		Var0.f_8 = 1;
		Var0.f_16 = 1;
		iVar63 = 4;
	}
	else if (!Global_132987[iVar64125].f_136)
	{
		Function_28(&iScriptParam_0);
		Global_132987[iVar64125].f_136 = 1;
	}
	Global_132987[iVar64125].f_116 = 0;
	while (((!IS_EXITFLAG_SET() && iVar69) && 1) && Global_140633)
	{
		switch (iVar63)
		{
			case 0x00000000:
				(*&Global_132987[iVar64125] + 212)[411] = 0.0f;
				Global_137989[iVar6466].f_24 = 0;
				Function_27(&Var0);
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nCCID"))
				{
					Var0.f_20 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nCCID");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "fGoal"))
				{
					Var0.f_216 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "fGoal");
				}
				switch (Var0.f_20)
				{
					case 0x00000000:
						Var0.f_200 = Global_54086[597];
						Var0.f_208 = Function_26();
						break;
					
					case 0x00000001:
						Var0.f_200 = (Function_25() - TO_FLOAT(Global_132987[iVar64125].f_144));
						break;
				}
				Var0.f_196 = SC_CHALLENGE_GET_LEADERBOARD_ID(&iScriptParam_0, 0);
				if (Var0.f_196 <= 0)
				{
					Var0.f_196 = 80;
				}
				uVar75 = Var0.f_196;
				Global_132987[iVar64125].f_140 = uVar75;
				Global_132987[iVar64125].f_124 = 1;
				if (bVar76 <= bVar77)
				{
					iVar63 = 1;
				}
				else
				{
					iVar63 = 0;
				}
				break;
			
			case 0x00000001:
				switch (Var0.f_20)
				{
					case 0x00000000:
						fVar51 = (Function_26() - Var0.f_208);
						fVar50 = (Global_54086[597] - Var0.f_200);
						break;
					
					case 0x00000001:
						fVar50 = (Function_25() - Var0.f_200);
						break;
				}
				if (!Function_24(&uVar28) && (fVar50 < 0.0f || fVar51 < 0.0f))
				{
					Function_21(&uVar28);
				}
				if (Function_18(&uVar28, 3.0f) && !HUD_IS_FADED())
				{
					if (fVar51 < 0.0f)
					{
						Function_17(&iScriptParam_0, ((fVar50 + fVar51) * fVar56));
					}
					else
					{
						Function_17(&iScriptParam_0, (fVar50 * fVar56));
					}
					Global_132987[iVar64125].f_116 = 1;
					iVar63 = 3;
				}
				break;
			
			case 0x00000003:
				if (!bVar72)
				{
					fVar73 = (*&Global_132987[iVar64125] + 212)[511];
					if (fVar73 < 0.0f)
					{
						bVar72 = true;
					}
				}
				bVar77 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iScriptParam_0);
				bVar76 = SC_CHALLENGE_GET_COMMUNITY_VALUE(&iScriptParam_0);
				fVar53 = Var0.f_204;
				fVar54 = Var0.f_212;
				switch (Var0.f_20)
				{
					case 0x00000000:
						Var0.f_212 = (Function_26() - Var0.f_208);
						if (Var0.f_212 < 0.0f && Var0.f_212 < fVar54)
						{
							fVar55 = Var0.f_212;
						}
						Var0.f_204 = (((Global_54086[597] - Var0.f_200) + fVar55) * fVar56);
						break;
					
					case 0x00000001:
						Var0.f_204 = (Function_25() - Var0.f_200);
						break;
				}
				(*&Global_132987[iVar64125] + 212)[411] = Var0.f_204;
				if (Var0.f_204 < fVar53 || TO_FLOAT(bVar76) < Var0.f_220)
				{
					(*&Global_132987[iVar64125] + 212)[211] = ((*&Global_132987[iVar64125] + 212)[211] + (Var0.f_204 - fVar53));
					Function_14(&iScriptParam_0, &Var0 + 44, Var0.f_204, TO_FLOAT(bVar76), TO_FLOAT(bVar77));
					if (TO_FLOAT(bVar76) < Var0.f_220)
					{
						Var0.f_220 = TO_FLOAT(bVar76);
					}
					if (bVar72)
					{
						fVar74 = ((*&Global_132987[iVar64125] + 212)[511] - fVar73);
					}
					Function_10(&iScriptParam_0, fVar74, TO_FLOAT(bVar77), bVar72);
				}
				if (bVar76 > bVar77)
				{
					Var0.f_8 = 1;
					Var0.f_16 = 1;
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0) == 3)
				{
					Var0 = 0;
					Var0.f_4 = 1;
					iVar63 = 4;
				}
				if (StackVal || StackVal)
				{
					Var0 = 0;
					iVar63 = 4;
				}
				break;
			
			case 0x00000004:
				UI_CHALLENGE_SET_TROPHY_TYPE(&iScriptParam_0, 8);
				if (Var0.f_16)
				{
					Function_8(&iScriptParam_0);
					if (!Global_132987[iVar64125].f_112)
					{
						Global_132987[iVar64125].f_112 = 1;
						UI_SET_STRING("SC_CC_Challenge_Title", UI_GET_STRING("SC_community_0_title"));
						Function_5("SC_CC_END_MESSAGE", 10.0f, 1, 0, 2, 1, 0);
						WAIT(100);
					}
					Function_4(11);
					Function_1(iVar64);
				}
				else if (StackVal)
				{
					iVar63 = 0;
				}
				else
				{
					iVar78 = 0;
					SC_CHALLENGE_PROCESS_EXPIRATION(&iScriptParam_0);
					iVar63 = 5;
				}
			
			case 0x00000005:
				if (iVar78 == 0)
				{
					iVar78 = SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0);
				}
				else
				{
					iVar69 = 0;
					if (iVar78 == 3)
					{
						iVar69 = 0;
					}
				}
				break;
		}
		WAIT(100);
	}
	Global_132987[iVar64125].f_116 = 0;
	SC_CHALLENGE_CLEAN_UP(&iScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x549 / 1353
{
	if (!Function_3(Global_140678[iParam0], 1))
	{
		Function_2(&(Global_140678[iParam0]), 1);
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x56B / 1387
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_3(var uParam0, int iParam1) //Position: 0x57C / 1404
{
	return (uParam0 && iParam1) == 0;
}

void Function_4(int iParam0) //Position: 0x589 / 1417
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

void Function_5(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5C0 / 1472
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_6(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_6(int iParam0) //Position: 0x64B / 1611
{
	char* cVar0[16];
	
	if (!Function_7())
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

bool Function_7() //Position: 0x68A / 1674
{
	if (Function_3(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_8(int iParam0) //Position: 0x6A5 / 1701
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	strcpy(&cVar1, "SC_community", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var9);
	return;
}

struct<32> Function_9(char* cParam0) //Position: 0x722 / 1826
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_10(int iParam0, bool bParam1, float fParam2, var uParam3) //Position: 0x73D / 1853
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
	iVar53 = Function_36(&iParam0);
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
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, I2STR(bVar0)) };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_tick") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_ghostTick") };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "n_ghostTag") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "n_totalMsg") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "n_ghostMsg") };
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iVar53125] + 212)[411], Var25);
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, bParam1, Var33);
	UI_SET_STRING(&Var41, &Global_132987[iVar53125] + 212[511] + 8);
	if (fVar54 <= fVar52)
	{
		if (!Function_12(Global_140634[iVar53], 8))
		{
			Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
			Function_11(&(Global_140634[iVar53]), 8);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
		}
	}
	else if (fVar54 <= fVar51)
	{
		if (!Function_12(Global_140634[iVar53], 4))
		{
			Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
			Function_11(&(Global_140634[iVar53]), 4);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
		}
	}
	else if (fVar54 <= fVar50)
	{
		if (!Function_12(Global_140634[iVar53], 2))
		{
			Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
			Function_11(&(Global_140634[iVar53]), 2);
		}
	}
	else if (fVar54 <= fVar49)
	{
		if (!Function_12(Global_140634[iVar53], 1))
		{
			Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
			if (bParam1 < 0.0f && uParam3)
			{
				Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			}
			Function_11(&(Global_140634[iVar53]), 1);
		}
	}
}

void Function_11(var uParam0, int iParam1) //Position: 0xA85 / 2693
{
	Function_2(&uParam0, iParam1);
	return;
}

bool Function_12(var uParam0, bool bParam1) //Position: 0xA93 / 2707
{
	return (uParam0 && bParam1) == 0;
}

void Function_13(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0xAA0 / 2720
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

void Function_14(int iParam0, var uParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0xAF2 / 2802
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
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_obj1") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_total") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_prg") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_pct") };
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

void Function_15(int iParam0, bool bParam1) //Position: 0xC2B / 3115
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	iVar33 = Function_36(&iParam0);
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "n_thrshhld") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_tick") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_prgMsg") };
	bParam1 = (bParam1 * 100.0f);
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iVar33125] + 212)[211], Var25);
	UI_SET_STRING(&Var9, I2STR(ROUND(bParam1)));
	if (bParam1 <= 75.0f)
	{
		if (!Function_3((*&Global_132987[iVar33125] + 180)[2], 1))
		{
			Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_132987[iVar33125] + 180[0], 1);
			Function_2(&Global_132987[iVar33125] + 180[1], 1);
			Function_2(&Global_132987[iVar33125] + 180[2], 1);
		}
	}
	else if (bParam1 <= 50.0f)
	{
		if (!Function_3((*&Global_132987[iVar33125] + 180)[1], 1))
		{
			Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_132987[iVar33125] + 180[0], 1);
			Function_2(&Global_132987[iVar33125] + 180[1], 1);
		}
	}
	else if (bParam1 <= 25.0f)
	{
		if (!Function_3((*&Global_132987[iVar33125] + 180)[0], 1))
		{
			Function_5(&Var17, 10.0f, 1, 0, 2, 1, 0);
			Function_2(&Global_132987[iVar33125] + 180[0], 1);
		}
	}
	return;
}

bool Function_16() //Position: 0xDED / 3565
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
			iVar3 = Function_36(&iVar2);
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

void Function_17(int iParam0, float fParam1) //Position: 0xE3D / 3645
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	int iVar25;
	
	iVar25 = Function_36(&iParam0);
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_tick") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_tickMsg") };
	Function_13(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (fParam1 + (*&Global_132987[iVar25125] + 212)[211]), Var9);
	if (!Function_3((*&Global_132987[iVar25125] + 24)[0], 1))
	{
		Function_5(&Var17, 10.0f, 1, 0, 0, 1, 0);
		Function_2(&Global_132987[iVar25125] + 24[0], 1);
	}
	return;
}

int Function_18(bool bParam0, float fParam1) //Position: 0xF15 / 3861
{
	if (Function_24(&bParam0))
	{
		if (Function_19(&bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_19(vector3 vParam0) //Position: 0xF33 / 3891
{
	if (Function_24(&vParam0))
	{
		if (Function_20(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_20(int iParam0) //Position: 0x1000 / 4096
{
	return Function_3(iParam0, 2);
}

void Function_21(bool bParam0) //Position: 0x100E / 4110
{
	if (!Function_24(&bParam0))
	{
		Function_22(&bParam0, 0.0f);
	}
	return;
}

void Function_22(vector3 vParam0) //Position: 0x1025 / 4133
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_2(&vParam0, 1);
	Function_23(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x104A / 4170
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_24(bool bParam0) //Position: 0x1060 / 4192
{
	return Function_3(bParam0, 1);
}

float Function_25() //Position: 0x106E / 4206
{
	float fVar0;
	int iVar1;
	
	iVar1 = 226;
	while (iVar1 < 250)
	{
		fVar0 = (fVar0 + Global_54086[iVar1]);
		iVar1++;
	}
	return fVar0;
}

float Function_26() //Position: 0x1096 / 4246
{
	return (((((Global_54086[441] + Global_54086[445]) + Global_54086[437]) + Global_54086[433]) + Global_54086[429]) + Global_54086[411]);
}

void Function_27(struct<217> Param0) //Position: 0x10D1 / 4305
{
	int iVar0;
	
	Param0 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 0;
	Param0.f_8 = 0;
	Param0.f_32 = 0.0f;
	Param0.f_36 = 0.0f;
	Param0.f_40 = 0.0f;
	Param0.f_28 = 0;
	Param0.f_24 = 0;
	Param0.f_48 = 0;
	Param0.f_216 = 0.0f;
	Param0.f_52 = 0.0f;
	Param0.f_12 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*&Param0 + 60)[iVar04] = 0;
		(&Param0 + 60[iVar04])->f_4 = 0;
		(&Param0 + 60[iVar04])->f_8 = 0;
		(&Param0 + 60[iVar04])->f_12 = 0.0f;
		(&Param0 + 60[iVar04])->f_24 = 0.0f;
		(&Param0 + 60[iVar04])->f_28 = 0.0f;
		(&Param0 + 60[iVar04])->f_16 = 0.0f;
		(&Param0 + 60[iVar04])->f_20 = 0.0f;
		iVar0++;
	}
	return;
}

void Function_28(var uParam0) //Position: 0x1194 / 4500
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&uParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar1, "_active") };
	Function_5(&Var9, 10.0f, 1, 0, 2, 1, 0);
	return;
}

int Function_29() //Position: 0x120E / 4622
{
	if (!Function_30(2, 0))
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

bool Function_30(var uParam0, bool bParam1) //Position: 0x1264 / 4708
{
	int iVar0;
	
	iVar0 = Function_32(uParam0);
	if (!Function_31(iVar0))
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

bool Function_31(int iParam0) //Position: 0x12A2 / 4770
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_32(int iParam0) //Position: 0x12B9 / 4793
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_33(int iParam0) //Position: 0x12D3 / 4819
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_34(var uParam0, int iParam1) //Position: 0x12E9 / 4841
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
		cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar3, "_") };
		cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar3, I2STR(bVar0)) };
		Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar3, "_title") };
		Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar3, "_des") };
		Var51 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar3, "_prg") };
		Var59 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar3, "_total") };
		Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar3, "_pct") };
		stradd(&cVar43, "_count", 32);
		Var27 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9(&cVar3, "_obj1") };
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
			Function_8(&uParam0);
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

int Function_35(int iParam0) //Position: 0x1521 / 5409
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

var Function_36(int iParam0) //Position: 0x1556 / 5462
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

