//Decompiled with MagicRDR v1.0
//Function Count : 704
//Statics Count : 1072
//Natives Count : 755
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1617> Local_4 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 1, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_411 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_539 = 99;
	iLocal_540 = 6;
	iLocal_532 = 1000;
	while (Function_267())
	{
		Function_218();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_544);
	Function_215(12, 1, 0, 1, 1);
	Function_215(3, 1, 0, 1, 1);
	Function_215(13, 0, 0, 1, 1);
	Function_215(11, 0, 0, 1, 1);
	Function_214(bLocal_410);
	Function_214(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_213();
	Function_189(bLocal_568, 1, 0, 1, 0, 0, 0, 0);
	Function_188();
	Function_182();
	STREAMING_UNLOAD_BOUNDS();
	Function_178(&bLocal_418);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_542))
	{
		DESTROY_ITERATOR(bLocal_542);
	}
	RELEASE_LAYOUT_REF(bLocal_410);
	if (bLocal_567)
	{
		Function_24(Local_411, 1, 1, 1, 0);
	}
	else if (bLocal_568)
	{
		Function_20(Local_411);
	}
	else
	{
		Function_2(Local_411);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xF5 / 245
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x116 / 278
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x131 / 305
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x152 / 338
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x168 / 360
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

void Function_7(int iParam0) //Position: 0x204 / 516
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x225 / 549
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

void Function_9() //Position: 0x26B / 619
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x284 / 644
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x2D7 / 727
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

struct<16> Function_12(int iParam0) //Position: 0x3FB / 1019
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x420 / 1056
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x440 / 1088
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x457 / 1111
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x472 / 1138
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6B9 / 1721
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x6E2 / 1762
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

bool Function_19(int iParam0) //Position: 0x706 / 1798
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x71B / 1819
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x739 / 1849
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

struct<16> Function_22(int iParam0) //Position: 0x7DF / 2015
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x809 / 2057
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA5F / 2655
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

void Function_25() //Position: 0xB4C / 2892
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

int Function_26(int iParam0, bool bParam1) //Position: 0xB7C / 2940
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

int Function_27(int iParam0) //Position: 0xBB9 / 3001
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xBD3 / 3027
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xBE9 / 3049
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEE0 / 3808
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

void Function_31(char* cParam0, int iParam1) //Position: 0xF4C / 3916
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xF83 / 3971
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

bool Function_33(var uParam0, int iParam1) //Position: 0xFFB / 4091
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x100E / 4110
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

int Function_35(int iParam0) //Position: 0x10AF / 4271
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x10EC / 4332
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10FF / 4351
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

void Function_38(int iParam0, int iParam1) //Position: 0x1311 / 4881
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x134B / 4939
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

bool Function_40() //Position: 0x138D / 5005
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1396 / 5014
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

void Function_42() //Position: 0x13E7 / 5095
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

void Function_43() //Position: 0x141A / 5146
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

void Function_44() //Position: 0x1520 / 5408
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

void Function_45() //Position: 0x1553 / 5459
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

void Function_46() //Position: 0x16E1 / 5857
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

void Function_47() //Position: 0x1895 / 6293
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x18A3 / 6307
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

var Function_49() //Position: 0x1A94 / 6804
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1AA9 / 6825
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B44 / 6980
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1DDF / 7647
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

var Function_53() //Position: 0x240C / 9228
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2414 / 9236
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2425 / 9253
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x251A / 9498
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2533 / 9523
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2598 / 9624
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x25AA / 9642
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x25BC / 9660
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

int Function_61(int iParam0) //Position: 0x26EC / 9964
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x26FB / 9979
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2734 / 10036
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2771 / 10097
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x290B / 10507
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

int Function_66(bool bParam0) //Position: 0x2B25 / 11045
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2B66 / 11110
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

struct<8> Function_68() //Position: 0x2BEF / 11247
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

struct<8> Function_69() //Position: 0x2C86 / 11398
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

void Function_70() //Position: 0x2D05 / 11525
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D2B / 11563
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

void Function_72() //Position: 0x2F35 / 12085
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

bool Function_73(vector3 vParam0) //Position: 0x2FD6 / 12246
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2FEE / 12270
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

vector3 Function_75() //Position: 0x30D5 / 12501
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x30DE / 12510
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x30ED / 12525
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3103 / 12547
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x31CA / 12746
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x31E7 / 12775
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

bool Function_81(int iParam0) //Position: 0x36C3 / 14019
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x36D9 / 14041
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x36F8 / 14072
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3712 / 14098
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3779 / 14201
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

void Function_86() //Position: 0x3999 / 14745
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A19 / 14873
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D6B / 15723
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

int Function_89(int iParam0) //Position: 0x3DEE / 15854
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E08 / 15880
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E36 / 15926
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x40D4 / 16596
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

void Function_93(int iParam0, int iParam1) //Position: 0x4297 / 17047
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x44F5 / 17653
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

int Function_95() //Position: 0x467A / 18042
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

void Function_96() //Position: 0x4719 / 18201
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

void Function_97(int iParam0) //Position: 0x47C8 / 18376
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

var Function_98(int iParam0) //Position: 0x4826 / 18470
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

int Function_99(int iParam0, bool bParam1) //Position: 0x48B5 / 18613
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

var Function_100(int iParam0, int iParam1) //Position: 0x4A52 / 19026
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

void Function_101() //Position: 0x4A93 / 19091
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4AA9 / 19113
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4AE9 / 19177
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B29 / 19241
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B38 / 19256
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

int Function_106(int iParam0) //Position: 0x4D00 / 19712
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

var Function_107() //Position: 0x4D95 / 19861
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4DBA / 19898
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x5275 / 21109
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

var Function_110(int iParam0) //Position: 0x558A / 21898
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x562D / 22061
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5828 / 22568
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x59C4 / 22980
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5A8F / 23183
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

void Function_115(int iParam0) //Position: 0x637F / 25471
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x64EE / 25838
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x65F4 / 26100
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6621 / 26145
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

var Function_119(vector3 vParam0) //Position: 0x6678 / 26232
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x66C6 / 26310
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x671A / 26394
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

void Function_122() //Position: 0x68B8 / 26808
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x68BE / 26814
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6962 / 26978
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x69B7 / 27063
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x69CD / 27085
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6A1E / 27166
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

void Function_128(var uParam0, int iParam1) //Position: 0x6A4B / 27211
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A5A / 27226
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6A71 / 27249
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6A80 / 27264
{
	char* cVar0[32];
	
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
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_133() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
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
			stradd(&cVar0, "_tip", 32);
			Function_132(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6BCA / 27594
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

bool Function_133() //Position: 0x6C15 / 27669
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6C42 / 27714
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

int Function_135(int iParam0) //Position: 0x6DF2 / 28146
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6E49 / 28233
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

var Function_137(int iParam0) //Position: 0x6E6E / 28270
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6EC4 / 28356
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

bool Function_139(bool bParam0) //Position: 0x6F23 / 28451
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F2F / 28463
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6F4B / 28491
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

int Function_142(int iParam0, int iParam1) //Position: 0x6F9D / 28573
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

int Function_143(int iParam0, int iParam1) //Position: 0x7010 / 28688
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x706C / 28780
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

int Function_145(int iParam0, int iParam1) //Position: 0x70DD / 28893
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x7137 / 28983
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x73E3 / 29667
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

void Function_148(int iParam0, bool bParam1) //Position: 0x7672 / 30322
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

void Function_149() //Position: 0x76D1 / 30417
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

var Function_150(int iParam0, int iParam1) //Position: 0x774C / 30540
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

int Function_151(int iParam0) //Position: 0x833F / 33599
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x8354 / 33620
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x83A3 / 33699
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x83B0 / 33712
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8401 / 33793
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

bool Function_156(int iParam0, int iParam1) //Position: 0x846F / 33903
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8482 / 33922
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

var Function_158(int iParam0) //Position: 0x8581 / 34177
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

bool Function_159(var uParam0, int iParam1) //Position: 0x85D9 / 34265
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x85F5 / 34293
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

bool Function_161(int iParam0) //Position: 0x864C / 34380
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x865E / 34398
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

void Function_163(int iParam0) //Position: 0x8692 / 34450
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x86F9 / 34553
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87D6 / 34774
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

void Function_166() //Position: 0x894F / 35151
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x895B / 35163
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

void Function_168() //Position: 0x89A1 / 35233
{
	Function_169();
	return;
}

void Function_169() //Position: 0x89AA / 35242
{
	Function_178(&Local_4 + 4);
	Function_170(&Global_6563, &Global_7581, 0, 0);
	Function_170(&Global_6563, &Global_7581, 1, 0);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x89D2 / 35282
{
	int iVar0;
	
	iVar0 = iParam2;
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
		Function_171(uParam0, uParam1, iParam2, 0);
	}
}

void Function_171(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8A6C / 35436
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_174(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_173(Global_29007), Function_172(Global_29007), false, 0);
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
		Function_174(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_173(Global_29007), Function_172(Global_29007), false, 0);
	}
}

int Function_172(int iParam0) //Position: 0x8BBB / 35771
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

int Function_173(int iParam0) //Position: 0x8BE6 / 35814
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

void Function_174(var uParam0, int iParam1) //Position: 0x8C1A / 35866
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_175(bool bParam0) //Position: 0x8C29 / 35881
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

void Function_176(var uParam0, int iParam1) //Position: 0x8CC3 / 36035
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_177(var uParam0, int iParam1) //Position: 0x8CDA / 36058
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178(int iParam0) //Position: 0x8CF6 / 36086
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_179(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x8D1C / 36124
{
	if (Function_181(uParam0[iParam13], 4))
	{
		if (Function_181(uParam0[iParam13], 1))
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
			Function_180(uParam0[iParam13], 1);
			Function_180(uParam0[iParam13], 2);
			Function_180(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_180(var uParam0, int iParam1) //Position: 0x8E4A / 36426
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_181(int iParam0, int iParam1) //Position: 0x8E64 / 36452
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0x8E81 / 36481
{
	Function_186(32768);
	AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(6);
	UI_HIDE("RacePosition");
	DECOR_REMOVE(Global_34573, "herding");
	if (IS_BLIP_VALID(bLocal_878))
	{
		REMOVE_BLIP(bLocal_878);
	}
	if (IS_BLIP_VALID(bLocal_879))
	{
		REMOVE_BLIP(bLocal_879);
	}
	if (IS_BLIP_VALID(bLocal_880))
	{
		REMOVE_BLIP(bLocal_880);
	}
	if (IS_BLIP_VALID(bLocal_881))
	{
		REMOVE_BLIP(bLocal_881);
	}
	if (IS_ACTOR_VALID(bLocal_544))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_544)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_544));
		}
	}
	if (IS_ACTOR_VALID(bLocal_543))
	{
		AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bLocal_543, false);
	}
	if (IS_OBJECT_VALID(bLocal_882))
	{
		Function_185();
		DESTROY_OBJECT(bLocal_882);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_1034))
	{
		DESTROY_OBJECT(Local_1034);
	}
	if (IS_ACTOR_VALID(bLocal_837))
	{
		RELEASE_ACTOR(bLocal_837);
	}
	if (IS_ACTOR_VALID(bLocal_820))
	{
		RELEASE_ACTOR(bLocal_820);
	}
	if (IS_ACTOR_VALID(bLocal_838))
	{
		RELEASE_ACTOR(bLocal_838);
	}
	if (IS_ACTOR_VALID(bLocal_839))
	{
		RELEASE_ACTOR(bLocal_839);
	}
	if (IS_ACTOR_VALID(bLocal_840))
	{
		RELEASE_ACTOR(bLocal_840);
	}
	if (SQUAD_IS_VALID(bLocal_1011))
	{
		Function_183(&bLocal_1011, 0, 0);
		RELEASE_OBJECT_REF(bLocal_1011);
	}
	if (SQUAD_IS_VALID(bLocal_1012))
	{
		Function_183(&bLocal_1012, 0, 0);
		RELEASE_OBJECT_REF(bLocal_1012);
	}
	if (SQUAD_IS_VALID(Local_1034.f_44))
	{
		Function_183(&Local_1034 + 44, 0, 0);
		RELEASE_OBJECT_REF(Local_1034.f_44);
	}
	if (SQUAD_IS_VALID(Local_1034.f_48))
	{
		Function_183(&Local_1034 + 48, 0, 0);
		RELEASE_OBJECT_REF(Local_1034.f_48);
	}
	if (SQUAD_IS_VALID(Local_1034.f_52))
	{
		Function_183(&Local_1034 + 52, 0, 0);
		RELEASE_OBJECT_REF(Local_1034.f_52);
	}
	if (SQUAD_IS_VALID(Local_1034.f_56))
	{
		Function_183(&Local_1034 + 56, 0, 0);
		RELEASE_OBJECT_REF(Local_1034.f_56);
	}
	if (IS_OBJECT_VALID(bLocal_1018))
	{
		DESTROY_OBJECT(bLocal_1018);
	}
	return;
}

void Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0x904F / 36943
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
			if (bParam2)
			{
				if (!Function_184(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_184(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x90CB / 37067
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_185() //Position: 0x90E5 / 37093
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

void Function_186(int iParam0) //Position: 0x9110 / 37136
{
	Function_187(&Global_28842, iParam0);
	return;
}

void Function_187(var uParam0, var uParam1) //Position: 0x911E / 37150
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_188() //Position: 0x9139 / 37177
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRAILROAD_rrCurve_28", 3));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, 10);
	}
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve346rebuiltCurve1", 18));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, 10);
	}
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve130", 18));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, 10);
	}
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve132", 18));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, 10);
	}
	return;
}

void Function_189(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x920D / 37389
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_212());
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
	Function_185();
	CLEAR_PRINTED_OBJECTIVE();
	Function_211();
	Function_209(0);
	Function_208();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_207();
	Function_206();
	Function_185();
	ENABLE_JOURNAL_REPLAY(1);
	Function_205(1);
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
		Function_204(Global_34573);
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
	Function_203(Global_28178);
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
	Function_202(1178687);
	Function_186(33039);
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

void Function_190() //Position: 0x93FE / 37886
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

void Function_191(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x9454 / 37972
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_192((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_192(bool bParam0) //Position: 0x949A / 38042
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_193() //Position: 0x94BF / 38079
{
	return Global_12976.f_156;
}

void Function_194() //Position: 0x94CA / 38090
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

void Function_195(int iParam0, bool bParam1, int iParam2) //Position: 0x94F4 / 38132
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

void Function_196(int iParam0) //Position: 0x95FF / 38399
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

bool Function_197() //Position: 0x967E / 38526
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

void Function_198() //Position: 0x96DB / 38619
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

void Function_199() //Position: 0x9701 / 38657
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

void Function_200(int iParam0) //Position: 0x9727 / 38695
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_201(int iParam0) //Position: 0x9744 / 38724
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_202(bool bParam0) //Position: 0x9757 / 38743
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_203(int iParam0) //Position: 0x9784 / 38788
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

void Function_204(bool bParam0) //Position: 0x984B / 38987
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

void Function_205(bool bParam0) //Position: 0x98C7 / 39111
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

void Function_206() //Position: 0x993B / 39227
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

void Function_207() //Position: 0x997C / 39292
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

void Function_208() //Position: 0x99BD / 39357
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_209(int iParam0) //Position: 0x99D1 / 39377
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_210())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_210() //Position: 0x9A0D / 39437
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

void Function_211() //Position: 0x9A32 / 39474
{
	Global_8722 = 0.0f;
	return;
}

int Function_212() //Position: 0x9A3C / 39484
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_213() //Position: 0x9A56 / 39510
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_214(bool bParam0) //Position: 0x9A5F / 39519
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

int Function_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9AB7 / 39607
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
		Function_217(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_216(StackVal);
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

void Function_216(bool bParam0) //Position: 0x9DD5 / 40405
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

void Function_217(bool bParam0) //Position: 0x9E01 / 40449
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_218() //Position: 0x9E16 / 40470
{
	var uVar0[14];
	int iVar15;
	
	if (Function_266())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Ride To Bonnie";
		uVar0[4] = "Stage 03 - Out of the pen";
		uVar0[5] = "Stage 04 - Herd to the river";
		uVar0[6] = "Stage 05 - Cross the river";
		uVar0[7] = "Stage 06 - Herd to Beecher's";
		uVar0[8] = "Stage 07 - Defend the herd";
		uVar0[9] = "Stage 08 - Round 'em up";
		uVar0[10] = "Stage 09 - Herd to Beecher's";
		uVar0[11] = "Stage 10 - Herd inside pen";
		uVar0[12] = "Stage 11 - Speak to Jack";
		uVar0[13] = "Last Stage";
		iVar15 = Function_252(&uLocal_525, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_251(&iVar15, &bLocal_539, &iLocal_540, &iLocal_532))
		{
			Function_244();
			Function_243();
		}
		if (iVar15 == 0)
		{
			Function_244();
			Function_243();
			Function_242(&bLocal_567, 8);
		}
		else if (iVar15 == 1)
		{
			Function_244();
			Function_243();
			Function_237(bLocal_539);
			Function_233(StackVal, StackVal, 5, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
		}
		else if (iVar15 == 2)
		{
			Function_244();
			Function_243();
			Function_228(&bLocal_569, 4);
		}
		else if (iVar15 == 3)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = true;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 4)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 2;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 5)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 3;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 6)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 4;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 7)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 5;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 8)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 6;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 9)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 7;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 10)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 8;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 11)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 9;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 12)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 10;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar15 == 13)
		{
			Function_221();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&bLocal_545);
			bLocal_539 = 101;
			iLocal_540 = 0;
			iLocal_532 = 1000;
		}
	}
	return;
}

void Function_219(bool bParam0) //Position: 0xA2A6 / 41638
{
	Function_220(bParam0, 0.0f);
	return;
}

void Function_220(int iParam0, float fParam1) //Position: 0xA2B2 / 41650
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_221() //Position: 0xA2D3 / 41683
{
	UI_HIDE("RacePosition");
	DECOR_REMOVE(Global_34573, "herding");
	Function_188();
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	if (iLocal_969)
	{
		iLocal_969 = 0;
		STREAMING_UNLOAD_BOUNDS();
	}
	if (IS_ACTOR_VALID(bLocal_544))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_544)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_544));
		}
	}
	Function_226(12, 0, 1);
	Function_215(3, 1, 0, 1, 1);
	Function_215(13, 1, 0, 1, 1);
	Function_215(11, 1, 0, 1, 1);
	if (IS_ACTOR_VALID(bLocal_822[0]))
	{
		DESTROY_ACTOR(bLocal_822[0]);
	}
	if (IS_ACTOR_VALID(bLocal_824[0]))
	{
		DESTROY_ACTOR(bLocal_824[0]);
	}
	if (IS_ACTOR_VALID(bLocal_543))
	{
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
		AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bLocal_543, false);
	}
	if (IS_BLIP_VALID(bLocal_878))
	{
		REMOVE_BLIP(bLocal_878);
	}
	if (IS_BLIP_VALID(bLocal_879))
	{
		REMOVE_BLIP(bLocal_879);
	}
	if (IS_BLIP_VALID(bLocal_880))
	{
		REMOVE_BLIP(bLocal_880);
	}
	if (IS_BLIP_VALID(bLocal_881))
	{
		REMOVE_BLIP(bLocal_881);
	}
	if (IS_OBJECT_VALID(bLocal_1018))
	{
		DESTROY_OBJECT(bLocal_1018);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_1034))
	{
		DESTROY_OBJECT(Local_1034);
	}
	if (IS_OBJECT_VALID(bLocal_882))
	{
		Function_185();
		Function_225(bLocal_882);
	}
	if (IS_ACTOR_VALID(bLocal_837))
	{
		DESTROY_ACTOR(bLocal_837);
	}
	if (IS_ACTOR_VALID(bLocal_820))
	{
		DESTROY_ACTOR(bLocal_820);
	}
	if (IS_ACTOR_VALID(bLocal_838))
	{
		DESTROY_ACTOR(bLocal_838);
	}
	if (IS_ACTOR_VALID(bLocal_839))
	{
		DESTROY_ACTOR(bLocal_839);
	}
	if (IS_ACTOR_VALID(bLocal_840))
	{
		DESTROY_ACTOR(bLocal_840);
	}
	if (SQUAD_IS_VALID(bLocal_1011))
	{
		Function_224(&bLocal_1011);
		DESTROY_OBJECT(bLocal_1011);
	}
	if (SQUAD_IS_VALID(bLocal_1012))
	{
		Function_224(&bLocal_1012);
		DESTROY_OBJECT(bLocal_1012);
	}
	if (SQUAD_IS_VALID(Local_1034.f_44))
	{
		Function_224(&Local_1034 + 44);
		DESTROY_OBJECT(Local_1034.f_44);
	}
	if (SQUAD_IS_VALID(Local_1034.f_48))
	{
		Function_224(&Local_1034 + 48);
		DESTROY_OBJECT(Local_1034.f_48);
	}
	if (SQUAD_IS_VALID(Local_1034.f_52))
	{
		Function_224(&Local_1034 + 52);
		DESTROY_OBJECT(Local_1034.f_52);
	}
	if (SQUAD_IS_VALID(Local_1034.f_56))
	{
		Function_224(&Local_1034 + 56);
		DESTROY_OBJECT(Local_1034.f_56);
	}
	if (SQUAD_IS_VALID(Local_4.f_112))
	{
		Function_222(&Global_6563, &Global_7581, Local_4.f_112, 0);
		DESTROY_OBJECT(Local_4.f_112);
	}
	if (SQUAD_IS_VALID(bLocal_1013))
	{
		Function_224(&bLocal_1013);
		DESTROY_OBJECT(bLocal_1013);
	}
	if (SQUAD_IS_VALID(bLocal_1014))
	{
		Function_224(&bLocal_1014);
		DESTROY_OBJECT(bLocal_1014);
	}
	if (SQUAD_IS_VALID(bLocal_1015))
	{
		Function_224(&bLocal_1015);
		DESTROY_OBJECT(bLocal_1015);
	}
	if (SQUAD_IS_VALID(bLocal_1016))
	{
		Function_224(&bLocal_1016);
		DESTROY_OBJECT(bLocal_1016);
	}
	if (SQUAD_IS_VALID(bLocal_1017))
	{
		Function_224(&bLocal_1017);
		DESTROY_OBJECT(bLocal_1017);
	}
	return;
}

void Function_222(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0xA582 / 42370
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam2))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam2))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam2, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_223(uParam0, uParam1, bVar1, iParam3);
			}
		}
		bVar0++;
	}
}

void Function_223(var uParam0, var uParam1, int iParam2, var uParam3) //Position: 0xA5D3 / 42451
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (GET_ACTOR_FROM_PERS_CHAR(StackVal) == iParam2)
			{
				Function_170(uParam0, uParam1, iVar0, uParam3);
			}
		}
		iVar0++;
	}
}

void Function_224(bool bParam0) //Position: 0xA61B / 42523
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

void Function_225(bool bParam0) //Position: 0xA662 / 42594
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

void Function_226(int iParam0, bool bParam1, bool bParam2) //Position: 0xA6EC / 42732
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
						Function_216(bVar1);
					}
				}
				Function_227(bVar0);
			}
		}
	}
	return;
}

void Function_227(bool bParam0) //Position: 0xA7E3 / 42979
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

void Function_228(bool bParam0, int iParam1) //Position: 0xA80F / 43023
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_229(iParam1);
	*bParam0 = 1;
	return;
}

void Function_229(int iParam0) //Position: 0xA832 / 43058
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_232("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_231(2) || Function_231(8)) || Function_231(9)) || Function_231(10))
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
		Function_232("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_232("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_232("");
	}
	else if (iParam0 == 8)
	{
		Function_230();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_230();
	}
	return;
}

void Function_230() //Position: 0xA929 / 43305
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_231(int iParam0) //Position: 0xA935 / 43317
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

void Function_232(bool bParam0) //Position: 0xA96B / 43371
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_233(int iParam0, var uParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA9D5 / 43477
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_234(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_229(iParam0);
		*uParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_234(vector3 vParam0, var uParam3, var uParam4) //Position: 0xAA12 / 43538
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_236(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_235(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_235(int iParam0) //Position: 0xAA95 / 43669
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

var Function_236(vector3 vParam0, bool bParam3) //Position: 0xAF43 / 44867
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

vector3 Function_237(int iParam0) //Position: 0xAFAE / 44974
{
	Function_238(iParam0 + 1);
	return StackVal, StackVal, Function_238(iParam0 + 1);
}

vector3 Function_238(int iParam0) //Position: 0xAFBB / 44987
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_239((*&Local_4 + 760)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 760)[0]);
			break;
		
		case 0x00000001:
			Function_239((*&Local_4 + 792)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 792)[0]);
			break;
		
		case 0x00000002:
			Function_239((*&Local_4 + 832)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 832)[0]);
			break;
		
		case 0x00000003:
			Function_239((*&Local_4 + 888)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 888)[0]);
			break;
		
		case 0x00000004:
			Function_239((*&Local_4 + 924)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 924)[0]);
			break;
		
		case 0x00000005:
			Function_239((*&Local_4 + 960)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 960)[0]);
			break;
		
		case 0x00000006:
			Function_239((*&Local_4 + 984)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 984)[0]);
			break;
		
		case 0x00000007:
			Function_239((*&Local_4 + 1008)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 1008)[0]);
			break;
		
		case 0x00000008:
			Function_239((*&Local_4 + 1032)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 1032)[0]);
			break;
		
		case 0x00000009:
			Function_239((*&Local_4 + 1056)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 1056)[0]);
			break;
		
		case 0x0000000A:
			Function_239((*&Local_4 + 1080)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 1080)[0]);
			break;
		
		default:
			Function_239((*&Local_4 + 1108)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 1108)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_239((*&Local_4 + 760)[0]);
	return StackVal, StackVal, Function_239((*&Local_4 + 760)[0]);
}

vector3 Function_239(bool bParam0) //Position: 0xB12D / 45357
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

int Function_240(int iParam0) //Position: 0xB154 / 45396
{
	return Function_241(iParam0 + 1);
}

int Function_241(int iParam0) //Position: 0xB161 / 45409
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 760)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 792)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 832)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 888)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 924)[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING((*&Local_4 + 960)[0]);
			break;
		
		case 0x00000006:
			return GET_OBJECT_HEADING((*&Local_4 + 984)[0]);
			break;
		
		case 0x00000007:
			return GET_OBJECT_HEADING((*&Local_4 + 1008)[0]);
			break;
		
		case 0x00000008:
			return GET_OBJECT_HEADING((*&Local_4 + 1032)[0]);
			break;
		
		case 0x00000009:
			return GET_OBJECT_HEADING((*&Local_4 + 1056)[0]);
			break;
		
		case 0x0000000A:
			return GET_OBJECT_HEADING((*&Local_4 + 1080)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1108)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 760)[0]);
}

void Function_242(bool bParam0, int iParam1) //Position: 0xB2D3 / 45779
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_229(iParam1);
	*bParam0 = 1;
	return;
}

void Function_243() //Position: 0xB2F6 / 45814
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_244() //Position: 0xB30B / 45835
{
	Function_246();
	Function_245(10, 3);
	return;
}

void Function_245(int iParam0, int iParam1) //Position: 0xB31A / 45850
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

void Function_246() //Position: 0xB451 / 46161
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_250())
	{
		Function_249(10, 3);
	}
	else
	{
		Function_247();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_247() //Position: 0xB49C / 46236
{
	Function_248(25, 2);
	return;
}

void Function_248(int iParam0, int iParam1) //Position: 0xB4A8 / 46248
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

void Function_249(int iParam0, int iParam1) //Position: 0xB6A6 / 46758
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

bool Function_250() //Position: 0xB7DD / 47069
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

bool Function_251(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB844 / 47172
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_244();
			Function_243();
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
		Function_232("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB8EA / 47338
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_265(&Var15, &Var0);
	uVar20 = Function_264(*uParam1, &Var15);
	Function_263(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_262(uParam0, uVar20);
	Function_260(StackVal, uParam0, Var15.f_12);
	Function_258(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_257(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_254(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_253(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_253(int iParam0, int iParam1, int iParam2) //Position: 0xB9B1 / 47537
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

bool Function_254(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xBA0D / 47629
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
				Function_256(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_256(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_253(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_255(bParam1->f_32);
	}
	else
	{
		Function_255(bParam1->f_32);
	}
	return 0;
}

void Function_255(bool bParam0) //Position: 0xBB93 / 48019
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

void Function_256(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xBBCD / 48077
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

var Function_257(int iParam0, var uParam1, int iParam2) //Position: 0xBC7B / 48251
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_258(var uParam0, int iParam1, int iParam2) //Position: 0xBC9F / 48287
{
	switch (Function_259())
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

int Function_259() //Position: 0xBD3B / 48443
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

void Function_260(var uParam0, int iParam1, int iParam2) //Position: 0xBD77 / 48503
{
	switch (Function_261(uParam0))
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

int Function_261(bool bParam0) //Position: 0xBE0F / 48655
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

var Function_262(var uParam0, int iParam1) //Position: 0xBF5A / 48986
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

void Function_263(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC0AA / 49322
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

var Function_264(int iParam0, int iParam1) //Position: 0xC13D / 49469
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_265(var uParam0, var uParam1) //Position: 0xC157 / 49495
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

bool Function_266() //Position: 0xC1A5 / 49573
{
	return Global_30920;
}

bool Function_267() //Position: 0xC1AE / 49582
{
	if (IS_EXITFLAG_SET())
	{
		Function_237(bLocal_539);
		Function_233(StackVal, StackVal, 4, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
		return 0;
	}
	Function_703(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_411, bLocal_539, iLocal_540, &bLocal_569, &bLocal_567, &bLocal_568);
	if (bLocal_539 == 99 && bLocal_539 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_237(bLocal_539);
			Function_233(StackVal, StackVal, 1, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
			return 1;
		}
		if (!bLocal_539 != 6)
		{
			if (Function_701(Global_34573, 0))
			{
				Function_237(bLocal_539);
				Function_233(StackVal, StackVal, 2, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
				return 1;
			}
			if (Global_3403 || Global_3404)
			{
				Function_237(bLocal_539);
				Function_233(StackVal, StackVal, 2, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
				return 1;
			}
			if (Function_700(2048))
			{
				Function_237(bLocal_539);
				Function_233(StackVal, StackVal, 3, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
				return 1;
			}
		}
		if (Function_680(&Local_611, &uLocal_571, &uLocal_765, bLocal_542, iLocal_570))
		{
			if (Function_678(&uLocal_765))
			{
				Function_237(bLocal_539);
				Function_233(StackVal, StackVal, 5, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
				return 1;
			}
		}
		if (bLocal_539 == 0)
		{
			bLocal_852 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
			if (IS_ACTOR_VALID(bLocal_852))
			{
				if ((((!IS_ACTOR_ANIMAL(bLocal_852) && !AI_IS_HOSTILE_OR_ENEMY(bLocal_852, Global_34573)) && !bLocal_852 != bLocal_543) && !bLocal_852 != bLocal_819) && !bLocal_852 != bLocal_818)
				{
					if (IS_ACTOR_SHOOTING(Global_34573))
					{
						if (IS_WEAPON_DRAWN(Global_34573))
						{
							if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
							{
								Function_237(bLocal_539);
								Function_233(StackVal, StackVal, 2, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
								return 1;
							}
						}
					}
				}
			}
		}
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			if (iLocal_540 > 8)
			{
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					if (SQUAD_IS_VALID(Local_1034.f_48))
					{
						if (SQUAD_IS_VALID(Local_1034.f_52))
						{
							if (!iLocal_540 != 106)
							{
								if (!bLocal_539 != 9)
								{
									bLocal_788 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_52));
								}
								else
								{
									bLocal_788 = ((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_52)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1017));
								}
								bLocal_789 = (15 - bLocal_788);
								bLocal_790 = ROUND((0,6f * IntToFloat(bLocal_788)));
								if (bLocal_789 > bLocal_790)
								{
									PRINTINT(bLocal_788);
									PRINTNL();
									PRINTINT(bLocal_789);
									PRINTNL();
									PRINTINT(bLocal_790);
									PRINTNL();
									Function_232("nHerd_lost");
									Function_237(bLocal_539);
									Function_233(StackVal, StackVal, 5, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
									return 1;
								}
							}
						}
					}
				}
			}
		}
		Function_676(&bLocal_544, bLocal_543);
		Function_675();
	}
	switch (bLocal_539)
	{
		case 0x00000063:
			Function_653();
			break;
		
		case 0x00000000:
			Function_625();
			break;
		
		case 0x00000001:
			Function_609();
			break;
		
		case 0x00000002:
			Function_594();
			break;
		
		case 0x00000003:
			Function_565();
			break;
		
		case 0x00000004:
			Function_552();
			break;
		
		case 0x00000005:
			Function_543();
			break;
		
		case 0x00000006:
			Function_508();
			break;
		
		case 0x00000007:
			Function_497();
			break;
		
		case 0x00000008:
			Function_484();
			break;
		
		case 0x00000009:
			Function_437();
			break;
		
		case 0x0000000A:
			Function_376();
			break;
		
		case 0x00000065:
			Function_270();
			break;
		
		case 0x00000064:
			if (Function_269(&bLocal_568))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_268(&bLocal_539, &iLocal_540, &iLocal_532))
			{
				return 0;
			}
			break;
	}
	if (bLocal_567)
	{
		Function_242(&bLocal_567, 8);
		return 0;
	}
	if (bLocal_568 && bLocal_539 == 100)
	{
		Function_237(bLocal_539);
		Function_233(StackVal, StackVal, 5, &bLocal_568, &bLocal_539, Function_240(bLocal_539), Function_237(bLocal_539), 0);
	}
	if (bLocal_569)
	{
		Function_228(&bLocal_569, 4);
		return 0;
	}
	return 1;
}

bool Function_268(var uParam0, var uParam1, int iParam2) //Position: 0xC565 / 50533
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

bool Function_269(int iParam0) //Position: 0xC5A5 / 50597
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_270() //Position: 0xC5B8 / 50616
{
	if (!iLocal_976)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_372(&iLocal_805);
			}
			else
			{
				iLocal_774 = 0;
				iLocal_976 = 0;
			}
		}
	}
	if (!iLocal_971)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_371();
			}
			else
			{
				iLocal_793 = 0;
				iLocal_971 = 0;
			}
		}
	}
	if (!iLocal_974)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_366();
			}
			else
			{
				iLocal_795 = 0;
				iLocal_974 = 0;
			}
		}
	}
	Function_365(bLocal_410);
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			if (IS_ACTOR_VALID(bLocal_544))
			{
				TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_544, true);
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_543, true);
			}
			if (IS_ACTOR_VALID(bLocal_819))
			{
				TASK_STAND_STILL(bLocal_819, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_819, true);
			}
			if (IS_ACTOR_VALID(bLocal_818))
			{
				TASK_STAND_STILL(bLocal_818, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_818, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30717[1];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				if (Function_349(&Local_411))
				{
					Function_348(Global_34573, (*&Local_4 + 1108)[0], 1, 1, 1);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_976 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				Function_328();
				if (IS_ACTOR_VALID(bLocal_818))
				{
					TASK_STAND_STILL(bLocal_818, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_818, true);
				}
				if (iLocal_554[10] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						Function_348(Global_34573, (*&Local_4 + 1108)[0], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(bLocal_544))
					{
						Function_348(bLocal_544, (*&Local_4 + 1108)[3], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						MEMORY_PREFER_RIDING(bLocal_543, false);
						GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bLocal_1020[3]), &vLocal_922);
						GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_GRINGO(bLocal_1020[3]), &Local_925);
						TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_543, vLocal_922, 1, true, 1);
						TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
						TASK_PRIORITY_SET(bLocal_543, true);
					}
					if (IS_ACTOR_VALID(bLocal_819))
					{
						Function_348(bLocal_819, (*&Local_4 + 1108)[6], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(bLocal_818))
					{
						Function_348(bLocal_818, (*&Local_4 + 1108)[5], 1, 1, 1);
					}
				}
				Function_219(&bLocal_545);
				iLocal_540 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_274("$/cutscene/HOME01_CS03/HOME01_CS03", &iLocal_532, &Local_411, &bLocal_539, 88140, 87889, 86965, 86261, 85892, 54790, 1, 2, 2, 1, 2, 0, 1))
			{
				DECOR_SET_BOOL(Global_34573, "Stand", true);
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1544)))
					{
						GIVE_OBJECT_TO_LAYOUT(Local_4.f_1544, Global_6288);
						SNAP_ACTOR_TO_GRINGO(Global_34573, Local_4.f_1544, "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(Local_4.f_1544), "UseCase1", true, 1);
						TASK_PRIORITY_SET(Global_34573, true);
					}
				}
				Function_219(&bLocal_545);
				iLocal_540 = 4;
			}
			break;
		
		case 0x00000004:
			if (((Function_271(&bLocal_545) <= 0,5f && !HUD_IS_FADING()) && STREAMING_IS_WORLD_LOADED()) && GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(Local_4.f_1544))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "marston_smoke/04/exit");
				}
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				PRINTINT(Local_1034.f_76);
				PRINTNL();
				PRINTINT(Local_1034.f_80);
				PRINTNL();
				bLocal_777 = Local_1034.f_76;
				Global_34165.f_124 = bLocal_777;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_778 = Local_1034.f_80;
				Global_34165.f_128 = bLocal_778;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				PRINTINT(bLocal_788);
				PRINTNL();
				Function_85(355, bLocal_788, 1, 0);
				if (bLocal_788 == 15)
				{
					Function_109(200, 1, 0);
				}
				bLocal_567 = true;
			}
			break;
	}
	return;
}

float Function_271(bool bParam0) //Position: 0xCAD3 / 51923
{
	if (Function_273(bParam0))
	{
		if (Function_272(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_272(int iParam0) //Position: 0xCB9B / 52123
{
	return Function_153(*iParam0, 2);
}

bool Function_273(float fParam0) //Position: 0xCBA8 / 52136
{
	return Function_153(*fParam0, 1);
}

bool Function_274(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xCBB5 / 52149
{
	if (!bParam15)
	{
		Function_283(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_349(iParam2) || iParam2->f_24 < 1))
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
				Function_219(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_282())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_281(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_219(iParam1 + 4);
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
					Function_281(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_271(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_271(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_279(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_281(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_219(iParam1 + 4);
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
						Function_278(1.0f);
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
						Function_276();
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
					Function_275(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_349(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_275(bool bParam0) //Position: 0xD1C9 / 53705
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

void Function_276() //Position: 0xD26E / 53870
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_277();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_277() //Position: 0xD2B3 / 53939
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_278(bool bParam0) //Position: 0xD2C5 / 53957
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

void Function_279(bool bParam0, bool bParam1) //Position: 0xD2E2 / 53986
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
			if ((bVar3 == Global_34573 && !Function_280(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_280(bool bParam0) //Position: 0xD362 / 54114
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

int Function_281(bool bParam0) //Position: 0xD391 / 54161
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

bool Function_282() //Position: 0xD449 / 54345
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

void Function_283(var uParam0, int iParam1) //Position: 0xD483 / 54403
{
	Function_284(uParam0, iParam1, 0);
	return;
}

void Function_284(var uParam0, bool bParam1, bool bParam2) //Position: 0xD491 / 54417
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
			Function_285(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_285(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_285(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD5DD / 54749
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

int Function_286() //Position: 0xD606 / 54790
{
	switch (bLocal_539)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				Unknown_Function();
				if (StackVal)
				{
					Function_348(Global_34573, (*&Local_4 + 760)[0], 1, 1, 1);
					Function_348(bLocal_543, (*&Local_4 + 760)[2], 1, 1, 1);
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
					{
						Function_348(bLocal_544, (*&Local_4 + 792)[5], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
					}
					else
					{
						Function_294(Global_34573, (*&Local_4 + 792)[5], 1, 1, 1);
					}
				}
				else
				{
					bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
					{
						Function_348(bLocal_822[0], (*&Local_4 + 792)[6], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
					}
					else
					{
						Function_294(bLocal_543, (*&Local_4 + 792)[6], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_820))
			{
				Function_348(bLocal_820, (*&Local_4 + 792)[4], 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
					{
						Function_348(bLocal_544, (*&Local_4 + 832)[6], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
					}
					else
					{
						Function_294(Global_34573, (*&Local_4 + 832)[6], 1, 1, 1);
					}
				}
				else
				{
					bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
					{
						Function_348(bLocal_822[0], (*&Local_4 + 832)[8], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
					}
					else
					{
						Function_294(bLocal_543, (*&Local_4 + 832)[8], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_821))
			{
				if (IS_ACTOR_VALID(bLocal_824[0]))
				{
					Function_348(bLocal_824[0], (*&Local_4 + 832)[10], 1, 1, 1);
					if (!IS_ACTOR_RIDING(bLocal_821) && !IS_ACTOR_MOUNTED(bLocal_824[0]))
					{
						ACTOR_MOUNT_ACTOR(bLocal_821, bLocal_824[0]);
					}
				}
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_348(Global_34573, (*&Local_4 + 1108)[0], 1, 1, 1);
			Function_348(bLocal_543, (*&Local_4 + 1108)[1], 1, 1, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_287(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xD8B0 / 55472
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
	if (Global_3381 || Function_231(1))
	{
		Function_293(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_292())
		{
			return "";
		}
	}
	if (!Function_290())
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
		Function_239(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_239(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_289(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_289(StackVal, StackVal, vVar5, 0, 1, 1);
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

void Function_288(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xDC08 / 56328
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

var Function_289(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDC45 / 56389
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

bool Function_290() //Position: 0xDCE0 / 56544
{
	if (Function_291() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_291() //Position: 0xDCF6 / 56566
{
	return Global_12976.f_152;
}

bool Function_292() //Position: 0xDD01 / 56577
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_293(var uParam0, bool bParam1, bool bParam2) //Position: 0xDD21 / 56609
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

void Function_294(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xDD4E / 56654
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
				Function_295(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
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

void Function_295(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0xDE65 / 56933
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

struct<264> Function_296() //Position: 0xDF1E / 57118
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
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Home01_layout");
	Local_4.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 116)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene00Vol", 2, -124,3339f, 118,8691f, 1375,333f, 0.0f, 48,76437f, 0.0f, 40.0f, 30.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_144, (*&Local_4 + 116)[0]);
	(*&Local_4 + 116)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -98,87872f, 119,489f, 1355,462f, 0.0f, 42,05315f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_144, (*&Local_4 + 116)[1]);
	(*&Local_4 + 116)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -791,4802f, 92,23145f, 2418,612f, 0.0f, -37,64854f, 0.0f, 15.0f, 15.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_144, (*&Local_4 + 116)[2]);
	(*&Local_4 + 116)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -893,9522f, 90,35291f, 2447,433f, 0.0f, 8,729557f, 0.0f, 20.0f, 15.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_144, (*&Local_4 + 116)[3]);
	(*&Local_4 + 116)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -904,0001f, 90,35291f, 2472.0f, 0.0f, 33,64058f, 0.0f, 30.0f, 15.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_144, (*&Local_4 + 116)[4]);
	(*&Local_4 + 116)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -74,91998f, 116,8612f, 1406,661f, 0.0f, 152,7269f, 0.0f, 15.0f, 4,107396f, 15.0f);
	ADD_TO_VOLUME_SET(Local_4.f_144, (*&Local_4 + 116)[5]);
	Local_4.f_176 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary01_set");
	(*&Local_4 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_01", 2, -1022,593f, 94,9704f, 2497,873f, 0.0f, 289,6036f, 0.0f, 300.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_176, (*&Local_4 + 148)[0]);
	(*&Local_4 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_02", 2, -935,1868f, 94,9704f, 2353,92f, 0.0f, 208,5734f, 0.0f, 150.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_176, (*&Local_4 + 148)[1]);
	(*&Local_4 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_03", 2, -812,9863f, 94,9704f, 2362,142f, 0.0f, 195,3408f, 0.0f, 190.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_176, (*&Local_4 + 148)[2]);
	(*&Local_4 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_04", 2, -782,5818f, 74,49309f, 2637,891f, 0.0f, 180,1165f, 0.0f, 500.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_176, (*&Local_4 + 148)[3]);
	(*&Local_4 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_05", 2, -733,2943f, 74,78233f, 2529,036f, 0.0f, 271,7998f, 0.0f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_176, (*&Local_4 + 148)[4]);
	(*&Local_4 + 148)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_06", 2, -883,3024f, 90,35291f, 2473,755f, 0.0f, 264,1213f, 0.0f, 16.0f, 30.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_176, (*&Local_4 + 148)[5]);
	Local_4.f_212 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary02_set");
	(*&Local_4 + 180)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_01", 2, -990,9425f, 94,9704f, 2512,198f, 0.0f, 278,7632f, 0.0f, 300.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_212, (*&Local_4 + 180)[0]);
	(*&Local_4 + 180)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_02", 2, -831,4644f, 94,9704f, 2380,188f, 0.0f, 187,227f, 0.0f, 190.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_212, (*&Local_4 + 180)[1]);
	(*&Local_4 + 180)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_03", 2, -699,1049f, 94,9704f, 2343,03f, 0.0f, 210,3203f, 0.0f, 170.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_212, (*&Local_4 + 180)[2]);
	(*&Local_4 + 180)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_04", 2, -642,201f, 94,9704f, 2270,376f, 0.0f, 247,8464f, 0.0f, 200.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_212, (*&Local_4 + 180)[3]);
	(*&Local_4 + 180)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_05", 2, -518,7245f, 94,9704f, 2277,966f, 0.0f, 155,0313f, 0.0f, 400.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_212, (*&Local_4 + 180)[4]);
	(*&Local_4 + 180)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_06", 2, -782,5818f, 74,49309f, 2652,558f, 0.0f, 180,1165f, 0.0f, 500.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_212, (*&Local_4 + 180)[5]);
	(*&Local_4 + 180)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_07", 2, -466,7069f, 74,78233f, 2512,36f, 0.0f, 218,9868f, 0.0f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_212, (*&Local_4 + 180)[6]);
	Local_4.f_256 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary03_set");
	(*&Local_4 + 216)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_01", 2, -569,4614f, 94,9704f, 2462,968f, 0.0f, 155,0313f, 0.0f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[0]);
	(*&Local_4 + 216)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_02", 2, -594,377f, 94,9704f, 2182,148f, 0.0f, 243,8875f, 0.0f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[1]);
	(*&Local_4 + 216)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_04", 2, -350,7538f, 74,78233f, 2298,188f, 0.0f, 241,6433f, 0.0f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[2]);
	(*&Local_4 + 216)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_06", 2, -385,2289f, 94,9704f, 2069,416f, 0.0f, 150,036f, 0.0f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[3]);
	(*&Local_4 + 216)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_07", 2, -561,71f, 94,9704f, 2278,34f, 0.0f, 26,13515f, 0.0f, 100.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[4]);
	(*&Local_4 + 216)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_08", 2, -419,5562f, 94,9704f, 2262,781f, 0.0f, 17,88854f, 0.0f, 100.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[5]);
	(*&Local_4 + 216)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_09", 2, -412,6859f, 94,9704f, 2220,17f, 0.0f, 53,47281f, 0.0f, 100.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[6]);
	(*&Local_4 + 216)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_010", 2, -563,1239f, 94,9704f, 2295,261f, 0.0f, 38,55524f, 0.0f, 100.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[7]);
	(*&Local_4 + 216)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_011", 2, -493,0547f, 94,9704f, 2125,248f, 0.0f, 47,26882f, 0.0f, 100.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_256, (*&Local_4 + 216)[8]);
	Local_4.f_304 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary04_set");
	(*&Local_4 + 260)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_01", 2, -553,3052f, 95,15447f, 2221,516f, -2,012017f, 135,6603f, -2,084123f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[0]);
	(*&Local_4 + 260)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_02", 2, -477,5695f, 102,9895f, 2015,308f, -1,449053f, 219,2438f, 0,08737534f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[1]);
	(*&Local_4 + 260)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_08", 2, -329,8535f, 102,6866f, 1921,605f, -1,222806f, 203,4042f, -0,3436648f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[2]);
	(*&Local_4 + 260)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_03", 2, -394,6131f, 74,61404f, 2288,006f, 0,4780442f, 222,441f, -0,02244f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[3]);
	(*&Local_4 + 260)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_04", 2, -195,7706f, 74,78233f, 2153,151f, 0.0f, 283,5011f, 0.0f, 200.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[4]);
	(*&Local_4 + 260)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_05", 2, 95,13686f, 73,7887f, 1957,484f, 0,2269392f, 254,2982f, -0,4592334f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[5]);
	(*&Local_4 + 260)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_09", 2, -83,72751f, 74,72866f, 2133,192f, 0,07711391f, 217,2085f, -0,2873949f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[6]);
	(*&Local_4 + 260)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_06", 2, 133,3314f, 101,5336f, 1860,83f, 0,7859433f, 283,174f, -3,514714f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[7]);
	(*&Local_4 + 260)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_07", 2, -42,44237f, 110,4033f, 1644,058f, -1,761828f, 193,3601f, 1,43246f, 600.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[8]);
	(*&Local_4 + 260)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_08", 2, -257,6203f, 103,108f, 1881,588f, -1,199938f, 200,7375f, -0,404507f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_304, (*&Local_4 + 260)[9]);
	Local_4.f_348 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary04a_set");
	(*&Local_4 + 308)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_01", 2, -160,9765f, 105,9078f, 1732,607f, -5,828618f, 252,8693f, 6,59693f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[0]);
	(*&Local_4 + 308)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_02", 2, -31,6465f, 74,79186f, 2065,564f, 0,07076702f, -31,15744f, -0,2737466f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[1]);
	(*&Local_4 + 308)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_03", 2, 167,7268f, 111,198f, 1943,735f, -0,3082833f, 234,4778f, -2,498543f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[2]);
	(*&Local_4 + 308)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_04", 2, 109,3189f, 116,4548f, 1657,569f, 0.0f, 185,1981f, 0.0f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[3]);
	(*&Local_4 + 308)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_05", 2, 122,9762f, 105,1003f, 1772,206f, 1,983334f, 329,8043f, 0,02740668f, 400.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[4]);
	(*&Local_4 + 308)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_06", 2, -108,6006f, 97,61108f, 1883,963f, -2,037441f, 212,7151f, 2,12672f, 100.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[5]);
	(*&Local_4 + 308)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_07", 2, 98,55073f, 100,4269f, 1913,74f, 2,151692f, 397,1827f, 2,326014f, 400.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[6]);
	(*&Local_4 + 308)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_08", 2, -59,43208f, 100,7226f, 1809,403f, 1,74947f, 371,5336f, 1,375129f, 50.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[7]);
	(*&Local_4 + 308)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04a_09", 2, -79,40724f, 98,81655f, 1861,142f, -5,866202f, 252,982f, 6,636247f, 50.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_348, (*&Local_4 + 308)[8]);
	Local_4.f_404 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary05_set");
	(*&Local_4 + 352)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_01", 2, -62,88781f, 118,4626f, 2064,58f, 0.0f, 180,8112f, 0.0f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[0]);
	(*&Local_4 + 352)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_02", 2, -252,1575f, 103,2059f, 1638,684f, 0.0f, 262,2784f, 0.0f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[1]);
	(*&Local_4 + 352)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_03", 2, 108,8226f, 103,2059f, 1684,732f, 0.0f, 298,2881f, 0.0f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[2]);
	(*&Local_4 + 352)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_04", 2, -109,3295f, 118,4626f, 1393,951f, -2,391758f, 182,1742f, 0,857417f, 600.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[3]);
	(*&Local_4 + 352)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_011", 2, -21,43865f, 74,79186f, 2075,898f, 0,07076702f, -31,15744f, -0,2737466f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[4]);
	(*&Local_4 + 352)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_012", 2, 177,9346f, 111,198f, 1954,068f, 179,6917f, -54,47783f, 177,5015f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[5]);
	(*&Local_4 + 352)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_014", 2, 209,1549f, 105,1366f, 1826,748f, 1,983334f, -30,19572f, 0,02740668f, 400.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[6]);
	(*&Local_4 + 352)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_015", 2, -98,39275f, 97,61108f, 1894,296f, 177,9626f, -32,71506f, -177,8733f, 100.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[7]);
	(*&Local_4 + 352)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_016", 2, 108,7586f, 100,4269f, 1924,074f, 2,151692f, 37,18269f, 2,326014f, 400.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[8]);
	(*&Local_4 + 352)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_017", 2, -49,22423f, 100,7226f, 1819,737f, 1,74947f, 11,53356f, 1,375129f, 50.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[9]);
	(*&Local_4 + 352)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_018", 2, -69,19939f, 98,81655f, 1871,476f, 174,1338f, -72,98199f, -173,3638f, 50.0f, 200.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[10]);
	(*&Local_4 + 352)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_09", 2, -193,6169f, 103,2059f, 1686,743f, 0.0f, 293,0208f, 0.0f, 400.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 352)[11]);
	Local_4.f_448 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary06_set");
	(*&Local_4 + 408)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_01", 2, -63,12487f, 118,4626f, 1626,631f, -2,39008f, 179,6478f, 0,7519265f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[0]);
	(*&Local_4 + 408)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_02", 2, -289,8705f, 139,1767f, 1465,504f, 0.0f, 219,0557f, 0.0f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[1]);
	(*&Local_4 + 408)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_03", 2, 128,2695f, 120,5131f, 1456,132f, 0.0f, 306,9586f, 0.0f, 800.0f, 200.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[2]);
	(*&Local_4 + 408)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_04", 2, -64,09254f, 117,3321f, 1421,375f, -175,0546f, 118,9303f, -174,9026f, 10.0f, 30.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[3]);
	(*&Local_4 + 408)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_05", 2, 44,2148f, 117,0065f, 1497,101f, -177,0858f, 145,1098f, -177,5655f, 100.0f, 30.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[4]);
	(*&Local_4 + 408)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_06", 2, -69,08148f, 113,4714f, 1545,472f, -177,1469f, 213,0908f, -180,792f, 100.0f, 30.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[5]);
	(*&Local_4 + 408)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_07", 2, -65,15114f, 116,4268f, 1473,414f, 0.0f, 211,7038f, 0.0f, 50.0f, 30.0f, 50.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[6]);
	(*&Local_4 + 408)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_08", 2, -101,9651f, 116,4268f, 1521,35f, 0.0f, 240,7449f, 0.0f, 100.0f, 30.0f, 50.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[7]);
	(*&Local_4 + 408)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary06_09", 2, -156,2129f, 116,4268f, 1524,487f, 0.0f, 142,2351f, 0.0f, 100.0f, 30.0f, 50.0f);
	ADD_TO_VOLUME_SET(Local_4.f_448, (*&Local_4 + 408)[8]);
	Local_4.f_476 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "RestrictionVol_set");
	(*&Local_4 + 452)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict_01", 2, -66,15173f, 118,2126f, 1625,141f, 0.0f, 0.0f, 0.0f, 500.0f, 500.0f, 500.0f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 452)[0]);
	(*&Local_4 + 452)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict_02", 2, -51,07054f, 118,2126f, 2059,14f, 0.0f, -13,47598f, 0.0f, 500.0f, 500.0f, 500.0f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 452)[1]);
	(*&Local_4 + 452)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict_03", 2, -106,6342f, 118,2126f, 2308,732f, 0.0f, -0,4621154f, 0.0f, 500.0f, 500.0f, 500.0f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 452)[2]);
	(*&Local_4 + 452)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict_04", 2, -614,3375f, 118,2126f, 2332,395f, 0.0f, -0,4621154f, 0.0f, 700.0f, 500.0f, 500.0f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 452)[3]);
	(*&Local_4 + 452)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict_05", 2, -356,7813f, 118,2126f, 2059,14f, 0.0f, -36,7236f, 0.0f, 500.0f, 500.0f, 1000.0f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 452)[4]);
	Local_4.f_488 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "BeechersRestrictVol_set");
	(*&Local_4 + 480)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_beechers", 2, -109,7946f, 117,8928f, 1378,142f, 0.0f, 0.0f, 0.0f, 310.0f, 100.0f, 330.0f);
	ADD_TO_VOLUME_SET(Local_4.f_488, (*&Local_4 + 480)[0]);
	Local_4.f_500 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "UnionPacificRestrictVol_set");
	(*&Local_4 + 492)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_union_pacific", 2, -275,6776f, 84,35147f, 2108.0f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 75.0f);
	ADD_TO_VOLUME_SET(Local_4.f_500, (*&Local_4 + 492)[0]);
	Local_4.f_528 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ThievesRestrictVol_set");
	(*&Local_4 + 504)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_thieves01", 2, 158,2915f, 73,19171f, 2188,796f, 0.0f, 61,4049f, 0.0f, 125.0f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_528, (*&Local_4 + 504)[0]);
	(*&Local_4 + 504)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_thieves02", 2, 101,6734f, 73,19171f, 2292,737f, 0.0f, 61,4049f, 0.0f, 125.0f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_528, (*&Local_4 + 504)[1]);
	(*&Local_4 + 504)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_thieves03", 2, 139,278f, 73,19171f, 2344,285f, 0.0f, 110,7681f, 0.0f, 125.0f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_528, (*&Local_4 + 504)[2]);
	(*&Local_4 + 504)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_thieves04", 2, 62,75194f, 73,19171f, 2136,606f, 0.0f, 61,4049f, 0.0f, 125.0f, 100.0f, 125.0f);
	ADD_TO_VOLUME_SET(Local_4.f_528, (*&Local_4 + 504)[3]);
	(*&Local_4 + 504)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_thieves05", 2, 158,2915f, 73,19171f, 2076,371f, 0.0f, 83,22988f, 0.0f, 125.0f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_528, (*&Local_4 + 504)[4]);
	Local_4.f_540 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "HennigansRestrictVol_set");
	(*&Local_4 + 532)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_hennigans01", 2, -853,4244f, 93,37753f, 2414,771f, 0.0f, 0.0f, 0.0f, 325.0f, 100.0f, 250.0f);
	ADD_TO_VOLUME_SET(Local_4.f_540, (*&Local_4 + 532)[0]);
	Local_4.f_572 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "HennigansCattlePen_set");
	(*&Local_4 + 544)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_cattle_pen01", 2, -903,2327f, 90,35291f, 2446,267f, 0.0f, 15,45198f, 0.0f, 30.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_572, (*&Local_4 + 544)[0]);
	(*&Local_4 + 544)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_cattle_pen02", 2, -902,865f, 90,35291f, 2452,323f, 0.0f, 0,1694365f, 0.0f, 30.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_572, (*&Local_4 + 544)[1]);
	(*&Local_4 + 544)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_cattle_pen03", 2, -902,8091f, 90,35291f, 2466,624f, 0.0f, -0,1631045f, 0.0f, 30.0f, 10.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_572, (*&Local_4 + 544)[2]);
	(*&Local_4 + 544)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_cattle_pen04", 2, -886,8328f, 90,35291f, 2456,672f, 0.0f, 0,274152f, 0.0f, 10.0f, 10.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_572, (*&Local_4 + 544)[3]);
	(*&Local_4 + 544)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_cattle_pen05", 2, -893,9213f, 90,35291f, 2438,616f, 0.0f, 18,52412f, 0.0f, 10.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_572, (*&Local_4 + 544)[4]);
	(*&Local_4 + 544)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_cattle_pen06", 2, -888,3709f, 90,35291f, 2440,577f, 0.0f, 22,22491f, 0.0f, 10.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_572, (*&Local_4 + 544)[5]);
	Local_4.f_576 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_nostraggler", 2, -120,001f, 118,7449f, 1608,103f, -8,376367f, 94,09187f, -9,062716f, 20.0f, 100.0f, 800.0f);
	Local_4.f_580 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01", 2, -893,1335f, 90,35634f, 2489,214f, 0.0f, 32,64139f, 0.0f, 100.0f, 10.0f, 6.0f);
	Local_4.f_584 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01a", 3, -880,0001f, 90,35291f, 2504.0f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_588 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02a", 3, -536,0615f, 91,37096f, 2355,924f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_592 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02", 2, -536,0615f, 91,37096f, 2342,508f, 0.0f, -22,38161f, 0.0f, 200.0f, 50.0f, 20.0f);
	Local_4.f_596 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03", 2, -442,2583f, 74,74915f, 2151,875f, 0.0f, -44,75608f, 0.0f, 200.0f, 50.0f, 20.0f);
	Local_4.f_600 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03a", 3, -449,8136f, 74,74915f, 2165,156f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_604 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective04", 3, -35,97646f, 87,99165f, 1926,149f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_608 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective05d", 2, -126,3423f, 118,212f, 1531,331f, 0.0f, -91,4295f, 0.0f, 10.0f, 10.0f, 100.0f);
	Local_4.f_612 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective05", 2, -127,1224f, 118,334f, 1529,05f, 0.0f, 5,52046f, 0.0f, 9,5f, 10.0f, 6.0f);
	Local_4.f_616 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective05b", 2, -127,1581f, 118,334f, 1531,415f, 0.0f, 5,52046f, 0.0f, 13.0f, 10.0f, 6.0f);
	Local_4.f_620 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective05a", 3, -130,3956f, 118,2944f, 1502,82f, 1,756704f, 25,37598f, -0,009990674f, 15.0f, 10.0f, 15.0f);
	Local_4.f_624 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective06c", 2, -59,10064f, 115,7966f, 1432,411f, 0.0f, -60,84564f, 0.0f, 5,5f, 10.0f, 6.0f);
	Local_4.f_628 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective06", 2, -60,14133f, 115,7966f, 1432,411f, 0.0f, -44,17629f, 0.0f, 150.0f, 50.0f, 10.0f);
	Local_4.f_632 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective06b", 2, -60,38709f, 115,7966f, 1432,981f, 0.0f, -60,84564f, 0.0f, 10.0f, 10.0f, 6.0f);
	Local_4.f_636 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective06a", 3, -42,91998f, 116,8612f, 1421,815f, 0.0f, 14,9721f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_640 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander00", 3, -906,6736f, 90,35291f, 2469,645f, 0.0f, 20.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_644 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander01", 3, -880,0001f, 90,35291f, 2504.0f, 0.0f, 20.0f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_648 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander02", 3, -536,0615f, 91,37096f, 2355,924f, 0.0f, 20.0f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_652 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander03", 3, -449,8136f, 74,74915f, 2165,156f, 0.0f, 20.0f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_656 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander04", 3, -35,97646f, 87,99165f, 1926,149f, 0.0f, 20.0f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_660 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander04a", 3, -8.0f, 99,49412f, 1847,999f, 0.0f, 20.0f, 0.0f, 30.0f, 50.0f, 30.0f);
	Local_4.f_664 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander04b", 3, 9,994247f, 99,99157f, 1850,77f, 0.0f, 20.0f, 0.0f, 30.0f, 50.0f, 30.0f);
	Local_4.f_668 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander05", 3, -130,3956f, 118,2944f, 1502,82f, 0.0f, 24,82872f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_672 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander06", 3, -42,90256f, 116,8612f, 1421,936f, 0.0f, 14,9721f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_676 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_rancher01", 2, -900,4708f, 90,35207f, 2471,826f, 0.0f, 49,66534f, 0.0f, 25.0f, 10.0f, 30.0f);
	Local_4.f_680 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_rancher02", 2, -906,5623f, 90,35207f, 2476,34f, 0.0f, 22,35416f, 0.0f, 25.0f, 10.0f, 30.0f);
	Local_4.f_684 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_attack", 2, -41,04739f, 88,17254f, 1930,68f, 1,041175f, 55,10641f, 0,1466186f, 20.0f, 100.0f, 400.0f);
	Local_4.f_688 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_goodbye", 2, -802,3787f, 91,5416f, 2501,857f, 0,6016375f, 8,133046f, -0,622282f, 10.0f, 100.0f, 400.0f);
	Local_4.f_692 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_help", 2, -724,1101f, 94,60657f, 2504,486f, 0,6016375f, 8,133046f, -0,622282f, 20.0f, 100.0f, 400.0f);
	Local_4.f_696 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_stop01", 2, -548,0001f, 92,31911f, 2404f, 1,577192f, 67,81086f, 0,7530412f, 10.0f, 100.0f, 150.0f);
	Local_4.f_700 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_stop02", 2, -485,2912f, 71,06873f, 2200,69f, 1,542182f, 67,27946f, 0,7151593f, 10.0f, 100.0f, 150.0f);
	Local_4.f_704 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_stop03", 2, -121,6671f, 118,212f, 1549,646f, 175,4226f, 82,51591f, 174,754f, 10.0f, 100.0f, 150.0f);
	Local_4.f_708 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_stop04", 2, -72.0f, 116,4147f, 1440f, 0,6529115f, 24,1883f, -0,4398686f, 10.0f, 100.0f, 150.0f);
	Local_4.f_712 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_destroy_ambient", 2, -472,9839f, 71,86533f, 2190,505f, 0.0f, -34,78399f, 0.0f, 50.0f, 100.0f, 50.0f);
	Local_4.f_716 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_beechers_exclude", 2, -96.0f, 117,2465f, 1407,298f, 0.0f, 0.0f, 0.0f, 80.0f, 100.0f, 50.0f);
	Local_4.f_720 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_beechers_leave", 2, -108,9761f, 117,2465f, 1379,388f, 0.0f, 0.0f, 0.0f, 350.0f, 100.0f, 400.0f);
	Local_4.f_724 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_no_jump", 2, -49,5944f, 117,2465f, 1420,406f, 0.0f, 0.0f, 0.0f, 60.0f, 50.0f, 60.0f);
	Local_4.f_728 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_stay_inner", 2, -268,4783f, 91,04813f, 2097,73f, 0.0f, -38,5455f, 0.0f, 1550.0f, 1000.0f, 1850.0f);
	Local_4.f_732 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_stay_outer", 2, -268,4783f, 91,04813f, 2097,73f, 0.0f, -38,5455f, 0.0f, 1800.0f, 1000.0f, 2000.0f);
	Local_4.f_736 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_open_gate", 2, -894,678f, 90,23862f, 2486,677f, 0.0f, 32,693f, 0.0f, 7.0f, 10.0f, 5.0f);
	Local_4.f_740 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective00", 2, -790,5826f, 93,34259f, 2414,096f, 0.0f, -36,4306f, 0.0f, 10.0f, 15.0f, 15.0f);
	Local_4.f_744 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_hitch_exclude", 2, -78,34198f, 116,8612f, 1419,057f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_748 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_stop05", 2, -80,71184f, 116,4585f, 1446,135f, 180,7285f, 144,8453f, 179,7121f, 10.0f, 100.0f, 150.0f);
	Local_4.f_752 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_peds_exclude", 2, 19,1206f, 91,98262f, 1856,345f, 0.0f, 0.0f, 0.0f, 300.0f, 200.0f, 300.0f);
	Local_4.f_756 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 760)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -98,86352f, 118,6149f, 1349,365f, 0.0f, 233,0674f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 760)[0], Local_4.f_756);
	(*&Local_4 + 760)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleStart01", -60f, 116,4573f, 1392f, 0.0f, 38,98147f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 760)[1], Local_4.f_756);
	(*&Local_4 + 760)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -71,77767f, 116,8612f, 1410,798f, 0.0f, 51,69757f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 760)[2], Local_4.f_756);
	(*&Local_4 + 760)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "WifeStart01", -106,2052f, 119,489f, 1352,372f, 0.0f, 71,80637f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 760)[3], Local_4.f_756);
	(*&Local_4 + 760)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -77,19144f, 116,8612f, 1417,584f, 0.0f, 270,5349f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 760)[4], Local_4.f_756);
	(*&Local_4 + 760)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start01", -75,06525f, 116,8612f, 1414,859f, 0.0f, 51,75232f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 760)[5], Local_4.f_756);
	Local_4.f_788 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 792)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -795,5158f, 92,24216f, 2422,255f, 0.0f, 20,80401f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 792)[0], Local_4.f_788);
	(*&Local_4 + 792)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -788,5834f, 92,29993f, 2422,999f, 0.0f, 57,87616f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 792)[1], Local_4.f_788);
	(*&Local_4 + 792)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchersDaughterStart02", -890,082f, 90,35291f, 2446,97f, 0.0f, 160,25f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 792)[2], Local_4.f_788);
	(*&Local_4 + 792)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RancherStart02", -789,933f, 93,22781f, 2413,259f, 0.0f, 193,3903f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 792)[3], Local_4.f_788);
	(*&Local_4 + 792)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RancherEnd02", -789,933f, 93,22781f, 2413,259f, 0.0f, 320,2328f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 792)[4], Local_4.f_788);
	(*&Local_4 + 792)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -793,652f, 92,23145f, 2421,267f, 0.0f, 0,109f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 792)[5], Local_4.f_788);
	(*&Local_4 + 792)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start02", -791,89f, 92,23145f, 2421,525f, 0.0f, 17,05911f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 792)[6], Local_4.f_788);
	(*&Local_4 + 792)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start02", -890,048f, 90,35291f, 2447,644f, 0.0f, 241,509f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 792)[7], Local_4.f_788);
	Local_4.f_828 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 832)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -912,0001f, 90,35291f, 2452f, 0.0f, -153,1932f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[0], Local_4.f_828);
	(*&Local_4 + 832)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -896,0171f, 90,35291f, 2449,802f, 0.0f, 263,4478f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[1], Local_4.f_828);
	(*&Local_4 + 832)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RancherStart03", -812,0329f, 91,37479f, 2467,939f, 0.0f, 147,4771f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[2], Local_4.f_828);
	(*&Local_4 + 832)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchersDaughterStart03", -890,082f, 90,35291f, 2446,97f, 0.0f, 160,1197f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[3], Local_4.f_828);
	(*&Local_4 + 832)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01Start03", -890,6639f, 90,35207f, 2481,14f, 0.0f, 443,2926f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[4], Local_4.f_828);
	(*&Local_4 + 832)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02Start03", -901,6159f, 90,35207f, 2488,269f, 0.0f, 325,5752f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[5], Local_4.f_828);
	(*&Local_4 + 832)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -894,656f, 90,35291f, 2442,297f, 0.0f, -163,1442f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[6], Local_4.f_828);
	(*&Local_4 + 832)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd03", -916,0001f, 90,35291f, 2456f, 0.0f, -147,174f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[7], Local_4.f_828);
	(*&Local_4 + 832)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start03", -893,352f, 90,35291f, 2441,421f, 0.0f, 196,0194f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[8], Local_4.f_828);
	(*&Local_4 + 832)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01End03", -897,9518f, 90,35291f, 2484.0f, 0.0f, 213,0538f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[9], Local_4.f_828);
	(*&Local_4 + 832)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start03", -890,048f, 90,35291f, 2447,644f, 0.0f, 241,896f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[10], Local_4.f_828);
	(*&Local_4 + 832)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02End03", -896,7905f, 90,35291f, 2481,563f, 0.0f, 573,9075f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 832)[11], Local_4.f_828);
	Local_4.f_884 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 888)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -892,0001f, 90,35291f, 2500.0f, 0.0f, -88,69018f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[0], Local_4.f_884);
	(*&Local_4 + 888)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -843,5179f, 90,77769f, 2511,432f, 0.0f, 263,4478f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[1], Local_4.f_884);
	(*&Local_4 + 888)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchersDaughterStart04", -872,0001f, 90,35291f, 2484.0f, 0.0f, -96,2455f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[2], Local_4.f_884);
	(*&Local_4 + 888)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RancherStart04", -796,0001f, 91,35687f, 2484.0f, 0,1181132f, 160,0104f, 0,3386275f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[3], Local_4.f_884);
	(*&Local_4 + 888)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -892,0001f, 90,35291f, 2504.0f, 0.0f, -87,65366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[4], Local_4.f_884);
	(*&Local_4 + 888)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start04", -851,9971f, 90,67549f, 2508,144f, 0.0f, -49,89449f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[5], Local_4.f_884);
	(*&Local_4 + 888)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start04", -864,0001f, 90,35291f, 2492.0f, 0.0f, 247,2637f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[6], Local_4.f_884);
	Local_4.f_920 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 924)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -548,0001f, 92,63287f, 2396.0f, 0.0f, -30,87452f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 924)[0], Local_4.f_920);
	(*&Local_4 + 924)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchersDaughterStart05", -552,0001f, 92,87204f, 2392.0f, 0.0f, -87,22755f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 924)[1], Local_4.f_920);
	(*&Local_4 + 924)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchersDaughterEnd05", -880,373f, 90,16616f, 2424,05f, 0.0f, -87,22755f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 924)[2], Local_4.f_920);
	(*&Local_4 + 924)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -520,451f, 90,34014f, 2332.0f, 0.0f, 187,4482f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 924)[3], Local_4.f_920);
	(*&Local_4 + 924)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart05", -544,0001f, 92,59833f, 2384.0f, 0.0f, -9,963894f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 924)[4], Local_4.f_920);
	(*&Local_4 + 924)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start05", -531,1726f, 90,88852f, 2348,62f, 0.0f, -92,91121f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 924)[5], Local_4.f_920);
	(*&Local_4 + 924)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start05", -548,0001f, 92,40481f, 2376.0f, 0.0f, -135,0881f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 924)[6], Local_4.f_920);
	Local_4.f_956 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene06Set", Local_4, 8, 0);
	(*&Local_4 + 960)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart06", -444.0f, 79,0896f, 2144f, 0.0f, -54,79993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 960)[0], Local_4.f_956);
	(*&Local_4 + 960)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart06", -444.0f, 79,73266f, 2136f, 0.0f, -44,64183f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 960)[1], Local_4.f_956);
	(*&Local_4 + 960)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart06", -464.0f, 72,16379f, 2180f, 0.0f, -46,22562f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 960)[2], Local_4.f_956);
	(*&Local_4 + 960)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start06", -448.0f, 75,91007f, 2160f, 0.0f, -81,5193f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 960)[3], Local_4.f_956);
	Local_4.f_980 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene07Set", Local_4, 8, 0);
	(*&Local_4 + 984)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart07", -47,9662f, 86,22924f, 1936,988f, 0.0f, -48,52542f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[0], Local_4.f_980);
	(*&Local_4 + 984)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart07", -32.0f, 90,16607f, 1908f, 0.0f, 269,0146f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[1], Local_4.f_980);
	(*&Local_4 + 984)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart07", -45,5577f, 85,70475f, 1940,201f, 0.0f, 322,1283f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[2], Local_4.f_980);
	(*&Local_4 + 984)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start07", -28f, 89,90562f, 1912.0f, 0.0f, 322,6788f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[3], Local_4.f_980);
	Local_4.f_1004 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene08Set", Local_4, 8, 0);
	(*&Local_4 + 1008)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart08", -8.0f, 93,63773f, 1880f, 0.0f, -16,39404f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1008)[0], Local_4.f_1004);
	(*&Local_4 + 1008)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart08", -20.0f, 94,45158f, 1880f, 0.0f, 180,2061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1008)[1], Local_4.f_1004);
	(*&Local_4 + 1008)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart08", -12.0f, 93,2709f, 1884f, 0.0f, 365,0115f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1008)[2], Local_4.f_1004);
	(*&Local_4 + 1008)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start08", -16.0f, 94,17774f, 1880f, 0.0f, 220,1507f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1008)[3], Local_4.f_1004);
	Local_4.f_1028 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene09Set", Local_4, 8, 0);
	(*&Local_4 + 1032)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart09", 15,00125f, 98,22278f, 1861,92f, 0.0f, -16,39404f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1032)[0], Local_4.f_1028);
	(*&Local_4 + 1032)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart09", 6,778208f, 102,8878f, 1834,886f, 0.0f, 180,2061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1032)[1], Local_4.f_1028);
	(*&Local_4 + 1032)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart09", 12.0f, 97,94608f, 1864.0f, 0.0f, 361,7505f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1032)[2], Local_4.f_1028);
	(*&Local_4 + 1032)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start09", 10,99117f, 102,0218f, 1837,062f, 0.0f, 371,784f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1032)[3], Local_4.f_1028);
	Local_4.f_1052 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene10Set", Local_4, 8, 0);
	(*&Local_4 + 1056)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart10", -129,4509f, 118,344f, 1538,934f, 0.0f, -32,39901f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1056)[0], Local_4.f_1052);
	(*&Local_4 + 1056)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart10", -136,0979f, 118,8388f, 1495,579f, 0.0f, 150,3779f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1056)[1], Local_4.f_1052);
	(*&Local_4 + 1056)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart10", -125,3019f, 118,2119f, 1537,629f, 0.0f, 13,00618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1056)[2], Local_4.f_1052);
	(*&Local_4 + 1056)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start10", -128,8729f, 118,4755f, 1493,922f, 0.0f, 292,771f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1056)[3], Local_4.f_1052);
	Local_4.f_1076 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene11Set", Local_4, 8, 0);
	(*&Local_4 + 1080)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart11", -71,99997f, 117,3184f, 1448f, 0.0f, -32,39901f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[0], Local_4.f_1076);
	(*&Local_4 + 1080)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart11", -68.0f, 115,9779f, 1432f, 0.0f, 150,3779f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[1], Local_4.f_1076);
	(*&Local_4 + 1080)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart11", -74,18257f, 116,7225f, 1442,182f, 0.0f, -48,12374f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[2], Local_4.f_1076);
	(*&Local_4 + 1080)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start11", -68.0f, 116,1761f, 1428f, 0.0f, 156,1997f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[3], Local_4.f_1076);
	(*&Local_4 + 1080)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleEnd11", -60,67518f, 115,8573f, 1432,675f, 0.0f, -41,28461f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[4], Local_4.f_1076);
	Local_4.f_1104 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 1108)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -78,831f, 116,911f, 1405,41f, 0.0f, 119,934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1108)[0], Local_4.f_1104);
	(*&Local_4 + 1108)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -80.0f, 116,8409f, 1406,363f, 0.0f, 307,8358f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1108)[1], Local_4.f_1104);
	(*&Local_4 + 1108)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -36f, 116,8612f, 1404f, 0.0f, 411,2395f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1108)[2], Local_4.f_1104);
	(*&Local_4 + 1108)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -77,507f, 116,869f, 1419,258f, 0.0f, -91,12924f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1108)[3], Local_4.f_1104);
	(*&Local_4 + 1108)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01StartLast", -77,19144f, 116,8612f, 1417,584f, 0.0f, -89,18501f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1108)[4], Local_4.f_1104);
	(*&Local_4 + 1108)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleStartLast", -60f, 116,8612f, 1420f, 0.0f, 186,1839f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1108)[5], Local_4.f_1104);
	(*&Local_4 + 1108)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "WifeStartLast", -106,2052f, 119,489f, 1352,372f, 0.0f, 99,51627f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1108)[6], Local_4.f_1104);
	(*&Local_4 + 1108)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleEndLast", -60f, 116,8612f, 1416f, 0.0f, 66,23773f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1108)[7], Local_4.f_1104);
	Local_4.f_1144 = CREATE_OBJECTSET_IN_LAYOUT("Horse03SpawnSet", Local_4, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_03_01", 8.0f, 98,91069f, 1860.0f, 0.0f, -217,3758f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_1144);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_03_02", 0.0f, 98,73331f, 1855,999f, 0.0f, 172,8854f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_1144);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_03_03", 4,000031f, 99,22952f, 1856.0f, 0.0f, -199,6333f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_1144);
	Local_4.f_1148 = CREATE_OBJECTSET_IN_LAYOUT("Horse04SpawnSet", Local_4, 8, 0);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_04_01", 0,6371265f, 106,7515f, 1816,942f, 0.0f, -211,3866f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_1148);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_04_02", 4,545491f, 107,5087f, 1810,021f, 0.0f, -193,3627f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_1148);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_04_03", -3,170032f, 108,1726f, 1809,749f, 0.0f, 166,8552f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_1148);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_04_04", -23,89697f, 111,6909f, 1773,886f, 0.0f, -209,3711f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_1148);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_04_05", -16,60841f, 111,5454f, 1764,582f, 0.0f, 155,4165f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_1148);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_04_06", -15,29857f, 111,5117f, 1771,628f, 0.0f, 150,0916f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_1148);
	Local_4.f_1152 = CREATE_OBJECTSET_IN_LAYOUT("Outlaw01SpawnSet", Local_4, 8, 0);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_01_01", -64,78537f, 115,4191f, 1788,759f, 0.0f, -172,0989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_1152);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_01_02", -61,45754f, 114,9428f, 1786,297f, 0.0f, 202,5427f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_1152);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_01_03", -57,80816f, 114,5361f, 1784,118f, 0.0f, -166,377f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_1152);
	Local_4.f_1156 = CREATE_OBJECTSET_IN_LAYOUT("Outlaw02SpawnSet", Local_4, 8, 0);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_02_01", -60,82602f, 115,4871f, 1793,907f, 0.0f, -172,0989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_1156);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_02_02", -57,71702f, 115,1632f, 1791,615f, 0.0f, 202,5427f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_1156);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_02_03", -54,19437f, 114,7183f, 1789,698f, 0.0f, -166,377f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_1156);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_02_04", -51,20674f, 114,2398f, 1787,107f, 0.0f, -172,0989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_1156);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_02_05", -47,92581f, 113,8898f, 1785,157f, 0.0f, 202,5427f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_1156);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "point_outlaw_02_06", -44,31032f, 113,3651f, 1783,66f, 0.0f, -166,377f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_1156);
	Local_4.f_1160 = CREATE_OBJECTSET_IN_LAYOUT("MoveCows01Set", Local_4, 8, 0);
	(*&Local_4 + 1164)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_cow_01_01", -40.0f, 103,2537f, 1828f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[0], Local_4.f_1160);
	(*&Local_4 + 1164)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_cow_01_02", -32.0f, 103,5257f, 1819,999f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[1], Local_4.f_1160);
	(*&Local_4 + 1164)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_cow_01_03", 36.0f, 99,3176f, 1856f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[2], Local_4.f_1160);
	(*&Local_4 + 1164)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_cow_01_04", 36.0f, 100,1443f, 1848.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[3], Local_4.f_1160);
	(*&Local_4 + 1164)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_cow_01_05", 44,00003f, 100,0896f, 1848.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[4], Local_4.f_1160);
	Local_4.f_1188 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_companion", -72,17164f, 116,8612f, 1410,042f, 0.0f, 65,98219f, 0.0f);
	Local_4.f_1192 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gateway01", -793,652f, 92,23145f, 2421,267f, 0.0f, -88,30547f, 0.0f);
	Local_4.f_1196 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective00", -906,6736f, 90,35291f, 2469,645f, 0.0f, -139,5319f, 0.0f);
	Local_4.f_1200 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective01b", -880,034f, 90,35291f, 2504.0f, 0.0f, -82,22447f, 0.0f);
	Local_4.f_1204 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective01", -863,5977f, 90,34905f, 2504,15f, 0.0f, -82,22447f, 0.0f);
	Local_4.f_1208 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02", -536,0615f, 91,37096f, 2355,924f, 0.0f, -33,94287f, 0.0f);
	Local_4.f_1212 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective03", -452,0001f, 73,85866f, 2168f, 0.0f, -30,46557f, 0.0f);
	Local_4.f_1216 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective04", -35,97646f, 87,99165f, 1926,149f, 0.0f, -33,60575f, 0.0f);
	Local_4.f_1220 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective04a", -8.0f, 99,49412f, 1847,999f, 0.0f, 0,9785101f, 0.0f);
	Local_4.f_1224 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective04b", 9,647645f, 99,99157f, 1850,946f, 0.0f, 0,9785101f, 0.0f);
	Local_4.f_1228 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective05", -130,3956f, 118,2944f, 1502,82f, 0.0f, -26,77981f, 0.0f);
	Local_4.f_1232 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective06", -42,30066f, 116,8612f, 1421,647f, 0.0f, -52,89809f, 0.0f);
	*(&Local_4 + 1236) = { -8.0f, 93,12223f, 1884f };
	*(&Local_4 + 1236 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1260) = { 200f, 97,38037f, 1892f };
	*(&Local_4 + 1260 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_1284 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_ranchhand01_01", -889,0574f, 90,35291f, 2477,756f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1288 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_ranchhand01_02", -900,0001f, 90,35291f, 2444.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1292 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_ranchhand02_01", -908,0001f, 90,35291f, 2490,465f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1296 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_ranchhand02_02", -912,0001f, 90,35291f, 2448f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1300 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_ranchersdaughter01", -888,0001f, 90,35291f, 2472f, 0.0f, 85,76461f, 0.0f);
	*(&Local_4 + 1304) = { -897,8105f, 90,35291f, 2481,866f };
	*(&Local_4 + 1304 + 12) = { 0.0f, 36,38995f, 0.0f };
	*(&Local_4 + 1328) = { -171,3093f, 127,0223f, 1806,003f };
	*(&Local_4 + 1328 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1352) = { -75,83722f, 117,6509f, 1418,991f };
	*(&Local_4 + 1352 + 12) = { 0.0f, 268,941f, 0.0f };
	*(&Local_4 + 1376) = { -75,8614f, 117,7085f, 1417,575f };
	*(&Local_4 + 1376 + 12) = { 0.0f, 267.0f, 0.0f };
	*(&Local_4 + 1400) = { -124.0f, 118,8691f, 1380f };
	*(&Local_4 + 1400 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1424) = { 31,99988f, 126,8915f, 1412f };
	*(&Local_4 + 1424 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_1448 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_waterpump", -72,37083f, 116,6794f, 1414,914f, 0.0f, 51,56491f, 0.0f);
	Local_4.f_1452 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_pocketwatch", -70,358f, 116,6794f, 1410,924f, 0.0f, 51,56491f, 0.0f);
	Local_4.f_1456 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_cooking", -107,152f, 119,489f, 1348,97f, 0.0f, 51,56491f, 0.0f);
	Local_4.f_1460 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_chopveggies", -106,835f, 119,489f, 1350,702f, 0.0f, 51,56491f, 0.0f);
	Local_4.f_1464 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_stirringpot", -107,406f, 119,489f, 1351,837f, 0.0f, 51,56491f, 0.0f);
	Local_4.f_1468 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_shelf", -104,109f, 119,489f, 1350,731f, 0.0f, 51,56491f, 0.0f);
	Local_4.f_1472 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_sweeping", -108,458f, 119,488f, 1353,729f, 0.0f, 51,56491f, 0.0f);
	Local_4.f_1476 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_sit_smoke", -67,438f, 117,899f, 1375,083f, 0.0f, 129.0f, 0.0f);
	Local_4.f_1480 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_repair", -71,865f, 117,902f, 1371,628f, 0.0f, 266.0f, 0.0f);
	*(&Local_4 + 1484) = { -906,6736f, 90,35291f, 2469,645f };
	*(&Local_4 + 1484 + 12) = { 0.0f, -139,5319f, 0.0f };
	Local_4.f_1508 = CREATE_GRINGO_IN_LAYOUT(Local_4, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", -66,46201f, 117,7529f, 1360f, 0.0f, -47,32581f, 0.0f);
	Local_4.f_1512 = CREATE_GRINGO_IN_LAYOUT(Local_4, "rand_idle_stand_nospawn4", "rand_idle_stand_nospawn", -892,7537f, 90,39569f, 2480,871f, 0.0f, 21,30917f, 0.0f);
	Local_4.f_1516 = CREATE_GRINGO_IN_LAYOUT(Local_4, "rand_idle_stand_nospawn5", "rand_idle_stand_nospawn", -901,1947f, 90,37595f, 2486,326f, 0.0f, 8,045435f, 0.0f);
	Local_4.f_1520 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -790,8464f, 93,04779f, 2414,476f, 0.0f, 210,5108f, 0.0f);
	Local_4.f_1524 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -794,484f, 92,21453f, 2418,667f, 0.0f, 203,5967f, 0.0f);
	Local_4.f_1528 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand", "smoking_stand", -786,139f, 93,697f, 2408,823f, 0.0f, 143,8486f, 0.0f);
	Local_4.f_1532 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand1", "smoking_stand", -60f, 116,8612f, 1420f, 0.0f, -210,2f, 0.0f);
	Local_4.f_1536 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand2", "smoking_stand", -60,67518f, 115,8573f, 1432,675f, 0.0f, -257,5542f, 0.0f);
	Local_4.f_1540 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_forward", "lean_rail_forward", -62,63347f, 116,8612f, 1419,108f, 0.0f, 155,6197f, 0.0f);
	Local_4.f_1544 = CREATE_GRINGO_IN_LAYOUT(Local_4, "MissionEnd_MarstonSmoke", "MissionEnd_MarstonSmoke", -74,325f, 116,849f, 1406,035f, 0.0f, 12,838f, 0.0f);
}

var D³PâÂYGBéAåD³J\ÂûKBé/D²ÿÿÂ¡[¢BéÂèD²~Â¢´Bé­ZD±ÿÿÂ¢ÌÀBéµ3D±§,G³:DD;opath_companion05   p   HÂ3ìBé[ÜD°ÎÂ%BéY5D°ÌÂqÃBébâD(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128) //Position: 0x140B2 / 82098
{
	var uVar63;
	
	*StackVal = StackVal;
	uVar63 = StackVal;
}

bool Function_298(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x1438E / 82830
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
		Function_226(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_306(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_301(StackVal, iParam7);
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
		Function_300(bVar1, 0, 0, 0, 0);
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
		Function_299(bVar1, 0);
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

void Function_299(bool bParam0, bool bParam1) //Position: 0x14878 / 84088
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_300(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x14898 / 84120
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

bool Function_301(int iParam0, bool bParam1) //Position: 0x148EC / 84204
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_305(iParam0))
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
						Function_302(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_302(bool bParam0, bool bParam1) //Position: 0x1496C / 84332
{
	Function_304(bParam0);
	Function_303(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_303(bool bParam0) //Position: 0x14992 / 84370
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_304(bool bParam0) //Position: 0x149B6 / 84406
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

bool Function_305(int iParam0) //Position: 0x14A85 / 84613
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_306(int iParam0, bool bParam1) //Position: 0x14A9C / 84636
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

bool Function_307(bool bParam0) //Position: 0x14B2F / 84783
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_312();
	iVar1 = 0;
	if (!Function_181(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_311(bParam0[iVar03], 8);
		}
		else if (Function_310())
		{
			iVar1 = 1;
			Function_311(bParam0[iVar03], 8);
		}
		Function_311(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_181(bParam0[iVar03], 4))
		{
			if (!Function_181(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_181(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_181(bParam0[03], 8) || iVar1));
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
				Function_311(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_181(bParam0[iVar03], 4))
		{
			if (!Function_181(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_311(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_311(bParam0[iVar03], 2);
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
							Function_311(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_311(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_311(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_311(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_311(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_311(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_311(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_311(bParam0[iVar03], 2);
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
	Function_308();
	return 1;
}

void Function_308() //Position: 0x14EAA / 85674
{
	if (!Function_309(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_309(int iParam0) //Position: 0x14EEA / 85738
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_310() //Position: 0x14F06 / 85766
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

void Function_311(var uParam0, int iParam1) //Position: 0x14F31 / 85809
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_312() //Position: 0x14F42 / 85826
{
	if (!Function_309(128))
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

int Function_313() //Position: 0x14F84 / 85892
{
	switch (bLocal_539)
	{
		case 0x00000063:
			Function_314(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_314(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_314(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_314(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_314(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_314(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x15005 / 86021
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
		Function_243();
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
	Function_275(bParam9);
}

int Function_315() //Position: 0x150F5 / 86261
{
	switch (bLocal_539)
	{
		case 0x00000063:
			Function_348(Global_34573, (*&Local_4 + 760)[0], 1, 1, 1);
			ACTOR_DISABLE_WEAPON_RENDER(bLocal_543, 1, 0);
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
					{
						Function_348(bLocal_544, (*&Local_4 + 792)[5], 1, 1, 0);
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
					}
					else
					{
						Function_294(Global_34573, (*&Local_4 + 792)[5], 1, 1, 0);
					}
				}
				else
				{
					bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
					{
						Function_348(bLocal_822[0], (*&Local_4 + 792)[6], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
					}
					else
					{
						Function_294(bLocal_543, (*&Local_4 + 792)[6], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_820))
			{
				Function_348(bLocal_820, (*&Local_4 + 792)[4], 1, 1, 1);
				TASK_STAND_STILL(bLocal_820, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_820, true);
			}
			return 1;
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
					{
						Function_348(bLocal_544, (*&Local_4 + 832)[6], 1, 1, 0);
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
					}
					else
					{
						Function_294(Global_34573, (*&Local_4 + 832)[6], 1, 1, 0);
					}
				}
				else
				{
					bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
					{
						Function_348(bLocal_822[0], (*&Local_4 + 832)[8], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
					}
					else
					{
						Function_294(bLocal_543, (*&Local_4 + 832)[8], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_821))
			{
				if (IS_ACTOR_VALID(bLocal_824[0]))
				{
					TASK_CLEAR(bLocal_824[0]);
					if (!IS_ACTOR_RIDING(bLocal_821) && !IS_ACTOR_MOUNTED(bLocal_824[0]))
					{
						Function_348(bLocal_824[0], (*&Local_4 + 832)[10], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(bLocal_821, bLocal_824[0]);
					}
					else
					{
						Function_294(bLocal_821, (*&Local_4 + 832)[10], 1, 1, 1);
					}
				}
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_348(Global_34573, (*&Local_4 + 1108)[0], 1, 1, 0);
			if (IS_ACTOR_VALID(bLocal_543))
			{
				Function_348(bLocal_543, (*&Local_4 + 1108)[2], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_818))
			{
				TASK_CLEAR(bLocal_818);
				Function_348(bLocal_818, (*&Local_4 + 1108)[7], 1, 1, 1);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_316() //Position: 0x153B5 / 86965
{
	switch (bLocal_539)
	{
		case 0x00000063:
			if (!Function_317() && !Function_307(&bLocal_418))
			{
				return 0;
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_317() //Position: 0x153E5 / 87013
{
	Function_320(&Local_4 + 4, Global_7581[03], 2, 0);
	Function_320(&Local_4 + 4, Global_7581[13], 2, 0);
	Function_318(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_318(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_318(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_318(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_forward", 1, 0);
	Function_318(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/missionend_marstonsmoke", 1, 0);
	if (Function_307(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_318(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x15585 / 87429
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_319(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_311(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_319(var uParam0, int iParam1, int iParam2) //Position: 0x155BD / 87485
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_181(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_311(uParam0[iVar03], 4);
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

var Function_320(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x15681 / 87681
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_181(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_311(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_311(uParam0[iVar03], 8);
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

int Function_321() //Position: 0x15751 / 87889
{
	switch (bLocal_539)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-103,78f, 120,884f, 1348,972f, 0,982f, -0,138f, 0,126f);
				return 1;
			}
			Unknown_Function();
			if (StackVal)
			{
				Function_348(Global_34573, (*&Local_4 + 760)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_543))
				{
					Function_348(bLocal_543, (*&Local_4 + 760)[2], 1, 1, 1);
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
			}
			break;
		
		case 0x00000001:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-793,459f, 94,747f, 2423,09f, 0,004f, -0,053f, -0,999f);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
			return 1;
			break;
		
		case 0x00000002:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-895,435f, 93,014f, 2439,573f, 0,291f, -0,052f, 0,955f);
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_322() //Position: 0x1584C / 88140
{
	switch (bLocal_539)
	{
		case 0x00000063:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_323(StackVal, StackVal, bLocal_410, *(&Global_3422[4940] + 52), &Local_4 + 116[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_239((*&Local_4 + 792)[5]);
			Function_323(StackVal, StackVal, bLocal_410, Function_239((*&Local_4 + 792)[5]), &Local_4 + 116[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_239((*&Local_4 + 832)[6]);
			Function_323(StackVal, StackVal, bLocal_410, Function_239((*&Local_4 + 832)[6]), &Local_4 + 116[3], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_239((*&Local_4 + 1108)[0]);
			Function_323(StackVal, StackVal, bLocal_410, Function_239((*&Local_4 + 1108)[0]), &Local_4 + 116[5], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_323(StackVal, StackVal, bLocal_410, *(&Global_3422[4940] + 52), &Local_4 + 116[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_323(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x1596D / 88429
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
				Function_324(bVar1, bParam0);
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

void Function_324(bool bParam0, bool bParam1) //Position: 0x15BDB / 89051
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

void Function_325(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x15C50 / 89168
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
	Function_243();
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
				Function_327(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_327(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_326()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_326()));
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
	if (Function_309(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_309(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_326() //Position: 0x15EF9 / 89849
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

vector3 Function_327(bool bParam0) //Position: 0x15F78 / 89976
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_328() //Position: 0x15F89 / 89993
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 1108)[4];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_329();
	return;
}

void Function_329() //Position: 0x16022 / 90146
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1576;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1232, &iLocal_980, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_672, -1.0f);
		}
	}
	return;
}

void Function_330(bool bParam0, int iParam1) //Position: 0x160FF / 90367
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
				AI_SET_NAV_MAX_SLOPE(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_331(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16143 / 90435
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
				DECOR_SET_BOOL(bVar1, bParam1, bParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_332(bool bParam0, bool bParam1) //Position: 0x1618A / 90506
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

void Function_333(bool bParam0, bool bParam1) //Position: 0x161CB / 90571
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
				SET_ACTOR_CAN_BE_TARGETED(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_334(bool bParam0, bool bParam1) //Position: 0x1620C / 90636
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
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_335(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, float fParam7, bool bParam8) //Position: 0x16250 / 90704
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	char* cVar18[64];
	bool bVar34;
	char* cVar35;
	vector3 vVar36;
	vector3 vVar39;
	vector3 vVar42;
	vector3 vVar45;
	vector3 vVar48;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	
	if (SQUAD_IS_VALID(uParam0->f_44))
	{
		if (!uParam0->f_68 != 0)
		{
			if (IS_STRING_VALID(uParam0->f_64))
			{
				if (IS_OBJECT_VALID(bParam2))
				{
					Function_239(bParam2);
					vVar36 = { StackVal, StackVal, Function_239(bParam2) };
					Function_336(bParam2);
					vVar39 = { StackVal, StackVal, Function_336(bParam2) };
					PRINTVECTOR(vVar36);
					PRINTNL();
					bVar51 = RAND_FLOAT_RANGE(bParam5, bParam6);
					vVar42 = { StackVal, StackVal, vVar36 };
					vVar42.x = (vVar42.x - ((IntToFloat(iParam4) * bVar51) / 2.0f));
					vVar42.f_4 = (vVar42.y + fParam7);
					vVar42.f_8 = (vVar42.z - ((IntToFloat((uParam0->f_68 / iParam4)) * bVar51) / 2.0f));
					PRINTVECTOR(vVar42);
					PRINTNL();
					vVar45 = { StackVal, StackVal, vVar42 };
					vVar48 = { StackVal, StackVal, vVar39 };
					PRINTVECTOR(vVar45);
					PRINTNL();
					bVar0 = false;
					while (bVar0 < (uParam0->f_68 - 1))
					{
						strcpy(&cVar2, uParam0->f_64, 64);
						strcpy(&cVar18, "_", 64);
						stradd(&cVar2, &cVar18, 64);
						cVar35 = INT_TO_STRING(bVar0);
						stradd(&cVar2, cVar35, 64);
						if (iVar1 > iParam4)
						{
							iVar1 = 0;
							vVar45.x = vVar42.x;
							bVar51 = RAND_FLOAT_RANGE(bParam5, bParam6);
							vVar45.f_8 = (vVar45.z + bVar51);
						}
						if (bParam8)
						{
							vVar48.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
						}
						bVar52 = RAND_INT_RANGE(false, (*iParam3 - 1));
						bVar53 = (*iParam3)[bVar52];
						if (Function_305(bVar53))
						{
							bVar34 = CREATE_ACTOR_IN_LAYOUT(bParam1, &cVar2, bVar53, vVar45, vVar48);
							if (IS_ACTOR_VALID(bVar34))
							{
								SNAP_OBJECT_TO_GROUND(bVar34, 20.0f, false, 1092616192);
								SQUAD_JOIN(bVar34, uParam0->f_44);
								PRINTSTRING(&cVar2);
								PRINTNL();
								PRINTVECTOR(vVar45);
								PRINTNL();
							}
						}
						bVar51 = RAND_FLOAT_RANGE(bParam5, bParam6);
						vVar45.x = (vVar45.x + bVar51);
						iVar1++;
						bVar0++;
					}
				}
			}
		}
	}
}

vector3 Function_336(bool bParam0) //Position: 0x163F2 / 91122
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

void Function_337() //Position: 0x16419 / 91161
{
	iLocal_980[0] = 1008;
	iLocal_980[1] = 1009;
	iLocal_980[2] = 1010;
	iLocal_980[3] = 1011;
	(*&Local_1034 + 104)[0] = Global_34573;
	(*&Local_1034 + 104)[1] = bLocal_543;
	Local_1034.f_68 = Function_343(Local_411);
	Local_1034.f_72 = 15;
	PRINTINT(Local_1034.f_68);
	PRINTNL();
	Local_1034.f_64 = "HOME01_COWS01";
	if (!Function_273(&Local_1034 + 88))
	{
		Function_338(&Local_1034 + 88);
	}
	else
	{
		Function_219(&Local_1034 + 88);
	}
	if (!IS_OBJECT_VALID(Local_1034))
	{
		Local_1034 = CREATE_POINT_IN_LAYOUT(bLocal_410, "COWS_01_BASE", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(Local_1034))
		{
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		Local_1034.f_4 = CREATE_POINT_IN_LAYOUT(bLocal_410, "COWS_01_CENTER", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(StackVal))
		{
		}
	}
	if (!SQUAD_IS_VALID(Local_1034.f_48))
	{
		Local_1034.f_48 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_48))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_48);
		}
	}
	if (!SQUAD_IS_VALID(Local_1034.f_52))
	{
		Local_1034.f_52 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_52))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_52);
		}
	}
	if (!SQUAD_IS_VALID(Local_1034.f_56))
	{
		Local_1034.f_56 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_56))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_56);
		}
	}
	if (!IS_VOLUME_VALID(Local_1034.f_40))
	{
		Local_1034.f_40 = CREATE_VOLUME_IN_LAYOUT(bLocal_410, "HERD_VOLUME_MEDIUM", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 9.0f, 9.0f, 9.0f);
		if (IS_VOLUME_VALID(Local_1034.f_40))
		{
			if (IS_OBJECT_VALID(StackVal))
			{
				ATTACH_OBJECTS(StackVal, Local_1034.f_40, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			}
		}
	}
	Local_1034.f_12 = "";
	Local_1034.f_8 = "";
	Local_1034.f_100 = 0;
	return;
}

void Function_338(int iParam0) //Position: 0x16670 / 91760
{
	if (!Function_273(iParam0))
	{
		Function_220(iParam0, 0.0f);
	}
	return;
}

void Function_339(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x16685 / 91781
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_288(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, iParam2, bParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_340(bool bParam0, bool bParam1) //Position: 0x166BB / 91835
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

void Function_341(bool bParam0, bool bParam1) //Position: 0x166FD / 91901
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

void Function_342(bool bParam0, bool bParam1, bool bParam2, bool bParam3, char* cParam4, int iParam5) //Position: 0x1673E / 91966
{
	bool bVar0;
	char* cVar1;
	char* cVar2[64];
	vector3 vVar18;
	vector3 vVar21;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (iParam5 - 1))
		{
			strcpy(&cVar2, "DYN_", 64);
			cVar1 = INT_TO_STRING(bVar0);
			stradd(&cVar2, cParam4, 64);
			stradd(&cVar2, cVar1, 64);
			GET_OBJECT_POSITION((*bParam2)[bVar0], &vVar18);
			GET_OBJECT_ORIENTATION((*bParam2)[bVar0], &vVar21);
			(*bParam1)[bVar0] = CREATE_ACTOR_IN_LAYOUT(bLocal_410, &cVar2, (*bParam3)[bVar0], vVar18, vVar21);
			if (IS_ACTOR_VALID((*bParam1)[bVar0]))
			{
				PRINTINT(bVar0);
				PRINTNL();
				SQUAD_JOIN((*bParam1)[bVar0], bParam0);
			}
			bVar0++;
		}
	}
}

bool Function_343(int iParam0) //Position: 0x167DA / 92122
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_344() //Position: 0x167F4 / 92148
{
	switch (bLocal_539)
	{
		case 0x00000000:
			if (Function_347() && Function_346())
			{
				Function_226(11, 0, 1);
				RESET_ACTOR_GAITS(bLocal_819, 0);
				SET_CRIPPLE_ENABLE(bLocal_819, 0);
				SET_ACTOR_FACTION(bLocal_819, 20);
				TASK_PRIORITY_SET(bLocal_819, true);
				TASK_STAND_STILL(bLocal_819, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_819, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_819, 50.0f);
				SET_ACTOR_HEALTH(bLocal_819, GET_ACTOR_MAX_HEALTH(bLocal_819));
				Function_226(13, 0, 1);
				RESET_ACTOR_GAITS(bLocal_818, 0);
				SET_CRIPPLE_ENABLE(bLocal_818, 0);
				SET_ACTOR_FACTION(bLocal_818, 20);
				TASK_PRIORITY_SET(bLocal_818, true);
				TASK_STAND_STILL(bLocal_818, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_818, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_818, 50.0f);
				SET_ACTOR_HEALTH(bLocal_818, GET_ACTOR_MAX_HEALTH(bLocal_818));
				return 1;
			}
			break;
		
		case 0x00000001:
			if (Function_345())
			{
				Function_226(3, 0, 1);
				RESET_ACTOR_GAITS(bLocal_821, 0);
				SET_CRIPPLE_ENABLE(bLocal_821, 0);
				SET_ACTOR_FACTION(bLocal_821, 20);
				TASK_PRIORITY_SET(bLocal_821, true);
				TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_821, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_821, 50.0f);
				SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
				return 1;
			}
			break;
		
		case 0x00000002:
			if (Function_345())
			{
				Function_226(3, 0, 1);
				RESET_ACTOR_GAITS(bLocal_821, 0);
				SET_CRIPPLE_ENABLE(bLocal_821, 0);
				SET_ACTOR_FACTION(bLocal_821, 20);
				TASK_PRIORITY_SET(bLocal_821, true);
				TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_821, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_821, 50.0f);
				SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
				return 1;
			}
			break;
		
		case 0x00000003:
			if (Function_345())
			{
				Function_226(3, 0, 1);
				RESET_ACTOR_GAITS(bLocal_821, 0);
				SET_CRIPPLE_ENABLE(bLocal_821, 0);
				SET_ACTOR_FACTION(bLocal_821, 20);
				TASK_PRIORITY_SET(bLocal_821, true);
				TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_821, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_821, 50.0f);
				SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
				return 1;
			}
			break;
		
		case 0x00000004:
			if (Function_345())
			{
				Function_226(3, 0, 1);
				RESET_ACTOR_GAITS(bLocal_821, 0);
				SET_CRIPPLE_ENABLE(bLocal_821, 0);
				SET_ACTOR_FACTION(bLocal_821, 20);
				TASK_PRIORITY_SET(bLocal_821, true);
				TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_821, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_821, 50.0f);
				SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
				return 1;
			}
			break;
		
		case 0x00000005:
			return 1;
			break;
		
		case 0x00000006:
			return 1;
			break;
		
		case 0x00000007:
			return 1;
			break;
		
		case 0x00000008:
			if (Function_347() && Function_346())
			{
				Function_226(11, 0, 1);
				RESET_ACTOR_GAITS(bLocal_819, 0);
				SET_CRIPPLE_ENABLE(bLocal_819, 0);
				SET_ACTOR_FACTION(bLocal_819, 20);
				TASK_PRIORITY_SET(bLocal_819, true);
				TASK_STAND_STILL(bLocal_819, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_819, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_819, 50.0f);
				SET_ACTOR_HEALTH(bLocal_819, GET_ACTOR_MAX_HEALTH(bLocal_819));
				Function_226(13, 0, 1);
				RESET_ACTOR_GAITS(bLocal_818, 0);
				SET_CRIPPLE_ENABLE(bLocal_818, 0);
				SET_ACTOR_FACTION(bLocal_818, 20);
				TASK_PRIORITY_SET(bLocal_818, true);
				TASK_STAND_STILL(bLocal_818, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_818, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_818, 50.0f);
				SET_ACTOR_HEALTH(bLocal_818, GET_ACTOR_MAX_HEALTH(bLocal_818));
				return 1;
			}
			break;
		
		case 0x00000009:
			if (Function_347() && Function_346())
			{
				Function_226(11, 0, 1);
				RESET_ACTOR_GAITS(bLocal_819, 0);
				SET_CRIPPLE_ENABLE(bLocal_819, 0);
				SET_ACTOR_FACTION(bLocal_819, 20);
				TASK_PRIORITY_SET(bLocal_819, true);
				TASK_STAND_STILL(bLocal_819, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_819, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_819, 50.0f);
				SET_ACTOR_HEALTH(bLocal_819, GET_ACTOR_MAX_HEALTH(bLocal_819));
				Function_226(13, 0, 1);
				RESET_ACTOR_GAITS(bLocal_818, 0);
				SET_CRIPPLE_ENABLE(bLocal_818, 0);
				SET_ACTOR_FACTION(bLocal_818, 20);
				TASK_PRIORITY_SET(bLocal_818, true);
				TASK_STAND_STILL(bLocal_818, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_818, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_818, 50.0f);
				SET_ACTOR_HEALTH(bLocal_818, GET_ACTOR_MAX_HEALTH(bLocal_818));
				return 1;
			}
			break;
		
		case 0x0000000A:
			if (Function_347() && Function_346())
			{
				Function_226(11, 0, 1);
				RESET_ACTOR_GAITS(bLocal_819, 0);
				SET_CRIPPLE_ENABLE(bLocal_819, 0);
				SET_ACTOR_FACTION(bLocal_819, 20);
				TASK_PRIORITY_SET(bLocal_819, true);
				TASK_STAND_STILL(bLocal_819, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_819, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_819, 50.0f);
				SET_ACTOR_HEALTH(bLocal_819, GET_ACTOR_MAX_HEALTH(bLocal_819));
				Function_226(13, 0, 1);
				RESET_ACTOR_GAITS(bLocal_818, 0);
				SET_CRIPPLE_ENABLE(bLocal_818, 0);
				SET_ACTOR_FACTION(bLocal_818, 20);
				TASK_PRIORITY_SET(bLocal_818, true);
				TASK_STAND_STILL(bLocal_818, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_818, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_818, 50.0f);
				SET_ACTOR_HEALTH(bLocal_818, GET_ACTOR_MAX_HEALTH(bLocal_818));
				return 1;
			}
			break;
		
		case 0x00000065:
			return 1;
			break;
	}
	return 0;
}

bool Function_345() //Position: 0x16C53 / 93267
{
	if (bLocal_539 == 2)
	{
		if (!IS_ACTOR_VALID(bLocal_821))
		{
			bLocal_821 = Function_298(3, 0, 1, -892.0f, 90,353f, 2449,998f, 0, 0, 0);
			return 0;
		}
		if (IS_ACTOR_VALID(bLocal_821))
		{
			if (iLocal_554[1] == 0)
			{
				if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_821, 1))
				{
					return 0;
				}
			}
		}
	}
	if (!IS_ACTOR_VALID(bLocal_821))
	{
		bLocal_821 = Function_298(3, 0, 1, -892.0f, 90,353f, 2449,998f, 0, 0, 0);
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_821, 1))
	{
		return 0;
	}
	return 1;
}

int Function_346() //Position: 0x16CE5 / 93413
{
	if (!IS_ACTOR_VALID(bLocal_818))
	{
		if (bLocal_539 == 101)
		{
			bLocal_818 = Function_298(13, 0, 1, -60.0f, 116,861f, 1420.0f, 0, 0, 0);
		}
		else
		{
			bLocal_818 = Function_298(13, 0, 1, -60.0f, 116,457f, 1392.0f, 0, 0, 0);
		}
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_818, 1))
	{
		return 0;
	}
	return 1;
}

int Function_347() //Position: 0x16D4B / 93515
{
	if (!IS_ACTOR_VALID(bLocal_819))
	{
		bLocal_819 = Function_298(11, 0, 1, -106,205f, 119,489f, 1352,372f, 0, 0, 0);
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_819, 1))
	{
		return 0;
	}
	return 1;
}

void Function_348(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x16D8A / 93578
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

bool Function_349(int iParam0) //Position: 0x16E91 / 93841
{
	return iParam0->f_20;
}

void Function_350(int iParam0) //Position: 0x16E9B / 93851
{
	if (!Function_349(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_195(1, 0, 1);
		}
	}
	return;
}

void Function_351() //Position: 0x16EB6 / 93878
{
	Function_162(18444);
	Function_358(12);
	Function_358(13);
	Function_358(11);
	Function_358(35);
	Function_358(6);
	Function_358(3);
	Function_358(9);
	Function_356(268);
	Function_355();
	Function_354();
	if (bLocal_539 == 0)
	{
		Function_353(1);
		Function_352(1);
	}
	else if (bLocal_539 == 1)
	{
		Function_353(1);
		Function_352(1);
	}
	else if (bLocal_539 == 2)
	{
		Function_353(1);
		Function_352(1);
	}
	else if (bLocal_539 == 3)
	{
		Function_353(1);
		Function_352(1);
	}
	else if (bLocal_539 == 4)
	{
		Function_353(1);
		Function_352(1);
	}
	else if (bLocal_539 == 5)
	{
		Function_353(0);
		Function_352(1);
	}
	else if (bLocal_539 == 6)
	{
		Function_353(0);
		Function_352(1);
	}
	else if (bLocal_539 == 7)
	{
		Function_353(1);
		Function_352(1);
	}
	else if (bLocal_539 == 8)
	{
		Function_353(1);
		Function_352(1);
	}
	else if (bLocal_539 == 9)
	{
		Function_353(1);
		Function_352(1);
	}
	else if (bLocal_539 == 10)
	{
		Function_353(1);
		Function_352(1);
	}
	else
	{
		Function_353(1);
		Function_352(1);
	}
	return;
}

void Function_352(int iParam0) //Position: 0x16FC0 / 94144
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 3;
	}
	Global_28842.f_44 = iParam0;
	return;
}

void Function_353(int iParam0) //Position: 0x16FDE / 94174
{
	if (iParam0 < 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 10;
	}
	Global_28842.f_40 = (iParam0 - Global_28842.f_12);
	return;
}

void Function_354() //Position: 0x17003 / 94211
{
	Global_28842.f_44 = 4294967295;
	return;
}

void Function_355() //Position: 0x1700F / 94223
{
	Global_28842.f_40 = 0;
	return;
}

void Function_356(int iParam0) //Position: 0x1701B / 94235
{
	Function_357(&Global_28842, iParam0);
	return;
}

void Function_357(var uParam0, int iParam1) //Position: 0x17029 / 94249
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_358(int iParam0) //Position: 0x1704C / 94284
{
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_359(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1706C / 94316
{
	AUDIO_MUSIC_FORCE_TRACK(iParam0, Function_360(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

var Function_360(int iParam0) //Position: 0x17088 / 94344
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

void Function_361(bool bParam0) //Position: 0x175C5 / 95685
{
	Function_362(0, 0x40400000);
	Function_207();
	Function_206();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_362(bool bParam0, float fParam1) //Position: 0x175F9 / 95737
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
	Function_364();
	Function_363();
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

void Function_363() //Position: 0x176F7 / 95991
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_364() //Position: 0x17729 / 96041
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

void Function_365(bool bParam0) //Position: 0x17826 / 96294
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
						if ((((((((((((((((((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1008 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1009) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1010) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1011) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1012) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1013) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1014) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1061) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1062) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1063) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1068) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1069) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1070) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1071) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1064) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1065) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1066) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1067) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1101) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1102) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1103) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1104)
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

int Function_366() //Position: 0x17AA5 / 96933
{
	switch (iLocal_795)
	{
		case 0x00000000:
			Function_219(&bLocal_875);
			iLocal_795++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(bLocal_1020[0]))
			{
				Function_370(StackVal, StackVal, *(&Local_4 + 1352), 0, &(bLocal_1020[0]));
			}
			else
			{
				Function_219(&bLocal_875);
				iLocal_795 = 2;
			}
			if (bLocal_539 != 9 && iLocal_554[8] != 1)
			{
				if (Function_271(&bLocal_875) <= 10.0f)
				{
					LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch01 gringo is out of order!!!");
					bLocal_1020[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 1352, 1,5f, 0);
					if (IS_GRINGO_VALID(bLocal_1020[0]))
					{
					}
					Function_219(&bLocal_875);
					iLocal_795 = 2;
				}
			}
			else if (Function_271(&bLocal_875) <= 2,5f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch01 gringo is out of order!!!");
				bLocal_1020[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 1352, 1,5f, 0);
				if (IS_GRINGO_VALID(bLocal_1020[0]))
				{
				}
				Function_219(&bLocal_875);
				iLocal_795 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(bLocal_1020[1]))
			{
				Function_370(StackVal, StackVal, *(&Local_4 + 1352), 1, &(bLocal_1020[1]));
			}
			else
			{
				iLocal_795 = 3;
			}
			if (bLocal_539 != 9 && iLocal_554[8] != 1)
			{
				if (Function_271(&bLocal_875) <= 10.0f)
				{
					LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch02 gringo is out of order!!!");
					bLocal_1020[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 1376, 1,5f, 0);
					if (IS_GRINGO_VALID(bLocal_1020[1]))
					{
					}
					Function_219(&bLocal_875);
					iLocal_795 = 3;
				}
			}
			else if (Function_271(&bLocal_875) <= 2,5f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch02 gringo is out of order!!!");
				bLocal_1020[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 1376, 1,5f, 0);
				if (IS_GRINGO_VALID(bLocal_1020[1]))
				{
				}
				Function_219(&bLocal_875);
				iLocal_795 = 3;
			}
			break;
		
		case 0x00000003:
			if (IS_GRINGO_VALID(bLocal_1020[0]) && IS_GRINGO_VALID(bLocal_1020[1]))
			{
				Function_239(GET_OBJECT_FROM_GRINGO(bLocal_1020[0]));
				Function_367(StackVal, StackVal, Function_239(GET_OBJECT_FROM_GRINGO(bLocal_1020[0])), 0, 0);
				Function_239(GET_OBJECT_FROM_GRINGO(bLocal_1020[1]));
				Function_367(StackVal, StackVal, Function_239(GET_OBJECT_FROM_GRINGO(bLocal_1020[1])), 0, 0);
			}
			iLocal_795++;
			break;
		
		case 0x00000004:
			if (iLocal_540 > 5)
			{
				if (bLocal_539 == 0)
				{
					if (IS_ACTOR_VALID(bLocal_544))
					{
						if (IS_GRINGO_VALID(bLocal_1020[0]))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_544, GET_OBJECT_FROM_GRINGO(bLocal_1020[0]), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(bLocal_544, bLocal_1020[0], "UseCase1", true, 1);
							TASK_PRIORITY_SET(bLocal_544, true);
						}
						else
						{
							Function_348(bLocal_544, (*&Local_4 + 760)[4], 1, 1, 1);
							TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
							TASK_PRIORITY_SET(bLocal_544, true);
						}
					}
				}
				else if (bLocal_539 == 10)
				{
					if (IS_GRINGO_VALID(bLocal_1020[0]))
					{
						GRINGO_SET_USABLE_BY_PLAYER(bLocal_1020[0], "UseCase1", 0);
					}
				}
				else if (bLocal_539 == 101)
				{
					if (IS_ACTOR_VALID(bLocal_544))
					{
						if (IS_GRINGO_VALID(bLocal_1020[1]))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_544, GET_OBJECT_FROM_GRINGO(bLocal_1020[1]), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(bLocal_544, bLocal_1020[1], "UseCase1", true, 1);
							TASK_PRIORITY_SET(bLocal_544, true);
						}
						else
						{
							Function_348(bLocal_544, (*&Local_4 + 1108)[4], 1, 1, 1);
							TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
							TASK_PRIORITY_SET(bLocal_544, true);
						}
					}
					if (IS_ACTOR_VALID(bLocal_822[0]))
					{
						if (IS_GRINGO_VALID(bLocal_1020[0]))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_822[0], GET_OBJECT_FROM_GRINGO(bLocal_1020[0]), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(bLocal_822[0], bLocal_1020[0], "UseCase1", true, 1);
							TASK_PRIORITY_SET(bLocal_822[0], true);
						}
						else
						{
							Function_348(bLocal_822[0], (*&Local_4 + 1108)[5], 1, 1, 1);
							TASK_STAND_STILL(bLocal_822[0], -1.0f, 0, 0);
							TASK_PRIORITY_SET(bLocal_822[0], true);
						}
					}
				}
				iLocal_795++;
			}
			break;
		
		case 0x00000005:
			iLocal_974 = 1;
			iLocal_795++;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

int Function_367(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x17FD4 / 98260
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_369(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
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
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_368(uVar0[0], "UseCase1"));
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
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_368(uVar0[1], "UseCase1"));
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

var Function_368(bool bParam0, bool bParam1) //Position: 0x18136 / 98614
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_369(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x18143 / 98627
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_370(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x181ED / 98797
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	if (bParam3)
	{
		*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	}
	else
	{
		*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
	}
}

void Function_371() //Position: 0x1829F / 98975
{
	var uVar0;
	
	switch (iLocal_793)
	{
		case 0x00000000:
			iLocal_793++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(bLocal_1020[2]))
			{
				GET_OBJECT_POSITION(Local_4.f_1448, &uVar0);
				bLocal_1020[2] = LOCATE_GRINGO_OF_TYPE("stand_waterpump", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_793++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(bLocal_1020[3]))
			{
				GET_OBJECT_POSITION(Local_4.f_1452, &uVar0);
				bLocal_1020[3] = LOCATE_GRINGO_OF_TYPE("stand_pocketwatch_e_any", &uVar0, 1.0f, 0);
			}
			else
			{
				bLocal_973 = true;
				iLocal_793++;
			}
			break;
		
		case 0x00000003:
			if (!IS_GRINGO_VALID(bLocal_1020[4]))
			{
				GET_OBJECT_POSITION(Local_4.f_1456, &uVar0);
				bLocal_1020[4] = LOCATE_GRINGO_OF_TYPE("cooking", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_793++;
			}
			break;
		
		case 0x00000004:
			iLocal_793++;
			break;
		
		case 0x00000005:
			if (!IS_GRINGO_VALID(bLocal_1020[6]))
			{
				GET_OBJECT_POSITION(Local_4.f_1464, &uVar0);
				bLocal_1020[6] = LOCATE_GRINGO_OF_TYPE("stand_stirringpot_w_any", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_793++;
			}
			break;
		
		case 0x00000006:
			if (!IS_GRINGO_VALID(bLocal_1020[7]))
			{
				GET_OBJECT_POSITION(Local_4.f_1468, &uVar0);
				bLocal_1020[7] = LOCATE_GRINGO_OF_TYPE("nuse_shelf", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_793++;
			}
			break;
		
		case 0x00000007:
			if (!IS_GRINGO_VALID(bLocal_1020[8]))
			{
				GET_OBJECT_POSITION(Local_4.f_1472, &uVar0);
				bLocal_1020[8] = LOCATE_GRINGO_OF_TYPE("multistage_sweeping", &uVar0, 1.0f, 0);
			}
			else
			{
				bLocal_972 = true;
				iLocal_793++;
			}
			break;
		
		case 0x00000008:
			if (!IS_GRINGO_VALID(bLocal_1020[9]))
			{
				GET_OBJECT_POSITION(Local_4.f_1480, &uVar0);
				bLocal_1020[9] = LOCATE_GRINGO_OF_TYPE("repair_kneel", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_793++;
			}
			break;
		
		case 0x00000009:
			if (!IS_GRINGO_VALID(bLocal_1020[10]))
			{
				GET_OBJECT_POSITION(Local_4.f_1476, &uVar0);
				bLocal_1020[10] = LOCATE_GRINGO_OF_TYPE("sit_ground_smoke", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_793++;
			}
			break;
		
		case 0x0000000A:
			iLocal_971 = 1;
			iLocal_793++;
			break;
	}
	return;
}

void Function_372(int iParam0) //Position: 0x1854E / 99662
{
	switch (iLocal_774)
	{
		case 0x00000000:
			iLocal_774++;
			break;
		
		case 0x00000001:
			if (!IS_OBJECT_VALID(bLocal_771))
			{
				bLocal_771 = CREATE_WORLD_SECTOR(bLocal_410, "beechersHope");
				if (IS_OBJECT_VALID(bLocal_771))
				{
				}
			}
			iLocal_774++;
			break;
		
		case 0x00000002:
			if (IS_WORLD_SECTOR_LOADED(bLocal_771))
			{
				iLocal_774++;
			}
			break;
		
		case 0x00000003:
			if (!IS_DOOR_VALID((*iParam0)[0]))
			{
				(*iParam0)[0] = Function_373("beechersHope", "stable01", 94);
				if (IS_DOOR_VALID((*iParam0)[0]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[1]))
			{
				(*iParam0)[1] = Function_373("beechersHope", "stable01", 95);
				if (IS_DOOR_VALID((*iParam0)[1]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[2]))
			{
				(*iParam0)[2] = Function_373("beechersHope", "stable01", 98);
				if (IS_DOOR_VALID((*iParam0)[2]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[3]))
			{
				(*iParam0)[3] = Function_373("beechersHope", "stable01", 99);
				if (IS_DOOR_VALID((*iParam0)[3]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[4]))
			{
				(*iParam0)[4] = Function_373("beechersHope", "stable01", 96);
				if (IS_DOOR_VALID((*iParam0)[4]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[5]))
			{
				(*iParam0)[5] = Function_373("beechersHope", "stable01", 97);
				if (IS_DOOR_VALID((*iParam0)[5]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[6]))
			{
				(*iParam0)[6] = Function_373("beechersHope", "house01", 1);
				if (IS_DOOR_VALID((*iParam0)[6]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[7]))
			{
				(*iParam0)[7] = Function_373("beechersHope", "house01", 2);
				if (IS_DOOR_VALID((*iParam0)[7]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[8]))
			{
				(*iParam0)[8] = Function_373("beechersHope", "house01", 3);
				if (IS_DOOR_VALID((*iParam0)[8]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[9]))
			{
				(*iParam0)[9] = Function_373("beechersHope", "house01", 4);
				if (IS_DOOR_VALID((*iParam0)[9]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[10]))
			{
				(*iParam0)[10] = Function_373("beechersHope", "house01", 5);
				if (IS_DOOR_VALID((*iParam0)[10]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[11]))
			{
				(*iParam0)[11] = Function_373("beechersHope", "house01", 6);
				if (IS_DOOR_VALID((*iParam0)[11]))
				{
				}
			}
			iLocal_774++;
			break;
		
		case 0x00000004:
			if (IS_DOOR_VALID((*iParam0)[0]))
			{
				Function_154((*iParam0)[0], 0);
				if (bLocal_539 == 101)
				{
					CLOSE_DOOR_FAST((*iParam0)[0]);
				}
				else
				{
					OPEN_DOOR_DIRECTION((*iParam0)[0], true);
				}
			}
			if (IS_DOOR_VALID((*iParam0)[1]))
			{
				Function_154((*iParam0)[1], 0);
				if (bLocal_539 == 101)
				{
					CLOSE_DOOR_FAST((*iParam0)[1]);
				}
				else
				{
					OPEN_DOOR_DIRECTION((*iParam0)[1], false);
				}
			}
			if (IS_DOOR_VALID((*iParam0)[2]))
			{
				Function_154((*iParam0)[2], 0);
				CLOSE_DOOR_FAST((*iParam0)[2]);
			}
			if (IS_DOOR_VALID((*iParam0)[3]))
			{
				Function_154((*iParam0)[3], 0);
				CLOSE_DOOR_FAST((*iParam0)[3]);
			}
			if (IS_DOOR_VALID((*iParam0)[4]))
			{
				Function_154((*iParam0)[4], 0);
				CLOSE_DOOR_FAST((*iParam0)[4]);
			}
			if (IS_DOOR_VALID((*iParam0)[5]))
			{
				Function_154((*iParam0)[5], 0);
				CLOSE_DOOR_FAST((*iParam0)[5]);
			}
			if (IS_DOOR_VALID((*iParam0)[6]))
			{
				Function_154((*iParam0)[6], 0);
				CLOSE_DOOR_FAST((*iParam0)[6]);
			}
			if (IS_DOOR_VALID((*iParam0)[7]))
			{
				Function_154((*iParam0)[7], 0);
				CLOSE_DOOR_FAST((*iParam0)[7]);
			}
			if (IS_DOOR_VALID((*iParam0)[8]))
			{
				Function_154((*iParam0)[8], 0);
				CLOSE_DOOR_FAST((*iParam0)[8]);
			}
			if (IS_DOOR_VALID((*iParam0)[9]))
			{
				Function_154((*iParam0)[9], 0);
				CLOSE_DOOR_FAST((*iParam0)[9]);
			}
			if (IS_DOOR_VALID((*iParam0)[10]))
			{
				Function_154((*iParam0)[10], 0);
				CLOSE_DOOR_FAST((*iParam0)[10]);
			}
			if (IS_DOOR_VALID((*iParam0)[11]))
			{
				Function_154((*iParam0)[11], 0);
				CLOSE_DOOR_FAST((*iParam0)[11]);
			}
			iLocal_774++;
			break;
		
		case 0x00000005:
			iLocal_976 = 1;
			iLocal_774++;
			break;
	}
	return;
}

int Function_373(var uParam0, int iParam1, int iParam2) //Position: 0x18AB4 / 101044
{
	return Function_374(Global_29006, uParam0, iParam1, iParam2);
}

int Function_374(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x18AC6 / 101062
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
	uParam1 = uParam1;
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

bool Function_375(bool bParam0) //Position: 0x18B62 / 101218
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

void Function_376() //Position: 0x18B7E / 101246
{
	if (!iLocal_976)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_372(&iLocal_805);
			}
			else
			{
				iLocal_774 = 0;
				iLocal_976 = 0;
			}
		}
	}
	if (!iLocal_971)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_371();
			}
			else
			{
				iLocal_793 = 0;
				iLocal_971 = 0;
			}
		}
	}
	if (!iLocal_974)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_366();
			}
			else
			{
				iLocal_795 = 0;
				iLocal_974 = 0;
			}
		}
	}
	Function_365(bLocal_410);
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		Function_436();
		Function_435();
		Function_433();
		Function_424();
		Function_239((*&Local_4 + 1108)[0]);
		Function_419(StackVal, StackVal, "$/cutscene/HOME01_CS03/HOME01_CS03", &uLocal_770, Function_239((*&Local_4 + 1108)[0]), 1, 75.0f, 150.0f, 2, 2, 1, 2, 0, 1);
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (iLocal_554[9] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30717[1];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 1080)[0], 1, 1, 1);
				iLocal_793 = 0;
				iLocal_795 = 0;
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_974 = 0;
				iLocal_971 = 0;
				iLocal_957 = 0;
				iLocal_976 = 0;
				if (IS_ACTOR_VALID(bLocal_544))
				{
					TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_544, true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_786 = 0;
				iLocal_787 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_976 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Global_34165.f_124;
				bLocal_778 = Global_34165.f_128;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_1034.f_76 = bLocal_777;
				Local_1034.f_80 = bLocal_778;
				Function_416();
				if (iLocal_554[9] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 1080)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
					if (IS_VOLUME_VALID(Local_4.f_744))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_744);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_744);
						CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_744, 15);
					}
				}
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					Function_415(Local_1034.f_56, Local_1034.f_44);
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_44);
					Function_414(Local_1034.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_672, -1.0f);
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), bLocal_544, "Horse", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), bLocal_819, "Wife", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[317]), bLocal_818, "Uncle", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_406(&(Local_611[517]));
				Function_406(&(Local_611[617]));
				Function_406(&(Local_611[717]));
				Function_406(&(Local_611[817]));
				if (HUD_IS_FADED())
				{
					Function_219(&bLocal_545);
					iLocal_540 = 5;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 6;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30637[0], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (Function_398(bLocal_543, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					if (IS_GRINGO_VALID(bLocal_1020[1]))
					{
						GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_1020[1], "UseCase1", &vLocal_910);
						bLocal_882 = Function_397(StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", vLocal_910, 0.0f, 0.0f, 0.0f, Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(bLocal_882))
						{
						}
					}
					else
					{
						bLocal_882 = Function_397(StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", *(&Local_4 + 1352), 0.0f, 0.0f, 0.0f, Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(bLocal_882))
						{
						}
					}
				}
				Function_394();
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				Function_393("home01_obj11", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_385(&bLocal_551, 60.0f, 200.0f, bLocal_543, "Son_return", "Son_abandoned", &bLocal_568, 0, bLocal_410, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					Function_225(bLocal_882);
				}
			}
			else if (!IS_OBJECT_VALID(bLocal_882))
			{
				if (IS_GRINGO_VALID(bLocal_1020[1]))
				{
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_1020[1], "UseCase1", &vLocal_910);
					bLocal_882 = Function_397(StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", vLocal_910, 0.0f, 0.0f, 0.0f, Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				else
				{
					bLocal_882 = Function_397(StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", *(&Local_4 + 1352), 0.0f, 0.0f, 0.0f, Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_OBJECT_VALID(bLocal_882))
				{
					if (Function_382(Global_34573, bLocal_882, 1,75f) || Function_379(Global_34573, bLocal_543, 6.0f))
					{
						if (!IS_ACTOR_RIDING(bLocal_543) && IS_PLAYER_CONTROLLABLE(0))
						{
							if (IS_BLIP_VALID(bLocal_878))
							{
								REMOVE_BLIP(bLocal_878);
							}
							if (IS_OBJECT_VALID(bLocal_882))
							{
								Function_225(bLocal_882);
							}
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_243();
							iLocal_540 = 106;
						}
					}
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					if (IS_BLIP_VALID(bLocal_878))
					{
						REMOVE_BLIP(bLocal_878);
					}
					if (IS_OBJECT_VALID(bLocal_882))
					{
						Function_225(bLocal_882);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_243();
					iLocal_540 = 9;
				}
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (!iLocal_979)
				{
					iLocal_979 = 1;
					if (IS_GRINGO_VALID(bLocal_1020[1]))
					{
						if (!GRINGO_IS_USABLE_BY_PLAYER(bLocal_1020[1], "UseCase1"))
						{
							GRINGO_SET_USABLE_BY_PLAYER(bLocal_1020[1], "UseCase1", 1);
						}
					}
					if (IS_GRINGO_VALID(bLocal_1020[0]))
					{
						if (!GRINGO_IS_USABLE_BY_PLAYER(bLocal_1020[0], "UseCase1"))
						{
							GRINGO_SET_USABLE_BY_PLAYER(bLocal_1020[0], "UseCase1", 1);
						}
					}
				}
			}
			else if (iLocal_979)
			{
				iLocal_979 = 0;
				if (IS_GRINGO_VALID(bLocal_1020[1]))
				{
					if (GRINGO_IS_USABLE_BY_PLAYER(bLocal_1020[1], "UseCase1"))
					{
						GRINGO_SET_USABLE_BY_PLAYER(bLocal_1020[1], "UseCase1", 0);
					}
				}
				if (IS_GRINGO_VALID(bLocal_1020[0]))
				{
					if (GRINGO_IS_USABLE_BY_PLAYER(bLocal_1020[0], "UseCase1"))
					{
						GRINGO_SET_USABLE_BY_PLAYER(bLocal_1020[0], "UseCase1", 0);
					}
				}
			}
			break;
		
		case 0x00000009:
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				Function_243();
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					bLocal_788 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_44);
					Function_378(Local_411, bLocal_788);
				}
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Local_1034.f_76;
				Global_34165.f_124 = bLocal_777;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_778 = Local_1034.f_80;
				Global_34165.f_128 = bLocal_778;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_377();
				iLocal_554[10] = 1;
				Function_219(&bLocal_545);
				bLocal_539 = 101;
				iLocal_540 = 0;
			}
			break;
	}
	return;
}

void Function_377() //Position: 0x195D6 / 103894
{
	return;
}

void Function_378(int iParam0, bool bParam1) //Position: 0x195DC / 103900
{
	if (!Function_18(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = bParam1;
	return;
}

bool Function_379(var uParam0, bool bParam1, bool bParam2) //Position: 0x195F7 / 103927
{
	float fVar0;
	
	fVar0 = Function_380(uParam0, bParam1);
	if (fVar0 >= bParam2)
	{
		return 1;
	}
	return 0;
}

var Function_380(bool bParam0, bool bParam1) //Position: 0x19614 / 103956
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_381(&uVar0, &uVar3);
	return iVar6;
}

var Function_381(var uParam0, int iParam1) //Position: 0x19633 / 103987
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_382(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19651 / 104017
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_384(bParam0);
			Function_383(bParam1);
			if (VDIST(Function_384(bParam0), Function_383(bParam1)) >= bParam2)
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

vector3 Function_383(bool bParam0) //Position: 0x1976B / 104299
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

vector3 Function_384(bool bParam0) //Position: 0x197D7 / 104407
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

bool Function_385(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x19841 / 104513
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_392(Global_34573, bParam3, bParam2))
	{
		Function_232(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_392(Global_34573, bParam3, bParam1))
	{
		if (!Function_391(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_393(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_390(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_389(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_389(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_391(2))
	{
		Function_388(2);
		if (!Function_387())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_386();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_216(bParam3);
				Function_227(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_389(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_389(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_386() //Position: 0x199D5 / 104917
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

bool Function_387() //Position: 0x19A00 / 104960
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

void Function_388(bool bParam0) //Position: 0x19A44 / 105028
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

void Function_389(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x19AA7 / 105127
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

void Function_390(bool bParam0) //Position: 0x19B48 / 105288
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

bool Function_391(bool bParam0) //Position: 0x19BAB / 105387
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

bool Function_392(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19BF2 / 105458
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

void Function_393(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x19D03 / 105731
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

void Function_394() //Position: 0x19D56 / 105814
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_GoHitchUrHors", "Home01_GoHitchUrHors", 3, 3, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395(int iParam0) //Position: 0x19DA8 / 105896
{
	Function_396(0, Global_34573, iParam0, 0);
	Function_396(1, bLocal_821, iParam0, 0);
	Function_396(2, bLocal_820, iParam0, 0);
	Function_396(3, bLocal_543, iParam0, 0);
	Function_396(4, bLocal_818, iParam0, 0);
	Function_396(5, bLocal_819, iParam0, 0);
	return;
}

void Function_396(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x19DEA / 105962
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_397(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x19E0F / 105999
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

bool Function_398(bool bParam0, bool bParam1, float fParam2) //Position: 0x19EDA / 106202
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

bool Function_399() //Position: 0x19F77 / 106359
{
	return Global_34165.f_60;
}

void Function_400(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x19F82 / 106370
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
	if (iParam3 != Global_34165.f_48 && !Function_405())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_404(0);
	Function_403();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_402(uParam4, iVar0, iVar1);
	Function_401();
}

void Function_401() //Position: 0x1A01F / 106527
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

void Function_402(int iParam0, bool bParam1, bool bParam2) //Position: 0x1A060 / 106592
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

void Function_403() //Position: 0x1A1C6 / 106950
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_404(bool bParam0) //Position: 0x1A1EA / 106986
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

bool Function_405() //Position: 0x1A219 / 107033
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_406(bool bParam0) //Position: 0x1A234 / 107060
{
	if (IS_OBJECT_VALID(*bParam0))
	{
		if (DECOR_CHECK_EXIST(*bParam0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(*bParam0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(*bParam0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(*bParam0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(*bParam0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(*bParam0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(*bParam0);
			}
		}
	}
	*bParam0 = "";
	strcpy(bParam0 + 4, "", 24);
	bParam0->f_36 = 0;
	bParam0->f_40 = 0;
	return;
}

int Function_407(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1A2E8 / 107240
{
	if (!Function_413(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_412(iParam0, bParam2))
	{
		return 0;
	}
	Function_411(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_408(iParam0, iParam4, iParam5);
	return 1;
}

void Function_408(var uParam0, int iParam1, int iParam2) //Position: 0x1A324 / 107300
{
	if (iParam1 != 100000000)
	{
		Function_410(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_409(uParam0, iParam2);
	}
	return;
}

void Function_409(int iParam0, bool bParam1) //Position: 0x1A347 / 107335
{
	iParam0->f_40 = 0;
	Function_410(iParam0, 2, bParam1);
	Function_410(iParam0, 4, bParam1);
	Function_410(iParam0, 8, bParam1);
	Function_410(iParam0, 16, bParam1);
	Function_410(iParam0, 32, bParam1);
	Function_410(iParam0, 64, bParam1);
	Function_410(iParam0, 128, bParam1);
	Function_410(iParam0, 256, bParam1);
	Function_410(iParam0, 512, bParam1);
	Function_410(iParam0, 1024, bParam1);
	return;
}

void Function_410(int iParam0, int iParam1, bool bParam2) //Position: 0x1A3AD / 107437
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

void Function_411(var uParam0, int iParam1) //Position: 0x1A3E9 / 107497
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_412(int iParam0, bool bParam1) //Position: 0x1A3F5 / 107509
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

bool Function_413(var uParam0, bool bParam1) //Position: 0x1A47E / 107646
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

void Function_414(bool bParam0) //Position: 0x1A60A / 108042
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

void Function_415(bool bParam0, bool bParam1) //Position: 0x1A651 / 108113
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

void Function_416() //Position: 0x1A695 / 108181
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 1080)[3];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_417();
	return;
}

void Function_417() //Position: 0x1A72E / 108334
{
	Function_337();
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1232, &iLocal_980, 5, 1.0f, 3,5f, 1,5f, 1);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_672, -1.0f);
		}
	}
	return;
}

void Function_418(float fParam0) //Position: 0x1A801 / 108545
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*fParam0 - 1))
	{
		(*fParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

int Function_419(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x1A824 / 108580
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_422(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_423()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_420();
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
	else if ((!Function_422(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_423()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_422(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_420() //Position: 0x1AA6A / 109162
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
			Function_421(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_421(char* cParam0, vector3 vParam1) //Position: 0x1AABE / 109246
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

bool Function_422(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1ABE6 / 109542
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_384(bParam0);
		if (VDIST(Function_384(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_423() //Position: 0x1AC70 / 109680
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_424() //Position: 0x1AC7F / 109695
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_432();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_792++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_427(1);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000003:
				Function_427(1);
				if (IS_ACTOR_VALID(bLocal_818))
				{
					if (!Function_133())
					{
						if (Function_379(Global_34573, bLocal_818, 8.0f))
						{
							if (Function_271(&bLocal_548) <= 15.0f)
							{
								Function_426();
								Function_219(&bLocal_548);
							}
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_818))
				{
					if (!Function_133())
					{
						if (Function_379(Global_34573, bLocal_819, 8.0f))
						{
							if (Function_271(&bLocal_548) <= 12.0f)
							{
								Function_425();
								Function_219(&bLocal_548);
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_425() //Position: 0x1AD9A / 109978
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Home01_NoMeetJackStbles2", "Home01_NoMeetJackStbles2", false, 1, 0, 0, 1);
		Function_395(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_426() //Position: 0x1ADF4 / 110068
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Home01_NoMeetBoy2_v1_AA", "Home01_NoMeetBoy2_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_NoMeetBoy2_v1_AB", "Home01_NoMeetBoy2_v1_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Home01_NoMeetBoy2_v1_AC", "Home01_NoMeetBoy2_v1_AC", false, 1, 0, 0, 1);
		Function_395(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_427(bool bParam0) //Position: 0x1AEC6 / 110278
{
	if (Function_271(&bLocal_869) <= 6.0f)
	{
		Function_428();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
		}
		else
		{
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_544, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam0)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
			}
		}
	}
	return;
}

void Function_428() //Position: 0x1B007 / 110599
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_543)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (bVar0 == bLocal_822[0])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (IS_ACTOR_HUMAN(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_429();
					Function_219(&bLocal_869);
				}
			}
			else if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnChar", "Home01_GunOnChar", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_ShotsGunRandMac", "Home01_ShotsGunRandMac", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
			}
		}
	}
	return;
}

void Function_429() //Position: 0x1B286 / 111238
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ShootsChar", "Home01_ShootsChar", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430() //Position: 0x1B2D2 / 111314
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ShootsJakHors", "Home01_ShootsJakHors", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x1B324 / 111396
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_AssaultsJack", "Home01_AssaultsJack", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432() //Position: 0x1B374 / 111476
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_JonHitchsHors_v1_AA", "Home01_JonHitchsHors_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_JonHitchsHors_v1_AB", "Home01_JonHitchsHors_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_JonHitchsHors_v1_AC", "Home01_JonHitchsHors_v1_AC", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_433() //Position: 0x1B458 / 111704
{
	if (IS_ACTOR_VALID(bLocal_818))
	{
		switch (iLocal_787)
		{
			case 0x00000000:
				iLocal_787++;
				break;
			
			case 0x00000001:
				if (iLocal_971)
				{
					if ((bLocal_539 != 8 || bLocal_539 != 9) || bLocal_539 != 10)
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1540)))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_818, Local_4.f_1540, "UseCase1", true, 0, 0);
						}
						bLocal_772 = TASK_SEQUENCE_OPEN();
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1540)))
						{
							TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1540), "UseCase1", true, 1);
						}
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_818, bLocal_772, 4294967295);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_818, 2);
					}
					else
					{
						if (IS_GRINGO_VALID(bLocal_1020[9]))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_818, GET_OBJECT_FROM_GRINGO(bLocal_1020[9]), "UseCase1", true, 0, 0);
						}
						bLocal_772 = TASK_SEQUENCE_OPEN();
						if (IS_GRINGO_VALID(bLocal_1020[9]))
						{
							TASK_USE_GRINGO(false, bLocal_1020[9], "UseCase1", true, 1);
						}
						if (IS_GRINGO_VALID(bLocal_1020[10]))
						{
							TASK_USE_GRINGO(false, bLocal_1020[10], "UseCase1", true, 1);
						}
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1508)))
						{
							TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1508), "UseCase1", true, 1);
						}
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_818, bLocal_772, 4294967295);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_818, 2);
						if ((!IS_GRINGO_VALID(bLocal_1020[9]) && !IS_GRINGO_VALID(bLocal_1020[10])) && !IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1508)))
						{
						}
					}
					iLocal_787 = 2;
				}
				else if ((bLocal_539 != 8 || bLocal_539 != 9) || bLocal_539 != 10)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1540)))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_818, Local_4.f_1540, "UseCase1", true, 0, 0);
					}
					bLocal_772 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1540)))
					{
						TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1540), "UseCase1", true, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_818, bLocal_772, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_818, 2);
					iLocal_787 = 2;
				}
				else if (Function_271(&bLocal_545) <= 7.0f)
				{
					bLocal_772 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(bLocal_1020[9]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[9], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(bLocal_1020[10]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[10], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1508)))
					{
						TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1508), "UseCase1", true, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_818, bLocal_772, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_818, 2);
					if ((!IS_GRINGO_VALID(bLocal_1020[9]) && !IS_GRINGO_VALID(bLocal_1020[10])) && !IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1508)))
					{
						TASK_CLEAR(bLocal_818);
					}
					iLocal_787 = 2;
				}
				break;
			
			case 0x00000002:
				if (bLocal_539 == 10)
				{
					iLocal_787 = 3;
				}
				else
				{
					iLocal_787 = 8;
				}
				break;
			
			case 0x00000003:
				bLocal_772 = TASK_SEQUENCE_OPEN();
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1536)))
				{
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1536), "UseCase1", true, 1);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_818, bLocal_772);
				TASK_PRIORITY_SET(bLocal_818, 2);
				iLocal_787++;
				break;
			
			case 0x00000004:
				if (GET_CURRENT_GRINGO(bLocal_818) == GET_GRINGO_FROM_OBJECT(Local_4.f_1536))
				{
					AI_QUICK_EXIT_GRINGO(bLocal_818, 1);
					iLocal_787++;
				}
				break;
			
			case 0x00000005:
				GET_OBJECT_POSITION(bLocal_818, &uLocal_952);
				if (!WOULD_ACTOR_BE_VISIBLE(Function_434(bLocal_818), &uLocal_952, 3212836864))
				{
					iLocal_787++;
				}
				break;
			
			case 0x00000006:
				TASK_CLEAR(bLocal_818);
				Function_348(bLocal_818, (*&Local_4 + 1080)[4], 1, 1, 1);
				if (IS_DOOR_VALID(iLocal_805[0]) && IS_DOOR_VALID(iLocal_805[1]))
				{
					CLOSE_DOOR_FAST(iLocal_805[0]);
					CLOSE_DOOR_FAST(iLocal_805[1]);
				}
				iLocal_787++;
				break;
			
			case 0x00000007:
				bLocal_772 = TASK_SEQUENCE_OPEN();
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1540)))
				{
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1540), "UseCase1", true, 1);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_818, bLocal_772, 4294967295);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_818, 2);
				iLocal_787++;
				break;
			
			case 0x00000008:
				iLocal_787++;
				break;
			}
	}
	return;
}

var Function_434(bool bParam0) //Position: 0x1B8E2 / 112866
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

void Function_435() //Position: 0x1B8FD / 112893
{
	if (IS_ACTOR_VALID(bLocal_819))
	{
		switch (iLocal_786)
		{
			case 0x00000000:
				iLocal_786++;
				break;
			
			case 0x00000001:
				if (bLocal_972)
				{
					if (IS_GRINGO_VALID(bLocal_1020[4]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_819, GET_OBJECT_FROM_GRINGO(bLocal_1020[4]), "UseCase1", false, 0, 0);
					}
					bLocal_772 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(bLocal_1020[4]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[4], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(bLocal_1020[6]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[6], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(bLocal_1020[7]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[7], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(bLocal_1020[8]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[8], "UseCase1", true, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_819, bLocal_772, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_819, 2);
					if (((!IS_GRINGO_VALID(bLocal_1020[4]) && !IS_GRINGO_VALID(bLocal_1020[6])) && !IS_GRINGO_VALID(bLocal_1020[7])) && !IS_GRINGO_VALID(bLocal_1020[8]))
					{
					}
					iLocal_786++;
				}
				else if (Function_271(&bLocal_545) <= 7.0f)
				{
					bLocal_772 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(bLocal_1020[4]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[4], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(bLocal_1020[6]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[6], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(bLocal_1020[7]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[7], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(bLocal_1020[8]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[8], "UseCase1", true, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_819, bLocal_772, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_819, 2);
					if (((!IS_GRINGO_VALID(bLocal_1020[4]) && !IS_GRINGO_VALID(bLocal_1020[6])) && !IS_GRINGO_VALID(bLocal_1020[7])) && !IS_GRINGO_VALID(bLocal_1020[8]))
					{
						TASK_CLEAR(bLocal_819);
					}
					iLocal_786++;
				}
				break;
			
			case 0x00000002:
				iLocal_786++;
				break;
			}
	}
	return;
}

void Function_436() //Position: 0x1BB4F / 113487
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		switch (iLocal_776)
		{
			case 0x00000000:
				iLocal_776++;
				break;
			
			case 0x00000001:
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
				GET_OBJECT_POSITION((*&Local_4 + 1108)[4], &vLocal_922);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1604, 2, 0, 0, 1, false);
				TASK_GO_TO_COORD(false, &vLocal_922, 1);
				TASK_DISMOUNT(false, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				iLocal_776++;
				break;
			
			case 0x00000002:
				if (!IS_ACTOR_RIDING(bLocal_543))
				{
					MEMORY_PREFER_RIDING(bLocal_543, false);
					iLocal_776++;
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(Local_4.f_1188, &vLocal_922);
				if (IS_GRINGO_VALID(bLocal_1020[2]) && IS_GRINGO_VALID(bLocal_1020[3]))
				{
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &vLocal_922, 0,5f, true);
					TASK_FACE_COORD(false, &Local_4 + 1400, 0);
					TASK_STAND_STILL(false, 3.0f, 1, 0);
					TASK_USE_GRINGO(false, bLocal_1020[3], "UseCase1", true, 1);
					TASK_USE_GRINGO(false, bLocal_1020[2], "UseCase1", true, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_543, bLocal_772, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				else
				{
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &vLocal_922, 0,5f, true);
					TASK_FACE_COORD(false, &Local_4 + 1400, 0);
					TASK_STAND_STILL(false, -1.0f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_543, bLocal_772, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					if (IS_GRINGO_VALID(bLocal_1020[0]))
					{
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_FACE_COORD(false, &Local_4 + 1424, 0);
						TASK_STAND_STILL(false, -1.0f, 1, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_822[0], bLocal_772, 4294967295);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_822[0], true);
					}
				}
				iLocal_776++;
				break;
			
			case 0x00000005:
				iLocal_776++;
				break;
			}
	}
	return;
}

void Function_437() //Position: 0x1BD45 / 113989
{
	if (!iLocal_976)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_372(&iLocal_805);
			}
			else
			{
				iLocal_774 = 0;
				iLocal_976 = 0;
			}
		}
	}
	if (!iLocal_971)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_371();
			}
			else
			{
				iLocal_793 = 0;
				iLocal_971 = 0;
			}
		}
	}
	if (!iLocal_974)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_366();
			}
			else
			{
				iLocal_795 = 0;
				iLocal_974 = 0;
			}
		}
	}
	Function_365(bLocal_410);
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		Function_483(Local_1034.f_44, bLocal_1017, Local_4.f_628);
		Function_482(&Local_1034);
		Function_483(bLocal_1017, Local_1034.f_56, Local_4.f_636);
		if (iLocal_956)
		{
			Function_478(&Local_1034, 1);
			Function_477(&Local_1034, 1);
			Function_476(&Local_1034, 1, 0x41700000);
			if (Function_271(&bLocal_854) <= 0,2f)
			{
				Function_473(Local_1034.f_48, &bLocal_857, 3.0f, Local_4.f_1576, -20.0f);
				Function_472(&Local_1034);
				Function_219(&bLocal_854);
			}
			Function_471();
		}
		Function_435();
		Function_433();
		Function_470();
		Function_469(Global_34573);
		Function_458();
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (iLocal_554[8] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30717[1];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 1056)[0], 1, 1, 1);
				iLocal_793 = 0;
				iLocal_795 = 0;
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_974 = 0;
				iLocal_971 = 0;
				iLocal_957 = 0;
				iLocal_976 = 0;
				if (IS_ACTOR_VALID(bLocal_544))
				{
					TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_544, true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_3", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_786 = 0;
				iLocal_787 = 0;
				iLocal_779 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_976 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Global_34165.f_124;
				bLocal_778 = Global_34165.f_128;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_1034.f_76 = bLocal_777;
				Local_1034.f_80 = bLocal_778;
				Function_456();
				if (iLocal_554[8] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 1056)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
				}
				if (IS_VOLUME_VALID(Local_4.f_744))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_744);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_744);
					CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_744, 15);
				}
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					Function_415(Local_1034.f_56, Local_1034.f_44);
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_44);
					Function_414(Local_1034.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_668, -1.0f);
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), bLocal_819, "Wife", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), bLocal_818, "Uncle", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[317]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[517]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[617]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[717]), bLocal_1017, "Cow", 0, 0x5f5e100, 1);
				Function_454(&(Local_611[317]), 2);
				Function_454(&(Local_611[417]), 2);
				Function_454(&(Local_611[517]), 2);
				Function_454(&(Local_611[617]), 2);
				Function_454(&(Local_611[717]), 2);
				if (HUD_IS_FADED())
				{
					Function_219(&bLocal_545);
					iLocal_540 = 5;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 6;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30637[0], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (Function_398(bLocal_543, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_1034.f_44))
			{
				Function_453();
				Function_452();
				Function_414(Local_1034.f_44);
				Function_450(Local_1034.f_44, &Local_4 + 408);
				Function_449(Local_1034.f_44, 2, 1);
				Function_449(Local_1034.f_48, 2, 1);
				Function_449(Local_1034.f_56, 2, 1);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_1018))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_1018 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_410, "HOME01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_1018))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1018, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1232, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1232, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1232, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (iLocal_554[8] == 1)
				{
					if (SQUAD_IS_VALID(Local_1034.f_44))
					{
						Function_453();
						Function_452();
						Function_414(Local_1034.f_44);
						Function_450(Local_1034.f_44, &Local_4 + 408);
						Function_449(Local_1034.f_44, 2, 1);
						Function_449(Local_1034.f_48, 2, 1);
						Function_449(Local_1034.f_56, 2, 1);
					}
				}
				iLocal_955 = 0;
				if (SQUAD_IS_VALID(Local_1034.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_48);
					Function_448(Local_1034.f_48);
				}
				*(&Local_1034 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_1034.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_52);
					Function_448(Local_1034.f_52);
				}
				Local_1034.f_8 = Local_4.f_1232;
				GET_OBJECT_POSITION(Local_4.f_1232, &uLocal_928);
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_56);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_672, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				}
				if (SQUAD_IS_VALID(bLocal_1017))
				{
					SQUAD_GOALS_CLEAR(bLocal_1017);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_672, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1017, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				}
				Function_447();
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_393("home01_obj10", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				if (iLocal_955)
				{
					Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_441(StackVal, &bLocal_551, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1232, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1232, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1232, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
				if ((((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_56)) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52)) && SQUAD_IS_VALID(bLocal_1017))
				{
					if (((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_48) != 0) && SQUAD_GET_SIZE(Local_1034.f_52) != 0) && SQUAD_GET_SIZE(bLocal_1017) != 0)
					{
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							DESTROY_OBJECT(bLocal_882);
						}
						Function_442();
						Function_243();
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_545);
						iLocal_540 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_439();
				Function_219(&bLocal_545);
				iLocal_540 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				Function_243();
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					bLocal_788 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56);
					Function_378(Local_411, bLocal_788);
				}
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Local_1034.f_76;
				Global_34165.f_124 = bLocal_777;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_778 = Local_1034.f_80;
				Global_34165.f_128 = bLocal_778;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_438();
				iLocal_554[9] = 1;
				Function_219(&bLocal_545);
				bLocal_539 = 10;
				iLocal_540 = 0;
			}
			break;
	}
	return;
}

void Function_438() //Position: 0x1C966 / 117094
{
	return;
}

void Function_439() //Position: 0x1C96C / 117100
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_CowsInPen_v1_AA", "Home01_CowsInPen_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_CowsInPen_v1_AB", "Home01_CowsInPen_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_CowsInPen_v1_AC", "Home01_CowsInPen_v1_AC", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_440() //Position: 0x1CA38 / 117304
{
	iLocal_956 = 1;
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_1034.f_44, Local_1034.f_60, Global_34573, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_1034.f_44, Local_1034.f_60, Global_34573, 23.0f, 1.0f, 15.0f, 10.0f, 0);
	UI_SHOW("RacePosition");
	DECOR_SET_BOOL(Global_34573, "herding", true);
	return;
}

int Function_441(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1CA9E / 117406
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_382(Global_34573, bParam3, bParam2))
	{
		Function_232(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_382(Global_34573, bParam3, bParam1))
	{
		if (!Function_391(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_393(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_390(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_389(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_389(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_391(1))
	{
		Function_388(1);
		if (!Function_387())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_386();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_389(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_389(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_442() //Position: 0x1CC0C / 117772
{
	bool bVar0;
	bool bVar1;
	
	iLocal_956 = 0;
	_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_1034.f_44, Local_1034.f_60, Global_34573);
	if (IS_OBJECT_VALID(StackVal))
	{
		bVar0 = GET_BLIP_ON_OBJECT(StackVal);
		if (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
		}
	}
	if (IS_OBJECT_VALID(Local_1034))
	{
		bVar1 = GET_BLIP_ON_OBJECT(Local_1034);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
	}
	Function_443(Local_1034.f_44);
	Function_443(Local_1034.f_48);
	Function_443(Local_1034.f_52);
	Function_443(Local_1034.f_56);
	UI_HIDE("RacePosition");
	DECOR_REMOVE(Global_34573, "herding");
	return;
}

void Function_443(bool bParam0) //Position: 0x1CCA9 / 117929
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

bool Function_444(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x1CCF6 / 118006
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_ALIVE(bParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(Global_34573)))
		{
			if (!Function_391(16))
			{
				if (bParam7)
				{
					Function_243();
				}
				if (!Function_446())
				{
					Function_393(bParam4, 7,5f, 0, 2, 0, 0, 0);
					Function_390(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_232(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_391(8))
		{
			if (bParam7)
			{
				Function_243();
			}
			if (!Function_446())
			{
				Function_393(bParam3, 7,5f, 0, 2, 0, 0, 0);
				Function_390(8);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_389(bParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_389(bParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam2, bParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_391(8))
	{
		Function_388(8);
		if (!Function_387())
		{
			Function_445();
			Function_386();
		}
	}
	if (GET_MOUNT(Global_34573) == bParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam2));
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_389(bParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_389(bParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_445() //Position: 0x1CE4B / 118347
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_446() //Position: 0x1CE57 / 118359
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_447() //Position: 0x1CE64 / 118372
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_LeadIntoPen", "Home01_LeadIntoPen", 3, 3, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_448(bool bParam0) //Position: 0x1CEB2 / 118450
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

int Function_449(bool bParam0, bool bParam1, int iParam2) //Position: 0x1CEE4 / 118500
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
			SET_ACTOR_VOLUME_PARAMETERS(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return 1;
}

void Function_450(bool bParam0, int iParam1) //Position: 0x1CF26 / 118566
{
	int iVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < (*iParam1 - 1))
		{
			if (IS_VOLUME_VALID((*iParam1)[iVar0]))
			{
				Function_451(bParam0, (*iParam1)[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

int Function_451(bool bParam0, bool bParam1) //Position: 0x1CF68 / 118632
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

void Function_452() //Position: 0x1CFBD / 118717
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_453() //Position: 0x1CFE5 / 118757
{
	Function_448(Local_1034.f_44);
	SQUAD_GOALS_CLEAR(Local_1034.f_44);
	Local_1034.f_60 = UNK_0x48588CCB(Local_1034.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_1034.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_1034.f_44, Local_1034.f_60);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 1, 19, 45.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 0, 19, 40.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 0, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 0, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 0, 12, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 1, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 1, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 1, 12, 0,5f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_1034.f_44, Local_1034.f_60, Global_34573, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_1034.f_44, Local_1034.f_60, Global_34573, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_1034.f_44, Local_1034.f_60, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_1034.f_44, Local_1034.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_1034.f_44, Local_1034.f_60, 0, 1);
	if (IS_ACTOR_VALID(bLocal_543))
	{
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_1034.f_44, Local_1034.f_60, bLocal_543, 5.0f, 1.0f, 925353388, 925353388, 0);
		if (IS_VOLUME_VALID(Local_1034.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_543);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_1034.f_40);
			if (!bLocal_539 != 4)
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_543, Local_1034.f_40);
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_821))
	{
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_1034.f_44, Local_1034.f_60, bLocal_821, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(Global_34573, "herding", true);
	iLocal_956 = 1;
	return;
}

void Function_454(int iParam0, int iParam1) //Position: 0x1D1BD / 119229
{
	if (iParam1 != 100000000)
	{
		Function_455(iParam0, iParam1);
	}
	else
	{
		Function_409(iParam0, 1);
	}
	return;
}

void Function_455(int iParam0, bool bParam1) //Position: 0x1D1DD / 119261
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

void Function_456() //Position: 0x1D208 / 119304
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 1056)[3];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_1017))
	{
		bLocal_1017 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "ROBOTCOW_SQUAD"));
		if (SQUAD_IS_VALID(bLocal_1017))
		{
			SQUAD_GOALS_CLEAR(bLocal_1017);
		}
	}
	Function_457();
	return;
}

void Function_457() //Position: 0x1D2DD / 119517
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1576;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1228, &iLocal_980, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_668, -1.0f);
		}
	}
	return;
}

void Function_458() //Position: 0x1D3BA / 119738
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_468();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_792++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_459(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792 = 3;
					}
				}
				if (IS_VOLUME_VALID(Local_4.f_748))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_748) || IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_748))
						{
							iLocal_792 = 3;
						}
					}
				}
				break;
			
			case 0x00000003:
				Function_459(1, 1, 1, 0x42340000, 0x41f00000);
				if (iLocal_540 > 9)
				{
					iLocal_792 = 5;
				}
				if (IS_VOLUME_VALID(Local_4.f_748))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_748) || IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_748))
						{
							iLocal_792 = 4;
						}
					}
				}
				break;
			
			case 0x00000004:
				Function_427(1);
				if (iLocal_540 > 9)
				{
					iLocal_792 = 5;
				}
				break;
			
			case 0x00000005:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_459(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1D502 / 120066
{
	if (Function_271(&bLocal_869) <= 6.0f)
	{
		Function_463();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_968)
				{
					iLocal_968 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonGetsOfHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
				else if (Function_271(&bLocal_548) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonNoGetOnHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_968)
				{
					iLocal_968 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_544, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam0)
			{
				if (!iLocal_966)
				{
					if (!bLocal_967)
					{
						if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_931))
						{
							if (VMAG(vLocal_931) >= 0.0f)
							{
								bLocal_967 = true;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonStopsHorse", "Home01_JonStopsHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_219(&bLocal_869);
							}
						}
					}
				}
			}
			if (bParam0)
			{
				if (bLocal_967)
				{
					if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_931))
					{
						if (VMAG(vLocal_931) <= (0.0f + 2.0f))
						{
							bLocal_967 = false;
						}
					}
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_543))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 1,35f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam2)
			{
				Function_239(Local_1034.f_44);
				if (!Function_462(StackVal, StackVal, StackVal, Function_239(Local_1034.f_44), 135.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_MovesHerdWronDir", "Home01_MovesHerdWronDir", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
				if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if (SQUAD_GET_SIZE(Local_1034.f_52) <= 3 || SQUAD_GET_SIZE(Local_1034.f_48) <= 3)
					{
						if (IS_ACTOR_VALID(bLocal_543))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonBadHerd", "Home01_JonBadHerd", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_219(&bLocal_869);
							}
						}
					}
				}
			}
			if (bParam1)
			{
				if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if (SQUAD_GET_SIZE(Local_1034.f_48) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
					{
						if (!Function_382(StackVal, Global_34573, bParam3) && !Function_379(Global_34573, bLocal_543, bParam3))
						{
							if (!bLocal_967)
							{
								if (!iLocal_966)
								{
									iLocal_966 = 1;
									ABORT_SCRIPTED_CONVERSATION(1);
									Function_461();
									Function_219(&bLocal_869);
								}
							}
						}
					}
				}
			}
			if (StackVal && Function_382(ACTORS_IN_RANGE(Global_34573, bLocal_543, bParam4), Global_34573, bParam4))
			{
				if (bParam1)
				{
					if (iLocal_966)
					{
						iLocal_966 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_460();
						Function_219(&bLocal_869);
					}
				}
			}
		}
	}
}

void Function_460() //Position: 0x1D92B / 121131
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ComesBakToHerd", "Home01_ComesBakToHerd", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_461() //Position: 0x1D97F / 121215
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_RidesAwayFromHerd", "Home01_RidesAwayFromHerd", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_462(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1D9D9 / 121305
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	vector3 vVar8;
	float fVar11;
	float fVar12;
	float fVar13;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				GET_POSITION(bVar1, &vVar2);
				vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vParam1, StackVal) };
				UNK_0x44986367(&uVar5, GET_HEADING(bVar1));
				fVar11 = GET_ANGLE_BETWEEN_VECTORS_DEGS(&uVar5, &vVar8);
				fVar12 = (fVar12 + fVar11);
			}
			bVar0++;
		}
		fVar13 = (fVar12 / IntToFloat(SQUAD_GET_SIZE(bParam0)));
		if (fVar13 >= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_463() //Position: 0x1DA5E / 121438
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_543)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (bVar0 == bLocal_822[0])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if ((Function_467(bVar0, Local_1034.f_44, 0) || Function_467(bVar0, Local_1034.f_52, 0)) || Function_467(bVar0, Local_1034.f_48, 0))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_466();
						Function_219(&bLocal_869);
					}
					else if (GET_WEAPON_IN_HAND(Global_34573) != 21 || GET_WEAPON_IN_HAND(Global_34573) != 45)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_465();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_464();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_464();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (IS_ACTOR_HUMAN(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_429();
					Function_219(&bLocal_869);
				}
			}
			else if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnChar", "Home01_GunOnChar", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
			}
		}
	}
	return;
}

void Function_464() //Position: 0x1DDC3 / 122307
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465() //Position: 0x1DE15 / 122389
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_JonLassosCow", "Home01_JonLassosCow", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x1DE65 / 122469
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ShootsACow", "Home01_ShootsACow", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_467(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1DEB1 / 122545
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

void Function_468() //Position: 0x1DEF1 / 122609
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_ArriveBH_v1_AA", "Home01_ArriveBH_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_ArriveBH_v1_AB", "Home01_ArriveBH_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_ArriveBH_v1_AC", "Home01_ArriveBH_v1_AC", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_ArriveBH_v1_AD", "Home01_ArriveBH_v1_AD", false, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_469(bool bParam0) //Position: 0x1DFF0 / 122864
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_LASSO_TARGET(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (GET_TASK_STATUS(bVar0, 4294967295) == 1)
			{
				TASK_CLEAR(bVar0);
			}
		}
	}
	return;
}

void Function_470() //Position: 0x1E01F / 122911
{
	if (SQUAD_IS_VALID(Local_1034.f_44))
	{
		switch (iLocal_779)
		{
			case 0x00000000:
				iLocal_779++;
				break;
			
			case 0x00000001:
				if (IS_VOLUME_VALID(Local_4.f_748))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_748) || IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_748))
						{
							iLocal_779++;
						}
					}
				}
				break;
			
			case 0x00000002:
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12);
				SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12, 30.0f, 0,85f, 2.0f, 2.0f);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_1034.f_44, Local_1034.f_60, 1, 0,25f, 0,25f);
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 0, 16, (4,5f - 0,5f));
				iLocal_779++;
				break;
			
			case 0x00000003:
				iLocal_779++;
				break;
			}
	}
	return;
}

void Function_471() //Position: 0x1E111 / 123153
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_539 != 9)
	{
		iVar0 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_52));
	}
	else
	{
		iVar0 = ((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_52)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1017));
	}
	iVar1 = (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_48) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_52));
	UI_SET_STRING("Race_Pos", INT_TO_STRING((iVar0 - iVar1)));
	UI_SET_STRING("Race_Total_Racers", INT_TO_STRING(15));
	UI_LABEL_SET_TEXT("RacePosition", "Race_Position_Format");
	UI_REFRESH("RacePosition");
	return;
}

void Function_472(int iParam0) //Position: 0x1E1F5 / 123381
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	float fVar6;
	bool bVar7;
	
	if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
	{
		fVar6 = 80.0f;
		bVar7 = 100.0f;
	}
	else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
	{
		fVar6 = 80.0f;
		bVar7 = 100.0f;
	}
	else
	{
		fVar6 = 80.0f;
		bVar7 = 100.0f;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						GET_OBJECT_POSITION(bVar1, &uVar3);
						if ((StackVal && !Function_382(!Function_392(bVar1, Global_34573, bVar7), bVar1, fVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_434(bVar1), &uVar3, 3212836864))
						{
							bVar2 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar2))
							{
								REMOVE_BLIP(bVar2);
							}
							SQUAD_LEAVE(bVar1);
							DESTROY_ACTOR(bVar1);
						}
					}
					bVar0++;
				}
			}
		}
		if (SQUAD_IS_VALID(iParam0->f_52))
		{
			if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						GET_OBJECT_POSITION(bVar1, &uVar3);
						if ((StackVal && !Function_382(!Function_392(bVar1, Global_34573, bVar7), bVar1, fVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_434(bVar1), &uVar3, 3212836864))
						{
							bVar2 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar2))
							{
								REMOVE_BLIP(bVar2);
							}
							SQUAD_LEAVE(bVar1);
							DESTROY_ACTOR(bVar1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_473(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1E389 / 123785
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		switch (iLocal_776)
		{
			case 0x00000000:
				iLocal_776++;
				break;
			
			case 0x00000001:
				Function_226(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(bLocal_543);
				CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
				SET_ACTOR_MAX_SPEED(bLocal_543, 4);
				MEMORY_PREFER_RIDING(bLocal_543, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1576, -20.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				Function_219(&bLocal_875);
				iLocal_776++;
				break;
			
			case 0x00000002:
				if (Function_271(bParam1) <= fParam2)
				{
					if (SQUAD_IS_VALID(bParam0))
					{
						if (SQUAD_GET_SIZE(bParam0) > 2)
						{
							if (!iLocal_955)
							{
								bLocal_837 = Function_474(StackVal, bParam0);
								if (IS_ACTOR_VALID(bLocal_837))
								{
									vLocal_922 = { 0.0f, 0.0f, 0.0f };
									SET_ACTOR_MAX_SPEED(bLocal_543, 4);
									bLocal_772 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, bLocal_837, &vLocal_922, 0, 0, 0, 0, 0, 0, 1);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
									TASK_SEQUENCE_RELEASE(bLocal_772, 1);
									TASK_PRIORITY_SET(bLocal_543, true);
									iLocal_955 = 1;
								}
							}
							else if (!Function_467(bLocal_837, bParam0, 0))
							{
								iLocal_955 = 0;
							}
						}
						else if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
						{
							SET_ACTOR_MAX_SPEED(bLocal_543, 4);
							bLocal_772 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
							TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
							TASK_SEQUENCE_RELEASE(bLocal_772, 1);
							TASK_PRIORITY_SET(bLocal_543, true);
							iLocal_955 = 0;
						}
					}
					Function_219(bParam1);
				}
				if (IS_VOLUME_VALID(Local_4.f_708))
				{
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_708))
						{
							iLocal_776++;
						}
					}
				}
				if (Function_271(&bLocal_875) <= 20.0f)
				{
					AI_GOAL_LOOK_AT_COORD_NEW(bLocal_543, &Local_1034 + 16, 4.0f);
					SET_ANIM_SET_FOR_ACTOR(bLocal_543, "home01_look_back", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_543, "home01_look_back");
					Function_219(&bLocal_875);
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION((*&Local_4 + 1080)[3], &vLocal_922);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vLocal_922, 2.0f, 2);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				iLocal_776++;
				break;
			
			case 0x00000004:
				iLocal_776++;
				break;
			}
	}
}

bool Function_474(bool bParam0, bool bParam1) //Position: 0x1E619 / 124441
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			bVar1 = 4294967295;
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				if (bVar0 >= 4294967295)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					fVar3 = Function_475(bParam1, bVar2);
					if (bVar1 > 0 || fVar3 < fVar4)
					{
						fVar4 = fVar3;
						bVar1 = bVar0;
					}
				}
				bVar0++;
			}
			if (bVar1 > 0)
			{
				return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			}
		}
	}
	return "";
}

var Function_475(bool bParam0, bool bParam1) //Position: 0x1E695 / 124565
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_383(bParam0);
			vVar0 = { StackVal, StackVal, Function_383(bParam0) };
			Function_383(bParam1);
			vVar3 = { StackVal, StackVal, Function_383(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_476(int iParam0, bool bParam1, float fParam2) //Position: 0x1E730 / 124720
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	if (SQUAD_IS_VALID(iParam0->f_52))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_44))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						fVar3 = 6.0f;
						fVar4 = 12.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						fVar3 = 9.0f;
						fVar4 = 20.0f;
					}
					else
					{
						fVar3 = 10.0f;
						fVar4 = 23.0f;
					}
					if (!iParam0->f_100)
					{
						if (SQUAD_GET_SIZE(iParam0->f_44) != 0 && SQUAD_GET_SIZE(iParam0->f_48) != 0)
						{
							if (SQUAD_GET_SIZE(iParam0->f_52) == 1)
							{
								bVar0 = false;
								while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
								{
									bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
									if (IS_ACTOR_VALID(bVar1))
									{
										if (!Function_382(StackVal, bVar1, fVar4))
										{
											CLEAR_ACTOR_MAX_SPEED(bVar1);
											TASK_CLEAR(bVar1);
											SQUAD_LEAVE(bVar1);
											SQUAD_JOIN(bVar1, iParam0->f_44);
											if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(bVar1, "bRejoinInProgress");
											}
											if (bParam1)
											{
												bVar2 = GET_BLIP_ON_ACTOR(bVar1);
												if (IS_BLIP_VALID(bVar2))
												{
													REMOVE_BLIP(bVar2);
												}
											}
											if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
											{
												iParam0->f_80++;
												DECOR_REMOVE(bVar1, "bIsStraggler");
											}
										}
									}
									bVar0++;
								}
							}
						}
					}
					bVar0 = false;
					while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
						if (IS_ACTOR_VALID(bVar1))
						{
							if (bParam1)
							{
								bVar2 = GET_BLIP_ON_ACTOR(bVar1);
								if (!IS_BLIP_VALID(bVar2))
								{
									bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 425, 0, 2, 0);
									SET_BLIP_FLAG(bVar2, 4096, 0);
								}
								else if (!GET_BLIP_ICON(bVar2) != 425)
								{
									CHANGE_BLIP_ICON(bVar2, 425);
									SET_BLIP_FLAG(bVar2, 4096, 0);
								}
							}
							if (!GET_TASK_STATUS(bVar1, 26) != 1)
							{
								if (!GET_LASSO_TARGET(Global_34573) != bVar1)
								{
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar1, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar1, true);
								}
							}
							if (Function_382(StackVal, bVar1, fVar3))
							{
								if (StackVal && Function_382(iParam0->f_100, bVar1, fVar4))
								{
								}
								else
								{
									CLEAR_ACTOR_MAX_SPEED(bVar1);
									TASK_CLEAR(bVar1);
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_44);
									if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(bVar1, "bRejoinInProgress");
									}
									if (bParam1)
									{
										bVar2 = GET_BLIP_ON_ACTOR(bVar1);
										if (IS_BLIP_VALID(bVar2))
										{
											REMOVE_BLIP(bVar2);
										}
									}
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							if (Function_271(iParam0 + 88) <= fParam2)
							{
								Function_219(iParam0 + 88);
							}
						}
						bVar0++;
					}
				}
			}
		}
	}
	return;
}

void Function_477(int iParam0, bool bParam1) //Position: 0x1EA57 / 125527
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	if (SQUAD_IS_VALID(iParam0->f_44))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_52))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						iVar4 = 1;
						fVar7 = 7.0f;
						fVar5 = 12.0f;
						fVar6 = 14.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						iVar4 = 3;
						fVar7 = 12.0f;
						fVar5 = 20.0f;
						fVar6 = 22.0f;
					}
					else
					{
						iVar4 = 3;
						fVar7 = 15.0f;
						fVar5 = 23.0f;
						fVar6 = 25.0f;
					}
					if (SQUAD_GET_SIZE(iParam0->f_44) < iVar4)
					{
						if (!iParam0->f_100)
						{
							bVar2 = false;
							while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
							{
								bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
								if (IS_ACTOR_VALID(bVar0))
								{
									if (!Function_382(StackVal, bVar0, fVar7))
									{
										SET_ACTOR_MAX_SPEED(bVar0, 4);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_52);
										iParam0->f_84 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
										TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
										TASK_PRIORITY_SET(bVar0, true);
										if (bParam1)
										{
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (!IS_BLIP_VALID(bVar1))
											{
												bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar1, 425);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
										}
									}
									else
									{
										CLEAR_ACTOR_MAX_SPEED(bVar0);
										TASK_CLEAR(bVar0);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_56);
										if (DECOR_GET_BOOL(bVar0, "bRejoinInProgress"))
										{
											DECOR_SET_BOOL(bVar0, "bRejoinInProgress", false);
										}
										if (bParam1)
										{
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (IS_BLIP_VALID(bVar1))
											{
												REMOVE_BLIP(bVar1);
											}
										}
									}
								}
								if (SQUAD_GET_SIZE(iParam0->f_44) == 0)
								{
									iParam0->f_100 = 1;
									Function_219(iParam0 + 88);
								}
								bVar2++;
							}
						}
					}
					else
					{
						bVar2 = false;
						while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
						{
							bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
							if (IS_ACTOR_VALID(bVar0))
							{
								if (!Function_382(StackVal, bVar0, fVar6))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, true);
									if (bParam1)
									{
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(bVar1, 425);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
									}
									if (!DECOR_GET_BOOL(bVar0, "bIsStraggler"))
									{
										iParam0->f_76++;
										DECOR_SET_BOOL(bVar0, "bIsStraggler", true);
									}
								}
							}
							bVar2++;
						}
					}
					bVar2 = false;
					while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
					{
						bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar2);
						if (IS_ACTOR_VALID(bVar0))
						{
							if (bParam1)
							{
								bVar1 = GET_BLIP_ON_ACTOR(bVar0);
								if (!IS_BLIP_VALID(bVar1))
								{
									bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
									SET_BLIP_FLAG(bVar1, 4096, 0);
								}
								else if (!GET_BLIP_ICON(bVar1) != 425)
								{
									CHANGE_BLIP_ICON(bVar1, 425);
									SET_BLIP_FLAG(bVar1, 4096, 0);
								}
							}
							if (!GET_TASK_STATUS(bVar0, 26) != 1)
							{
								if (!GET_LASSO_TARGET(Global_34573) != bVar0)
								{
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, true);
								}
							}
							if (StackVal && IS_OBJECT_VALID(IS_OBJECT_VALID(StackVal)))
							{
								if (StackVal || Function_382(Function_382(StackVal, bVar0, fVar5), bVar0, fVar5))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									if (Function_382(StackVal, bVar0, fVar5))
									{
									}
									else if (Function_382(StackVal, bVar0, fVar5))
									{
									}
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, true);
									if (bParam1)
									{
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(bVar1, 425);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
									}
								}
								else
								{
									bVar3 = false;
									while (bVar3 < (iParam0->f_104 - 1))
									{
										if (IS_ACTOR_VALID((*iParam0 + 104)[bVar3]))
										{
											if (IS_ACTOR_PLAYER((*iParam0 + 104)[bVar3]))
											{
												if (Function_382(bVar0, (*iParam0 + 104)[bVar3], 7.0f))
												{
													PRINTINT(bVar3);
													PRINTNL();
													SET_ACTOR_MAX_SPEED(bVar0, 4);
													SQUAD_LEAVE(bVar0);
													SQUAD_JOIN(bVar0, iParam0->f_52);
													iParam0->f_84 = TASK_SEQUENCE_OPEN();
													TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
													TASK_SEQUENCE_CLOSE();
													TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
													TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
													TASK_PRIORITY_SET(bVar0, true);
													if (bParam1)
													{
														bVar1 = GET_BLIP_ON_ACTOR(bVar0);
														if (!IS_BLIP_VALID(bVar1))
														{
															bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
															SET_BLIP_FLAG(bVar1, 4096, 0);
														}
														else
														{
															CHANGE_BLIP_ICON(bVar1, 425);
															SET_BLIP_FLAG(bVar1, 4096, 0);
														}
													}
												}
											}
											else if (Function_382(bVar0, (*iParam0 + 104)[bVar3], 15.0f))
											{
												PRINTINT(bVar3);
												PRINTNL();
												SET_ACTOR_MAX_SPEED(bVar0, 4);
												SQUAD_LEAVE(bVar0);
												SQUAD_JOIN(bVar0, iParam0->f_52);
												iParam0->f_84 = TASK_SEQUENCE_OPEN();
												TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
												TASK_SEQUENCE_CLOSE();
												TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
												TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
												TASK_PRIORITY_SET(bVar0, true);
												if (bParam1)
												{
													bVar1 = GET_BLIP_ON_ACTOR(bVar0);
													if (!IS_BLIP_VALID(bVar1))
													{
														bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
													else
													{
														CHANGE_BLIP_ICON(bVar1, 425);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
												}
												if (DECOR_GET_BOOL(bVar0, "bIsStraggler"))
												{
													DECOR_REMOVE(bVar0, "bIsStraggler");
												}
											}
										}
										bVar3++;
									}
								}
							}
						}
						bVar2++;
					}
				}
			}
		}
	}
	return;
}

void Function_478(int iParam0, bool bParam1) //Position: 0x1F097 / 127127
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_44))
		{
			if (SQUAD_IS_VALID(iParam0->f_48))
			{
				if (SQUAD_IS_VALID(iParam0->f_56))
				{
					if (SQUAD_IS_VALID(iParam0->f_52))
					{
						if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
						{
							iVar8 = 1;
						}
						else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
						{
							iVar8 = 3;
						}
						else
						{
							iVar8 = 3;
						}
						if (SQUAD_GET_SIZE(iParam0->f_44) < iVar8)
						{
							if (SQUAD_GET_SIZE(iParam0->f_56) > 1)
							{
								if (bParam1)
								{
									bVar6 = GET_BLIP_ON_OBJECT(StackVal);
									if (IS_BLIP_VALID(bVar6))
									{
										REMOVE_BLIP(bVar6);
									}
									bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
									if (IS_BLIP_VALID(bVar7))
									{
										REMOVE_BLIP(bVar7);
									}
								}
								if (IS_OBJECT_VALID(StackVal))
								{
									GET_OBJECT_POSITION(StackVal, &vVar0);
									GET_OBJECT_ORIENTATION(StackVal, &vVar3);
								}
							}
							else if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
							{
								if (bParam1)
								{
									bVar6 = GET_BLIP_ON_OBJECT(StackVal);
									if (IS_BLIP_VALID(bVar6))
									{
										REMOVE_BLIP(bVar6);
									}
									bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
									if (IS_BLIP_VALID(bVar7))
									{
										REMOVE_BLIP(bVar7);
									}
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_52, &vVar0);
								Function_481(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_481(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_479(iParam0->f_44);
								vVar3 = { StackVal, StackVal, Function_479(iParam0->f_44) };
							}
							else if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
							{
								if (bParam1)
								{
									bVar6 = GET_BLIP_ON_OBJECT(StackVal);
									if (IS_BLIP_VALID(bVar6))
									{
										REMOVE_BLIP(bVar6);
									}
									bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
									if (IS_BLIP_VALID(bVar7))
									{
										REMOVE_BLIP(bVar7);
									}
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_48, &vVar0);
								Function_481(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_481(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_479(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_479(iParam0->f_48) };
							}
							else
							{
								if (bParam1)
								{
									bVar6 = GET_BLIP_ON_OBJECT(StackVal);
									if (IS_BLIP_VALID(bVar6))
									{
										REMOVE_BLIP(bVar6);
									}
									bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
									if (IS_BLIP_VALID(bVar7))
									{
										REMOVE_BLIP(bVar7);
									}
								}
								if (IS_OBJECT_VALID(StackVal))
								{
									GET_OBJECT_POSITION(StackVal, &vVar0);
									GET_OBJECT_ORIENTATION(StackVal, &vVar3);
								}
							}
						}
						else
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
							{
								Function_239(*iParam0);
								if (!Function_73(StackVal, StackVal, Function_239(*iParam0)))
								{
									bVar7 = ADD_BLIP_FOR_OBJECT(*iParam0, 425, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar7))
									{
										SET_BLIP_SCALE(bVar7, 2,5f);
										SET_BLIP_NAME(bVar7, "nBLIP_HERD");
										SET_BLIP_FLAG(bVar7, 4096, 0);
										SET_BLIP_PRIORITY(bVar7, true);
									}
								}
							}
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
							{
								Function_239(StackVal);
								if (!Function_73(StackVal, StackVal, Function_239(StackVal)))
								{
									bVar6 = ADD_BLIP_FOR_OBJECT(StackVal, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar6))
									{
										SET_BLIP_SCALE(bVar6, 1.0f);
										SET_BLIP_PRIORITY(bVar6, 2);
									}
								}
							}
							SQUAD_COMPUTE_CENTROID(iParam0->f_44, &vVar0);
							Function_479(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_479(iParam0->f_44) };
						}
						SET_OBJECT_POSITION(StackVal, vVar0);
						SET_OBJECT_POSITION(*iParam0, vVar0);
						SET_OBJECT_ORIENTATION(*iParam0, vVar3);
						GET_OBJECT_POSITION(StackVal, iParam0 + 16);
					}
				}
			}
		}
	}
	return;
}

vector3 Function_479(bool bParam0) //Position: 0x1F375 / 127861
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<9> Var8;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		UNK_0x44986367(&vVar5, Function_480(bVar1));
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar5, vVar8, StackVal) };
		bVar0++;
	}
	vVar8 = (vVar8.x / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar8.f_4 = 0.0f;
	vVar8.f_8 = (vVar8.z / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar2.f_4 = UNK_0x9C40E671(&vVar8);
	return StackVal, StackVal, vVar2;
}

var Function_480(bool bParam0) //Position: 0x1F3E2 / 127970
{
	return GET_HEADING(bParam0);
}

vector3 Function_481(vector3 vParam0, bool bParam3) //Position: 0x1F3ED / 127981
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar1 = 4294967295;
	if (!Function_73(StackVal, StackVal, vParam0))
	{
		if (IS_OBJECT_VALID(bParam3))
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_PATH_POINTS(bParam3) - 1))
			{
				GET_PATH_POINT(bParam3, bVar0, &vVar8);
				vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vParam0, StackVal) };
				if (bVar1 > 0 || VMAG(vVar2) > VMAG(vVar5))
				{
					vVar5 = { StackVal, StackVal, vVar2 };
					bVar1 = bVar0;
				}
				bVar0++;
			}
		}
	}
	if (bVar1 > 0)
	{
		GET_PATH_POINT(bParam3, bVar1, &vVar8);
		return StackVal, StackVal, vVar8;
	}
	GET_PATH_POINT(bParam3, (GET_NUM_PATH_POINTS(bParam3) - 1), &vVar8);
	return StackVal, StackVal, vVar8;
}

void Function_482(int iParam0) //Position: 0x1F48D / 128141
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	
	if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
	{
		fVar2 = 7.0f;
	}
	else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
	{
		fVar2 = 12.0f;
	}
	else
	{
		fVar2 = 15.0f;
	}
	if (SQUAD_IS_VALID(iParam0->f_44))
	{
		if (SQUAD_IS_VALID(iParam0->f_56))
		{
			if (SQUAD_IS_VALID(iParam0->f_48))
			{
				if (SQUAD_IS_VALID(iParam0->f_52))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
						{
							bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar0);
							if (IS_ACTOR_VALID(bVar1))
							{
								if (Function_382(StackVal, bVar1, fVar2))
								{
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_56);
								}
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
						{
							bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar0);
							if (IS_ACTOR_VALID(bVar1))
							{
								if (Function_382(StackVal, bVar1, fVar2))
								{
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_56);
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
						{
							bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
							if (IS_ACTOR_VALID(bVar1))
							{
								if (Function_382(StackVal, bVar1, fVar2))
								{
									CLEAR_ACTOR_MAX_SPEED(bVar1);
									TASK_CLEAR(bVar1);
									if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(bVar1, "bRejoinInProgress");
									}
									bVar3 = GET_BLIP_ON_ACTOR(bVar1);
									if (IS_BLIP_VALID(bVar3))
									{
										REMOVE_BLIP(bVar3);
									}
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_56);
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							bVar0++;
						}
					}
				}
			}
		}
	}
	return;
}

void Function_483(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1F6A9 / 128681
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_IS_VALID(bParam1))
		{
			if (IS_VOLUME_VALID(bParam2))
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (IS_ACTOR_IN_VOLUME(bVar1, bParam2))
						{
							SQUAD_LEAVE(bVar1);
							SQUAD_JOIN(bVar1, bParam1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_484() //Position: 0x1F70F / 128783
{
	if (!iLocal_976)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_372(&iLocal_805);
			}
			else
			{
				iLocal_774 = 0;
				iLocal_976 = 0;
			}
		}
	}
	if (!iLocal_971)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_371();
			}
			else
			{
				iLocal_793 = 0;
				iLocal_971 = 0;
			}
		}
	}
	if (!iLocal_974)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_366();
			}
			else
			{
				iLocal_795 = 0;
				iLocal_974 = 0;
			}
		}
	}
	Function_365(bLocal_410);
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		Function_483(Local_1034.f_44, Local_1034.f_56, Local_4.f_612);
		Function_482(&Local_1034);
		if (iLocal_956)
		{
			if (iLocal_965)
			{
				Function_478(&Local_1034, 1);
				Function_477(&Local_1034, 1);
				Function_476(&Local_1034, 1, 0x41700000);
			}
			else
			{
				Function_496(&Local_1034);
				Function_495(&Local_1034);
				Function_494(&Local_1034, 0x41700000);
			}
			if (Function_271(&bLocal_854) <= 0,2f)
			{
				Function_493(Local_1034.f_48, &bLocal_857, 3.0f, Local_4.f_1572, -20.0f);
				Function_472(&Local_1034);
				Function_219(&bLocal_854);
			}
			Function_471();
		}
		Function_435();
		Function_433();
		Function_469(Global_34573);
		Function_492();
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (iLocal_554[7] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30637[0];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 1032)[0], 1, 1, 1);
				iLocal_793 = 0;
				iLocal_795 = 0;
				iLocal_774 = 0;
				iLocal_974 = 0;
				iLocal_971 = 0;
				iLocal_957 = 0;
				iLocal_976 = 0;
				if (IS_ACTOR_VALID(bLocal_544))
				{
					TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_544, true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_3", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_786 = 0;
				iLocal_787 = 0;
				iLocal_793 = 0;
				iLocal_795 = 0;
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_974 = 0;
				iLocal_971 = 0;
				iLocal_957 = 0;
				iLocal_976 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_965 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Global_34165.f_124;
				bLocal_778 = Global_34165.f_128;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_1034.f_76 = bLocal_777;
				Local_1034.f_80 = bLocal_778;
				Function_490();
				if (iLocal_554[7] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 1032)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_819))
					{
						SET_ACTOR_HEALTH(bLocal_819, 50.0f);
						Function_348(bLocal_819, (*&Local_4 + 1108)[6], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(bLocal_818))
					{
						SET_ACTOR_HEALTH(bLocal_818, 50.0f);
						Function_348(bLocal_818, (*&Local_4 + 1108)[5], 1, 1, 1);
					}
				}
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					Function_415(Local_1034.f_56, Local_1034.f_44);
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_44);
					Function_414(Local_1034.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_664, -1.0f);
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), bLocal_819, "Wife", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), bLocal_818, "Uncle", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[317]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[517]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[617]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_406(&(Local_611[717]));
				Function_406(&(Local_611[817]));
				Function_454(&(Local_611[317]), 2);
				Function_454(&(Local_611[417]), 2);
				Function_454(&(Local_611[517]), 2);
				Function_454(&(Local_611[617]), 2);
				if (HUD_IS_FADED())
				{
					Function_219(&bLocal_545);
					iLocal_540 = 5;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 6;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30637[0], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (Function_398(bLocal_543, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_1034.f_44))
			{
				Function_453();
				Function_489();
				Function_414(Local_1034.f_44);
				Function_450(Local_1034.f_44, &Local_4 + 352);
				Function_449(Local_1034.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_1018))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_1018 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_410, "HOME01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_1018))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1018, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1228, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1228, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1228, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (iLocal_554[7] == 1)
				{
					if (SQUAD_IS_VALID(Local_1034.f_44))
					{
						Function_453();
						Function_489();
						Function_414(Local_1034.f_44);
						Function_450(Local_1034.f_44, &Local_4 + 352);
						Function_449(Local_1034.f_44, 2, 1);
					}
				}
				iLocal_955 = 0;
				if (SQUAD_IS_VALID(Local_1034.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_48);
					Function_448(Local_1034.f_48);
				}
				*(&Local_1034 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_1034.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_52);
					Function_448(Local_1034.f_52);
				}
				Local_1034.f_8 = Local_4.f_1228;
				GET_OBJECT_POSITION(Local_4.f_1228, &uLocal_928);
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_56);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_668, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				}
				Function_488();
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_157(Global_30717[1]);
				Function_393("home01_obj09", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				if (iLocal_955)
				{
					Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_441(StackVal, &bLocal_551, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1228, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1228, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1228, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
				if (((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_56)) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_48) != 0) && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							DESTROY_OBJECT(bLocal_882);
						}
						Function_443(Local_1034.f_44);
						Function_443(Local_1034.f_48);
						Function_443(Local_1034.f_52);
						Function_443(Local_1034.f_56);
						UI_HIDE("RacePosition");
						Function_243();
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_545);
						iLocal_540 = 106;
					}
				}
			}
			if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
			{
				if (SQUAD_GET_SIZE(Local_1034.f_48) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
					{
						if (Function_271(&bLocal_548) <= 15.0f)
						{
							Function_487();
							Function_219(&bLocal_548);
						}
					}
				}
				else if (iLocal_955)
				{
					if (SQUAD_GET_SIZE(Local_1034.f_48) > 2)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
						{
							if (Function_271(&bLocal_548) <= 15.0f)
							{
								Function_486();
								Function_219(&bLocal_548);
							}
						}
					}
				}
			}
			if (!iLocal_965)
			{
				if (IS_VOLUME_VALID(Local_4.f_576))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_576))
						{
							iLocal_965 = 1;
							SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_1034.f_44, Local_1034.f_60, 1, 0,25f, 0,25f);
							_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 0, 16, (4,5f - 0,5f));
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_1034.f_56))
			{
				bLocal_788 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56);
				Function_378(Local_411, bLocal_788);
			}
			PRINTINT(bLocal_788);
			PRINTNL();
			bLocal_789 = (15 - bLocal_788);
			PRINTINT(bLocal_789);
			PRINTNL();
			bLocal_777 = Local_1034.f_76;
			Global_34165.f_124 = bLocal_777;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_778 = Local_1034.f_80;
			Global_34165.f_128 = bLocal_778;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_485();
			iLocal_554[8] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = 9;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_485() //Position: 0x203CA / 132042
{
	return;
}

void Function_486() //Position: 0x203D0 / 132048
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_GetLastStraggler3", "Home01_GetLastStraggler3", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487() //Position: 0x2042A / 132138
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_jackYellsAtHerd", "Home01_jackYellsAtHerd", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488() //Position: 0x20480 / 132224
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_TakeLeftUpRoad_v1_AA", "Home01_TakeLeftUpRoad_v1_AA", 3, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_TakeLeftUpRoad_v1_AB", "Home01_TakeLeftUpRoad_v1_AB", false, 3, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_489() //Position: 0x20525 / 132389
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_490() //Position: 0x2054D / 132429
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 1032)[3];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_491();
	return;
}

void Function_491() //Position: 0x205E6 / 132582
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1572;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1224, &iLocal_980, 5, 3.0f, 4,5f, 2.0f, 0);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_664, -1.0f);
		}
	}
	return;
}

void Function_492() //Position: 0x206BF / 132799
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000002:
				Function_459(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000009:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_493(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x20742 / 132930
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		switch (iLocal_776)
		{
			case 0x00000000:
				iLocal_776++;
				break;
			
			case 0x00000001:
				Function_226(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(bLocal_543);
				CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
				MEMORY_PREFER_RIDING(bLocal_543, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1572, -20.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				Function_219(&bLocal_875);
				iLocal_776++;
				break;
			
			case 0x00000002:
				if (Function_271(bParam1) <= fParam2)
				{
					if (SQUAD_IS_VALID(bParam0))
					{
						if (SQUAD_GET_SIZE(bParam0) > 2)
						{
							if (!iLocal_955)
							{
								bLocal_837 = Function_474(StackVal, bParam0);
								if (IS_ACTOR_VALID(bLocal_837))
								{
									vLocal_922 = { 0.0f, 0.0f, 0.0f };
									bLocal_772 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, bLocal_837, &vLocal_922, 0, 0, 0, 0, 0, 0, 1);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
									TASK_SEQUENCE_RELEASE(bLocal_772, 1);
									TASK_PRIORITY_SET(bLocal_543, true);
									iLocal_955 = 1;
								}
							}
							else if (!Function_467(bLocal_837, bParam0, 0))
							{
								iLocal_955 = 0;
							}
						}
						else if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
						{
							bLocal_772 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
							TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
							TASK_SEQUENCE_RELEASE(bLocal_772, 1);
							TASK_PRIORITY_SET(bLocal_543, true);
							iLocal_955 = 0;
						}
					}
					Function_219(bParam1);
				}
				if (IS_VOLUME_VALID(Local_4.f_704))
				{
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_704))
						{
							iLocal_776++;
						}
					}
				}
				if (Function_271(&bLocal_875) <= 20.0f)
				{
					AI_GOAL_LOOK_AT_COORD_NEW(bLocal_543, &Local_1034 + 16, 4.0f);
					SET_ANIM_SET_FOR_ACTOR(bLocal_543, "home01_look_back", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_543, "home01_look_back");
					Function_219(&bLocal_875);
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION((*&Local_4 + 1056)[3], &vLocal_922);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vLocal_922, 2.0f, 4);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				iLocal_776++;
				break;
			
			case 0x00000004:
				iLocal_776++;
				break;
			}
	}
}

void Function_494(int iParam0, float fParam1) //Position: 0x209BD / 133565
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (SQUAD_IS_VALID(iParam0->f_52))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_44))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						bVar3 = 6.0f;
						bVar4 = 12.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						bVar3 = 9.0f;
						bVar4 = 20.0f;
					}
					else
					{
						bVar3 = 10.0f;
						bVar4 = 23.0f;
					}
					if (!iParam0->f_100)
					{
						if (SQUAD_GET_SIZE(iParam0->f_44) != 0 && SQUAD_GET_SIZE(iParam0->f_48) != 0)
						{
							if (SQUAD_GET_SIZE(iParam0->f_52) == 1)
							{
								bVar0 = false;
								while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
								{
									bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
									if (IS_ACTOR_VALID(bVar1))
									{
										if (!Function_382(StackVal, bVar1, bVar4))
										{
											CLEAR_ACTOR_MAX_SPEED(bVar1);
											TASK_CLEAR(bVar1);
											SQUAD_LEAVE(bVar1);
											SQUAD_JOIN(bVar1, iParam0->f_44);
											if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(bVar1, "bRejoinInProgress");
											}
											bVar2 = GET_BLIP_ON_ACTOR(bVar1);
											if (IS_BLIP_VALID(bVar2))
											{
												REMOVE_BLIP(bVar2);
											}
											if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
											{
												iParam0->f_80++;
												DECOR_REMOVE(bVar1, "bIsStraggler");
											}
										}
									}
									bVar0++;
								}
							}
						}
					}
					bVar0 = false;
					while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
						if (IS_ACTOR_VALID(bVar1))
						{
							bVar2 = GET_BLIP_ON_ACTOR(bVar1);
							if (!IS_BLIP_VALID(bVar2))
							{
								bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 425, 0, 2, 0);
								SET_BLIP_FLAG(bVar2, 4096, 0);
							}
							else if (!GET_BLIP_ICON(bVar2) != 425)
							{
								CHANGE_BLIP_ICON(bVar2, 425);
								SET_BLIP_FLAG(bVar2, 4096, 0);
							}
							if (!GET_TASK_STATUS(bVar1, 26) != 1)
							{
								if (!GET_LASSO_TARGET(Global_34573) != bVar1)
								{
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar1, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar1, true);
								}
							}
							if (Function_382(StackVal, bVar1, bVar3))
							{
								if (StackVal && Function_382(iParam0->f_100, bVar1, bVar4))
								{
								}
								else
								{
									CLEAR_ACTOR_MAX_SPEED(bVar1);
									TASK_CLEAR(bVar1);
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_44);
									if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(bVar1, "bRejoinInProgress");
									}
									bVar2 = GET_BLIP_ON_ACTOR(bVar1);
									if (IS_BLIP_VALID(bVar2))
									{
										REMOVE_BLIP(bVar2);
									}
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							if (!iParam0->f_100)
							{
								if (Function_271(iParam0 + 88) <= fParam1)
								{
									if (!Function_382(StackVal, bVar1, bVar4))
									{
										if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
										{
											SQUAD_LEAVE(bVar1);
											SQUAD_JOIN(bVar1, iParam0->f_48);
											TASK_CLEAR(bVar1);
											if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(bVar1, "bRejoinInProgress");
											}
											bVar2 = GET_BLIP_ON_ACTOR(bVar1);
											if (!IS_BLIP_VALID(bVar2))
											{
												bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 424, 0, 2, 0);
												SET_BLIP_FLAG(bVar2, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar2, 424);
												SET_BLIP_FLAG(bVar2, 4096, 0);
											}
											if (!DECOR_GET_BOOL(bVar1, "bIsStraggler"))
											{
												iParam0->f_76++;
												DECOR_SET_BOOL(bVar1, "bIsStraggler", true);
											}
										}
									}
									if (!DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_SET_BOOL(bVar1, "bRejoinInProgress", true);
									}
									Function_219(iParam0 + 88);
								}
							}
						}
						bVar0++;
					}
				}
			}
		}
	}
	return;
}

void Function_495(int iParam0) //Position: 0x20DFB / 134651
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (SQUAD_IS_VALID(iParam0->f_44))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_52))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						iVar5 = 1;
						iVar4 = 4;
						bVar8 = 7.0f;
						bVar6 = 12.0f;
						bVar7 = 14.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						iVar5 = 3;
						iVar4 = 9;
						bVar8 = 12.0f;
						bVar6 = 20.0f;
						bVar7 = 22.0f;
					}
					else
					{
						iVar5 = 3;
						iVar4 = 9;
						bVar8 = 15.0f;
						bVar6 = 23.0f;
						bVar7 = 25.0f;
					}
					if (SQUAD_GET_SIZE(iParam0->f_44) < iVar5)
					{
						if (!iParam0->f_100)
						{
							bVar2 = false;
							while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
							{
								bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
								if (IS_ACTOR_VALID(bVar0))
								{
									if (!Function_382(StackVal, bVar0, bVar8))
									{
										if (Function_382(StackVal, bVar0, bVar6))
										{
											PRINTINT(SQUAD_GET_SIZE(iParam0->f_44));
											PRINTNL();
											SET_ACTOR_MAX_SPEED(bVar0, 4);
											SQUAD_LEAVE(bVar0);
											SQUAD_JOIN(bVar0, iParam0->f_52);
											iParam0->f_84 = TASK_SEQUENCE_OPEN();
											TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
											TASK_SEQUENCE_CLOSE();
											TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
											TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
											TASK_PRIORITY_SET(bVar0, true);
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (!IS_BLIP_VALID(bVar1))
											{
												bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar1, 425);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
										}
										else
										{
											SQUAD_LEAVE(bVar0);
											SQUAD_JOIN(bVar0, iParam0->f_48);
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (!IS_BLIP_VALID(bVar1))
											{
												bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 424, 0, 2, 0);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar1, 424);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
										}
									}
									else
									{
										CLEAR_ACTOR_MAX_SPEED(bVar0);
										TASK_CLEAR(bVar0);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_56);
										if (DECOR_GET_BOOL(bVar0, "bRejoinInProgress"))
										{
											DECOR_SET_BOOL(bVar0, "bRejoinInProgress", false);
										}
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (IS_BLIP_VALID(bVar1))
										{
											REMOVE_BLIP(bVar1);
										}
									}
								}
								if (SQUAD_GET_SIZE(iParam0->f_44) == 0)
								{
									iParam0->f_100 = 1;
									Function_219(iParam0 + 88);
								}
								bVar2++;
							}
						}
					}
					else
					{
						bVar2 = false;
						while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
						{
							bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
							if (IS_ACTOR_VALID(bVar0))
							{
								if (!Function_382(StackVal, bVar0, bVar7))
								{
									if ((SQUAD_GET_SIZE(iParam0->f_48) + SQUAD_GET_SIZE(iParam0->f_52)) < iVar4)
									{
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_48);
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 424, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										if (!DECOR_GET_BOOL(bVar0, "bIsStraggler"))
										{
											iParam0->f_76++;
											DECOR_SET_BOOL(bVar0, "bIsStraggler", true);
										}
									}
									else
									{
										SET_ACTOR_MAX_SPEED(bVar0, 4);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_52);
										iParam0->f_84 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
										TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
										TASK_PRIORITY_SET(bVar0, true);
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(bVar1, 425);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
									}
								}
							}
							bVar2++;
						}
					}
					bVar2 = false;
					while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
					{
						bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar2);
						if (IS_ACTOR_VALID(bVar0))
						{
							bVar1 = GET_BLIP_ON_ACTOR(bVar0);
							if (!IS_BLIP_VALID(bVar1))
							{
								bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 424, 0, 2, 0);
								SET_BLIP_FLAG(bVar1, 4096, 0);
							}
							else if (!GET_BLIP_ICON(bVar1) != 424)
							{
								CHANGE_BLIP_ICON(bVar1, 424);
								SET_BLIP_FLAG(bVar1, 4096, 0);
							}
							if (StackVal && IS_OBJECT_VALID(IS_OBJECT_VALID(StackVal)))
							{
								if (StackVal || Function_382(Function_382(StackVal, bVar0, bVar6), bVar0, bVar6))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									if (Function_382(StackVal, bVar0, bVar6))
									{
									}
									else if (Function_382(StackVal, bVar0, bVar6))
									{
									}
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, true);
									bVar1 = GET_BLIP_ON_ACTOR(bVar0);
									if (!IS_BLIP_VALID(bVar1))
									{
										bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
										SET_BLIP_FLAG(bVar1, 4096, 0);
									}
									else
									{
										CHANGE_BLIP_ICON(bVar1, 425);
										SET_BLIP_FLAG(bVar1, 4096, 0);
									}
								}
								else
								{
									bVar3 = false;
									while (bVar3 < (iParam0->f_104 - 1))
									{
										if (IS_ACTOR_VALID((*iParam0 + 104)[bVar3]))
										{
											if (IS_ACTOR_PLAYER((*iParam0 + 104)[bVar3]))
											{
												if (Function_382(bVar0, (*iParam0 + 104)[bVar3], 7.0f))
												{
													PRINTINT(bVar3);
													PRINTNL();
													SET_ACTOR_MAX_SPEED(bVar0, 4);
													SQUAD_LEAVE(bVar0);
													SQUAD_JOIN(bVar0, iParam0->f_52);
													iParam0->f_84 = TASK_SEQUENCE_OPEN();
													TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
													TASK_SEQUENCE_CLOSE();
													TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
													TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
													TASK_PRIORITY_SET(bVar0, true);
													bVar1 = GET_BLIP_ON_ACTOR(bVar0);
													if (!IS_BLIP_VALID(bVar1))
													{
														bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
													else
													{
														CHANGE_BLIP_ICON(bVar1, 425);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
												}
											}
											else if (Function_382(bVar0, (*iParam0 + 104)[bVar3], 15.0f))
											{
												PRINTINT(bVar3);
												PRINTNL();
												SET_ACTOR_MAX_SPEED(bVar0, 4);
												SQUAD_LEAVE(bVar0);
												SQUAD_JOIN(bVar0, iParam0->f_52);
												iParam0->f_84 = TASK_SEQUENCE_OPEN();
												TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
												TASK_SEQUENCE_CLOSE();
												TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
												TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
												TASK_PRIORITY_SET(bVar0, true);
												bVar1 = GET_BLIP_ON_ACTOR(bVar0);
												if (!IS_BLIP_VALID(bVar1))
												{
													bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
													SET_BLIP_FLAG(bVar1, 4096, 0);
												}
												else
												{
													CHANGE_BLIP_ICON(bVar1, 425);
													SET_BLIP_FLAG(bVar1, 4096, 0);
												}
												if (DECOR_GET_BOOL(bVar0, "bIsStraggler"))
												{
													DECOR_REMOVE(bVar0, "bIsStraggler");
												}
											}
										}
										bVar3++;
									}
								}
							}
						}
						bVar2++;
					}
				}
			}
		}
	}
	return;
}

void Function_496(int iParam0) //Position: 0x21486 / 136326
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_44))
		{
			if (SQUAD_IS_VALID(iParam0->f_48))
			{
				if (SQUAD_IS_VALID(iParam0->f_56))
				{
					if (SQUAD_IS_VALID(iParam0->f_52))
					{
						if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
						{
							iVar8 = 1;
						}
						else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
						{
							iVar8 = 3;
						}
						else
						{
							iVar8 = 3;
						}
						if (SQUAD_GET_SIZE(iParam0->f_44) < iVar8)
						{
							if (SQUAD_GET_SIZE(iParam0->f_56) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_56, &vVar0);
								Function_479(iParam0->f_56);
								vVar3 = { StackVal, StackVal, Function_479(iParam0->f_56) };
							}
							else if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_52, &vVar0);
								Function_481(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_481(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_479(iParam0->f_52);
								vVar3 = { StackVal, StackVal, Function_479(iParam0->f_52) };
							}
							else if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_48, &vVar0);
								Function_481(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_481(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_479(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_479(iParam0->f_48) };
							}
							else
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								if (IS_OBJECT_VALID(StackVal))
								{
									GET_OBJECT_POSITION(StackVal, &vVar0);
									GET_OBJECT_ORIENTATION(StackVal, &vVar3);
								}
							}
						}
						else
						{
							SQUAD_COMPUTE_CENTROID(iParam0->f_44, &vVar0);
							Function_479(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_479(iParam0->f_44) };
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
							{
								Function_239(*iParam0);
								if (!Function_73(StackVal, StackVal, Function_239(*iParam0)))
								{
									bVar7 = ADD_BLIP_FOR_OBJECT(*iParam0, 425, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar7))
									{
										SET_BLIP_SCALE(bVar7, 2,5f);
										SET_BLIP_NAME(bVar7, "nBLIP_HERD");
										SET_BLIP_FLAG(bVar7, 4096, 0);
										SET_BLIP_PRIORITY(bVar7, true);
									}
								}
							}
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
							{
								Function_239(StackVal);
								if (!Function_73(StackVal, StackVal, Function_239(StackVal)))
								{
									bVar6 = ADD_BLIP_FOR_OBJECT(StackVal, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar6))
									{
										SET_BLIP_SCALE(bVar6, 1.0f);
										SET_BLIP_PRIORITY(bVar6, 2);
									}
								}
							}
						}
						SET_OBJECT_POSITION(StackVal, vVar0);
						SET_OBJECT_POSITION(*iParam0, vVar0);
						SET_OBJECT_ORIENTATION(*iParam0, vVar3);
						GET_OBJECT_POSITION(StackVal, iParam0 + 16);
					}
				}
			}
		}
	}
	return;
}

void Function_497() //Position: 0x21744 / 137028
{
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		if (iLocal_956)
		{
			Function_496(&Local_1034);
			Function_495(&Local_1034);
			Function_494(&Local_1034, 0x41700000);
			if (iLocal_540 > 8)
			{
				Function_507(Local_1034.f_48, &bLocal_857, 3.0f, Local_4.f_1572, -20.0f);
				if (Function_271(&bLocal_545) <= (3.0f * 8.0f))
				{
					if (Function_271(&bLocal_854) <= 0,2f)
					{
						Function_472(&Local_1034);
						Function_219(&bLocal_854);
					}
				}
			}
			Function_471();
		}
		Function_469(Global_34573);
		if (iLocal_540 > 7)
		{
			if (((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_56)) && SQUAD_IS_VALID(Local_1034.f_52))
			{
				if (SQUAD_GET_SIZE(Local_1034.f_44) != bLocal_788 || ((SQUAD_GET_SIZE(Local_1034.f_48) != 0 && SQUAD_GET_SIZE(Local_1034.f_56) != 0) && SQUAD_GET_SIZE(Local_1034.f_52) != 0))
				{
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 106;
				}
			}
		}
		Function_506();
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (iLocal_554[6] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30637[0];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 1008)[0], 1, 1, 1);
				iLocal_793 = 0;
				iLocal_795 = 0;
				if (IS_ACTOR_VALID(bLocal_544))
				{
					TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_544, true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Global_34165.f_124;
				bLocal_778 = Global_34165.f_128;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_1034.f_76 = bLocal_777;
				Local_1034.f_80 = bLocal_778;
				Function_504();
				if (iLocal_554[6] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 1008)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
				}
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					Function_415(Local_1034.f_56, Local_1034.f_44);
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_44);
					Function_414(Local_1034.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_660, -1.0f);
				}
				CLEAR_AMBIENT_MOVE_RESTRICTIONS();
				Function_186(32768);
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[317]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_406(&(Local_611[517]));
				Function_406(&(Local_611[617]));
				Function_406(&(Local_611[717]));
				Function_406(&(Local_611[817]));
				Function_454(&(Local_611[117]), 2);
				Function_454(&(Local_611[217]), 2);
				Function_454(&(Local_611[317]), 2);
				Function_454(&(Local_611[417]), 2);
				if (HUD_IS_FADED())
				{
					Function_219(&bLocal_545);
					iLocal_540 = 5;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 6;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30637[1], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (Function_398(bLocal_543, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_1034.f_44))
			{
				Function_503();
				Function_502();
				Function_414(Local_1034.f_44);
				Function_450(Local_1034.f_44, &Local_4 + 308);
				Function_449(Local_1034.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_1018))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_1018 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_410, "HOME01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_1018))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1018, 0);
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					Function_226(12, 0, 1);
					CLEAR_ACTOR_MAX_SPEED(bLocal_543);
					CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
					MEMORY_PREFER_RIDING(bLocal_543, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1572, -20.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (SQUAD_IS_VALID(bLocal_1011))
				{
					SQUAD_GOALS_CLEAR(bLocal_1011);
					if (IS_ACTOR_VALID(bLocal_822[0]))
					{
						DECOR_SET_BOOL(bLocal_822[0], "bNoInjuryEjection", false);
					}
				}
				if (iLocal_554[6] == 1)
				{
					if (SQUAD_IS_VALID(Local_1034.f_44))
					{
						Function_503();
						Function_502();
						Function_414(Local_1034.f_44);
						Function_450(Local_1034.f_44, &Local_4 + 308);
						Function_449(Local_1034.f_44, 2, 1);
					}
				}
				iLocal_955 = 0;
				if (SQUAD_IS_VALID(Local_1034.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_48);
					Function_448(Local_1034.f_48);
				}
				*(&Local_1034 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_1034.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_52);
					Function_448(Local_1034.f_52);
				}
				Local_1034.f_8 = Local_4.f_1228;
				GET_OBJECT_POSITION(Local_4.f_1228, &uLocal_928);
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_56);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_668, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				}
				Function_501();
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				if (SQUAD_GET_SIZE(Local_1034.f_48) <= 1 || SQUAD_GET_SIZE(Local_1034.f_52) <= 1)
				{
					UI_SHOW("RacePosition");
					Function_393("home01_obj08", 7,5f, 1, 2, 0, 0, 0);
				}
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				if (iLocal_955)
				{
					Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_441(StackVal, &bLocal_551, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
			}
			if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
			{
				if (SQUAD_GET_SIZE(Local_1034.f_48) > 2)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
					{
						if (Function_271(&bLocal_548) <= 15.0f)
						{
							Function_500();
							Function_219(&bLocal_548);
						}
					}
				}
			}
			if (Function_271(&bLocal_545) <= (2,5f * 8.0f))
			{
				if ((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if (SQUAD_GET_SIZE(Local_1034.f_44) <= bLocal_788)
					{
						if (SQUAD_GET_SIZE(Local_1034.f_52) == 0)
						{
							if (SQUAD_GET_SIZE(Local_1034.f_48) <= 0 && SQUAD_GET_SIZE(Local_1034.f_48) > 3)
							{
								Function_243();
								Function_219(&bLocal_545);
								iLocal_540 = 9;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (SQUAD_GET_SIZE(Local_1034.f_48) == 1)
				{
					Function_393("home01_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0);
				}
				else
				{
					Function_393("home01_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0);
				}
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
			}
			if (!fLocal_959[0])
			{
				if ((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0) && SQUAD_GET_SIZE(Local_1034.f_48) >= 3)
					{
						if (IS_ACTOR_VALID(bLocal_543))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 24.0f))
							{
								fLocal_959[0] = 1;
								Function_499();
							}
						}
					}
				}
			}
			if ((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
			{
				if (SQUAD_GET_SIZE(Local_1034.f_44) == bLocal_788)
				{
					if (SQUAD_GET_SIZE(Local_1034.f_48) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
					{
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 8;
					}
				}
			}
			if (Function_271(&bLocal_548) <= 45.0f)
			{
				Function_243();
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				iLocal_540 = 8;
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_1034.f_56))
			{
				bLocal_788 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_44);
				Function_378(Local_411, bLocal_788);
			}
			PRINTINT(bLocal_788);
			PRINTNL();
			bLocal_789 = (15 - bLocal_788);
			PRINTINT(bLocal_789);
			PRINTNL();
			bLocal_777 = Local_1034.f_76;
			Global_34165.f_124 = bLocal_777;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_778 = Local_1034.f_80;
			Global_34165.f_128 = bLocal_778;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_498();
			iLocal_554[7] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = 8;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_498() //Position: 0x22409 / 140297
{
	return;
}

void Function_499() //Position: 0x2240F / 140303
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_GetLastStraggler2", "Home01_GetLastStraggler2", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_500() //Position: 0x22469 / 140393
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_GetLastStraggler4", "Home01_GetLastStraggler4", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_501() //Position: 0x224C3 / 140483
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_RoundUpStragglersF", "Home01_RoundUpStragglersF", 3, 3, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_502() //Position: 0x2251F / 140575
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_503() //Position: 0x22547 / 140615
{
	Function_448(Local_1034.f_44);
	SQUAD_GOALS_CLEAR(Local_1034.f_44);
	Local_1034.f_60 = UNK_0x48588CCB(Local_1034.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_1034.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_1034.f_44, Local_1034.f_60);
	}
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_1034.f_44, Local_1034.f_60, Global_34573, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_1034.f_44, Local_1034.f_60, Global_34573, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_1034.f_44, Local_1034.f_60, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_1034.f_44, Local_1034.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_1034.f_44, Local_1034.f_60, 0, 1);
	if (IS_ACTOR_VALID(bLocal_543))
	{
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_1034.f_44, Local_1034.f_60, bLocal_543, 5.0f, 1.0f, 925353388, 925353388, 0);
		if (IS_VOLUME_VALID(Local_1034.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_543);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_1034.f_40);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_543, Local_1034.f_40);
		}
	}
	DECOR_SET_BOOL(Global_34573, "herding", true);
	iLocal_956 = 1;
	return;
}

void Function_504() //Position: 0x22648 / 140872
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 1008)[3];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_505();
	return;
}

void Function_505() //Position: 0x226E1 / 141025
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1572;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1220, &iLocal_980, 5, 6.0f, 7,5f, 2.0f, 1);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, false)))
			{
				Function_348(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, false), (*&Local_4 + 1164)[0], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, true)))
			{
				Function_348(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, true), (*&Local_4 + 1164)[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, 2)))
			{
				Function_348(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, 2), (*&Local_4 + 1164)[2], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, 3)))
			{
				Function_348(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, 3), (*&Local_4 + 1164)[3], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, 4)))
			{
				Function_348(SQUAD_GET_ACTOR_BY_INDEX(Local_1034.f_44, 4), (*&Local_4 + 1164)[4], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_660, -1.0f);
		}
	}
	return;
}

void Function_506() //Position: 0x22878 / 141432
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000002:
				Function_459(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000003:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_507(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x228FB / 141563
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		if (SQUAD_IS_VALID(bParam0))
		{
			switch (iLocal_776)
			{
				case 0x00000000:
					Function_219(&bLocal_875);
					iLocal_776++;
					break;
				
				case 0x00000001:
					if (Function_271(bParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(bParam0))
						{
							if (SQUAD_GET_SIZE(bParam0) > 2)
							{
								if (!iLocal_955)
								{
									bLocal_837 = Function_474(StackVal, bParam0);
									if (IS_ACTOR_VALID(bLocal_837))
									{
										vLocal_922 = { 0.0f, 0.0f, 0.0f };
										bLocal_772 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, bLocal_837, &vLocal_922, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
										TASK_SEQUENCE_RELEASE(bLocal_772, 1);
										TASK_PRIORITY_SET(bLocal_543, true);
										iLocal_955 = 1;
									}
								}
								else if (!Function_467(bLocal_837, bParam0, 0))
								{
									iLocal_955 = 0;
								}
							}
							else if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
							{
								bLocal_772 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
								TASK_SEQUENCE_RELEASE(bLocal_772, 1);
								TASK_PRIORITY_SET(bLocal_543, true);
								iLocal_955 = 0;
							}
						}
						Function_219(bParam1);
					}
					if (Function_271(&bLocal_875) <= 20.0f)
					{
						AI_GOAL_LOOK_AT_COORD_NEW(bLocal_543, &Local_1034 + 16, 4.0f);
						SET_ANIM_SET_FOR_ACTOR(bLocal_543, "home01_look_back", 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_543, "home01_look_back");
						Function_219(&bLocal_875);
					}
					break;
				
				case 0x00000003:
					iLocal_776++;
					break;
			}
		}
	}
}

void Function_508() //Position: 0x22A90 / 141968
{
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		if (iLocal_540 < 10)
		{
			if (iLocal_956)
			{
				Function_496(&Local_1034);
				Function_495(&Local_1034);
				Function_494(&Local_1034, 0x41700000);
				if (Function_271(&bLocal_854) <= 0,2f)
				{
					Function_472(&Local_1034);
					Function_219(&bLocal_854);
				}
				Function_471();
			}
		}
		Function_469(Global_34573);
		Function_542();
		Function_541();
		Function_534();
		Function_533();
		Function_530(1, 0);
		Function_529();
		Function_528();
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(52);
			if (iLocal_554[5] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_359("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30637[1];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 984)[0], 1, 1, 1);
				iLocal_793 = 0;
				iLocal_795 = 0;
				if (IS_ACTOR_VALID(bLocal_544))
				{
					TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_544, true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING_SUSPENSE", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_783 = 0;
				iLocal_784 = 0;
				iLocal_785 = 0;
				iLocal_792 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Global_34165.f_124;
				bLocal_778 = Global_34165.f_128;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_1034.f_76 = bLocal_777;
				Local_1034.f_80 = bLocal_778;
				Function_525();
				if (iLocal_554[5] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 984)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
					Function_356(32768);
					if (IS_VOLUME_VALID(Local_4.f_752))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_752);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_752);
						CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_752, 15);
					}
				}
				if ((SQUAD_IS_VALID(Local_1034.f_56) && SQUAD_IS_VALID(Local_1034.f_52)) && SQUAD_IS_VALID(Local_1034.f_48))
				{
					Function_415(Local_1034.f_56, Local_1034.f_44);
					Function_415(Local_1034.f_52, Local_1034.f_44);
					Function_415(Local_1034.f_48, Local_1034.f_44);
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_44);
					Function_414(Local_1034.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_656, -1.0f);
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_406(&(Local_611[117]));
				Function_406(&(Local_611[217]));
				Function_406(&(Local_611[317]));
				Function_406(&(Local_611[417]));
				Function_406(&(Local_611[517]));
				Function_406(&(Local_611[617]));
				Function_406(&(Local_611[717]));
				Function_406(&(Local_611[817]));
				if (HUD_IS_FADED())
				{
					Function_219(&bLocal_545);
					iLocal_540 = 5;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 6;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30637[1], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					if (Function_398(bLocal_543, 1, 0x41700000) && Function_524(Local_1034.f_44, 1))
					{
						if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
						{
							Function_219(&bLocal_545);
							iLocal_540 = 104;
						}
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_1034.f_44))
			{
				Function_453();
				Function_414(Local_1034.f_44);
				Function_450(Local_1034.f_44, &Local_4 + 308);
				Function_449(Local_1034.f_44, 2, 1);
				Function_523(bLocal_1015, 5.0f, 1.0f);
				Function_523(bLocal_1016, 5.0f, 1.0f);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_271(&bLocal_545) <= 5.0f)
				{
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					if (!IS_OBJECT_VALID(bLocal_1018))
					{
						if (IS_OBJECT_VALID(StackVal))
						{
							bLocal_1018 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_410, "HOME01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
							if (IS_OBJECT_VALID(bLocal_1018))
							{
								SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1018, 0);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						Function_226(12, 0, 1);
						CLEAR_ACTOR_MAX_SPEED(bLocal_543);
						CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
						SET_ACTOR_MAX_SPEED(bLocal_543, 4);
						MEMORY_PREFER_RIDING(bLocal_543, true);
						MEMORY_ALLOW_SHOOTING(bLocal_543, false);
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, 2);
						vLocal_922 = { 0.0f, 0.0f, 0.0f };
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_543, true);
					}
					if (SQUAD_IS_VALID(bLocal_1011))
					{
						SQUAD_GOALS_CLEAR(bLocal_1011);
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							DECOR_SET_BOOL(bLocal_822[0], "bNoInjuryEjection", true);
						}
					}
					if (SQUAD_IS_VALID(bLocal_1013))
					{
						SQUAD_GOALS_CLEAR(bLocal_1013);
					}
					if (SQUAD_IS_VALID(bLocal_1014))
					{
						SQUAD_GOALS_CLEAR(bLocal_1014);
					}
					if (iLocal_554[5] == 1)
					{
						if (SQUAD_IS_VALID(Local_1034.f_44))
						{
							Function_453();
							Function_414(Local_1034.f_44);
							Function_450(Local_1034.f_44, &Local_4 + 308);
							Function_449(Local_1034.f_44, 2, 1);
							Function_523(bLocal_1015, 5.0f, 1.0f);
							Function_523(bLocal_1016, 5.0f, 1.0f);
						}
					}
					iLocal_955 = 0;
					if (SQUAD_IS_VALID(Local_1034.f_48))
					{
						SQUAD_GOALS_CLEAR(Local_1034.f_48);
						Function_448(Local_1034.f_48);
					}
					*(&Local_1034 + 28) = { 0.0f, 0.0f, 0.0f };
					if (SQUAD_IS_VALID(Local_1034.f_52))
					{
						SQUAD_GOALS_CLEAR(Local_1034.f_52);
						Function_448(Local_1034.f_52);
					}
					Local_1034.f_8 = Local_4.f_1228;
					GET_OBJECT_POSITION(Local_4.f_1228, &uLocal_928);
					if (SQUAD_IS_VALID(Local_1034.f_56))
					{
						SQUAD_GOALS_CLEAR(Local_1034.f_56);
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
						TASK_WANDER_IN_VOLUME(false, Local_4.f_668, -1.0f);
						TASK_SEQUENCE_CLOSE();
						SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_56, false, 1, 4294967295);
						TASK_SEQUENCE_PERFORM(false, bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					}
					Function_522();
					Function_219(&bLocal_545);
					iLocal_540 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 5.0f)
			{
				if (IS_ACTOR_VALID(bLocal_543))
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, 2);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_543);
					vLocal_922 = { 0.0f, 0.0f, 0.0f };
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_FOLLOW_OBJECT(StackVal, false, &vLocal_922, 0, 0, 0, 0, 0, 0, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_822[0], 0.0f);
				}
				if (SQUAD_IS_VALID(bLocal_1015))
				{
					iLocal_570 = 1;
					SQUAD_GOALS_CLEAR(bLocal_1015);
					SQUAD_SET_FACTION(bLocal_1015, 19);
					Function_521(bLocal_1015, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_520(bLocal_1015, 3);
					Function_519(bLocal_1015, 1);
					Function_518(bLocal_1015, 1);
					Function_516(bLocal_1015, Global_34573, 1);
					Function_516(bLocal_1015, bLocal_543, 1);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_1015, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_1015) | 2048);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 1236, 9.0f, 4);
					TASK_KILL_CHAR(false, Global_34573);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1015, false, 1, 2);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_KILL_CHAR(false, bLocal_543);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1015, true, 1, 1);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1015, 2, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
				}
				if (SQUAD_IS_VALID(bLocal_1016))
				{
					iLocal_570 = 1;
					SQUAD_GOALS_CLEAR(bLocal_1016);
					SQUAD_SET_FACTION(bLocal_1016, 19);
					Function_521(bLocal_1016, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_520(bLocal_1016, 3);
					Function_519(bLocal_1016, 1);
					Function_518(bLocal_1016, 1);
					Function_516(bLocal_1016, Global_34573, 1);
					Function_516(bLocal_1016, bLocal_543, 1);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_1016, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_1016) | 2048);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 1236, 9.0f, 4);
					TASK_KILL_CHAR(false, Global_34573);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1016, false, 1, 2);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_KILL_CHAR(false, bLocal_543);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1016, true, 1, 1);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1016, 2, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
				}
				Function_515();
				Function_219(&bLocal_545);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 5.0f)
			{
				if (IS_ACTOR_VALID(bLocal_841[0]))
				{
					SAY_SINGLE_LINE_STRING(bLocal_841[0], "Home01_RustlersYellJon", true, true, 2, 0, true, false);
				}
				else if (IS_ACTOR_VALID(bLocal_841[1]))
				{
					SAY_SINGLE_LINE_STRING(bLocal_841[1], "Home01_RustlersYellJon", true, true, 2, 0, true, false);
				}
				else if (IS_ACTOR_VALID(bLocal_841[2]))
				{
					SAY_SINGLE_LINE_STRING(bLocal_841[2], "Home01_RustlersYellJon", true, true, 2, 0, true, false);
				}
				else if (IS_ACTOR_VALID(bLocal_845[1]))
				{
					SAY_SINGLE_LINE_STRING(bLocal_845[1], "Home01_RustlersYellJon", true, true, 2, 0, true, false);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_393("home01_obj07", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
			if (Function_271(&bLocal_548) <= 6.0f)
			{
				if (Function_513(bLocal_1015, Global_34573, 36.0f, 1))
				{
					if (IS_ACTOR_VALID(bLocal_841[1]))
					{
						if (!IS_ACTOR_HOGTIED(bLocal_841[1]))
						{
							SAY_SINGLE_LINE_STRING(bLocal_841[1], "Home01_RustlersYellJon", true, true, 2, 0, true, false);
						}
					}
				}
				else if (Function_513(bLocal_1016, Global_34573, 36.0f, 1))
				{
					if (IS_ACTOR_VALID(bLocal_845[1]))
					{
						if (!IS_ACTOR_HOGTIED(bLocal_845[1]))
						{
							SAY_SINGLE_LINE_STRING(bLocal_845[1], "Home01_RustlersYellJon", true, true, 2, 0, true, false);
						}
					}
					if (IS_ACTOR_VALID(bLocal_845[2]))
					{
						if (!IS_ACTOR_HOGTIED(bLocal_845[2]))
						{
							SAY_SINGLE_LINE_STRING(bLocal_845[2], "Home01_RustlersYellJon", true, true, 2, 0, true, false);
						}
					}
					if (IS_ACTOR_VALID(bLocal_845[4]))
					{
						if (!IS_ACTOR_HOGTIED(bLocal_845[4]))
						{
							SAY_SINGLE_LINE_STRING(bLocal_845[4], "Home01_RustlersYellJon", true, true, 2, 0, true, false);
						}
					}
				}
				else if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
				{
					Function_512();
				}
				Function_219(&bLocal_548);
			}
			if (SQUAD_IS_VALID(bLocal_1015) && SQUAD_IS_VALID(bLocal_1016))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1015) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1016) >= 0)
				{
					iLocal_570 = 0;
					Function_407(&(Local_611[217]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
					Function_407(&(Local_611[317]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
					Function_407(&(Local_611[417]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
					Function_407(&(Local_611[517]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
					Function_442();
					if (IS_BLIP_VALID(bLocal_878))
					{
						REMOVE_BLIP(bLocal_878);
					}
					if (IS_OBJECT_VALID(bLocal_882))
					{
						DESTROY_OBJECT(bLocal_882);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 2.0f)
			{
				Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				Function_226(12, 1, 1);
				Function_511();
				Function_219(&bLocal_545);
				iLocal_540 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				Function_393("Son_return", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_385(&bLocal_551, 245.0f, 395.0f, bLocal_543, "Son_return", "Son_abandoned", &bLocal_568, 0, 0, 0, 325, 1);
			if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_543))
			{
				if (Function_379(Global_34573, bLocal_543, (6.0f * 3.0f)))
				{
					Function_226(12, 0, 1);
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 14;
				}
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_510();
				Function_243();
				Function_219(&bLocal_545);
				iLocal_540 = 15;
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 5.0f)
			{
				Function_243();
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			break;
		
		case 0x0000006A:
			if (((SQUAD_IS_VALID(Local_1034.f_56) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52)) && SQUAD_IS_VALID(Local_1034.f_56))
			{
				bLocal_788 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_52)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56));
				Function_378(Local_411, bLocal_788);
			}
			PRINTINT(bLocal_788);
			PRINTNL();
			bLocal_789 = (15 - bLocal_788);
			PRINTINT(bLocal_789);
			PRINTNL();
			bLocal_777 = Local_1034.f_76;
			Global_34165.f_124 = bLocal_777;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_778 = Local_1034.f_80;
			Global_34165.f_128 = bLocal_778;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_509();
			iLocal_554[6] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = 7;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_509() //Position: 0x23A5C / 146012
{
	return;
}

void Function_510() //Position: 0x23A62 / 146018
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_MeetsBakJak_v1_AA", "Home01_MeetsBakJak_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_MeetsBakJak_v1_AB", "Home01_MeetsBakJak_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_MeetsBakJak_v1_AC", "Home01_MeetsBakJak_v1_AC", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x23B3A / 146234
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_AllEnemsDefeated", "Home01_AllEnemsDefeated", 3, 3, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x23B92 / 146322
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_JonCriesTrror", "Home01_JonCriesTrror", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_513(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x23BE4 / 146404
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		if (Global_3380)
		{
		}
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
				if (ACTORS_IN_RANGE(bVar1, bParam1, bParam2))
				{
					if (!Function_514(bVar1, 1) || iParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_514(bool bParam0, int iParam1) //Position: 0x23C7D / 146557
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_515() //Position: 0x23CC7 / 146631
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_RustlersAttk", "Home01_RustlersAttk", false, 3, 1, 0, 1);
		Function_395(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516(bool bParam0, bool bParam1, bool bParam2) //Position: 0x23D16 / 146710
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
			Function_517(&bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_517(bool bParam0, bool bParam1, bool bParam2) //Position: 0x23D5B / 146779
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_384(bParam1);
			vVar0 = { StackVal, StackVal, Function_384(bParam1) };
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

void Function_518(bool bParam0, int iParam1) //Position: 0x23E63 / 147043
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
				ACTOR_HOLSTER_WEAPON(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_519(bool bParam0, bool bParam1) //Position: 0x23EAA / 147114
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
				MEMORY_PREFER_RIDING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_520(bool bParam0, bool bParam1) //Position: 0x23EF2 / 147186
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				bVar2 = GET_BLIP_ON_ACTOR(bVar1);
				if (IS_BLIP_VALID(bVar2))
				{
					SET_BLIP_PRIORITY(bVar2, bParam1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_521(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x23F45 / 147269
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

void Function_522() //Position: 0x24030 / 147504
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_SpotsRustlersUpHed", "Home01_SpotsRustlersUpHed", false, 3, 1, 0, 1);
		Function_395(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523(bool bParam0, float fParam1, float fParam2) //Position: 0x2408B / 147595
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
				SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_1034.f_44, Local_1034.f_60, bVar1, fParam1, fParam2, 925353388, 925353388, 0);
			}
			bVar0++;
		}
	}
	return;
}

int Function_524(bool bParam0, bool bParam1) //Position: 0x240E6 / 147686
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
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
				if (!Function_398(bVar1, bParam1, 0x41700000))
				{
					return 0;
				}
			}
			return 0;
		}
		return 0;
		bVar0++;
	}
	return 1;
}

void Function_525() //Position: 0x24145 / 147781
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 984)[3];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_527();
	cLocal_989[0] = 976;
	cLocal_989[1] = 977;
	cLocal_989[2] = 980;
	bLocal_887[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_1144);
	bLocal_887[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1144);
	bLocal_887[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_1144);
	if (!SQUAD_IS_VALID(bLocal_1013))
	{
		bLocal_1013 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE03"));
		if (SQUAD_IS_VALID(bLocal_1013))
		{
			SQUAD_GOALS_CLEAR(bLocal_1013);
			Function_342(bLocal_1013, &bLocal_826, &bLocal_887, &cLocal_989, "SHORSE03", 3);
			Function_341(bLocal_1013, 0);
			Function_340(bLocal_1013, 3);
		}
	}
	cLocal_993[0] = 981;
	cLocal_993[1] = 980;
	cLocal_993[2] = 976;
	cLocal_993[3] = 981;
	cLocal_993[4] = 977;
	cLocal_993[5] = 976;
	bLocal_891[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_1148);
	bLocal_891[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1148);
	bLocal_891[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_1148);
	bLocal_891[3] = GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_4.f_1148);
	bLocal_891[4] = GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_4.f_1148);
	bLocal_891[5] = GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1148);
	if (!SQUAD_IS_VALID(bLocal_1014))
	{
		bLocal_1014 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE04"));
		if (SQUAD_IS_VALID(bLocal_1014))
		{
			SQUAD_GOALS_CLEAR(bLocal_1014);
			Function_342(bLocal_1014, &bLocal_830, &bLocal_891, &cLocal_993, "SHORSE04", 6);
			Function_341(bLocal_1014, 0);
			Function_340(bLocal_1014, 3);
		}
	}
	cLocal_1000[0] = 477;
	cLocal_1000[1] = 478;
	cLocal_1000[2] = 479;
	bLocal_899[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_1152);
	bLocal_899[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1152);
	bLocal_899[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_1152);
	if (!SQUAD_IS_VALID(bLocal_1015))
	{
		bLocal_1015 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "nSOUTLAW01"));
		if (SQUAD_IS_VALID(bLocal_1015))
		{
			SQUAD_GOALS_CLEAR(bLocal_1015);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1015, false, 0, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_342(bLocal_1015, &bLocal_841, &bLocal_899, &cLocal_1000, "nSOUTLAW01", 3);
			Function_341(bLocal_1015, 0);
			SQUAD_SET_FACTION(bLocal_1015, 19);
			Function_519(bLocal_1015, 1);
			Function_526(bLocal_1015, bLocal_1013);
		}
	}
	cLocal_1004[0] = 480;
	cLocal_1004[1] = 481;
	cLocal_1004[2] = 482;
	cLocal_1004[3] = 483;
	cLocal_1004[4] = 484;
	cLocal_1004[5] = 485;
	bLocal_903[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_1156);
	bLocal_903[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1156);
	bLocal_903[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_1156);
	bLocal_903[3] = GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_4.f_1156);
	bLocal_903[4] = GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_4.f_1156);
	bLocal_903[5] = GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1156);
	if (!SQUAD_IS_VALID(bLocal_1016))
	{
		bLocal_1016 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "nSOUTLAW02"));
		if (SQUAD_IS_VALID(bLocal_1016))
		{
			SQUAD_GOALS_CLEAR(bLocal_1016);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1016, false, 0, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_342(bLocal_1016, &bLocal_845, &bLocal_903, &cLocal_1004, "nSOUTLAW02", 6);
			Function_341(bLocal_1016, 0);
			SQUAD_SET_FACTION(bLocal_1016, 19);
			Function_519(bLocal_1016, 1);
			Function_526(bLocal_1016, bLocal_1014);
		}
	}
	return;
}

void Function_526(bool bParam0, bool bParam1) //Position: 0x24552 / 148818
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(bParam0) && SQUAD_IS_VALID(bParam1))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1) && IS_ACTOR_VALID(bVar2))
			{
				if (!IS_ACTOR_RIDING(bVar2) && !IS_ACTOR_MOUNTED(bVar1))
				{
					ACTOR_MOUNT_ACTOR(bVar2, bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_527() //Position: 0x245BC / 148924
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1572;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1216, &iLocal_980, 5, 3.0f, 4,5f, 1,5f, 0);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_656, -1.0f);
		}
	}
	return;
}

void Function_528() //Position: 0x24699 / 149145
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 10)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_CHASE", 0, 4294967295, 4294967295);
					iLocal_792++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_540 > 13)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000003:
				break;
			
			case 0x00000004:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_529() //Position: 0x2473C / 149308
{
	if (IS_ACTOR_VALID(bLocal_822[0]))
	{
		if (!IS_ACTOR_VALID(bLocal_544) || !IS_ACTOR_ALIVE(bLocal_544))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_822[0]))
			{
				SET_ALLOW_RIDE_BY_PLAYER(bLocal_822[0], 0);
			}
		}
	}
	return;
}

void Function_530(bool bParam0, bool bParam1) //Position: 0x24776 / 149366
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			Function_216(bLocal_544);
			if (GET_MOUNT(Global_34573) != bLocal_544)
			{
				if (GET_MOUNT(Global_34573) == bLocal_822[0])
				{
					iLocal_975 = 1;
					TASK_CLEAR(bLocal_822[0]);
					bLocal_853 = bLocal_544;
					bLocal_544 = bLocal_822[0];
					bLocal_822[0] = bLocal_853;
					SET_ACTORS_HORSE(Global_34573, bLocal_544);
					Function_531(bLocal_544, 0);
					GIVE_OBJECT_TO_LAYOUT(bLocal_544, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(bLocal_544, 0);
					SET_ACTORS_HORSE(bLocal_543, bLocal_822[0]);
					SET_MOST_RECENT_MOUNT(bLocal_543, bLocal_822[0]);
					SET_ALLOW_RIDE_BY_AI(bLocal_822[0], 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_822[0], Local_4);
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(bLocal_544, GET_AMBIENT_LAYOUT());
					bLocal_544 = GET_MOUNT(Global_34573);
					SET_ACTORS_HORSE(Global_34573, bLocal_544);
					Function_531(bLocal_544, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_544, 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_544, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
		if (bParam1)
		{
		}
	}
	return;
}

void Function_531(bool bParam0, int iParam1) //Position: 0x24879 / 149625
{
	Function_532(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_532(bool bParam0) //Position: 0x2488B / 149643
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

void Function_533() //Position: 0x24A41 / 150081
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		switch (iLocal_776)
		{
			case 0x00000000:
				iLocal_776++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 7)
				{
					if (IS_ACTOR_SHOOTING(Global_34573))
					{
						MEMORY_ALLOW_SHOOTING(bLocal_543, true);
						iLocal_776++;
					}
				}
				break;
			
			case 0x00000002:
				iLocal_776++;
				break;
			}
	}
	return;
}

void Function_534() //Position: 0x24AA2 / 150178
{
	if (IS_ACTOR_VALID(bLocal_845[4]))
	{
		switch (iLocal_785)
		{
			case 0x00000000:
				iLocal_785++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 6)
				{
					GIVE_WEAPON_TO_ACTOR(bLocal_845[4], 21, false, 1, 1);
					iLocal_785++;
				}
				break;
			
			case 0x00000002:
				if (!Function_537(bLocal_845[2], 1, 1, 1, 1, 0, 0, 0, 0))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						vLocal_949 = { 0.0f, 0.0f, -3.0f };
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &Local_4 + 1236, 7.0f, 4);
						TASK_FOLLOW_OBJECT(StackVal, false, &vLocal_949, 0, 0, 0, 0, 0, 0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_845[4], bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_845[4], true);
						iLocal_785++;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_382(StackVal, bLocal_845[4], 10.0f))
				{
					iLocal_785++;
				}
				break;
			
			case 0x00000004:
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					bLocal_840 = Function_535(Local_1034.f_44, bLocal_845[4], 0, 0);
					if (IS_ACTOR_VALID(bLocal_840))
					{
						if (!bLocal_840 != bLocal_838 && !bLocal_840 != bLocal_839)
						{
							iLocal_785++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(bLocal_840))
				{
					DECOR_SET_BOOL(bLocal_840, "AllowLassoHorseMinigame", false);
					Function_517(&(bLocal_845[4]), bLocal_840, 1);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_USE_LASSO(0, bLocal_840, 1f, 5f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_845[4], bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_845[4], true);
					iLocal_785++;
				}
				else
				{
					iLocal_785 = (iLocal_785 - 1);
				}
				break;
			
			case 0x00000006:
				if (IS_ACTOR_VALID(bLocal_840))
				{
					if (bLocal_840 == GET_LASSO_TARGET(bLocal_845[4]))
					{
						iLocal_785++;
					}
				}
				else
				{
					iLocal_785 = 4;
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_VALID(bLocal_840))
				{
					iLocal_785++;
				}
				else
				{
					iLocal_785 = 4;
				}
				break;
			
			case 0x00000008:
				if (IS_ACTOR_VALID(bLocal_840))
				{
					bLocal_879 = GET_BLIP_ON_ACTOR(bLocal_840);
					if (!IS_BLIP_VALID(bLocal_881))
					{
						bLocal_881 = ADD_BLIP_FOR_ACTOR(bLocal_840, 424, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_881))
						{
							SET_BLIP_SCALE(bLocal_881, 0,6f);
						}
					}
					SQUAD_LEAVE(bLocal_840);
					SQUAD_JOIN(bLocal_840, Local_1034.f_48);
					TASK_CLEAR(bLocal_840);
					iLocal_785++;
				}
				else
				{
					iLocal_785 = 4;
				}
				break;
			
			case 0x00000009:
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &Local_4 + 1260, 7.0f, 4);
				TASK_KILL_CHAR(false, Global_34573);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_845[4], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_845[4], true);
				iLocal_785++;
				break;
			
			case 0x0000000A:
				if (GET_TASK_STATUS(bLocal_845[4], 61) == 0)
				{
					if (IS_ACTOR_VALID(bLocal_840))
					{
						RELEASE_ACTOR(bLocal_840);
					}
					iLocal_785 = 2;
				}
				break;
			
			case 0x0000000B:
				iLocal_785++;
				break;
			}
	}
	return;
}

int Function_535(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x24DB8 / 150968
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4), iVar5))
			{
				bVar4 = "";
			}
		}
		if (bParam3)
		{
			if (IS_ACTOR_RIDING(bVar4))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_536(bVar4, bParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
	}
	return "";
}

var Function_536(bool bParam0, bool bParam1) //Position: 0x24E72 / 151154
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_537(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x24F63 / 151395
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_540(&bVar0, 1);
	}
	if (bParam2)
	{
		Function_540(&bVar0, 2);
	}
	if (bParam3)
	{
		Function_540(&bVar0, 4);
	}
	if (bParam4)
	{
		Function_540(&bVar0, 8);
	}
	if (bParam5)
	{
		Function_540(&bVar0, 1024);
	}
	if (bParam7)
	{
		Function_540(&bVar0, 16);
	}
	if (bParam8)
	{
		Function_540(&bVar0, 32);
	}
	if (bParam6)
	{
		Function_540(&bVar0, 1048576);
	}
	return Function_538(uParam0, bVar0);
}

int Function_538(bool bParam0, int iParam1) //Position: 0x24FD2 / 151506
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_539(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_539(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_539(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_539(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_539(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_539(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_539(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_539(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_539(var uParam0, int iParam1) //Position: 0x250AB / 151723
{
	return (uParam0 && iParam1) == 0;
}

void Function_540(bool bParam0, bool bParam1) //Position: 0x250B8 / 151736
{
	Function_76(bParam0, bParam1);
	return;
}

void Function_541() //Position: 0x250C5 / 151749
{
	if (IS_ACTOR_VALID(bLocal_845[2]))
	{
		switch (iLocal_784)
		{
			case 0x00000000:
				iLocal_784++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 6)
				{
					GIVE_WEAPON_TO_ACTOR(bLocal_845[2], 21, false, 1, 1);
					iLocal_784++;
				}
				break;
			
			case 0x00000002:
				if (!Function_537(bLocal_845[1], 1, 1, 1, 1, 0, 0, 0, 0))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						vLocal_946 = { 3.0f, 0.0f, 0.0f };
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &Local_4 + 1236, 7.0f, 4);
						TASK_FOLLOW_OBJECT(StackVal, false, &vLocal_946, 0, 0, 0, 0, 0, 0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_845[2], bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_845[2], true);
						iLocal_784++;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_382(StackVal, bLocal_845[2], 10.0f))
				{
					iLocal_784++;
				}
				break;
			
			case 0x00000004:
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					bLocal_839 = Function_535(Local_1034.f_44, bLocal_845[2], 0, 0);
					if (IS_ACTOR_VALID(bLocal_839))
					{
						if (!bLocal_839 != bLocal_838 && !bLocal_839 != bLocal_840)
						{
							iLocal_784++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(bLocal_839))
				{
					DECOR_SET_BOOL(bLocal_839, "AllowLassoHorseMinigame", false);
					Function_517(&(bLocal_845[2]), bLocal_839, 1);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_USE_LASSO(0, bLocal_839, 1f, 5f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_845[2], bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_845[2], true);
					iLocal_784++;
				}
				else
				{
					iLocal_784 = (iLocal_784 - 1);
				}
				break;
			
			case 0x00000006:
				if (IS_ACTOR_VALID(bLocal_839))
				{
					if (bLocal_839 == GET_LASSO_TARGET(bLocal_845[2]))
					{
						iLocal_784++;
					}
				}
				else
				{
					iLocal_784 = 4;
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_VALID(bLocal_839))
				{
					iLocal_784++;
				}
				else
				{
					iLocal_784 = 4;
				}
				break;
			
			case 0x00000008:
				if (IS_ACTOR_VALID(bLocal_839))
				{
					bLocal_879 = GET_BLIP_ON_ACTOR(bLocal_839);
					if (!IS_BLIP_VALID(bLocal_880))
					{
						bLocal_880 = ADD_BLIP_FOR_ACTOR(bLocal_839, 424, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_880))
						{
							SET_BLIP_SCALE(bLocal_880, 0,6f);
						}
					}
					SQUAD_LEAVE(bLocal_839);
					SQUAD_JOIN(bLocal_839, Local_1034.f_48);
					TASK_CLEAR(bLocal_839);
					iLocal_784++;
				}
				else
				{
					iLocal_784 = 4;
				}
				break;
			
			case 0x00000009:
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &Local_4 + 1260, 7.0f, 4);
				TASK_KILL_CHAR(false, Global_34573);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_845[2], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_845[2], true);
				iLocal_784++;
				break;
			
			case 0x0000000A:
				if (GET_TASK_STATUS(bLocal_845[2], 61) == 0)
				{
					if (IS_ACTOR_VALID(bLocal_839))
					{
						RELEASE_ACTOR(bLocal_839);
					}
					iLocal_784 = 2;
				}
				break;
			
			case 0x0000000B:
				iLocal_784++;
				break;
			}
	}
	return;
}

void Function_542() //Position: 0x253D7 / 152535
{
	if (IS_ACTOR_VALID(bLocal_845[1]))
	{
		switch (iLocal_783)
		{
			case 0x00000000:
				iLocal_783++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 6)
				{
					GIVE_WEAPON_TO_ACTOR(bLocal_845[1], 21, false, 1, 1);
					iLocal_783++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_540 > 8)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						vLocal_943 = { -3.0f, 0.0f, 0.0f };
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &Local_4 + 1236, 9.0f, 4);
						TASK_FOLLOW_OBJECT(StackVal, false, &vLocal_943, 0, 0, 0, 0, 0, 0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_845[1], bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_845[1], true);
						iLocal_783++;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_382(StackVal, bLocal_845[1], 10.0f))
				{
					iLocal_783++;
				}
				break;
			
			case 0x00000004:
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					bLocal_838 = Function_535(Local_1034.f_44, bLocal_845[1], 0, 0);
					if (IS_ACTOR_VALID(bLocal_838))
					{
						if (!bLocal_838 != bLocal_839 && !bLocal_838 != bLocal_840)
						{
							iLocal_783++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(bLocal_838))
				{
					DECOR_SET_BOOL(bLocal_838, "AllowLassoHorseMinigame", false);
					Function_517(&(bLocal_845[1]), bLocal_838, 1);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_USE_LASSO(0, bLocal_838, 1f, 5f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_845[1], bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_845[1], true);
					iLocal_783++;
				}
				else
				{
					iLocal_783 = (iLocal_783 - 1);
				}
				break;
			
			case 0x00000006:
				if (IS_ACTOR_VALID(bLocal_838))
				{
					if (bLocal_838 == GET_LASSO_TARGET(bLocal_845[1]))
					{
						iLocal_783++;
					}
				}
				else
				{
					iLocal_783 = 4;
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_VALID(bLocal_838))
				{
					iLocal_783++;
				}
				else
				{
					iLocal_783 = 4;
				}
				break;
			
			case 0x00000008:
				if (IS_ACTOR_VALID(bLocal_838))
				{
					bLocal_879 = GET_BLIP_ON_ACTOR(bLocal_838);
					if (!IS_BLIP_VALID(bLocal_879))
					{
						bLocal_879 = ADD_BLIP_FOR_ACTOR(bLocal_838, 424, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_879))
						{
							SET_BLIP_SCALE(bLocal_879, 0,6f);
						}
					}
					SQUAD_LEAVE(bLocal_838);
					SQUAD_JOIN(bLocal_838, Local_1034.f_48);
					TASK_CLEAR(bLocal_838);
					iLocal_783++;
				}
				else
				{
					iLocal_783 = 4;
				}
				break;
			
			case 0x00000009:
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &Local_4 + 1260, 8.0f, 4);
				TASK_KILL_CHAR(false, Global_34573);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_845[1], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_845[1], true);
				iLocal_783++;
				break;
			
			case 0x0000000A:
				if (GET_TASK_STATUS(bLocal_845[1], 61) == 0)
				{
					if (IS_ACTOR_VALID(bLocal_838))
					{
						RELEASE_ACTOR(bLocal_838);
					}
					iLocal_783 = 2;
				}
				break;
			
			case 0x0000000B:
				iLocal_783++;
				break;
			}
	}
	return;
}

void Function_543() //Position: 0x256E8 / 153320
{
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		if (iLocal_956)
		{
			Function_478(&Local_1034, 1);
			Function_477(&Local_1034, 1);
			Function_476(&Local_1034, 1, 0x41700000);
			if (Function_271(&bLocal_854) <= 0,2f)
			{
				Function_507(Local_1034.f_48, &bLocal_857, 3.0f, Local_4.f_1568, -20.0f);
				Function_472(&Local_1034);
				Function_219(&bLocal_854);
			}
			Function_471();
		}
		Function_469(Global_34573);
		Function_549();
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(52);
			if (iLocal_554[4] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_359("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30637[1];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 960)[0], 1, 1, 1);
				iLocal_793 = 0;
				iLocal_795 = 0;
				if (IS_ACTOR_VALID(bLocal_544))
				{
					TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_544, true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Global_34165.f_124;
				bLocal_778 = Global_34165.f_128;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_1034.f_76 = bLocal_777;
				Local_1034.f_80 = bLocal_778;
				Function_547();
				if (iLocal_554[4] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 960)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
				}
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					Function_415(Local_1034.f_56, Local_1034.f_44);
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_44);
					Function_414(Local_1034.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_652, -1.0f);
				}
				Function_356(32768);
				if (IS_VOLUME_VALID(Local_4.f_752))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_752);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_752);
					CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_752, 15);
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[317]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_406(&(Local_611[517]));
				Function_406(&(Local_611[617]));
				Function_406(&(Local_611[717]));
				Function_406(&(Local_611[817]));
				Function_454(&(Local_611[117]), 2);
				Function_454(&(Local_611[217]), 2);
				Function_454(&(Local_611[317]), 2);
				Function_454(&(Local_611[417]), 2);
				if (HUD_IS_FADED())
				{
					Function_219(&bLocal_545);
					iLocal_540 = 5;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 6;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30637[1], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (Function_398(bLocal_543, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_1034.f_44))
			{
				Function_453();
				Function_546();
				Function_414(Local_1034.f_44);
				Function_450(Local_1034.f_44, &Local_4 + 260);
				Function_449(Local_1034.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_1018))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_1018 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_410, "HOME01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_1018))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1018, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1228, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1228, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1228, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					Function_226(12, 0, 1);
					CLEAR_ACTOR_MAX_SPEED(bLocal_543);
					CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
					MEMORY_PREFER_RIDING(bLocal_543, true);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1568, -20.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (iLocal_554[4] == 1)
				{
					if (SQUAD_IS_VALID(Local_1034.f_44))
					{
						Function_453();
						Function_546();
						Function_414(Local_1034.f_44);
						Function_450(Local_1034.f_44, &Local_4 + 260);
						Function_449(Local_1034.f_44, 2, 1);
					}
				}
				iLocal_955 = 0;
				if (SQUAD_IS_VALID(Local_1034.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_48);
					Function_448(Local_1034.f_48);
				}
				*(&Local_1034 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_1034.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_52);
					Function_448(Local_1034.f_52);
				}
				Local_1034.f_8 = Local_4.f_1228;
				GET_OBJECT_POSITION(Local_4.f_1228, &uLocal_928);
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_56);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_668, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				}
				Function_545();
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_393("home01_obj06", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				if (iLocal_955)
				{
					Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_441(StackVal, &bLocal_551, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1228, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1228, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1228, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
			}
			if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
			{
				if (SQUAD_GET_SIZE(Local_1034.f_48) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
					{
						if (Function_271(&bLocal_548) <= 15.0f)
						{
							Function_487();
							Function_219(&bLocal_548);
						}
					}
				}
				else if (iLocal_955)
				{
					if (SQUAD_GET_SIZE(Local_1034.f_48) > 2)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
						{
							if (Function_271(&bLocal_548) <= 15.0f)
							{
								Function_500();
								Function_219(&bLocal_548);
							}
						}
					}
				}
			}
			if (StackVal && IS_OBJECT_VALID(IS_ACTOR_VALID(Global_34573)))
			{
				if (IS_VOLUME_VALID(Local_4.f_684))
				{
					if (StackVal || IS_OBJECT_IN_VOLUME(IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_684), Local_4.f_684))
					{
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							DESTROY_OBJECT(bLocal_882);
						}
						Function_443(Local_1034.f_44);
						Function_443(Local_1034.f_48);
						Function_443(Local_1034.f_52);
						Function_443(Local_1034.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (((SQUAD_IS_VALID(Local_1034.f_56) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52)) && SQUAD_IS_VALID(Local_1034.f_56))
			{
				bLocal_788 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_52)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56));
				Function_378(Local_411, bLocal_788);
			}
			PRINTINT(bLocal_788);
			PRINTNL();
			bLocal_789 = (15 - bLocal_788);
			PRINTINT(bLocal_789);
			PRINTNL();
			bLocal_777 = Local_1034.f_76;
			Global_34165.f_124 = bLocal_777;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_778 = Local_1034.f_80;
			Global_34165.f_128 = bLocal_778;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_544();
			iLocal_554[5] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = 6;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_544() //Position: 0x2627A / 156282
{
	return;
}

void Function_545() //Position: 0x26280 / 156288
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_LeadUpHill_v1_AA", "Home01_LeadUpHill_v1_AA", 3, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_LeadUpHill_v1_AB", "Home01_LeadUpHill_v1_AB", false, 3, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_546() //Position: 0x26315 / 156437
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_547() //Position: 0x2633D / 156477
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 960)[3];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_548();
	cLocal_989[0] = 976;
	cLocal_989[1] = 977;
	cLocal_989[2] = 980;
	bLocal_887[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_1144);
	bLocal_887[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1144);
	bLocal_887[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_1144);
	if (!SQUAD_IS_VALID(bLocal_1013))
	{
		bLocal_1013 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE03"));
		if (SQUAD_IS_VALID(bLocal_1013))
		{
			SQUAD_GOALS_CLEAR(bLocal_1013);
			Function_342(bLocal_1013, &bLocal_826, &bLocal_887, &cLocal_989, "SHORSE03", 3);
			Function_341(bLocal_1013, 0);
			Function_340(bLocal_1013, 3);
		}
	}
	cLocal_1000[0] = 477;
	cLocal_1000[1] = 478;
	cLocal_1000[2] = 479;
	bLocal_899[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_1152);
	bLocal_899[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1152);
	bLocal_899[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_1152);
	if (!SQUAD_IS_VALID(bLocal_1015))
	{
		bLocal_1015 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "nSOUTLAW01"));
		if (SQUAD_IS_VALID(bLocal_1015))
		{
			SQUAD_GOALS_CLEAR(bLocal_1015);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1015, false, 0, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_342(bLocal_1015, &bLocal_841, &bLocal_899, &cLocal_1000, "nSOUTLAW01", 3);
			SQUAD_SET_FACTION(bLocal_1015, 21);
			Function_519(bLocal_1015, 1);
			Function_526(bLocal_1015, bLocal_1013);
		}
	}
	return;
}

void Function_548() //Position: 0x26541 / 156993
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1568;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1212, &iLocal_980, 5, 2.0f, 4,5f, 2.0f, 0);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_652, -1.0f);
		}
	}
	return;
}

void Function_549() //Position: 0x2661A / 157210
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 10)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_379(Global_34573, bLocal_821, 24.0f))
						{
							Function_551();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_792++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000003:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_550();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000004:
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000005:
				Function_459(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000006:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_550() //Position: 0x2671B / 157467
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_JonYellsAtRustlers", "Home01_JonYellsAtRustlers", 6, 2, 0, 0, 1);
		Function_395(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_551() //Position: 0x26777 / 157559
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_JonReassuresJack", "Home01_JonReassuresJack", 3, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_552() //Position: 0x267CF / 157647
{
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		Function_483(Local_1034.f_44, Local_1034.f_56, Local_4.f_596);
		Function_482(&Local_1034);
		if (iLocal_956)
		{
			Function_478(&Local_1034, 1);
			Function_477(&Local_1034, 1);
			Function_476(&Local_1034, 1, 0x41700000);
			if (Function_271(&bLocal_854) <= 0,2f)
			{
				Function_564(Local_1034.f_48, &bLocal_857, 3.0f, Local_4.f_1564, -20.0f);
				Function_472(&Local_1034);
				Function_219(&bLocal_854);
			}
			Function_471();
		}
		Function_469(Global_34573);
		Function_563();
		Function_562();
		Function_560();
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(36);
			if (iLocal_554[3] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_359("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30628[2];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 924)[0], 1, 1, 1);
				iLocal_793 = 0;
				iLocal_795 = 0;
				if (IS_ACTOR_VALID(bLocal_544))
				{
					TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_544, true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (IS_ACTOR_VALID(bLocal_821))
				{
					TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_821, true);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_779 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Global_34165.f_124;
				bLocal_778 = Global_34165.f_128;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_1034.f_76 = bLocal_777;
				Local_1034.f_80 = bLocal_778;
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_712);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_712);
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_712, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(Local_4.f_712);
				Function_558();
				if (iLocal_554[3] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 924)[4], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							Function_348(bLocal_822[0], (*&Local_4 + 924)[5], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_821))
					{
						if (IS_ACTOR_VALID(bLocal_824[0]))
						{
							Function_348(bLocal_824[0], (*&Local_4 + 924)[6], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_821) && !IS_ACTOR_MOUNTED(bLocal_824[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_821, bLocal_824[0]);
							}
						}
					}
				}
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					Function_415(Local_1034.f_56, Local_1034.f_44);
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_44);
					Function_414(Local_1034.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_648, -1.0f);
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), bLocal_821, "RanchersDaughter", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[317]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[517]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_406(&(Local_611[617]));
				Function_406(&(Local_611[717]));
				Function_406(&(Local_611[817]));
				Function_454(&(Local_611[217]), 2);
				Function_454(&(Local_611[317]), 2);
				Function_454(&(Local_611[417]), 2);
				Function_454(&(Local_611[517]), 2);
				if (HUD_IS_FADED())
				{
					Function_219(&bLocal_545);
					iLocal_540 = 5;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 6;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30628[2], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543) && IS_ACTOR_VALID(bLocal_821))
			{
				if (Function_398(bLocal_543, 1, 0x41700000) && Function_398(bLocal_821, 1, 0x41700000))
				{
					if ((IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_821)) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_1034.f_44))
			{
				Function_453();
				Function_557();
				Function_414(Local_1034.f_44);
				Function_450(Local_1034.f_44, &Local_4 + 216);
				Function_449(Local_1034.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_1018))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_1018 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_410, "HOME01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_1018))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1018, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1212, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1212, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1212, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (iLocal_554[3] == 1)
				{
					if (SQUAD_IS_VALID(Local_1034.f_44))
					{
						Function_453();
						Function_557();
						Function_414(Local_1034.f_44);
						Function_450(Local_1034.f_44, &Local_4 + 216);
						Function_449(Local_1034.f_44, 2, 1);
					}
				}
				iLocal_955 = 0;
				if (SQUAD_IS_VALID(Local_1034.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_48);
					Function_448(Local_1034.f_48);
				}
				*(&Local_1034 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_1034.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_52);
					Function_448(Local_1034.f_52);
				}
				Local_1034.f_8 = Local_4.f_1212;
				GET_OBJECT_POSITION(Local_4.f_1212, &uLocal_928);
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_56);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_652, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				}
				Function_556();
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_219(&bLocal_545);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_271(&bLocal_545) <= 3.0f)
			{
				Function_555();
				Function_219(&bLocal_545);
				iLocal_540 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_393("home01_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				if (iLocal_955)
				{
					Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_441(StackVal, &bLocal_551, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1212, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1212, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1212, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
				if (((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_56)) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_48) != 0) && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							DESTROY_OBJECT(bLocal_882);
						}
						Function_443(Local_1034.f_44);
						Function_443(Local_1034.f_48);
						Function_443(Local_1034.f_52);
						Function_443(Local_1034.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 106;
					}
				}
			}
			if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
			{
				if (SQUAD_GET_SIZE(Local_1034.f_48) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
					{
						if (Function_271(&bLocal_548) <= 15.0f)
						{
							Function_487();
							Function_219(&bLocal_548);
						}
					}
				}
				else if (iLocal_955)
				{
					if (SQUAD_GET_SIZE(Local_1034.f_48) > 2)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
						{
							if (Function_271(&bLocal_548) <= 15.0f)
							{
								Function_486();
								Function_219(&bLocal_548);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_1034.f_56))
			{
				bLocal_788 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56);
				Function_378(Local_411, bLocal_788);
			}
			PRINTINT(bLocal_788);
			PRINTNL();
			bLocal_789 = (15 - bLocal_788);
			PRINTINT(bLocal_789);
			PRINTNL();
			bLocal_777 = Local_1034.f_76;
			Global_34165.f_124 = bLocal_777;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_778 = Local_1034.f_80;
			Global_34165.f_128 = bLocal_778;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			if (IS_ACTOR_VALID(bLocal_543))
			{
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bLocal_543, false);
			}
			Function_553();
			iLocal_554[4] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = 5;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_553() //Position: 0x273E6 / 160742
{
	Function_554();
	if (SQUAD_IS_VALID(bLocal_1012))
	{
		Function_183(&bLocal_1012, 0, 0);
		RELEASE_OBJECT_REF(bLocal_1012);
	}
	return;
}

void Function_554() //Position: 0x27406 / 160774
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_821);
	Function_215(3, 1, 0, 1, 1);
	return;
}

void Function_555() //Position: 0x2741C / 160796
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_MoveHerdAcrsRiver", "Home01_MoveHerdAcrsRiver", 3, 3, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_556() //Position: 0x27476 / 160886
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home01_saysGoodbye_v1_AA", "Home01_saysGoodbye_v1_AA", false, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_saysGoodbye_v1_AB", "Home01_saysGoodbye_v1_AB", true, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_3090", "", false, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home01_saysGoodbye_v1_AC", "Home01_saysGoodbye_v1_AC", false, 3, 1, 0, 1);
		Function_395(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_557() //Position: 0x2756C / 161132
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_558() //Position: 0x27594 / 161172
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 924)[5];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	cLocal_987[0] = 977;
	uLocal_885[0] = (*&Local_4 + 924)[6];
	if (!SQUAD_IS_VALID(bLocal_1012))
	{
		bLocal_1012 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE02"));
		if (SQUAD_IS_VALID(bLocal_1012))
		{
			SQUAD_GOALS_CLEAR(bLocal_1012);
			Function_342(bLocal_1012, &bLocal_824, &uLocal_885, &cLocal_987, "SHORSE02", 1);
			Function_341(bLocal_1012, 0);
			Function_340(bLocal_1012, 3);
			Function_339(bLocal_1012, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1012, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_559();
	return;
}

void Function_559() //Position: 0x276BD / 161469
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1564;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1208, &iLocal_980, 5, 3.0f, 4,5f, 1,5f, 0);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_648, -1.0f);
		}
	}
	return;
}

void Function_560() //Position: 0x2779A / 161690
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 10)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_379(Global_34573, bLocal_543, 36.0f))
						{
							Function_561();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_792++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000003:
				Function_459(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000004:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_561() //Position: 0x27856 / 161878
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_RoundStragglersAftr_v1_AA", "Home01_RoundStragglersAftr_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_RoundStragglersAftr_v1_AB", "Home01_RoundStragglersAftr_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_510", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_RoundStragglersAftr_v1_AC", "Home01_RoundStragglersAftr_v1_AC", 3, 2, 1, 0, 1);
		Function_395(11);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_562() //Position: 0x2797C / 162172
{
	if (SQUAD_IS_VALID(Local_1034.f_44))
	{
		switch (iLocal_779)
		{
			case 0x00000000:
				iLocal_779++;
				break;
			
			case 0x00000001:
				if (IS_VOLUME_VALID(Local_4.f_700))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_700) || IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_700))
						{
							iLocal_779++;
						}
					}
				}
				break;
			
			case 0x00000002:
				iLocal_779++;
				break;
			
			case 0x00000003:
				iLocal_779++;
				break;
			}
	}
	return;
}

void Function_563() //Position: 0x27A0B / 162315
{
	if (IS_ACTOR_VALID(bLocal_821))
	{
		switch (iLocal_775)
		{
			case 0x00000000:
				Function_219(&bLocal_863);
				iLocal_775++;
				break;
			
			case 0x00000001:
				Function_226(3, 0, 1);
				MEMORY_PREFER_RIDING(bLocal_821, true);
				CLEAR_ACTOR_MAX_SPEED(bLocal_821);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_821, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_821, true);
				Function_219(&bLocal_863);
				iLocal_775++;
				break;
			
			case 0x00000002:
				if (Function_271(&bLocal_863) <= 6,5f)
				{
					SET_ANIM_SET_FOR_ACTOR(bLocal_821, "wave_goodbye", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_821, "wave_goodbye/left_hand");
					Function_219(&bLocal_863);
					iLocal_775++;
				}
				break;
			
			case 0x00000003:
				if (Function_271(&bLocal_863) <= 2,5f)
				{
					GET_OBJECT_POSITION((*&Local_4 + 924)[2], &uLocal_916);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_GO_NEAR_COORD(false, &uLocal_916, 10.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_821, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_821, true);
					Function_219(&bLocal_863);
					iLocal_775++;
				}
				break;
			
			case 0x00000004:
				if (Function_271(&bLocal_863) <= 6.0f)
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_821, 1);
					Function_219(&bLocal_863);
					iLocal_775++;
				}
				break;
			
			case 0x00000005:
				if (!Function_379(Global_34573, bLocal_821, 150.0f))
				{
					Function_554();
					iLocal_775++;
				}
				break;
			
			case 0x00000006:
				iLocal_775++;
				break;
			}
	}
	return;
}

void Function_564(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x27BBD / 162749
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		switch (iLocal_776)
		{
			case 0x00000000:
				iLocal_776++;
				break;
			
			case 0x00000001:
				Function_226(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(bLocal_543);
				CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
				MEMORY_PREFER_RIDING(bLocal_543, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bLocal_543, true);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1564, -20.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				Function_219(&bLocal_875);
				iLocal_776++;
				break;
			
			case 0x00000002:
				if (Function_271(bParam1) <= fParam2)
				{
					if (SQUAD_IS_VALID(bParam0))
					{
						if (SQUAD_GET_SIZE(bParam0) > 2)
						{
							if (!iLocal_955)
							{
								bLocal_837 = Function_474(StackVal, bParam0);
								if (IS_ACTOR_VALID(bLocal_837))
								{
									vLocal_922 = { 0.0f, 0.0f, 0.0f };
									bLocal_772 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, bLocal_837, &vLocal_922, 0, 0, 0, 0, 0, 0, 1);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
									TASK_SEQUENCE_RELEASE(bLocal_772, 1);
									TASK_PRIORITY_SET(bLocal_543, true);
									iLocal_955 = 1;
								}
							}
							else if (!Function_467(bLocal_837, bParam0, 0))
							{
								iLocal_955 = 0;
							}
						}
						else if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
						{
							bLocal_772 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
							TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
							TASK_SEQUENCE_RELEASE(bLocal_772, 1);
							TASK_PRIORITY_SET(bLocal_543, true);
							iLocal_955 = 0;
						}
					}
					Function_219(bParam1);
				}
				if (IS_VOLUME_VALID(Local_4.f_700))
				{
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_700))
						{
							iLocal_776++;
						}
					}
				}
				if (Function_271(&bLocal_875) <= 20.0f)
				{
					AI_GOAL_LOOK_AT_COORD_NEW(bLocal_543, &Local_1034 + 16, 4.0f);
					SET_ANIM_SET_FOR_ACTOR(bLocal_543, "home01_look_back", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_543, "home01_look_back");
					Function_219(&bLocal_875);
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION((*&Local_4 + 960)[3], &vLocal_922);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vLocal_922, 2.0f, 4);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				iLocal_776++;
				break;
			
			case 0x00000004:
				iLocal_776++;
				break;
			}
	}
}

void Function_565() //Position: 0x27E3F / 163391
{
	if (!iLocal_957)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30668[0]))
			{
				Function_593(&uLocal_796);
			}
			else
			{
				iLocal_773 = 0;
				iLocal_957 = 0;
			}
		}
	}
	Function_365(bLocal_410);
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		Function_483(Local_1034.f_44, Local_1034.f_56, Local_4.f_592);
		Function_482(&Local_1034);
		if (iLocal_956)
		{
			Function_496(&Local_1034);
			Function_495(&Local_1034);
			Function_494(&Local_1034, 0x41700000);
			if (Function_271(&bLocal_854) <= 0,2f)
			{
				Function_592(Local_1034.f_48, &bLocal_857, 3.0f, Local_4.f_1560, -20.0f);
				Function_472(&Local_1034);
				Function_219(&bLocal_854);
			}
			Function_471();
		}
		if (iLocal_540 < 8)
		{
			if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_820))
			{
				if (IS_VOLUME_VALID(Local_4.f_688))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_688) || Function_379(Global_34573, bLocal_820, 24.0f))
					{
						iLocal_958 = 1;
						Function_243();
						Function_219(&bLocal_545);
						Function_219(&bLocal_548);
						iLocal_540 = 9;
					}
				}
			}
		}
		Function_469(Global_34573);
		Function_591();
		Function_585();
		Function_584();
		Function_583();
		Function_572();
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(39);
			if (iLocal_554[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_359("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30668[0];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 888)[0], 1, 1, 1);
				iLocal_793 = 0;
				iLocal_795 = 0;
				if (IS_ACTOR_VALID(bLocal_544))
				{
					TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_544, true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (IS_ACTOR_VALID(bLocal_821))
				{
					TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_821, true);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_794 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = Function_343(Local_411);
				PRINTINT(bLocal_788);
				PRINTNL();
				bLocal_789 = (15 - bLocal_788);
				PRINTINT(bLocal_789);
				PRINTNL();
				bLocal_777 = Global_34165.f_124;
				bLocal_778 = Global_34165.f_128;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_1034.f_76 = bLocal_777;
				Local_1034.f_80 = bLocal_778;
				Function_570();
				if (iLocal_554[2] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 888)[4], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							Function_348(bLocal_822[0], (*&Local_4 + 888)[5], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_821))
					{
						if (IS_ACTOR_VALID(bLocal_824[0]))
						{
							Function_348(bLocal_824[0], (*&Local_4 + 888)[6], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_821) && !IS_ACTOR_MOUNTED(bLocal_824[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_821, bLocal_824[0]);
							}
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_820))
				{
					Function_348(bLocal_820, (*&Local_4 + 832)[2], 1, 1, 1);
				}
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					Function_415(Local_1034.f_56, Local_1034.f_44);
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_44);
					Function_414(Local_1034.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_644, -1.0f);
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), bLocal_820, "Drew", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), bLocal_821, "RanchersDaughter", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[517]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[617]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[717]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_408(&(Local_611[117]), 1024, 1);
				Function_408(&(Local_611[317]), 1024, 1);
				Function_454(&(Local_611[417]), 2);
				Function_454(&(Local_611[517]), 2);
				Function_454(&(Local_611[617]), 2);
				Function_454(&(Local_611[717]), 2);
				if (HUD_IS_FADED())
				{
					Function_219(&bLocal_545);
					iLocal_540 = 5;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 6;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30628[2], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543) && IS_ACTOR_VALID(bLocal_821))
			{
				if (Function_398(bLocal_543, 1, 0x41700000) && Function_398(bLocal_821, 1, 0x41700000))
				{
					if ((IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_821)) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_1034.f_44))
			{
				Function_453();
				Function_569();
				Function_414(Local_1034.f_44);
				Function_450(Local_1034.f_44, &Local_4 + 180);
				Function_449(Local_1034.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_1018))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_1018 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_410, "HOME01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_1018))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1018, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1208, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1208, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1208, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (IS_ACTOR_VALID(bLocal_821))
				{
					Function_226(3, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_821, true);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(false, &Local_1034 + 16, 0);
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1548, (20.0f - 1.0f), 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_821, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_821, true);
				}
				if (iLocal_554[2] == 1)
				{
					if (SQUAD_IS_VALID(Local_1034.f_44))
					{
						Function_453();
						Function_569();
						Function_414(Local_1034.f_44);
						Function_450(Local_1034.f_44, &Local_4 + 180);
						Function_449(Local_1034.f_44, 2, 1);
					}
				}
				iLocal_955 = 0;
				if (SQUAD_IS_VALID(Local_1034.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_48);
					Function_448(Local_1034.f_48);
				}
				*(&Local_1034 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_1034.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_52);
					Function_448(Local_1034.f_52);
				}
				Local_1034.f_8 = Local_4.f_1208;
				GET_OBJECT_POSITION(Local_4.f_1208, &uLocal_928);
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_56);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_648, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				}
				Function_568();
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_271(&bLocal_545) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_393("home01_obj04", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				if (iLocal_955)
				{
					Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_441(StackVal, &bLocal_551, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1208, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1208, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1208, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
			}
			break;
		
		case 0x00000009:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				if (iLocal_955)
				{
					Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_441(StackVal, &bLocal_551, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1208, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1208, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1208, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
				if ((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0) && SQUAD_GET_SIZE(Local_1034.f_48) >= 3)
					{
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 10;
					}
				}
				if (((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_56)) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_48) != 0) && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							DESTROY_OBJECT(bLocal_882);
						}
						Function_443(Local_1034.f_44);
						Function_443(Local_1034.f_48);
						Function_443(Local_1034.f_52);
						Function_443(Local_1034.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 12;
					}
				}
			}
			if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
			{
				if (SQUAD_GET_SIZE(Local_1034.f_48) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
					{
						if (Function_271(&bLocal_548) <= 15.0f)
						{
							Function_487();
							Function_219(&bLocal_548);
						}
					}
				}
				else if (iLocal_955)
				{
					if (SQUAD_GET_SIZE(Local_1034.f_48) > 2)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
						{
							if (Function_271(&bLocal_548) <= 15.0f)
							{
								Function_486();
								Function_219(&bLocal_548);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (SQUAD_GET_SIZE(Local_1034.f_48) == 1)
			{
				Function_393("home01_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0);
			}
			else
			{
				Function_393("home01_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0);
			}
			Function_219(&bLocal_545);
			Function_219(&bLocal_548);
			Function_219(&bLocal_551);
			iLocal_540 = 11;
			break;
		
		case 0x0000000B:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				Function_441(StackVal, &bLocal_551, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1208, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1208, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1208, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
				if (SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48))
				{
					if (SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_48) != 0)
					{
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 9;
					}
				}
			}
			if (!fLocal_959[0])
			{
				if ((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0) && SQUAD_GET_SIZE(Local_1034.f_48) >= 3)
					{
						if (IS_ACTOR_VALID(bLocal_543))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 24.0f))
							{
								fLocal_959[0] = 1;
								Function_567();
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_271(&bLocal_545) <= 6.0f)
			{
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			else if (!IS_SCRIPTED_SPEECH_PLAYING(bLocal_543) || Function_271(&bLocal_545) <= 6.0f)
			{
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_1034.f_56))
			{
				bLocal_788 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56);
				Function_378(Local_411, bLocal_788);
			}
			PRINTINT(bLocal_788);
			PRINTNL();
			bLocal_789 = (15 - bLocal_788);
			PRINTINT(bLocal_789);
			PRINTNL();
			bLocal_777 = Local_1034.f_76;
			Global_34165.f_124 = bLocal_777;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_778 = Local_1034.f_80;
			Global_34165.f_128 = bLocal_778;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_566();
			iLocal_554[3] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = 4;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_566() //Position: 0x28FA5 / 167845
{
	if (IS_ACTOR_VALID(bLocal_820))
	{
		RELEASE_ACTOR(bLocal_820);
	}
	if (SQUAD_IS_VALID(Local_4.f_112))
	{
		Function_222(&Global_6563, &Global_7581, Local_4.f_112, 0);
		RELEASE_OBJECT_REF(Local_4.f_112);
	}
	return;
}

void Function_567() //Position: 0x28FD9 / 167897
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_GetLastStraggler", "Home01_GetLastStraggler", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x29031 / 167985
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_Head4River", "Home01_Head4River", 3, 3, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_569() //Position: 0x2907D / 168061
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_570() //Position: 0x290A5 / 168101
{
	vector3 vVar0;
	vector3 vVar3;
	
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 888)[5];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	cLocal_987[0] = 977;
	uLocal_885[0] = (*&Local_4 + 888)[6];
	if (!SQUAD_IS_VALID(bLocal_1012))
	{
		bLocal_1012 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE02"));
		if (SQUAD_IS_VALID(bLocal_1012))
		{
			SQUAD_GOALS_CLEAR(bLocal_1012);
			Function_342(bLocal_1012, &bLocal_824, &uLocal_885, &cLocal_987, "SHORSE02", 1);
			Function_341(bLocal_1012, 0);
			Function_340(bLocal_1012, 3);
			Function_339(bLocal_1012, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1012, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_820))
	{
		GET_OBJECT_POSITION((*&Local_4 + 832)[2], &vVar0);
		GET_OBJECT_ORIENTATION((*&Local_4 + 832)[2], &vVar3);
		bLocal_820 = CREATE_ACTOR_IN_LAYOUT(bLocal_410, "HOME01_DREW_MAC", 608, vVar0, vVar3);
		if (IS_ACTOR_VALID(bLocal_820))
		{
			SET_ACTOR_FACTION(bLocal_820, 20);
			SET_ACTOR_HEALTH(bLocal_820, GET_ACTOR_MAX_HEALTH(bLocal_543));
			Function_288(bLocal_820, 0, 0, 0, 1, 0, 1);
			TASK_STAND_STILL(bLocal_820, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_820, true);
		}
	}
	Function_571();
	return;
}

void Function_571() //Position: 0x29259 / 168537
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1560;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1204, &iLocal_980, 5, 1.0f, 4,5f, 1,5f, 0);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_644, -1.0f);
		}
	}
	return;
}

void Function_572() //Position: 0x29336 / 168758
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_379(Global_34573, bLocal_821, 24.0f))
						{
							Function_582();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_792++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000003:
				Function_578(1, 0, 1, 0x42340000, 0x41f00000);
				if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_820))
				{
					if (IS_VOLUME_VALID(Local_4.f_688))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_688) || Function_379(Global_34573, bLocal_820, 24.0f))
						{
							ABORT_SCRIPTED_CONVERSATION(0);
							iLocal_792++;
						}
					}
				}
				break;
			
			case 0x00000004:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_577();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000005:
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_792++;
				}
				break;
			
			case 0x00000006:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_379(Global_34573, bLocal_821, 24.0f))
					{
						if (bLocal_791 == 0)
						{
							Function_576();
						}
						else if (bLocal_791 == 1)
						{
							Function_575();
						}
						else if (bLocal_791 == 2)
						{
							Function_574();
						}
						else if (bLocal_791 == 3)
						{
							Function_573();
						}
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000007:
				Function_578(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000008:
				Function_578(1, 1, 1, 0x42340000, 0x41f00000);
				if (Function_271(&bLocal_548) <= 5.0f)
				{
					Function_219(&bLocal_548);
					iLocal_792++;
				}
				break;
			
			case 0x00000009:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_379(Global_34573, bLocal_821, 24.0f))
					{
						if (bLocal_791 == 0)
						{
							Function_575();
						}
						else if (bLocal_791 == 1)
						{
							Function_574();
						}
						else if (bLocal_791 == 2)
						{
							Function_573();
						}
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x0000000A:
				Function_578(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792++;
					}
				}
				break;
			
			case 0x0000000B:
				Function_578(1, 1, 1, 0x42340000, 0x41f00000);
				if (Function_271(&bLocal_548) <= 5.0f)
				{
					Function_219(&bLocal_548);
					iLocal_792++;
				}
				break;
			
			case 0x0000000C:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_379(Global_34573, bLocal_821, 24.0f))
					{
						if (bLocal_791 == 0)
						{
							Function_574();
						}
						else if (bLocal_791 == 1)
						{
							Function_573();
						}
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x0000000D:
				Function_578(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792++;
					}
				}
				break;
			
			case 0x0000000E:
				Function_578(1, 1, 1, 0x42340000, 0x41f00000);
				if (Function_271(&bLocal_548) <= 5.0f)
				{
					Function_219(&bLocal_548);
					iLocal_792++;
				}
				break;
			
			case 0x0000000F:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_379(Global_34573, bLocal_821, 24.0f))
					{
						if (bLocal_791 == 0)
						{
							Function_573();
						}
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000010:
				Function_578(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000011:
				Function_578(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000012:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_573() //Position: 0x29738 / 169784
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_herdBanter_v4_AA", "Home01_herdBanter_v4_AA", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home01_herdBanter_v4_AB", "Home01_herdBanter_v4_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_herdBanter_v4_AC", "Home01_herdBanter_v4_AC", true, 2, 1, 0, 1);
		Function_395(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_574() //Position: 0x29809 / 169993
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home01_herdBanter_v3_AA", "Home01_herdBanter_v3_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_herdBanter_v3_AB", "Home01_herdBanter_v3_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home01_herdBanter_v3_AC", "Home01_herdBanter_v3_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_herdBanter_v3_AD", "Home01_herdBanter_v3_AD", true, 2, 1, 0, 1);
		Function_395(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_575() //Position: 0x29917 / 170263
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home01_herdBanter_v2_AA", "Home01_herdBanter_v2_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_herdBanter_v2_AB", "Home01_herdBanter_v2_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_herdBanter_v2_AC", "Home01_herdBanter_v2_AC", true, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_herdBanter_v2_AD", "Home01_herdBanter_v2_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home01_herdBanter_v2_AE", "Home01_herdBanter_v2_AE", false, 2, 1, 0, 1);
		Function_395(11);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_576() //Position: 0x29A63 / 170595
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home01_herdBanter_v1_AA", "Home01_herdBanter_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_herdBanter_v1_AB", "Home01_herdBanter_v1_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home01_herdBanter_v1_AC", "Home01_herdBanter_v1_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_herdBanter_v1_AD", "Home01_herdBanter_v1_AD", true, 2, 1, 0, 1);
		Function_395(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_577() //Position: 0x29B71 / 170865
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Home01_drewWaves_v1_AA", "Home01_drewWaves_v1_AA", false, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Home01_drewWaves_v1_AB", "Home01_drewWaves_v1_AB", false, 3, 1, 0, 1);
		Function_395(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_578(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x29C01 / 171009
{
	if (Function_271(&bLocal_869) <= 6.0f)
	{
		Function_579();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_968)
				{
					iLocal_968 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonGetsOfHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
				else if (Function_271(&bLocal_548) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonNoGetOnHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_968)
				{
					iLocal_968 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_544, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam0)
			{
				if (!iLocal_966)
				{
					if (!bLocal_967)
					{
						if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_931))
						{
							if (VMAG(vLocal_931) >= 0.0f)
							{
								bLocal_967 = true;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonStopsHorse", "Home01_JonStopsHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_219(&bLocal_869);
							}
						}
					}
				}
			}
			if (bParam0)
			{
				if (bLocal_967)
				{
					if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_931))
					{
						if (VMAG(vLocal_931) <= (0.0f + 2.0f))
						{
							bLocal_967 = false;
						}
					}
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_543))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 1,35f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam2)
			{
				Function_239(Local_1034.f_44);
				if (!Function_462(StackVal, StackVal, StackVal, Function_239(Local_1034.f_44), 135.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_MovesHerdWronDir", "Home01_MovesHerdWronDir", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
				if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if (SQUAD_GET_SIZE(Local_1034.f_52) <= 3 || SQUAD_GET_SIZE(Local_1034.f_48) <= 3)
					{
						if (IS_ACTOR_VALID(bLocal_543))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonBadHerd", "Home01_JonBadHerd", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_219(&bLocal_869);
							}
						}
					}
				}
			}
			if (bParam1)
			{
				if (!Function_382(StackVal, Global_34573, bParam3) && !Function_379(Global_34573, bLocal_821, bParam3))
				{
					if (!iLocal_966)
					{
						iLocal_966 = 1;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_461();
						Function_219(&bLocal_869);
					}
				}
			}
			if (StackVal && Function_382(ACTORS_IN_RANGE(Global_34573, bLocal_821, bParam4), Global_34573, bParam4))
			{
				if (bParam1)
				{
					if (iLocal_966)
					{
						iLocal_966 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_460();
						Function_219(&bLocal_869);
					}
				}
			}
		}
	}
}

void Function_579() //Position: 0x29FF7 / 172023
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_543)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (bVar0 == bLocal_821)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_581();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_581();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_581();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_assaultsBonnie", "Home01_assaultsBonnie", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (bVar0 == bLocal_822[0])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if ((Function_467(bVar0, Local_1034.f_44, 0) || Function_467(bVar0, Local_1034.f_52, 0)) || Function_467(bVar0, Local_1034.f_48, 0))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_466();
						Function_219(&bLocal_869);
					}
					else if (GET_WEAPON_IN_HAND(Global_34573) != 21 || GET_WEAPON_IN_HAND(Global_34573) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonLassosCow", "Home01_JonLassosCow", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_580();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_580();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_assaultsChar", "Home01_assaultsChar", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (IS_ACTOR_HUMAN(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_580();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_580();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_580();
					Function_219(&bLocal_869);
				}
			}
			else if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnChar", "Home01_GunOnChar", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
			}
		}
	}
	return;
}

void Function_580() //Position: 0x2A43A / 173114
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home01_assaultsChar", "Home01_assaultsChar", false, 1, 0, 0, 1);
		Function_395(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581() //Position: 0x2A489 / 173193
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home01_assaultsBonnie", "Home01_assaultsBonnie", false, 1, 0, 0, 1);
		Function_395(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_582() //Position: 0x2A4DC / 173276
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home01_bonnieHelp", "Home01_bonnieHelp", false, 1, 1, 0, 1);
		Function_395(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_583() //Position: 0x2A527 / 173351
{
	if (IS_ACTOR_VALID((*&Local_4 + 92)[12]))
	{
		switch (iLocal_782)
		{
			case 0x00000000:
				iLocal_782++;
				break;
			
			case 0x00000001:
				TASK_CLEAR((*&Local_4 + 92)[12]);
				GET_OBJECT_POSITION(Local_4.f_1296, &uLocal_940);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uLocal_940, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 92)[12], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET((*&Local_4 + 92)[12], true);
				iLocal_782++;
				break;
			
			case 0x00000002:
				if (Function_382((*&Local_4 + 92)[12], Local_4.f_1296, 3.0f))
				{
					TASK_CLEAR((*&Local_4 + 92)[12]);
					iLocal_782++;
				}
				break;
			
			case 0x00000003:
				if (!Function_379(Global_34573, (*&Local_4 + 92)[12], 150.0f))
				{
					if (SQUAD_IS_VALID(Local_4.f_112))
					{
						Function_222(&Global_6563, &Global_7581, Local_4.f_112, 0);
						RELEASE_OBJECT_REF(Local_4.f_112);
					}
					iLocal_782++;
				}
				break;
			
			case 0x00000004:
				iLocal_782++;
				break;
			}
	}
	return;
}

void Function_584() //Position: 0x2A636 / 173622
{
	if (IS_ACTOR_VALID((*&Local_4 + 92)[02]))
	{
		switch (iLocal_781)
		{
			case 0x00000000:
				iLocal_781++;
				break;
			
			case 0x00000001:
				TASK_CLEAR((*&Local_4 + 92)[02]);
				GET_OBJECT_POSITION(Local_4.f_1296, &uLocal_937);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uLocal_937, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 92)[02], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET((*&Local_4 + 92)[02], true);
				iLocal_781++;
				break;
			
			case 0x00000002:
				if (Function_382((*&Local_4 + 92)[02], Local_4.f_1288, 3.0f))
				{
					TASK_CLEAR((*&Local_4 + 92)[02]);
					iLocal_781++;
				}
				break;
			
			case 0x00000003:
				if (!Function_379(Global_34573, (*&Local_4 + 92)[02], 150.0f))
				{
					if (SQUAD_IS_VALID(Local_4.f_112))
					{
						Function_222(&Global_6563, &Global_7581, Local_4.f_112, 0);
						RELEASE_OBJECT_REF(Local_4.f_112);
					}
					iLocal_781++;
				}
				break;
			
			case 0x00000004:
				iLocal_781++;
				break;
			}
	}
	return;
}

void Function_585() //Position: 0x2A745 / 173893
{
	switch (iLocal_794)
	{
		case 0x00000000:
			iLocal_794++;
			break;
		
		case 0x00000001:
			if (Function_375(Global_30668[0]))
			{
				if (!SQUAD_IS_VALID(Local_4.f_112))
				{
					Function_586();
					if (SQUAD_IS_VALID(Local_4.f_112))
					{
						Function_341(Local_4.f_112, 0);
						SQUAD_SET_FACTION(Local_4.f_112, 20);
						Function_339(Local_4.f_112, 0, 0, 0);
						if (IS_ACTOR_VALID((*&Local_4 + 92)[02]))
						{
							SNAP_ACTOR_TO_GRINGO((*&Local_4 + 92)[02], Local_4.f_1512, "UseCase1", true, 0, 0);
							TASK_USE_GRINGO((*&Local_4 + 92)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1512), "UseCase1", 4294967295, 1);
							TASK_PRIORITY_SET((*&Local_4 + 92)[02], true);
						}
						if (IS_ACTOR_VALID((*&Local_4 + 92)[12]))
						{
							SNAP_ACTOR_TO_GRINGO((*&Local_4 + 92)[12], Local_4.f_1516, "UseCase1", true, 0, 0);
							TASK_USE_GRINGO((*&Local_4 + 92)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1516), "UseCase1", 4294967295, 1);
							TASK_PRIORITY_SET((*&Local_4 + 92)[12], true);
						}
					}
				}
				iLocal_794++;
			}
			break;
		
		case 0x00000002:
			if (bLocal_539 == 0)
			{
				Function_407(&(Local_611[317]), Local_4.f_112, "Rancher", 0, 0x5f5e100, 1);
			}
			else if (bLocal_539 == 1)
			{
				Function_407(&(Local_611[217]), Local_4.f_112, "Rancher", 0, 0x5f5e100, 1);
			}
			else if (bLocal_539 == 2)
			{
				Function_407(&(Local_611[317]), Local_4.f_112, "Rancher", 0, 0x5f5e100, 1);
			}
			iLocal_794++;
			break;
		
		case 0x00000003:
			iLocal_794++;
			break;
	}
	return;
}

void Function_586() //Position: 0x2A8FE / 174334
{
	Local_4.f_112 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RanchHand01"));
	(*&Local_4 + 92)[02] = Function_587(&Global_6563, &Global_7581, 0, -890,6639f, 90,35207f, 2481,14f, 0.0f, 59,68098f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 92)[02], Local_4.f_112);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 92)[02], 4, 0,5f, 1, 1);
	(*&Local_4 + 92)[12] = Function_587(&Global_6563, &Global_7581, 1, -901,6159f, 90,35207f, 2488,269f, 0.0f, -8,843758f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 92)[12], Local_4.f_112);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 92)[12], 4, 0,5f, 1, 1);
	return;
}

var Function_587(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x2A9AE / 174510
{
	var uVar0;
	bool bVar1;
	
	uVar0 = iParam2;
	bVar1 = Function_588(uParam0, uParam1, uVar0, iParam9, 0, 1);
	if (!IS_ACTOR_VALID(bVar1))
	{
		LOG_ERROR("CREATE_ACTOR_AS_REGIONAL got NULL when it tried to steal the character");
		return "";
	}
	PRINTSTRING("Spawning Regional Character at ");
	PRINTVECTOR(vParam3);
	PRINTNL();
	SET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bVar1), vParam3);
	SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar1), vParam6);
	GET_POSITION(bVar1, &vParam3);
	PRINTSTRING("New position is ");
	PRINTVECTOR(vParam3);
	PRINTNL();
	return bVar1;
}

var Function_588(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x2AA95 / 174741
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_177(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_177(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_177(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_174(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_590(StackVal, StackVal, StackVal, Global_6289, Function_53(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_177(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_174(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_174(uParam0[iVar02], 1);
	Function_589(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_589(bool bParam0, bool bParam1) //Position: 0x2AC2B / 175147
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_590(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2ACCD / 175309
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

void Function_591() //Position: 0x2ADE6 / 175590
{
	if (IS_ACTOR_VALID(bLocal_820))
	{
		switch (iLocal_780)
		{
			case 0x00000000:
				iLocal_780++;
				break;
			
			case 0x00000001:
				AI_GOAL_LOOK_AT_ACTOR(bLocal_820, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
				SET_ACTOR_FACE_STYLE(bLocal_820, 0);
				GET_OBJECT_POSITION((*&Local_4 + 888)[3], &uLocal_934);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uLocal_934, 1.0f, true);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_820, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_820, true);
				iLocal_780++;
				break;
			
			case 0x00000002:
				if (iLocal_958)
				{
					iLocal_958 = 0;
					SET_ANIM_SET_FOR_ACTOR(bLocal_820, "wave_goodbye", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_820, "wave_goodbye/right_hand");
					Function_219(&bLocal_860);
					iLocal_780++;
				}
				break;
			
			case 0x00000003:
				if (Function_271(&bLocal_860) <= 5.0f)
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_820, 1);
					Function_219(&bLocal_860);
					iLocal_780++;
				}
				break;
			
			case 0x00000004:
				AI_GOAL_LOOK_CLEAR(bLocal_820);
				GET_OBJECT_POSITION((*&Local_4 + 792)[3], &uLocal_934);
				if (IS_ACTOR_VALID(bLocal_820))
				{
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_GO_NEAR_COORD(false, &uLocal_934, 1.0f, true);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_820, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_820, true);
				}
				iLocal_780++;
				break;
			
			case 0x00000005:
				if (!Function_379(Global_34573, bLocal_820, 150.0f))
				{
					if (IS_ACTOR_VALID(bLocal_820))
					{
						RELEASE_ACTOR(bLocal_820);
					}
					iLocal_780++;
				}
				break;
			
			case 0x00000006:
				iLocal_780++;
				break;
			}
	}
	return;
}

void Function_592(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x2AFB6 / 176054
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		switch (iLocal_776)
		{
			case 0x00000000:
				iLocal_776++;
				break;
			
			case 0x00000001:
				Function_226(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(bLocal_543);
				CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
				MEMORY_PREFER_RIDING(bLocal_543, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1560, -20.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				Function_219(&bLocal_875);
				iLocal_776++;
				break;
			
			case 0x00000002:
				if (Function_271(bParam1) <= fParam2)
				{
					if (SQUAD_IS_VALID(bParam0))
					{
						if (SQUAD_GET_SIZE(bParam0) > 2)
						{
							if (!iLocal_955)
							{
								bLocal_837 = Function_474(StackVal, bParam0);
								if (IS_ACTOR_VALID(bLocal_837))
								{
									vLocal_922 = { 0.0f, 0.0f, 0.0f };
									bLocal_772 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, bLocal_837, &vLocal_922, 0, 0, 0, 0, 0, 0, 1);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
									TASK_SEQUENCE_RELEASE(bLocal_772, 1);
									TASK_PRIORITY_SET(bLocal_543, true);
									iLocal_955 = 1;
								}
							}
							else if (!Function_467(bLocal_837, bParam0, 0))
							{
								iLocal_955 = 0;
							}
						}
						else if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
						{
							bLocal_772 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
							TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
							TASK_SEQUENCE_RELEASE(bLocal_772, 1);
							TASK_PRIORITY_SET(bLocal_543, true);
							iLocal_955 = 0;
						}
					}
					Function_219(bParam1);
				}
				if (IS_VOLUME_VALID(Local_4.f_696))
				{
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_696))
						{
							iLocal_776++;
						}
					}
				}
				if (Function_271(&bLocal_875) <= 20.0f)
				{
					AI_GOAL_LOOK_AT_COORD_NEW(bLocal_543, &Local_1034 + 16, 4.0f);
					SET_ANIM_SET_FOR_ACTOR(bLocal_543, "home01_look_back", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_543, "home01_look_back");
					Function_219(&bLocal_875);
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION((*&Local_4 + 924)[5], &vLocal_922);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vLocal_922, 2.0f, 4);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				iLocal_776++;
				break;
			
			case 0x00000004:
				iLocal_776++;
				break;
			}
	}
}

void Function_593(var uParam0) //Position: 0x2B231 / 176689
{
	switch (iLocal_773)
	{
		case 0x00000000:
			iLocal_773++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID((*uParam0)[0]))
			{
				(*uParam0)[0] = Function_373("hennigansRanch", "stable01", 1);
				if (IS_DOOR_VALID((*uParam0)[0]))
				{
				}
			}
			if (!IS_DOOR_VALID((*uParam0)[1]))
			{
				(*uParam0)[1] = Function_373("hennigansRanch", "stable01", 2);
				if (IS_DOOR_VALID((*uParam0)[1]))
				{
				}
			}
			if (!IS_DOOR_VALID((*uParam0)[2]))
			{
				(*uParam0)[2] = Function_373("hennigansRanch", "stable02", 1);
				if (IS_DOOR_VALID((*uParam0)[2]))
				{
				}
			}
			if (!IS_DOOR_VALID((*uParam0)[3]))
			{
				(*uParam0)[3] = Function_373("hennigansRanch", "stable02", 7);
				if (IS_DOOR_VALID((*uParam0)[3]))
				{
				}
			}
			if (!IS_DOOR_VALID((*uParam0)[4]))
			{
				(*uParam0)[4] = Function_373("hennigansRanch", "stable02", 8);
				if (IS_DOOR_VALID((*uParam0)[4]))
				{
				}
			}
			if (!IS_DOOR_VALID((*uParam0)[5]))
			{
				(*uParam0)[5] = Function_373("hennigansRanch", "stable02", 9);
				if (IS_DOOR_VALID((*uParam0)[5]))
				{
				}
			}
			if (!IS_DOOR_VALID((*uParam0)[6]))
			{
				(*uParam0)[6] = Function_373("hennigansRanch", "stable02", 11);
				if (IS_DOOR_VALID((*uParam0)[6]))
				{
				}
			}
			if (!IS_DOOR_VALID((*uParam0)[7]))
			{
				(*uParam0)[7] = Function_373("hennigansRanch", "stable02", 10);
				if (IS_DOOR_VALID((*uParam0)[7]))
				{
				}
			}
			iLocal_773++;
			break;
		
		case 0x00000002:
			if (IS_DOOR_VALID((*uParam0)[0]))
			{
				Function_154((*uParam0)[0], 0);
				CLOSE_DOOR_FAST((*uParam0)[0]);
			}
			if (IS_DOOR_VALID((*uParam0)[1]))
			{
				Function_154((*uParam0)[1], 0);
				CLOSE_DOOR_FAST((*uParam0)[1]);
			}
			if (IS_DOOR_VALID((*uParam0)[2]))
			{
				Function_154((*uParam0)[2], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[2], true);
			}
			if (IS_DOOR_VALID((*uParam0)[3]))
			{
				Function_154((*uParam0)[3], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[3], false);
			}
			if (IS_DOOR_VALID((*uParam0)[4]))
			{
				Function_154((*uParam0)[4], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[4], false);
			}
			if (IS_DOOR_VALID((*uParam0)[5]))
			{
				Function_154((*uParam0)[5], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[5], true);
			}
			if (IS_DOOR_VALID((*uParam0)[6]))
			{
				Function_154((*uParam0)[6], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[6], true);
			}
			if (IS_DOOR_VALID((*uParam0)[7]))
			{
				Function_154((*uParam0)[7], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[7], false);
			}
			iLocal_773++;
			break;
		
		case 0x00000003:
			iLocal_957 = 1;
			iLocal_773++;
			break;
	}
	return;
}

void Function_594() //Position: 0x2B599 / 177561
{
	if (!iLocal_957)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30668[0]))
			{
				Function_593(&uLocal_796);
			}
			else
			{
				iLocal_773 = 0;
				iLocal_957 = 0;
			}
		}
	}
	Function_365(bLocal_410);
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		if (iLocal_540 > 9)
		{
			Function_483(Local_1034.f_44, Local_1034.f_56, Local_4.f_580);
			Function_482(&Local_1034);
			if (iLocal_956)
			{
				Function_478(&Local_1034, 1);
				Function_477(&Local_1034, 1);
				Function_476(&Local_1034, 1, 0x41700000);
				if (Function_271(&bLocal_854) <= 0,2f)
				{
					Function_472(&Local_1034);
					Function_219(&bLocal_854);
				}
				Function_471();
			}
			Function_469(Global_34573);
		}
		if (IS_DOOR_VALID(uLocal_796[6]) && IS_DOOR_VALID(uLocal_796[7]))
		{
			if (IS_DOOR_CLOSED(uLocal_796[6]) || IS_DOOR_CLOSED(uLocal_796[7]))
			{
				if (IS_ACTOR_VALID(bLocal_543) && IS_ACTOR_VALID(bLocal_821))
				{
					if (IS_VOLUME_VALID(Local_4.f_736))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_736) || IS_ACTOR_IN_VOLUME(bLocal_821, Local_4.f_736))
						{
							OPEN_DOOR_DIRECTION(uLocal_796[6], true);
							OPEN_DOOR_DIRECTION(uLocal_796[7], false);
						}
					}
				}
			}
		}
		Function_585();
		Function_608();
		Function_606();
		Function_603();
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_359("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			if (IS_ACTOR_VALID(bLocal_544))
			{
				TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_544, true);
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_543, true);
			}
			if (IS_ACTOR_VALID(bLocal_820))
			{
				TASK_STAND_STILL(bLocal_820, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_820, true);
			}
			if (Function_349(&Local_411))
			{
				if (IS_ACTOR_VALID(bLocal_821))
				{
					TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_821, true);
				}
			}
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(39);
			if (iLocal_554[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30668[0];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 832)[0], 1, 1, 1);
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_794 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = 15;
				bLocal_789 = false;
				Function_378(Local_411, 15);
				PRINTINT(bLocal_788);
				PRINTNL();
				PRINTINT(bLocal_789);
				PRINTNL();
				Local_1034.f_76 = 0;
				Local_1034.f_80 = 0;
				bLocal_777 = Local_1034.f_76;
				bLocal_778 = Local_1034.f_80;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_778) / TO_FLOAT(bLocal_777)));
				PRINTNL();
				bLocal_777 = Local_1034.f_76;
				Global_34165.f_124 = bLocal_777;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_778 = Local_1034.f_80;
				Global_34165.f_128 = bLocal_778;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_601();
				if (iLocal_554[1] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 832)[6], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							Function_348(bLocal_822[0], (*&Local_4 + 832)[8], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_821))
					{
						if (IS_ACTOR_VALID(bLocal_824[0]))
						{
							Function_348(bLocal_824[0], (*&Local_4 + 832)[10], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_821) && !IS_ACTOR_MOUNTED(bLocal_824[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_821, bLocal_824[0]);
							}
						}
					}
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), bLocal_821, "RanchersDaughter", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[317]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[517]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[617]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_406(&(Local_611[717]));
				Function_408(&(Local_611[217]), 1024, 1);
				Function_454(&(Local_611[317]), 2);
				Function_454(&(Local_611[417]), 2);
				Function_454(&(Local_611[517]), 2);
				Function_454(&(Local_611[617]), 2);
				if (Function_599(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_411, bLocal_539))
				{
					Function_219(&bLocal_545);
					iLocal_540 = 3;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 4;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30628[2], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000003:
			if (Function_274("$/cutscene/HOME01_CS02_C/HOME01_CS02_C", &iLocal_532, &Local_411, &bLocal_539, 88140, 87889, 86965, 86261, 85892, 54790, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(Global_34573))
			{
			}
			if (IS_ACTOR_VALID(bLocal_544))
			{
				SET_ACTOR_HEALTH(bLocal_544, GET_ACTOR_MAX_HEALTH(bLocal_544));
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				SET_ACTOR_HEALTH(bLocal_543, 50.0f);
			}
			if (IS_ACTOR_VALID(bLocal_821))
			{
				SET_ACTOR_HEALTH(bLocal_821, 50.0f);
			}
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 116)[4]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 116)[4]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 116)[4], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 116)[4]);
			if (HUD_IS_FADED())
			{
				Function_219(&bLocal_545);
				iLocal_540 = 5;
			}
			else
			{
				if (IS_ACTOR_VALID(bLocal_543))
				{
					CLEAR_ACTOR_MAX_SPEED(bLocal_543);
					CLEAR_ACTOR_MIN_SPEED(bLocal_543);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
					GET_OBJECT_POSITION(Local_4.f_1200, &vLocal_922);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 832)[9], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(false, &vLocal_922, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (IS_ACTOR_VALID(bLocal_821))
				{
					Function_226(3, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_821, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_821, true);
					GET_OBJECT_POSITION(Local_4.f_1200, &uLocal_916);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(false, &Local_4 + 1484, 0);
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 832)[11], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(false, &vLocal_922, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_821, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_821, true);
					if (IS_ACTOR_VALID(bLocal_824[0]))
					{
						TASK_CLEAR(bLocal_824[0]);
					}
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543) && IS_ACTOR_VALID(bLocal_821))
			{
				if (Function_398(bLocal_543, 1, 0x41700000) && Function_398(bLocal_821, 1, 0x41700000))
				{
					if ((IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_821)) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (IS_ACTOR_VALID(bLocal_543))
				{
					CLEAR_ACTOR_MAX_SPEED(bLocal_543);
					CLEAR_ACTOR_MIN_SPEED(bLocal_543);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
					GET_OBJECT_POSITION(Local_4.f_1200, &vLocal_922);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 832)[9], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(false, &vLocal_922, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (IS_ACTOR_VALID(bLocal_821))
				{
					Function_226(3, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_821, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_821, true);
					GET_OBJECT_POSITION(Local_4.f_1200, &uLocal_916);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(false, &Local_4 + 1484, 0);
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 832)[11], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(false, &uLocal_916, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_821, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_821, true);
					if (IS_ACTOR_VALID(bLocal_824[0]))
					{
						TASK_CLEAR(bLocal_824[0]);
					}
				}
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION((*&Local_4 + 832)[7], &vLocal_910);
					GET_OBJECT_ORIENTATION((*&Local_4 + 832)[7], &vLocal_913);
					bLocal_882 = Function_397(StackVal, StackVal, StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, Global_34573, (3.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_271(&bLocal_545) <= 1.0f)
			{
				Function_393("home01_obj02a", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_385(&bLocal_551, 60.0f, 200.0f, bLocal_821, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_568, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					Function_225(bLocal_882);
				}
				if (!IS_BLIP_VALID(Function_598(3)))
				{
					Function_226(3, 1, 1);
				}
			}
			else if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					Function_225(bLocal_882);
				}
				if (IS_BLIP_VALID(Function_598(3)))
				{
					Function_226(3, 0, 1);
				}
			}
			else
			{
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION((*&Local_4 + 832)[7], &vLocal_910);
					GET_OBJECT_ORIENTATION((*&Local_4 + 832)[7], &vLocal_913);
					bLocal_882 = Function_397(StackVal, StackVal, StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, Global_34573, (3.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					if (GATEWAY_UPDATE(bLocal_882))
					{
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							Function_225(bLocal_882);
						}
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING", 0, 4294967295, 4294967295);
				if (!IS_OBJECT_VALID(bLocal_1018))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_1018 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_410, "HOME01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_1018))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1018, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1200, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1200, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1200, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				GET_OBJECT_POSITION((*&Local_4 + 888)[5], &vLocal_922);
				if (IS_ACTOR_VALID(bLocal_543))
				{
					CLEAR_ACTOR_MAX_SPEED(bLocal_543);
					CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
					Function_226(12, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_543, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
					AI_RIDING_SET_ATTRIBUTE(bLocal_543, 2, 0,15f);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(false, Local_4.f_1596, 2, 1, 1, 1, false);
					TASK_GO_NEAR_COORD(false, &vLocal_922, 1.0f, 2);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (IS_ACTOR_VALID(bLocal_821))
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_821, true);
					Function_226(3, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_821, true);
					GET_OBJECT_POSITION((*&Local_4 + 888)[6], &uLocal_916);
					if (IS_ACTOR_VALID(bLocal_821))
					{
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH(false, Local_4.f_1552, 2, 1, 1, 1, false);
						TASK_GO_NEAR_COORD(false, &uLocal_916, 1.0f, 2);
						TASK_FACE_COORD(false, &Local_1034 + 16, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_821, bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_821, true);
					}
				}
				if (SQUAD_IS_VALID(Local_1034.f_44))
				{
					Function_453();
					Function_597();
					Function_414(Local_1034.f_44);
					Function_450(Local_1034.f_44, &Local_4 + 148);
					Function_449(Local_1034.f_44, 2, 1);
					SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_1034.f_44, Local_1034.f_60, 1, 0,25f, 0,25f);
					_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_1034.f_44, Local_1034.f_60, 0, 16, (4,5f - 0,5f));
					Function_523(Local_4.f_112, 5.0f, 1.0f);
				}
				iLocal_955 = 0;
				if (SQUAD_IS_VALID(Local_1034.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_48);
					Function_448(Local_1034.f_48);
				}
				*(&Local_1034 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_1034.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_52);
					Function_448(Local_1034.f_52);
				}
				Local_1034.f_8 = Local_4.f_1200;
				GET_OBJECT_POSITION(Local_4.f_1200, &uLocal_928);
				if (SQUAD_IS_VALID(Local_1034.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_1034.f_56);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_928, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_644, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				}
				Function_596();
				Function_219(&bLocal_545);
				iLocal_540 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_393("home01_obj03", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					DESTROY_OBJECT(bLocal_882);
				}
				if (iLocal_956)
				{
					Function_442();
				}
			}
			else
			{
				Function_441(StackVal, &bLocal_551, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_568, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_878))
				{
					bLocal_878 = ADD_BLIP_FOR_OBJECT(Local_4.f_1204, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_878))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION(Local_4.f_1204, &vLocal_910);
					GET_OBJECT_ORIENTATION(Local_4.f_1204, &vLocal_913);
					bLocal_882 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
				}
				if (!iLocal_956)
				{
					Function_243();
					Function_440();
				}
				if (((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_56)) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_48) != 0) && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							DESTROY_OBJECT(bLocal_882);
						}
						Function_443(Local_1034.f_44);
						Function_443(Local_1034.f_48);
						Function_443(Local_1034.f_52);
						Function_443(Local_1034.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 106;
					}
				}
				if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if (SQUAD_GET_SIZE(Local_1034.f_48) != 0 && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 36.0f))
						{
							if (Function_271(&bLocal_548) <= 15.0f)
							{
								Function_487();
								Function_219(&bLocal_548);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_1034.f_56))
			{
				bLocal_788 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_1034.f_56);
				Function_378(Local_411, bLocal_788);
			}
			PRINTINT(bLocal_788);
			PRINTNL();
			bLocal_789 = (15 - bLocal_788);
			PRINTINT(bLocal_789);
			PRINTNL();
			bLocal_777 = Local_1034.f_76;
			Global_34165.f_124 = bLocal_777;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_778 = Local_1034.f_80;
			Global_34165.f_128 = bLocal_778;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_595();
			iLocal_554[2] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = 3;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_595() //Position: 0x2C80B / 182283
{
	if (IS_ACTOR_VALID(bLocal_820))
	{
		RELEASE_ACTOR(bLocal_820);
	}
	return;
}

void Function_596() //Position: 0x2C820 / 182304
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_JonBeginsHerdng", "Home01_JonBeginsHerdng", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_597() //Position: 0x2C876 / 182390
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_1034.f_44, Local_1034.f_60, Local_1034.f_12, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

var Function_598(bool bParam0) //Position: 0x2C89E / 182430
{
	return Global_8492[bParam014].f_52;
}

bool Function_599(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2C8AD / 182445
{
	if (Function_600(&iParam0) == iParam7 || Function_405())
	{
		return 1;
	}
	return 0;
}

int Function_600(int iParam0) //Position: 0x2C8CC / 182476
{
	if (Function_349(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_601() //Position: 0x2C8E4 / 182500
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 832)[8];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	cLocal_987[0] = 977;
	uLocal_885[0] = (*&Local_4 + 832)[10];
	if (!SQUAD_IS_VALID(bLocal_1012))
	{
		bLocal_1012 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE02"));
		if (SQUAD_IS_VALID(bLocal_1012))
		{
			SQUAD_GOALS_CLEAR(bLocal_1012);
			Function_342(bLocal_1012, &bLocal_824, &uLocal_885, &cLocal_987, "SHORSE02", 1);
			Function_341(bLocal_1012, 0);
			Function_340(bLocal_1012, 3);
			Function_339(bLocal_1012, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1012, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_602();
	return;
}

void Function_602() //Position: 0x2CA0F / 182799
{
	Function_337();
	Local_1034.f_12 = Local_4.f_1556;
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1196, &iLocal_980, 5, 1.0f, 3.0f, 1,5f, 1);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_640, -1.0f);
		}
	}
	return;
}

void Function_603() //Position: 0x2CAE8 / 183016
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 11)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000002:
				Function_604(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000003:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_604(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2CB6B / 183147
{
	if (Function_271(&bLocal_869) <= 6.0f)
	{
		Function_605();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_968)
				{
					iLocal_968 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonGetsOfHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
				else if (Function_271(&bLocal_548) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonNoGetOnHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_968)
				{
					iLocal_968 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_544, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_543))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 1,35f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam1)
			{
				if (SQUAD_IS_VALID(Local_1034.f_48) && SQUAD_IS_VALID(Local_1034.f_52))
				{
					if (SQUAD_GET_SIZE(Local_1034.f_52) <= 4 || SQUAD_GET_SIZE(Local_1034.f_48) <= 4)
					{
						if (IS_ACTOR_VALID(bLocal_543))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonBadHerd", "Home01_JonBadHerd", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_219(&bLocal_869);
							}
						}
					}
				}
			}
			if (bParam2)
			{
				if (!Function_382(StackVal, Global_34573, bParam3) && !ACTORS_IN_RANGE(Global_34573, bLocal_821, bParam3))
				{
					if (!iLocal_966)
					{
						iLocal_966 = 1;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_461();
						Function_219(&bLocal_869);
					}
				}
			}
			if (StackVal && Function_382(ACTORS_IN_RANGE(Global_34573, bLocal_821, bParam4), Global_34573, bParam4))
			{
				if (bParam2)
				{
					if (iLocal_966)
					{
						iLocal_966 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_460();
						Function_219(&bLocal_869);
					}
				}
			}
		}
	}
}

void Function_605() //Position: 0x2CE56 / 183894
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_543)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (bVar0 == bLocal_821)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_581();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_581();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_581();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_assaultsBonnie", "Home01_assaultsBonnie", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (bVar0 == bLocal_822[0])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if ((Function_467(bVar0, Local_1034.f_44, 0) || Function_467(bVar0, Local_1034.f_52, 0)) || Function_467(bVar0, Local_1034.f_48, 0))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_466();
						Function_219(&bLocal_869);
					}
					else if (GET_WEAPON_IN_HAND(Global_34573) != 21 || GET_WEAPON_IN_HAND(Global_34573) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonLassosCow", "Home01_JonLassosCow", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
		}
		else if (IS_ACTOR_HUMAN(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
					}
				}
			}
			else if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnChar", "Home01_GunOnChar", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
			}
		}
	}
	return;
}

void Function_606() //Position: 0x2D1FD / 184829
{
	if (IS_ACTOR_VALID((*&Local_4 + 92)[12]))
	{
		switch (iLocal_782)
		{
			case 0x00000000:
				iLocal_782++;
				break;
			
			case 0x00000001:
				MAKE_ACTOR_READY_FOR_ACTION((*&Local_4 + 92)[12], 1);
				GET_OBJECT_POSITION((*&Local_4 + 832)[5], &uLocal_940);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uLocal_940, 1);
				TASK_FACE_COORD(false, &Local_4 + 1304, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 92)[12], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET((*&Local_4 + 92)[12], true);
				iLocal_782++;
				break;
			
			case 0x00000002:
				if (iLocal_540 > 9)
				{
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(false, &Local_4 + 1304, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 92)[12], bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET((*&Local_4 + 92)[12], true);
					iLocal_782++;
				}
				break;
			
			case 0x00000003:
				if (GET_TASK_STATUS((*&Local_4 + 92)[12], 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 92)[12], "guide_herd", 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 92)[12], "guide_herd/start");
					iLocal_782++;
				}
				break;
			
			case 0x00000004:
				if (iLocal_540 > 11)
				{
					if ((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
					{
						if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_48) != 0) && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
						{
							iLocal_782 = 5;
						}
						else if ((!Function_607(Local_1034.f_44, Local_4.f_680) && !Function_607(Local_1034.f_48, Local_4.f_680)) && !Function_607(Local_1034.f_52, Local_4.f_680))
						{
							if (IS_ACTION_NODE_PLAYING((*&Local_4 + 92)[12], "guide_herd/start"))
							{
								RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 92)[12], 1);
							}
						}
						else if (!IS_ACTION_NODE_PLAYING((*&Local_4 + 92)[12], "guide_herd/start"))
						{
							SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 92)[12], "guide_herd", 0);
							SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 92)[12], "guide_herd/start");
						}
					}
				}
				break;
			
			case 0x00000005:
				TASK_CLEAR((*&Local_4 + 92)[12]);
				RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 92)[12], 1);
				GET_OBJECT_POSITION(Local_4.f_1292, &uLocal_940);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uLocal_940, 1);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 92)[12], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET((*&Local_4 + 92)[12], true);
				iLocal_782++;
				break;
			
			case 0x00000006:
				iLocal_782++;
				break;
			}
	}
	return;
}

bool Function_607(bool bParam0, bool bParam1) //Position: 0x2D4CD / 185549
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_608() //Position: 0x2D54F / 185679
{
	if (IS_ACTOR_VALID((*&Local_4 + 92)[02]))
	{
		switch (iLocal_781)
		{
			case 0x00000000:
				iLocal_781++;
				break;
			
			case 0x00000001:
				MAKE_ACTOR_READY_FOR_ACTION((*&Local_4 + 92)[02], 1);
				GET_OBJECT_POSITION((*&Local_4 + 832)[4], &uLocal_937);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uLocal_937, 1);
				TASK_FACE_COORD(false, &Local_4 + 1304, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 92)[02], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET((*&Local_4 + 92)[02], true);
				iLocal_781++;
				break;
			
			case 0x00000002:
				if (iLocal_540 > 9)
				{
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(false, &Local_4 + 1304, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 92)[02], bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET((*&Local_4 + 92)[02], true);
					iLocal_781++;
				}
				break;
			
			case 0x00000003:
				if (GET_TASK_STATUS((*&Local_4 + 92)[02], 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 92)[02], "guide_herd", 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 92)[02], "guide_herd/start");
					iLocal_781++;
				}
				break;
			
			case 0x00000004:
				if (iLocal_540 > 11)
				{
					if ((SQUAD_IS_VALID(Local_1034.f_44) && SQUAD_IS_VALID(Local_1034.f_48)) && SQUAD_IS_VALID(Local_1034.f_52))
					{
						if ((SQUAD_GET_SIZE(Local_1034.f_44) != 0 && SQUAD_GET_SIZE(Local_1034.f_48) != 0) && SQUAD_GET_SIZE(Local_1034.f_52) != 0)
						{
							iLocal_781 = 5;
						}
						else if ((!Function_607(Local_1034.f_44, Local_4.f_676) && !Function_607(Local_1034.f_48, Local_4.f_676)) && !Function_607(Local_1034.f_52, Local_4.f_676))
						{
							if (IS_ACTION_NODE_PLAYING((*&Local_4 + 92)[02], "guide_herd/start"))
							{
								RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 92)[02], 1);
							}
						}
						else if (!IS_ACTION_NODE_PLAYING((*&Local_4 + 92)[02], "guide_herd/start"))
						{
							SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 92)[02], "guide_herd", 0);
							SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 92)[02], "guide_herd/start");
						}
					}
				}
				break;
			
			case 0x00000005:
				TASK_CLEAR((*&Local_4 + 92)[02]);
				RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 92)[02], 1);
				GET_OBJECT_POSITION(Local_4.f_1284, &uLocal_937);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uLocal_937, 1);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 92)[02], bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET((*&Local_4 + 92)[02], true);
				iLocal_781++;
				break;
			
			case 0x00000006:
				iLocal_781++;
				break;
			}
	}
	return;
}

void Function_609() //Position: 0x2D81F / 186399
{
	if (!iLocal_957)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30668[0]))
			{
				Function_593(&uLocal_796);
			}
			else
			{
				iLocal_773 = 0;
				iLocal_957 = 0;
			}
		}
	}
	Function_365(bLocal_410);
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		Function_624();
		Function_585();
		Function_623();
		Function_615();
		Function_529();
		if (iLocal_540 < 8)
		{
			if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_821))
			{
				if (Function_614(Global_34573, &Local_4 + 544))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_185();
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 9;
				}
			}
		}
		Function_239((*&Local_4 + 832)[6]);
		Function_419(StackVal, StackVal, "$/cutscene/HOME01_CS02_C/HOME01_CS02_C", &uLocal_770, Function_239((*&Local_4 + 832)[6]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_359("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			if (IS_ACTOR_VALID(bLocal_544))
			{
				TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_544, true);
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_543, true);
			}
			if (IS_ACTOR_VALID(bLocal_820))
			{
				TASK_STAND_STILL(bLocal_820, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_820, true);
			}
			if (IS_ACTOR_VALID(bLocal_821))
			{
				TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_821, true);
			}
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(39);
			if (iLocal_554[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				bLocal_541 = Global_30668[0];
				if (!Function_375(bLocal_541))
				{
					Function_350(&Local_411);
				}
				Function_348(Global_34573, (*&Local_4 + 792)[0], 1, 1, 1);
				Function_219(&bLocal_545);
				iLocal_540 = 1;
			}
			else
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_794 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = 15;
				bLocal_789 = false;
				Function_378(Local_411, 15);
				PRINTINT(bLocal_788);
				PRINTNL();
				PRINTINT(bLocal_789);
				PRINTNL();
				Local_1034.f_76 = 0;
				Local_1034.f_80 = 0;
				bLocal_777 = Local_1034.f_76;
				bLocal_778 = Local_1034.f_80;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_778) / TO_FLOAT(bLocal_777)));
				PRINTNL();
				bLocal_777 = Local_1034.f_76;
				Global_34165.f_124 = bLocal_777;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_778 = Local_1034.f_80;
				Global_34165.f_128 = bLocal_778;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_612();
				if (IS_ACTOR_VALID(bLocal_820))
				{
					TASK_USE_GRINGO(bLocal_820, GET_GRINGO_FROM_OBJECT(Local_4.f_1524), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(bLocal_820, false);
				}
				if (IS_ACTOR_VALID(bLocal_821))
				{
					Function_348(bLocal_821, (*&Local_4 + 792)[2], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_824[0]))
					{
						Function_348(bLocal_824[0], (*&Local_4 + 792)[7], 1, 1, 1);
					}
				}
				if (iLocal_554[0] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							Function_348(bLocal_544, (*&Local_4 + 792)[5], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_544))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_544);
							}
						}
						else
						{
							bLocal_544 = Function_287(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(bLocal_543))
					{
						if (IS_ACTOR_VALID(bLocal_822[0]))
						{
							Function_348(bLocal_822[0], (*&Local_4 + 792)[6], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_543) && !IS_ACTOR_MOUNTED(bLocal_822[0]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_543, bLocal_822[0]);
							}
						}
					}
				}
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), bLocal_820, "Drew", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), bLocal_821, "RanchersDaughter", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[417]), Local_1034.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[517]), Local_1034.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[617]), Local_1034.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[717]), Local_1034.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_408(&(Local_611[117]), 1024, 1);
				Function_408(&(Local_611[217]), 1024, 1);
				if (Function_599(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_411, bLocal_539))
				{
					Function_219(&bLocal_545);
					iLocal_540 = 3;
				}
				else
				{
					Function_219(&bLocal_545);
					iLocal_540 = 4;
				}
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30628[2], Function_241(bLocal_539), 2);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000003:
			if (Function_274("$/cutscene/HOME01_CS02/HOME01_CS02", &iLocal_532, &Local_411, &bLocal_539, 88140, 87889, 86965, 86261, 85892, 54790, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(Global_34573))
			{
			}
			if (IS_ACTOR_VALID(bLocal_544))
			{
				SET_ACTOR_HEALTH(bLocal_544, GET_ACTOR_MAX_HEALTH(bLocal_544));
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				SET_ACTOR_HEALTH(bLocal_543, 50.0f);
			}
			if (IS_ACTOR_VALID(bLocal_820))
			{
				SET_ACTOR_HEALTH(bLocal_820, 50.0f);
			}
			if (IS_ACTOR_VALID(bLocal_821))
			{
				SET_ACTOR_HEALTH(bLocal_821, 50.0f);
			}
			if (HUD_IS_FADED())
			{
				Function_219(&bLocal_545);
				iLocal_540 = 5;
			}
			else
			{
				if (IS_ACTOR_VALID(bLocal_820))
				{
					SET_ACTOR_HEALTH(bLocal_820, 50.0f);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_USE_GRINGO(bLocal_820, GET_GRINGO_FROM_OBJECT(Local_4.f_1528), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_820, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_820, 2);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (Function_398(bLocal_543, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_543) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_219(&bLocal_545);
						iLocal_540 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			CAMERA_RESET(0);
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				if (IS_ACTOR_VALID(bLocal_820))
				{
					SET_ACTOR_HEALTH(bLocal_820, 50.0f);
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_USE_GRINGO(bLocal_820, GET_GRINGO_FROM_OBJECT(Local_4.f_1528), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_820, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_820, 2);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				if (IS_ACTOR_VALID(bLocal_821))
				{
					CLEAR_ACTOR_MAX_SPEED(bLocal_821);
					MEMORY_PREFER_RIDING(bLocal_821, false);
					Function_226(3, 1, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_821, "home01_horse_tend", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_821, "home01_horse_tend/horse_tend");
					if (IS_ACTOR_VALID(bLocal_824[0]))
					{
						SET_ALLOW_RIDE_BY_PLAYER(bLocal_824[0], 0);
						TASK_STAND_STILL(bLocal_824[0], -1.0f, 1, 0);
						TASK_PRIORITY_SET(bLocal_824[0], true);
					}
				}
				Function_611();
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 5.0f)
			{
				Function_393("home01_obj02", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_385(&bLocal_551, (4.0f * 60.0f), (4.0f * 200.0f), bLocal_821, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_568, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					Function_185();
					Function_225(bLocal_882);
				}
			}
			else if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					Function_185();
					Function_225(bLocal_882);
				}
				if (IS_BLIP_VALID(Function_598(3)))
				{
					Function_226(3, 0, 1);
				}
			}
			else if (!IS_BLIP_VALID(Function_598(3)))
			{
				Function_226(3, 1, 1);
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_VALID(Global_34573))
			{
				SET_PLAYER_CONTROL(0, 0, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
			}
			Function_219(&bLocal_545);
			iLocal_540 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_271(&bLocal_545) <= 3.0f)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_243();
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			else if (IS_ACTOR_VALID(bLocal_824[0]))
			{
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					if (Function_379(Global_34573, bLocal_824[0], 6.0f))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 106;
					}
				}
				else if (Function_379(Global_34573, bLocal_824[0], 3.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
			}
			Function_610();
			iLocal_554[1] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = 2;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_610() //Position: 0x2E2AD / 189101
{
	if (IS_ACTOR_VALID(bLocal_820))
	{
		RELEASE_ACTOR(bLocal_820);
	}
	return;
}

void Function_611() //Position: 0x2E2C2 / 189122
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_ShoutsGoodByeDrew", "Home01_ShoutsGoodByeDrew", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_612() //Position: 0x2E31C / 189212
{
	vector3 vVar0;
	vector3 vVar3;
	
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 792)[6];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	cLocal_987[0] = 977;
	uLocal_885[0] = (*&Local_4 + 792)[7];
	if (!SQUAD_IS_VALID(bLocal_1012))
	{
		bLocal_1012 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE02"));
		if (SQUAD_IS_VALID(bLocal_1012))
		{
			SQUAD_GOALS_CLEAR(bLocal_1012);
			Function_342(bLocal_1012, &bLocal_824, &uLocal_885, &cLocal_987, "SHORSE02", 1);
			Function_341(bLocal_1012, 0);
			Function_340(bLocal_1012, 3);
			Function_339(bLocal_1012, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1012, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_820))
	{
		GET_OBJECT_POSITION((*&Local_4 + 792)[3], &vVar0);
		GET_OBJECT_ORIENTATION((*&Local_4 + 792)[3], &vVar3);
		bLocal_820 = CREATE_ACTOR_IN_LAYOUT(bLocal_410, "HOME01_DREW_MAC", 608, vVar0, vVar3);
		if (IS_ACTOR_VALID(bLocal_820))
		{
			SET_ACTOR_FACTION(bLocal_820, 20);
			SET_ACTOR_HEALTH(bLocal_820, GET_ACTOR_MAX_HEALTH(bLocal_543));
			Function_288(bLocal_820, 0, 0, 0, 1, 0, 1);
			SNAP_ACTOR_TO_GRINGO(bLocal_820, Local_4.f_1520, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(bLocal_820, GET_GRINGO_FROM_OBJECT(Local_4.f_1520), "UseCase1", 4294967295, 1);
			TASK_PRIORITY_SET(bLocal_820, false);
		}
	}
	Function_613();
	return;
}

void Function_613() //Position: 0x2E4FC / 189692
{
	Function_337();
	if (!SQUAD_IS_VALID(Local_1034.f_44))
	{
		Local_1034.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_1034.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_1034.f_44);
			Function_335(&Local_1034, bLocal_410, Local_4.f_1196, &iLocal_980, 5, 1.0f, 3.0f, 1,5f, 1);
			Function_341(Local_1034.f_44, 0);
			Function_334(Local_1034.f_44, 1);
			Function_333(Local_1034.f_44, 0);
			Function_332(Local_1034.f_44, 0);
			Function_331(Local_1034.f_44, "AllowLassoHorseMinigame", 0);
			Function_330(Local_1034.f_44, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_1034.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_640, -1.0f);
		}
	}
	return;
}

bool Function_614(bool bParam0, int iParam1) //Position: 0x2E5CB / 189899
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < (*iParam1 - 1))
		{
			if (IS_VOLUME_VALID((*iParam1)[iVar0]))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, (*iParam1)[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void Function_615() //Position: 0x2E612 / 189970
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_622();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_792++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_616(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792 = 3;
					}
				}
				if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_821))
				{
					if (Function_614(Global_34573, &Local_4 + 544))
					{
						iLocal_792 = 4;
					}
				}
				break;
			
			case 0x00000003:
				Function_616(1, 1, 0x42180000, 0x41c80000);
				if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_821))
				{
					if (Function_614(Global_34573, &Local_4 + 544))
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000004:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_616(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x2E70F / 190223
{
	if (Function_271(&bLocal_869) <= 6.0f)
	{
		Function_621();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_968)
				{
					iLocal_968 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonGetsOfHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
				else if (Function_271(&bLocal_548) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonNoGetOnHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_968)
				{
					iLocal_968 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_544, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam0)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
			}
			if (!Function_379(Global_34573, bLocal_543, fParam2))
			{
				if (bParam1)
				{
					if (!bLocal_967)
					{
						if (!iLocal_966)
						{
							if (bLocal_539 == 1)
							{
								bLocal_898 = Local_4.f_1588;
							}
							else
							{
								bLocal_898 = Local_4.f_1588;
							}
							if (Function_620(Global_34573, bLocal_543, bLocal_898))
							{
								iLocal_966 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_619();
								Function_219(&bLocal_869);
							}
							else
							{
								iLocal_966 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_618();
								Function_219(&bLocal_869);
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_543, bParam3))
			{
				if (bParam1)
				{
					if (iLocal_966)
					{
						iLocal_966 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_617();
						Function_219(&bLocal_869);
					}
				}
			}
		}
	}
}

void Function_617() //Position: 0x2E98B / 190859
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_CatchesUpJon", "Home01_CatchesUpJon", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_618() //Position: 0x2E9DB / 190939
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_KeepUpBoy", "Home01_KeepUpBoy", 3, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_619() //Position: 0x2EA25 / 191013
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_2FarAhead", "Home01_2FarAhead", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_620(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2EA6F / 191087
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

void Function_621() //Position: 0x2EAC7 / 191175
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_543)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (bVar0 == bLocal_821)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_581();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_581();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_581();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_assaultsBonnie", "Home01_assaultsBonnie", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if (bVar0 == bLocal_822[0])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_431();
					Function_219(&bLocal_869);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnJack", "Home01_GunOnJack", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
		else if ((Function_467(bVar0, Local_1034.f_44, 0) || Function_467(bVar0, Local_1034.f_52, 0)) || Function_467(bVar0, Local_1034.f_48, 0))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_466();
						Function_219(&bLocal_869);
					}
					else if (GET_WEAPON_IN_HAND(Global_34573) != 21 || GET_WEAPON_IN_HAND(Global_34573) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonLassosCow", "Home01_JonLassosCow", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_580();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_580();
					Function_219(&bLocal_869);
				}
			}
		}
		else if (IS_ACTOR_HUMAN(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_580();
						Function_219(&bLocal_869);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_580();
						Function_219(&bLocal_869);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_580();
					Function_219(&bLocal_869);
				}
			}
			else if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_GunOnChar", "Home01_GunOnChar", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_219(&bLocal_869);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_677(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_ShotsGunRandMac", "Home01_ShotsGunRandMac", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
			}
		}
	}
	return;
}

void Function_622() //Position: 0x2EEC4 / 192196
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_JjTalk2CBonnie_v1_AA", "Home01_JjTalk2CBonnie_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_JjTalk2CBonnie_v1_AB", "Home01_JjTalk2CBonnie_v1_AB", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_JjTalk2CBonnie_v1_AC", "Home01_JjTalk2CBonnie_v1_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_JjTalk2CBonnie_v1_AD", "Home01_JjTalk2CBonnie_v1_AD", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_JjTalk2CBonnie_v1_AE", "Home01_JjTalk2CBonnie_v1_AE", false, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_623() //Position: 0x2F038 / 192568
{
	if (IS_ACTOR_VALID(bLocal_820))
	{
		switch (iLocal_780)
		{
			case 0x00000000:
				iLocal_780++;
				break;
			
			case 0x00000001:
				iLocal_780++;
				break;
			
			case 0x00000002:
				iLocal_780++;
				break;
			}
	}
	return;
}

void Function_624() //Position: 0x2F082 / 192642
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		switch (iLocal_776)
		{
			case 0x00000000:
				iLocal_776++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(bLocal_543, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
				AI_RIDING_SET_ATTRIBUTE(bLocal_543, 2, 0,15f);
				SET_ACTORS_HORSE(bLocal_543, bLocal_822[0]);
				CLEAR_ACTOR_MIN_SPEED(bLocal_543);
				CLEAR_ACTOR_MAX_SPEED(bLocal_543);
				CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
				SET_ALLOW_RIDE_BY_PLAYER(bLocal_822[0], 0);
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1,5f, 0, 0);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_4.f_1588, 4,5f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				iLocal_776++;
				break;
			
			case 0x00000002:
				iLocal_776++;
				break;
			
			case 0x00000003:
				iLocal_776++;
				break;
			
			case 0x00000004:
				iLocal_776++;
				break;
			}
	}
	return;
}

void Function_625() //Position: 0x2F178 / 192888
{
	if (!iLocal_976)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_372(&iLocal_805);
			}
			else
			{
				iLocal_774 = 0;
				iLocal_976 = 0;
			}
		}
	}
	if (!iLocal_957)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30668[0]))
			{
				Function_593(&uLocal_796);
			}
			else
			{
				iLocal_773 = 0;
				iLocal_957 = 0;
			}
		}
	}
	if (!iLocal_971)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_371();
			}
			else
			{
				iLocal_793 = 0;
				iLocal_971 = 0;
			}
		}
	}
	if (!iLocal_974)
	{
		if (iLocal_540 > 2)
		{
			if (Function_375(Global_30717[1]))
			{
				Function_366();
			}
			else
			{
				iLocal_795 = 0;
				iLocal_974 = 0;
			}
		}
	}
	Function_365(bLocal_410);
	if (((iLocal_540 < 5 && iLocal_540 > 105) && !iLocal_540 != 104) && !iLocal_540 != 103)
	{
		Function_435();
		Function_433();
		Function_652();
		Function_651();
		Function_530(1, 0);
		Function_529();
		Function_637();
		if (iLocal_540 <= 11 && iLocal_540 >= 12)
		{
			if (IS_ACTOR_VALID(bLocal_544))
			{
				if (GET_MOUNT(Global_34573) == bLocal_544)
				{
					if (IS_BLIP_VALID(bLocal_878))
					{
						REMOVE_BLIP(bLocal_878);
					}
					if (IS_OBJECT_VALID(bLocal_882))
					{
						Function_225(bLocal_882);
					}
					TASK_CLEAR(bLocal_544);
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 13;
				}
			}
		}
		Function_239((*&Local_4 + 792)[5]);
		Function_419(StackVal, StackVal, "$/cutscene/HOME01_CS02/HOME01_CS02", &uLocal_770, Function_239((*&Local_4 + 792)[5]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_540)
	{
		case 0x00000000:
			Function_361(0);
			if (Function_349(&Local_411))
			{
				iLocal_793 = 0;
				iLocal_795 = 0;
				iLocal_774 = 0;
				iLocal_974 = 0;
				iLocal_971 = 0;
				iLocal_957 = 0;
				iLocal_976 = 0;
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_1033 = Function_636(1);
			ADD_TIME(&bLocal_1033, 0, 0, 42, 0);
			SET_TIME_OF_DAY(bLocal_1033);
			Function_8(GET_TIME_OF_DAY());
			PRINTNL();
			if (IS_ACTOR_VALID(bLocal_544))
			{
				TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_544, true);
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_543, true);
			}
			if (IS_ACTOR_VALID(bLocal_819))
			{
				TASK_STAND_STILL(bLocal_819, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_819, true);
			}
			if (IS_ACTOR_VALID(bLocal_818))
			{
				TASK_STAND_STILL(bLocal_818, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_818, true);
			}
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_351();
			bLocal_541 = Global_30717[1];
			if (!Function_375(bLocal_541))
			{
				Function_350(&Local_411);
			}
			Function_348(Global_34573, (*&Local_4 + 760)[0], 1, 1, 1);
			if (!iLocal_978)
			{
				iLocal_978 = 1;
				Function_131(15, 1, 0, 0);
				Function_121(15, 0, 1);
				if (Function_635(15, 0, 0))
				{
				}
				if (Function_125(15))
				{
					if (Function_141(15))
					{
						if (Function_126(15))
						{
						}
					}
				}
			}
			Function_219(&bLocal_545);
			iLocal_540 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_344())
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_773 = 0;
				iLocal_774 = 0;
				iLocal_776 = 0;
				iLocal_780 = 0;
				iLocal_775 = 0;
				iLocal_781 = 0;
				iLocal_782 = 0;
				iLocal_792 = 0;
				iLocal_794 = 0;
				iLocal_786 = 0;
				iLocal_787 = 0;
				iLocal_955 = 0;
				iLocal_956 = 0;
				iLocal_957 = 0;
				iLocal_971 = 0;
				iLocal_570 = 0;
				iLocal_966 = 0;
				bLocal_967 = false;
				iLocal_968 = 0;
				iLocal_969 = 0;
				iLocal_970 = 0;
				iLocal_975 = 0;
				iLocal_977 = 0;
				Function_418(&fLocal_959);
				bLocal_788 = 15;
				bLocal_789 = false;
				Function_378(Local_411, 15);
				PRINTINT(bLocal_788);
				PRINTNL();
				PRINTINT(bLocal_789);
				PRINTNL();
				Local_1034.f_76 = 0;
				Local_1034.f_80 = 0;
				bLocal_777 = Local_1034.f_76;
				bLocal_778 = Local_1034.f_80;
				PRINTINT(bLocal_777);
				PRINTNL();
				PRINTINT(bLocal_778);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_778) / TO_FLOAT(bLocal_777)));
				PRINTNL();
				bLocal_777 = Local_1034.f_76;
				Global_34165.f_124 = bLocal_777;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_778 = Local_1034.f_80;
				Global_34165.f_128 = bLocal_778;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_634();
				Function_633();
				if (Function_349(&Local_411))
				{
					iLocal_795 = 0;
					iLocal_974 = 0;
					if (IS_VOLUME_VALID(Local_4.f_744))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_744);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_744);
						CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_744, 15);
					}
				}
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (IS_GRINGO_VALID(bLocal_1020[0]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_544, GET_OBJECT_FROM_GRINGO(bLocal_1020[0]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_544, bLocal_1020[0], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_544, true);
					}
				}
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					Function_348(bLocal_822[0], (*&Local_4 + 760)[5], 1, 1, 1);
					TASK_STAND_STILL(bLocal_822[0], -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_822[0], true);
				}
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 116)[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 116)[1]);
				Function_407(&(Local_611[017]), bLocal_543, "Son", 1, 0x5f5e100, 1);
				Function_407(&(Local_611[117]), bLocal_819, "Wife", 0, 0x5f5e100, 1);
				Function_407(&(Local_611[217]), bLocal_818, "Uncle", 0, 0x5f5e100, 1);
				Function_406(&(Local_611[317]));
				Function_406(&(Local_611[417]));
				Function_406(&(Local_611[517]));
				Function_406(&(Local_611[617]));
				Function_406(&(Local_611[717]));
				Function_406(&(Local_611[817]));
				Function_219(&bLocal_545);
				iLocal_540 = 4;
				Function_238(bLocal_539);
				Function_400(StackVal, StackVal, Function_238(bLocal_539), bLocal_539, Global_30637[0], Function_241(bLocal_539), 1);
				bLocal_791 = Function_399();
				PRINTINT(bLocal_791);
				PRINTNL();
			}
			break;
		
		case 0x00000004:
			if (Global_28178 == 15)
			{
				if (IS_DOOR_VALID(iLocal_805[7]))
				{
					if (!IS_PHYSINST_VALID(bLocal_1032))
					{
						bLocal_1032 = GET_PHYSINST_FROM_OBJECT(iLocal_805[7]);
						if (IS_PHYSINST_VALID(bLocal_1032))
						{
							SHOW_PHYSINST(bLocal_1032);
						}
					}
					else
					{
						SHOW_PHYSINST(bLocal_1032);
					}
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_348(Global_34573, (*&Local_4 + 760)[0], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_544))
				{
					SET_ACTOR_HEALTH(bLocal_544, GET_ACTOR_MAX_HEALTH(bLocal_544));
				}
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					Function_348(bLocal_822[0], (*&Local_4 + 760)[5], 1, 1, 1);
					TASK_STAND_STILL(bLocal_822[0], -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_822[0], true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					SET_ACTOR_HEALTH(bLocal_543, 50.0f);
					Function_348(bLocal_543, (*&Local_4 + 760)[2], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_819))
				{
					SET_ACTOR_HEALTH(bLocal_819, 50.0f);
					Function_348(bLocal_819, (*&Local_4 + 760)[3], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_818))
				{
					SET_ACTOR_HEALTH(bLocal_818, 50.0f);
					Function_348(bLocal_818, (*&Local_4 + 760)[1], 1, 1, 1);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 5;
			}
			else if (Function_271(&bLocal_545) <= 13.0f)
			{
				LOG_ERROR("HOME01 - Timed out waiting for the rancher's outfit to be switched.");
				Function_131(15, 1, 0, 0);
				Function_121(15, 0, 1);
				if (Function_635(15, 0, 0))
				{
				}
				if (Function_125(15))
				{
					if (Function_141(15))
					{
						if (Function_126(15))
						{
						}
					}
				}
				if (Global_28178 == 15)
				{
				}
				if (IS_DOOR_VALID(iLocal_805[7]))
				{
					if (!IS_PHYSINST_VALID(bLocal_1032))
					{
						bLocal_1032 = GET_PHYSINST_FROM_OBJECT(iLocal_805[7]);
						if (IS_PHYSINST_VALID(bLocal_1032))
						{
							SHOW_PHYSINST(bLocal_1032);
						}
					}
					else
					{
						SHOW_PHYSINST(bLocal_1032);
					}
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_348(Global_34573, (*&Local_4 + 760)[0], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_544))
				{
					SET_ACTOR_HEALTH(bLocal_544, GET_ACTOR_MAX_HEALTH(bLocal_544));
				}
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					Function_348(bLocal_822[0], (*&Local_4 + 760)[5], 1, 1, 1);
					TASK_STAND_STILL(bLocal_822[0], -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_822[0], true);
				}
				if (IS_ACTOR_VALID(bLocal_543))
				{
					SET_ACTOR_HEALTH(bLocal_543, 50.0f);
					Function_348(bLocal_543, (*&Local_4 + 760)[2], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_819))
				{
					SET_ACTOR_HEALTH(bLocal_819, 50.0f);
					Function_348(bLocal_819, (*&Local_4 + 760)[3], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_818))
				{
					SET_ACTOR_HEALTH(bLocal_818, 50.0f);
					Function_348(bLocal_818, (*&Local_4 + 760)[1], 1, 1, 1);
				}
				Function_219(&bLocal_545);
				iLocal_540 = 5;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (Function_398(bLocal_543, 1, 0x41700000))
				{
					if (IS_ACTOR_VALID(bLocal_818))
					{
						TASK_CLEAR(bLocal_818);
					}
					if (IS_ACTOR_VALID(bLocal_819))
					{
						TASK_CLEAR(bLocal_819);
					}
					Function_219(&bLocal_545);
					iLocal_540 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_219(&bLocal_545);
			iLocal_540 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
				Function_219(&bLocal_545);
				iLocal_540 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				UI_ENABLE("LoadingSpinner");
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(12, 1, 1);
				Function_219(&bLocal_545);
				iLocal_540 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_271(&bLocal_545) <= 1.0f)
			{
				Function_393("home01_obj00a", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_385(&bLocal_551, (4.0f * 60.0f), (4.0f * 200.0f), bLocal_543, "Son_return", "Son_abandoned", &bLocal_568, 0, 0, 0, 325, 1))
			{
			}
			if (!iLocal_977)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_OUTDOORS(Global_34573))
					{
						iLocal_977 = 1;
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 15.0f))
				{
					iLocal_958 = 1;
					if (IS_BLIP_VALID(bLocal_878))
					{
						REMOVE_BLIP(bLocal_878);
					}
					Function_226(12, 0, 1);
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 9;
				}
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_543, (4.0f * 6.0f)) && IS_ACTOR_RIDING(Global_34573))
				{
					iLocal_958 = 1;
					if (IS_BLIP_VALID(bLocal_878))
					{
						REMOVE_BLIP(bLocal_878);
					}
					Function_226(12, 0, 1);
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 12;
				}
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_VALID(bLocal_544))
			{
				if (!IS_BLIP_VALID(bLocal_878))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_544)))
					{
						bLocal_878 = ADD_BLIP_FOR_ACTOR(bLocal_544, 334, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_878))
						{
						}
					}
				}
			}
			SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "GREET_P", Global_34573, 1, 0, 0, 1, 2);
			Function_219(&bLocal_545);
			iLocal_540 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				Function_632();
				Function_219(&bLocal_545);
				iLocal_540 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_271(&bLocal_545) <= 3.0f)
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (!GET_MOUNT(Global_34573) != bLocal_544)
					{
						Function_393("home01_obj00b", 7,5f, 1, 2, 0, 0, 0);
					}
				}
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_385(&bLocal_551, (4.0f * 60.0f), (4.0f * 200.0f), bLocal_543, "Son_wait", "Son_abandoned", &bLocal_568, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					Function_225(bLocal_882);
				}
				if (!IS_BLIP_VALID(Function_598(12)))
				{
					Function_226(12, 1, 1);
				}
			}
			else
			{
				if (IS_BLIP_VALID(Function_598(12)))
				{
					Function_226(12, 0, 1);
				}
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (!IS_BLIP_VALID(bLocal_878))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_544)))
						{
							bLocal_878 = ADD_BLIP_FOR_ACTOR(bLocal_544, 334, 0, 2, 0);
							if (IS_BLIP_VALID(bLocal_878))
							{
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000D:
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_3", 0, 4294967295, 4294967295);
			if (!IS_OBJECT_VALID(bLocal_882))
			{
				GET_OBJECT_POSITION((*&Local_4 + 792)[5], &vLocal_910);
				GET_OBJECT_ORIENTATION((*&Local_4 + 792)[5], &vLocal_913);
				bLocal_882 = Function_397(StackVal, StackVal, StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, Global_34573, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(bLocal_882))
				{
				}
			}
			GET_OBJECT_POSITION(Local_4.f_1192, &vLocal_919);
			Function_630(StackVal, StackVal, vLocal_919, 0, 48, 1);
			Function_219(&bLocal_545);
			iLocal_540 = 14;
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_157(Global_30628[2]);
				Function_393("home01_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&bLocal_545);
				Function_219(&bLocal_548);
				Function_219(&bLocal_551);
				iLocal_540 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_629(&bLocal_551, Local_4.f_728, Local_4.f_732, "home01_obj01", "home01_abandoned", &bLocal_568, 0, 0, 0, 330, 1))
			{
				if (!IS_OBJECT_VALID(bLocal_882))
				{
					GET_OBJECT_POSITION((*&Local_4 + 792)[5], &vLocal_910);
					GET_OBJECT_ORIENTATION((*&Local_4 + 792)[5], &vLocal_913);
					bLocal_882 = Function_397(StackVal, StackVal, StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, Global_34573, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(bLocal_882))
					{
					}
					GET_OBJECT_POSITION(Local_4.f_1192, &vLocal_919);
					Function_630(StackVal, StackVal, vLocal_919, 0, 48, 1);
				}
			}
			else if (Function_444(&bLocal_551, 60.0f, bLocal_544, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_568, 0, bLocal_410, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_878))
				{
					REMOVE_BLIP(bLocal_878);
				}
				if (IS_OBJECT_VALID(bLocal_882))
				{
					Function_185();
					Function_225(bLocal_882);
				}
			}
			else if (!IS_OBJECT_VALID(bLocal_882))
			{
				GET_OBJECT_POSITION((*&Local_4 + 792)[5], &vLocal_910);
				GET_OBJECT_ORIENTATION((*&Local_4 + 792)[5], &vLocal_913);
				bLocal_882 = Function_397(StackVal, StackVal, StackVal, StackVal, bLocal_410, "HOME01GATEWAY01", vLocal_910, vLocal_913, Global_34573, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(bLocal_882))
				{
				}
				GET_OBJECT_POSITION(Local_4.f_1192, &vLocal_919);
				Function_630(StackVal, StackVal, vLocal_919, 0, 48, 1);
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_VOLUME_VALID(Local_4.f_740))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_740))
					{
						if (IS_ACTOR_VALID(bLocal_544))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_544)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_544));
							}
						}
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							Function_225(bLocal_882);
						}
						Function_185();
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_243();
						Function_219(&bLocal_545);
						iLocal_540 = 106;
					}
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_OBJECT_VALID(bLocal_882))
				{
					if (Function_382(Global_34573, bLocal_882, 10.0f))
					{
						if (IS_BLIP_VALID(bLocal_878))
						{
							REMOVE_BLIP(bLocal_878);
						}
						if (IS_OBJECT_VALID(bLocal_882))
						{
							Function_225(bLocal_882);
						}
						Function_185();
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_545);
						iLocal_540 = 16;
					}
				}
			}
			break;
		
		case 0x00000010:
			if (IS_ACTOR_VALID(Global_34573))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				TASK_GO_NEAR_OBJECT(Global_34573, (*&Local_4 + 792)[5], 2.0f, 1, 0, 1);
				TASK_PRIORITY_SET(Global_34573, true);
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				TASK_GO_NEAR_OBJECT(bLocal_543, (*&Local_4 + 792)[6], 2.0f, 1, 0, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
			}
			Function_219(&bLocal_545);
			iLocal_540 = 17;
			break;
		
		case 0x00000011:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || (Function_271(&bLocal_545) <= 6.0f && Function_271(&bLocal_545) <= 2.0f))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			else if (!IS_SCRIPTED_SPEECH_PLAYING(bLocal_543) || (Function_271(&bLocal_545) <= 6.0f && Function_271(&bLocal_545) <= 2.0f))
			{
				Function_219(&bLocal_545);
				iLocal_540 = 106;
			}
			else if (IS_ACTOR_VALID(bLocal_820))
			{
				if (Function_379(Global_34573, bLocal_820, 5.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_243();
					Function_219(&bLocal_545);
					iLocal_540 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (IS_ACTOR_VALID(Global_34573))
			{
				TASK_CLEAR(Global_34573);
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				TASK_PRIORITY_SET(Global_34573, true);
			}
			if (IS_ACTOR_VALID(bLocal_543))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
				TASK_CLEAR(bLocal_543);
				TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_543, true);
			}
			if (IS_ACTOR_VALID(bLocal_822[0]))
			{
				HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_822[0], 0);
			}
			if (iLocal_969)
			{
				iLocal_969 = 0;
				STREAMING_UNLOAD_BOUNDS();
			}
			Function_626();
			iLocal_554[0] = 1;
			Function_219(&bLocal_545);
			bLocal_539 = true;
			iLocal_540 = 0;
			break;
	}
	return;
}

void Function_626() //Position: 0x30354 / 197460
{
	Function_628();
	Function_627();
	return;
}

void Function_627() //Position: 0x30360 / 197472
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_819);
	Function_215(11, 1, 0, 1, 1);
	return;
}

void Function_628() //Position: 0x30377 / 197495
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_818);
	Function_215(13, 1, 0, 1, 1);
	return;
}

bool Function_629(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x3038E / 197518
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_VOLUME_VALID(bParam1) || !IS_VOLUME_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		Function_232(bParam4);
		*uParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
	{
		if (!Function_391(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_393(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_390(64);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_389(bParam7, 0, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_389(bParam8, 0, 4294967295, 0, bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam1, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_391(64))
	{
		Function_388(64);
		if (!Function_387())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_386();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam1));
				DECOR_REMOVE(bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_389(bParam7, 1, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_389(bParam8, 1, 4294967295, 0, bParam1);
			}
		}
	}
	return 0;
}

void Function_630(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x30502 / 197890
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
		Function_631(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_631(bool bParam0) //Position: 0x305BE / 198078
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

void Function_632() //Position: 0x305FE / 198142
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_JjSetItOff", "Home01_JjSetItOff", 3, 1, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_633() //Position: 0x3064A / 198218
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRAILROAD_rrCurve_28", 3));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, 50);
	}
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve346rebuiltCurve1", 18));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, 50);
	}
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve130", 18));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, 50);
	}
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve132", 18));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, 50);
	}
	return;
}

void Function_634() //Position: 0x3071E / 198430
{
	cLocal_985[0] = 980;
	bLocal_883[0] = (*&Local_4 + 760)[5];
	if (!SQUAD_IS_VALID(bLocal_1011))
	{
		bLocal_1011 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_410, "SHORSE01"));
		if (SQUAD_IS_VALID(bLocal_1011))
		{
			SQUAD_GOALS_CLEAR(bLocal_1011);
			Function_342(bLocal_1011, &bLocal_822, &bLocal_883, &cLocal_985, "SHORSE01", 1);
			Function_341(bLocal_1011, 0);
			Function_340(bLocal_1011, 3);
			Function_339(bLocal_1011, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1011, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	return;
}

bool Function_635(bool bParam0, bool bParam1, bool bParam2) //Position: 0x307B4 / 198580
{
	if (Global_28178 == bParam0)
	{
		return 1;
	}
	if (Global_28179 == bParam0)
	{
		return 1;
	}
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to swap to an invalid outfit");
		return 0;
	}
	if (!Function_126(bParam0) && !bParam2)
	{
		return 0;
	}
	Global_28179 = bParam0;
	if (bParam1)
	{
		Function_124(bParam0, 8192);
	}
	DECOR_SET_BOOL(Global_34573, "playerChangeOutfits", true);
	return 1;
}

var Function_636(bool bParam0) //Position: 0x30846 / 198726
{
	bool bVar0;
	
	bVar0 = false;
	if ((bParam0 && 33) == 1)
	{
		bVar0 = 5;
	}
	else if ((bParam0 && 3) == 2)
	{
		bVar0 = 7;
	}
	else if ((bParam0 && 6) == 4)
	{
		bVar0 = 11;
	}
	else if ((bParam0 && 12) == 8)
	{
		bVar0 = 14;
	}
	else if ((bParam0 && 24) == 16)
	{
		bVar0 = 18;
	}
	else if ((bParam0 && 48) == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

void Function_637() //Position: 0x308B2 / 198834
{
	if (Function_271(&bLocal_866) <= 0,1f)
	{
		switch (iLocal_792)
		{
			case 0x00000000:
				iLocal_792++;
				break;
			
			case 0x00000001:
				if (iLocal_540 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(bLocal_819))
				{
					if (!Function_133())
					{
						if (Function_379(Global_34573, bLocal_819, 8.0f))
						{
							if (Function_271(&bLocal_548) <= 10.0f)
							{
								if (!iLocal_970)
								{
									iLocal_970 = 1;
								}
								Function_650();
								Function_219(&bLocal_548);
							}
						}
					}
					if (iLocal_970)
					{
						if (Function_271(&bLocal_548) <= 7.0f)
						{
							iLocal_970 = 0;
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_818))
				{
					if (!Function_133())
					{
						if (Function_379(Global_34573, bLocal_818, 8.0f))
						{
							if (Function_271(&bLocal_548) <= 15.0f)
							{
								Function_649();
								Function_219(&bLocal_548);
							}
						}
					}
				}
				if (iLocal_540 > 12)
				{
					Function_219(&bLocal_548);
					iLocal_792++;
				}
				break;
			
			case 0x00000003:
				Function_645(0, 1, 0x42180000, 0x41c80000);
				if (!Function_133())
				{
					if (Function_271(&bLocal_548) <= 10.0f)
					{
						Function_644();
						Function_219(&bLocal_548);
					}
				}
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (GET_MOUNT(Global_34573) == bLocal_544)
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000004:
				if (iLocal_540 > 15)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_VOLUME_VALID((*&Local_4 + 480)[0]))
						{
							if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 480)[0]))
							{
								if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (bLocal_791 == 0)
									{
										Function_643();
									}
									else if (bLocal_791 == 1)
									{
										Function_642();
									}
									else if (bLocal_791 == 2)
									{
										Function_641();
									}
									else if (bLocal_791 == 3)
									{
										Function_640();
									}
									else if (bLocal_791 > 4)
									{
										Function_639();
									}
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_792++;
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000005:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792 = 6;
					}
				}
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				break;
			
			case 0x00000006:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				if (Function_271(&bLocal_548) <= 8.0f)
				{
					Function_219(&bLocal_548);
					iLocal_792 = 7;
				}
				break;
			
			case 0x00000007:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_791 == 0)
					{
						Function_642();
					}
					else if (bLocal_791 == 1)
					{
						Function_641();
					}
					else if (bLocal_791 == 2)
					{
						Function_640();
					}
					else if (bLocal_791 == 3)
					{
						Function_639();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000008:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792 = 9;
					}
				}
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				break;
			
			case 0x00000009:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				if (Function_271(&bLocal_548) <= 8.0f)
				{
					Function_219(&bLocal_548);
					iLocal_792 = 10;
				}
				break;
			
			case 0x0000000A:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_791 == 0)
					{
						Function_641();
					}
					else if (bLocal_791 == 1)
					{
						Function_640();
					}
					else if (bLocal_791 == 2)
					{
						Function_639();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x0000000B:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792 = 12;
					}
				}
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				break;
			
			case 0x0000000C:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				if (Function_271(&bLocal_548) <= 8.0f)
				{
					Function_219(&bLocal_548);
					iLocal_792 = 13;
				}
				break;
			
			case 0x0000000D:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_791 == 0)
					{
						Function_640();
					}
					else if (bLocal_791 == 1)
					{
						Function_639();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x0000000E:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792 = 15;
					}
				}
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				break;
			
			case 0x0000000F:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				if (Function_271(&bLocal_548) <= 8.0f)
				{
					Function_219(&bLocal_548);
					iLocal_792 = 16;
				}
				break;
			
			case 0x00000010:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_791 == 0)
					{
						Function_639();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000011:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_966)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_219(&bLocal_548);
						iLocal_792 = 18;
					}
				}
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				break;
			
			case 0x00000012:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_219(&bLocal_548);
						iLocal_792 = 20;
					}
				}
				if (Function_271(&bLocal_548) <= 8.0f)
				{
					Function_219(&bLocal_548);
					iLocal_792 = 19;
				}
				break;
			
			case 0x00000013:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID((*&Local_4 + 532)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 532)[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						iLocal_792 = 20;
					}
				}
				break;
			
			case 0x00000014:
				Function_359("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				AUDIO_MUSIC_SET_MOOD("RIDING_LOW", 0, 4294967295, 4294967295);
				iLocal_792++;
				break;
			
			case 0x00000015:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_638();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_792++;
					}
				}
				break;
			
			case 0x00000016:
				Function_645(1, 1, 0x42180000, 0x41c80000);
				break;
			
			case 0x00000017:
				iLocal_792++;
				break;
		}
		Function_219(&bLocal_866);
	}
	return;
}

void Function_638() //Position: 0x31036 / 200758
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_SpotsRanchAhed", "Home01_SpotsRanchAhed", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_639() //Position: 0x3108A / 200842
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_NoMoreTalk", "Home01_NoMoreTalk", 3, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_640() //Position: 0x310D6 / 200918
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AA", "Home01_WayBanterMac_v4_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AB", "Home01_WayBanterMac_v4_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AC1", "Home01_WayBanterMac_v4_AC1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AC2", "Home01_WayBanterMac_v4_AC2", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AC3", "Home01_WayBanterMac_v4_AC3", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AD1", "Home01_WayBanterMac_v4_AD1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AD2", "Home01_WayBanterMac_v4_AD2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AE", "Home01_WayBanterMac_v4_AE", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AF", "Home01_WayBanterMac_v4_AF", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AG", "Home01_WayBanterMac_v4_AG", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AH", "Home01_WayBanterMac_v4_AH", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AI1", "Home01_WayBanterMac_v4_AI1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AI2", "Home01_WayBanterMac_v4_AI2", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v4_AI3", "Home01_WayBanterMac_v4_AI3", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_641() //Position: 0x3148F / 201871
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AA", "Home01_WayBanterMac_v3_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v3_AB", "Home01_WayBanterMac_v3_AB", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AC", "Home01_WayBanterMac_v3_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v3_AD", "Home01_WayBanterMac_v3_AD", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AE", "Home01_WayBanterMac_v3_AE", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v3_AF", "Home01_WayBanterMac_v3_AF", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AG", "Home01_WayBanterMac_v3_AG", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v3_AH", "Home01_WayBanterMac_v3_AH", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AI", "Home01_WayBanterMac_v3_AI", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v3_AJ", "Home01_WayBanterMac_v3_AJ", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v3_AK", "Home01_WayBanterMac_v3_AK", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v3_AL", "Home01_WayBanterMac_v3_AL", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AM", "Home01_WayBanterMac_v3_AM", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v3_AN", "Home01_WayBanterMac_v3_AN", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_642() //Position: 0x31838 / 202808
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AA", "Home01_WayBanterMac_v2_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v2_AB", "Home01_WayBanterMac_v2_AB", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AC", "Home01_WayBanterMac_v2_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v2_AD", "Home01_WayBanterMac_v2_AD", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AE", "Home01_WayBanterMac_v2_AE", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v2_AF", "Home01_WayBanterMac_v2_AF", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AG", "Home01_WayBanterMac_v2_AG", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v2_AH", "Home01_WayBanterMac_v2_AH", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v2_AI", "Home01_WayBanterMac_v2_AI", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AJ1", "Home01_WayBanterMac_v2_AJ1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AJ2", "Home01_WayBanterMac_v2_AJ2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v2_AK", "Home01_WayBanterMac_v2_AK", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AL", "Home01_WayBanterMac_v2_AL", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v2_AM1", "Home01_WayBanterMac_v2_AM1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v2_AM2", "Home01_WayBanterMac_v2_AM2", 3, 2, 1, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_643() //Position: 0x31C2A / 203818
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AA", "Home01_WayBanterMac_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AB", "Home01_WayBanterMac_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AC", "Home01_WayBanterMac_v1_AC", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AD", "Home01_WayBanterMac_v1_AD", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AE1", "Home01_WayBanterMac_v1_AE1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AE2", "Home01_WayBanterMac_v1_AE2", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1670", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AF", "Home01_WayBanterMac_v1_AF", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AG", "Home01_WayBanterMac_v1_AG", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1630", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AH", "Home01_WayBanterMac_v1_AH", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AI", "Home01_WayBanterMac_v1_AI", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AJ1", "Home01_WayBanterMac_v1_AJ1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AJ2", "Home01_WayBanterMac_v1_AJ2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AK", "Home01_WayBanterMac_v1_AK", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AL", "Home01_WayBanterMac_v1_AL", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AM1", "Home01_WayBanterMac_v1_AM1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home01_WayBanterMac_v1_AM2", "Home01_WayBanterMac_v1_AM2", 3, 2, 1, 0, 1);
		Function_395(11);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_644() //Position: 0x3209F / 204959
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_JonGetsOfHors", "Home01_JonGetsOfHors", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_645(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x320F1 / 205041
{
	if (Function_271(&bLocal_869) <= 6.0f)
	{
		Function_428();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_968)
				{
					iLocal_968 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonGetsOfHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
				else if (Function_271(&bLocal_548) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_543, "Home01_JonNoGetOnHors", Global_34573, 1, 0, 0, 1, 0);
					Function_219(&bLocal_869);
					Function_219(&bLocal_548);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_968)
				{
					iLocal_968 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_544))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_544, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_219(&bLocal_869);
					}
				}
			}
			if (bParam0)
			{
				if (Function_271(&bLocal_548) <= 17.0f)
				{
					if (!iLocal_966)
					{
						if (!bLocal_967)
						{
							if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_931))
							{
								if (VMAG(vLocal_931) >= 0.0f)
								{
									bLocal_967 = true;
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_JonStopsHorse", "Home01_JonStopsHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
									Function_219(&bLocal_869);
								}
							}
						}
					}
				}
			}
			if (bParam0)
			{
				if (bLocal_967)
				{
					if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_931))
					{
						if (VMAG(vLocal_931) <= (0.0f + 2.0f))
						{
							bLocal_967 = false;
						}
					}
				}
			}
			if (bParam0)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_543, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_543, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_219(&bLocal_869);
				}
			}
			if (!Function_379(Global_34573, bLocal_543, fParam2))
			{
				if (bParam1)
				{
					if (!bLocal_967)
					{
						if (!iLocal_966)
						{
							if (bLocal_539 == 0)
							{
								bLocal_898 = Local_4.f_1616;
							}
							else
							{
								bLocal_898 = Local_4.f_1616;
							}
							if (Function_620(Global_34573, bLocal_543, bLocal_898))
							{
								iLocal_966 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								if (Function_648(RAND_INT_RANGE(false, true)))
								{
									Function_619();
								}
								else
								{
									Function_647();
								}
								Function_219(&bLocal_869);
							}
							else
							{
								iLocal_966 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								if (Function_648(RAND_INT_RANGE(false, true)))
								{
									Function_618();
								}
								else
								{
									Function_647();
								}
								Function_219(&bLocal_869);
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_543, bParam3))
			{
				if (bParam1)
				{
					if (iLocal_966)
					{
						iLocal_966 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						if (Function_648(RAND_INT_RANGE(false, true)))
						{
							Function_646();
						}
						else
						{
							Function_617();
						}
						Function_219(&bLocal_869);
					}
				}
			}
		}
	}
}

void Function_646() //Position: 0x32452 / 205906
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_RidesBack2Jak", "Home01_RidesBack2Jak", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_647() //Position: 0x324A4 / 205988
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_RidesAwayJak", "Home01_RidesAwayJak", false, 2, 0, 0, 1);
		Function_395(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_648(bool bParam0) //Position: 0x324F4 / 206068
{
	if (bParam0 > 1)
	{
		return 1;
	}
	return 0;
}

void Function_649() //Position: 0x32506 / 206086
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Home01_NoMeetBoy", "Home01_NoMeetBoy", false, 1, 0, 0, 1);
		Function_395(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_650() //Position: 0x32550 / 206160
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Home01_NoMeetJackStbles", "Home01_NoMeetJackStbles", false, 1, 0, 0, 1);
		Function_395(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_651() //Position: 0x325A8 / 206248
{
	vector3 vVar0;
	vector3 vVar3;
	
	switch (iLocal_780)
	{
		case 0x00000000:
			iLocal_780++;
			break;
		
		case 0x00000001:
			if (IS_OBJECT_VALID((*&Local_4 + 792)[3]))
			{
				if (Function_382(Global_34573, (*&Local_4 + 792)[3], 200.0f))
				{
					iLocal_780++;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(bLocal_820))
			{
				GET_OBJECT_POSITION((*&Local_4 + 792)[3], &vVar0);
				GET_OBJECT_ORIENTATION((*&Local_4 + 792)[3], &vVar3);
				bLocal_820 = CREATE_ACTOR_IN_LAYOUT(bLocal_410, "HOME01_DREW_MAC", 608, vVar0, vVar3);
				if (IS_ACTOR_VALID(bLocal_820))
				{
					SET_ACTOR_FACTION(bLocal_820, 20);
					SNAP_ACTOR_TO_GRINGO(bLocal_820, Local_4.f_1520, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(bLocal_820, GET_GRINGO_FROM_OBJECT(Local_4.f_1520), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(bLocal_820, false);
				}
			}
			iLocal_780++;
			break;
		
		case 0x00000003:
			AI_QUICK_EXIT_GRINGO(bLocal_820, 1);
			Function_407(&(Local_611[317]), bLocal_820, "Drew", 0, 0x5f5e100, 1);
			Function_408(&(Local_611[317]), 1024, 1);
			iLocal_780++;
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(bLocal_820))
			{
				if (Function_379(Global_34573, bLocal_820, 115.0f))
				{
					TASK_CLEAR(bLocal_820);
					TASK_USE_GRINGO(bLocal_820, GET_GRINGO_FROM_OBJECT(Local_4.f_1524), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(bLocal_820, 2);
				}
			}
			break;
		
		case 0x00000005:
			iLocal_780++;
			break;
	}
	return;
}

void Function_652() //Position: 0x32748 / 206664
{
	if (IS_ACTOR_VALID(bLocal_543))
	{
		switch (iLocal_776)
		{
			case 0x00000000:
				iLocal_776++;
				break;
			
			case 0x00000001:
				if (bLocal_973)
				{
					CLEAR_ACTOR_MAX_SPEED(bLocal_543);
					CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
					MEMORY_PREFER_RIDING(bLocal_543, false);
					SET_ACTORS_HORSE(bLocal_543, bLocal_822[0]);
					SET_MOST_RECENT_MOUNT(bLocal_543, bLocal_822[0]);
					if (IS_GRINGO_VALID(bLocal_1020[2]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_543, GET_OBJECT_FROM_GRINGO(bLocal_1020[2]), "UseCase1", true, 0, 0);
					}
					bLocal_772 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(bLocal_1020[2]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[2], "UseCase1", true, 1);
					}
					if (IS_GRINGO_VALID(bLocal_1020[3]))
					{
						TASK_USE_GRINGO(false, bLocal_1020[3], "UseCase1", true, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_543, bLocal_772, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
					iLocal_776++;
				}
				else if (Function_271(&bLocal_545) <= 7.0f)
				{
					CLEAR_ACTOR_MAX_SPEED(bLocal_543);
					CLEAR_ACTOR_MAX_SPEED(bLocal_822[0]);
					MEMORY_PREFER_RIDING(bLocal_543, false);
					SET_ACTORS_HORSE(bLocal_543, bLocal_822[0]);
					SET_MOST_RECENT_MOUNT(bLocal_543, bLocal_822[0]);
					iLocal_776++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_958)
				{
					iLocal_958 = 0;
					iLocal_776++;
				}
				break;
			
			case 0x00000003:
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 1, 5.0f);
				TASK_MOUNT(false, bLocal_822[0], 0, 1, 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				iLocal_776++;
				break;
			
			case 0x00000004:
				if (IS_ACTOR_RIDING(bLocal_543) && IS_ACTOR_RIDING(Global_34573))
				{
					iLocal_776++;
				}
				if (iLocal_975)
				{
					iLocal_975 = 0;
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, bLocal_822[0], 0, 1, 2, 2147483647);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				break;
			
			case 0x00000005:
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543, Global_34573, 60.0f, 10.0f, 50.0f);
				MEMORY_PREFER_RIDING(bLocal_543, true);
				CLEAR_ACTOR_MIN_SPEED(bLocal_543);
				CLEAR_ACTOR_MAX_SPEED(bLocal_543);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_543, true);
				AI_RIDING_SET_ATTRIBUTE(bLocal_543, 2, 0,15f);
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bLocal_543, true);
				if (IS_ACTOR_VALID(bLocal_822[0]))
				{
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_822[0], 20.0f);
				}
				vLocal_922 = { 2,5f, 0.0f, 2.0f };
				bLocal_772 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 3.0f, 0, 0);
				TASK_FOLLOW_OBJECT(0, Global_34573, &vLocal_922, 0, 0, 0, 0, 0, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
				TASK_SEQUENCE_RELEASE(bLocal_772, 1);
				TASK_PRIORITY_SET(bLocal_543, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_543, 20.0f);
				iLocal_776++;
				break;
			
			case 0x00000006:
				if (!Function_614(Global_34573, &Local_4 + 452))
				{
					if (!GET_TASK_STATUS(bLocal_543, 61) != 1)
					{
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
						GET_OBJECT_POSITION((*&Local_4 + 792)[6], &vLocal_922);
						if (!iLocal_969)
						{
							iLocal_969 = 1;
							STREAMING_LOAD_BOUNDS(vLocal_922, 50.0f, 1);
						}
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &vLocal_922, 15.0f, 4);
						TASK_GO_NEAR_COORD(false, &vLocal_922, 1.0f, true);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_543, true);
					}
				}
				else if (Function_614(Global_34573, &Local_4 + 480) && IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_716))
				{
					if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
					{
						if (iLocal_969)
						{
							iLocal_969 = 0;
							STREAMING_UNLOAD_BOUNDS();
						}
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_4.f_1580, 4.0f, 1, 2.0f);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_543, true);
					}
				}
				else if (Function_614(Global_34573, &Local_4 + 492))
				{
					if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
					{
						if (iLocal_969)
						{
							iLocal_969 = 0;
							STREAMING_UNLOAD_BOUNDS();
						}
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_4.f_1584, 4.0f, 1, 2.0f);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_543, true);
					}
				}
				else if (Function_614(Global_34573, &Local_4 + 504))
				{
					if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
					{
						if (iLocal_969)
						{
							iLocal_969 = 0;
							STREAMING_UNLOAD_BOUNDS();
						}
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_4.f_1580, 4.0f, 1, 2.0f);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_543, true);
					}
				}
				else if (Function_614(Global_34573, &Local_4 + 532))
				{
					if (!GET_TASK_STATUS(bLocal_543, 72) != 1)
					{
						if (iLocal_969)
						{
							iLocal_969 = 0;
							STREAMING_UNLOAD_BOUNDS();
						}
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543);
						bLocal_772 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_4.f_1580, 4.0f, 1, 2.0f);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
						TASK_SEQUENCE_RELEASE(bLocal_772, 1);
						TASK_PRIORITY_SET(bLocal_543, true);
					}
				}
				else if (!GET_TASK_STATUS(bLocal_543, 26) != 1)
				{
					if (iLocal_969)
					{
						iLocal_969 = 0;
						STREAMING_UNLOAD_BOUNDS();
					}
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_543, Global_34573, 60.0f, 10.0f, 50.0f);
					vLocal_922 = { 2,5f, 0.0f, 2.0f };
					bLocal_772 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(0, Global_34573, &vLocal_922, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_543, bLocal_772);
					TASK_SEQUENCE_RELEASE(bLocal_772, 1);
					TASK_PRIORITY_SET(bLocal_543, true);
				}
				if (IS_VOLUME_VALID(Local_4.f_720) && IS_VOLUME_VALID(Local_4.f_724))
				{
					if (IS_ACTOR_VALID(bLocal_822[0]))
					{
						if (!IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_720))
						{
							if (HORSE_AUTO_JUMP_ENABLED_FOR_AI_RIDERS(bLocal_822[0]))
							{
								HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_822[0], 0);
							}
						}
						else if (!IS_ACTOR_IN_VOLUME(bLocal_543, Local_4.f_724))
						{
							if (!HORSE_AUTO_JUMP_ENABLED_FOR_AI_RIDERS(bLocal_822[0]))
							{
								HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_822[0], 1);
							}
						}
					}
				}
				break;
			
			case 0x00000007:
				iLocal_776++;
				break;
			}
	}
	return;
}

void Function_653() //Position: 0x32D5D / 208221
{
	switch (iLocal_540)
	{
		case 0x00000006:
			Function_667(&Local_411, 1);
			bLocal_410 = CREATE_LAYOUT("home01_DynamicLayout");
			Function_666();
			iLocal_795 = 0;
			iLocal_793 = 0;
			iLocal_773 = 0;
			iLocal_957 = 0;
			iLocal_971 = 0;
			iLocal_974 = 0;
			AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(15);
			Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			DISABLE_CHILD_SECTOR("beh_house02x");
			DISABLE_CHILD_SECTOR("beh_house02props01x");
			ENABLE_CHILD_SECTOR("beh_house01x");
			ENABLE_CHILD_SECTOR("beh_house01props01x");
			Function_351();
			Function_338(&bLocal_545);
			Function_338(&bLocal_875);
			iLocal_540 = 7;
			break;
		
		case 0x00000007:
			if (Function_664())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
				}
				if (!Function_349(&Local_411))
				{
					iLocal_540 = 8;
				}
				else
				{
					iLocal_540 = 11;
				}
			}
			break;
		
		case 0x00000008:
			bLocal_791 = Function_399();
			PRINTINT(bLocal_791);
			PRINTNL();
			Function_348(Global_34573, (*&Local_4 + 760)[0], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_543))
			{
				TASK_CLEAR(bLocal_543);
				TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_543, true);
				Function_348(bLocal_543, (*&Local_4 + 760)[2], 1, 1, 1);
				ACTOR_DISABLE_WEAPON_RENDER(bLocal_543, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_544))
			{
				TASK_CLEAR(bLocal_544);
				TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_544, true);
				Function_348(bLocal_544, (*&Local_4 + 760)[4], 1, 1, 1);
			}
			if (IS_VOLUME_VALID(Local_4.f_744))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_744);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_744);
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_744, 15);
			}
			iLocal_540 = 9;
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED() && (Function_375(Global_30717[1]) || bLocal_541 != 4294967295))
			{
				UI_DISABLE("LoadingSpinner");
				Function_219(&bLocal_875);
				Function_219(&bLocal_545);
				iLocal_540 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_365(bLocal_410);
			if (Function_663(&iLocal_805))
			{
				if ((Function_366() && Function_347()) || Function_271(&bLocal_545) < 5.0f)
				{
					if (Function_659("$/cutscene/HOME_01/HOME_01", "$/cutscene/home01_cs02_a/home01_cs02_a", &iLocal_532, &Local_411, bLocal_539, 88140, 213999, 87889, 87889, 86965, 213871, 86261, 85892, 54790, 0, 2, 1, 1, 2))
					{
						Function_219(&bLocal_875);
						Function_219(&bLocal_545);
						iLocal_540 = 11;
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_542 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_226(12, 0, 1);
			RESET_ACTOR_GAITS(bLocal_543, 0);
			SET_CRIPPLE_ENABLE(bLocal_543, 0);
			SET_ACTOR_FACTION(bLocal_543, 20);
			TASK_PRIORITY_SET(bLocal_543, true);
			TASK_STAND_STILL(bLocal_543, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_543, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_543, 50.0f);
			SET_ACTOR_HEALTH(bLocal_543, GET_ACTOR_MAX_HEALTH(bLocal_543));
			RESET_ACTOR_GAITS(bLocal_544, 0);
			TASK_PRIORITY_SET(bLocal_544, true);
			TASK_STAND_STILL(bLocal_544, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_544, 50.0f);
			SET_ACTOR_HEALTH(bLocal_544, GET_ACTOR_MAX_HEALTH(bLocal_544));
			SET_ALLOW_RIDE_BY_AI(bLocal_544, 0);
			Function_359("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_338(&bLocal_857);
			Function_338(&bLocal_860);
			Function_338(&bLocal_863);
			Function_338(&bLocal_854);
			Function_338(&bLocal_866);
			Function_338(&bLocal_869);
			Function_338(&iLocal_872);
			Function_219(&bLocal_875);
			Function_657(&uLocal_571, bLocal_410);
			Function_219(&bLocal_545);
			Function_338(&bLocal_548);
			Function_338(&bLocal_551);
			bLocal_539 = false;
			iLocal_540 = 0;
			Function_655(&Local_411, &bLocal_539, &iLocal_540);
			Function_654(StackVal, StackVal, StackVal, StackVal, StackVal, Function_296(), Local_411);
			switch (bLocal_539)
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
				
				case 0x00000009:
					break;
				
				case 0x0000000A:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_654(struct<25> Param0) //Position: 0x331C3 / 209347
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_539 = false;
			break;
		
		case 0x00000002:
			bLocal_539 = true;
			break;
		
		case 0x00000003:
			bLocal_539 = 2;
			break;
		
		case 0x00000004:
			bLocal_539 = 3;
			break;
		
		case 0x00000005:
			bLocal_539 = 4;
			break;
		
		case 0x00000006:
			bLocal_539 = 5;
			break;
		
		case 0x00000007:
			bLocal_539 = 6;
			break;
		
		case 0x00000008:
			bLocal_539 = 7;
			break;
		
		case 0x00000009:
			bLocal_539 = 8;
			break;
		
		case 0x0000000A:
			bLocal_539 = 9;
			break;
		
		case 0x0000000B:
			bLocal_539 = 10;
			break;
		
		case 0x0000000C:
			bLocal_539 = 101;
			break;
	}
}

void Function_655(int iParam0, var uParam1, int iParam2) //Position: 0x33274 / 209524
{
	if (Function_349(iParam0))
	{
		*uParam1 = Function_600(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_656();
	}
	return;
}

void Function_656() //Position: 0x332A8 / 209576
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

int Function_657(var uParam0, bool bParam1) //Position: 0x332F9 / 209657
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_658(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_658(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_658(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_658(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_658(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x33999 / 211353
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

bool Function_659(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, int iParam18) //Position: 0x33A5C / 211548
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_283(iParam2, uParam14);
	switch (*iParam2)
	{
		case 0x000003E8:
			if (iParam4 != 99 && (Function_349(iParam3) || iParam3->f_24 < 1))
			{
				*iParam2 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
			{
				*iParam2 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam0, 0, iParam15, iParam16, 1, 2);
				Call_Loc(uParam5);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_219(iParam2 + 4);
				*iParam2 = 1002;
			}
			else if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_282())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					Call_Loc(uParam5);
					Call_Loc(uParam7);
					Global_63097 = 0;
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					Function_219(iParam2 + 4);
					*iParam2 = 1004;
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
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_271(iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam2 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_271(iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(uParam7);
					if (StackVal)
					{
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_219(iParam2 + 4);
						*iParam2 = 1004;
					}
				}
			}
			break;
		
		case 0x000003EC:
			Call_Loc(uParam9);
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
						Function_278(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam1))
				{
					LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES: 2nd cutscene doesn't exist...");
					*iParam2 = 1105;
					return 0;
				}
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam1, 0, 1, 1, iParam17, iParam18);
				Call_Loc(uParam6);
				Global_63097 = 1;
				Function_219(iParam2 + 4);
				*iParam2 = 1005;
			}
			break;
		
		case 0x000003ED:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_271(iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam2 = 1105;
				return 0;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_271(iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!DECOR_CHECK_EXIST(Global_6289, "streamingtimer"))
				{
					DECOR_SET_FLOAT(Global_6289, "streamingtimer", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_6289, "streamingtimer")) < 2.0f)
				{
					if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
					{
						Call_Loc(uParam8);
						if (StackVal)
						{
							DECOR_REMOVE(Global_6289, "streamingtimer");
							STREAMING_RELEASE_MAIN_POI();
							CUTSCENE_MANAGER_PLAY_CUTSCENE();
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
							*iParam2 = 1006;
						}
					}
				}
				else
				{
					CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar0, &vVar3);
					STREAMING_LOAD_SCENE_EXT(vVar0, vVar3, 1);
				}
			}
			break;
		
		case 0x000003EE:
			Call_Loc(uParam10);
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
						Function_278(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				*iParam2 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(uParam11);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					Function_276();
					if (!IS_OBJECT_VALID(iParam2->f_16))
					{
						HUD_ENABLE(true);
					}
					else
					{
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(uParam12);
				if (StackVal)
				{
					Function_275(1);
					if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
					{
						DECOR_REMOVE(Global_34573, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(iParam2->f_20))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam2->f_20))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam2->f_20);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam2->f_20))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam2->f_20);
						}
						DESTROY_VOLUME(iParam2->f_20);
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
					*iParam2 = 1000;
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
				Call_Loc(uParam13);
				if (StackVal)
				{
					Call_Loc(uParam11);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam2 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam4 == 99) && !Function_349(iParam3))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam2 = 1105;
			break;
	}
	return 0;
}

int Function_660() //Position: 0x3436F / 213871
{
	switch (bLocal_539)
	{
		case 0x00000063:
			if (!Function_317() && !Function_307(&bLocal_418))
			{
				return 0;
			}
			if (IS_ACTOR_VALID(bLocal_819))
			{
				if (!DECOR_CHECK_EXIST(bLocal_410, "hidabigailintroscene"))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_819);
					DECOR_SET_BOOL(bLocal_410, "hidabigailintroscene", true);
				}
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_661() //Position: 0x343EF / 213999
{
	switch (bLocal_539)
	{
		case 0x00000063:
			if (!iLocal_978)
			{
				iLocal_978 = 1;
				Function_131(15, 1, 0, 0);
				Function_121(15, 0, 1);
				if (Function_635(15, 0, 0))
				{
				}
				if (Function_125(15))
				{
					if (Function_141(15))
					{
						if (Function_126(15))
						{
						}
					}
				}
				Function_662(1);
			}
			if (Global_28178 == 15)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_662(int iParam0) //Position: 0x3445A / 214106
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
	ADD_TIME(&bVar0, 0, 0, false, 1);
	SET_TIME_OF_DAY(bVar0);
	return;
}

bool Function_663(int iParam0) //Position: 0x3451C / 214300
{
	switch (iLocal_774)
	{
		case 0x00000000:
			iLocal_774++;
			break;
		
		case 0x00000001:
			if (!IS_OBJECT_VALID(bLocal_771))
			{
				bLocal_771 = CREATE_WORLD_SECTOR(bLocal_410, "beechersHope");
				if (IS_OBJECT_VALID(bLocal_771))
				{
				}
			}
			iLocal_774++;
			break;
		
		case 0x00000002:
			if (IS_WORLD_SECTOR_LOADED(bLocal_771))
			{
				iLocal_774++;
			}
			break;
		
		case 0x00000003:
			if (!IS_DOOR_VALID((*iParam0)[0]))
			{
				(*iParam0)[0] = Function_373("beechersHope", "stable01", 94);
				if (IS_DOOR_VALID((*iParam0)[0]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[1]))
			{
				(*iParam0)[1] = Function_373("beechersHope", "stable01", 95);
				if (IS_DOOR_VALID((*iParam0)[1]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[2]))
			{
				(*iParam0)[2] = Function_373("beechersHope", "stable01", 98);
				if (IS_DOOR_VALID((*iParam0)[2]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[3]))
			{
				(*iParam0)[3] = Function_373("beechersHope", "stable01", 99);
				if (IS_DOOR_VALID((*iParam0)[3]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[4]))
			{
				(*iParam0)[4] = Function_373("beechersHope", "stable01", 96);
				if (IS_DOOR_VALID((*iParam0)[4]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[5]))
			{
				(*iParam0)[5] = Function_373("beechersHope", "stable01", 97);
				if (IS_DOOR_VALID((*iParam0)[5]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[6]))
			{
				(*iParam0)[6] = Function_373("beechersHope", "house01", 1);
				if (IS_DOOR_VALID((*iParam0)[6]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[7]))
			{
				(*iParam0)[7] = Function_373("beechersHope", "house01", 2);
				if (IS_DOOR_VALID((*iParam0)[7]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[8]))
			{
				(*iParam0)[8] = Function_373("beechersHope", "house01", 3);
				if (IS_DOOR_VALID((*iParam0)[8]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[9]))
			{
				(*iParam0)[9] = Function_373("beechersHope", "house01", 4);
				if (IS_DOOR_VALID((*iParam0)[9]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[10]))
			{
				(*iParam0)[10] = Function_373("beechersHope", "house01", 5);
				if (IS_DOOR_VALID((*iParam0)[10]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[11]))
			{
				(*iParam0)[11] = Function_373("beechersHope", "house01", 6);
				if (IS_DOOR_VALID((*iParam0)[11]))
				{
				}
			}
			iLocal_774++;
			break;
		
		case 0x00000004:
			if (IS_DOOR_VALID((*iParam0)[0]))
			{
				Function_154((*iParam0)[0], 0);
				OPEN_DOOR_DIRECTION((*iParam0)[0], true);
			}
			if (IS_DOOR_VALID((*iParam0)[1]))
			{
				Function_154((*iParam0)[1], 0);
				OPEN_DOOR_DIRECTION((*iParam0)[1], false);
			}
			if (IS_DOOR_VALID((*iParam0)[2]))
			{
				Function_154((*iParam0)[2], 0);
				CLOSE_DOOR_FAST((*iParam0)[2]);
			}
			if (IS_DOOR_VALID((*iParam0)[3]))
			{
				Function_154((*iParam0)[3], 0);
				CLOSE_DOOR_FAST((*iParam0)[3]);
			}
			if (IS_DOOR_VALID((*iParam0)[4]))
			{
				Function_154((*iParam0)[4], 0);
				CLOSE_DOOR_FAST((*iParam0)[4]);
			}
			if (IS_DOOR_VALID((*iParam0)[5]))
			{
				Function_154((*iParam0)[5], 0);
				CLOSE_DOOR_FAST((*iParam0)[5]);
			}
			if (IS_DOOR_VALID((*iParam0)[6]))
			{
				Function_154((*iParam0)[6], 0);
				CLOSE_DOOR_FAST((*iParam0)[6]);
			}
			if (IS_DOOR_VALID((*iParam0)[7]))
			{
				Function_154((*iParam0)[7], 0);
				CLOSE_DOOR_FAST((*iParam0)[7]);
			}
			if (IS_DOOR_VALID((*iParam0)[8]))
			{
				Function_154((*iParam0)[8], 0);
				CLOSE_DOOR_FAST((*iParam0)[8]);
			}
			if (IS_DOOR_VALID((*iParam0)[9]))
			{
				Function_154((*iParam0)[9], 0);
				CLOSE_DOOR_FAST((*iParam0)[9]);
			}
			if (IS_DOOR_VALID((*iParam0)[10]))
			{
				Function_154((*iParam0)[10], 0);
				CLOSE_DOOR_FAST((*iParam0)[10]);
			}
			if (IS_DOOR_VALID((*iParam0)[11]))
			{
				Function_154((*iParam0)[11], 0);
				CLOSE_DOOR_FAST((*iParam0)[11]);
			}
			iLocal_774++;
			break;
		
		case 0x00000005:
			if (IS_DOOR_VALID((*iParam0)[7]))
			{
				if (!IS_PHYSINST_VALID(bLocal_1032))
				{
					bLocal_1032 = GET_PHYSINST_FROM_OBJECT((*iParam0)[7]);
					if (IS_PHYSINST_VALID(bLocal_1032))
					{
						HIDE_PHYSINST(bLocal_1032);
					}
				}
			}
			iLocal_774++;
			break;
		
		case 0x00000006:
			iLocal_976 = 1;
			iLocal_774++;
			break;
		
		case 0x00000007:
			return 1;
			break;
	}
	return 0;
}

bool Function_664() //Position: 0x34AA8 / 215720
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_665(0))
		{
			return 0;
		}
		if (!Function_317())
		{
			return 0;
		}
		if (!Function_307(&bLocal_418))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_543))
		{
			bLocal_543 = Function_298(12, 0, 1, -71,778f, 116,861f, 1410,798f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_543, 1))
		{
			return 0;
		}
		if (!Function_292())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_544))
		{
			bLocal_544 = Function_287(1, 1, -77,085f, 116,861f, 1416,701f, 81,95f, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_544, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_665(bool bParam0) //Position: 0x34B50 / 215888
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

void Function_666() //Position: 0x34B7E / 215934
{
	Function_318(&bLocal_418, "home01", 10, 0);
	Function_320(&bLocal_418, 608, 2, 0);
	Function_320(&bLocal_418, 981, 2, 0);
	Function_320(&bLocal_418, 977, 2, 0);
	Function_320(&bLocal_418, 976, 2, 0);
	Function_320(&bLocal_418, 980, 2, 0);
	Function_320(&bLocal_418, 477, 2, 0);
	Function_320(&bLocal_418, 478, 2, 0);
	Function_320(&bLocal_418, 479, 2, 0);
	Function_320(&bLocal_418, 480, 2, 0);
	Function_320(&bLocal_418, 481, 2, 0);
	Function_320(&bLocal_418, 482, 2, 0);
	Function_320(&bLocal_418, 483, 2, 0);
	Function_320(&bLocal_418, 484, 2, 0);
	Function_320(&bLocal_418, 485, 2, 0);
	Function_320(&bLocal_418, 1008, 2, 0);
	Function_320(&bLocal_418, 1009, 2, 0);
	Function_320(&bLocal_418, 1010, 2, 0);
	Function_320(&bLocal_418, 1011, 2, 0);
	Function_318(&bLocal_418, "home01_horse_tend", 5, 0);
	Function_318(&bLocal_418, "custom/home01_horse_tend", 8, 0);
	Function_318(&bLocal_418, "guide_herd", 5, 0);
	Function_318(&bLocal_418, "custom/guide_herd", 8, 0);
	Function_318(&bLocal_418, "wave_goodbye", 5, 0);
	Function_318(&bLocal_418, "custom/wave_goodbye", 8, 0);
	Function_318(&bLocal_418, "home01_look_back", 5, 0);
	Function_318(&bLocal_418, "custom/home01_look_back", 8, 0);
	return;
}

void Function_667(int iParam0, bool bParam1) //Position: 0x34D5D / 216413
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_673(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_349(iParam0))
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
	if (!Function_349(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_213();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_243();
	Function_277();
	Function_232("");
	Function_672(0);
	Function_671();
	Function_207();
	Function_206();
	ENABLE_JOURNAL_REPLAY(0);
	Function_670();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_362(0, 0x40400000);
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
	Function_669(13);
	Function_669(14);
	Function_669(25);
	Function_669(24);
	Function_669(12);
	Function_669(27);
	Function_669(26);
	Function_669(15);
	Function_668();
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

void Function_668() //Position: 0x35181 / 217473
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

void Function_669(int iParam0) //Position: 0x351F5 / 217589
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_670() //Position: 0x35215 / 217621
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

void Function_671() //Position: 0x35252 / 217682
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_672(int iParam0) //Position: 0x35266 / 217702
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_210())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_673(int iParam0, int iParam1) //Position: 0x3529B / 217755
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
			Function_674(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_674(int iParam0) //Position: 0x3531D / 217885
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

void Function_675() //Position: 0x3536B / 217963
{
	return;
}

void Function_676(var uParam0, bool bParam1) //Position: 0x35371 / 217969
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
					Function_531(*uParam0, 0);
				}
			}
			else
			{
				*uParam0 = bVar0;
				Function_531(*uParam0, 0);
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
						Function_531(*uParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
					}
					*uParam0 = bVar0;
					Function_531(*uParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_677(bool bParam0) //Position: 0x35436 / 218166
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

bool Function_678(int iParam0) //Position: 0x3547C / 218236
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
			Function_679(iParam0, 1);
			return 1;
		}
	}
	Function_679(iParam0, 0);
	return 0;
}

void Function_679(int iParam0, bool bParam1) //Position: 0x35503 / 218371
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

bool Function_680(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x35527 / 218407
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
		Function_679(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_699(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_698(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_698(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_684(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_679(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_683(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_682(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_683(&bVar17);
														strcpy(&Var18, "", 64);
														Function_681(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_232(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_682(StackVal, iParam2, bVar17);
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
	Function_679(iParam2, 0);
	return 0;
}

void Function_681(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x358C0 / 219328
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

void Function_682(var uParam0, int iParam1, bool bParam2) //Position: 0x359AB / 219563
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

void Function_683(bool bParam0) //Position: 0x35A21 / 219681
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_684(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x35A43 / 219715
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
			return Function_695(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_688(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_695(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_685(iParam0, bVar2);
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
						bVar2 = Function_695(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_685(iParam0, bVar2);
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

var Function_685(int iParam0, bool bParam1) //Position: 0x35B8D / 220045
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
				bParam1 = Function_687(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_686(16);
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
				bParam1 = Function_687(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_686(256);
			}
		}
	}
	return bParam1;
}

bool Function_686(int iParam0) //Position: 0x35CC0 / 220352
{
	return 2 | iParam0;
}

int Function_687(int iParam0) //Position: 0x35CCA / 220362
{
	return 4 | iParam0;
}

int Function_688(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x35CD4 / 220372
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
				iParam3 = Function_694(iParam0, iParam1, bParam4);
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
			return Function_686(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_689(iParam0, iParam1, 0, bParam4);
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
			return Function_686(16);
		}
	}
	return 0;
}

int Function_689(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x35D86 / 220550
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_693(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_692(iVar0, 3, 1, bParam3))
			{
				if (!Function_698(iParam0, 8, 1))
				{
					return Function_691(64, 1024, bParam2);
				}
			}
			return Function_690(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_692(iVar0, 2, 1, bParam3))
			{
				if (!Function_698(iParam0, 32, 1))
				{
					return Function_691(64, 1024, bParam2);
				}
			}
			return Function_690(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_692(iVar0, 1, 1, bParam3))
			{
				if (!Function_698(iParam0, 64, 1))
				{
					return Function_691(64, 1024, bParam2);
				}
			}
			return Function_690(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_692(iVar0, 3, 1, bParam3))
			{
				if (!Function_698(iParam0, 128, 1))
				{
					return Function_691(64, 1024, bParam2);
				}
			}
			return Function_690(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_692(iVar0, 1, 1, bParam3))
			{
				if (!Function_698(iParam0, 1024, 1))
				{
					return Function_691(64, 1024, bParam2);
				}
			}
			return Function_690(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_692(iVar0, 1, 1, bParam3))
			{
				if (!Function_698(iParam0, 1024, 1))
				{
					return Function_691(64, 1024, bParam2);
				}
			}
			return Function_690(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_690(int iParam0, int iParam1, bool bParam2) //Position: 0x35F40 / 220992
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_691(int iParam0, int iParam1, bool bParam2) //Position: 0x35F55 / 221013
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_692(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x35F6A / 221034
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_693(int iParam0) //Position: 0x35F87 / 221063
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

int Function_694(var uParam0, int iParam1, bool bParam2) //Position: 0x35FF6 / 221174
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_693(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_692(iVar0, 3, 1, bParam2))
			{
				if (!Function_698(uParam0, 8, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000009:
			if (Function_692(iVar0, 3, 1, bParam2))
			{
				if (!Function_698(uParam0, 8, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x0000006E:
			if (Function_692(iVar0, 2, 1, bParam2))
			{
				if (!Function_698(uParam0, 16, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x0000005B:
			if (Function_692(iVar0, 2, 1, bParam2))
			{
				if (!Function_698(uParam0, 32, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000031:
			if (Function_692(iVar0, 1, 1, bParam2))
			{
				if (!Function_698(uParam0, 64, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000007:
			if (Function_692(iVar0, 3, 1, bParam2))
			{
				if (!Function_698(uParam0, 128, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000008:
			if (Function_692(iVar0, 2, 1, bParam2))
			{
				if (!Function_698(uParam0, 256, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000014:
			if (Function_692(iVar0, 1, 1, bParam2))
			{
				if (!Function_698(uParam0, 512, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000018:
			if (Function_692(iVar0, 1, 1, bParam2))
			{
				if (!Function_698(uParam0, 512, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000057:
			if (Function_692(iVar0, 1, 1, bParam2))
			{
				if (!Function_698(uParam0, 1024, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000058:
			if (Function_692(iVar0, 1, 1, bParam2))
			{
				if (!Function_698(uParam0, 1024, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_695(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x36211 / 221713
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
						return Function_694(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_698(iParam0, 2, 1))
					{
						return Function_687(8);
					}
					return Function_686(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_698(iParam0, 4, 1))
					{
						return Function_687(16);
					}
					return Function_686(16);
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
							return Function_689(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_698(iParam0, 2, 1))
						{
							return Function_687(128);
						}
						return Function_686(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_698(iParam0, 4, 1))
						{
							return Function_687(256);
						}
						return Function_686(256);
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
						return Function_689(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_698(iParam0, 2, 1))
					{
						return Function_687(8);
					}
					return Function_686(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_698(iParam0, 4, 1))
					{
						return Function_687(16);
					}
					return Function_686(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_697(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_698(iParam0, 2, 1))
					{
						return Function_687(8);
					}
					return Function_686(8);
				}
				if (!Function_698(iParam0, 4, 1))
				{
					return Function_687(16);
				}
				return Function_686(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_689(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_696(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_686(128);
							}
							if (!Function_698(iParam0, 2, 1))
							{
								return Function_687(8);
							}
							return Function_686(8);
						}
						if (iParam4 == 2)
						{
							if (Function_696(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_686(256);
							}
							if (!Function_698(iParam0, 4, 1))
							{
								return Function_687(16);
							}
							return Function_686(16);
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

bool Function_696(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x364D0 / 222416
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

int Function_697(int iParam0, var uParam1, bool bParam2) //Position: 0x36589 / 222601
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_693(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_692(iVar0, 2, 1, bParam2))
			{
				if (!Function_698(iParam0, 16, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x0000005B:
			if (Function_692(iVar0, 2, 1, bParam2))
			{
				if (!Function_698(iParam0, 32, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000057:
			if (Function_692(iVar0, 1, 1, bParam2))
			{
				if (!Function_698(iParam0, 1024, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		case 0x00000058:
			if (Function_692(iVar0, 1, 1, bParam2))
			{
				if (!Function_698(iParam0, 1024, 1))
				{
					return Function_687(64);
				}
			}
			return Function_686(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_698(int iParam0, bool bParam1, bool bParam2) //Position: 0x3669D / 222877
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

int Function_699(int iParam0) //Position: 0x366C5 / 222917
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

bool Function_700(int iParam0) //Position: 0x366F6 / 222966
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_701(bool bParam0, int iParam1) //Position: 0x36714 / 222996
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
	Function_702(bVar0, iVar1);
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

void Function_702(bool bParam0, bool bParam1) //Position: 0x36797 / 223127
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

void Function_703(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x367C6 / 223174
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

