//Decompiled with MagicRDR v1.0
//Function Count : 520
//Statics Count : 585
//Natives Count : 681
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<985> Local_4 = { 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_252 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_308 = 99;
	iLocal_309 = 6;
	iLocal_301 = 1000;
	while (Function_253())
	{
		Function_208();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x3F / 63
{
	Function_207(1);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_312);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_313);
	Function_204(12, 1, 0, 1, 1);
	Function_204(13, 0, 0, 1, 1);
	Function_204(11, 0, 0, 1, 1);
	Function_204(14, 0, 0, 1, 1);
	if (IS_ACTOR_VALID(bLocal_497))
	{
		TASK_CLEAR(bLocal_497);
		SET_ACTOR_INVULNERABILITY(bLocal_497, false);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_497);
	}
	Function_203(bLocal_251);
	Function_203(Local_4);
	Function_202();
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_201();
	Function_175(bLocal_331, 1, 0, 1, 0, 0, 1, 1);
	Function_174();
	Function_170(&bLocal_259);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_311))
	{
		DESTROY_ITERATOR(bLocal_311);
	}
	RELEASE_LAYOUT_REF(bLocal_251);
	if (bLocal_330)
	{
		Function_24(Local_252, 1, 1, 1, 0);
	}
	else if (bLocal_331)
	{
		Function_20(Local_252);
	}
	else
	{
		Function_2(Local_252);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x10E / 270
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x12F / 303
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x14A / 330
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x16B / 363
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x181 / 385
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Function_7(bParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x21D / 541
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x23E / 574
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_9() //Position: 0x284 / 644
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x29D / 669
{
	int iVar0;
	
	if (!Function_18(bParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, bool bParam1) //Position: 0x2F0 / 752
{
	struct<4> Var0;
	
	if (!Function_18(bParam1))
	{
		return;
	}
	switch (Function_15(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_13(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_15(bParam1), Function_13(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x414 / 1044
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x439 / 1081
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x459 / 1113
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x470 / 1136
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x48B / 1163
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_17(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6D2 / 1746
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x6FB / 1787
{
	if (!Function_14(iParam0))
	{
		return 0;
	}
	if (!Function_19(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_19(int iParam0) //Position: 0x71F / 1823
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x734 / 1844
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x752 / 1874
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_18(bParam0))
	{
		return;
	}
	iVar0 = Function_15(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_22(int iParam0) //Position: 0x7F8 / 2040
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x822 / 2082
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA78 / 2680
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_15(bParam0) == 1)
	{
		iVar2 = Function_13(bParam0);
		Function_163(&(Global_3422[iVar240]));
		Function_162(4194304);
		if (bParam3)
		{
			Function_114(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_108(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_114(iVar2, &uVar0, 0);
		}
		bVar1 = Function_107();
		if (bParam1)
		{
			Function_91(iVar2, bParam0, bVar1);
			Function_90();
		}
	}
	Function_37(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_29(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_15(bParam0) == 1)
		{
			iVar2 = Function_13(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_25();
}

void Function_25() //Position: 0xB65 / 2917
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_26(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_26(int iParam0, bool bParam1) //Position: 0xB95 / 2965
{
	int iVar0;
	
	iVar0 = Function_27(iParam0);
	if (!Function_14(iVar0))
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

int Function_27(int iParam0) //Position: 0xBD2 / 3026
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xBEC / 3052
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xC02 / 3074
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_29(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_29(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_29(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_29(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_29(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_29(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEF9 / 3833
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_32(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_31(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_31(char* cParam0, int iParam1) //Position: 0xF65 / 3941
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xF9C / 3996
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_35(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_34(uVar0))
		{
			case 0x00000002:
				if (!Function_33(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_33(var uParam0, int iParam1) //Position: 0x1014 / 4116
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1027 / 4135
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_35(int iParam0) //Position: 0x10C8 / 4296
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x1105 / 4357
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1118 / 4376
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_18(bParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_13(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_86();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_80(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_13(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_41(1);
			Function_39(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_38(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_38(int iParam0, int iParam1) //Position: 0x132A / 4906
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x1364 / 4964
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_40())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_40() //Position: 0x13A6 / 5030
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x13AF / 5039
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_72();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_36(&Global_63095, 1);
		Function_36(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_42() //Position: 0x1400 / 5120
{
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_67();
	Function_67();
	Function_50();
	Function_50();
	if (!Function_40())
	{
		Function_47();
		Function_46();
		Function_45();
		Function_44();
	}
	Function_43();
	return;
}

void Function_43() //Position: 0x1433 / 5171
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_44() //Position: 0x1539 / 5433
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_45() //Position: 0x156C / 5484
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_46() //Position: 0x16FA / 5882
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_47() //Position: 0x18AE / 6318
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x18BC / 6332
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_49() //Position: 0x1AAD / 6829
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1AC2 / 6850
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				iVar2 = ((Function_66((50 + iVar4)) + Function_66((183 + iVar4))) + Function_66((90 + iVar4)));
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_51(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B5D / 7005
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_65(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_64(iParam0);
	if (bParam2)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1DF8 / 7672
{
	char* cVar0;
	char* cVar1[32];
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
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_63(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_62(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_62(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_60(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_57(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_54(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_53(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_53() //Position: 0x2425 / 9253
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x242D / 9261
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x243E / 9278
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x2533 / 9523
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x254C / 9548
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x25B1 / 9649
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x25C3 / 9667
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x25D5 / 9685
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
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_61(iParam0) != 19 || Function_61(iParam0) != 17) || Function_61(iParam0) != 10) || Function_61(iParam0) != 9)
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_61(int iParam0) //Position: 0x2705 / 9989
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2714 / 10004
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x274D / 10061
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x278A / 10122
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2924 / 10532
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
	}
	else
	{
		Global_34581[iVar1] = bParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

int Function_66(bool bParam0) //Position: 0x2B3E / 11070
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2B7F / 11135
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_66((50 + iVar3) + 15) + Function_66((183 + iVar3) + 15)) + Function_66((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_51(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_68() //Position: 0x2C08 / 11272
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_66((50 + iVar3) + 8) + Function_66((183 + iVar3) + 8)) + Function_66((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_51(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2C9F / 11423
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_66((50 + iVar3)) + Function_66((183 + iVar3))) + Function_66((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_51(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_70() //Position: 0x2D1E / 11550
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D44 / 11588
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_65(iParam0, bParam1, 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_52(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_72() //Position: 0x2F4E / 12110
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_74(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_74(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_73(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_73(vector3 vParam0) //Position: 0x2FEF / 12271
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3007 / 12295
{
	int iVar0;
	
	iVar0 = Function_78(uParam2, uParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_76(&Global_63095, 1);
			Function_36(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_76(&Global_63095, 2);
			Function_36(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_76(&Global_63095, 2);
		Function_36(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_75();
	return StackVal, StackVal, Function_75();
}

vector3 Function_75() //Position: 0x30EE / 12526
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x30F7 / 12535
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3106 / 12550
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x311C / 12572
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_79(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_77(bVar0) && !bParam1)
	{
		bVar0 = Function_78(bParam0, 1);
	}
	return bVar0;
}

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x31E3 / 12771
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3200 / 12800
{
	int iVar0;
	int iVar1;
	
	if (!Function_14(bParam0))
	{
		return;
	}
	switch (Function_15(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_13(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_85(12, 1, 0, 0);
				Function_84(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_85(13, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_85(14, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_85(15, 1, 0, 0);
				Function_84(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_85(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_83(bParam0) == 1)
					{
						iVar0 = Function_82(bParam0);
						if (Function_81(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_84(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_84(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_84(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_84(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_84(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_84(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_84(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_84(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_84(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_84(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_84(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_84(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_84(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_84(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_84(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_84(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_84(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_84(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_84(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_84(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_85(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_85(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_85(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_82(bParam0) == 0)
			{
				if (Function_83(bParam0) == 1)
				{
					Function_85(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_81(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_84(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_84(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_84(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_84(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_84(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_84(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_84(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_84(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_83(bParam0) == 1)
			{
				Function_85(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_85(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_84(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_84(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_84(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_85(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_84(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_84(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

bool Function_81(int iParam0) //Position: 0x36DC / 14044
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x36F2 / 14066
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3711 / 14097
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x372B / 14123
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3792 / 14226
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_65(iParam0, TO_FLOAT(bParam1), 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_86() //Position: 0x39B2 / 14770
{
	int iVar0;
	int iVar1;
	
	if (!Function_28(Global_6269))
	{
		return;
	}
	iVar0 = Function_66(24);
	iVar1 = Function_27(Global_6269);
	if (!Function_28(iVar0) && Function_89(iVar1) < 0)
	{
		Function_51(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_89(Function_27(iVar0)))
	{
		Function_51(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A32 / 14898
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D84 / 15748
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_89(int iParam0) //Position: 0x3E07 / 15879
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E21 / 15905
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E4F / 15951
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_28(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_106(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_66(42) - Global_34165.f_116);
				bVar1 = (Function_66(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_63(49)) - Global_34165.f_124);
				bVar3 = (Function_66(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_66(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_105(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_92(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_22(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x40EC / 16620
{
	int iVar0;
	bool bVar1;
	
	if (Function_104(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_66(3);
	Function_101();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_99(3, bVar1);
		if (!bParam2)
		{
			if (!Function_33(Global_76848, 4))
			{
				Function_30(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_85(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_62(3));
	iVar0 = Function_66(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_93(int iParam0, int iParam1) //Position: 0x42AF / 17071
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x450D / 17677
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_87(iParam0, cParam1, 0, 1);
	iVar1 = Function_95();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_95() //Position: 0x4692 / 18066
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_96();
	return 0;
}

void Function_96() //Position: 0x4731 / 18225
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_97(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_97(int iParam0) //Position: 0x47E0 / 18400
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_98(int iParam0) //Position: 0x483E / 18494
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

int Function_99(int iParam0, bool bParam1) //Position: 0x48CD / 18637
{
	bool bVar0;
	int iVar1;
	
	Function_85(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
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
	iVar1 = Function_100(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_95();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_100(int iParam0, int iParam1) //Position: 0x4A6A / 19050
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_101() //Position: 0x4AAB / 19115
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4AC1 / 19137
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4B01 / 19201
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B41 / 19265
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B50 / 19280
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_106(int iParam0) //Position: 0x4D18 / 19736
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_107() //Position: 0x4DAD / 19885
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4DD2 / 19922
{
	if (!Function_28(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_92(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_92(25, 1, 0);
			Function_113(1, 1);
			break;
		
		case 0x00000015:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			Function_109(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_113(50, 1);
			Function_92(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_113(5, 1);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_92(75, 1, 0);
			Function_109(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_113(5, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_113(25, 1);
			Function_92(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_113(10, 1);
			Function_92(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_92(50, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_92(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_109(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_113(20, 1);
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_113(25, 1);
			Function_92(150, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_113(10, 1);
			Function_92(150, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_92(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_109(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_109(100, 1, 0);
			Function_113(5, 1);
			break;
		
		case 0x0000000F:
			Function_113(3, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_109(125, 1, 0);
			Function_92(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_113(50, 1);
			Function_92(100, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_113(75, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_92(250, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_92(75, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_92(200, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_92(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_113(100, 1);
			Function_92(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_92(200, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_92(500, 1, 0);
			Function_109(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_92(150, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_109(25, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x0000002A:
			Function_92(150, 1, 0);
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_109(150, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x00000035:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_109(150, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x00000032:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x528D / 21133
{
	int iVar0;
	bool bVar1;
	
	if (Function_104(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_66(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_99(1, bVar1);
			if (!bParam2)
			{
				if (!Function_33(Global_76848, 1))
				{
					Function_30(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_112(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_33(Global_76848, 2))
				{
					Function_30(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_85(1, bVar1, 0, 0);
	}
	else
	{
		Function_111(1, (4294967295 * bVar1), 0);
	}
	if (Function_66(1) <= 4294962296)
	{
		Function_51(1, 4294962296, 0);
	}
	else if (Function_66(1) >= 5000)
	{
		Function_51(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_62(1));
	iVar0 = Function_66(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_94(2, Function_110(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_94(2, Function_110(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			break;
	}
	Function_93(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_110(int iParam0) //Position: 0x55A2 / 21922
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5645 / 22085
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_112(int iParam0, bool bParam1) //Position: 0x5840 / 22592
{
	bool bVar0;
	int iVar1;
	
	Function_111(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_100(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_95();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_113(bool bParam0, bool bParam1) //Position: 0x59DC / 23004
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_85(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_85(597, bParam0, 0, 0);
	}
	if ((Function_66(597) + Function_66(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5AA7 / 23207
{
	struct<4> Var0;
	
	if (!Function_28(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_160(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_155(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_157(Global_30668[0]);
			Function_146(0);
			Function_144(2, 1);
			Function_144(0, 1);
			Function_144(1, 1);
			break;
		
		case 0x00000003:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_157(Global_30668[0]);
			Function_157(Global_30640[0]);
			Function_142(0, 1);
			Function_142(15, 1);
			Function_142(9, 1);
			Function_142(12, 1);
			Function_142(16, 1);
			Function_144(3, 1);
			break;
		
		case 0x00000005:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_155(21, bParam2, 4);
			Function_157(Global_30668[0]);
			Function_144(39, 1);
			break;
		
		case 0x00000007:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_141(4))
					{
						Function_131(4, 0, 0, 1);
					}
				}
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_157(Global_30640[0]);
			Function_157(Global_30668[2]);
			Function_130(&(Global_29008[Global_30668[2]]), 32768);
			Function_129(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_155(9, bParam2, 4);
			Function_157(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_157(Global_30640[0]);
			Function_157(Global_30658[0]);
			Function_130(&(Global_29008[Global_30658[0]]), 32768);
			Function_129(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_157(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_157(Global_30640[1]);
			Function_157(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_157(Global_30679[0]);
			Function_157(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_157(Global_30658[5]);
			Function_157(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_155(21, bParam2, 4);
			Function_157(Global_30640[4]);
			Function_157(Global_30658[4]);
			Function_128(&Global_76847, 0x2000000);
			Function_128(&Global_76847, 0x4000000);
			Function_128(&Global_76847, 4096);
			Function_128(&Global_76847, 8);
			Function_128(&Global_76847, 8388608);
			Function_128(&Global_76847, 524288);
			Function_128(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_157(Global_30640[4]);
			Function_157(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_129(&(Global_29008[Global_30640[4]]), 256);
			Function_157(Global_30640[4]);
			Function_157(Global_30658[0]);
			Function_130(&(Global_29008[Global_30658[0]]), 32768);
			Function_129(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_157(Global_30640[0]);
			Function_157(Global_30640[5]);
			Function_155(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_157(Global_30658[3]);
			Function_130(&(Global_29008[Global_30658[3]]), 32768);
			Function_129(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_155(9, bParam2, 4);
			Function_157(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_130(&(Global_29008[Global_30679[1]]), 32768);
			Function_157(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_155(12, bParam2, 4);
			Function_129(&(Global_29008[Global_30679[1]]), 256);
			Function_157(Global_30668[3]);
			Function_157(Global_30693[0]);
			Function_157(Global_30685[0]);
			Function_146(4);
			Function_142(13, 1);
			Function_142(1, 1);
			Function_142(18, 1);
			Function_144(34, 1);
			Function_144(44, 1);
			Function_144(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_155(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_157(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_157(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_157(Global_30693[0]);
			Function_157(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_157(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_157(Global_30685[0]);
			Function_157(Global_30693[0]);
			Function_157(Global_30693[1]);
			Function_157(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_155(23, bParam2, 3);
			Function_142(23, 1);
			Function_157(Global_30685[0]);
			Function_157(Global_30685[2]);
			Function_130(&(Global_29008[Global_30685[2]]), 32768);
			Function_129(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_155(19, bParam2, 4);
			Function_157(Global_30685[0]);
			Function_157(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_155(24, bParam2, 3);
			Function_142(24, 1);
			Function_157(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_157(Global_30685[0]);
			Function_157(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_157(Global_30693[12]);
			Function_157(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_157(Global_30693[12]);
			Function_157(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_155(25, bParam2, 10);
			Function_157(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_157(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_157(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_155(13, bParam2, 4);
			Function_157(Global_30693[2]);
			Function_157(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_141(8))
				{
					Function_131(8, 0, 0, 1);
				}
			}
			Function_157(Global_30685[0]);
			Function_146(9);
			Function_142(7, 1);
			Function_142(11, 1);
			Function_142(3, 1);
			Function_142(20, 1);
			Function_144(57, 1);
			break;
		
		case 0x0000002A:
			Function_155(2, bParam2, 4);
			Function_157(Global_30717[0]);
			Function_157(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_157(Global_30717[0]);
			Function_157(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_155(17, bParam2, 4);
			Function_157(Global_30723[0]);
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_126(15))
				{
					Function_121(15, 0, 1);
				}
			}
			Function_129(&(Global_29008[Global_30717[1]]), 256);
			Function_146(11);
			Function_157(Global_30717[1]);
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_157(Global_30717[1]);
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_157(Global_30717[1]);
			Function_115(11);
			Function_146(12);
			Global_16537[1121].f_40 = 0;
			Function_144(56, 1);
			if (!bParam2)
			{
				if (!Function_141(9))
				{
					Function_131(9, 0, 0, 0);
				}
				if (!Function_141(10))
				{
					Function_131(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_115(int iParam0) //Position: 0x6397 / 25495
{
	bool bVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_120(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_120(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_116(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6506 / 25862
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_118(Function_119(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_118(Function_119(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_118(StackVal);
				vVar1 = { StackVal, StackVal, Function_118(StackVal) };
				if (Function_117(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x660C / 26124
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6639 / 26169
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_119(vector3 vParam0) //Position: 0x6690 / 26256
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x66DE / 26334
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6732 / 26418
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_126(bParam0))
	{
		if (!Function_141(bParam0))
		{
			Function_131(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_85(457, 1, 0, 0);
		Function_124(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_122();
			}
		}
	}
	return;
}

void Function_122() //Position: 0x68D0 / 26832
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x68D6 / 26838
{
	iParam0 = iParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && iParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_124(bool bParam0, int iParam1) //Position: 0x697A / 27002
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x69CF / 27087
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x69E5 / 27109
{
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_127(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_127(int iParam0, int iParam1) //Position: 0x6A36 / 27190
{
	int iVar0;
	
	if (!Function_125(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_128(var uParam0, int iParam1) //Position: 0x6A63 / 27235
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A72 / 27250
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6A89 / 27273
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6A98 / 27288
{
	struct<8> Var0;
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_140(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_141(bParam0))
	{
		Function_85(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (bParam2)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 5);
			}
			else
			{
				Function_122();
			}
		}
		Function_134(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_133() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_133() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_132(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6BE2 / 27618
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

bool Function_133() //Position: 0x6C2D / 27693
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6C5A / 27738
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_138(bParam0, Function_139(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_138(bParam0, Function_139(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_137(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_136(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_135(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_135(int iParam0) //Position: 0x6E0A / 28170
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_125(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_136(bool bParam0, bool bParam1) //Position: 0x6E61 / 28257
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_137(int iParam0) //Position: 0x6E86 / 28294
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_125(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6EDC / 28380
{
	int iVar0;
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_139(bool bParam0) //Position: 0x6F3B / 28475
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F47 / 28487
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6F63 / 28515
{
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_127(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_142(int iParam0, int iParam1) //Position: 0x6FB5 / 28597
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_143(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x7028 / 28712
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7084 / 28804
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_145(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_145(int iParam0, int iParam1) //Position: 0x70F5 / 28917
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x714F / 29007
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_154(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_154(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_85(468, 1, 0, 0);
			Function_84(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_132("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_116(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_131(14, 1, 0, 0);
				Function_147(14, 1, 0, 0, 0);
			}
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 6);
			}
			else
			{
				Function_122();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_132("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_85(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_84(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x73FB / 29691
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_140(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_127(bParam0, 2))
	{
		Function_85(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_132(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_138(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_124(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_122();
			}
		}
		Function_134(bParam0);
		if (StackVal && !Function_153(((((!Function_133() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_153((((Function_133() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_149();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_148(3, bParam1);
				break;
			
			case 0x00000005:
				Function_148(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_148(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_148(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_148(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_148(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_84(2, 24);
				break;
			
			case 0x00000003:
				Function_84(2, 25);
				break;
			
			case 0x0000000F:
				Function_84(2, 26);
				break;
			
			case 0x0000000D:
				Function_84(2, 27);
				break;
			
			case 0x0000000E:
				Function_84(2, 28);
				break;
			}
	}
}

void Function_148(int iParam0, bool bParam1) //Position: 0x768A / 30346
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_149() //Position: 0x76E9 / 30441
{
	if (Function_125(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_152(Global_28180);
			Global_28180.f_8 = Function_150(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_152(Global_28180);
			Global_28180.f_8 = Function_150(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_150(int iParam0, int iParam1) //Position: 0x7764 / 30564
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_26(6, 0) || Function_26(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_151(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_26(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_151(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_26(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_151(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_151(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_151(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_151(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_26(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_151(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_151(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_151(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_151(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_151(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_26(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_73(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_73(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_73(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_151(int iParam0) //Position: 0x8356 / 33622
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x836B / 33643
{
	int iVar0;
	int iVar1;
	
	if (!Function_125(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_153(bool bParam0, bool bParam1) //Position: 0x83BA / 33722
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x83C7 / 33735
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8418 / 33816
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_156(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_160(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_156(int iParam0, int iParam1) //Position: 0x8486 / 33926
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8499 / 33945
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_159(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_130(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_85(473, 1, 0, 0);
		iVar0 = Function_158(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_85(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_85(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_85(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_84(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_84(7, 30);
	}
	if (Function_62(473) <= Function_63(473))
	{
		if (!Function_40())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_158(int iParam0) //Position: 0x8598 / 34200
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_81(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_159(var uParam0, int iParam1) //Position: 0x85F0 / 34288
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x860C / 34316
{
	if (!Function_161(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_49(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_49(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_49(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_161(int iParam0) //Position: 0x8663 / 34403
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x8675 / 34421
{
	bool bVar0;
	
	if (Function_153(bParam0, 1) && Function_153(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_163(int iParam0) //Position: 0x86A9 / 34473
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_164(4, 0, 0);
		}
	}
	return;
}

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8710 / 34576
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || StackVal != 12 != 20)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_165(Global_16524, bVar0, 1);
	}
	return;
}

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87ED / 34797
{
	int iVar0;
	
	Function_167(bParam0);
	Function_8(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_166();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_166() //Position: 0x8966 / 35174
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8972 / 35186
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

void Function_168() //Position: 0x89B8 / 35256
{
	Function_169();
	return;
}

void Function_169() //Position: 0x89C1 / 35265
{
	Function_170(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170(int iParam0) //Position: 0x89D3 / 35283
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_171(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x89F9 / 35321
{
	if (Function_173(uParam0[iParam13], 4))
	{
		if (Function_173(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_172(uParam0[iParam13], 1);
			Function_172(uParam0[iParam13], 2);
			Function_172(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x8B27 / 35623
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_173(int iParam0, int iParam1) //Position: 0x8B41 / 35649
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_174() //Position: 0x8B5E / 35678
{
	CLEAR_ACTOR_MAX_SPEED(bLocal_312);
	CLEAR_ACTOR_MAX_SPEED(bLocal_314);
	if (IS_BLIP_VALID(bLocal_501))
	{
		REMOVE_BLIP(bLocal_501);
	}
	if (IS_OBJECT_VALID(bLocal_511))
	{
		DESTROY_OBJECT(bLocal_511);
	}
	if (IS_OBJECT_VALID(bLocal_567))
	{
		DESTROY_OBJECT(bLocal_567);
	}
	return;
}

void Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8B9D / 35741
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_200());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_63398);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	Global_30842[2] = 0;
	if (bParam6)
	{
		HUD_ENABLE(true);
	}
	Function_202();
	CLEAR_PRINTED_OBJECTIVE();
	Function_199();
	Function_197(0);
	Function_196();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_195();
	Function_194();
	Function_202();
	ENABLE_JOURNAL_REPLAY(1);
	Function_193(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ACTOR_INVULNERABILITY(Global_34573, false);
	}
	if (bParam7)
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			TASK_CLEAR(Global_34573);
		}
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		ACTOR_END_FORCE_HOLSTER(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		Function_192(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_191(Global_28178);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_190(1178687);
	Function_188(33039);
	Function_187(0x218003f);
	Function_186(4194560);
	Function_185();
	Function_184();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_181(0, 1, 1);
	}
	else
	{
		Function_181(0, 1, 1);
	}
	Function_180();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_176();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_176() //Position: 0x8D8E / 36238
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], false))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_179() > 3)
		{
			bVar0 *= 2;
		}
		Function_177(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_177(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x8DE4 / 36324
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_178((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_178(bool bParam0) //Position: 0x8E2A / 36394
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_179() //Position: 0x8E4F / 36431
{
	return Global_12976.f_156;
}

void Function_180() //Position: 0x8E5A / 36442
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_129(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_181(int iParam0, bool bParam1, int iParam2) //Position: 0x8E84 / 36484
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_81(Global_29006))
		{
			Function_130(&(Global_29008[Global_29006]), 131072);
			Function_129(&(Global_29008[Global_29006]), 2097152);
			Function_182(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_159(&(Global_29008[iVar0]), 4) || Function_159(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_129(&(Global_29008[iVar0]), 2097155);
					Function_130(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_40())
			{
			}
			WAIT(false);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_182(int iParam0) //Position: 0x8F8F / 36751
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_183())
			{
				return;
			}
		}
		if (!Function_159(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_183() //Position: 0x900E / 36878
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_159(&(Global_29008[iVar0]), 4) || Function_159(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_184() //Position: 0x906B / 36971
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30804)
	{
		Global_30804[iVar0] = 1;
		iVar0++;
	}
	Global_30838 = 0;
	return;
}

void Function_185() //Position: 0x9091 / 37009
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30767)
	{
		Global_30767[iVar0] = 1;
		iVar0++;
	}
	Global_30837 = 0;
	return;
}

void Function_186(int iParam0) //Position: 0x90B7 / 37047
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_187(int iParam0) //Position: 0x90D4 / 37076
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_188(int iParam0) //Position: 0x90E7 / 37095
{
	Function_189(&Global_28842, iParam0);
	return;
}

void Function_189(var uParam0, int iParam1) //Position: 0x90F5 / 37109
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_190(bool bParam0) //Position: 0x9110 / 37136
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_191(int iParam0) //Position: 0x913D / 37181
{
	int iVar0;
	
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, true);
		iVar0 = GET_ACTOR_FACTION(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 4 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 8 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 16 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
	}
	return;
}

void Function_192(bool bParam0) //Position: 0x9204 / 37380
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(bParam0);
	if (IS_OBJECTSET_VALID(Global_16515))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515);
		}
	}
	return;
}

void Function_193(bool bParam0) //Position: 0x9280 / 37504
{
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_194() //Position: 0x92F4 / 37620
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "ResetMenuDelay"))
		{
			DECOR_REMOVE(Global_34573, "ResetMenuDelay");
		}
	}
	return;
}

void Function_195() //Position: 0x9335 / 37685
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			DECOR_REMOVE(Global_34573, "missionFailRmd");
		}
	}
	return;
}

void Function_196() //Position: 0x9376 / 37750
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_197(int iParam0) //Position: 0x938A / 37770
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_198())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_198() //Position: 0x93C6 / 37830
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_199() //Position: 0x93EB / 37867
{
	Global_8722 = 0.0f;
	return;
}

int Function_200() //Position: 0x93F5 / 37877
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_201() //Position: 0x940F / 37903
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_202() //Position: 0x9418 / 37912
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

void Function_203(bool bParam0) //Position: 0x9443 / 37955
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				REMOVE_BLIP(bVar2);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

int Function_204(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x949B / 38043
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_8492[iParam014].f_16)
	{
		Global_8492[iParam014].f_16 = 0;
		STREAMING_EVICT_ACTOR(StackVal, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(StackVal))
	{
		if (StackVal && IS_ACTOR_HUMAN(bParam4))
		{
			ACTOR_HOLSTER_WEAPON(StackVal, 1);
		}
		if (bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(StackVal, 1);
			TASK_CLEAR(StackVal);
			MEMORY_CLEAR_ALL(StackVal);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(StackVal, 0);
		}
		Function_206(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_205(StackVal);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(StackVal);
			DEREFERENCE_ACTOR(StackVal);
			if (DECOR_CHECK_EXIST(StackVal, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(StackVal, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (bParam2)
			{
				DECOR_SET_BOOL(Global_8492[iParam014], "KeepLastTask", true);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
			bVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (bParam1)
			{
				DESTROY_ACTOR(StackVal);
			}
			else if (bParam3)
			{
				RELEASE_ACTOR(StackVal);
				if (DECOR_CHECK_EXIST(StackVal, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(StackVal, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	Global_8492[iParam014].f_4 = "";
	return bVar1;
}

void Function_205(bool bParam0) //Position: 0x97B9 / 38841
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_206(bool bParam0) //Position: 0x97E5 / 38885
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_207(bool bParam0) //Position: 0x97FA / 38906
{
	if (bParam0)
	{
		Function_76(&Global_12976 + 36 + 20, 4);
	}
	else
	{
		Function_36(&Global_12976 + 36 + 20, 4);
	}
	return;
}

void Function_208() //Position: 0x981E / 38942
{
	var uVar0[7];
	int iVar8;
	
	if (Function_252())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Wolf Hunt";
		uVar0[4] = "Stage 03 - Wolf Den";
		uVar0[5] = "Stage 04 - Ride Home";
		uVar0[6] = "Last Stage";
		iVar8 = Function_238(&uLocal_294, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_237(&iVar8, &bLocal_308, &iLocal_309, &iLocal_301))
		{
			Function_230();
			Function_229();
		}
		if (iVar8 == 0)
		{
			Function_230();
			Function_229();
			Function_228(&bLocal_330, 8);
		}
		else if (iVar8 == 1)
		{
			Function_230();
			Function_229();
			Function_223(bLocal_308);
			Function_219(StackVal, StackVal, 5, &bLocal_331, &bLocal_308, Function_226(bLocal_308), Function_223(bLocal_308), 0);
		}
		else if (iVar8 == 2)
		{
			Function_230();
			Function_229();
			Function_214(&bLocal_332, 4);
		}
		else if (iVar8 == 3)
		{
			Function_212();
			Function_230();
			Function_229();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_210(&bLocal_315);
			bLocal_308 = true;
			iLocal_309 = 0;
			iLocal_301 = 1000;
		}
		else if (iVar8 == 4)
		{
			Function_212();
			Function_209(Local_252, 3);
			Function_230();
			Function_229();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_210(&bLocal_315);
			bLocal_308 = 2;
			iLocal_309 = 0;
			iLocal_301 = 1000;
		}
		else if (iVar8 == 5)
		{
			Function_212();
			Function_230();
			Function_229();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_210(&bLocal_315);
			bLocal_308 = 3;
			iLocal_309 = 0;
			iLocal_301 = 1000;
		}
		else if (iVar8 == 6)
		{
			Function_212();
			Function_230();
			Function_229();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_210(&bLocal_315);
			bLocal_308 = 101;
			iLocal_309 = 0;
			iLocal_301 = 1000;
		}
	}
	return;
}

void Function_209(int iParam0, void fParam1) //Position: 0x9A23 / 39459
{
	if (!Function_18(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = fParam1;
	return;
}

void Function_210(bool bParam0) //Position: 0x9A3E / 39486
{
	Function_211(bParam0, 0.0f);
	return;
}

void Function_211(int iParam0, float fParam1) //Position: 0x9A4A / 39498
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_212() //Position: 0x9A6B / 39531
{
	CLEAR_ACTOR_MAX_SPEED(bLocal_312);
	if (IS_BLIP_VALID(bLocal_501))
	{
		REMOVE_BLIP(bLocal_501);
	}
	if (IS_OBJECT_VALID(bLocal_511))
	{
		DESTROY_OBJECT(bLocal_511);
	}
	if (SQUAD_IS_VALID(Local_4.f_128))
	{
		Function_213(&Local_4 + 128);
		DESTROY_OBJECT(Local_4.f_128);
	}
	if (SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_213(&Local_4 + 176);
		DESTROY_OBJECT(Local_4.f_176);
	}
	if (SQUAD_IS_VALID(Local_4.f_232))
	{
		Function_213(&Local_4 + 232);
		DESTROY_OBJECT(Local_4.f_232);
	}
	if (IS_OBJECT_VALID(bLocal_567))
	{
		DESTROY_OBJECT(bLocal_567);
	}
	return;
}

void Function_213(int iParam0) //Position: 0x9AEC / 39660
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_214(bool bParam0, int iParam1) //Position: 0x9B33 / 39731
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_215(iParam1);
	*bParam0 = 1;
	return;
}

void Function_215(int iParam0) //Position: 0x9B56 / 39766
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_218("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_217(2) || Function_217(8)) || Function_217(9)) || Function_217(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_218("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_218("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_218("");
	}
	else if (iParam0 == 8)
	{
		Function_216();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_216();
	}
	return;
}

void Function_216() //Position: 0x9C4D / 40013
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_217(int iParam0) //Position: 0x9C59 / 40025
{
	int iVar0;
	
	if (!Function_28(iParam0))
	{
		return 0;
	}
	iVar0 = Function_27(iParam0);
	if (!Function_18(Function_27(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_218(bool bParam0) //Position: 0x9C8F / 40079
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_219(int iParam0, int iParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0x9CF9 / 40185
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_220(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_215(iParam0);
		*iParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_220(vector3 vParam0, var uParam3, var uParam4) //Position: 0x9D36 / 40246
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_222(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_221(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_221(int iParam0) //Position: 0x9DB9 / 40377
{
	if (!Function_81(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

var Function_222(vector3 vParam0, bool bParam3) //Position: 0xA267 / 41575
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_223(int iParam0) //Position: 0xA2D2 / 41682
{
	Function_224(iParam0 + 1);
	return StackVal, StackVal, Function_224(iParam0 + 1);
}

vector3 Function_224(int iParam0) //Position: 0xA2DF / 41695
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_225((*&Local_4 + 420)[0]);
			return StackVal, StackVal, Function_225((*&Local_4 + 420)[0]);
			break;
		
		case 0x00000001:
			Function_225((*&Local_4 + 460)[0]);
			return StackVal, StackVal, Function_225((*&Local_4 + 460)[0]);
			break;
		
		case 0x00000002:
			Function_225((*&Local_4 + 488)[0]);
			return StackVal, StackVal, Function_225((*&Local_4 + 488)[0]);
			break;
		
		case 0x00000003:
			Function_225((*&Local_4 + 516)[0]);
			return StackVal, StackVal, Function_225((*&Local_4 + 516)[0]);
			break;
		
		default:
			Function_225((*&Local_4 + 544)[0]);
			return StackVal, StackVal, Function_225((*&Local_4 + 544)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_225((*&Local_4 + 420)[0]);
	return StackVal, StackVal, Function_225((*&Local_4 + 420)[0]);
}

vector3 Function_225(bool bParam0) //Position: 0xA3BE / 41918
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_226(int iParam0) //Position: 0xA3E5 / 41957
{
	return Function_227(iParam0 + 1);
}

int Function_227(int iParam0) //Position: 0xA3F2 / 41970
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 420)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 460)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 488)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 516)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 544)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 420)[0]);
}

void Function_228(bool bParam0, int iParam1) //Position: 0xA4D1 / 42193
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_215(iParam1);
	*bParam0 = 1;
	return;
}

void Function_229() //Position: 0xA4F4 / 42228
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_230() //Position: 0xA509 / 42249
{
	Function_232();
	Function_231(10, 3);
	return;
}

void Function_231(int iParam0, int iParam1) //Position: 0xA518 / 42264
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_232() //Position: 0xA64F / 42575
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_236())
	{
		Function_235(10, 3);
	}
	else
	{
		Function_233();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_233() //Position: 0xA69A / 42650
{
	Function_234(25, 2);
	return;
}

void Function_234(int iParam0, int iParam1) //Position: 0xA6A6 / 42662
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_235(int iParam0, int iParam1) //Position: 0xA8A4 / 43172
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_236() //Position: 0xA9DB / 43483
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_153(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_237(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAA42 / 43586
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_230();
			Function_229();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			*uParam1++;
			*uParam2 = 0;
			*uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		*uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_218("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_238(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAAE8 / 43752
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_251(&Var15, &Var0);
	uVar20 = Function_250(*uParam1, &Var15);
	Function_249(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_248(uParam0, uVar20);
	Function_246(StackVal, uParam0, Var15.f_12);
	Function_244(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_243(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_240(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_239(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_239(int iParam0, int iParam1, int iParam2) //Position: 0xABAF / 43951
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_SET_TEXT(bVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_240(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xAC0B / 44043
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_242(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_242(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1,5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_239(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_241(bParam1->f_32);
	}
	else
	{
		Function_241(bParam1->f_32);
	}
	return 0;
}

void Function_241(bool bParam0) //Position: 0xAD91 / 44433
{
	bool bVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_SET_TEXT(bVar0, " ");
	}
	return;
}

void Function_242(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xADCB / 44491
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

var Function_243(int iParam0, var uParam1, int iParam2) //Position: 0xAE79 / 44665
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_244(var uParam0, int iParam1, int iParam2) //Position: 0xAE9D / 44701
{
	switch (Function_245())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_245() //Position: 0xAF39 / 44857
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_246(var uParam0, int iParam1, int iParam2) //Position: 0xAF75 / 44917
{
	switch (Function_247(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_247(bool bParam0) //Position: 0xB00D / 45069
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_153(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_153(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_153(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_153(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(bParam0, 0x20000000);
	return 0;
}

var Function_248(var uParam0, int iParam1) //Position: 0xB158 / 45400
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_249(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB2A7 / 45735
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(bVar4, bParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_250(int iParam0, int iParam1) //Position: 0xB33A / 45882
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_251(var uParam0, var uParam1) //Position: 0xB354 / 45908
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1,6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_252() //Position: 0xB3A2 / 45986
{
	return Global_30920;
}

bool Function_253() //Position: 0xB3AB / 45995
{
	if (IS_EXITFLAG_SET())
	{
		Function_223(bLocal_308);
		Function_219(StackVal, StackVal, 4, &bLocal_331, &bLocal_308, Function_226(bLocal_308), Function_223(bLocal_308), 0);
		return 0;
	}
	Function_519(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_252, bLocal_308, iLocal_309, &bLocal_332, &bLocal_330, &bLocal_331);
	if (bLocal_308 == 99 && bLocal_308 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_223(bLocal_308);
			Function_219(StackVal, StackVal, 1, &bLocal_331, &bLocal_308, Function_226(bLocal_308), Function_223(bLocal_308), 0);
			return 1;
		}
		if (Function_499(&Local_375, &uLocal_335, &uLocal_478, bLocal_311, iLocal_334))
		{
			if (Function_497(&uLocal_478))
			{
				Function_223(bLocal_308);
				Function_219(StackVal, StackVal, 5, &bLocal_331, &bLocal_308, Function_226(bLocal_308), Function_223(bLocal_308), 0);
				return 1;
			}
		}
		if (Global_3403 || Global_3404)
		{
			Function_223(bLocal_308);
			Function_219(StackVal, StackVal, 2, &bLocal_331, &bLocal_308, Function_226(bLocal_308), Function_223(bLocal_308), 0);
			return 1;
		}
		if (Function_496(2048))
		{
			Function_223(bLocal_308);
			Function_219(StackVal, StackVal, 3, &bLocal_331, &bLocal_308, Function_226(bLocal_308), Function_223(bLocal_308), 0);
			return 1;
		}
		if (iLocal_502)
		{
			Function_218("home02_son02_fail_shoot");
			Function_223(bLocal_308);
			Function_219(StackVal, StackVal, 5, &bLocal_331, &bLocal_308, Function_226(bLocal_308), Function_223(bLocal_308), 0);
			return 1;
		}
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (IS_ACTOR_VALID(bLocal_314))
			{
				if (GET_MOUNT(Global_34573) != bLocal_314)
				{
					Function_495(&bLocal_313, bLocal_312);
				}
			}
			else
			{
				Function_495(&bLocal_313, bLocal_312);
			}
		}
		Function_494();
	}
	switch (bLocal_308)
	{
		case 0x00000063:
			Function_475();
			break;
		
		case 0x00000000:
			Function_471();
			break;
		
		case 0x00000001:
			Function_451();
			break;
		
		case 0x00000002:
			Function_406();
			break;
		
		case 0x00000003:
			Function_340();
			break;
		
		case 0x00000065:
			Function_256();
			break;
		
		case 0x00000064:
			if (Function_255(&bLocal_331))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_254(&bLocal_308, &iLocal_309, &iLocal_301))
			{
				return 0;
			}
			break;
	}
	if (bLocal_330)
	{
		Function_228(&bLocal_330, 8);
		return 0;
	}
	if (bLocal_331 && bLocal_308 == 100)
	{
		Function_223(bLocal_308);
		Function_219(StackVal, StackVal, 5, &bLocal_331, &bLocal_308, Function_226(bLocal_308), Function_223(bLocal_308), 0);
	}
	if (bLocal_332)
	{
		Function_214(&bLocal_332, 4);
		return 0;
	}
	return 1;
}

bool Function_254(var uParam0, var uParam1, int iParam2) //Position: 0xB5C6 / 46534
{
	if (*uParam0 <= 98)
	{
		*uParam0++;
		*uParam1 = 0;
		*iParam2 = 1000;
	}
	else if (*uParam0 == 98)
	{
		*uParam0 = 101;
		*uParam1 = 0;
		*iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_255(int iParam0) //Position: 0xB606 / 46598
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_256() //Position: 0xB619 / 46617
{
	Function_336();
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_332(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_312, GET_ACTOR_MAX_HEALTH(bLocal_312));
			iLocal_493 = 0;
			if (IS_ACTOR_VALID(bLocal_313))
			{
				TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_313, true);
			}
			if (IS_ACTOR_VALID(bLocal_312))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_312);
				MEMORY_PREFER_RIDING(bLocal_312, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_312);
				TASK_STAND_STILL(bLocal_312, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_312, true);
			}
			if (IS_ACTOR_VALID(bLocal_498))
			{
				TASK_STAND_STILL(bLocal_498, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_498, true);
			}
			if (IS_ACTOR_VALID(bLocal_499))
			{
				TASK_STAND_STILL(bLocal_499, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_499, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_328();
				bLocal_310 = Global_30717[1];
				if (!Function_327(bLocal_310))
				{
					Function_326(&Local_252);
				}
				Function_325(Global_34573, (*&Local_4 + 544)[0], 1, 1, 1);
				Function_210(&bLocal_315);
				iLocal_309 = 1;
			}
			else
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_327(bLocal_310) || bLocal_310 != 4294967295))
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_324())
			{
				Function_210(&bLocal_315);
				iLocal_309 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_260("$/cutscene/son_02_end/son_02_end", &iLocal_301, &Local_252, &bLocal_308, 69138, 68697, 67648, 67257, 66945, 50122, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_210(&bLocal_315);
				iLocal_309 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_257(&bLocal_315) < 1.0f)
			{
				if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						ADVANCE_TIME_HOURS(2.0f);
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "default_character_Main/Default/DefaultGait/Idles/StandIdle/Sometimes/CanPlayHatIdle/StreamedHatIdle");
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
				else if (!HUD_IS_FADING())
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					bLocal_330 = true;
				}
			}
			break;
	}
	return;
}

float Function_257(bool bParam0) //Position: 0xB88A / 47242
{
	if (Function_259(bParam0))
	{
		if (Function_258(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_258(int iParam0) //Position: 0xB952 / 47442
{
	return Function_153(*iParam0, 2);
}

bool Function_259(bool bParam0) //Position: 0xB95F / 47455
{
	return Function_153(*bParam0, 1);
}

bool Function_260(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xB96C / 47468
{
	if (!bParam15)
	{
		Function_270(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_269(iParam2) || iParam2->f_24 < 1))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam0, 0, iParam11, iParam12, iParam13, iParam14);
				Call_Loc(iParam4);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_210(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_268())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_267(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_210(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_267(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_257(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_257(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(iParam5);
					if (StackVal)
					{
						Function_265(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_267(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_210(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_264(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				*iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (bParam16)
					{
						Function_262();
						if (!IS_OBJECT_VALID(iParam1->f_16))
						{
							HUD_ENABLE(true);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(iParam8);
				if (StackVal)
				{
					Function_261(1);
					if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
					{
						DECOR_REMOVE(Global_34573, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(iParam1->f_20))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						DESTROY_VOLUME(iParam1->f_20);
					}
					if (IS_LAYOUTREF_VALID(Global_6289))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
						}
					}
					*iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(Global_34573, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(iParam9);
				if (StackVal)
				{
					Call_Loc(iParam7);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_269(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_261(bool bParam0) //Position: 0xBF80 / 49024
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_262() //Position: 0xC028 / 49192
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_263();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_263() //Position: 0xC06D / 49261
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_264(bool bParam0) //Position: 0xC07F / 49279
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_265(bool bParam0, bool bParam1) //Position: 0xC09C / 49308
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_266(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_266(bool bParam0) //Position: 0xC11C / 49436
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == bParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_267(bool bParam0) //Position: 0xC14B / 49483
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(bVar1);
						DECOR_SET_BOOL(bVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(bVar1)))
					{
						SET_MOST_RECENT_MOUNT(bVar1, false);
					}
				}
				else if (DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(bVar1);
					DECOR_REMOVE(bVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_268() //Position: 0xC203 / 49667
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_269(int iParam0) //Position: 0xC23D / 49725
{
	return iParam0->f_20;
}

void Function_270(var uParam0, int iParam1) //Position: 0xC247 / 49735
{
	Function_271(uParam0, iParam1, 0);
	return;
}

void Function_271(var uParam0, bool bParam1, bool bParam2) //Position: 0xC255 / 49749
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_62478 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_272(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_85(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused") && !UI_ISACTIVE("PauseScene"))
		{
			if (((((((*uParam0 == 1000 && *uParam0 == 1001) && *uParam0 == 1002) && *uParam0 == 1003) && *uParam0 == 1103) && *uParam0 == 1104) && *uParam0 == 1105) && *uParam0 == 1106)
			{
				HUD_CLEAR_BIG_TEXT();
				HUD_CLEAR_SMALL_TEXT();
				if (bParam1)
				{
					CANCEL_TIME_WARP(1);
					if (!IS_STRING_VALID(bParam2))
					{
						Function_272(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_85(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_272(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC3A1 / 50081
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

int Function_273() //Position: 0xC3CA / 50122
{
	switch (bLocal_308)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				if (Function_283())
				{
					Function_280();
					Function_325(Global_34573, (*&Local_4 + 420)[0], 0, 0, 0);
					Function_325(bLocal_312, (*&Local_4 + 420)[1], 0, 0, 0);
					TASK_STAND_STILL(bLocal_312, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_312, true);
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else if (Function_274())
			{
				if (IS_ACTOR_VALID(bLocal_313))
				{
					if (IS_GRINGO_VALID(bLocal_568[0]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_313, GET_OBJECT_FROM_GRINGO(bLocal_568[0]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_313, bLocal_568[0], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_313, true);
					}
					else
					{
						Function_325(bLocal_313, (*&Local_4 + 420)[2], 1, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(bLocal_314))
				{
					if (IS_GRINGO_VALID(bLocal_568[1]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_314, GET_OBJECT_FROM_GRINGO(bLocal_568[1]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_314, bLocal_568[1], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_314, true);
					}
					else
					{
						Function_325(bLocal_314, (*&Local_4 + 420)[3], 1, 1, 1);
					}
				}
				return 1;
			}
			break;
		
		case 0x00000065:
			Function_325(Global_34573, (*&Local_4 + 544)[0], 1, 1, 1);
			Function_325(bLocal_312, (*&Local_4 + 544)[2], 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

bool Function_274() //Position: 0xC53F / 50495
{
	if (!SQUAD_IS_VALID(Local_4.f_128))
	{
		Function_279();
		if (SQUAD_IS_VALID(Local_4.f_128))
		{
			Function_278(Local_4.f_128, 0);
			Function_277(Local_4.f_128, 3);
			Function_276(Local_4.f_128, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 116)[02]))
			{
				bLocal_314 = (*&Local_4 + 116)[02];
				SET_ACTORS_HORSE(bLocal_312, bLocal_314);
				SET_MOST_RECENT_MOUNT(bLocal_312, bLocal_314);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_314, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_128, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_497))
	{
		Function_325(bLocal_497, (*&Local_4 + 420)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_497))
		{
			SET_ACTOR_FACTION(bLocal_497, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_497, false);
			Function_275(bLocal_497, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_497, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_497, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_497, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_497, true);
			DECOR_SET_BOOL(bLocal_497, "Frank", true);
			TASK_STAND_STILL(bLocal_497, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_497, true);
		}
	}
	if (IS_ACTOR_VALID(bLocal_497))
	{
		return 1;
	}
	return 0;
}

void Function_275(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xC64C / 50764
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

void Function_276(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC689 / 50825
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_275(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, iParam2, bParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_277(bool bParam0, bool bParam1) //Position: 0xC6BF / 50879
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				ACCESSORIZE_HORSE(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_278(bool bParam0, bool bParam1) //Position: 0xC701 / 50945
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_279() //Position: 0xC742 / 51010
{
	Local_4.f_128 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse01"));
	(*&Local_4 + 116)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_01", 981, -77,75027f, 116,8612f, 1417,455f, 0.0f, 239,8608f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 116)[02], Local_4.f_128);
	return;
}

struct<8> Function_280() //Position: 0xC79F / 51103
{
	var uVar0;
	
	Function_282(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("home02_son02_layout");
	Local_4.f_288 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 268)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -85,33762f, 116,9092f, 1399,748f, 0.0f, 0.0f, 0.0f, 20,0378f, 15,90599f, 31,62923f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 268)[0]);
	(*&Local_4 + 268)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 268)[1]);
	(*&Local_4 + 268)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 268)[2]);
	(*&Local_4 + 268)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 268)[3]);
	Local_4.f_324 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary01_set");
	(*&Local_4 + 292)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_01", 2, -854,4728f, 191,0073f, 1220,19f, 0.0f, 16,64638f, 0.0f, 500.0f, 150.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_324, (*&Local_4 + 292)[0]);
	(*&Local_4 + 292)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_02", 2, -662,2866f, 191,0073f, 1948,24f, 0.0f, 16,64638f, 0.0f, 500.0f, 150.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_324, (*&Local_4 + 292)[1]);
	(*&Local_4 + 292)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_03", 2, -536,0001f, 169,8867f, 1520f, 0.0f, -75,70767f, 0.0f, 900.0f, 150.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_324, (*&Local_4 + 292)[2]);
	(*&Local_4 + 292)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_04", 2, -811,2886f, 187,3396f, 1861,414f, 0.0f, -71,29336f, 0.0f, 250.0f, 150.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_324, (*&Local_4 + 292)[3]);
	(*&Local_4 + 292)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_05", 2, -851,8507f, 187,3396f, 1731,188f, 0.0f, -75,08729f, 0.0f, 100.0f, 150.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_324, (*&Local_4 + 292)[4]);
	(*&Local_4 + 292)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_06", 2, -930,2598f, 187,3396f, 1604,158f, 0.0f, -52,87895f, 0.0f, 250.0f, 150.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_324, (*&Local_4 + 292)[5]);
	(*&Local_4 + 292)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_07", 2, -974,0422f, 187,3396f, 1424,598f, 0.0f, -106,8301f, 0.0f, 500.0f, 150.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_324, (*&Local_4 + 292)[6]);
	Local_4.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01", 2, -80.0f, 116,8943f, 1409,173f, 0.0f, -95,13693f, 0.0f, 15.0f, 15.0f, 15.0f);
	Local_4.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict01", 3, -659,8f, 175,1f, 1672.0f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict02", 3, -912.0f, 186,0702f, 1491,999f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict03", 3, -600,923f, 177,3287f, 1831,38f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_344 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict04", 3, -856.0f, 187,1995f, 1303,999f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_348 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict06", 3, -763,6307f, 144,3996f, 1816,154f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_352 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict07", 3, -568.0f, 156,8f, 1276.0f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_356 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent01a", 2, -273,2569f, 129,0196f, 1393,485f, 0.0f, -78,56577f, 0.0f, 39,64245f, 30.0f, 38,99609f);
	Local_4.f_360 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent01b", 2, -420,9789f, 143,5374f, 1311,1f, 0.0f, 58,5927f, 0.0f, 46,77365f, 46,32108f, 45,86789f);
	Local_4.f_364 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent01c", 2, -663,7518f, 165,8754f, 1265,201f, 0.0f, -8,594595f, 0.0f, 73,36561f, 47,86254f, 65,07625f);
	Local_4.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent02a", 2, -732.0f, 175,7754f, 1432f, 0.0f, -12,9296f, 0.0f, 30.0f, 30.0f, 20.0f);
	Local_4.f_372 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent02b", 2, -700,4442f, 186,4009f, 1584,819f, 0.0f, -1,840937f, 0.0f, 35,39049f, 30.0f, 41,92284f);
	Local_4.f_376 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent03a", 2, -769,7068f, 144,4473f, 1798,349f, 0.0f, 6,912414f, 0.0f, 31,63766f, 73,41389f, 88,43046f);
	Local_4.f_380 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent03b", 2, -814,4131f, 174,2658f, 1636,536f, 0.0f, 20,8294f, 0.0f, 41,36372f, 60,13356f, 27,39386f);
	Local_4.f_384 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent03c", 2, -876,1072f, 186,136f, 1491,164f, 0.0f, -16,62619f, 0.0f, 36,39529f, 30.0f, 30.0f);
	Local_4.f_388 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent04a", 2, -759,8919f, 172,7957f, 1476,262f, 0.0f, -27,73153f, 0.0f, 42,66057f, 30.0f, 30.0f);
	Local_4.f_392 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent04b", 2, -663,9115f, 181,2283f, 1639,288f, 0.0f, -76,25941f, 0.0f, 39,58846f, 30.0f, 27,56261f);
	Local_4.f_396 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent04c", 2, -676,8344f, 173,007f, 1801,941f, 0.0f, -31,52727f, 0.0f, 20.0f, 30.0f, 30.0f);
	Local_4.f_400 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_wander01", 2, -73,11471f, 116,8612f, 1412,084f, 0.0f, -27,63333f, 0.0f, 1,5f, 3.0f, 3.0f);
	Local_4.f_404 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseRestrictVol", 2, -76,76527f, 116,8612f, 1418,719f, 0.0f, 1,801902f, 0.0f, 8,316153f, 21,97295f, 8,834089f);
	Local_4.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HomeVolume", 2, -98,76239f, 116,8612f, 1421,283f, 0.0f, 1,801902f, 0.0f, 298,1205f, 96,79464f, 258,7495f);
	Local_4.f_412 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HomeVolume1", 2, -66,13993f, 116,8612f, 1284,599f, 0.0f, 21,70756f, 0.0f, 216,1188f, 96,79464f, 100,835f);
	Local_4.f_416 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 420)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -96,32269f, 117,2182f, 1405,297f, 0.0f, -121,324f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[0], Local_4.f_416);
	(*&Local_4 + 420)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -95,45261f, 117,0843f, 1404,241f, 0.0f, -129,4202f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[1], Local_4.f_416);
	(*&Local_4 + 420)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -78,44617f, 116,8612f, 1419,268f, 0.0f, -469,0598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[2], Local_4.f_416);
	(*&Local_4 + 420)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart01", -77,75027f, 116,8612f, 1417,455f, 0.0f, 247,0944f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[3], Local_4.f_416);
	(*&Local_4 + 420)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart01", -85,84542f, 117,2746f, 1405,845f, 0.0f, -293,4656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[4], Local_4.f_416);
	(*&Local_4 + 420)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleStart01", -60f, 117,4718f, 1364f, 0.0f, -46,25925f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[5], Local_4.f_416);
	(*&Local_4 + 420)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "WifeStart01", -100.0f, 118,8691f, 1348f, 0.0f, -46,25925f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[6], Local_4.f_416);
	(*&Local_4 + 420)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionWait01", -66,75728f, 116,8612f, 1410,757f, 0.0f, -129,4202f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[7], Local_4.f_416);
	Local_4.f_456 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 460)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -632,0001f, 165,647f, 1264f, 0.0f, 91,04778f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[0], Local_4.f_456);
	(*&Local_4 + 460)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -300f, 131,5137f, 1400f, 0.0f, -17,17521f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[1], Local_4.f_456);
	(*&Local_4 + 460)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -628,0001f, 165,647f, 1266,171f, 0.0f, -267,9607f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[2], Local_4.f_456);
	(*&Local_4 + 460)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart02", -624,0001f, 165,647f, 1264f, 0.0f, 89,05537f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[3], Local_4.f_456);
	(*&Local_4 + 460)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart02", -640.0f, 165,8754f, 1264f, 0.0f, -268,2986f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[4], Local_4.f_456);
	Local_4.f_484 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 488)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -860,0001f, 185,2891f, 1492f, 0.0f, -61,10565f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 488)[0], Local_4.f_484);
	(*&Local_4 + 488)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -860,0001f, 183,8625f, 1484f, 0.0f, 65,71352f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 488)[1], Local_4.f_484);
	(*&Local_4 + 488)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -864,0001f, 185,2587f, 1492f, 0.0f, -274,909f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 488)[2], Local_4.f_484);
	(*&Local_4 + 488)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart03", -859,9999f, 184,7018f, 1488f, 0.0f, 94,96701f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 488)[3], Local_4.f_484);
	(*&Local_4 + 488)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart03", -883,7531f, 185,2349f, 1492f, 0.0f, -265,8327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 488)[4], Local_4.f_484);
	Local_4.f_512 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 516)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -766,8483f, 182,9535f, 1589,163f, 0.0f, -61,10565f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[0], Local_4.f_512);
	(*&Local_4 + 516)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -763,0418f, 181,5971f, 1590,882f, 0.0f, 65,71352f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[1], Local_4.f_512);
	(*&Local_4 + 516)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -767,1047f, 183,021f, 1590,873f, 0.0f, -450,2303f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[2], Local_4.f_512);
	(*&Local_4 + 516)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart04", -763,0178f, 181,5971f, 1592,664f, 0.0f, 67,95207f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[3], Local_4.f_512);
	(*&Local_4 + 516)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart04", -759,0615f, 181,2669f, 1589,221f, 0.0f, -668,3749f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[4], Local_4.f_512);
	Local_4.f_540 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 544)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -75,11958f, 116,8401f, 1405,88f, 0.0f, 404,4818f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[0], Local_4.f_540);
	(*&Local_4 + 544)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -71,3356f, 118,3956f, 1409,704f, 1,318914f, 35,23423f, 1,380166f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[1], Local_4.f_540);
	(*&Local_4 + 544)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -86,29118f, 117,0022f, 1411,959f, 0.0f, 56,19948f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[2], Local_4.f_540);
	(*&Local_4 + 544)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -86,37331f, 117,0036f, 1411,957f, 0.0f, 54,33067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[3], Local_4.f_540);
	(*&Local_4 + 544)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -78,44617f, 116,8612f, 1419,268f, 0.0f, -109,6219f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[4], Local_4.f_540);
	(*&Local_4 + 544)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEndLast", -78,44617f, 116,8612f, 1419,268f, 0.0f, -109,6885f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[5], Local_4.f_540);
	(*&Local_4 + 544)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStartLast", -77,75027f, 116,8612f, 1417,455f, 0.0f, 248,4741f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[6], Local_4.f_540);
	(*&Local_4 + 544)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEndLast", -77,75027f, 116,8612f, 1417,455f, 0.0f, 248,5597f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[7], Local_4.f_540);
	(*&Local_4 + 544)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStartLast", -74,09431f, 116,8612f, 1412,929f, 0.0f, 9,852109f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[8], Local_4.f_540);
	(*&Local_4 + 544)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "DogEndLast", -52f, 116,4573f, 1400f, 0.0f, -69,81378f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[9], Local_4.f_540);
	(*&Local_4 + 544)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionGoLast", -116.0f, 118,8691f, 1376f, 0.0f, 54,33067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 544)[10], Local_4.f_540);
	Local_4.f_592 = CREATE_OBJECTSET_IN_LAYOUT("DogScent01aSet", Local_4, 8, 0);
	(*&Local_4 + 596)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_01", -264.0f, 129,0196f, 1404f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 596)[0], Local_4.f_592);
	(*&Local_4 + 596)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_02", -272.0f, 130,0709f, 1404.0f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 596)[1], Local_4.f_592);
	(*&Local_4 + 596)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_03", -276f, 130,0687f, 1396.0f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 596)[2], Local_4.f_592);
	(*&Local_4 + 596)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_04", -284.0f, 130,4199f, 1388.0f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 596)[3], Local_4.f_592);
	Local_4.f_616 = CREATE_OBJECTSET_IN_LAYOUT("DogScent01bSet", Local_4, 8, 0);
	(*&Local_4 + 620)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_01", -412,1961f, 143,5374f, 1316,463f, 0.0f, 124,4338f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 620)[0], Local_4.f_616);
	(*&Local_4 + 620)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_02", -424f, 145,5685f, 1324f, 0.0f, 124,4338f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 620)[1], Local_4.f_616);
	(*&Local_4 + 620)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_03", -432.0f, 147,5764f, 1316f, 0.0f, 124,4338f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 620)[2], Local_4.f_616);
	(*&Local_4 + 620)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_04", -440f, 148,5803f, 1308f, 0.0f, 124,4338f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 620)[3], Local_4.f_616);
	Local_4.f_640 = CREATE_OBJECTSET_IN_LAYOUT("DogScent01cSet", Local_4, 8, 0);
	(*&Local_4 + 644)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01c_01", -640.0f, 165,8754f, 1264f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[0], Local_4.f_640);
	(*&Local_4 + 644)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01c_02", -660.0f, 167,7223f, 1264f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[1], Local_4.f_640);
	(*&Local_4 + 644)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01c_03", -672,0001f, 168,335f, 1280f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[2], Local_4.f_640);
	(*&Local_4 + 644)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01c_04", -692,1267f, 169,6626f, 1279,873f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[3], Local_4.f_640);
	Local_4.f_664 = CREATE_OBJECTSET_IN_LAYOUT("DogScent02aSet", Local_4, 8, 0);
	(*&Local_4 + 668)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent02a_01", -732.0f, 175,7754f, 1432f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 668)[0], Local_4.f_664);
	(*&Local_4 + 668)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent02a_02", -728.0f, 174,6725f, 1448f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 668)[1], Local_4.f_664);
	(*&Local_4 + 668)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent02a_03", -728.0f, 174,6823f, 1459,762f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 668)[2], Local_4.f_664);
	(*&Local_4 + 668)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent02a_04", -732,0001f, 175,6862f, 1476f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 668)[3], Local_4.f_664);
	Local_4.f_688 = CREATE_OBJECTSET_IN_LAYOUT("DogScent02bSet", Local_4, 8, 0);
	(*&Local_4 + 692)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent02b_01", -702,0375f, 186,4009f, 1568f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 692)[0], Local_4.f_688);
	(*&Local_4 + 692)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent02b_02", -704.0f, 185,7701f, 1576f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 692)[1], Local_4.f_688);
	(*&Local_4 + 692)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent02b_03", -700.0f, 183,9236f, 1580f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 692)[2], Local_4.f_688);
	(*&Local_4 + 692)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent02b_04", -700.0f, 183,7175f, 1584f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 692)[3], Local_4.f_688);
	Local_4.f_712 = CREATE_OBJECTSET_IN_LAYOUT("DogScent03aSet", Local_4, 8, 0);
	(*&Local_4 + 716)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03a_01", -763,5035f, 144,4028f, 1816,287f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[0], Local_4.f_712);
	(*&Local_4 + 716)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03a_02", -765,9759f, 145,0721f, 1797,973f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[1], Local_4.f_712);
	(*&Local_4 + 716)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03a_03", -770,9464f, 147,0571f, 1783,406f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[2], Local_4.f_712);
	(*&Local_4 + 716)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03a_04", -780,0822f, 148,4459f, 1773,537f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[3], Local_4.f_712);
	Local_4.f_736 = CREATE_OBJECTSET_IN_LAYOUT("DogScent03bSet", Local_4, 8, 0);
	(*&Local_4 + 740)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03b_01", -820,0001f, 174,3971f, 1644,07f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 740)[0], Local_4.f_736);
	(*&Local_4 + 740)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03b_02", -820.0f, 178,5079f, 1632,05f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 740)[1], Local_4.f_736);
	(*&Local_4 + 740)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03b_03", -812,0001f, 179,4034f, 1631,966f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 740)[2], Local_4.f_736);
	(*&Local_4 + 740)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03b_04", -812,0001f, 181,6098f, 1624,403f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 740)[3], Local_4.f_736);
	Local_4.f_760 = CREATE_OBJECTSET_IN_LAYOUT("DogScent03cSet", Local_4, 8, 0);
	(*&Local_4 + 764)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03c_01", -868,0001f, 186,136f, 1496f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 764)[0], Local_4.f_760);
	(*&Local_4 + 764)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03c_02", -876,0001f, 186,3549f, 1496f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 764)[1], Local_4.f_760);
	(*&Local_4 + 764)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03c_03", -880.0f, 185,0693f, 1496f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 764)[2], Local_4.f_760);
	(*&Local_4 + 764)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent03c_04", -884,0001f, 185,2533f, 1492,053f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 764)[3], Local_4.f_760);
	Local_4.f_784 = CREATE_OBJECTSET_IN_LAYOUT("DogScent04aSet", Local_4, 8, 0);
	(*&Local_4 + 788)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04a_01", -768,0001f, 172,7957f, 1472f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 788)[0], Local_4.f_784);
	(*&Local_4 + 788)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04a_02", -756.0f, 170,7451f, 1472.0f, -0,4912682f, -236,6013f, -0,2668532f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 788)[1], Local_4.f_784);
	(*&Local_4 + 788)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04a_03", -752.0f, 170,9199f, 1484f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 788)[2], Local_4.f_784);
	(*&Local_4 + 788)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04a_04", -744.0f, 173,3974f, 1480f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 788)[3], Local_4.f_784);
	Local_4.f_808 = CREATE_OBJECTSET_IN_LAYOUT("DogScent04bSet", Local_4, 8, 0);
	(*&Local_4 + 812)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04b_01", -663,8893f, 181,2283f, 1624,107f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[0], Local_4.f_808);
	(*&Local_4 + 812)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04b_02", -671,778f, 178,2905f, 1633,159f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[1], Local_4.f_808);
	(*&Local_4 + 812)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04b_03", -668,1965f, 177,4162f, 1640,097f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[2], Local_4.f_808);
	(*&Local_4 + 812)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04b_04", -664,5844f, 176,2014f, 1650,065f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[3], Local_4.f_808);
	Local_4.f_832 = CREATE_OBJECTSET_IN_LAYOUT("DogScent04cSet", Local_4, 8, 0);
	(*&Local_4 + 836)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04c_01", -680,0002f, 173,007f, 1799,999f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[0], Local_4.f_832);
	(*&Local_4 + 836)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04c_02", -680,0001f, 172,2256f, 1804f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[1], Local_4.f_832);
	(*&Local_4 + 836)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04c_03", -676,0001f, 171,6704f, 1804f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[2], Local_4.f_832);
	(*&Local_4 + 836)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent04c_04", -672.0f, 170,6665f, 1808f, 0.0f, -235,5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[3], Local_4.f_832);
	Local_4.f_856 = CREATE_POINT_IN_LAYOUT(Local_4, "point_hunting01", -659,8233f, 174,6981f, 1672,03f, 0.0f, 0.0f, 0.0f);
	Local_4.f_860 = CREATE_POINT_IN_LAYOUT(Local_4, "point_hunting02", -912,0001f, 185,5726f, 1484f, 0.0f, 0.0f, 0.0f);
	Local_4.f_864 = CREATE_POINT_IN_LAYOUT(Local_4, "point_hunting03", -600,0988f, 172,5992f, 1832,064f, 0.0f, 0.0f, 0.0f);
	Local_4.f_868 = CREATE_POINT_IN_LAYOUT(Local_4, "point_hunting04", -856.0f, 187,1995f, 1303,999f, 0.0f, 0.0f, 0.0f);
	Local_4.f_872 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective01", -80.0f, 116,8943f, 1409,173f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 876) = { -81,64797f, 117,0198f, 1405,648f };
	*(&Local_4 + 876 + 12) = { 0.0f, 69,68945f, 0.0f };
	Local_4.f_900 = CREATE_POINT_IN_LAYOUT(Local_4, "point_dog_face", -354,9265f, 134,877f, 1284,8f, 0.0f, 69,68945f, 0.0f);
	*(&Local_4 + 904) = { -75,842f, 117,858f, 1419,23f };
	*(&Local_4 + 904 + 12) = { 0.0f, 268,941f, 0.0f };
	*(&Local_4 + 928) = { -75,856f, 117,858f, 1417,472f };
	*(&Local_4 + 928 + 12) = { 0.0f, 267.0f, 0.0f };
	Local_4.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_4, "gringo_wolf_eating01", "wolf_eating", -659,3139f, 174,7291f, 1667,556f, 0.0f, 76,74277f, 0.0f);
	Local_4.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_4, "gringo_wolf_eating02", "wolf_eating", -655,712f, 174,7267f, 1672,044f, 0.0f, 7,86733f, 0.0f);
	Local_4.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_4, "gringo_wolf_eating03", "wolf_eating", -651,998f, 174,7347f, 1672,001f, 0.0f, -36,79684f, 0.0f);
	Local_4.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_4, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", -73,80203f, 116,8612f, 1410,729f, 0.0f, 119,1313f, 0.0f);
}

struct<8> ¿DçþÄ' CeEDèÿþÄ  C(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) //Position: 0xEEF9 / 61177
{
	*StackVal = StackVal;
	StackVal->f_59903 = StackVal;
	return (StackVal / StackVal >= StackVal), 0.0f->f_8556;
	StackVal->f_59783 = StackVal;
}

void Function_282(int iParam0, int iParam1) //Position: 0xF2CD / 62157
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

bool Function_283() //Position: 0xF316 / 62230
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_301(&bLocal_269))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_313))
		{
			bLocal_313 = Function_295(1, 1, -78,446f, 116,861f, 1419,268f, -469,06f, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_312))
		{
			bLocal_312 = Function_284(12, 0, 1, -94,785f, 117,663f, 1405,207f, 0, 0, 0);
			return 0;
		}
		if (!iLocal_333)
		{
			if (IS_ACTOR_INITED(bLocal_312))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_312);
				GIVE_WEAPON_TO_ACTOR(bLocal_312, 22, false, 1, 1);
				GIVE_WEAPON_TO_ACTOR(bLocal_312, 8, false, 1, 1);
				ACTOR_SET_NEXT_EQUIP_SLOT(bLocal_312, 5, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_312, 8, 0);
				iLocal_333 = 1;
				return 0;
			}
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_497))
		{
			bLocal_497 = Function_284(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_497, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_284(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0xF407 / 62471
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	iParam2 = iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_159(&(Global_29008[Global_30621[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_8492[iParam014].f_16)
	{
		Global_8492[iParam014].f_16 = 1;
		STREAMING_REQUEST_ACTOR(StackVal, true, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(StackVal, 4294967295))
	{
		return "";
	}
	if (bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(Global_8492[iParam014]);
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
		Function_293(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_292(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_287(StackVal, iParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = fParam3;
			vVar3.y = fParam4;
			vVar3.z = fParam5;
			if (Function_73(StackVal, StackVal, vVar3))
			{
				iVar6 = 0;
				while (iVar6 <= Global_3422)
				{
					if (IS_SCRIPT_VALID(Global_3422[iVar640].f_108))
					{
						vVar3 = { StackVal, StackVal, *(&Global_3422[iVar640] + 52) };
					}
					iVar6++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, Global_8492[iParam014].f_12, &Global_8492[iParam014] + 20, vVar3, 0.0f, 0.0f, 0.0f);
		}
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		REFERENCE_ACTOR(bVar1);
		TASK_CLEAR(bVar1);
		TASK_PRIORITY_SET(bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
		Function_286(bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			DECOR_SET_INT(Global_8492[iParam014], "ambientFaction", GET_ACTOR_FACTION(bVar1));
		}
		SET_ACTOR_FACTION(bVar1, 20);
		MEMORY_CONSIDER_AS(bVar1, Global_34573, false);
		SET_ACTOR_ALLOW_DISARM(bVar1, false);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(bVar1, 3);
		SET_ACTOR_IS_COMPANION(bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar1, false);
		SET_ACTOR_IS_AMBIENT(bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar1, false);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar1, false);
		Function_285(bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bVar1, 1);
		if (DECOR_CHECK_EXIST(bVar1, "hidden"))
		{
			DECOR_REMOVE(bVar1, "hidden");
		}
		SET_DRAW_ACTOR(bVar1, true);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar1, 1);
		Global_8492[iParam014].f_4 = bVar1;
		return bVar1;
	}
	return "";
}

void Function_285(bool bParam0, bool bParam1) //Position: 0xF8F1 / 63729
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_286(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xF911 / 63761
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_CRIPPLE_ENABLE(bParam0, iParam4);
		SET_ACTOR_ALLOW_DISARM(bParam0, bParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "CanBeLasso", bParam3);
		if (IS_ACTOR_RIDING(bParam0))
		{
			bVar0 = GET_MOUNT(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				SET_ALLOW_JACK(bVar0, iParam2);
			}
		}
	}
}

bool Function_287(int iParam0, bool bParam1) //Position: 0xF965 / 63845
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_291(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_16516))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_16516);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) != 15 || GET_OBJECT_TYPE(bVar1) != 24)
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (GET_ACTOR_ENUM(bVar2) == iParam0)
					{
						Function_288(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_288(bool bParam0, bool bParam1) //Position: 0xF9E5 / 63973
{
	Function_290(bParam0);
	Function_289(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_289(bool bParam0) //Position: 0xFA0B / 64011
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_290(bool bParam0) //Position: 0xFA2F / 64047
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon");
	return;
}

bool Function_291(int iParam0) //Position: 0xFAFE / 64254
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_292(int iParam0, bool bParam1) //Position: 0xFB15 / 64277
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) != 15 || GET_OBJECT_TYPE(bVar1) != 24)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (GET_ACTOR_ENUM(bVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(bParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(bVar1, bParam1);
					}
					DESTROY_ITERATOR(bVar0);
					LOG_ERROR("found actor in GC!");
					return bVar2;
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return "";
}

void Function_293(int iParam0, bool bParam1, bool bParam2) //Position: 0xFBA8 / 64424
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		bVar0 = GET_OBJECT_FROM_ACTOR(StackVal);
	}
	else if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar0 = GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(Global_8492[iParam014].f_52))
		{
			Global_8492[iParam014].f_52 = ADD_BLIP_FOR_OBJECT(bVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(bVar0) == 15)
			{
				SET_BLIP_NAME(Global_8492[iParam014].f_52, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(bVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(Global_8492[iParam014].f_52, 0.0f);
		}
		SET_BLIP_PRIORITY(Global_8492[iParam014].f_52, 3);
	}
	else
	{
		if (IS_BLIP_VALID(Global_8492[iParam014].f_52))
		{
			REMOVE_BLIP(Global_8492[iParam014].f_52);
		}
		if (bParam2)
		{
			if (IS_OBJECT_VALID(bVar0))
			{
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						Function_205(bVar1);
					}
				}
				Function_294(bVar0);
			}
		}
	}
	return;
}

void Function_294(bool bParam0) //Position: 0xFC9F / 64671
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

bool Function_295(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xFCCB / 64715
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381 || Function_217(1))
	{
		Function_300(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_299())
		{
			return "";
		}
	}
	if (!Function_297())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_225(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_225(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_225(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_225(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_296(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_296(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_40() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
					}
				}
			}
		}
	}
}

var Function_296(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x10023 / 65571
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_297() //Position: 0x100BE / 65726
{
	if (Function_298() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_298() //Position: 0x100D4 / 65748
{
	return Global_12976.f_152;
}

bool Function_299() //Position: 0x100DF / 65759
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_300(var uParam0, bool bParam1, bool bParam2) //Position: 0x100FF / 65791
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_76(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_76(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_301(bool bParam0) //Position: 0x1012C / 65836
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_306();
	iVar1 = 0;
	if (!Function_173(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_305(bParam0[iVar03], 8);
		}
		else if (Function_304())
		{
			iVar1 = 1;
			Function_305(bParam0[iVar03], 8);
		}
		Function_305(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_173(bParam0[iVar03], 4))
		{
			if (!Function_173(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_173(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_173(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_305(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_173(bParam0[iVar03], 4))
		{
			if (!Function_173(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_305(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_302();
	return 1;
}

void Function_302() //Position: 0x104A7 / 66727
{
	if (!Function_303(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_303(int iParam0) //Position: 0x104E7 / 66791
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_304() //Position: 0x10503 / 66819
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_305(var uParam0, int iParam1) //Position: 0x1052E / 66862
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_306() //Position: 0x1053F / 66879
{
	if (!Function_303(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

int Function_307() //Position: 0x10581 / 66945
{
	switch (bLocal_308)
	{
		case 0x00000063:
			if (!Function_269(&Local_252))
			{
				Function_308(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_308(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_308(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x105C9 / 67017
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_49();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_40())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_85(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_229();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_261(bParam9);
}

int Function_309() //Position: 0x106B9 / 67257
{
	switch (bLocal_308)
	{
		case 0x00000063:
			Function_325(Global_34573, (*&Local_4 + 420)[0], 0, 0, 0);
			Function_325(bLocal_312, (*&Local_4 + 420)[1], 0, 1, 0);
			TASK_CLEAR(Global_34573);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 4.0f, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_PUT_WEAPON_IN_HAND(bLocal_312, 8, 0);
			TASK_GO_NEAR_OBJECT(bLocal_312, (*&Local_4 + 420)[3], 2.0f, 1, 1, 1);
			ACTOR_POP_NEXT_GAIT(bLocal_312, 1, false);
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 268)[0]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 268)[0]);
			Function_325(bLocal_497, (*&Local_4 + 420)[4], 1, 1, 1);
			TASK_STAND_STILL(bLocal_497, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_497, true);
			SET_DRAW_ACTOR(bLocal_497, true);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_499, (*&Local_4 + 268)[0], 2, 1);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_498, (*&Local_4 + 268)[0], 2, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_325(Global_34573, (*&Local_4 + 544)[0], 1, 1, 1);
			Function_325(bLocal_312, (*&Local_4 + 544)[2], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_313))
			{
				Function_325(bLocal_313, (*&Local_4 + 544)[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_314))
			{
				Function_325(bLocal_314, (*&Local_4 + 544)[6], 1, 1, 1);
			}
			GET_OBJECT_POSITION((*&Local_4 + 544)[10], &vLocal_555);
			TASK_GO_NEAR_COORD(bLocal_312, &vLocal_555, 3.0f, 2);
			GET_OBJECT_POSITION((*&Local_4 + 544)[1], &vLocal_555);
			ENABLE_GAME_CAMERA_FOCUS(vLocal_555, -1.0f, 0, 0, 1, 0);
			SET_GAME_CAMERA_DRIFTZ(-1.0f);
			SET_DRAW_ACTOR(bLocal_497, true);
			Function_204(12, 1, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_310() //Position: 0x10840 / 67648
{
	switch (bLocal_308)
	{
		case 0x00000063:
			ACTOR_SET_NEXT_EQUIP_SLOT(bLocal_312, 5, 0);
			if (!Function_311() && !Function_301(&bLocal_259))
			{
				return 0;
			}
			if (!DECOR_CHECK_EXIST(bLocal_251, "snappedToGringos"))
			{
				if (Function_274())
				{
					if (IS_ACTOR_VALID(bLocal_313))
					{
						if (IS_GRINGO_VALID(bLocal_568[0]))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_313, GET_OBJECT_FROM_GRINGO(bLocal_568[0]), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(bLocal_313, bLocal_568[0], "UseCase1", true, 1);
							TASK_PRIORITY_SET(bLocal_313, true);
						}
						else
						{
							Function_325(bLocal_313, (*&Local_4 + 420)[2], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(bLocal_314))
					{
						if (IS_GRINGO_VALID(bLocal_568[1]))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_314, GET_OBJECT_FROM_GRINGO(bLocal_568[1]), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(bLocal_314, bLocal_568[1], "UseCase1", true, 1);
							TASK_PRIORITY_SET(bLocal_314, true);
						}
						else
						{
							Function_325(bLocal_314, (*&Local_4 + 420)[3], 1, 1, 1);
						}
					}
					DECOR_SET_BOOL(bLocal_251, "snappedToGringos", true);
					return 0;
				}
				return 1;
			}
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
	}
	return 0;
}

bool Function_311() //Position: 0x10993 / 67987
{
	Function_314(&Local_4 + 4, 981, 2, 0);
	Function_314(&Local_4 + 4, 1068, 2, 0);
	Function_314(&Local_4 + 4, 1069, 2, 0);
	Function_314(&Local_4 + 4, 1070, 2, 0);
	Function_314(&Local_4 + 4, 1015, 2, 0);
	Function_314(&Local_4 + 4, 1016, 2, 0);
	Function_314(&Local_4 + 4, 1017, 2, 0);
	Function_312(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/wolf_eating", 1, 0);
	Function_312(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	if (Function_301(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_312(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x10A8D / 68237
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_313(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_305(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_313(var uParam0, int iParam1, int iParam2) //Position: 0x10AC5 / 68293
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_305(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_314(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10B89 / 68489
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_305(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_305(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_315() //Position: 0x10C59 / 68697
{
	switch (bLocal_308)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 268)[0]))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 268)[0]);
				}
				if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 268)[0]))
				{
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 268)[0]);
				}
				FIRE_STOP_FLAMES_IN_VOLUME((*&Local_4 + 268)[0]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 268)[0], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 268)[0]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_404, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_404);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_404);
				CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
				return 1;
			}
			if (Function_283())
			{
				Function_280();
				Function_325(Global_34573, (*&Local_4 + 420)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_312))
				{
					Function_325(bLocal_312, (*&Local_4 + 420)[7], 1, 1, 1);
					TASK_STAND_STILL(bLocal_312, -1.0f, 0, 0);
					ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_312, true);
					CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_312);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 0);
					GIVE_WEAPON_TO_ACTOR(bLocal_312, 8, false, 1, 1);
					ACTOR_SET_NEXT_EQUIP_SLOT(bLocal_312, 5, 1);
					ACTOR_PUT_WEAPON_IN_HAND(bLocal_312, 8, 0);
					TASK_STAND_STILL(bLocal_312, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_312, true);
				}
				if (IS_ACTOR_VALID(bLocal_497))
				{
					Function_325(bLocal_497, (*&Local_4 + 420)[4], 1, 1, 1);
					TASK_STAND_STILL(bLocal_497, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_497, true);
					SET_DRAW_ACTOR(bLocal_497, false);
				}
			}
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(bLocal_313))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse02", bLocal_313);
			}
			if (IS_ACTOR_VALID(bLocal_314))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse01", bLocal_314);
			}
			if (IS_ACTOR_VALID(bLocal_497))
			{
				SET_DRAW_ACTOR(bLocal_497, false);
			}
			return 1;
			break;
	}
	return 0;
}

int Function_316() //Position: 0x10E12 / 69138
{
	switch (bLocal_308)
	{
		case 0x00000063:
			Function_321(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_319(StackVal, StackVal, bLocal_251, *(&Global_3422[5340] + 52), &iLocal_301 + 20, 1, 0, 0, 0, 1, 1);
			Function_317(&uLocal_484, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000065:
			Function_321(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_225((*&Local_4 + 544)[0]);
			Function_319(StackVal, StackVal, bLocal_251, Function_225((*&Local_4 + 544)[0]), &iLocal_301 + 20, 1, 0, 0, 0, 1, 1);
			Function_317(&uLocal_484, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
	}
	return 0;
}

void Function_317(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10E9F / 69279
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_318(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_318(bool bParam0) //Position: 0x10EC3 / 69315
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return iVar0;
}

void Function_319(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x11400 / 70656
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = iParam6;
	vVar2.y = iParam7;
	vVar2.z = iParam8;
	if (bParam5)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(Global_34573, &vParam1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(*uParam4))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol")))
		{
			if (*uParam4 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"), vParam1);
			}
		}
	}
	else
	{
		*uParam4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "CutsceneVol", 2, vParam1, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	}
	if (IS_VOLUME_VALID(*uParam4))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
		bVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
		if (!Global_3380)
		{
			if (IS_ACTOR_VALID(bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar0, bParam0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_320(bVar1, bParam0);
			}
		}
		if (!Function_73(StackVal, StackVal, vVar2))
		{
			if (!IS_ACTOR_VALID(bVar0))
			{
				bVar0 = Global_12976.f_36;
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *uParam4))
				{
					TELEPORT_ACTOR(bVar0, &vVar2, 1, 1, 1);
					TASK_CLEAR(bVar0);
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *uParam4))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(*uParam4))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam4);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(*uParam4))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam4);
		}
		if (bParam10)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(*uParam4);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(*uParam4, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(*uParam4);
		if (bParam9)
		{
			Global_63117 = *uParam4;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_320(bool bParam0, bool bParam1) //Position: 0x1166E / 71278
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(bParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(bParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		bVar4 = GET_DRAFT_ACTOR(bVar2, bParam0);
		if (IS_ACTOR_VALID(bVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar4, bParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		bVar5 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, bVar3);
		if (IS_ACTOR_VALID(bVar5))
		{
			if (!IS_ACTOR_PLAYER(bVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar5, bParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_321(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x116E3 / 71395
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_229();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_49();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_40())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_323(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_323(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_85(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_322()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_322()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_303(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_303(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_322() //Position: 0x1198C / 72076
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

vector3 Function_323(bool bParam0) //Position: 0x11A0B / 72203
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_324() //Position: 0x11A1C / 72220
{
	if (!SQUAD_IS_VALID(Local_4.f_128))
	{
		Function_279();
		if (SQUAD_IS_VALID(Local_4.f_128))
		{
			Function_278(Local_4.f_128, 0);
			Function_277(Local_4.f_128, 3);
			Function_276(Local_4.f_128, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 116)[02]))
			{
				bLocal_314 = (*&Local_4 + 116)[02];
				Function_325(bLocal_314, (*&Local_4 + 544)[6], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_312, bLocal_314);
				SET_MOST_RECENT_MOUNT(bLocal_312, bLocal_314);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_314, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_128, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_497))
	{
		Function_325(bLocal_497, (*&Local_4 + 544)[8], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_497))
		{
			SET_ACTOR_FACTION(bLocal_497, 20);
			Function_275(bLocal_497, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_497, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_497, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_497, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_497, true);
			DECOR_SET_BOOL(bLocal_497, "Frank", true);
			TASK_STAND_STILL(bLocal_497, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_497, true);
		}
	}
	else if (!iLocal_324[3])
	{
		Function_325(bLocal_497, (*&Local_4 + 544)[8], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_497))
	{
		return 1;
	}
	return 0;
}

void Function_325(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x11B50 / 72528
{
	vector3 vVar0;
	struct<5> Var3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			if (GET_OBJECT_TYPE(bParam1) == 8)
			{
				GET_OBJECT_POSITION(bParam1, &vVar0);
				GET_OBJECT_ORIENTATION(bParam1, &Var3);
			}
		}
	}
}

void Function_326(int iParam0) //Position: 0x11C57 / 72791
{
	if (!Function_269(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_181(1, 0, 1);
		}
	}
	return;
}

bool Function_327(bool bParam0) //Position: 0x11C72 / 72818
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

void Function_328() //Position: 0x11C8E / 72846
{
	Function_331(12);
	Function_331(13);
	Function_331(11);
	Function_331(35);
	Function_331(6);
	Function_331(3);
	Function_331(15);
	Function_331(8);
	Function_331(20);
	Function_331(7);
	Function_331(5);
	Function_331(16);
	Function_162(18444);
	Function_329(4);
	return;
}

void Function_329(int iParam0) //Position: 0x11CD6 / 72918
{
	Function_330(&Global_28842, iParam0);
	return;
}

void Function_330(var uParam0, int iParam1) //Position: 0x11CE4 / 72932
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_331(int iParam0) //Position: 0x11D07 / 72967
{
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_332(bool bParam0) //Position: 0x11D27 / 72999
{
	Function_333(0, 0x40400000);
	Function_195();
	Function_194();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_333(bool bParam0, float fParam1) //Position: 0x11D5B / 73051
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, true);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_335();
	Function_334();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_334() //Position: 0x11E59 / 73305
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_335() //Position: 0x11E8B / 73355
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

void Function_336() //Position: 0x11F88 / 73608
{
	switch (iLocal_493)
	{
		case 0x00000000:
			iLocal_493++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(bLocal_568[0]))
			{
				bLocal_568[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 904, 1.0f, 0);
			}
			if (IS_GRINGO_VALID(bLocal_568[0]))
			{
				iLocal_493++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(bLocal_568[1]))
			{
				bLocal_568[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 928, 1.0f, 0);
			}
			if (IS_GRINGO_VALID(bLocal_568[1]))
			{
				iLocal_493++;
			}
			break;
		
		case 0x00000003:
			Function_225(GET_OBJECT_FROM_GRINGO(bLocal_568[0]));
			Function_337(StackVal, StackVal, Function_225(GET_OBJECT_FROM_GRINGO(bLocal_568[0])), 0, 0);
			Function_225(GET_OBJECT_FROM_GRINGO(bLocal_568[1]));
			Function_337(StackVal, StackVal, Function_225(GET_OBJECT_FROM_GRINGO(bLocal_568[1])), 0, 0);
			iLocal_493++;
			break;
		
		case 0x00000004:
			if (bLocal_308 == 0)
			{
				if (IS_ACTOR_VALID(bLocal_313))
				{
					if (IS_GRINGO_VALID(bLocal_568[0]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_313, GET_OBJECT_FROM_GRINGO(bLocal_568[0]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_313, bLocal_568[0], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_313, true);
					}
				}
				if (IS_ACTOR_VALID(bLocal_314))
				{
					if (IS_GRINGO_VALID(bLocal_568[1]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_314, GET_OBJECT_FROM_GRINGO(bLocal_568[1]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_314, bLocal_568[1], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_314, true);
					}
				}
			}
			else if (bLocal_308 == 101)
			{
				if (IS_ACTOR_VALID(bLocal_313))
				{
					if (IS_GRINGO_VALID(bLocal_568[0]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_313, GET_OBJECT_FROM_GRINGO(bLocal_568[0]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_313, bLocal_568[0], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_313, true);
					}
				}
				if (IS_ACTOR_VALID(bLocal_314))
				{
					if (IS_GRINGO_VALID(bLocal_568[1]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_314, GET_OBJECT_FROM_GRINGO(bLocal_568[1]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_314, bLocal_568[1], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_314, true);
					}
				}
			}
			iLocal_493++;
			break;
		
		case 0x00000005:
			iLocal_493++;
			break;
	}
	return;
}

int Function_337(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x121EA / 74218
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_339(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_338(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_338(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_338(bool bParam0, bool bParam1) //Position: 0x1234B / 74571
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_339(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x12358 / 74584
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_340() //Position: 0x12402 / 74754
{
	Function_336();
	if (iLocal_309 < 3 && iLocal_309 > 105)
	{
		Function_386();
	}
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_332(0);
			SET_ACTOR_HEALTH(bLocal_312, GET_ACTOR_MAX_HEALTH(bLocal_312));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_324[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_328();
				bLocal_310 = Global_30637[1];
				if (!Function_327(bLocal_310))
				{
					Function_326(&Local_252);
				}
				Function_325(Global_34573, (*&Local_4 + 516)[0], 1, 1, 1);
				iLocal_493 = 0;
				if (IS_ACTOR_VALID(bLocal_313))
				{
					TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_313, true);
				}
				if (IS_ACTOR_VALID(bLocal_312))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_312);
					MEMORY_PREFER_RIDING(bLocal_312, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_312);
					TASK_STAND_STILL(bLocal_312, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_312, true);
				}
				Function_210(&bLocal_315);
				iLocal_309 = 1;
			}
			else
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_327(bLocal_310) || bLocal_310 != 4294967295))
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000002:
			Function_317(&uLocal_484, 13, 0, 4294967295, 4294967295);
			if (Function_385())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_494 = 0;
				iLocal_507 = 0;
				iLocal_508 = 0;
				iLocal_509 = 0;
				if (IS_ACTOR_VALID(bLocal_497))
				{
					SET_ACTOR_HEALTH(bLocal_497, GET_ACTOR_MAX_HEALTH(bLocal_497));
				}
				if (iLocal_324[2] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_313))
						{
							Function_325(bLocal_313, (*&Local_4 + 516)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_313))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_313);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_312))
					{
						if (IS_ACTOR_VALID(bLocal_314))
						{
							Function_325(bLocal_314, (*&Local_4 + 516)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_312) && !IS_ACTOR_MOUNTED(bLocal_314))
							{
								ACTOR_MOUNT_ACTOR(bLocal_312, bLocal_314);
							}
						}
					}
				}
				iLocal_334 = 0;
				Function_380(&(Local_375[017]), bLocal_312, "Son", 1, 0x5f5e100, 1);
				Function_376(&(Local_375[017]), 1024);
				Function_380(&(Local_375[117]), bLocal_497, "Dog", 0, 0x5f5e100, 1);
				Function_376(&(Local_375[117]), 1024);
				Function_380(&(Local_375[217]), bLocal_499, "Uncle", 0, 0x5f5e100, 1);
				Function_380(&(Local_375[317]), bLocal_498, "Wife", 0, 0x5f5e100, 1);
				Function_375(&(Local_375[417]));
				Function_375(&(Local_375[517]));
				Function_210(&bLocal_315);
				iLocal_309 = 6;
				Function_224(bLocal_308);
				Function_369(StackVal, StackVal, Function_224(bLocal_308), bLocal_308, Global_30637[1], Function_227(bLocal_308), 0);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (Function_366(1))
				{
					bLocal_501 = ADD_BLIP_FOR_OBJECT(Local_4.f_872, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_501))
					{
					}
					GET_OBJECT_POSITION(Local_4.f_872, &vLocal_549);
					GET_OBJECT_ORIENTATION(Local_4.f_872, &vLocal_552);
					bLocal_511 = Function_365(StackVal, StackVal, StackVal, StackVal, bLocal_251, "HOME02_SON02GATEWAY01", vLocal_549, vLocal_552, Global_34573, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					Function_363(StackVal, StackVal, vLocal_549, 0, 48, 1);
					if (IS_OBJECT_VALID(bLocal_511))
					{
					}
					if (IS_ACTOR_VALID(bLocal_312))
					{
						Function_293(12, 0, 1);
						ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_312, Global_34573, 60.0f, 10.0f, 50.0f);
						MEMORY_PREFER_RIDING(bLocal_312, true);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 4294967295);
						CLEAR_ACTOR_MAX_SPEED(bLocal_312);
						CLEAR_ACTOR_MAX_SPEED(bLocal_314);
						vLocal_546 = { 3.0f, 0.0f, 1.0f };
						bLocal_488 = TASK_SEQUENCE_OPEN();
						TASK_DRAW_HOLSTER_WEAPON(false, 0);
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_FOLLOW_OBJECT(false, Global_34573, &vLocal_546, 0, 0, 0, 0, 0, 0, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_312, bLocal_488);
						TASK_SEQUENCE_RELEASE(bLocal_488, 1);
						TASK_PRIORITY_SET(bLocal_312, true);
					}
					if (IS_ACTOR_VALID(bLocal_497))
					{
						TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_497);
						ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_497, Global_34573, 60.0f, 10.0f, 50.0f);
						vLocal_533[03] = { -3.0f, 0.0f, 6.0f };
						bLocal_488 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, 3.0f, 0, 0);
						TASK_FOLLOW_OBJECT(false, Global_34573, &(vLocal_533[03]), 0, 0, 0, 0, 0, 0, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_497, bLocal_488);
						TASK_SEQUENCE_RELEASE(bLocal_488, 1);
						TASK_PRIORITY_SET(bLocal_497, true);
					}
					fLocal_571 = Function_361(Global_34573, Local_4.f_872);
					Function_358();
					Function_210(&bLocal_315);
					iLocal_309 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				TASK_CLEAR(bLocal_312);
				Function_357("home02_son02_obj08", 7,5f, 1, 2, 0, 0, 0);
				Function_210(&bLocal_315);
				Function_210(&bLocal_318);
				Function_210(&bLocal_321);
				iLocal_309 = 8;
			}
			break;
		
		case 0x00000008:
			Function_225(Local_4.f_872);
			Function_351(StackVal, StackVal, "$/cutscene/son_02_end/son_02_end", &uLocal_483, Function_225(Local_4.f_872), 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			if (Function_342(&bLocal_321, 100.0f, bLocal_313, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_331, 0, bLocal_251, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_501))
				{
					REMOVE_BLIP(bLocal_501);
				}
				if (IS_OBJECT_VALID(bLocal_511))
				{
					Function_202();
					Function_341(bLocal_511);
				}
				if (Function_361(Global_34573, Local_4.f_872) < (fLocal_571 + 75.0f))
				{
					Function_218("beechers_abandoned");
					bLocal_331 = true;
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_501))
				{
					bLocal_501 = ADD_BLIP_FOR_OBJECT(Local_4.f_872, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_501))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_511))
				{
					GET_OBJECT_POSITION(Local_4.f_872, &vLocal_549);
					GET_OBJECT_ORIENTATION(Local_4.f_872, &vLocal_552);
					bLocal_511 = Function_365(StackVal, StackVal, StackVal, StackVal, bLocal_251, "HOME02_SON02GATEWAY01", vLocal_549, vLocal_552, Global_34573, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					Function_363(StackVal, StackVal, vLocal_549, 0, 48, 1);
					if (IS_OBJECT_VALID(bLocal_511))
					{
					}
				}
				else
				{
					if (Function_361(Global_34573, bLocal_511) > 200.0f)
					{
						Function_317(&uLocal_484, 11, 0, 4294967295, 4294967295);
					}
					if (!DECOR_CHECK_EXIST(bLocal_251, "FinalDistanceRemainder"))
					{
						if (Function_361(Global_34573, Local_4.f_872) < (fLocal_571 + 50.0f))
						{
							DECOR_SET_BOOL(bLocal_251, "FinalDistanceRemainder", true);
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
							PRINT_OBJECTIVE_B("Beechers_return", 7,5f, 0, 2, true, 0, 0, 0);
						}
					}
					else if (Function_361(Global_34573, Local_4.f_872) > (fLocal_571 + 25.0f))
					{
						DECOR_REMOVE(bLocal_251, "FinalDistanceRemainder");
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("home02_son01_obj12", 7,5f, 0, 2, true, 0, 0, 0);
					}
					else if (Function_361(Global_34573, Local_4.f_872) < (fLocal_571 + 100.0f))
					{
						Function_218("beechers_abandoned");
						bLocal_331 = true;
					}
				}
			}
			if (Function_366(1))
			{
				if (!IS_ACTOR_IN_VOLUME(bLocal_312, Local_4.f_408) && !IS_ACTOR_IN_VOLUME(bLocal_312, Local_4.f_412))
				{
					if (GET_TASK_STATUS(bLocal_312, 26) != 1)
					{
						ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_312, Global_34573, 25.0f, 10.0f, 20.0f);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 1);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_312, Global_34573, 4.0f, 4);
						TASK_PRIORITY_SET(bLocal_312, true);
					}
				}
				else if (GET_TASK_STATUS(bLocal_312, 0) != 1)
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_312);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 1);
					bLocal_488 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 544)[6], 5.0f, 4, 0, 1);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_312, bLocal_488);
					TASK_SEQUENCE_RELEASE(bLocal_488, 1);
					TASK_PRIORITY_SET(bLocal_312, true);
				}
			}
			else
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_312);
			}
			if (IS_OBJECT_VALID(bLocal_511))
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					if (IS_VOLUME_VALID(Local_4.f_328))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_328))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							if (IS_BLIP_VALID(bLocal_501))
							{
								REMOVE_BLIP(bLocal_501);
							}
							if (IS_OBJECT_VALID(bLocal_511))
							{
								Function_341(bLocal_511);
							}
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							bLocal_488 = TASK_SEQUENCE_OPEN();
							TASK_GO_TO_OBJECT(false, (*&Local_4 + 544)[4], 2, 0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(Global_34573, bLocal_488);
							TASK_SEQUENCE_RELEASE(bLocal_488, 1);
							bLocal_488 = TASK_SEQUENCE_OPEN();
							TASK_GO_TO_OBJECT(false, (*&Local_4 + 544)[6], 2, 0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_312, bLocal_488);
							TASK_SEQUENCE_RELEASE(bLocal_488, 1);
							Function_210(&bLocal_315);
							iLocal_309 = 105;
						}
					}
				}
			}
			break;
		
		case 0x00000069:
			Function_225(Local_4.f_872);
			Function_351(StackVal, StackVal, "$/cutscene/son_02_end/son_02_end", &uLocal_483, Function_225(Local_4.f_872), 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			if (Function_257(&bLocal_315) <= 3.0f)
			{
				Function_210(&bLocal_315);
				iLocal_309 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_225(Local_4.f_872);
			Function_351(StackVal, StackVal, "$/cutscene/son_02_end/son_02_end", &uLocal_483, Function_225(Local_4.f_872), 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			if (!HUD_IS_FADING())
			{
				iLocal_324[3] = 1;
				Function_210(&bLocal_315);
				bLocal_308 = 101;
				iLocal_309 = 0;
			}
			break;
	}
	return;
}

void Function_341(bool bParam0) //Position: 0x12DEC / 77292
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

bool Function_342(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x12E76 / 77430
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_ALIVE(bParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(Global_34573)))
		{
			if (!Function_350(16))
			{
				if (bParam7)
				{
					Function_229();
				}
				if (!Function_349())
				{
					Function_357(bParam4, 7,5f, 0, 2, 0, 0, 0);
					Function_348(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_218(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_350(8))
		{
			if (bParam7)
			{
				Function_229();
			}
			if (!Function_349())
			{
				Function_357(bParam3, 7,5f, 0, 2, 0, 0, 0);
				Function_348(8);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_347(bParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_347(bParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam2, bParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_350(8))
	{
		Function_346(8);
		if (!Function_345())
		{
			Function_344();
			Function_343();
		}
	}
	if (GET_MOUNT(Global_34573) == bParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam2));
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_347(bParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_347(bParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_343() //Position: 0x12FCB / 77771
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_LAST_NOTE_OBJECTIVE();
	bVar1 = UI_GET_STRING_BY_HASH(iVar0);
	if (STRING_LENGTH(bVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(bVar1, 7,5f, 1, 2, false, 0, 0, 0);
	}
	return;
}

void Function_344() //Position: 0x12FF6 / 77814
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_345() //Position: 0x13002 / 77826
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return DECOR_GET_INT(Global_34573, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_346(bool bParam0) //Position: 0x13046 / 77894
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_36(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_347(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x130A9 / 77993
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (((GET_OBJECT_TYPE(bVar1) != iParam2 || iParam2 != 4294967295) || ((iParam2 != 15 && GET_OBJECT_TYPE(bVar1) != 24) && iParam3)) && bVar1 == bParam4)
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				if ((GET_BLIP_ICON(bVar2) == 322 && GET_BLIP_ICON(bVar2) == 323) && GET_BLIP_ICON(bVar2) == 324)
				{
					SET_BLIP_VISIBLE(bVar2, bParam1);
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

void Function_348(bool bParam0) //Position: 0x1314A / 78154
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_76(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_349() //Position: 0x131AD / 78253
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

bool Function_350(bool bParam0) //Position: 0x131BA / 78266
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_153(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

int Function_351(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x13201 / 78337
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_354(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_356()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
	{
		if (!bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && *uParam1 == 0)
		{
			if (*uParam1 != 5)
			{
				*uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			*uParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_73(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(vVar16, vVar19);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(vVar16, vVar19, 1);
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					*uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam8, iParam9, iParam10, iParam11);
					*uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_352();
					CUTSCENE_MANAGER_RESUME_LOADING();
					*uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					*uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				*uParam1 = 0;
				break;
		}
	}
	else if ((!Function_354(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_356()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_354(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_352() //Position: 0x13447 / 78919
{
	bool bVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &vVar7, &Var10);
			Function_353(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_353(char* cParam0, vector3 vParam1) //Position: 0x1349B / 79003
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam4, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam8, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_354(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x135C3 / 79299
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_355(bParam0);
		if (VDIST(Function_355(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_355(bool bParam0) //Position: 0x1364D / 79437
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

int Function_356() //Position: 0x136B7 / 79543
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_357(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x136C6 / 79558
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_358() //Position: 0x13719 / 79641
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_LesGoHome", "Home02_s2_LesGoHome", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_359(int iParam0) //Position: 0x13768 / 79720
{
	Function_360(0, Global_34573, iParam0, 0);
	Function_360(1, bLocal_312, iParam0, 0);
	return;
}

void Function_360(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x13782 / 79746
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

float Function_361(bool bParam0, bool bParam1) //Position: 0x137A7 / 79783
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_355(bParam0);
			vVar0 = { StackVal, StackVal, Function_355(bParam0) };
			Function_362(bParam1);
			vVar3 = { StackVal, StackVal, Function_362(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_362(bool bParam0) //Position: 0x13847 / 79943
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

void Function_363(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x138B3 / 80051
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = iParam3;
	Global_28185.f_16 = iParam4;
	if (iParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (iParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_364(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_364(bool bParam0) //Position: 0x1396F / 80239
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

bool Function_365(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x139AF / 80303
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

bool Function_366(bool bParam0) //Position: 0x13A7A / 80506
{
	if (IS_ACTOR_ALIVE(bLocal_313))
	{
		if (DECOR_GET_BOOL(bLocal_314, "DisallowPlayerRide"))
		{
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_314, 1);
			DECOR_REMOVE(bLocal_314, "DisallowPlayerRide");
		}
		if (DECOR_GET_BOOL(bLocal_313, "DisallowPlayerRide"))
		{
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_313, 1);
			DECOR_REMOVE(bLocal_313, "DisallowPlayerRide");
		}
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (GET_MOUNT(Global_34573) == bLocal_314)
			{
				bLocal_314 = bLocal_313;
				SET_MOST_RECENT_MOUNT(bLocal_312, bLocal_314);
				TASK_MOUNT(bLocal_312, bLocal_314, 0, 1, 2, 2147483647);
				bLocal_313 = GET_MOUNT(Global_34573);
				Function_367(bLocal_313, 0);
			}
			if (IS_ACTOR_RIDING(bLocal_312))
			{
				return 1;
			}
			if (GET_TASK_STATUS(bLocal_312, 11) != 1)
			{
				TASK_MOUNT(bLocal_312, bLocal_314, 0, 1, 2, 2147483647);
			}
		}
		else if (bParam0)
		{
			if (IS_ACTOR_RIDING(bLocal_312))
			{
				return 1;
			}
			if (GET_TASK_STATUS(bLocal_312, 11) != 1)
			{
				TASK_MOUNT(bLocal_312, bLocal_314, 0, 1, 2, 2147483647);
			}
		}
		else if (IS_ACTOR_RIDING(bLocal_312))
		{
			TASK_DISMOUNT(bLocal_312, 1);
			CLEAR_ACTOR_MAX_SPEED(bLocal_312);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_312);
			MEMORY_PREFER_RIDING(bLocal_312, false);
		}
		else
		{
			return 1;
		}
	}
	if (!DECOR_GET_BOOL(bLocal_314, "DisallowPlayerRide"))
	{
		SET_ALLOW_RIDE_BY_PLAYER(bLocal_314, 0);
		DECOR_SET_BOOL(bLocal_314, "DisallowPlayerRide", true);
	}
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(bLocal_312))
		{
			return 1;
		}
		if (GET_TASK_STATUS(bLocal_312, 11) != 1)
		{
			TASK_MOUNT(bLocal_312, bLocal_314, 0, 1, 2, 2147483647);
		}
	}
	return 0;
}

void Function_367(bool bParam0, int iParam1) //Position: 0x13C50 / 80976
{
	Function_368(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_368(bool bParam0) //Position: 0x13C62 / 80994
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	return;
}

void Function_369(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x13E18 / 81432
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam3 == Global_34165.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam3 < 0)
	{
		Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	}
	if (iParam3 != Global_34165.f_48 && !Function_374())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_373(0);
	Function_372();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_371(uParam4, iVar0, iVar1);
	Function_370();
}

void Function_370() //Position: 0x13EB5 / 81589
{
	if (Global_76853)
	{
		UNK_0x6287203C(Global_34165.f_132);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_34165.f_132);
		PRINTNL();
	}
	return;
}

void Function_371(int iParam0, bool bParam1, bool bParam2) //Position: 0x13EF6 / 81654
{
	Global_34165.f_28 = 1;
	Global_34165.f_32 = 0;
	if (bParam1)
	{
		Global_34165.f_56++;
	}
	if (bParam2)
	{
		Global_34165.f_60 = 0;
		if (Global_34165.f_132 >= 0)
		{
			Global_34165.f_132 = (Global_34165.f_132 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_34165.f_132);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_34165.f_132);
			PRINTNL();
		}
	}
	else
	{
		Global_34165.f_132++;
		Global_34165.f_60++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_34165.f_132);
		PRINTNL();
	}
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_34165.f_24 = Global_29005;
	}
	else
	{
		Global_34165.f_24 = iParam0;
	}
	if (Function_81(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_372() //Position: 0x14068 / 82024
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_373(bool bParam0) //Position: 0x1408C / 82060
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

bool Function_374() //Position: 0x140BB / 82107
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_375(int iParam0) //Position: 0x140D6 / 82134
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(*iParam0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(*iParam0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(*iParam0);
			}
		}
	}
	*iParam0 = "";
	strcpy(iParam0 + 4, "", 24);
	iParam0->f_36 = 0;
	iParam0->f_40 = 0;
	return;
}

void Function_376(int iParam0, int iParam1) //Position: 0x1418A / 82314
{
	if (iParam1 != 100000000)
	{
		Function_379(iParam0, iParam1);
	}
	else
	{
		Function_377(iParam0, 1);
	}
	return;
}

void Function_377(int iParam0, bool bParam1) //Position: 0x141AA / 82346
{
	iParam0->f_40 = 0;
	Function_378(iParam0, 2, bParam1);
	Function_378(iParam0, 4, bParam1);
	Function_378(iParam0, 8, bParam1);
	Function_378(iParam0, 16, bParam1);
	Function_378(iParam0, 32, bParam1);
	Function_378(iParam0, 64, bParam1);
	Function_378(iParam0, 128, bParam1);
	Function_378(iParam0, 256, bParam1);
	Function_378(iParam0, 512, bParam1);
	Function_378(iParam0, 1024, bParam1);
	return;
}

void Function_378(int iParam0, int iParam1, bool bParam2) //Position: 0x14210 / 82448
{
	bool bVar0;
	
	Function_76(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_76(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_36(iParam0 + 40, bVar0);
	}
	else
	{
		Function_76(iParam0 + 40, bVar0);
	}
	return;
}

void Function_379(int iParam0, bool bParam1) //Position: 0x1424C / 82508
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_380(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x14277 / 82551
{
	if (!Function_384(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_383(iParam0, bParam2))
	{
		return 0;
	}
	Function_382(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_381(iParam0, iParam4, iParam5);
	return 1;
}

void Function_381(var uParam0, int iParam1, int iParam2) //Position: 0x142B3 / 82611
{
	if (iParam1 != 100000000)
	{
		Function_378(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_377(uParam0, iParam2);
	}
	return;
}

void Function_382(var uParam0, int iParam1) //Position: 0x142D6 / 82646
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_383(int iParam0, bool bParam1) //Position: 0x142E2 / 82658
{
	if (!IS_STRING_VALID(cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(bParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(iParam0 + 4, bParam1, 24);
	return 1;
}

bool Function_384(int iParam0, bool bParam1) //Position: 0x1436B / 82795
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	*iParam0 = bParam1;
	iParam0->f_28 = GET_OBJECT_TYPE(*iParam0);
	iParam0->f_32 = 2;
	switch (iParam0->f_28)
	{
		case 0x0000000F:
			bVar0 = GET_ACTOR_FROM_OBJECT(*iParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_HORSE(bVar0))
				{
					iParam0->f_32 = 1;
				}
				else if (IS_ACTOR_VEHICLE(bVar0))
				{
					iParam0->f_32 = 3;
				}
			}
			break;
		
		case 0x00000019:
			bVar1 = GET_SQUAD_FROM_OBJECT(*iParam0);
			if (SQUAD_IS_VALID(bVar1))
			{
				if (SQUAD_GET_SIZE(bVar1) >= 0)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bVar1, false);
					if (IS_ACTOR_VALID(bVar2))
					{
						if (IS_ACTOR_HORSE(bVar2))
						{
							iParam0->f_32 = 1;
						}
						else if (IS_ACTOR_VEHICLE(bVar2))
						{
							iParam0->f_32 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			bVar3 = GET_OBJECTSET_FROM_OBJECT(*iParam0);
			if (IS_OBJECTSET_VALID(bVar3))
			{
				if (GET_OBJECTSET_SIZE(bVar3) >= 0)
				{
					bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar3);
					if (IS_OBJECT_VALID(bVar4))
					{
						bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
						if (IS_ACTOR_VALID(bVar5))
						{
							if (IS_ACTOR_HORSE(bVar5))
							{
								iParam0->f_32 = 1;
							}
							else if (IS_ACTOR_VEHICLE(bVar5))
							{
								iParam0->f_32 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

bool Function_385() //Position: 0x144F7 / 83191
{
	if (!SQUAD_IS_VALID(Local_4.f_128))
	{
		Function_279();
		if (SQUAD_IS_VALID(Local_4.f_128))
		{
			Function_278(Local_4.f_128, 0);
			Function_277(Local_4.f_128, 3);
			Function_276(Local_4.f_128, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 116)[02]))
			{
				bLocal_314 = (*&Local_4 + 116)[02];
				Function_325(bLocal_314, (*&Local_4 + 516)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_312, bLocal_314);
				SET_MOST_RECENT_MOUNT(bLocal_312, bLocal_314);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_314, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_128, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_497))
	{
		Function_325(bLocal_497, (*&Local_4 + 516)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_497))
		{
			SET_ACTOR_FACTION(bLocal_497, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_497, false);
			Function_275(bLocal_497, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_497, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_497, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_497, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_497, true);
			DECOR_SET_BOOL(bLocal_497, "Frank", true);
			TASK_STAND_STILL(bLocal_497, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_497, true);
		}
	}
	else if (!iLocal_324[2])
	{
		Function_325(bLocal_497, (*&Local_4 + 516)[4], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_497))
	{
		return 1;
	}
	return 0;
}

void Function_386() //Position: 0x14630 / 83504
{
	if (Function_257(&bLocal_521) <= 1.0f)
	{
		switch (iLocal_494)
		{
			case 0x00000000:
				iLocal_496 = Function_405();
				iLocal_494++;
				break;
			
			case 0x00000001:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_309 > 8)
				{
					Function_387();
				}
				break;
			}
	}
	return;
}

int Function_387() //Position: 0x14684 / 83588
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_259(&bLocal_530))
		{
			Function_391(&bLocal_530);
		}
	}
	else if (!Function_259(&bLocal_530))
	{
		Function_210(&bLocal_530);
	}
	else
	{
		switch (iLocal_496)
		{
			case 0x00000000:
				if (Function_257(&bLocal_530) < 4.0f)
				{
					Function_390();
					iLocal_496++;
				}
				break;
			
			case 0x00000001:
				if (Function_257(&bLocal_530) < 4.0f)
				{
					Function_389();
					iLocal_496++;
				}
				break;
			
			case 0x00000002:
				if (Function_257(&bLocal_530) < 4.0f)
				{
					Function_388();
					iLocal_496++;
				}
				break;
			
			default:
				return 1;
				break;
			}
	}
	return 0;
}

void Function_388() //Position: 0x14720 / 83744
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v3_AA", "Home02_s2_Bak2RanchBant_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v3_AB", "Home02_s2_Bak2RanchBant_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v3_AC1", "Home02_s2_Bak2RanchBant_v3_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v3_AC2", "Home02_s2_Bak2RanchBant_v3_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v3_AD", "Home02_s2_Bak2RanchBant_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v3_AE", "Home02_s2_Bak2RanchBant_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v3_AF", "Home02_s2_Bak2RanchBant_v3_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v3_AG", "Home02_s2_Bak2RanchBant_v3_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v3_AH1", "Home02_s2_Bak2RanchBant_v3_AH1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v3_AH2", "Home02_s2_Bak2RanchBant_v3_AH2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v3_AI", "Home02_s2_Bak2RanchBant_v3_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v3_AJ1", "Home02_s2_Bak2RanchBant_v3_AJ1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v3_AJ2", "Home02_s2_Bak2RanchBant_v3_AJ2", true, 1, 0, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_389() //Position: 0x14AFB / 84731
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v2_AA", "Home02_s2_Bak2RanchBant_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v2_AB", "Home02_s2_Bak2RanchBant_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v2_AC", "Home02_s2_Bak2RanchBant_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v2_AD", "Home02_s2_Bak2RanchBant_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v2_AE1", "Home02_s2_Bak2RanchBant_v2_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v2_AE2", "Home02_s2_Bak2RanchBant_v2_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v2_AF", "Home02_s2_Bak2RanchBant_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v2_AG", "Home02_s2_Bak2RanchBant_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v2_AH1", "Home02_s2_Bak2RanchBant_v2_AH1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v2_AH2", "Home02_s2_Bak2RanchBant_v2_AH2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v2_AH3", "Home02_s2_Bak2RanchBant_v2_AH3", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v2_AI", "Home02_s2_Bak2RanchBant_v2_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v2_AJ", "Home02_s2_Bak2RanchBant_v2_AJ", true, 1, 0, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_390() //Position: 0x14ED4 / 85716
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v1_AA", "Home02_s2_Bak2RanchBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v1_AB", "Home02_s2_Bak2RanchBant_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v1_AC", "Home02_s2_Bak2RanchBant_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v1_AD", "Home02_s2_Bak2RanchBant_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v1_AE", "Home02_s2_Bak2RanchBant_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v1_AF", "Home02_s2_Bak2RanchBant_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v1_AG", "Home02_s2_Bak2RanchBant_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1560", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v1_AH1", "Home02_s2_Bak2RanchBant_v1_AH1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_Bak2RanchBant_v1_AH2", "Home02_s2_Bak2RanchBant_v1_AH2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_Bak2RanchBant_v1_AI", "Home02_s2_Bak2RanchBant_v1_AI", false, 1, 0, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_391(bool bParam0) //Position: 0x151EB / 86507
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_392(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x151FF / 86527
{
	if (Function_257(&bLocal_524) <= 3.0f)
	{
		if (!iLocal_334)
		{
			if (IS_WEAPON_DRAWN(Global_34573))
			{
				if (Function_404(GET_WEAPON_IN_HAND(Global_34573)))
				{
					if (IS_ACTOR_SHOOTING(Global_34573))
					{
						if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
						{
							if (Function_403(RAND_INT_RANGE(4294967291, true)))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_ShootsGunRand", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_LowOnAmmo", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
							}
							Function_210(&bLocal_524);
						}
					}
				}
			}
		}
		Function_397();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_507)
				{
					iLocal_507 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GetsOffHors", "", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_210(&bLocal_524);
				}
				else if (Function_257(&bLocal_318) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_NoGetOnHors", "", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_210(&bLocal_524);
					Function_210(&bLocal_318);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_507)
				{
					iLocal_507 = 0;
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_313))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_313, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_JonThrow4mHorse", "", true, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_210(&bLocal_524);
					}
				}
			}
			if (bParam0)
			{
				if (!iLocal_508)
				{
					if (!iLocal_509)
					{
						if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_564))
						{
							if (VMAG(vLocal_564) >= 1.0f)
							{
								if (!Function_259(&iLocal_485))
								{
									Function_210(&iLocal_485);
								}
								else if (Function_257(&iLocal_485) <= 2.0f)
								{
									iLocal_509 = 1;
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_StopsHors", "", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_210(&bLocal_524);
									Function_391(&iLocal_485);
								}
							}
							else if (Function_259(&iLocal_485))
							{
								Function_391(&iLocal_485);
							}
						}
					}
				}
			}
			if (bParam0)
			{
				if (iLocal_509)
				{
					if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_564))
					{
						if (VMAG(vLocal_564) <= 1.0f)
						{
							iLocal_509 = 0;
						}
					}
				}
			}
			if (bParam0)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_312, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_RidesIntoJakHors", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_210(&bLocal_524);
				}
				if (ACTORS_IN_RANGE(Global_34573, bLocal_497, (1,35f - 0,35f)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_HorseInDog", "", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_210(&bLocal_524);
				}
			}
			if (bParam1)
			{
				if (((!IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_408) && !IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_412)) && !IS_ACTOR_IN_VOLUME(bLocal_312, Local_4.f_408)) && !IS_ACTOR_IN_VOLUME(bLocal_312, Local_4.f_412))
				{
					if (!Function_394(Global_34573, bLocal_312, iParam2))
					{
						if (!iLocal_509)
						{
							if (!iLocal_508)
							{
								if (Function_393(Global_34573, bLocal_312, Local_4.f_984))
								{
									iLocal_508 = 1;
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_2FarBehind", "", true, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_210(&bLocal_524);
								}
								else
								{
									iLocal_508 = 1;
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_2FarAhead", "", true, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_210(&bLocal_524);
								}
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_312, bParam3))
			{
				if (bParam1)
				{
					if (iLocal_508)
					{
						iLocal_508 = 0;
						if (((!IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_408) && !IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_412)) && !IS_ACTOR_IN_VOLUME(bLocal_312, Local_4.f_408)) && !IS_ACTOR_IN_VOLUME(bLocal_312, Local_4.f_412))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_KeepUp", "", true, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						}
						Function_210(&bLocal_524);
					}
				}
			}
		}
	}
}

bool Function_393(bool bParam0, bool bParam1, bool bParam2) //Position: 0x156AF / 87727
{
	var uVar0;
	var uVar3;
	float fVar6;
	var uVar7;
	float fVar8;
	var uVar9;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (IS_OBJECT_VALID(bParam2))
			{
				GET_OBJECT_POSITION(bParam0, &uVar0);
				ESTIMATE_DISTANCE_ALONG_PATH(bParam2, &uVar0, &fVar6, &uVar7);
				GET_OBJECT_POSITION(bParam1, &uVar3);
				ESTIMATE_DISTANCE_ALONG_PATH(bParam2, &uVar3, &fVar8, &uVar9);
				if (fVar6 > fVar8)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_394(bool bParam0, var uParam1, float fParam2) //Position: 0x15707 / 87815
{
	float fVar0;
	
	fVar0 = Function_395(bParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_395(bool bParam0, bool bParam1) //Position: 0x15724 / 87844
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_396(&uVar0, &uVar3);
	return iVar6;
}

var Function_396(var uParam0, bool bParam1) //Position: 0x15743 / 87875
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_397() //Position: 0x15761 / 87905
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_312)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_404(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_402();
						Function_210(&bLocal_524);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_402();
						Function_210(&bLocal_524);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_402();
					Function_210(&bLocal_524);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GunOnJak", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				Function_210(&bLocal_524);
			}
		}
		else if (bVar0 == bLocal_313)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_404(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_401();
						Function_210(&bLocal_524);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GunOnChar", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_210(&bLocal_524);
					}
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GunOnChar", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_210(&bLocal_524);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GunOnChar", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				Function_210(&bLocal_524);
			}
		}
		else if (bVar0 == bLocal_314)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_404(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_400();
						Function_210(&bLocal_524);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GunOnChar", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_210(&bLocal_524);
					}
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GunOnChar", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_210(&bLocal_524);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GunOnChar", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				Function_210(&bLocal_524);
			}
		}
		else if (!IS_ACTOR_ANIMAL(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_404(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_399();
						Function_210(&bLocal_524);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_399();
						Function_210(&bLocal_524);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_399();
					Function_210(&bLocal_524);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_GunOnChar", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				Function_210(&bLocal_524);
			}
		}
		else if (bLocal_308 == 1)
		{
			if (!Function_398(bVar0, Local_4.f_176, 0))
			{
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (IS_WEAPON_DRAWN(Global_34573))
					{
						if (Function_404(GET_WEAPON_IN_HAND(Global_34573)))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_ShootsWrongAnim", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
							Function_210(&bLocal_524);
						}
					}
				}
			}
		}
		else if (bLocal_308 == 2)
		{
			if (!Function_398(bVar0, Local_4.f_232, 0))
			{
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (IS_WEAPON_DRAWN(Global_34573))
					{
						if (Function_404(GET_WEAPON_IN_HAND(Global_34573)))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_312, "Home02_s2_ShootsWrongAnim", "", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
							Function_210(&bLocal_524);
						}
					}
				}
			}
		}
	}
	return;
}

bool Function_398(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15B23 / 88867
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

void Function_399() //Position: 0x15B63 / 88931
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_ShootsOtherChar", "Home02_s2_ShootsOtherChar", false, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_400() //Position: 0x15BBE / 89022
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_ShootsJakHors", "Home02_s2_ShootsJakHors", false, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_401() //Position: 0x15C15 / 89109
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_KilledHisHors", "Home02_s2_KilledHisHors", false, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_402() //Position: 0x15C6C / 89196
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_AssaultsJack", "Home02_s2_AssaultsJack", false, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_403(bool bParam0) //Position: 0x15CC1 / 89281
{
	if (bParam0 > 1)
	{
		return 1;
	}
	return 0;
}

bool Function_404(bool bParam0) //Position: 0x15CD3 / 89299
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

int Function_405() //Position: 0x15D19 / 89369
{
	return Global_34165.f_60;
}

void Function_406() //Position: 0x15D24 / 89380
{
	if (iLocal_309 < 3 && iLocal_309 > 105)
	{
		Function_450();
		Function_440();
		Function_436();
		if (iLocal_309 < 19)
		{
			if (SQUAD_IS_VALID(Local_4.f_232))
			{
				if (Function_435(Local_4.f_232) == 0)
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_229();
					Function_210(&bLocal_315);
					iLocal_309 = 20;
				}
			}
		}
	}
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_332(0);
			SET_ACTOR_HEALTH(bLocal_312, GET_ACTOR_MAX_HEALTH(bLocal_312));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_324[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_328();
				bLocal_310 = Global_30637[1];
				if (!Function_327(bLocal_310))
				{
					Function_326(&Local_252);
				}
				Function_325(Global_34573, (*&Local_4 + 488)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_313))
				{
					TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_313, true);
				}
				if (IS_ACTOR_VALID(bLocal_312))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_312);
					MEMORY_PREFER_RIDING(bLocal_312, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_312);
					TASK_STAND_STILL(bLocal_312, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_312, true);
				}
				Function_210(&bLocal_315);
				iLocal_309 = 1;
			}
			else
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_327(bLocal_310) || bLocal_310 != 4294967295))
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_426())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_494 = 0;
				iLocal_490 = 0;
				iLocal_503 = 1;
				iLocal_505 = 0;
				iLocal_504 = 0;
				iLocal_507 = 0;
				iLocal_508 = 0;
				iLocal_509 = 0;
				fLocal_491 = Function_425(Local_252);
				PRINTINT(fLocal_491);
				PRINTNL();
				if (IS_ACTOR_VALID(bLocal_497))
				{
					SET_ACTOR_HEALTH(bLocal_497, GET_ACTOR_MAX_HEALTH(bLocal_497));
				}
				if (iLocal_324[1] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_313))
						{
							Function_325(bLocal_313, (*&Local_4 + 488)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_313))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_313);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_312))
					{
						if (IS_ACTOR_VALID(bLocal_314))
						{
							Function_325(bLocal_314, (*&Local_4 + 488)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_312) && !IS_ACTOR_MOUNTED(bLocal_314))
							{
								ACTOR_MOUNT_ACTOR(bLocal_312, bLocal_314);
							}
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_176) && SQUAD_IS_VALID(Local_4.f_232))
				{
					Function_422(Local_4.f_176, Local_4.f_860, 2, 1,5f, 1,5f, 1);
					Function_421(Local_4.f_176, Local_4.f_232);
					Function_420(Local_4.f_232, Local_4.f_336, 1, 1);
				}
				SET_CRIPPLE_ENABLE(bLocal_497, 0);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "GROWL");
				PRINTFLOAT(COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bLocal_312));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(bLocal_312, 53));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(bLocal_312, 54));
				PRINTNL();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_312, 13, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_312, 75.0f);
				Function_293(12, 0, 1);
				MEMORY_PREFER_RIDING(bLocal_312, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_312, true);
				AI_RIDING_SET_ATTRIBUTE(bLocal_312, 2, 0,15f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 4294967295);
				CLEAR_ACTOR_MAX_SPEED(bLocal_312);
				CLEAR_ACTOR_MAX_SPEED(bLocal_314);
				iLocal_334 = 0;
				Function_380(&(Local_375[017]), bLocal_312, "Son", 1, 0x5f5e100, 1);
				Function_376(&(Local_375[017]), 1024);
				Function_380(&(Local_375[117]), bLocal_497, "Dog", 0, 0x5f5e100, 1);
				Function_376(&(Local_375[117]), 1024);
				Function_380(&(Local_375[217]), bLocal_499, "Uncle", 0, 0x5f5e100, 1);
				Function_380(&(Local_375[317]), bLocal_498, "Wife", 0, 0x5f5e100, 1);
				Function_375(&(Local_375[417]));
				Function_375(&(Local_375[517]));
				Function_210(&bLocal_315);
				iLocal_309 = 6;
				Function_224(bLocal_308);
				Function_369(StackVal, StackVal, Function_224(bLocal_308), bLocal_308, Global_30637[1], Function_227(bLocal_308), 0);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_334 = 1;
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				if (!IS_OBJECT_VALID(bLocal_567))
				{
					if (IS_ACTOR_VALID(bLocal_497))
					{
						bLocal_567 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_251, "HOME02SON02_CAMERA_FOCUS", bLocal_497, 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_567))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_567, 0);
						}
					}
				}
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_497);
				vLocal_533[03] = { -3.0f, 0.0f, 6.0f };
				TASK_FOLLOW_OBJECT(bLocal_497, Global_34573, &(vLocal_533[03]), 0, 0, 0, 0, 0, 0, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_312, Global_34573, 7.0f, 4);
				if (bLocal_506)
				{
					Function_419();
				}
				else
				{
					Function_418();
				}
				Function_210(&bLocal_315);
				iLocal_309 = 7;
			}
			break;
		
		case 0x00000007:
			Function_317(&uLocal_484, 44, 0, 4294967295, 4294967295);
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				Function_357("home02_son02_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_210(&bLocal_315);
				Function_210(&bLocal_318);
				Function_210(&bLocal_321);
				iLocal_309 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_BLIP_VALID(bLocal_501))
			{
				REMOVE_BLIP(bLocal_501);
			}
			if (SQUAD_IS_VALID(Local_4.f_232))
			{
				Function_417();
				if (iLocal_504)
				{
					if (!Function_415(Local_4.f_232, 1.0f, 200.0f, 1, 1) && !Function_414(Global_34573, Local_4.f_232, 100.0f))
					{
						iLocal_505 = 1;
						iLocal_504 = 0;
						iLocal_503 = 0;
						Function_413(Local_4.f_232);
						Function_229();
						Function_210(&bLocal_315);
						iLocal_309 = 9;
						Function_317(&uLocal_484, 13, 0, 4294967295, 4294967295);
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_BLIP_VALID(bLocal_501))
			{
				if (IS_ACTOR_VALID(bLocal_497))
				{
					bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
					SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
					if (IS_BLIP_VALID(bLocal_501))
					{
					}
				}
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			vLocal_546 = { 3.0f, 0.0f, 1.0f };
			TASK_FOLLOW_OBJECT(bLocal_312, bLocal_497, &vLocal_546, 0, 0, 0, 0, 0, 0, 1);
			Function_210(&bLocal_315);
			iLocal_309 = 10;
			break;
		
		case 0x0000000A:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				iLocal_334 = 0;
				Function_317(&uLocal_484, 13, 0, 4294967295, 4294967295);
				if (iLocal_505)
				{
					if (Function_403(RAND_INT_RANGE(false, true)))
					{
						Function_412();
					}
					else
					{
						Function_411();
					}
				}
				else
				{
					Function_410();
				}
				Function_210(&bLocal_315);
				iLocal_309 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				Function_357("home02_son02_obj06", 7,5f, 1, 2, 0, 0, 0);
				Function_210(&bLocal_315);
				Function_210(&bLocal_318);
				Function_210(&bLocal_321);
				iLocal_309 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_342(&bLocal_321, 100.0f, bLocal_313, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_331, 0, bLocal_251, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_501))
				{
					REMOVE_BLIP(bLocal_501);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_501))
				{
					if (IS_ACTOR_VALID(bLocal_497))
					{
						bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_501))
						{
						}
					}
				}
				Function_408(&bLocal_321, 60.0f, 200.0f, bLocal_497, "Dog_return", "Dog_abandoned", &bLocal_331, 0, 0, 0, 325, 1);
			}
			Function_317(&uLocal_484, 13, 0, 4294967295, 4294967295);
			if (IS_VOLUME_VALID(Local_4.f_388))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_388))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_388);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_392))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_392))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_392);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_396))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_396))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_396);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (Function_259(&bLocal_515))
			{
				if (Function_257(&bLocal_515) < 5.0f)
				{
					Function_391(&bLocal_515);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_497);
				}
			}
			if (!Function_394(bLocal_497, Global_34573, 60.0f))
			{
				if (!GET_TASK_STATUS(bLocal_497, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_497, Global_34573, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_497, 0) != 1)
			{
				bLocal_488 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(Local_4.f_388))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 788)[1], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(Local_4.f_392))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 812)[0], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(Local_4.f_396))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 836)[0], 3.0f, 3, 1, 1);
				}
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 764)[3], 3.0f, 3, 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_497, bLocal_488);
				TASK_SEQUENCE_RELEASE(bLocal_488, 1);
			}
			if ((GET_TASK_STATUS(bLocal_497, 6) != 1 && ACTORS_IN_RANGE(Global_34573, bLocal_497, 20.0f)) || Function_415(Local_4.f_232, 1.0f, 200.0f, 1, 1))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_497);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_497);
				GET_OBJECT_POSITION(Local_4.f_864, &uLocal_543);
				TASK_FACE_COORD(bLocal_497, &uLocal_543, 0);
				if (iLocal_503)
				{
				}
				else
				{
					iLocal_503 = 1;
					bLocal_506 = true;
				}
				if (IS_BLIP_VALID(bLocal_501))
				{
					REMOVE_BLIP(bLocal_501);
				}
				Function_229();
				Function_210(&bLocal_315);
				iLocal_309 = 17;
			}
			break;
		
		case 0x00000011:
			iLocal_503 = 1;
			iLocal_505 = 0;
			iLocal_504 = 0;
			iLocal_334 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Function_317(&uLocal_484, 44, 0, 4294967295, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_312, Global_34573, 7.0f, 4);
			if (ACTOR_HAS_WEAPON(bLocal_312, 41))
			{
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_312, 41, 1);
			}
			if (bLocal_506)
			{
				Function_419();
			}
			else
			{
				Function_418();
			}
			Function_210(&bLocal_315);
			iLocal_309 = 18;
			break;
		
		case 0x00000012:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				Function_357("home02_son02_obj07", 7,5f, 1, 2, 0, 0, 0);
				Function_210(&bLocal_315);
				Function_210(&bLocal_318);
				Function_210(&bLocal_321);
				iLocal_309 = 19;
			}
			break;
		
		case 0x00000013:
			if (IS_BLIP_VALID(bLocal_501))
			{
				REMOVE_BLIP(bLocal_501);
			}
			if (SQUAD_IS_VALID(Local_4.f_232))
			{
				Function_417();
				if (iLocal_504)
				{
					if (!Function_415(Local_4.f_232, 1.0f, 200.0f, 1, 1) && !Function_414(Global_34573, Local_4.f_232, 100.0f))
					{
						iLocal_505 = 1;
						iLocal_504 = 0;
						iLocal_503 = 0;
						Function_413(Local_4.f_232);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229();
						Function_210(&bLocal_315);
						iLocal_309 = 20;
					}
				}
			}
			break;
		
		case 0x00000014:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				iLocal_334 = 0;
				Function_317(&uLocal_484, 13, 0, 4294967295, 4294967295);
				if (SQUAD_IS_VALID(Local_4.f_232))
				{
					if (Function_435(Local_4.f_232) > 1)
					{
						iLocal_502 = 1;
					}
					else
					{
						Function_407();
					}
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_210(&bLocal_315);
				iLocal_309 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_324[2] = 1;
			Function_210(&bLocal_315);
			bLocal_308 = 3;
			iLocal_309 = 0;
			break;
	}
	return;
}

void Function_407() //Position: 0x16810 / 92176
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_AllWolfsDed", "Home02_s2_AllWolfsDed", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_408(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x16863 / 92259
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_409(Global_34573, bParam3, bParam2))
	{
		Function_218(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_409(Global_34573, bParam3, bParam1))
	{
		if (!Function_350(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_357(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_348(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_347(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_347(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_350(2))
	{
		Function_346(2);
		if (!Function_345())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_343();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_205(bParam3);
				Function_294(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_347(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_347(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_409(bool bParam0, bool bParam1, bool bParam2) //Position: 0x169F7 / 92663
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_410() //Position: 0x16B08 / 92936
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_KillWolfs1", "Home02_s2_KillWolfs1", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_411() //Position: 0x16B59 / 93017
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_LoseWolfs3", "Home02_s2_LoseWolfs3", false, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_412() //Position: 0x16BAA / 93098
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_LoseWolfs2", "Home02_s2_LoseWolfs2", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_413(bool bParam0) //Position: 0x16BFB / 93179
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

bool Function_414(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16C48 / 93256
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (SQUAD_IS_VALID(bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (Function_409(bParam0, bVar1, bParam2))
					{
						return 1;
					}
				}
				bVar0++;
			}
		}
	}
	return 0;
}

bool Function_415(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4) //Position: 0x16C9C / 93340
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (Function_416(bVar1, fParam1, fParam2, iParam3, iParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_416(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x16CEE / 93422
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_417() //Position: 0x16D08 / 93448
{
	if (Function_259(&bLocal_524))
	{
		if (Function_257(&bLocal_524) < 3.0f)
		{
			if (Function_257(&bLocal_318) <= RAND_FLOAT_RANGE(8.0f, 13.0f))
			{
				if (Function_403(RAND_INT_RANGE(false, true)))
				{
					if (IS_ACTOR_VALID(bLocal_312))
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_312, 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(Global_34573, "Home02_s2_JonShoutsEncoJak", bLocal_312, 0, 1, 0, 1, 2);
						}
					}
				}
				else if (IS_ACTOR_VALID(bLocal_312))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_312, 36.0f))
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_312, "Home02_s2_JakEncoJon", Global_34573, 0, 1, 0, 1, 2);
					}
				}
				Function_210(&bLocal_318);
			}
		}
	}
	return;
}

void Function_418() //Position: 0x16DD1 / 93649
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_DogFindsWolfs", "Home02_s2_DogFindsWolfs", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_419() //Position: 0x16E28 / 93736
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_JonC1st", "Home02_s2_JonC1st", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_420(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x16E73 / 93811
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_421(bool bParam0, bool bParam1) //Position: 0x16EC2 / 93890
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_IS_VALID(bParam1))
		{
			while (SQUAD_GET_SIZE(bParam0) >= 0)
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, false);
				if (IS_ACTOR_VALID(bVar0))
				{
					SQUAD_LEAVE(bVar0);
					SQUAD_JOIN(bVar0, bParam1);
				}
			}
		}
	}
	return;
}

void Function_422(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x16F06 / 93958
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	struct<5> Var9;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_225(bParam1);
			vVar3 = { StackVal, StackVal, Function_225(bParam1) };
			Function_424(bParam1);
			Var9 = { StackVal, StackVal, Function_424(bParam1) };
			vVar6 = { StackVal, StackVal, vVar3 };
			vVar6.f_4 = (vVar6.y + fParam4);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (iVar1 > iParam2)
					{
						iVar1 = 0;
						vVar6.x = vVar3.x;
						vVar6.f_8 = (vVar6.z + fParam3);
					}
					if (bParam5)
					{
						Var9.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
					}
					Function_423(StackVal, StackVal, StackVal, bVar2, vVar6, 1, 1, 1);
					iVar1++;
					vVar6.x = (vVar6.x + fParam3);
				}
				bVar0++;
			}
		}
	}
}

void Function_423(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x16FBA / 94138
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

vector3 Function_424(bool bParam0) //Position: 0x17073 / 94323
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_425(int iParam0) //Position: 0x1709A / 94362
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_426() //Position: 0x170B4 / 94388
{
	if (!SQUAD_IS_VALID(Local_4.f_128))
	{
		Function_279();
		if (SQUAD_IS_VALID(Local_4.f_128))
		{
			Function_278(Local_4.f_128, 0);
			Function_277(Local_4.f_128, 3);
			Function_276(Local_4.f_128, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 116)[02]))
			{
				bLocal_314 = (*&Local_4 + 116)[02];
				Function_325(bLocal_314, (*&Local_4 + 488)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_312, bLocal_314);
				SET_MOST_RECENT_MOUNT(bLocal_312, bLocal_314);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_314, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_128, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_497))
	{
		Function_325(bLocal_497, (*&Local_4 + 488)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_497))
		{
			SET_ACTOR_FACTION(bLocal_497, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_497, false);
			Function_275(bLocal_497, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_497, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_497, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_497, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_497, true);
			DECOR_SET_BOOL(bLocal_497, "Frank", true);
			TASK_STAND_STILL(bLocal_497, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_497, true);
		}
	}
	else if (!iLocal_324[1])
	{
		Function_325(bLocal_497, (*&Local_4 + 488)[4], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_434();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_278(Local_4.f_176, 0);
			Function_433(Local_4.f_176, 1);
			Function_276(Local_4.f_176, 1, 1, 1);
			Function_432(Local_4.f_176, bLocal_312);
			Function_431(Local_4.f_176, (5 - fLocal_491));
			Function_422(Local_4.f_176, Local_4.f_860, 3, 2.0f, 4.0f, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_336, -1.0f);
			Function_420(Local_4.f_176, Local_4.f_336, 1, 1);
		}
	}
	Function_427();
	if (IS_ACTOR_VALID(bLocal_497))
	{
		return 1;
	}
	return 0;
}

void Function_427() //Position: 0x17271 / 94833
{
	if (!SQUAD_IS_VALID(Local_4.f_232))
	{
		Function_430();
		if (SQUAD_IS_VALID(Local_4.f_232))
		{
			Function_278(Local_4.f_232, 0);
			Function_433(Local_4.f_232, 1);
			Function_429(Local_4.f_232, 1);
			Function_428(Local_4.f_232, 1);
			Function_432(Local_4.f_232, bLocal_312);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_336, -1.0f);
			Function_420(Local_4.f_176, Local_4.f_336, 1, 1);
		}
	}
	return;
}

void Function_428(bool bParam0, int iParam1) //Position: 0x172E2 / 94946
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_CAN_BE_HARDLOCKED(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_429(bool bParam0, bool bParam1) //Position: 0x17323 / 95011
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_CAN_BE_BUMPTARGETED(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_430() //Position: 0x17364 / 95076
{
	Local_4.f_232 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Wolf02"));
	(*&Local_4 + 180)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_02_01", 1068, -916.0f, 185,6859f, 1484f, 0.0f, -62,78378f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 180)[02], Local_4.f_232);
	(*&Local_4 + 180)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_02_02", 1069, -916.0f, 186,2264f, 1492f, 0.0f, -62,78378f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 180)[12], Local_4.f_232);
	(*&Local_4 + 180)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_02_03", 1070, -908,0001f, 185,9454f, 1491,999f, 0.0f, -62,78378f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 180)[22], Local_4.f_232);
	(*&Local_4 + 180)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_02_04", 1068, -908,0001f, 185,5514f, 1488f, 0.0f, -62,78378f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 180)[32], Local_4.f_232);
	(*&Local_4 + 180)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_02_05", 1069, -928,0001f, 185,294f, 1476f, 0.0f, -62,78378f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 180)[42], Local_4.f_232);
	(*&Local_4 + 180)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_02_06", 1070, -924.0f, 185,5075f, 1479,999f, 0.0f, -62,78378f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 180)[52], Local_4.f_232);
	return;
}

void Function_431(bool bParam0, int iParam1) //Position: 0x174FF / 95487
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (iParam1 < 0 && iParam1 > SQUAD_GET_SIZE(bParam0))
		{
			bVar0 = false;
			while (bVar0 < (iParam1 - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					SQUAD_LEAVE(bVar1);
					DESTROY_ACTOR(bVar1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_432(bool bParam0, bool bParam1) //Position: 0x17556 / 95574
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					MEMORY_CONSIDER_AS_ENEMY(bParam1, bVar1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_433(bool bParam0, bool bParam1) //Position: 0x175A2 / 95650
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				ANIMAL_ACTOR_SET_DOMESTICATION(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_434() //Position: 0x175E3 / 95715
{
	Local_4.f_176 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Wolf01"));
	(*&Local_4 + 132)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_01_01", 1068, -656,4052f, 174,6981f, 1664,507f, 0.0f, 124,7566f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 132)[02], Local_4.f_176);
	(*&Local_4 + 132)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_01_02", 1068, -662,8601f, 175,8097f, 1677,138f, 0.0f, 63,31305f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 132)[12], Local_4.f_176);
	(*&Local_4 + 132)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_01_03", 1069, -651,9439f, 174,6981f, 1676,005f, 0.0f, 16,75689f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 132)[22], Local_4.f_176);
	(*&Local_4 + 132)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_01_04", 1069, -655,1514f, 174,6784f, 1668,796f, 0.0f, 85,1131f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 132)[32], Local_4.f_176);
	(*&Local_4 + 132)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WOLF_01_05", 1070, -652,0001f, 174,6981f, 1664f, 0.0f, 159,987f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 132)[42], Local_4.f_176);
	return;
}

int Function_435(bool bParam0) //Position: 0x1773E / 96062
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

void Function_436() //Position: 0x1778E / 96142
{
	if (Function_257(&bLocal_521) <= 1.0f)
	{
		switch (iLocal_494)
		{
			case 0x00000000:
				iLocal_494++;
				break;
			
			case 0x00000001:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_309 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_439();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_494++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_508)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_494++;
					}
				}
				break;
			
			case 0x00000003:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_503)
				{
					iLocal_494++;
				}
				break;
			
			case 0x00000004:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_309 > 12)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_438();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_494++;
						}
					}
				}
				break;
			
			case 0x00000005:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_508)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_494++;
						Function_210(&bLocal_318);
					}
				}
				break;
			
			case 0x00000006:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				Function_437();
				if (iLocal_503)
				{
					iLocal_494++;
				}
				break;
			
			case 0x00000007:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_503)
				{
					iLocal_494++;
				}
				break;
			
			case 0x00000008:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				iLocal_494++;
				break;
		}
		Function_210(&bLocal_521);
	}
	return;
}

void Function_437() //Position: 0x17931 / 96561
{
	if (Function_259(&bLocal_524))
	{
		if (Function_257(&bLocal_524) < 3.0f)
		{
			if (Function_257(&bLocal_318) <= RAND_FLOAT_RANGE(6.0f, 10.0f))
			{
				if (Function_403(RAND_INT_RANGE(false, true)))
				{
					if (IS_ACTOR_VALID(bLocal_312))
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_312, 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(bLocal_312, "Home02_s2_JakSHoutsEncoDog", bLocal_497, 0, 1, 0, 1, 2);
						}
					}
				}
				else if (IS_ACTOR_VALID(bLocal_497))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_497, 36.0f))
					{
						SAY_SINGLE_LINE_SCRIPTED(Global_34573, "Home02_s2_ShoutsEnco2Dog", bLocal_497, 0, 1, 0, 1, 2);
					}
				}
				Function_210(&bLocal_318);
			}
		}
	}
	return;
}

void Function_438() //Position: 0x179FA / 96762
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_NoShootWolfs", "Home02_s2_NoShootWolfs", false, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x17A4F / 96847
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_WolfsAttak", "Home02_s2_WolfsAttak", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_440() //Position: 0x17AA0 / 96928
{
	if (SQUAD_IS_VALID(Local_4.f_232))
	{
		Function_448(Local_4.f_232);
		switch (iLocal_490)
		{
			case 0x00000000:
				iLocal_490++;
				break;
			
			case 0x00000001:
				Function_447(Local_4.f_232);
				Function_445(Local_4.f_232, &Local_4 + 292);
				Function_444(Local_4.f_232, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOALS_CLEAR(Local_4.f_232);
				bLocal_495 = false;
				while (bLocal_495 <= SQUAD_GET_SIZE(Local_4.f_232))
				{
					bLocal_500 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bLocal_495);
					if (IS_ACTOR_ALIVE(bLocal_500))
					{
						ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_500, 25, 99.0f);
					}
					bLocal_495++;
				}
				Function_210(&bLocal_518);
				iLocal_490++;
				break;
			
			case 0x00000002:
				if ((IS_ACTOR_SHOOTING(Global_34573) || IS_ACTOR_SHOOTING(bLocal_312)) || Function_414(Global_34573, Local_4.f_232, 50.0f))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_232);
					Function_443(Local_4.f_232);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, false, 1, 2);
					TASK_KILL_CHAR(false, Global_34573);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, true, 1, 1);
					TASK_KILL_CHAR(false, bLocal_497);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, 2, 1, 1);
					TASK_KILL_CHAR(false, bLocal_312);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, 3, 1, 4294967295);
					TASK_KILL_CHAR(false, Global_34573);
					Function_210(&bLocal_518);
					iLocal_490++;
				}
				break;
			
			case 0x00000003:
				if (!iLocal_503)
				{
					iLocal_490++;
				}
				else if (SQUAD_GET_SIZE(Local_4.f_232) >= ROUND((0,5f * IntToFloat((6 + fLocal_491)))) || !Function_414(Global_34573, Local_4.f_232, 150.0f))
				{
					iLocal_504 = 1;
					SQUAD_GOALS_CLEAR(Local_4.f_232);
					Function_443(Local_4.f_232);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_968, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_972, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_976, 2);
					Function_76(&bLocal_492, Function_441(4));
					Function_76(&bLocal_492, Function_441(0));
					ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(35, bLocal_492, Local_4.f_972, 100.0f, 1065353216, 1065353216, 1082130432, 2);
					Function_210(&bLocal_518);
					iLocal_490++;
				}
				break;
			
			case 0x00000004:
				if (iLocal_505)
				{
					Function_225(Local_4.f_864);
					STREAMING_LOAD_BOUNDS(Function_225(Local_4.f_864), 50.0f, 1);
				}
				Function_210(&bLocal_518);
				iLocal_490++;
				break;
			
			case 0x00000005:
				if (iLocal_505)
				{
					if (SQUAD_IS_VALID(Local_4.f_232))
					{
						Function_422(Local_4.f_232, Local_4.f_864, 2, 1,5f, 1,5f, 1);
						Function_420(Local_4.f_232, Local_4.f_340, 1, 1);
						iLocal_490++;
					}
				}
				break;
			
			case 0x00000006:
				SQUAD_GOALS_CLEAR(Local_4.f_232);
				Function_443(Local_4.f_232);
				Function_447(Local_4.f_232);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_340, -1.0f);
				Function_420(Local_4.f_232, Local_4.f_340, 1, 1);
				iLocal_490++;
				break;
			
			case 0x00000007:
				if (Function_414(Global_34573, Local_4.f_232, (200.0f + 40.0f)))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_232);
					Function_443(Local_4.f_232);
					Function_447(Local_4.f_232);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_340, -1.0f);
					Function_420(Local_4.f_232, Local_4.f_340, 1, 1);
					iLocal_490++;
				}
				break;
			
			case 0x00000008:
				if (iLocal_503)
				{
					iLocal_490++;
				}
				break;
			
			case 0x00000009:
				Function_447(Local_4.f_232);
				Function_445(Local_4.f_232, &Local_4 + 292);
				Function_444(Local_4.f_232, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOALS_CLEAR(Local_4.f_232);
				Function_210(&bLocal_518);
				iLocal_490++;
				break;
			
			case 0x0000000A:
				if ((IS_ACTOR_SHOOTING(Global_34573) || IS_ACTOR_SHOOTING(bLocal_312)) || Function_414(Global_34573, Local_4.f_232, 50.0f))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_232);
					Function_443(Local_4.f_232);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, false, 1, 2);
					TASK_KILL_CHAR(false, Global_34573);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, true, 1, 1);
					TASK_KILL_CHAR(false, bLocal_497);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, 2, 1, 1);
					TASK_KILL_CHAR(false, bLocal_312);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, 3, 1, 4294967295);
					TASK_KILL_CHAR(false, Global_34573);
					Function_210(&bLocal_518);
					iLocal_490++;
				}
				break;
			
			case 0x0000000B:
				if (!iLocal_503)
				{
					iLocal_490++;
				}
				else if (SQUAD_GET_SIZE(Local_4.f_232) >= ROUND((0,5f * IntToFloat((6 + fLocal_491)))) || !Function_414(Global_34573, Local_4.f_232, 150.0f))
				{
					iLocal_504 = 1;
					SQUAD_GOALS_CLEAR(Local_4.f_232);
					Function_443(Local_4.f_232);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_968, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_972, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_976, 2);
					Function_76(&bLocal_492, Function_441(4));
					Function_76(&bLocal_492, Function_441(0));
					ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(35, bLocal_492, Local_4.f_976, 100.0f, 1065353216, 1065353216, 1082130432, 2);
					Function_210(&bLocal_518);
					iLocal_490++;
				}
				break;
			
			case 0x0000000C:
				if (iLocal_505)
				{
					Function_225(Local_4.f_868);
					STREAMING_LOAD_BOUNDS(Function_225(Local_4.f_868), 50.0f, 1);
				}
				Function_210(&bLocal_518);
				iLocal_490++;
				break;
			
			case 0x0000000D:
				if (iLocal_505)
				{
					if (SQUAD_IS_VALID(Local_4.f_232))
					{
						Function_422(Local_4.f_232, Local_4.f_868, 2, 1,5f, 1,5f, 1);
						Function_420(Local_4.f_232, Local_4.f_344, 1, 1);
						iLocal_490++;
					}
				}
				break;
			
			case 0x0000000E:
				iLocal_490++;
				break;
			}
	}
	return;
}

bool Function_441(int iParam0) //Position: 0x17FF5 / 98293
{
	return Function_442(2, iParam0);
}

int Function_442(int iParam0, int iParam1) //Position: 0x18001 / 98305
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 1;
	while (iVar1 < iParam1)
	{
		iVar0 = (iVar0 * iParam0);
		iVar1++;
	}
	return iVar0;
}

void Function_443(bool bParam0) //Position: 0x1802E / 98350
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_444(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x18060 / 98400
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_445(bool bParam0, int iParam1) //Position: 0x1814A / 98634
{
	int iVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < (*iParam1 - 1))
		{
			if (IS_VOLUME_VALID((*iParam1)[iVar0]))
			{
				Function_446(bParam0, (*iParam1)[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

int Function_446(bool bParam0, bool bParam1) //Position: 0x1818C / 98700
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_447(bool bParam0) //Position: 0x181E1 / 98785
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_448(bool bParam0) //Position: 0x18228 / 98856
{
	if (SQUAD_IS_VALID(bParam0))
	{
		if (!Function_259(&iLocal_527))
		{
			Function_210(&iLocal_527);
		}
		else if (Function_257(&iLocal_527) < 0,5f)
		{
			bLocal_495 = false;
			while (bLocal_495 <= SQUAD_GET_SIZE(bParam0))
			{
				bLocal_500 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_495);
				if (IS_ACTOR_ALIVE(bLocal_500))
				{
					if (!IS_ACTOR_ON_GROUND(bLocal_500))
					{
						Function_449(bLocal_500, &vLocal_555);
						if (FIND_GROUND_INTERSECTION(&vLocal_555, 100.0f, &uLocal_558, &uLocal_561))
						{
							if (!WOULD_ACTOR_BE_VISIBLE(1068, &uLocal_558, 3212836864))
							{
								TELEPORT_ACTOR(bLocal_500, &uLocal_558, 0, 1, 1);
								SCRIPT_BREAKPOINT("Teleported wolf to ground.");
							}
						}
					}
				}
				bLocal_495++;
			}
			Function_210(&iLocal_527);
		}
	}
	return;
}

void Function_449(bool bParam0, bool bParam1) //Position: 0x182F1 / 99057
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_450() //Position: 0x182FE / 99070
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (!Function_259(&iLocal_573))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACKER(GET_MOUNT(Global_34573))))
			{
				CLEAR_LAST_HIT(GET_MOUNT(Global_34573));
				Function_210(&iLocal_573);
				iLocal_572 = 1;
			}
		}
		else if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(GET_MOUNT(Global_34573))))
		{
			if (Function_257(&iLocal_573) < 20.0f)
			{
				iLocal_572 = (iLocal_572 - 1);
				if (iLocal_572 >= 0)
				{
					Function_210(&iLocal_573);
				}
				else
				{
					Function_391(&iLocal_573);
				}
			}
		}
		else
		{
			iLocal_572++;
			CLEAR_LAST_HIT(GET_MOUNT(Global_34573));
			if (iLocal_572 <= 2)
			{
				Function_210(&iLocal_573);
			}
			else
			{
				Function_391(&iLocal_573);
				TASK_FLEE_ACTOR(GET_MOUNT(Global_34573), Global_34573, 20.0f, 3.0f, 0, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
		}
	}
	return;
}

void Function_451() //Position: 0x18406 / 99334
{
	Function_470(bLocal_251);
	if (iLocal_309 < 3 && iLocal_309 > 105)
	{
		Function_450();
		Function_468();
		Function_466();
		Function_457();
		if (iLocal_309 < 13)
		{
			if (SQUAD_IS_VALID(Local_4.f_176))
			{
				if (Function_435(Local_4.f_176) == 0)
				{
					iLocal_503 = 0;
					bLocal_506 = false;
					iLocal_504 = 0;
					iLocal_505 = 0;
					Function_229();
					Function_210(&bLocal_315);
					iLocal_309 = 14;
				}
			}
			if (SQUAD_IS_VALID(Local_4.f_232))
			{
				if (Function_415(Local_4.f_232, 1.0f, 200.0f, 1, 1))
				{
					iLocal_503 = 1;
					bLocal_506 = true;
					if (IS_BLIP_VALID(bLocal_501))
					{
						REMOVE_BLIP(bLocal_501);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_229();
					Function_210(&bLocal_315);
					iLocal_309 = 106;
				}
			}
		}
		else if (iLocal_503)
		{
			if (IS_BLIP_VALID(bLocal_501))
			{
				REMOVE_BLIP(bLocal_501);
			}
			ABORT_SCRIPTED_CONVERSATION(1);
			Function_229();
			Function_210(&bLocal_315);
			iLocal_309 = 106;
		}
		else if (SQUAD_IS_VALID(Local_4.f_232))
		{
			if (Function_415(Local_4.f_176, 1.0f, 200.0f, 1, 1) || Function_415(Local_4.f_232, 1.0f, 200.0f, 1, 1))
			{
				iLocal_503 = 1;
				bLocal_506 = true;
				if (IS_BLIP_VALID(bLocal_501))
				{
					REMOVE_BLIP(bLocal_501);
				}
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_229();
				Function_210(&bLocal_315);
				iLocal_309 = 106;
			}
		}
	}
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_332(0);
			SET_ACTOR_HEALTH(bLocal_312, GET_ACTOR_MAX_HEALTH(bLocal_312));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_324[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_328();
				bLocal_310 = Global_30637[1];
				if (!Function_327(bLocal_310))
				{
					Function_326(&Local_252);
				}
				Function_325(Global_34573, (*&Local_4 + 460)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_313))
				{
					TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_313, true);
				}
				if (IS_ACTOR_VALID(bLocal_312))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_312);
					MEMORY_PREFER_RIDING(bLocal_312, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_312);
					TASK_STAND_STILL(bLocal_312, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_312, true);
				}
				Function_210(&bLocal_315);
				iLocal_309 = 1;
			}
			else
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_327(bLocal_310) || bLocal_310 != 4294967295))
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_455())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_494 = 0;
				iLocal_489 = 0;
				iLocal_490 = 0;
				iLocal_503 = 0;
				iLocal_505 = 0;
				iLocal_504 = 0;
				bLocal_506 = false;
				iLocal_507 = 0;
				iLocal_508 = 0;
				iLocal_509 = 0;
				fLocal_491 = 5;
				Function_209(Local_252, 5);
				if (IS_ACTOR_VALID(bLocal_497))
				{
					SET_ACTOR_HEALTH(bLocal_497, GET_ACTOR_MAX_HEALTH(bLocal_497));
				}
				if (iLocal_324[0] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_313))
						{
							Function_325(bLocal_313, (*&Local_4 + 460)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_313))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_313);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_312))
					{
						if (IS_ACTOR_VALID(bLocal_314))
						{
							Function_325(bLocal_314, (*&Local_4 + 460)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_312) && !IS_ACTOR_MOUNTED(bLocal_314))
							{
								ACTOR_MOUNT_ACTOR(bLocal_312, bLocal_314);
							}
						}
					}
				}
				PRINTFLOAT(COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bLocal_312));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(bLocal_312, 53));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(bLocal_312, 54));
				PRINTNL();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_312, 13, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_312, 35.0f);
				Function_293(12, 0, 1);
				MEMORY_PREFER_RIDING(bLocal_312, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_312, true);
				AI_RIDING_SET_ATTRIBUTE(bLocal_312, 2, 0,15f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 4294967295);
				CLEAR_ACTOR_MAX_SPEED(bLocal_312);
				CLEAR_ACTOR_MAX_SPEED(bLocal_314);
				iLocal_334 = 0;
				Function_380(&(Local_375[017]), bLocal_312, "Son", 1, 0x5f5e100, 1);
				Function_376(&(Local_375[017]), 1024);
				Function_380(&(Local_375[117]), bLocal_497, "Dog", 0, 0x5f5e100, 1);
				Function_376(&(Local_375[117]), 1024);
				Function_380(&(Local_375[217]), bLocal_499, "Uncle", 0, 0x5f5e100, 1);
				Function_380(&(Local_375[317]), bLocal_498, "Wife", 0, 0x5f5e100, 1);
				Function_375(&(Local_375[417]));
				Function_375(&(Local_375[517]));
				Function_210(&bLocal_315);
				iLocal_309 = 6;
				Function_224(bLocal_308);
				Function_369(StackVal, StackVal, Function_224(bLocal_308), bLocal_308, Global_30637[1], Function_227(bLocal_308), 0);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_567))
				{
					if (IS_ACTOR_VALID(bLocal_497))
					{
						bLocal_567 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_251, "HOME02SON02_CAMERA_FOCUS", bLocal_497, 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_567))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_567, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_501))
				{
					if (IS_ACTOR_VALID(bLocal_497))
					{
						bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_501))
						{
						}
					}
				}
				vLocal_546 = { 3.0f, 0.0f, 1.0f };
				TASK_FOLLOW_OBJECT(bLocal_312, bLocal_497, &vLocal_546, 0, 0, 0, 0, 0, 0, 1);
				Function_317(&uLocal_484, 12, 0, 4294967295, 4294967295);
				Function_454();
				Function_210(&bLocal_315);
				iLocal_309 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				if (iLocal_324[0] == 0)
				{
					Function_357("home02_son02_obj02", 7,5f, 1, 2, 0, 0, 0);
				}
				Function_317(&uLocal_484, 12, 0, 4294967295, 4294967295);
				Function_210(&bLocal_315);
				Function_210(&bLocal_318);
				Function_210(&bLocal_321);
				iLocal_309 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_342(&bLocal_321, 100.0f, bLocal_313, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_331, 0, bLocal_251, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_501))
				{
					REMOVE_BLIP(bLocal_501);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_501))
				{
					if (IS_ACTOR_VALID(bLocal_497))
					{
						bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_501))
						{
						}
					}
				}
				Function_408(&bLocal_321, 60.0f, 200.0f, bLocal_497, "Dog_return", "Dog_abandoned", &bLocal_331, 0, 0, 0, 325, 1);
			}
			if (IS_VOLUME_VALID(Local_4.f_368))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_368))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_368);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_372))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_372))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_372);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (Function_259(&bLocal_515))
			{
				if (Function_257(&bLocal_515) < 5.0f)
				{
					Function_391(&bLocal_515);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_497);
				}
			}
			if (!Function_394(bLocal_497, Global_34573, 60.0f))
			{
				if (!GET_TASK_STATUS(bLocal_497, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_497, Global_34573, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_497, 0) != 1)
			{
				bLocal_488 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(Local_4.f_368))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 668)[1], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(Local_4.f_372))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 692)[0], 3.0f, 3, 1, 1);
				}
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 692)[3], 3.0f, 3, 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_497, bLocal_488);
				TASK_SEQUENCE_RELEASE(bLocal_488, 1);
			}
			if ((GET_TASK_STATUS(bLocal_497, 6) != 1 && ACTORS_IN_RANGE(Global_34573, bLocal_497, 20.0f)) || Function_415(Local_4.f_176, 1.0f, 200.0f, 1, 1))
			{
				TASK_CLEAR(bLocal_497);
				GET_OBJECT_POSITION(Local_4.f_856, &uLocal_543);
				TASK_FACE_COORD(bLocal_497, &uLocal_543, 0);
				iLocal_503 = 1;
				Function_229();
				Function_210(&bLocal_315);
				iLocal_309 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_317(&uLocal_484, 8, 0, 4294967295, 4294967295);
			iLocal_334 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (bLocal_506)
			{
				Function_419();
			}
			else
			{
				Function_418();
			}
			Function_444(Local_4.f_176, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_210(&bLocal_315);
			iLocal_309 = 12;
			break;
		
		case 0x0000000C:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_497);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_497);
				vLocal_533[03] = { -3.0f, 0.0f, 6.0f };
				TASK_FOLLOW_OBJECT(bLocal_497, Global_34573, &(vLocal_533[03]), 0, 0, 0, 0, 0, 0, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_312, Global_34573, 7.0f, 4);
				if (ACTOR_HAS_WEAPON(bLocal_312, 41))
				{
					ACTOR_PUT_WEAPON_IN_HAND(bLocal_312, 41, 1);
				}
				Function_357("home02_son02_obj03", 7,5f, 1, 2, 0, 0, 0);
				Function_210(&bLocal_315);
				Function_210(&bLocal_318);
				Function_210(&bLocal_321);
				iLocal_309 = 13;
			}
			break;
		
		case 0x0000000D:
			if (IS_BLIP_VALID(bLocal_501))
			{
				REMOVE_BLIP(bLocal_501);
			}
			if (SQUAD_IS_VALID(Local_4.f_176))
			{
				Function_417();
				if (iLocal_504)
				{
					if (!Function_415(Local_4.f_176, 1.0f, 200.0f, 1, 1) && !Function_414(Global_34573, Local_4.f_176, 100.0f))
					{
						iLocal_505 = 1;
						iLocal_504 = 0;
						iLocal_503 = 0;
						Function_413(Local_4.f_176);
						Function_229();
						Function_210(&bLocal_315);
						Function_422(Local_4.f_176, Local_4.f_860, 2, 1,5f, 1,5f, 1);
						SQUAD_GOALS_CLEAR(Local_4.f_176);
						Function_443(Local_4.f_176);
						Function_447(Local_4.f_176);
						SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
						TASK_WANDER_IN_VOLUME(false, Local_4.f_336, -1.0f);
						Function_420(Local_4.f_176, Local_4.f_336, 1, 1);
						iLocal_309 = 14;
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (!IS_BLIP_VALID(bLocal_501))
			{
				if (IS_ACTOR_VALID(bLocal_497))
				{
					bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
					SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
					if (IS_BLIP_VALID(bLocal_501))
					{
					}
				}
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_317(&uLocal_484, 14, 0, 4294967295, 4294967295);
			Function_210(&bLocal_315);
			iLocal_309 = 15;
			break;
		
		case 0x0000000F:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				Function_427();
				iLocal_334 = 0;
				iLocal_503 = 0;
				Function_317(&uLocal_484, 14, 0, 4294967295, 4294967295);
				if (iLocal_505)
				{
					if (Function_403(RAND_INT_RANGE(false, true)))
					{
						Function_453();
					}
					else
					{
						Function_452();
					}
				}
				else
				{
					Function_410();
				}
				Function_210(&bLocal_315);
				iLocal_309 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				Function_357("home02_son02_obj04", 7,5f, 1, 2, 0, 0, 0);
				Function_210(&bLocal_315);
				Function_210(&bLocal_318);
				Function_210(&bLocal_321);
				iLocal_309 = 17;
			}
			break;
		
		case 0x00000011:
			if (Function_342(&bLocal_321, 100.0f, bLocal_313, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_331, 0, bLocal_251, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_501))
				{
					REMOVE_BLIP(bLocal_501);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_501))
				{
					if (IS_ACTOR_VALID(bLocal_497))
					{
						bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_501))
						{
						}
					}
				}
				Function_408(&bLocal_321, 60.0f, 200.0f, bLocal_497, "Dog_return", "Dog_abandoned", &bLocal_331, 0, 0, 0, 325, 1);
			}
			if (IS_VOLUME_VALID(Local_4.f_376))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_376))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_376);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_380))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_380))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_380);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_384))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_384))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_384);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (Function_259(&bLocal_515))
			{
				if (Function_257(&bLocal_515) < 5.0f)
				{
					Function_391(&bLocal_515);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_497);
				}
			}
			if (!Function_394(bLocal_497, Global_34573, 60.0f))
			{
				if (!GET_TASK_STATUS(bLocal_497, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_497, Global_34573, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_497, 0) != 1)
			{
				bLocal_488 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(Local_4.f_376))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 716)[1], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(Local_4.f_380))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 740)[0], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(Local_4.f_384))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 764)[0], 3.0f, 3, 1, 1);
				}
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 764)[3], 3.0f, 3, 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_497, bLocal_488);
				TASK_SEQUENCE_RELEASE(bLocal_488, 1);
			}
			if (((GET_TASK_STATUS(bLocal_497, 6) != 1 && ACTORS_IN_RANGE(Global_34573, bLocal_497, 20.0f)) || Function_415(Local_4.f_176, 1.0f, 200.0f, 1, 1)) || Function_415(Local_4.f_232, 1.0f, 200.0f, 1, 1))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_497);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_497);
				GET_OBJECT_POSITION(Local_4.f_860, &uLocal_543);
				TASK_FACE_COORD(bLocal_497, &uLocal_543, 0);
				Function_229();
				Function_210(&bLocal_315);
				iLocal_309 = 106;
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_4.f_176))
			{
				fLocal_491 = SQUAD_GET_SIZE(Local_4.f_176);
				Function_209(Local_252, fLocal_491);
			}
			PRINTINT(fLocal_491);
			PRINTNL();
			iLocal_324[1] = 1;
			Function_210(&bLocal_315);
			bLocal_308 = 2;
			iLocal_309 = 0;
			break;
	}
	return;
}

void Function_452() //Position: 0x191C6 / 102854
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_LoseWolfsJak", "Home02_s2_LoseWolfsJak", false, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_453() //Position: 0x1921B / 102939
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_LoseWolfs", "Home02_s2_LoseWolfs", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_454() //Position: 0x1926A / 103018
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_DogPiksUpScent", "Home02_s2_DogPiksUpScent", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_455() //Position: 0x192C3 / 103107
{
	if (!SQUAD_IS_VALID(Local_4.f_128))
	{
		Function_279();
		if (SQUAD_IS_VALID(Local_4.f_128))
		{
			Function_278(Local_4.f_128, 0);
			Function_277(Local_4.f_128, 3);
			Function_276(Local_4.f_128, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 116)[02]))
			{
				bLocal_314 = (*&Local_4 + 116)[02];
				Function_325(bLocal_314, (*&Local_4 + 460)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_312, bLocal_314);
				SET_MOST_RECENT_MOUNT(bLocal_312, bLocal_314);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_314, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_128, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_497))
	{
		Function_325(bLocal_497, (*&Local_4 + 460)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_497))
		{
			SET_ACTOR_FACTION(bLocal_497, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_497, false);
			Function_275(bLocal_497, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_497, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_497, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_497, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_497, true);
			DECOR_SET_BOOL(bLocal_497, "Frank", true);
			TASK_STAND_STILL(bLocal_497, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_497, true);
		}
	}
	else if (!iLocal_324[0])
	{
		Function_325(bLocal_497, (*&Local_4 + 460)[4], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_434();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_278(Local_4.f_176, 0);
			Function_433(Local_4.f_176, 1);
			Function_276(Local_4.f_176, 1, 1, 1);
			Function_432(Local_4.f_176, bLocal_312);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_332, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_264))
	{
		Function_456();
		if (SQUAD_IS_VALID(Local_4.f_264))
		{
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (IS_ACTOR_VALID(bLocal_497))
	{
		return 1;
	}
	return 0;
}

void Function_456() //Position: 0x19486 / 103558
{
	Local_4.f_264 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nChicken01"));
	(*&Local_4 + 236)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CHICKEN_01_01", 1015, -658,7735f, 174,7578f, 1667,268f, 0.0f, 124,7566f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 236)[02], Local_4.f_264);
	(*&Local_4 + 236)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CHICKEN_01_02", 1016, -654,9674f, 174,6981f, 1672,044f, 0.0f, 63,31305f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 236)[12], Local_4.f_264);
	(*&Local_4 + 236)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CHICKEN_01_03", 1017, -651,998f, 174,6981f, 1671,053f, 0.0f, 162,8606f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 236)[22], Local_4.f_264);
	return;
}

void Function_457() //Position: 0x19571 / 103793
{
	if (Function_257(&bLocal_521) <= 1.0f)
	{
		switch (iLocal_494)
		{
			case 0x00000000:
				if (iLocal_324[0] == 0)
				{
					iLocal_496 = Function_405();
				}
				iLocal_494++;
				break;
			
			case 0x00000001:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_309 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_465();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_494++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_508)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_494++;
						Function_210(&bLocal_318);
					}
				}
				break;
			
			case 0x00000003:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (Function_460())
				{
					Function_437();
				}
				if (iLocal_503)
				{
					iLocal_494 = 12;
				}
				break;
			
			case 0x0000000C:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_309 > 13)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_459();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_494++;
						}
					}
				}
				break;
			
			case 0x0000000D:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_508)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_494++;
					}
				}
				break;
			
			case 0x0000000E:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_503)
				{
					iLocal_494++;
				}
				break;
			
			case 0x0000000F:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_309 > 17)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_458();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_494++;
						}
					}
				}
				break;
			
			case 0x00000010:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_508)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_494++;
						Function_210(&bLocal_318);
					}
				}
				break;
			
			case 0x00000011:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				Function_437();
				break;
			
			case 0x00000012:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				iLocal_494++;
				break;
		}
		Function_210(&bLocal_521);
	}
	return;
}

void Function_458() //Position: 0x1978C / 104332
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_BetweenWolfBant_v1_AA", "Home02_s2_BetweenWolfBant_v1_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_BetweenWolfBant_v1_AB", "Home02_s2_BetweenWolfBant_v1_AB", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_BetweenWolfBant_v1_AC", "Home02_s2_BetweenWolfBant_v1_AC", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_BetweenWolfBant_v1_AD", "Home02_s2_BetweenWolfBant_v1_AD", true, 2, 0, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_459() //Position: 0x198DA / 104666
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_MightAttak", "Home02_s2_MightAttak", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_460() //Position: 0x1992B / 104747
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_259(&bLocal_530))
		{
			Function_391(&bLocal_530);
		}
	}
	else if (!Function_259(&bLocal_530))
	{
		Function_210(&bLocal_530);
	}
	else
	{
		switch (iLocal_496)
		{
			case 0x00000000:
				if (Function_257(&bLocal_530) < 4.0f)
				{
					Function_464();
					iLocal_496++;
				}
				break;
			
			case 0x00000001:
				if (Function_257(&bLocal_530) < 4.0f)
				{
					Function_463();
					iLocal_496++;
				}
				break;
			
			case 0x00000002:
				if (Function_257(&bLocal_530) < 4.0f)
				{
					Function_462();
					iLocal_496++;
				}
				break;
			
			case 0x00000003:
				if (Function_257(&bLocal_530) < 4.0f)
				{
					Function_461();
					iLocal_496++;
				}
				break;
			
			default:
				return 1;
				break;
			}
	}
	return 0;
}

void Function_461() //Position: 0x199E6 / 104934
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v4_AA", "Home02_s2_SerchWolfBant_v4_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v4_AB", "Home02_s2_SerchWolfBant_v4_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v4_AC", "Home02_s2_SerchWolfBant_v4_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v4_AD", "Home02_s2_SerchWolfBant_v4_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v4_AE", "Home02_s2_SerchWolfBant_v4_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v4_AF1", "Home02_s2_SerchWolfBant_v4_AF1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v4_AF2", "Home02_s2_SerchWolfBant_v4_AF2", true, 1, 0, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462() //Position: 0x19C03 / 105475
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v3_AA", "Home02_s2_SerchWolfBant_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v3_AB", "Home02_s2_SerchWolfBant_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v3_AC", "Home02_s2_SerchWolfBant_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v3_AD", "Home02_s2_SerchWolfBant_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v3_AE", "Home02_s2_SerchWolfBant_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v3_AF", "Home02_s2_SerchWolfBant_v3_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v3_AG", "Home02_s2_SerchWolfBant_v3_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v3_AH1", "Home02_s2_SerchWolfBant_v3_AH1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v3_AH2", "Home02_s2_SerchWolfBant_v3_AH2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v3_AI", "Home02_s2_SerchWolfBant_v3_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v3_AJ", "Home02_s2_SerchWolfBant_v3_AJ", true, 1, 0, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_463() //Position: 0x19F44 / 106308
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v2_AA", "Home02_s2_SerchWolfBant_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v2_AB", "Home02_s2_SerchWolfBant_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v2_AC1", "Home02_s2_SerchWolfBant_v2_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v2_AC2", "Home02_s2_SerchWolfBant_v2_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v2_AD", "Home02_s2_SerchWolfBant_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v2_AE", "Home02_s2_SerchWolfBant_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v2_AF", "Home02_s2_SerchWolfBant_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v2_AG", "Home02_s2_SerchWolfBant_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v2_AH", "Home02_s2_SerchWolfBant_v2_AH", true, 1, 0, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_464() //Position: 0x1A1F3 / 106995
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v1_AA", "Home02_s2_SerchWolfBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v1_AB", "Home02_s2_SerchWolfBant_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v1_AC1", "Home02_s2_SerchWolfBant_v1_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v1_AC2", "Home02_s2_SerchWolfBant_v1_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v1_AD", "Home02_s2_SerchWolfBant_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v1_AE1", "Home02_s2_SerchWolfBant_v1_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v1_AE2", "Home02_s2_SerchWolfBant_v1_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v1_AF", "Home02_s2_SerchWolfBant_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s2_SerchWolfBant_v1_AG", "Home02_s2_SerchWolfBant_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SerchWolfBant_v1_AH", "Home02_s2_SerchWolfBant_v1_AH", true, 1, 0, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465() //Position: 0x1A4EF / 107759
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_FollowMe", "Home02_s2_FollowMe", true, 2, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x1A53C / 107836
{
	if (SQUAD_IS_VALID(Local_4.f_232))
	{
		Function_448(Local_4.f_232);
		switch (iLocal_490)
		{
			case 0x00000000:
				iLocal_490++;
				break;
			
			case 0x00000001:
				if (Function_467(Global_34573, Local_4.f_860, (200.0f + 70.0f)))
				{
					iLocal_490++;
				}
				break;
			
			case 0x00000002:
				Function_427();
				iLocal_490++;
				break;
			
			case 0x00000003:
				if (Function_414(Global_34573, Local_4.f_232, (200.0f + 40.0f)))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_232);
					Function_443(Local_4.f_232);
					Function_447(Local_4.f_232);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_232, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_336, -1.0f);
					Function_420(Local_4.f_232, Local_4.f_336, 1, 1);
					iLocal_490++;
				}
				break;
			
			case 0x00000004:
				iLocal_490++;
				break;
			}
	}
	return;
}

bool Function_467(bool bParam0, bool bParam1, float fParam2) //Position: 0x1A61C / 108060
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_355(bParam0);
			Function_362(bParam1);
			if (VDIST(Function_355(bParam0), Function_362(bParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_468() //Position: 0x1A736 / 108342
{
	if (SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_448(Local_4.f_176);
		switch (iLocal_489)
		{
			case 0x00000000:
				iLocal_489++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_176);
				Function_443(Local_4.f_176);
				Function_447(Local_4.f_176);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_332, -1.0f);
				Function_420(Local_4.f_176, Local_4.f_332, 1, 1);
				iLocal_489++;
				break;
			
			case 0x00000002:
				if (Function_414(Global_34573, Local_4.f_176, (200.0f + 40.0f)))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_176);
					Function_443(Local_4.f_176);
					Function_447(Local_4.f_176);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_332, -1.0f);
					Function_420(Local_4.f_176, Local_4.f_332, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 132)[02]))
					{
						if (IS_ACTOR_VALID((*&Local_4 + 132)[02]))
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_952)))
							{
								TASK_USE_GRINGO((*&Local_4 + 132)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_952), "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET((*&Local_4 + 132)[02], 2);
							}
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 132)[12]))
					{
						if (IS_ACTOR_VALID((*&Local_4 + 132)[12]))
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_956)))
							{
								TASK_USE_GRINGO((*&Local_4 + 132)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_956), "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET((*&Local_4 + 132)[12], 2);
							}
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 132)[22]))
					{
						if (IS_ACTOR_VALID((*&Local_4 + 132)[22]))
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_960)))
							{
								TASK_USE_GRINGO((*&Local_4 + 132)[22], GET_GRINGO_FROM_OBJECT(Local_4.f_960), "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET((*&Local_4 + 132)[22], 2);
							}
						}
					}
					if (SQUAD_IS_VALID(Local_4.f_264))
					{
						Function_469(&Local_4 + 264);
					}
					iLocal_489++;
				}
				break;
			
			case 0x00000003:
				if (iLocal_503)
				{
					iLocal_489++;
				}
				break;
			
			case 0x00000004:
				Function_447(Local_4.f_176);
				Function_445(Local_4.f_176, &Local_4 + 292);
				Function_444(Local_4.f_176, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_210(&bLocal_518);
				iLocal_489++;
				break;
			
			case 0x00000005:
				if ((IS_ACTOR_SHOOTING(Global_34573) || IS_ACTOR_SHOOTING(bLocal_312)) || Function_414(Global_34573, Local_4.f_176, 50.0f))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_176);
					Function_443(Local_4.f_176);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 2);
					TASK_KILL_CHAR(false, Global_34573);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, true, 1, 1);
					TASK_KILL_CHAR(false, bLocal_497);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, 2, 1, 1);
					TASK_KILL_CHAR(false, bLocal_312);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, 3, 1, 4294967295);
					TASK_KILL_CHAR(false, Global_34573);
					Function_317(&uLocal_484, 40, 0, 4294967295, 4294967295);
					Function_210(&bLocal_518);
					iLocal_489++;
				}
				break;
			
			case 0x00000006:
				if (!iLocal_503)
				{
					iLocal_489++;
				}
				else if (SQUAD_GET_SIZE(Local_4.f_176) >= ROUND((0,5f * IntToFloat(fLocal_491))) || !Function_414(Global_34573, Local_4.f_176, 150.0f))
				{
					iLocal_504 = 1;
					SQUAD_GOALS_CLEAR(Local_4.f_176);
					Function_443(Local_4.f_176);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_968, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_972, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, Local_4.f_976, 2);
					Function_76(&bLocal_492, Function_441(4));
					Function_76(&bLocal_492, Function_441(0));
					ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(35, bLocal_492, Local_4.f_968, 100.0f, 1065353216, 1065353216, 1082130432, 2);
					Function_210(&bLocal_518);
					iLocal_489++;
				}
				break;
			
			case 0x00000007:
				if (iLocal_505)
				{
					Function_225(Local_4.f_860);
					STREAMING_LOAD_BOUNDS(Function_225(Local_4.f_860), 50.0f, 1);
				}
				Function_210(&bLocal_518);
				iLocal_489++;
				break;
			
			case 0x00000008:
				if (iLocal_505)
				{
					if (SQUAD_IS_VALID(Local_4.f_176))
					{
						Function_422(Local_4.f_176, Local_4.f_860, 2, 1,5f, 1,5f, 1);
						Function_427();
						SQUAD_GOALS_CLEAR(Local_4.f_176);
						Function_443(Local_4.f_176);
						Function_447(Local_4.f_176);
						SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
						TASK_WANDER_IN_VOLUME(false, Local_4.f_336, -1.0f);
						Function_420(Local_4.f_176, Local_4.f_336, 1, 1);
						iLocal_489++;
					}
				}
				break;
			
			case 0x00000009:
				iLocal_489++;
				break;
			}
	}
	return;
}

void Function_469(int iParam0) //Position: 0x1AB7A / 109434
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_470(bool bParam0) //Position: 0x1ABC9 / 109513
{
	bool bVar0;
	bool bVar1;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		if (IS_ITERATOR_VALID(bVar0))
		{
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				while (IS_OBJECT_VALID(bVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar1)))
					{
						if ((((((((((((((((((((((((((((((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1041 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1109) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1110) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1111) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1118) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1119) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1120) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1116) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1117) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1124) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1125) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1126) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1121) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1122) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1123) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1068) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1069) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1070) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1071) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1061) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1062) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1063) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1074) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1075) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1076) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1101) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1053) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1054) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1055) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1056) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1114) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1114) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1115) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1115)
						{
							DESTROY_OBJECT(bVar1);
						}
					}
					bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
				}
			}
			DESTROY_ITERATOR(bVar0);
		}
	}
	return;
}

void Function_471() //Position: 0x1AEE4 / 110308
{
	Function_470(bLocal_251);
	Function_336();
	if (iLocal_309 < 4 && iLocal_309 > 105)
	{
		Function_474();
	}
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_332(0);
			SET_ACTOR_HEALTH(bLocal_312, GET_ACTOR_MAX_HEALTH(bLocal_312));
			iLocal_493 = 0;
			if (IS_ACTOR_VALID(bLocal_313))
			{
				TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_313, true);
			}
			if (IS_ACTOR_VALID(bLocal_312))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_312);
				MEMORY_PREFER_RIDING(bLocal_312, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_312);
				TASK_PRIORITY_SET(bLocal_312, true);
			}
			if (IS_ACTOR_VALID(bLocal_498))
			{
				TASK_STAND_STILL(bLocal_498, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_498, true);
			}
			if (IS_ACTOR_VALID(bLocal_499))
			{
				TASK_STAND_STILL(bLocal_499, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_499, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_328();
			bLocal_310 = Global_30717[1];
			if (!Function_327(bLocal_310))
			{
				Function_326(&Local_252);
			}
			if (Function_269(&Local_252))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_325(Global_34573, (*&Local_4 + 420)[0], 1, 1, 1);
			}
			Function_210(&bLocal_315);
			iLocal_309 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				if (STREAMING_IS_WORLD_LOADED() && (Function_327(bLocal_310) || bLocal_310 != 4294967295))
				{
					Function_210(&bLocal_315);
					iLocal_309 = 2;
				}
			}
			else
			{
				Function_210(&bLocal_315);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000002:
			Function_317(&uLocal_484, 2, 0, 4294967295, 4294967295);
			if (Function_274())
			{
				iLocal_494 = 0;
				iLocal_489 = 0;
				iLocal_490 = 0;
				iLocal_503 = 0;
				iLocal_505 = 0;
				iLocal_504 = 0;
				bLocal_506 = false;
				iLocal_507 = 0;
				iLocal_508 = 0;
				iLocal_509 = 0;
				fLocal_491 = 5;
				Function_209(Local_252, 5);
				if (Function_269(&Local_252))
				{
					if (IS_ACTOR_VALID(bLocal_312))
					{
						Function_325(bLocal_312, (*&Local_4 + 420)[1], 0, 0, 0);
					}
					if (IS_ACTOR_VALID(bLocal_313))
					{
						if (IS_GRINGO_VALID(bLocal_568[0]))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_313, GET_OBJECT_FROM_GRINGO(bLocal_568[0]), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(bLocal_313, bLocal_568[0], "UseCase1", true, 1);
							TASK_PRIORITY_SET(bLocal_313, true);
						}
						else
						{
							Function_325(bLocal_313, (*&Local_4 + 420)[2], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(bLocal_314))
					{
						if (IS_GRINGO_VALID(bLocal_568[1]))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_314, GET_OBJECT_FROM_GRINGO(bLocal_568[1]), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(bLocal_314, bLocal_568[1], "UseCase1", true, 1);
							TASK_PRIORITY_SET(bLocal_314, true);
						}
						else
						{
							Function_325(bLocal_314, (*&Local_4 + 420)[3], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(bLocal_497))
					{
						Function_325(bLocal_497, (*&Local_4 + 420)[4], 1, 1, 1);
						TASK_STAND_STILL(bLocal_497, -1.0f, 0, 0);
						TASK_PRIORITY_SET(bLocal_497, true);
					}
				}
				Function_210(&bLocal_315);
				iLocal_309 = 4;
				Function_224(bLocal_308);
				Function_369(StackVal, StackVal, Function_224(bLocal_308), bLocal_308, Global_30637[0], Function_227(bLocal_308), 0);
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (IS_ACTOR_VALID(bLocal_313))
			{
				SET_ACTOR_HEALTH(bLocal_313, GET_ACTOR_MAX_HEALTH(bLocal_313));
			}
			if (IS_ACTOR_VALID(bLocal_312))
			{
				SET_ACTOR_HEALTH(bLocal_312, 50.0f);
				if (Function_269(&Local_252))
				{
					Function_325(bLocal_312, (*&Local_4 + 420)[1], 0, 0, 0);
				}
				MEMORY_PREFER_RIDING(bLocal_312, false);
				Function_293(12, 0, 1);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_312);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_312, true);
				AI_RIDING_SET_ATTRIBUTE(bLocal_312, 2, 0,15f);
				CLEAR_ACTOR_MAX_SPEED(bLocal_312);
				CLEAR_ACTOR_MAX_SPEED(bLocal_314);
			}
			if (IS_ACTOR_VALID(bLocal_498))
			{
				SET_ACTOR_HEALTH(bLocal_498, 50.0f);
				Function_325(bLocal_498, (*&Local_4 + 420)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_499))
			{
				SET_ACTOR_HEALTH(bLocal_499, 50.0f);
				Function_325(bLocal_499, (*&Local_4 + 420)[5], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_497))
			{
				SET_ACTOR_HEALTH(bLocal_497, GET_ACTOR_MAX_HEALTH(bLocal_497));
				DECOR_REMOVE(bLocal_497, "Frank");
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_497);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_497);
				SET_CRIPPLE_ENABLE(bLocal_497, 0);
			}
			iLocal_334 = 0;
			Function_380(&(Local_375[017]), bLocal_312, "Son", 1, 0x5f5e100, 1);
			Function_376(&(Local_375[017]), 1024);
			Function_380(&(Local_375[117]), bLocal_497, "Dog", 0, 0x5f5e100, 1);
			Function_376(&(Local_375[117]), 1024);
			Function_380(&(Local_375[217]), bLocal_499, "Uncle", 0, 0x5f5e100, 1);
			Function_380(&(Local_375[317]), bLocal_498, "Wife", 0, 0x5f5e100, 1);
			Function_375(&(Local_375[417]));
			Function_375(&(Local_375[517]));
			Function_207(0);
			Function_210(&bLocal_315);
			iLocal_309 = 5;
			break;
		
		case 0x00000005:
			if ((IS_ACTOR_VALID(bLocal_312) && IS_ACTOR_VALID(bLocal_497)) && IS_ACTOR_VALID(bLocal_313))
			{
				if ((Function_473(bLocal_497, 1, 0x41700000) && Function_473(bLocal_313, 1, 0x41700000)) || Function_257(&bLocal_315) <= 5.0f)
				{
					if (IS_ACTOR_VALID(bLocal_498))
					{
						TASK_CLEAR(bLocal_498);
					}
					if (IS_ACTOR_VALID(bLocal_499))
					{
						TASK_CLEAR(bLocal_499);
					}
					Function_210(&bLocal_315);
					iLocal_309 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (Function_257(&bLocal_315) <= 1,5f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_210(&bLocal_315);
				iLocal_309 = 103;
			}
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				Function_210(&bLocal_315);
				iLocal_309 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(bLocal_313))
				{
					if (!IS_BLIP_VALID(bLocal_501))
					{
						bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_313, 334, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_501))
						{
						}
					}
				}
				Function_210(&bLocal_315);
				iLocal_309 = 7;
			}
			break;
		
		case 0x00000007:
			Function_357("home02_son02_obj00", 7,5f, 1, 2, 0, 0, 0);
			Function_210(&bLocal_315);
			Function_210(&bLocal_318);
			Function_210(&bLocal_321);
			iLocal_309 = 8;
			break;
		
		case 0x00000008:
			Function_408(&bLocal_321, 60.0f, 200.0f, bLocal_313, "Horse_return", "Horse_abandoned", &bLocal_331, 0, 0, 0, 325, 1);
			Function_392(0, 1, 0x420c0000, 0x41c80000);
			if (Function_366(1))
			{
				if (GET_TASK_STATUS(bLocal_312, 67) != 1)
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 4294967295);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_312, Global_34573, 5.0f, 2);
					TASK_PRIORITY_SET(bLocal_312, true);
					Function_210(&iLocal_512);
				}
			}
			if (IS_ACTOR_VALID(bLocal_313))
			{
				if (GET_MOUNT(Global_34573) == bLocal_313)
				{
					if (IS_BLIP_VALID(bLocal_501))
					{
						REMOVE_BLIP(bLocal_501);
					}
					if (IS_ACTOR_RIDING(bLocal_312))
					{
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_312, 4294967295);
						Function_207(1);
						Function_229();
						Function_210(&bLocal_315);
						iLocal_309 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(bLocal_567))
			{
				if (IS_ACTOR_VALID(bLocal_497))
				{
					bLocal_567 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_251, "HOME02SON02_CAMERA_FOCUS", bLocal_497, 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
					if (IS_OBJECT_VALID(bLocal_567))
					{
						SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_567, 0);
					}
				}
			}
			if (!IS_BLIP_VALID(bLocal_501))
			{
				if (IS_ACTOR_VALID(bLocal_497))
				{
					bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
					SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
					if (IS_BLIP_VALID(bLocal_501))
					{
					}
				}
			}
			Function_317(&uLocal_484, 11, 0, 4294967295, 4294967295);
			Function_472();
			Function_210(&bLocal_315);
			iLocal_309 = 10;
			break;
		
		case 0x0000000A:
			if (Function_257(&bLocal_315) <= 5.0f)
			{
				DECOR_SET_BOOL(bLocal_497, "Frank", true);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_497);
				GET_OBJECT_POSITION(Local_4.f_900, &(vLocal_533[03]));
				bLocal_488 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(false, &(vLocal_533[03]), 0);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_980, 3, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_497, bLocal_488);
				TASK_SEQUENCE_RELEASE(bLocal_488, 1);
				TASK_PRIORITY_SET(bLocal_497, true);
				HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_314, 1);
				bLocal_488 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, bLocal_497, 0, 3212836864);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_497, Local_4.f_980, 8.0f, 1, 3.0f);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_312, bLocal_488);
				TASK_SEQUENCE_RELEASE(bLocal_488, 1);
				TASK_PRIORITY_SET(bLocal_312, true);
				Function_357("home02_son02_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_210(&bLocal_315);
				Function_210(&bLocal_318);
				Function_210(&bLocal_321);
				iLocal_309 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_392(1, 1, 0x420c0000, 0x41c80000);
			if (Function_342(&bLocal_321, 100.0f, bLocal_313, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_331, 0, bLocal_251, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_501))
				{
					REMOVE_BLIP(bLocal_501);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_501))
				{
					if (IS_ACTOR_VALID(bLocal_497))
					{
						bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_501))
						{
						}
					}
				}
				Function_408(&bLocal_321, 60.0f, 200.0f, bLocal_497, "Dog_return", "Dog_abandoned", &bLocal_331, 0, 0, 0, 325, 1);
			}
			if (!Function_394(bLocal_497, Global_34573, 60.0f))
			{
				if (!GET_TASK_STATUS(bLocal_497, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_497, Global_34573, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_497, 0) != 1)
			{
				bLocal_488 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_980, 3, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_497, bLocal_488);
				TASK_SEQUENCE_RELEASE(bLocal_488, 1);
			}
			if (GET_TASK_STATUS(bLocal_497, 6) == 1)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_497, 20.0f))
				{
					TASK_CLEAR(bLocal_497);
					Function_229();
					Function_210(&bLocal_315);
					iLocal_309 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			vLocal_546 = { 3.0f, 0.0f, 1.0f };
			TASK_FOLLOW_OBJECT(bLocal_312, bLocal_497, &vLocal_546, 0, 0, 0, 0, 0, 0, 1);
			Function_210(&bLocal_315);
			iLocal_309 = 13;
			break;
		
		case 0x0000000D:
			if (Function_342(&bLocal_321, 100.0f, bLocal_313, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_331, 0, bLocal_251, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_501))
				{
					REMOVE_BLIP(bLocal_501);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_501))
				{
					if (IS_ACTOR_VALID(bLocal_497))
					{
						bLocal_501 = ADD_BLIP_FOR_ACTOR(bLocal_497, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_501, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_501))
						{
						}
					}
				}
				Function_408(&bLocal_321, 60.0f, 200.0f, bLocal_497, "Dog_return", "Dog_abandoned", &bLocal_331, 0, 0, 0, 325, 1);
			}
			if (IS_VOLUME_VALID(Local_4.f_356))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_356))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_356);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_360))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_360))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_360);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_364))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_497, Local_4.f_364))
				{
					Function_210(&bLocal_515);
					DESTROY_VOLUME(Local_4.f_364);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_497, 8, "SNIFF");
				}
			}
			if (Function_259(&bLocal_515))
			{
				if (Function_257(&bLocal_515) < 5.0f)
				{
					Function_391(&bLocal_515);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_497);
				}
			}
			if (!Function_394(bLocal_497, Global_34573, 60.0f))
			{
				if (!GET_TASK_STATUS(bLocal_497, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_497, Global_34573, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_497, 0) != 1)
			{
				bLocal_488 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(Local_4.f_356))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 596)[1], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(Local_4.f_360))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 620)[0], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(Local_4.f_364))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 644)[0], 3.0f, 3, 1, 1);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_497, bLocal_488);
				TASK_SEQUENCE_RELEASE(bLocal_488, 1);
			}
			if (GET_TASK_STATUS(bLocal_497, 6) == 1)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_497, 20.0f))
				{
					TASK_CLEAR(bLocal_497);
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_229();
					Function_210(&bLocal_315);
					iLocal_309 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_324[0] = 1;
			Function_210(&bLocal_315);
			bLocal_308 = true;
			iLocal_309 = 0;
			break;
	}
	return;
}

void Function_472() //Position: 0x1BBA9 / 113577
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s2_SearchWolves", "Home02_s2_SearchWolves", true, 1, 1, 0, 1);
		Function_359(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_473(bool bParam0, bool bParam1, float fParam2) //Position: 0x1BBFE / 113662
{
	float fVar0;
	bool bVar1;
	
	if (Function_40() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_474() //Position: 0x1BC9B / 113819
{
	if (Function_257(&bLocal_521) <= 1.0f)
	{
		switch (iLocal_494)
		{
			case 0x00000000:
				iLocal_496 = Function_405();
				iLocal_494++;
				break;
			
			case 0x00000001:
				if (iLocal_309 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_494++;
					}
				}
				break;
			
			case 0x00000002:
				Function_392(0, 1, 0x420c0000, 0x41c80000);
				if (IS_ACTOR_VALID(bLocal_313))
				{
					if (GET_MOUNT(Global_34573) == bLocal_313)
					{
						iLocal_494++;
					}
				}
				break;
			
			case 0x00000003:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_309 > 11)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_494++;
						Function_210(&bLocal_318);
					}
				}
				break;
			
			case 0x00000004:
				Function_392(1, 1, 0x420c0000, 0x41c80000);
				if (Function_460())
				{
					Function_437();
				}
				break;
		}
		Function_210(&bLocal_521);
	}
	return;
}

void Function_475() //Position: 0x1BD86 / 114054
{
	switch (iLocal_309)
	{
		case 0x00000006:
			Function_486(&Local_252, 1);
			bLocal_251 = CREATE_LAYOUT("home02_son02_DynamicLayout");
			Function_485();
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_309 = 7;
			break;
		
		case 0x00000007:
			if (Function_483())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_280();
				}
				iLocal_309 = 8;
			}
			break;
		
		case 0x00000008:
			Function_325(Global_34573, (*&Local_4 + 420)[0], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_312))
			{
				TASK_CLEAR(bLocal_312);
				TASK_STAND_STILL(bLocal_312, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_312, true);
				Function_325(bLocal_312, (*&Local_4 + 420)[1], 0, 0, 0);
			}
			if (IS_ACTOR_VALID(bLocal_313))
			{
				TASK_CLEAR(bLocal_313);
				TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_313, true);
				Function_325(bLocal_313, (*&Local_4 + 420)[2], 0, 0, 0);
			}
			iLocal_309 = 9;
			break;
		
		case 0x00000009:
			if (Function_260("$/cutscene/son_02/son_02", &iLocal_301, &Local_252, &bLocal_308, 69138, 68697, 67648, 67257, 66945, 50122, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_309 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_311 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (Function_269(&Local_252))
			{
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_404, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_404);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_404);
			}
			Function_293(12, 1, 1);
			SET_CRIPPLE_ENABLE(bLocal_312, 0);
			SET_ACTOR_FACTION(bLocal_312, 20);
			TASK_PRIORITY_SET(bLocal_312, true);
			AI_BEHAVIOR_SET_ALLOW(bLocal_312, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_312, 50.0f);
			SET_ACTOR_HEALTH(bLocal_312, GET_ACTOR_MAX_HEALTH(bLocal_312));
			ACTOR_END_FORCE_HOLSTER(bLocal_312);
			MEMORY_ALLOW_SHOOTING(bLocal_312, true);
			RESET_ACTOR_GAITS(bLocal_313, 0);
			TASK_PRIORITY_SET(bLocal_313, true);
			TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_313, 50.0f);
			SET_ACTOR_HEALTH(bLocal_313, GET_ACTOR_MAX_HEALTH(bLocal_313));
			SET_ALLOW_RIDE_BY_AI(bLocal_313, 0);
			Function_482(&iLocal_512);
			Function_482(&bLocal_515);
			Function_482(&bLocal_518);
			Function_482(&bLocal_521);
			Function_482(&bLocal_524);
			Function_480(&uLocal_335, bLocal_251);
			Function_482(&bLocal_315);
			Function_482(&bLocal_318);
			Function_482(&bLocal_321);
			bLocal_308 = false;
			iLocal_309 = 0;
			Function_477(&Local_252, &bLocal_308, &iLocal_309);
			Function_476(StackVal, StackVal, StackVal, StackVal, StackVal, Function_280(), Local_252);
			switch (bLocal_308)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000004:
					break;
				
				case 0x00000005:
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					break;
				
				case 0x00000008:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_476(struct<25> Param0) //Position: 0x1C063 / 114787
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_308 = false;
			break;
		
		case 0x00000002:
			bLocal_308 = true;
			break;
		
		case 0x00000003:
			bLocal_308 = 2;
			break;
		
		case 0x00000004:
			bLocal_308 = 3;
			break;
		
		case 0x00000005:
			bLocal_308 = 4;
			break;
		
		case 0x00000006:
			bLocal_308 = 5;
			break;
		
		case 0x00000007:
			bLocal_308 = 6;
			break;
		
		case 0x00000008:
			bLocal_308 = 7;
			break;
		
		case 0x00000009:
			bLocal_308 = 8;
			break;
		
		case 0x0000000A:
			bLocal_308 = 101;
			break;
	}
}

void Function_477(int iParam0, var uParam1, int iParam2) //Position: 0x1C0F8 / 114936
{
	if (Function_269(iParam0))
	{
		*uParam1 = Function_479(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_478();
	}
	return;
}

void Function_478() //Position: 0x1C12C / 114988
{
	if (Global_34165.f_112 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_34165.f_112, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_34165.f_112, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
		PRINTNL();
	}
	return;
}

var Function_479(int iParam0) //Position: 0x1C17D / 115069
{
	if (Function_269(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_480(var uParam0, bool bParam1) //Position: 0x1C195 / 115093
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_481(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_481(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_481(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_481(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_481(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1C835 / 116789
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	*iParam0 = CREATE_EVENT_TRAP(bParam2, iParam3, bParam1);
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(*iParam0, 1);
	iParam0->f_4 = iParam3;
	iParam0->f_8 = 0;
	Function_76(iParam0 + 8, iParam4);
	return 1;
}

void Function_482(int iParam0) //Position: 0x1C8F8 / 116984
{
	if (!Function_259(iParam0))
	{
		Function_211(iParam0, 0.0f);
	}
	return;
}

bool Function_483() //Position: 0x1C90D / 117005
{
	if (!IS_EXITFLAG_SET())
	{
		if (!iLocal_510)
		{
			if (!Function_484(0))
			{
				return 0;
			}
			iLocal_510 = 1;
		}
		if (!Function_311())
		{
			return 0;
		}
		if (!Function_301(&bLocal_259))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_312))
		{
			bLocal_312 = Function_284(12, 0, 1, -94,785f, 117,663f, 1405,207f, 0, 0, 0);
			return 0;
		}
		if (!iLocal_333)
		{
			if (IS_ACTOR_INITED(bLocal_312))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_312);
				GIVE_WEAPON_TO_ACTOR(bLocal_312, 22, false, 1, 1);
				GIVE_WEAPON_TO_ACTOR(bLocal_312, 8, false, 1, 1);
				ACTOR_SET_NEXT_EQUIP_SLOT(bLocal_312, 5, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_312, 8, 0);
				iLocal_333 = 1;
				return 0;
			}
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_312, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_498))
		{
			bLocal_498 = Function_284(11, 0, 1, -100.0f, 118,869f, 1348.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_498, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_499))
		{
			bLocal_499 = Function_284(13, 0, 1, -60.0f, 117,472f, 1364.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_499, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_497))
		{
			bLocal_497 = Function_284(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_497, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_313))
		{
			bLocal_313 = Function_295(1, 1, -78,446f, 116,861f, 1419,268f, -469,06f, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_313, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_484(bool bParam0) //Position: 0x1CAAF / 117423
{
	if (!Global_3366)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

void Function_485() //Position: 0x1CADD / 117469
{
	Function_312(&bLocal_259, "home02son02", 10, 0);
	Function_312(&bLocal_259, "BeechersHope", 12, 0);
	Function_312(&bLocal_259, "custom/dog_sniffing", 8, 0);
	return;
}

void Function_486(int iParam0, bool bParam1) //Position: 0x1CB34 / 117556
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_492(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_269(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_13(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_22(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_269(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_201();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_229();
	Function_263();
	Function_218("");
	Function_491(0);
	Function_490();
	Function_195();
	Function_194();
	ENABLE_JOURNAL_REPLAY(0);
	Function_489();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_333(0, 0x40400000);
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(Global_34573, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_488(13);
	Function_488(14);
	Function_488(25);
	Function_488(24);
	Function_488(12);
	Function_488(27);
	Function_488(26);
	Function_488(15);
	Function_487();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_487() //Position: 0x1CF58 / 118616
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_6290);
	ITERATE_IN_LAYOUT(bVar0, Global_6290);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_CHECK_EXIST(bVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(bVar1, Global_16516))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_16516);
			}
			RELEASE_OBJECT_REF(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_488(int iParam0) //Position: 0x1CFCC / 118732
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_489() //Position: 0x1CFEC / 118764
{
	bool bVar0;
	
	bVar0 = GET_ATTACHED_HOGTIE_VICTIM(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	bVar0 = GET_LASSO_TARGET(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		DETACH_LASSO(bVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	return;
}

void Function_490() //Position: 0x1D029 / 118825
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_491(int iParam0) //Position: 0x1D03D / 118845
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_198())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_492(int iParam0, int iParam1) //Position: 0x1D072 / 118898
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_493(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_493(int iParam0) //Position: 0x1D0F4 / 119028
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_494() //Position: 0x1D142 / 119106
{
	return;
}

void Function_495(var uParam0, bool bParam1) //Position: 0x1D148 / 119112
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (!GET_ACTORS_HORSE(bParam1) != bVar0)
				{
					*uParam0 = bVar0;
					Function_367(*uParam0, 0);
				}
			}
			else
			{
				*uParam0 = bVar0;
				Function_367(*uParam0, 0);
			}
		}
	}
	else
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!*uParam0 != bVar0)
			{
				if (IS_ACTOR_VALID(bParam1))
				{
					if (!GET_ACTORS_HORSE(bParam1) != bVar0)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
						}
						*uParam0 = bVar0;
						Function_367(*uParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
					}
					*uParam0 = bVar0;
					Function_367(*uParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_496(int iParam0) //Position: 0x1D20D / 119309
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_497(int iParam0) //Position: 0x1D22B / 119339
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (*iParam0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (*iParam0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_498(iParam0, 1);
			return 1;
		}
	}
	Function_498(iParam0, 0);
	return 0;
}

void Function_498(int iParam0, bool bParam1) //Position: 0x1D2B2 / 119474
{
	if (bParam1)
	{
		*iParam0 = 0;
	}
	iParam0->f_4 = "";
	iParam0->f_8 = 4294967295;
	iParam0->f_12 = 0;
	iParam0->f_16 = 0;
	return;
}

bool Function_499(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1D2D6 / 119510
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	struct<16> Var18;
	
	if (*iParam2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(bParam3))
	{
		Function_498(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_518(&bParam3);
				ITERATE_IN_EVENT_TRAP(bParam3, (*uParam1)[iVar03]);
				bVar1 = START_OBJECT_ITERATOR(bParam3);
				while (IS_OBJECT_VALID(bVar1))
				{
					bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
					if (IS_EVENT_VALID(bVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							bVar4 = GET_EVENT_TARGET_AS_OBJECT(bVar2);
							if (IS_OBJECT_VALID(bVar4))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(bVar4);
							}
						}
						else
						{
							bVar5 = GET_EVENT_TARGET_AS_PHYSINST(bVar2);
							if (IS_PHYSINST_VALID(bVar5))
							{
								bVar6 = GET_OBJECT_FROM_PHYSINST(bVar5);
								if (IS_OBJECT_VALID(bVar6))
								{
									if (GET_OBJECT_TYPE(bVar6) == 15)
									{
										bVar3 = GET_ACTOR_FROM_OBJECT(bVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(bVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								bVar8 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar8))
								{
									bVar9 = GET_ACTOR_FROM_OBJECT(bVar8);
									if (IS_ACTOR_VALID(bVar9))
									{
										if (bVar9 == Global_34573)
										{
											iVar7 = 2;
										}
										else if (bVar9 == GET_MOUNT(Global_34573))
										{
											iVar7 = 2;
										}
										else if (bVar9 != GET_VEHICLE(Global_34573) && IS_ACTOR_DRIVING_VEHICLE(Global_34573))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								bVar11 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar11))
								{
									bVar12 = GET_ACTOR_FROM_OBJECT(bVar11);
									if (IS_ACTOR_VALID(bVar12))
									{
										if (bVar12 == GET_MOUNT(Global_34573))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
									EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
									bVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								bVar14 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar14))
								{
									bVar15 = GET_ACTOR_FROM_OBJECT(bVar14);
									if (IS_ACTOR_VALID(bVar15))
									{
										if (bVar15 != GET_VEHICLE(Global_34573) && IS_ACTOR_DRIVING_VEHICLE(Global_34573))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
									EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
									bVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(bVar1))
							{
								iVar16 = 0;
								while (iVar16 <= *uParam0)
								{
									if (IS_OBJECT_VALID((*uParam0)[iVar1617]))
									{
										if ((StackVal && uParam0[iVar1617]->f_40) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_517(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_517(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_503(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_498(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_502(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_501(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_502(&bVar17);
														strcpy(&Var18, "", 64);
														Function_500(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_218(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_501(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(bVar1))
					{
						bVar1 = OBJECT_ITERATOR_NEXT(bParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
				EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
			}
		}
		iVar0++;
	}
	Function_498(iParam2, 0);
	return 0;
}

void Function_500(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1D66F / 120431
{
	memcpy(cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_501(var uParam0, int iParam1, bool bParam2) //Position: 0x1D75A / 120666
{
	switch (iParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			uParam0->f_12 = 1;
			break;
	}
	switch (iParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_36(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_36(&bParam2, 2);
			break;
	}
	Function_36(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_502(bool bParam0) //Position: 0x1D7D0 / 120784
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_503(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1D7F2 / 120818
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam2))
	{
		return 0;
	}
	switch (iParam0->f_28)
	{
		case 0x0000000F:
			bVar1 = GET_ACTOR_FROM_OBJECT(*iParam0);
			if (!IS_ACTOR_VALID(bVar1))
			{
				return 0;
			}
			return Function_514(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_507(iParam0, uParam1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000019:
			bVar3 = GET_SQUAD_FROM_OBJECT(*iParam0);
			if (!SQUAD_IS_VALID(bVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bVar3))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bVar3, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					bVar2 = Function_514(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_504(iParam0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			bVar4 = GET_OBJECTSET_FROM_OBJECT(*iParam0);
			if (!IS_OBJECTSET_VALID(bVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(bVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bVar4);
				if (IS_OBJECT_VALID(bVar5))
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar5);
					if (IS_ACTOR_VALID(bVar1))
					{
						bVar2 = Function_514(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_504(iParam0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_504(int iParam0, bool bParam1) //Position: 0x1D93C / 121148
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_153(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_506(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_505(16);
			}
		}
	}
	else if (Function_153(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_506(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_505(256);
			}
		}
	}
	return bParam1;
}

bool Function_505(int iParam0) //Position: 0x1DA6F / 121455
{
	return 2 | iParam0;
}

int Function_506(int iParam0) //Position: 0x1DA79 / 121465
{
	return 4 | iParam0;
}

int Function_507(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1DA83 / 121475
{
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_513(iParam0, iParam1, bParam4);
				if (Function_153(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_505(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_508(iParam0, iParam1, 0, bParam4);
				if (Function_153(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_505(16);
		}
	}
	return 0;
}

int Function_508(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1DB35 / 121653
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_512(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_511(iVar0, 3, 1, bParam3))
			{
				if (!Function_517(iParam0, 8, 1))
				{
					return Function_510(64, 1024, bParam2);
				}
			}
			return Function_509(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_511(iVar0, 2, 1, bParam3))
			{
				if (!Function_517(iParam0, 32, 1))
				{
					return Function_510(64, 1024, bParam2);
				}
			}
			return Function_509(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_511(iVar0, 1, 1, bParam3))
			{
				if (!Function_517(iParam0, 64, 1))
				{
					return Function_510(64, 1024, bParam2);
				}
			}
			return Function_509(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_511(iVar0, 3, 1, bParam3))
			{
				if (!Function_517(iParam0, 128, 1))
				{
					return Function_510(64, 1024, bParam2);
				}
			}
			return Function_509(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_511(iVar0, 1, 1, bParam3))
			{
				if (!Function_517(iParam0, 1024, 1))
				{
					return Function_510(64, 1024, bParam2);
				}
			}
			return Function_509(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_511(iVar0, 1, 1, bParam3))
			{
				if (!Function_517(iParam0, 1024, 1))
				{
					return Function_510(64, 1024, bParam2);
				}
			}
			return Function_509(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_509(int iParam0, int iParam1, bool bParam2) //Position: 0x1DCEF / 122095
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_510(int iParam0, int iParam1, bool bParam2) //Position: 0x1DD04 / 122116
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_511(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1DD19 / 122137
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_512(int iParam0) //Position: 0x1DD36 / 122166
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*iParam0 + 44)[iVar0])
		{
			iVar2++;
		}
		if ((*iParam0 + 44)[iVar0] > fVar4)
		{
			fVar4 = (*iParam0 + 44)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*iParam0 + 44)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_513(var uParam0, int iParam1, bool bParam2) //Position: 0x1DDA5 / 122277
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_512(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_511(iVar0, 3, 1, bParam2))
			{
				if (!Function_517(uParam0, 8, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000009:
			if (Function_511(iVar0, 3, 1, bParam2))
			{
				if (!Function_517(uParam0, 8, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x0000006E:
			if (Function_511(iVar0, 2, 1, bParam2))
			{
				if (!Function_517(uParam0, 16, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x0000005B:
			if (Function_511(iVar0, 2, 1, bParam2))
			{
				if (!Function_517(uParam0, 32, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000031:
			if (Function_511(iVar0, 1, 1, bParam2))
			{
				if (!Function_517(uParam0, 64, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000007:
			if (Function_511(iVar0, 3, 1, bParam2))
			{
				if (!Function_517(uParam0, 128, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000008:
			if (Function_511(iVar0, 2, 1, bParam2))
			{
				if (!Function_517(uParam0, 256, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000014:
			if (Function_511(iVar0, 1, 1, bParam2))
			{
				if (!Function_517(uParam0, 512, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000018:
			if (Function_511(iVar0, 1, 1, bParam2))
			{
				if (!Function_517(uParam0, 512, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000057:
			if (Function_511(iVar0, 1, 1, bParam2))
			{
				if (!Function_517(uParam0, 1024, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000058:
			if (Function_511(iVar0, 1, 1, bParam2))
			{
				if (!Function_517(uParam0, 1024, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_514(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1DFC0 / 122816
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (bParam2 == bParam3)
	{
		bVar0 = true;
	}
	switch (iParam0->f_32)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(bParam3))
					{
						return Function_513(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_517(iParam0, 2, 1))
					{
						return Function_506(8);
					}
					return Function_505(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_517(iParam0, 4, 1))
					{
						return Function_506(16);
					}
					return Function_505(16);
				}
			}
			if (iParam0->f_36)
			{
				if (GET_MOST_RECENT_MOUNT(bParam2) == bParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(bParam3))
						{
							return Function_508(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_517(iParam0, 2, 1))
						{
							return Function_506(128);
						}
						return Function_505(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_517(iParam0, 4, 1))
						{
							return Function_506(256);
						}
						return Function_505(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(bParam3))
					{
						return Function_508(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_517(iParam0, 2, 1))
					{
						return Function_506(8);
					}
					return Function_505(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_517(iParam0, 4, 1))
					{
						return Function_506(16);
					}
					return Function_505(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_516(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_517(iParam0, 2, 1))
					{
						return Function_506(8);
					}
					return Function_505(8);
				}
				if (!Function_517(iParam0, 4, 1))
				{
					return Function_506(16);
				}
				return Function_505(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_508(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_515(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_505(128);
							}
							if (!Function_517(iParam0, 2, 1))
							{
								return Function_506(8);
							}
							return Function_505(8);
						}
						if (iParam4 == 2)
						{
							if (Function_515(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_505(256);
							}
							if (!Function_517(iParam0, 4, 1))
							{
								return Function_506(16);
							}
							return Function_505(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool Function_515(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1E27F / 123519
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_516(int iParam0, var uParam1, bool bParam2) //Position: 0x1E338 / 123704
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_512(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_511(iVar0, 2, 1, bParam2))
			{
				if (!Function_517(iParam0, 16, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x0000005B:
			if (Function_511(iVar0, 2, 1, bParam2))
			{
				if (!Function_517(iParam0, 32, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000057:
			if (Function_511(iVar0, 1, 1, bParam2))
			{
				if (!Function_517(iParam0, 1024, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		case 0x00000058:
			if (Function_511(iVar0, 1, 1, bParam2))
			{
				if (!Function_517(iParam0, 1024, 1))
				{
					return Function_506(64);
				}
			}
			return Function_505(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_517(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E44C / 123980
{
	if (bParam2)
	{
		if (!Function_153(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_153(iParam0->f_40, bParam1);
}

int Function_518(bool bParam0) //Position: 0x1E474 / 124020
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_53());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_53());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_519(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1E4A5 / 124069
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_40())
	{
		*uParam9 = 1;
		*uParam10 = 0;
		*iParam11 = 0;
	}
	if (((Global_3381 && Global_63096) && !HUD_IS_FADED()) && iParam7 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

