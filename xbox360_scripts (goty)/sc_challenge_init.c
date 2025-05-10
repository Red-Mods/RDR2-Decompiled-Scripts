//Decompiled with MagicRDR v1.0
//Function Count : 27
//Statics Count : 0
//Natives Count : 46
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	while (!Global_88795 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	iVar0 = NET_MAILBOX_GET_MAX_NUM_CHALLENGES();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (NET_MAILBOX_IS_CHALLENGE_VALID(iVar1))
		{
			iVar2 = NET_MAILBOX_GET_CHALLENGE_BY_INDEX(iVar1);
			iVar3 = Function_26(&iVar2);
			if (iVar3 == 4294967295)
			{
				iVar3 = Function_25(&iVar2);
				Global_84611[iVar3140].f_88 = SC_CHALLENGE_GET_LEADERBOARD_ID(iVar2, 0);
			}
			strcpy(&Global_84611[iVar3140] + 144[112] + 8, UI_GET_STRING("SClubStat_EmptyGamer"), 24);
			strcpy(&Global_84611[iVar3140] + 144[012] + 8, UI_GET_STRING("SClubStat_EmptyGamer"), 24);
			if (SC_CHALLENGE_IS_ACTIVE(iVar2) && !SC_CHALLENGE_IS_RUNNING(iVar2))
			{
				SC_CHALLENGE_LAUNCH(iVar2);
				Global_84611[iVar3140].f_68 = 1;
				Function_24(&iVar2, iVar3);
				Function_21(&iVar2);
				Function_17(&iVar2, 0);
			}
			else if (!Global_84611[iVar3140].f_68)
			{
				Function_16(&iVar2, iVar3);
				Function_1(&iVar2);
				Function_17(&iVar2, 0);
			}
		}
		iVar1++;
	}
	Global_88794 = !Global_34165.f_44;
	REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x12E / 302
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	bool bVar17;
	
	iVar0 = Function_26(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_84611[iVar0140].f_68)
		{
			strcpy(&Var9, "SC_AA", 32);
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var9, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
			{
				bVar17 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
			}
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var9, "_") };
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var9, I2STR(bVar17)) };
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var9, "_times") };
			if (Global_84611[iVar0140].f_64)
			{
				UI_SET_STRING(&Var1, UI_GET_STRING("SClubStat_CurrentAttempt"));
				UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_CurrentAttempt");
				UI_CHALLENGE_MAKE_CURRENT(*iParam0);
			}
			else
			{
				UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_LastAttempt");
			}
			Function_10(*iParam0, (*&Global_84611[iVar0140] + 144)[412], (*&Global_84611[iVar0140] + 144)[312], (*&Global_84611[iVar0140] + 144)[212]);
			UI_CHALLENGE_SET_TROPHY_TYPE(*iParam0, Function_9(*iParam0));
			if (!Function_8(*iParam0) || !NET_MAILBOX_IS_SIGNED_INTO_SC())
			{
				UI_CHALLENGE_SET_TROPHY_TYPE(*iParam0, 8);
			}
			Function_2(*iParam0);
		}
	}
	return;
}

void Function_2(int iParam0) //Position: 0x293 / 659
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	iVar2 = Function_26(&iParam0);
	if (iVar2 >= 4294967295)
	{
		if (!Function_7())
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_6(464) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000001:
					if (Function_6(459) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000002:
					if (Function_6(463) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000003:
					if (Function_6(462) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000004:
					if (Function_6(466) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000005:
					if (Function_6(460) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000006:
					if (Function_6(465) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000007:
					if (Function_6(461) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000008:
					if (Function_3(Global_30717[0]))
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000009:
					if (StackVal >= 3)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
			}
			if (bVar1)
			{
				UI_CHALLENGE_MAKE_CURRENT(iParam0);
			}
		}
	}
	return;
}

bool Function_3(int iParam0) //Position: 0x4C2 / 1218
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_4(&(Global_29008[iParam0]), 4096);
}

int Function_4(var uParam0, int iParam1) //Position: 0x4E0 / 1248
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0) //Position: 0x4FC / 1276
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

float Function_6(int iParam0) //Position: 0x512 / 1298
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

bool Function_7() //Position: 0x54B / 1355
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
			iVar3 = Function_26(&iVar2);
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

bool Function_8(char* cParam0) //Position: 0x59A / 1434
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_6(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_6(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_6(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_6(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_6(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_6(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_6(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_6(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_3(Global_30717[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_9(int iParam0) //Position: 0x682 / 1666
{
	int iVar0;
	
	iVar0 = Function_26(&iParam0);
	if (iVar0 >= 4294967295)
	{
		switch (StackVal)
		{
			case 0x00000000:
				if (Global_84611[iVar0140].f_96 <= 1)
				{
					return 4;
				}
				return 0;
				break;
			
			case 0x00000001:
				return 3;
				break;
			
			case 0x00000002:
				return 2;
				break;
			
			case 0x00000003:
				return 1;
				break;
			}
	}
	return 0;
}

void Function_10(int iParam0, float fParam1, var uParam2, var uParam3) //Position: 0x6E9 / 1769
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	struct<8> Var33;
	struct<8> Var41;
	struct<8> Var49;
	struct<8> Var57;
	struct<8> Var65;
	struct<8> Var73;
	int iVar81;
	
	iVar81 = Function_26(&iParam0);
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&Var1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&Var1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(fParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var49);
	}
	else if (Function_11())
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var57);
	}
	else if (Function_8(iParam0))
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var65);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var41);
	}
	if (iVar81 >= 4294967295)
	{
		if (StackVal >= 1)
		{
			UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var73);
		}
	}
}

bool Function_11() //Position: 0x893 / 2195
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<32> Function_12(var uParam0) //Position: 0x89C / 2204
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Var11 = { StackVal, StackVal, StackVal, Function_13(uParam0) };
	iVar8 = StackVal;
	iVar9 = StackVal;
	bVar10 = FLOOR((Var11.f_12 * 100.0f));
	if (iVar8 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, iVar8, 32);
	stradd(&cVar0, ":", 32);
	if (iVar9 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, iVar9, 32);
	stradd(&cVar0, ".", 32);
	if (bVar10 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, bVar10, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_13(var uParam0) //Position: 0x91C / 2332
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_14(char* cParam0, char* cParam1, bool bParam2) //Position: 0x98D / 2445
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, bParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_15(char* cParam0, bool bParam1) //Position: 0x9AC / 2476
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(var uParam0, int iParam1) //Position: 0x9C5 / 2501
{
	bool bVar0;
	struct<8> Var2;
	struct<8> Var10;
	struct<8> Var18;
	struct<8> Var26;
	struct<8> Var34;
	struct<8> Var42;
	char* cVar50[32];
	struct<8> Var58;
	struct<8> Var66;
	struct<8> Var74;
	
	if (iParam1 < 4294967295 && iParam1 > 20)
	{
		strcpy(&Var2, "SC_AA", 32);
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_SP") };
		if (SC_CHALLENGE_IS_VAR_VALID(*uParam0, "nAAID"))
		{
			bVar0 = SC_CHALLENGE_GET_VAR_INT(*uParam0, "nAAID");
		}
		strcpy(&cVar50, "SC_AA_ICON_", 32);
		straddi(&cVar50, bVar0, 32);
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_") };
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, I2STR(bVar0)) };
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_title") };
		Var18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_des") };
		Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_obj1") };
		Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_obj2") };
		Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_obj3") };
		Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_goal1") };
		Var66 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_goal2") };
		Var74 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_goal3") };
		if (SC_CHALLENGE_IS_VAR_VALID(*uParam0, "nnObjGoal1"))
		{
			UI_SET_STRING(&Var58, I2STR(SC_CHALLENGE_GET_VAR_INT(*uParam0, "nnObjGoal1")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(*uParam0, "nnObjGoal2"))
		{
			UI_SET_STRING(&Var66, I2STR(SC_CHALLENGE_GET_VAR_INT(*uParam0, "nnObjGoal2")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(*uParam0, "nnObjGoal3"))
		{
			UI_SET_STRING(&Var74, I2STR(SC_CHALLENGE_GET_VAR_INT(*uParam0, "nnObjGoal3")));
		}
		UI_CHALLENGE_CREATE(*uParam0, &Var10, &Var18);
		UI_CHALLENGE_SET_TROPHY_TYPE(*uParam0, Function_9(*uParam0));
		if (!Function_8(*uParam0))
		{
			UI_CHALLENGE_SET_TROPHY_TYPE(*uParam0, 8);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(*uParam0, &cVar50);
		UI_CHALLENGE_SET_OBJECTIVE(*uParam0, 0, &Var26);
		UI_CHALLENGE_SET_OBJECTIVE(*uParam0, 1, &Var34);
		UI_CHALLENGE_SET_OBJECTIVE(*uParam0, 2, &Var42);
		Function_10(*uParam0, 0.0f, (*&Global_84611[iParam1140] + 144)[312], (*&Global_84611[iParam1140] + 144)[212]);
		UI_CHALLENGE_MAKE_CURRENT(*uParam0);
	}
	return;
}

void Function_17(int iParam0, int iParam1) //Position: 0xBDC / 3036
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	struct<8> Var26;
	struct<8> Var34;
	struct<8> Var42;
	struct<8> Var50;
	struct<8> Var58;
	bool bVar66;
	struct<8> Var67;
	struct<8> Var83;
	struct<8> Var91;
	struct<8> Var99;
	int iVar107;
	
	iVar0 = Function_26(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_84611[iVar0140].f_68)
		{
			strcpy(&Var2, "SC_AA", 32);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
			{
				bVar1 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
			}
			Function_1(iParam0);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_") };
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, I2STR(bVar1)) };
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_obj1") };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_obj2") };
			Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_obj3") };
			Var50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_globalName") };
			Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var2, "_friendName") };
			strcpy(&Global_84611[iVar0140] + 144[212] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			strcpy(&Global_84611[iVar0140] + 144[412] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			UI_SET_STRING(&Var58, &Global_84611[iVar0140] + 144[112] + 8);
			UI_SET_STRING(&Var50, &Global_84611[iVar0140] + 144[012] + 8);
			UI_SET_STRING("SC_MY_BEST_GamerTag", &Global_84611[iVar0140] + 144[212] + 8);
			UI_SET_STRING("SC_MY_CURRENT_GamerTag", &Global_84611[iVar0140] + 144[412] + 8);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 0, &Var26);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 1, &Var34);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 2, &Var42);
			UI_CHALLENGE_SET_TIME_HEADER(*iParam0, "SCChallenge_completion_time");
			switch (iParam1)
			{
				case 0x00000000:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, "SC_MY_CURRENT_GamerTag");
					if (Global_84611[iVar0140].f_64)
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_CurrentAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					}
					else
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_LastAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_LastAttempt"));
					}
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_20(iParam0, iVar0, 4, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheBest");
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var58);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_20(iParam0, iVar0, 1, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_Dyn_ScoreLabel");
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var50);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_20(iParam0, iVar0, 0, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheirBest");
					break;
			}
		}
		else
		{
			iVar107 = "";
			strcpy(&Var67, "SC_community", 32);
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nCCID"))
			{
				bVar66 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nCCID");
			}
			Function_21(iParam0);
			Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var67, "_") };
			Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var67, I2STR(bVar66)) };
			Var83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var67, "_obj1") };
			Var91 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var67, "_globalName") };
			Var99 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var67, "_friendName") };
			strcpy(&Global_84611[iVar0140] + 144[412] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			UI_SET_STRING(&Var99, &Global_84611[iVar0140] + 144[112] + 8);
			UI_SET_STRING(&Var91, &Global_84611[iVar0140] + 144[012] + 8);
			UI_SET_STRING("SC_MY_CURRENT_GamerTag", &Global_84611[iVar0140] + 144[412] + 8);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 0, "");
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 1, iVar107);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 2, iVar107);
			UI_CHALLENGE_SET_TIME_HEADER(*iParam0, &Var83);
			switch (iParam1)
			{
				case 0x00000000:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, "SC_MY_CURRENT_GamerTag");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_LastAttempt");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_18(iParam0, iVar0, 4, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheBest");
					UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					if (Global_84611[iVar0140].f_64)
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_CurrentAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					}
					else
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_LastAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_LastAttempt"));
					}
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var99);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_18(iParam0, iVar0, 1, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_Dyn_ScoreLabel");
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var91);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_18(iParam0, iVar0, 0, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheirBest");
					break;
				}
			}
	}
	return;
}

void Function_18(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1420 / 5152
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nCCID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_count") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_compare") };
	Function_19(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, (*&Global_84611[iParam1140] + 144)[iParam212], Var17);
	Function_19(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, (*&Global_84611[iParam1140] + 144)[iParam312], Var9);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 1, &Var9);
}

void Function_19(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x14E5 / 5349
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

void Function_20(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1535 / 5429
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "n_bestTime") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_compareTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12((*&Global_84611[iParam1140] + 144)[iParam212]) };
	UI_SET_STRING(&Var17, &Var25);
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12((*&Global_84611[iParam1140] + 144)[iParam312]) };
	UI_SET_STRING(&Var9, &Var25);
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		if ((*&Global_84611[iParam1140] + 144[iParam212] + 32)[iVar33])
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE(*iParam0, iVar33, 9);
		}
		else
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE(*iParam0, iVar33, 8);
		}
		if ((*&Global_84611[iParam1140] + 144[iParam312] + 32)[iVar33])
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(*iParam0, iVar33, 9);
		}
		else
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(*iParam0, iVar33, 8);
		}
		iVar33++;
	}
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 1, &Var9);
}

void Function_21(int iParam0) //Position: 0x1680 / 5760
{
	int iVar0;
	
	iVar0 = Function_26(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (Global_84611[iVar0140].f_68)
		{
			Function_22(*iParam0);
		}
	}
	return;
}

void Function_22(char* cParam0) //Position: 0x16AD / 5805
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&Var1, "_locked", "") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_des") };
	if (Function_11())
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
		UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	}
	else if (SC_CHALLENGE_GET_COMMUNITY_VALUE(cParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(cParam0))
	{
		Function_23(cParam0);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var17);
		UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 4);
	}
	return;
}

void Function_23(char* cParam0) //Position: 0x1763 / 5987
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	strcpy(&Var1, "SC_community", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x17DC / 6108
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
		Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var3, "_") };
		Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var3, I2STR(bVar0)) };
		Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var3, "_title") };
		Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var3, "_des") };
		Var51 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var3, "_prg") };
		Var59 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var3, "_total") };
		Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var3, "_pct") };
		stradd(&cVar43, "_count", 32);
		Var27 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(&Var3, "_obj1") };
		PRINTSTRING("INIT SC CC ");
		PRINTSTRING(&Var3);
		PRINTSTRING(" Current = ");
		PRINTINT(bVar1);
		PRINTSTRING(" Goal = ");
		PRINTINT(bVar2);
		PRINTNL();
		Function_19(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0, TO_FLOAT(Global_84611[iParam1140].f_92), cVar43);
		Function_19(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0, TO_FLOAT(bVar1), Var59);
		UI_SET_STRING("SC_CCChallenge_Title", UI_GET_STRING(&Var11));
		strcpy(&cVar75, FLOAT_TO_STRING_FORMATED((fVar79 * 100.0f), 3, 2), 16);
		stradd(&cVar75, "%", 16);
		UI_SET_STRING(&Var67, &cVar75);
		UI_CHALLENGE_CREATE(*uParam0, &Var11, &Var19);
		UI_CHALLENGE_SET_TROPHY_TYPE(*uParam0, 4);
		if (SC_CHALLENGE_GET_COMMUNITY_VALUE(*uParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(*uParam0))
		{
			Function_23(*uParam0);
		}
		else
		{
			UI_CHALLENGE_SET_DESCRIPTION(*uParam0, &Var19);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(*uParam0, &cVar35);
		UI_CHALLENGE_SET_PROGRESS(*uParam0, 0.0f, 1.0f, -1.0f, &Var51);
		UI_CHALLENGE_SET_PROGRESS_DETAIL(*uParam0, &Var67);
		UI_CHALLENGE_SET_OBJECTIVE(*uParam0, 0, &Var27);
		if (!Function_7())
		{
			UI_CHALLENGE_MAKE_CURRENT(*uParam0);
		}
	}
	return;
}

int Function_25(int iParam0) //Position: 0x1A03 / 6659
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

var Function_26(int iParam0) //Position: 0x1A37 / 6711
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

