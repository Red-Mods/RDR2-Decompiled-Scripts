//Decompiled with MagicRDR v1.0
//Function Count : 26
//Statics Count : 0
//Natives Count : 44
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	while (!Global_140633 && !IS_EXITFLAG_SET())
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
			iVar3 = Function_25(&iVar2);
			if (iVar3 == 4294967295)
			{
				iVar3 = Function_24(&iVar2);
				Global_132987[iVar3125].f_140 = SC_CHALLENGE_GET_LEADERBOARD_ID(&iVar2, 0);
			}
			strcpy(&Global_132987[iVar3125] + 212[111] + 8, UI_GET_STRING("SClubStat_EmptyGamer"), 24);
			strcpy(&Global_132987[iVar3125] + 212[011] + 8, UI_GET_STRING("SClubStat_EmptyGamer"), 24);
			if (SC_CHALLENGE_IS_ACTIVE(&iVar2) && !SC_CHALLENGE_IS_RUNNING(&iVar2))
			{
				SC_CHALLENGE_LAUNCH(&iVar2);
				Global_132987[iVar3125].f_120 = 1;
				Function_23(&iVar2, iVar3);
				Function_20(&iVar2);
				Function_16(&iVar2, 0);
			}
			else if (!Global_132987[iVar3125].f_120)
			{
				Function_15(&iVar2, iVar3);
				Function_1(&iVar2);
				Function_16(&iVar2, 0);
			}
		}
		iVar1++;
	}
	Global_140632 = !Global_53524.f_44;
	REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x133 / 307
{
	int iVar0;
	struct<8> Var1;
	char* cVar9[32];
	bool bVar17;
	
	iVar0 = Function_25(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_132987[iVar0125].f_120)
		{
			strcpy(&cVar9, "SC_AA", 32);
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar9, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
			{
				bVar17 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
			}
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar9, "_") };
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar9, I2STR(bVar17)) };
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar9, "_times") };
			if (Global_132987[iVar0125].f_116)
			{
				UI_SET_STRING(&Var1, UI_GET_STRING("SClubStat_CurrentAttempt"));
				UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_CurrentAttempt");
				UI_CHALLENGE_MAKE_CURRENT(&iParam0);
			}
			else
			{
				UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_LastAttempt");
			}
			Function_10(&iParam0, (*&Global_132987[iVar0125] + 212)[411], (*&Global_132987[iVar0125] + 212)[311], (*&Global_132987[iVar0125] + 212)[211]);
			UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, Function_9(&iParam0));
			if (!Function_8(&iParam0) || !NET_MAILBOX_IS_SIGNED_INTO_SC())
			{
				UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
			}
			Function_2(&iParam0);
		}
	}
	return;
}

void Function_2(int iParam0) //Position: 0x2A4 / 676
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	iVar2 = Function_25(&iParam0);
	if (iVar2 >= 4294967295)
	{
		if (!Function_7())
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_6(464) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000001:
					if (Function_6(459) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000002:
					if (Function_6(463) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000003:
					if (Function_6(462) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000004:
					if (Function_6(466) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000005:
					if (Function_6(460) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000006:
					if (Function_6(465) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000007:
					if (Function_6(461) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000008:
					if (Function_3(Global_46914[0]))
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000009:
					if (StackVal >= 3)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
			}
			if (bVar1)
			{
				UI_CHALLENGE_MAKE_CURRENT(&iParam0);
			}
		}
	}
	return;
}

bool Function_3(int iParam0) //Position: 0x4D7 / 1239
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_4(&(Global_43791[iParam0]), 4096);
}

int Function_4(var uParam0, int iParam1) //Position: 0x4F5 / 1269
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0) //Position: 0x512 / 1298
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

float Function_6(int iParam0) //Position: 0x528 / 1320
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

bool Function_7() //Position: 0x561 / 1377
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
			iVar3 = Function_25(&iVar2);
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

bool Function_8(int iParam0) //Position: 0x5B1 / 1457
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
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
			return Function_3(Global_46914[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_9(int iParam0) //Position: 0x69C / 1692
{
	int iVar0;
	
	iVar0 = Function_25(&iParam0);
	if (iVar0 >= 4294967295)
	{
		switch (StackVal)
		{
			case 0x00000000:
				if (Global_132987[iVar0125].f_148 <= 1)
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

void Function_10(int iParam0, float fParam1, var uParam2, var uParam3) //Position: 0x703 / 1795
{
	bool bVar0;
	char* cVar1[32];
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
	
	iVar81 = Function_25(&iParam0);
	strcpy(&cVar1, "SC_AA", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(fParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var49);
	}
	else if (Function_8(&iParam0))
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var65);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var41);
	}
	if (iVar81 >= 4294967295)
	{
		if (StackVal >= 1)
		{
			UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var73);
		}
	}
}

struct<32> Function_11(var uParam0) //Position: 0x8A4 / 2212
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Function_12(uParam0);
	Var11 = { StackVal, Function_12(uParam0) };
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

struct<8> Function_12(int iParam0) //Position: 0x924 / 2340
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = iParam0;
	Var0 = FLOOR((bVar2 / 3600.0f));
	while (bVar2 <= 3600.0f)
	{
		bVar2 = (bVar2 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar2 / 60.0f));
	while (bVar2 <= 60.0f)
	{
		bVar2 = (bVar2 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar2);
	Var0.f_12 = (StackVal - IntToFloat(bVar2));
	return StackVal, Var0;
}

struct<32> Function_13(char* cParam0) //Position: 0x993 / 2451
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_14(char* cParam0) //Position: 0x9B5 / 2485
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_15(int iParam0, int iParam1) //Position: 0x9D0 / 2512
{
	bool bVar0;
	char* cVar2[32];
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
		strcpy(&cVar2, "SC_AA", 32);
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_SP") };
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
		{
			bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
		}
		strcpy(&cVar50, "SC_AA_ICON_", 32);
		straddi(&cVar50, bVar0, 32);
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_") };
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, I2STR(bVar0)) };
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_title") };
		Var18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_des") };
		Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_obj1") };
		Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_obj2") };
		Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_obj3") };
		Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_goal1") };
		Var66 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_goal2") };
		Var74 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_goal3") };
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nnObjGoal1"))
		{
			UI_SET_STRING(&Var58, I2STR(SC_CHALLENGE_GET_VAR_INT(&iParam0, "nnObjGoal1")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nnObjGoal2"))
		{
			UI_SET_STRING(&Var66, I2STR(SC_CHALLENGE_GET_VAR_INT(&iParam0, "nnObjGoal2")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nnObjGoal3"))
		{
			UI_SET_STRING(&Var74, I2STR(SC_CHALLENGE_GET_VAR_INT(&iParam0, "nnObjGoal3")));
		}
		UI_CHALLENGE_CREATE(&iParam0, &Var10, &Var18);
		UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, Function_9(&iParam0));
		if (!Function_8(&iParam0))
		{
			UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(&iParam0, &cVar50);
		UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 0, &Var26);
		UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 1, &Var34);
		UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 2, &Var42);
		Function_10(&iParam0, 0.0f, (*&Global_132987[iParam1125] + 212)[311], (*&Global_132987[iParam1125] + 212)[211]);
	}
	return;
}

void Function_16(int iParam0, int iParam1) //Position: 0xBF3 / 3059
{
	int iVar0;
	bool bVar1;
	char* cVar2[32];
	struct<8> Var26;
	struct<8> Var34;
	struct<8> Var42;
	struct<8> Var50;
	struct<8> Var58;
	bool bVar66;
	char* cVar67[32];
	struct<8> Var83;
	struct<8> Var91;
	struct<8> Var99;
	char* cVar107[32];
	
	iVar0 = Function_25(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_132987[iVar0125].f_120)
		{
			strcpy(&cVar2, "SC_AA", 32);
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
			{
				bVar1 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
			}
			Function_1(&iParam0);
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_") };
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, I2STR(bVar1)) };
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_obj1") };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_obj2") };
			Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_obj3") };
			Var50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_globalName") };
			Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar2, "_friendName") };
			strcpy(&Global_132987[iVar0125] + 212[211] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			strcpy(&Global_132987[iVar0125] + 212[411] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			UI_SET_STRING(&Var58, &Global_132987[iVar0125] + 212[111] + 8);
			UI_SET_STRING(&Var50, &Global_132987[iVar0125] + 212[011] + 8);
			UI_SET_STRING("SC_MY_BEST_GamerTag", &Global_132987[iVar0125] + 212[211] + 8);
			UI_SET_STRING("SC_MY_CURRENT_GamerTag", &Global_132987[iVar0125] + 212[411] + 8);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 0, &Var26);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 1, &Var34);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 2, &Var42);
			UI_CHALLENGE_SET_TIME_HEADER(&iParam0, "SCChallenge_completion_time");
			switch (iParam1)
			{
				case 0x00000000:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, "SC_MY_CURRENT_GamerTag");
					if (Global_132987[iVar0125].f_116)
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_CurrentAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					}
					else
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_LastAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_LastAttempt"));
					}
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_19(&iParam0, iVar0, 4, 2);
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var58);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_19(&iParam0, iVar0, 1, 2);
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var50);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_19(&iParam0, iVar0, 0, 2);
					break;
			}
		}
		else
		{
			cVar107 = "";
			strcpy(&cVar67, "SC_community", 32);
			if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
			{
				bVar66 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
			}
			Function_20(&iParam0);
			cVar67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar67, "_") };
			cVar67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar67, I2STR(bVar66)) };
			Var83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar67, "_obj1") };
			Var91 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar67, "_globalName") };
			Var99 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar67, "_friendName") };
			strcpy(&Global_132987[iVar0125] + 212[411] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			UI_SET_STRING(&Var99, &Global_132987[iVar0125] + 212[111] + 8);
			UI_SET_STRING(&Var91, &Global_132987[iVar0125] + 212[011] + 8);
			UI_SET_STRING("SC_MY_CURRENT_GamerTag", &Global_132987[iVar0125] + 212[411] + 8);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 0, "");
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 1, &cVar107);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 2, &cVar107);
			UI_CHALLENGE_SET_TIME_HEADER(&iParam0, &Var83);
			switch (iParam1)
			{
				case 0x00000000:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, "SC_MY_CURRENT_GamerTag");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_LastAttempt");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_17(&iParam0, iVar0, 4, 2);
					UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					if (Global_132987[iVar0125].f_116)
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_CurrentAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					}
					else
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_LastAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_LastAttempt"));
					}
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var99);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_17(&iParam0, iVar0, 1, 2);
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var91);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_17(&iParam0, iVar0, 0, 2);
					break;
				}
			}
	}
	return;
}

void Function_17(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x137A / 4986
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_count") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_compare") };
	Function_18(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iParam1125] + 212)[iParam211], Var17);
	Function_18(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iParam1125] + 212)[iParam311], Var9);
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 1, &Var9);
}

void Function_18(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x1445 / 5189
{
	int iVar0;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nCCID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&uParam0, "nCCID");
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

void Function_19(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1497 / 5271
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	strcpy(&cVar1, "SC_AA", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "n_bestTime") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_compareTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11((*&Global_132987[iParam1125] + 212)[iParam211]) };
	UI_SET_STRING(&Var17, &Var25);
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11((*&Global_132987[iParam1125] + 212)[iParam311]) };
	UI_SET_STRING(&Var9, &Var25);
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		if ((*&Global_132987[iParam1125] + 212[iParam211] + 56)[iVar33])
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE(&iParam0, iVar33, 9);
		}
		else
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE(&iParam0, iVar33, 8);
		}
		if ((*&Global_132987[iParam1125] + 212[iParam311] + 56)[iVar33])
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(&iParam0, iVar33, 9);
		}
		else
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(&iParam0, iVar33, 8);
		}
		iVar33++;
	}
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 1, &Var9);
}

void Function_20(int iParam0) //Position: 0x15EA / 5610
{
	int iVar0;
	
	iVar0 = Function_25(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (Global_132987[iVar0125].f_120)
		{
			Function_21(&iParam0);
		}
	}
	return;
}

void Function_21(int iParam0) //Position: 0x1619 / 5657
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_locked", "") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_des") };
	if (SC_CHALLENGE_GET_COMMUNITY_VALUE(&iParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iParam0))
	{
		Function_22(&iParam0);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var17);
		UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 4);
	}
	return;
}

void Function_22(int iParam0) //Position: 0x16BF / 5823
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	strcpy(&cVar1, "SC_community", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var9);
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x173C / 5948
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
		cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar3, "_") };
		cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar3, I2STR(bVar0)) };
		Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar3, "_title") };
		Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar3, "_des") };
		Var51 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar3, "_prg") };
		Var59 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar3, "_total") };
		Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar3, "_pct") };
		stradd(&cVar43, "_count", 32);
		Var27 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(&cVar3, "_obj1") };
		PRINTSTRING("INIT SC CC ");
		PRINTSTRING(&cVar3);
		PRINTSTRING(" Current = ");
		PRINTINT(bVar1);
		PRINTSTRING(" Goal = ");
		PRINTINT(bVar2);
		PRINTNL();
		Function_18(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uParam0, TO_FLOAT(Global_132987[iParam1125].f_144), cVar43);
		Function_18(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uParam0, TO_FLOAT(bVar1), Var59);
		UI_SET_STRING("SC_CCChallenge_Title", UI_GET_STRING(&Var11));
		strcpy(&cVar75, FLOAT_TO_STRING_FORMATED((fVar79 * 100.0f), 3, 2), 16);
		stradd(&cVar75, "%", 16);
		UI_SET_STRING(&Var67, &cVar75);
		UI_CHALLENGE_CREATE(&uParam0, &Var11, &Var19);
		UI_CHALLENGE_SET_TROPHY_TYPE(&uParam0, 4);
		if (SC_CHALLENGE_GET_COMMUNITY_VALUE(&uParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(&uParam0))
		{
			Function_22(&uParam0);
		}
		else
		{
			UI_CHALLENGE_SET_DESCRIPTION(&uParam0, &Var19);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(&uParam0, &cVar35);
		UI_CHALLENGE_SET_PROGRESS(&uParam0, 0.0f, 1.0f, -1.0f, &Var51);
		UI_CHALLENGE_SET_PROGRESS_DETAIL(&uParam0, &Var67);
		UI_CHALLENGE_SET_OBJECTIVE(&uParam0, 0, &Var27);
		if (!Function_7())
		{
			UI_CHALLENGE_MAKE_CURRENT(&uParam0);
		}
	}
	return;
}

int Function_24(int iParam0) //Position: 0x1974 / 6516
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

var Function_25(int iParam0) //Position: 0x19A9 / 6569
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

