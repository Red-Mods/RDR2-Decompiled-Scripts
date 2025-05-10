//Decompiled with MagicRDR v1.0
//Function Count : 715
//Statics Count : 704
//Natives Count : 757
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1013> Local_4 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_523 = 0;
	iLocal_602 = 0;
	iLocal_695 = 0;
	Local_259 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_308 = 99;
	iLocal_309 = 6;
	Local_301 = 1000;
	while (Function_326())
	{
		Function_238();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x4C / 76
{
	Function_205();
	Function_202(3, 1, 0, 1, 1);
	Function_201(bLocal_258);
	Function_201(Local_4);
	Function_174(bLocal_351, 1, bLocal_351, 0, 1, 1, 1, 1);
	Function_170(&iLocal_266);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_312))
	{
		DESTROY_ITERATOR(bLocal_312);
	}
	RELEASE_LAYOUT_REF(bLocal_258);
	if (bLocal_350)
	{
		Function_24(Local_259, 1, 1, 1, 0);
	}
	else if (bLocal_351)
	{
		Function_20(Local_259);
	}
	else
	{
		Function_2(Local_259);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xC1 / 193
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0xE2 / 226
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0xFD / 253
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x11E / 286
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x134 / 308
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Function_7(bParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x1D0 / 464
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x1F1 / 497
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

void Function_9() //Position: 0x237 / 567
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x250 / 592
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x2A3 / 675
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

struct<16> Function_12(int iParam0) //Position: 0x3C7 / 967
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x3EC / 1004
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x40C / 1036
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x423 / 1059
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x43E / 1086
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x685 / 1669
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x6AE / 1710
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

bool Function_19(int iParam0) //Position: 0x6D2 / 1746
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x6E7 / 1767
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x705 / 1797
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

struct<16> Function_22(int iParam0) //Position: 0x7AB / 1963
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x7D5 / 2005
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA2B / 2603
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

void Function_25() //Position: 0xB18 / 2840
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

int Function_26(int iParam0, bool bParam1) //Position: 0xB48 / 2888
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

int Function_27(int iParam0) //Position: 0xB85 / 2949
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xB9F / 2975
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xBB5 / 2997
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEAC / 3756
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

void Function_31(char* cParam0, int iParam1) //Position: 0xF18 / 3864
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xF4F / 3919
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

bool Function_33(var uParam0, int iParam1) //Position: 0xFC7 / 4039
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0xFDA / 4058
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

int Function_35(int iParam0) //Position: 0x107B / 4219
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x10B8 / 4280
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10CB / 4299
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

void Function_38(int iParam0, int iParam1) //Position: 0x12DD / 4829
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x1317 / 4887
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

bool Function_40() //Position: 0x1359 / 4953
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1362 / 4962
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

void Function_42() //Position: 0x13B3 / 5043
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

void Function_43() //Position: 0x13E6 / 5094
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

void Function_44() //Position: 0x14EC / 5356
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

void Function_45() //Position: 0x151F / 5407
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

void Function_46() //Position: 0x16AD / 5805
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

void Function_47() //Position: 0x1861 / 6241
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x186F / 6255
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

var Function_49() //Position: 0x1A60 / 6752
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1A75 / 6773
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B10 / 6928
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1DAB / 7595
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

var Function_53() //Position: 0x23D8 / 9176
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x23E0 / 9184
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x23F1 / 9201
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x24E6 / 9446
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x24FF / 9471
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2564 / 9572
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2576 / 9590
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2588 / 9608
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

int Function_61(int iParam0) //Position: 0x26B8 / 9912
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x26C7 / 9927
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2700 / 9984
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x273D / 10045
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x28D7 / 10455
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

int Function_66(bool bParam0) //Position: 0x2AF1 / 10993
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2B32 / 11058
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

struct<8> Function_68() //Position: 0x2BBB / 11195
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

struct<8> Function_69() //Position: 0x2C52 / 11346
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

void Function_70() //Position: 0x2CD1 / 11473
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2CF7 / 11511
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

void Function_72() //Position: 0x2F01 / 12033
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

bool Function_73(vector3 vParam0) //Position: 0x2FA2 / 12194
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2FBA / 12218
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

vector3 Function_75() //Position: 0x30A1 / 12449
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x30AA / 12458
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x30B9 / 12473
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x30CF / 12495
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3196 / 12694
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x31B3 / 12723
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

bool Function_81(int iParam0) //Position: 0x368F / 13967
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x36A5 / 13989
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x36C4 / 14020
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x36DE / 14046
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3745 / 14149
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

void Function_86() //Position: 0x3965 / 14693
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x39E5 / 14821
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D37 / 15671
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

int Function_89(int iParam0) //Position: 0x3DBA / 15802
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3DD4 / 15828
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E02 / 15874
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x40A0 / 16544
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

void Function_93(int iParam0, int iParam1) //Position: 0x4263 / 16995
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x44C1 / 17601
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

int Function_95() //Position: 0x4646 / 17990
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

void Function_96() //Position: 0x46E5 / 18149
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

void Function_97(int iParam0) //Position: 0x4794 / 18324
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

var Function_98(int iParam0) //Position: 0x47F2 / 18418
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4881 / 18561
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

var Function_100(int iParam0, int iParam1) //Position: 0x4A1E / 18974
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

void Function_101() //Position: 0x4A5F / 19039
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4A75 / 19061
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4AB5 / 19125
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_104(int iParam0) //Position: 0x4AF5 / 19189
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B04 / 19204
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

int Function_106(int iParam0) //Position: 0x4CCC / 19660
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

var Function_107() //Position: 0x4D61 / 19809
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4D86 / 19846
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x5241 / 21057
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

var Function_110(int iParam0) //Position: 0x5556 / 21846
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x55F9 / 22009
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

int Function_112(int iParam0, bool bParam1) //Position: 0x57F4 / 22516
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5990 / 22928
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5A5B / 23131
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

void Function_115(int iParam0) //Position: 0x634B / 25419
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x64BA / 25786
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x65C0 / 26048
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(bool bParam0) //Position: 0x65ED / 26093
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_119(vector3 vParam0) //Position: 0x6644 / 26180
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x6692 / 26258
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66E6 / 26342
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
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

void Function_122() //Position: 0x6884 / 26756
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x688A / 26762
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

void Function_124(bool bParam0, int iParam1) //Position: 0x692E / 26926
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6983 / 27011
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6999 / 27033
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

bool Function_127(int iParam0, int iParam1) //Position: 0x69EA / 27114
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

void Function_128(var uParam0, int iParam1) //Position: 0x6A17 / 27159
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A26 / 27174
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6A3D / 27197
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6A4C / 27212
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
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6B96 / 27542
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

bool Function_133() //Position: 0x6BE1 / 27617
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6C0E / 27662
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

int Function_135(int iParam0) //Position: 0x6DBE / 28094
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6E15 / 28181
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

var Function_137(int iParam0) //Position: 0x6E3A / 28218
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6E90 / 28304
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

bool Function_139(bool bParam0) //Position: 0x6EEF / 28399
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6EFB / 28411
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6F17 / 28439
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

int Function_142(int iParam0, int iParam1) //Position: 0x6F69 / 28521
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

int Function_143(int iParam0, int iParam1) //Position: 0x6FDC / 28636
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7038 / 28728
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

int Function_145(int iParam0, int iParam1) //Position: 0x70A9 / 28841
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x7103 / 28931
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x73AF / 29615
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
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
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

void Function_148(int iParam0, bool bParam1) //Position: 0x763E / 30270
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

void Function_149() //Position: 0x769D / 30365
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

var Function_150(int iParam0, int iParam1) //Position: 0x7718 / 30488
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

int Function_151(int iParam0) //Position: 0x830A / 33546
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x831F / 33567
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x836E / 33646
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x837B / 33659
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x83CC / 33740
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

bool Function_156(int iParam0, int iParam1) //Position: 0x843A / 33850
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x844D / 33869
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

var Function_158(int iParam0) //Position: 0x854C / 34124
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

bool Function_159(var uParam0, int iParam1) //Position: 0x85A4 / 34212
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x85C0 / 34240
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

bool Function_161(bool bParam0) //Position: 0x8617 / 34327
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x8629 / 34345
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

void Function_163(int iParam0) //Position: 0x865D / 34397
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x86C4 / 34500
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87A1 / 34721
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
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_166() //Position: 0x891A / 35098
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8926 / 35110
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

void Function_168() //Position: 0x896C / 35180
{
	Function_169();
	return;
}

void Function_169() //Position: 0x8975 / 35189
{
	Function_170(&Local_4 + 4);
	Function_170(&Local_4 + 44);
	Function_170(&Local_4 + 72);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170(int iParam0) //Position: 0x8995 / 35221
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

void Function_171(var uParam0, int iParam1) //Position: 0x89BB / 35259
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

void Function_172(var uParam0, int iParam1) //Position: 0x8AE9 / 35561
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_173(var uParam0, bool bParam1) //Position: 0x8B03 / 35587
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8B20 / 35616
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
	Function_199();
	CLEAR_PRINTED_OBJECTIVE();
	Function_198();
	Function_196(0);
	Function_195();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_194();
	Function_193();
	Function_199();
	ENABLE_JOURNAL_REPLAY(1);
	Function_192(1);
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
		Function_191(Global_34573);
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
	Function_190(Global_28178);
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
	Function_189(1178687);
	Function_187(33039);
	Function_186(0x218003f);
	Function_185(4194560);
	Function_184();
	Function_183();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_180(0, 1, 1);
	}
	else
	{
		Function_180(0, 1, 1);
	}
	Function_179();
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
	Function_175();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_175() //Position: 0x8D11 / 36113
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
		if (Function_178() > 3)
		{
			bVar0 *= 2;
		}
		Function_176(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_176(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x8D67 / 36199
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_177((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_177(bool bParam0) //Position: 0x8DAD / 36269
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_178() //Position: 0x8DD2 / 36306
{
	return Global_12976.f_156;
}

void Function_179() //Position: 0x8DDD / 36317
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

void Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x8E07 / 36359
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
			Function_181(Global_29006);
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

void Function_181(int iParam0) //Position: 0x8F12 / 36626
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_182())
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

bool Function_182() //Position: 0x8F91 / 36753
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

void Function_183() //Position: 0x8FEE / 36846
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

void Function_184() //Position: 0x9014 / 36884
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

void Function_185(int iParam0) //Position: 0x903A / 36922
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_186(int iParam0) //Position: 0x9057 / 36951
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_187(int iParam0) //Position: 0x906A / 36970
{
	Function_188(&Global_28842, iParam0);
	return;
}

void Function_188(var uParam0, int iParam1) //Position: 0x9078 / 36984
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_189(bool bParam0) //Position: 0x9093 / 37011
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_190(int iParam0) //Position: 0x90C0 / 37056
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

void Function_191(bool bParam0) //Position: 0x9187 / 37255
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

void Function_192(bool bParam0) //Position: 0x9203 / 37379
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

void Function_193() //Position: 0x9277 / 37495
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

void Function_194() //Position: 0x92B8 / 37560
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

void Function_195() //Position: 0x92F9 / 37625
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_196(int iParam0) //Position: 0x930D / 37645
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_197())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_197() //Position: 0x9349 / 37705
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

void Function_198() //Position: 0x936E / 37742
{
	Global_8722 = 0.0f;
	return;
}

void Function_199() //Position: 0x9378 / 37752
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

int Function_200() //Position: 0x93A3 / 37795
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_201(bool bParam0) //Position: 0x93BD / 37821
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

int Function_202(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9415 / 37909
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
		Function_204(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_203(StackVal);
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

void Function_203(bool bParam0) //Position: 0x9733 / 38707
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

void Function_204(bool bParam0) //Position: 0x975F / 38751
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_205() //Position: 0x9774 / 38772
{
	Function_236(&iLocal_477, 0, 0, 4294967295, 4294967295);
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	Function_164(4, 60, 0);
	Function_234(Global_34207);
	Function_233(1);
	Function_231();
	Function_226();
	Function_225();
	Function_224();
	Function_223();
	Function_222();
	Function_220();
	Function_219();
	if (IS_ACTOR_ALIVE(bLocal_314))
	{
		Function_218(0);
	}
	Function_217();
	if (IS_ACTOR_ALIVE(Global_34573))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
		Function_214();
		Function_213();
		DISABLE_PLAYER_GRINGO_USE(0, 0);
		DECOR_REMOVE(Global_34573, "BlockHitchHelp");
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_315);
	}
	Function_212(1);
	Function_192(1);
	if (IS_ACTOR_ALIVE(bLocal_314))
	{
		Function_76(&Global_12976 + 36 + 20, 2);
		Function_211(bLocal_314, 1);
		Function_207((*&Local_4 + 628)[13]);
	}
	if (iLocal_475)
	{
		iLocal_475 = 0;
		STREAMING_EVICT_ACTOR(false, Function_206(14));
	}
	return;
}

int Function_206(bool bParam0) //Position: 0x9845 / 38981
{
	if (bParam0 <= 0 && bParam0 > 32)
	{
		return SHIFT_LEFT(true, bParam0);
	}
	return 0;
}

void Function_207(bool bParam0) //Position: 0x9860 / 39008
{
	if (Function_209(bParam0))
	{
		Function_208(bLocal_314, bLocal_496, 2);
	}
	return;
}

void Function_208(bool bParam0, bool bParam1, int iParam2) //Position: 0x987B / 39035
{
	if (IS_GRINGO_VALID(bParam1))
	{
		TASK_CLEAR(bParam0);
		TASK_PRIORITY_SET(bParam0, true);
		TASK_USE_GRINGO(bParam0, bParam1, "UseCase1", 4294967295, iParam2);
	}
	else
	{
		TASK_CLEAR(bParam0);
		TASK_PRIORITY_SET(bParam0, true);
		TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
	}
	return;
}

bool Function_209(bool bParam0) //Position: 0x98BF / 39103
{
	if (!IS_GRINGO_VALID(bLocal_496) || !IS_GRINGO_VALID(bLocal_497))
	{
		GET_OBJECT_POSITION(bParam0, &vLocal_458);
		Function_210(StackVal, StackVal, vLocal_458, &bLocal_496, &bLocal_497);
		if (!IS_GRINGO_VALID(bLocal_496))
		{
			return 0;
		}
		if (!IS_GRINGO_VALID(bLocal_497))
		{
			return 0;
		}
	}
	return 1;
}

void Function_210(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9907 / 39175
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_211(bool bParam0, bool bParam1) //Position: 0x99B1 / 39345
{
	DECOR_SET_OBJECT(Global_34573, "SettingPlayerHorse", bParam0);
	DECOR_SET_BOOL(Global_34573, "NewPlayerHorse_Wipe", bParam1);
	return;
}

void Function_212(bool bParam0) //Position: 0x99F4 / 39412
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

void Function_213() //Position: 0x9A18 / 39448
{
	if (_GET_AMMO_AMOUNT(Global_34573, 8, 0) > 60.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 8, 60.0f, 0);
	}
	if (!ACTOR_HAS_WEAPON(Global_34573, 8))
	{
		SET_WEAPONENUM_LOCKED(8, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 1.0f, 0, 1);
		if (Global_26055[10])
		{
			SET_WEAPON_GOLD(Global_34573, 8, true);
		}
	}
	if (ACTOR_GET_NEXT_EQUIP_SLOT(Global_34573) != 5)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 5, 0);
	}
	if (GET_WEAPON_EQUIPPED(Global_34573, 5) != 8)
	{
		ACTOR_SET_NEXT_WEAPON(Global_34573, 8);
	}
	return;
}

void Function_214() //Position: 0x9A95 / 39573
{
	if (GET_CURRENT_ACTOR_ENUM_VARIATION(Global_34573) != 0)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			ACTOR_DISMOUNT_NOW(Global_34573);
		}
		SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 0);
	}
	if (!Function_104(4))
	{
		Function_216(4, 1);
	}
	if (!Function_104(3))
	{
		Function_216(3, 1);
	}
	if (Function_104(1))
	{
		Function_216(1, 0);
	}
	if (HAS_ITEM(Function_215(20), Global_34573))
	{
		DELETE_ITEM(Function_215(20), Global_34573, 0);
	}
	if (iLocal_475)
	{
		iLocal_475 = 0;
		STREAMING_EVICT_ACTOR(false, Function_206(14));
	}
	return;
}

var Function_215(bool bParam0) //Position: 0x9B0E / 39694
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_216(bool bParam0, bool bParam1) //Position: 0x9BFF / 39935
{
	switch (bParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_12976 + 104)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, true);
			}
			else
			{
				(*&Global_12976 + 104)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 9, 200.0f);
				(*&Global_12976 + 104)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, false);
				(*&Global_12976 + 104)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 10, 200.0f);
				(*&Global_12976 + 104)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, false);
				(*&Global_12976 + 104)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, false);
				(*&Global_12976 + 104)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, true);
				(*&Global_12976 + 104)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_12976 + 104)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
			}
			else
			{
				(*&Global_12976 + 104)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, false);
			}
			break;
	}
	return;
}

void Function_217() //Position: 0x9D72 / 40306
{
	if (IS_OBJECT_VALID(bLocal_453))
	{
		DESTROY_OBJECT(bLocal_453);
	}
	return;
}

void Function_218(bool bParam0) //Position: 0x9D87 / 40327
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_314)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_314, 334, 0, 2, 0);
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_314)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_314));
	}
	return;
}

void Function_219() //Position: 0x9DC4 / 40388
{
	if (IS_BLIP_VALID(bLocal_473))
	{
		REMOVE_BLIP(bLocal_473);
	}
	return;
}

void Function_220() //Position: 0x9DD9 / 40409
{
	if (IS_OBJECT_VALID(bLocal_452))
	{
		Function_221(bLocal_452);
	}
	return;
}

void Function_221(bool bParam0) //Position: 0x9DEE / 40430
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

void Function_222() //Position: 0x9E78 / 40568
{
	if (IS_OBJECT_VALID(bLocal_512))
	{
		DESTROY_OBJECT(bLocal_512);
	}
	return;
}

void Function_223() //Position: 0x9E8D / 40589
{
	if (IS_OBJECT_VALID(bLocal_510))
	{
		DESTROY_OBJECT(bLocal_510);
	}
	return;
}

void Function_224() //Position: 0x9EA2 / 40610
{
	if (IS_ACTOR_VALID(bLocal_315))
	{
		DESTROY_ACTOR(bLocal_315);
	}
	return;
}

void Function_225() //Position: 0x9EB7 / 40631
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1030);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1031);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1032);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1037);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1038);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1039);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1040);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1012);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1013);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1014);
	return;
}

void Function_226() //Position: 0x9F11 / 40721
{
	Function_227();
	return;
}

void Function_227() //Position: 0x9F1A / 40730
{
	Function_228();
	return;
}

void Function_228() //Position: 0x9F23 / 40739
{
	ABORT_SCRIPTED_CONVERSATION(0);
	Function_230();
	Function_229();
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	if (IS_OBJECT_VALID(Local_301.f_16))
	{
		DESTROY_OBJECT(Local_301.f_16);
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	return;
}

void Function_229() //Position: 0x9F51 / 40785
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_230() //Position: 0x9F63 / 40803
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_231() //Position: 0x9F78 / 40824
{
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "ncottage02", 1);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 1);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, false))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, false);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Cottage02 (Front) door #1!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable01", 1);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (!IS_DOOR_LOCKED(bLocal_454))
		{
			Function_120(bLocal_454, 0);
		}
		if (IS_DOOR_OPENED(bLocal_454) || IS_DOOR_OPENING(bLocal_454))
		{
			CLOSE_DOOR_FAST(bLocal_454);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable01 (Front Left) door #1!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable01", 2);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (!IS_DOOR_LOCKED(bLocal_454))
		{
			Function_120(bLocal_454, 0);
		}
		if (IS_DOOR_OPENED(bLocal_454) || IS_DOOR_OPENING(bLocal_454))
		{
			CLOSE_DOOR_FAST(bLocal_454);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable01 (Front Right) door #2!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable01", 3);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (!IS_DOOR_LOCKED(bLocal_454))
		{
			Function_120(bLocal_454, 0);
		}
		if (IS_DOOR_OPENED(bLocal_454) || IS_DOOR_OPENING(bLocal_454))
		{
			CLOSE_DOOR_FAST(bLocal_454);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable01 (Back Left) door #3!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable01", 4);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (!IS_DOOR_LOCKED(bLocal_454))
		{
			Function_120(bLocal_454, 0);
		}
		if (IS_DOOR_OPENED(bLocal_454) || IS_DOOR_OPENING(bLocal_454))
		{
			CLOSE_DOOR_FAST(bLocal_454);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable01 (Back Right) door #4!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable02", 2);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (!IS_DOOR_LOCKED(bLocal_454))
		{
			Function_120(bLocal_454, 0);
		}
		if (IS_DOOR_OPENED(bLocal_454) || IS_DOOR_OPENING(bLocal_454))
		{
			CLOSE_DOOR_FAST(bLocal_454);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable02 (Cooop) door #2!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable02", 4);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (!IS_DOOR_LOCKED(bLocal_454))
		{
			Function_120(bLocal_454, 0);
		}
		if (IS_DOOR_OPENED(bLocal_454) || IS_DOOR_OPENING(bLocal_454))
		{
			CLOSE_DOOR_FAST(bLocal_454);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable02 (Corral) door #4!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable02", 5);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (!IS_DOOR_LOCKED(bLocal_454))
		{
			Function_120(bLocal_454, 0);
		}
		if (IS_DOOR_OPENED(bLocal_454) || IS_DOOR_OPENING(bLocal_454))
		{
			CLOSE_DOOR_FAST(bLocal_454);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable02 (Corral) door #5!");
		return 0;
	}
	return 1;
}

bool Function_232(int iParam0, int iParam1, char* cParam2, int iParam3) //Position: 0xA432 / 42034
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_81(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	iParam1 = iParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

void Function_233(bool bParam0) //Position: 0xA4CE / 42190
{
	if (bParam0)
	{
		Function_189(1048576);
	}
	else
	{
		Function_162(1048576);
	}
	return;
}

int Function_234(bool bParam0) //Position: 0xA4EA / 42218
{
	if (!Function_235(bParam0, "TRAIN_RELEASE"))
	{
		return 0;
	}
	if (bParam0 == Global_34207)
	{
		(&Global_34208 + 12)->f_348 = 0;
	}
	else if (bParam0 == Global_34206)
	{
		(&Global_34208 + 724)->f_348 = 0;
	}
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(bParam0, 4294967295, 1);
	return 1;
}

bool Function_235(int iParam0, int iParam1) //Position: 0xA539 / 42297
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA548 / 42312
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_237(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_237(int iParam0) //Position: 0xA56C / 42348
{
	int iVar0;
	
	switch (iParam0)
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

void Function_238() //Position: 0xAAA9 / 43689
{
	var uVar0[8];
	int iVar9;
	
	if (Function_325())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Retry";
		uVar0[2] = "Stage 02 - Fuzzy Rabbits";
		uVar0[3] = "Stage 03 - Wiley Coyotes";
		uVar0[4] = "Last Stage - Mission End";
		if (!iLocal_476)
		{
			uVar0[5] = "Fast Mode On";
		}
		else
		{
			uVar0[5] = "Fast Mode Off";
		}
		uVar0[6] = "Kill All Enemies";
		uVar0[7] = "Kill All Blipped Enemies";
		iVar9 = Function_311(&uLocal_294, &uVar0, &Local_259 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_310(&iVar9, &iLocal_308, &iLocal_309, &Local_301))
		{
			Function_303();
		}
		if (iVar9 == 0)
		{
			Function_303();
			Function_302(&bLocal_350, 8);
		}
		else if (iVar9 == 1)
		{
			Function_303();
			Function_297(iLocal_308);
			Function_289(StackVal, StackVal, 5, &bLocal_351, &iLocal_308, Function_300(iLocal_308), Function_297(iLocal_308), 0);
		}
		else if (iVar9 == 2)
		{
			Function_303();
			Function_288(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_287(0);
			Function_281();
			iLocal_308 = 1;
			Local_301 = 1000;
			Function_278(0, "STAGE 02 - INITIALIZE");
		}
		else if (iVar9 == 3)
		{
			Function_303();
			Function_288(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_287(0);
			Function_269();
			iLocal_308 = 2;
			Local_301 = 1000;
			Function_278(0, "STAGE 03 - INITIALIZE");
		}
		else if (iVar9 == 4)
		{
			Function_303();
			Function_288(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_287(0);
			Function_244();
			iLocal_308 = 101;
			Local_301 = 1000;
			Function_278(0, "LAST STAGE - INITIALIZE");
		}
		else if (iVar9 == 5)
		{
			Function_303();
			Function_243();
		}
		else if (iVar9 == 6)
		{
			Function_303();
			Function_242();
		}
		else if (iVar9 == 7)
		{
			Function_303();
			Function_239();
		}
	}
	return;
}

void Function_239() //Position: 0xACF0 / 44272
{
	if (SQUAD_IS_VALID(Local_4.f_320))
	{
		if (Function_241(Local_4.f_320, 1))
		{
			Function_240(&Local_4 + 320);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_312))
	{
		if (Function_241(Local_4.f_312, 1))
		{
			Function_240(&Local_4 + 312);
		}
	}
	return;
}

void Function_240(int iParam0) //Position: 0xAD34 / 44340
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

bool Function_241(bool bParam0, bool bParam1) //Position: 0xAD83 / 44419
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_242() //Position: 0xADD9 / 44505
{
	if (SQUAD_IS_VALID(Local_4.f_320))
	{
		Function_240(&Local_4 + 320);
	}
	if (SQUAD_IS_VALID(Local_4.f_312))
	{
		Function_240(&Local_4 + 312);
	}
	return;
}

void Function_243() //Position: 0xAE05 / 44549
{
	if (!iLocal_476)
	{
		iLocal_476 = 1;
	}
	else
	{
		iLocal_476 = 0;
	}
	return;
}

void Function_244() //Position: 0xAE1D / 44573
{
	Function_236(&iLocal_477, 0, 0, 4294967295, 4294967295);
	Function_267(32);
	Function_264();
	Function_226();
	Function_263();
	Function_262();
	Function_261();
	Function_259();
	Function_256();
	Function_223();
	Function_222();
	Function_220();
	Function_219();
	Function_218(0);
	Function_217();
	Function_255();
	Function_253();
	Function_214();
	Function_213();
	Function_212(1);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_315);
	Function_252(0, 0);
	Function_251(1);
	Function_250();
	Function_249();
	Function_248(1);
	CLEAR_ACTOR_MAX_SPEED(bLocal_313);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_313, true);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 43, 1);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 48, 1);
	AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,72f);
	SET_ACTOR_INVULNERABILITY(bLocal_313, true);
	Function_247();
	SET_ACTOR_INVULNERABILITY(bLocal_314, true);
	Function_246();
	SET_ACTOR_INVULNERABILITY(bLocal_315, true);
	Function_245();
	return;
}

void Function_245() //Position: 0xAED9 / 44761
{
	TASK_CLEAR(bLocal_315);
	TASK_PRIORITY_SET(bLocal_315, true);
	TASK_STAND_STILL(bLocal_315, -1.0f, 0, 0);
	return;
}

void Function_246() //Position: 0xAEF5 / 44789
{
	TASK_CLEAR(bLocal_314);
	TASK_PRIORITY_SET(bLocal_314, true);
	TASK_STAND_STILL(bLocal_314, -1.0f, 0, 0);
	return;
}

void Function_247() //Position: 0xAF11 / 44817
{
	TASK_CLEAR(bLocal_313);
	TASK_PRIORITY_SET(bLocal_313, true);
	TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
	return;
}

void Function_248(bool bParam0) //Position: 0xAF2D / 44845
{
	if (ACTOR_HAS_ANIM_SET(bLocal_313, "aiming_point"))
	{
		if (bParam0)
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_313, 1);
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(bLocal_313, "aiming_point/aimingpointcleanup");
		}
	}
	AI_GOAL_AIM_CLEAR(bLocal_313);
	return;
}

void Function_249() //Position: 0xAF89 / 44937
{
	AI_GOAL_LOOK_CLEAR(bLocal_313);
	return;
}

void Function_250() //Position: 0xAF95 / 44949
{
	bLocal_501 = true;
	bLocal_502 = false;
	bLocal_503 = false;
	bLocal_504 = false;
	bLocal_505 = false;
	return;
}

void Function_251(bool bParam0) //Position: 0xAFAF / 44975
{
	iLocal_506 = 0;
	if (ACTOR_HAS_ANIM_SET(bLocal_313, "wave"))
	{
		if (bParam0)
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_313, 1);
		}
	}
	return;
}

void Function_252(bool bParam0, int iParam1) //Position: 0xAFD5 / 45013
{
	if (bParam0)
	{
		if (!Function_161(GET_WEAPON_IN_HAND(bLocal_313)))
		{
			ACTOR_DRAW_ANY_WEAPON(bLocal_313, iParam1);
			MEMORY_ALLOW_SHOOTING(bLocal_313, true);
			MEMORY_ALLOW_THROWING_EXPLOSIVES(bLocal_313, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_313, 0);
		}
	}
	else if (Function_161(GET_WEAPON_IN_HAND(bLocal_313)))
	{
		ACTOR_HOLSTER_WEAPON(bLocal_313, iParam1);
		MEMORY_ALLOW_SHOOTING(bLocal_313, false);
		MEMORY_ALLOW_THROWING_EXPLOSIVES(bLocal_313, 0);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_313, 1);
	}
	return;
}

void Function_253() //Position: 0xB038 / 45112
{
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	Function_254(&bLocal_328);
	return;
}

void Function_254(bool bParam0) //Position: 0xB04B / 45131
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_255() //Position: 0xB05F / 45151
{
	bLocal_496 = "";
	bLocal_497 = "";
	return;
}

void Function_256() //Position: 0xB06F / 45167
{
	Function_257();
	if (IS_OBJECT_VALID(Local_4.f_988))
	{
		DESTROY_OBJECT(Local_4.f_988);
	}
	if (IS_OBJECT_VALID(Local_4.f_964))
	{
		DESTROY_OBJECT(Local_4.f_964);
	}
	if (IS_OBJECT_VALID(Local_4.f_968))
	{
		DESTROY_OBJECT(Local_4.f_968);
	}
	if (IS_OBJECT_VALID(Local_4.f_972))
	{
		DESTROY_OBJECT(Local_4.f_972);
	}
	if (IS_OBJECT_VALID(Local_4.f_976))
	{
		DESTROY_OBJECT(Local_4.f_976);
	}
	if (IS_OBJECT_VALID(Local_4.f_980))
	{
		DESTROY_OBJECT(Local_4.f_980);
	}
	if (IS_OBJECT_VALID(Local_4.f_1000))
	{
		DESTROY_OBJECT(Local_4.f_1000);
	}
	return;
}

void Function_257() //Position: 0xB0FD / 45309
{
	Function_258();
	if (IS_OBJECT_VALID(Local_4.f_996))
	{
		DESTROY_OBJECT(Local_4.f_996);
	}
	if (IS_OBJECT_VALID(Local_4.f_984))
	{
		DESTROY_OBJECT(Local_4.f_984);
	}
	return;
}

void Function_258() //Position: 0xB12C / 45356
{
	if (IS_OBJECT_VALID(Local_4.f_992))
	{
		DESTROY_OBJECT(Local_4.f_992);
	}
	if (IS_OBJECT_VALID(Local_4.f_1004))
	{
		DESTROY_OBJECT(Local_4.f_1004);
	}
	if (IS_OBJECT_VALID(Local_4.f_1008))
	{
		DESTROY_OBJECT(Local_4.f_1008);
	}
	return;
}

void Function_259() //Position: 0xB16B / 45419
{
	if (SQUAD_IS_VALID(Local_4.f_316))
	{
		Function_260(&Local_4 + 316);
		DESTROY_OBJECT(Local_4.f_316);
	}
	return;
}

void Function_260(var uParam0) //Position: 0xB18C / 45452
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
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

void Function_261() //Position: 0xB1D3 / 45523
{
	iLocal_471 = 0;
	while (iLocal_471 <= 10)
	{
		if (IS_ACTOR_VALID(Local_634[iLocal_4716]))
		{
			DESTROY_ACTOR(Local_634[iLocal_4716]);
		}
		iLocal_471++;
	}
	if (SQUAD_IS_VALID(Local_4.f_256))
	{
		Function_260(&Local_4 + 256);
		DESTROY_OBJECT(Local_4.f_256);
	}
	return;
}

void Function_262() //Position: 0xB224 / 45604
{
	iLocal_471 = 0;
	while (iLocal_471 <= 6)
	{
		if (IS_ACTOR_VALID(Local_603[iLocal_4715]))
		{
			DESTROY_ACTOR(Local_603[iLocal_4715]);
		}
		iLocal_471++;
	}
	if (SQUAD_IS_VALID(Local_4.f_312))
	{
		Function_260(&Local_4 + 312);
		DESTROY_OBJECT(Local_4.f_312);
	}
	return;
}

void Function_263() //Position: 0xB274 / 45684
{
	iLocal_471 = 0;
	while (iLocal_471 <= 7)
	{
		if (IS_OBJECT_VALID(Local_524[iLocal_47111].f_16))
		{
			DESTROY_OBJECT(Local_524[iLocal_47111].f_16);
		}
		if (IS_VOLUME_VALID(Local_524[iLocal_47111].f_12))
		{
			DESTROY_VOLUME(Local_524[iLocal_47111].f_12);
		}
		if (IS_ACTOR_VALID(StackVal))
		{
			DESTROY_ACTOR(StackVal);
		}
		iLocal_471++;
	}
	if (SQUAD_IS_VALID(Local_4.f_320))
	{
		Function_260(&Local_4 + 320);
		DESTROY_OBJECT(Local_4.f_320);
	}
	return;
}

void Function_264() //Position: 0xB302 / 45826
{
	if (Function_266(Global_34207))
	{
		Function_265();
	}
	Function_162(114688);
	bLocal_474 = true;
	return;
}

void Function_265() //Position: 0xB31F / 45855
{
	GET_OBJECT_POSITION((*&Local_4 + 628)[1], &vLocal_458);
	GET_OBJECT_ORIENTATION((*&Local_4 + 628)[1], &Local_464);
	UNK_0x44986367(StackVal, &Local_464);
	TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
	TRAIN_SET_POSITION_DIRECTION(Global_34207, &vLocal_458, &Local_464);
	return;
}

bool Function_266(bool bParam0) //Position: 0xB361 / 45921
{
	if (!Function_235(bParam0, "TRAIN_HAS_BEEN_STOLEN"))
	{
		return 0;
	}
	if (!TRAIN_GET_NUM_CARS(bParam0) < 0)
	{
		return 0;
	}
	if (bParam0 == Global_34207)
	{
		return (&Global_34208 + 12)->f_348;
	}
	if (bParam0 == Global_34206)
	{
		return (&Global_34208 + 724)->f_348;
	}
	return 0;
}

void Function_267(int iParam0) //Position: 0xB3BE / 46014
{
	if ((Global_63399 && iParam0) == 0)
	{
		Function_268(iParam0);
	}
	return;
}

void Function_268(int iParam0) //Position: 0xB3D3 / 46035
{
	bool bVar0;
	
	if (Global_63399 == iParam0)
	{
		return;
	}
	if (!iParam0 & 1 != 0)
	{
		bVar0 = Global_63400;
	}
	else if (!iParam0 & 2 != 0)
	{
		bVar0 = Global_63401;
	}
	else if (!iParam0 & 4 != 0)
	{
		bVar0 = Global_63402;
	}
	else if (!iParam0 & 8 != 0)
	{
		bVar0 = Global_63403;
	}
	else if (!iParam0 & 16 != 0)
	{
		bVar0 = Global_63404;
	}
	else if (!iParam0 & 32 != 0)
	{
		bVar0 = Global_63405;
	}
	else
	{
		LOG_ERROR("SET_TIME_OF_DAY_REGION got an invalid TOD_REGION");
	}
	ADD_TIME(&bVar0, 0, false, false, 1);
	SET_TIME_OF_DAY(bVar0);
	return;
}

void Function_269() //Position: 0xB495 / 46229
{
	Function_236(&iLocal_477, 0, 0, 4294967295, 4294967295);
	Function_267(32);
	Function_264();
	Function_227();
	Function_277();
	Function_263();
	Function_257();
	Function_276();
	Function_275();
	Function_220();
	Function_219();
	Function_271(0);
	Function_218(0);
	Function_217();
	Function_255();
	Function_253();
	Function_214();
	Function_213();
	Function_212(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_315);
	Function_270();
	Function_252(0, 0);
	Function_251(1);
	Function_250();
	Function_249();
	Function_248(1);
	CLEAR_ACTOR_MAX_SPEED(bLocal_313);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_313);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_313, true);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 43, 1);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 48, 1);
	AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,72f);
	SET_ACTOR_INVULNERABILITY(bLocal_313, true);
	Function_247();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
	SET_ACTOR_INVULNERABILITY(bLocal_314, true);
	Function_246();
	SET_ACTOR_INVULNERABILITY(bLocal_315, true);
	Function_245();
	return;
}

void Function_270() //Position: 0xB558 / 46424
{
	if (!ACTOR_HAS_WEAPON(bLocal_313, 8))
	{
		SET_WEAPONENUM_LOCKED(8, 0);
		GIVE_WEAPON_TO_ACTOR(bLocal_313, 8, 1.0f, 1, 1);
	}
	if (ACTOR_GET_NEXT_EQUIP_SLOT(bLocal_313) != 5)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(bLocal_313, 5, 0);
	}
	if (GET_WEAPON_EQUIPPED(bLocal_313, 5) != 8)
	{
		ACTOR_SET_NEXT_WEAPON(bLocal_313, 8);
	}
	return;
}

void Function_271(bool bParam0) //Position: 0xB5A2 / 46498
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(Function_274(3)))
		{
			Function_272(3, 1, 1);
		}
	}
	else if (IS_BLIP_VALID(Function_274(3)))
	{
		Function_272(3, 0, 1);
	}
	return;
}

void Function_272(int iParam0, bool bParam1, bool bParam2) //Position: 0xB5D1 / 46545
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
						Function_203(bVar1);
					}
				}
				Function_273(bVar0);
			}
		}
	}
	return;
}

void Function_273(bool bParam0) //Position: 0xB6C8 / 46792
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

var Function_274(int iParam0) //Position: 0xB6F4 / 46836
{
	return Global_8492[iParam014].f_52;
}

void Function_275() //Position: 0xB703 / 46851
{
	if (!IS_OBJECT_VALID(bLocal_512))
	{
		bLocal_512 = CREATE_EVENT_TRAP("PlayerKilled", 2, bLocal_258);
		if (IS_OBJECT_VALID(bLocal_512))
		{
			EVENT_TRAP_STORE_EVENTS(bLocal_512, 1);
		}
		else
		{
			LOG_ERROR("Failed to create 'PlayerKilled' event trap!");
		}
	}
	return;
}

void Function_276() //Position: 0xB770 / 46960
{
	if (!IS_OBJECT_VALID(bLocal_510))
	{
		bLocal_510 = CREATE_EVENT_TRAP("PlayerShoot", 6, bLocal_258);
		if (IS_OBJECT_VALID(bLocal_510))
		{
			EVENT_TRAP_ON_PERPETRATOR(bLocal_510, Global_34573);
		}
		else
		{
			LOG_ERROR("Failed to create 'PlayerShoot' event trap!");
		}
	}
	return;
}

void Function_277() //Position: 0xB7DD / 47069
{
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 364)[13]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 364)[13], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[13]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[13]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 364)[0]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 364)[0], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[0]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[0]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 364)[9]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 364)[9], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[9]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[9]);
	return;
}

void Function_278(bool bParam0, int iParam1) //Position: 0xB875 / 47221
{
	Function_279(&bLocal_316);
	iLocal_309 = bParam0;
	return;
}

void Function_279(bool bParam0) //Position: 0xB886 / 47238
{
	Function_280(bParam0, 0.0f);
	return;
}

void Function_280(bool bParam0, float fParam1) //Position: 0xB892 / 47250
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(bParam0, 1);
	Function_36(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_281() //Position: 0xB8B3 / 47283
{
	Function_236(&iLocal_477, 0, 0, 4294967295, 4294967295);
	Function_264();
	Function_228();
	Function_258();
	Function_220();
	Function_219();
	Function_271(0);
	Function_218(0);
	Function_217();
	Function_255();
	Function_253();
	if (Function_283(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_259, iLocal_308))
	{
		Function_282();
	}
	else
	{
		Function_214();
		Function_213();
	}
	Function_212(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_315);
	Function_251(1);
	Function_250();
	Function_249();
	Function_248(1);
	CLEAR_ACTOR_MAX_SPEED(bLocal_313);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_313);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_313, true);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 43, 1);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 48, 1);
	AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,72f);
	SET_ACTOR_INVULNERABILITY(bLocal_313, true);
	Function_247();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
	SET_ACTOR_INVULNERABILITY(bLocal_314, true);
	Function_246();
	SET_ACTOR_INVULNERABILITY(bLocal_315, true);
	Function_245();
	return;
}

void Function_282() //Position: 0xB971 / 47473
{
	if (GET_CURRENT_ACTOR_ENUM_VARIATION(Global_34573) != 14)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			ACTOR_DISMOUNT_NOW(Global_34573);
		}
		SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 14);
	}
	if (Function_104(4))
	{
		Function_216(4, 0);
	}
	if (Function_104(3))
	{
		Function_216(3, 0);
	}
	return;
}

bool Function_283(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0xB9B1 / 47537
{
	if (Function_285(&iParam0) == iParam7 || Function_284())
	{
		return 1;
	}
	return 0;
}

bool Function_284() //Position: 0xB9D0 / 47568
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

int Function_285(int iParam0) //Position: 0xB9EB / 47595
{
	if (Function_286(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

bool Function_286(int iParam0) //Position: 0xBA03 / 47619
{
	return iParam0->f_20;
}

void Function_287(bool bParam0) //Position: 0xBA0D / 47629
{
	if (bParam0)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ACTOR_INVULNERABILITY(Global_34573, false);
	}
	else
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SET_ACTOR_INVULNERABILITY(Global_34573, true);
	}
	return;
}

void Function_288(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xBA37 / 47671
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

void Function_289(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xBA60 / 47712
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_294(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_290(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_290(int iParam0) //Position: 0xBA9D / 47773
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_293("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_292(2) || Function_292(8)) || Function_292(9)) || Function_292(10))
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
		Function_293("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_293("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_293("");
	}
	else if (iParam0 == 8)
	{
		Function_291();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_291();
	}
	return;
}

void Function_291() //Position: 0xBB94 / 48020
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_292(int iParam0) //Position: 0xBBA0 / 48032
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

void Function_293(bool bParam0) //Position: 0xBBD6 / 48086
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_294(vector3 vParam0, var uParam3, var uParam4) //Position: 0xBC40 / 48192
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_296(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_295(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_295(int iParam0) //Position: 0xBCC3 / 48323
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

var Function_296(vector3 vParam0, bool bParam3) //Position: 0xC173 / 49523
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

vector3 Function_297(int iParam0) //Position: 0xC1DE / 49630
{
	Function_298(iParam0 + 1);
	return StackVal, StackVal, Function_298(iParam0 + 1);
}

vector3 Function_298(int iParam0) //Position: 0xC1EB / 49643
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_299((*&Local_4 + 532)[0]);
			return StackVal, StackVal, Function_299((*&Local_4 + 532)[0]);
			break;
		
		case 0x00000001:
			Function_299((*&Local_4 + 552)[0]);
			return StackVal, StackVal, Function_299((*&Local_4 + 552)[0]);
			break;
		
		case 0x00000002:
			Function_299((*&Local_4 + 580)[2]);
			return StackVal, StackVal, Function_299((*&Local_4 + 580)[2]);
			break;
		
		default:
			Function_299((*&Local_4 + 604)[0]);
			return StackVal, StackVal, Function_299((*&Local_4 + 604)[0]);
			break;
	}
	Function_299((*&Local_4 + 532)[0]);
	return StackVal, StackVal, Function_299((*&Local_4 + 532)[0]);
}

vector3 Function_299(bool bParam0) //Position: 0xC251 / 49745
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

int Function_300(int iParam0) //Position: 0xC278 / 49784
{
	return Function_301(iParam0 + 1);
}

int Function_301(int iParam0) //Position: 0xC285 / 49797
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 532)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 552)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 580)[2]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 604)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 532)[0]);
}

void Function_302(bool bParam0, int iParam1) //Position: 0xC2EB / 49899
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_290(iParam1);
	*bParam0 = 1;
	return;
}

void Function_303() //Position: 0xC30E / 49934
{
	Function_305();
	Function_304(10, 3);
	return;
}

void Function_304(int iParam0, int iParam1) //Position: 0xC31D / 49949
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

void Function_305() //Position: 0xC454 / 50260
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_309())
	{
		Function_308(10, 3);
	}
	else
	{
		Function_306();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_306() //Position: 0xC49F / 50335
{
	Function_307(25, 2);
	return;
}

void Function_307(int iParam0, int iParam1) //Position: 0xC4AB / 50347
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

void Function_308(int iParam0, int iParam1) //Position: 0xC6A9 / 50857
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

bool Function_309() //Position: 0xC7E0 / 51168
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

bool Function_310(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC847 / 51271
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_303();
			Function_230();
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
		Function_293("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_311(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC8ED / 51437
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_324(&Var15, &Var0);
	uVar20 = Function_323(*uParam1, &Var15);
	Function_322(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_321(uParam0, uVar20);
	Function_319(StackVal, uParam0, Var15.f_12);
	Function_317(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_316(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_313(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_312(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_312(int iParam0, int iParam1, int iParam2) //Position: 0xC9B4 / 51636
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

bool Function_313(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xCA10 / 51728
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
				Function_315(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_315(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_312(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_314(bParam1->f_32);
	}
	else
	{
		Function_314(bParam1->f_32);
	}
	return 0;
}

void Function_314(bool bParam0) //Position: 0xCB96 / 52118
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

void Function_315(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xCBD0 / 52176
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

var Function_316(int iParam0, var uParam1, int iParam2) //Position: 0xCC7E / 52350
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_317(var uParam0, int iParam1, int iParam2) //Position: 0xCCA2 / 52386
{
	switch (Function_318())
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

int Function_318() //Position: 0xCD3E / 52542
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

void Function_319(var uParam0, int iParam1, int iParam2) //Position: 0xCD7A / 52602
{
	switch (Function_320(uParam0))
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

int Function_320(bool bParam0) //Position: 0xCE12 / 52754
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

var Function_321(var uParam0, int iParam1) //Position: 0xCF5D / 53085
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

void Function_322(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xD0AC / 53420
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

var Function_323(int iParam0, int iParam1) //Position: 0xD13F / 53567
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_324(var uParam0, var uParam1) //Position: 0xD159 / 53593
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

bool Function_325() //Position: 0xD1A7 / 53671
{
	return Global_30920;
}

bool Function_326() //Position: 0xD1B0 / 53680
{
	if (IS_EXITFLAG_SET())
	{
		Function_297(iLocal_308);
		Function_289(StackVal, StackVal, 4, &bLocal_351, &iLocal_308, Function_300(iLocal_308), Function_297(iLocal_308), 0);
		return 0;
	}
	Function_714(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_259, iLocal_308, iLocal_309, &bLocal_352, &bLocal_350, &bLocal_351);
	if (iLocal_308 == 99 && iLocal_308 == 100)
	{
		if (!IS_ACTOR_ALIVE(Global_34573))
		{
			Function_297(iLocal_308);
			Function_289(StackVal, StackVal, 1, &bLocal_351, &iLocal_308, Function_300(iLocal_308), Function_297(iLocal_308), 0);
			return 1;
		}
		if ((Global_3403 || Global_3404) || Function_712(Global_34573, 1))
		{
			Function_297(iLocal_308);
			Function_289(StackVal, StackVal, 2, &bLocal_351, &iLocal_308, Function_300(iLocal_308), Function_297(iLocal_308), 0);
			return 1;
		}
		if (Function_711(2048))
		{
			Function_297(iLocal_308);
			Function_289(StackVal, StackVal, 3, &bLocal_351, &iLocal_308, Function_300(iLocal_308), Function_297(iLocal_308), 0);
			return 1;
		}
		if (Function_692(&Local_394, &uLocal_354, &uLocal_446, bLocal_312, iLocal_353))
		{
			if (Function_685(&uLocal_446))
			{
				Function_297(iLocal_308);
				Function_289(StackVal, StackVal, 5, &bLocal_351, &iLocal_308, Function_300(iLocal_308), Function_297(iLocal_308), 0);
				return 1;
			}
		}
	}
	switch (iLocal_308)
	{
		case 0x00000063:
			Function_627();
			break;
		
		case 0x00000000:
			Function_562();
			break;
		
		case 0x00000001:
			Function_522();
			break;
		
		case 0x00000002:
			Function_378();
			break;
		
		case 0x00000065:
			Function_331();
			break;
		
		case 0x00000064:
			if (Function_330(&bLocal_351))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_329(&iLocal_308, &iLocal_309, &Local_301))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_350)
	{
		Function_302(&bLocal_350, 8);
		Function_328(23, 15, 0, 23, 59, 59);
		Function_1();
		return 0;
	}
	if (bLocal_351 && iLocal_308 == 100)
	{
		Function_297(iLocal_308);
		Function_289(StackVal, StackVal, 5, &bLocal_351, &iLocal_308, Function_300(iLocal_308), Function_297(iLocal_308), 0);
	}
	if (bLocal_352)
	{
		Function_327(&bLocal_352, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_327(var uParam0, bool bParam1) //Position: 0xD36B / 54123
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_290(bParam1);
	*uParam0 = 1;
	return;
}

void Function_328(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD38E / 54158
{
	bool bVar0;
	bool bVar1;
	
	if (((((bParam0 > 0 || bParam1 > 0) || bParam2 > 0) || bParam3 > 0) || bParam4 > 0) || bParam5 > 0)
	{
		return;
	}
	bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
	bVar1 = MAKE_TIME_OF_DAY(bParam3, bParam4, bParam5);
	if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar0) || IS_LATER_THAN(GET_TIME_OF_DAY(), bVar1))
	{
		SET_TIME_OF_DAY(bVar0);
	}
}

bool Function_329(var uParam0, var uParam1, int iParam2) //Position: 0xD3E8 / 54248
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

bool Function_330(int iParam0) //Position: 0xD428 / 54312
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_331() //Position: 0xD43B / 54331
{
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_374(0);
			if (IS_VOLUME_VALID((*&Local_4 + 344)[2]))
			{
				Function_372();
				DESTROY_VOLUME((*&Local_4 + 344)[2]);
			}
			Function_370();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(35);
			Function_367();
			bLocal_311 = Global_30668[0];
			if (HUD_IS_FADED())
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_366(Global_34573, (*&Local_4 + 604)[0], 1, 1, 1);
				Function_278(1, "LAST STAGE - STREAMING GOAL");
			}
			else
			{
				Function_278(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_365() && STREAMING_IS_WORLD_LOADED()) && (Function_364(bLocal_311) || bLocal_311 != 4294967295))
			{
				Function_363();
				STREAMING_RELEASE_MAIN_POI();
				Function_278(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_362();
			Function_278(3, "LAST STAGE - CUTSCENE GOAL");
			break;
		
		case 0x00000003:
			if (Function_337())
			{
				Function_336(1.0f);
				Function_335();
				Function_278(106, "LAST STAGE - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			Function_332();
			bLocal_350 = true;
			break;
	}
	return;
}

void Function_332() //Position: 0xD5AD / 54701
{
	Function_334();
	Function_333();
	return;
}

void Function_333() //Position: 0xD5B9 / 54713
{
	Function_256();
	return;
}

void Function_334() //Position: 0xD5C2 / 54722
{
	if (IS_ACTOR_VALID(bLocal_315))
	{
		RELEASE_ACTOR(bLocal_315);
	}
	return;
}

void Function_335() //Position: 0xD5D7 / 54743
{
	Function_236(&iLocal_477, 0, 0, 4294967295, 4294967295);
	Function_231();
	return;
}

void Function_336(bool bParam0) //Position: 0xD5EB / 54763
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

bool Function_337() //Position: 0xD608 / 54792
{
	Function_361(&Local_301, 1, 0);
	switch (Local_301)
	{
		case 0x000003E8:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH_01_END/RANCH_01_END"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_301 = 1106;
				return 0;
			}
			Function_357(1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1);
			Function_354(Local_4, (*&Local_4 + 604)[0], &Local_4 + 324[2], 0, 0, 0, 0, 1);
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Function_288(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Global_63097 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/RANCH_01_END/RANCH_01_END", 0, 2, 1, 2, 2);
			}
			Function_279(&Local_301 + 4);
			Local_301 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_351(&Local_301 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_301 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_301.f_16 = Function_347(Local_4, 0, 1, 1, 0);
				if (IS_OBJECT_VALID(Local_301.f_16))
				{
					STREAMING_SET_POI_LIMIT(2);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_301.f_16, 1);
				}
				else
				{
					LOG_ERROR("Ranch01_Cutscene03 - Failed to create Ranch01_Cutscene03_cutscene (paused)");
				}
				Local_301 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_279(&Local_301 + 4);
				iLocal_696 = 15;
				Local_301 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				if (IS_OBJECT_VALID(Local_301.f_16))
				{
					Function_346(Local_301.f_16, 0);
				}
				else
				{
					Local_301.f_16 = Function_347(Local_4, 0, 1, 0, 0);
				}
				if (IS_OBJECT_VALID(Local_301.f_16))
				{
					STREAMING_SET_POI_LIMIT(1);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_301.f_16, 1);
				}
				else
				{
					LOG_ERROR("Ranch01_Cutscene03 - Failed to create Ranch01_Cutscene03_cutscene");
				}
				Function_343(1);
				Function_366(Global_34573, (*&Local_4 + 604)[0], 0, 0, 0);
				Function_341(bLocal_313, (*&Local_4 + 604)[2], 1, 1, 1);
				Function_366(bLocal_314, (*&Local_4 + 604)[3], 1, 1, 1);
			}
			break;
		
		case 0x000003ED:
			if (Function_340())
			{
				Local_301 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				Function_343(1);
				Function_366(Global_34573, (*&Local_4 + 604)[1], 1, 1, 1);
				Function_341(bLocal_313, (*&Local_4 + 604)[2], 1, 1, 1);
				Function_366(bLocal_314, (*&Local_4 + 604)[3], 1, 1, 1);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 324)[2]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 324)[2]);
				DESTROY_VOLUME((*&Local_4 + 324)[2]);
				Function_338(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				if (IS_OBJECT_VALID(Local_301.f_16))
				{
					DESTROY_OBJECT(Local_301.f_16);
				}
				Local_301 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Global_63097 = 0;
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_230();
				Function_229();
				Local_301 = 1104;
			}
			break;
		
		case 0x00000452:
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_230();
			Function_229();
			Local_301 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_338(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xDA14 / 55828
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
		Function_230();
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
	Function_339(iParam9);
}

void Function_339(bool bParam0) //Position: 0xDB04 / 56068
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

bool Function_340() //Position: 0xDBA9 / 56233
{
	switch (iLocal_696)
	{
		case 0x0000000F:
			if (Function_351(&Local_301 + 4) < 0.0f)
			{
				Function_132("Ranch01_savetutorial_01", 5,8f, 1, 0, 2, 1, 0);
				SET_ANIM_SET_FOR_ACTOR(Global_34573, "sleep_choice", 1);
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "sleep_choice/sleep_choice");
				iLocal_696 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_351(&Local_301 + 4) < 6.0f)
			{
				Function_132("Ranch01_savetutorial_02", 5,8f, 1, 0, 2, 1, 0);
				iLocal_696 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_351(&Local_301 + 4) < 12.0f)
			{
				Function_132("Ranch01_savetutorial_03", 5,8f, 1, 0, 2, 1, 0);
				iLocal_696 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_351(&Local_301 + 4) < 18.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_341(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xDCD8 / 56536
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
				Function_342(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_342(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0xDDEF / 56815
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

void Function_343(bool bParam0) //Position: 0xDEA8 / 57000
{
	if (IS_ACTOR_ALIVE(bLocal_315))
	{
		if (bParam0)
		{
			if (GET_MOUNT(bLocal_313) != bLocal_315)
			{
				SET_ACTORS_HORSE(bLocal_313, bLocal_315);
				ACTOR_MOUNT_ACTOR(bLocal_313, bLocal_315);
			}
		}
		else if (GET_MOUNT(bLocal_313) != bLocal_315)
		{
			MEMORY_PREFER_RIDING(bLocal_313, true);
			SET_ACTORS_HORSE(bLocal_313, bLocal_315);
			Function_344(&bLocal_313, bLocal_315, 1);
		}
	}
	return;
}

void Function_344(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDF04 / 57092
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_345(bParam1);
			vVar0 = { StackVal, StackVal, Function_345(bParam1) };
			if (bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(*bParam0, bParam1, true);
			}
			else
			{
				MEMORY_REPORT_POSITION(*bParam0, bParam1, &vVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

vector3 Function_345(bool bParam0) //Position: 0xE00C / 57356
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

void Function_346(bool bParam0, bool bParam1) //Position: 0xE076 / 57462
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_347(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xE08B / 57483
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch01_Cutscene03", 2, 1);
	}
	Function_348(&bVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_348(int iParam0) //Position: 0xE109 / 57609
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_350(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_349(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 12.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1000.0f, 1);
	return;
}

void Function_349(int iParam0) //Position: 0xE14E / 57678
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -840,13f, 93,01598f, 2366,781f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,08559f, -2,695235f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_350(int iParam0) //Position: 0xE1B1 / 57777
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,3f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -841,3113f, 95,01786f, 2371,023f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,470152f, -1,627761f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

float Function_351(bool bParam0) //Position: 0xE214 / 57876
{
	if (Function_353(bParam0))
	{
		if (Function_352(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_352(int iParam0) //Position: 0xE2DC / 58076
{
	return Function_153(*iParam0, 2);
}

bool Function_353(bool bParam0) //Position: 0xE2E9 / 58089
{
	return Function_153(*bParam0, 1);
}

void Function_354(bool bParam0, bool bParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xE2F6 / 58102
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	Function_355(StackVal, StackVal, bParam0, vVar0, uParam2, bParam3, iParam4, iParam5, iParam6, bParam7, 1);
}

void Function_355(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0xE31C / 58140
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = uParam6;
	vVar2.y = uParam7;
	vVar2.z = uParam8;
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
				Function_356(bVar1, bParam0);
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

void Function_356(bool bParam0, bool bParam1) //Position: 0xE58A / 58762
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

void Function_357(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xE5FF / 58879
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
	Function_230();
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
				Function_360(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_360(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_359()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_359()));
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
	if (Function_358(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_358(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_358(int iParam0) //Position: 0xE8A8 / 59560
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_359() //Position: 0xE8C4 / 59588
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

vector3 Function_360(bool bParam0) //Position: 0xE943 / 59715
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_361(int iParam0, bool bParam1, bool bParam2) //Position: 0xE954 / 59732
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
			Function_288(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_85(20, 1, 0, 0);
		*iParam0 = 1105;
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
			if (((((((*iParam0 == 1000 && *iParam0 == 1001) && *iParam0 == 1002) && *iParam0 == 1003) && *iParam0 == 1103) && *iParam0 == 1104) && *iParam0 == 1105) && *iParam0 == 1106)
			{
				HUD_CLEAR_BIG_TEXT();
				HUD_CLEAR_SMALL_TEXT();
				if (bParam1)
				{
					CANCEL_TIME_WARP(1);
					if (!IS_STRING_VALID(bParam2))
					{
						Function_288(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
				*iParam0 = 1105;
			}
		}
	}
	return;
}

void Function_362() //Position: 0xEAA0 / 60064
{
	Function_236(&iLocal_477, 0, 0, 4294967295, 4294967295);
	Function_252(0, 0);
	MEMORY_PREFER_RIDING(bLocal_313, false);
	Function_247();
	Function_246();
	Function_245();
	return;
}

void Function_363() //Position: 0xEAC5 / 60101
{
	return;
}

bool Function_364(bool bParam0) //Position: 0xEACB / 60107
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

bool Function_365() //Position: 0xEAE7 / 60135
{
	return 1;
}

void Function_366(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xEAEE / 60142
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

void Function_367() //Position: 0xEBF5 / 60405
{
	Function_162(12);
	Function_368(265);
	return;
}

void Function_368(int iParam0) //Position: 0xEC06 / 60422
{
	Function_369(&Global_28842, iParam0);
	return;
}

void Function_369(var uParam0, var uParam1) //Position: 0xEC14 / 60436
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_370() //Position: 0xEC37 / 60471
{
	Function_371(bLocal_313);
	Function_371(bLocal_314);
	Function_371(bLocal_315);
	return;
}

void Function_371(bool bParam0) //Position: 0xEC4F / 60495
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
		}
	}
	return;
}

void Function_372() //Position: 0xEC6F / 60527
{
	Function_373();
	return;
}

void Function_373() //Position: 0xEC78 / 60536
{
	Function_170(&Local_4 + 72);
	return;
}

void Function_374(bool bParam0) //Position: 0xEC85 / 60549
{
	Function_375(0, 0x40400000);
	Function_194();
	Function_193();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_375(bool bParam0, float fParam1) //Position: 0xECB9 / 60601
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
	Function_377();
	Function_376();
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

void Function_376() //Position: 0xEDB7 / 60855
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_377() //Position: 0xEDE9 / 60905
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

void Function_378() //Position: 0xEEE6 / 61158
{
	if (iLocal_309 < 5 && iLocal_309 > 105)
	{
		Function_521(32);
		if (IS_VOLUME_VALID((*&Local_4 + 344)[2]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 344)[2]))
			{
				Function_372();
				iLocal_479 = 0;
				DESTROY_VOLUME((*&Local_4 + 344)[2]);
			}
		}
		else if (!iLocal_479)
		{
			if (Function_365())
			{
				Function_363();
				iLocal_479 = 1;
			}
		}
		else
		{
			Function_515();
		}
		Function_514(1);
		if (!Function_472())
		{
			Function_278(106, "STAGE 03 - COMPLETE");
		}
	}
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_374(0);
			if (IS_VOLUME_VALID((*&Local_4 + 344)[1]))
			{
				Function_470();
				DESTROY_VOLUME((*&Local_4 + 344)[1]);
			}
			Function_469();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(35);
			Function_367();
			bLocal_311 = Global_30668[0];
			if (iLocal_346[1] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_288(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_366(Global_34573, (*&Local_4 + 580)[0], 1, 1, 1);
				Function_366(bLocal_313, (*&Local_4 + 580)[1], 1, 1, 1);
				Function_366(bLocal_314, (*&Local_4 + 580)[2], 1, 1, 1);
				Function_366(bLocal_315, (*&Local_4 + 580)[3], 1, 1, 1);
				Function_468();
				Function_343(1);
				Function_278(1, "STAGE 03 - STREAMING GOAL");
			}
			else
			{
				Function_278(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_460() && STREAMING_IS_WORLD_LOADED()) && (Function_364(bLocal_311) || bLocal_311 != 4294967295))
			{
				Function_459();
				Function_278(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_298(iLocal_308);
			Function_454(StackVal, StackVal, Function_298(iLocal_308), iLocal_308, Global_30628[2], Function_301(iLocal_308), 2);
			iLocal_310 = Function_453();
			Function_336(1.0f);
			Function_439();
			Function_287(1);
			Function_278(6, "STAGE 03 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_230();
				Function_438();
				Function_437();
				Function_194();
				Function_278(7, "STAGE 03 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj03_1", 7,5f, 1, 2, 0, 0, 0);
				Function_271(1);
				Function_278(12, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000C:
			Function_428(&iLocal_483, &iLocal_484, 1);
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_271(0);
				Function_218(1);
				Function_423();
				Function_278(13, "STAGE 03 - OBJ_01-LOOP_FAIL_01");
			}
			else if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_218(0);
				Function_271(1);
				Function_437();
				Function_278(14, "STAGE 03 - OBJ_01-LOOP_FAIL_02");
			}
			break;
		
		case 0x0000000D:
			if (!Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_420(2);
				if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
				{
					Function_218(0);
					Function_271(1);
					Function_437();
					Function_278(14, "STAGE 03 - OBJ_01-LOOP_FAIL_02");
				}
				else
				{
					Function_218(0);
					Function_271(1);
					Function_437();
					Function_278(12, "STAGE 03 - OBJ_01-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x0000000E:
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_271(0);
				Function_218(1);
				Function_423();
				Function_278(13, "STAGE 03 - OBJ_01-LOOP_FAIL_01");
			}
			else if (!Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_218(0);
				Function_271(1);
				Function_437();
				Function_278(12, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_230();
			Function_419();
			Function_217();
			iLocal_481 = 0;
			iLocal_482 = 0;
			Function_194();
			Function_278(16, "STAGE 03 - OBJ_02A-OBJ_01");
			break;
		
		case 0x00000010:
			if (iLocal_481 <= 1)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_436("Ranch01_obj03_2", 7,5f, 1, 2, 0, 0, 0);
					Function_271(0);
					Function_418(1);
					iLocal_481++;
					Function_278(17, "STAGE 03 - OBJ_02A-HELP_01");
				}
			}
			else
			{
				Function_278(17, "STAGE 03 - OBJ_02A-HELP_01");
			}
			break;
		
		case 0x00000011:
			if (iLocal_482 <= 1)
			{
				if (Function_351(&bLocal_316) <= 2.0f)
				{
					Function_132("Ranch01_obj03_help_1", 10.0f, 1, 0, 2, 1, 0);
					Function_417(1);
					iLocal_482++;
					Function_278(18, "STAGE 03 - OBJ_02A-HELP_02");
				}
			}
			else
			{
				Function_278(18, "STAGE 03 - OBJ_02A-HELP_02");
			}
			break;
		
		case 0x00000012:
			if (iLocal_482 <= 2)
			{
				if (Function_351(&bLocal_316) <= 10,5f)
				{
					Function_132("Ranch01_obj03_help_2", 10.0f, 1, 0, 2, 1, 0);
					SET_DEADEYE_BLINK(10.0f);
					iLocal_482++;
					Function_278(23, "STAGE 03 - OBJ_02A-LOOP_PASS_01");
				}
			}
			else
			{
				Function_278(23, "STAGE 03 - OBJ_02A-LOOP_PASS_01");
			}
			break;
		
		case 0x00000017:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_418(0);
				Function_410(14);
				Function_409(14);
				Function_278(24, "STAGE 03 - OBJ_02A-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000018:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_418(1);
				Function_217();
				Function_278(23, "STAGE 03 - OBJ_02A-LOOP_PASS_01");
			}
			break;
		
		case 0x00000019:
			Function_406();
			Function_271(0);
			Function_402(1);
			Function_409(8);
			Function_194();
			Function_278(26, "STAGE 03 - OBJ_02B-OBJ_01");
			break;
		
		case 0x0000001A:
			if (iLocal_481 <= 1)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_436("Ranch01_obj03_2", 7,5f, 1, 2, 0, 0, 0);
					iLocal_481++;
					Function_278(27, "STAGE 03 - OBJ_02B-HELP_01");
				}
			}
			else
			{
				Function_278(27, "STAGE 03 - OBJ_02B-HELP_01");
			}
			break;
		
		case 0x0000001B:
			if (iLocal_482 <= 1)
			{
				if (Function_351(&bLocal_316) <= 2.0f)
				{
					Function_132("Ranch01_obj03_help_1", 10.0f, 1, 0, 2, 1, 0);
					Function_417(1);
					iLocal_482++;
					Function_278(28, "STAGE 03 - OBJ_02B-HELP_02");
				}
			}
			else
			{
				Function_278(28, "STAGE 03 - OBJ_02B-HELP_02");
			}
			break;
		
		case 0x0000001C:
			if (iLocal_482 <= 2)
			{
				if (Function_351(&bLocal_316) <= 10,5f)
				{
					Function_132("Ranch01_obj03_help_2", 10.0f, 1, 0, 2, 1, 0);
					SET_DEADEYE_BLINK(10.0f);
					iLocal_482++;
					Function_278(33, "STAGE 03 - OBJ_02B-LOOP_PASS_01");
				}
			}
			else
			{
				Function_278(33, "STAGE 03 - OBJ_02B-LOOP_PASS_01");
			}
			break;
		
		case 0x00000021:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_402(0);
				Function_410(14);
				Function_409(14);
				Function_278(34, "STAGE 03 - OBJ_02B-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000022:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_402(1);
				Function_409(8);
				Function_278(33, "STAGE 03 - OBJ_02B-LOOP_PASS_01");
			}
			break;
		
		case 0x00000023:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_397();
				Function_437();
				Function_194();
				Function_278(36, "STAGE 03 - OBJ_03-DLG_02");
			}
			break;
		
		case 0x00000024:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!bLocal_499)
				{
					Function_396();
					Function_423();
					Function_278(37, "STAGE 03 - OBJ_03-OBJ_01");
				}
				else if (bLocal_500)
				{
					Function_395();
					Function_437();
					Function_278(43, "STAGE 03 - OBJ_03-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000025:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj03_3", 7,5f, 1, 2, 0, 0, 0);
				Function_218(1);
				Function_278(43, "STAGE 03 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002B:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_218(0);
				Function_410(14);
				Function_409(14);
				Function_278(44, "STAGE 03 - OBJ_03-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000002C:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_218(1);
				Function_423();
				Function_278(43, "STAGE 03 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_394();
				Function_437();
				Function_194();
				Function_278(46, "STAGE 03 - OBJ_04-OBJ_01");
			}
			break;
		
		case 0x0000002E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj03_4", 7,5f, 1, 2, 0, 0, 0);
				Function_218(0);
				Function_271(1);
				Function_278(52, "STAGE 03 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x00000034:
			Function_428(&iLocal_483, &iLocal_484, 1);
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_271(0);
				Function_218(1);
				Function_423();
				Function_278(53, "STAGE 03 - OBJ_04-LOOP_FAIL_01");
			}
			else if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_218(0);
				Function_271(1);
				Function_437();
				Function_278(54, "STAGE 03 - OBJ_04-LOOP_FAIL_02");
			}
			break;
		
		case 0x00000035:
			if (!Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_420(2);
				if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
				{
					Function_218(0);
					Function_271(1);
					Function_437();
					Function_278(54, "STAGE 03 - OBJ_04-LOOP_FAIL_02");
				}
				else
				{
					Function_218(0);
					Function_271(1);
					Function_437();
					Function_278(52, "STAGE 03 - OBJ_04-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000036:
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_271(0);
				Function_218(1);
				Function_423();
				Function_278(53, "STAGE 03 - OBJ_04-LOOP_FAIL_01");
			}
			else if (!Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_218(0);
				Function_271(1);
				Function_437();
				Function_278(52, "STAGE 03 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x00000037:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_391();
				Function_437();
				iLocal_482 = 0;
				Function_194();
				Function_278(56, "STAGE 03 - OBJ_05-OBJ_01");
			}
			break;
		
		case 0x00000038:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_436("Ranch01_obj03_5", 7,5f, 1, 2, 0, 0, 0);
				Function_271(0);
				Function_389(11, bLocal_314, 2.0f, 4294967295);
				Function_387();
				Function_194();
				Function_278(57, "STAGE 03 - OBJ_05-HELP_01");
			}
			break;
		
		case 0x00000039:
			if (iLocal_482 <= 1)
			{
				if (Function_351(&bLocal_316) <= 2.0f)
				{
					Function_132("Ranch01_obj03_help_3", 10.0f, 1, 0, 2, 1, 0);
					iLocal_482++;
					Function_278(62, "STAGE 03 - OBJ_05-LOOP_PASS_01");
				}
			}
			else
			{
				Function_278(62, "STAGE 03 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x0000003E:
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_220();
				Function_218(1);
				Function_423();
				Function_278(63, "STAGE 03 - OBJ_05-LOOP_FAIL_01");
			}
			else if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_220();
				Function_410(14);
				Function_409(14);
				Function_278(64, "STAGE 03 - OBJ_05-LOOP_FAIL_02");
			}
			break;
		
		case 0x0000003F:
			if (!Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_420(384);
				if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
				{
					Function_218(0);
					Function_410(14);
					Function_409(14);
					Function_278(64, "STAGE 03 - OBJ_05-LOOP_FAIL_02");
				}
				else
				{
					Function_218(0);
					Function_389(11, bLocal_314, 2.0f, 4294967295);
					Function_387();
					Function_278(62, "STAGE 03 - OBJ_05-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000040:
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_219();
				Function_218(1);
				Function_423();
				Function_278(63, "STAGE 03 - OBJ_05-LOOP_FAIL_01");
			}
			else if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_389(11, bLocal_314, 2.0f, 4294967295);
				Function_387();
				Function_278(62, "STAGE 03 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x00000041:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_220();
				Function_217();
				Function_212(1);
				Function_194();
				Function_278(67, "STAGE 03 - OBJ_06-HELP_01");
			}
			break;
		
		case 0x00000042:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_436("Ranch01_obj03_6", 7,5f, 1, 2, 0, 0, 0);
				Function_220();
				Function_217();
				Function_218(1);
				Function_423();
				Function_212(1);
				Function_194();
				Function_278(67, "STAGE 03 - OBJ_06-HELP_01");
			}
			break;
		
		case 0x00000043:
			if (iLocal_482 <= 1)
			{
				if (Function_351(&bLocal_316) <= 2.0f)
				{
					Function_132("Ranch01_obj03_help_3", 10.0f, 1, 0, 2, 1, 0);
					iLocal_482++;
					Function_278(73, "STAGE 03 - OBJ_06-LOOP_PASS_01");
				}
			}
			else
			{
				Function_278(73, "STAGE 03 - OBJ_06-LOOP_PASS_01");
			}
			break;
		
		case 0x00000049:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_218(0);
				Function_410(14);
				Function_409(14);
				Function_212(0);
				Function_278(74, "STAGE 03 - OBJ_06-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000004A:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_218(1);
				Function_423();
				Function_212(1);
				Function_278(73, "STAGE 03 - OBJ_06-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_379();
				Function_287(0);
				iLocal_308 = 101;
				iLocal_346[2] = 1;
				Function_278(0, "LAST STAGE - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_379() //Position: 0x10796 / 67478
{
	Function_386();
	Function_385();
	Function_384();
	Function_383();
	Function_380();
	Function_256();
	Function_223();
	Function_222();
	Function_218(0);
	Function_217();
	Function_255();
	Function_253();
	Function_212(1);
	Function_249();
	return;
}

void Function_380() //Position: 0x107C8 / 67528
{
	if (SQUAD_IS_VALID(Local_4.f_316))
	{
		Function_381(&Local_4 + 316, 0, 1);
		DESTROY_OBJECT(Local_4.f_316);
	}
	return;
}

void Function_381(var uParam0, bool bParam1, bool bParam2) //Position: 0x107EB / 67563
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_382(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_382(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10867 / 67687
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_383() //Position: 0x10881 / 67713
{
	iLocal_471 = 0;
	while (iLocal_471 <= 10)
	{
		if (IS_ACTOR_VALID(Local_634[iLocal_4716]))
		{
			RELEASE_ACTOR(Local_634[iLocal_4716]);
		}
		iLocal_471++;
	}
	if (SQUAD_IS_VALID(Local_4.f_256))
	{
		Function_381(&Local_4 + 256, 0, 1);
		DESTROY_OBJECT(Local_4.f_256);
	}
	return;
}

void Function_384() //Position: 0x108D4 / 67796
{
	iLocal_471 = 0;
	while (iLocal_471 <= 6)
	{
		if (IS_ACTOR_VALID(Local_603[iLocal_4715]))
		{
			RELEASE_ACTOR(Local_603[iLocal_4715]);
		}
		iLocal_471++;
	}
	if (SQUAD_IS_VALID(Local_4.f_312))
	{
		Function_381(&Local_4 + 312, 0, 1);
		DESTROY_OBJECT(Local_4.f_312);
	}
	return;
}

void Function_385() //Position: 0x10926 / 67878
{
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[2]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[2]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[3]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[3]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[15]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[15]);
	return;
}

void Function_386() //Position: 0x10970 / 67952
{
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[13]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[13]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[0]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[0]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[9]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[9]);
	return;
}

void Function_387() //Position: 0x109BC / 68028
{
	iLocal_507 = 0;
	Function_388(bLocal_452, 0.0f, 2.0f, 0.0f, 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_453, 0);
	return;
}

void Function_388(bool bParam0, vector3 vParam1, bool bParam4, float fParam5) //Position: 0x109E0 / 68064
{
	if (IS_OBJECT_VALID(bLocal_453))
	{
		SET_CAMERA_FOCUS_OBJECT(bLocal_453, bParam0, vParam1, 1.0f);
	}
else
{
	}
}

void Function_389(int iParam0, bool bParam1, float fParam2, int iParam3) //Position: 0x10A4D / 68173
{
	Function_220();
	GET_OBJECT_POSITION((*&Local_4 + 712)[iParam0], &vLocal_458);
	GET_OBJECT_ORIENTATION((*&Local_4 + 712)[iParam0], &Local_464);
	bLocal_452 = Function_390(StackVal, StackVal, StackVal, StackVal, bLocal_258, "GatewayDest", vLocal_458, Local_464, bParam1, fParam2, 1, 3, 330, iParam3, 1, 3212836864, 3212836864, 1);
	if (!IS_OBJECT_VALID(bLocal_452))
	{
		LOG_ERROR("Failed to create destination gateway!");
	}
}

bool Function_390(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x10AE5 / 68325
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, bParam8, iParam10, iParam13, 0, uParam14, uParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (bParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, bParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_391() //Position: 0x10BB0 / 68528
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_arriveHome", "Ranch01_arriveHome", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_392(int iParam0) //Position: 0x10BFD / 68605
{
	Function_393(0, Global_34573, iParam0, 0);
	Function_393(1, bLocal_313, iParam0, 0);
	return;
}

void Function_393(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x10C17 / 68631
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_394() //Position: 0x10C3C / 68668
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_bonnieEscort", "Ranch01_bonnieEscort", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395() //Position: 0x10C8D / 68749
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_pullBonnieOff", "Ranch01_pullBonnieOff", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_396() //Position: 0x10CE0 / 68832
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backonHorse_v2", "Ranch01_backonHorse_v2", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_397() //Position: 0x10D35 / 68917
{
	if ((iLocal_515 + iLocal_516) < 0 || Function_401(Local_4.f_312) > 6)
	{
		if ((iLocal_519 || (iLocal_517 + iLocal_518) < 0) || SQUAD_GET_SIZE(Local_4.f_256) > 10)
		{
			Function_400();
		}
		else
		{
			Function_399();
		}
	}
	else
	{
		Function_398();
	}
	return;
}

void Function_398() //Position: 0x10D7D / 68989
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_coyotesAway", "Ranch01_coyotesAway", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_399() //Position: 0x10DCC / 69068
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_noChickensdied", "Ranch01_noChickensdied", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_400() //Position: 0x10E21 / 69153
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_someChickensdied", "Ranch01_someChickensdied", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_401(bool bParam0) //Position: 0x10E7A / 69242
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_402(bool bParam0) //Position: 0x10EC7 / 69319
{
	if (SQUAD_IS_VALID(Local_4.f_312))
	{
		if (bParam0)
		{
			Function_405(Local_4.f_312, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			Function_404(Local_4.f_312, "Ranch01_coyote_blip");
		}
		else
		{
			Function_403(Local_4.f_312);
		}
	}
	return;
}

void Function_403(bool bParam0) //Position: 0x10F1D / 69405
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

void Function_404(bool bParam0, bool bParam1) //Position: 0x10F6A / 69482
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
				SET_BLIP_NAME(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_405(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x10FB7 / 69559
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

void Function_406() //Position: 0x110A1 / 69793
{
	if ((iLocal_310 % 2) == 0)
	{
		Function_408();
	}
	else
	{
		Function_407();
	}
	return;
}

void Function_407() //Position: 0x110B9 / 69817
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_chickenCoop_v2", "Ranch01_chickenCoop_v2", false, 2, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_408() //Position: 0x1110E / 69902
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_chickenCoop_v1", "Ranch01_chickenCoop_v1", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_409(int iParam0) //Position: 0x11163 / 69987
{
	iLocal_507 = 0;
	Function_75();
	Function_388(StackVal, StackVal, (*&Local_4 + 628)[iParam0], Function_75(), 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_453, 0);
	return;
}

void Function_410(bool bParam0) //Position: 0x1118D / 70029
{
	Function_219();
	bLocal_473 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 628)[bParam0], 330, 0f, 2, 0);
	return;
}

bool Function_411(bool bParam0, bool bParam1, bool bParam2, bool bParam3, char* cParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x111AB / 70059
{
	if (!Function_81(bParam1))
	{
		return 0;
	}
	if (StackVal == 1)
	{
		return 0;
	}
	if (StackVal && (StackVal || (StackVal || (bParam2 && Function_364(bParam1)) != 3 != 4) != 5))
	{
		if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
		{
			Function_293(cParam4);
			*uParam5 = 1;
			return 1;
		}
		if (!Global_3386)
		{
			if (!Function_416(128))
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_436(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
					Function_415(128);
				}
				if (IS_LAYOUTREF_VALID(bParam7))
				{
					Function_414(bParam7, 0, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(bParam8))
				{
					Function_414(bParam8, 0, 4294967295, 0, 0);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
				{
					ADD_BLIP_FOR_OBJECT(StackVal, bParam9, 0f, 2, 0);
				}
			}
			return 1;
		}
		if (Function_416(128))
		{
			Function_420(128);
			Function_420(256);
			if (!Function_413())
			{
				if (bParam10)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_412();
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
				}
				if (IS_LAYOUTREF_VALID(bParam7))
				{
					Function_414(bParam7, 1, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(bParam8))
				{
					Function_414(bParam8, 1, 4294967295, 0, 0);
				}
			}
		}
	}
	else if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
	{
		if (Function_416(256))
		{
			if (Function_351(bParam0) <= 8.0f)
			{
				Function_293(cParam4);
				*uParam5 = 1;
			}
		}
		else if (!Function_416(256))
		{
			if (bParam6)
			{
				Function_230();
			}
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_436(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_415(256);
				Function_279(bParam0);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_414(bParam7, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_414(bParam8, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(StackVal, bParam9, 0f, 2, 0);
			}
		}
		return 1;
	}
	if (Function_416(256))
	{
		Function_420(128);
		Function_420(256);
		if (!Function_413())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_412();
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_414(bParam7, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_414(bParam8, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_412() //Position: 0x1146C / 70764
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

bool Function_413() //Position: 0x11497 / 70807
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

void Function_414(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x114DB / 70875
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

void Function_415(bool bParam0) //Position: 0x1157C / 71036
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

bool Function_416(bool bParam0) //Position: 0x115DF / 71135
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

void Function_417(bool bParam0) //Position: 0x11626 / 71206
{
	if (bParam0)
	{
		SET_DISABLE_DEADEYE(0, 0);
		SET_DEADEYE_MULTILOCK_ENABLE(0, false);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
		SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 1);
	}
	else
	{
		SET_DISABLE_DEADEYE(0, 0);
		SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 1);
		SET_DISABLE_DEADEYE(0, 1);
		SET_DEADEYE_MULTILOCK_ENABLE(0, false);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	}
	return;
}

void Function_418(bool bParam0) //Position: 0x11667 / 71271
{
	if (bParam0)
	{
		if (IS_ACTOR_ALIVE((*&Local_4 + 260)[02]))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 260)[02])))
			{
				ADD_BLIP_FOR_ACTOR((*&Local_4 + 260)[02], 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR((*&Local_4 + 260)[02]), "Ranch01_coyote_blip");
			}
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 260)[12]))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 260)[12])))
			{
				ADD_BLIP_FOR_ACTOR((*&Local_4 + 260)[12], 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR((*&Local_4 + 260)[12]), "Ranch01_coyote_blip");
			}
		}
	}
	else
	{
		if (IS_ACTOR_ALIVE((*&Local_4 + 260)[02]))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 260)[02])))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 260)[02]));
			}
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 260)[12]))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 260)[12])))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 260)[12]));
			}
		}
	}
	return;
}

void Function_419() //Position: 0x1177B / 71547
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_spotCoyotes", "Ranch01_spotCoyotes", false, 2, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_420(bool bParam0) //Position: 0x117CA / 71626
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

bool Function_421(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1182D / 71725
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_422(Global_34573, bParam3, bParam2))
	{
		Function_293(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_422(Global_34573, bParam3, bParam1))
	{
		if (!Function_416(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_436(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_415(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_414(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_414(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_416(2))
	{
		Function_420(2);
		if (!Function_413())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_412();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_203(bParam3);
				Function_273(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_414(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_414(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_422(bool bParam0, bool bParam1, bool bParam2) //Position: 0x119C1 / 72129
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

void Function_423() //Position: 0x11AD2 / 72402
{
	iLocal_507 = 0;
	Function_424(bLocal_314, 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_453, 0);
	return;
}

void Function_424(bool bParam0, float fParam1, int iParam2) //Position: 0x11AF3 / 72435
{
	if (IS_OBJECT_VALID(bLocal_453))
	{
		Function_426(bLocal_453, bParam0, 1.0f);
	}
	else
	{
		bLocal_453 = Function_425(bLocal_258, "GenFocus", bParam0, fParam1, iParam2);
		if (!IS_OBJECT_VALID(bLocal_453))
		{
			LOG_ERROR("Failed to create Focus Object!");
		}
	}
	return;
}

bool Function_425(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x11B56 / 72534
{
	if (IS_ACTOR_RIDING(bParam2) || IS_ACTOR_RIDING_VEHICLE(bParam2))
	{
		return CREATE_CAMERA_FOCUS_POINT_OBJECT(bParam0, bParam1, bParam2, 0.0f, 0,6f, 0.0f, bParam3, uParam4);
	}
	return CREATE_CAMERA_FOCUS_POINT_OBJECT(bParam0, bParam1, bParam2, 0.0f, 1,6f, 0.0f, bParam3, uParam4);
}

void Function_426(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11B9A / 72602
{
	if (IS_ACTOR_RIDING(bParam1) || IS_ACTOR_RIDING_VEHICLE(bParam1))
	{
	}
}

bool Function_427(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x11BD1 / 72657
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_293(bParam4);
		*uParam5 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_416(8))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_436(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_415(8);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_414(bParam7, 0, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_414(bParam8, 0, 4294967295, 0, bParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam2, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam2, "MHDR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_416(8))
	{
		Function_420(8);
		if (!Function_413())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_412();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam2, "MHDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
				DECOR_REMOVE(bParam2, "MHDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_414(bParam7, 1, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_414(bParam8, 1, 4294967295, 0, bParam2);
			}
		}
	}
	return 0;
}

int Function_428(int iParam0, int iParam1, bool bParam2) //Position: 0x11D3C / 73020
{
	if (*iParam0)
	{
		if (!bParam2 || ((!Function_435() && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !IS_ANY_SPEECH_PLAYING(bLocal_313)))
		{
			switch (*iParam1)
			{
				case 0x00000000:
					*iParam0 = 0;
					if ((iLocal_310 % 2) == 0)
					{
						Function_434();
					}
					else
					{
						Function_433();
					}
					break;
				
				case 0x00000001:
					*iParam0 = 0;
					if ((iLocal_310 % 2) == 0)
					{
						Function_432();
					}
					else
					{
						Function_431();
					}
					break;
				
				case 0x00000002:
					*iParam0 = 0;
					if ((iLocal_310 % 2) == 0)
					{
						Function_430();
					}
					else
					{
						Function_429();
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

void Function_429() //Position: 0x11DC8 / 73160
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v2_AA", "Ranch01_rideHome_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v2_AB", "Ranch01_rideHome_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v2_AC1", "Ranch01_rideHome_v2_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v2_AC2", "Ranch01_rideHome_v2_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v2_AD", "Ranch01_rideHome_v2_AD", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430() //Position: 0x11F0D / 73485
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v1_AA", "Ranch01_rideHome_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v1_AB", "Ranch01_rideHome_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v1_AC", "Ranch01_rideHome_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v1_AD", "Ranch01_rideHome_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v1_AE1", "Ranch01_rideHome_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v1_AE2", "Ranch01_rideHome_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v1_AF", "Ranch01_rideHome_v1_AF", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x120C8 / 73928
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backCoral_v2_AA", "Ranch01_backCoral_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_backCoral_v2_AB", "Ranch01_backCoral_v2_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432() //Position: 0x1215C / 74076
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backCoral_v1_AA", "Ranch01_backCoral_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_backCoral_v1_AB", "Ranch01_backCoral_v1_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_433() //Position: 0x121F0 / 74224
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backyard_v2_AA", "Ranch01_backyard_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_backyard_v2_AB", "Ranch01_backyard_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backyard_v2_AC", "Ranch01_backyard_v2_AC", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x122BB / 74427
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backyard_v1_AA", "Ranch01_backyard_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_backyard_v1_AB", "Ranch01_backyard_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backyard_v1_AC", "Ranch01_backyard_v1_AC", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_435() //Position: 0x12386 / 74630
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_436(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x12393 / 74643
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

void Function_437() //Position: 0x123E6 / 74726
{
	iLocal_507 = 1;
	Function_424(bLocal_313, 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_453, 0);
	return;
}

void Function_438() //Position: 0x12407 / 74759
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_patrolRest", "Ranch01_patrolRest", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x12454 / 74836
{
	Function_236(&iLocal_477, 7, 0, 4294967295, 4294967295);
	Function_452();
	Function_451();
	Function_450();
	Function_447();
	Function_444();
	Function_442();
	ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313, -1.0f, -1.0f, 4, 1, 1);
	Function_441(Global_34573, 0x41200000);
	MEMORY_PREFER_RIDING(bLocal_313, false);
	Function_440(2);
	AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,72f);
	SET_ACTOR_INVULNERABILITY(bLocal_313, false);
	TASK_CLEAR(bLocal_313);
	TASK_PRIORITY_SET(bLocal_313, true);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_313, Local_4.f_988, 3, 1, 0, 1, false);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[14], 1, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[2]);
	SET_ACTOR_INVULNERABILITY(bLocal_314, false);
	Function_246();
	SET_ACTOR_INVULNERABILITY(bLocal_315, false);
	Function_245();
	return;
}

void Function_440(bool bParam0) //Position: 0x124FB / 75003
{
	if (!iLocal_476)
	{
		SET_ACTOR_MAX_SPEED(bLocal_313, bParam0);
	}
	else
	{
		SET_ACTOR_MAX_SPEED(bLocal_313, 4);
	}
	return;
}

void Function_441(bool bParam0, float fParam1) //Position: 0x1251A / 75034
{
	MEMORY_REPORT_POSITION_AUTO(bLocal_313, bParam0, true);
	AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_313, bParam0, fParam1, 0);
	return;
}

void Function_442() //Position: 0x12534 / 75060
{
	if (!SQUAD_IS_VALID(Local_4.f_316))
	{
		Function_443();
	}
	return;
}

void Function_443() //Position: 0x12549 / 75081
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_316 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse01", 977, -879,4494f, 91,35687f, 2337,093f, 0.0f, 192,4497f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse02", 980, -876,5347f, 91,35687f, 2342,271f, 0.0f, 222,6585f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse03", 981, -869,4607f, 91,35687f, 2354,988f, 0.0f, -19,80797f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse04", 983, -866,335f, 91,35687f, 2359,636f, 0.0f, 59,40244f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse05", 984, -863,4503f, 91,35687f, 2365,291f, 0.0f, 3,990577f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse06", 985, -874,3217f, 91,35687f, 2391,668f, 0.0f, 126,6724f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse07", 986, -882,2227f, 91,35687f, 2396,177f, 0.0f, -68,21034f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse08", 987, -890,4582f, 91,35687f, 2400,916f, 0.0f, 135,333f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse09", 988, -897,8577f, 91,35687f, 2404,774f, 0.0f, 268,4728f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse10", 989, -901,6268f, 91,35687f, 2407,653f, 0.0f, 89,60596f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_316);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	return;
}

void Function_444() //Position: 0x1283C / 75836
{
	if (!SQUAD_IS_VALID(Local_4.f_256))
	{
		Function_445();
	}
	SQUAD_SET_FACTION(Local_4.f_256, 23);
	iLocal_471 = 0;
	while (iLocal_471 <= SQUAD_GET_SIZE(Local_4.f_256))
	{
		bLocal_456 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_256, iLocal_471);
		if (IS_ACTOR_ALIVE(bLocal_456))
		{
			Local_634[bLocal_4716] = bLocal_456;
			Local_634[bLocal_4716].f_4 = 0;
			Local_634[bLocal_4716].f_8 = RAND_INT_RANGE(false, 6);
			GET_OBJECT_POSITION((*&Local_4 + 812)[StackVal], &vLocal_458);
			GET_OBJECT_ORIENTATION((*&Local_4 + 812)[StackVal], &Local_464);
			TASK_CLEAR(Local_634[bLocal_4716]);
			TASK_PRIORITY_SET(Local_634[bLocal_4716], true);
			TASK_GO_TO_COORD_AND_STAY(StackVal, Local_634[bLocal_4716], &vLocal_458, 3);
			Function_254(&Local_634[bLocal_4716] + 12);
		}
		bLocal_471++;
	}
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_256, false, (*&Local_4 + 364)[2], 4, 1);
	return;
}

void Function_445() //Position: 0x12930 / 76080
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_256 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Chicken"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken01", 1016, -877,9076f, 90,3529f, 2433,614f, 0.0f, 200,9423f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken02", 1017, -887,6166f, 90,3529f, 2437,223f, 0.0f, -159,4454f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken03", 1016, -875,7287f, 90,35431f, 2436,873f, 0.0f, 61,23708f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken04", 1017, -887,6258f, 90,35329f, 2442,593f, 0.0f, -20,53456f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken05", 1016, -884,484f, 90,35291f, 2430,686f, 0.0f, -159,7843f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken06", 1017, -882,8116f, 90,35291f, 2435,227f, 0.0f, -159,7843f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken07", 1016, -881,1894f, 90,41758f, 2439,633f, 0.0f, 20,21574f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken08", 1017, -881,8776f, 90,35291f, 2437,764f, 0.0f, 200,2157f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken09", 1016, -886,9502f, 90,3542f, 2430,525f, 0.0f, -109,1929f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nChicken10", 1017, -883,0741f, 90,48632f, 2429,158f, 0.0f, 141,056f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_256);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	Function_446(bVar0);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, 10000.0f, 0);
	return;
}

void Function_446(bool bParam0) //Position: 0x12D01 / 77057
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

void Function_447() //Position: 0x12D35 / 77109
{
	if (!SQUAD_IS_VALID(Local_4.f_312))
	{
		Function_448();
	}
	Local_603[05].f_4 = Local_4.f_936;
	Local_603[05].f_8 = Local_4.f_976;
	Local_603[05].f_12 = "";
	Local_603[15].f_4 = Local_4.f_940;
	Local_603[15].f_8 = Local_4.f_976;
	Local_603[15].f_12 = "";
	Local_603[25].f_4 = Local_4.f_944;
	Local_603[25].f_8 = Local_4.f_964;
	Local_603[25].f_12 = (*&Local_4 + 364)[4];
	Local_603[35].f_4 = Local_4.f_948;
	Local_603[35].f_8 = Local_4.f_968;
	Local_603[35].f_12 = (*&Local_4 + 364)[4];
	Local_603[45].f_4 = Local_4.f_952;
	Local_603[45].f_8 = Local_4.f_964;
	Local_603[45].f_12 = (*&Local_4 + 364)[5];
	Local_603[55].f_4 = Local_4.f_956;
	Local_603[55].f_8 = Local_4.f_968;
	Local_603[55].f_12 = (*&Local_4 + 364)[6];
	bLocal_471 = false;
	while (bLocal_471 <= SQUAD_GET_SIZE(Local_4.f_312))
	{
		bLocal_456 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_312, bLocal_471);
		if (IS_ACTOR_ALIVE(bLocal_456))
		{
			Local_603[bLocal_4715] = bLocal_456;
			Local_603[bLocal_4715].f_16 = 0;
			TASK_CLEAR(Local_603[bLocal_4715]);
			TASK_PRIORITY_SET(Local_603[bLocal_4715], true);
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(Local_603[bLocal_4715]), "UseCase1", 4294967295, 1);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(Local_603[bLocal_4715], 11, false);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[bLocal_4715], (*&Local_4 + 364)[7], 2, 1);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[bLocal_4715], (*&Local_4 + 364)[8]);
		}
		bLocal_471++;
	}
	return;
}

void Function_448() //Position: 0x12EF7 / 77559
{
	Local_4.f_312 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Coyote"));
	(*&Local_4 + 260)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote01", 1050, -857,6796f, 91,85497f, 2339,136f, 0.0f, 120,4158f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 260)[02], Local_4.f_312);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[02], false);
	TASK_STAND_STILL((*&Local_4 + 260)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 260)[02], 19);
	TASK_PRIORITY_SET((*&Local_4 + 260)[02], true);
	SET_ACTOR_PERMANENT((*&Local_4 + 260)[02], true);
	Function_446((*&Local_4 + 260)[02]);
	Function_449((*&Local_4 + 260)[02], 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS((*&Local_4 + 260)[02], -10000.0f, 0);
	(*&Local_4 + 260)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote02", 1051, -881,812f, 91,35687f, 2344,93f, 0.0f, 117,2921f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 260)[12], Local_4.f_312);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[12], false);
	TASK_STAND_STILL((*&Local_4 + 260)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 260)[12], 19);
	TASK_PRIORITY_SET((*&Local_4 + 260)[12], true);
	Function_446((*&Local_4 + 260)[12]);
	Function_449((*&Local_4 + 260)[12], 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS((*&Local_4 + 260)[12], -10000.0f, 0);
	(*&Local_4 + 260)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote03", 1052, -888,2471f, 90,106f, 2426,359f, 0.0f, 248,4335f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 260)[22], Local_4.f_312);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[22], false);
	TASK_STAND_STILL((*&Local_4 + 260)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 260)[22], 19);
	TASK_PRIORITY_SET((*&Local_4 + 260)[22], true);
	SET_ACTOR_PERMANENT((*&Local_4 + 260)[22], true);
	Function_446((*&Local_4 + 260)[22]);
	Function_449((*&Local_4 + 260)[22], 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS((*&Local_4 + 260)[22], -10000.0f, 0);
	(*&Local_4 + 260)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote04", 1050, -883,9103f, 90,18514f, 2424,354f, 0.0f, 146,8066f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 260)[32], Local_4.f_312);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[32], false);
	TASK_STAND_STILL((*&Local_4 + 260)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 260)[32], 19);
	TASK_PRIORITY_SET((*&Local_4 + 260)[32], true);
	Function_446((*&Local_4 + 260)[32]);
	Function_449((*&Local_4 + 260)[32], 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS((*&Local_4 + 260)[32], -10000.0f, 0);
	(*&Local_4 + 260)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote05", 1051, -899,2618f, 90,10969f, 2428,48f, 0.0f, -70,30838f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 260)[42], Local_4.f_312);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[42], false);
	TASK_STAND_STILL((*&Local_4 + 260)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 260)[42], 19);
	TASK_PRIORITY_SET((*&Local_4 + 260)[42], true);
	SET_ACTOR_PERMANENT((*&Local_4 + 260)[42], true);
	Function_446((*&Local_4 + 260)[42]);
	Function_449((*&Local_4 + 260)[42], 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS((*&Local_4 + 260)[42], -10000.0f, 0);
	(*&Local_4 + 260)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote06", 1052, -870,0472f, 90,35206f, 2434,694f, 0.0f, 20,4212f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 260)[52], Local_4.f_312);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[52], false);
	TASK_STAND_STILL((*&Local_4 + 260)[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 260)[52], 19);
	TASK_PRIORITY_SET((*&Local_4 + 260)[52], true);
	Function_446((*&Local_4 + 260)[52]);
	Function_449((*&Local_4 + 260)[52], 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS((*&Local_4 + 260)[52], -10000.0f, 0);
	return;
}

void Function_449(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x132FD / 78589
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

void Function_450() //Position: 0x1333A / 78650
{
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 364)[2]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 364)[2], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[2]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[2]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 364)[3]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 364)[3], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[3]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[3]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 364)[15]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 364)[15], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[15]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[15]);
	return;
}

void Function_451() //Position: 0x133CE / 78798
{
	iLocal_353 = 0;
	return;
}

bool Function_452() //Position: 0x133D8 / 78808
{
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "ncottage02", 1);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 1);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, false))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, false);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Cottage02 (Front) door #1!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable01", 1);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, false))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, false);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable01 (Front Left) door #1!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable01", 2);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, true))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, true);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable01 (Front Right) door #2!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable01", 3);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, false))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, false);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable01 (Back Left) door #3!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable01", 4);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, true))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, true);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable01 (Back Right) door #4!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable02", 2);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, true))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, true);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable02 (Coop) door #2!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable02", 4);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, true))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, true);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable02 (Corral) door #4!");
		return 0;
	}
	bLocal_454 = Function_232(Global_30668[0], "hennigansRanch", "stable02", 5);
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (IS_DOOR_LOCKED(bLocal_454))
		{
			Function_154(bLocal_454, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(bLocal_454, false))
		{
			if (IS_DOOR_OPENED(bLocal_454))
			{
				CLOSE_DOOR_FAST(bLocal_454);
			}
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, false);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable02 (Corral) door #5!");
		return 0;
	}
	return 1;
}

int Function_453() //Position: 0x138DE / 80094
{
	return Global_34165.f_60;
}

void Function_454(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x138E9 / 80105
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
	if (iParam3 != Global_34165.f_48 && !Function_284())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_458(0);
	Function_457();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_456(uParam4, iVar0, iVar1);
	Function_455();
}

void Function_455() //Position: 0x13986 / 80262
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

void Function_456(int iParam0, bool bParam1, bool bParam2) //Position: 0x139C7 / 80327
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

void Function_457() //Position: 0x13B2D / 80685
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_458(bool bParam0) //Position: 0x13B51 / 80721
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

void Function_459() //Position: 0x13B80 / 80768
{
	return;
}

bool Function_460() //Position: 0x13B86 / 80774
{
	if (Function_461())
	{
		return 1;
	}
	return 0;
}

bool Function_461() //Position: 0x13B95 / 80789
{
	Function_467(&Local_4 + 72, 1016, 2, 0);
	Function_467(&Local_4 + 72, 1017, 2, 0);
	Function_467(&Local_4 + 72, 1050, 2, 0);
	Function_467(&Local_4 + 72, 1051, 2, 0);
	Function_467(&Local_4 + 72, 1052, 2, 0);
	Function_467(&Local_4 + 72, 980, 2, 0);
	Function_467(&Local_4 + 72, 981, 2, 0);
	Function_467(&Local_4 + 72, 983, 2, 0);
	Function_467(&Local_4 + 72, 984, 2, 0);
	Function_467(&Local_4 + 72, 985, 2, 0);
	Function_467(&Local_4 + 72, 986, 2, 0);
	Function_467(&Local_4 + 72, 987, 2, 0);
	Function_467(&Local_4 + 72, 988, 2, 0);
	Function_467(&Local_4 + 72, 989, 2, 0);
	if (Function_462(&Local_4 + 72))
	{
		return 1;
	}
	return 0;
}

bool Function_462(int iParam0) //Position: 0x13C5E / 80990
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_466();
	iVar1 = 0;
	if (!Function_173(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_465(iParam0[iVar03], 8);
		}
		else if (Function_464())
		{
			iVar1 = 1;
			Function_465(iParam0[iVar03], 8);
		}
		Function_465(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_173(iParam0[iVar03], 4))
		{
			if (!Function_173(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_173(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_173(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_465(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_173(iParam0[iVar03], 4))
		{
			if (!Function_173(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_465(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_465(iParam0[iVar03], 2);
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
	Function_463();
	return 1;
}

void Function_463() //Position: 0x13FD9 / 81881
{
	if (!Function_358(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_464() //Position: 0x1401A / 81946
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

void Function_465(var uParam0, int iParam1) //Position: 0x14045 / 81989
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_466() //Position: 0x14056 / 82006
{
	if (!Function_358(128))
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

var Function_467(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x14098 / 82072
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
			Function_465(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_465(uParam0[iVar03], 8);
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

void Function_468() //Position: 0x14168 / 82280
{
	if (IS_ACTOR_ALIVE(bLocal_314))
	{
		if (GET_MOUNT(Global_34573) != bLocal_314)
		{
			SET_ACTORS_HORSE(Global_34573, bLocal_314);
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_314);
		}
	}
	return;
}

void Function_469() //Position: 0x14196 / 82326
{
	Function_371(bLocal_313);
	Function_371(bLocal_314);
	Function_371(bLocal_315);
	return;
}

void Function_470() //Position: 0x141AE / 82350
{
	Function_461();
	Function_471();
	return;
}

void Function_471() //Position: 0x141BB / 82363
{
	Function_170(&Local_4 + 44);
	return;
}

bool Function_472() //Position: 0x141C8 / 82376
{
	Function_513();
	switch (iLocal_695)
	{
		case 0x00000000:
			iLocal_485 = 0;
			iLocal_483 = 1;
			iLocal_484 = 1;
			iLocal_695 = 1;
			return 1;
			break;
		
		case 0x00000001:
			Function_512(Local_4.f_988);
			if (Function_511(Local_4.f_988, (*&Local_4 + 712)[9]) || Function_510(Local_4.f_988, (*&Local_4 + 712)[9]))
			{
				Function_236(&iLocal_477, 10, 0, 4294967295, 4294967295);
				iLocal_353 = 1;
				Function_213();
				Function_253();
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313);
				Function_252(1, 1);
				AI_IGNORE_ACTOR(bLocal_313);
				Function_440(4);
				SET_ACTOR_VISION_FIELD_OF_VIEW(bLocal_313, 359.0f);
				Function_344(&bLocal_313, Local_603[05], 1);
				Function_344(&bLocal_313, Local_603[15], 1);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_315, 68, 10000.0f);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_315, 67, 10000.0f);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_315, 64, 10000.0f);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_315, 66, 10000.0f);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_315, 65, 10000.0f);
				bLocal_471 = false;
				Function_76(&bLocal_471, Function_508(4));
				ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(13, bLocal_471, Local_4.f_972, 5.0f, 4.0f, 1.0f, 1082130432, 2);
				if (IS_ACTOR_ALIVE(Local_603[05]))
				{
					TASK_CLEAR(Local_603[05]);
					TASK_PRIORITY_SET(Local_603[05], true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_603[05], 3, 1, 1, 1, false);
				}
				if (IS_ACTOR_ALIVE(Local_603[15]))
				{
					TASK_CLEAR(Local_603[15]);
					TASK_PRIORITY_SET(Local_603[15], true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_603[15], 4, 1, 1, 1, false);
				}
				if (IS_ACTOR_ALIVE(Local_603[35]))
				{
					TASK_CLEAR(Local_603[35]);
					TASK_PRIORITY_SET(Local_603[35], true);
					TASK_ANIMAL_PATROL(Local_603[35], Local_603[35].f_12);
					SET_ACTOR_STAY_WITHIN_VOLUME(Local_603[35], Local_603[35].f_12, 2, true);
				}
				if (IS_ACTOR_ALIVE(Local_603[45]))
				{
					TASK_CLEAR(Local_603[45]);
					TASK_PRIORITY_SET(Local_603[45], true);
					TASK_ANIMAL_PATROL(Local_603[45], Local_603[45].f_12);
					SET_ACTOR_STAY_WITHIN_VOLUME(Local_603[45], Local_603[45].f_12, 2, true);
				}
				Function_278(15, "STAGE 03 - OBJ_02A-DLG_01");
				iLocal_695 = 2;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_499();
			Function_489(1, 1);
			Function_487(2, 4, 10.0f, 20.0f, 200.0f, 1);
			break;
		
		case 0x00000002:
			Function_512(Local_4.f_988);
			if ((Function_511(Local_4.f_988, (*&Local_4 + 712)[15]) || Function_510(Local_4.f_988, (*&Local_4 + 712)[15])) || (!IS_ACTOR_ALIVE((*&Local_4 + 260)[02]) && !IS_ACTOR_ALIVE((*&Local_4 + 260)[12])))
			{
				Function_236(&iLocal_477, 17, 0, 4294967295, 4294967295);
				Function_440(4);
				Function_486(bLocal_313, Local_4.f_312, 1);
				if (IS_ACTOR_ALIVE(Local_603[25]))
				{
					TASK_CLEAR(Local_603[25]);
					TASK_PRIORITY_SET(Local_603[25], true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_603[25], 4, 1, 1, 1, false);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[25], (*&Local_4 + 364)[7], 2, 1);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[25], (*&Local_4 + 364)[8]);
				}
				if (IS_ACTOR_ALIVE(Local_603[35]))
				{
					TASK_CLEAR(Local_603[35]);
					TASK_PRIORITY_SET(Local_603[35], true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_603[35], 4, 1, 1, 1, false);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[35], (*&Local_4 + 364)[7], 2, 1);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[35], (*&Local_4 + 364)[8]);
				}
				if (IS_ACTOR_ALIVE(Local_603[45]))
				{
					TASK_CLEAR(Local_603[45]);
					TASK_PRIORITY_SET(Local_603[45], true);
					TASK_ANIMAL_PATROL(Local_603[45], Local_603[45].f_12);
					SET_ACTOR_STAY_WITHIN_VOLUME(Local_603[45], Local_603[45].f_12, 2, true);
				}
				if (IS_ACTOR_ALIVE(Local_603[55]))
				{
					TASK_CLEAR(Local_603[55]);
					TASK_PRIORITY_SET(Local_603[55], true);
					TASK_ANIMAL_PATROL(Local_603[55], Local_603[55].f_12);
					SET_ACTOR_STAY_WITHIN_VOLUME(Local_603[55], Local_603[55].f_12, 2, true);
				}
				Function_278(25, "STAGE 03 - OBJ_02B-DLG_01");
				iLocal_695 = 3;
				return 1;
			}
			Function_499();
			Function_489(1, 1);
			Function_485();
			Function_483(1);
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 448)[0]))
			{
				Function_236(&iLocal_477, 17, 0, 4294967295, 4294967295);
			}
			Function_487(4, 3, 10.0f, 20.0f, 200.0f, 1);
			break;
		
		case 0x00000003:
			if (IS_ACTOR_IN_VOLUME(bLocal_313, (*&Local_4 + 448)[5]))
			{
				Function_482((*&Local_4 + 628)[8], 0x40a00000);
				CLEAR_ACTOR_MAX_SPEED(bLocal_313);
				GET_OBJECT_POSITION((*&Local_4 + 628)[3], &vLocal_458);
				GET_OBJECT_ORIENTATION((*&Local_4 + 628)[3], &Local_464);
				bLocal_471 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &vLocal_458, 2);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &vLocal_458, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_313);
				TASK_PRIORITY_SET(bLocal_313, true);
				TASK_SEQUENCE_PERFORM(bLocal_313, bLocal_471);
				TASK_SEQUENCE_RELEASE(bLocal_471, 1);
				ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_313, (*&Local_4 + 448)[5]);
				if (IS_ACTOR_ALIVE(Local_603[45]))
				{
					TASK_CLEAR(Local_603[45]);
					TASK_PRIORITY_SET(Local_603[45], true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_603[45], 4, 1, 1, 1, false);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[45], (*&Local_4 + 364)[7], 2, 1);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[45], (*&Local_4 + 364)[8]);
				}
				if (IS_ACTOR_ALIVE(Local_603[55]))
				{
					TASK_CLEAR(Local_603[55]);
					TASK_PRIORITY_SET(Local_603[55], true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_603[55], 4, 1, 1, 1, false);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[55], (*&Local_4 + 364)[7], 2, 1);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(Local_603[55], (*&Local_4 + 364)[8]);
				}
				iLocal_695 = 4;
				return 1;
			}
			Function_499();
			Function_481();
			Function_485();
			Function_483(1);
			break;
		
		case 0x00000004:
			if (Function_480(Local_4.f_312, (*&Local_4 + 364)[1]) == 0)
			{
				Function_236(&iLocal_477, 6, 0, 4294967295, 4294967295);
				Function_279(&bLocal_322);
				iLocal_695 = 5;
				return 1;
			}
			Function_499();
			Function_481();
			Function_485();
			Function_483(1);
			break;
		
		case 0x00000005:
			if (Function_351(&bLocal_322) <= 2,5f)
			{
				Function_236(&iLocal_477, 6, 0, 4294967295, 4294967295);
				if (GET_MOUNT(Global_34573) == bLocal_314)
				{
					bLocal_499 = true;
					bLocal_500 = false;
				}
				else if (GET_MOUNT(Global_34573) == bLocal_315)
				{
					bLocal_499 = true;
					bLocal_500 = true;
				}
				else
				{
					bLocal_499 = false;
					bLocal_500 = false;
				}
				iLocal_353 = 0;
				Function_252(0, 1);
				Function_441(Global_34573, 0x41200000);
				Function_247();
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
				Function_403(Local_4.f_312);
				bLocal_471 = false;
				while (bLocal_471 <= SQUAD_GET_SIZE(Local_4.f_312))
				{
					bLocal_456 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_312, bLocal_471);
					if (IS_ACTOR_VALID(bLocal_456))
					{
						if (IS_ACTOR_ALIVE(bLocal_456))
						{
							AI_IGNORE_ACTOR(bLocal_456);
							SET_ACTOR_MAX_SPEED(bLocal_456, 3);
							TASK_CLEAR(bLocal_456);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_456, (*&Local_4 + 364)[16]);
						}
					}
					bLocal_471++;
				}
				Function_278(35, "STAGE 03 - OBJ_03-DLG_01");
				iLocal_695 = 6;
				return 1;
			}
			Function_483(0);
			break;
		
		case 0x00000006:
			if (GET_MOUNT(Global_34573) != bLocal_314 && Function_479(bLocal_313, bLocal_315))
			{
				Function_236(&iLocal_477, 3, 0, 4294967295, 4294967295);
				iLocal_483 = 1;
				iLocal_484 = 2;
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313, -1.0f, -1.0f, 4, 1, 1);
				MEMORY_PREFER_RIDING(bLocal_313, false);
				Function_440(1);
				TASK_CLEAR(bLocal_313);
				TASK_PRIORITY_SET(bLocal_313, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_313, Local_4.f_1000, 3, 1, 0, 1, false);
				Function_278(45, "STAGE 03 - OBJ_04-DLG_01");
				iLocal_695 = 7;
				return 1;
			}
			if (GET_MOUNT(Global_34573) == bLocal_315)
			{
				Function_478(bLocal_314, 1);
			}
			Function_489(1, 0);
			if (GET_TASK_STATUS(bLocal_313, 0) != 1)
			{
				Function_478(bLocal_315, 1);
			}
			Function_483(0);
			break;
		
		case 0x00000007:
			Function_512(Local_4.f_1000);
			if (Function_477(Local_4.f_1000))
			{
				Function_253();
				CLEAR_ACTOR_MAX_SPEED(bLocal_313);
				Function_247();
				Function_278(55, "STAGE 03 - OBJ_05-DLG_01");
				iLocal_695 = 8;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 1);
			Function_487(1, 1, 10.0f, 20.0f, 30.0f, 1);
			break;
		
		case 0x00000008:
			if (IS_OBJECT_VALID(bLocal_452))
			{
				if (GATEWAY_UPDATE(bLocal_452))
				{
					REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313);
					Function_278(65, "STAGE 03 - OBJ_06-OBJ_01A");
					iLocal_695 = 9;
					return 1;
				}
			}
			Function_489(1, 1);
			break;
		
		case 0x00000009:
			if (Function_475(Global_34573, (*&Local_4 + 712)[11], 2.0f))
			{
				iLocal_695 = 10;
				return 1;
			}
			break;
		
		case 0x0000000A:
			if (!Function_479(Global_34573, bLocal_314))
			{
				Function_209((*&Local_4 + 628)[13]);
				if (Function_473(bLocal_314, bLocal_496) || Function_473(bLocal_314, bLocal_497))
				{
					iLocal_695 = 11;
					return 1;
				}
				if (!Function_475(Global_34573, (*&Local_4 + 712)[11], 5.0f))
				{
					Function_278(66, "STAGE 03 - OBJ_06-OBJ_01B");
					iLocal_695 = 9;
					return 1;
				}
			}
			if (!Function_475(bLocal_314, (*&Local_4 + 712)[11], 5.0f))
			{
				Function_278(56, "STAGE 03 - OBJ_05-OBJ_01");
				iLocal_695 = 8;
				return 1;
			}
			break;
		
		case 0x0000000B:
			iLocal_695 = 12;
			return 1;
			break;
		
		case 0x0000000C:
			return 0;
			break;
	}
	return 1;
}

int Function_473(bool bParam0, bool bParam1) //Position: 0x14B49 / 84809
{
	if (IS_GRINGO_VALID(bParam1))
	{
		bLocal_451 = Function_474(bParam1, "UseCase1");
		if (IS_OBJECT_VALID(bLocal_451))
		{
			if (GET_ACTOR_FROM_OBJECT(bLocal_451) == bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var Function_474(bool bParam0, bool bParam1) //Position: 0x14B81 / 84865
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

bool Function_475(bool bParam0, bool bParam1, float fParam2) //Position: 0x14B8E / 84878
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_345(bParam0);
			Function_476(bParam1);
			if (VDIST(Function_345(bParam0), Function_476(bParam1)) >= fParam2)
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

vector3 Function_476(bool bParam0) //Position: 0x14CA8 / 85160
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

bool Function_477(bool bParam0) //Position: 0x14D14 / 85268
{
	GET_PATH_POINT(bParam0, (GET_NUM_PATH_POINTS(bParam0) - 1), &vLocal_458);
	if ((GET_TASK_STATUS(bLocal_313, 43) != 0 || VDIST(vLocal_489, vLocal_458) >= 1,5f) || (fLocal_494 - fLocal_493) >= 1,5f)
	{
		return 1;
	}
	return 0;
}

void Function_478(bool bParam0, int iParam1) //Position: 0x14D5B / 85339
{
	bLocal_471 = TASK_SEQUENCE_OPEN();
	TASK_MOUNT(false, bParam0, 0, 1, iParam1, 2147483647);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bLocal_313);
	TASK_PRIORITY_SET(bLocal_313, true);
	TASK_SEQUENCE_PERFORM(bLocal_313, bLocal_471);
	TASK_SEQUENCE_RELEASE(bLocal_471, 1);
	return;
}

bool Function_479(bool bParam0, bool bParam1) //Position: 0x14D9D / 85405
{
	if (GET_MOUNT(bParam0) != bParam1)
	{
		return 0;
	}
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(bParam0))
	{
		return 1;
	}
	return 0;
}

int Function_480(bool bParam0, bool bParam1) //Position: 0x14DBA / 85434
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
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
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_ALIVE(bVar2))
		{
			if (IS_ACTOR_IN_VOLUME(bVar2, bParam1))
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

void Function_481() //Position: 0x14E17 / 85527
{
	bLocal_471 = false;
	while (bLocal_471 <= 6)
	{
		if (IS_ACTOR_ALIVE(Local_603[bLocal_4715]))
		{
			if (!Local_603[bLocal_4715].f_16)
			{
				if (IS_ACTOR_IN_VOLUME(Local_603[bLocal_4715], (*&Local_4 + 364)[2]))
				{
					Local_603[bLocal_4715].f_16 = 1;
					fLocal_455 = GET_CURRENT_GRINGO(Local_603[bLocal_4715]);
					if (IS_GRINGO_VALID(fLocal_455))
					{
						GRINGO_DEACTIVATE_AND_RESET_ACTORS(fLocal_455);
						GRINGO_ALLOW_ACTIVATION(fLocal_455, false);
					}
					SET_ACTOR_MAX_SPEED(Local_603[bLocal_4715], 4);
					TASK_CLEAR(Local_603[bLocal_4715]);
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(Local_603[bLocal_4715], (*&Local_4 + 364)[2]))
			{
				SET_ACTOR_MAX_SPEED(Local_603[bLocal_4715], 3);
				Local_603[bLocal_4715] = "";
			}
		}
		bLocal_471++;
	}
	return;
}

void Function_482(bool bParam0, float fParam1) //Position: 0x14EDC / 85724
{
	GET_OBJECT_POSITION(bParam0, &vLocal_458);
	AI_GOAL_LOOK_AT_COORD_NEW(bLocal_313, &vLocal_458, fParam1);
	return;
}

void Function_483(bool bParam0) //Position: 0x14EF6 / 85750
{
	if (!Function_353(&bLocal_343))
	{
		Function_279(&bLocal_343);
	}
	else if (Function_351(&bLocal_343) <= 1.0f)
	{
		bLocal_456 = Function_484(Local_4.f_316);
		if (IS_ACTOR_ALIVE(bLocal_456))
		{
			if (bParam0)
			{
				if (GET_TASK_STATUS(bLocal_456, 0) != 1)
				{
					bLocal_472 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_GAUSSIAN(2,5f, 2.0f), 0, 0);
					TASK_HORSE_ACTION(false, 0);
					TASK_FLEE_ACTOR(false, Global_34573, 20.0f, RAND_FLOAT_GAUSSIAN(10.0f, 7,5f), 1, 0, 0);
					TASK_STAND_STILL(false, RAND_FLOAT_GAUSSIAN(2,5f, 2.0f), 0, 0);
					TASK_HORSE_ACTION(false, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_CLEAR(bLocal_456);
					TASK_PRIORITY_SET(bLocal_456, true);
					TASK_SEQUENCE_PERFORM(bLocal_456, bLocal_472);
					TASK_SEQUENCE_RELEASE(bLocal_472, 1);
				}
			}
			else if (GET_TASK_STATUS(bLocal_456, 0) == 1)
			{
				TASK_CLEAR(bLocal_456);
			}
		}
		Function_279(&bLocal_343);
	}
	return;
}

bool Function_484(bool bParam0) //Position: 0x14FC2 / 85954
{
	if (SQUAD_GET_SIZE(bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(bParam0) - 1)));
	}
	return "";
}

void Function_485() //Position: 0x14FE4 / 85988
{
	bLocal_471 = false;
	while (bLocal_471 <= 10)
	{
		if (IS_ACTOR_ALIVE(Local_634[bLocal_4716]))
		{
			if (!iLocal_519)
			{
				if (IS_ACTOR_VALID(ANIMAL_ACTOR_GET_GRABBED_BY(Local_634[bLocal_4716])))
				{
					iLocal_519 = 1;
				}
			}
			if (!Function_353(&Local_634[bLocal_4716] + 12))
			{
				if (StackVal || Function_475((GET_TASK_STATUS(Local_634[bLocal_4716], 66) != 0 || GET_TASK_STATUS(Local_634[bLocal_4716], 66) != 4), (*&Local_4 + 812)[Local_634[bLocal_4716]], 1.0f))
				{
					Function_279(&Local_634[bLocal_4716] + 12);
				}
			}
			else if (Function_351(&Local_634[bLocal_4716] + 12) <= RAND_FLOAT_GAUSSIAN(5.0f, 2,5f))
			{
				Local_634[bLocal_4716].f_8 = RAND_INT_RANGE_DIFFERENT(StackVal, false, 6);
				GET_OBJECT_POSITION((*&Local_4 + 812)[StackVal], &vLocal_458);
				GET_OBJECT_ORIENTATION((*&Local_4 + 812)[StackVal], &Local_464);
				TASK_CLEAR(Local_634[bLocal_4716]);
				TASK_PRIORITY_SET(Local_634[bLocal_4716], true);
				TASK_GO_TO_COORD_AND_STAY(StackVal, Local_634[bLocal_4716], &vLocal_458, 3);
				Function_254(&Local_634[bLocal_4716] + 12);
			}
		}
		bLocal_471++;
	}
	return;
}

void Function_486(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15127 / 86311
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bParam0, bVar1);
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bParam0, bVar1, true);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_487(bool bParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5) //Position: 0x1517C / 86396
{
	if (!bLocal_501)
	{
		if (bParam5)
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				bLocal_502 = false;
			}
		}
		if (!bLocal_502 && ACTORS_IN_RANGE(Global_34573, bLocal_313, bParam2))
		{
			if (bParam0 != 0)
			{
				if (GET_ACTOR_MAX_SPEED(bLocal_313) != bParam0)
				{
					Function_440(bParam0);
				}
			}
			Function_251(0);
			Function_250();
		}
		else
		{
			Function_488(5.0f);
		}
	}
	else
	{
		if (bParam5 && !bLocal_502)
		{
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				if (bParam0 != 0)
				{
					if (GET_ACTOR_MAX_SPEED(bLocal_313) != 5)
					{
						Function_440(5);
					}
				}
				bLocal_502 = true;
				bLocal_501 = false;
				return;
			}
		}
		if ((!bLocal_503 && !bLocal_504) && !bLocal_505)
		{
			if ((fLocal_492 - fLocal_493) <= fParam3)
			{
				if (bParam1 != 0)
				{
					if (GET_ACTOR_MAX_SPEED(bLocal_313) != bParam1)
					{
						Function_440(bParam1);
					}
				}
				bLocal_503 = true;
				bLocal_501 = false;
			}
			else if ((fLocal_493 - fLocal_492) <= fParam3)
			{
				if (bParam0 != 0)
				{
					if (GET_ACTOR_MAX_SPEED(bLocal_313) != 5)
					{
						Function_440(5);
					}
				}
				bLocal_504 = true;
				bLocal_501 = false;
			}
			else if (!ACTORS_IN_RANGE(Global_34573, bLocal_313, bParam4))
			{
				if (bParam0 != 0)
				{
					if (GET_ACTOR_MAX_SPEED(bLocal_313) != 5)
					{
						Function_440(5);
					}
				}
				bLocal_505 = true;
				bLocal_501 = false;
			}
		}
	}
}

void Function_488(float fParam0) //Position: 0x152A0 / 86688
{
	if (!Function_353(&bLocal_331))
	{
		if (!ACTOR_HAS_ANIM_SET(bLocal_313, "wave"))
		{
			iLocal_506 = 0;
			Function_279(&bLocal_331);
		}
		else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_313, "wave"))
		{
			iLocal_506 = 0;
			Function_279(&bLocal_331);
		}
	}
	else if (Function_351(&bLocal_331) <= fParam0)
	{
		if (!ACTOR_HAS_ANIM_SET(bLocal_313, "wave"))
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_313, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_313, "wave", 0);
		}
		Local_464 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_489, vLocal_486, StackVal) };
		VNORMALIZE(&Local_464);
		GET_ACTOR_AXIS(bLocal_313, &uLocal_467, 2);
		fLocal_470 = VDOT(&uLocal_467, &Local_464);
		if (fLocal_470 >= -0,5f)
		{
			SET_ACTION_NODE_FOR_ACTOR(bLocal_313, "wave/forward");
		}
		else if (fLocal_470 <= 0,5f)
		{
			SET_ACTION_NODE_FOR_ACTOR(bLocal_313, "nwave/back");
		}
		else
		{
			GET_ACTOR_AXIS(bLocal_313, &uLocal_467, 0);
			fLocal_470 = VDOT(&uLocal_467, &Local_464);
			if (fLocal_470 >= 0.0f)
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_313, "nwave/left");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_313, "wave/right");
			}
		}
		iLocal_506 = 1;
		Function_254(&bLocal_331);
	}
	return;
}

void Function_489(bool bParam0, bool bParam1) //Position: 0x153E6 / 87014
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			Function_218(0);
			if (GET_MOUNT(Global_34573) != bLocal_314)
			{
				Function_375(0, 0x40400000);
				if (GET_MOUNT(Global_34573) == bLocal_315)
				{
					bLocal_456 = bLocal_314;
					bLocal_314 = bLocal_315;
					bLocal_315 = bLocal_456;
					SET_ACTORS_HORSE(Global_34573, bLocal_314);
					Function_497(bLocal_314, 0);
					Function_490(&(Local_394[117]), bLocal_314, "Horse", 0, 0x5f5e100, 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_314, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ACTORS_HORSE(bLocal_313, bLocal_315);
					SET_MOST_RECENT_MOUNT(bLocal_313, bLocal_315);
					GIVE_OBJECT_TO_LAYOUT(bLocal_315, Local_4);
				}
				else
				{
					if (IS_ACTOR_ALIVE(bLocal_314))
					{
						SET_ACTOR_FACTION(bLocal_314, 17);
						GIVE_OBJECT_TO_LAYOUT(bLocal_314, GET_AMBIENT_LAYOUT());
					}
					bLocal_314 = GET_MOUNT(Global_34573);
					SET_ACTORS_HORSE(Global_34573, bLocal_314);
					Function_497(bLocal_314, 0);
					SET_ACTOR_FACTION(bLocal_314, 20);
					Function_490(&(Local_394[117]), bLocal_314, "Horse", 0, 0x5f5e100, 1);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_314, 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_314, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
		else
		{
			Function_218(1);
		}
	}
	if (bParam1)
	{
		Function_343(0);
	}
	return;
}

int Function_490(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1551C / 87324
{
	if (!Function_496(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_495(uParam0, bParam2))
	{
		return 0;
	}
	Function_494(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_491(uParam0, iParam4, iParam5);
	return 1;
}

void Function_491(char* cParam0, int iParam1, int iParam2) //Position: 0x15558 / 87384
{
	if (iParam1 != 100000000)
	{
		Function_493(cParam0, iParam1, iParam2);
	}
	else
	{
		Function_492(cParam0, iParam2);
	}
	return;
}

void Function_492(int iParam0, bool bParam1) //Position: 0x1557B / 87419
{
	iParam0->f_40 = 0;
	Function_493(iParam0, 2, bParam1);
	Function_493(iParam0, 4, bParam1);
	Function_493(iParam0, 8, bParam1);
	Function_493(iParam0, 16, bParam1);
	Function_493(iParam0, 32, bParam1);
	Function_493(iParam0, 64, bParam1);
	Function_493(iParam0, 128, bParam1);
	Function_493(iParam0, 256, bParam1);
	Function_493(iParam0, 512, bParam1);
	Function_493(iParam0, 1024, bParam1);
	return;
}

void Function_493(int iParam0, int iParam1, bool bParam2) //Position: 0x155E1 / 87521
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

void Function_494(char* cParam0, int iParam1) //Position: 0x1561D / 87581
{
	cParam0->f_36 = iParam1;
	return;
}

bool Function_495(int iParam0, bool bParam1) //Position: 0x15629 / 87593
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

bool Function_496(var uParam0, bool bParam1) //Position: 0x156B2 / 87730
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
	*uParam0 = bParam1;
	uParam0->f_28 = GET_OBJECT_TYPE(*uParam0);
	uParam0->f_32 = 2;
	switch (uParam0->f_28)
	{
		case 0x0000000F:
			bVar0 = GET_ACTOR_FROM_OBJECT(*uParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_HORSE(bVar0))
				{
					uParam0->f_32 = 1;
				}
				else if (IS_ACTOR_VEHICLE(bVar0))
				{
					uParam0->f_32 = 3;
				}
			}
			break;
		
		case 0x00000019:
			bVar1 = GET_SQUAD_FROM_OBJECT(*uParam0);
			if (SQUAD_IS_VALID(bVar1))
			{
				if (SQUAD_GET_SIZE(bVar1) >= 0)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bVar1, false);
					if (IS_ACTOR_VALID(bVar2))
					{
						if (IS_ACTOR_HORSE(bVar2))
						{
							uParam0->f_32 = 1;
						}
						else if (IS_ACTOR_VEHICLE(bVar2))
						{
							uParam0->f_32 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			bVar3 = GET_OBJECTSET_FROM_OBJECT(*uParam0);
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
								uParam0->f_32 = 1;
							}
							else if (IS_ACTOR_VEHICLE(bVar5))
							{
								uParam0->f_32 = 3;
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

void Function_497(bool bParam0, int iParam1) //Position: 0x1583E / 88126
{
	Function_498(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_498(bool bParam0) //Position: 0x15850 / 88144
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

void Function_499() //Position: 0x15A06 / 88582
{
	bool bVar0;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_512))
	{
		if (IS_ITERATOR_VALID(bLocal_312))
		{
			Function_506(&bLocal_312);
			ITERATE_IN_EVENT_TRAP(bLocal_312, bLocal_512);
			bLocal_451 = START_OBJECT_ITERATOR(bLocal_312);
			while (IS_OBJECT_VALID(bLocal_451))
			{
				bVar0 = GET_EVENT_FROM_OBJECT(bLocal_451);
				if (IS_EVENT_VALID(bVar0))
				{
					bLocal_451 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
					if (IS_OBJECT_VALID(bLocal_451))
					{
						bLocal_456 = GET_ACTOR_FROM_OBJECT(bLocal_451);
						if (IS_ACTOR_VALID(bLocal_456))
						{
							if (SQUAD_IS_VALID(Local_4.f_320))
							{
								bLocal_471 = false;
								while (bLocal_471 <= SQUAD_GET_SIZE(Local_4.f_320))
								{
									bLocal_457 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_320, bLocal_471);
									if (IS_ACTOR_VALID(bLocal_457))
									{
										if (bLocal_456 == bLocal_457)
										{
											bLocal_451 = GET_EVENT_PERPETRATOR(bVar0);
											if (IS_OBJECT_VALID(bLocal_451))
											{
												bLocal_456 = GET_ACTOR_FROM_OBJECT(bLocal_451);
												if (bLocal_456 == Global_34573)
												{
													iLocal_513++;
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_505();
													}
												}
												else if (bLocal_456 == bLocal_313)
												{
													iLocal_514++;
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_504();
													}
												}
											}
										}
									}
									bLocal_471++;
								}
							}
							if (SQUAD_IS_VALID(Local_4.f_312))
							{
								bLocal_471 = false;
								while (bLocal_471 <= SQUAD_GET_SIZE(Local_4.f_312))
								{
									bLocal_457 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_312, bLocal_471);
									if (IS_ACTOR_VALID(bLocal_457))
									{
										if (bLocal_456 == bLocal_457)
										{
											bLocal_451 = GET_EVENT_PERPETRATOR(bVar0);
											if (IS_OBJECT_VALID(bLocal_451))
											{
												bLocal_456 = GET_ACTOR_FROM_OBJECT(bLocal_451);
												if (bLocal_456 == Global_34573)
												{
													iLocal_515++;
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_503();
													}
												}
												else if (bLocal_456 == bLocal_313)
												{
													iLocal_516++;
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_502();
													}
												}
											}
										}
									}
									bLocal_471++;
								}
							}
							if (SQUAD_IS_VALID(Local_4.f_256))
							{
								bLocal_471 = false;
								while (bLocal_471 <= SQUAD_GET_SIZE(Local_4.f_256))
								{
									bLocal_457 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_256, bLocal_471);
									if (IS_ACTOR_VALID(bLocal_457))
									{
										if (bLocal_456 == bLocal_457)
										{
											bLocal_451 = GET_EVENT_PERPETRATOR(bVar0);
											if (IS_OBJECT_VALID(bLocal_451))
											{
												bLocal_456 = GET_ACTOR_FROM_OBJECT(bLocal_451);
												if (bLocal_456 == Global_34573)
												{
													if (bLocal_456 == Global_34573)
													{
														iLocal_517++;
														if (!IS_SCRIPTED_CONVERSATION_ONGOING())
														{
															Function_501();
														}
													}
													else if (bLocal_456 == bLocal_313)
													{
														iLocal_518++;
														if (!IS_SCRIPTED_CONVERSATION_ONGOING())
														{
															Function_500();
														}
													}
												}
											}
										}
									}
									bLocal_471++;
								}
							}
						}
					}
				}
				bLocal_451 = OBJECT_ITERATOR_NEXT(bLocal_312);
			}
		}
		EVENT_TRAP_CLEAR_EVENTS(bLocal_512);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_512);
	}
	return;
}

void Function_500() //Position: 0x15C65 / 89189
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_accidentChicken_v2", "Ranch01_accidentChicken_v2", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_501() //Position: 0x15CC2 / 89282
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_accidentChicken_v1", "Ranch01_accidentChicken_v1", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_502() //Position: 0x15D1F / 89375
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_bonnieKillCoyote", "Ranch01_bonnieKillCoyote", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_503() //Position: 0x15D78 / 89464
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_johnKillCoyote", "Ranch01_johnKillCoyote", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_504() //Position: 0x15DCD / 89549
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_bonnieRabbit", "Ranch01_bonnieRabbit", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505() //Position: 0x15E1E / 89630
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_johnRabbit", "Ranch01_johnRabbit", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_506(bool bParam0) //Position: 0x15E6B / 89707
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

void Function_507(float fParam0, int iParam1) //Position: 0x15E9C / 89756
{
	iParam1 = iParam1;
	if (!Function_353(&bLocal_328))
	{
		if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "clench_rib"))
		{
			Function_279(&bLocal_328);
		}
	}
	else if (Function_351(&bLocal_328) <= fParam0)
	{
		if (((((((((((((!IS_ACTOR_JUMPING(Global_34573) && !IS_ACTOR_CROUCHING(Global_34573)) && !IS_ACTOR_RAGDOLL(Global_34573)) && !IS_ACTOR_REACTING(Global_34573)) && !IS_ACTOR_FLYING(Global_34573)) && !IS_ACTOR_ON_LADDER(Global_34573)) && !IS_WEAPON_DRAWN(Global_34573)) && !IS_ACTOR_SHOOTING(Global_34573)) && !IS_ACTOR_RELOADING(Global_34573)) && !IS_ACTOR_BLINDFIRING(Global_34573)) && !IS_ACTOR_USING_COVER(Global_34573)) && !IS_ACTOR_USING_LEDGE(Global_34573)) && !IS_ACTOR_INSIDE_VEHICLE(Global_34573)) && !IS_ACTOR_JACKING_VEHICLE(Global_34573))
		{
			if (HAS_ACTION_TREE_LOADED("clench_rib"))
			{
				if (!ACTOR_HAS_ANIM_SET(Global_34573, "clench_rib"))
				{
					SET_ANIM_SET_FOR_ACTOR(Global_34573, "clench_rib", 0);
				}
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "clench_rib");
				Function_254(&bLocal_328);
			}
			else
			{
				LOG_ERROR("ACT TREE NOT LOADED: This is a problem");
			}
		}
		else
		{
			Function_280(&bLocal_328, (Function_351(&bLocal_328) - 2,5f));
		}
	}
	return;
}

bool Function_508(int iParam0) //Position: 0x15FEB / 90091
{
	return Function_509(2, iParam0);
}

int Function_509(int iParam0, int iParam1) //Position: 0x15FF7 / 90103
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

bool Function_510(bool bParam0, bool bParam1) //Position: 0x16024 / 90148
{
	GET_OBJECT_POSITION(bParam1, &vLocal_458);
	ESTIMATE_DISTANCE_ALONG_PATH(bParam0, &vLocal_458, &fLocal_470, &fLocal_494);
	if (fLocal_493 <= fLocal_470 || VDIST(vLocal_489, vLocal_458) >= 1,5f)
	{
		return 1;
	}
	return 0;
}

bool Function_511(bool bParam0, bool bParam1) //Position: 0x16062 / 90210
{
	GET_OBJECT_POSITION(bParam1, &vLocal_458);
	ESTIMATE_DISTANCE_ALONG_PATH(bParam0, &vLocal_458, &fLocal_470, &fLocal_494);
	if (fLocal_492 <= fLocal_470 || VDIST(vLocal_486, vLocal_458) >= 1,5f)
	{
		return 1;
	}
	return 0;
}

void Function_512(bool bParam0) //Position: 0x160A0 / 90272
{
	fLocal_492 = 0.0f;
	fLocal_493 = 0.0f;
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(bParam0, &vLocal_486, &vLocal_489, &fLocal_492, &fLocal_493, &fLocal_494);
	return;
}

void Function_513() //Position: 0x160C2 / 90306
{
	GET_POSITION(Global_34573, &vLocal_486);
	GET_POSITION(bLocal_313, &vLocal_489);
	return;
}

void Function_514(int iParam0) //Position: 0x160DA / 90330
{
	if (Function_364(Global_30668[0]))
	{
		if (!iLocal_495)
		{
			switch (iParam0)
			{
				case 0x00000001:
					iLocal_495 = Function_452();
					break;
				
				case 0x00000002:
					iLocal_495 = Function_231();
					break;
				}
		}
	}
	else
	{
		iLocal_495 = 0;
	}
	return;
}

int Function_515() //Position: 0x1611F / 90399
{
	GET_OBJECT_POSITION((*&Local_4 + 604)[0], &vLocal_458);
	if (Function_516(StackVal, StackVal, "$/cutscene/RANCH_01_END/RANCH_01_END", &uLocal_478, vLocal_458, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool Function_516(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x1617D / 90493
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_519(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_520()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_517();
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
	else if ((!Function_519(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_520()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_519(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_517() //Position: 0x163C3 / 91075
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
			Function_518(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_518(char* cParam0, vector3 vParam1) //Position: 0x16417 / 91159
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

bool Function_519(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1653F / 91455
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_345(bParam0);
		if (VDIST(Function_345(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_520() //Position: 0x165C9 / 91593
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_521(int iParam0) //Position: 0x165D8 / 91608
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_63399 && iParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_63399 && iParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_63398);
	}
	return;
}

void Function_522() //Position: 0x16608 / 91656
{
	if (iLocal_309 < 5 && iLocal_309 > 105)
	{
		Function_521(32);
		if (IS_VOLUME_VALID((*&Local_4 + 344)[1]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 344)[1]))
			{
				Function_470();
				iLocal_479 = 0;
				DESTROY_VOLUME((*&Local_4 + 344)[1]);
			}
		}
		else if (!iLocal_479)
		{
			if (Function_460())
			{
				Function_459();
				iLocal_479 = 1;
			}
		}
		Function_514(1);
		if (!Function_547())
		{
			Function_278(106, "STAGE 02 - COMPLETE");
		}
	}
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_374(0);
			if (IS_VOLUME_VALID((*&Local_4 + 344)[0]))
			{
				Function_546();
				DESTROY_VOLUME((*&Local_4 + 344)[0]);
			}
			Function_545();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_367();
			bLocal_311 = Global_30668[0];
			if (iLocal_346[0] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_288(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_366(Global_34573, (*&Local_4 + 552)[0], 1, 1, 1);
				Function_278(1, "STAGE 02 - STREAMING GOAL");
			}
			else
			{
				Function_278(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_543() && STREAMING_IS_WORLD_LOADED()) && (Function_364(bLocal_311) || bLocal_311 != 4294967295))
			{
				Function_542();
				Function_278(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_283(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_259, iLocal_308))
			{
				Function_541();
				Function_278(3, "STAGE 02 - CUTSCENE GOAL");
			}
			else
			{
				bLocal_480 = true;
				Function_366(Global_34573, (*&Local_4 + 552)[0], 1, 1, 1);
				Function_366(bLocal_313, (*&Local_4 + 552)[1], 1, 1, 1);
				Function_366(bLocal_314, (*&Local_4 + 552)[2], 1, 1, 1);
				Function_366(bLocal_315, (*&Local_4 + 552)[3], 1, 1, 1);
				Function_539();
				Function_278(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			Function_298(iLocal_308);
			Function_454(StackVal, StackVal, Function_298(iLocal_308), iLocal_308, Global_30628[2], Function_301(iLocal_308), 0);
			iLocal_310 = Function_453();
			break;
		
		case 0x00000003:
			if (Function_538())
			{
				Function_539();
				Function_278(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_336(1.0f);
			Function_534();
			Function_287(1);
			Function_278(6, "STAGE 02 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_230();
				Function_533();
				Function_423();
				SET_STAT_MESSAGE(STRING_TO_HASH(GET_WEAPON_DISPLAY_NAME(8)), "", 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, false, false, 0);
				Function_194();
				Function_278(7, "STAGE 02 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj02_1", 7,5f, 1, 2, 0, 0, 0);
				Function_218(1);
				Function_278(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 4294967295, 0))
			{
				Function_218(0);
				Function_410(14);
				Function_409(14);
				Function_278(14, "STAGE 02 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 4294967295, 0))
			{
				Function_219();
				Function_218(1);
				Function_423();
				Function_278(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_532();
				Function_437();
				Function_194();
				Function_278(16, "STAGE 02 - OBJ_02-OBJ_01");
			}
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj02_2", 7,5f, 1, 2, 0, 0, 0);
				Function_218(0);
				Function_271(1);
				Function_278(22, "STAGE 02 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000016:
			Function_428(&iLocal_483, &iLocal_484, 1);
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_271(0);
				Function_218(1);
				Function_423();
				Function_278(23, "STAGE 02 - OBJ_02-LOOP_FAIL_01");
			}
			else if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_218(0);
				Function_271(1);
				Function_437();
				Function_278(24, "STAGE 02 - OBJ_02-LOOP_FAIL_02");
			}
			break;
		
		case 0x00000017:
			if (!Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_420(2);
				if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
				{
					Function_218(0);
					Function_271(1);
					Function_437();
					Function_278(24, "STAGE 02 - OBJ_02-LOOP_FAIL_02");
				}
				else
				{
					Function_218(0);
					Function_271(1);
					Function_437();
					Function_278(22, "STAGE 02 - OBJ_02-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000018:
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_271(0);
				Function_218(1);
				Function_423();
				Function_278(23, "STAGE 02 - OBJ_02-LOOP_FAIL_01");
			}
			else if (!Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_218(0);
				Function_271(1);
				Function_437();
				Function_278(22, "STAGE 02 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000019:
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_230();
			Function_531();
			Function_409(10);
			Function_194();
			Function_278(26, "STAGE 02 - OBJ_03-OBJ_01");
			break;
		
		case 0x0000001A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!Function_479(Global_34573, bLocal_314))
				{
					Function_436("Ranch01_obj02_3", 7,5f, 1, 2, 0, 0, 0);
				}
				Function_218(0);
				Function_271(1);
				Function_278(33, "STAGE 02 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x00000021:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_271(0);
				Function_410(14);
				Function_409(14);
				Function_278(34, "STAGE 02 - OBJ_03-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000022:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_271(1);
				Function_409(10);
				Function_278(33, "STAGE 02 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x00000023:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_530();
				Function_409(10);
				Function_194();
				Function_278(36, "STAGE 02 - OBJ_04-OBJ_01");
			}
			break;
		
		case 0x00000024:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj02_4", 7,5f, 1, 2, 0, 0, 0);
				Function_218(0);
				Function_271(0);
				Function_529(1);
				Function_278(37, "STAGE 02 - OBJ_04-HELP_01");
			}
			break;
		
		case 0x00000025:
			if (Function_351(&bLocal_316) <= 2.0f)
			{
				Function_132("Ranch01_obj02_help_1", 10.0f, 1, 0, 2, 1, 0);
				if (GET_PLAYER_COMBATMODE() != 1)
				{
					Function_278(38, "STAGE 02 - OBJ_04-HELP_02A1");
				}
				else
				{
					Function_278(40, "STAGE 02 - OBJ_04-HELP_02B");
				}
			}
			break;
		
		case 0x00000026:
			if (Function_351(&bLocal_316) <= 10,5f)
			{
				Function_132("Ranch01_obj02_help_2a1", 10.0f, 1, 0, 2, 1, 0);
				if (GET_PLAYER_COMBATMODE() == 2)
				{
					Function_278(39, "STAGE 02 - OBJ_04-HELP_02A2");
				}
				else
				{
					Function_278(40, "STAGE 02 - OBJ_04-HELP_02B");
				}
			}
			break;
		
		case 0x00000027:
			if (Function_351(&bLocal_316) <= 10,5f)
			{
				Function_132("Ranch01_obj02_help_2a2", 10.0f, 1, 0, 2, 1, 0);
				Function_278(41, "STAGE 02 - OBJ_04-HELP_03");
			}
			break;
		
		case 0x00000028:
			if (Function_351(&bLocal_316) <= 10,5f)
			{
				Function_132("Ranch01_obj02_help_2b", 10.0f, 1, 0, 2, 1, 0);
				Function_278(41, "STAGE 02 - OBJ_04-HELP_03");
			}
			break;
		
		case 0x00000029:
			if (Function_351(&bLocal_316) <= 10,5f)
			{
				Function_132("Ranch01_obj02_help_3", 10.0f, 1, 0, 2, 1, 0);
				Function_278(43, "STAGE 02 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002B:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_529(0);
				Function_410(14);
				Function_409(14);
				Function_278(44, "STAGE 02 - OBJ_04-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000002C:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_529(1);
				Function_409(10);
				Function_278(43, "STAGE 02 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_526();
				Function_437();
				Function_194();
				Function_278(46, "STAGE 02 - OBJ_05-DLG_02");
			}
			break;
		
		case 0x0000002E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!bLocal_499)
				{
					Function_525();
					Function_423();
					Function_278(47, "STAGE 02 - OBJ_05-OBJ_01");
				}
				else if (bLocal_500)
				{
					Function_395();
					Function_437();
					Function_278(53, "STAGE 02 - OBJ_05-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x0000002F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GET_MOUNT(Global_34573) != bLocal_314)
				{
					Function_436("Ranch01_obj02_5", 7,5f, 1, 2, 0, 0, 0);
					Function_218(1);
				}
				Function_278(53, "STAGE 02 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x00000035:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_218(0);
				Function_410(14);
				Function_409(14);
				Function_278(54, "STAGE 02 - OBJ_05-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000036:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_218(1);
				Function_423();
				Function_278(53, "STAGE 02 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			Function_523();
			iLocal_308 = 2;
			iLocal_346[1] = 1;
			Function_278(0, "STAGE 03 - INITIALIZE");
			break;
	}
	return;
}

void Function_523() //Position: 0x17645 / 95813
{
	Function_524();
	Function_257();
	Function_255();
	Function_212(0);
	return;
}

void Function_524() //Position: 0x17658 / 95832
{
	bLocal_471 = false;
	while (bLocal_471 <= 7)
	{
		if (IS_OBJECT_VALID(Local_524[bLocal_47111].f_16))
		{
			DESTROY_OBJECT(Local_524[bLocal_47111].f_16);
		}
		if (IS_VOLUME_VALID(Local_524[bLocal_47111].f_12))
		{
			DESTROY_VOLUME(Local_524[bLocal_47111].f_12);
		}
		if (IS_ACTOR_VALID(StackVal))
		{
			RELEASE_ACTOR(StackVal);
		}
		bLocal_471++;
	}
	if (SQUAD_IS_VALID(Local_4.f_320))
	{
		Function_381(&Local_4 + 320, 0, 1);
		DESTROY_OBJECT(Local_4.f_320);
	}
	return;
}

void Function_525() //Position: 0x176E8 / 95976
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backOnHorse", "Ranch01_backOnHorse", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x17737 / 96055
{
	iLocal_514 = iLocal_514;
	if (iLocal_513 >= 0)
	{
		Function_528();
	}
	else
	{
		Function_527();
		Function_109(100, 1, 0);
	}
	return;
}

void Function_527() //Position: 0x1775A / 96090
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_scaresAllrabbit", "Ranch01_scaresAllrabbit", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_528() //Position: 0x177B1 / 96177
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_killsAllrabbits", "Ranch01_killsAllrabbits", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_529(bool bParam0) //Position: 0x17808 / 96264
{
	if (SQUAD_IS_VALID(Local_4.f_320))
	{
		if (bParam0)
		{
			Function_405(Local_4.f_320, 322, 4294967295, 0.0f, 1.0f, 0x3f800000, 2048, 0);
			Function_404(Local_4.f_320, "Ranch01_rabbit_blip");
		}
		else
		{
			Function_403(Local_4.f_320);
		}
	}
	return;
}

void Function_530() //Position: 0x1785E / 96350
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rifleOut", "Ranch01_rifleOut", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_531() //Position: 0x178A7 / 96423
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rabbits", "Ranch01_rabbits", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_532() //Position: 0x178EE / 96494
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_patrolRanch", "Ranch01_patrolRanch", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_533() //Position: 0x1793D / 96573
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_leaveHouse", "Ranch01_leaveHouse", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_534() //Position: 0x1798A / 96650
{
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	Function_236(&iLocal_477, 6, 0, 4294967295, 4294967295);
	if (bLocal_480)
	{
		Function_537(3.0f);
	}
	if (bLocal_480)
	{
		Function_280(&bLocal_328, (30.0f - 3.0f));
	}
	SET_ACTOR_INVULNERABILITY(bLocal_313, false);
	if (bLocal_480)
	{
		Function_536();
	}
	SET_ACTOR_INVULNERABILITY(bLocal_314, false);
	SET_ACTOR_INVULNERABILITY(bLocal_315, false);
	Function_535((*&Local_4 + 628)[11]);
	return;
}

void Function_535(bool bParam0) //Position: 0x179E8 / 96744
{
	if (Function_209(bParam0))
	{
		Function_208(bLocal_314, bLocal_496, 2);
		Function_208(bLocal_315, bLocal_497, 2);
	}
	return;
}

void Function_536() //Position: 0x17A0D / 96781
{
	ACTOR_POP_NEXT_GAIT(bLocal_313, 1, false);
	TASK_CLEAR(bLocal_313);
	TASK_PRIORITY_SET(bLocal_313, true);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_313, Local_4.f_996, true, 1, 0, 1, false);
	return;
}

void Function_537(int iParam0) //Position: 0x17A38 / 96824
{
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, iParam0, 0);
	return;
}

bool Function_538() //Position: 0x17A4E / 96846
{
	Function_361(&Local_301, 1, 0);
	switch (Local_301)
	{
		case 0x000003E8:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH01_CS02_P1/RANCH01_CS02_P1"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_301 = 1106;
				return 0;
			}
			Function_357(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			bLocal_480 = false;
			Function_354(Local_4, (*&Local_4 + 552)[0], &Local_4 + 324[1], 0, 0, 0, 0, 1);
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Function_288(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Global_63097 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/RANCH01_CS02_P1/RANCH01_CS02_P1", 0, 2, 1, 1, 2);
			}
			Function_279(&Local_301 + 4);
			Local_301 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_351(&Local_301 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_301 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_301 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH01_CS02_P2/RANCH01_CS02_P2"))
				{
					LOG_ERROR("Cutscene file does not exist! No play...");
					Local_301 = 1106;
					return 0;
				}
				Function_268(32);
				Function_214();
				Function_213();
				Global_63097 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/RANCH01_CS02_P2/RANCH01_CS02_P2", 0, 2, 1, 2, 2);
				Function_279(&Local_301 + 4);
				Local_301 = 1005;
			}
			break;
		
		case 0x000003ED:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_351(&Local_301 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_301 = 1105;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				GET_OBJECT_POSITION((*&Local_4 + 552)[4], &vLocal_458);
				CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(vLocal_458, 0, 0);
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-788,414f, 95,024f, 2409,931f, -2,979f, 144,991f, 0.0f);
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_301 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_301 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Function_366(Global_34573, (*&Local_4 + 552)[0], 1, 1, 0);
				Function_366(bLocal_313, (*&Local_4 + 552)[1], 1, 1, 1);
				Function_366(bLocal_314, (*&Local_4 + 552)[2], 1, 1, 1);
				Function_366(bLocal_315, (*&Local_4 + 552)[3], 1, 1, 1);
				Function_537(3.0f);
				Function_280(&bLocal_328, (30.0f - 3.0f));
				Function_536();
				HUD_ENABLE(true);
			}
			break;
		
		case 0x00000450:
			if (STREAMING_IS_ACTOR_LOADED(false, 4294967295) && (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 324)[1]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 324)[1]);
				DESTROY_VOLUME((*&Local_4 + 324)[1]);
				if (bLocal_480)
				{
					Function_338(2, 0, 1, 0, 1, 1, 1, 1, 1, 1);
				}
				else
				{
					Function_338(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				}
				Local_301 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Global_63097 = 0;
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				bLocal_480 = true;
				Function_267(32);
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_230();
				Function_229();
				Function_214();
				Function_213();
				Function_366(Global_34573, (*&Local_4 + 552)[0], 1, 1, 1);
				Function_366(bLocal_313, (*&Local_4 + 552)[1], 1, 1, 1);
				Function_366(bLocal_314, (*&Local_4 + 552)[2], 1, 1, 1);
				Function_366(bLocal_315, (*&Local_4 + 552)[3], 1, 1, 1);
				Local_301 = 1104;
			}
			break;
		
		case 0x00000452:
			bLocal_480 = true;
			Function_267(32);
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_230();
			Function_229();
			Function_214();
			Function_213();
			Function_366(Global_34573, (*&Local_4 + 552)[0], 1, 1, 1);
			Function_366(bLocal_313, (*&Local_4 + 552)[1], 1, 1, 1);
			Function_366(bLocal_314, (*&Local_4 + 552)[2], 1, 1, 1);
			Function_366(bLocal_315, (*&Local_4 + 552)[3], 1, 1, 1);
			Local_301 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_539() //Position: 0x17F75 / 98165
{
	Function_267(32);
	Function_452();
	Function_540();
	Function_277();
	Function_276();
	Function_275();
	Function_214();
	Function_213();
	Function_270();
	Function_252(0, 0);
	Function_441(Global_34573, 0x41200000);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_313);
	AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,1f);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[0], 1, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[17]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[18]);
	return;
}

void Function_540() //Position: 0x17FE8 / 98280
{
	iLocal_353 = 0;
	return;
}

void Function_541() //Position: 0x17FF2 / 98290
{
	Function_236(&iLocal_477, 0, 0, 4294967295, 4294967295);
	Function_252(0, 0);
	MEMORY_PREFER_WALKING(bLocal_313, false);
	Function_247();
	Function_246();
	Function_245();
	return;
}

void Function_542() //Position: 0x18019 / 98329
{
	return;
}

bool Function_543() //Position: 0x1801F / 98335
{
	if (Function_544())
	{
		return 1;
	}
	return 0;
}

bool Function_544() //Position: 0x1802E / 98350
{
	Function_467(&Local_4 + 44, 1078, 2, 0);
	Function_467(&Local_4 + 44, 1079, 2, 0);
	if (Function_462(&Local_4 + 44))
	{
		return 1;
	}
	return 0;
}

void Function_545() //Position: 0x1805B / 98395
{
	Function_371(bLocal_313);
	Function_371(bLocal_314);
	Function_371(bLocal_315);
	return;
}

void Function_546() //Position: 0x18073 / 98419
{
	Function_544();
	return;
}

bool Function_547() //Position: 0x1807D / 98429
{
	Function_513();
	switch (iLocal_602)
	{
		case 0x00000000:
			iLocal_485 = 0;
			iLocal_483 = 1;
			iLocal_484 = 0;
			iLocal_602 = 1;
			return 1;
			break;
		
		case 0x00000001:
			Function_512(Local_4.f_996);
			if (Function_477(Local_4.f_996))
			{
				if (Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0))
				{
					Function_560(bLocal_315, Local_4.f_984, 1);
				}
				else
				{
					Function_247();
				}
				iLocal_602 = 2;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 0);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			Function_559(bLocal_314, (*&Local_4 + 712)[12], (*&Local_4 + 448)[14]);
			Function_559(bLocal_315, (*&Local_4 + 712)[3], (*&Local_4 + 448)[14]);
			break;
		
		case 0x00000002:
			if ((!Function_413() && GET_MOUNT(Global_34573) != bLocal_314) && Function_479(bLocal_313, bLocal_315))
			{
				Function_557();
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313, -1.0f, -1.0f, 4, 1, 1);
				MEMORY_PREFER_RIDING(bLocal_313, false);
				Function_440(1);
				AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,72f);
				TASK_CLEAR(bLocal_313);
				TASK_PRIORITY_SET(bLocal_313, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_313, Local_4.f_984, 3, 1, 0, 1, false);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
				Function_246();
				Function_245();
				Function_278(15, "STAGE 02 - OBJ_02-DLG_01");
				iLocal_602 = 3;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			if (GET_MOUNT(Global_34573) == bLocal_315)
			{
				Function_560(bLocal_314, Local_4.f_984, 1);
			}
			Function_489(1, 0);
			if (Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0))
			{
				if (GET_TASK_STATUS(bLocal_313, 0) != 1)
				{
					Function_560(bLocal_315, Local_4.f_984, 1);
				}
			}
			break;
		
		case 0x00000003:
			Function_512(Local_4.f_984);
			if (Function_510(Local_4.f_984, (*&Local_4 + 712)[14]))
			{
				Function_482((*&Local_4 + 628)[10], 0x40a00000);
				Function_556();
				Function_279(&bLocal_322);
				iLocal_602 = 4;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 1);
			Function_487(1, 1, 10.0f, 20.0f, 30.0f, 0);
			break;
		
		case 0x00000004:
			if (Function_351(&bLocal_322) <= 2.0f)
			{
				Function_236(&iLocal_477, 7, 0, 4294967295, 4294967295);
				iLocal_353 = 1;
				Function_253();
				Function_278(25, "STAGE 02 - OBJ_03-DLG_01");
				Function_254(&bLocal_337);
				Function_279(&bLocal_322);
				iLocal_602 = 5;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_499();
			Function_489(1, 1);
			break;
		
		case 0x00000005:
			Function_512(Local_4.f_984);
			if (Function_477(Local_4.f_984) || Function_351(&bLocal_322) <= 10.0f)
			{
				if (Function_351(&bLocal_322) <= 10.0f)
				{
					LOG_ERROR("R01_RIDRABBITS_STATE - FOLLOWTO_GARDEN: Hit Failsafe!");
				}
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313);
				CLEAR_ACTOR_MAX_SPEED(bLocal_313);
				AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,1f);
				GET_OBJECT_POSITION((*&Local_4 + 628)[4], &vLocal_458);
				GET_OBJECT_ORIENTATION((*&Local_4 + 628)[4], &Local_464);
				bLocal_471 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 1);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1012, true, 1, 0, 1, false);
				TASK_GO_TO_COORD_AND_STAY(StackVal, false, &vLocal_458, true);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_313);
				TASK_PRIORITY_SET(bLocal_313, true);
				TASK_SEQUENCE_PERFORM(bLocal_313, bLocal_471);
				TASK_SEQUENCE_RELEASE(bLocal_471, 1);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[11], 1, 1);
				iLocal_602 = 7;
				return 1;
			}
			Function_499();
			Function_555();
			Function_553();
			Function_489(0, 1);
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_RIDING(bLocal_313))
			{
				Function_252(1, 1);
				Function_249();
				MEMORY_PREFER_WALKING(bLocal_313, false);
				Function_486(bLocal_313, Local_4.f_320, 1);
				Function_279(&bLocal_322);
				iLocal_602 = 8;
				return 1;
			}
			Function_499();
			Function_555();
			Function_553();
			break;
		
		case 0x00000008:
			if (Function_555() && !Function_552(Local_4.f_320))
			{
				Function_236(&iLocal_477, 6, 0, 4294967295, 4294967295);
				Function_279(&bLocal_322);
				iLocal_602 = 10;
				return 1;
			}
			if (((iLocal_511 < 0 || GET_MOUNT(Global_34573) == bLocal_314) || Function_550(Global_34573, Local_4.f_320, 1, 1, 0, 3212836864)) || Function_351(&bLocal_322) <= 20.0f)
			{
				Function_236(&iLocal_477, 8, 0, 4294967295, 4294967295);
				Function_278(35, "STAGE 02 - OBJ_04-DLG_01");
				iLocal_602 = 9;
				return 1;
			}
			Function_549();
			Function_499();
			Function_548();
			Function_555();
			Function_553();
			Function_561(bLocal_314, (*&Local_4 + 712)[13], 2, 10.0f, (*&Local_4 + 448)[10]);
			Function_561(bLocal_315, (*&Local_4 + 712)[4], 2, 10.0f, (*&Local_4 + 448)[10]);
			break;
		
		case 0x00000009:
			if (Function_555() && !Function_552(Local_4.f_320))
			{
				Function_236(&iLocal_477, 6, 0, 4294967295, 4294967295);
				Function_279(&bLocal_322);
				iLocal_602 = 10;
				return 1;
			}
			Function_549();
			Function_499();
			Function_548();
			Function_555();
			Function_553();
			Function_561(bLocal_314, (*&Local_4 + 712)[13], 2, 10.0f, (*&Local_4 + 448)[10]);
			Function_561(bLocal_315, (*&Local_4 + 712)[4], 2, 10.0f, (*&Local_4 + 448)[10]);
			break;
		
		case 0x0000000A:
			if (Function_351(&bLocal_322) <= 2,5f)
			{
				Function_236(&iLocal_477, 6, 0, 4294967295, 4294967295);
				if (GET_MOUNT(Global_34573) == bLocal_314)
				{
					bLocal_499 = true;
					bLocal_500 = false;
				}
				else if (GET_MOUNT(Global_34573) == bLocal_315)
				{
					bLocal_499 = true;
					bLocal_500 = true;
				}
				else
				{
					bLocal_499 = false;
					bLocal_500 = false;
				}
				Function_252(0, 1);
				Function_441(Global_34573, 0x41200000);
				Function_247();
				Function_278(45, "STAGE 02 - OBJ_05-DLG_01");
				iLocal_602 = 11;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_561(bLocal_314, (*&Local_4 + 712)[13], 2, 10.0f, (*&Local_4 + 448)[10]);
			Function_561(bLocal_315, (*&Local_4 + 712)[4], 2, 10.0f, (*&Local_4 + 448)[10]);
			break;
		
		case 0x0000000B:
			if (GET_MOUNT(Global_34573) != bLocal_314 && Function_479(bLocal_313, bLocal_315))
			{
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313, -1.0f, -1.0f, 4, 1, 1);
				MEMORY_PREFER_RIDING(bLocal_313, false);
				Function_440(2);
				AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,72f);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
				Function_246();
				Function_245();
				iLocal_602 = 12;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			if (GET_MOUNT(Global_34573) == bLocal_315)
			{
				Function_478(bLocal_314, 1);
			}
			Function_489(1, 0);
			if (Function_561(bLocal_315, (*&Local_4 + 712)[4], 2, 10.0f, (*&Local_4 + 448)[10]))
			{
				if (GET_TASK_STATUS(bLocal_313, 0) != 1)
				{
					Function_478(bLocal_315, 1);
				}
			}
			break;
		
		case 0x0000000C:
			iLocal_602 = 13;
			return 1;
			break;
		
		case 0x0000000D:
			return 0;
			break;
	}
	return 1;
}

void Function_548() //Position: 0x18752 / 100178
{
	if (Function_475(bLocal_313, (*&Local_4 + 628)[4], 2.0f) || Function_475(bLocal_313, (*&Local_4 + 628)[5], 2.0f))
	{
		if (!Function_353(&bLocal_340))
		{
			Function_279(&bLocal_340);
		}
		else if (!IS_ACTOR_ALIVE(bLocal_521) || Function_351(&bLocal_340) <= 30.0f)
		{
			bLocal_471 = false;
			while (bLocal_471 <= 7)
			{
				if (StackVal && IS_ACTOR_ALIVE(Local_524[bLocal_47111]))
				{
					bLocal_521 = StackVal;
				}
				bLocal_471++;
			}
			if (IS_ACTOR_ALIVE(bLocal_521))
			{
				bLocal_471 = TASK_SEQUENCE_OPEN();
				if (!iLocal_522)
				{
					iLocal_522 = 1;
					GET_OBJECT_POSITION((*&Local_4 + 628)[4], &vLocal_458);
					TASK_GO_TO_COORD(false, &vLocal_458, true);
					TASK_SHOOT_FROM_POSITION(false, bLocal_521, &vLocal_458);
				}
				else
				{
					iLocal_522 = 0;
					GET_OBJECT_POSITION((*&Local_4 + 628)[5], &vLocal_458);
					TASK_GO_TO_COORD(false, &vLocal_458, true);
					TASK_SHOOT_FROM_POSITION(false, bLocal_521, &vLocal_458);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_313);
				TASK_PRIORITY_SET(bLocal_313, true);
				TASK_SEQUENCE_PERFORM(bLocal_313, bLocal_471);
				TASK_SEQUENCE_RELEASE(bLocal_471, 1);
				Function_254(&bLocal_340);
			}
		}
	}
	return;
}

void Function_549() //Position: 0x18869 / 100457
{
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_510))
	{
		iLocal_511++;
		EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_510);
	}
	return;
}

int Function_550(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x18886 / 100486
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_551(bParam0, bVar1, uParam2, uParam3, uParam4, uParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_551(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x188E6 / 100582
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_552(bool bParam0) //Position: 0x189D3 / 100819
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_553() //Position: 0x18A2A / 100906
{
	bLocal_471 = false;
	while (bLocal_471 <= 7)
	{
		if (StackVal && IS_ACTOR_ALIVE(Local_524[bLocal_47111]))
		{
			if (IS_VOLUME_VALID(Local_524[bLocal_47111].f_12))
			{
				if (iLocal_602 <= 9 && (((iLocal_511 <= 10 || iLocal_513 <= 3) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 448)[9])) || EVENT_TRAP_SUCCESSFUL_TRAP(Local_524[bLocal_47111].f_16)))
				{
					DESTROY_OBJECT(Local_524[bLocal_47111].f_16);
					DESTROY_VOLUME(Local_524[bLocal_47111].f_12);
					GET_OBJECT_POSITION((*&Local_4 + 628)[15], &vLocal_458);
					GET_OBJECT_ORIENTATION((*&Local_4 + 628)[15], &Local_464);
					TASK_CLEAR(StackVal);
					TASK_PRIORITY_SET(StackVal, true);
					TASK_GO_TO_COORD_AND_STAY(StackVal, StackVal, &vLocal_458, 4);
					return;
				}
				if (!Function_353(&Local_524[bLocal_47111] + 20))
				{
					if (StackVal || Function_475(StackVal, (*&Local_4 + 848)[(StackVal || GET_TASK_STATUS(GET_TASK_STATUS(StackVal, 66) != 0, 66) != 4)], 1.0f))
					{
						TASK_CLEAR(StackVal);
						TASK_PRIORITY_SET(StackVal, true);
						TASK_STAND_STILL(StackVal, -1.0f, 0, 0);
						Function_279(&Local_524[bLocal_47111] + 20);
					}
				}
				else if (Function_351(&Local_524[bLocal_47111] + 20) <= RAND_FLOAT_GAUSSIAN(7.0f, 2,5f))
				{
					Function_554(bLocal_471);
					Function_254(&Local_524[bLocal_47111] + 20);
					Function_254(&Local_524[bLocal_47111] + 32);
				}
				else if (!Function_353(&Local_524[bLocal_47111] + 32))
				{
					if (StackVal == GET_ACTOR_UNDER_RETICLE(Global_34573, 0))
					{
						Function_279(&Local_524[bLocal_47111] + 32);
					}
				}
				else if (StackVal == GET_ACTOR_UNDER_RETICLE(Global_34573, 0))
				{
					if (Function_351(&Local_524[bLocal_47111] + 32) <= 0,25f)
					{
						Function_554(bLocal_471);
						Function_254(&Local_524[bLocal_47111] + 20);
						Function_254(&Local_524[bLocal_47111] + 32);
					}
				}
				else
				{
					Function_254(&Local_524[bLocal_47111] + 32);
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(StackVal, (*&Local_4 + 448)[2]))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(StackVal)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(StackVal));
				}
				if (SQUAD_IS_VALID(SQUAD_GET(StackVal)))
				{
					SQUAD_LEAVE(StackVal);
				}
			}
		}
		bLocal_471++;
	}
	return;
}

void Function_554(int iParam0) //Position: 0x18CCF / 101583
{
	Local_524[iParam011].f_8 = RAND_INT_RANGE_DIFFERENT(StackVal, false, 19);
	GET_OBJECT_POSITION((*&Local_4 + 848)[StackVal], &vLocal_458);
	GET_OBJECT_ORIENTATION((*&Local_4 + 848)[StackVal], &Local_464);
	TASK_CLEAR(StackVal);
	TASK_PRIORITY_SET(StackVal, true);
	TASK_GO_TO_COORD_AND_STAY(StackVal, StackVal, &vLocal_458, 4);
	return;
}

int Function_555() //Position: 0x18D49 / 101705
{
	int iVar0;
	
	if (!Function_353(&bLocal_337))
	{
		Function_279(&bLocal_337);
	}
	else if (Function_351(&bLocal_337) <= 2.0f)
	{
		iVar0 = 1;
		bLocal_471 = false;
		while (bLocal_471 <= 7)
		{
			if (!Local_524[bLocal_47111])
			{
				if (IS_ACTOR_ALIVE(StackVal))
				{
					iVar0 = 0;
					if (bLocal_520 <= (12 - 1))
					{
						bLocal_520++;
					}
					else
					{
						bLocal_520 = false;
					}
					bLocal_451 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_520, Local_4.f_932);
					if (IS_OBJECT_VALID(bLocal_451))
					{
						GET_OBJECT_POSITION(bLocal_451, &vLocal_458);
						if (!WOULD_ACTOR_BE_VISIBLE(1078, &vLocal_458, 3212836864))
						{
							Local_524[bLocal_47111] = 1;
							Function_366(StackVal, bLocal_451, 1, 1, 1);
							Function_280(&Local_524[bLocal_47111] + 20, ((7.0f - 2,5f) - 0,5f));
							Function_254(&bLocal_337);
							return 0;
						}
					}
				}
				Local_524[bLocal_47111] = 1;
			}
			bLocal_471++;
		}
		return iVar0;
	}
	return 0;
}

void Function_556() //Position: 0x18E3F / 101951
{
	bLocal_471 = false;
	while (bLocal_471 <= 12)
	{
		bLocal_451 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_471, Local_4.f_932);
		if (IS_OBJECT_VALID(bLocal_451))
		{
			GET_OBJECT_POSITION(bLocal_451, &vLocal_458);
			if (!WOULD_ACTOR_BE_VISIBLE(1078, &vLocal_458, 3212836864))
			{
				Local_524[011] = 1;
				Function_554(0);
				Function_366(StackVal, bLocal_451, 1, 1, 1);
				Function_280(&Local_524[011] + 20, (7.0f + 2,5f));
			}
		}
		bLocal_471++;
	}
	return;
}

void Function_557() //Position: 0x18EBD / 102077
{
	if (!SQUAD_IS_VALID(Local_4.f_320))
	{
		Function_558();
	}
	bLocal_471 = false;
	while (bLocal_471 <= SQUAD_GET_SIZE(Local_4.f_320))
	{
		bLocal_456 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_320, bLocal_471);
		if (IS_ACTOR_ALIVE(bLocal_456))
		{
			Local_524[bLocal_47111] = 0;
			Local_524[bLocal_47111].f_4 = bLocal_456;
			Local_524[bLocal_47111].f_8 = 0;
			if (IS_VOLUME_VALID(Local_524[bLocal_47111].f_12))
			{
				if (IS_OBJECT_VALID(Local_524[bLocal_47111].f_16))
				{
					DESTROY_OBJECT(Local_524[bLocal_47111].f_16);
				}
				DESTROY_VOLUME(Local_524[bLocal_47111].f_12);
			}
			Function_75();
			Function_75();
			Local_524[bLocal_47111].f_12 = CREATE_VOLUME_IN_LAYOUT(bLocal_258, Function_53(), 3, Function_75(), Function_75(), 1,5f, 2,5f, 1,5f);
			if (IS_VOLUME_VALID(Local_524[bLocal_47111].f_12))
			{
				Function_75();
				Function_75();
				if (IS_ATTACHMENT_VALID(ATTACH_OBJECTS(StackVal, Local_524[bLocal_47111].f_12, "", Function_75(), Function_75(), 4294967295)))
				{
					if (IS_OBJECT_VALID(Local_524[bLocal_47111].f_16))
					{
						DESTROY_OBJECT(Local_524[bLocal_47111].f_16);
					}
					Local_524[bLocal_47111].f_16 = CREATE_EVENT_TRAP(Function_53(), 5, bLocal_258);
					if (IS_OBJECT_VALID(Local_524[bLocal_47111].f_16))
					{
						EVENT_TRAP_ON_PERPETRATOR(Local_524[bLocal_47111].f_16, Global_34573);
						EVENT_TRAP_ON_VOLUME(Local_524[bLocal_47111].f_16, Local_524[bLocal_47111].f_12);
					}
					else
					{
						LOG_ERROR("Failed to create Rabbit Scare Event Trap!");
					}
				}
				else
				{
					LOG_ERROR("Failed to attach Rabbit Scare Volume!");
				}
			}
			else
			{
				LOG_ERROR("Failed to create Rabbit Scare Volume!");
			}
			Function_254(&Local_524[bLocal_47111] + 20);
			Function_254(&Local_524[bLocal_47111] + 32);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(StackVal, 11, false);
		}
		bLocal_471++;
	}
	return;
}

void Function_558() //Position: 0x190E1 / 102625
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_320 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Rabbit"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rabbit01", 1078, -959,3685f, 94,233f, 2423,106f, 0.0f, -70,03732f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_320);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	Function_449(bVar0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, -10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rabbit02", 1079, -959,0271f, 94,233f, 2424,046f, 0.0f, -70,03732f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_320);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	Function_446(bVar0);
	Function_449(bVar0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, -10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rabbit03", 1078, -958,6857f, 94,233f, 2424,986f, 0.0f, -70,03732f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_320);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	Function_449(bVar0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, -10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rabbit04", 1079, -958,3443f, 94,233f, 2425,926f, 0.0f, -70,03732f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_320);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	Function_446(bVar0);
	Function_449(bVar0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, -10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rabbit05", 1078, -958,0029f, 94,233f, 2426,866f, 0.0f, -70,03732f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_320);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	Function_449(bVar0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, -10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rabbit06", 1079, -957,6615f, 94,233f, 2427,806f, 0.0f, -70,03732f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_320);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	Function_446(bVar0);
	Function_449(bVar0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, -10000.0f, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rabbit07", 1078, -957,3201f, 94,233f, 2428,746f, 0.0f, -70,03732f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_320);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	TASK_PRIORITY_SET(bVar0, true);
	SET_ACTOR_PERMANENT(bVar0, true);
	Function_446(bVar0);
	Function_449(bVar0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(bVar0, -10000.0f, 0);
	return;
}

int Function_559(bool bParam0, bool bParam1, bool bParam2) //Position: 0x193E0 / 103392
{
	if (!IS_ACTOR_MOUNTED(bParam0))
	{
		if (IS_ACTOR_IN_VOLUME(bParam0, bParam2))
		{
			GET_OBJECT_POSITION(bParam1, &vLocal_458);
			if (!Function_382(bParam0, 0x3f800000, 0x42960000, 1, 1, 0) && !WOULD_ACTOR_BE_VISIBLE(976, &vLocal_458, 3212836864))
			{
				Function_366(bParam0, bParam1, 1, 1, 1);
			}
			return 0;
		}
	}
	return 1;
}

void Function_560(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19435 / 103477
{
	GET_PATH_POINT(bParam1, false, &vLocal_458);
	bLocal_471 = TASK_SEQUENCE_OPEN();
	TASK_MOUNT(false, bParam0, 0, 1, bParam2, 2147483647);
	TASK_GO_TO_COORD(false, &vLocal_458, bParam2);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bLocal_313);
	TASK_PRIORITY_SET(bLocal_313, true);
	TASK_SEQUENCE_PERFORM(bLocal_313, bLocal_471);
	TASK_SEQUENCE_RELEASE(bLocal_471, 1);
	return;
}

bool Function_561(bool bParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x19489 / 103561
{
	bool bVar0;
	
	if (!IS_ACTOR_MOUNTED(bParam0))
	{
		bVar0 = true;
		if (!Function_475(bParam0, bParam1, fParam3))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			if (IS_VOLUME_VALID(bParam4))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, bParam4))
				{
					bVar0 = false;
				}
			}
		}
		if (bVar0)
		{
			return 1;
		}
		if (GET_TASK_STATUS(bParam0, 19) == 1 && GET_TASK_STATUS(bParam0, 66) == 1)
		{
			GET_OBJECT_POSITION(bParam1, &vLocal_458);
			GET_OBJECT_ORIENTATION(bParam1, &Local_464);
			TASK_CLEAR(bParam0);
			TASK_PRIORITY_SET(bParam0, true);
			TASK_GO_TO_COORD_AND_STAY(StackVal, bParam0, &vLocal_458, bParam2);
		}
	}
	else if (GET_TASK_STATUS(bParam0, 6) != 1)
	{
		TASK_CLEAR(bParam0);
		TASK_PRIORITY_SET(bParam0, true);
		TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
	}
	return 0;
}

void Function_562() //Position: 0x19533 / 103731
{
	if (iLocal_309 < 5 && iLocal_309 > 105)
	{
		Function_521(16);
		if (IS_VOLUME_VALID((*&Local_4 + 344)[0]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 344)[0]))
			{
				Function_546();
				iLocal_479 = 0;
				DESTROY_VOLUME((*&Local_4 + 344)[0]);
			}
		}
		else if (!iLocal_479)
		{
			if (Function_543())
			{
				Function_542();
				iLocal_479 = 1;
			}
		}
		else
		{
			Function_626();
		}
		Function_514(1);
		if (!Function_601())
		{
			Function_278(106, "STAGE 01 - COMPLETE");
		}
	}
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_374(0);
			Function_600();
			Function_599();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(3);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_367();
			bLocal_311 = Global_30668[0];
			if (bLocal_480)
			{
				Function_366(Global_34573, (*&Local_4 + 532)[0], 1, 1, 1);
				Function_366(bLocal_313, (*&Local_4 + 532)[1], 1, 1, 1);
				Function_366(bLocal_314, (*&Local_4 + 532)[2], 1, 1, 1);
			}
			Function_278(1, "STAGE 01 - STREAMING GOAL");
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_364(bLocal_311) || bLocal_311 != 4294967295))
			{
				Function_278(2, "STAGE 01 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_298(iLocal_308);
			Function_454(StackVal, StackVal, Function_298(iLocal_308), iLocal_308, Global_30628[2], Function_301(iLocal_308), 1);
			iLocal_310 = Function_453();
			Function_594();
			Function_278(5, "STAGE 01 - FADE IN");
			break;
		
		case 0x00000005:
			Function_336(1.0f);
			Function_592();
			Function_287(1);
			Function_278(6, "STAGE 01 - OBJ_01_OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && (Function_351(&bLocal_316) <= 5.0f || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 448)[12])))
			{
				Function_230();
				Function_436("Ranch01_obj01_1", 7,5f, 1, 2, 0, 0, 0);
				Function_271(1);
				Function_437();
				Function_194();
				Function_278(7, "STAGE 01 - OBJ_01-HELP_01");
			}
			break;
		
		case 0x00000007:
			if (Function_351(&bLocal_316) <= 2.0f)
			{
				Function_132("Ranch01_obj01_help_1", 10.0f, 1, 0, 2, 1, 0);
				Function_278(8, "STAGE 01 - OBJ_01-HELP_02");
			}
			break;
		
		case 0x00000008:
			if (Function_351(&bLocal_316) <= 10,5f)
			{
				Function_132("help_move_look", 10.0f, 1, 0, 2, 1, 0);
				Function_278(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_271(0);
				Function_410(14);
				Function_409(14);
				Function_278(14, "STAGE 01 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_271(1);
				Function_437();
				Function_278(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_591(bLocal_313, Global_34573, 0x3f000000))
			{
				Function_230();
				Function_588();
				Function_194();
				Function_278(16, "STAGE 01 - OBJ_02-DLG_02");
			}
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_587();
				Function_278(17, "STAGE 01 - OBJ_02-OBJ_01");
			}
			break;
		
		case 0x00000011:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj01_2", 7,5f, 1, 2, 0, 0, 0);
				Function_271(1);
				Function_278(18, "STAGE 01 - OBJ_02-HELP_01");
			}
			break;
		
		case 0x00000012:
			if (Function_351(&bLocal_316) <= 8.0f)
			{
				Function_132("help_poi_focus", 10.0f, 1, 0, 2, 1, 0);
				Function_278(23, "STAGE 01 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000017:
			if (!Function_586())
			{
				if (!Function_584())
				{
					if (!Function_579())
					{
						Function_574();
					}
				}
			}
			if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_271(1);
				Function_278(24, "STAGE 01 - OBJ_02-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000018:
			if (!Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_271(1);
				Function_278(23, "STAGE 01 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000019:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_573();
				Function_423();
				Function_194();
				Function_278(26, "STAGE 01 - OBJ_03-OBJ_01");
			}
			break;
		
		case 0x0000001A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GET_MOUNT(Global_34573) != bLocal_314)
				{
					Function_436("Ranch01_obj01_3", 7,5f, 1, 2, 0, 0, 0);
					Function_271(0);
					Function_218(1);
				}
				Function_278(33, "STAGE 01 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x00000021:
			if (!Function_586())
			{
				if (!Function_584())
				{
					if (!Function_579())
					{
						Function_574();
					}
				}
			}
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_218(0);
				Function_410(14);
				Function_409(14);
				Function_278(34, "STAGE 01 - OBJ_03-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000022:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_218(1);
				Function_423();
				Function_278(33, "STAGE 01 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x00000023:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_572();
				Function_437();
				Function_194();
				Function_278(36, "STAGE 01 - OBJ_04-OBJ_01");
			}
			break;
		
		case 0x00000024:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj01_4", 7,5f, 1, 2, 0, 0, 0);
				Function_218(0);
				Function_271(1);
				Function_278(37, "STAGE 01 - OBJ_04-HELP_01");
			}
			break;
		
		case 0x00000025:
			if (Function_351(&bLocal_316) <= 8.0f)
			{
				Function_132("horse_help_matchspeed", 10.0f, 1, 0, 2, 1, 0);
				Function_278(42, "STAGE 01 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002A:
			if (!Function_586())
			{
				if (!Function_584())
				{
					if (!Function_579())
					{
						if (!Function_569())
						{
							Function_574();
						}
					}
				}
			}
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_271(0);
				Function_218(1);
				Function_423();
				Function_278(43, "STAGE 01 - OBJ_04-LOOP_FAIL_01");
			}
			else if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_218(0);
				Function_271(1);
				Function_437();
				Function_278(44, "STAGE 01 - OBJ_04-LOOP_FAIL_02");
			}
			break;
		
		case 0x0000002B:
			if (!Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_420(2);
				if (Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
				{
					Function_218(0);
					Function_271(1);
					Function_437();
					Function_278(44, "STAGE 01 - OBJ_04-LOOP_FAIL_02");
				}
				else
				{
					Function_218(0);
					Function_271(1);
					Function_437();
					Function_278(42, "STAGE 01 - OBJ_04-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x0000002C:
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_271(0);
				Function_218(1);
				Function_423();
				Function_278(43, "STAGE 01 - OBJ_04-LOOP_FAIL_01");
			}
			else if (!Function_421(&bLocal_319, 60.0f, 200.0f, bLocal_313, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_351, 1, 0, 0, 325, 1))
			{
				Function_218(0);
				Function_271(1);
				Function_437();
				Function_278(42, "STAGE 01 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_566();
				Function_437();
				iLocal_482 = 0;
				Function_194();
				Function_278(46, "STAGE 01 - OBJ_05-OBJ_01");
			}
			break;
		
		case 0x0000002E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_436("Ranch01_obj01_5", 7,5f, 1, 2, 0, 0, 0);
				Function_271(0);
				Function_389(10, bLocal_314, 2.0f, 4294967295);
				Function_387();
				Function_194();
				Function_278(47, "STAGE 01 - OBJ_05-HELP_01");
			}
			break;
		
		case 0x0000002F:
			if (iLocal_482 <= 1)
			{
				if (Function_351(&bLocal_316) <= 2.0f)
				{
					Function_132("Ranch01_obj01_help_2", 10.0f, 1, 0, 2, 1, 0);
					iLocal_482++;
					Function_278(52, "STAGE 01 - OBJ_05-LOOP_PASS_01");
				}
			}
			else
			{
				Function_278(52, "STAGE 01 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x00000034:
			if (!Function_586())
			{
				if (!Function_584())
				{
					Function_579();
				}
			}
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_220();
				Function_218(1);
				Function_423();
				Function_278(53, "STAGE 01 - OBJ_05-LOOP_FAIL_01");
			}
			else if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_220();
				Function_410(14);
				Function_409(14);
				Function_278(54, "STAGE 01 - OBJ_05-LOOP_FAIL_02");
			}
			break;
		
		case 0x00000035:
			if (!Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_420(384);
				if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
				{
					Function_218(0);
					Function_410(14);
					Function_409(14);
					Function_278(54, "STAGE 01 - OBJ_05-LOOP_FAIL_02");
				}
				else
				{
					Function_218(0);
					Function_389(10, bLocal_314, 2.0f, 4294967295);
					Function_387();
					Function_278(52, "STAGE 01 - OBJ_05-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000036:
			if (Function_427(&bLocal_319, 60.0f, bLocal_314, "Horse_return", "Horse_abandoned", &bLocal_351, 1, 0, 0, 334, 1))
			{
				Function_219();
				Function_218(1);
				Function_423();
				Function_278(53, "STAGE 01 - OBJ_05-LOOP_FAIL_01");
			}
			else if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_389(10, bLocal_314, 2.0f, 4294967295);
				Function_387();
				Function_278(52, "STAGE 01 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x00000037:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_436("Ranch01_obj01_6a", 7,5f, 1, 2, 0, 0, 0);
				Function_220();
				Function_217();
				Function_212(1);
				Function_194();
				Function_278(57, "STAGE 01 - OBJ_06-HELP_01");
			}
			break;
		
		case 0x00000038:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_436("Ranch01_obj01_6b", 7,5f, 1, 2, 0, 0, 0);
				Function_220();
				Function_217();
				Function_218(1);
				Function_423();
				Function_212(1);
				Function_194();
				Function_278(57, "STAGE 01 - OBJ_06-HELP_01");
			}
			break;
		
		case 0x00000039:
			if (iLocal_482 <= 1)
			{
				if (Function_351(&bLocal_316) <= 2.0f)
				{
					Function_132("Ranch01_obj01_help_2", 10.0f, 1, 0, 2, 1, 0);
					iLocal_482++;
					Function_278(63, "STAGE 01 - OBJ_06-LOOP_PASS_01");
				}
			}
			else
			{
				Function_278(63, "STAGE 01 - OBJ_06-LOOP_PASS_01");
			}
			break;
		
		case 0x0000003F:
			if (!Function_586())
			{
				if (!Function_584())
				{
					Function_579();
				}
			}
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_218(0);
				Function_410(14);
				Function_409(14);
				Function_212(0);
				Function_278(64, "STAGE 01 - OBJ_06-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000040:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_218(1);
				Function_423();
				Function_212(1);
				Function_278(63, "STAGE 01 - OBJ_06-LOOP_PASS_01");
			}
			break;
		
		case 0x00000041:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_230();
				Function_565();
				Function_194();
				Function_278(66, "STAGE 01 - OBJ_07-OBJ_01");
			}
			break;
		
		case 0x00000042:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_436("Ranch01_obj01_7", 7,5f, 1, 2, 0, 0, 0);
				Function_218(0);
				Function_389(2, Global_34573, 2,5f, 1);
				Function_387();
				Function_278(73, "STAGE 01 - OBJ_07-LOOP_PASS_01");
			}
			break;
		
		case 0x00000049:
			if (!Function_586())
			{
				if (!Function_584())
				{
					if (!Function_579())
					{
						Function_574();
					}
				}
			}
			if (Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_220();
				Function_410(14);
				Function_409(14);
				Function_278(74, "STAGE 01 - OBJ_07-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000004A:
			if (!Function_411(&bLocal_319, Global_30668[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_351, 1, 0, 0, 330, 1))
			{
				Function_219();
				Function_389(10, Global_34573, 2,5f, 1);
				Function_387();
				Function_278(73, "STAGE 01 - OBJ_07-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_563();
				Function_287(0);
				iLocal_308 = 1;
				iLocal_346[0] = 1;
				Function_278(0, "STAGE 02 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_563() //Position: 0x1AA9B / 109211
{
	Function_264();
	Function_564();
	Function_258();
	Function_220();
	Function_271(0);
	Function_218(0);
	Function_217();
	Function_255();
	Function_253();
	Function_212(0);
	Function_251(1);
	Function_250();
	Function_249();
	Function_248(1);
	return;
}

void Function_564() //Position: 0x1AAD0 / 109264
{
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[10]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[10]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[13]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[13]);
	return;
}

void Function_565() //Position: 0x1AB06 / 109318
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_ranchGateway", "Ranch01_ranchGateway", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566() //Position: 0x1AB57 / 109399
{
	if ((iLocal_310 % 2) == 0)
	{
		Function_568();
	}
	else
	{
		Function_567();
	}
	return;
}

void Function_567() //Position: 0x1AB6F / 109423
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_arrive_v2_AA", "Ranch01_arrive_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_arrive_v2_AB", "Ranch01_arrive_v2_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x1ABF7 / 109559
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_arrive_v1_AA", "Ranch01_arrive_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_arrive_v1_AB", "Ranch01_arrive_v1_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_569() //Position: 0x1AC7F / 109695
{
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "beingBucked"))
		{
			Function_571();
		}
		else
		{
			Function_570();
		}
		iLocal_485 = 1;
		return 1;
	}
	return 0;
}

void Function_570() //Position: 0x1ACB6 / 109750
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_johnOffHorse", "Ranch01_johnOffHorse", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_571() //Position: 0x1AD07 / 109831
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_thrownOffHorse", "Ranch01_thrownOffHorse", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_572() //Position: 0x1AD5C / 109916
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_mounted", "Ranch01_mounted", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_573() //Position: 0x1ADA3 / 109987
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_horses", "Ranch01_horses", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_574() //Position: 0x1ADE8 / 110056
{
	if (bLocal_501)
	{
	}
	else if (bLocal_502)
	{
		if (iLocal_506)
		{
			Function_578();
			iLocal_485 = 1;
			iLocal_506 = 0;
			return 1;
		}
	}
	if (bLocal_503)
	{
		if (iLocal_506)
		{
			Function_577();
			iLocal_485 = 1;
			iLocal_506 = 0;
			return 1;
		}
	}
	if (bLocal_504)
	{
		if (iLocal_506)
		{
			Function_576();
			iLocal_485 = 1;
			iLocal_506 = 0;
			return 1;
		}
	}
	if (bLocal_505)
	{
		if (iLocal_506)
		{
			Function_575();
			iLocal_485 = 1;
			iLocal_506 = 0;
			return 1;
		}
	}
	return 0;
}

void Function_575() //Position: 0x1AE65 / 110181
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_wronDirection", "Ranch01_wronDirection", false, 2, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_576() //Position: 0x1AEB8 / 110264
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_tooBehind", "Ranch01_tooBehind", false, 2, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_577() //Position: 0x1AF03 / 110339
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_tooAhead", "Ranch01_tooAhead", false, 2, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_578() //Position: 0x1AF4C / 110412
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_johnNoHorse", "Ranch01_johnNoHorse", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_579() //Position: 0x1AF9B / 110491
{
	if (Function_583(GET_WEAPON_IN_HAND(Global_34573)))
	{
		bLocal_456 = GET_ACTOR_UNDER_RETICLE(Global_34573, 1);
		if (IS_ACTOR_ALIVE(bLocal_456))
		{
			if (!IS_ACTOR_ANIMAL(bLocal_456))
			{
				if (!Function_353(&bLocal_325))
				{
					Function_279(&bLocal_325);
				}
				else if (bLocal_498 != bLocal_456)
				{
					Function_279(&bLocal_325);
				}
				else if (Function_351(&bLocal_325) <= 1.0f)
				{
					if (bLocal_498 == bLocal_313)
					{
						if (MEMORY_GET_IS_VISIBLE(bLocal_313, Global_34573))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_582();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_gunOnBonnie", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
							}
							iLocal_485 = 1;
						}
					}
					else if (Function_581(bLocal_498) == bLocal_258 && Function_581(bLocal_498) == Local_4)
					{
						if (MEMORY_GET_IS_VISIBLE(bLocal_313, bLocal_498))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_580();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_gunOnOther", "", false, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
							}
							iLocal_485 = 1;
						}
					}
					if (iLocal_485)
					{
						Function_254(&bLocal_325);
						return 1;
					}
				}
				bLocal_498 = bLocal_456;
				return 0;
			}
		}
	}
	bLocal_498 = "";
	Function_254(&bLocal_325);
	return 0;
}

void Function_580() //Position: 0x1B0D0 / 110800
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_gunOnOther", "Ranch01_gunOnOther", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

int Function_581(bool bParam0) //Position: 0x1B11D / 110877
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_582() //Position: 0x1B177 / 110967
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_gunOnBonnie", "Ranch01_gunOnBonnie", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_583(bool bParam0) //Position: 0x1B1C6 / 111046
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

bool Function_584() //Position: 0x1B20C / 111116
{
	if (IS_ACTOR_SHOOTING(Global_34573))
	{
		if (GET_WEAPON_IN_HAND(Global_34573) != 21)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_585();
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_shootRandom", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			}
			iLocal_485 = 1;
			return 1;
		}
	}
	return 0;
}

void Function_585() //Position: 0x1B266 / 111206
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_shootRandom", "Ranch01_shootRandom", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_586() //Position: 0x1B2B5 / 111285
{
	if (iLocal_485)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(bLocal_313))
		{
			iLocal_485 = 0;
		}
		return 1;
	}
	return 0;
}

void Function_587() //Position: 0x1B2D7 / 111319
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_follow_v1", "Ranch01_follow_v1", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_588() //Position: 0x1B322 / 111394
{
	if ((iLocal_310 % 2) == 0)
	{
		Function_590();
	}
	else
	{
		Function_589();
	}
	return;
}

void Function_589() //Position: 0x1B33A / 111418
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_greet_v2_AA", "Ranch01_greet_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_greet_v2_AB", "Ranch01_greet_v2_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_590() //Position: 0x1B3BE / 111550
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_greet_v1_AA", "Ranch01_greet_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_greet_v1_AB", "Ranch01_greet_v1_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_591(bool bParam0, bool bParam1, float fParam2) //Position: 0x1B442 / 111682
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		GET_POSITION(bParam0, &vVar0);
		GET_POSITION(bParam1, &vVar3);
		vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vVar3, StackVal) };
		VNORMALIZE(&vVar6);
		GET_ACTOR_AXIS(bParam0, &uVar9, 2);
		if (VDOT(&uVar9, &vVar6) >= fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

void Function_592() //Position: 0x1B4DC / 111836
{
	Function_236(&iLocal_477, 1, 0, 4294967295, 4294967295);
	Function_593();
	if (bLocal_480)
	{
		Function_537(1.0f);
	}
	if (bLocal_480)
	{
		Function_280(&bLocal_328, (30.0f - 1.0f));
	}
	SET_ACTOR_INVULNERABILITY(bLocal_313, false);
	SET_ACTOR_INVULNERABILITY(bLocal_314, false);
	SET_ACTOR_INVULNERABILITY(bLocal_315, false);
	Function_535((*&Local_4 + 628)[11]);
	return;
}

void Function_593() //Position: 0x1B52D / 111917
{
	GET_OBJECT_POSITION((*&Local_4 + 628)[1], &vLocal_458);
	TRAIN_SET_TARGET_SPEED(Global_34207, 10.0f);
	TRAIN_SET_TARGET_POS(Global_34207, &vLocal_458);
	return;
}

void Function_594() //Position: 0x1B556 / 111958
{
	Function_598();
	Function_452();
	Function_597();
	Function_596();
	Function_282();
	Function_595();
	Function_441(Global_34573, 0x41200000);
	MEMORY_PREFER_WALKING(bLocal_313, false);
	AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,1f);
	Function_247();
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[0], 1, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[17]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_313, (*&Local_4 + 364)[18]);
	return;
}

void Function_595() //Position: 0x1B5BD / 112061
{
	if (ACTOR_HAS_WEAPON(Global_34573, 8))
	{
		SET_WEAPONENUM_LOCKED(8, 1);
		DELETE_WEAPON_FROM_ACTOR(Global_34573, 8);
	}
	return;
}

void Function_596() //Position: 0x1B5DC / 112092
{
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 364)[10]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 364)[10], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[10]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[10]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 364)[13]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 364)[13], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[13]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 364)[13]);
	return;
}

void Function_597() //Position: 0x1B646 / 112198
{
	iLocal_353 = 0;
	return;
}

void Function_598() //Position: 0x1B650 / 112208
{
	GET_OBJECT_POSITION((*&Local_4 + 628)[0], &vLocal_458);
	GET_OBJECT_ORIENTATION((*&Local_4 + 628)[0], &Local_464);
	UNK_0x44986367(StackVal, &Local_464);
	TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
	TRAIN_SET_POSITION_DIRECTION(Global_34207, &vLocal_458, &Local_464);
	return;
}

void Function_599() //Position: 0x1B692 / 112274
{
	Function_371(bLocal_313);
	Function_371(bLocal_314);
	return;
}

void Function_600() //Position: 0x1B6A4 / 112292
{
	Function_236(&iLocal_477, 0, 0, 4294967295, 4294967295);
	return;
}

bool Function_601() //Position: 0x1B6B4 / 112308
{
	Function_625();
	Function_513();
	switch (iLocal_523)
	{
		case 0x00000000:
			iLocal_485 = 0;
			iLocal_483 = 0;
			iLocal_484 = 4294967295;
			Function_251(0);
			Function_250();
			iLocal_523 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 448)[11]))
			{
				Function_441(Global_34573, 0x41200000);
				Function_624(1);
				Function_278(15, "STAGE 01 - OBJ_02-DLG_01");
				iLocal_523 = 2;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_623();
			Function_561(bLocal_314, (*&Local_4 + 712)[12], 2, 5.0f, 0);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			Function_559(bLocal_314, (*&Local_4 + 712)[12], (*&Local_4 + 448)[14]);
			Function_559(bLocal_315, (*&Local_4 + 712)[3], (*&Local_4 + 448)[14]);
			break;
		
		case 0x00000002:
			if (iLocal_309 > 18)
			{
				Function_440(1);
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_313, false);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 43, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 48, 0);
				TASK_CLEAR(bLocal_313);
				TASK_PRIORITY_SET(bLocal_313, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_313, Local_4.f_992, 3, 1, 0, 1, false);
				iLocal_523 = 3;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			if (IS_VOLUME_VALID((*&Local_4 + 448)[6]))
			{
				if (!IS_ACTOR_IN_VOLUME(bLocal_313, (*&Local_4 + 448)[6]))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
					DESTROY_VOLUME((*&Local_4 + 448)[6]);
				}
			}
			Function_561(bLocal_314, (*&Local_4 + 712)[12], 2, 5.0f, 0);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			break;
		
		case 0x00000003:
			Function_512(Local_4.f_992);
			if (Function_510(Local_4.f_992, (*&Local_4 + 712)[16]))
			{
				Function_620();
				Function_619(16, "Ranch01_stockade_con");
				Function_251(1);
				Function_250();
				Function_618(1);
				Function_440(1);
				if (IS_VOLUME_VALID((*&Local_4 + 448)[6]))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
					DESTROY_VOLUME((*&Local_4 + 448)[6]);
				}
				iLocal_523 = 4;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			if (IS_VOLUME_VALID((*&Local_4 + 448)[6]))
			{
				if (!IS_ACTOR_IN_VOLUME(bLocal_313, (*&Local_4 + 448)[6]))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_313);
					DESTROY_VOLUME((*&Local_4 + 448)[6]);
				}
			}
			Function_487(1, 1, 5.0f, 10.0f, 15.0f, 0);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			break;
		
		case 0x00000004:
			Function_512(Local_4.f_992);
			if (Function_477(Local_4.f_992))
			{
				if (GET_MOUNT(Global_34573) != bLocal_314 || GET_MOUNT(Global_34573) != bLocal_315)
				{
					bLocal_499 = true;
				}
				else
				{
					bLocal_499 = false;
				}
				Function_441(Global_34573, 0x41200000);
				Function_248(1);
				CLEAR_ACTOR_MAX_SPEED(bLocal_313);
				if (Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0))
				{
					Function_560(bLocal_315, Local_4.f_1004, 1);
				}
				else
				{
					Function_247();
				}
				if (!bLocal_499)
				{
					Function_278(25, "STAGE 01 - OBJ_03-DLG_01");
				}
				else
				{
					Function_278(35, "STAGE 01 - OBJ_04-DLG_01");
				}
				Function_279(&bLocal_322);
				iLocal_523 = 5;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_616((*&Local_4 + 628)[16], 2,5f, 1, 1, 1);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			break;
		
		case 0x00000005:
			if (GET_MOUNT(Global_34573) != bLocal_314 && Function_479(bLocal_313, bLocal_315))
			{
				Function_236(&iLocal_477, 3, 0, 4294967295, 4294967295);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313, -1.0f, -1.0f, 4, 1, 1);
				Function_251(1);
				Function_250();
				Function_441(Global_34573, 0x41200000);
				Function_248(1);
				MEMORY_PREFER_RIDING(bLocal_313, false);
				AI_SET_NAV_ACTOR_WIDTH(bLocal_313, 0,72f);
				Function_246();
				Function_245();
				if (!bLocal_499)
				{
					Function_278(35, "STAGE 01 - OBJ_04-DLG_01");
				}
				iLocal_523 = 6;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			if (GET_MOUNT(Global_34573) == bLocal_315)
			{
				Function_560(bLocal_314, Local_4.f_1004, 1);
			}
			Function_489(1, 0);
			if (Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0))
			{
				if (GET_TASK_STATUS(bLocal_313, 0) != 1)
				{
					Function_560(bLocal_315, Local_4.f_1004, 1);
				}
			}
			if (Function_479(bLocal_313, bLocal_315))
			{
				if (Function_351(&bLocal_322) <= 10.0f)
				{
					Function_487(0, 0, 5.0f, 10.0f, 15.0f, 1);
				}
			}
			break;
		
		case 0x00000006:
			Function_512(Local_4.f_1004);
			if (Function_510(Local_4.f_1004, (*&Local_4 + 712)[17]))
			{
				Function_613();
				Function_619(17, "Ranch01_store_con");
				Function_251(1);
				Function_250();
				Function_618(1);
				Function_440(1);
				bLocal_509 = false;
				iLocal_523 = 7;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 1);
			if (Function_479(bLocal_313, bLocal_315))
			{
				if (GET_TASK_STATUS(bLocal_313, 6) == 1)
				{
					Function_440(1);
					TASK_CLEAR(bLocal_313);
					TASK_PRIORITY_SET(bLocal_313, true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_313, Local_4.f_1004, 3, 1, 0, 1, false);
				}
				else if (GET_TASK_STATUS(bLocal_313, 43) == 1)
				{
					Function_487(1, 1, 10.0f, 20.0f, 30.0f, 1);
				}
			}
			break;
		
		case 0x00000007:
			Function_512(Local_4.f_1004);
			if (Function_510(Local_4.f_1004, (*&Local_4 + 712)[5]))
			{
				Function_610();
				Function_619(9, "Ranch01_corral_con");
				Function_251(1);
				Function_250();
				Function_618(1);
				Function_440(2);
				bLocal_509 = false;
				iLocal_523 = 8;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 1);
			Function_609(Local_4.f_1004, (*&Local_4 + 712)[18]);
			Function_608(Local_4.f_1004, (*&Local_4 + 712)[7], 2);
			if (!bLocal_509)
			{
				Function_487(1, 1, 10.0f, 20.0f, 30.0f, 1);
			}
			else
			{
				Function_487(2, 2, 10.0f, 20.0f, 30.0f, 1);
			}
			Function_616((*&Local_4 + 628)[17], 2,5f, 1, 1, 1);
			break;
		
		case 0x00000008:
			Function_512(Local_4.f_1004);
			if (Function_510(Local_4.f_1004, (*&Local_4 + 712)[20]))
			{
				Function_605();
				Function_619(18, "Ranch01_trainstation_con");
				Function_251(1);
				Function_250();
				Function_618(1);
				Function_440(4);
				TASK_CLEAR(bLocal_313);
				TASK_PRIORITY_SET(bLocal_313, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_313, Local_4.f_1008, 3, 1, 0, 1, false);
				iLocal_523 = 9;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 1);
			Function_609(Local_4.f_1004, (*&Local_4 + 712)[6]);
			Function_608(Local_4.f_1004, (*&Local_4 + 712)[22], 2);
			if (!bLocal_509)
			{
				Function_487(2, 2, 10.0f, 20.0f, 30.0f, 1);
			}
			else
			{
				Function_487(4, 4, 10.0f, 20.0f, 30.0f, 1);
			}
			Function_616((*&Local_4 + 628)[9], 2,5f, 1, 1, 1);
			break;
		
		case 0x00000009:
			Function_512(Local_4.f_1008);
			if (Function_510(Local_4.f_1008, (*&Local_4 + 712)[0]))
			{
				Function_602();
				Function_619(2, "Ranch01_barn_con");
				Function_251(1);
				Function_250();
				Function_618(1);
				Function_440(4);
				iLocal_523 = 10;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 1);
			Function_609(Local_4.f_1008, (*&Local_4 + 712)[21]);
			Function_487(4, 4, 10.0f, 20.0f, 30.0f, 1);
			Function_616((*&Local_4 + 628)[18], 2,5f, 1, 1, 1);
			break;
		
		case 0x0000000A:
			Function_512(Local_4.f_1008);
			if (Function_510(Local_4.f_1008, (*&Local_4 + 712)[19]))
			{
				Function_236(&iLocal_477, 1, 0, 4294967295, 4294967295);
				Function_251(1);
				Function_250();
				Function_441(Global_34573, 0x41200000);
				Function_248(1);
				Function_440(1);
				Function_278(45, "STAGE 01 - OBJ_05-DLG_01");
				iLocal_523 = 11;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 1);
			Function_609(Local_4.f_1008, (*&Local_4 + 712)[1]);
			Function_487(4, 4, 10.0f, 20.0f, 30.0f, 1);
			Function_616((*&Local_4 + 628)[2], 2,5f, 1, 1, 1);
			break;
		
		case 0x0000000B:
			Function_512(Local_4.f_1008);
			if (Function_477(Local_4.f_1008))
			{
				Function_253();
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_313);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_315, -1.0f, -1.0f, 4, 1, 1);
				Function_441(Global_34573, 0x41200000);
				Function_248(1);
				CLEAR_ACTOR_MAX_SPEED(bLocal_313);
				GET_OBJECT_POSITION((*&Local_4 + 628)[7], &vLocal_458);
				bLocal_471 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vLocal_458, true);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_313);
				TASK_PRIORITY_SET(bLocal_313, true);
				TASK_SEQUENCE_PERFORM(bLocal_313, bLocal_471);
				TASK_SEQUENCE_RELEASE(bLocal_471, 1);
				iLocal_523 = 12;
				return 1;
			}
			Function_507(30.0f, 5.0f);
			Function_489(1, 1);
			break;
		
		case 0x0000000C:
			if (IS_OBJECT_VALID(bLocal_452))
			{
				if (GATEWAY_UPDATE(bLocal_452))
				{
					REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_315);
					Function_278(55, "STAGE 01 - OBJ_06-OBJ_01A");
					iLocal_523 = 13;
					return 1;
				}
			}
			Function_489(1, 0);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			break;
		
		case 0x0000000D:
			if (Function_475(Global_34573, (*&Local_4 + 712)[10], 2.0f))
			{
				iLocal_523 = 14;
				return 1;
			}
			Function_561(bLocal_314, (*&Local_4 + 712)[12], 2, 5.0f, 0);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			break;
		
		case 0x0000000E:
			if (!Function_479(Global_34573, bLocal_314))
			{
				Function_209((*&Local_4 + 628)[11]);
				if (Function_473(bLocal_314, bLocal_496) || Function_473(bLocal_314, bLocal_497))
				{
					Function_251(1);
					Function_250();
					Function_441(Global_34573, 0x41200000);
					Function_248(1);
					CLEAR_ACTOR_MAX_SPEED(bLocal_313);
					SET_ACTOR_CAN_PLAY_GESTURES(bLocal_313, true);
					AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 43, 1);
					AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 48, 1);
					Function_278(65, "STAGE 01 - OBJ_07-DLG_01");
					Function_279(&bLocal_322);
					iLocal_523 = 15;
					return 1;
				}
				if (!Function_475(Global_34573, (*&Local_4 + 712)[10], 5.0f))
				{
					Function_278(56, "STAGE 01 - OBJ_06-OBJ_01B");
					iLocal_523 = 13;
					return 1;
				}
			}
			if (!Function_475(bLocal_314, (*&Local_4 + 712)[10], 5.0f))
			{
				Function_278(46, "STAGE 01 - OBJ_05-OBJ_01");
				iLocal_523 = 12;
				return 1;
			}
			Function_561(bLocal_314, (*&Local_4 + 712)[12], 2, 5.0f, 0);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			break;
		
		case 0x0000000F:
			if (IS_OBJECT_VALID(bLocal_452))
			{
				if (GATEWAY_UPDATE(bLocal_452))
				{
					Function_220();
					iLocal_523 = 16;
					return 1;
				}
			}
			if (Function_351(&bLocal_322) <= 10.0f)
			{
				Function_487(0, 0, 5.0f, 10.0f, 15.0f, 0);
			}
			Function_561(bLocal_314, (*&Local_4 + 712)[12], 2, 5.0f, 0);
			Function_561(bLocal_315, (*&Local_4 + 712)[3], 2, 5.0f, 0);
			break;
		
		case 0x00000010:
			return 0;
			break;
	}
	return 1;
}

void Function_602() //Position: 0x1C224 / 115236
{
	if ((iLocal_310 % 2) == 0)
	{
		Function_604();
	}
	else
	{
		Function_603();
	}
	return;
}

void Function_603() //Position: 0x1C23C / 115260
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_barn_v2_AA", "Ranch01_barn_v2_AA", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_604() //Position: 0x1C289 / 115337
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_barn_v1_AA", "Ranch01_barn_v1_AA", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_605() //Position: 0x1C2D6 / 115414
{
	if ((iLocal_310 % 2) == 0)
	{
		Function_607();
	}
	else
	{
		Function_606();
	}
	return;
}

void Function_606() //Position: 0x1C2EE / 115438
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v2_AA", "Ranch01_trainStation_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_trainStation_v2_AB", "Ranch01_trainStation_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v2_AC", "Ranch01_trainStation_v2_AC", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_607() //Position: 0x1C3D1 / 115665
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v1_AA1", "Ranch01_trainStation_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v1_AA2", "Ranch01_trainStation_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_trainStation_v1_AB", "Ranch01_trainStation_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v1_AC", "Ranch01_trainStation_v1_AC", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_608(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C4FB / 115963
{
	if (!bLocal_509)
	{
		if (Function_510(bParam0, bParam1))
		{
			bLocal_509 = true;
			Function_440(bParam2);
		}
	}
	return;
}

void Function_609(var uParam0, var uParam1) //Position: 0x1C51B / 115995
{
	if (!iLocal_507)
	{
		if (Function_511(uParam0, uParam1))
		{
			Function_437();
		}
	}
	return;
}

void Function_610() //Position: 0x1C535 / 116021
{
	if ((iLocal_310 % 2) == 0)
	{
		Function_612();
	}
	else
	{
		Function_611();
	}
	return;
}

void Function_611() //Position: 0x1C54D / 116045
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v2_AA", "Ranch01_corral_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_corral_v2_AB", "Ranch01_corral_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v2_AC", "Ranch01_corral_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_corral_v2_AD", "Ranch01_corral_v2_AD", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_612() //Position: 0x1C643 / 116291
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v1_AA", "Ranch01_corral_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_corral_v1_AB", "Ranch01_corral_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v1_AC", "Ranch01_corral_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_corral_v1_AD", "Ranch01_corral_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v1_AE", "Ranch01_corral_v1_AE", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_613() //Position: 0x1C770 / 116592
{
	if ((iLocal_310 % 2) == 0)
	{
		Function_615();
	}
	else
	{
		Function_614();
	}
	return;
}

void Function_614() //Position: 0x1C788 / 116616
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_generalStore_v2_AA", "Ranch01_generalStore_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_generalStore_v2_AB", "Ranch01_generalStore_v2_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_615() //Position: 0x1C828 / 116776
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_generalStore_v1_AA", "Ranch01_generalStore_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_generalStore_v1_AB", "Ranch01_generalStore_v1_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_616(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1C8C8 / 116936
{
	if (bLocal_508)
	{
		if (!Function_353(&bLocal_334))
		{
			if (bParam2)
			{
				if (GET_OBJECT_TYPE(bParam0) == 8)
				{
					Function_482(bParam0, fParam1);
				}
				else if (GET_OBJECT_TYPE(bParam0) == 15)
				{
					bLocal_456 = GET_ACTOR_FROM_OBJECT(bParam0);
					if (IS_ACTOR_ALIVE(bLocal_456))
					{
						Function_441(bLocal_456, 0x41200000);
					}
				}
			}
			if (bParam3)
			{
				Function_617(bParam0);
			}
			Function_279(&bLocal_334);
		}
		else if (Function_351(&bLocal_334) <= fParam1)
		{
			if (bParam4)
			{
				Function_441(Global_34573, 0x41200000);
			}
			else
			{
				Function_249();
			}
			Function_248(0);
			Function_618(0);
		}
	}
}

void Function_617(bool bParam0) //Position: 0x1C95C / 117084
{
	if (!ACTOR_HAS_ANIM_SET(bLocal_313, "aiming_point"))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_313, 1);
		SET_ANIM_SET_FOR_ACTOR(bLocal_313, "aiming_point", 0);
	}
	SET_ACTION_NODE_FOR_ACTOR(bLocal_313, "aiming_point");
	AI_GOAL_AIM_AT_OBJECT(bLocal_313, bParam0, 0);
	return;
}

void Function_618(int iParam0) //Position: 0x1C9B8 / 117176
{
	bLocal_508 = iParam0;
	Function_254(&bLocal_334);
	return;
}

void Function_619(int iParam0, bool bParam1) //Position: 0x1C9C9 / 117193
{
	iLocal_507 = 0;
	Function_75();
	Function_388(StackVal, StackVal, (*&Local_4 + 628)[iParam0], Function_75(), 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_453, bParam1);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_453, 1);
	return;
}

void Function_620() //Position: 0x1C9FB / 117243
{
	if ((iLocal_310 % 2) == 0)
	{
		Function_622();
	}
	else
	{
		Function_621();
	}
	return;
}

void Function_621() //Position: 0x1CA13 / 117267
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_walk_v2_AA", "Ranch01_walk_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_walk_v2_AB", "Ranch01_walk_v2_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_622() //Position: 0x1CA93 / 117395
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_walk_v1_AA", "Ranch01_walk_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_walk_v1_AB", "Ranch01_walk_v1_AB", true, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_623() //Position: 0x1CB13 / 117523
{
	if (GET_TASK_STATUS(bLocal_313, 19) == 1 || GET_CURRENT_GRINGO(bLocal_313) == GET_GRINGO_FROM_OBJECT(Local_4.f_960))
	{
		if (!Function_382(bLocal_313, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			SNAP_ACTOR_TO_GRINGO(bLocal_313, Local_4.f_960, "UseCase1", true, 0, 0);
		}
		TASK_CLEAR(bLocal_313);
		TASK_PRIORITY_SET(bLocal_313, true);
		TASK_USE_GRINGO(bLocal_313, GET_GRINGO_FROM_OBJECT(Local_4.f_960), "UseCase1", 4294967295, 1);
	}
	return;
}

void Function_624(int iParam0) //Position: 0x1CB8F / 117647
{
	TASK_CLEAR(bLocal_313);
	TASK_PRIORITY_SET(bLocal_313, true);
	TASK_FACE_ACTOR(bLocal_313, Global_34573, iParam0, -1.0f);
	return;
}

void Function_625() //Position: 0x1CBAE / 117678
{
	if (!bLocal_474)
	{
		TRAIN_GET_POSITION(Global_34207, &vLocal_458);
		GET_OBJECT_POSITION((*&Local_4 + 628)[1], &vLocal_461);
		if (VDIST(vLocal_458, vLocal_461) >= 10.0f)
		{
			Function_264();
		}
	}
	return;
}

int Function_626() //Position: 0x1CBEC / 117740
{
	GET_OBJECT_POSITION((*&Local_4 + 552)[0], &vLocal_458);
	if (Function_516(StackVal, StackVal, "$/cutscene/RANCH01_CS02_P1/RANCH01_CS02_P1", &uLocal_478, vLocal_458, 0, 75.0f, 150.0f, 2, 1, 1, 2, 0, 1))
	{
		return 1;
	}
	return 0;
}

void Function_627() //Position: 0x1CC50 / 117840
{
	switch (iLocal_309)
	{
		case 0x00000006:
			Function_676(&Local_259, 1);
			bLocal_258 = CREATE_LAYOUT("Ranch01_DynamicLayout");
			Function_675();
			Function_367();
			Function_180(1, 0, 1);
			iLocal_309 = 7;
			break;
		
		case 0x00000007:
			if (Function_656())
			{
				Function_651();
				iLocal_309 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_645())
			{
				iLocal_309 = 9;
			}
			break;
		
		case 0x00000009:
			Unknown_Function();
			if (StackVal)
			{
				iLocal_309 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_312 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			Function_632();
			Function_631(&bLocal_316);
			Function_631(&bLocal_319);
			iLocal_308 = 0;
			iLocal_309 = 0;
			Function_629(&Local_259, &iLocal_308, &iLocal_309);
			Function_628(StackVal, StackVal, StackVal, StackVal, StackVal, Function_644(), Local_259);
			switch (iLocal_308)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_281();
					break;
				
				case 0x00000002:
					Function_269();
					break;
				
				case 0x00000065:
					Function_244();
					break;
			}
			break;
	}
	return;
}

void Function_628(struct<25> Param0) //Position: 0x1CD57 / 118103
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_308 = 0;
			break;
		
		case 0x00000002:
			iLocal_308 = 1;
			break;
		
		case 0x00000003:
			iLocal_308 = 101;
			break;
	}
}

void Function_629(int iParam0, var uParam1, int iParam2) //Position: 0x1CD90 / 118160
{
	if (Function_286(iParam0))
	{
		*uParam1 = Function_285(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_630();
	}
	return;
}

void Function_630() //Position: 0x1CDC4 / 118212
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

void Function_631(bool bParam0) //Position: 0x1CE15 / 118293
{
	if (!Function_353(bParam0))
	{
		Function_280(bParam0, 0.0f);
	}
	return;
}

void Function_632() //Position: 0x1CE2A / 118314
{
	iLocal_477 = 0;
	Function_643("FTR_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_641(0, 0);
	Function_157(Global_30668[0]);
	Function_640();
	Function_638();
	Function_417(0);
	DISABLE_PLAYER_GRINGO_USE(0, 1);
	Function_212(0);
	DECOR_SET_BOOL(Global_34573, "BlockHitchHelp", true);
	Function_192(0);
	Function_636(&uLocal_354, bLocal_258);
	Function_490(&(Local_394[017]), bLocal_313, "RanchersDaughter", 1, 0x5f5e100, 1);
	Function_490(&(Local_394[117]), bLocal_314, "Horse", 0, 0x5f5e100, 1);
	Function_633(&(Local_394[217]), bLocal_258, 0x5f5e100);
	return;
}

int Function_633(char* cParam0, bool bParam1, int iParam2) //Position: 0x1CEEC / 118508
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Layout invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(*cParam0))
	{
		if (GET_OBJECT_TYPE(*cParam0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(*cParam0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(*cParam0);
			}
		}
	}
	Function_75();
	Function_75();
	*cParam0 = CREATE_POINT_IN_LAYOUT(bParam1, "nMFT_Dummy", Function_75(), Function_75());
	if (!IS_OBJECT_VALID(*cParam0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	cParam0->f_28 = 8;
	cParam0->f_32 = 2;
	if (!Function_495(cParam0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_494(cParam0, 0);
	cParam0->f_40 = 0;
	Function_491(cParam0, iParam2, 0);
	Function_634(cParam0, 3);
	return 1;
}

void Function_634(int iParam0, int iParam1) //Position: 0x1CFFD / 118781
{
	if (iParam1 != 100000000)
	{
		Function_635(iParam0, iParam1);
	}
	else
	{
		Function_492(iParam0, 1);
	}
	return;
}

void Function_635(int iParam0, bool bParam1) //Position: 0x1D01D / 118813
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_636(var uParam0, bool bParam1) //Position: 0x1D048 / 118856
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_637(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_637(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_637(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_637(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_637(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1D6E8 / 120552
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

void Function_638() //Position: 0x1D7AB / 120747
{
	if (!IS_ACTOR_ALIVE(bLocal_315))
	{
		Function_639();
		bLocal_315 = (*&Local_4 + 244)[02];
		if (IS_ACTOR_ALIVE(bLocal_315))
		{
			ACCESSORIZE_HORSE(bLocal_315, 3);
			Function_446(bLocal_315);
			SET_ACTOR_FACTION(bLocal_315, 20);
			SET_MOST_RECENT_MOUNT(bLocal_313, bLocal_315);
			SET_ACTOR_INVULNERABILITY(bLocal_315, true);
			SET_ACTOR_MAX_HEALTH(bLocal_315, 50.0f);
			SET_ACTOR_HEALTH(bLocal_315, 50.0f);
			AI_SET_NAV_ACTOR_WIDTH(bLocal_315, 0,5f);
			TASK_CLEAR(bLocal_315);
			TASK_PRIORITY_SET(bLocal_315, true);
			TASK_STAND_STILL(bLocal_315, -1.0f, 0, 0);
		}
		else
		{
			LOG_ERROR("Failed to create/setup CompHorse properly!");
		}
	}
	return;
}

void Function_639() //Position: 0x1D861 / 120929
{
	(*&Local_4 + 244)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nCompHorse", 977, -813,4084f, 93,36762f, 2429,729f, 0.0f, 89,60596f, 0.0f);
	return;
}

void Function_640() //Position: 0x1D898 / 120984
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1030);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1031);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1032);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1037);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1038);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1039);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1040);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1012);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1013);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1014);
	return;
}

void Function_641(int iParam0, int iParam1) //Position: 0x1D8F2 / 121074
{
	Function_167(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_642(StackVal, iParam1);
	}
	return;
}

void Function_642(int iParam0, int iParam1) //Position: 0x1D923 / 121123
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_167(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_165(iParam0, iVar0, iParam1);
	return;
}

void Function_643(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1D948 / 121160
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_237(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

var Function_644() //Position: 0x1D964 / 121188
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Ranch01_layout");
	Local_4.f_340 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 324)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -838,5982f, 94,69299f, 2372,861f, 0.0f, -71,09768f, 0.0f, 24.0f, 7.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_340, (*&Local_4 + 324)[0]);
	(*&Local_4 + 324)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -788,8539f, 98,2772f, 2407,156f, 0.0f, 145,1147f, 0.0f, 25.0f, 13.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_340, (*&Local_4 + 324)[1]);
	(*&Local_4 + 324)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -838,5982f, 94,69299f, 2372,861f, 0.0f, -71,09768f, 0.0f, 24.0f, 7.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_340, (*&Local_4 + 324)[2]);
	Local_4.f_360 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "PreInitVol_set");
	(*&Local_4 + 344)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit02Vol", 2, -934.0f, 103,7021f, 2432.0f, 0.0f, 270.0f, 0.0f, 256.0f, 30.0f, 92.0f);
	ADD_TO_VOLUME_SET(Local_4.f_360, (*&Local_4 + 344)[0]);
	(*&Local_4 + 344)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit03Vol", 2, -776,7565f, 95,29974f, 2372,023f, 0.0f, -34,66144f, 0.0f, 80.0f, 7.0f, 46.0f);
	ADD_TO_VOLUME_SET(Local_4.f_360, (*&Local_4 + 344)[1]);
	(*&Local_4 + 344)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit04Vol", 2, -883,1847f, 94,32787f, 2435,132f, 0.0f, 20,34403f, 0.0f, 80.0f, 9.0f, 60.0f);
	ADD_TO_VOLUME_SET(Local_4.f_360, (*&Local_4 + 344)[2]);
	Local_4.f_444 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ActionVol_set");
	(*&Local_4 + 364)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BackyardStayOutVol", 2, -776,7565f, 95,29974f, 2372,023f, 0.0f, -34,66144f, 0.0f, 80.0f, 7.0f, 46.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[0]);
	(*&Local_4 + 364)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoopAreaStayOutVol", 2, -883,1847f, 94,32787f, 2435,132f, 0.0f, 20,34403f, 0.0f, 80.0f, 9.0f, 60.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[1]);
	(*&Local_4 + 364)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoopStayOutInVol", 2, -883,1847f, 92,75782f, 2435,132f, 0.0f, 20,34403f, 0.0f, 15.0f, 5.0f, 13.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[2]);
	(*&Local_4 + 364)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CorralStayOutVol", 2, -892,0629f, 94,32787f, 2394,994f, 0.0f, -60,16562f, 0.0f, 110.0f, 9.0f, 85.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[3]);
	(*&Local_4 + 364)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoyoteStalkVol01", 2, -887,5616f, 92,49422f, 2422,885f, 0.0f, 20,34403f, 0.0f, 13.0f, 5.0f, 13.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[4]);
	(*&Local_4 + 364)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoyoteStalkVol02", 2, -899,0981f, 92,49422f, 2427,192f, 0.0f, 20,34403f, 0.0f, 6,5f, 5.0f, 13.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[5]);
	(*&Local_4 + 364)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoyoteStalkVol03", 2, -871,4006f, 92,75782f, 2430,763f, 0.0f, 20,34403f, 0.0f, 6,5f, 5.0f, 13.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[6]);
	(*&Local_4 + 364)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoyoteStayOutVol01", 2, -889,7175f, 92,75782f, 2433,827f, 0.0f, 20,34403f, 0.0f, 6,5f, 5.0f, 6.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[7]);
	(*&Local_4 + 364)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoyoteStayOutVol02", 2, -878,6982f, 92,75782f, 2429,743f, 0.0f, 20,34403f, 0.0f, 6,5f, 5.0f, 6.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[8]);
	(*&Local_4 + 364)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DitchStayOutVol", 2, -772,6022f, 93,60046f, 2442,586f, 0.0f, 55,339f, 0.0f, 100.0f, 10.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[9]);
	(*&Local_4 + 364)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FrontPorchStayOutVol", 2, -789,3221f, 94,54737f, 2410,002f, 0.0f, 325,1147f, 0.0f, 16,5f, 4,5f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[10]);
	(*&Local_4 + 364)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GardenStayOutVol", 2, -772,1881f, 95,7672f, 2381,589f, 0.0f, -34,66144f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[11]);
	(*&Local_4 + 364)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseDogFreakOutVol", 2, -892,0629f, 94,32787f, 2394,994f, 0.0f, -60,16562f, 0.0f, 110.0f, 9.0f, 85.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[12]);
	(*&Local_4 + 364)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseStayOutVol", 2, -813,5093f, 95,05132f, 2432,753f, 0.0f, 75.0f, 0.0f, 16.0f, 5.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[13]);
	(*&Local_4 + 364)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LivingAreaStayOutVol", 2, -824,8262f, 94,32787f, 2376,751f, 0.0f, -60,16562f, 0.0f, 75.0f, 9.0f, 65.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[14]);
	(*&Local_4 + 364)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerHouseStayOutVol", 2, -839,8889f, 94,69299f, 2369,092f, 0.0f, -71,09768f, 0.0f, 20.0f, 7.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[15]);
	(*&Local_4 + 364)[16] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RanchStayOutVol", 2, -852.0f, 103,7021f, 2432.0f, 0.0f, 0.0f, 0.0f, 256.0f, 30.0f, 256.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[16]);
	(*&Local_4 + 364)[17] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SidePorchStayOutVol01", 2, -779,96f, 94,54737f, 2407,366f, 0.0f, 325,1147f, 0.0f, 7.0f, 4,5f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[17]);
	(*&Local_4 + 364)[18] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SidePorchStayOutVol02", 2, -791,3229f, 94,54737f, 2397,007f, 0.0f, 325,1147f, 0.0f, 8,5f, 4,5f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 364)[18]);
	Local_4.f_524 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "TriggerVol_set");
	(*&Local_4 + 448)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ArchwayVol", 2, -873,5752f, 94,32787f, 2351,868f, 0.0f, -60,16562f, 0.0f, 40.0f, 9.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[0]);
	(*&Local_4 + 448)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ArmadilloVol", 2, -1002.0f, 117,524f, 2304.0f, 0.0f, 0.0f, 0.0f, 44.0f, 60.0f, 512.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[1]);
	(*&Local_4 + 448)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BackyardVol", 2, -772,0051f, 95,54496f, 2381,445f, 0.0f, -34,66144f, 0.0f, 27,5f, 5.0f, 27,5f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[2]);
	(*&Local_4 + 448)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnVol", 2, -840,3329f, 101,2162f, 2462,793f, 0.0f, -70.0f, 0.0f, 32.0f, 24.0f, 26.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[3]);
	(*&Local_4 + 448)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BonnieHouseVol", 2, -784,2783f, 98,2772f, 2400,594f, 0.0f, 145,1147f, 0.0f, 25.0f, 13.0f, 24.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[4]);
	(*&Local_4 + 448)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BonnieNearCoopVol", 2, -873,4361f, 94,32787f, 2437,265f, 0.0f, -70.0f, 0.0f, 50.0f, 9.0f, 70.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[5]);
	(*&Local_4 + 448)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BonnieOnPorchVol", 2, -789,0459f, 94,54737f, 2407,734f, 0.0f, 325,1147f, 0.0f, 7,5f, 4,5f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[6]);
	(*&Local_4 + 448)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Corral01Vol", 2, -897,154f, 94,32787f, 2371,087f, 0.0f, -60,16562f, 0.0f, 63,5f, 9.0f, 70.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[7]);
	(*&Local_4 + 448)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Corral02Vol", 2, -893,4744f, 94,32787f, 2457,137f, 0.0f, -70.0f, 0.0f, 47,91489f, 9.0f, 70.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[8]);
	(*&Local_4 + 448)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nGardenVol", 2, -772,1881f, 95,7672f, 2381,589f, 0.0f, -34,66144f, 0.0f, 9,45638f, 5.0f, 9,653666f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[9]);
	(*&Local_4 + 448)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GardenEntVol", 2, -765,7134f, 95,7672f, 2390,966f, 0.0f, -37,12057f, 0.0f, 2.0f, 5.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[10]);
	(*&Local_4 + 448)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MeetBonnieInnerVol", 2, -792,5153f, 94,37291f, 2407,776f, 0.0f, 325,1147f, 0.0f, 12.0f, 4.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[11]);
	(*&Local_4 + 448)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MeetBonnieOuterVol", 2, -792,5153f, 94,37291f, 2407,776f, 0.0f, 325,1147f, 0.0f, 48.0f, 6.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[12]);
	(*&Local_4 + 448)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerHouseVol", 2, -839,8889f, 94,69299f, 2369,092f, 0.0f, -71,09768f, 0.0f, 16.0f, 7.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[13]);
	(*&Local_4 + 448)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StockadeVol", 2, -823,6526f, 95,55747f, 2430,035f, 0.0f, 75.0f, 0.0f, 16.0f, 6.0f, 13.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[14]);
	(*&Local_4 + 448)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StoreVol", 2, -826,0886f, 94,66759f, 2392,028f, 0.0f, 80,44606f, 0.0f, 19.0f, 6.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[15]);
	(*&Local_4 + 448)[16] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ThievesLandingVol", 2, -608,8265f, 99,52299f, 2475,394f, 0.0f, -45.0f, 0.0f, 272.0f, 70.0f, 512.0f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[16]);
	(*&Local_4 + 448)[17] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TrainStationVol", 2, -954,163f, 94,51307f, 2424,404f, 0.0f, 110.0f, 0.0f, 28.0f, 10.0f, 19,5f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 448)[17]);
	Local_4.f_528 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 532)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -839,091f, 92,52304f, 2370,844f, 0.0f, 170,9499f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 532)[0], Local_4.f_528);
	(*&Local_4 + 532)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -791,5001f, 93,61219f, 2406,356f, 0.0f, -216,568f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 532)[1], Local_4.f_528);
	(*&Local_4 + 532)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -814,3506f, 93,41338f, 2432,269f, 0.0f, 60.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 532)[2], Local_4.f_528);
	Local_4.f_548 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 552)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -790,3117f, 93,23627f, 2412,991f, 0.0f, 145.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 552)[0], Local_4.f_548);
	(*&Local_4 + 552)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -791,0594f, 92,95382f, 2415,496f, 0.0f, 141,0129f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 552)[1], Local_4.f_548);
	(*&Local_4 + 552)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -814,3506f, 93,41338f, 2432,269f, 0.0f, 60.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 552)[2], Local_4.f_548);
	(*&Local_4 + 552)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompHorseStart02", -813,4084f, 93,36762f, 2429,729f, 0.0f, 89,60596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 552)[3], Local_4.f_548);
	(*&Local_4 + 552)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CamLookAt02", -796,0474f, 94,23627f, 2421,183f, 0.0f, 145.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 552)[4], Local_4.f_548);
	Local_4.f_576 = CREATE_OBJECTSET_IN_LAYOUT("Teleport01Set", Local_4, 8, 0);
	(*&Local_4 + 580)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerTeleport01", -761,1476f, 93,36453f, 2393,066f, 0.0f, -380,0871f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 580)[0], Local_4.f_576);
	(*&Local_4 + 580)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionTeleport01", -760,1313f, 93,36482f, 2390,194f, 0.0f, -385,5917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 580)[1], Local_4.f_576);
	(*&Local_4 + 580)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseTeleport01", -762,0868f, 93,36453f, 2392,723f, 0.0f, -380,0871f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 580)[2], Local_4.f_576);
	(*&Local_4 + 580)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompHorseTeleport01", -761,0331f, 93,36482f, 2389,762f, 0.0f, -385,5917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 580)[3], Local_4.f_576);
	Local_4.f_600 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 604)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -839,6923f, 92,51586f, 2372,941f, 0.0f, 20.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[0], Local_4.f_600);
	(*&Local_4 + 604)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -838,568f, 92,52142f, 2371,06f, 0.0f, 290,315f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[1], Local_4.f_600);
	(*&Local_4 + 604)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -832,5114f, 92,43291f, 2379,449f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[2], Local_4.f_600);
	(*&Local_4 + 604)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -841,291f, 92,3384f, 2377,412f, 0.0f, 18,374f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[3], Local_4.f_600);
	Local_4.f_624 = CREATE_OBJECTSET_IN_LAYOUT("ActionFlagSet", Local_4, 8, 0);
	(*&Local_4 + 628)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "AmbientTrainAtRanchFlag", -959,8447f, 90,30418f, 2441,439f, 0.0f, 199,7445f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[0], Local_4.f_624);
	(*&Local_4 + 628)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "AmbientTrainAtSteadFlag", -155,865f, 92,004f, 2569,758f, 0.0f, 346,359f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[1], Local_4.f_624);
	(*&Local_4 + 628)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "BarnLookAtFlag", -844,4792f, 96,55543f, 2461,344f, 0.0f, 379,9868f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[2], Local_4.f_624);
	(*&Local_4 + 628)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "BonnieShootCoyoteFlag", -886,1976f, 90,17119f, 2421,598f, -0,60346f, 186,5569f, 0,1208539f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[3], Local_4.f_624);
	(*&Local_4 + 628)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "BonnieShootRabbitFlag01", -764,0001f, 93,36469f, 2384.0f, 1,759897f, 70,08051f, 1,706609f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[4], Local_4.f_624);
	(*&Local_4 + 628)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "BonnieShootRabbitFlag02", -766,5941f, 93,3689f, 2375,719f, -0,9559765f, 128,8393f, -0,6927029f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[5], Local_4.f_624);
	(*&Local_4 + 628)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "BonnieWaitForPlayerFlag01", -791,5001f, 93,61219f, 2406,356f, 0.0f, -216,568f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[6], Local_4.f_624);
	(*&Local_4 + 628)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "BonnieWaitForPlayerFlag02", -792,7586f, 92,54903f, 2416,486f, 0.0f, -35.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[7], Local_4.f_624);
	(*&Local_4 + 628)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CoopLookAtFlag", -883,0015f, 92,34016f, 2435,23f, 0.0f, 200.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[8], Local_4.f_624);
	(*&Local_4 + 628)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Corral01LookAtFlag", -899,9732f, 93,83185f, 2372,93f, 0.0f, 29,09742f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[9], Local_4.f_624);
	(*&Local_4 + 628)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenLookAtFlag", -772,1881f, 95,04295f, 2381,589f, 0.0f, 55,33856f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[10], Local_4.f_624);
	(*&Local_4 + 628)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "HitchingPost01Flag", -815,7851f, 93,36488f, 2431,286f, 0.0f, 73,54227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[11], Local_4.f_624);
	(*&Local_4 + 628)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "HitchingPost02Flag", -762,9207f, 93,3649f, 2389,96f, 0.0f, 52,2076f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[12], Local_4.f_624);
	(*&Local_4 + 628)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "HitchingPost03Flag", -841,7166f, 92,35841f, 2376,399f, 0.0f, 19,71966f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[13], Local_4.f_624);
	(*&Local_4 + 628)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "MacFarlanesRanchFlag", -870,6128f, 90,55632f, 2416,329f, 0.0f, 295,4154f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[14], Local_4.f_624);
	(*&Local_4 + 628)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitRetreatFlag", -877,9203f, 95,64274f, 2238,921f, 0.0f, 35,92141f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[15], Local_4.f_624);
	(*&Local_4 + 628)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "StockadeLookAtFlag", -821,3817f, 95,67019f, 2423,069f, 0.0f, 165,7481f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[16], Local_4.f_624);
	(*&Local_4 + 628)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "StoreLookAtFlag", -828,7342f, 94,91409f, 2400,654f, 0.0f, -8,583705f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[17], Local_4.f_624);
	(*&Local_4 + 628)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "TrainStationLookAtFlag", -952,1812f, 94,60225f, 2424,888f, 0.0f, 199,7445f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 628)[18], Local_4.f_624);
	Local_4.f_708 = CREATE_OBJECTSET_IN_LAYOUT("TriggerFlagSet", Local_4, 8, 0);
	(*&Local_4 + 712)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "BarnFlag", -876,0079f, 90,35291f, 2494,018f, 0.0f, 277,4239f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[0], Local_4.f_708);
	(*&Local_4 + 712)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "BarnLookBackFlag", -806,3502f, 92,12242f, 2451,441f, 0.0f, 348,7345f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[1], Local_4.f_708);
	(*&Local_4 + 712)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "BonnieHouseGatewayFlag", -791,9395f, 92,55786f, 2417,059f, 0.0f, -35.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[2], Local_4.f_708);
	(*&Local_4 + 712)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompHorseSpot01Flag", -813,4084f, 93,36762f, 2429,729f, 0.0f, 89,60596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[3], Local_4.f_708);
	(*&Local_4 + 712)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompHorseSpot02Flag", -760,5623f, 93,36474f, 2389,763f, 0.0f, 67,33441f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[4], Local_4.f_708);
	(*&Local_4 + 712)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Corral01Flag", -852,8867f, 91,37363f, 2401,369f, 0.0f, 81,23734f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[5], Local_4.f_708);
	(*&Local_4 + 712)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Corral01LookBackFlag", -921,1119f, 91,13181f, 2420,674f, 0.0f, 82,21758f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[6], Local_4.f_708);
	(*&Local_4 + 712)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "Corral01SpeedUpFlag", -845,9664f, 91,69764f, 2401,672f, 0.0f, 89,1599f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[7], Local_4.f_708);
	(*&Local_4 + 712)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CreateRabbitsFlag", -781,783f, 92,93834f, 2424,15f, 0.0f, -58,52507f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[8], Local_4.f_708);
	(*&Local_4 + 712)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "KillCoyotesFlag", -818,1821f, 93,75012f, 2324,115f, 0.0f, 109,9785f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[9], Local_4.f_708);
	(*&Local_4 + 712)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "HitchHorse01GatewayFlag", -815,0658f, 93,36724f, 2431,499f, 0.0f, 73,54227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[10], Local_4.f_708);
	(*&Local_4 + 712)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "HitchHorse02GatewayFlag", -841,4635f, 92,35355f, 2377,105f, 0.0f, 19,71966f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[11], Local_4.f_708);
	(*&Local_4 + 712)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseSpot01Flag", -814,3506f, 93,41338f, 2432,269f, 0.0f, 60.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[12], Local_4.f_708);
	(*&Local_4 + 712)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseSpot02Flag", -761,8641f, 93,36663f, 2391,283f, 0.0f, 44,60596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[13], Local_4.f_708);
	(*&Local_4 + 712)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "RidRabbitsFlag", -764,0458f, 93,36469f, 2400,004f, 0.0f, -17,63534f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[14], Local_4.f_708);
	(*&Local_4 + 712)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "SaveChickensFlag", -883,058f, 91,28948f, 2402,767f, 0.0f, 200,7085f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[15], Local_4.f_708);
	(*&Local_4 + 712)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "StockadeFlag", -799,0971f, 92,16018f, 2420,776f, 0.0f, 108,3697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[16], Local_4.f_708);
	(*&Local_4 + 712)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "nStoreFlag", -813,9294f, 92,12842f, 2406,898f, 0.0f, 69,5963f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[17], Local_4.f_708);
	(*&Local_4 + 712)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "StoreLookBackFlag", -842,7236f, 91,92263f, 2401,744f, 0.0f, 88,65708f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[18], Local_4.f_708);
	(*&Local_4 + 712)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "TalkAboutInsideFlag", -804,6105f, 92,83058f, 2440,771f, 0.0f, 364,9276f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[19], Local_4.f_708);
	(*&Local_4 + 712)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "TrainStationFlag", -939,2421f, 90,47591f, 2412,252f, 0.0f, 42,48104f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[20], Local_4.f_708);
	(*&Local_4 + 712)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "TrainStationLookBackFlag", -972,4237f, 90,35291f, 2433,516f, 0.0f, 210,2679f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[21], Local_4.f_708);
	(*&Local_4 + 712)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "TrainStationSpeedUpFlag", -930,0909f, 90,47569f, 2418,228f, 0.0f, 56,23223f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 712)[22], Local_4.f_708);
	Local_4.f_808 = CREATE_OBJECTSET_IN_LAYOUT("CoopFlagSet", Local_4, 8, 0);
	(*&Local_4 + 812)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CoopFlag01", -877,9076f, 90,3529f, 2433,614f, 0.0f, 200,9423f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[0], Local_4.f_808);
	(*&Local_4 + 812)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CoopFlag02", -887,6166f, 90,3529f, 2437,223f, 0.0f, -159,4454f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[1], Local_4.f_808);
	(*&Local_4 + 812)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CoopFlag03", -875,7287f, 90,35431f, 2436,873f, 0.0f, 61,23708f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[2], Local_4.f_808);
	(*&Local_4 + 812)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CoopFlag04", -887,6258f, 90,35329f, 2442,593f, 0.0f, -20,53456f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[3], Local_4.f_808);
	(*&Local_4 + 812)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CoopFlag05", -884,484f, 90,35291f, 2430,686f, 0.0f, -159,7843f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[4], Local_4.f_808);
	(*&Local_4 + 812)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CoopFlag06", -882,8116f, 90,35291f, 2435,227f, 0.0f, -159,7843f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[5], Local_4.f_808);
	(*&Local_4 + 812)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CoopFlag07", -881,1894f, 90,4147f, 2439,633f, 0.0f, 20,21574f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 812)[6], Local_4.f_808);
	Local_4.f_844 = CREATE_OBJECTSET_IN_LAYOUT("GardenFlagSet", Local_4, 8, 0);
	(*&Local_4 + 848)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag01", -770,6606f, 93,52184f, 2387,19f, 0.0f, -172,1959f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[0], Local_4.f_844);
	(*&Local_4 + 848)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag02", -769,3015f, 93,55064f, 2385,157f, 0.0f, 251,3711f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[1], Local_4.f_844);
	(*&Local_4 + 848)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag03", -768,1227f, 93,5012f, 2383,173f, 0.0f, 430,154f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[2], Local_4.f_844);
	(*&Local_4 + 848)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag04", -766,8477f, 93,52644f, 2381,369f, 0.0f, -206,8974f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[3], Local_4.f_844);
	(*&Local_4 + 848)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag05", -766,0057f, 93,4465f, 2380,058f, 0.0f, -91,54323f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[4], Local_4.f_844);
	(*&Local_4 + 848)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag06", -771,7672f, 93,63434f, 2384,953f, 0.0f, 148,7796f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[5], Local_4.f_844);
	(*&Local_4 + 848)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag07", -770,5496f, 93,63316f, 2383,251f, 0.0f, 279,1444f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[6], Local_4.f_844);
	(*&Local_4 + 848)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag08", -769,3366f, 93,64001f, 2381,48f, 0.0f, 2,700342f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[7], Local_4.f_844);
	(*&Local_4 + 848)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag09", -774,0542f, 93,59579f, 2384,546f, 0.0f, -102,2601f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[8], Local_4.f_844);
	(*&Local_4 + 848)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag10", -772,2205f, 93,54425f, 2381,573f, 0.0f, 177,5076f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[9], Local_4.f_844);
	(*&Local_4 + 848)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag11", -771,1028f, 93,55116f, 2379,923f, 0.0f, 324,9624f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[10], Local_4.f_844);
	(*&Local_4 + 848)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag12", -770,0579f, 93,5343f, 2378,235f, 0.0f, -232,9591f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[11], Local_4.f_844);
	(*&Local_4 + 848)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag13", -775,2579f, 93,57475f, 2382,283f, 0.0f, -6,06723f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[12], Local_4.f_844);
	(*&Local_4 + 848)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag14", -774,2785f, 93,55978f, 2380,743f, 0.0f, -146,3856f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[13], Local_4.f_844);
	(*&Local_4 + 848)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag15", -773,2109f, 93,54694f, 2379,089f, 0.0f, -94,39943f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[14], Local_4.f_844);
	(*&Local_4 + 848)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag16", -772,0493f, 93,55665f, 2377,353f, 0.0f, -166,896f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[15], Local_4.f_844);
	(*&Local_4 + 848)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag17", -777,7875f, 93,57786f, 2382,355f, 0.0f, -74,01788f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[16], Local_4.f_844);
	(*&Local_4 + 848)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag18", -776,6227f, 93,57772f, 2380,419f, 0.0f, -270,0883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[17], Local_4.f_844);
	(*&Local_4 + 848)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag19", -775,3572f, 93,57701f, 2378,457f, 0.0f, -53,74745f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[18], Local_4.f_844);
	(*&Local_4 + 848)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "GardenFlag20", -774,0229f, 93,57891f, 2376,563f, 0.0f, -130,2411f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[19], Local_4.f_844);
	Local_4.f_932 = CREATE_OBJECTSET_IN_LAYOUT("RabbitFlagSet", Local_4, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag01", -783,886f, 93,365f, 2385,947f, 0.0f, 323,8573f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_932);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag02", -787,7394f, 93,365f, 2381,263f, 0.0f, 297,7067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_932);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag03", -786,0111f, 93,36269f, 2378,512f, 0.0f, 171,2195f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_932);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag04", -779,7324f, 93,365f, 2370,43f, 0.0f, 120,4355f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_932);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag05", -778,6637f, 93,3673f, 2369,805f, 0.0f, 300,3105f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_932);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag06", -775,7772f, 93,36092f, 2368,647f, 0.0f, 92,26859f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_932);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag07", -770,902f, 93,36349f, 2369,042f, 0.0f, 77,31421f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_932);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag08", -765,8563f, 93,36499f, 2372,163f, 0.0f, 43,712f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_932);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag09", -772,7747f, 93,365f, 2396,743f, 0.0f, 323,8423f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_932);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag10", -765,2589f, 93,365f, 2393,724f, 0.0f, 5,251922f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_932);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag11", -760,0324f, 93,365f, 2384,634f, 0.0f, 169,376f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_932);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "RabbitFlag12", -760,0295f, 93,36469f, 2378,106f, 0.0f, 209,5381f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_932);
	Local_4.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Coyote01Gringo", "coyote_howling", -857,6796f, 91,85497f, 2339,136f, 0.0f, 120,416f, 0.0f);
	Local_4.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Coyote02Gringo", "coyote_howling", -881,812f, 91,35687f, 2344,93f, 0.0f, 117,2918f, 0.0f);
	Local_4.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Coyote03Gringo", "coyote_howling", -888,2471f, 90,106f, 2426,359f, 0.0f, -111,5665f, 0.0f);
	Local_4.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Coyote04Gringo", "coyote_howling", -883,9103f, 90,18514f, 2424,354f, 0.0f, 146,8066f, 0.0f);
	Local_4.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Coyote05Gringo", "coyote_howling", -899,2618f, 90,10969f, 2428,48f, 0.0f, -70,30838f, 0.0f);
	Local_4.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Coyote06Gringo", "coyote_howling", -870,0472f, 90,35206f, 2434,694f, 0.0f, 20,4212f, 0.0f);
	Local_4.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_4, "LeanRailCleanGringo", "lean_rail_clean", -791,5001f, 93,62729f, 2406,356f, 0.0f, -216,568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_960), 0);
}

bool Function_645() //Position: 0x21F47 / 139079
{
	Function_361(&Local_301, 1, 0);
	switch (Local_301)
	{
		case 0x000003E8:
			if (iLocal_308 != 99 && (Function_286(&Local_259) || Local_259.f_24 < 1))
			{
				Local_301 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH_01/RANCH_01"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_301 = 1106;
				return 0;
			}
			Function_357(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			bLocal_480 = false;
			SET_DAY(GET_DAY(false) + 1);
			Function_268(8);
			Local_301.f_20 = CREATE_VOLUME_IN_LAYOUT(bLocal_258, "Ranch01_CutsceneVol", 2, -838,5982f, 94,69299f, 2372,861f, 0.0f, -71,09768f, 0.0f, 24.0f, 7.0f, 16.0f);
			Function_355(bLocal_258, -839,091f, 92,547f, 2370,844f, &Local_301 + 20, 1, 0, 0, 0, 1, 1);
			Global_63097 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/RANCH_01/RANCH_01", 0, 2, 1, 1, 2);
			Function_279(&Local_301 + 4);
			Local_301 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_351(&Local_301 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_301 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_RELEASE_MAIN_POI();
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				if (!iLocal_475)
				{
					iLocal_475 = 1;
					STREAMING_REQUEST_ACTOR(false, Function_206(14), false);
				}
				Local_301.f_16 = Function_647(bLocal_258, 0, 1, 1, 0);
				if (IS_OBJECT_VALID(Local_301.f_16))
				{
					STREAMING_SET_POI_LIMIT(2);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_301.f_16, 1);
				}
				else
				{
					LOG_ERROR("Ranch01_Cutscene01 - Failed to create Ranch01_Cutscene01_cutscene (paused)");
				}
				Local_301 = 1004;
			}
			break;
		
		case 0x000003EC:
			Unknown_Function();
			Function_462(&iLocal_266);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_301 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				if (IS_OBJECT_VALID(Local_301.f_16))
				{
					Function_646(Local_301.f_16, 0);
				}
				else
				{
					Local_301.f_16 = Function_647(bLocal_258, 0, 1, 0, 0);
				}
				if (IS_OBJECT_VALID(Local_301.f_16))
				{
					STREAMING_SET_POI_LIMIT(1);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_301.f_16, 1);
				}
				else
				{
					LOG_ERROR("Ranch01_Cutscene01 - Failed to create Ranch01_Cutscene01_cutscene");
				}
				Function_452();
				Function_282();
				Function_595();
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -839,091f, 92,52304f, 2370,844f, 170,949f, 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(bLocal_313, -791,5001f, 93,61219f, 2406,356f, -216,568f, 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(bLocal_314, -814,3506f, 93,41338f, 2432,269f, 60.0f, 1, true, 1);
			}
			break;
		
		case 0x000003ED:
			Unknown_Function();
			Function_462(&iLocal_266);
			if (!UNK_0xCDA6BB6C() && !IS_OBJECT_VALID(Local_301.f_16))
			{
				Function_537(1.0f);
				Function_280(&bLocal_328, (30.0f - 1.0f));
				Local_301 = 1104;
			}
			else if (GET_CUTSCENEOBJECT_SEQUENCE(Local_301.f_16) != 0 && STREAMING_IS_ACTOR_LOADED(false, Function_206(14)))
			{
				Function_336(1.0f);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_301.f_16);
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_301.f_20);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_301.f_20);
				DESTROY_VOLUME(Local_301.f_20);
				Function_338(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (IS_OBJECT_VALID(Local_301.f_16))
				{
					DESTROY_OBJECT(Local_301.f_16);
				}
				Local_301 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Global_63097 = 0;
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				bLocal_480 = true;
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_230();
				Function_229();
				if (!iLocal_475)
				{
					iLocal_475 = 1;
					STREAMING_REQUEST_ACTOR(false, Function_206(14), false);
				}
				Local_301 = 1104;
			}
			break;
		
		case 0x00000452:
			bLocal_480 = true;
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_230();
			Function_229();
			if (!iLocal_475)
			{
				iLocal_475 = 1;
				STREAMING_REQUEST_ACTOR(false, Function_206(14), false);
			}
			Local_301 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_646(bool bParam0, bool bParam1) //Position: 0x2242B / 140331
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_647(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x22440 / 140352
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch01_Cutscene01", 2, 1);
	}
	Function_648(&bVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_648(int iParam0) //Position: 0x224BE / 140478
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_650(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_649(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1000.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 5.0f, 1, 0);
	return;
}

void Function_649(int iParam0) //Position: 0x22501 / 140545
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,05303f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -844,8337f, 93,83643f, 2383,845f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,020164f, -0,529063f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_650(var uParam0) //Position: 0x22564 / 140644
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 41,05303f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -845,644f, 93,80403f, 2385,233f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,020164f, -0,529063f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_651() //Position: 0x225C7 / 140743
{
	iLocal_477 = 0;
	Function_643("FTR_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_641(0, 0);
	Function_233(0);
	Function_655();
	Function_653();
	Function_652();
	return;
}

void Function_652() //Position: 0x225FE / 140798
{
	if (IS_ACTOR_ALIVE(bLocal_314))
	{
		ACCESSORIZE_HORSE(bLocal_314, 4);
		RESET_ACTOR_GAITS(bLocal_314, 0);
		Function_446(bLocal_314);
		SET_ACTOR_FACTION(bLocal_314, 20);
		SET_ACTOR_INVULNERABILITY(bLocal_314, true);
		SET_ACTOR_MAX_HEALTH(bLocal_314, 50.0f);
		SET_ACTOR_HEALTH(bLocal_314, 50.0f);
		AI_SET_NAV_ACTOR_WIDTH(bLocal_314, 0,5f);
		TASK_CLEAR(bLocal_314);
		TASK_PRIORITY_SET(bLocal_314, true);
		TASK_STAND_STILL(bLocal_314, -1.0f, 0, 0);
		TELEPORT_ACTOR_WITH_HEADING(bLocal_314, -814,5916f, 93,40491f, 2432,506f, 44,60596f, 1, true, 1);
	}
	else
	{
		LOG_ERROR("Failed to setup PlayerHorse properly!");
	}
	return;
}

void Function_653() //Position: 0x226B3 / 140979
{
	if (IS_ACTOR_ALIVE(bLocal_313))
	{
		Function_272(3, 0, 1);
		RESET_ACTOR_GAITS(bLocal_313, 0);
		Function_446(bLocal_313);
		SET_ACTOR_FACTION(bLocal_313, 20);
		AI_BEHAVIOR_SET_ALLOW(bLocal_313, 0, 0);
		SET_CRIPPLE_ENABLE(bLocal_313, 0);
		SET_ACTOR_INVULNERABILITY(bLocal_313, true);
		SET_ACTOR_MAX_HEALTH(bLocal_313, 50.0f);
		SET_ACTOR_HEALTH(bLocal_313, 50.0f);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_313, true);
		Function_654(bLocal_313, 10.0f, 0x40400000, 0x40000000);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_313);
		UNK_0x2E84E682(bLocal_313, 0);
		MEMORY_ALLOW_TAKE_COVER(bLocal_313, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 63, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 61, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_313, 60, 0);
		TASK_CLEAR(bLocal_313);
		TASK_PRIORITY_SET(bLocal_313, true);
		TASK_STAND_STILL(bLocal_313, -1.0f, 0, 0);
	}
	else
	{
		LOG_ERROR("Failed to setup Bonnie properly!");
	}
	return;
}

void Function_654(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x22793 / 141203
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_655() //Position: 0x227DA / 141274
{
	SET_ACTOR_INVULNERABILITY(Global_34573, true);
	return;
}

bool Function_656() //Position: 0x227E7 / 141287
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_674(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_313))
		{
			bLocal_313 = Function_665(3, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_664())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_314))
		{
			bLocal_314 = Function_659(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_658())
		{
			return 0;
		}
		if (!Function_266(Global_34207))
		{
			Function_657(Global_34207, 1);
			return 0;
		}
	}
	return 1;
}

var Function_657(bool bParam0, bool bParam1) //Position: 0x22869 / 141417
{
	bool bVar0;
	
	Function_189(16384);
	if (bParam0 == 4294967295)
	{
		return "";
	}
	if (bParam0 == Global_34207)
	{
		(&Global_34208 + 12)->f_348 = 1;
	}
	if (bParam0 == Global_34206)
	{
		(&Global_34208 + 724)->f_348 = 1;
	}
	if (TRAIN_GET_NUM_CARS(bParam0) >= 0)
	{
		bVar0 = TRAIN_GET_CAR(bParam0, false);
	}
	else
	{
		bVar0 = "";
	}
	if (IS_OBJECT_VALID(bVar0))
	{
		if (bParam1)
		{
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(bParam0, 4294967295, 1);
		}
		else
		{
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(bParam0, 4294967295, 0);
		}
		return bVar0;
	}
	return "";
}

bool Function_658() //Position: 0x228DC / 141532
{
	if (!Global_3365)
	{
		if (StackVal && StackVal == 976 == 992)
		{
			bLocal_314 = CREATE_ACTOR_IN_LAYOUT(bLocal_258, Function_53(), 976, -814,5916f, 93,40491f, 2432,506f, 0.0f, 44,60596f, 0.0f);
			if (IS_ACTOR_ALIVE(bLocal_314))
			{
				Function_76(&Global_12976 + 36 + 20, 2);
				Function_211(bLocal_314, 1);
			}
			else
			{
				LOG_ERROR("Failed to swap Player Horse with a new AE_RIDEABLE_ANIMAL_Horse01!");
				return 0;
			}
		}
	}
	return 1;
}

bool Function_659(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x22991 / 141713
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
	if (Global_3381 || Function_292(1))
	{
		Function_663(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_664())
		{
			return "";
		}
	}
	if (!Function_661())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_299(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_299(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_299(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_299(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_660(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_660(StackVal, StackVal, vVar5, 0, 1, 1);
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_73(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_449(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_40() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

var Function_660(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x22CE9 / 142569
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

bool Function_661() //Position: 0x22D84 / 142724
{
	if (Function_662() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_662() //Position: 0x22D9A / 142746
{
	return Global_12976.f_152;
}

void Function_663(var uParam0, bool bParam1, bool bParam2) //Position: 0x22DA5 / 142757
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

bool Function_664() //Position: 0x22DD2 / 142802
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

bool Function_665(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x22DF2 / 142834
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
	uParam2 = uParam2;
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
		Function_272(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_673(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_668(StackVal, uParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = uParam3;
			vVar3.y = uParam4;
			vVar3.z = uParam5;
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
		Function_667(bVar1, 0, 0, 0, 0);
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
		Function_666(bVar1, 0);
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

void Function_666(bool bParam0, bool bParam1) //Position: 0x232DC / 144092
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_667(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x232FC / 144124
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

bool Function_668(int iParam0, bool bParam1) //Position: 0x23350 / 144208
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_672(iParam0))
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
						Function_669(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_669(bool bParam0, bool bParam1) //Position: 0x233D0 / 144336
{
	Function_671(bParam0);
	Function_670(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_670(bool bParam0) //Position: 0x233F6 / 144374
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_671(bool bParam0) //Position: 0x2341A / 144410
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

bool Function_672(int iParam0) //Position: 0x234E9 / 144617
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_673(int iParam0, bool bParam1) //Position: 0x23500 / 144640
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

bool Function_674(bool bParam0) //Position: 0x23593 / 144787
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

void Function_675() //Position: 0x235C1 / 144833
{
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	return;
}

void Function_676(int iParam0, bool bParam1) //Position: 0x236A7 / 145063
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_683(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_286(iParam0))
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
	if (!Function_286(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_682();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230();
	Function_229();
	Function_293("");
	Function_681(0);
	Function_680();
	Function_194();
	Function_193();
	ENABLE_JOURNAL_REPLAY(0);
	Function_679();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_375(0, 0x40400000);
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
	Function_678(13);
	Function_678(14);
	Function_678(25);
	Function_678(24);
	Function_678(12);
	Function_678(27);
	Function_678(26);
	Function_678(15);
	Function_677();
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

void Function_677() //Position: 0x23ACB / 146123
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

void Function_678(int iParam0) //Position: 0x23B3F / 146239
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_679() //Position: 0x23B5F / 146271
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

void Function_680() //Position: 0x23B9C / 146332
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_681(int iParam0) //Position: 0x23BB0 / 146352
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_197())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_682() //Position: 0x23BE5 / 146405
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_683(int iParam0, int iParam1) //Position: 0x23BEE / 146414
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
			Function_684(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_684(int iParam0) //Position: 0x23C70 / 146544
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

bool Function_685(int iParam0) //Position: 0x23CBE / 146622
{
	switch (iParam0->f_16)
	{
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					if (iParam0->f_12)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_691();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_shootBonnieHorse", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (StackVal && Function_581(Function_581(StackVal) == bLocal_258) == Local_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_690();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_assaultOther", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_689();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_shootBonnie", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_691();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_shootBonnieHorse", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (StackVal && Function_581(Function_581(StackVal) == bLocal_258) == Local_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_688();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_shootOther", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (StackVal)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_687();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_assaultBonnie", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (StackVal && Function_581(Function_581(StackVal) == bLocal_258) == Local_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_690();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_313, "Ranch01_assaultOther", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
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
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(bLocal_313))
		{
			Function_686(iParam0, 1);
			return 1;
		}
	}
	Function_686(iParam0, 0);
	return 0;
}

void Function_686(int iParam0, bool bParam1) //Position: 0x23F8E / 147342
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

void Function_687() //Position: 0x23FB2 / 147378
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_assaultBonnie", "Ranch01_assaultBonnie", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_688() //Position: 0x24006 / 147462
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_shootOther", "Ranch01_shootOther", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_689() //Position: 0x24053 / 147539
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_shootBonnie", "Ranch01_shootBonnie", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_690() //Position: 0x240A2 / 147618
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_assaultOther", "Ranch01_assaultOther", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_691() //Position: 0x240F3 / 147699
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_shootBonnieHorse", "Ranch01_shootBonnieHorse", false, 1, 1, 0, 1);
		Function_392(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_692(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x2414C / 147788
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
		Function_686(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_506(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_710(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_710(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_696(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_686(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_695(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_694(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_695(&bVar17);
														strcpy(&Var18, "", 64);
														Function_693(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_293(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_694(StackVal, iParam2, bVar17);
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
	Function_686(iParam2, 0);
	return 0;
}

void Function_693(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x244E5 / 148709
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

void Function_694(var uParam0, int iParam1, bool bParam2) //Position: 0x245D0 / 148944
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

void Function_695(bool bParam0) //Position: 0x24646 / 149062
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_696(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x24668 / 149096
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
			return Function_707(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_700(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_707(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_697(iParam0, bVar2);
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
						bVar2 = Function_707(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_697(iParam0, bVar2);
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

var Function_697(int iParam0, bool bParam1) //Position: 0x247B2 / 149426
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
				bParam1 = Function_699(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_698(16);
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
				bParam1 = Function_699(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_698(256);
			}
		}
	}
	return bParam1;
}

bool Function_698(int iParam0) //Position: 0x248E5 / 149733
{
	return 2 | iParam0;
}

int Function_699(int iParam0) //Position: 0x248EF / 149743
{
	return 4 | iParam0;
}

int Function_700(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x248F9 / 149753
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
				iParam3 = Function_706(iParam0, iParam1, bParam4);
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
			return Function_698(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_701(iParam0, iParam1, 0, bParam4);
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
			return Function_698(16);
		}
	}
	return 0;
}

int Function_701(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x249AB / 149931
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_705(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_704(iVar0, 3, 1, bParam3))
			{
				if (!Function_710(iParam0, 8, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_704(iVar0, 2, 1, bParam3))
			{
				if (!Function_710(iParam0, 32, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_704(iVar0, 1, 1, bParam3))
			{
				if (!Function_710(iParam0, 64, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_704(iVar0, 3, 1, bParam3))
			{
				if (!Function_710(iParam0, 128, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_704(iVar0, 1, 1, bParam3))
			{
				if (!Function_710(iParam0, 1024, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_704(iVar0, 1, 1, bParam3))
			{
				if (!Function_710(iParam0, 1024, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_702(int iParam0, int iParam1, bool bParam2) //Position: 0x24B65 / 150373
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_703(int iParam0, int iParam1, bool bParam2) //Position: 0x24B7A / 150394
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_704(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x24B8F / 150415
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_705(int iParam0) //Position: 0x24BAC / 150444
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

int Function_706(var uParam0, int iParam1, bool bParam2) //Position: 0x24C1B / 150555
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_705(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_704(iVar0, 3, 1, bParam2))
			{
				if (!Function_710(uParam0, 8, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000009:
			if (Function_704(iVar0, 3, 1, bParam2))
			{
				if (!Function_710(uParam0, 8, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x0000006E:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(uParam0, 16, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x0000005B:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(uParam0, 32, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000031:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(uParam0, 64, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000007:
			if (Function_704(iVar0, 3, 1, bParam2))
			{
				if (!Function_710(uParam0, 128, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000008:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(uParam0, 256, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000014:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(uParam0, 512, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000018:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(uParam0, 512, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000057:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(uParam0, 1024, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000058:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(uParam0, 1024, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_707(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x24E36 / 151094
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
						return Function_706(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_710(iParam0, 2, 1))
					{
						return Function_699(8);
					}
					return Function_698(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_710(iParam0, 4, 1))
					{
						return Function_699(16);
					}
					return Function_698(16);
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
							return Function_701(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_710(iParam0, 2, 1))
						{
							return Function_699(128);
						}
						return Function_698(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_710(iParam0, 4, 1))
						{
							return Function_699(256);
						}
						return Function_698(256);
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
						return Function_701(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_710(iParam0, 2, 1))
					{
						return Function_699(8);
					}
					return Function_698(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_710(iParam0, 4, 1))
					{
						return Function_699(16);
					}
					return Function_698(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_709(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_710(iParam0, 2, 1))
					{
						return Function_699(8);
					}
					return Function_698(8);
				}
				if (!Function_710(iParam0, 4, 1))
				{
					return Function_699(16);
				}
				return Function_698(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_701(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_708(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_698(128);
							}
							if (!Function_710(iParam0, 2, 1))
							{
								return Function_699(8);
							}
							return Function_698(8);
						}
						if (iParam4 == 2)
						{
							if (Function_708(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_698(256);
							}
							if (!Function_710(iParam0, 4, 1))
							{
								return Function_699(16);
							}
							return Function_698(16);
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

bool Function_708(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x250F5 / 151797
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

int Function_709(int iParam0, var uParam1, bool bParam2) //Position: 0x251AE / 151982
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_705(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(iParam0, 16, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x0000005B:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(iParam0, 32, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000057:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(iParam0, 1024, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000058:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(iParam0, 1024, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_710(int iParam0, bool bParam1, bool bParam2) //Position: 0x252C2 / 152258
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

bool Function_711(int iParam0) //Position: 0x252EA / 152298
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_712(bool bParam0, int iParam1) //Position: 0x25308 / 152328
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_713(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (GET_CRIME_CRIMINAL(bVar3) != bParam0 && Global_26998[GET_CRIME_TYPE(bVar3)18].f_24 <= iParam1)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

void Function_713(bool bParam0, bool bParam1) //Position: 0x2538B / 152459
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

void Function_714(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x253BA / 152506
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

