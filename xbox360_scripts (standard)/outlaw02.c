//Decompiled with MagicRDR v1.0
//Function Count : 736
//Statics Count : 665
//Natives Count : 776
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1377> Local_4 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_602 = 4294967295;
	bLocal_603 = "";
	iLocal_618 = 0;
	iLocal_619 = 0;
	iLocal_646 = 0;
	iLocal_647 = 0;
	iLocal_648 = 0;
	uLocal_655 = "";
	Local_350 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_405 = 99;
	iLocal_406 = 6;
	Local_398 = 1000;
	while (Function_317())
	{
		Function_251();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x62 / 98
{
	Function_220();
	Function_217(0, 0, 0, 1, 1);
	Function_216(bLocal_349);
	Function_216(Local_4);
	Function_189(bLocal_432, 1, bLocal_432, 0, 1, 1, 1, 1);
	Function_185(&bLocal_357);
	Function_178();
	if (IS_ITERATOR_VALID(bLocal_409))
	{
		DESTROY_ITERATOR(bLocal_409);
	}
	RELEASE_LAYOUT_REF(bLocal_349);
	if (bLocal_431)
	{
		Function_168(Global_30658[3], &Global_6433, &Global_7389, 1);
		Function_24(Local_350, 1, 1, 1, 0);
	}
	else if (bLocal_432)
	{
		Function_20(Local_350);
	}
	else
	{
		Function_2(Local_350);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xE7 / 231
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x108 / 264
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x123 / 291
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x144 / 324
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x15A / 346
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

void Function_7(int iParam0) //Position: 0x1F6 / 502
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x217 / 535
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

void Function_9() //Position: 0x25D / 605
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x276 / 630
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x2C9 / 713
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

struct<16> Function_12(int iParam0) //Position: 0x3ED / 1005
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x412 / 1042
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x432 / 1074
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x449 / 1097
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x464 / 1124
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6AB / 1707
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x6D4 / 1748
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

bool Function_19(int iParam0) //Position: 0x6F8 / 1784
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x70D / 1805
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x72B / 1835
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

struct<16> Function_22(int iParam0) //Position: 0x7D1 / 2001
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x7FB / 2043
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA51 / 2641
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

void Function_25() //Position: 0xB3E / 2878
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

int Function_26(int iParam0, bool bParam1) //Position: 0xB6E / 2926
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

int Function_27(int iParam0) //Position: 0xBAB / 2987
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xBC5 / 3013
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xBDB / 3035
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xED2 / 3794
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

void Function_31(char* cParam0, int iParam1) //Position: 0xF3E / 3902
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xF75 / 3957
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

bool Function_33(var uParam0, int iParam1) //Position: 0xFED / 4077
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1000 / 4096
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

int Function_35(int iParam0) //Position: 0x10A1 / 4257
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x10DE / 4318
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10F1 / 4337
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

void Function_38(int iParam0, int iParam1) //Position: 0x1303 / 4867
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x133D / 4925
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

bool Function_40() //Position: 0x137F / 4991
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1388 / 5000
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

void Function_42() //Position: 0x13D9 / 5081
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

void Function_43() //Position: 0x140C / 5132
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

void Function_44() //Position: 0x1512 / 5394
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

void Function_45() //Position: 0x1545 / 5445
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

void Function_46() //Position: 0x16D3 / 5843
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

void Function_47() //Position: 0x1887 / 6279
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1895 / 6293
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

var Function_49() //Position: 0x1A86 / 6790
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1A9B / 6811
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B36 / 6966
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1DD1 / 7633
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

bool Function_53() //Position: 0x23FE / 9214
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2406 / 9222
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2417 / 9239
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x250C / 9484
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2525 / 9509
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x258A / 9610
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x259C / 9628
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x25AE / 9646
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

int Function_61(int iParam0) //Position: 0x26DE / 9950
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x26ED / 9965
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2726 / 10022
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2763 / 10083
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x28FD / 10493
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

int Function_66(bool bParam0) //Position: 0x2B17 / 11031
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2B58 / 11096
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

struct<8> Function_68() //Position: 0x2BE1 / 11233
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

struct<8> Function_69() //Position: 0x2C78 / 11384
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

void Function_70() //Position: 0x2CF7 / 11511
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D1D / 11549
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

void Function_72() //Position: 0x2F27 / 12071
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

bool Function_73(vector3 vParam0) //Position: 0x2FC8 / 12232
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2FE0 / 12256
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

vector3 Function_75() //Position: 0x30C7 / 12487
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x30D0 / 12496
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x30DF / 12511
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x30F5 / 12533
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x31BC / 12732
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x31D9 / 12761
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

bool Function_81(int iParam0) //Position: 0x36B5 / 14005
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x36CB / 14027
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x36EA / 14058
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3704 / 14084
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x376B / 14187
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

void Function_86() //Position: 0x398B / 14731
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A0B / 14859
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D5D / 15709
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

int Function_89(int iParam0) //Position: 0x3DE0 / 15840
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3DFA / 15866
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E28 / 15912
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x40C5 / 16581
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

void Function_93(int iParam0, int iParam1) //Position: 0x4288 / 17032
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x44E6 / 17638
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

int Function_95() //Position: 0x466B / 18027
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

void Function_96() //Position: 0x470A / 18186
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

void Function_97(int iParam0) //Position: 0x47B9 / 18361
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

var Function_98(int iParam0) //Position: 0x4817 / 18455
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

int Function_99(int iParam0, bool bParam1) //Position: 0x48A6 / 18598
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

var Function_100(int iParam0, int iParam1) //Position: 0x4A43 / 19011
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

void Function_101() //Position: 0x4A84 / 19076
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4A9A / 19098
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4ADA / 19162
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B1A / 19226
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B29 / 19241
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

int Function_106(int iParam0) //Position: 0x4CF1 / 19697
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

var Function_107() //Position: 0x4D86 / 19846
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4DAB / 19883
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x5266 / 21094
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

var Function_110(int iParam0) //Position: 0x557B / 21883
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x561E / 22046
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5819 / 22553
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x59B5 / 22965
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5A80 / 23168
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

void Function_115(int iParam0) //Position: 0x6370 / 25456
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x64DF / 25823
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x65E5 / 26085
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(bool bParam0) //Position: 0x6612 / 26130
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

var Function_119(vector3 vParam0) //Position: 0x6669 / 26217
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x66B7 / 26295
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x670B / 26379
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

void Function_122() //Position: 0x68A9 / 26793
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x68AF / 26799
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6953 / 26963
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x69A8 / 27048
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x69BE / 27070
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6A0F / 27151
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

void Function_128(var uParam0, int iParam1) //Position: 0x6A3C / 27196
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A4B / 27211
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6A62 / 27234
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6A71 / 27249
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6BBB / 27579
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

bool Function_133() //Position: 0x6C06 / 27654
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6C33 / 27699
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

int Function_135(int iParam0) //Position: 0x6DE3 / 28131
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6E3A / 28218
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

var Function_137(int iParam0) //Position: 0x6E5F / 28255
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6EB5 / 28341
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

bool Function_139(bool bParam0) //Position: 0x6F14 / 28436
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F20 / 28448
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6F3C / 28476
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

int Function_142(int iParam0, int iParam1) //Position: 0x6F8E / 28558
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

int Function_143(int iParam0, int iParam1) //Position: 0x7001 / 28673
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x705D / 28765
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

int Function_145(int iParam0, int iParam1) //Position: 0x70CE / 28878
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x7128 / 28968
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x73D4 / 29652
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

void Function_148(int iParam0, bool bParam1) //Position: 0x7663 / 30307
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

void Function_149() //Position: 0x76C2 / 30402
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

var Function_150(int iParam0, int iParam1) //Position: 0x773D / 30525
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

int Function_151(int iParam0) //Position: 0x8333 / 33587
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x8348 / 33608
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x8397 / 33687
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x83A4 / 33700
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x83F5 / 33781
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

bool Function_156(int iParam0, int iParam1) //Position: 0x8463 / 33891
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8476 / 33910
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

var Function_158(int iParam0) //Position: 0x8575 / 34165
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

bool Function_159(var uParam0, int iParam1) //Position: 0x85CD / 34253
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x85E9 / 34281
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

bool Function_161(bool bParam0) //Position: 0x8640 / 34368
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x8652 / 34386
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

void Function_163(int iParam0) //Position: 0x8686 / 34438
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x86ED / 34541
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87CA / 34762
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

void Function_166() //Position: 0x8943 / 35139
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x894F / 35151
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

void Function_168(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x8995 / 35221
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_40())
	{
		return;
	}
	Function_130(&(Global_29008[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= *uParam1)
	{
		iVar1 = iVar0;
		if (Function_177(uParam1[iVar02], 1))
		{
			Function_174(uParam1, uParam2, iVar1, 0);
		}
		Function_172(uParam1, uParam2, iVar1, 0);
		Function_169(uParam1[iVar02], uParam2[iVar03], 0);
		bVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&bVar2, iParam3, false, false, 0);
		uParam1[iVar02]->f_4 = bVar2;
		iVar0++;
	}
}

void Function_169(var uParam0, var uParam1, int iParam2) //Position: 0x8A15 / 35349
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (iParam2 == 0)
	{
		ADD_TIME(&bVar0, Function_171(Global_29007), false, false, 0);
	}
	else
	{
		ADD_TIME(&bVar0, iParam2, false, false, 0);
	}
	uParam0->f_4 = bVar0;
	Function_170(uParam0, 4);
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	return;
}

void Function_170(var uParam0, int iParam1) //Position: 0x8A68 / 35432
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_171(int iParam0) //Position: 0x8A77 / 35447
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_172(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8AAB / 35499
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_170(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_171(Global_29007), Function_173(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_177(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_177(uParam0[iParam22], 1) && !bParam3)
	{
		Function_170(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_171(Global_29007), Function_173(Global_29007), false, 0);
	}
}

int Function_173(int iParam0) //Position: 0x8BFA / 35834
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

void Function_174(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x8C25 / 35877
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_177(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_177(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_177(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_176(uParam0[iVar02], 8);
	}
	Function_176(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_175(StackVal);
	if (bParam3)
	{
		Function_172(uParam0, uParam1, uParam2, 0);
	}
}

int Function_175(bool bParam0) //Position: 0x8CBF / 36031
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_176(var uParam0, int iParam1) //Position: 0x8D59 / 36185
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_177(int iParam0, int iParam1) //Position: 0x8D70 / 36208
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178() //Position: 0x8D8C / 36236
{
	Function_184();
	Function_183();
	Function_182();
	Function_181();
	Function_180();
	Function_179();
	return;
}

void Function_179() //Position: 0x8DA4 / 36260
{
	Function_185(&Local_4 + 432);
	return;
}

void Function_180() //Position: 0x8DB2 / 36274
{
	Function_185(&Local_4 + 368);
	return;
}

void Function_181() //Position: 0x8DC0 / 36288
{
	Function_185(&Local_4 + 232);
	return;
}

void Function_182() //Position: 0x8DCD / 36301
{
	Function_185(&Local_4 + 60);
	return;
}

void Function_183() //Position: 0x8DDA / 36314
{
	Function_185(&Local_4 + 44);
	return;
}

void Function_184() //Position: 0x8DE7 / 36327
{
	Function_185(&Local_4 + 4);
	Function_185(&Local_4 + 44);
	Function_185(&Local_4 + 60);
	Function_185(&Local_4 + 232);
	Function_185(&Local_4 + 368);
	Function_185(&Local_4 + 432);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_185(bool bParam0) //Position: 0x8E1E / 36382
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_186(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_186(var uParam0, int iParam1) //Position: 0x8E44 / 36420
{
	if (Function_188(uParam0[iParam13], 4))
	{
		if (Function_188(uParam0[iParam13], 1))
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
			Function_187(uParam0[iParam13], 1);
			Function_187(uParam0[iParam13], 2);
			Function_187(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_187(var uParam0, int iParam1) //Position: 0x8F72 / 36722
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_188(var uParam0, bool bParam1) //Position: 0x8F8C / 36748
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_189(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8FA9 / 36777
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_215());
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
	Function_214();
	CLEAR_PRINTED_OBJECTIVE();
	Function_213();
	Function_211(0);
	Function_210();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_209();
	Function_208();
	Function_214();
	ENABLE_JOURNAL_REPLAY(1);
	Function_207(1);
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
		Function_206(Global_34573);
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
	Function_205(Global_28178);
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
	Function_204(1178687);
	Function_202(33039);
	Function_201(0x218003f);
	Function_200(4194560);
	Function_199();
	Function_198();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_195(0, 1, 1);
	}
	else
	{
		Function_195(0, 1, 1);
	}
	Function_194();
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
	Function_190();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_190() //Position: 0x919A / 37274
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
		if (Function_193() > 3)
		{
			bVar0 *= 2;
		}
		Function_191(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_191(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x91F0 / 37360
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_192((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_192(bool bParam0) //Position: 0x9236 / 37430
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_193() //Position: 0x925B / 37467
{
	return Global_12976.f_156;
}

void Function_194() //Position: 0x9266 / 37478
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

void Function_195(int iParam0, bool bParam1, int iParam2) //Position: 0x9290 / 37520
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
			Function_196(Global_29006);
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

void Function_196(int iParam0) //Position: 0x939B / 37787
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_197())
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

bool Function_197() //Position: 0x941A / 37914
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

void Function_198() //Position: 0x9477 / 38007
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

void Function_199() //Position: 0x949D / 38045
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

void Function_200(int iParam0) //Position: 0x94C3 / 38083
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_201(int iParam0) //Position: 0x94E0 / 38112
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_202(int iParam0) //Position: 0x94F3 / 38131
{
	Function_203(&Global_28842, iParam0);
	return;
}

void Function_203(var uParam0, int iParam1) //Position: 0x9501 / 38145
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_204(bool bParam0) //Position: 0x951C / 38172
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_205(int iParam0) //Position: 0x9549 / 38217
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

void Function_206(bool bParam0) //Position: 0x9610 / 38416
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

void Function_207(bool bParam0) //Position: 0x968C / 38540
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

void Function_208() //Position: 0x9700 / 38656
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

void Function_209() //Position: 0x9741 / 38721
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

void Function_210() //Position: 0x9782 / 38786
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_211(int iParam0) //Position: 0x9796 / 38806
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_212())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_212() //Position: 0x97D2 / 38866
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

void Function_213() //Position: 0x97F7 / 38903
{
	Global_8722 = 0.0f;
	return;
}

void Function_214() //Position: 0x9801 / 38913
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

int Function_215() //Position: 0x982C / 38956
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_216(bool bParam0) //Position: 0x9846 / 38982
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

int Function_217(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x989E / 39070
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
		Function_219(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_218(StackVal);
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

void Function_218(bool bParam0) //Position: 0x9BBC / 39868
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

void Function_219(bool bParam0) //Position: 0x9BE8 / 39912
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_220() //Position: 0x9BFD / 39933
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
	Function_129(&(Global_29008[Global_30658[3]]), 384);
	Function_248(1);
	Function_241();
	Function_239();
	Function_237();
	Function_231();
	Function_229();
	Function_228();
	Function_224(0);
	if (IS_ACTOR_ALIVE(bLocal_411))
	{
		Function_223(0);
	}
	if (IS_ACTOR_ALIVE(Global_34573))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
		Function_221();
		if (DECOR_CHECK_EXIST(Global_34573, "nmineRider"))
		{
			DECOR_REMOVE(Global_34573, "nmineRider");
		}
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	}
	Function_207(1);
	if (IS_ACTOR_ALIVE(bLocal_410))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
	}
	return;
}

void Function_221() //Position: 0x9CBD / 40125
{
	Function_222();
	if (IS_OBJECT_VALID(bLocal_609))
	{
		DESTROY_OBJECT(bLocal_609);
	}
	return;
}

void Function_222() //Position: 0x9CD5 / 40149
{
	if (IS_ATTACHMENT_VALID(bLocal_607))
	{
		REMOVE_OBJECT_ATTACHMENT(bLocal_607);
	}
	return;
}

void Function_223(bool bParam0) //Position: 0x9CEA / 40170
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_411)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_411, 334, 0, 2, 0);
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_411)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_411));
	}
	return;
}

void Function_224(bool bParam0) //Position: 0x9D27 / 40231
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(Function_227(0)))
		{
			Function_225(0, 1, 1);
		}
	}
	else if (IS_BLIP_VALID(Function_227(0)))
	{
		Function_225(0, 0, 1);
	}
	return;
}

void Function_225(int iParam0, bool bParam1, bool bParam2) //Position: 0x9D56 / 40278
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
						Function_218(bVar1);
					}
				}
				Function_226(bVar0);
			}
		}
	}
	return;
}

void Function_226(bool bParam0) //Position: 0x9E4D / 40525
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

var Function_227(int iParam0) //Position: 0x9E79 / 40569
{
	return Global_8492[iParam014].f_52;
}

void Function_228() //Position: 0x9E88 / 40584
{
	if (IS_BLIP_VALID(bLocal_573))
	{
		REMOVE_BLIP(bLocal_573);
	}
	return;
}

void Function_229() //Position: 0x9E9D / 40605
{
	if (IS_OBJECT_VALID(bLocal_552))
	{
		Function_230(bLocal_552);
	}
	return;
}

void Function_230(bool bParam0) //Position: 0x9EB2 / 40626
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

void Function_231() //Position: 0x9F3C / 40764
{
	Function_232();
	if (!IS_OBJECT_VALID(Local_4.f_1348))
	{
		DESTROY_OBJECT(Local_4.f_1348);
	}
	if (!IS_OBJECT_VALID(Local_4.f_1352))
	{
		DESTROY_OBJECT(Local_4.f_1352);
	}
	return;
}

void Function_232() //Position: 0x9F6D / 40813
{
	Function_233();
	if (!IS_OBJECT_VALID(Local_4.f_1364))
	{
		DESTROY_OBJECT(Local_4.f_1364);
	}
	return;
}

void Function_233() //Position: 0x9F8A / 40842
{
	Function_234();
	return;
}

void Function_234() //Position: 0x9F93 / 40851
{
	Function_235();
	return;
}

void Function_235() //Position: 0x9F9C / 40860
{
	Function_236();
	if (!IS_OBJECT_VALID(Local_4.f_1356))
	{
		DESTROY_OBJECT(Local_4.f_1356);
	}
	if (!IS_OBJECT_VALID(Local_4.f_1360))
	{
		DESTROY_OBJECT(Local_4.f_1360);
	}
	return;
}

void Function_236() //Position: 0x9FCD / 40909
{
	if (!IS_OBJECT_VALID(Local_4.f_1368))
	{
		DESTROY_OBJECT(Local_4.f_1368);
	}
	return;
}

void Function_237() //Position: 0x9FE7 / 40935
{
	if (IS_OBJECTSET_VALID(bLocal_616))
	{
		Function_238(bLocal_616);
		DESTROY_OBJECTSET(bLocal_616);
	}
	return;
}

void Function_238(bool bParam0) //Position: 0xA002 / 40962
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_239() //Position: 0xA047 / 41031
{
	if (Function_240())
	{
		TRAIN_RELEASE_TRAIN(iLocal_602, 0f);
		bLocal_602 = 4294967295;
	}
	return;
}

bool Function_240() //Position: 0xA05E / 41054
{
	if (bLocal_602 <= 0)
	{
		return 0;
	}
	bLocal_603 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_602, false));
	if (!IS_ACTOR_VALID(bLocal_603))
	{
		return 0;
	}
	return 1;
}

void Function_241() //Position: 0xA087 / 41095
{
	Function_242();
	return;
}

void Function_242() //Position: 0xA090 / 41104
{
	Function_243();
	return;
}

void Function_243() //Position: 0xA099 / 41113
{
	Function_244();
	return;
}

void Function_244() //Position: 0xA0A2 / 41122
{
	Function_245();
	return;
}

void Function_245() //Position: 0xA0AB / 41131
{
	ABORT_SCRIPTED_CONVERSATION(0);
	Function_247();
	Function_246();
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	if (IS_OBJECT_VALID(Local_398.f_16))
	{
		DESTROY_OBJECT(Local_398.f_16);
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	return;
}

void Function_246() //Position: 0xA0D9 / 41177
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_247() //Position: 0xA0EB / 41195
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_248(bool bParam0) //Position: 0xA100 / 41216
{
	if (bParam0)
	{
		Function_204(1048576);
	}
	else
	{
		Function_162(1048576);
	}
	return;
}

void Function_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA11C / 41244
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_250(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_250(int iParam0) //Position: 0xA140 / 41280
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

void Function_251() //Position: 0xA67D / 42621
{
	var uVar0[11];
	int iVar12;
	
	if (Function_316())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Breach The Gap";
		uVar0[4] = "Stage 03 - Daring Descent (A)";
		uVar0[5] = "Stage 03 - Daring Descent (B)";
		uVar0[6] = "Stage 04 - Push Over";
		uVar0[7] = "Stage 05 - Rollin Heavy";
		uVar0[8] = "Last Stage - Mission End";
		uVar0[9] = "Kill All Enemies";
		uVar0[10] = "Kill All Blipped Enemies";
		iVar12 = Function_302(&uLocal_391, &uVar0, &Local_350 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_301(&iVar12, &iLocal_405, &iLocal_406, &Local_398))
		{
			Function_294();
		}
		if (iVar12 == 0)
		{
			Function_294();
			Function_293(&bLocal_431, 8);
		}
		else if (iVar12 == 1)
		{
			Function_294();
			Function_287(iLocal_405);
			Function_283(StackVal, StackVal, 5, &bLocal_432, &iLocal_405, Function_291(iLocal_405), Function_287(iLocal_405), 0);
		}
		else if (iVar12 == 2)
		{
			Function_294();
			Function_278(&bLocal_433, 4);
		}
		else if (iVar12 == 3)
		{
			Function_294();
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_276(0);
			Function_274();
			iLocal_405 = 1;
			Local_398 = 1000;
			Function_271(0, "STAGE 02 - INITIALIZE");
		}
		else if (iVar12 == 4)
		{
			Function_294();
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_276(0);
			Function_270(Local_350, 0);
			Function_269();
			iLocal_405 = 2;
			Local_398 = 1000;
			Function_271(0, "STAGE 03 - INITIALIZE");
		}
		else if (iVar12 == 5)
		{
			Function_294();
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_276(0);
			Function_270(Local_350, 1);
			Function_269();
			iLocal_405 = 2;
			Local_398 = 1000;
			Function_271(0, "STAGE 03 - INITIALIZE");
		}
		else if (iVar12 == 6)
		{
			Function_294();
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_276(0);
			Function_267();
			iLocal_405 = 3;
			Local_398 = 1000;
			Function_271(0, "STAGE 04 - INITIALIZE");
		}
		else if (iVar12 == 7)
		{
			Function_294();
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_276(0);
			Function_266();
			iLocal_405 = 4;
			Local_398 = 1000;
			Function_271(0, "STAGE 05 - INITIALIZE");
		}
		else if (iVar12 == 8)
		{
			Function_294();
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_276(0);
			Function_256();
			iLocal_405 = 101;
			Local_398 = 1000;
			Function_271(0, "LAST STAGE - INITIALIZE");
		}
		else if (iVar12 == 9)
		{
			Function_294();
			Function_255();
		}
		else if (iVar12 == 10)
		{
			Function_294();
			Function_252();
		}
	}
	return;
}

void Function_252() //Position: 0xA9E2 / 43490
{
	if (IS_ACTOR_ALIVE((*&Local_4 + 472)[02]))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 472)[02])))
		{
			KILL_ACTOR((*&Local_4 + 472)[02]);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_4 + 472)[12]))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 472)[12])))
		{
			KILL_ACTOR((*&Local_4 + 472)[12]);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_504))
	{
		if (Function_254(Local_4.f_504, 1))
		{
			Function_253(&Local_4 + 504);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_508))
	{
		if (Function_254(Local_4.f_508, 1))
		{
			Function_253(&Local_4 + 508);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_512))
	{
		if (Function_254(Local_4.f_512, 1))
		{
			Function_253(&Local_4 + 512);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_516))
	{
		if (Function_254(Local_4.f_516, 1))
		{
			Function_253(&Local_4 + 516);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_520))
	{
		if (Function_254(Local_4.f_520, 1))
		{
			Function_253(&Local_4 + 520);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_524))
	{
		if (Function_254(Local_4.f_524, 1))
		{
			Function_253(&Local_4 + 524);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_528))
	{
		if (Function_254(Local_4.f_528, 1))
		{
			Function_253(&Local_4 + 528);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_532))
	{
		if (Function_254(Local_4.f_532, 1))
		{
			Function_253(&Local_4 + 532);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_536))
	{
		if (Function_254(Local_4.f_536, 1))
		{
			Function_253(&Local_4 + 536);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_540))
	{
		if (Function_254(Local_4.f_540, 1))
		{
			Function_253(&Local_4 + 540);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_544))
	{
		if (Function_254(Local_4.f_544, 1))
		{
			Function_253(&Local_4 + 544);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_548))
	{
		if (Function_254(Local_4.f_548, 1))
		{
			Function_253(&Local_4 + 548);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_552))
	{
		if (Function_254(Local_4.f_552, 1))
		{
			Function_253(&Local_4 + 552);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_584))
	{
		if (Function_254(Local_4.f_584, 1))
		{
			Function_253(&Local_4 + 584);
		}
	}
	return;
}

void Function_253(int iParam0) //Position: 0xABEE / 44014
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

bool Function_254(bool bParam0, bool bParam1) //Position: 0xAC3D / 44093
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

void Function_255() //Position: 0xAC93 / 44179
{
	if (IS_ACTOR_ALIVE((*&Local_4 + 472)[02]))
	{
		KILL_ACTOR((*&Local_4 + 472)[02]);
	}
	if (IS_ACTOR_ALIVE((*&Local_4 + 472)[12]))
	{
		KILL_ACTOR((*&Local_4 + 472)[12]);
	}
	if (SQUAD_IS_VALID(Local_4.f_504))
	{
		Function_253(&Local_4 + 504);
	}
	if (SQUAD_IS_VALID(Local_4.f_508))
	{
		Function_253(&Local_4 + 508);
	}
	if (SQUAD_IS_VALID(Local_4.f_512))
	{
		Function_253(&Local_4 + 512);
	}
	if (SQUAD_IS_VALID(Local_4.f_516))
	{
		Function_253(&Local_4 + 516);
	}
	if (SQUAD_IS_VALID(Local_4.f_520))
	{
		Function_253(&Local_4 + 520);
	}
	if (SQUAD_IS_VALID(Local_4.f_524))
	{
		Function_253(&Local_4 + 524);
	}
	if (SQUAD_IS_VALID(Local_4.f_528))
	{
		Function_253(&Local_4 + 528);
	}
	if (SQUAD_IS_VALID(Local_4.f_532))
	{
		Function_253(&Local_4 + 532);
	}
	if (SQUAD_IS_VALID(Local_4.f_536))
	{
		Function_253(&Local_4 + 536);
	}
	if (SQUAD_IS_VALID(Local_4.f_540))
	{
		Function_253(&Local_4 + 540);
	}
	if (SQUAD_IS_VALID(Local_4.f_544))
	{
		Function_253(&Local_4 + 544);
	}
	if (SQUAD_IS_VALID(Local_4.f_548))
	{
		Function_253(&Local_4 + 548);
	}
	if (SQUAD_IS_VALID(Local_4.f_552))
	{
		Function_253(&Local_4 + 552);
	}
	if (SQUAD_IS_VALID(Local_4.f_584))
	{
		Function_253(&Local_4 + 584);
	}
	return;
}

void Function_256() //Position: 0xADD5 / 44501
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	Function_241();
	Function_265();
	Function_264();
	Function_263();
	Function_262();
	Function_261();
	if (SQUAD_IS_VALID(Local_4.f_584))
	{
		Function_260(&Local_4 + 584);
		DESTROY_OBJECT(Local_4.f_584);
	}
	Function_237();
	Function_232();
	Function_229();
	Function_228();
	Function_224(1);
	Function_223(0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_207(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	Function_259(0, 0);
	CLEAR_ACTOR_MAX_SPEED(bLocal_410);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_410);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_410, true);
	Function_258();
	SET_ACTOR_INVULNERABILITY(bLocal_411, true);
	Function_257();
	return;
}

void Function_257() //Position: 0xAE62 / 44642
{
	TASK_CLEAR(bLocal_411);
	TASK_PRIORITY_SET(bLocal_411, true);
	TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
	return;
}

void Function_258() //Position: 0xAE7E / 44670
{
	TASK_CLEAR(bLocal_410);
	TASK_PRIORITY_SET(bLocal_410, true);
	TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
	return;
}

void Function_259(bool bParam0, int iParam1) //Position: 0xAE9A / 44698
{
	if (bParam0)
	{
		if (!Function_161(GET_WEAPON_IN_HAND(bLocal_410)))
		{
			ACTOR_DRAW_ANY_WEAPON(bLocal_410, iParam1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_410, 0);
		}
	}
	else if (Function_161(GET_WEAPON_IN_HAND(bLocal_410)))
	{
		ACTOR_HOLSTER_WEAPON(bLocal_410, iParam1);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_410, 1);
	}
	return;
}

void Function_260(bool bParam0) //Position: 0xAEE1 / 44769
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
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

void Function_261() //Position: 0xAF28 / 44840
{
	if (SQUAD_IS_VALID(Local_4.f_528))
	{
		Function_260(&Local_4 + 528);
		DESTROY_OBJECT(Local_4.f_528);
	}
	if (SQUAD_IS_VALID(Local_4.f_524))
	{
		Function_260(&Local_4 + 524);
		DESTROY_OBJECT(Local_4.f_524);
	}
	if (SQUAD_IS_VALID(Local_4.f_536))
	{
		Function_260(&Local_4 + 536);
		DESTROY_OBJECT(Local_4.f_536);
	}
	if (SQUAD_IS_VALID(Local_4.f_512))
	{
		Function_260(&Local_4 + 512);
		DESTROY_OBJECT(Local_4.f_512);
	}
	if (SQUAD_IS_VALID(Local_4.f_532))
	{
		Function_260(&Local_4 + 532);
		DESTROY_OBJECT(Local_4.f_532);
	}
	if (SQUAD_IS_VALID(Local_4.f_540))
	{
		Function_260(&Local_4 + 540);
		DESTROY_OBJECT(Local_4.f_540);
	}
	if (SQUAD_IS_VALID(Local_4.f_516))
	{
		Function_260(&Local_4 + 516);
		DESTROY_OBJECT(Local_4.f_516);
	}
	return;
}

void Function_262() //Position: 0xAFEB / 45035
{
	if (SQUAD_IS_VALID(bLocal_599))
	{
		Function_260(&bLocal_599);
		DESTROY_OBJECT(bLocal_599);
	}
	return;
}

void Function_263() //Position: 0xB006 / 45062
{
	if (SQUAD_IS_VALID(Local_4.f_548))
	{
		Function_260(&Local_4 + 548);
		DESTROY_OBJECT(Local_4.f_548);
	}
	if (SQUAD_IS_VALID(Local_4.f_552))
	{
		Function_260(&Local_4 + 552);
		DESTROY_OBJECT(Local_4.f_552);
	}
	if (SQUAD_IS_VALID(Local_4.f_544))
	{
		Function_260(&Local_4 + 544);
		DESTROY_OBJECT(Local_4.f_544);
	}
	if (SQUAD_IS_VALID(Local_4.f_520))
	{
		Function_260(&Local_4 + 520);
		DESTROY_OBJECT(Local_4.f_520);
	}
	if (SQUAD_IS_VALID(Local_4.f_508))
	{
		Function_260(&Local_4 + 508);
		DESTROY_OBJECT(Local_4.f_508);
	}
	if (SQUAD_IS_VALID(Local_4.f_504))
	{
		Function_260(&Local_4 + 504);
		DESTROY_OBJECT(Local_4.f_504);
	}
	return;
}

void Function_264() //Position: 0xB0AE / 45230
{
	bLocal_571 = false;
	while (bLocal_571 <= 2)
	{
		bLocal_555 = (*&Local_4 + 472)[bLocal_5712];
		if (IS_ACTOR_VALID(bLocal_555))
		{
			bLocal_556 = GET_MOUNT(bLocal_555);
			DESTROY_ACTOR(bLocal_555);
			if (IS_ACTOR_VALID(bLocal_556))
			{
				DESTROY_ACTOR(bLocal_556);
			}
		}
		bLocal_571++;
	}
	return;
}

void Function_265() //Position: 0xB0FE / 45310
{
	if (IS_ACTOR_VALID(bLocal_412))
	{
		DESTROY_ACTOR(bLocal_412);
	}
	return;
}

void Function_266() //Position: 0xB113 / 45331
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	Function_242();
	Function_265();
	Function_264();
	Function_263();
	Function_262();
	Function_261();
	Function_237();
	Function_233();
	Function_229();
	Function_228();
	Function_224(0);
	Function_223(0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_207(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	Function_259(0, 0);
	CLEAR_ACTOR_MAX_SPEED(bLocal_410);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_410);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_410, true);
	Function_258();
	SET_ACTOR_INVULNERABILITY(bLocal_411, true);
	Function_257();
	return;
}

void Function_267() //Position: 0xB185 / 45445
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	Function_243();
	Function_265();
	Function_264();
	Function_263();
	Function_262();
	Function_261();
	Function_268();
	Function_234();
	Function_229();
	Function_228();
	Function_224(0);
	Function_223(0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_207(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	Function_259(0, 0);
	CLEAR_ACTOR_MAX_SPEED(bLocal_410);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_410);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_410, true);
	Function_258();
	SET_ACTOR_INVULNERABILITY(bLocal_411, true);
	Function_257();
	return;
}

void Function_268() //Position: 0xB1F7 / 45559
{
	if (!IS_OBJECTSET_VALID(bLocal_616))
	{
		bLocal_616 = CREATE_OBJECTSET_IN_LAYOUT("ObstacleSet", bLocal_349, 4294967295, 0);
		if (IS_OBJECTSET_VALID(bLocal_616))
		{
			GET_VOLUME_CENTER((*&Local_4 + 644)[0], &vLocal_557);
			vLocal_563 = { 0.0f, GET_VOLUME_HEADING((*&Local_4 + 644)[0]), 0.0f };
			GET_VOLUME_SCALE((*&Local_4 + 644)[0], &vLocal_566);
			bLocal_549 = CREATE_OBSTACLE_IN_LAYOUT(bLocal_349, "BlockCaveObst01", vLocal_557, vLocal_563, vLocal_566);
			if (IS_OBJECT_VALID(bLocal_549))
			{
				ADD_OBJECT_TO_OBJECTSET(bLocal_549, bLocal_616);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockCaveObst01' to block off core!");
			}
			GET_VOLUME_CENTER((*&Local_4 + 644)[1], &vLocal_557);
			vLocal_563 = { 0.0f, GET_VOLUME_HEADING((*&Local_4 + 644)[1]), 0.0f };
			GET_VOLUME_SCALE((*&Local_4 + 644)[1], &vLocal_566);
			bLocal_549 = CREATE_OBSTACLE_IN_LAYOUT(bLocal_349, "BlockCaveObst02", vLocal_557, vLocal_563, vLocal_566);
			if (IS_OBJECT_VALID(bLocal_549))
			{
				ADD_OBJECT_TO_OBJECTSET(bLocal_549, bLocal_616);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockCaveObst02' to block off core!");
			}
			GET_VOLUME_CENTER((*&Local_4 + 644)[2], &vLocal_557);
			vLocal_563 = { 0.0f, GET_VOLUME_HEADING((*&Local_4 + 644)[2]), 0.0f };
			GET_VOLUME_SCALE((*&Local_4 + 644)[2], &vLocal_566);
			bLocal_549 = CREATE_OBSTACLE_IN_LAYOUT(bLocal_349, "BlockCaveObst03", vLocal_557, vLocal_563, vLocal_566);
			if (IS_OBJECT_VALID(bLocal_549))
			{
				ADD_OBJECT_TO_OBJECTSET(bLocal_549, bLocal_616);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockCaveObst03' to block off core!");
			}
			GET_VOLUME_CENTER((*&Local_4 + 644)[3], &vLocal_557);
			vLocal_563 = { 0.0f, GET_VOLUME_HEADING((*&Local_4 + 644)[3]), 0.0f };
			GET_VOLUME_SCALE((*&Local_4 + 644)[3], &vLocal_566);
			bLocal_549 = CREATE_OBSTACLE_IN_LAYOUT(bLocal_349, "BlockTracksObst01", vLocal_557, vLocal_563, vLocal_566);
			if (IS_OBJECT_VALID(bLocal_549))
			{
				ADD_OBJECT_TO_OBJECTSET(bLocal_549, bLocal_616);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockTracksObst01' to block off core!");
			}
			GET_VOLUME_CENTER((*&Local_4 + 644)[4], &vLocal_557);
			vLocal_563 = { 0.0f, GET_VOLUME_HEADING((*&Local_4 + 644)[4]), 0.0f };
			GET_VOLUME_SCALE((*&Local_4 + 644)[4], &vLocal_566);
			bLocal_549 = CREATE_OBSTACLE_IN_LAYOUT(bLocal_349, "BlockTracksObst02", vLocal_557, vLocal_563, vLocal_566);
			if (IS_OBJECT_VALID(bLocal_549))
			{
				ADD_OBJECT_TO_OBJECTSET(bLocal_549, bLocal_616);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockTracksObst02' to block off core!");
			}
		}
		else
		{
			LOG_ERROR("Failed to create 'ObstacleSet' for various obstacles!");
		}
	}
	return;
}

void Function_269() //Position: 0xB5BC / 46524
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	Function_244();
	Function_265();
	Function_264();
	Function_263();
	Function_262();
	Function_268();
	Function_235();
	Function_228();
	Function_224(0);
	Function_223(0);
	Function_207(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	Function_259(0, 0);
	CLEAR_ACTOR_MAX_SPEED(bLocal_410);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_410);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_410, true);
	Function_258();
	SET_ACTOR_INVULNERABILITY(bLocal_411, true);
	Function_257();
	return;
}

void Function_270(int iParam0, int iParam1) //Position: 0xB623 / 46627
{
	if (!Function_18(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_271(bool bParam0, int iParam1) //Position: 0xB63E / 46654
{
	Function_272(&bLocal_413);
	iLocal_406 = bParam0;
	return;
}

void Function_272(bool bParam0) //Position: 0xB64F / 46671
{
	Function_273(bParam0, 0.0f);
	return;
}

void Function_273(bool bParam0, float fParam1) //Position: 0xB65B / 46683
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(bParam0, 1);
	Function_36(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_274() //Position: 0xB67C / 46716
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	Function_245();
	Function_236();
	Function_224(0);
	Function_223(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	CLEAR_ACTOR_MAX_SPEED(bLocal_410);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_410);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_410, true);
	Function_258();
	SET_ACTOR_INVULNERABILITY(bLocal_411, true);
	Function_257();
	SET_ACTOR_INVULNERABILITY(bLocal_412, true);
	Function_275();
	return;
}

void Function_275() //Position: 0xB6D2 / 46802
{
	TASK_CLEAR(bLocal_412);
	TASK_PRIORITY_SET(bLocal_412, true);
	TASK_STAND_STILL(bLocal_412, -1.0f, 0, 0);
	return;
}

void Function_276(bool bParam0) //Position: 0xB6EE / 46830
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

void Function_277(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xB718 / 46872
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

void Function_278(bool bParam0, int iParam1) //Position: 0xB741 / 46913
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_279(iParam1);
	*bParam0 = 1;
	return;
}

void Function_279(int iParam0) //Position: 0xB764 / 46948
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_282("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_281(2) || Function_281(8)) || Function_281(9)) || Function_281(10))
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
		Function_282("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_282("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_282("");
	}
	else if (iParam0 == 8)
	{
		Function_280();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_280();
	}
	return;
}

void Function_280() //Position: 0xB85B / 47195
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_281(int iParam0) //Position: 0xB867 / 47207
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

void Function_282(bool bParam0) //Position: 0xB89D / 47261
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_283(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xB907 / 47367
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_284(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_279(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_284(vector3 vParam0, var uParam3, var uParam4) //Position: 0xB944 / 47428
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_286(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_285(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_285(int iParam0) //Position: 0xB9C7 / 47559
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

var Function_286(vector3 vParam0, bool bParam3) //Position: 0xBE75 / 48757
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

vector3 Function_287(int iParam0) //Position: 0xBEE0 / 48864
{
	Function_288(iParam0 + 1);
	return StackVal, StackVal, Function_288(iParam0 + 1);
}

vector3 Function_288(int iParam0) //Position: 0xBEED / 48877
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_290((*&Local_4 + 884)[0]);
			return StackVal, StackVal, Function_290((*&Local_4 + 884)[0]);
			break;
		
		case 0x00000001:
			Function_290((*&Local_4 + 908)[1]);
			return StackVal, StackVal, Function_290((*&Local_4 + 908)[1]);
			break;
		
		case 0x00000002:
			if (Function_289(Local_350) == 0)
			{
				Function_290((*&Local_4 + 980)[0]);
				return StackVal, StackVal, Function_290((*&Local_4 + 980)[0]);
			}
			Function_290((*&Local_4 + 980)[1]);
			return StackVal, StackVal, Function_290((*&Local_4 + 980)[1]);
			break;
		
		case 0x00000003:
			Function_290((*&Local_4 + 1000)[1]);
			return StackVal, StackVal, Function_290((*&Local_4 + 1000)[1]);
			break;
		
		case 0x00000004:
			Function_290((*&Local_4 + 1020)[4]);
			return StackVal, StackVal, Function_290((*&Local_4 + 1020)[4]);
			break;
		
		default:
			Function_290((*&Local_4 + 1080)[0]);
			return StackVal, StackVal, Function_290((*&Local_4 + 1080)[0]);
			break;
	}
	Function_290((*&Local_4 + 884)[0]);
	return StackVal, StackVal, Function_290((*&Local_4 + 884)[0]);
}

int Function_289(int iParam0) //Position: 0xBF96 / 49046
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

vector3 Function_290(bool bParam0) //Position: 0xBFB0 / 49072
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

int Function_291(int iParam0) //Position: 0xBFD7 / 49111
{
	return Function_292(iParam0 + 1);
}

int Function_292(int iParam0) //Position: 0xBFE4 / 49124
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 884)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 908)[1]);
			break;
		
		case 0x00000002:
			if (Function_289(Local_350) == 0)
			{
				return GET_OBJECT_HEADING((*&Local_4 + 980)[0]);
			}
			return GET_OBJECT_HEADING((*&Local_4 + 980)[1]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1000)[1]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 1020)[4]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1080)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 884)[0]);
}

void Function_293(bool bParam0, int iParam1) //Position: 0xC0A2 / 49314
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_279(iParam1);
	*bParam0 = 1;
	return;
}

void Function_294() //Position: 0xC0C5 / 49349
{
	Function_296();
	Function_295(10, 3);
	return;
}

void Function_295(int iParam0, int iParam1) //Position: 0xC0D4 / 49364
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

void Function_296() //Position: 0xC20B / 49675
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_300())
	{
		Function_299(10, 3);
	}
	else
	{
		Function_297();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_297() //Position: 0xC256 / 49750
{
	Function_298(25, 2);
	return;
}

void Function_298(int iParam0, int iParam1) //Position: 0xC262 / 49762
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

void Function_299(int iParam0, int iParam1) //Position: 0xC460 / 50272
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

bool Function_300() //Position: 0xC597 / 50583
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

bool Function_301(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC5FE / 50686
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_294();
			Function_247();
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
		Function_282("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_302(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC6A4 / 50852
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_315(&Var15, &Var0);
	uVar20 = Function_314(*uParam1, &Var15);
	Function_313(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_312(uParam0, uVar20);
	Function_310(StackVal, uParam0, Var15.f_12);
	Function_308(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_307(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_304(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_303(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_303(int iParam0, int iParam1, int iParam2) //Position: 0xC76B / 51051
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

bool Function_304(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xC7C7 / 51143
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
				Function_306(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_306(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_303(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_305(bParam1->f_32);
	}
	else
	{
		Function_305(bParam1->f_32);
	}
	return 0;
}

void Function_305(bool bParam0) //Position: 0xC94D / 51533
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

void Function_306(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xC987 / 51591
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

var Function_307(int iParam0, var uParam1, int iParam2) //Position: 0xCA35 / 51765
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_308(var uParam0, int iParam1, int iParam2) //Position: 0xCA59 / 51801
{
	switch (Function_309())
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

int Function_309() //Position: 0xCAF5 / 51957
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

void Function_310(var uParam0, int iParam1, int iParam2) //Position: 0xCB31 / 52017
{
	switch (Function_311(uParam0))
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

int Function_311(bool bParam0) //Position: 0xCBC9 / 52169
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

var Function_312(var uParam0, int iParam1) //Position: 0xCD14 / 52500
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

void Function_313(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xCE63 / 52835
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

var Function_314(int iParam0, int iParam1) //Position: 0xCEF6 / 52982
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_315(var uParam0, var uParam1) //Position: 0xCF10 / 53008
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

bool Function_316() //Position: 0xCF5E / 53086
{
	return Global_30920;
}

bool Function_317() //Position: 0xCF67 / 53095
{
	if (IS_EXITFLAG_SET())
	{
		Function_287(iLocal_405);
		Function_283(StackVal, StackVal, 4, &bLocal_432, &iLocal_405, Function_291(iLocal_405), Function_287(iLocal_405), 0);
		return 0;
	}
	Function_735(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_350, iLocal_405, iLocal_406, &bLocal_433, &bLocal_431, &bLocal_432);
	if (iLocal_405 == 99 && iLocal_405 == 100)
	{
		if (!IS_ACTOR_ALIVE(Global_34573))
		{
			Function_287(iLocal_405);
			Function_283(StackVal, StackVal, 1, &bLocal_432, &iLocal_405, Function_291(iLocal_405), Function_287(iLocal_405), 0);
			return 1;
		}
		if (Function_734(2048))
		{
			Function_287(iLocal_405);
			Function_283(StackVal, StackVal, 3, &bLocal_432, &iLocal_405, Function_291(iLocal_405), Function_287(iLocal_405), 0);
			return 1;
		}
		if (Function_714(&Local_475, &uLocal_435, &uLocal_544, bLocal_409, uLocal_434))
		{
			if (Function_705(&uLocal_544))
			{
				Function_287(iLocal_405);
				Function_283(StackVal, StackVal, 5, &bLocal_432, &iLocal_405, Function_291(iLocal_405), Function_287(iLocal_405), 0);
				return 1;
			}
		}
	}
	switch (iLocal_405)
	{
		case 0x00000063:
			Function_652();
			break;
		
		case 0x00000000:
			Function_612();
			break;
		
		case 0x00000001:
			Function_561();
			break;
		
		case 0x00000002:
			Function_515();
			break;
		
		case 0x00000003:
			Function_499();
			break;
		
		case 0x00000004:
			Function_404();
			break;
		
		case 0x00000065:
			Function_320();
			break;
		
		case 0x00000064:
			if (Function_319(&bLocal_432))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_318(&iLocal_405, &iLocal_406, &Local_398))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_431)
	{
		Function_293(&bLocal_431, 8);
		Function_1();
		return 0;
	}
	if (bLocal_432 && iLocal_405 == 100)
	{
		Function_287(iLocal_405);
		Function_283(StackVal, StackVal, 5, &bLocal_432, &iLocal_405, Function_291(iLocal_405), Function_287(iLocal_405), 0);
	}
	if (bLocal_433)
	{
		Function_278(&bLocal_433, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_318(var uParam0, var uParam1, int iParam2) //Position: 0xD104 / 53508
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

bool Function_319(int iParam0) //Position: 0xD144 / 53572
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_320() //Position: 0xD157 / 53591
{
	switch (iLocal_406)
	{
		case 0x00000000:
			Function_400(0);
			if (IS_VOLUME_VALID((*&Local_4 + 616)[4]))
			{
				Function_399();
				DESTROY_VOLUME((*&Local_4 + 616)[4]);
			}
			Function_397();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_394();
			bLocal_408 = Global_30658[3];
			if (HUD_IS_FADED())
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_195(1, 0, 1);
				Function_393(Global_34573, (*&Local_4 + 1080)[0], 1, 1, 1);
				Function_271(1, "LAST STAGE - STREAMING GOAL");
			}
			else
			{
				Function_271(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_385() && STREAMING_IS_WORLD_LOADED()) && (Function_384(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_383();
				STREAMING_RELEASE_MAIN_POI();
				Function_271(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_366();
			Function_271(3, "LAST STAGE - CUTSCENE GOAL");
			break;
		
		case 0x00000003:
			if (Function_326())
			{
				Function_325(1.0f);
				Function_323();
				Function_271(106, "LAST STAGE - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_321();
				bLocal_431 = true;
			}
			break;
	}
	return;
}

void Function_321() //Position: 0xD2D6 / 53974
{
	DESTROY_OBJECT(Local_4.f_1372);
	DESTROY_OBJECT(Local_4.f_1376);
	Function_239();
	Function_322();
	Function_231();
	return;
}

void Function_322() //Position: 0xD2F5 / 54005
{
	if (IS_ACTOR_VALID((*&Local_4 + 492)[02]))
	{
		RELEASE_ACTOR((*&Local_4 + 492)[02]);
	}
	return;
}

void Function_323() //Position: 0xD314 / 54036
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	AI_GOAL_LOOK_CLEAR(bLocal_410);
	Function_217(0, 0, 0, 1, 1);
	Function_324(bLocal_410, -4305,174f, 8,038f, 3291,699f, 131088, 3, 1, 1);
	Function_257();
	return;
}

void Function_324(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xD352 / 54098
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_73(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
}

void Function_325(bool bParam0) //Position: 0xD45A / 54362
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

bool Function_326() //Position: 0xD477 / 54391
{
	var uVar0;
	
	Function_365(&Local_398, 1, 0);
	switch (Local_398)
	{
		case 0x000003E8:
			Function_361(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			iLocal_577 = 0;
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				Local_398.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(Local_398.f_16))
			{
				Function_360(Local_398.f_16, 0);
			}
			else
			{
				Local_398.f_16 = Function_352(Local_4, 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(Local_398.f_16))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_398.f_16, 1);
			}
			else
			{
				LOG_ERROR("Outlaw02_Cutscene05 - Failed to create Outlaw02_Cutscene05_cutscene");
				Local_398 = 1000;
				return 1;
			}
			Local_398 = 1001;
			break;
		
		case 0x000003E9:
			Function_351(Global_34573, 1, 1);
			Function_351(bLocal_410, 1, 1);
			Function_351(bLocal_411, 1, 1);
			SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
			Function_393(Global_34573, (*&Local_4 + 1080)[0], 1, 1, 1);
			if (GET_MOUNT(bLocal_410) != bLocal_411)
			{
				ACTOR_MOUNT_ACTOR(bLocal_410, bLocal_411);
			}
			Function_393(bLocal_411, (*&Local_4 + 1080)[4], 1, 1, 1);
			Function_350((*&Local_4 + 1080)[9]);
			Function_393((*&Local_4 + 492)[02], (*&Local_4 + 1080)[10], 1, 1, 1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[4]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[4]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 588)[4], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 588)[4]);
			Local_398 = 1002;
			break;
		
		case 0x000003EA:
			Function_325(1.0f);
			Function_349();
			Function_348();
			Function_347(1);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "out02_marston", 0);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
			Local_398 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_272(&Local_398 + 4);
				iLocal_656 = 15;
				iLocal_657 = 15;
				Local_398 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_342() && Function_331())
			{
				Function_272(&Local_398 + 4);
				Local_398 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_351(Global_34573, 0, 1);
				Function_351(bLocal_410, 0, 1);
				Function_351(bLocal_411, 0, 1);
				SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[4]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[4]);
				DESTROY_VOLUME((*&Local_4 + 588)[4]);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				if (iLocal_577)
				{
					Function_329(1, 0, 1, 0, 1, 1, 1, 1, 1, 1);
				}
				else
				{
					Function_329(1, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				}
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_398.f_16))
				{
					DESTROY_OBJECT(Local_398.f_16);
				}
				Local_398 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				iLocal_577 = 1;
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_247();
				Function_246();
				Function_328();
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 0);
				Function_327();
				TASK_CLEAR(bLocal_411);
				TASK_PRIORITY_SET(bLocal_411, true);
				TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
				Function_393(Global_34573, (*&Local_4 + 1080)[3], 1, 1, 1);
				if (GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 492)[02], false) != bLocal_410)
				{
					SET_ACTOR_IN_VEHICLE(bLocal_410, (*&Local_4 + 492)[02], false);
				}
				Function_393((*&Local_4 + 492)[02], (*&Local_4 + 1080)[6], 1, 1, 1);
				Function_393(bLocal_411, (*&Local_4 + 1080)[8], 1, 1, 1);
				Function_350((*&Local_4 + 1080)[9]);
				Local_398 = 1104;
			}
			break;
	}
	return 0;
}

void Function_327() //Position: 0xD7EE / 55278
{
	if (IS_ACTOR_VALID((*&Local_4 + 492)[02]))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 492)[02]), false);
	}
	else
	{
		LOG_ERROR("SupplyWagonCleanupAnimate: Failed to get valid SupplyWagon!");
	}
	return;
}

void Function_328() //Position: 0xD855 / 55381
{
	if (IS_MOVER_FROZEN(Global_34573))
	{
		SET_MOVER_FROZEN(Global_34573, false);
	}
	return;
}

void Function_329(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xD86B / 55403
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
		Function_247();
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
	Function_330(iParam9);
}

void Function_330(bool bParam0) //Position: 0xD95B / 55643
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

int Function_331() //Position: 0xDA00 / 55808
{
	switch (iLocal_657)
	{
		case 0x0000000F:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_657 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_339(&Local_398 + 4) < 0,5f)
			{
				Function_338("out02_marston", "out02_marston/cart/cart_out/cart_out_ready");
				iLocal_657 = 18;
			}
			break;
		
		case 0x00000012:
			if (Function_339(&Local_398 + 4) < 3.0f)
			{
				Function_338("out02_marston", "out02_marston/cart/cart_out/cart_out_pre");
				iLocal_657 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_339(&Local_398 + 4) < 6,8f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_657 = 26;
			}
			break;
		
		case 0x0000001A:
			if (Function_339(&Local_398 + 4) < 0,5f)
			{
				GET_PATH_POINT(Local_4.f_1348, false, &vLocal_557);
				bLocal_571 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 0);
				TASK_FACE_COORD(false, &vLocal_557, 0);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1348, true, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_571);
				TASK_SEQUENCE_RELEASE(bLocal_571, 1);
				iLocal_657 = 27;
			}
			break;
		
		case 0x0000001B:
			if (Function_339(&Local_398 + 4) < 1.0f)
			{
				Function_393(Global_34573, (*&Local_4 + 1080)[1], 1, 1, 1);
				Function_328();
				iLocal_657 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_339(&Local_398 + 4) < 2,25f)
			{
				Function_338("out02_marston", "out02_marston/carry_crate/carry");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_657 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_339(&Local_398 + 4) < 5.0f)
			{
				Function_348();
				Function_336();
				Function_335();
				Function_338("out02_marston", "out02_marston/wagon/put_in_wagon");
				Function_393(bLocal_411, (*&Local_4 + 1080)[8], 1, 1, 1);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_657 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_339(&Local_398 + 4) < 3,8f)
			{
				Function_393(Global_34573, (*&Local_4 + 1080)[2], 1, 1, 1);
				Function_328();
				Function_338("out02_marston", "out02_marston/end/out02_end");
				Function_333();
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_410, (*&Local_4 + 492)[02], 0, 1, 0);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_657 = 65;
			}
			break;
		
		case 0x00000041:
			if (Function_332(bLocal_410, (*&Local_4 + 492)[02], 0))
			{
				Function_327();
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_410, Local_4.f_1352, 3, 1, 0, 1, false);
				Function_272(&Local_398 + 4);
				iLocal_657 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_339(&Local_398 + 4) < 2.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_657 = 85;
			}
			break;
		
		case 0x00000055:
			if (!UNK_0xCDA6BB6C() && !IS_OBJECT_VALID(Local_398.f_16))
			{
				iLocal_657 = 106;
			}
			break;
		
		case 0x0000005F:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_657 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_332(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDDFD / 56829
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(bParam1, bParam2) != bParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(bParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_333() //Position: 0xDE24 / 56868
{
	if (IS_ACTOR_VALID((*&Local_4 + 492)[02]))
	{
		Function_334();
		GET_OBJECT_POSITION((*&Local_4 + 1160)[4], &vLocal_557);
		GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[4], &vLocal_563);
		SET_OBJECT_COLLIDE_WITH_OBJECT(Local_4.f_1372, (*&Local_4 + 492)[02], false);
		bLocal_608 = ATTACH_OBJECTS(Local_4.f_1372, (*&Local_4 + 492)[02], Function_53(), vLocal_557, vLocal_563, 4294967295);
		if (!IS_ATTACHMENT_VALID(bLocal_608))
		{
			LOG_ERROR("SupplyWagonAttachCrate: Failed to attach crate to SupplyWagon!");
		}
	}
	else
	{
		LOG_ERROR("SupplyWagonAttachCrate: Failed to get valid SupplyWagon!");
	}
	return;
}

void Function_334() //Position: 0xDF1A / 57114
{
	if (IS_ATTACHMENT_VALID(bLocal_608))
	{
		REMOVE_OBJECT_ATTACHMENT(bLocal_608);
	}
	return;
}

void Function_335() //Position: 0xDF2F / 57135
{
	if (IS_ACTOR_VALID((*&Local_4 + 492)[02]))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 492)[02]), true);
	}
	else
	{
		LOG_ERROR("SupplyWagonSetupAnimate: Failed to get valid SupplyWagon!");
	}
	return;
}

void Function_336() //Position: 0xDF94 / 57236
{
	if (IS_ACTOR_VALID((*&Local_4 + 492)[02]))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1160)[32], &vLocal_557);
		GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[32], &vLocal_563);
		GET_OBJECT_RELATIVE_POSITION((*&Local_4 + 492)[02], vLocal_557, &vLocal_560);
		bLocal_569 = (Function_337((*&Local_4 + 492)[02]) + vLocal_563.y);
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_560, bLocal_569, 1, true, 1);
	}
	else
	{
		LOG_ERROR("TeleportPlayerNearSupplyWagon: Failed to get valid SupplyWagon!");
	}
	return;
}

float Function_337(bool bParam0) //Position: 0xE049 / 57417
{
	return GET_HEADING(bParam0);
}

void Function_338(bool bParam0, bool bParam1) //Position: 0xE054 / 57428
{
	if (!ACTOR_HAS_ANIM_SET(Global_34573, bParam0))
	{
		SET_ANIM_SET_FOR_ACTOR(Global_34573, bParam0, 0);
	}
	SET_ACTION_NODE_FOR_ACTOR(Global_34573, bParam1);
	return;
}

float Function_339(bool bParam0) //Position: 0xE079 / 57465
{
	if (Function_341(bParam0))
	{
		if (Function_340(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_340(int iParam0) //Position: 0xE141 / 57665
{
	return Function_153(*iParam0, 2);
}

bool Function_341(bool bParam0) //Position: 0xE14E / 57678
{
	return Function_153(*bParam0, 1);
}

int Function_342() //Position: 0xE15B / 57691
{
	switch (iLocal_656)
	{
		case 0x0000000F:
			if (Function_339(&Local_398 + 4) < 4,5f)
			{
				Function_346();
				iLocal_656 = 25;
			}
			break;
		
		case 0x00000019:
			if (GET_CUTSCENEOBJECT_SEQUENCE(Local_398.f_16) != 6 && Function_339(&Local_398 + 4) < 0.0f)
			{
				Function_343();
				iLocal_656 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_343() //Position: 0xE1CD / 57805
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_CS04_v2_AA", "Outlaw02_CS04_v2_AA", true, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_344(int iParam0) //Position: 0xE21C / 57884
{
	Function_345(0, Global_34573, iParam0, 0);
	Function_345(1, bLocal_410, iParam0, 0);
	Function_345(2, (*&Local_4 + 472)[02], iParam0, 0);
	return;
}

void Function_345(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xE245 / 57925
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_346() //Position: 0xE26A / 57962
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_CS04_v1_AA", "Outlaw02_CS04_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS04_v1_AB", "Outlaw02_CS04_v1_AB", false, 4, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_347(int iParam0) //Position: 0xE2EE / 58094
{
	if (Function_240())
	{
		if (iParam0 == 1)
		{
			GET_OBJECT_POSITION((*&Local_4 + 1160)[13], &vLocal_557);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[13], &vLocal_563);
		}
		else if (iParam0 == 2)
		{
			GET_OBJECT_POSITION((*&Local_4 + 1160)[12], &vLocal_557);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[12], &vLocal_563);
		}
		else if (iParam0 == 3)
		{
			GET_OBJECT_POSITION((*&Local_4 + 1160)[14], &vLocal_557);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[14], &vLocal_563);
		}
		GET_OBJECT_RELATIVE_POSITION(bLocal_603, vLocal_557, &vLocal_560);
		bLocal_569 = (Function_337(bLocal_603) + vLocal_563.y);
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_560, bLocal_569, 1, true, 1);
	}
	else
	{
		LOG_ERROR("TeleportPlayerNearMineCart: Failed to get MineCart actor!");
	}
	return;
}

void Function_348() //Position: 0xE3E3 / 58339
{
	if (!IS_MOVER_FROZEN(Global_34573))
	{
		SET_MOVER_FROZEN(Global_34573, true);
	}
	return;
}

void Function_349() //Position: 0xE3FA / 58362
{
	Function_334();
	SET_OBJECT_COLLIDE_WITH_OBJECT(Local_4.f_1372, Global_34573, false);
	bLocal_608 = ATTACH_OBJECTS_USING_LOCATOR(Local_4.f_1372, Global_34573, "root_attachment", "grab", 4294967295);
	if (!IS_ATTACHMENT_VALID(bLocal_608))
	{
		LOG_ERROR("PlayerAttachCrate: Failed to attach crate to player!");
	}
	return;
}

void Function_350(bool bParam0) //Position: 0xE47B / 58491
{
	if (Function_240())
	{
		GET_OBJECT_POSITION(bParam0, &vLocal_557);
		GET_OBJECT_ORIENTATION(bParam0, &vLocal_563);
		UNK_0x44986367(&vLocal_563, vLocal_563.y);
		TRAIN_SET_POSITION_DIRECTION(bLocal_602, &vLocal_557, &vLocal_563);
	}
	else
	{
		LOG_ERROR("MineCartSetPosDir: Failed to get MineCart actor!");
	}
	return;
}

void Function_351(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE4E9 / 58601
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			FIRE_STOP_ON_ACTOR(bParam0);
		}
		SET_ACTOR_INVULNERABILITY(bParam0, true);
		CLEAR_ACTOR_MIN_SPEED(bParam0);
		CLEAR_ACTOR_MAX_SPEED(bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
		RESET_ACTOR_GAITS(bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(bParam0), 0);
		}
		if (bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, false);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, true);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

var Function_352(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xE583 / 58755
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Outlaw02_Cutscene05", 6, 1);
	}
	Function_353(&bVar0);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 6.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_353(int iParam0) //Position: 0xE602 / 58882
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_359(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_358(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_357(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_356(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_355(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_354(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1000.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1000.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 1000.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1000.0f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 4, 1000.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 1000.0f, 6);
	return;
}

void Function_354(int iParam0) //Position: 0xE6C3 / 59075
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4459,651f, 10,15404f, 3266,929f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,025253f, -2,713236f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_355(int iParam0) //Position: 0xE726 / 59174
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4455,484f, 9,620727f, 3268,904f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,043183f, 2,00075f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_356(int iParam0) //Position: 0xE789 / 59273
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4463,613f, 10,32656f, 3271,572f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,13418f, -1,280341f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_357(int iParam0) //Position: 0xE7EC / 59372
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4461,499f, 9,79605f, 3276,282f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,121872f, -1,037903f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_358(int iParam0) //Position: 0xE856 / 59478
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4464,05f, 10,171f, 3268,945f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,035427f, -2,483792f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_359(int iParam0) //Position: 0xE8B9 / 59577
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4461,456f, 10,72137f, 3273,161f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,093014f, -2,616642f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_360(bool bParam0, bool bParam1) //Position: 0xE91C / 59676
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 6.0f, 4294967295, 6, 0, 0, 0, 0);
	return;
}

void Function_361(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xE931 / 59697
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
	Function_247();
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
				Function_364(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_364(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_363()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_363()));
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
	if (Function_362(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_362(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_362(int iParam0) //Position: 0xEBDA / 60378
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_363() //Position: 0xEBF6 / 60406
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

vector3 Function_364(bool bParam0) //Position: 0xEC75 / 60533
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_365(int iParam0, bool bParam1, bool bParam2) //Position: 0xEC86 / 60550
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
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_277(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_366() //Position: 0xEDD2 / 60882
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	if (!Function_240())
	{
		if (Function_382())
		{
			Function_381(0);
			Function_380();
		}
	}
	else
	{
		Function_380();
	}
	Function_367();
	Function_259(0, 0);
	AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_410, Global_34573, -1f, 0);
	Function_258();
	Function_257();
	return;
}

void Function_367() //Position: 0xEE19 / 60953
{
	if (!IS_ACTOR_VALID((*&Local_4 + 492)[02]))
	{
		Function_375();
		Function_368(&(Local_475[117]), (*&Local_4 + 492)[02], "Wagon", 1, 0x5f5e100, 1);
	}
	return;
}

int Function_368(float fParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) //Position: 0xEE52 / 61010
{
	if (!Function_374(fParam0, uParam1))
	{
		return 0;
	}
	if (!Function_373(fParam0, uParam2))
	{
		return 0;
	}
	Function_372(fParam0, iParam3);
	fParam0->f_40 = 0;
	Function_369(fParam0, iParam4, iParam5);
	return 1;
}

void Function_369(var uParam0, int iParam1, int iParam2) //Position: 0xEE8E / 61070
{
	if (iParam1 != 100000000)
	{
		Function_371(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_370(uParam0, iParam2);
	}
	return;
}

void Function_370(int iParam0, bool bParam1) //Position: 0xEEB1 / 61105
{
	iParam0->f_40 = 0;
	Function_371(iParam0, 2, bParam1);
	Function_371(iParam0, 4, bParam1);
	Function_371(iParam0, 8, bParam1);
	Function_371(iParam0, 16, bParam1);
	Function_371(iParam0, 32, bParam1);
	Function_371(iParam0, 64, bParam1);
	Function_371(iParam0, 128, bParam1);
	Function_371(iParam0, 256, bParam1);
	Function_371(iParam0, 512, bParam1);
	Function_371(iParam0, 1024, bParam1);
	return;
}

void Function_371(int iParam0, int iParam1, bool bParam2) //Position: 0xEF17 / 61207
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

void Function_372(var uParam0, int iParam1) //Position: 0xEF53 / 61267
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_373(int iParam0, bool bParam1) //Position: 0xEF5F / 61279
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

bool Function_374(int iParam0, bool bParam1) //Position: 0xEFE8 / 61416
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

void Function_375() //Position: 0xF174 / 61812
{
	(*&Local_4 + 492)[02] = Function_376(Local_4, "SupplyWagon", 1199, 976, -4456,296f, 8,527809f, 3272,443f, 0.0f, 235.0f, 0.0f, 1, 976, 976, 976, 4);
	TASK_STAND_STILL((*&Local_4 + 492)[02], -1.0f, 0, 0);
	return;
}

var Function_376(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xF1CA / 61898
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			bVar15 = "";
			if (Function_379(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_378(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_377(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (bVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_377(int iParam0, int iParam1) //Position: 0xF3FE / 62462
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_378(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xF430 / 62512
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_379(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF448 / 62536
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_380() //Position: 0xF46F / 62575
{
	if (Function_240())
	{
		ENABLE_VEHICLE_SEAT(bLocal_603, false, 0);
		ENABLE_VEHICLE_SEAT(bLocal_603, true, 0);
		TRAIN_SET_ENGINE_ENABLED(bLocal_602, 0);
	}
	else
	{
		LOG_ERROR("MineCartStop: Failed to get MineCart actor!");
	}
	return;
}

void Function_381(bool bParam0) //Position: 0xF4C8 / 62664
{
	if (Function_240())
	{
		Function_334();
		GET_OBJECT_POSITION((*&Local_4 + 1160)[3], &vLocal_557);
		GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[3], &vLocal_563);
		if (bParam0)
		{
			SET_OBJECT_COLLIDE_WITH_OBJECT(Local_4.f_1376, bLocal_603, false);
			bLocal_608 = ATTACH_OBJECTS(Local_4.f_1376, bLocal_603, Function_53(), vLocal_557, vLocal_563, 4294967295);
			if (!IS_ATTACHMENT_VALID(bLocal_608))
			{
				LOG_ERROR("MineCartAttachCrate: Failed to attach opened crate to MineCart!");
			}
		}
		else
		{
			DESTROY_OBJECT(Local_4.f_1376);
			SET_OBJECT_COLLIDE_WITH_OBJECT(Local_4.f_1372, bLocal_603, false);
			bLocal_608 = ATTACH_OBJECTS(Local_4.f_1372, bLocal_603, Function_53(), vLocal_557, vLocal_563, 4294967295);
			if (!IS_ATTACHMENT_VALID(bLocal_608))
			{
				LOG_ERROR("MineCartAttachCrate: Failed to attach closed crate to MineCart!");
			}
		}
	}
	else
	{
		LOG_ERROR("MineCartAttachCrate: Failed to get MineCart actor!");
	}
	return;
}

bool Function_382() //Position: 0xF62E / 63022
{
	bLocal_602 = TRAIN_CREATE_NEW_TRAIN(1, "rail__mctrack_01x", 0);
	if (bLocal_602 <= 0)
	{
		LOG_ERROR("CreateMineCart: Failed to create single car train for MineCart!");
		return 0;
	}
	TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_602, 1203);
	bLocal_603 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_602, false));
	if (IS_ACTOR_VALID(bLocal_603))
	{
		TRAIN_SET_ENGINE_ENABLED(bLocal_602, 0);
		TRAIN_SET_JUNCTION_STATE(bLocal_602, 1, 1);
		SET_ACTOR_INVULNERABILITY(bLocal_603, true);
	}
	else
	{
		LOG_ERROR("CreateMineCart: Failed to add MineCart to single car train!");
		return 0;
	}
	return 1;
}

void Function_383() //Position: 0xF71B / 63259
{
	return;
}

int Function_384(bool bParam0) //Position: 0xF721 / 63265
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

bool Function_385() //Position: 0xF73D / 63293
{
	if (Function_386())
	{
		return 1;
	}
	return 0;
}

bool Function_386() //Position: 0xF74C / 63308
{
	Function_392(&Local_4 + 432, 1199, 2, 0);
	Function_392(&Local_4 + 432, 976, 2, 0);
	if (Function_387(&Local_4 + 432))
	{
		return 1;
	}
	return 0;
}

bool Function_387(bool bParam0) //Position: 0xF77C / 63356
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_391();
	iVar1 = 0;
	if (!Function_188(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_390(bParam0[iVar03], 8);
		}
		else if (Function_389())
		{
			iVar1 = 1;
			Function_390(bParam0[iVar03], 8);
		}
		Function_390(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_188(bParam0[iVar03], 4))
		{
			if (!Function_188(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_188(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_188(bParam0[03], 8) || iVar1));
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
				Function_390(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_188(bParam0[iVar03], 4))
		{
			if (!Function_188(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_390(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_390(bParam0[iVar03], 2);
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
							Function_390(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_390(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_390(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_390(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_390(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_390(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_390(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_390(bParam0[iVar03], 2);
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
	Function_388();
	return 1;
}

void Function_388() //Position: 0xFAF7 / 64247
{
	if (!Function_362(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_389() //Position: 0xFB37 / 64311
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

void Function_390(var uParam0, int iParam1) //Position: 0xFB62 / 64354
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_391() //Position: 0xFB73 / 64371
{
	if (!Function_362(128))
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

var Function_392(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xFBB5 / 64437
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_188(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_390(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_390(uParam0[iVar03], 8);
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

void Function_393(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFC85 / 64645
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

void Function_394() //Position: 0xFD8C / 64908
{
	Function_162(15);
	Function_395(9);
	return;
}

void Function_395(int iParam0) //Position: 0xFD9C / 64924
{
	Function_396(&Global_28842, iParam0);
	return;
}

void Function_396(var uParam0, var uParam1) //Position: 0xFDAA / 64938
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_397() //Position: 0xFDCD / 64973
{
	Function_398(bLocal_410);
	Function_398(bLocal_411);
	return;
}

void Function_398(bool bParam0) //Position: 0xFDDF / 64991
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

void Function_399() //Position: 0xFDFF / 65023
{
	Function_386();
	Function_180();
	Local_398.f_16 = Function_352(Local_4, 0, 1, 1, 0);
	if (IS_OBJECT_VALID(Local_398.f_16))
	{
		STREAMING_SET_POI_LIMIT(2);
		SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_398.f_16, 1);
	}
	else
	{
		LOG_ERROR("Outlaw02_Cutscene05 - Failed to create Outlaw02_Cutscene05_cutscene (paused)");
	}
	return;
}

void Function_400(bool bParam0) //Position: 0xFE87 / 65159
{
	Function_401(0, 0x40400000);
	Function_209();
	Function_208();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_401(bool bParam0, float fParam1) //Position: 0xFEBB / 65211
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
	Function_403();
	Function_402();
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

void Function_402() //Position: 0xFFB9 / 65465
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_403() //Position: 0xFFEB / 65515
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

void Function_404() //Position: 0x100F5 / 65781
{
	if (iLocal_406 < 5 && iLocal_406 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 616)[4]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[4]))
			{
				Function_399();
				iLocal_575 = 0;
				DESTROY_VOLUME((*&Local_4 + 616)[4]);
			}
		}
		else if (!iLocal_575)
		{
			if (Function_385())
			{
				Function_383();
				iLocal_575 = 1;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(Global_34573))
		{
			ACTOR_DISMOUNT_NOW(Global_34573);
			TASK_ACTION_PERFORM(Global_34573, "/Global/default_character_Main/ReactionProcessing/ReactionProcessing_Player/Fire/Standing");
		}
		if (!Function_482())
		{
			Function_271(106, "STAGE 05 - COMPLETE");
		}
	}
	switch (iLocal_406)
	{
		case 0x00000000:
			Function_400(0);
			if (IS_VOLUME_VALID((*&Local_4 + 616)[3]))
			{
				Function_481();
				DESTROY_VOLUME((*&Local_4 + 616)[3]);
			}
			Function_480();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			Function_394();
			bLocal_408 = Global_30658[3];
			if (iLocal_425[3] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_195(1, 0, 1);
				Function_393(Global_34573, (*&Local_4 + 1020)[0], 1, 1, 1);
				Function_271(1, "STAGE 05 - STREAMING GOAL");
			}
			else
			{
				Function_271(2, "STAGE 05 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_478() && STREAMING_IS_WORLD_LOADED()) && (Function_384(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_477();
				Function_271(2, "STAGE 05 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_474(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_350, iLocal_405))
			{
				Function_473();
				Function_271(3, "STAGE 05 - CUTSCENE GOAL");
			}
			else
			{
				if (!Function_240())
				{
					if (Function_382())
					{
						Function_381(0);
						Function_380();
					}
				}
				else
				{
					Function_380();
				}
				iLocal_577 = 1;
				Function_393(Global_34573, (*&Local_4 + 1020)[4], 1, 1, 1);
				Function_393(bLocal_410, (*&Local_4 + 1020)[9], 1, 1, 1);
				Function_393(bLocal_411, (*&Local_4 + 1020)[10], 1, 1, 1);
				Function_350((*&Local_4 + 1020)[12]);
				Function_466();
				Function_271(4, "STAGE 05 - POST-CUTSCENE GOAL");
			}
			Function_288(iLocal_405);
			Function_460(StackVal, StackVal, Function_288(iLocal_405), iLocal_405, Global_30628[1], Function_292(iLocal_405), 0);
			iLocal_407 = Function_459();
			break;
		
		case 0x00000003:
			if (Function_434())
			{
				Function_466();
				if (!iLocal_577)
				{
					Function_433();
					Function_432("out02_irish", "out02_irish/irish_leave/leave");
				}
				Function_271(4, "STAGE 05 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_325(1.0f);
			Function_431();
			Function_276(1);
			Function_271(6, "STAGE 05 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (iLocal_577)
				{
					Function_247();
					Function_433();
					Function_432("out02_irish", "out02_irish/irish_leave/leave");
				}
				Function_271(7, "STAGE 05 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_430("Outlaw02_obj05_1", 7,5f, 1, 2, 0, 0, 0);
				Function_429(1);
				Function_271(13, "STAGE 05 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (!Function_428())
			{
				Function_422();
			}
			if (Function_421(&bLocal_416, Global_30658[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_429(0);
				Function_420(5);
				Function_271(14, "STAGE 05 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_421(&bLocal_416, Global_30658[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_429(1);
				Function_271(13, "STAGE 05 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_247();
				Function_430("Outlaw02_obj05_2", 7,5f, 1, 2, 0, 0, 0);
				Function_429(0);
				Function_417(1);
				Function_415(6, Global_34573, 1.0f, 4294967295);
				Function_271(23, "STAGE 05 - OBJ_02-LOOP_PASS");
			}
			break;
		
		case 0x00000017:
			if (!Function_428())
			{
				Function_422();
			}
			if (Function_408(&bLocal_416, 60.0f, bLocal_603, 4294967295, "Outlaw02_obj_return_minecart", "Outlaw02_too_far_minecart", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_229();
				Function_429(1);
				Function_271(24, "STAGE 05 - OBJ_02-LOOP_FAIL");
			}
			break;
		
		case 0x00000018:
			if (!Function_408(&bLocal_416, 60.0f, bLocal_603, 4294967295, "Outlaw02_obj_return_minecart", "Outlaw02_too_far_minecart", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_429(0);
				Function_415(6, Global_34573, 1.0f, 4294967295);
				Function_271(23, "STAGE 05 - OBJ_02-LOOP_PASS");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_405();
				Function_276(0);
				iLocal_405 = 101;
				iLocal_425[4] = 1;
				Function_271(0, "LAST STAGE - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_405() //Position: 0x1081E / 67614
{
	Function_406(&Local_4 + 584, 0, 1);
	DESTROY_OBJECT(Local_4.f_584);
	Function_232();
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_410);
	return;
}

void Function_406(var uParam0, bool bParam1, bool bParam2) //Position: 0x1083F / 67647
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
				if (!Function_407(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_407(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x108BB / 67771
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_408(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x108D5 / 67797
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_282(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_332(Global_34573, bParam2, iParam3) && !(iParam3 != 4294967295 && GET_VEHICLE(Global_34573) != bParam2))
	{
		if (!Function_414(32))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_430(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_413(32);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_412(bParam8, 0, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_412(bParam9, 0, 4294967295, 0, bParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam2, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam2, "MVDR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_414(32))
	{
		Function_411(32);
		if (!Function_410())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_409();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam2, "MVDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
				DECOR_REMOVE(bParam2, "MVDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_412(bParam8, 1, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_412(bParam9, 1, 4294967295, 0, bParam2);
			}
		}
	}
	return 0;
}

void Function_409() //Position: 0x10A53 / 68179
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

bool Function_410() //Position: 0x10A7E / 68222
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

void Function_411(bool bParam0) //Position: 0x10AC2 / 68290
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

void Function_412(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x10B25 / 68389
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

void Function_413(bool bParam0) //Position: 0x10BC6 / 68550
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

bool Function_414(bool bParam0) //Position: 0x10C29 / 68649
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

void Function_415(int iParam0, bool bParam1, float fParam2, int iParam3) //Position: 0x10C70 / 68720
{
	Function_229();
	GET_OBJECT_POSITION((*&Local_4 + 1300)[iParam0], &vLocal_557);
	GET_OBJECT_ORIENTATION((*&Local_4 + 1300)[iParam0], &vLocal_563);
	bLocal_552 = Function_416(StackVal, StackVal, StackVal, StackVal, bLocal_349, "GatewayDest", vLocal_557, vLocal_563, bParam1, fParam2, 1, 3, 330, iParam3, 1, 3212836864, 3212836864, 1);
	if (!IS_OBJECT_VALID(bLocal_552))
	{
		LOG_ERROR("Failed to create destination gateway!");
	}
}

bool Function_416(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x10D08 / 68872
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

void Function_417(bool bParam0) //Position: 0x10DD3 / 69075
{
	if (bParam0)
	{
		Function_419(Local_4.f_584, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
	}
	else
	{
		Function_418(Local_4.f_584);
	}
	return;
}

void Function_418(bool bParam0) //Position: 0x10E00 / 69120
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

void Function_419(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x10E4D / 69197
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

void Function_420(bool bParam0) //Position: 0x10F37 / 69431
{
	Function_228();
	bLocal_573 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1160)[bParam0], 330, 0f, 2, 0);
	return;
}

bool Function_421(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x10F55 / 69461
{
	if (!Function_81(bParam1))
	{
		return 0;
	}
	if (StackVal == 1)
	{
		return 0;
	}
	if (StackVal && (StackVal || (StackVal || (bParam2 && Function_384(bParam1)) != 3 != 4) != 5))
	{
		if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
		{
			Function_282(bParam4);
			*iParam5 = 1;
			return 1;
		}
		if (!Global_3386)
		{
			if (!Function_414(128))
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_430(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
					Function_413(128);
				}
				if (IS_LAYOUTREF_VALID(bParam7))
				{
					Function_412(bParam7, 0, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(bParam8))
				{
					Function_412(bParam8, 0, 4294967295, 0, 0);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
				{
					ADD_BLIP_FOR_OBJECT(StackVal, bParam9, 0f, 2, 0);
				}
			}
			return 1;
		}
		if (Function_414(128))
		{
			Function_411(128);
			Function_411(256);
			if (!Function_410())
			{
				if (bParam10)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_409();
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
				}
				if (IS_LAYOUTREF_VALID(bParam7))
				{
					Function_412(bParam7, 1, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(bParam8))
				{
					Function_412(bParam8, 1, 4294967295, 0, 0);
				}
			}
		}
	}
	else if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
	{
		if (Function_414(256))
		{
			if (Function_339(bParam0) <= 8.0f)
			{
				Function_282(bParam4);
				*iParam5 = 1;
			}
		}
		else if (!Function_414(256))
		{
			if (bParam6)
			{
				Function_247();
			}
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_430(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_413(256);
				Function_272(bParam0);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_412(bParam7, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_412(bParam8, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(StackVal, bParam9, 0f, 2, 0);
			}
		}
		return 1;
	}
	if (Function_414(256))
	{
		Function_411(128);
		Function_411(256);
		if (!Function_410())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_409();
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_412(bParam7, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_412(bParam8, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

bool Function_422() //Position: 0x11216 / 70166
{
	if (Function_427(GET_WEAPON_IN_HAND(Global_34573)))
	{
		bLocal_555 = GET_ACTOR_UNDER_RETICLE(Global_34573, 1);
		if (IS_ACTOR_ALIVE(bLocal_555))
		{
			if (!IS_ACTOR_ANIMAL(bLocal_555))
			{
				if (!Function_341(&bLocal_422))
				{
					Function_272(&bLocal_422);
				}
				else if (bLocal_591 != bLocal_555)
				{
					Function_272(&bLocal_422);
				}
				else if (Function_339(&bLocal_422) <= 1.0f)
				{
					if (bLocal_591 == bLocal_410)
					{
						if (MEMORY_GET_IS_VISIBLE(bLocal_410, Global_34573))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_426();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_GunOnIrish", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
							}
							iLocal_581 = 1;
						}
					}
					else if (Function_425(bLocal_591) == bLocal_349 && Function_425(bLocal_591) == Local_4)
					{
						if (MEMORY_GET_IS_VISIBLE(bLocal_410, bLocal_591))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_424();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_GunOnAmbGapt", "", false, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
							}
							iLocal_581 = 1;
						}
					}
					if (iLocal_581)
					{
						Function_423(&bLocal_422);
						return 1;
					}
				}
				bLocal_591 = bLocal_555;
				return 0;
			}
		}
	}
	bLocal_591 = "";
	Function_423(&bLocal_422);
	return 0;
}

void Function_423(bool bParam0) //Position: 0x1134E / 70478
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_424() //Position: 0x11362 / 70498
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_GunOnAmbGapt", "Outlaw02_GunOnAmbGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

int Function_425(bool bParam0) //Position: 0x113B5 / 70581
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

void Function_426() //Position: 0x1140F / 70671
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_GunOnIrish", "Outlaw02_GunOnIrish", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_427(bool bParam0) //Position: 0x1145E / 70750
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

bool Function_428() //Position: 0x114A4 / 70820
{
	if (iLocal_581)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(bLocal_410))
		{
			iLocal_581 = 0;
		}
		return 1;
	}
	return 0;
}

void Function_429(bool bParam0) //Position: 0x114C6 / 70854
{
	if (Function_240())
	{
		if (bParam0)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_603)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_603, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_603), "Outlaw02_minecart_blip");
			}
		}
		else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_603)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_603));
		}
	}
	return;
}

void Function_430(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x1152B / 70955
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

void Function_431() //Position: 0x1157E / 71038
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	GET_OBJECT_POSITION((*&Local_4 + 1160)[31], &vLocal_557);
	GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[31], &vLocal_563);
	STREAMING_SET_POI_LIMIT(2);
	STREAMING_LOAD_SCENE_EXT(vLocal_557, vLocal_563, 0);
	GET_POSITION((*&Local_4 + 556)[02], &vLocal_557);
	bLocal_569 = GET_HEADING((*&Local_4 + 556)[02]);
	TASK_CLEAR((*&Local_4 + 556)[02]);
	TASK_PRIORITY_SET((*&Local_4 + 556)[02], true);
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_4 + 556)[02], &vLocal_557, bLocal_569, -1.0f);
	GET_POSITION((*&Local_4 + 556)[12], &vLocal_557);
	bLocal_569 = GET_HEADING((*&Local_4 + 556)[12]);
	TASK_CLEAR((*&Local_4 + 556)[12]);
	TASK_PRIORITY_SET((*&Local_4 + 556)[12], true);
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_4 + 556)[12], &vLocal_557, bLocal_569, -1.0f);
	SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 556)[22], "dynamite", 0);
	TASK_CLEAR((*&Local_4 + 556)[22]);
	TASK_PRIORITY_SET((*&Local_4 + 556)[22], true);
	TASK_STAND_STILL((*&Local_4 + 556)[22], -1.0f, 0, 0);
	return;
}

void Function_432(bool bParam0, bool bParam1) //Position: 0x11687 / 71303
{
	if (!ACTOR_HAS_ANIM_SET(bLocal_410, bParam0))
	{
		SET_ANIM_SET_FOR_ACTOR(bLocal_410, bParam0, 0);
	}
	SET_ACTION_NODE_FOR_ACTOR(bLocal_410, bParam1);
	return;
}

void Function_433() //Position: 0x116AC / 71340
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_IrishShoutsOff", "Outlaw02_IrishShoutsOff", false, 2, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_434() //Position: 0x11703 / 71427
{
	var uVar0;
	
	Function_365(&Local_398, 1, 0);
	switch (Local_398)
	{
		case 0x000003E8:
			Function_361(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			iLocal_577 = 0;
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (Function_458() == 12)
			{
				Function_164(0, 0, 0);
			}
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				Local_398.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(Local_398.f_16))
			{
				Function_457(Local_398.f_16, 0);
			}
			else
			{
				Local_398.f_16 = Function_445(Local_4, 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(Local_398.f_16))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_398.f_16, 1);
			}
			else
			{
				LOG_ERROR("Outlaw02_Cutscene04 - Failed to create Outlaw02_Cutscene04_cutscene");
				Local_398 = 1000;
				return 1;
			}
			Local_398 = 1001;
			break;
		
		case 0x000003E9:
			Function_351(Global_34573, 1, 1);
			Function_351(bLocal_410, 1, 1);
			SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
			SET_AUTO_CONVERSATION_LOOK(bLocal_410, 0);
			Function_393(Global_34573, (*&Local_4 + 1020)[0], 1, 1, 1);
			Function_393(bLocal_410, (*&Local_4 + 1020)[5], 1, 1, 1);
			Function_350((*&Local_4 + 1020)[11]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[3]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[3]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 588)[3], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 588)[3]);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_OUTLAWO2_WINCH_CUTSCENE", &uLocal_655);
			Local_398 = 1002;
			break;
		
		case 0x000003EA:
			Function_325(1.0f);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "out02_marston", 0);
			SET_ANIM_SET_FOR_ACTOR(bLocal_410, "out02_irish", 0);
			Local_398 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_272(&Local_398 + 4);
				iLocal_653 = 15;
				iLocal_654 = 15;
				Local_398 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_442() && Function_436())
			{
				Function_272(&Local_398 + 4);
				Local_398 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_351(Global_34573, 0, 1);
				Function_351(bLocal_410, 0, 1);
				SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
				SET_AUTO_CONVERSATION_LOOK(bLocal_410, 1);
				Function_381(0);
				TASK_CLEAR(bLocal_411);
				TASK_PRIORITY_SET(bLocal_411, true);
				TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
				Function_393(Global_34573, (*&Local_4 + 1020)[4], 1, 1, 1);
				Function_393(bLocal_410, (*&Local_4 + 1020)[9], 1, 1, 1);
				Function_393(bLocal_411, (*&Local_4 + 1020)[10], 1, 1, 1);
				Function_350((*&Local_4 + 1020)[12]);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[3]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[3]);
				DESTROY_VOLUME((*&Local_4 + 588)[3]);
				DYNAMICMIXER_DETRIGGERSTATE(uLocal_655, 1);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				Function_329(1, 0, 1, 0, 1, 1, 1, 1, 1, 1);
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_398.f_16))
				{
					DESTROY_OBJECT(Local_398.f_16);
				}
				Local_398 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				iLocal_577 = 1;
				ABORT_SCRIPTED_CONVERSATION(0);
				if (IS_SOUND_ID_VALID(bLocal_576))
				{
					if (!HAS_SOUND_FINISHED(bLocal_576))
					{
						STOP_SOUND(bLocal_576);
					}
					RELEASE_SOUND_ID(bLocal_576);
				}
				Function_247();
				Function_246();
				Function_221();
				Function_328();
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				Function_435();
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				Function_393(Global_34573, (*&Local_4 + 1020)[4], 1, 1, 1);
				Function_393(bLocal_410, (*&Local_4 + 1020)[9], 1, 1, 1);
				Function_393(bLocal_411, (*&Local_4 + 1020)[10], 1, 1, 1);
				Function_350((*&Local_4 + 1020)[12]);
				Local_398 = 1104;
			}
			break;
	}
	return 0;
}

void Function_435() //Position: 0x11ACD / 72397
{
	Function_334();
	if (IS_OBJECT_VALID(bLocal_610))
	{
		DESTROY_OBJECT(bLocal_610);
	}
	return;
}

int Function_436() //Position: 0x11AE5 / 72421
{
	switch (iLocal_654)
	{
		case 0x0000000F:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				Function_432("out02_irish", "out02_irish/pre");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				iLocal_654 = 25;
			}
			break;
		
		case 0x00000019:
			if (IS_ACTION_NODE_PLAYING(bLocal_410, "out02_irish/idle") && Function_339(&Local_398 + 4) < 0.0f)
			{
				Function_432("out02_irish", "out02_irish/talk");
				Function_272(&Local_398 + 4);
				iLocal_654 = 26;
			}
			break;
		
		case 0x0000001A:
			if (Function_339(&Local_398 + 4) < 0,5f)
			{
				Function_393(Global_34573, (*&Local_4 + 1020)[1], 1, 1, 1);
				Function_349();
				Function_338("out02_marston", "out02_marston/winch/winch_in/winch_in_ready");
				iLocal_654 = 35;
			}
			break;
		
		case 0x00000023:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_339(&Local_398 + 4) < 0.0f)
			{
				Function_338("out02_marston", "out02_marston/winch/winch_in/winch_in_pre");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_654 = 36;
			}
			break;
		
		case 0x00000024:
			if (Function_339(&Local_398 + 4) < 1.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 0);
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				Function_393(bLocal_410, (*&Local_4 + 1020)[6], 1, 1, 1);
				iLocal_654 = 37;
			}
			break;
		
		case 0x00000025:
			if (Function_339(&Local_398 + 4) < 2,5f)
			{
				if (Function_441())
				{
					SNAP_ACTOR_TO_GRINGO(bLocal_410, bLocal_606, "UseCase2", true, 1, 0);
					TASK_CLEAR(bLocal_410);
					TASK_PRIORITY_SET(bLocal_410, true);
					TASK_USE_GRINGO(bLocal_410, bLocal_605, "UseCase2", 4294967295, 1);
				}
				iLocal_654 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_339(&Local_398 + 4) < 3,8f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_654 = 46;
			}
			break;
		
		case 0x0000002E:
			if (Function_339(&Local_398 + 4) < 0,5f)
			{
				Function_440();
				Function_439();
				iLocal_654 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_339(&Local_398 + 4) < 2.0f)
			{
				bLocal_576 = GET_SOUND_ID();
				if (IS_SOUND_ID_VALID(bLocal_576))
				{
					GET_POSITION(bLocal_410, &vLocal_557);
					PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_576, "OUTLAW02_WINCH_LOOP_MASTER", vLocal_557);
				}
				Function_438(6);
				Function_338("out02_marston", "out02_marston/ride_lift/lift");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_654 = 56;
			}
			Function_437();
			break;
		
		case 0x00000038:
			if (Function_339(&Local_398 + 4) < 5.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 0);
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				Function_393(bLocal_410, (*&Local_4 + 1020)[7], 1, 1, 1);
				iLocal_654 = 65;
			}
			Function_437();
			break;
		
		case 0x00000041:
			if (Function_339(&Local_398 + 4) < 6,5f)
			{
				Function_432("out02_irish", "out02_irish/wave_down_mine/wave");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_654 = 66;
			}
			Function_437();
			break;
		
		case 0x00000042:
			if (Function_339(&Local_398 + 4) < 0,5f)
			{
				Function_221();
				Function_435();
				Function_349();
				Function_393(Global_34573, (*&Local_4 + 1020)[2], 1, 1, 1);
				Function_338("out02_marston", "out02_marston/winch/winch_out/winch_out_ready");
				Function_380();
				Function_350((*&Local_4 + 1020)[12]);
				iLocal_654 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_339(&Local_398 + 4) < 8.0f)
			{
				Function_438(1);
				Function_338("out02_marston", "out02_marston/winch/winch_out/winch_out_pre");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
				if (IS_SOUND_ID_VALID(bLocal_576))
				{
					STOP_SOUND(bLocal_576);
					RELEASE_SOUND_ID(bLocal_576);
				}
				Function_272(&Local_398 + 4);
				iLocal_654 = 76;
			}
			break;
		
		case 0x0000004C:
			if (Function_339(&Local_398 + 4) < 0,5f)
			{
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				Function_393(bLocal_410, (*&Local_4 + 1020)[8], 1, 1, 1);
				iLocal_654 = 85;
			}
			break;
		
		case 0x00000055:
			if (Function_339(&Local_398 + 4) < 3,8f)
			{
				Function_393(Global_34573, (*&Local_4 + 1020)[3], 1, 1, 1);
				Function_338("out02_marston", "out02_marston/carry_crate/carry");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_654 = 95;
			}
			break;
		
		case 0x0000005F:
			if (Function_339(&Local_398 + 4) < 5.0f)
			{
				Function_348();
				Function_347(1);
				Function_338("out02_marston", "out02_marston/cart/cart_in/cart_in_pre");
				Function_432("out02_irish", "out02_irish/irish_wagon/irish");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				Function_272(&Local_398 + 4);
				iLocal_654 = 96;
			}
			break;
		
		case 0x00000060:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_339(&Local_398 + 4) < 3,8f)
			{
				Function_328();
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				iLocal_654 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_437() //Position: 0x1218F / 74127
{
	GET_OBJECT_POSITION(bLocal_610, &vLocal_557);
	SET_OBJECT_POSITION(Local_4.f_1372, vLocal_557);
	return;
}

void Function_438(bool bParam0) //Position: 0x121AD / 74157
{
	if (Function_441())
	{
		switch (bParam0)
		{
			case 0x00000001:
				DECOR_SET_INT(bLocal_606, "liftTopMidBot", true);
				break;
			
			case 0x00000002:
				DECOR_SET_INT(bLocal_606, "liftTopMidBot", 2);
				break;
			
			case 0x00000003:
				DECOR_SET_INT(bLocal_606, "liftTopMidBot", 3);
				break;
			
			case 0x00000004:
				DECOR_SET_INT(bLocal_606, "liftMoveDownUp", true);
				break;
			
			case 0x00000005:
				DECOR_SET_INT(bLocal_606, "liftMoveDownUp", 2);
				break;
			
			case 0x00000006:
				DECOR_SET_INT(bLocal_606, "liftMoveDownUp", 3);
				break;
			}
	}
	return;
}

void Function_439() //Position: 0x12289 / 74377
{
	if (Function_441())
	{
		bLocal_549 = GET_OBJECT_OWNER(bLocal_606);
		if (IS_OBJECT_VALID(bLocal_549))
		{
			Function_435();
			bLocal_610 = CREATE_OBJECT_LOCATOR(bLocal_349, "LiftBucketLoc02");
			if (IS_OBJECT_VALID(bLocal_610))
			{
				Function_75();
				Function_75();
				if (OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bLocal_610, bLocal_549, "liftbucket02", Function_75(), Function_75()))
				{
					GET_OBJECT_POSITION((*&Local_4 + 1160)[2], &vLocal_557);
					GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[2], &vLocal_563);
					bLocal_608 = ATTACH_OBJECTS(Local_4.f_1372, bLocal_610, Function_53(), vLocal_557, vLocal_563, 4294967295);
					if (!IS_ATTACHMENT_VALID(bLocal_608))
					{
						LOG_ERROR("LiftBucketAttachCrate: Failed to attach crate to Lift Bucket locator!");
					}
				}
				else
				{
					LOG_ERROR("LiftBucketAttachCrate: Failed to attach Lift Bucket locator to Old Winch!");
				}
			}
			else
			{
				LOG_ERROR("LiftBucketAttachCrate: Failed to create Lift Bucket locator for Old Winch!");
			}
		}
		else
		{
			LOG_ERROR("LiftBucketAttachCrate: Failed to get Old Winch from Old Winch gringo!");
		}
	}
	else
	{
		LOG_ERROR("LiftBucketAttachPlayer: Failed to find Old Winch gringo! This is bad!");
	}
	return;
}

void Function_440() //Position: 0x124BF / 74943
{
	if (Function_441())
	{
		bLocal_549 = GET_OBJECT_OWNER(bLocal_606);
		if (IS_OBJECT_VALID(bLocal_549))
		{
			Function_221();
			bLocal_609 = CREATE_OBJECT_LOCATOR(bLocal_349, "LiftBucketLoc01");
			if (IS_OBJECT_VALID(bLocal_609))
			{
				Function_75();
				Function_75();
				if (OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bLocal_609, bLocal_549, "liftbucket01", Function_75(), Function_75()))
				{
					GET_OBJECT_POSITION((*&Local_4 + 1160)[28], &vLocal_557);
					GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[28], &vLocal_563);
					bLocal_607 = ATTACH_OBJECTS(Global_34573, bLocal_609, Function_53(), vLocal_557, vLocal_563, 4294967295);
					if (!IS_ATTACHMENT_VALID(bLocal_607))
					{
						LOG_ERROR("LiftBucketAttachPlayer: Failed to attach player to Lift Bucket locator!");
					}
				}
				else
				{
					LOG_ERROR("LiftBucketAttachPlayer: Failed to attach Lift Bucket locator to Old Winch!");
				}
			}
			else
			{
				LOG_ERROR("LiftBucketAttachPlayer: Failed to create Lift Bucket locator for Old Winch!");
			}
		}
		else
		{
			LOG_ERROR("LiftBucketAttachPlayer: Failed to get Old Winch from Old Winch gringo!");
		}
	}
	else
	{
		LOG_ERROR("LiftBucketAttachPlayer: Failed to find Old Winch gringo! This is bad!");
	}
	return;
}

bool Function_441() //Position: 0x126FA / 75514
{
	if (!IS_GRINGO_VALID(bLocal_605))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1160)[21], &vLocal_557);
		bLocal_605 = LOCATE_GRINGO_OF_TYPE("nold_winch", &vLocal_557, 1.0f, 0);
		if (IS_GRINGO_VALID(bLocal_605))
		{
			bLocal_606 = GET_OBJECT_FROM_GRINGO(bLocal_605);
			if (!IS_OBJECT_VALID(bLocal_606))
			{
				return 0;
			}
		}
		return 0;
	}
	return 1;
}

int Function_442() //Position: 0x12755 / 75605
{
	switch (iLocal_653)
	{
		case 0x0000000F:
			if (IS_ACTION_NODE_PLAYING(bLocal_410, "out02_irish/talk") && Function_339(&Local_398 + 4) < 0.0f)
			{
				Function_444();
				iLocal_653 = 25;
			}
			break;
		
		case 0x00000019:
			if (GET_CUTSCENEOBJECT_SEQUENCE(Local_398.f_16) != 8 && Function_339(&Local_398 + 4) < 0.0f)
			{
				Function_443();
				iLocal_653 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_443() //Position: 0x127DE / 75742
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS03_v2_AA", "Outlaw02_CS03_v2_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS03_v2_AB", "Outlaw02_CS03_v2_AB", false, 4, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_444() //Position: 0x12862 / 75874
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS03_v1_AA1", "Outlaw02_CS03_v1_AA1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS03_v1_AA2", "Outlaw02_CS03_v1_AA2", false, 4, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_445(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x128EA / 76010
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 10, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Outlaw02_Cutscene04", 10, 1);
	}
	Function_446(&bVar0);
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

void Function_446(int iParam0) //Position: 0x1296B / 76139
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_456(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_455(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_454(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_453(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_452(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_451(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 6);
	Function_450(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 7);
	Function_449(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 8);
	Function_448(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 9);
	Function_447(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1000.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1000.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 1000.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1000.0f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 4, 1000.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 1000.0f, 6);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 6, 1000.0f, 7);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 7, 1000.0f, 8);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 8, 9, 3,5f, 9, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 9, 1000.0f, 10);
	return;
}

void Function_447(int iParam0) //Position: 0x12AA9 / 76457
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4469,906f, 37,73529f, 3145,784f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -1,489563f, -2,36896f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_448(int iParam0) //Position: 0x12B0C / 76556
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4469,862f, 38,77385f, 3145,629f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -1,489693f, -2,370227f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_449(int iParam0) //Position: 0x12B6F / 76655
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4471,23f, 30,0332f, 3148,579f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,03929f, -0,574267f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_450(int iParam0) //Position: 0x12BD2 / 76754
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4473,898f, 37,27301f, 3145,41f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,317032f, 0,174779f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_451(int iParam0) //Position: 0x12C35 / 76853
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4473,025f, 24,75736f, 3142,187f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 1,153683f, 2,43313f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_452(int iParam0) //Position: 0x12C98 / 76952
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4473,107f, 28,44963f, 3142,48f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -1,540938f, 2,865356f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_453(int iParam0) //Position: 0x12CFB / 77051
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4461,771f, 29,07048f, 3130,95f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,223597f, 2,493835f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_454(int iParam0) //Position: 0x12D5E / 77150
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4471,216f, 2,271105f, 3143,844f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,114335f, 1,790613f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_455(int iParam0) //Position: 0x12DC1 / 77249
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 13.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4472,96f, 20,55961f, 3143,185f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 1,391443f, 0,947451f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_456(int iParam0) //Position: 0x12E24 / 77348
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 13.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4471,905f, 13,57181f, 3143,966f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 1,391541f, 1,103474f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_457(bool bParam0, bool bParam1) //Position: 0x12E87 / 77447
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

int Function_458() //Position: 0x12E9C / 77468
{
	return StackVal;
}

int Function_459() //Position: 0x12EA7 / 77479
{
	return Global_34165.f_60;
}

void Function_460(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x12EB2 / 77490
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
	if (iParam3 != Global_34165.f_48 && !Function_465())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_464(0);
	Function_463();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_462(uParam4, iVar0, iVar1);
	Function_461();
}

void Function_461() //Position: 0x12F4F / 77647
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

void Function_462(int iParam0, bool bParam1, bool bParam2) //Position: 0x12F90 / 77712
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

void Function_463() //Position: 0x130F6 / 78070
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_464(bool bParam0) //Position: 0x1311A / 78106
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

bool Function_465() //Position: 0x13149 / 78153
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_466() //Position: 0x13164 / 78180
{
	Function_367();
	Function_438(1);
	Function_471();
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	Function_470(Local_4.f_584, 5);
	GET_OBJECT_POSITION((*&Local_4 + 1160)[29], &vLocal_557);
	GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[29], &vLocal_563);
	bLocal_617 = CREATE_PROP_IN_LAYOUT(bLocal_349, "nPowderKeg", "p_gen_powderKeg02x", vLocal_557, vLocal_563, 1);
	if (IS_OBJECT_VALID(bLocal_617))
	{
		bLocal_550 = GET_PHYSINST_FROM_OBJECT(bLocal_617);
		if (IS_PHYSINST_VALID(bLocal_550))
		{
			SET_PROP_TARGETABLE(bLocal_550, 1, 0);
			SET_PROP_TARGETABLE_AS_ENEMY(bLocal_550, 1);
			SET_PROP_TARGETABLE_SCORE_BIAS(bLocal_550, -100000.0f);
			SET_PROP_TARGETABLE_ACQUISITION_RADIUS(bLocal_550, 100.0f);
			SET_PROP_TARGETABLE_TARGET_BOX_SIZE(bLocal_550, 5.0f, 5.0f);
		}
		else
		{
			LOG_ERROR("Failed to make PowderKeg targettable!");
		}
	}
	else
	{
		LOG_ERROR("Failed to create PowderKeg on the tracks!");
	}
	Function_469();
	SET_ACTOR_INVULNERABILITY(bLocal_410, false);
	Function_258();
	SET_ACTOR_INVULNERABILITY(bLocal_411, false);
	Function_257();
	Function_467(&Local_4 + 556[02], Global_34573, 1);
	Function_467(&Local_4 + 556[12], Global_34573, 1);
	ACTOR_DRAW_ANY_WEAPON((*&Local_4 + 556)[02], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 556)[02], 0);
	ACTOR_DRAW_ANY_WEAPON((*&Local_4 + 556)[12], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 556)[12], 0);
	return;
}

void Function_467(bool bParam0, bool bParam1, bool bParam2) //Position: 0x132E4 / 78564
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_468(bParam1);
			vVar0 = { StackVal, StackVal, Function_468(bParam1) };
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

vector3 Function_468(bool bParam0) //Position: 0x133EC / 78828
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

void Function_469() //Position: 0x13456 / 78934
{
	if (Function_240())
	{
		ENABLE_VEHICLE_SEAT(bLocal_603, false, 1);
		ENABLE_VEHICLE_SEAT(bLocal_603, true, 1);
		TRAIN_SET_ENGINE_ENABLED(bLocal_602, 0);
	}
	else
	{
		LOG_ERROR("MineCartStart: Failed to get MineCart actor!");
	}
	return;
}

void Function_470(bool bParam0, bool bParam1) //Position: 0x134B0 / 79024
{
	bool bVar0;
	
	bVar0 = 4294967295;
	bLocal_571 = false;
	while (bLocal_571 <= SQUAD_GET_SIZE(bParam0))
	{
		bLocal_555 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_571);
		if (IS_ACTOR_ALIVE(bLocal_555))
		{
			bVar0 = GET_ACTOR_ENUM(bLocal_555);
			switch (bParam1)
			{
				case 0x00000000:
					switch (bVar0)
					{
						case 0x000001F9:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_OtherMinersSpotJon_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_OtherMinersSpotJon_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_OtherMinersSpotJon_01");
							break;
						
						case 0x000001FA:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_OtherMinersSpotJon_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_OtherMinersSpotJon_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_OtherMinersSpotJon_02");
							break;
						
						case 0x000001FB:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_OtherMinersSpotJon_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_OtherMinersSpotJon_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_OtherMinersSpotJon_03");
							break;
					}
					break;
				
				case 0x00000001:
					switch (bVar0)
					{
						case 0x000001FC:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonEntersFrontMine");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonEntersFrontMine");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonEntersFrontMine");
							break;
					}
					break;
				
				case 0x00000002:
					switch (bVar0)
					{
						case 0x000001FE:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonEntersTruShaft");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonEntersTruShaft");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonEntersTruShaft");
							break;
					}
					break;
				
				case 0x00000003:
					switch (bVar0)
					{
						case 0x000001FC:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonSpottedInsideMine_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonSpottedInsideMine_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonSpottedInsideMine_01");
							break;
						
						case 0x000001FA:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonSpottedInsideMine_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonSpottedInsideMine_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonSpottedInsideMine_02");
							break;
						
						case 0x000001FE:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonSpottedInsideMine_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonSpottedInsideMine_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonSpottedInsideMine_03");
							break;
					}
					break;
				
				case 0x00000004:
					switch (bVar0)
					{
						case 0x000001FC:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonClose2MachineGun_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonClose2MachineGun_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonClose2MachineGun_01");
							break;
						
						case 0x000001FA:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonClose2MachineGun_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonClose2MachineGun_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonClose2MachineGun_02");
							break;
						
						case 0x000001FE:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonClose2MachineGun_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonClose2MachineGun_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonClose2MachineGun_03");
							break;
					}
					break;
				
				case 0x00000005:
					switch (bVar0)
					{
						case 0x000001FC:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonOnMachineGun_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonOnMachineGun_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonOnMachineGun_01");
							break;
						
						case 0x000001FA:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonOnMachineGun_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonOnMachineGun_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonOnMachineGun_02");
							break;
						
						case 0x000001FE:
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "THIS_WAY", "Outlaw02_JonOnMachineGun_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "SPOTTED", "Outlaw02_JonOnMachineGun_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(bLocal_555, "TAUNT_FIGHT", "Outlaw02_JonOnMachineGun_03");
							break;
					}
					break;
				}
		}
		bLocal_571++;
	}
	return;
}

void Function_471() //Position: 0x13E0F / 81423
{
	Local_4.f_584 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerOutsideEscape"));
	(*&Local_4 + 556)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerOutsideEscape01", 508, -4528.0f, 30,10574f, 3136f, 0.0f, 220,6965f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 556)[02], Local_4.f_584);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 556)[02], false);
	TASK_STAND_STILL((*&Local_4 + 556)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 556)[02], 19);
	TASK_PRIORITY_SET((*&Local_4 + 556)[02], true);
	Function_472((*&Local_4 + 556)[02]);
	(*&Local_4 + 556)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerOutsideEscape02", 509, -4465,452f, 24,76764f, 3191,795f, 179,9547f, 46,43098f, -179,9583f);
	SQUAD_JOIN((*&Local_4 + 556)[12], Local_4.f_584);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 556)[12], false);
	TASK_STAND_STILL((*&Local_4 + 556)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 556)[12], 19);
	TASK_PRIORITY_SET((*&Local_4 + 556)[12], true);
	Function_472((*&Local_4 + 556)[12]);
	(*&Local_4 + 556)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerOutsideEscape03", 510, -4513,111f, 15,85748f, 3230,002f, 0.0f, 152,57f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 556)[22], Local_4.f_584);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 556)[22], false);
	TASK_STAND_STILL((*&Local_4 + 556)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 556)[22], 19);
	TASK_PRIORITY_SET((*&Local_4 + 556)[22], true);
	Function_472((*&Local_4 + 556)[22]);
	return;
}

void Function_472(bool bParam0) //Position: 0x13FE0 / 81888
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

void Function_473() //Position: 0x14015 / 81941
{
	Function_249(&iLocal_574, 7, 0, 4294967295, 4294967295);
	if (!Function_240())
	{
		if (Function_382())
		{
			Function_381(0);
			Function_380();
		}
	}
	else
	{
		Function_380();
	}
	Function_438(3);
	Function_259(0, 0);
	Function_258();
	Function_257();
	return;
}

bool Function_474(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x1404E / 81998
{
	if (Function_475(&iParam0) == iParam7 || Function_465())
	{
		return 1;
	}
	return 0;
}

int Function_475(int iParam0) //Position: 0x1406D / 82029
{
	if (Function_476(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

bool Function_476(var uParam0) //Position: 0x14085 / 82053
{
	return uParam0->f_20;
}

void Function_477() //Position: 0x1408F / 82063
{
	return;
}

bool Function_478() //Position: 0x14095 / 82069
{
	if (Function_479())
	{
		return 1;
	}
	return 0;
}

bool Function_479() //Position: 0x140A4 / 82084
{
	Function_392(&Local_4 + 368, 1199, 2, 0);
	Function_392(&Local_4 + 368, 976, 2, 0);
	Function_392(&Local_4 + 368, 508, 2, 0);
	Function_392(&Local_4 + 368, 509, 2, 0);
	Function_392(&Local_4 + 368, 510, 2, 0);
	if (Function_387(&Local_4 + 368))
	{
		return 1;
	}
	return 0;
}

void Function_480() //Position: 0x140FE / 82174
{
	Function_398(bLocal_410);
	Function_398(bLocal_411);
	return;
}

void Function_481() //Position: 0x14110 / 82192
{
	Function_479();
	Local_398.f_16 = Function_445(Local_4, 0, 1, 1, 0);
	if (IS_OBJECT_VALID(Local_398.f_16))
	{
		STREAMING_SET_POI_LIMIT(2);
		SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_398.f_16, 1);
	}
	else
	{
		LOG_ERROR("Outlaw02_Cutscene04 - Failed to create Outlaw02_Cutscene04_cutscene (paused)");
	}
	return;
}

bool Function_482() //Position: 0x14195 / 82325
{
	Function_240();
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[4]))
	{
		KILL_ACTOR(Global_34573);
	}
	if (IS_OBJECT_VALID(bLocal_617))
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "Vehicle/Engaged/MineCart/Riding") || IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "Vehicle/VehicleGunplay/MineCart/PistolAim/PistolMineCartRide"))
		{
			Function_249(&iLocal_574, 17, 0, 4294967295, 4294967295);
		}
		if (IS_ACTOR_IN_VOLUME(bLocal_603, (*&Local_4 + 700)[11]))
		{
			GET_OBJECT_POSITION(bLocal_617, &vLocal_557);
			Function_498(&vLocal_557, "DynamiteExplosion", 0, 1);
			DESTROY_OBJECT(bLocal_617);
			if (Function_497())
			{
				KILL_ACTOR(Global_34573);
				return 1;
			}
			Function_282("Outlaw02_exploded_minecart");
			bLocal_432 = true;
			return 1;
		}
	}
	if (!iLocal_614)
	{
		Function_249(&iLocal_574, 40, 0, 4294967295, 4294967295);
	}
	switch (iLocal_648)
	{
		case 0x00000000:
			iLocal_648 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (Function_497())
			{
				Function_249(&iLocal_574, 10, 0, 4294967295, 4294967295);
				if (!iLocal_612)
				{
					Function_496();
				}
				Function_271(15, "STAGE 05 - OBJ_02-OBJ_01");
				iLocal_648 = 2;
			}
			if (!iLocal_612)
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_603, 5.0f))
				{
					iLocal_612 = 1;
					Function_417(1);
					Function_496();
				}
			}
			break;
		
		case 0x00000002:
			if (Function_494((*&Local_4 + 700)[12], (*&Local_4 + 1300)[6]))
			{
				iLocal_648 = 3;
				return 1;
			}
			if (IS_OBJECT_VALID(bLocal_617))
			{
				if (!iLocal_613)
				{
					if (Function_492(bLocal_603, (*&Local_4 + 1300)[5], 0,5f))
					{
						Function_249(&iLocal_574, 17, 0, 4294967295, 4294967295);
						iLocal_613 = 1;
						Function_272(&bLocal_419);
						Function_361(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
						Function_491(bLocal_349, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
						Function_489(-4513,695f, 16,211f, 3232,042f, -0,073f, 0,223f, -0,972f, -1.0f, 0, 1);
						if (IS_ACTOR_ALIVE((*&Local_4 + 556)[22]))
						{
							Function_467(&Local_4 + 556[22], Global_34573, 1);
							ACTOR_DRAW_ANY_WEAPON((*&Local_4 + 556)[22], 1);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 556)[22], 0);
							GET_OBJECT_POSITION((*&Local_4 + 1160)[30], &vLocal_557);
							GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[30], &vLocal_563);
							bLocal_571 = TASK_SEQUENCE_OPEN();
							TASK_ACTION_PERFORM(false, "dynamite/mex_burry");
							TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_557, vLocal_563.y, -1.0f);
							TASK_SEQUENCE_CLOSE();
							TASK_CLEAR((*&Local_4 + 556)[22]);
							TASK_PRIORITY_SET((*&Local_4 + 556)[22], true);
							TASK_SEQUENCE_PERFORM((*&Local_4 + 556)[22], bLocal_571);
							TASK_SEQUENCE_RELEASE(bLocal_571, 1);
						}
					}
				}
				else if (Function_341(&bLocal_419))
				{
					if (Function_339(&bLocal_419) <= 2.0f)
					{
						Function_329(0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						Function_488(1, 1);
						STREAMING_UNLOAD_SCENE();
						STREAMING_SET_POI_LIMIT(1);
						Function_423(&bLocal_419);
					}
				}
			}
			if (!iLocal_614)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[7]))
				{
					iLocal_614 = 1;
					RESET_ACTOR_GAITS(bLocal_411, 0);
					MEMORY_PREFER_RIDING(bLocal_410, false);
					Function_258();
					Function_486(bLocal_410, (*&Local_4 + 1160)[7], 1, 1, 1);
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[7]))
			{
				Function_249(&iLocal_574, 10, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000003:
			if (Function_484((*&Local_4 + 1300)[6], 1.0f))
			{
				iLocal_648 = 4;
				return 1;
			}
			if (IS_OBJECT_VALID(bLocal_552))
			{
				if (GATEWAY_UPDATE(bLocal_552))
				{
					Function_229();
				}
			}
			if (!iLocal_615)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[0]))
				{
					iLocal_615 = 1;
					Function_483();
				}
			}
			break;
		
		case 0x00000004:
			return 0;
			break;
	}
	if (!iLocal_611)
	{
		if (iLocal_406 < 6 && !IS_ACTION_NODE_PLAYING(bLocal_410, "out02_irish/irish_leave/leave"))
		{
			iLocal_611 = 1;
			MEMORY_PREFER_RIDING(bLocal_410, false);
			bLocal_571 = TASK_SEQUENCE_OPEN();
			TASK_MOUNT(false, bLocal_411, 0, 1, 2, 2147483647);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1364, 3, 0, 0, 1, false);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_410);
			TASK_PRIORITY_SET(bLocal_410, true);
			TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_571);
			TASK_SEQUENCE_RELEASE(bLocal_571, 1);
		}
	}
	return 1;
}

void Function_483() //Position: 0x14625 / 83493
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_JonIrishMineCart", "Outlaw02_JonIrishMineCart", false, 2, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_484(bool bParam0, int iParam1) //Position: 0x14680 / 83584
{
	GET_OBJECT_POSITION(bParam0, &vLocal_557);
	return Function_485(StackVal, StackVal, vLocal_557, iParam1);
}

int Function_485(vector3 vParam0, float fParam3) //Position: 0x14699 / 83609
{
	bLocal_569 = TRAIN_GET_VELOCITY(bLocal_602);
	if (Function_497())
	{
		GET_POSITION(bLocal_603, &vLocal_557);
		bLocal_570 = VDIST(vLocal_557, vParam0);
		if (bLocal_570 < bLocal_604 || (bLocal_570 >= fParam3 && bLocal_569 >= 0,5f))
		{
			Function_380();
			return 1;
		}
		bLocal_604 = bLocal_570;
		if (bLocal_569 > 2.0f)
		{
			TRAIN_SET_TARGET_SPEED(bLocal_602, 2.0f);
		}
		else if (bLocal_569 < 5.0f)
		{
			TRAIN_SET_TARGET_SPEED(bLocal_602, 5.0f);
		}
	}
	else if (bLocal_569 < 0.0f)
	{
		TRAIN_SET_TARGET_SPEED(bLocal_602, 0.0f);
	}
	return 0;
}

void Function_486(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x14724 / 83748
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
				Function_487(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
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

void Function_487(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x1483B / 84027
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

void Function_488(bool bParam0, bool bParam1) //Position: 0x148F4 / 84212
{
	if (bParam0)
	{
		if (VMAG(*(&Global_63098 + 44)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(Global_63098))
	{
		if (!bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(Global_63098, 0);
		}
		DESTROY_OBJECT(Global_63098);
	}
	return;
}

void Function_489(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, var uParam8) //Position: 0x14940 / 84288
{
	Function_490(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	if (fParam6 >= 0.0f)
	{
		fParam6 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam3, uParam8);
	Global_63098.f_4 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, Global_63098, 0f, fParam6);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 0);
	Global_63098.f_8 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), bParam7))
	{
		PLAY_CUTSCENEOBJECT(Global_63098, bParam7, Global_63098.f_12, Global_63098.f_16, Global_63098.f_20, Global_63098.f_24, Global_63098.f_28, Global_63098.f_32, Global_63098.f_36, Global_63098.f_40);
	}
	ROTATE_VECTOR_XZ(&vParam3, 180.0f, 0);
}

void Function_490(bool bParam0) //Position: 0x14A2F / 84527
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_491(bool bParam0, float fParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0x14A40 / 84544
{
	Function_488(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	Global_63098.f_12 = uParam3;
	Global_63098.f_16 = uParam4;
	Global_63098.f_20 = uParam5;
	Global_63098.f_24 = uParam6;
	Global_63098.f_28 = uParam7;
	Global_63098.f_32 = uParam8;
	Global_63098.f_36 = uParam9;
	Global_63098.f_40 = uParam10;
	Global_63098.f_44 = uParam11;
	(&Global_63098 + 44)->f_4 = uParam12;
	(&Global_63098 + 44)->f_8 = uParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	if (bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), fParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1), fParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), fParam1);
	Global_63098.f_4 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 0);
	Global_63098.f_8 = 0;
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 0;
}

bool Function_492(bool bParam0, bool bParam1, float fParam2) //Position: 0x14B19 / 84761
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_468(bParam0);
			Function_493(bParam1);
			if (VDIST(Function_468(bParam0), Function_493(bParam1)) >= fParam2)
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

vector3 Function_493(bool bParam0) //Position: 0x14C33 / 85043
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

bool Function_494(var uParam0, bool bParam1) //Position: 0x14C9F / 85151
{
	GET_OBJECT_POSITION(bParam1, &vLocal_557);
	return Function_495(StackVal, StackVal, uParam0, vLocal_557);
}

int Function_495(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x14CB8 / 85176
{
	if (Function_497())
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_603, bParam0))
		{
			CANCEL_DEADEYE();
			SET_PLAYER_CONTROL(0, 0, 1, 1);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			TRAIN_SET_ENGINE_ENABLED(bLocal_602, 1);
			TRAIN_SET_TARGET_POS(bLocal_602, &uParam1);
			bLocal_604 = 10000.0f;
			return 1;
		}
	}
	return 0;
}

void Function_496() //Position: 0x14CFE / 85246
{
	GET_OBJECT_POSITION((*&Local_4 + 1160)[22], &vLocal_557);
	GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[22], &vLocal_563);
	bLocal_571 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &vLocal_557, 2,5f, 2);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_557, vLocal_563.y, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 556)[02]);
	TASK_PRIORITY_SET((*&Local_4 + 556)[02], true);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 556)[02], bLocal_571);
	TASK_SEQUENCE_RELEASE(bLocal_571, 1);
	GET_OBJECT_POSITION((*&Local_4 + 1160)[23], &vLocal_557);
	GET_OBJECT_ORIENTATION((*&Local_4 + 1160)[23], &vLocal_563);
	bLocal_571 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &vLocal_557, 2,5f, 2);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_557, vLocal_563.y, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 556)[12]);
	TASK_PRIORITY_SET((*&Local_4 + 556)[12], true);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 556)[12], bLocal_571);
	TASK_SEQUENCE_RELEASE(bLocal_571, 1);
	AI_SET_NAV_MATERIAL_USAGE((*&Local_4 + 556)[12], 2048, 1);
	return;
}

bool Function_497() //Position: 0x14DF1 / 85489
{
	if (Function_240())
	{
		if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_603, false) != Global_34573 || GET_ACTOR_IN_VEHICLE_SEAT(bLocal_603, true) != Global_34573)
		{
			return 1;
		}
	}
	return 0;
}

void Function_498(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x14E1A / 85530
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_499() //Position: 0x14E36 / 85558
{
	if (iLocal_406 < 5 && iLocal_406 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 616)[3]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[3]))
			{
				Function_481();
				iLocal_575 = 0;
				DESTROY_VOLUME((*&Local_4 + 616)[3]);
			}
		}
		else if (!iLocal_575)
		{
			if (Function_478())
			{
				Function_477();
				iLocal_575 = 1;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(Global_34573))
		{
			ACTOR_DISMOUNT_NOW(Global_34573);
			TASK_ACTION_PERFORM(Global_34573, "/Global/default_character_Main/ReactionProcessing/ReactionProcessing_Player/Fire/Standing");
		}
		if (!Function_514())
		{
			Function_271(106, "STAGE 04 - COMPLETE");
		}
	}
	switch (iLocal_406)
	{
		case 0x00000000:
			Function_400(0);
			if (IS_VOLUME_VALID((*&Local_4 + 616)[2]))
			{
				Function_513();
				DESTROY_VOLUME((*&Local_4 + 616)[2]);
			}
			Function_512();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			Function_394();
			bLocal_408 = Global_30628[1];
			if (iLocal_425[2] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_195(1, 0, 1);
				Function_393(Global_34573, (*&Local_4 + 1000)[0], 1, 1, 1);
				Function_271(1, "STAGE 04 - STREAMING GOAL");
			}
			else
			{
				Function_271(2, "STAGE 04 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_511() && STREAMING_IS_WORLD_LOADED()) && (Function_384(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_510();
				Function_271(2, "STAGE 04 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_474(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_350, iLocal_405))
			{
				Function_509();
				Function_271(3, "STAGE 04 - CUTSCENE GOAL");
			}
			else
			{
				if (!Function_240())
				{
					if (Function_382())
					{
						Function_381(0);
						Function_380();
						Function_350((*&Local_4 + 1160)[11]);
					}
				}
				else
				{
					Function_380();
				}
				Function_393(Global_34573, (*&Local_4 + 1000)[1], 1, 1, 1);
				Function_393(bLocal_410, (*&Local_4 + 1000)[2], 1, 1, 1);
				Function_508();
				Function_271(4, "STAGE 04 - POST-CUTSCENE GOAL");
			}
			Function_288(iLocal_405);
			Function_460(StackVal, StackVal, Function_288(iLocal_405), iLocal_405, Global_30628[1], Function_292(iLocal_405), 1);
			iLocal_407 = Function_459();
			break;
		
		case 0x00000003:
			if (Function_501())
			{
				Function_508();
				Function_271(4, "STAGE 04 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_325(1.0f);
			Function_276(1);
			Function_271(6, "STAGE 04 - OBJ_01-OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_247();
				Function_430("Outlaw02_obj04_1", 7,5f, 1, 2, 0, 0, 0);
				Function_429(1);
				Function_271(7, "STAGE 04 - OBJ_01-HELP_01");
			}
			break;
		
		case 0x00000007:
			if (Function_339(&bLocal_413) <= 2.0f)
			{
				Function_132("Outlaw02_obj04_help_1", 10.0f, 1, 0, 2, 1, 0);
				Function_271(13, "STAGE 04 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_421(&bLocal_416, Global_30658[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_429(0);
				Function_420(5);
				Function_271(14, "STAGE 04 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_421(&bLocal_416, Global_30658[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_429(1);
				Function_271(13, "STAGE 04 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_247();
				Function_430("Outlaw02_obj04_2", 7,5f, 1, 2, 0, 0, 0);
				Function_429(0);
				Function_415(0, bLocal_603, 1.0f, 4294967295);
				Function_271(16, "STAGE 04 - OBJ_02-HELP_01");
			}
			break;
		
		case 0x00000010:
			if (Function_339(&bLocal_413) <= 2.0f)
			{
				Function_132("Outlaw02_obj04_help_2", 10.0f, 1, 0, 2, 1, 0);
				Function_271(17, "STAGE 04 - OBJ_02-HELP_02");
			}
			break;
		
		case 0x00000011:
			if (Function_339(&bLocal_413) <= 10,5f)
			{
				Function_132("Outlaw02_obj04_help_3", 10.0f, 1, 0, 2, 1, 0);
				Function_271(18, "STAGE 04 - OBJ_02-HELP_03");
			}
			break;
		
		case 0x00000012:
			if (Function_339(&bLocal_413) <= 10,5f)
			{
				Function_132("Outlaw02_obj05_help", 10.0f, 1, 0, 2, 1, 0);
				Function_271(23, "STAGE 04 - OBJ_02-LOOP_PASS");
			}
			break;
		
		case 0x00000017:
			if (Function_408(&bLocal_416, 60.0f, bLocal_603, 4294967295, "Outlaw02_obj_return_minecart", "Outlaw02_too_far_minecart", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_229();
				Function_429(1);
				Function_271(24, "STAGE 04 - OBJ_02-LOOP_FAIL");
			}
			break;
		
		case 0x00000018:
			if (!Function_408(&bLocal_416, 60.0f, bLocal_603, 4294967295, "Outlaw02_obj_return_minecart", "Outlaw02_too_far_minecart", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_429(0);
				Function_415(0, bLocal_603, 1.0f, 4294967295);
				Function_271(23, "STAGE 04 - OBJ_02-LOOP_PASS");
			}
			break;
		
		case 0x0000006A:
			Function_500();
			iLocal_405 = 4;
			iLocal_425[3] = 1;
			Function_271(0, "STAGE 05 - INITIALIZE");
			break;
	}
	return;
}

void Function_500() //Position: 0x155E6 / 87526
{
	Function_237();
	Function_233();
	return;
}

bool Function_501() //Position: 0x155F2 / 87538
{
	var uVar0;
	
	Function_365(&Local_398, 1, 0);
	switch (Local_398)
	{
		case 0x000003E8:
			Function_361(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				Local_398.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(Local_398.f_16))
			{
				Function_507(Local_398.f_16, 0);
			}
			else
			{
				Local_398.f_16 = Function_504(Local_4, 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(Local_398.f_16))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_398.f_16, 1);
			}
			else
			{
				LOG_ERROR("Outlaw02_Cutscene03 - Failed to create Outlaw02_Cutscene03_cutscene");
				Local_398 = 1000;
				return 1;
			}
			Local_398 = 1001;
			break;
		
		case 0x000003E9:
			Function_351(Global_34573, 1, 1);
			Function_393(Global_34573, (*&Local_4 + 1000)[0], 1, 1, 1);
			Function_393(bLocal_410, (*&Local_4 + 1000)[2], 1, 1, 1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[2]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[2]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 588)[2], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 588)[2]);
			Local_398 = 1002;
			break;
		
		case 0x000003EA:
			Function_325(1.0f);
			Function_348();
			Function_347(3);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "out02_marston", 0);
			bLocal_550 = GET_PHYSINST_FROM_OBJECT(Local_4.f_1376);
			if (IS_PHYSINST_VALID(bLocal_550))
			{
				bLocal_551 = GET_OBJECT_ANIMATOR_ON_OBJECT(bLocal_550);
				if (!IS_OBJECT_ANIMATOR_VALID(bLocal_551))
				{
					bLocal_551 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bLocal_550, "out02_marston", "out02_marston", "out02_marston/close_crate/");
				}
				if (!IS_OBJECT_ANIMATOR_VALID(bLocal_551))
				{
					LOG_ERROR("Failed to create object animator on 'CrateGatling02x'!");
				}
			}
			else
			{
				LOG_ERROR("Failed to get physinst from 'CrateGatling02x'!");
			}
			Local_398 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_272(&Local_398 + 4);
				iLocal_651 = 15;
				iLocal_652 = 15;
				Local_398 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_503() && Function_502())
			{
				Function_272(&Local_398 + 4);
				Local_398 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_351(Global_34573, 0, 1);
				Function_381(0);
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				Function_393(Global_34573, (*&Local_4 + 1000)[1], 1, 1, 1);
				Function_393(bLocal_410, (*&Local_4 + 1000)[2], 1, 1, 1);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[2]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[2]);
				DESTROY_VOLUME((*&Local_4 + 588)[2]);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				Function_329(1, 0, 1, 0, 1, 1, 1, 1, 1, 1);
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_398.f_16))
				{
					DESTROY_OBJECT(Local_398.f_16);
				}
				Local_398 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_247();
				Function_246();
				Function_328();
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				Local_398 = 1104;
			}
			break;
	}
	return 0;
}

int Function_502() //Position: 0x15979 / 88441
{
	switch (iLocal_652)
	{
		case 0x0000000F:
			if (IS_OBJECT_ANIMATOR_READY(bLocal_551))
			{
				Function_338("out02_marston", "out02_marston/close_crate/close");
				SET_OBJECT_ANIMATOR_NODE(bLocal_551, "/global/out02_marston/close_crate/crate");
				iLocal_652 = 25;
			}
			break;
		
		case 0x00000019:
			if (!IS_ACTION_NODE_PLAYING(Global_34573, "out02_marston/close_crate/close"))
			{
				Function_328();
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				iLocal_652 = 106;
			}
			break;
		
		case 0x00000023:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_652 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_652 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_652 = 65;
			}
			break;
		
		case 0x00000041:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_652 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_652 = 85;
			}
			break;
		
		case 0x00000055:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_652 = 95;
			}
			break;
		
		case 0x0000005F:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_652 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_503() //Position: 0x15B1E / 88862
{
	switch (iLocal_651)
	{
		case 0x0000000F:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				iLocal_651 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

var Function_504(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x15B60 / 88928
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Outlaw02_Cutscene03", 1, 1);
	}
	Function_505(&bVar0);
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

void Function_505(int iParam0) //Position: 0x15BDF / 89055
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_506(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1000.0f, 0);
	return;
}

void Function_506(int iParam0) //Position: 0x15C08 / 89096
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4431,866f, 2,872099f, 3126,31f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,856409f, -0,659559f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_507(bool bParam0, bool bParam1) //Position: 0x15C6B / 89195
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

void Function_508() //Position: 0x15C80 / 89216
{
	Function_249(&iLocal_574, 6, 0, 4294967295, 4294967295);
	Function_438(3);
	Function_469();
	return;
}

void Function_509() //Position: 0x15C97 / 89239
{
	Function_249(&iLocal_574, 6, 0, 4294967295, 4294967295);
	if (!Function_240())
	{
		if (Function_382())
		{
			Function_381(1);
			Function_380();
			Function_350((*&Local_4 + 1160)[11]);
		}
	}
	else
	{
		Function_380();
	}
	return;
}

void Function_510() //Position: 0x15CCD / 89293
{
	return;
}

bool Function_511() //Position: 0x15CD3 / 89299
{
	return 1;
}

void Function_512() //Position: 0x15CDA / 89306
{
	Function_398(bLocal_410);
	Function_398(bLocal_411);
	return;
}

void Function_513() //Position: 0x15CEC / 89324
{
	Function_181();
	Local_398.f_16 = Function_504(Local_4, 0, 1, 1, 0);
	if (IS_OBJECT_VALID(Local_398.f_16))
	{
		STREAMING_SET_POI_LIMIT(2);
		SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_398.f_16, 1);
	}
	else
	{
		LOG_ERROR("Outlaw02_Cutscene03 - Failed to create Outlaw02_Cutscene03_cutscene (paused)");
	}
	return;
}

bool Function_514() //Position: 0x15D70 / 89456
{
	Function_240();
	switch (iLocal_647)
	{
		case 0x00000000:
			iLocal_647 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (Function_497())
			{
				Function_249(&iLocal_574, 10, 0, 4294967295, 4294967295);
				Function_271(15, "STAGE 04 - OBJ_02-OBJ_01");
				iLocal_647 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			if (Function_494((*&Local_4 + 700)[3], (*&Local_4 + 1300)[0]))
			{
				Function_249(&iLocal_574, 17, 0, 4294967295, 4294967295);
				iLocal_647 = 3;
				return 1;
			}
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "Vehicle/Engaged/MineCart/Riding") || IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "Vehicle/VehicleGunplay/MineCart/PistolAim/PistolMineCartRide"))
			{
				Function_249(&iLocal_574, 17, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000003:
			if (Function_484((*&Local_4 + 1300)[0], 1.0f))
			{
				iLocal_647 = 4;
				return 1;
			}
			if (IS_OBJECT_VALID(bLocal_552))
			{
				if (GATEWAY_UPDATE(bLocal_552))
				{
					Function_229();
				}
			}
			break;
		
		case 0x00000004:
			return 0;
			break;
	}
	return 1;
}

void Function_515() //Position: 0x15EBF / 89791
{
	if (iLocal_406 < 5 && iLocal_406 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 616)[2]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[2]))
			{
				Function_513();
				iLocal_575 = 0;
				DESTROY_VOLUME((*&Local_4 + 616)[2]);
			}
		}
		else if (!iLocal_575)
		{
			if (Function_511())
			{
				Function_510();
				iLocal_575 = 1;
			}
		}
		if (!Function_548())
		{
			Function_271(106, "STAGE 03 - COMPLETE");
		}
	}
	switch (iLocal_406)
	{
		case 0x00000000:
			Function_400(0);
			if (IS_VOLUME_VALID((*&Local_4 + 616)[1]))
			{
				Function_547();
				DESTROY_VOLUME((*&Local_4 + 616)[1]);
			}
			Function_546();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(30);
			Function_394();
			bLocal_408 = Global_30658[3];
			if (iLocal_425[1] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_195(1, 0, 1);
				if (Function_289(Local_350) == 0)
				{
					Function_393(Global_34573, (*&Local_4 + 980)[0], 1, 1, 1);
				}
				else
				{
					Function_393(Global_34573, (*&Local_4 + 980)[1], 1, 1, 1);
				}
				Function_393(bLocal_410, (*&Local_4 + 980)[2], 1, 1, 1);
				Function_271(1, "STAGE 03 - STREAMING GOAL");
			}
			else
			{
				Function_271(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_544() && STREAMING_IS_WORLD_LOADED()) && (Function_384(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_533();
				Function_271(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_288(iLocal_405);
			Function_460(StackVal, StackVal, Function_288(iLocal_405), iLocal_405, Global_30628[1], Function_292(iLocal_405), 1);
			iLocal_407 = Function_459();
			Function_325(1.0f);
			Function_518();
			Function_276(1);
			Function_271(6, "STAGE 03 - OBJ_01-OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_247();
				Function_430("Outlaw02_obj03_1", 7,5f, 1, 2, 0, 0, 0);
				Function_420(15);
				Function_271(13, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_421(&bLocal_416, Global_30658[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_420(5);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_271(14, "STAGE 03 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_421(&bLocal_416, Global_30658[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_420(15);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_271(13, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_247();
				Function_430("Outlaw02_obj03_2", 7,5f, 1, 2, 0, 0, 0);
				Function_228();
				Function_415(4, Global_34573, 3.0f, 4294967295);
				Function_271(23, "STAGE 03 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000017:
			if (Function_421(&bLocal_416, Global_30658[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_229();
				Function_420(5);
				Function_271(24, "STAGE 03 - OBJ_02-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000018:
			if (!Function_421(&bLocal_416, Global_30658[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_415(4, Global_34573, 3.0f, 4294967295);
				Function_271(23, "STAGE 03 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000019:
			if (Function_339(&bLocal_413) <= 3.0f)
			{
				Function_271(106, "STAGE 03 - COMPLETE");
				iLocal_646 = 15;
			}
			else if (!Function_492(Global_34573, (*&Local_4 + 1300)[4], 3.0f))
			{
				Function_271(15, "STAGE 03 - OBJ_02-OBJ_01");
			}
			break;
		
		case 0x0000006A:
			Function_516();
			Function_276(0);
			iLocal_405 = 3;
			iLocal_425[2] = 1;
			Function_271(0, "STAGE 04 - INITIALIZE");
			break;
	}
	return;
}

void Function_516() //Position: 0x16448 / 91208
{
	Function_264();
	Function_263();
	Function_262();
	Function_517();
	Function_234();
	return;
}

void Function_517() //Position: 0x1645D / 91229
{
	if (SQUAD_IS_VALID(Local_4.f_528))
	{
		Function_406(&Local_4 + 528, 0, 1);
		DESTROY_OBJECT(Local_4.f_528);
	}
	if (SQUAD_IS_VALID(Local_4.f_524))
	{
		Function_406(&Local_4 + 524, 0, 1);
		DESTROY_OBJECT(Local_4.f_524);
	}
	if (SQUAD_IS_VALID(Local_4.f_536))
	{
		Function_406(&Local_4 + 536, 0, 1);
		DESTROY_OBJECT(Local_4.f_536);
	}
	if (SQUAD_IS_VALID(Local_4.f_512))
	{
		Function_406(&Local_4 + 512, 0, 1);
		DESTROY_OBJECT(Local_4.f_512);
	}
	if (SQUAD_IS_VALID(Local_4.f_532))
	{
		Function_406(&Local_4 + 532, 0, 1);
		DESTROY_OBJECT(Local_4.f_532);
	}
	if (SQUAD_IS_VALID(Local_4.f_540))
	{
		Function_406(&Local_4 + 540, 0, 1);
		DESTROY_OBJECT(Local_4.f_540);
	}
	if (SQUAD_IS_VALID(Local_4.f_516))
	{
		Function_406(&Local_4 + 516, 0, 1);
		DESTROY_OBJECT(Local_4.f_516);
	}
	return;
}

void Function_518() //Position: 0x1652E / 91438
{
	if (Function_289(Local_350) == 0)
	{
		Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
	}
	else
	{
		Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
	}
	if (Function_382())
	{
		Function_381(1);
		Function_380();
		Function_350((*&Local_4 + 1160)[11]);
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	if (iLocal_407 < 0 || Function_289(Local_350) != 0)
	{
		Function_438(3);
	}
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	if (Function_289(Local_350) == 0)
	{
		Function_470(Local_4.f_528, 1);
		Function_470(Local_4.f_524, 1);
		Function_470(Local_4.f_536, 3);
	}
	else
	{
		Function_470(Local_4.f_536, 2);
	}
	Function_470(Local_4.f_512, 3);
	Function_470(Local_4.f_532, 3);
	Function_470(Local_4.f_540, 3);
	Function_470(Local_4.f_516, 4);
	if (Function_289(Local_350) == 0)
	{
		Function_532(Local_4.f_528, 1);
		Function_531(Local_4.f_528, 0);
		Function_532(Local_4.f_524, 1);
		Function_531(Local_4.f_524, 0);
	}
	Function_532(Local_4.f_536, 1);
	Function_531(Local_4.f_536, 0);
	Function_532(Local_4.f_512, 1);
	Function_531(Local_4.f_512, 0);
	Function_532(Local_4.f_532, 1);
	Function_531(Local_4.f_532, 0);
	Function_532(Local_4.f_540, 1);
	Function_531(Local_4.f_540, 0);
	Function_532(Local_4.f_516, 1);
	Function_531(Local_4.f_516, 0);
	if (Function_289(Local_350) == 0)
	{
		Function_528(Local_4.f_528);
		Function_528(Local_4.f_524);
	}
	Function_528(Local_4.f_536);
	Function_528(Local_4.f_512);
	Function_528(Local_4.f_532);
	Function_528(Local_4.f_540);
	Function_524(Local_4.f_516);
	Function_523(Local_4.f_516, 1);
	Function_522(Local_4.f_516, 359.0f);
	Function_520();
	Function_519(bLocal_349, 4, (*&Local_4 + 1160)[24], 1, 1, 0, 1, 3212836864);
	Function_519(bLocal_349, 4, (*&Local_4 + 1160)[25], 1, 1, 0, 1, 3212836864);
	Function_519(bLocal_349, 4, (*&Local_4 + 1160)[26], 1, 1, 0, 1, 3212836864);
	Function_519(bLocal_349, 4, (*&Local_4 + 1160)[27], 1, 1, 0, 1, 3212836864);
	return;
}

var Function_519(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, int iParam7) //Position: 0x1672D / 91949
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	GET_OBJECT_POSITION(bParam2, &uVar4);
	bVar0 = CREATE_WEAPON_PICKUP(bParam0, iParam1, &uVar4, 0.0f, fParam5, iParam6, iParam7);
	GET_OBJECT_POSITION(bParam2, &vVar7);
	GET_OBJECT_ORIENTATION(bParam2, &vVar10);
	SET_OBJECT_POSITION(bVar0, vVar7);
	SET_OBJECT_ORIENTATION(bVar0, vVar10);
	if (bParam3)
	{
		vVar1 = { 0.0f, -0,001f, 0.0f };
		ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar0));
		SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bVar0), &vVar1);
	}
	DECOR_SET_INT(bVar0, "NumClips", bParam4);
	return bVar0;
}

void Function_520() //Position: 0x167AB / 92075
{
	if (Function_289(Local_350) == 0)
	{
		Local_620[05].f_4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_528, false);
		Local_620[05].f_8 = (*&Local_4 + 852)[0];
		Local_620[05].f_12 = (*&Local_4 + 1132)[0];
		Local_620[05].f_16 = "";
		Local_620[15].f_4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_524, false);
		Local_620[15].f_8 = (*&Local_4 + 852)[1];
		Local_620[15].f_12 = (*&Local_4 + 1132)[1];
		Local_620[15].f_16 = Local_4.f_1332;
		if (IS_ACTOR_ALIVE(StackVal))
		{
			Function_521(1, 0, 1);
		}
		Local_620[25].f_4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, false);
		Local_620[25].f_8 = (*&Local_4 + 852)[2];
		Local_620[25].f_12 = (*&Local_4 + 1132)[2];
		Local_620[25].f_16 = Local_4.f_1336;
		if (IS_ACTOR_ALIVE(StackVal))
		{
			Function_521(2, 1, 1);
		}
	}
	Local_620[35].f_4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_512, false);
	Local_620[35].f_8 = (*&Local_4 + 852)[3];
	Local_620[35].f_12 = (*&Local_4 + 1132)[3];
	Local_620[35].f_16 = Local_4.f_1340;
	if (IS_ACTOR_ALIVE(StackVal))
	{
		Function_521(3, 0, 1);
	}
	Local_620[45].f_4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_532, false);
	Local_620[45].f_8 = (*&Local_4 + 852)[4];
	Local_620[45].f_12 = (*&Local_4 + 1132)[4];
	Local_620[45].f_16 = Local_4.f_1344;
	if (IS_ACTOR_ALIVE(StackVal))
	{
		Function_521(4, 0, 1);
	}
	return;
}

void Function_521(int iParam0, bool bParam1, bool bParam2) //Position: 0x1693E / 92478
{
	if (bParam1)
	{
		Function_467(&Local_620[iParam05] + 4, Global_34573, 1);
	}
	GET_OBJECT_POSITION(Local_620[iParam05].f_12, &vLocal_557);
	GET_OBJECT_ORIENTATION(Local_620[iParam05].f_12, &vLocal_563);
	if (bParam2)
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, vLocal_557, vLocal_563.y, 1, true, 1);
	}
	bLocal_571 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_NONSTOP(false, &vLocal_557, true, 3212836864);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_557, vLocal_563.y, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(StackVal);
	TASK_PRIORITY_SET(StackVal, true);
	TASK_SEQUENCE_PERFORM(StackVal, bLocal_571);
	TASK_SEQUENCE_RELEASE(bLocal_571, 1);
	return;
}

void Function_522(bool bParam0, bool bParam1) //Position: 0x169E9 / 92649
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
			SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_523(bool bParam0, bool bParam1) //Position: 0x16A28 / 92712
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				SET_ACTOR_VISION_XRAY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_524(bool bParam0) //Position: 0x16A71 / 92785
{
	Function_527(bParam0);
	SQUAD_GOALS_CLEAR(bParam0);
	Function_525(bParam0, -1.0f, 1, 0x40c00000, 1);
	return;
}

void Function_525(bool bParam0, bool bParam1, bool bParam2, float fParam3, int iParam4) //Position: 0x16A8E / 92814
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_526(bVar1, &uVar3);
			bVar2 = FIND_NEAREST_COVER_LOCATION(&uVar3, 3.0f, Function_337(bVar1), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(bVar2))
			{
				TASK_PRIORITY_SET(bVar1, bParam2);
				TASK_HIDE_AT_COVER(bVar1, bVar2, bParam1, fParam3, iParam4);
			}
			else
			{
				TASK_PRIORITY_SET(bVar1, bParam2);
				TASK_CROUCH(bVar1, bParam1);
			}
		}
		bVar0++;
	}
}

void Function_526(bool bParam0, bool bParam1) //Position: 0x16B15 / 92949
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_527(bool bParam0) //Position: 0x16B22 / 92962
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

void Function_528(bool bParam0) //Position: 0x16B54 / 93012
{
	Function_527(bParam0);
	SQUAD_GOALS_CLEAR(bParam0);
	Function_530(bParam0, 1);
	Function_529(bParam0, -1.0f);
	return;
}

void Function_529(bool bParam0, bool bParam1) //Position: 0x16B70 / 93040
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_526(bVar1, &bVar3);
			bVar2 = FIND_NEAREST_COVER_LOCATION(&bVar3, 3.0f, Function_337(bVar1), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(bVar2))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(bVar1, bVar2, bParam1, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_530(bool bParam0, bool bParam1) //Position: 0x16BE6 / 93158
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_531(bool bParam0, int iParam1) //Position: 0x16C21 / 93217
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_532(bool bParam0, int iParam1) //Position: 0x16C58 / 93272
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ACTOR_DRAW_ANY_WEAPON(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_533() //Position: 0x16C9F / 93343
{
	Function_534();
	return;
}

void Function_534() //Position: 0x16CA8 / 93352
{
	bool bVar0;
	
	if (Function_289(Local_350) == 0)
	{
		Function_543();
		Function_542();
	}
	Function_541();
	Function_540();
	Function_539();
	Function_538();
	Function_537();
	bVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_536);
	bVar0 = (bVar0 || 2048);
	if (Function_289(Local_350) == 0)
	{
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_528, bVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_524, bVar0);
	}
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_536, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_512, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_532, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_540, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_516, bVar0);
	if (Function_289(Local_350) == 0)
	{
		Function_536(Local_4.f_528, 2, 0);
		Function_536(Local_4.f_528, 3, 0);
		Function_535(Local_4.f_528, 20, 1.0f);
		Function_535(Local_4.f_528, 14, 2.0f);
		Function_535(Local_4.f_528, 15, 1.0f);
		Function_536(Local_4.f_524, 2, 0);
		Function_536(Local_4.f_524, 3, 0);
		Function_535(Local_4.f_524, 20, 1.0f);
		Function_535(Local_4.f_524, 14, 2.0f);
		Function_535(Local_4.f_524, 15, 1.0f);
	}
	Function_536(Local_4.f_536, 2, 0);
	Function_536(Local_4.f_536, 3, 0);
	Function_535(Local_4.f_536, 20, 1.0f);
	Function_535(Local_4.f_536, 14, 2.0f);
	Function_535(Local_4.f_536, 15, 1.0f);
	Function_536(Local_4.f_512, 2, 0);
	Function_536(Local_4.f_512, 3, 0);
	Function_535(Local_4.f_512, 20, 1.0f);
	Function_535(Local_4.f_512, 14, 2.0f);
	Function_535(Local_4.f_512, 15, 1.0f);
	Function_536(Local_4.f_532, 2, 0);
	Function_536(Local_4.f_532, 3, 0);
	Function_535(Local_4.f_532, 20, 1.0f);
	Function_535(Local_4.f_532, 14, 2.0f);
	Function_535(Local_4.f_532, 15, 1.0f);
	Function_536(Local_4.f_540, 2, 0);
	Function_536(Local_4.f_540, 3, 0);
	Function_535(Local_4.f_540, 20, 1.0f);
	Function_535(Local_4.f_540, 14, 2.0f);
	Function_535(Local_4.f_540, 15, 1.0f);
	Function_536(Local_4.f_516, 2, 0);
	Function_536(Local_4.f_516, 3, 0);
	Function_535(Local_4.f_516, 20, 1.0f);
	Function_535(Local_4.f_516, 14, 2.0f);
	Function_535(Local_4.f_516, 15, 1.0f);
	return;
}

void Function_535(bool bParam0, int iParam1, bool bParam2) //Position: 0x16EAC / 93868
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_536(bool bParam0, int iParam1, bool bParam2) //Position: 0x16EF6 / 93942
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_537() //Position: 0x16F40 / 94016
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_516 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMineCore"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineCore01", 508, -4431,644f, 0,405f, 3121,539f, 0.0f, 1,919f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_516);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineCore02", 506, -4430,684f, 0,493f, 3134,359f, 0.0f, 10,93f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_516);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineCore03", 514, -4433,008f, 0,5413505f, 3129,284f, 0.0f, 15,22374f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_516);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineCore04", 509, -4431,299f, 0,297f, 3113,729f, 0.0f, 229,536f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_516);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	return;
}

void Function_538() //Position: 0x170DB / 94427
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_540 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMineStorage"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineStorage01", 513, -4407,786f, 2,360869f, 3101,635f, 0.0f, 53.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_540);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineStorage02", 515, -4408,523f, 2,345f, 3107,874f, 0.0f, 5,109f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_540);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	return;
}

void Function_539() //Position: 0x171C7 / 94663
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_532 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMineUpperBack"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineUpperBack01", 506, -4448,678f, 5,520928f, 3102,264f, 0.0f, 90,23727f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_532);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineUpperBack02", 512, -4432,271f, 3,593189f, 3105,224f, 0.0f, 104,9251f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_532);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineUpperBack03", 514, -4427,064f, 3,607f, 3101,404f, 0.0f, 129,722f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_532);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	return;
}

void Function_540() //Position: 0x1731A / 95002
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_512 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMineBackLeftFork"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineBackLeftFork01", 505, -4471,834f, 4,543998f, 3117,979f, 0.0f, 118,2564f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_512);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineBackLeftFork02", 507, -4467,98f, 4,621925f, 3119,827f, 0.0f, 105,3092f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_512);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	return;
}

void Function_541() //Position: 0x17415 / 95253
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_536 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMineShaftRoom"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineShaftRoom01", 510, -4477,285f, 1,620933f, 3151,326f, 0.0f, -31,91767f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_536);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineShaftRoom02", 511, -4482,028f, 2,534517f, 3130,835f, 0.0f, 213,0261f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_536);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	return;
}

void Function_542() //Position: 0x17507 / 95495
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_524 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMineLeftFork"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineLeftFork01", 513, -4454,759f, 2,548524f, 3146,653f, 0.0f, 253,961f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_524);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	return;
}

void Function_543() //Position: 0x17596 / 95638
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_528 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMineMainFork"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineMainFork01", 508, -4426,696f, 6,701437f, 3172,029f, 0.0f, 211,1524f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_528);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineMainFork02", 509, -4437,501f, 4,779f, 3168,31f, 0.0f, 236,323f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_528);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	return;
}

bool Function_544() //Position: 0x17685 / 95877
{
	if (Function_545())
	{
		return 1;
	}
	return 0;
}

bool Function_545() //Position: 0x17694 / 95892
{
	Function_392(&Local_4 + 232, 505, 2, 0);
	Function_392(&Local_4 + 232, 507, 2, 0);
	Function_392(&Local_4 + 232, 508, 2, 0);
	Function_392(&Local_4 + 232, 506, 2, 0);
	Function_392(&Local_4 + 232, 514, 2, 0);
	Function_392(&Local_4 + 232, 509, 2, 0);
	Function_392(&Local_4 + 232, 513, 2, 0);
	Function_392(&Local_4 + 232, 512, 2, 0);
	Function_392(&Local_4 + 232, 510, 2, 0);
	Function_392(&Local_4 + 232, 511, 2, 0);
	Function_392(&Local_4 + 232, 515, 2, 0);
	if (Function_387(&Local_4 + 232))
	{
		return 1;
	}
	return 0;
}

void Function_546() //Position: 0x17736 / 96054
{
	Function_398(bLocal_410);
	Function_398(bLocal_411);
	return;
}

void Function_547() //Position: 0x17748 / 96072
{
	Function_545();
	Function_182();
	return;
}

bool Function_548() //Position: 0x17755 / 96085
{
	Function_560();
	switch (iLocal_646)
	{
		case 0x00000000:
			iLocal_646 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (Function_289(Local_350) == 0)
			{
				Function_558(Local_4.f_528, (*&Local_4 + 772)[5], 1);
				iLocal_646 = 2;
				return 1;
			}
			Function_557();
			Function_556();
			Function_558(Local_4.f_536, (*&Local_4 + 772)[0], 1);
			iLocal_646 = 9;
			return 1;
			break;
		
		case 0x00000002:
			if (Function_554(Global_34573, Local_4.f_524, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[6]))
			{
				Function_553(Local_4.f_528, Local_4.f_524);
				Function_558(Local_4.f_524, (*&Local_4 + 772)[6], 1);
				iLocal_646 = 3;
				return 1;
			}
			Function_551(0);
			Function_551(1);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_528) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_550(Local_4.f_528, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
			}
			if (SQUAD_IS_VALID(Local_4.f_520))
			{
				if (Function_550(Local_4.f_520, 0x3f800000, 0x42960000, 1, 1) || !IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[5]))
				{
					Function_419(Local_4.f_520, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
				}
				else
				{
					Function_418(Local_4.f_520);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_554(Global_34573, Local_4.f_536, 1, 0, 0, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[7]))
			{
				Function_557();
				Function_553(Local_4.f_524, Local_4.f_536);
				Function_558(Local_4.f_536, (*&Local_4 + 772)[7], 1);
				iLocal_646 = 4;
				return 1;
			}
			Function_551(1);
			Function_551(2);
			if (Function_550(Local_4.f_536, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_419(Local_4.f_536, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_524) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_550(Local_4.f_524, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
			}
			if (SQUAD_IS_VALID(Local_4.f_520))
			{
				if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[5]))
				{
					Function_419(Local_4.f_520, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
				}
				else
				{
					Function_418(Local_4.f_520);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_554(Global_34573, Local_4.f_512, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[8]))
			{
				Function_553(Local_4.f_536, Local_4.f_512);
				Function_558(Local_4.f_512, (*&Local_4 + 772)[8], 1);
				iLocal_646 = 5;
				return 1;
			}
			Function_551(2);
			Function_551(3);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_536) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000005:
			if (Function_554(Global_34573, Local_4.f_516, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[11]))
			{
				Function_249(&iLocal_574, 35, 0, 4294967295, 4294967295);
				Function_528(Local_4.f_516);
				Function_553(Local_4.f_512, Local_4.f_516);
				Function_553(Local_4.f_532, Local_4.f_516);
				Function_553(Local_4.f_540, Local_4.f_516);
				Function_558(Local_4.f_516, (*&Local_4 + 772)[11], 1);
				iLocal_646 = 8;
				return 1;
			}
			if (Function_554(Global_34573, Local_4.f_532, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[9]))
			{
				Function_553(Local_4.f_512, Local_4.f_532);
				Function_558(Local_4.f_532, (*&Local_4 + 772)[9], 1);
				iLocal_646 = 6;
				return 1;
			}
			Function_551(3);
			Function_551(4);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_512) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_550(Local_4.f_512, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
			}
			if (Function_550(Local_4.f_516, 1.0f, 20.0f, 1, 1))
			{
				Function_419(Local_4.f_516, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000006:
			if (Function_554(Global_34573, Local_4.f_516, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[11]))
			{
				Function_249(&iLocal_574, 35, 0, 4294967295, 4294967295);
				Function_528(Local_4.f_516);
				Function_553(Local_4.f_532, Local_4.f_516);
				Function_553(Local_4.f_540, Local_4.f_516);
				Function_558(Local_4.f_516, (*&Local_4 + 772)[11], 1);
				iLocal_646 = 8;
				return 1;
			}
			if (Function_554(Global_34573, Local_4.f_540, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[10]))
			{
				Function_553(Local_4.f_532, Local_4.f_540);
				Function_558(Local_4.f_540, (*&Local_4 + 772)[10], 1);
				iLocal_646 = 7;
				return 1;
			}
			Function_551(4);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_532) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_550(Local_4.f_532, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
			}
			if (Function_550(Local_4.f_516, 1.0f, 20.0f, 1, 1))
			{
				Function_419(Local_4.f_516, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000007:
			if (Function_554(Global_34573, Local_4.f_516, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[11]))
			{
				Function_249(&iLocal_574, 35, 0, 4294967295, 4294967295);
				Function_528(Local_4.f_516);
				Function_553(Local_4.f_540, Local_4.f_516);
				Function_558(Local_4.f_516, (*&Local_4 + 772)[11], 1);
				iLocal_646 = 8;
				return 1;
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_540) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_550(Local_4.f_540, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
			}
			if (Function_550(Local_4.f_516, 1.0f, 20.0f, 1, 1))
			{
				Function_419(Local_4.f_516, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000008:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_516) == 0)
			{
				Function_249(&iLocal_574, 6, 0, 4294967295, 4294967295);
				AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (!Function_492(Global_34573, (*&Local_4 + 1300)[4], 3.0f))
				{
					Function_271(15, "STAGE 03 - OBJ_02-OBJ_01");
				}
				else
				{
					Function_271(25, "STAGE 03 - OBJ_03-OBJ_01");
				}
				iLocal_646 = 14;
				return 1;
			}
			Function_549();
			break;
		
		case 0x00000009:
			if (Function_554(Global_34573, Local_4.f_512, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[1]))
			{
				Function_553(Local_4.f_536, Local_4.f_512);
				Function_558(Local_4.f_512, (*&Local_4 + 772)[1], 1);
				iLocal_646 = 10;
				return 1;
			}
			Function_551(3);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_536) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x0000000A:
			if (Function_554(Global_34573, Local_4.f_516, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[4]))
			{
				Function_249(&iLocal_574, 35, 0, 4294967295, 4294967295);
				Function_528(Local_4.f_516);
				Function_553(Local_4.f_512, Local_4.f_516);
				Function_553(Local_4.f_532, Local_4.f_516);
				Function_553(Local_4.f_540, Local_4.f_516);
				Function_558(Local_4.f_516, (*&Local_4 + 772)[4], 1);
				iLocal_646 = 13;
				return 1;
			}
			if (Function_554(Global_34573, Local_4.f_532, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[2]))
			{
				Function_553(Local_4.f_512, Local_4.f_532);
				Function_558(Local_4.f_532, (*&Local_4 + 772)[2], 1);
				iLocal_646 = 11;
				return 1;
			}
			Function_551(3);
			Function_551(4);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_512) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_550(Local_4.f_512, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
			}
			if (Function_550(Local_4.f_516, 1.0f, 20.0f, 1, 1))
			{
				Function_419(Local_4.f_516, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x0000000B:
			if (Function_554(Global_34573, Local_4.f_516, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[4]))
			{
				Function_249(&iLocal_574, 35, 0, 4294967295, 4294967295);
				Function_528(Local_4.f_516);
				Function_553(Local_4.f_532, Local_4.f_516);
				Function_553(Local_4.f_540, Local_4.f_516);
				Function_558(Local_4.f_516, (*&Local_4 + 772)[4], 1);
				iLocal_646 = 13;
				return 1;
			}
			if (Function_554(Global_34573, Local_4.f_540, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[3]))
			{
				Function_553(Local_4.f_532, Local_4.f_540);
				Function_558(Local_4.f_540, (*&Local_4 + 772)[3], 1);
				iLocal_646 = 12;
				return 1;
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_532) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_550(Local_4.f_532, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
			}
			if (Function_550(Local_4.f_516, 1.0f, 20.0f, 1, 1))
			{
				Function_419(Local_4.f_516, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x0000000C:
			if (Function_554(Global_34573, Local_4.f_516, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[4]))
			{
				Function_249(&iLocal_574, 35, 0, 4294967295, 4294967295);
				Function_528(Local_4.f_516);
				Function_553(Local_4.f_540, Local_4.f_516);
				Function_558(Local_4.f_516, (*&Local_4 + 772)[4], 1);
				iLocal_646 = 13;
				return 1;
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_540) == 0)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_550(Local_4.f_540, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
			}
			if (Function_550(Local_4.f_516, 1.0f, 20.0f, 1, 1))
			{
				Function_419(Local_4.f_516, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x0000000D:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_516) == 0)
			{
				Function_249(&iLocal_574, 6, 0, 4294967295, 4294967295);
				AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (!Function_492(Global_34573, (*&Local_4 + 1300)[4], 3.0f))
				{
					Function_271(15, "STAGE 03 - OBJ_02-OBJ_01");
				}
				else
				{
					Function_271(25, "STAGE 03 - OBJ_03-OBJ_01");
				}
				iLocal_646 = 14;
				return 1;
			}
			Function_549();
			break;
		
		case 0x0000000E:
			if (IS_OBJECT_VALID(bLocal_552))
			{
				if (GATEWAY_UPDATE(bLocal_552))
				{
					Function_229();
					iLocal_646 = 15;
					return 1;
				}
			}
			break;
		
		case 0x0000000F:
			return 0;
			break;
	}
	return 1;
}

void Function_549() //Position: 0x18246 / 98886
{
	if (SQUAD_IS_VALID(Local_4.f_516))
	{
		bLocal_571 = false;
		while (bLocal_571 <= SQUAD_GET_SIZE(Local_4.f_516))
		{
			bLocal_555 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_516, bLocal_571);
			if (IS_ACTOR_VALID(bLocal_555))
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_555, 60.0f))
				{
					SQUAD_LEAVE(bLocal_555);
					RELEASE_ACTOR(bLocal_555);
				}
				else
				{
					bLocal_571++;
				}
			}
			else
			{
				bLocal_571++;
			}
		}
	}
	else
	{
		LOG_ERROR("MinerMineCoreSquad invalid! This shouldn't be happening!");
	}
	return;
}

bool Function_550(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x182F8 / 99064
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_407(bVar1, iParam1, iParam2, iParam3, iParam4, 0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_551(bool bParam0) //Position: 0x1833D / 99133
{
	switch (bParam0)
	{
		case 0x00000000:
			if (!Local_620[bParam05])
			{
				if (IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
				{
					Local_620[bParam05] = 1;
					if (IS_ACTOR_ALIVE(StackVal))
					{
						Function_521(bParam0, 1, 0);
					}
				}
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			if (!Local_620[bParam05])
			{
				if (IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
				{
					Local_620[bParam05] = 1;
					if (IS_ACTOR_ALIVE(StackVal))
					{
						Function_552(bParam0, 1);
					}
				}
			}
			break;
	}
	return;
}

void Function_552(int iParam0, bool bParam1) //Position: 0x183E3 / 99299
{
	if (bParam1)
	{
		Function_467(&Local_620[iParam05] + 4, Global_34573, 1);
	}
	TASK_CLEAR(StackVal);
	TASK_PRIORITY_SET(StackVal, true);
	TASK_SHOOT_ENEMIES_FROM_COVER(StackVal, GET_COVER_LOCATION_FROM_OBJECT(Local_620[iParam05].f_16), -1.0f, 1086324736);
	return;
}

void Function_553(bool bParam0, bool bParam1) //Position: 0x18435 / 99381
{
	Function_527(bParam0);
	Function_530(bParam0, 1);
	SQUADS_MERGE(bParam0, bParam1);
	return;
}

int Function_554(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1844D / 99405
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
			if (Function_555(bParam0, bVar1, bParam2, bParam3, bParam4, bParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_555(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x184AD / 99501
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

void Function_556() //Position: 0x1859A / 99738
{
	if (SQUAD_IS_VALID(Local_4.f_528))
	{
		Function_406(&Local_4 + 528, 0, 1);
		DESTROY_OBJECT(Local_4.f_528);
	}
	if (SQUAD_IS_VALID(Local_4.f_524))
	{
		Function_406(&Local_4 + 524, 0, 1);
		DESTROY_OBJECT(Local_4.f_524);
	}
	return;
}

void Function_557() //Position: 0x185DA / 99802
{
	if (SQUAD_IS_VALID(Local_4.f_548))
	{
		Function_406(&Local_4 + 548, 0, 1);
		DESTROY_OBJECT(Local_4.f_548);
	}
	if (SQUAD_IS_VALID(Local_4.f_552))
	{
		Function_406(&Local_4 + 552, 0, 1);
		DESTROY_OBJECT(Local_4.f_552);
	}
	if (SQUAD_IS_VALID(Local_4.f_544))
	{
		Function_406(&Local_4 + 544, 0, 1);
		DESTROY_OBJECT(Local_4.f_544);
	}
	if (SQUAD_IS_VALID(Local_4.f_520))
	{
		Function_406(&Local_4 + 520, 0, 1);
		DESTROY_OBJECT(Local_4.f_520);
	}
	if (SQUAD_IS_VALID(Local_4.f_508))
	{
		Function_406(&Local_4 + 508, 0, 1);
		DESTROY_OBJECT(Local_4.f_508);
	}
	if (SQUAD_IS_VALID(Local_4.f_504))
	{
		Function_406(&Local_4 + 504, 0, 1);
		DESTROY_OBJECT(Local_4.f_504);
	}
	return;
}

void Function_558(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1868E / 99982
{
	if (bParam2)
	{
		Function_419(bParam0, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
	}
	SQUAD_SET_FACTION(bParam0, 19);
	Function_559(bParam0, Global_34573, 1);
	SQUAD_GOALS_CLEAR(bParam0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bParam0, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, 1, bParam1, 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, 2, bParam1, 2, 1);
	return;
}

void Function_559(bool bParam0, bool bParam1, bool bParam2) //Position: 0x186DE / 100062
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_467(&bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_560() //Position: 0x18723 / 100131
{
	if (SQUAD_IS_VALID(bLocal_599))
	{
		bLocal_571 = false;
		while (bLocal_571 <= SQUAD_GET_SIZE(bLocal_599))
		{
			bLocal_555 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_599, bLocal_571);
			if (IS_ACTOR_VALID(bLocal_555))
			{
				if (!Function_407(bLocal_555, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					SQUAD_LEAVE(bLocal_555);
					DESTROY_ACTOR(bLocal_555);
				}
				else
				{
					bLocal_571++;
				}
			}
			else
			{
				bLocal_571++;
			}
		}
	}
	return;
}

void Function_561() //Position: 0x18793 / 100243
{
	if (iLocal_406 < 5 && iLocal_406 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 616)[1]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[1]))
			{
				Function_547();
				iLocal_575 = 0;
				DESTROY_VOLUME((*&Local_4 + 616)[1]);
			}
		}
		else if (!iLocal_575)
		{
			if (Function_544())
			{
				Function_533();
				iLocal_575 = 1;
			}
		}
		if (!Function_603())
		{
			Function_271(106, "STAGE 02 - COMPLETE");
		}
	}
	switch (iLocal_406)
	{
		case 0x00000000:
			Function_400(0);
			if (IS_VOLUME_VALID((*&Local_4 + 616)[0]))
			{
				Function_602();
				DESTROY_VOLUME((*&Local_4 + 616)[0]);
			}
			Function_601();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(30);
			Function_394();
			bLocal_408 = Global_30628[1];
			if (iLocal_425[0] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_277(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_195(1, 0, 1);
				Function_393(Global_34573, (*&Local_4 + 908)[0], 1, 1, 1);
				Function_271(1, "STAGE 02 - STREAMING GOAL");
			}
			else
			{
				Function_271(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_599() && STREAMING_IS_WORLD_LOADED()) && (Function_384(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_584();
				Function_271(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_474(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_350, iLocal_405))
			{
				Function_583();
				Function_271(3, "STAGE 02 - CUTSCENE GOAL");
			}
			else
			{
				iLocal_577 = 1;
				Function_393(Global_34573, (*&Local_4 + 908)[1], 1, 1, 1);
				Function_393(bLocal_410, (*&Local_4 + 908)[4], 1, 1, 1);
				Function_393(bLocal_411, (*&Local_4 + 908)[6], 1, 1, 1);
				Function_393(bLocal_412, (*&Local_4 + 908)[8], 1, 1, 1);
				Function_486((*&Local_4 + 472)[02], (*&Local_4 + 908)[10], 1, 1, 1);
				Function_486((*&Local_4 + 472)[12], (*&Local_4 + 908)[13], 1, 1, 1);
				Function_581();
				Function_271(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			Function_288(iLocal_405);
			Function_460(StackVal, StackVal, Function_288(iLocal_405), iLocal_405, Global_30628[1], Function_292(iLocal_405), 0);
			iLocal_407 = Function_459();
			break;
		
		case 0x00000003:
			if (Function_567())
			{
				Function_581();
				Function_271(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_325(1.0f);
			if (iLocal_577)
			{
				Function_566((3.0f + 1.0f));
			}
			Function_276(1);
			Function_271(6, "STAGE 02 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_247();
				Function_565();
				Function_271(7, "STAGE 02 - OBJ_01-HELP_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_132("Outlaw02_obj02_help", 10.0f, 1, 0, 2, 1, 0);
				Function_271(8, "STAGE 02 - OBJ_01-WAIT_01");
			}
			break;
		
		case 0x00000008:
			if (Function_339(&bLocal_413) <= 10,5f)
			{
				Function_271(10, "STAGE 02 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000009:
			if (Function_339(&bLocal_413) <= 2.0f)
			{
				Function_271(10, "STAGE 02 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x0000000A:
			Function_430("Outlaw02_obj02", 7,5f, 1, 2, 0, 0, 0);
			if (iLocal_619 == 7 && iLocal_619 == 8)
			{
				Function_420(9);
			}
			Function_271(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			break;
		
		case 0x0000000D:
			if (Function_564(&bLocal_416, (*&Local_4 + 700)[5], (*&Local_4 + 700)[6], "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_420(5);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_271(14, "STAGE 02 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_564(&bLocal_416, (*&Local_4 + 700)[5], (*&Local_4 + 700)[6], "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_432, 1, 0, 0, 330, 1))
			{
				Function_420(9);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_271(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			Function_562();
			iLocal_405 = 2;
			iLocal_425[1] = 1;
			Function_271(0, "STAGE 03 - INITIALIZE");
			break;
	}
	return;
}

void Function_562() //Position: 0x18D32 / 101682
{
	Function_265();
	Function_563();
	Function_235();
	Function_228();
	return;
}

void Function_563() //Position: 0x18D44 / 101700
{
	bLocal_571 = false;
	while (bLocal_571 <= 2)
	{
		bLocal_555 = (*&Local_4 + 472)[bLocal_5712];
		if (IS_ACTOR_VALID(bLocal_555))
		{
			bLocal_556 = GET_MOUNT(bLocal_555);
			if (Function_407(bLocal_555, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				RELEASE_ACTOR(bLocal_555);
			}
			else
			{
				DESTROY_ACTOR(bLocal_555);
			}
			if (IS_ACTOR_VALID(bLocal_556))
			{
				if (Function_407(bLocal_556, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					RELEASE_ACTOR(bLocal_556);
				}
				else
				{
					DESTROY_ACTOR(bLocal_556);
				}
			}
		}
		bLocal_571++;
	}
	return;
}

bool Function_564(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x18DD2 / 101842
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_VOLUME_VALID(bParam1) || !IS_VOLUME_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		Function_282(bParam4);
		*iParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
	{
		if (!Function_414(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_430(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_413(64);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_412(bParam7, 0, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_412(bParam8, 0, 4294967295, 0, bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam1, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_414(64))
	{
		Function_411(64);
		if (!Function_410())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_409();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam1));
				DECOR_REMOVE(bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_412(bParam7, 1, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_412(bParam8, 1, 4294967295, 0, bParam1);
			}
		}
	}
	return 0;
}

void Function_565() //Position: 0x18F46 / 102214
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw02_MinerApproaches", "Outlaw02_MinerApproaches", false, 1, 1, 0, 1);
		Function_344(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566(int iParam0) //Position: 0x18F9F / 102303
{
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, iParam0, 0);
	return;
}

bool Function_567() //Position: 0x18FB5 / 102325
{
	var uVar0;
	
	Function_365(&Local_398, 1, 0);
	switch (Local_398)
	{
		case 0x000003E8:
			Function_361(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			iLocal_577 = 0;
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				Local_398.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(Local_398.f_16))
			{
				Function_580(Local_398.f_16, 0);
			}
			else
			{
				Local_398.f_16 = Function_573(Local_4, 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(Local_398.f_16))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_398.f_16, 1);
			}
			else
			{
				LOG_ERROR("Outlaw02_Cutscene02 - Failed to create Outlaw02_Cutscene02_cutscene");
				Local_398 = 1000;
				return 1;
			}
			Local_398 = 1001;
			break;
		
		case 0x000003E9:
			Function_351(Global_34573, 1, 1);
			Function_351(bLocal_410, 1, 0);
			Function_351(bLocal_411, 1, 0);
			Function_351(bLocal_412, 1, 0);
			TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
			Function_572();
			Function_571(1);
			Function_486(Global_34573, (*&Local_4 + 908)[0], 1, 1, 1);
			Function_486(bLocal_410, (*&Local_4 + 908)[3], 1, 1, 1);
			Function_486((*&Local_4 + 472)[02], (*&Local_4 + 908)[9], 1, 1, 1);
			Function_486((*&Local_4 + 472)[12], (*&Local_4 + 908)[12], 1, 1, 1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[1]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[1]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 588)[1], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 588)[1]);
			Local_398 = 1002;
			break;
		
		case 0x000003EA:
			Function_325(1.0f);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "out02_marston", 0);
			Local_398 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_272(&Local_398 + 4);
				iLocal_649 = 15;
				iLocal_650 = 15;
				Local_398 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_569() && Function_568())
			{
				Function_272(&Local_398 + 4);
				Local_398 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_351(Global_34573, 0, 1);
				Function_351(bLocal_410, 0, 1);
				Function_351(bLocal_411, 0, 1);
				Function_351(bLocal_412, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				TASK_CLEAR(bLocal_411);
				TASK_PRIORITY_SET(bLocal_411, true);
				TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
				TASK_CLEAR(bLocal_412);
				TASK_PRIORITY_SET(bLocal_412, true);
				TASK_STAND_STILL(bLocal_412, -1.0f, 0, 0);
				Function_393(bLocal_410, (*&Local_4 + 908)[4], 1, 1, 1);
				Function_393(bLocal_411, (*&Local_4 + 908)[6], 1, 1, 1);
				Function_393(bLocal_412, (*&Local_4 + 908)[8], 1, 1, 1);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[1]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 588)[1]);
				DESTROY_VOLUME((*&Local_4 + 588)[1]);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				if (iLocal_577)
				{
					Function_329(1, 0, 1, 0, 1, 1, 1, 1, 1, 1);
				}
				else
				{
					Function_329(1, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				}
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_398.f_16))
				{
					DESTROY_OBJECT(Local_398.f_16);
				}
				Local_398 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				iLocal_577 = 1;
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_247();
				Function_246();
				TASK_CLEAR((*&Local_4 + 472)[02]);
				TASK_PRIORITY_SET((*&Local_4 + 472)[02], true);
				TASK_STAND_STILL((*&Local_4 + 472)[02], -1.0f, 0, 0);
				TASK_CLEAR((*&Local_4 + 472)[12]);
				TASK_PRIORITY_SET((*&Local_4 + 472)[12], true);
				TASK_STAND_STILL((*&Local_4 + 472)[12], -1.0f, 0, 0);
				Function_393(Global_34573, (*&Local_4 + 908)[1], 1, 1, 1);
				Function_486((*&Local_4 + 472)[02], (*&Local_4 + 908)[10], 1, 1, 1);
				Function_486((*&Local_4 + 472)[12], (*&Local_4 + 908)[13], 1, 1, 1);
				Local_398 = 1104;
			}
			break;
	}
	return 0;
}

int Function_568() //Position: 0x19397 / 103319
{
	switch (iLocal_650)
	{
		case 0x0000000F:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				iLocal_650 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_339(&Local_398 + 4) < 1.0f)
			{
				bLocal_571 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1356, true, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR((*&Local_4 + 472)[02]);
				TASK_PRIORITY_SET((*&Local_4 + 472)[02], true);
				TASK_SEQUENCE_PERFORM((*&Local_4 + 472)[02], bLocal_571);
				TASK_SEQUENCE_RELEASE(bLocal_571, 1);
				bLocal_571 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1360, true, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR((*&Local_4 + 472)[12]);
				TASK_PRIORITY_SET((*&Local_4 + 472)[12], true);
				TASK_SEQUENCE_PERFORM((*&Local_4 + 472)[12], bLocal_571);
				TASK_SEQUENCE_RELEASE(bLocal_571, 1);
				iLocal_650 = 35;
			}
			break;
		
		case 0x00000023:
			if (GET_CUTSCENEOBJECT_SEQUENCE(Local_398.f_16) != 2 && Function_339(&Local_398 + 4) < 11.0f)
			{
				Function_338("out02_marston", "out02_marston/dismount/dismountA");
				iLocal_650 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_339(&Local_398 + 4) < 19,5f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				iLocal_650 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_339(&Local_398 + 4) < 29,5f)
			{
				bLocal_571 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1356, 2, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR((*&Local_4 + 472)[02]);
				TASK_PRIORITY_SET((*&Local_4 + 472)[02], true);
				TASK_SEQUENCE_PERFORM((*&Local_4 + 472)[02], bLocal_571);
				TASK_SEQUENCE_RELEASE(bLocal_571, 1);
				bLocal_571 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1360, 2, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR((*&Local_4 + 472)[12]);
				TASK_PRIORITY_SET((*&Local_4 + 472)[12], true);
				TASK_SEQUENCE_PERFORM((*&Local_4 + 472)[12], bLocal_571);
				TASK_SEQUENCE_RELEASE(bLocal_571, 1);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				iLocal_650 = 65;
			}
			break;
		
		case 0x00000041:
			if (Function_339(&Local_398 + 4) < 32.0f)
			{
				GET_OBJECT_POSITION((*&Local_4 + 908)[5], &vLocal_557);
				GET_OBJECT_ORIENTATION((*&Local_4 + 908)[5], &vLocal_563);
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_GO_TO_COORD_AND_STAY(bLocal_410, &vLocal_557, true, vLocal_563.y);
				iLocal_650 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_339(&Local_398 + 4) < 32,85f)
			{
				GET_OBJECT_POSITION((*&Local_4 + 908)[7], &vLocal_557);
				GET_OBJECT_ORIENTATION((*&Local_4 + 908)[7], &vLocal_563);
				bLocal_571 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(false, &vLocal_557, 0);
				TASK_GO_TO_COORD_AND_STAY(false, &vLocal_557, true, vLocal_563.y);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_411);
				TASK_PRIORITY_SET(bLocal_411, true);
				TASK_SEQUENCE_PERFORM(bLocal_411, bLocal_571);
				TASK_SEQUENCE_RELEASE(bLocal_571, 1);
				iLocal_650 = 85;
			}
			break;
		
		case 0x00000055:
			if (Function_339(&Local_398 + 4) < 33.0f)
			{
				GET_OBJECT_POSITION((*&Local_4 + 908)[2], &vLocal_557);
				GET_OBJECT_ORIENTATION((*&Local_4 + 908)[2], &vLocal_563);
				TASK_CLEAR(Global_34573);
				TASK_PRIORITY_SET(Global_34573, true);
				TASK_GO_TO_COORD_AND_STAY(Global_34573, &vLocal_557, true, vLocal_563.y);
				iLocal_650 = 95;
			}
			break;
		
		case 0x0000005F:
			if (Function_339(&Local_398 + 4) < 34.0f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_398.f_16);
				iLocal_650 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!UNK_0xCDA6BB6C() && !IS_OBJECT_VALID(Local_398.f_16))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_569() //Position: 0x19727 / 104231
{
	switch (iLocal_649)
	{
		case 0x0000000F:
			if (GET_CUTSCENEOBJECT_SEQUENCE(Local_398.f_16) != 2 && Function_339(&Local_398 + 4) < 9.0f)
			{
				Function_570();
				iLocal_649 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_339(&Local_398 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_570() //Position: 0x1977B / 104315
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS02_v1_AA1", "Outlaw02_CS02_v1_AA1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS02_v1_AA2", "Outlaw02_CS02_v1_AA2", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS02_v1_AA3", "Outlaw02_CS02_v1_AA3", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS02_v1_AA4", "Outlaw02_CS02_v1_AA4", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_CS02_v1_AB1", "Outlaw02_CS02_v1_AB1", true, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_CS02_v1_AB2", "Outlaw02_CS02_v1_AB2", true, 4, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_571(bool bParam0) //Position: 0x198DF / 104671
{
	if (IS_ACTOR_ALIVE(bLocal_412))
	{
		if (bParam0)
		{
			if (GET_MOUNT(bLocal_410) != bLocal_412)
			{
				SET_ACTORS_HORSE(bLocal_410, bLocal_412);
				ACTOR_MOUNT_ACTOR(bLocal_410, bLocal_412);
			}
		}
		else if (GET_MOUNT(bLocal_410) != bLocal_412)
		{
			MEMORY_PREFER_RIDING(bLocal_410, true);
			SET_ACTORS_HORSE(bLocal_410, bLocal_412);
			Function_467(&bLocal_410, bLocal_412, 1);
		}
	}
	return;
}

void Function_572() //Position: 0x1993B / 104763
{
	if (IS_ACTOR_ALIVE(bLocal_411))
	{
		if (GET_MOUNT(Global_34573) != bLocal_411)
		{
			SET_ACTORS_HORSE(Global_34573, bLocal_411);
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
		}
	}
	return;
}

var Function_573(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x19969 / 104809
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 5, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Outlaw02_Cutscene02", 5, 1);
	}
	Function_574(&bVar0);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 3.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_574(int iParam0) //Position: 0x199E8 / 104936
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_579(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_578(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_577(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_576(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_575(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1000.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 10.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 1000.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1000.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 4, 1000.0f, 4);
	return;
}

void Function_575(int iParam0) //Position: 0x19A83 / 105091
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4344,927f, 15,39305f, 3211,466f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,228427f, 2,274438f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_576(int iParam0) //Position: 0x19AED / 105197
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4350,01f, 14,23609f, 3213,99f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,119761f, -1,281553f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_577(int iParam0) //Position: 0x19B50 / 105296
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4340,12f, 16,30666f, 3208,483f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,139927f, 2,152739f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_578(int iParam0) //Position: 0x19BB3 / 105395
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4357,199f, 14,89027f, 3228,429f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,089579f, 1,959026f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_579(int iParam0) //Position: 0x19C1D / 105501
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4355,51f, 14,9126f, 3231,891f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,089579f, 1,959026f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_580(bool bParam0, bool bParam1) //Position: 0x19C87 / 105607
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 3.0f, 4294967295, 6, 0, 0, 0, 0);
	return;
}

void Function_581() //Position: 0x19C9C / 105628
{
	Function_249(&iLocal_574, 7, 0, 4294967295, 4294967295);
	Function_438(1);
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_207(0);
	ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	if (!iLocal_577)
	{
		Function_566(3.0f);
	}
	SET_ACTOR_INVULNERABILITY(bLocal_410, true);
	Function_258();
	SET_ACTOR_INVULNERABILITY(bLocal_411, true);
	Function_257();
	SET_ACTOR_INVULNERABILITY(bLocal_412, true);
	Function_275();
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	Function_470(Local_4.f_548, 0);
	Function_470(Local_4.f_552, 0);
	Function_470(Local_4.f_544, 0);
	Function_470(Local_4.f_520, 0);
	Function_470(Local_4.f_508, 0);
	Function_470(Local_4.f_504, 0);
	Function_582();
	SQUAD_SET_FACTION(bLocal_599, 19);
	Function_527(bLocal_599);
	SQUAD_GOALS_CLEAR(bLocal_599);
	bLocal_571 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1160)[16], 5.0f, 4, 1, 1);
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1160)[17], 5.0f, 4, 1, 1);
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1160)[18], 5.0f, 4, 1, 1);
	TASK_WANDER_IN_VOLUME(false, (*&Local_4 + 644)[10], -1.0f);
	TASK_SEQUENCE_CLOSE();
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_599, false, 1, 4294967295);
	TASK_SEQUENCE_PERFORM(false, bLocal_571);
	TASK_SEQUENCE_RELEASE(bLocal_571, 1);
	return;
}

void Function_582() //Position: 0x19DA2 / 105890
{
	Function_467(&Local_4 + 472[02], Global_34573, 1);
	Function_467(&Local_4 + 472[12], Global_34573, 1);
	AI_GOAL_LOOK_AT_ACTOR((*&Local_4 + 472)[02], Global_34573, 1, 10.0f, 60.0f, 60.0f, 1);
	AI_GOAL_LOOK_AT_ACTOR((*&Local_4 + 472)[12], Global_34573, 1, 10.0f, 60.0f, 60.0f, 1);
	bLocal_571 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(false, (*&Local_4 + 1160)[19], 4, 0, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 472)[02]);
	TASK_PRIORITY_SET((*&Local_4 + 472)[02], true);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 472)[02], bLocal_571);
	TASK_SEQUENCE_RELEASE(bLocal_571, 1);
	bLocal_571 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(false, (*&Local_4 + 1160)[20], 3, 0, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 472)[12]);
	TASK_PRIORITY_SET((*&Local_4 + 472)[12], true);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 472)[12], bLocal_571);
	TASK_SEQUENCE_RELEASE(bLocal_571, 1);
	return;
}

void Function_583() //Position: 0x19E9C / 106140
{
	Function_249(&iLocal_574, 3, 0, 4294967295, 4294967295);
	Function_259(0, 1);
	Function_258();
	Function_257();
	Function_275();
	return;
}

void Function_584() //Position: 0x19EBA / 106170
{
	Function_595();
	Function_588();
	Function_587();
	Function_268();
	Function_586(Local_4.f_520);
	Function_524(Local_4.f_544);
	Function_585(Local_4.f_548, (*&Local_4 + 644)[8]);
	Function_585(Local_4.f_552, (*&Local_4 + 644)[11]);
	Function_585(Local_4.f_508, (*&Local_4 + 644)[9]);
	Function_585(Local_4.f_504, (*&Local_4 + 644)[5]);
	return;
}

void Function_585(bool bParam0, bool bParam1) //Position: 0x19F1F / 106271
{
	Function_527(bParam0);
	SQUAD_GOALS_CLEAR(bParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 1, 4294967295);
	TASK_WANDER_IN_VOLUME(false, bParam1, -1.0f);
	return;
}

void Function_586(bool bParam0) //Position: 0x19F3F / 106303
{
	Function_527(bParam0);
	SQUAD_GOALS_CLEAR(bParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_587() //Position: 0x19F5F / 106335
{
	bLocal_599 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_349, "MinerRetreat"));
	return;
}

void Function_588() //Position: 0x19F80 / 106368
{
	bool bVar0;
	
	Function_594();
	Function_593();
	Function_592();
	Function_591();
	Function_590();
	Function_589();
	bVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_548);
	bVar0 = (bVar0 || 2048);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_548, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_552, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_544, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_520, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_508, bVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_504, bVar0);
	return;
}

void Function_589() //Position: 0x19FE6 / 106470
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_504 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerCrankhouse"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerCrankhouse01", 508, -4465,708f, 28,59759f, 3135,564f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_504);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerCrankhouse02", 512, -4456,466f, 28,569f, 3129,293f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_504);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerCrankhouse03", 507, -4465,811f, 28,34898f, 3127,711f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_504);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	return;
}

void Function_590() //Position: 0x1A0E2 / 106722
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_508 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMidtier"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMidtier01", 505, -4433,009f, 25,74567f, 3169,412f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_508);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMidtier02", 506, -4440.0f, 21,08213f, 3192f, 0.0f, 218,468f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_508);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	return;
}

void Function_591() //Position: 0x1A198 / 106904
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_520 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMineEntrance"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineEntrance01", 511, -4420,563f, 8,051668f, 3181,485f, 0.0f, 22,10991f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_520);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMineEntrance02", 507, -4419,432f, 8,021976f, 3181,025f, 0.0f, 22,10991f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_520);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	Function_472(bVar0);
	return;
}

void Function_592() //Position: 0x1A279 / 107129
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_544 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMainBuilding"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainBuilding01", 514, -4452,626f, 9,205f, 3219,144f, 0.0f, 209,956f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_544);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainBuilding02", 515, -4454,733f, 12,618f, 3217,233f, 0.0f, 218,539f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_544);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainBuilding03", 505, -4453,926f, 12,618f, 3225,721f, 0.0f, 209,2187f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_544);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainBuilding04", 506, -4456,794f, 16,052f, 3214,133f, 0.0f, 29,07154f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_544);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	return;
}

void Function_593() //Position: 0x1A3DE / 107486
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_552 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerRailBuilding"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerRailBuilding01", 509, -4510,872f, 12,168f, 3263,568f, 0.0f, 305,479f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_552);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerRailBuilding02", 511, -4512,353f, 12,168f, 3256,265f, 0.0f, 220,564f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_552);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerRailBuilding03", 512, -4511,578f, 15,84f, 3258,629f, 0.0f, 355,636f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_552);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	return;
}

void Function_594() //Position: 0x1A4F3 / 107763
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_548 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MinerMainCamp"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainCamp01", 508, -4432,783f, 8,543463f, 3275,646f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_548);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainCamp02", 510, -4442,764f, 8,420084f, 3282,146f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_548);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainCamp03", 505, -4467,257f, 8,530011f, 3270,488f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_548);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainCamp04", 506, -4451,176f, 8,52773f, 3250,351f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_548);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MinerMainCamp05", 507, -4414,907f, 8,374923f, 3269,061f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_548);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_472(bVar0);
	return;
}

void Function_595() //Position: 0x1A677 / 108151
{
	Function_596();
	return;
}

void Function_596() //Position: 0x1A680 / 108160
{
	(*&Local_4 + 472)[02] = Function_597(Local_4, "MinerWelcomeParty01", 513, Function_53(), 977, -4428,066f, 8,53166f, 3245,774f, 0.0f, 227,1441f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 472)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 472)[02], 41, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 472)[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 472)[02], true);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 472)[02], false);
	Function_472((*&Local_4 + 472)[02]);
	ACCESSORIZE_HORSE(GET_MOUNT((*&Local_4 + 472)[02]), 3);
	Function_472(GET_MOUNT((*&Local_4 + 472)[02]));
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(GET_MOUNT((*&Local_4 + 472)[02]), (*&Local_4 + 644)[6], 4, 2);
	(*&Local_4 + 472)[12] = Function_597(Local_4, "MinerWelcomeParty02", 507, Function_53(), 980, -4430,098f, 8,512501f, 3247,973f, 0.0f, 227,5606f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 472)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 472)[12], 41, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 472)[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 472)[12], true);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 472)[12], false);
	Function_472((*&Local_4 + 472)[12]);
	ACCESSORIZE_HORSE(GET_MOUNT((*&Local_4 + 472)[12]), 3);
	Function_472(GET_MOUNT((*&Local_4 + 472)[12]));
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(GET_MOUNT((*&Local_4 + 472)[12]), (*&Local_4 + 644)[6], 4, 2);
	return;
}

var Function_597(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x1A816 / 108566
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_598(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_598(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

bool Function_598(int iParam0) //Position: 0x1A93B / 108859
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_599() //Position: 0x1A952 / 108882
{
	if (Function_600())
	{
		return 1;
	}
	return 0;
}

bool Function_600() //Position: 0x1A961 / 108897
{
	Function_392(&Local_4 + 60, 981, 2, 0);
	Function_392(&Local_4 + 60, 513, 2, 0);
	Function_392(&Local_4 + 60, 977, 2, 0);
	Function_392(&Local_4 + 60, 507, 2, 0);
	Function_392(&Local_4 + 60, 980, 2, 0);
	Function_392(&Local_4 + 60, 508, 2, 0);
	Function_392(&Local_4 + 60, 512, 2, 0);
	Function_392(&Local_4 + 60, 505, 2, 0);
	Function_392(&Local_4 + 60, 506, 2, 0);
	Function_392(&Local_4 + 60, 511, 2, 0);
	Function_392(&Local_4 + 60, 514, 2, 0);
	Function_392(&Local_4 + 60, 515, 2, 0);
	Function_392(&Local_4 + 60, 510, 2, 0);
	Function_392(&Local_4 + 60, 509, 2, 0);
	if (Function_387(&Local_4 + 60))
	{
		return 1;
	}
	return 0;
}

void Function_601() //Position: 0x1AA2A / 109098
{
	Function_398(bLocal_410);
	Function_398(bLocal_411);
	Function_398(bLocal_412);
	return;
}

void Function_602() //Position: 0x1AA42 / 109122
{
	Function_600();
	Function_183();
	Local_398.f_16 = Function_573(Local_4, 0, 1, 1, 0);
	if (IS_OBJECT_VALID(Local_398.f_16))
	{
		STREAMING_SET_POI_LIMIT(2);
		SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_398.f_16, 1);
	}
	else
	{
		LOG_ERROR("Outlaw02_Cutscene02 - Failed to create Outlaw02_Cutscene02_cutscene (paused)");
	}
	return;
}

bool Function_603() //Position: 0x1AACA / 109258
{
	switch (iLocal_619)
	{
		case 0x00000000:
			Function_423(&bLocal_419);
			iLocal_619 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (((((Function_555(Global_34573, (*&Local_4 + 472)[02], 1, 1, 0, 60.0f) || Function_555(Global_34573, (*&Local_4 + 472)[12], 1, 1, 0, 60.0f)) || ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 472)[02], 5.0f)) || ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 472)[12], 5.0f)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[15])) || iLocal_600)
			{
				Function_249(&iLocal_574, 8, 0, 4294967295, 4294967295);
				Function_611();
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_610(Local_4.f_548, 2);
				Function_609();
				Function_607(1);
				Function_606(Local_4.f_548, (*&Local_4 + 772)[14], 1);
				Function_524(Local_4.f_552);
				Function_524(Local_4.f_544);
				Function_524(Local_4.f_508);
				Function_524(Local_4.f_504);
				Function_586(Local_4.f_520);
				if (iLocal_406 <= 9)
				{
					Function_271(9, "STAGE 02 - OBJ_01-WAIT_02");
				}
				Function_423(&bLocal_419);
				iLocal_619 = 2;
				return 1;
			}
			if ((((Function_554(Global_34573, Local_4.f_548, 1, 0, 1, 60.0f) || Function_554(Global_34573, Local_4.f_552, 1, 0, 1, 60.0f)) || Function_554(Global_34573, Local_4.f_544, 1, 0, 1, 60.0f)) || Function_554(Global_34573, Local_4.f_520, 1, 0, 1, 60.0f)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[14]))
			{
				Function_249(&iLocal_574, 34, 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_610(Local_4.f_548, 2);
				Function_609();
				Function_607(0);
				Function_606(Local_4.f_548, (*&Local_4 + 772)[14], 1);
				Function_524(Local_4.f_552);
				Function_524(Local_4.f_544);
				Function_524(Local_4.f_508);
				Function_524(Local_4.f_504);
				Function_586(Local_4.f_520);
				if (iLocal_406 <= 9)
				{
					Function_271(9, "STAGE 02 - OBJ_01-WAIT_02");
				}
				Function_423(&bLocal_419);
				iLocal_619 = 2;
				return 1;
			}
			if (Function_554(Global_34573, Local_4.f_508, 1, 0, 1, 60.0f) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[12]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_610(Local_4.f_548, 2);
				Function_609();
				SQUADS_MERGE(Local_4.f_548, Local_4.f_508);
				Function_606(Local_4.f_508, (*&Local_4 + 772)[12], 1);
				Function_524(Local_4.f_504);
				Function_524(Local_4.f_552);
				Function_524(Local_4.f_544);
				Function_586(Local_4.f_520);
				if (iLocal_406 <= 9)
				{
					Function_271(9, "STAGE 02 - OBJ_01-WAIT_02");
				}
				Function_423(&bLocal_419);
				iLocal_619 = 7;
				return 1;
			}
			if (Function_554(Global_34573, Local_4.f_504, 1, 0, 1, 60.0f) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[13]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				SQUADS_MERGE(Local_4.f_508, Local_4.f_504);
				Function_606(Local_4.f_504, (*&Local_4 + 772)[13], 1);
				Function_524(Local_4.f_548);
				Function_524(Local_4.f_552);
				Function_524(Local_4.f_544);
				Function_586(Local_4.f_520);
				if (iLocal_406 <= 9)
				{
					Function_271(9, "STAGE 02 - OBJ_01-WAIT_02");
				}
				Function_423(&bLocal_419);
				iLocal_619 = 8;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[8]))
			{
				if (!iLocal_601)
				{
					if (!Function_341(&bLocal_419))
					{
						Function_272(&bLocal_419);
					}
					else if (Function_339(&bLocal_419) <= 25.0f)
					{
						Function_605();
						Function_604();
						iLocal_601 = 1;
					}
				}
				else if (Function_339(&bLocal_419) <= 40.0f)
				{
					iLocal_600 = 1;
					Function_423(&bLocal_419);
				}
			}
			break;
		
		case 0x00000002:
			if ((((Function_554(Global_34573, Local_4.f_552, 1, 0, 1, 60.0f) || Function_554(Global_34573, Local_4.f_544, 1, 0, 1, 60.0f)) || Function_554(Global_34573, Local_4.f_520, 1, 0, 1, 60.0f)) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_548) >= 1) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[15]))
			{
				Function_249(&iLocal_574, 34, 0, 4294967295, 4294967295);
				Function_420(10);
				Function_610(Local_4.f_552, 1);
				Function_609();
				SQUADS_MERGE(Local_4.f_548, Local_4.f_552);
				Function_606(Local_4.f_552, (*&Local_4 + 772)[15], 1);
				Function_524(Local_4.f_544);
				Function_586(Local_4.f_520);
				iLocal_619 = 3;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[12]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SQUADS_MERGE(Local_4.f_548, Local_4.f_508);
				Function_606(Local_4.f_508, (*&Local_4 + 772)[12], 1);
				iLocal_619 = 7;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[13]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SQUADS_MERGE(Local_4.f_548, Local_4.f_504);
				SQUADS_MERGE(Local_4.f_508, Local_4.f_504);
				Function_606(Local_4.f_504, (*&Local_4 + 772)[13], 1);
				iLocal_619 = 8;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[14]))
			{
				Function_249(&iLocal_574, 34, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000003:
			if (((Function_554(Global_34573, Local_4.f_544, 1, 0, 1, 60.0f) || Function_554(Global_34573, Local_4.f_520, 1, 0, 1, 60.0f)) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_552) >= 2) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[16]))
			{
				Function_249(&iLocal_574, 40, 0, 4294967295, 4294967295);
				Function_610(Local_4.f_544, 2);
				Function_609();
				SQUADS_MERGE(Local_4.f_552, Local_4.f_544);
				Function_606(Local_4.f_544, (*&Local_4 + 772)[16], 1);
				Function_586(Local_4.f_520);
				iLocal_619 = 4;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[12]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SQUADS_MERGE(Local_4.f_552, Local_4.f_508);
				Function_606(Local_4.f_508, (*&Local_4 + 772)[12], 1);
				iLocal_619 = 7;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[13]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SQUADS_MERGE(Local_4.f_552, Local_4.f_504);
				SQUADS_MERGE(Local_4.f_508, Local_4.f_504);
				Function_606(Local_4.f_504, (*&Local_4 + 772)[13], 1);
				iLocal_619 = 8;
				return 1;
			}
			break;
		
		case 0x00000004:
			if ((Function_554(Global_34573, Local_4.f_520, 1, 0, 1, 60.0f) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_544) >= 2) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[17]))
			{
				Function_249(&iLocal_574, 40, 0, 4294967295, 4294967295);
				SQUADS_MERGE(Local_4.f_544, Local_4.f_520);
				Function_606(Local_4.f_520, (*&Local_4 + 772)[17], 1);
				iLocal_619 = 5;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[12]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SQUADS_MERGE(Local_4.f_544, Local_4.f_508);
				Function_606(Local_4.f_508, (*&Local_4 + 772)[12], 1);
				iLocal_619 = 7;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[13]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SQUADS_MERGE(Local_4.f_544, Local_4.f_504);
				SQUADS_MERGE(Local_4.f_508, Local_4.f_504);
				Function_606(Local_4.f_504, (*&Local_4 + 772)[13], 1);
				iLocal_619 = 8;
				return 1;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[2]))
			{
				Function_270(Local_350, 0);
				Function_406(&Local_4 + 508, 0, 1);
				Function_406(&Local_4 + 504, 0, 1);
				iLocal_619 = 11;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[12]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SQUADS_MERGE(Local_4.f_520, Local_4.f_508);
				Function_606(Local_4.f_508, (*&Local_4 + 772)[12], 1);
				iLocal_619 = 7;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[13]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				Function_563();
				Function_420(8);
				SQUADS_MERGE(Local_4.f_520, Local_4.f_504);
				SQUADS_MERGE(Local_4.f_508, Local_4.f_504);
				Function_606(Local_4.f_504, (*&Local_4 + 772)[13], 1);
				iLocal_619 = 8;
				return 1;
			}
			Function_560();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_520) == 0)
			{
				Function_249(&iLocal_574, 10, 0, 4294967295, 4294967295);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_520) < 1)
			{
				Function_249(&iLocal_574, 34, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000007:
			if ((Function_554(Global_34573, Local_4.f_504, 1, 0, 1, 60.0f) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_508) >= 1) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[13]))
			{
				Function_249(&iLocal_574, 46, 0, 4294967295, 4294967295);
				SQUADS_MERGE(Local_4.f_508, Local_4.f_504);
				Function_606(Local_4.f_504, (*&Local_4 + 772)[13], 1);
				iLocal_619 = 8;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[14]))
			{
				Function_249(&iLocal_574, 34, 0, 4294967295, 4294967295);
				Function_420(10);
				SQUADS_MERGE(Local_4.f_508, Local_4.f_548);
				Function_606(Local_4.f_548, (*&Local_4 + 772)[14], 1);
				iLocal_619 = 2;
				return 1;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[1]) && !IS_PHYSINST_ACTIVE(GET_PHYSINST_FROM_ACTOR(Global_34573)))
			{
				Function_270(Local_350, 1);
				Function_557();
				iLocal_619 = 11;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[9]))
			{
				iLocal_619 = 9;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[14]))
			{
				Function_249(&iLocal_574, 34, 0, 4294967295, 4294967295);
				Function_420(10);
				SQUADS_MERGE(Local_4.f_504, Local_4.f_548);
				Function_606(Local_4.f_548, (*&Local_4 + 772)[14], 1);
				iLocal_619 = 2;
				return 1;
			}
			Function_560();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_504) == 0)
			{
				Function_249(&iLocal_574, 6, 0, 4294967295, 4294967295);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_504) < 1)
			{
				Function_249(&iLocal_574, 38, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[1]) && !IS_PHYSINST_ACTIVE(GET_PHYSINST_FROM_ACTOR(Global_34573)))
			{
				Function_270(Local_350, 1);
				Function_557();
				iLocal_619 = 11;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[10]))
			{
				Function_249(&iLocal_574, 6, 0, 4294967295, 4294967295);
				iLocal_619 = 10;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[14]))
			{
				Function_249(&iLocal_574, 34, 0, 4294967295, 4294967295);
				Function_420(10);
				SQUADS_MERGE(Local_4.f_504, Local_4.f_548);
				Function_606(Local_4.f_548, (*&Local_4 + 772)[14], 1);
				iLocal_619 = 2;
				return 1;
			}
			Function_560();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_504) == 0)
			{
				Function_249(&iLocal_574, 6, 0, 4294967295, 4294967295);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_504) < 1)
			{
				Function_249(&iLocal_574, 38, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x0000000A:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[1]) && !IS_PHYSINST_ACTIVE(GET_PHYSINST_FROM_ACTOR(Global_34573)))
			{
				Function_270(Local_350, 1);
				Function_557();
				iLocal_619 = 11;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 772)[14]))
			{
				Function_249(&iLocal_574, 34, 0, 4294967295, 4294967295);
				Function_420(10);
				SQUADS_MERGE(Local_4.f_504, Local_4.f_548);
				Function_606(Local_4.f_548, (*&Local_4 + 772)[14], 1);
				iLocal_619 = 2;
				return 1;
			}
			Function_560();
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[10]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_504) != 0)
			{
				Function_249(&iLocal_574, 6, 0, 4294967295, 4294967295);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_504) < 1)
			{
				Function_249(&iLocal_574, 38, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x0000000B:
			iLocal_619 = 12;
			return 1;
			break;
		
		case 0x0000000C:
			return 0;
			break;
	}
	return 1;
}

void Function_604() //Position: 0x1B6C5 / 112325
{
	bLocal_571 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_GAUSSIAN(2.0f, 1.0f), 0, 0);
	TASK_POINT_GUN_AT_OBJECT(false, Global_34573, -1.0f, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 472)[02]);
	TASK_PRIORITY_SET((*&Local_4 + 472)[02], true);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 472)[02], bLocal_571);
	TASK_SEQUENCE_RELEASE(bLocal_571, 1);
	bLocal_571 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_GAUSSIAN(2.0f, 1,5f), 0, 0);
	TASK_POINT_GUN_AT_OBJECT(false, Global_34573, -1.0f, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 472)[12]);
	TASK_PRIORITY_SET((*&Local_4 + 472)[12], true);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 472)[12], bLocal_571);
	TASK_SEQUENCE_RELEASE(bLocal_571, 1);
	return;
}

void Function_605() //Position: 0x1B761 / 112481
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw02_MinerWaitingOnJonLeave", "Outlaw02_MinerWaitingOnJonLeave", false, 1, 1, 0, 1);
		Function_344(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_606(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B7C8 / 112584
{
	if (bParam2)
	{
		Function_419(bParam0, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
	}
	SQUAD_SET_FACTION(bParam0, 19);
	Function_559(bParam0, Global_34573, 1);
	Function_532(bParam0, 1);
	Function_531(bParam0, 0);
	Function_527(bParam0);
	SQUAD_GOALS_CLEAR(bParam0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bParam0, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, 1, bParam1, 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, 2, bParam1, 2, 1);
	return;
}

void Function_607(bool bParam0) //Position: 0x1B829 / 112681
{
	bLocal_571 = false;
	while (bLocal_571 <= 2)
	{
		bLocal_555 = (*&Local_4 + 472)[bLocal_5712];
		if (IS_ACTOR_ALIVE(bLocal_555))
		{
			AI_GOAL_LOOK_CLEAR(bLocal_555);
			MEMORY_ALLOW_SHOOTING(bLocal_555, true);
			SET_ACTOR_VISION_FIELD_OF_VIEW(bLocal_555, 359.0f);
			if (bParam0)
			{
				Function_608(bLocal_555, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_555, 0);
				SET_ACTOR_FACTION(bLocal_555, 19);
				GET_POSITION(bLocal_555, &vLocal_557);
				TASK_CLEAR(bLocal_555);
				TASK_PRIORITY_SET(bLocal_555, false);
				TASK_SHOOT_ENEMIES_FROM_POSITION(bLocal_555, &vLocal_557, GET_HEADING(bLocal_555), 10.0f);
			}
			else
			{
				ACTOR_DRAW_ANY_WEAPON(bLocal_555, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_555, 0);
				TASK_CLEAR(bLocal_555);
				SQUAD_JOIN(bLocal_555, Local_4.f_548);
			}
		}
		bLocal_571++;
	}
	return;
}

void Function_608(bool bParam0, bool bParam1) //Position: 0x1B8DC / 112860
{
	if (bParam1)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	return;
}

void Function_609() //Position: 0x1B915 / 112917
{
	Function_418(bLocal_599);
	Function_559(bLocal_599, Global_34573, 1);
	return;
}

void Function_610(bool bParam0, int iParam1) //Position: 0x1B92B / 112939
{
	if (SQUAD_IS_VALID(bLocal_599))
	{
		bLocal_571 = false;
		bLocal_572 = false;
		if (SQUAD_IS_VALID(bParam0))
		{
			while (bLocal_571 > iParam1 && bLocal_572 > SQUAD_GET_SIZE(bParam0))
			{
				bLocal_555 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_572);
				if (IS_ACTOR_VALID(bLocal_555))
				{
					TASK_CLEAR(bLocal_555);
					SQUAD_JOIN(bLocal_555, bLocal_599);
					MEMORY_ALLOW_SHOOTING(bLocal_555, false);
					MEMORY_ALLOW_PICKUP_WEAPONS(bLocal_555, 0);
					MEMORY_ALLOW_THROWING_EXPLOSIVES(bLocal_555, 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_555, 0);
					bLocal_571++;
				}
				else
				{
					bLocal_572++;
				}
			}
		}
		else
		{
			LOG_ERROR("Joining squad invalid! This shouldn't be happening!");
		}
	}
	else
	{
		LOG_ERROR("MinerRetreatSquad invalid! This shouldn't be happening!");
	}
	return;
}

void Function_611() //Position: 0x1BA2E / 113198
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw02_JonShootsMiner", "Outlaw02_JonShootsMiner", false, 2, 1, 0, 1);
		Function_344(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_612() //Position: 0x1BA85 / 113285
{
	if (iLocal_406 < 5 && iLocal_406 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 616)[0]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[0]))
			{
				Function_602();
				iLocal_575 = 0;
				DESTROY_VOLUME((*&Local_4 + 616)[0]);
			}
		}
		else if (!iLocal_575)
		{
			if (Function_599())
			{
				Function_584();
				iLocal_575 = 1;
			}
		}
		if (!Function_642())
		{
			Function_271(106, "STAGE 01 - COMPLETE");
		}
	}
	switch (iLocal_406)
	{
		case 0x00000000:
			Function_400(0);
			Function_641();
			Function_640();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
			Function_639();
			bLocal_408 = Global_30658[4];
			if (iLocal_577)
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (Function_476(&Local_350))
				{
					Function_195(1, 0, 1);
				}
				Function_393(Global_34573, (*&Local_4 + 884)[0], 1, 1, 1);
				Function_271(1, "STAGE 01 - STREAMING GOAL");
			}
			else
			{
				Function_271(2, "STAGE 01 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_384(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_271(2, "STAGE 01 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_288(iLocal_405);
			Function_460(StackVal, StackVal, Function_288(iLocal_405), iLocal_405, Global_30628[1], Function_292(iLocal_405), 0);
			iLocal_407 = Function_459();
			Function_638();
			Function_271(5, "STAGE 01 - FADE IN");
			break;
		
		case 0x00000005:
			Function_325(1.0f);
			Function_636();
			Function_276(1);
			Function_271(6, "STAGE 01 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_247();
				Function_635();
				Function_271(7, "STAGE 01 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_430("Outlaw02_obj01_1", 7,5f, 1, 2, 0, 0, 0);
				Function_223(1);
				Function_271(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (!Function_428())
			{
				if (!Function_633())
				{
					Function_422();
				}
			}
			if (Function_631(&bLocal_416, 60.0f, 200.0f, bLocal_410, "Outlaw02_obj01_1", "Outlaw_abandoned", &bLocal_432, 1, 0, 0, 325, 1))
			{
				Function_271(14, "STAGE 01 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_631(&bLocal_416, 60.0f, 200.0f, bLocal_410, "Outlaw02_obj01_1", "Outlaw_abandoned", &bLocal_432, 1, 0, 0, 325, 1))
			{
				Function_271(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_247();
				Function_430("Outlaw02_obj01_2", 7,5f, 1, 2, 0, 0, 0);
				Function_223(0);
				Function_224(1);
				Function_271(22, "STAGE 01 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000016:
			if (!Function_428())
			{
				if (!Function_633())
				{
					if (!Function_422())
					{
						if (!Function_628())
						{
							if (!Function_623())
							{
								Function_614(&iLocal_578, &iLocal_579, 1);
							}
						}
					}
				}
			}
			if (Function_631(&bLocal_416, 60.0f, 200.0f, bLocal_410, "Outlaw_return", "Outlaw_abandoned", &bLocal_432, 1, 0, 0, 325, 1))
			{
				Function_271(23, "STAGE 01 - OBJ_02-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000017:
			if (!Function_631(&bLocal_416, 60.0f, 200.0f, bLocal_410, "Outlaw_return", "Outlaw_abandoned", &bLocal_432, 1, 0, 0, 325, 1))
			{
				Function_271(22, "STAGE 01 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_339(&bLocal_413) <= 10.0f)
			{
				Function_613();
				Function_276(0);
				iLocal_405 = 1;
				iLocal_425[0] = 1;
				Function_271(0, "STAGE 02 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_613() //Position: 0x1BFA7 / 114599
{
	Function_236();
	Function_224(0);
	Function_223(0);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 644)[7]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 644)[7]);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_410);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
	return;
}

int Function_614(var uParam0, int iParam1, bool bParam2) //Position: 0x1BFE2 / 114658
{
	if ((*uParam0 && !bLocal_592) && !bLocal_594)
	{
		if (!bParam2 || ((!Function_622() && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !IS_ANY_SPEECH_PLAYING(bLocal_410)))
		{
			switch (*iParam1)
			{
				case 0x00000000:
					*uParam0 = 0;
					if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v1_AA"))
					{
						Function_621();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v2_AA"))
					{
						Function_620();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v3_AA"))
					{
						Function_619();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v4_AA"))
					{
						Function_618();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v5_AA"))
					{
						Function_617();
					}
					else if (!iLocal_580)
					{
						Function_616();
						iLocal_580 = 1;
					}
					break;
				
				case 0x00000001:
					*uParam0 = 0;
					Function_615();
					break;
				}
		}
		return 1;
	}
	return 0;
}

void Function_615() //Position: 0x1C11F / 114975
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AA1", "Outlaw02_BanterRideGapt_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AA2", "Outlaw02_BanterRideGapt_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterRideGapt_v1_AB", "Outlaw02_BanterRideGapt_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AC1", "Outlaw02_BanterRideGapt_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AC2", "Outlaw02_BanterRideGapt_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterRideGapt_v1_AD", "Outlaw02_BanterRideGapt_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AE1", "Outlaw02_BanterRideGapt_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AE2", "Outlaw02_BanterRideGapt_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterRideGapt_v1_AF", "Outlaw02_BanterRideGapt_v1_AF", true, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_616() //Position: 0x1C3D6 / 115670
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_NoMoreTalk", "Outlaw02_NoMoreTalk", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_617() //Position: 0x1C425 / 115749
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AA", "Outlaw02_BanterToGapt_v5_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AB", "Outlaw02_BanterToGapt_v5_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AC1", "Outlaw02_BanterToGapt_v5_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AC2", "Outlaw02_BanterToGapt_v5_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AD", "Outlaw02_BanterToGapt_v5_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AE", "Outlaw02_BanterToGapt_v5_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AF1", "Outlaw02_BanterToGapt_v5_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AF2", "Outlaw02_BanterToGapt_v5_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AG", "Outlaw02_BanterToGapt_v5_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AH", "Outlaw02_BanterToGapt_v5_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AI", "Outlaw02_BanterToGapt_v5_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AJ", "Outlaw02_BanterToGapt_v5_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AK", "Outlaw02_BanterToGapt_v5_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AL", "Outlaw02_BanterToGapt_v5_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AM1", "Outlaw02_BanterToGapt_v5_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AM2", "Outlaw02_BanterToGapt_v5_AM2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AN", "Outlaw02_BanterToGapt_v5_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AO1", "Outlaw02_BanterToGapt_v5_AO1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AO2", "Outlaw02_BanterToGapt_v5_AO2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AP", "Outlaw02_BanterToGapt_v5_AP", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AQ1", "Outlaw02_BanterToGapt_v5_AQ1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AQ2", "Outlaw02_BanterToGapt_v5_AQ2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AQ3", "Outlaw02_BanterToGapt_v5_AQ3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AR", "Outlaw02_BanterToGapt_v5_AR", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AS1", "Outlaw02_BanterToGapt_v5_AS1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AS2", "Outlaw02_BanterToGapt_v5_AS2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AT", "Outlaw02_BanterToGapt_v5_AT", true, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_618() //Position: 0x1CBA0 / 117664
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AA", "Outlaw02_BanterToGapt_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AB", "Outlaw02_BanterToGapt_v4_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AC", "Outlaw02_BanterToGapt_v4_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AD", "Outlaw02_BanterToGapt_v4_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AE1", "Outlaw02_BanterToGapt_v4_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AE2", "Outlaw02_BanterToGapt_v4_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AF", "Outlaw02_BanterToGapt_v4_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AG1", "Outlaw02_BanterToGapt_v4_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AG2", "Outlaw02_BanterToGapt_v4_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AH", "Outlaw02_BanterToGapt_v4_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AI1", "Outlaw02_BanterToGapt_v4_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AI2", "Outlaw02_BanterToGapt_v4_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AJ", "Outlaw02_BanterToGapt_v4_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AK", "Outlaw02_BanterToGapt_v4_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AL", "Outlaw02_BanterToGapt_v4_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AM1", "Outlaw02_BanterToGapt_v4_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AM2", "Outlaw02_BanterToGapt_v4_AM2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AN", "Outlaw02_BanterToGapt_v4_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AO", "Outlaw02_BanterToGapt_v4_AO", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_619() //Position: 0x1D0E9 / 119017
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AA", "Outlaw02_BanterToGapt_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AB", "Outlaw02_BanterToGapt_v3_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AC", "Outlaw02_BanterToGapt_v3_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AD", "Outlaw02_BanterToGapt_v3_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AE", "Outlaw02_BanterToGapt_v3_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AF1", "Outlaw02_BanterToGapt_v3_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AF2", "Outlaw02_BanterToGapt_v3_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AG1", "Outlaw02_BanterToGapt_v3_AG1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AG2", "Outlaw02_BanterToGapt_v3_AG2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AH1", "Outlaw02_BanterToGapt_v3_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AH2", "Outlaw02_BanterToGapt_v3_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AI", "Outlaw02_BanterToGapt_v3_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AJ", "Outlaw02_BanterToGapt_v3_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AK", "Outlaw02_BanterToGapt_v3_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AL1", "Outlaw02_BanterToGapt_v3_AL1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AL2", "Outlaw02_BanterToGapt_v3_AL2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AM", "Outlaw02_BanterToGapt_v3_AM", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AN", "Outlaw02_BanterToGapt_v3_AN", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_620() //Position: 0x1D5ED / 120301
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AA", "Outlaw02_BanterToGapt_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AB", "Outlaw02_BanterToGapt_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AC", "Outlaw02_BanterToGapt_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AD", "Outlaw02_BanterToGapt_v2_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AE", "Outlaw02_BanterToGapt_v2_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AF", "Outlaw02_BanterToGapt_v2_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AG1", "Outlaw02_BanterToGapt_v2_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AG2", "Outlaw02_BanterToGapt_v2_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AH1", "Outlaw02_BanterToGapt_v2_AH1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AH2", "Outlaw02_BanterToGapt_v2_AH2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AI1", "Outlaw02_BanterToGapt_v2_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AI2", "Outlaw02_BanterToGapt_v2_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AJ", "Outlaw02_BanterToGapt_v2_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AK1", "Outlaw02_BanterToGapt_v2_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AK2", "Outlaw02_BanterToGapt_v2_AK2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AL", "Outlaw02_BanterToGapt_v2_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AM", "Outlaw02_BanterToGapt_v2_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AN", "Outlaw02_BanterToGapt_v2_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AO1", "Outlaw02_BanterToGapt_v2_AO1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AO2", "Outlaw02_BanterToGapt_v2_AO2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AP1", "Outlaw02_BanterToGapt_v2_AP1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AP2", "Outlaw02_BanterToGapt_v2_AP2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AQ1", "Outlaw02_BanterToGapt_v2_AQ1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AQ2", "Outlaw02_BanterToGapt_v2_AQ2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AR", "Outlaw02_BanterToGapt_v2_AR", true, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_621() //Position: 0x1DCE0 / 122080
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AA", "Outlaw02_BanterToGapt_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4750", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AB", "Outlaw02_BanterToGapt_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AC1", "Outlaw02_BanterToGapt_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AC2", "Outlaw02_BanterToGapt_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AD", "Outlaw02_BanterToGapt_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AE1", "Outlaw02_BanterToGapt_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AE2", "Outlaw02_BanterToGapt_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AF", "Outlaw02_BanterToGapt_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AG", "Outlaw02_BanterToGapt_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AH", "Outlaw02_BanterToGapt_v1_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AI1", "Outlaw02_BanterToGapt_v1_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AI2", "Outlaw02_BanterToGapt_v1_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AJ", "Outlaw02_BanterToGapt_v1_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AK1", "Outlaw02_BanterToGapt_v1_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AK2", "Outlaw02_BanterToGapt_v1_AK2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AL1", "Outlaw02_BanterToGapt_v1_AL1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AL2", "Outlaw02_BanterToGapt_v1_AL2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AM", "Outlaw02_BanterToGapt_v1_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AN1", "Outlaw02_BanterToGapt_v1_AN1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AN2", "Outlaw02_BanterToGapt_v1_AN2", true, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_622() //Position: 0x1E295 / 123541
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

bool Function_623() //Position: 0x1E2A2 / 123554
{
	if (bLocal_597)
	{
		return 0;
	}
	if (!bLocal_592 && !bLocal_594)
	{
		if ((fLocal_588 - fLocal_589) <= 25.0f)
		{
			Function_627();
			bLocal_592 = true;
			return 1;
		}
		if ((fLocal_589 - fLocal_588) <= 25.0f)
		{
			Function_626();
			bLocal_592 = true;
			return 1;
		}
		if (VDIST(vLocal_582, vLocal_585) <= 35.0f)
		{
			Function_625();
			bLocal_592 = true;
			return 1;
		}
	}
	if (VDIST(vLocal_582, vLocal_585) >= 10.0f)
	{
		Function_624();
		bLocal_592 = false;
		bLocal_594 = false;
		if (iLocal_579 == 0)
		{
			iLocal_578 = 1;
		}
		return 1;
	}
	return 0;
}

void Function_624() //Position: 0x1E345 / 123717
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ComesBackGapt", "Outlaw02_ComesBackGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_625() //Position: 0x1E39A / 123802
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_WrongDirGapt", "Outlaw02_WrongDirGapt", false, 2, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_626() //Position: 0x1E3ED / 123885
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_TooFarBehindGapt", "Outlaw02_TooFarBehindGapt", false, 2, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_627() //Position: 0x1E448 / 123976
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_TooFarAheadGapt", "Outlaw02_TooFarAheadGapt", false, 2, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_628() //Position: 0x1E4A1 / 124065
{
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "beingBucked"))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_630();
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ThrownOffHorseGapt", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			}
		}
		else
		{
			Function_629();
		}
		iLocal_581 = 1;
		return 1;
	}
	return 0;
}

void Function_629() //Position: 0x1E516 / 124182
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_OffHorseGapt", "Outlaw02_OffHorseGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_630() //Position: 0x1E569 / 124265
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ThrownOffHorseGapt", "Outlaw02_ThrownOffHorseGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_631(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1E5C8 / 124360
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_632(Global_34573, bParam3, bParam2))
	{
		Function_282(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_632(Global_34573, bParam3, bParam1))
	{
		if (!Function_414(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_430(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_413(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_412(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_412(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_414(2))
	{
		Function_411(2);
		if (!Function_410())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_409();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_218(bParam3);
				Function_226(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_412(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_412(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_632(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1E75C / 124764
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

bool Function_633() //Position: 0x1E86D / 125037
{
	if (IS_ACTOR_SHOOTING(Global_34573))
	{
		if (GET_WEAPON_IN_HAND(Global_34573) != 21)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_634();
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ShootsRandGapt", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			}
			iLocal_581 = 1;
			return 1;
		}
	}
	return 0;
}

void Function_634() //Position: 0x1E8CB / 125131
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsRandGapt", "Outlaw02_ShootsRandGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_635() //Position: 0x1E922 / 125218
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_OffToGapt", "Outlaw02_OffToGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_636() //Position: 0x1E96F / 125295
{
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	Function_249(&iLocal_574, 3, 0, 4294967295, 4294967295);
	if (iLocal_577)
	{
		Function_566((3.0f + 1.0f));
	}
	SET_ACTOR_INVULNERABILITY(bLocal_410, false);
	SET_ACTOR_INVULNERABILITY(bLocal_411, false);
	SET_ACTOR_INVULNERABILITY(bLocal_412, false);
	SET_ANIM_SET_FOR_ACTOR(bLocal_410, "stand_ambient", 0);
	MEMORY_PREFER_RIDING(bLocal_410, false);
	if (iLocal_577)
	{
		Function_637();
	}
	return;
}

void Function_637() //Position: 0x1E9CF / 125391
{
	ACTOR_POP_NEXT_GAIT(bLocal_410, 1, false);
	TASK_CLEAR(bLocal_410);
	TASK_PRIORITY_SET(bLocal_410, true);
	TASK_MOUNT(bLocal_410, bLocal_412, 0, 1, 1, 2);
	return;
}

void Function_638() //Position: 0x1E9F7 / 125431
{
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 644)[7]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 644)[7], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 644)[7]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 644)[7]);
	Function_259(0, 0);
	return;
}

void Function_639() //Position: 0x1EA30 / 125488
{
	Function_162(114695);
	Function_395(9);
	return;
}

void Function_640() //Position: 0x1EA42 / 125506
{
	Function_398(bLocal_410);
	Function_398(bLocal_411);
	return;
}

void Function_641() //Position: 0x1EA54 / 125524
{
	Function_249(&iLocal_574, 0, 0, 4294967295, 4294967295);
	return;
}

bool Function_642() //Position: 0x1EA64 / 125540
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[14]))
	{
		Function_282("Outlaw02_obj01_fail");
		bLocal_432 = true;
		return 1;
	}
	Function_651();
	switch (iLocal_618)
	{
		case 0x00000000:
			iLocal_581 = 0;
			iLocal_578 = 1;
			iLocal_579 = 0;
			iLocal_618 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[13]) && IS_ACTOR_IN_VOLUME(bLocal_410, (*&Local_4 + 700)[13]))
			{
				SET_ACTOR_MAX_SPEED(bLocal_410, 5);
				iLocal_618 = 3;
				return 1;
			}
			if (GET_MOUNT(Global_34573) != bLocal_411 && Function_650(bLocal_410, bLocal_412))
			{
				Function_249(&iLocal_574, 11, 0, 4294967295, 4294967295);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410, -1.0f, -1.0f, 4, 1, 1);
				SET_ACTOR_MAX_SPEED(bLocal_410, 4);
				if (!bLocal_594)
				{
					TASK_CLEAR(bLocal_410);
					TASK_PRIORITY_SET(bLocal_410, true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_410, Local_4.f_1368, 3, 0, 0, 1, false);
				}
				Function_257();
				Function_275();
				Function_271(15, "STAGE 01 - OBJ_02-OBJ_01");
				Function_423(&bLocal_419);
				iLocal_618 = 2;
				return 1;
			}
			if (GET_MOUNT(Global_34573) == bLocal_412)
			{
				TASK_CLEAR(bLocal_410);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_MOUNT(bLocal_410, bLocal_411, 0, 1, 4, 2147483647);
			}
			Function_647(1, 0);
			if (Function_650(bLocal_410, bLocal_412))
			{
				if (GET_TASK_STATUS(bLocal_410, 0) != 1)
				{
					if (!bLocal_594)
					{
						GET_PATH_POINT(Local_4.f_1368, false, &vLocal_557);
						bLocal_571 = TASK_SEQUENCE_OPEN();
						TASK_FACE_COORD(false, &vLocal_557, 0);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1368, true, 1, 0, 1, false);
						TASK_SEQUENCE_CLOSE();
						TASK_CLEAR(bLocal_410);
						TASK_PRIORITY_SET(bLocal_410, true);
						TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_571);
						TASK_SEQUENCE_RELEASE(bLocal_571, 1);
					}
				}
				else if (GET_TASK_STATUS(bLocal_410, 0) == 1)
				{
					if (!iLocal_593)
					{
						Function_646(Local_4.f_1368);
						if (fLocal_589 <= (fLocal_590 * 0,001f))
						{
							iLocal_593 = 1;
							Function_626();
							Function_432("stand_ambient", "stand_ambient/one_hnd_hrs");
						}
					}
					else if (!bLocal_594)
					{
						Function_646(Local_4.f_1368);
						if (fLocal_589 <= (fLocal_590 * 0,005f))
						{
							bLocal_594 = true;
							SET_ACTOR_MAX_SPEED(bLocal_410, 2);
							TASK_CLEAR(bLocal_410);
							TASK_PRIORITY_SET(bLocal_410, true);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_410, Local_4.f_1368, 3, 0, 0, 1, false);
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 700)[13]) && IS_ACTOR_IN_VOLUME(bLocal_410, (*&Local_4 + 700)[13]))
			{
				SET_ACTOR_MAX_SPEED(bLocal_410, 5);
				iLocal_618 = 3;
				return 1;
			}
			Function_646(Local_4.f_1368);
			if (!iLocal_595)
			{
				if (Function_645(Local_4.f_1368, (*&Local_4 + 1300)[3]))
				{
					iLocal_595 = 1;
					iLocal_578 = 1;
					iLocal_579 = 1;
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else if (!iLocal_596)
			{
				if (Function_645(Local_4.f_1368, (*&Local_4 + 1300)[1]))
				{
					iLocal_596 = 1;
				}
			}
			else if (!bLocal_597)
			{
				if (!Function_341(&bLocal_419))
				{
					if (Function_645(Local_4.f_1368, (*&Local_4 + 1300)[2]))
					{
						bLocal_592 = false;
						bLocal_594 = false;
						Function_272(&bLocal_419);
						SET_ACTOR_MAX_SPEED(bLocal_410, 2);
					}
				}
				else if (Function_339(&bLocal_419) <= 1.0f)
				{
					bLocal_597 = true;
					Function_644();
					Function_423(&bLocal_419);
				}
			}
			else if (!bLocal_598)
			{
				if (!Function_341(&bLocal_419))
				{
					if (Function_643(Local_4.f_1368))
					{
						iLocal_593 = 0;
						Function_272(&bLocal_419);
						SET_ACTOR_MAX_SPEED(bLocal_410, 5);
					}
				}
				else if (Function_339(&bLocal_419) <= 5.0f)
				{
					if (!iLocal_593)
					{
						iLocal_593 = 1;
						Function_626();
						Function_432("stand_ambient", "stand_ambient/one_hnd_hrs");
					}
				}
			}
			Function_647(1, 1);
			break;
		
		case 0x00000003:
			return 0;
			break;
	}
	return 1;
}

bool Function_643(bool bParam0) //Position: 0x1EE35 / 126517
{
	GET_PATH_POINT(bParam0, (GET_NUM_PATH_POINTS(bParam0) - 1), &vLocal_557);
	if ((GET_TASK_STATUS(bLocal_410, 43) != 0 || VDIST(vLocal_585, vLocal_557) >= 2,5f) || (fLocal_590 - fLocal_589) >= 2,5f)
	{
		return 1;
	}
	return 0;
}

void Function_644() //Position: 0x1EE7C / 126588
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ArriveAtGapt", "Outlaw02_ArriveAtGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_645(bool bParam0, bool bParam1) //Position: 0x1EECF / 126671
{
	GET_OBJECT_POSITION(bParam1, &vLocal_557);
	ESTIMATE_DISTANCE_ALONG_PATH(bParam0, &vLocal_557, &bLocal_569, &fLocal_590);
	if (fLocal_589 <= bLocal_569 || VDIST(vLocal_585, vLocal_557) >= 2,5f)
	{
		return 1;
	}
	return 0;
}

void Function_646(bool bParam0) //Position: 0x1EF0D / 126733
{
	fLocal_588 = 0.0f;
	fLocal_589 = 0.0f;
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(bParam0, &vLocal_582, &vLocal_585, &fLocal_588, &fLocal_589, &fLocal_590);
	return;
}

void Function_647(bool bParam0, bool bParam1) //Position: 0x1EF2F / 126767
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			Function_223(0);
			if (GET_MOUNT(Global_34573) != bLocal_411)
			{
				Function_401(0, 0x40400000);
				if (GET_MOUNT(Global_34573) == bLocal_412)
				{
					bLocal_555 = bLocal_411;
					bLocal_411 = bLocal_412;
					bLocal_412 = bLocal_555;
					SET_ACTORS_HORSE(Global_34573, bLocal_411);
					Function_648(bLocal_411, 0);
					GIVE_OBJECT_TO_LAYOUT(bLocal_411, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ACTORS_HORSE(bLocal_410, bLocal_412);
					SET_MOST_RECENT_MOUNT(bLocal_410, bLocal_412);
					GIVE_OBJECT_TO_LAYOUT(bLocal_412, bLocal_349);
				}
				else
				{
					if (IS_ACTOR_ALIVE(bLocal_411))
					{
						SET_ACTOR_FACTION(bLocal_411, 17);
						GIVE_OBJECT_TO_LAYOUT(bLocal_411, GET_AMBIENT_LAYOUT());
					}
					bLocal_411 = GET_MOUNT(Global_34573);
					SET_ACTORS_HORSE(Global_34573, bLocal_411);
					Function_648(bLocal_411, 0);
					SET_ACTOR_FACTION(bLocal_411, 20);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_411, 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_411, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
		else
		{
			Function_223(1);
		}
	}
	if (bParam1)
	{
		Function_571(0);
	}
	return;
}

void Function_648(bool bParam0, int iParam1) //Position: 0x1F02E / 127022
{
	Function_649(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_649(bool bParam0) //Position: 0x1F040 / 127040
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

bool Function_650(bool bParam0, bool bParam1) //Position: 0x1F1F6 / 127478
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

void Function_651() //Position: 0x1F213 / 127507
{
	GET_POSITION(Global_34573, &vLocal_582);
	GET_POSITION(bLocal_410, &vLocal_585);
	return;
}

void Function_652() //Position: 0x1F22B / 127531
{
	switch (iLocal_406)
	{
		case 0x00000006:
			Function_696(&Local_350, 1);
			bLocal_349 = CREATE_LAYOUT("Outlaw02_DynamicLayout");
			Function_695();
			Function_639();
			Function_195(1, 0, 1);
			iLocal_406 = 7;
			break;
		
		case 0x00000007:
			if (Function_677())
			{
				Function_671();
				iLocal_406 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_668())
			{
				iLocal_406 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_664())
			{
				Function_661();
				iLocal_406 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_409 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			Function_657();
			Function_656(&bLocal_413);
			Function_656(&bLocal_416);
			iLocal_405 = 0;
			iLocal_406 = 0;
			Function_654(&Local_350, &iLocal_405, &iLocal_406);
			Function_653(StackVal, StackVal, StackVal, StackVal, StackVal, Function_661(), Local_350);
			switch (iLocal_405)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_274();
					break;
				
				case 0x00000002:
					Function_269();
					break;
				
				case 0x00000003:
					Function_267();
					break;
				
				case 0x00000004:
					Function_266();
					break;
				
				case 0x00000065:
					Function_256();
					break;
			}
			break;
	}
	return;
}

void Function_653(struct<25> Param0) //Position: 0x1F34B / 127819
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_405 = 0;
			break;
		
		case 0x00000002:
			iLocal_405 = 1;
			break;
		
		case 0x00000003:
			iLocal_405 = 3;
			break;
		
		case 0x00000004:
			iLocal_405 = 4;
			break;
		
		case 0x00000005:
			iLocal_405 = 101;
			break;
	}
}

void Function_654(var uParam0, var uParam1, int iParam2) //Position: 0x1F39E / 127902
{
	if (Function_476(uParam0))
	{
		*uParam1 = Function_475(uParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_655();
	}
	return;
}

void Function_655() //Position: 0x1F3D2 / 127954
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

void Function_656(bool bParam0) //Position: 0x1F423 / 128035
{
	if (!Function_341(bParam0))
	{
		Function_273(bParam0, 0.0f);
	}
	return;
}

void Function_657() //Position: 0x1F438 / 128056
{
	iLocal_574 = 0;
	Function_660("FTR_SONG_09", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	ENABLE_CHILD_SECTOR("gap_caveBlockades01x");
	Function_157(Global_30658[3]);
	Function_130(&(Global_29008[Global_30658[3]]), 384);
	Function_658(&uLocal_435, bLocal_349);
	Function_368(&(Local_475[017]), bLocal_410, "Outlaw", 1, 0x5f5e100, 1);
	Function_369(&(Local_475[017]), 1024, 0);
	return;
}

int Function_658(var uParam0, bool bParam1) //Position: 0x1F4C5 / 128197
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_659(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_659(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_659(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_659(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_659(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1FB65 / 129893
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

void Function_660(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1FC28 / 130088
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_250(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

struct<8> Function_661() //Position: 0x1FC44 / 130116
{
	var uVar0;
	
	Function_663(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Outlaw02_layout");
	Local_4.f_612 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 588)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -3668.0f, 12.0f, 3492.0f, 0.0f, 0.0f, 0.0f, 16.0f, 10.0f, 32.0f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 588)[0]);
	(*&Local_4 + 588)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -4346,712f, 15,7963f, 3212,335f, 0.0f, 67,60052f, 0.0f, 16.0f, 10.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 588)[1]);
	(*&Local_4 + 588)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -4431,079f, 2,064837f, 3125,359f, 0.0f, 739,2762f, 0.0f, 5.0f, 4.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 588)[2]);
	(*&Local_4 + 588)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -4472,856f, 35.0f, 3142,665f, 0.0f, -134,75f, 0.0f, 15.0f, 15.0f, 15.0f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 588)[3]);
	(*&Local_4 + 588)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene05Vol", 2, -4455,938f, 10,70426f, 3271,993f, 0.0f, 0.0f, 0.0f, 20.0f, 8.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 588)[4]);
	Local_4.f_640 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "PreInitVol_set");
	(*&Local_4 + 616)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit02Vol", 2, -4252.0f, 40.0f, 3074.0f, 0.0f, 180.0f, 0.0f, 8.0f, 100.0f, 1024.0f);
	ADD_TO_VOLUME_SET(Local_4.f_640, (*&Local_4 + 616)[0]);
	(*&Local_4 + 616)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit03Vol", 2, -4460.0f, 40.0f, 3198.0f, 0.0f, 90.0f, 0.0f, 204.0f, 100.0f, 112.0f);
	ADD_TO_VOLUME_SET(Local_4.f_640, (*&Local_4 + 616)[1]);
	(*&Local_4 + 616)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit04Vol", 2, -4460.0f, 40.0f, 3112.0f, 0.0f, 90.0f, 0.0f, 32.0f, 100.0f, 112.0f);
	ADD_TO_VOLUME_SET(Local_4.f_640, (*&Local_4 + 616)[2]);
	(*&Local_4 + 616)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit05Vol", 2, -4474.0f, 40.0f, 3104.0f, 0.0f, 90.0f, 0.0f, 16.0f, 100.0f, 84.0f);
	ADD_TO_VOLUME_SET(Local_4.f_640, (*&Local_4 + 616)[3]);
	(*&Local_4 + 616)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit06Vol", 2, -4500.0f, 40.0f, 3252.0f, 0.0f, 90.0f, 0.0f, 96.0f, 100.0f, 32.0f);
	ADD_TO_VOLUME_SET(Local_4.f_640, (*&Local_4 + 616)[4]);
	Local_4.f_696 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ActionVol_set");
	(*&Local_4 + 644)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BlockCaveVol01", 2, -4456,076f, 7,5f, 3141,312f, 0.0f, 64,3241f, 0.0f, 4.0f, 20.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[0]);
	(*&Local_4 + 644)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BlockCaveVol02", 2, -4463,153f, 7,5f, 3121,846f, 0.0f, 122,6785f, 0.0f, 4.0f, 20.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[1]);
	(*&Local_4 + 644)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BlockCaveVol03", 2, -4439,965f, 2,771877f, 3153,817f, 0.0f, -2,937966f, 0.0f, 4.0f, 20.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[2]);
	(*&Local_4 + 644)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BlockTracksVol01", 2, -4514.0f, 20,84354f, 3204.0f, 0.0f, 0.0f, 0.0f, 4.0f, 16.0f, 32.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[3]);
	(*&Local_4 + 644)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BlockTracksVol02", 2, -4498,34f, 15,24227f, 3271,346f, 0.0f, 34.0f, 0.0f, 4.0f, 12.0f, 12.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[4]);
	(*&Local_4 + 644)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CrankhouseWanderVol", 2, -4472.0f, 30.0f, 3128.0f, 0.0f, 90.0f, 0.0f, 64.0f, 25.0f, 56.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[5]);
	(*&Local_4 + 644)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GaptoothBreachStayOutVol", 2, -4418.0f, 40.0f, 3198.0f, 0.0f, 90.0f, 0.0f, 204.0f, 100.0f, 196.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[6]);
	(*&Local_4 + 644)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseStayOutVol", 2, -3691,575f, 12.0f, 3488.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[7]);
	(*&Local_4 + 644)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MainCampWanderVol", 2, -4446.0f, 16,25f, 3266.0f, 0.0f, 90.0f, 0.0f, 36.0f, 20.0f, 52.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[8]);
	(*&Local_4 + 644)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MidTierWanderVol", 2, -4452.0f, 30.0f, 3180.0f, 0.0f, 90.0f, 0.0f, 40.0f, 25.0f, 96.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[9]);
	(*&Local_4 + 644)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MinerRetreatVol", 2, -4438.0f, 0,0645872f, 3120.0f, 0.0f, 90.0f, 0.0f, 32.0f, 6.0f, 36.0f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[10]);
	(*&Local_4 + 644)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RailBuildingWanderVol", 2, -4510,411f, 15,78046f, 3260,052f, 0.0f, 34.0f, 0.0f, 8,5f, 10.0f, 12,75f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 644)[11]);
	Local_4.f_768 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "TriggerVol_set");
	(*&Local_4 + 700)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AlmostHomeFreeVol", 3, -4458,504f, 8,25f, 3274,55f, 0.0f, 719.0f, 0.0f, 10.0f, 20.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[0]);
	(*&Local_4 + 700)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EnterMineBackVol", 2, -4473,481f, 2,012973f, 3143,061f, 0.0f, 760.0f, 0.0f, 10.0f, 2,5f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[1]);
	(*&Local_4 + 700)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EnterMineFrontVol", 2, -4427,81f, 12,95646f, 3201,025f, 0.0f, 357,6206f, 0.0f, 10.0f, 10.0f, 1,5f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[2]);
	(*&Local_4 + 700)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EscapeMineVol", 3, -4476,779f, 7,5f, 3146,604f, 0.0f, 588,6909f, 0.0f, 10.0f, 20.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[3]);
	(*&Local_4 + 700)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FellIntoMineShaftVol", 2, -4473,481f, 2,012973f, 3143,061f, 0.0f, 760.0f, 0.0f, 10.0f, 2,5f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[4]);
	(*&Local_4 + 700)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GaptoothBreachInnerVol", 2, -4432.0f, 40.0f, 3212.0f, 0.0f, 90.0f, 0.0f, 376.0f, 100.0f, 320.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[5]);
	(*&Local_4 + 700)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GaptoothBreachOuterVol", 2, -4432.0f, 40.0f, 3212.0f, 0.0f, 90.0f, 0.0f, 408.0f, 100.0f, 352.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[6]);
	(*&Local_4 + 700)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InRailBuildingVol", 2, -4509,38f, 15,78046f, 3259,356f, 0.0f, 34.0f, 0.0f, 6.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[7]);
	(*&Local_4 + 700)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LoiteringVol", 2, -4352.0f, 16,25f, 3233.0f, 0.0f, 90.0f, 0.0f, 66.0f, 20.0f, 24.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[8]);
	(*&Local_4 + 700)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LiftAreaVol", 2, -4472,856f, 35.0f, 3142,665f, 0.0f, -134,75f, 0.0f, 15.0f, 15.0f, 15.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[9]);
	(*&Local_4 + 700)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LiftBucketVol", 2, -4473,563f, 20,11925f, 3143,151f, 0,7881153f, -139,9125f, -1,061563f, 2,022244f, 38.0f, 1,78371f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[10]);
	(*&Local_4 + 700)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PowderKegVol", 2, -4514,233f, 15,85498f, 3230,432f, 0.0f, -180.0f, 0.0f, 8.0f, 6.0f, 1,5f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[11]);
	(*&Local_4 + 700)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RollMineCartVol", 3, -4462,316f, 8,25f, 3270,794f, 0.0f, 719.0f, 0.0f, 30.0f, 20.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[12]);
	(*&Local_4 + 700)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RideToGaptoothBreachVol", 2, -4346,712f, 40.0f, 3212,335f, 0.0f, 67,60052f, 0.0f, 16.0f, 100.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[13]);
	(*&Local_4 + 700)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SpottedByMinersVol", 2, -4482.0f, 40.0f, 3208.0f, 0.0f, 90.0f, 0.0f, 240.0f, 100.0f, 220.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[14]);
	(*&Local_4 + 700)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TrespassingVol", 2, -4388.0f, 16,25f, 3250.0f, 0.0f, 90.0f, 0.0f, 100.0f, 20.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_768, (*&Local_4 + 700)[15]);
	Local_4.f_848 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "BattleVol_set");
	(*&Local_4 + 772)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideBackVol01", 2, -4474.0f, 7,5f, 3141,98f, 0.0f, 90.0f, 0.0f, 28.0f, 20.0f, 28.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[0]);
	(*&Local_4 + 772)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideBackVol02", 2, -4472.0f, 7,5f, 3122.0f, 0.0f, 90.0f, 0.0f, 20.0f, 20.0f, 32.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[1]);
	(*&Local_4 + 772)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideBackVol03", 2, -4439,605f, 7,5f, 3102.0f, 0.0f, 90.0f, 0.0f, 20.0f, 20.0f, 72.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[2]);
	(*&Local_4 + 772)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideBackVol04", 2, -4412.0f, 7,5f, 3106.0f, 0.0f, 90.0f, 0.0f, 28.0f, 20.0f, 32.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[3]);
	(*&Local_4 + 772)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideBackVol05", 2, -4438.0f, 0,0645872f, 3120.0f, 0.0f, 90.0f, 0.0f, 32.0f, 6.0f, 36.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[4]);
	(*&Local_4 + 772)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideFrontVol01", 2, -4434.0f, 7,5f, 3172.0f, 0.0f, 90.0f, 0.0f, 56.0f, 20.0f, 36.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[5]);
	(*&Local_4 + 772)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideFrontVol02", 2, -4452.0f, 7,5f, 3146.0f, 0.0f, 90.0f, 0.0f, 12.0f, 20.0f, 24.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[6]);
	(*&Local_4 + 772)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideFrontVol03", 2, -4474.0f, 7,5f, 3141,98f, 0.0f, 90.0f, 0.0f, 28.0f, 20.0f, 28.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[7]);
	(*&Local_4 + 772)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideFrontVol04", 2, -4472.0f, 7,5f, 3122.0f, 0.0f, 90.0f, 0.0f, 20.0f, 20.0f, 32.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[8]);
	(*&Local_4 + 772)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideFrontVol05", 2, -4439,605f, 7,5f, 3102.0f, 0.0f, 90.0f, 0.0f, 20.0f, 20.0f, 72.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[9]);
	(*&Local_4 + 772)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideFrontVol06", 2, -4412.0f, 7,5f, 3106.0f, 0.0f, 90.0f, 0.0f, 28.0f, 20.0f, 32.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[10]);
	(*&Local_4 + 772)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideFrontVol07", 2, -4438.0f, 0,0645872f, 3120.0f, 0.0f, 90.0f, 0.0f, 32.0f, 6.0f, 36.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[11]);
	(*&Local_4 + 772)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutsideBackVol01A", 2, -4452.0f, 30.0f, 3180.0f, 0.0f, 90.0f, 0.0f, 40.0f, 25.0f, 96.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[12]);
	(*&Local_4 + 772)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutsideBackVol01B", 2, -4472.0f, 30.0f, 3128.0f, 0.0f, 90.0f, 0.0f, 64.0f, 25.0f, 56.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[13]);
	(*&Local_4 + 772)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutsideFrontVol01", 2, -4444.0f, 16,25f, 3250.0f, 0.0f, 90.0f, 0.0f, 100.0f, 20.0f, 80.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[14]);
	(*&Local_4 + 772)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutsideFrontVol02", 2, -4446.0f, 16,25f, 3242.0f, 0.0f, 90.0f, 0.0f, 84.0f, 20.0f, 52.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[15]);
	(*&Local_4 + 772)[16] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutsideFrontVol03", 2, -4434.0f, 16,25f, 3224.0f, 0.0f, 90.0f, 0.0f, 48.0f, 20.0f, 28.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[16]);
	(*&Local_4 + 772)[17] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutsideFrontVol04", 2, -4430.0f, 16,25f, 3220.0f, 0.0f, 90.0f, 0.0f, 40.0f, 20.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_848, (*&Local_4 + 772)[17]);
	Local_4.f_876 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "EventVol_set");
	(*&Local_4 + 852)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EventVol01", 2, -4425,622f, 7,5f, 3190,682f, 0.0f, 244,348f, 0.0f, 4.0f, 20.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 852)[0]);
	(*&Local_4 + 852)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EventVol02", 2, -4444,12f, 7,5f, 3151,133f, 0.0f, 111,3324f, 0.0f, 4.0f, 20.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 852)[1]);
	(*&Local_4 + 852)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EventVol03", 2, -4459,017f, 7,5f, 3143,612f, 0.0f, -0,5953186f, 0.0f, 4.0f, 20.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 852)[2]);
	(*&Local_4 + 852)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EventVol04", 2, -4477,706f, 7,5f, 3126,163f, 0.0f, 64,3241f, 0.0f, 4.0f, 20.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 852)[3]);
	(*&Local_4 + 852)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EventVol05", 2, -4462,05f, 7,5f, 3099,152f, 0.0f, 0.0f, 0.0f, 4.0f, 20.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 852)[4]);
	Local_4.f_880 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 884)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -3674,274f, 8,196012f, 3497,006f, 0.0f, 72.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 884)[0], Local_4.f_880);
	(*&Local_4 + 884)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -3672,754f, 8,197635f, 3495,562f, 0.0f, 72.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 884)[1], Local_4.f_880);
	(*&Local_4 + 884)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -3692,684f, 8,990259f, 3489,979f, 0.0f, 8,606f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 884)[2], Local_4.f_880);
	(*&Local_4 + 884)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompHorseStart01", -3694,972f, 8,981619f, 3490,133f, 0.0f, -6,097f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 884)[3], Local_4.f_880);
	Local_4.f_904 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 908)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -4347,376f, 13,01225f, 3212,229f, 0.0f, 135.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[0], Local_4.f_904);
	(*&Local_4 + 908)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -4352,362f, 13,2604f, 3216,831f, 0.0f, 123,933f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[1], Local_4.f_904);
	(*&Local_4 + 908)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerMark02", -4352,362f, 13,2604f, 3216,831f, 0.0f, 123,933f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[2], Local_4.f_904);
	(*&Local_4 + 908)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -4346,165f, 12,91193f, 3213,176f, 0.0f, 158,6693f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[3], Local_4.f_904);
	(*&Local_4 + 908)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -4352,141f, 25,66378f, 2755,905f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[4], Local_4.f_904);
	(*&Local_4 + 908)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionMark02", -4340,765f, 12,90798f, 3222,189f, 0.0f, 236,1708f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[5], Local_4.f_904);
	(*&Local_4 + 908)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd02", -4352,141f, 25,66378f, 2753,983f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[6], Local_4.f_904);
	(*&Local_4 + 908)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseMark02", -4340,765f, 12,90798f, 3222,189f, 0.0f, 236,1708f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[7], Local_4.f_904);
	(*&Local_4 + 908)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CompHorseEnd02", -4352,141f, 25,66378f, 2753,983f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[8], Local_4.f_904);
	(*&Local_4 + 908)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "WelcomeParty01Start02", -4428,066f, 8,53166f, 3245,774f, 0.0f, 227,1441f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[9], Local_4.f_904);
	(*&Local_4 + 908)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "WelcomeParty01End02", -4366.0f, 12,6148f, 3224,87f, 0.0f, 301,4246f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[10], Local_4.f_904);
	(*&Local_4 + 908)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "WelcomeParty01Mark02", -4366.0f, 12,6148f, 3224,87f, 0.0f, 301,4246f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[11], Local_4.f_904);
	(*&Local_4 + 908)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "WelcomeParty02Start02", -4430,098f, 8,512501f, 3247,973f, 0.0f, 227,5606f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[12], Local_4.f_904);
	(*&Local_4 + 908)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "WelcomeParty02End02", -4365,929f, 12,77568f, 3227,298f, -0,656763f, 306,9505f, 0,681389f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[13], Local_4.f_904);
	(*&Local_4 + 908)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "WelcomeParty02Mark02", -4365,929f, 12,77568f, 3227,298f, -0,656763f, 306,9505f, 0,681389f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[14], Local_4.f_904);
	(*&Local_4 + 908)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "StreamAltPOI02", -4417,704f, 8,533113f, 3258,561f, 0.0f, 132,1663f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 908)[15], Local_4.f_904);
	Local_4.f_976 = CREATE_OBJECTSET_IN_LAYOUT("Teleport01Set", Local_4, 8, 0);
	(*&Local_4 + 980)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerTeleport01A", -4425,622f, 8,568565f, 3190,682f, 0.0f, -19,27355f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 980)[0], Local_4.f_976);
	(*&Local_4 + 980)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerTeleport01B", -4465,451f, 2,006595f, 3143,593f, 0.0f, 90,18207f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 980)[1], Local_4.f_976);
	(*&Local_4 + 980)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionTeleport01", -4352,141f, 25,66378f, 2755,905f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 980)[2], Local_4.f_976);
	Local_4.f_996 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 1000)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -4432,226f, 0,475154f, 3125,852f, 0.0f, 649,2762f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1000)[0], Local_4.f_996);
	(*&Local_4 + 1000)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -4430,68f, 0,5071566f, 3126,805f, 0.0f, 374,3796f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1000)[1], Local_4.f_996);
	(*&Local_4 + 1000)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -4352,141f, 25,66378f, 2755,905f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1000)[2], Local_4.f_996);
	Local_4.f_1016 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 1020)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -4474,446f, 1,298212f, 3141,912f, 0.0f, 940.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[0], Local_4.f_1016);
	(*&Local_4 + 1020)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerMid04_01", -4474,612f, 1,357391f, 3144,667f, 0.0f, 670.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[1], Local_4.f_1016);
	(*&Local_4 + 1020)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerMid04_02", -4474,612f, 35,54186f, 3144,667f, 0.0f, 670.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[2], Local_4.f_1016);
	(*&Local_4 + 1020)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerMid04_03", -4468,217f, 28,58269f, 3143,331f, 0.0f, 546,4465f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[3], Local_4.f_1016);
	(*&Local_4 + 1020)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -4469,211f, 28,5778f, 3145,818f, 0.0f, 495.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[4], Local_4.f_1016);
	(*&Local_4 + 1020)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -4474,862f, 28,57102f, 3141,326f, 0.0f, 219.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[5], Local_4.f_1016);
	(*&Local_4 + 1020)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionMid04_01", -4464,398f, 28,60691f, 3133,416f, 0.0f, 303.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[6], Local_4.f_1016);
	(*&Local_4 + 1020)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionMid04_02", -4475,68f, 28,56377f, 3144,919f, 0.0f, 309,7234f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[7], Local_4.f_1016);
	(*&Local_4 + 1020)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionMid04_03", -4469,764f, 28,54447f, 3148,678f, 0.0f, 360,3854f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[8], Local_4.f_1016);
	(*&Local_4 + 1020)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd04", -4468,974f, 28,57478f, 3147,142f, 0.0f, -35,75798f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[9], Local_4.f_1016);
	(*&Local_4 + 1020)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd04", -4456.0f, 28,61154f, 3152f, 0.0f, 243,3488f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[10], Local_4.f_1016);
	(*&Local_4 + 1020)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCartStart04", -4476,779f, 1,524901f, 3146,604f, 0.0f, 588,6909f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[11], Local_4.f_1016);
	(*&Local_4 + 1020)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCartEnd04", -4469,918f, 28,5553f, 3146,525f, 0.0f, 495.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1020)[12], Local_4.f_1016);
	Local_4.f_1076 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 1080)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -4462,337f, 8,533224f, 3272,044f, 0.0f, 719.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[0], Local_4.f_1076);
	(*&Local_4 + 1080)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerMid05_01", -4460,487f, 8,532429f, 3271,37f, 0.0f, 280.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[1], Local_4.f_1076);
	(*&Local_4 + 1080)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerMid05_02", -4458,408f, 8,533562f, 3270,98f, 0.0f, 260.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[2], Local_4.f_1076);
	(*&Local_4 + 1080)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd05", -4458,967f, 8,532f, 3272,047f, 0.0f, 173,77f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[3], Local_4.f_1076);
	(*&Local_4 + 1080)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -4458,504f, 8,51453f, 3274,55f, 0.0f, 143,04f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[4], Local_4.f_1076);
	(*&Local_4 + 1080)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionMid05", -4454,152f, 8,517f, 3271,51f, 0.0f, 237,6206f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[5], Local_4.f_1076);
	(*&Local_4 + 1080)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd05", -4400,959f, 8,103735f, 3361,33f, 0.0f, 265,1923f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[6], Local_4.f_1076);
	(*&Local_4 + 1080)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart05", -4458,504f, 8,51453f, 3274,55f, 0.0f, 143,04f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[7], Local_4.f_1076);
	(*&Local_4 + 1080)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd05", -4469,829f, 8,410918f, 3289,6f, 0.0f, 143,04f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[8], Local_4.f_1076);
	(*&Local_4 + 1080)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCartStart05", -4462,316f, 8,535164f, 3270,794f, 0.0f, 719.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[9], Local_4.f_1076);
	(*&Local_4 + 1080)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "SupplyWagonStart05", -4456,296f, 8,527809f, 3272,443f, 0.0f, -125.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[10], Local_4.f_1076);
	Local_4.f_1128 = CREATE_OBJECTSET_IN_LAYOUT("EventFlagSet", Local_4, 8, 0);
	(*&Local_4 + 1132)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "EventFlag01", -4422,415f, 7,999504f, 3181,51f, 0.0f, 160,7264f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[0], Local_4.f_1128);
	(*&Local_4 + 1132)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "EventFlag02", -4462,465f, 2,53475f, 3144,518f, 0.0f, 272,2872f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[1], Local_4.f_1128);
	(*&Local_4 + 1132)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "EventFlag03", -4469,144f, 1,533367f, 3143,33f, 0.0f, -93,48697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[2], Local_4.f_1128);
	(*&Local_4 + 1132)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "EventFlag04", -4466,036f, 4,482996f, 3118,28f, 0.0f, 107,57f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[3], Local_4.f_1128);
	(*&Local_4 + 1132)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "EventFlag05", -4427,174f, 3,554859f, 3104,671f, 0.0f, 86,49945f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[4], Local_4.f_1128);
	Local_4.f_1156 = CREATE_OBJECTSET_IN_LAYOUT("ActionFlagSet", Local_4, 8, 0);
	(*&Local_4 + 1160)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Crate01HidingSpotFlag", -4434,188f, 25,95795f, 3166,582f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[0], Local_4.f_1156);
	(*&Local_4 + 1160)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Crate02HidingSpotFlag", -4430,55f, 25,95795f, 3166,582f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[1], Local_4.f_1156);
	(*&Local_4 + 1160)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CrateInLiftBucketFlag", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[2], Local_4.f_1156);
	(*&Local_4 + 1160)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CrateInMineCartFlag", -0,2539f, 0,421f, 0,4082f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[3], Local_4.f_1156);
	(*&Local_4 + 1160)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CrateInSupplyWagonFlag", -0,2532f, 1,209f, 1,9013f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[4], Local_4.f_1156);
	(*&Local_4 + 1160)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "GaptoothBreachFlag", -4427,573f, 8,533299f, 3201,854f, 0.0f, -1,455596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[5], Local_4.f_1156);
	(*&Local_4 + 1160)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "HitchingPostFlag", -3694,364f, 8,967323f, 3488,467f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[6], Local_4.f_1156);
	(*&Local_4 + 1160)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "IrishWaitForPlayerFlag", -4458,504f, 8,51453f, 3274,55f, 0.0f, 143,04f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[7], Local_4.f_1156);
	(*&Local_4 + 1160)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "MineBackFlag", -4473,897f, 1,297834f, 3143,457f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[8], Local_4.f_1156);
	(*&Local_4 + 1160)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCenterFlag", -4442,547f, 2,569792f, 3153,903f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[9], Local_4.f_1156);
	(*&Local_4 + 1160)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "MineFrontFlag", -4427,573f, 8,533299f, 3201,854f, 0.0f, -1,455596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[10], Local_4.f_1156);
	(*&Local_4 + 1160)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCartFlag", -4431,079f, 0,5026309f, 3125,359f, 0.0f, 739,2762f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[11], Local_4.f_1156);
	(*&Local_4 + 1160)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCartOffsetBackFlag", 0.0f, 0.0f, -1,3327f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[12], Local_4.f_1156);
	(*&Local_4 + 1160)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCartOffsetFrontFlag", 0.0f, 0.0f, 1,439f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[13], Local_4.f_1156);
	(*&Local_4 + 1160)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCartOffsetSideFlag", -1,2457f, 0.0f, 0,0871f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[14], Local_4.f_1156);
	(*&Local_4 + 1160)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "MineCoreFlag", -4438,055f, -0,3254981f, 3120,442f, 0.0f, 711,4324f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[15], Local_4.f_1156);
	(*&Local_4 + 1160)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "MinerRetreatFlag01", -4427,81f, 8,61934f, 3201,025f, 0.0f, 357,6206f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[16], Local_4.f_1156);
	(*&Local_4 + 1160)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "MinerRetreatFlag02", -4444,173f, 3,537312f, 3163,352f, 0.0f, 55,50991f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[17], Local_4.f_1156);
	(*&Local_4 + 1160)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "MinerRetreatFlag03", -4438,055f, -0,3254981f, 3120,442f, 0.0f, 81,31999f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[18], Local_4.f_1156);
	(*&Local_4 + 1160)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "MinerWelcomeParty01GotoFlag", -4366.0f, 12,59897f, 3224,87f, 0.0f, 301,4246f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[19], Local_4.f_1156);
	(*&Local_4 + 1160)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "MinerWelcomeParty02GotoFlag", -4365,929f, 12,77568f, 3227,298f, -0,656763f, 306,9505f, 0,681389f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[20], Local_4.f_1156);
	(*&Local_4 + 1160)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "OldWinchFlag", -4463,677f, 28,87603f, 3133,278f, 0.0f, 488,0865f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[21], Local_4.f_1156);
	(*&Local_4 + 1160)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "OutsideEscape01ShootFlag", -4508.0f, 27,34377f, 3160f, 0.0f, -71,35245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[22], Local_4.f_1156);
	(*&Local_4 + 1160)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "OutsideEscape02ShootFlag", -4508,826f, 24,1348f, 3183,706f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[23], Local_4.f_1156);
	(*&Local_4 + 1160)[24] = CREATE_POINT_IN_LAYOUT(Local_4, "Pickup01Flag", -4439,196f, -0,409433f, 3125,199f, 0.0f, 374,3796f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[24], Local_4.f_1156);
	(*&Local_4 + 1160)[25] = CREATE_POINT_IN_LAYOUT(Local_4, "Pickup02Flag", -4434,801f, 0,5217391f, 3128,837f, 0.0f, 374,3796f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[25], Local_4.f_1156);
	(*&Local_4 + 1160)[26] = CREATE_POINT_IN_LAYOUT(Local_4, "Pickup03Flag", -4431,474f, 0,4769607f, 3124,401f, 0.0f, 374,3796f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[26], Local_4.f_1156);
	(*&Local_4 + 1160)[27] = CREATE_POINT_IN_LAYOUT(Local_4, "Pickup04Flag", -4432,563f, 0,3057425f, 3119,301f, 0.0f, 374,3796f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[27], Local_4.f_1156);
	(*&Local_4 + 1160)[28] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerInLiftBucketFlag", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[28], Local_4.f_1156);
	(*&Local_4 + 1160)[29] = CREATE_POINT_IN_LAYOUT(Local_4, "PowderKegFlag", -4513,955f, 15,85498f, 3230,523f, 0.0f, 139,0215f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[29], Local_4.f_1156);
	(*&Local_4 + 1160)[30] = CREATE_POINT_IN_LAYOUT(Local_4, "ShootNearPowderKegFlag", -4510,273f, 15,954f, 3229,752f, 0.0f, 18,295f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[30], Local_4.f_1156);
	(*&Local_4 + 1160)[31] = CREATE_POINT_IN_LAYOUT(Local_4, "StreamAltPOIPowderKeg", -4511,525f, 12,17798f, 3253,006f, 0.0f, -145,8539f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[31], Local_4.f_1156);
	(*&Local_4 + 1160)[32] = CREATE_POINT_IN_LAYOUT(Local_4, "SupplyWagonOffsetFlag", 0.0f, 0.0f, 2,7267f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[32], Local_4.f_1156);
	Local_4.f_1296 = CREATE_OBJECTSET_IN_LAYOUT("TriggerFlagSet", Local_4, 8, 0);
	(*&Local_4 + 1300)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "EscapeMineGatewayFlag", -4476,779f, 1,524901f, 3146,604f, 0.0f, 588,6909f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[0], Local_4.f_1296);
	(*&Local_4 + 1300)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "GaptoothBreachRoadFlag", -4188,186f, 16,34601f, 3087,676f, 0.0f, 66,61306f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[1], Local_4.f_1296);
	(*&Local_4 + 1300)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "GaptoothBreachShackFlag", -4335,465f, 16,51109f, 3192,526f, 0.0f, 509,5202f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[2], Local_4.f_1296);
	(*&Local_4 + 1300)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "GaptoothBreachTurnFlag", -4166,278f, 11,88363f, 3136,219f, 0.0f, 9,225461f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[3], Local_4.f_1296);
	(*&Local_4 + 1300)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "GetToMineCoreGatewayFlag", -4432,226f, 0,475154f, 3125,852f, 0.0f, 649,2762f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[4], Local_4.f_1296);
	(*&Local_4 + 1300)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "GoingDownHillFlag", -4514,218f, 24,16433f, 3178,537f, 0.0f, 900,0735f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[5], Local_4.f_1296);
	(*&Local_4 + 1300)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RollMineCartGatewayFlag", -4462,316f, 8,535164f, 3270,794f, 0.0f, 719.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[6], Local_4.f_1296);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover01", -4453,926f, 12,618f, 3225,721f, 0.0f, 209,2187f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover02", -4456,794f, 16,052f, 3214,133f, 0.0f, 29,07154f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover03", -4426,696f, 6,701437f, 3172,029f, 0.0f, 211,1524f, 0.0f, 4);
	Local_4.f_1332 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover04", -4454,759f, 2,548524f, 3146,653f, 0.0f, 253,961f, 0.0f, 4);
	Local_4.f_1336 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover05", -4477,285f, 1,620933f, 3151,326f, 0.0f, -31,91767f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover06", -4482,028f, 2,534517f, 3130,835f, 0.0f, 213,0261f, 0.0f, 4);
	Local_4.f_1340 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover07", -4471,834f, 4,543998f, 3117,979f, 0.0f, 118,2564f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover08", -4467,98f, 4,621925f, 3119,827f, 0.0f, 105,3092f, 0.0f, 4);
	Local_4.f_1344 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover09", -4448,678f, 5,520928f, 3102,264f, 0.0f, 90,23727f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover10", -4432,271f, 3,593189f, 3105,224f, 0.0f, 104,9251f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover11", -4407,786f, 2,360869f, 3101,635f, 0.0f, 53.0f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover12", -4433,008f, 0,5413505f, 3129,284f, 0.0f, 15,22374f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LowCover13", -4508,328f, 12,168f, 3260,581f, 0.0f, 30,72593f, 0.0f, 4);
}

struct<8> ^EMÛéÅ73@øËEN>ÅD*@ùjENVÅQ@øÿ_EN>Å^@øúªENËæÅf7@ù)CEOÏÅc+@üåEO_õÅY­AzEOÀÅNÚAìMEOÆ|ÅAzA Iq(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168) //Position: 0x22FF6 / 143350
{
	var uVar410;
	var uVar17574;
	
	PatchTrapA();
	Unknown_Function();
	return 196, 64;
	itos(0, StackVal ^ (*0)[StackVal * 2048279] * 253 + 96, 69);
	return StackVal, Global_29808 != 0, 64;
	return 4294967295 * 246;
	uLocal_197 = (StackVal + StackVal) * 20647 * 20695;
	*3 = 4294967295 * 236;
	Unknown_Function();
	PatchRet();
	PatchTrapA();
	Global_32629 = &Global_15746385 < 4294967295 * 228[&Global_4256637 * 20740 * 20782 >= 4294967295 * 23069];
	return 4294967295, 4294967295;
	PatchTrapC();
}

void Function_663(int iParam0, int iParam1) //Position: 0x2405B / 147547
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

bool Function_664() //Position: 0x240A4 / 147620
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_665())
		{
			return 0;
		}
		if (!Function_387(&bLocal_357))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_665() //Position: 0x240C7 / 147655
{
	Function_666(&Local_4 + 4, "p_gen_crateGatling01x", 0, 0);
	Function_666(&Local_4 + 4, "p_gen_crateGatling02x", 0, 0);
	Function_666(&Local_4 + 4, "p_gen_bottleJD01x", 0, 0);
	if (Function_387(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_666(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2413C / 147772
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_667(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_390(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_667(var uParam0, int iParam1, int iParam2) //Position: 0x24174 / 147828
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_188(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_390(uParam0[iVar03], 4);
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

bool Function_668() //Position: 0x24238 / 148024
{
	Function_365(&Local_398, 1, 0);
	switch (Local_398)
	{
		case 0x000003E8:
			if (iLocal_405 != 99 && (Function_476(&Local_350) || Local_350.f_24 < 1))
			{
				Local_398 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTLAW_02/OUTLAW_02"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_398 = 1106;
				return 0;
			}
			Function_361(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			iLocal_577 = 0;
			Function_669(bLocal_349, -3673,812f, 8,102061f, 3495,583f, &Local_398 + 20, 1, 0, 0, 0, 1, 1);
			Function_639();
			Function_195(1, 0, 1);
			Global_63097 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/OUTLAW_02/OUTLAW_02", 0, 2, 1, 2, 2);
			Function_272(&Local_398 + 4);
			Local_398 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_339(&Local_398 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_398 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -3674,274f, 8,196012f, 3497,006f, 72.0f, 1, true, 1);
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-3670,794f, 9,988f, 3497,926f, -2,979f, 72.0f, 0.0f);
				Local_398 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_665();
			Function_387(&bLocal_357);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_398 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Function_566(3.0f);
				Function_637();
				HUD_ENABLE(true);
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_398.f_20);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_398.f_20);
				DESTROY_VOLUME(Local_398.f_20);
				if (iLocal_577)
				{
					Function_329(2, 0, 1, 0, 1, 1, 1, 1, 1, 1);
				}
				else
				{
					Function_329(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				}
				Local_398 = 1000;
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
				iLocal_577 = 1;
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_247();
				Function_246();
				Local_398 = 1104;
			}
			break;
		
		case 0x00000452:
			iLocal_577 = 1;
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_247();
			Function_246();
			Local_398 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_669(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x2451D / 148765
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
				Function_670(bVar1, bParam0);
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

void Function_670(bool bParam0, bool bParam1) //Position: 0x2478B / 149387
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

void Function_671() //Position: 0x24800 / 149504
{
	iLocal_574 = 0;
	Function_660("FTR_SONG_09", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_248(0);
	Function_676();
	Function_675();
	vLocal_557 = { -3694,364f, 8,967323f, 3488,467f };
	Function_674(StackVal, StackVal, vLocal_557, &bLocal_553, &bLocal_554);
	Function_673();
	Function_672();
	return;
}

void Function_672() //Position: 0x24857 / 149591
{
	bLocal_412 = CREATE_ACTOR_IN_LAYOUT(bLocal_349, "nCompHorse", 981, -3694,972f, 8,981619f, 3490,133f, 0.0f, -6,097f, 0.0f);
	if (IS_ACTOR_ALIVE(bLocal_412))
	{
		ACCESSORIZE_HORSE(bLocal_412, 3);
		Function_472(bLocal_412);
		SET_ACTOR_FACTION(bLocal_412, 20);
		SET_MOST_RECENT_MOUNT(bLocal_410, bLocal_412);
		SET_ACTOR_INVULNERABILITY(bLocal_412, true);
		SET_ACTOR_MAX_HEALTH(bLocal_412, 50.0f);
		SET_ACTOR_HEALTH(bLocal_412, 50.0f);
		if (IS_GRINGO_VALID(bLocal_553))
		{
			TASK_CLEAR(bLocal_412);
			TASK_PRIORITY_SET(bLocal_412, true);
			TASK_USE_GRINGO(bLocal_412, bLocal_553, "UseCase1", 4294967295, 1);
		}
		else
		{
			TASK_CLEAR(bLocal_412);
			TASK_PRIORITY_SET(bLocal_412, true);
			TASK_STAND_STILL(bLocal_412, -1.0f, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to create/setup CompHorse properly!");
	}
	return;
}

void Function_673() //Position: 0x24948 / 149832
{
	if (IS_ACTOR_ALIVE(bLocal_411))
	{
		TELEPORT_ACTOR_WITH_HEADING(bLocal_411, -3692,684f, 8,990259f, 3489,979f, 8,606f, 1, true, 1);
		ACCESSORIZE_HORSE(bLocal_411, 4);
		RESET_ACTOR_GAITS(bLocal_411, 0);
		Function_472(bLocal_411);
		SET_ACTOR_FACTION(bLocal_411, 20);
		SET_ACTOR_INVULNERABILITY(bLocal_411, true);
		SET_ACTOR_MAX_HEALTH(bLocal_411, 50.0f);
		SET_ACTOR_HEALTH(bLocal_411, 50.0f);
		if (IS_GRINGO_VALID(bLocal_554))
		{
			TASK_CLEAR(bLocal_411);
			TASK_PRIORITY_SET(bLocal_411, true);
			TASK_USE_GRINGO(bLocal_411, bLocal_554, "UseCase1", 4294967295, 1);
		}
		else
		{
			TASK_CLEAR(bLocal_411);
			TASK_PRIORITY_SET(bLocal_411, true);
			TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to setup PlayerHorse properly!");
	}
	return;
}

void Function_674(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x24A21 / 150049
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_675() //Position: 0x24ACB / 150219
{
	if (IS_ACTOR_ALIVE(bLocal_410))
	{
		Function_225(0, 0, 1);
		RESET_ACTOR_GAITS(bLocal_410, 0);
		Function_472(bLocal_410);
		SET_ACTOR_FACTION(bLocal_410, 20);
		AI_BEHAVIOR_SET_ALLOW(bLocal_410, 0, 0);
		SET_CRIPPLE_ENABLE(bLocal_410, 0);
		SET_ACTOR_INVULNERABILITY(bLocal_410, true);
		SET_ACTOR_MAX_HEALTH(bLocal_410, 50.0f);
		SET_ACTOR_HEALTH(bLocal_410, 50.0f);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_410, true);
		TASK_CLEAR(bLocal_410);
		TASK_PRIORITY_SET(bLocal_410, true);
		TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
		TELEPORT_ACTOR_WITH_HEADING(bLocal_410, -3672,754f, 8,197635f, 3495,562f, 72.0f, 1, true, 1);
	}
	else
	{
		LOG_ERROR("Failed to setup Irish properly!");
	}
	return;
}

void Function_676() //Position: 0x24B83 / 150403
{
	SET_ACTOR_INVULNERABILITY(Global_34573, true);
	return;
}

bool Function_677() //Position: 0x24B90 / 150416
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_694(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_693())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_410))
		{
			bLocal_410 = Function_685(0, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_684())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_411))
		{
			bLocal_411 = Function_678(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
	}
	return 1;
}

bool Function_678(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x24BFB / 150523
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
	if (Global_3381 || Function_281(1))
	{
		Function_683(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_684())
		{
			return "";
		}
	}
	if (!Function_681())
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
		Function_290(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_290(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_290(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_290(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_680(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_680(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_679(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

void Function_679(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x24F53 / 151379
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

var Function_680(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x24F90 / 151440
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

bool Function_681() //Position: 0x2502B / 151595
{
	if (Function_682() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_682() //Position: 0x25041 / 151617
{
	return Global_12976.f_152;
}

void Function_683(var uParam0, bool bParam1, bool bParam2) //Position: 0x2504C / 151628
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

bool Function_684() //Position: 0x25079 / 151673
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

bool Function_685(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x25099 / 151705
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
		Function_225(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_692(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_688(StackVal, uParam7);
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
		Function_687(bVar1, 0, 0, 0, 0);
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
		Function_686(bVar1, 0);
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

void Function_686(bool bParam0, bool bParam1) //Position: 0x25583 / 152963
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_687(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x255A3 / 152995
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

bool Function_688(int iParam0, bool bParam1) //Position: 0x255F7 / 153079
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_598(iParam0))
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
						Function_689(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_689(bool bParam0, bool bParam1) //Position: 0x25677 / 153207
{
	Function_691(bParam0);
	Function_690(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_690(bool bParam0) //Position: 0x2569D / 153245
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_691(bool bParam0) //Position: 0x256C1 / 153281
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

bool Function_692(int iParam0, bool bParam1) //Position: 0x25790 / 153488
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

bool Function_693() //Position: 0x25823 / 153635
{
	Function_392(&Local_4 + 44, 981, 2, 0);
	if (Function_387(&Local_4 + 44))
	{
		return 1;
	}
	return 0;
}

bool Function_694(bool bParam0) //Position: 0x25843 / 153667
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

void Function_695() //Position: 0x25871 / 153713
{
	Function_392(&bLocal_357, 1203, 2, 0);
	Function_666(&bLocal_357, "Outlaw02", 10, 0);
	Function_666(&bLocal_357, "stand_ambient", 5, 0);
	Function_666(&bLocal_357, "custom/stand_ambient", 8, 0);
	Function_666(&bLocal_357, "out02_marston", 5, 0);
	Function_666(&bLocal_357, "custom/out02_marston", 8, 0);
	Function_666(&bLocal_357, "out02_irish", 5, 0);
	Function_666(&bLocal_357, "custom/out02_irish", 8, 0);
	Function_666(&bLocal_357, "dynamite", 5, 0);
	Function_666(&bLocal_357, "custom/dynamite", 8, 0);
	Function_666(&bLocal_357, "p_gen_powderKeg02x", 0, 0);
	return;
}

void Function_696(var uParam0, bool bParam1) //Position: 0x25990 / 154000
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_703(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_476(uParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_13(*uParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_22(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_476(uParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_702();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_247();
	Function_246();
	Function_282("");
	Function_701(0);
	Function_700();
	Function_209();
	Function_208();
	ENABLE_JOURNAL_REPLAY(0);
	Function_699();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_401(0, 0x40400000);
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
	Function_698(13);
	Function_698(14);
	Function_698(25);
	Function_698(24);
	Function_698(12);
	Function_698(27);
	Function_698(26);
	Function_698(15);
	Function_697();
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

void Function_697() //Position: 0x25DB4 / 155060
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

void Function_698(int iParam0) //Position: 0x25E28 / 155176
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_699() //Position: 0x25E48 / 155208
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

void Function_700() //Position: 0x25E85 / 155269
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_701(int iParam0) //Position: 0x25E99 / 155289
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_212())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_702() //Position: 0x25ECE / 155342
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_703(int iParam0, int iParam1) //Position: 0x25ED7 / 155351
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
			Function_704(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_704(int iParam0) //Position: 0x25F59 / 155481
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

bool Function_705(int iParam0) //Position: 0x25FA7 / 155559
{
	switch (iParam0->f_16)
	{
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000001:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_713();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ShootsIrishWagonHorse", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (StackVal && Function_425(Function_425(StackVal) == bLocal_349) == Local_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_712();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_AssOnAmbGapt", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (iLocal_405 >= 0)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_711();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ShootsIrish", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					else if (!iParam0->f_12)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_711();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ShootsIrish", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_710();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ShootsIrisHorseGapt", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000001:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_713();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ShootsIrishWagonHorse", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (StackVal && Function_425(Function_425(StackVal) == bLocal_349) == Local_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_709();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ShootsAmbGapt", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000400:
			switch (StackVal)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_708();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_BumpsIrishGapt", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
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
			switch (StackVal)
			{
				case 0x00000000:
					if (iParam0->f_16 != 64)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_707();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_AssaultsIrish", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
				
				case 0x00000001:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_713();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_ShootsIrishWagonHorse", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (StackVal && Function_425(Function_425(StackVal) == bLocal_349) == Local_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_712();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Outlaw02_AssOnAmbGapt", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
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
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(bLocal_410))
		{
			Function_706(iParam0, 1);
			return 1;
		}
	}
	Function_706(iParam0, 0);
	return 0;
}

void Function_706(int iParam0, bool bParam1) //Position: 0x263BB / 156603
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

void Function_707() //Position: 0x263DF / 156639
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_AssaultsIrish", "Outlaw02_AssaultsIrish", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_708() //Position: 0x26434 / 156724
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BumpsIrishGapt", "Outlaw02_BumpsIrishGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_709() //Position: 0x2648B / 156811
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsAmbGapt", "Outlaw02_ShootsAmbGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_710() //Position: 0x264E0 / 156896
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsIrisHorseGapt", "Outlaw02_ShootsIrisHorseGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_711() //Position: 0x26541 / 156993
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsIrish", "Outlaw02_ShootsIrish", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_712() //Position: 0x26592 / 157074
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_AssOnAmbGapt", "Outlaw02_AssOnAmbGapt", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_713() //Position: 0x265E5 / 157157
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsIrishWagonHorse", "Outlaw02_ShootsIrishWagonHorse", false, 1, 1, 0, 1);
		Function_344(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_714(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x2664A / 157258
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
		Function_706(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_733(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_732(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_732(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_718(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_706(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_717(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_716(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_717(&bVar17);
														strcpy(&Var18, "", 64);
														Function_715(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_282(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_716(StackVal, iParam2, bVar17);
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
	Function_706(iParam2, 0);
	return 0;
}

void Function_715(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x269E3 / 158179
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

void Function_716(var uParam0, int iParam1, bool bParam2) //Position: 0x26ACE / 158414
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

void Function_717(bool bParam0) //Position: 0x26B44 / 158532
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_718(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x26B66 / 158566
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
			return Function_729(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_722(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_729(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_719(iParam0, bVar2);
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
						bVar2 = Function_729(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_719(iParam0, bVar2);
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

var Function_719(int iParam0, bool bParam1) //Position: 0x26CB0 / 158896
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
				bParam1 = Function_721(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_720(16);
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
				bParam1 = Function_721(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_720(256);
			}
		}
	}
	return bParam1;
}

bool Function_720(int iParam0) //Position: 0x26DE3 / 159203
{
	return 2 | iParam0;
}

int Function_721(int iParam0) //Position: 0x26DED / 159213
{
	return 4 | iParam0;
}

int Function_722(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x26DF7 / 159223
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
				iParam3 = Function_728(iParam0, iParam1, bParam4);
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
			return Function_720(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_723(iParam0, iParam1, 0, bParam4);
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
			return Function_720(16);
		}
	}
	return 0;
}

int Function_723(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26EA9 / 159401
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_727(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_726(iVar0, 3, 1, bParam3))
			{
				if (!Function_732(iParam0, 8, 1))
				{
					return Function_725(64, 1024, bParam2);
				}
			}
			return Function_724(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_726(iVar0, 2, 1, bParam3))
			{
				if (!Function_732(iParam0, 32, 1))
				{
					return Function_725(64, 1024, bParam2);
				}
			}
			return Function_724(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_726(iVar0, 1, 1, bParam3))
			{
				if (!Function_732(iParam0, 64, 1))
				{
					return Function_725(64, 1024, bParam2);
				}
			}
			return Function_724(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_726(iVar0, 3, 1, bParam3))
			{
				if (!Function_732(iParam0, 128, 1))
				{
					return Function_725(64, 1024, bParam2);
				}
			}
			return Function_724(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_726(iVar0, 1, 1, bParam3))
			{
				if (!Function_732(iParam0, 1024, 1))
				{
					return Function_725(64, 1024, bParam2);
				}
			}
			return Function_724(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_726(iVar0, 1, 1, bParam3))
			{
				if (!Function_732(iParam0, 1024, 1))
				{
					return Function_725(64, 1024, bParam2);
				}
			}
			return Function_724(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_724(int iParam0, int iParam1, bool bParam2) //Position: 0x27063 / 159843
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_725(int iParam0, int iParam1, bool bParam2) //Position: 0x27078 / 159864
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_726(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2708D / 159885
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_727(int iParam0) //Position: 0x270AA / 159914
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

int Function_728(var uParam0, int iParam1, bool bParam2) //Position: 0x27119 / 160025
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_727(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_726(iVar0, 3, 1, bParam2))
			{
				if (!Function_732(uParam0, 8, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000009:
			if (Function_726(iVar0, 3, 1, bParam2))
			{
				if (!Function_732(uParam0, 8, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x0000006E:
			if (Function_726(iVar0, 2, 1, bParam2))
			{
				if (!Function_732(uParam0, 16, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x0000005B:
			if (Function_726(iVar0, 2, 1, bParam2))
			{
				if (!Function_732(uParam0, 32, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000031:
			if (Function_726(iVar0, 1, 1, bParam2))
			{
				if (!Function_732(uParam0, 64, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000007:
			if (Function_726(iVar0, 3, 1, bParam2))
			{
				if (!Function_732(uParam0, 128, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000008:
			if (Function_726(iVar0, 2, 1, bParam2))
			{
				if (!Function_732(uParam0, 256, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000014:
			if (Function_726(iVar0, 1, 1, bParam2))
			{
				if (!Function_732(uParam0, 512, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000018:
			if (Function_726(iVar0, 1, 1, bParam2))
			{
				if (!Function_732(uParam0, 512, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000057:
			if (Function_726(iVar0, 1, 1, bParam2))
			{
				if (!Function_732(uParam0, 1024, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000058:
			if (Function_726(iVar0, 1, 1, bParam2))
			{
				if (!Function_732(uParam0, 1024, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_729(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x27334 / 160564
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
						return Function_728(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_732(iParam0, 2, 1))
					{
						return Function_721(8);
					}
					return Function_720(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_732(iParam0, 4, 1))
					{
						return Function_721(16);
					}
					return Function_720(16);
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
							return Function_723(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_732(iParam0, 2, 1))
						{
							return Function_721(128);
						}
						return Function_720(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_732(iParam0, 4, 1))
						{
							return Function_721(256);
						}
						return Function_720(256);
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
						return Function_723(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_732(iParam0, 2, 1))
					{
						return Function_721(8);
					}
					return Function_720(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_732(iParam0, 4, 1))
					{
						return Function_721(16);
					}
					return Function_720(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_731(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_732(iParam0, 2, 1))
					{
						return Function_721(8);
					}
					return Function_720(8);
				}
				if (!Function_732(iParam0, 4, 1))
				{
					return Function_721(16);
				}
				return Function_720(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_723(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_730(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_720(128);
							}
							if (!Function_732(iParam0, 2, 1))
							{
								return Function_721(8);
							}
							return Function_720(8);
						}
						if (iParam4 == 2)
						{
							if (Function_730(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_720(256);
							}
							if (!Function_732(iParam0, 4, 1))
							{
								return Function_721(16);
							}
							return Function_720(16);
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

bool Function_730(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x275F3 / 161267
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

int Function_731(int iParam0, var uParam1, bool bParam2) //Position: 0x276AC / 161452
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_727(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_726(iVar0, 2, 1, bParam2))
			{
				if (!Function_732(iParam0, 16, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x0000005B:
			if (Function_726(iVar0, 2, 1, bParam2))
			{
				if (!Function_732(iParam0, 32, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000057:
			if (Function_726(iVar0, 1, 1, bParam2))
			{
				if (!Function_732(iParam0, 1024, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		case 0x00000058:
			if (Function_726(iVar0, 1, 1, bParam2))
			{
				if (!Function_732(iParam0, 1024, 1))
				{
					return Function_721(64);
				}
			}
			return Function_720(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_732(int iParam0, bool bParam1, bool bParam2) //Position: 0x277C0 / 161728
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

int Function_733(int iParam0) //Position: 0x277E8 / 161768
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_53());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_53());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_734(bool bParam0) //Position: 0x27819 / 161817
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_735(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x27837 / 161847
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

