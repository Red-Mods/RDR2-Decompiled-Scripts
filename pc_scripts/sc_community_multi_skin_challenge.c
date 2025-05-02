//Decompiled with MagicRDR v1.0
//Function Count : 39
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
	struct<677> Var0;
	
	while (!Global_140633 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	*(&Var0 + 12) = 22;
	*(&Var0 + 196) = 22;
	*(&Var0 + 380) = 22;
	uVar87 = "fObjBaseScore";
	uVar88 = "fObjBonusScale";
	uVar89 = "_StatCount";
	fVar105 = 0.0f;
	iVar115 = 0;
	iVar117 = Function_38(&iScriptParam_0);
	iVar122 = 1;
	iVar123 = 0;
	iVar124 = 0;
	bVar131 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iScriptParam_0);
	bVar130 = SC_CHALLENGE_GET_COMMUNITY_VALUE(&iScriptParam_0);
	iVar132 = 4294967295;
	if (iVar117 == 4294967295)
	{
		iVar117 = Function_37(&iScriptParam_0);
		Function_36(&iScriptParam_0, iVar117);
	}
	Global_132987[iVar117125].f_120 = 1;
	while (Function_31() && !IS_EXITFLAG_SET())
	{
		WAIT(10000);
	}
	if (bVar130 <= bVar131 && !Var0.f_572)
	{
		Var0.f_572 = 1;
		Var0.f_580 = 1;
		iVar116 = 4;
	}
	else if (!Global_132987[iVar117125].f_136)
	{
		Function_30(&iScriptParam_0);
		Global_132987[iVar117125].f_136 = 1;
	}
	Global_132987[iVar117125].f_116 = 0;
	while (((!IS_EXITFLAG_SET() && iVar122) && 1) && Global_140633)
	{
		switch (iVar116)
		{
			case 0x00000000:
				Function_29(&Var0);
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nCCID"))
				{
					iVar137 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nCCID");
				}
				Var0.f_660 = SC_CHALLENGE_GET_LEADERBOARD_ID(&iScriptParam_0, 0);
				if (Var0.f_660 < 0)
				{
					Var0.f_660 = 81;
				}
				uVar129 = Var0.f_660;
				Global_132987[iVar117125].f_140 = uVar129;
				Global_132987[iVar117125].f_124 = 1;
				Function_28(&iScriptParam_0, &Var0);
				if (bVar130 <= bVar131)
				{
					iVar116 = 1;
				}
				else
				{
					iVar116 = 0;
				}
				break;
			
			case 0x00000001:
				if (!Function_27(&uVar85) && Function_26(&Var0))
				{
					Function_23(&uVar85);
				}
				if (((Function_20(&uVar85, 3.0f) && !HUD_IS_FADED()) && Function_19(Global_119936, 524288)) && Function_19(Global_119936, 1048576))
				{
					Global_132987[iVar117125].f_116 = 1;
					Function_18(&iScriptParam_0, Var0.f_612);
					iVar116 = 3;
				}
				break;
			
			case 0x00000003:
				if (!bVar126)
				{
					fVar127 = (*&Global_132987[iVar117125] + 212)[511];
					if (fVar127 < 0.0f)
					{
						bVar126 = true;
					}
				}
				bVar131 = SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iScriptParam_0);
				bVar130 = SC_CHALLENGE_GET_COMMUNITY_VALUE(&iScriptParam_0);
				fVar109 = Var0.f_668;
				Function_17(&Var0, iVar117);
				if (Var0.f_668 < fVar109 || TO_FLOAT(bVar130) < Var0.f_676)
				{
					(*&Global_132987[iVar117125] + 212)[211] = ((*&Global_132987[iVar117125] + 212)[211] + (Var0.f_668 - fVar109));
					Function_14(&iScriptParam_0, &Var0 + 608, Var0.f_668, TO_FLOAT(bVar130), TO_FLOAT(bVar131));
					if (TO_FLOAT(bVar130) < Var0.f_676)
					{
						Var0.f_676 = TO_FLOAT(bVar130);
					}
					if (bVar126)
					{
						fVar128 = ((*&Global_132987[iVar117125] + 212)[511] - fVar127);
					}
					Function_10(&iScriptParam_0, fVar128, TO_FLOAT(bVar131), bVar126);
				}
				if (bVar130 > bVar131)
				{
					Var0.f_572 = 1;
					Var0.f_580 = 1;
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0) == 3)
				{
					Var0.f_564 = 0;
					Var0.f_568 = 1;
					iVar116 = 4;
				}
				if (Var0.f_572 || Var0.f_568)
				{
					Var0.f_564 = 0;
					iVar116 = 4;
				}
				break;
			
			case 0x00000004:
				UI_CHALLENGE_SET_TROPHY_TYPE(&iScriptParam_0, 8);
				if (Var0.f_580)
				{
					Function_8(&iScriptParam_0);
					if (!Global_132987[iVar117125].f_112)
					{
						Global_132987[iVar117125].f_112 = 1;
						UI_SET_STRING("SC_CC_Challenge_Title", UI_GET_STRING("SC_community_2_title"));
						Function_5("SC_CC_END_MESSAGE", 10.0f, 1, 0, 2, 1, 0);
						WAIT(100);
					}
					Function_4(6);
					Function_1(iVar117);
				}
				else if (Var0.f_568)
				{
					iVar116 = 0;
				}
				else
				{
					iVar132 = 0;
					SC_CHALLENGE_PROCESS_EXPIRATION(&iScriptParam_0);
					iVar116 = 5;
				}
			
			case 0x00000005:
				if (iVar132 == 0)
				{
					iVar132 = SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0);
				}
				else
				{
					iVar122 = 0;
					if (iVar132 == 3)
					{
						iVar122 = 0;
					}
				}
				break;
		}
		WAIT(100);
	}
	Global_132987[iVar117125].f_116 = 0;
	SC_CHALLENGE_CLEAN_UP(&iScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x419 / 1049
{
	if (!Function_3(Global_140678[iParam0], 1))
	{
		Function_2(&(Global_140678[iParam0]), 1);
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x43B / 1083
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_3(var uParam0, int iParam1) //Position: 0x44C / 1100
{
	return (uParam0 && iParam1) == 0;
}

void Function_4(int iParam0) //Position: 0x459 / 1113
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

void Function_5(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x490 / 1168
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

struct<16> Function_6(int iParam0) //Position: 0x51B / 1307
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

bool Function_7() //Position: 0x55A / 1370
{
	if (Function_3(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_8(int iParam0) //Position: 0x575 / 1397
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

struct<32> Function_9(char* cParam0) //Position: 0x5F2 / 1522
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_10(int iParam0, bool bParam1, float fParam2, var uParam3) //Position: 0x60D / 1549
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

void Function_11(var uParam0, int iParam1) //Position: 0x955 / 2389
{
	Function_2(&uParam0, iParam1);
	return;
}

bool Function_12(var uParam0, bool bParam1) //Position: 0x963 / 2403
{
	return (uParam0 && bParam1) == 0;
}

void Function_13(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x970 / 2416
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

void Function_14(int iParam0, var uParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0x9C2 / 2498
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

void Function_15(int iParam0, bool bParam1) //Position: 0xAFB / 2811
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

bool Function_16() //Position: 0xCBD / 3261
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

void Function_17(struct<669> Param0) //Position: 0xD0D / 3341
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		fVar1 = (fVar1 + ((Global_54086[(*&Param0 + 380)[iVar0]] - (*&Param0 + 196)[iVar0]) * (*&Param0 + 12)[iVar0]));
		(*&Global_132987[iParam1125] + 748)[iVar0] = ROUND((Global_54086[(*&Param0 + 380)[iVar0]] - (*&Param0 + 196)[iVar0]));
		iVar0++;
	}
	Param0.f_668 = fVar1;
	(*&Global_132987[iParam1125] + 212)[411] = Param0.f_668;
	return;
}

void Function_18(int iParam0, float fParam1) //Position: 0xD94 / 3476
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

int Function_19(var uParam0, int iParam1) //Position: 0xE6C / 3692
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_20(int iParam0, float fParam1) //Position: 0xE7F / 3711
{
	if (Function_27(&iParam0))
	{
		if (Function_21(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_21(vector3 vParam0) //Position: 0xE9D / 3741
{
	if (Function_27(&vParam0))
	{
		if (Function_22(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_22(int iParam0) //Position: 0xF6A / 3946
{
	return Function_3(iParam0, 2);
}

void Function_23(int iParam0) //Position: 0xF78 / 3960
{
	if (!Function_27(&iParam0))
	{
		Function_24(&iParam0, 0.0f);
	}
	return;
}

void Function_24(vector3 vParam0) //Position: 0xF8F / 3983
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_2(&vParam0, 1);
	Function_25(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0xFB4 / 4020
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

var Function_26(struct<613> Param0) //Position: 0xFCA / 4042
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		fVar1 = (fVar1 + ((Global_54086[(*&Param0 + 380)[iVar0]] - (*&Param0 + 196)[iVar0]) * (*&Param0 + 12)[iVar0]));
		iVar0++;
	}
	Param0.f_612 = fVar1;
	return Param0.f_612 < 0.0f;
}

bool Function_27(int iParam0) //Position: 0x101B / 4123
{
	return Function_3(iParam0, 1);
}

void Function_28(int iParam0, struct<665> Param1) //Position: 0x1029 / 4137
{
	char* cVar0[16];
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fPtScale", 16);
	iVar5 = Function_38(&iParam0);
	if (iVar5 >= 4294967295)
	{
		(*&Global_132987[iVar5125] + 212)[411] = 0.0f;
		Global_137989[iVar566].f_24 = 0;
	}
	(*&Param1 + 380)[0] = 274;
	(*&Param1 + 380)[1] = 276;
	(*&Param1 + 380)[2] = 277;
	(*&Param1 + 380)[3] = 278;
	(*&Param1 + 380)[4] = 279;
	(*&Param1 + 380)[5] = 280;
	(*&Param1 + 380)[6] = 281;
	(*&Param1 + 380)[7] = 282;
	(*&Param1 + 380)[8] = 284;
	(*&Param1 + 380)[9] = 285;
	(*&Param1 + 380)[10] = 286;
	(*&Param1 + 380)[11] = 288;
	(*&Param1 + 380)[12] = 289;
	(*&Param1 + 380)[13] = 292;
	(*&Param1 + 380)[14] = 293;
	(*&Param1 + 380)[15] = 297;
	(*&Param1 + 380)[16] = 305;
	(*&Param1 + 380)[17] = 306;
	(*&Param1 + 380)[18] = 307;
	(*&Param1 + 380)[19] = 308;
	(*&Param1 + 380)[20] = 311;
	(*&Param1 + 380)[21] = 312;
	iVar4 = 0;
	while (iVar4 <= 22)
	{
		straddi(&cVar0, iVar4, 16);
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, &cVar0))
		{
			(*&Param1 + 12)[iVar4] = SC_CHALLENGE_GET_VAR_FLOAT(&iParam0, &cVar0);
		}
		else
		{
			(*&Param1 + 12)[iVar4] = 1.0f;
		}
		(*&Param1 + 196)[iVar4] = (Global_54086[(*&Param1 + 380)[iVar4]] - 0.0f);
		Param1.f_664 = (Param1.f_664 + (*&Param1 + 196)[iVar4]);
		strcpy(&cVar0, "fPtScale", 16);
		if (iVar5 >= 4294967295)
		{
			(*&Global_137989[iVar566] + 276)[iVar4] = 0;
			(*&Global_132987[iVar5125] + 748)[iVar4] = 0;
		}
		iVar4++;
	}
	return;
}

void Function_29(struct<673> Param0) //Position: 0x1221 / 4641
{
	Param0.f_564 = 0;
	Param0.f_580 = 0;
	Param0.f_568 = 0;
	Param0.f_572 = 0;
	Param0.f_584 = 4294967295;
	Param0.f_8 = 0;
	Param0.f_596 = 0.0f;
	Param0.f_600 = 0.0f;
	Param0.f_604 = 0.0f;
	Param0.f_592 = 0;
	Param0.f_588 = 0;
	Param0.f_616 = 0;
	Param0.f_672 = 0.0f;
	Param0.f_620 = 0.0f;
	Param0.f_576 = 0;
	return;
}

void Function_30(var uParam0) //Position: 0x128F / 4751
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

int Function_31() //Position: 0x1309 / 4873
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

bool Function_32(var uParam0, bool bParam1) //Position: 0x135F / 4959
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

bool Function_33(int iParam0) //Position: 0x139D / 5021
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_34(int iParam0) //Position: 0x13B4 / 5044
{
	if (!Function_35(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_35(int iParam0) //Position: 0x13CE / 5070
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_36(var uParam0, int iParam1) //Position: 0x13E4 / 5092
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

int Function_37(int iParam0) //Position: 0x161C / 5660
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

var Function_38(int iParam0) //Position: 0x1651 / 5713
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

