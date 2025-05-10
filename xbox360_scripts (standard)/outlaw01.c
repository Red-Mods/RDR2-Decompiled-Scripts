//Decompiled with MagicRDR v1.0
//Function Count : 555
//Statics Count : 722
//Natives Count : 727
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1601> Local_4 = { 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_709 = 2;
	iLocal_710 = 0;
	Local_406 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_468 = 99;
	iLocal_469 = 6;
	Local_461 = 1000;
	while (Function_266())
	{
		Function_211();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x48 / 72
{
	Function_210(&(Global_29008[Global_30640[0]]), 256);
	CLEAR_AMBIENT_SPAWN_RESTRICTIONS();
	CLEAR_AMBIENT_MOVE_RESTRICTIONS();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_473);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_472);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_473);
	Function_205();
	Function_202(0, 1, 0, 1, 1);
	Global_8492[014].f_8 = 548;
	Function_201(bLocal_405);
	Function_201(Local_4);
	Function_200();
	Function_173(bLocal_495, 0, 0, 1, 0, 1, 1, 1);
	Function_169(&bLocal_413);
	Function_169(&bLocal_426);
	Function_167();
	if (IS_ITERATOR_VALID(bLocal_471))
	{
		DESTROY_ITERATOR(bLocal_471);
	}
	RELEASE_LAYOUT_REF(bLocal_405);
	if (bLocal_494)
	{
		Function_24(Local_406, 1, 1, 1, 0);
	}
	else if (bLocal_495)
	{
		Function_20(Local_406);
	}
	else
	{
		Function_2(Local_406);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xFA / 250
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x11B / 283
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x136 / 310
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x157 / 343
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x16D / 365
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

void Function_7(int iParam0) //Position: 0x209 / 521
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x22A / 554
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

void Function_9() //Position: 0x270 / 624
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x289 / 649
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x2DC / 732
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

struct<16> Function_12(int iParam0) //Position: 0x400 / 1024
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x425 / 1061
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x445 / 1093
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x45C / 1116
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x477 / 1143
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6BE / 1726
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x6E7 / 1767
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

bool Function_19(int iParam0) //Position: 0x70B / 1803
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x720 / 1824
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x73E / 1854
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

struct<16> Function_22(int iParam0) //Position: 0x7E4 / 2020
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x80E / 2062
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA64 / 2660
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
		Function_162(&(Global_3422[iVar240]));
		Function_161(4194304);
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

void Function_25() //Position: 0xB51 / 2897
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

int Function_26(int iParam0, bool bParam1) //Position: 0xB81 / 2945
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

int Function_27(int iParam0) //Position: 0xBBE / 3006
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xBD8 / 3032
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xBEE / 3054
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEE5 / 3813
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

void Function_31(char* cParam0, int iParam1) //Position: 0xF51 / 3921
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xF88 / 3976
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

bool Function_33(var uParam0, int iParam1) //Position: 0x1000 / 4096
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1013 / 4115
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

int Function_35(int iParam0) //Position: 0x10B4 / 4276
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x10F1 / 4337
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1104 / 4356
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

void Function_38(int iParam0, int iParam1) //Position: 0x1316 / 4886
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x1350 / 4944
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

bool Function_40() //Position: 0x1392 / 5010
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x139B / 5019
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

void Function_42() //Position: 0x13EC / 5100
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

void Function_43() //Position: 0x141F / 5151
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

void Function_44() //Position: 0x1525 / 5413
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

void Function_45() //Position: 0x1558 / 5464
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

void Function_46() //Position: 0x16E6 / 5862
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

void Function_47() //Position: 0x189A / 6298
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x18A8 / 6312
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

var Function_49() //Position: 0x1A99 / 6809
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1AAE / 6830
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B49 / 6985
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1DE4 / 7652
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

var Function_53() //Position: 0x2411 / 9233
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2419 / 9241
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x242A / 9258
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x251F / 9503
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2538 / 9528
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x259D / 9629
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x25AF / 9647
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x25C1 / 9665
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

int Function_61(int iParam0) //Position: 0x26F1 / 9969
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2700 / 9984
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2739 / 10041
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2776 / 10102
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2910 / 10512
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

int Function_66(bool bParam0) //Position: 0x2B2A / 11050
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2B6B / 11115
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

struct<8> Function_68() //Position: 0x2BF4 / 11252
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

struct<8> Function_69() //Position: 0x2C8B / 11403
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

void Function_70() //Position: 0x2D0A / 11530
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D30 / 11568
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

void Function_72() //Position: 0x2F3A / 12090
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

bool Function_73(vector3 vParam0) //Position: 0x2FDB / 12251
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2FF3 / 12275
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

vector3 Function_75() //Position: 0x30DA / 12506
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x30E3 / 12515
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x30F2 / 12530
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3108 / 12552
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x31CF / 12751
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x31EC / 12780
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

bool Function_81(int iParam0) //Position: 0x36C8 / 14024
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x36DE / 14046
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x36FD / 14077
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3717 / 14103
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x377E / 14206
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

void Function_86() //Position: 0x399E / 14750
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A1E / 14878
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D70 / 15728
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

int Function_89(int iParam0) //Position: 0x3DF3 / 15859
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E0D / 15885
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E3B / 15931
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x40D9 / 16601
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

void Function_93(int iParam0, int iParam1) //Position: 0x429C / 17052
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x44FA / 17658
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

int Function_95() //Position: 0x467F / 18047
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

void Function_96() //Position: 0x471E / 18206
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

void Function_97(int iParam0) //Position: 0x47CD / 18381
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

var Function_98(int iParam0) //Position: 0x482B / 18475
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

int Function_99(int iParam0, bool bParam1) //Position: 0x48BA / 18618
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

var Function_100(int iParam0, int iParam1) //Position: 0x4A57 / 19031
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

void Function_101() //Position: 0x4A98 / 19096
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4AAE / 19118
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4AEE / 19182
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B2E / 19246
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B3D / 19261
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

int Function_106(int iParam0) //Position: 0x4D05 / 19717
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

var Function_107() //Position: 0x4D9A / 19866
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4DBF / 19903
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x527A / 21114
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

var Function_110(int iParam0) //Position: 0x558F / 21903
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5632 / 22066
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

int Function_112(int iParam0, bool bParam1) //Position: 0x582D / 22573
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x59C9 / 22985
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5A94 / 23188
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
			Function_159(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_154(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_156(Global_30668[0]);
			Function_145(0);
			Function_143(2, 1);
			Function_143(0, 1);
			Function_143(1, 1);
			break;
		
		case 0x00000003:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_156(Global_30668[0]);
			Function_156(Global_30640[0]);
			Function_141(0, 1);
			Function_141(15, 1);
			Function_141(9, 1);
			Function_141(12, 1);
			Function_141(16, 1);
			Function_143(3, 1);
			break;
		
		case 0x00000005:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_154(21, bParam2, 4);
			Function_156(Global_30668[0]);
			Function_143(39, 1);
			break;
		
		case 0x00000007:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_140(4))
					{
						Function_130(4, 0, 0, 1);
					}
				}
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_156(Global_30640[0]);
			Function_156(Global_30668[2]);
			Function_129(&(Global_29008[Global_30668[2]]), 32768);
			Function_210(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_154(9, bParam2, 4);
			Function_156(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_156(Global_30640[0]);
			Function_156(Global_30658[0]);
			Function_129(&(Global_29008[Global_30658[0]]), 32768);
			Function_210(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_156(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_156(Global_30640[1]);
			Function_156(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_156(Global_30679[0]);
			Function_156(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_156(Global_30658[5]);
			Function_156(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_154(21, bParam2, 4);
			Function_156(Global_30640[4]);
			Function_156(Global_30658[4]);
			Function_128(&Global_76847, 0x2000000);
			Function_128(&Global_76847, 0x4000000);
			Function_128(&Global_76847, 4096);
			Function_128(&Global_76847, 8);
			Function_128(&Global_76847, 8388608);
			Function_128(&Global_76847, 524288);
			Function_128(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_156(Global_30640[4]);
			Function_156(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_210(&(Global_29008[Global_30640[4]]), 256);
			Function_156(Global_30640[4]);
			Function_156(Global_30658[0]);
			Function_129(&(Global_29008[Global_30658[0]]), 32768);
			Function_210(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_156(Global_30640[0]);
			Function_156(Global_30640[5]);
			Function_154(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_156(Global_30658[3]);
			Function_129(&(Global_29008[Global_30658[3]]), 32768);
			Function_210(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_154(9, bParam2, 4);
			Function_156(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_129(&(Global_29008[Global_30679[1]]), 32768);
			Function_156(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_154(12, bParam2, 4);
			Function_210(&(Global_29008[Global_30679[1]]), 256);
			Function_156(Global_30668[3]);
			Function_156(Global_30693[0]);
			Function_156(Global_30685[0]);
			Function_145(4);
			Function_141(13, 1);
			Function_141(1, 1);
			Function_141(18, 1);
			Function_143(34, 1);
			Function_143(44, 1);
			Function_143(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_154(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_156(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_156(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_156(Global_30693[0]);
			Function_156(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_156(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_156(Global_30685[0]);
			Function_156(Global_30693[0]);
			Function_156(Global_30693[1]);
			Function_156(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_154(23, bParam2, 3);
			Function_141(23, 1);
			Function_156(Global_30685[0]);
			Function_156(Global_30685[2]);
			Function_129(&(Global_29008[Global_30685[2]]), 32768);
			Function_210(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_154(19, bParam2, 4);
			Function_156(Global_30685[0]);
			Function_156(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_154(24, bParam2, 3);
			Function_141(24, 1);
			Function_156(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_156(Global_30685[0]);
			Function_156(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_156(Global_30693[12]);
			Function_156(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_156(Global_30693[12]);
			Function_156(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_154(25, bParam2, 10);
			Function_156(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_156(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_156(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_154(13, bParam2, 4);
			Function_156(Global_30693[2]);
			Function_156(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_140(8))
				{
					Function_130(8, 0, 0, 1);
				}
			}
			Function_156(Global_30685[0]);
			Function_145(9);
			Function_141(7, 1);
			Function_141(11, 1);
			Function_141(3, 1);
			Function_141(20, 1);
			Function_143(57, 1);
			break;
		
		case 0x0000002A:
			Function_154(2, bParam2, 4);
			Function_156(Global_30717[0]);
			Function_156(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_156(Global_30717[0]);
			Function_156(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_154(17, bParam2, 4);
			Function_156(Global_30723[0]);
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_126(15))
				{
					Function_121(15, 0, 1);
				}
			}
			Function_210(&(Global_29008[Global_30717[1]]), 256);
			Function_145(11);
			Function_156(Global_30717[1]);
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_156(Global_30717[1]);
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_156(Global_30717[1]);
			Function_115(11);
			Function_145(12);
			Global_16537[1121].f_40 = 0;
			Function_143(56, 1);
			if (!bParam2)
			{
				if (!Function_140(9))
				{
					Function_130(9, 0, 0, 0);
				}
				if (!Function_140(10))
				{
					Function_130(10, 0, 0, 1);
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

void Function_115(int iParam0) //Position: 0x6384 / 25476
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x64F3 / 25843
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x65F9 / 26105
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(bool bParam0) //Position: 0x6626 / 26150
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

var Function_119(vector3 vParam0) //Position: 0x667D / 26237
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x66CB / 26315
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x671F / 26399
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
		if (!Function_140(bParam0))
		{
			Function_130(bParam0, 1, 0, 0);
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

void Function_122() //Position: 0x68BD / 26813
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x68C3 / 26819
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6967 / 26983
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x69BC / 27068
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x69D2 / 27090
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6A23 / 27171
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

void Function_128(var uParam0, int iParam1) //Position: 0x6A50 / 27216
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A5F / 27231
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6A6E / 27246
{
	struct<8> Var0;
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_139(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_140(bParam0))
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
		Function_133(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_132() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_132() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_131(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_131(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6BB8 / 27576
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

bool Function_132() //Position: 0x6C03 / 27651
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_133(bool bParam0) //Position: 0x6C30 / 27696
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
			if (Function_137(bParam0, Function_138(bVar24)))
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
			if (Function_137(bParam0, Function_138(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_136(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_135(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_134(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_134(int iParam0) //Position: 0x6DE0 / 28128
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

void Function_135(bool bParam0, bool bParam1) //Position: 0x6E37 / 28215
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

var Function_136(int iParam0) //Position: 0x6E5C / 28252
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

bool Function_137(bool bParam0, int iParam1) //Position: 0x6EB2 / 28338
{
	int iVar0;
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_138(bool bParam0) //Position: 0x6F11 / 28433
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_139(int iParam0) //Position: 0x6F1D / 28445
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_140(int iParam0) //Position: 0x6F39 / 28473
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

int Function_141(int iParam0, int iParam1) //Position: 0x6F8B / 28555
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_142(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_142(int iParam0, int iParam1) //Position: 0x6FFE / 28670
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x705A / 28762
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_144(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x70CB / 28875
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_145(int iParam0) //Position: 0x7125 / 28965
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_153(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_153(Global_16537[iParam021].f_72, 0);
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
			Function_131("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_116(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_130(14, 1, 0, 0);
				Function_146(14, 1, 0, 0, 0);
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
			Function_131("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_85(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_84(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_146(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x73D1 / 29649
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
	if (!Function_139(3) || uParam3)
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
			Function_131(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_137(bParam0, bParam1))
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
		Function_133(bParam0);
		if (StackVal && !Function_152(((((!Function_132() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_152((((Function_132() || Global_3380) || Global_3392) || Global_3384), 1))
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
			Function_148();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_147(3, bParam1);
				break;
			
			case 0x00000005:
				Function_147(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_147(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_147(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_147(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_147(2, SHIFT_LEFT(bParam1, 18));
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

void Function_147(int iParam0, bool bParam1) //Position: 0x7660 / 30304
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

void Function_148() //Position: 0x76BF / 30399
{
	if (Function_125(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_151(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_151(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_149(int iParam0, int iParam1) //Position: 0x773A / 30522
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
					if (Function_150(13) && iVar16)
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
					if (Function_150(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(23) && iVar17)
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
					if (Function_150(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(27) && iVar18)
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
					if (Function_150(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(49) && iVar15)
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
					if (Function_150(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_150(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_150(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(15) && iVar19)
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

int Function_150(int iParam0) //Position: 0x8333 / 33587
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_151(int iParam0) //Position: 0x8348 / 33608
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

bool Function_152(bool bParam0, bool bParam1) //Position: 0x8397 / 33687
{
	return (bParam0 && bParam1) == 0;
}

void Function_153(bool bParam0, bool bParam1) //Position: 0x83A4 / 33700
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

void Function_154(bool bParam0, bool bParam1, int iParam2) //Position: 0x83F5 / 33781
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_155(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_159(bParam0, 0, 0);
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

bool Function_155(int iParam0, int iParam1) //Position: 0x8463 / 33891
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_156(int iParam0) //Position: 0x8476 / 33910
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_158(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_129(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_85(473, 1, 0, 0);
		iVar0 = Function_157(iParam0);
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

var Function_157(int iParam0) //Position: 0x8575 / 34165
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

bool Function_158(var uParam0, int iParam1) //Position: 0x85CD / 34253
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_159(bool bParam0, bool bParam1, int iParam2) //Position: 0x85E9 / 34281
{
	if (!Function_160(bParam0))
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

bool Function_160(int iParam0) //Position: 0x8640 / 34368
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_161(bool bParam0) //Position: 0x8652 / 34386
{
	bool bVar0;
	
	if (Function_152(bParam0, 1) && Function_152(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_162(int iParam0) //Position: 0x8686 / 34438
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
			Function_163(4, 0, 0);
		}
	}
	return;
}

void Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x86ED / 34541
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
		Function_164(Global_16524, bVar0, 1);
	}
	return;
}

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87CA / 34762
{
	int iVar0;
	
	Function_166(bParam0);
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
	Function_165();
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

void Function_165() //Position: 0x8943 / 35139
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_166(int iParam0) //Position: 0x894F / 35151
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

void Function_167() //Position: 0x8995 / 35221
{
	Function_168();
	return;
}

void Function_168() //Position: 0x899E / 35230
{
	Function_169(&Local_4 + 4);
	Function_169(&Local_4 + 104);
	Function_169(&Local_4 + 132);
	Function_169(&Local_4 + 208);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_169(bool bParam0) //Position: 0x89C5 / 35269
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_170(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_170(var uParam0, int iParam1) //Position: 0x89EB / 35307
{
	if (Function_172(uParam0[iParam13], 4))
	{
		if (Function_172(uParam0[iParam13], 1))
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
			Function_171(uParam0[iParam13], 1);
			Function_171(uParam0[iParam13], 2);
			Function_171(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x8B19 / 35609
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_172(var uParam0, bool bParam1) //Position: 0x8B33 / 35635
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8B50 / 35664
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_199());
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
	Function_198();
	CLEAR_PRINTED_OBJECTIVE();
	Function_197();
	Function_195(0);
	Function_194();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_193();
	Function_192();
	Function_198();
	ENABLE_JOURNAL_REPLAY(1);
	Function_191(1);
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
		Function_190(Global_34573);
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
	Function_189(Global_28178);
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
	Function_188(1178687);
	Function_186(33039);
	Function_185(0x218003f);
	Function_184(4194560);
	Function_183();
	Function_182();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_179(0, 1, 1);
	}
	else
	{
		Function_179(0, 1, 1);
	}
	Function_178();
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
	Function_174();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_174() //Position: 0x8D41 / 36161
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
		if (Function_177() > 3)
		{
			bVar0 *= 2;
		}
		Function_175(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_175(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x8D97 / 36247
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_176((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_176(bool bParam0) //Position: 0x8DDD / 36317
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_177() //Position: 0x8E02 / 36354
{
	return Global_12976.f_156;
}

void Function_178() //Position: 0x8E0D / 36365
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_210(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_179(int iParam0, bool bParam1, int iParam2) //Position: 0x8E37 / 36407
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
			Function_129(&(Global_29008[Global_29006]), 131072);
			Function_210(&(Global_29008[Global_29006]), 2097152);
			Function_180(Global_29006);
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
				if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_210(&(Global_29008[iVar0]), 2097155);
					Function_129(&(Global_29008[iVar0]), 262144);
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

void Function_180(int iParam0) //Position: 0x8F42 / 36674
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_181())
			{
				return;
			}
		}
		if (!Function_158(&(Global_29008[iParam0]), 2048))
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

bool Function_181() //Position: 0x8FC1 / 36801
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_182() //Position: 0x901E / 36894
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

void Function_183() //Position: 0x9044 / 36932
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

void Function_184(int iParam0) //Position: 0x906A / 36970
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_185(int iParam0) //Position: 0x9087 / 36999
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_186(int iParam0) //Position: 0x909A / 37018
{
	Function_187(&Global_28842, iParam0);
	return;
}

void Function_187(var uParam0, int iParam1) //Position: 0x90A8 / 37032
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_188(bool bParam0) //Position: 0x90C3 / 37059
{
	if (Function_152(bParam0, 1) && !Function_152(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_189(int iParam0) //Position: 0x90F0 / 37104
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

void Function_190(bool bParam0) //Position: 0x91B7 / 37303
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

void Function_191(bool bParam0) //Position: 0x9233 / 37427
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

void Function_192() //Position: 0x92A7 / 37543
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

void Function_193() //Position: 0x92E8 / 37608
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

void Function_194() //Position: 0x9329 / 37673
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_195(int iParam0) //Position: 0x933D / 37693
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_196())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_196() //Position: 0x9379 / 37753
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

void Function_197() //Position: 0x939E / 37790
{
	Global_8722 = 0.0f;
	return;
}

void Function_198() //Position: 0x93A8 / 37800
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

int Function_199() //Position: 0x93D3 / 37843
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_200() //Position: 0x93ED / 37869
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_201(bool bParam0) //Position: 0x93F6 / 37878
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

int Function_202(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x944E / 37966
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

void Function_203(bool bParam0) //Position: 0x976C / 38764
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

void Function_204(bool bParam0) //Position: 0x9798 / 38808
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_205() //Position: 0x97AD / 38829
{
	if (IS_VOLUME_VALID((*&Local_4 + 500)[0]))
	{
		DESTROY_VOLUME((*&Local_4 + 500)[0]);
	}
	Function_209();
	Function_208();
	Function_207();
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_472);
	if (SQUAD_IS_VALID(Local_4.f_388))
	{
		Function_206(Local_4.f_388);
	}
	if (SQUAD_IS_VALID(Local_4.f_348))
	{
		Function_206(Local_4.f_348);
	}
	if (IS_OBJECT_VALID(bLocal_499))
	{
		DESTROY_OBJECT(bLocal_499);
	}
	if (IS_ACTOR_VALID(bLocal_532))
	{
		DESTROY_ACTOR(bLocal_532);
	}
	Function_203(bLocal_473);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_472);
	if (IS_OBJECT_VALID(bLocal_501))
	{
		DESTROY_OBJECT(bLocal_501);
	}
	if (IS_OBJECT_VALID(bLocal_500))
	{
		DESTROY_OBJECT(bLocal_500);
	}
	if (IS_OBJECTSET_VALID(bLocal_706))
	{
		DESTROY_OBJECTSET(bLocal_706);
	}
	if (IS_OBJECTSET_VALID(bLocal_707))
	{
		DESTROY_OBJECTSET(bLocal_707);
	}
	return;
}

void Function_206(bool bParam0) //Position: 0x9868 / 39016
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

void Function_207() //Position: 0x98AC / 39084
{
	Function_169(&Local_4 + 208);
	return;
}

void Function_208() //Position: 0x98B9 / 39097
{
	Function_169(&Local_4 + 132);
	return;
}

void Function_209() //Position: 0x98C6 / 39110
{
	Function_169(&Local_4 + 104);
	return;
}

void Function_210(var uParam0, int iParam1) //Position: 0x98D3 / 39123
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_211() //Position: 0x98EA / 39146
{
	var uVar0[12];
	int iVar13;
	
	if (Function_265())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02";
		uVar0[4] = "Stage 03";
		uVar0[5] = "Last Stage";
		uVar0[6] = "Skip Escort";
		uVar0[7] = "test2";
		uVar0[8] = "test3";
		iVar13 = Function_251(&uLocal_454, &uVar0, &Local_406 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_250(&iVar13, &bLocal_468, &iLocal_469, &Local_461))
		{
			Function_243();
			Function_242();
		}
		if (iVar13 == 0)
		{
			Function_243();
			Function_242();
			Function_241(&bLocal_494, 8);
		}
		else if (iVar13 == 1)
		{
			Function_243();
			Function_242();
			Function_237(bLocal_468);
			Function_233(StackVal, StackVal, 5, &bLocal_495, &bLocal_468, Function_239(bLocal_468), Function_237(bLocal_468), 0);
		}
		else if (iVar13 == 2)
		{
			Function_243();
			Function_242();
			Function_229(&bLocal_496, 4);
		}
		else if (iVar13 == 3)
		{
			Function_243();
			Function_242();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			SET_MOVER_FROZEN(bLocal_472, false);
			Function_227(&iLocal_474);
			bLocal_468 = true;
			iLocal_469 = 0;
			Local_461 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_243();
			Function_242();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_212();
			Function_227(&iLocal_474);
			bLocal_468 = 2;
			iLocal_469 = 0;
			Local_461 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_243();
			Function_242();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&iLocal_474);
			bLocal_468 = 101;
			iLocal_469 = 0;
			Local_461 = 1000;
		}
		else if (iVar13 == 6)
		{
			Function_243();
			iLocal_709 = 0;
		}
		else if (iVar13 == 7)
		{
			Function_243();
		}
		else if (iVar13 == 8)
		{
			AI_GOAL_LOOK_CLEAR((*&Local_4 + 368)[12]);
			AI_GOAL_LOOK_AT_ACTOR((*&Local_4 + 368)[12], Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
		}
	}
	return;
}

void Function_212() //Position: 0x9AF3 / 39667
{
	Function_225(0, 0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_472);
	if (SQUAD_IS_VALID(Local_4.f_388))
	{
		Function_206(Local_4.f_388);
	}
	Function_223();
	Function_222(bLocal_532, (*&Local_4 + 992)[5], 1, 1, 1);
	if (!IS_ACTOR_ALIVE(bLocal_473))
	{
		bLocal_473 = Function_213(1, 0, 0, 0, 0, 0, 1, 0);
		Function_222(bLocal_473, (*&Local_4 + 992)[10], 1, 1, 1);
	}
	else
	{
		Function_222(bLocal_473, (*&Local_4 + 992)[10], 1, 1, 1);
	}
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		ACTOR_MOUNT_ACTOR(Global_34573, bLocal_473);
	}
	if (!IS_ACTOR_RIDING(bLocal_472))
	{
		ACTOR_MOUNT_ACTOR(bLocal_472, bLocal_532);
	}
	return;
}

bool Function_213(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x9B93 / 39827
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
	if (Global_3381 || Function_221(1))
	{
		Function_220(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_219())
		{
			return "";
		}
	}
	if (!Function_217())
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
		Function_216(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_216(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_216(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_216(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_215(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_215(StackVal, StackVal, vVar5, 0, 1, 1);
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

void Function_214(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9EEB / 40683
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

var Function_215(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x9F28 / 40744
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

vector3 Function_216(bool bParam0) //Position: 0x9FC3 / 40899
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

bool Function_217() //Position: 0x9FEA / 40938
{
	if (Function_218() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_218() //Position: 0xA000 / 40960
{
	return Global_12976.f_152;
}

bool Function_219() //Position: 0xA00B / 40971
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_220(var uParam0, bool bParam1, bool bParam2) //Position: 0xA02B / 41003
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

int Function_221(int iParam0) //Position: 0xA058 / 41048
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

void Function_222(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xA08E / 41102
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

void Function_223() //Position: 0xA195 / 41365
{
	if (!IS_ACTOR_VALID(bLocal_532))
	{
		Function_224();
		bLocal_532 = (*&Local_4 + 392)[02];
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_532, 0);
		TASK_STAND_STILL(bLocal_532, -1.0f, 0, 0);
		SET_ACTORS_HORSE(bLocal_472, bLocal_532);
	}
	return;
}

void Function_224() //Position: 0xA1CF / 41423
{
	(*&Local_4 + 392)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse", 977, -2180,674f, 16,26433f, 2573,06f, 0.0f, 177,5444f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 392)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 392)[02], 20);
	AI_BEHAVIOR_SET_ALLOW((*&Local_4 + 392)[02], 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 392)[02], true);
	ACCESSORIZE_HORSE((*&Local_4 + 392)[02], 3);
	return;
}

void Function_225(int iParam0, bool bParam1, bool bParam2) //Position: 0xA244 / 41540
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
				Function_226(bVar0);
			}
		}
	}
	return;
}

void Function_226(bool bParam0) //Position: 0xA33B / 41787
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

void Function_227(int iParam0) //Position: 0xA367 / 41831
{
	Function_228(iParam0, 0.0f);
	return;
}

void Function_228(int iParam0, bool bParam1) //Position: 0xA373 / 41843
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_229(bool bParam0, int iParam1) //Position: 0xA394 / 41876
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(iParam1);
	*bParam0 = 1;
	return;
}

void Function_230(int iParam0) //Position: 0xA3B7 / 41911
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_232("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_221(2) || Function_221(8)) || Function_221(9)) || Function_221(10))
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
		Function_231();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_231();
	}
	return;
}

void Function_231() //Position: 0xA4AE / 42158
{
	Global_34165.f_48 = 4294967295;
	return;
}

void Function_232(bool bParam0) //Position: 0xA4BA / 42170
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_233(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA524 / 42276
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_234(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_230(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_234(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA561 / 42337
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

var Function_235(int iParam0) //Position: 0xA5E4 / 42468
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

var Function_236(vector3 vParam0, bool bParam3) //Position: 0xAA92 / 43666
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

vector3 Function_237(int iParam0) //Position: 0xAAFD / 43773
{
	Function_238(iParam0 + 1);
	return StackVal, StackVal, Function_238(iParam0 + 1);
}

vector3 Function_238(int iParam0) //Position: 0xAB0A / 43786
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_216((*&Local_4 + 588)[0]);
			return StackVal, StackVal, Function_216((*&Local_4 + 588)[0]);
			break;
		
		case 0x00000001:
			Function_216((*&Local_4 + 612)[0]);
			return StackVal, StackVal, Function_216((*&Local_4 + 612)[0]);
			break;
		
		case 0x00000002:
			Function_216((*&Local_4 + 992)[0]);
			return StackVal, StackVal, Function_216((*&Local_4 + 992)[0]);
			break;
		
		default:
			Function_216((*&Local_4 + 1180)[0]);
			return StackVal, StackVal, Function_216((*&Local_4 + 1180)[0]);
			break;
	}
	Function_216((*&Local_4 + 588)[0]);
	return StackVal, StackVal, Function_216((*&Local_4 + 588)[0]);
}

int Function_239(int iParam0) //Position: 0xAB70 / 43888
{
	return Function_240(iParam0 + 1);
}

int Function_240(int iParam0) //Position: 0xAB7D / 43901
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 588)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 612)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 992)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1180)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 588)[0]);
}

void Function_241(bool bParam0, int iParam1) //Position: 0xABE3 / 44003
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(iParam1);
	*bParam0 = 1;
	return;
}

void Function_242() //Position: 0xAC06 / 44038
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_243() //Position: 0xAC1B / 44059
{
	Function_245();
	Function_244(10, 3);
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0xAC2A / 44074
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

void Function_245() //Position: 0xAD61 / 44385
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_249())
	{
		Function_248(10, 3);
	}
	else
	{
		Function_246();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_246() //Position: 0xADAC / 44460
{
	Function_247(25, 2);
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0xADB8 / 44472
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

void Function_248(int iParam0, int iParam1) //Position: 0xAFB6 / 44982
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

bool Function_249() //Position: 0xB0ED / 45293
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
				if (!Function_152(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_250(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB154 / 45396
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_243();
			Function_242();
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

var Function_251(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB1FA / 45562
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_264(&Var15, &Var0);
	uVar20 = Function_263(*uParam1, &Var15);
	Function_262(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_261(uParam0, uVar20);
	Function_259(StackVal, uParam0, Var15.f_12);
	Function_257(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_256(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_253(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_252(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_252(int iParam0, int iParam1, int iParam2) //Position: 0xB2C1 / 45761
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

bool Function_253(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB31D / 45853
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
				Function_255(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_255(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_252(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_254(bParam1->f_32);
	}
	else
	{
		Function_254(bParam1->f_32);
	}
	return 0;
}

void Function_254(bool bParam0) //Position: 0xB4A3 / 46243
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

void Function_255(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB4DD / 46301
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

var Function_256(int iParam0, var uParam1, int iParam2) //Position: 0xB58B / 46475
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_257(var uParam0, int iParam1, int iParam2) //Position: 0xB5AF / 46511
{
	switch (Function_258())
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

int Function_258() //Position: 0xB64B / 46667
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

void Function_259(var uParam0, int iParam1, int iParam2) //Position: 0xB687 / 46727
{
	switch (Function_260(uParam0))
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

int Function_260(bool bParam0) //Position: 0xB71F / 46879
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_152(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_152(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_152(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_152(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(bParam0, 0x20000000);
	return 0;
}

var Function_261(var uParam0, int iParam1) //Position: 0xB86A / 47210
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

void Function_262(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB9B9 / 47545
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

var Function_263(int iParam0, int iParam1) //Position: 0xBA4C / 47692
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_264(var uParam0, var uParam1) //Position: 0xBA66 / 47718
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

bool Function_265() //Position: 0xBAB4 / 47796
{
	return Global_30920;
}

bool Function_266() //Position: 0xBABD / 47805
{
	if (IS_EXITFLAG_SET())
	{
		Function_237(bLocal_468);
		Function_233(StackVal, StackVal, 4, &bLocal_495, &bLocal_468, Function_239(bLocal_468), Function_237(bLocal_468), 0);
		return 0;
	}
	Function_554(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_406, bLocal_468, iLocal_469, &bLocal_496, &bLocal_494, &bLocal_495);
	if (bLocal_468 == 99 && bLocal_468 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573) && !bLocal_705)
		{
			if (IS_ACTOR_VALID((*&Local_4 + 368)[12]))
			{
				if (!IS_ACTOR_ALIVE((*&Local_4 + 368)[12]))
				{
					bLocal_705 = true;
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_553();
					bLocal_705 = true;
				}
				else
				{
					bLocal_705 = true;
				}
			}
			else
			{
				bLocal_705 = true;
			}
		}
		if (bLocal_705)
		{
			Function_237(bLocal_468);
			Function_233(StackVal, StackVal, 1, &bLocal_495, &bLocal_468, Function_239(bLocal_468), Function_237(bLocal_468), 0);
			return 1;
		}
		Function_552(&bLocal_473, bLocal_472);
		Function_545(Function_549(&uLocal_531, &uLocal_529, 1, 7.0f, iLocal_503));
		if (Function_525(&Local_611, &uLocal_571, &uLocal_697, bLocal_471, iLocal_503))
		{
			if (Function_510(&uLocal_697))
			{
				Function_237(bLocal_468);
				Function_233(StackVal, StackVal, 5, &bLocal_495, &bLocal_468, Function_239(bLocal_468), Function_237(bLocal_468), 0);
				return 1;
			}
		}
		if (Global_3403 || Global_3404)
		{
			Function_237(bLocal_468);
			Function_233(StackVal, StackVal, 2, &bLocal_495, &bLocal_468, Function_239(bLocal_468), Function_237(bLocal_468), 0);
			return 1;
		}
		if (Function_509(2048))
		{
			Function_237(bLocal_468);
			Function_233(StackVal, StackVal, 3, &bLocal_495, &bLocal_468, Function_239(bLocal_468), Function_237(bLocal_468), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(bLocal_472) || FIRE_IS_ACTOR_ON_FIRE(bLocal_472))
		{
			Function_232("Outlaw_dead");
			Function_237(bLocal_468);
			Function_233(StackVal, StackVal, 5, &bLocal_495, &bLocal_468, Function_239(bLocal_468), Function_237(bLocal_468), 0);
			return 1;
		}
		Function_508();
	}
	switch (bLocal_468)
	{
		case 0x00000063:
			Function_489();
			break;
		
		case 0x00000000:
			Function_462();
			break;
		
		case 0x00000001:
			Function_430();
			break;
		
		case 0x00000002:
			Function_350();
			break;
		
		case 0x00000065:
			Function_269();
			break;
		
		case 0x00000064:
			if (Function_268(&bLocal_495))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_267(&bLocal_468, &iLocal_469, &Local_461))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_494)
	{
		Function_241(&bLocal_494, 8);
		Function_1();
		return 0;
	}
	if (bLocal_495 && bLocal_468 == 100)
	{
		Function_237(bLocal_468);
		Function_233(StackVal, StackVal, 5, &bLocal_495, &bLocal_468, Function_239(bLocal_468), Function_237(bLocal_468), 0);
	}
	if (bLocal_496)
	{
		Function_229(&bLocal_496, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_267(var uParam0, var uParam1, int iParam2) //Position: 0xBD06 / 48390
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

bool Function_268(int iParam0) //Position: 0xBD46 / 48454
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_269() //Position: 0xBD59 / 48473
{
	switch (iLocal_469)
	{
		case 0x00000000:
			Function_346(0);
			SET_ACTOR_HEALTH(bLocal_472, GET_ACTOR_MAX_HEALTH(bLocal_472));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_343();
				Function_216((*&Local_4 + 1208)[1]);
				vLocal_517 = { StackVal, StackVal, Function_216((*&Local_4 + 1208)[1]) };
				bLocal_542 = FIND_NEAREST_DOOR(&vLocal_517, 3.0f);
				Function_153(bLocal_542, 1);
				OPEN_DOOR_DIRECTION_FAST(bLocal_542, false);
				bLocal_470 = Global_30628[0];
				if (!Function_342(bLocal_470))
				{
					Function_341(&Local_406);
				}
				Function_222(Global_34573, (*&Local_4 + 1180)[1], 1, 1, 1);
				Function_227(&iLocal_474);
				iLocal_469 = 1;
			}
			else
			{
				Function_227(&iLocal_474);
				iLocal_469 = 3;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_342(bLocal_470) || bLocal_470 != 4294967295))
			{
				Function_227(&iLocal_474);
				iLocal_469 = 2;
			}
			break;
		
		case 0x00000002:
			Function_227(&iLocal_474);
			iLocal_469 = 3;
			break;
		
		case 0x00000003:
			if (Function_270("$/cutscene/OUTLAW_01_END/OUTLAW_01_END", &Local_461, &Local_406, &bLocal_468, 69252, 68434, 67649, 67055, 66710, 51750, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_227(&iLocal_474);
				iLocal_469 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				bLocal_494 = true;
			}
			break;
	}
	return;
}

bool Function_270(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xBEE9 / 48873
{
	if (!bParam15)
	{
		Function_283(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_282(iParam2) || iParam2->f_24 < 1))
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
				Function_227(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_281())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_280(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_227(iParam1 + 4);
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
					Function_280(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_277(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_277(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_275(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_280(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_227(iParam1 + 4);
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
						Function_274(1.0f);
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
						Function_272();
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
					Function_271(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_282(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_271(bool bParam0) //Position: 0xC4FD / 50429
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

void Function_272() //Position: 0xC5A2 / 50594
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_273();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_273() //Position: 0xC5E7 / 50663
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_274(bool bParam0) //Position: 0xC5F9 / 50681
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

void Function_275(bool bParam0, bool bParam1) //Position: 0xC616 / 50710
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
			if ((bVar3 == Global_34573 && !Function_276(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_276(bool bParam0) //Position: 0xC696 / 50838
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

float Function_277(int iParam0) //Position: 0xC6C5 / 50885
{
	if (Function_279(iParam0))
	{
		if (Function_278(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_278(int iParam0) //Position: 0xC78D / 51085
{
	return Function_152(*iParam0, 2);
}

bool Function_279(int iParam0) //Position: 0xC79A / 51098
{
	return Function_152(*iParam0, 1);
}

int Function_280(bool bParam0) //Position: 0xC7A7 / 51111
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

bool Function_281() //Position: 0xC85F / 51295
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

bool Function_282(int iParam0) //Position: 0xC899 / 51353
{
	return iParam0->f_20;
}

void Function_283(var uParam0, int iParam1) //Position: 0xC8A3 / 51363
{
	Function_284(uParam0, iParam1, 0);
	return;
}

void Function_284(int iParam0, bool bParam1, bool bParam2) //Position: 0xC8B1 / 51377
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
				*iParam0 = 1105;
			}
		}
	}
	return;
}

void Function_285(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC9FD / 51709
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

int Function_286() //Position: 0xCA26 / 51750
{
	switch (bLocal_468)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				if (Function_320() && Function_303())
				{
					Function_301();
					Function_299();
					Function_222(Global_34573, (*&Local_4 + 588)[1], 1, 1, 1);
					Function_222(bLocal_472, (*&Local_4 + 588)[3], 1, 1, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_472, "outlaw_sit", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_472, "outlaw_sit");
					SET_REACT_NODE_FOR_ACTOR(bLocal_472, "outlaw_sit");
					SET_MOVER_FROZEN(bLocal_472, true);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_472);
					TASK_STAND_STILL(bLocal_472, -1.0f, 0, 0);
					Function_287();
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
			return 1;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_287() //Position: 0xCB0E / 51982
{
	Function_298();
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 368)[12], 0.0f);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 368)[02], 0.0f);
	DECOR_SET_BOOL((*&Local_4 + 368)[12], "CanBeLasso", false);
	DECOR_SET_BOOL((*&Local_4 + 368)[02], "CanBeLasso", false);
	AI_BEHAVIOR_SET_ALLOW((*&Local_4 + 368)[12], 0, 0);
	AI_BEHAVIOR_SET_ALLOW((*&Local_4 + 368)[02], 0, 0);
	Function_297(GET_OBJECT_FROM_ACTOR((*&Local_4 + 368)[02]));
	Function_297(GET_OBJECT_FROM_ACTOR((*&Local_4 + 368)[12]));
	Function_290(&(Local_611[217]), (*&Local_4 + 368)[12], "Welsh", 0, 0x5f5e100, 0);
	Function_290(&(Local_611[317]), (*&Local_4 + 368)[02], "French", 0, 0x5f5e100, 0);
	Function_289(Local_4.f_388, 322, 4294967295, 0.0f, -1.0f, 1.0f, 512, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 368)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 368)[12], 22, 0.0f, 0, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 368)[12], 22, 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_4 + 368)[12], 0, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 368)[12], 0);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*&Local_4 + 368)[12], false);
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_4 + 368)[12], true);
	SQUAD_SET_FACTION(Local_4.f_388, 20);
	Function_288(bLocal_472, Local_4.f_388, 1);
	bLocal_706 = CREATE_OBJECTSET_IN_LAYOUT("WelshObjSet", bLocal_405, 4294967295, 0);
	DECOR_SET_OBJECT((*&Local_4 + 368)[12], "ReturnCorpse", bLocal_706);
	bLocal_707 = CREATE_OBJECTSET_IN_LAYOUT("FrenchObjSet", bLocal_405, 4294967295, 0);
	DECOR_SET_OBJECT((*&Local_4 + 368)[02], "ReturnCorpse", bLocal_707);
	return;
}

void Function_288(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCCCF / 52431
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
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_289(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xCD19 / 52505
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

int Function_290(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xCE03 / 52739
{
	if (!Function_296(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_295(uParam0, bParam2))
	{
		return 0;
	}
	Function_294(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_291(uParam0, iParam4, iParam5);
	return 1;
}

void Function_291(char* cParam0, int iParam1, int iParam2) //Position: 0xCE3F / 52799
{
	if (iParam1 != 100000000)
	{
		Function_293(cParam0, iParam1, iParam2);
	}
	else
	{
		Function_292(cParam0, iParam2);
	}
	return;
}

void Function_292(int iParam0, bool bParam1) //Position: 0xCE62 / 52834
{
	iParam0->f_40 = 0;
	Function_293(iParam0, 2, bParam1);
	Function_293(iParam0, 4, bParam1);
	Function_293(iParam0, 8, bParam1);
	Function_293(iParam0, 16, bParam1);
	Function_293(iParam0, 32, bParam1);
	Function_293(iParam0, 64, bParam1);
	Function_293(iParam0, 128, bParam1);
	Function_293(iParam0, 256, bParam1);
	Function_293(iParam0, 512, bParam1);
	Function_293(iParam0, 1024, bParam1);
	return;
}

void Function_293(int iParam0, int iParam1, bool bParam2) //Position: 0xCEC8 / 52936
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

void Function_294(char* cParam0, int iParam1) //Position: 0xCF04 / 52996
{
	cParam0->f_36 = iParam1;
	return;
}

bool Function_295(int iParam0, bool bParam1) //Position: 0xCF10 / 53008
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

bool Function_296(var uParam0, bool bParam1) //Position: 0xCF99 / 53145
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

void Function_297(bool bParam0) //Position: 0xD125 / 53541
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

void Function_298() //Position: 0xD159 / 53593
{
	Local_4.f_388 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Goon"));
	(*&Local_4 + 368)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "French", 584, -2168,838f, 16,56468f, 2573,682f, 0.0f, 10,39158f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 368)[02], Local_4.f_388);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 368)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 368)[02], 4, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 368)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 368)[02], 19);
	(*&Local_4 + 368)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Welsh", 586, -2170,969f, 16,56469f, 2574,937f, 0.0f, -19,76582f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 368)[12], Local_4.f_388);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 368)[12]);
	TASK_STAND_STILL((*&Local_4 + 368)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 368)[12], 19);
	return;
}

int Function_299() //Position: 0xD24F / 53839
{
	bLocal_542 = Function_300(Global_30640[0], "narmadillo", "stable01", 1);
	if (IS_DOOR_VALID(bLocal_542))
	{
		if (IS_DOOR_LOCKED(bLocal_542))
		{
			Function_153(bLocal_542, 0);
		}
		OPEN_DOOR_DIRECTION(bLocal_542, false);
	}
	else
	{
		return 0;
	}
	bLocal_542 = Function_300(Global_30640[0], "narmadillo", "stable01", 2);
	if (IS_DOOR_VALID(bLocal_542))
	{
		if (IS_DOOR_LOCKED(bLocal_542))
		{
			Function_153(bLocal_542, 0);
		}
		OPEN_DOOR_DIRECTION(bLocal_542, true);
	}
	else
	{
		return 0;
	}
	bLocal_542 = Function_300(Global_30640[0], "narmadillo", "stable01", 3);
	if (IS_DOOR_VALID(bLocal_542))
	{
		if (IS_DOOR_LOCKED(bLocal_542))
		{
			Function_153(bLocal_542, 0);
		}
		OPEN_DOOR_DIRECTION(bLocal_542, true);
	}
	else
	{
		return 0;
	}
	bLocal_542 = Function_300(Global_30640[0], "narmadillo", "stable01", 4);
	if (IS_DOOR_VALID(bLocal_542))
	{
		if (IS_DOOR_LOCKED(bLocal_542))
		{
			Function_153(bLocal_542, 0);
		}
		OPEN_DOOR_DIRECTION(bLocal_542, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_300(int iParam0, int iParam1, char* cParam2, int iParam3) //Position: 0xD37A / 54138
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

void Function_301() //Position: 0xD416 / 54294
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
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Outlaw01_layout");
	Local_4.f_456 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 436)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -2170,754f, 16,56471f, 2571,41f, 0.0f, 0.0f, 0.0f, 19,13668f, 14,10021f, 12,20266f);
	ADD_TO_VOLUME_SET(Local_4.f_456, (*&Local_4 + 436)[0]);
	(*&Local_4 + 436)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -2170,917f, 16,56463f, 2571,684f, 0.0f, 0.0f, 0.0f, 9,987023f, 13,15468f, 12,53735f);
	ADD_TO_VOLUME_SET(Local_4.f_456, (*&Local_4 + 436)[1]);
	(*&Local_4 + 436)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -1960,618f, 36,0851f, 3291,144f, -0,3217317f, -11,14473f, -2,231719f, 52,86822f, 13,04008f, 38,78314f);
	ADD_TO_VOLUME_SET(Local_4.f_456, (*&Local_4 + 436)[2]);
	(*&Local_4 + 436)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -1864,444f, 25,09804f, 3305,418f, 0.0f, 0.0f, 0.0f, 10,23051f, 12,62848f, 19,22637f);
	ADD_TO_VOLUME_SET(Local_4.f_456, (*&Local_4 + 436)[3]);
	Local_4.f_472 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "RestrictAmbient_set");
	(*&Local_4 + 460)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "restrict_amb_1", 2, -1899,146f, 27,60424f, 3304.0f, 0.0f, 0.0f, 0.0f, 141,7984f, 41,289f, 75,11379f);
	ADD_TO_VOLUME_SET(Local_4.f_472, (*&Local_4 + 460)[0]);
	(*&Local_4 + 460)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "restrict_amb_2", 2, -2174,742f, 16,50545f, 2571,213f, 0.0f, 0.0f, 0.0f, 20,0702f, 13,04943f, 12,0262f);
	ADD_TO_VOLUME_SET(Local_4.f_472, (*&Local_4 + 460)[1]);
	Local_4.f_496 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage_One_Vols_set");
	(*&Local_4 + 476)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Help_Irish", 2, -2168,047f, 17,22014f, 2572,301f, 0.0f, 0,7332845f, 0.0f, 3,614251f, 4,604604f, 9,967336f);
	ADD_TO_VOLUME_SET(Local_4.f_496, (*&Local_4 + 476)[0]);
	(*&Local_4 + 476)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Kill_Irish", 2, -2170,894f, 16,50429f, 2571,378f, 0.0f, 0.0f, 0.0f, 12,56848f, 11,32543f, 12,21532f);
	ADD_TO_VOLUME_SET(Local_4.f_496, (*&Local_4 + 476)[1]);
	(*&Local_4 + 476)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ClearCorpse", 2, -2168,248f, 17,22014f, 2574,409f, 0.0f, 0,7332845f, 0.0f, 4,24719f, 4,604604f, 5,421701f);
	ADD_TO_VOLUME_SET(Local_4.f_496, (*&Local_4 + 476)[2]);
	(*&Local_4 + 476)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ClearFFF", 2, -2194,205f, 16,58016f, 2592,439f, 0.0f, 0,7332845f, 0.0f, 7,205051f, 9,478106f, 9,29022f);
	ADD_TO_VOLUME_SET(Local_4.f_496, (*&Local_4 + 476)[3]);
	Local_4.f_536 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage_Two_Vols_set");
	(*&Local_4 + 500)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AtJulio", 3, -1956,822f, 35,86242f, 3284,713f, 0.0f, 3,35688f, 0.0f, 18,96849f, 12,22739f, 21,9662f);
	ADD_TO_VOLUME_SET(Local_4.f_536, (*&Local_4 + 500)[0]);
	(*&Local_4 + 500)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Start_Fight_Early", 2, -1874,506f, 36,83927f, 3303,479f, 0.0f, -17,75551f, 0.0f, 77,02818f, 33,57417f, 30,22754f);
	ADD_TO_VOLUME_SET(Local_4.f_536, (*&Local_4 + 500)[1]);
	(*&Local_4 + 500)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nInit_Camp", 2, -2008,954f, 39,15295f, 3330,469f, 0.0f, -12,43272f, 0.0f, 22,9329f, 72,74339f, 744,6756f);
	ADD_TO_VOLUME_SET(Local_4.f_536, (*&Local_4 + 500)[2]);
	(*&Local_4 + 500)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Comp_MoveTo_FinalPos", 2, -1965,355f, 37,63634f, 3288,214f, 0.0f, 0.0f, 0.0f, 24,76578f, 37,41403f, 53,68062f);
	ADD_TO_VOLUME_SET(Local_4.f_536, (*&Local_4 + 500)[3]);
	(*&Local_4 + 500)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nMeet_Hill", 2, -2006,11f, 37,77444f, 3294,744f, 0.0f, 25,80075f, 0.0f, 95,90931f, 46,23265f, 365,4511f);
	ADD_TO_VOLUME_SET(Local_4.f_536, (*&Local_4 + 500)[4]);
	(*&Local_4 + 500)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AUDIO_OnFootVol", 2, -2180,47f, 16,26094f, 2572,23f, 0.0f, -0,9717818f, 0.0f, 21,77479f, 46,23265f, 22,00113f);
	ADD_TO_VOLUME_SET(Local_4.f_536, (*&Local_4 + 500)[5]);
	(*&Local_4 + 500)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CloseDonJulio", 2, -2262,327f, 20,45433f, 3121,499f, 0.0f, -31,44803f, 0.0f, 5,616511f, 46,23265f, 626,559f);
	ADD_TO_VOLUME_SET(Local_4.f_536, (*&Local_4 + 500)[6]);
	(*&Local_4 + 500)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Julio_slow", 3, -1959,609f, 35,86242f, 3286,956f, 0.0f, 3,35688f, 0.0f, 16,94088f, 16,21279f, 32,39426f);
	ADD_TO_VOLUME_SET(Local_4.f_536, (*&Local_4 + 500)[7]);
	Local_4.f_580 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage_Three_Vols_set");
	(*&Local_4 + 540)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Camp_Near_House", 2, -1864,539f, 27,79807f, 3299,106f, 0.0f, 0.0f, 0.0f, 8,486137f, 7,427784f, 10,31349f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[0]);
	(*&Local_4 + 540)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Defend_Front", 2, -1885,7f, 25,57809f, 3305,338f, 0.0f, 0.0f, 0.0f, 26,67559f, 11,94152f, 28,02181f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[1]);
	(*&Local_4 + 540)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Defend_Camp", 2, -1864,656f, 30,16144f, 3304,586f, 0.0f, 80,9051f, 0.0f, 23,0241f, 11,94152f, 30,98769f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[2]);
	(*&Local_4 + 540)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "In_House", 2, -1864,589f, 27,03552f, 3305,63f, 0.0f, 0.0f, 0.0f, 5,477431f, 3,408449f, 6,617035f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[3]);
	(*&Local_4 + 540)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Alert_Bandits", 3, -1896,836f, 25,4424f, 3302,127f, 0.0f, -26,76188f, 0.0f, 9,962561f, 23,42633f, 8,200882f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[4]);
	(*&Local_4 + 540)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FrontSide_Vol", 2, -1874,446f, 24,72951f, 3303,231f, 0.0f, -1,468457f, 0.0f, 28,94024f, 33,57417f, 31,61059f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[5]);
	(*&Local_4 + 540)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "On_Cliff", 2, -1942,141f, 29,01723f, 3291,945f, 0.0f, -1,468457f, 0.0f, 40,4848f, 33,57417f, 31,61059f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[6]);
	(*&Local_4 + 540)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Acknowledge_0", 2, -1909,971f, 24,13172f, 3296,157f, 0.0f, -92,68867f, 0.0f, 22,81673f, 13,00686f, 32,12043f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[7]);
	(*&Local_4 + 540)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NoHorse", 2, -1882,048f, 24,13172f, 3297,468f, 0.0f, -92,68867f, 0.0f, 57,15569f, 19,19901f, 104,7642f);
	ADD_TO_VOLUME_SET(Local_4.f_580, (*&Local_4 + 540)[8]);
	Local_4.f_584 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 588)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -2164,424f, 16,45662f, 2570,938f, 0.0f, -269,5233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 588)[0], Local_4.f_584);
	(*&Local_4 + 588)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -2168,76f, 16,50196f, 2570,128f, 0.0f, -180,8931f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 588)[1], Local_4.f_584);
	(*&Local_4 + 588)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorse01", -2183,395f, 16,24631f, 2559,864f, 0.0f, 263,7037f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 588)[2], Local_4.f_584);
	(*&Local_4 + 588)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -2167,382f, 16,711f, 2574,94f, 0.0f, 22,42733f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 588)[3], Local_4.f_584);
	Local_4.f_608 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 612)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -2169,533f, 16,50275f, 2571,874f, 0.0f, 0,1113825f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 612)[0], Local_4.f_608);
	(*&Local_4 + 612)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -2176,985f, 16,42522f, 2570,287f, 0.0f, 89,61227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 612)[1], Local_4.f_608);
	(*&Local_4 + 612)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -2168.0f, 16,56471f, 2575,827f, 0.0f, 9,519646f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 612)[2], Local_4.f_608);
	(*&Local_4 + 612)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -2177,235f, 16,34307f, 2572,137f, 0.0f, -257,7888f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 612)[3], Local_4.f_608);
	(*&Local_4 + 612)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Outlaw_Move_To_0", -2168,795f, 16,56466f, 2572,837f, 0.0f, -177,4014f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 612)[4], Local_4.f_608);
	(*&Local_4 + 612)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorse02", -2182,151f, 16,26094f, 2569,792f, 0.0f, 176,7365f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 612)[5], Local_4.f_608);
	(*&Local_4 + 612)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "FrenchCorpse", -2171,275f, 16,59595f, 2573,587f, 0.0f, 364,4025f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 612)[6], Local_4.f_608);
	(*&Local_4 + 612)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "WelshCorpse", -2172,515f, 16,5647f, 2574,606f, 0.0f, 24,70284f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 612)[7], Local_4.f_608);
	Local_4.f_648 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	*(&Local_4 + 652[06]) = { -1953,356f, 34,4092f, 3287,288f };
	*(&Local_4 + 652[06] + 12) = { 0.0f, -100.0f, 0.0f };
	(*&Local_4 + 992)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -1953,356f, 34,4092f, 3287,288f, 0.0f, -100.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[0], Local_4.f_648);
	*(&Local_4 + 652[16]) = { -1953,356f, 34,4092f, 3287,288f };
	*(&Local_4 + 652[16] + 12) = { 0.0f, -100.0f, 0.0f };
	(*&Local_4 + 992)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -1953,356f, 34,4092f, 3287,288f, 0.0f, -100.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[1], Local_4.f_648);
	*(&Local_4 + 652[26]) = { -1950,844f, 33,76809f, 3286,022f };
	*(&Local_4 + 652[26] + 12) = { 0.0f, 265,976f, 0.0f };
	(*&Local_4 + 992)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -1950,844f, 33,76809f, 3286,022f, 0.0f, 265,976f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[2], Local_4.f_648);
	*(&Local_4 + 652[36]) = { -1951,725f, 33,85683f, 3285,96f };
	*(&Local_4 + 652[36] + 12) = { 0.0f, 259,9136f, 0.0f };
	(*&Local_4 + 992)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", -1951,725f, 33,85683f, 3285,96f, 0.0f, 259,9136f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[3], Local_4.f_648);
	*(&Local_4 + 652[46]) = { -1943,618f, 32,77796f, 3288,063f };
	*(&Local_4 + 652[46] + 12) = { 0.0f, -100.0f, 0.0f };
	(*&Local_4 + 992)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Player_Move_To_0", -1943,618f, 32,77796f, 3288,063f, 0.0f, -100.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[4], Local_4.f_648);
	*(&Local_4 + 652[56]) = { -1943,001f, 32,70398f, 3286,365f };
	*(&Local_4 + 652[56] + 12) = { 0.0f, 259,9136f, 0.0f };
	(*&Local_4 + 992)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Comp_Move_To_0", -1943,001f, 32,70398f, 3286,365f, 0.0f, 259,9136f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[5], Local_4.f_648);
	*(&Local_4 + 652[66]) = { -1965,191f, 35,64645f, 3276,411f };
	*(&Local_4 + 652[66] + 12) = { 0.0f, 187,865f, 0.0f };
	(*&Local_4 + 992)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Comp_Move_To_0a", -1965,191f, 35,64645f, 3276,411f, 0.0f, 187,865f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[6], Local_4.f_648);
	*(&Local_4 + 652[76]) = { -2063,868f, 29,907f, 3359,679f };
	*(&Local_4 + 652[76] + 12) = { 0.0f, 187,865f, 0.0f };
	(*&Local_4 + 992)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "Comp_Move_To_1", -2063,868f, 29,907f, 3359,679f, 0.0f, 187,865f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[7], Local_4.f_648);
	*(&Local_4 + 652[86]) = { -2114,375f, 30,40419f, 3345,771f };
	*(&Local_4 + 652[86] + 12) = { 0.0f, 187,865f, 0.0f };
	(*&Local_4 + 992)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Comp_Move_To_2", -2114,375f, 30,40419f, 3345,771f, 0.0f, 187,865f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[8], Local_4.f_648);
	*(&Local_4 + 652[96]) = { -2141,829f, 25,7781f, 3275,05f };
	*(&Local_4 + 652[96] + 12) = { 0.0f, 187,865f, 0.0f };
	(*&Local_4 + 992)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Comp_Move_To_3", -2141,829f, 25,7781f, 3275,05f, 0.0f, 187,865f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[9], Local_4.f_648);
	*(&Local_4 + 652[106]) = { -1957,554f, 35,95603f, 3293,554f };
	*(&Local_4 + 652[106] + 12) = { 0.0f, -100.0f, 0.0f };
	(*&Local_4 + 992)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "P_Horse_Start", -1957,554f, 35,95603f, 3293,554f, 0.0f, -100.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[10], Local_4.f_648);
	*(&Local_4 + 652[116]) = { -1957,88f, 35,88103f, 3290,12f };
	*(&Local_4 + 652[116] + 12) = { 0.0f, -100.0f, 0.0f };
	(*&Local_4 + 992)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "C_Horse_Start", -1957,88f, 35,88103f, 3290,12f, 0.0f, -100.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[11], Local_4.f_648);
	*(&Local_4 + 652[126]) = { -1955,134f, 34,27042f, 3284,709f };
	*(&Local_4 + 652[126] + 12) = { 0.0f, 259,9136f, 0.0f };
	(*&Local_4 + 992)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "Final_approach", -1955,134f, 34,27042f, 3284,709f, 0.0f, 259,9136f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[12], Local_4.f_648);
	*(&Local_4 + 652[136]) = { -1954,189f, 35,86242f, 3290,069f };
	*(&Local_4 + 652[136] + 12) = { 0.0f, 3,35688f, 0.0f };
	(*&Local_4 + 992)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "P_Approach", -1954,189f, 35,86242f, 3290,069f, 0.0f, 3,35688f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[13], Local_4.f_648);
	Local_4.f_1052 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	*(&Local_4 + 1056[06]) = { -1863,151f, 25,66399f, 3305,209f };
	*(&Local_4 + 1056[06] + 12) = { 0.0f, -458,1603f, 0.0f };
	(*&Local_4 + 1180)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -1863,151f, 25,66399f, 3305,209f, 0.0f, -458,1603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[0], Local_4.f_1052);
	*(&Local_4 + 1056[16]) = { -1863,748f, 25,66399f, 3303,31f };
	*(&Local_4 + 1056[16] + 12) = { 0.0f, 139,1903f, 0.0f };
	(*&Local_4 + 1180)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -1863,748f, 25,66399f, 3303,31f, 0.0f, 139,1903f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[1], Local_4.f_1052);
	*(&Local_4 + 1056[26]) = { -2066,897f, 34,45525f, 3315,617f };
	*(&Local_4 + 1056[26] + 12) = { 0.0f, -90.0f, 0.0f };
	(*&Local_4 + 1180)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -2066,897f, 34,45525f, 3315,617f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[2], Local_4.f_1052);
	*(&Local_4 + 1056[36]) = { -2064,929f, 33,4594f, 3318,045f };
	*(&Local_4 + 1056[36] + 12) = { 0.0f, 105.0f, 0.0f };
	(*&Local_4 + 1180)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd04", -2064,929f, 33,4594f, 3318,045f, 0.0f, 105.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[3], Local_4.f_1052);
	*(&Local_4 + 1056[46]) = { -1859,133f, 24,924f, 3301,647f };
	*(&Local_4 + 1056[46] + 12) = { 0.0f, 12,09347f, 0.0f };
	(*&Local_4 + 1180)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "nHorsePort", -1859,133f, 24,924f, 3301,647f, 0.0f, 12,09347f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[4], Local_4.f_1052);
	Local_4.f_1204 = CREATE_OBJECTSET_IN_LAYOUT("Stage_ThreeSet", Local_4, 8, 0);
	(*&Local_4 + 1208)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "House_Dest", -1864,53f, 25,79503f, 3304.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1208)[0], Local_4.f_1204);
	(*&Local_4 + 1208)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "nGuard_Pos", -1864,539f, 25,518f, 3301,321f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1208)[1], Local_4.f_1204);
	(*&Local_4 + 1208)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Fire_Pos", -1883,131f, 24,71678f, 3304,897f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1208)[2], Local_4.f_1204);
	Local_4.f_1224 = CREATE_OBJECTSET_IN_LAYOUT("Julio_CoverSet", Local_4, 8, 0);
	*(&Local_4 + 1228[06]) = { -1894,958f, 24,36841f, 3301,831f };
	*(&Local_4 + 1228[06] + 12) = { 0.0f, 75,19828f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_01", -1894,958f, 24,36841f, 3301,831f, 0.0f, 75,19828f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_1224);
	*(&Local_4 + 1228[16]) = { -1892,525f, 24,2181f, 3299,296f };
	*(&Local_4 + 1228[16] + 12) = { -148,4207f, 88,53745f, -148,1911f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_02", -1892,525f, 24,2181f, 3299,296f, -148,4207f, 88,53745f, -148,1911f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_1224);
	*(&Local_4 + 1228[26]) = { -1889,163f, 23,93758f, 3298,265f };
	*(&Local_4 + 1228[26] + 12) = { 0.0f, 85,90636f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_03", -1889,163f, 23,93758f, 3298,265f, 0.0f, 85,90636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_1224);
	*(&Local_4 + 1228[36]) = { -1889,027f, 24,52248f, 3305,395f };
	*(&Local_4 + 1228[36] + 12) = { 0.0f, 85,90636f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_04", -1889,027f, 24,52248f, 3305,395f, 0.0f, 85,90636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_1224);
	*(&Local_4 + 1228[46]) = { -1886,706f, 24,58213f, 3307,165f };
	*(&Local_4 + 1228[46] + 12) = { 0.0f, 85,90636f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_05", -1886,706f, 24,58213f, 3307,165f, 0.0f, 85,90636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_1224);
	*(&Local_4 + 1228[56]) = { -1892,694f, 24,41572f, 3304,547f };
	*(&Local_4 + 1228[56] + 12) = { 0.0f, 85,90636f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_06", -1892,694f, 24,41572f, 3304,547f, 0.0f, 85,90636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_1224);
	*(&Local_4 + 1228[66]) = { -1879,707f, 24,77106f, 3309,552f };
	*(&Local_4 + 1228[66] + 12) = { 0.0f, 85,90636f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_07", -1879,707f, 24,77106f, 3309,552f, 0.0f, 85,90636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_1224);
	*(&Local_4 + 1228[76]) = { -1885,886f, 24,58002f, 3301,927f };
	*(&Local_4 + 1228[76] + 12) = { 0.0f, 85,90636f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_08", -1885,886f, 24,58002f, 3301,927f, 0.0f, 85,90636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_1224);
	*(&Local_4 + 1228[86]) = { -1876,238f, 24,82199f, 3301,011f };
	*(&Local_4 + 1228[86] + 12) = { 0.0f, 85,90636f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_09", -1876,238f, 24,82199f, 3301,011f, 0.0f, 85,90636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_1224);
	*(&Local_4 + 1228[96]) = { -1875,202f, 24,84719f, 3305,638f };
	*(&Local_4 + 1228[96] + 12) = { 0.0f, 85,90636f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "Loc_10", -1875,202f, 24,84719f, 3305,638f, 0.0f, 85,90636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_1224);
	Local_4.f_1472 = CREATE_POINT_IN_LAYOUT(Local_4, "Welsh_Go", -2170,164f, 16,53333f, 2571,016f, 0.0f, -278,4599f, 0.0f);
	*(&Local_4 + 1476) = { -2074,29f, 33,36814f, 3310,262f };
	*(&Local_4 + 1476 + 12) = { 0.0f, 42,73969f, 0.0f };
	*(&Local_4 + 1500) = { -2067,583f, 33,50898f, 3317,97f };
	*(&Local_4 + 1500 + 12) = { 0.0f, 29,03694f, 0.0f };
	*(&Local_4 + 1524) = { -1964,863f, 37,05221f, 3288.0f };
	*(&Local_4 + 1524 + 12) = { 0.0f, 259,3558f, 0.0f };
	Local_4.f_1548 = CREATE_POINT_IN_LAYOUT(Local_4, "Julio_Gateway", -1964,863f, 37,05221f, 3288.0f, 0.0f, 259,3558f, 0.0f);
	Local_4.f_1552 = CREATE_POINT_IN_LAYOUT(Local_4, "French_Shoot", -2168,869f, 16,56469f, 2572,678f, 0.0f, -360,0176f, 0.0f);
	Local_4.f_1556 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_nospawn", "lean_rail_nospawn", -1866,775f, 25,67158f, 3300,705f, 0.0f, 90,04759f, 0.0f);
	Local_4.f_1560 = CREATE_GRINGO_IN_LAYOUT(Local_4, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -1884,899f, 24,58605f, 3303,247f, 0.0f, 227,9413f, 0.0f);
	Local_4.f_1564 = CREATE_GRINGO_IN_LAYOUT(Local_4, "sit_ground_smoke_indef1", "sit_ground_smoke_indef", -1881,732f, 24,67928f, 3303,41f, 0.0f, -224,4909f, 0.0f);
	Local_4.f_1568 = CREATE_GRINGO_IN_LAYOUT(Local_4, "leaning_stand_indef", "leaning_stand_indef", -1896,926f, 24,31069f, 3303,085f, 0.0f, -187,924f, 0.0f);
	Local_4.f_1572 = CREATE_GRINGO_IN_LAYOUT(Local_4, "sit_ground_smoke_indef3", "sit_ground_smoke_indef", -1889,994f, 24,49762f, 3304,742f, 0.0f, -5,123277f, 0.0f);
	Local_4.f_1576 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_drink", "lean_rail_drink", -1889,188f, 24,10474f, 3297,829f, 0.0f, -274,8775f, 0.0f);
	Local_4.f_1580 = CREATE_GRINGO_IN_LAYOUT(Local_4, "leaning_stand_indef1", "leaning_stand_indef", -1884,325f, 24,60854f, 3300,122f, 0.0f, -11,30618f, 0.0f);
	Local_4.f_1584 = CREATE_GRINGO_IN_LAYOUT(Local_4, "rand_idle_stand", "rand_idle_stand", -1898,213f, 24,25029f, 3301,648f, 0.0f, 78,83821f, 0.0f);
}

struct<400> ÅIA<¾E"%_ÅM]ALpE"¸,ÅRÊA\"E#JùÅnHApXE$}Å¥æAE$ÀÅéºA*¦E%G=Å	@
A¡{E%ÎzÅ	ê!A~E&º@Å
}Ar´E'¡ûÅUA~²E(HÅúA|âE(êÅ>ÂAkÇE)þ®Å(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0xF1A2 / 61858
{
	float fVar56;
	
}

int Function_303() //Position: 0xF712 / 63250
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_319(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_313(&bLocal_426))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_473))
		{
			bLocal_473 = Function_213(1, 0, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_472))
		{
			bLocal_472 = Function_304(0, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
	}
	return 1;
}

bool Function_304(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0xF774 / 63348
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
		if (!Function_158(&(Global_29008[Global_30621[3]]), 4))
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
			bVar1 = Function_312(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_307(StackVal, iParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = iParam3;
			vVar3.y = iParam4;
			vVar3.z = iParam5;
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
		Function_306(bVar1, 0, 0, 0, 0);
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
		Function_305(bVar1, 0);
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

void Function_305(bool bParam0, bool bParam1) //Position: 0xFC5E / 64606
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_306(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFC7E / 64638
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

bool Function_307(int iParam0, bool bParam1) //Position: 0xFCD2 / 64722
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_311(iParam0))
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
						Function_308(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_308(bool bParam0, bool bParam1) //Position: 0xFD52 / 64850
{
	Function_310(bParam0);
	Function_309(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_309(bool bParam0) //Position: 0xFD78 / 64888
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_310(bool bParam0) //Position: 0xFD9C / 64924
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

bool Function_311(int iParam0) //Position: 0xFE6B / 65131
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_312(int iParam0, bool bParam1) //Position: 0xFE82 / 65154
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

bool Function_313(bool bParam0) //Position: 0xFF15 / 65301
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_318();
	iVar1 = 0;
	if (!Function_172(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_317(bParam0[iVar03], 8);
		}
		else if (Function_316())
		{
			iVar1 = 1;
			Function_317(bParam0[iVar03], 8);
		}
		Function_317(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_172(bParam0[iVar03], 4))
		{
			if (!Function_172(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_172(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_172(bParam0[03], 8) || iVar1));
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
				Function_317(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_172(bParam0[iVar03], 4))
		{
			if (!Function_172(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_317(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_317(bParam0[iVar03], 2);
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
							Function_317(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_317(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_317(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_317(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_317(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_317(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_317(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_317(bParam0[iVar03], 2);
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
	Function_314();
	return 1;
}

void Function_314() //Position: 0x10291 / 66193
{
	if (!Function_315(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_315(int iParam0) //Position: 0x102D1 / 66257
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_316() //Position: 0x102ED / 66285
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

void Function_317(var uParam0, int iParam1) //Position: 0x10318 / 66328
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_318() //Position: 0x10329 / 66345
{
	if (!Function_315(128))
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

bool Function_319(bool bParam0) //Position: 0x1036B / 66411
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

int Function_320() //Position: 0x10399 / 66457
{
	Function_321(&Local_4 + 104, 584, 2, 0);
	Function_321(&Local_4 + 104, 586, 2, 0);
	if (Function_313(&Local_4 + 104))
	{
		return 1;
	}
	return 0;
}

var Function_321(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x103C6 / 66502
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_172(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_317(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_317(uParam0[iVar03], 8);
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

int Function_322() //Position: 0x10496 / 66710
{
	switch (bLocal_468)
	{
		case 0x00000063:
			Function_323(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_323(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_323(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_323(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_323(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x104FF / 66815
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
		Function_242();
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
	Function_271(bParam9);
}

int Function_324() //Position: 0x105EF / 67055
{
	switch (bLocal_468)
	{
		case 0x00000063:
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			ACTOR_PUT_WEAPON_IN_HAND(Global_34573, Function_327(Global_34573, 40), 0);
			return 1;
			break;
		
		case 0x00000001:
			RESET_ANIM_SET_FOR_ACTOR(bLocal_472, 1);
			RESET_REACT_NODE_FOR_ACTOR(bLocal_472);
			Function_222(Global_34573, (*&Local_4 + 612)[1], 0, 0, 1);
			Function_222(bLocal_472, (*&Local_4 + 612)[3], 1, 1, 1);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,5f, 0);
			SET_ACTORS_HORSE(bLocal_472, bLocal_532);
			Function_325(&bLocal_472, bLocal_532, 1);
			MEMORY_PREFER_RIDING(bLocal_472, true);
			AI_ACTOR_FORCE_SPEED(bLocal_472, true);
			TASK_CLEAR(bLocal_472);
			TASK_MOUNT(bLocal_472, bLocal_532, 0, 1, 2, 2147483647);
			return 1;
			break;
		
		case 0x00000002:
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

void Function_325(bool bParam0, bool bParam1, bool bParam2) //Position: 0x106BE / 67262
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_326(bParam1);
			vVar0 = { StackVal, StackVal, Function_326(bParam1) };
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

vector3 Function_326(bool bParam0) //Position: 0x107C6 / 67526
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

var Function_327(bool bParam0, int iParam1) //Position: 0x10830 / 67632
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

int Function_328() //Position: 0x10841 / 67649
{
	switch (bLocal_468)
	{
		case 0x00000063:
			if (!Function_329() && !Function_313(&bLocal_413))
			{
				return 0;
			}
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_329() //Position: 0x1087A / 67706
{
	Function_321(&Local_4 + 4, 977, 2, 0);
	Function_321(&Local_4 + 4, 976, 2, 0);
	Function_330(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_330(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_330(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_indef", 1, 0);
	Function_330(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand_indef", 1, 0);
	Function_330(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_drink", 1, 0);
	Function_330(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	if (Function_313(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_330(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x10A56 / 68182
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_331(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_317(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_331(var uParam0, int iParam1, int iParam2) //Position: 0x10A8E / 68238
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_172(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_317(uParam0[iVar03], 4);
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

int Function_332() //Position: 0x10B52 / 68434
{
	switch (bLocal_468)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				return 1;
			}
			if (Function_320() && Function_303())
			{
				Function_299();
				Function_301();
				Function_222(Global_34573, (*&Local_4 + 588)[1], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_473))
				{
					Function_222(bLocal_473, (*&Local_4 + 588)[2], 1, 1, 1);
				}
				Function_222(bLocal_472, (*&Local_4 + 588)[3], 1, 1, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_472, "outlaw_sit", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_472, "outlaw_sit");
				SET_REACT_NODE_FOR_ACTOR(bLocal_472, "outlaw_sit");
				SET_MOVER_FROZEN(bLocal_472, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_472);
				TASK_STAND_STILL(bLocal_472, -1.0f, 0, 0);
				Function_287();
			}
			break;
		
		case 0x00000001:
			Function_333();
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_333() //Position: 0x10C3D / 68669
{
	bool bVar0;
	
	if (IS_ACTOR_VALID((*&Local_4 + 368)[12]))
	{
		if (IS_ACTOR_IN_VOLUME((*&Local_4 + 368)[12], (*&Local_4 + 476)[2]))
		{
			DESTROY_ACTOR((*&Local_4 + 368)[12]);
			Function_216((*&Local_4 + 612)[7]);
			Function_334((*&Local_4 + 612)[7]);
			bLocal_501 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_405, "WelshCorpse", 586, Function_216((*&Local_4 + 612)[7]), Function_334((*&Local_4 + 612)[7]), "dead_ground_male");
			SNAP_OBJECT_TO_GROUND(bLocal_501, 10.0f, true, 1092616192);
		}
	}
	else if (GET_OBJECTSET_SIZE(bLocal_706) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_706);
		if (IS_OBJECT_VALID(bVar0))
		{
			if (IS_OBJECT_IN_VOLUME(bVar0, (*&Local_4 + 476)[2]))
			{
				DESTROY_OBJECT(bVar0);
				Function_216((*&Local_4 + 612)[7]);
				Function_334((*&Local_4 + 612)[7]);
				bLocal_501 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_405, "WelshCorpse", 586, Function_216((*&Local_4 + 612)[7]), Function_334((*&Local_4 + 612)[7]), "dead_ground_male");
				SNAP_OBJECT_TO_GROUND(bLocal_501, 10.0f, true, 1092616192);
			}
		}
	}
	if (IS_ACTOR_VALID((*&Local_4 + 368)[02]))
	{
		if (IS_ACTOR_IN_VOLUME((*&Local_4 + 368)[02], (*&Local_4 + 476)[2]))
		{
			DESTROY_ACTOR((*&Local_4 + 368)[02]);
			Function_216((*&Local_4 + 612)[6]);
			Function_334((*&Local_4 + 612)[6]);
			bLocal_500 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_405, "FrenchCorpse", 584, Function_216((*&Local_4 + 612)[6]), Function_334((*&Local_4 + 612)[6]), "dead_ground_male");
			SNAP_OBJECT_TO_GROUND(bLocal_500, 10.0f, true, 1092616192);
		}
	}
	else if (GET_OBJECTSET_SIZE(bLocal_707) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_707);
		if (IS_OBJECT_VALID(bVar0))
		{
			if (IS_OBJECT_IN_VOLUME(bVar0, (*&Local_4 + 476)[2]))
			{
				DESTROY_OBJECT(bVar0);
				Function_216((*&Local_4 + 612)[6]);
				Function_334((*&Local_4 + 612)[6]);
				bLocal_500 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_405, "FrenchCorpse", 584, Function_216((*&Local_4 + 612)[6]), Function_334((*&Local_4 + 612)[6]), "dead_ground_male");
				SNAP_OBJECT_TO_GROUND(bLocal_500, 10.0f, true, 1092616192);
			}
		}
	}
	return;
}

vector3 Function_334(bool bParam0) //Position: 0x10E5D / 69213
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

int Function_335() //Position: 0x10E84 / 69252
{
	switch (bLocal_468)
	{
		case 0x00000063:
			Function_338(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_336(StackVal, StackVal, bLocal_405, *(&Global_3422[1840] + 52), &Local_4 + 436[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_473, true);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_532, true);
			CLEAR_DECALS();
			Function_338(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_216((*&Local_4 + 612)[0]);
			Function_336(StackVal, StackVal, bLocal_405, Function_216((*&Local_4 + 612)[0]), &Local_4 + 436[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000065:
			Function_338(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_216((*&Local_4 + 1180)[1]);
			Function_336(StackVal, StackVal, bLocal_405, Function_216((*&Local_4 + 1180)[1]), &Local_461 + 20, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_338(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_336(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x10F6B / 69483
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
				Function_337(bVar1, bParam0);
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

void Function_337(bool bParam0, bool bParam1) //Position: 0x111D9 / 70105
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

void Function_338(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1124E / 70222
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
	Function_242();
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
				Function_340(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_340(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_339()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_339()));
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
	if (Function_315(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_161(0x4000000);
	}
	if (Function_315(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_161(0x8000000);
	}
}

var Function_339() //Position: 0x114F7 / 70903
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

vector3 Function_340(bool bParam0) //Position: 0x11576 / 71030
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_341(int iParam0) //Position: 0x11587 / 71047
{
	if (!Function_282(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_179(1, 0, 1);
		}
	}
	return;
}

bool Function_342(bool bParam0) //Position: 0x115A2 / 71074
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_158(&(Global_29008[bParam0]), 4);
}

void Function_343() //Position: 0x115BE / 71102
{
	Function_184(32);
	Function_161(116748);
	Function_344(9);
	return;
}

void Function_344(int iParam0) //Position: 0x115D5 / 71125
{
	Function_345(&Global_28842, iParam0);
	return;
}

void Function_345(var uParam0, int iParam1) //Position: 0x115E3 / 71139
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_346(bool bParam0) //Position: 0x11606 / 71174
{
	Function_347(0, 0x40400000);
	Function_193();
	Function_192();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_347(bool bParam0, float fParam1) //Position: 0x1163A / 71226
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
	Function_349();
	Function_348();
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

void Function_348() //Position: 0x11738 / 71480
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_349() //Position: 0x1176A / 71530
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

void Function_350() //Position: 0x11867 / 71783
{
	if (iLocal_469 < 3 && iLocal_469 > 105)
	{
		Function_216((*&Local_4 + 1180)[1]);
		Function_425(StackVal, StackVal, "$/cutscene/OUTLAW_01_END/OUTLAW_01_END", &uLocal_570, Function_216((*&Local_4 + 1180)[1]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_469)
	{
		case 0x00000000:
			Function_346(0);
			if (!bLocal_502)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				SET_ACTOR_HEALTH(bLocal_472, GET_ACTOR_MAX_HEALTH(bLocal_472));
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			}
			Function_227(&iLocal_552);
			Function_424(&iLocal_552);
			if (iLocal_483[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_343();
				bLocal_470 = Global_30628[0];
				if (!Function_342(bLocal_470))
				{
					Function_341(&Local_406);
				}
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					Function_222(bLocal_473, (*&Local_4 + 992)[0], 1, 1, 1);
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_473);
					Function_422(Global_34573, (*&Local_4 + 992)[0], 1, 1, 1);
				}
				else
				{
					Function_422(Global_34573, (*&Local_4 + 992)[0], 1, 1, 1);
				}
				Function_227(&iLocal_474);
				iLocal_469 = 1;
			}
			else
			{
				Function_227(&iLocal_474);
				iLocal_469 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_421()) && (Function_342(bLocal_470) || bLocal_470 != 4294967295))
			{
				Function_416();
				Function_227(&iLocal_474);
				iLocal_469 = 2;
			}
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (bLocal_502)
				{
					Function_227(&iLocal_474);
					iLocal_469 = 8;
				}
				else if (Function_414(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_406, 2))
				{
					AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
					Function_227(&iLocal_474);
					iLocal_469 = 3;
				}
				else
				{
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_227(&iLocal_474);
					iLocal_469 = 4;
				}
				Function_238(bLocal_468);
				Function_408(StackVal, StackVal, Function_238(bLocal_468), bLocal_468, Global_30628[0], Function_240(bLocal_468), 2);
			}
			break;
		
		case 0x00000003:
			if (Function_393())
			{
				HUD_ENABLE(true);
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
				iLocal_503 = 1;
				TASK_STAND_STILL(bLocal_473, -1.0f, 0, 0);
				ACTOR_END_FORCE_HOLSTER(Global_34573);
				Function_227(&iLocal_474);
				iLocal_469 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_503 = 1;
			Function_391();
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_473);
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_473, (*&Local_4 + 540)[8]);
			bLocal_534 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(false, &Local_4 + 652[66], 0);
			TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 652[66], 2, 3212836864);
			TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 652[76], 4, 3212836864);
			TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 652[86], 4, 3212836864);
			TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_4 + 652[96], 4);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_472, bLocal_534);
			TASK_SEQUENCE_RELEASE(bLocal_534, 1);
			TASK_PRIORITY_SET(bLocal_472, true);
			TASK_CLEAR((*&Local_4 + 296)[32]);
			TASK_USE_GRINGO((*&Local_4 + 296)[32], GET_GRINGO_FROM_OBJECT(Local_4.f_1580), "UseCase1", 4294967295, 1);
			AI_QUICK_EXIT_GRINGO((*&Local_4 + 296)[32], 1);
			TASK_PRIORITY_SET((*&Local_4 + 296)[32], true);
			MEMORY_ALLOW_SHOOTING((*&Local_4 + 296)[32], false);
			TASK_CLEAR((*&Local_4 + 296)[52]);
			bLocal_534 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1600, true, 1, 0, 1, false);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1584), "UseCase1", 4294967295, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*&Local_4 + 296)[52], bLocal_534);
			TASK_SEQUENCE_RELEASE(bLocal_534, 1);
			AI_QUICK_EXIT_GRINGO((*&Local_4 + 296)[52], 1);
			TASK_PRIORITY_SET((*&Local_4 + 296)[52], true);
			MEMORY_ALLOW_SHOOTING((*&Local_4 + 296)[52], false);
			Function_227(&iLocal_474);
			iLocal_469 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1208)[0], 330, 0f, 2, 0);
				Function_390("Outlaw01_obj06", 0x40f00000, 1, 2, 0, 0, 0);
				Function_227(&iLocal_474);
				iLocal_469 = 7;
			}
			break;
		
		case 0x00000007:
			Function_227(&iLocal_474);
			iLocal_469 = 8;
			break;
		
		case 0x00000008:
			if (Function_381(&iLocal_477, 100.0f, 185.0f, (*&Local_4 + 1208)[0], "Outlaw01_camp_return", "Outlaw01_Leave_Camp", &bLocal_495, 1, Local_4, bLocal_405, 330, 1))
			{
				iLocal_511 = 1;
				Function_379();
			}
			else if (iLocal_511)
			{
				iLocal_511 = 0;
				HUD_CLEAR_OBJECTIVE();
				if (iLocal_708 >= 3)
				{
					Function_390("Outlaw01_obj05", 7,5f, 1, 2, 0, 0, 0);
				}
				else
				{
					Function_390("Outlaw01_obj06", 7,5f, 1, 2, 0, 0, 0);
				}
			}
			if (Function_351())
			{
				Function_227(&iLocal_474);
				iLocal_469 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_207();
			iLocal_483[2] = 1;
			Function_227(&iLocal_474);
			bLocal_468 = 101;
			iLocal_469 = 0;
			break;
	}
	return;
}

bool Function_351() //Position: 0x11D87 / 73095
{
	if (IS_VOLUME_VALID((*&Local_4 + 540)[5]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[5]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_348) > 4)
		{
			Function_378();
			DESTROY_VOLUME((*&Local_4 + 540)[5]);
		}
	}
	if (iLocal_708 == 0)
	{
		if (!bLocal_515)
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[0]))
			{
				bLocal_515 = true;
				Function_289(Local_4.f_348, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_226((*&Local_4 + 1208)[0]);
				Function_377(Local_4.f_348, 1);
				Function_242();
				Function_390("Outlaw01_obj05", 7,5f, 1, 2, 0, 0, 0);
			}
		}
	}
	if (!bLocal_512 && iLocal_708 >= 0)
	{
		Function_373();
	}
	switch (iLocal_708)
	{
		case 0x00000000:
			if ((((((Function_372(Local_4.f_348, Global_34573) || Function_371(Global_34573, 1)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[4])) || IS_ACTOR_IN_VOLUME(bLocal_473, (*&Local_4 + 540)[4])) || (Function_368(Local_4.f_348, Global_34573, 7.0f, 0) && !IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[7]))) || (iLocal_510 && GET_ACTOR_UNDER_RETICLE(Global_34573, 1) != (*&Local_4 + 296)[52])) || bLocal_512)
			{
				if (!bLocal_512)
				{
					Function_242();
					Function_367();
				}
				Function_289(Local_4.f_348, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_226((*&Local_4 + 1208)[0]);
				Function_377(Local_4.f_348, 1);
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_366(Local_4.f_348, Global_34573, 0);
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 296)[32], true);
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 296)[52], true);
				Function_365(&iLocal_549, 1.0f);
				Function_227(&iLocal_474);
				iLocal_708 = 2;
				return 0;
			}
			break;
		
		case 0x00000002:
			if (Function_363())
			{
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_348, 0, (*&Local_4 + 540)[2], 4294967295);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_348, 0);
				iLocal_708 = 3;
				return 0;
			}
			break;
		
		case 0x00000003:
			if (bLocal_515)
			{
				Function_227(&iLocal_474);
				iLocal_708 = 4;
				return 0;
			}
			if (Function_277(&iLocal_474) <= 5.0f)
			{
				Function_390("Outlaw01_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_227(&iLocal_474);
				iLocal_708 = 4;
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_513)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_348) == 1)
				{
					iLocal_513 = 1;
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_348) < 0)
			{
				Function_359();
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				Function_193();
				Function_227(&iLocal_474);
				iLocal_708 = 5;
				return 0;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[0]))
			{
				Function_227(&iLocal_474);
				iLocal_708 = 6;
			}
			if (Function_277(&iLocal_474) <= 2.0f)
			{
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1208)[0], 330, 0f, 2, 0);
				Function_390("Outlaw01_obj06", 0x40f00000, 1, 2, 0, 0, 0);
				Function_227(&iLocal_474);
				iLocal_708 = 6;
				return 0;
			}
			break;
		
		case 0x00000006:
			if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[0]) || ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME((*&Local_4 + 352)[02])) > 1.0f && GET_LAST_ATTACKER((*&Local_4 + 352)[02]) != Global_34573)) || !IS_ACTOR_ALIVE((*&Local_4 + 352)[02]))
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_GUNFIGHT_02", 0, 4294967295, 4294967295);
				Function_216((*&Local_4 + 1208)[1]);
				vLocal_517 = { StackVal, StackVal, Function_216((*&Local_4 + 1208)[1]) };
				bLocal_542 = FIND_NEAREST_DOOR(&vLocal_517, 3.0f);
				Function_153(bLocal_542, 1);
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 352)[02], true);
				ADD_BLIP_FOR_ACTOR((*&Local_4 + 352)[02], 322, 0.0f, 2, 0);
				Function_216((*&Local_4 + 1208)[1]);
				vLocal_517 = { StackVal, StackVal, Function_216((*&Local_4 + 1208)[1]) };
				Function_334((*&Local_4 + 1208)[1]);
				Local_520 = { StackVal, StackVal, Function_334((*&Local_4 + 1208)[1]) };
				TASK_CLEAR((*&Local_4 + 352)[02]);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 352)[02], &vLocal_517, -1.0f);
				TASK_PRIORITY_SET((*&Local_4 + 352)[02], true);
				Function_226((*&Local_4 + 1208)[0]);
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[0]))
				{
					Function_358();
				}
				else
				{
					Function_355();
				}
				Function_227(&iLocal_474);
				iLocal_708 = 8;
				return 0;
			}
			break;
		
		case 0x00000008:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_364) < 0)
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
				Function_193();
				if (IS_ACTOR_HOGTIED((*&Local_4 + 352)[02]))
				{
					Function_203((*&Local_4 + 352)[02]);
				}
				Function_227(&iLocal_474);
				iLocal_708 = 9;
				return 0;
			}
			break;
		
		case 0x00000009:
			if (Function_277(&iLocal_474) <= 2.0f)
			{
				Function_242();
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1208)[0], 330, 0f, 2, 0);
				Function_390("Outlaw01_obj06", 0x40f00000, 1, 2, 0, 0, 0);
				Function_227(&iLocal_474);
				iLocal_708 = 10;
				return 0;
			}
			break;
		
		case 0x0000000A:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[3]))
			{
				if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
				{
					Function_227(&iLocal_474);
					Function_353(Global_34573, 0);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					ACTOR_HOLSTER_WEAPON(Global_34573, 1);
					iLocal_708 = 12;
					return 0;
				}
			}
			break;
		
		case 0x0000000C:
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			if (IS_BLIP_VALID(bLocal_497))
			{
				REMOVE_BLIP(bLocal_497);
			}
			Function_216((*&Local_4 + 1208)[1]);
			vLocal_517 = { StackVal, StackVal, Function_216((*&Local_4 + 1208)[1]) };
			bLocal_542 = FIND_NEAREST_DOOR(&vLocal_517, 3.0f);
			Function_352(bLocal_542);
			return 1;
			break;
		
		case 0x0000000B:
			Function_131("Outlaw01_skip_help", 0x41200000, 1, 0, 2, 1, 0);
			Function_227(&iLocal_474);
			iLocal_708 = 0;
			return 0;
			break;
	}
	return 0;
}

void Function_352(bool bParam0) //Position: 0x12337 / 74551
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	return;
}

void Function_353(bool bParam0, bool bParam1) //Position: 0x1238B / 74635
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_354(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_354(bool bParam0, bool bParam1) //Position: 0x123E8 / 74728
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_355() //Position: 0x12407 / 74759
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Outlaw01_ShootsBoosWindow", "Outlaw01_ShootsBoosWindow", false, 2, 1, 0, 1);
		Function_356(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_356(int iParam0) //Position: 0x12463 / 74851
{
	Function_357(0, Global_34573, iParam0, 0);
	Function_357(1, bLocal_472, iParam0, 0);
	Function_357(2, (*&Local_4 + 368)[12], iParam0, 0);
	Function_357(3, (*&Local_4 + 368)[02], iParam0, 0);
	Function_357(4, (*&Local_4 + 296)[52], iParam0, 0);
	Function_357(5, (*&Local_4 + 352)[02], iParam0, 0);
	return;
}

void Function_357(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x124B9 / 74937
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_152(uParam2, Function_138(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_358() //Position: 0x124DE / 74974
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Outlaw01_CabinBoss", "Outlaw01_CabinBoss", false, 2, 1, 0, 1);
		Function_356(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_359() //Position: 0x1252C / 75052
{
	bool bVar0;
	bool bVar1;
	
	Function_362();
	bVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_364);
	bVar0 = (bVar0 || 2048);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_364, bVar0);
	bVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_364);
	Function_361(&bVar1, 32);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_364, bVar1);
	Function_360((*&Local_4 + 352)[02], 33.0f, -1.0f, -1.0f);
	TASK_CROUCH((*&Local_4 + 352)[02], -1.0f);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 352)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 352)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 352)[02], 16, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 352)[02], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 352)[02], 0);
	return;
}

void Function_360(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x125CC / 75212
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

void Function_361(bool bParam0, bool bParam1) //Position: 0x12613 / 75283
{
	Function_36(bParam0, bParam1);
	return;
}

void Function_362() //Position: 0x12620 / 75296
{
	Local_4.f_364 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Bosses"));
	(*&Local_4 + 352)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Boss_0", 402, -1864,525f, 25,70935f, 3302,966f, 0,6416414f, 0,8361655f, -0,05012913f);
	SQUAD_JOIN((*&Local_4 + 352)[02], Local_4.f_364);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 352)[02], false);
	SET_ACTOR_FACTION((*&Local_4 + 352)[02], 19);
	return;
}

bool Function_363() //Position: 0x1269C / 75420
{
	if (bLocal_536 < 0 && Function_277(&iLocal_549) < RAND_FLOAT_RANGE(0,15f, 0,4f))
	{
		Function_227(&iLocal_549);
	}
	else if (bLocal_536 != 0)
	{
		return 0;
	}
	switch (bLocal_536)
	{
		case 0x00000000:
			Function_366(Local_4.f_348, Global_34573, 0);
			Function_364(Local_4.f_348, Global_34573, 4);
			TASK_CLEAR((*&Local_4 + 296)[52]);
			MAKE_ACTOR_READY_FOR_ACTION((*&Local_4 + 296)[52], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_4 + 296)[52], -1.0f);
			DECOR_SET_BOOL((*&Local_4 + 296)[52], "AiCoverExpose", true);
			TASK_PRIORITY_SET((*&Local_4 + 296)[52], false);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[52], 20, 0,8f);
			bLocal_536++;
			Function_227(&iLocal_549);
			break;
		
		case 0x00000001:
			TASK_CLEAR((*&Local_4 + 296)[42]);
			MAKE_ACTOR_READY_FOR_ACTION((*&Local_4 + 296)[42], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_4 + 296)[42], -1.0f);
			TASK_PRIORITY_SET((*&Local_4 + 296)[52], false);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[42], 20, 0,65f);
			bLocal_536++;
			break;
		
		case 0x00000002:
			TASK_CLEAR((*&Local_4 + 296)[12]);
			MAKE_ACTOR_READY_FOR_ACTION((*&Local_4 + 296)[12], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_4 + 296)[12], -1.0f);
			TASK_PRIORITY_SET((*&Local_4 + 296)[12], false);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 296)[12], 13, true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[12], 20, 0,55f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[12], 10, 2.0f);
			bLocal_536++;
			break;
		
		case 0x00000003:
			TASK_CLEAR((*&Local_4 + 296)[32]);
			MAKE_ACTOR_READY_FOR_ACTION((*&Local_4 + 296)[32], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_4 + 296)[32], -1.0f);
			TASK_PRIORITY_SET((*&Local_4 + 296)[32], false);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[32], 20, 0,75f);
			bLocal_536++;
			break;
		
		case 0x00000004:
			TASK_CLEAR((*&Local_4 + 296)[22]);
			MAKE_ACTOR_READY_FOR_ACTION((*&Local_4 + 296)[22], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_4 + 296)[22], -1.0f);
			TASK_PRIORITY_SET((*&Local_4 + 296)[22], false);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 296)[22], 13, true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[22], 20, 0,65f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[22], 10, 5.0f);
			bLocal_536++;
			break;
		
		case 0x00000005:
			TASK_CLEAR((*&Local_4 + 296)[02]);
			MAKE_ACTOR_READY_FOR_ACTION((*&Local_4 + 296)[02], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_4 + 296)[02], -1.0f);
			TASK_PRIORITY_SET((*&Local_4 + 296)[02], false);
			DECOR_SET_BOOL((*&Local_4 + 296)[02], "AiCoverExpose", true);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 296)[02], 13, true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[02], 20, 0,45f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[02], 10, 3.0f);
			bLocal_536++;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_364(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12983 / 76163
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
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_365(int iParam0, float fParam1) //Position: 0x129C8 / 76232
{
	if (!Function_279(iParam0))
	{
		Function_228(iParam0, fParam1);
	}
	return;
}

void Function_366(bool bParam0, bool bParam1, bool bParam2) //Position: 0x129DE / 76254
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
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
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_367() //Position: 0x12A49 / 76361
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Outlaw01_SpottedByOutlaws", "Outlaw01_SpottedByOutlaws", false, 3, 1, 0, 1);
		Function_356(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_368(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x12AA5 / 76453
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
		if (MEMORY_GET_IS_VISIBLE(bVar1, bParam1))
		{
			if (bParam3)
			{
			}
			if (Function_369(bVar1, bParam1) >= fParam2)
			{
				if (bParam3)
				{
				}
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

float Function_369(bool bParam0, bool bParam1) //Position: 0x12AFF / 76543
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_370(&uVar0, &uVar3);
	return iVar6;
}

var Function_370(var uParam0, int iParam1) //Position: 0x12B1E / 76574
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

var Function_371(bool bParam0, bool bParam1) //Position: 0x12B3C / 76604
{
	int iVar0;
	
	iVar0 = 0;
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bParam0)) > 1.0f)
	{
		switch (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(bParam0)))
		{
			case 0x0000002F:
				if (bParam1)
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000029:
				iVar0 = 1;
				break;
			
			case 0x00000027:
				iVar0 = 1;
				break;
			
			case 0x00000028:
				iVar0 = 1;
				break;
			
			case 0x0000002A:
				iVar0 = 1;
				break;
			
			case 0x0000002B:
				iVar0 = 1;
				break;
			
			case 0x0000002C:
				iVar0 = 1;
				break;
			
			case 0x00000031:
				iVar0 = 1;
				break;
			}
	}
	return iVar0;
}

int Function_372(bool bParam0, bool bParam1) //Position: 0x12BC7 / 76743
{
	bool bVar0;
	bool bVar1;
	void fVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	fVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (fVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					bVar0 = true;
				}
			}
		}
		bVar1++;
	}
	return bVar0;
}

void Function_373() //Position: 0x12C30 / 76848
{
	switch (iLocal_535)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[7]))
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 296)[52], 0);
				TASK_CLEAR((*&Local_4 + 296)[52]);
				TASK_POINT_GUN_AT_OBJECT((*&Local_4 + 296)[52], Global_34573, -1.0f, 1);
				TASK_PRIORITY_SET((*&Local_4 + 296)[52], true);
				Function_376();
				iLocal_510 = 1;
				Function_227(&iLocal_558);
				iLocal_535 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_277(&iLocal_558) <= 6.0f)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[7]))
				{
					Function_375();
					Function_227(&iLocal_558);
					iLocal_535 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_277(&iLocal_558) <= 5.0f && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 540)[7]))
				{
					bLocal_512 = true;
					iLocal_535 = 4294967295;
					Function_374();
				}
			}
			break;
	}
	return;
}

void Function_374() //Position: 0x12D19 / 77081
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Outlaw01_GangMembScreams", "Outlaw01_GangMembScreams", false, 3, 1, 0, 1);
		Function_356(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_375() //Position: 0x12D73 / 77171
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Outlaw01_GangMembWarns", "Outlaw01_GangMembWarns", false, 3, 1, 0, 1);
		Function_356(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_376() //Position: 0x12DC9 / 77257
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Outlaw01_GangMembSpots", "Outlaw01_GangMembSpots", false, 3, 1, 0, 1);
		Function_356(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_377(bool bParam0, bool bParam1) //Position: 0x12E1F / 77343
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
				MEMORY_ALLOW_SHOOTING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_378() //Position: 0x12E67 / 77415
{
	if (IS_ACTOR_VALID((*&Local_4 + 296)[12]))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 296)[12], 13, false);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[12], 20, 0,75f);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 296)[22]))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 296)[22], 13, false);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[22], 20, 0,65f);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 296)[02]))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 296)[02], 13, false);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 296)[02], 20, 0,85f);
	}
	return;
}

void Function_379() //Position: 0x12EF7 / 77559
{
	if (Function_279(&iLocal_552))
	{
		if (Function_277(&iLocal_552) <= 12.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			Function_380();
			Function_227(&iLocal_552);
		}
	}
	else
	{
		Function_365(&iLocal_552, 12.0f);
	}
	return;
}

void Function_380() //Position: 0x12F31 / 77617
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JonFollowsIrishInstead", "Outlaw01_JonFollowsIrishInstead", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_381(var uParam0, float fParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x12F98 / 77720
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_388(Global_34573, bParam3, uParam2))
	{
		Function_232(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_388(Global_34573, bParam3, fParam1))
	{
		if (!Function_387(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_390(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_386(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_385(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_387(1))
	{
		Function_384(1);
		if (!Function_383())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_382();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_385(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_382() //Position: 0x13106 / 78086
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

bool Function_383() //Position: 0x13131 / 78129
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

void Function_384(bool bParam0) //Position: 0x13175 / 78197
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

void Function_385(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x131D8 / 78296
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

void Function_386(bool bParam0) //Position: 0x13279 / 78457
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

bool Function_387(bool bParam0) //Position: 0x132DC / 78556
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_152(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_388(bool bParam0, bool bParam1, float fParam2) //Position: 0x13323 / 78627
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_326(bParam0);
			Function_389(bParam1);
			if (VDIST(Function_326(bParam0), Function_389(bParam1)) >= fParam2)
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

vector3 Function_389(bool bParam0) //Position: 0x1343D / 78909
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

void Function_390(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x134A9 / 79017
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

void Function_391() //Position: 0x134FC / 79100
{
	Function_216((*&Local_4 + 1208)[1]);
	vLocal_517 = { StackVal, StackVal, Function_216((*&Local_4 + 1208)[1]) };
	bLocal_542 = FIND_NEAREST_DOOR(&vLocal_517, 3.0f);
	Function_120(bLocal_542, 1);
	if (!bLocal_502)
	{
		if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
		{
			TASK_CLEAR(GET_MOUNT(Global_34573));
		}
	}
	Function_392(&(Local_611[117]));
	return;
}

void Function_392(int iParam0) //Position: 0x13548 / 79176
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

bool Function_393() //Position: 0x135FC / 79356
{
	var uVar0;
	
	Function_284(&Local_461, 1, 0);
	switch (Local_461)
	{
		case 0x000003E8:
			Function_338(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 6, bLocal_472);
				Local_461.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_461.f_16 = Function_400(Local_4, 0, Global_34573, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_461.f_16))
				{
				}
				else
				{
					LOG_ERROR("Outlaw01_CS03 - Failed to create Outlaw01_CS03_cutscene");
				}
			}
			SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_461.f_16, 1);
			if (!HUD_IS_FADED())
			{
				Local_461 = 1001;
			}
			else
			{
				Local_461 = 1008;
			}
			break;
		
		case 0x000003F0:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Local_461 = 1001;
			}
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_461.f_16), false))
			{
				Function_399(Global_34573, 1, 1);
				Function_399(bLocal_472, 1, 1);
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					if (!IS_ACTOR_VALID(bLocal_473))
					{
						bLocal_473 = Function_213(1, 0, 0, 0, 0, 0, 1, 0);
						Function_222(bLocal_473, (*&Local_4 + 992)[0], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_473);
						Function_422(Global_34573, (*&Local_4 + 992)[0], 1, 1, 1);
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					}
					else
					{
						Function_222(bLocal_473, (*&Local_4 + 992)[0], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_473);
						Function_422(Global_34573, (*&Local_4 + 992)[0], 1, 1, 1);
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					}
				}
				else
				{
					Function_422(Global_34573, (*&Local_4 + 992)[0], 1, 1, 1);
				}
				bLocal_530 = GET_MOUNT(bLocal_472);
				if (!IS_ACTOR_VALID(bLocal_530))
				{
					Function_398();
					bLocal_530 = (*&Local_4 + 420)[02];
					Function_222(bLocal_530, (*&Local_4 + 992)[11], 1, 1, 1);
					Function_222(bLocal_472, (*&Local_4 + 992)[2], 1, 1, 1);
					ACTOR_MOUNT_ACTOR(bLocal_472, bLocal_530);
					Function_422(bLocal_472, (*&Local_4 + 992)[2], 1, 1, 1);
					TASK_STAND_STILL(bLocal_472, -1.0f, 0, 0);
					TASK_STAND_STILL(bLocal_530, -1.0f, 0, 0);
					if (IS_ACTOR_VALID(bLocal_532))
					{
						DESTROY_ACTOR(bLocal_532);
					}
				}
				else
				{
					Function_422(bLocal_472, (*&Local_4 + 992)[2], 1, 1, 1);
					TASK_STAND_STILL(bLocal_472, -1.0f, 0, 0);
					TASK_STAND_STILL(bLocal_530, -1.0f, 0, 0);
				}
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 436)[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 436)[2]);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 436)[2]);
				Function_397(&Local_461 + 4);
				Local_461 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			TASK_GO_TO_COORD_AND_STAY(StackVal, Global_34573, &Local_4 + 652[46], true);
			TASK_PRIORITY_SET(Global_34573, true);
			TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_472, &Local_4 + 652[56], true);
			TASK_PRIORITY_SET(bLocal_472, true);
			Local_461 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_277(&Local_461 + 4) < 0,25f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_227(&Local_461 + 4);
					iLocal_711 = 15;
					iLocal_712 = 15;
					Local_461 = 1004;
				}
			}
			else
			{
				Function_227(&Local_461 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_395() && Function_394())
			{
				Function_227(&Local_461 + 4);
				Local_461 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_399(Global_34573, 0, 1);
				Function_399(bLocal_472, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_323(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_461.f_16))
				{
					DESTROY_OBJECT(Local_461.f_16);
				}
				Local_461 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Local_461 = 1104;
			}
			break;
	}
	return 0;
}

int Function_394() //Position: 0x139FA / 80378
{
	switch (iLocal_712)
	{
		case 0x0000000F:
			if (Function_277(&Local_461 + 4) < 0.0f)
			{
				iLocal_712 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_277(&Local_461 + 4) < 13.0f)
			{
				iLocal_712 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_277(&Local_461 + 4) < 12,75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_395() //Position: 0x13A5F / 80479
{
	switch (iLocal_711)
	{
		case 0x0000000F:
			if (Function_277(&Local_461 + 4) < 3.0f)
			{
				Function_396();
				iLocal_711 = 106;
			}
			break;
		
		case 0x00000019:
			if (Function_277(&Local_461 + 4) < 10,5f)
			{
				iLocal_711 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_277(&Local_461 + 4) < 13.0f)
			{
				iLocal_711 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_277(&Local_461 + 4) < 15.0f)
			{
				iLocal_711 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_277(&Local_461 + 4) < 15,75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_396() //Position: 0x13B05 / 80645
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_CS03_v1_AA", "Outlaw01_CS03_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_CS03_v1_AB", "Outlaw01_CS03_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_CS03_v1_AC", "Outlaw01_CS03_v1_AC", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_397(int iParam0) //Position: 0x13BBE / 80830
{
	if (!Function_279(iParam0))
	{
		Function_228(iParam0, 0.0f);
	}
	return;
}

void Function_398() //Position: 0x13BD3 / 80851
{
	Local_4.f_432 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Comp_Horse_Backup"));
	(*&Local_4 + 420)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse_03_1", 976, -1974,211f, 37,82147f, 3273,789f, 0.0f, 174,0952f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 420)[02], Local_4.f_432);
	ACCESSORIZE_HORSE((*&Local_4 + 420)[02], 3);
	return;
}

void Function_399(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13C4A / 80970
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

var Function_400(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x13CE4 / 81124
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Outlaw01_CS03", 6, 1);
	}
	Function_401(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_401(var uParam0, char* cParam1) //Position: 0x13D5F / 81247
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_407(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_406(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_405(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_404(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_403(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_402(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 4, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 4, 5, 7,75f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 0,5f, 2);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 7,5f, 3);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 7,5f, 0, 0);
	return;
}

void Function_402(int iParam0) //Position: 0x13E1A / 81434
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1952,754f, 36,71468f, 3282,714f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,180597f, -1,911888f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_403(int iParam0) //Position: 0x13E84 / 81540
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1969,09f, 40,38677f, 3276,044f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,16711f, -1,966866f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_404(int iParam0) //Position: 0x13EEE / 81646
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1948,145f, 36,54208f, 3287,135f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,330996f, -1,776444f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_405(int iParam0) //Position: 0x13F51 / 81745
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1939,25f, 34,34254f, 3285,188f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,120793f, 2,063977f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_406(int iParam0) //Position: 0x13FB4 / 81844
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1946,901f, 34,48132f, 3286,111f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,011746f, -1,849566f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_407(int iParam0) //Position: 0x14019 / 81945
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1949,852f, 33,73759f, 3279,189f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,068335f, -1,954832f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_408(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x1407C / 82044
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
	if (iParam3 != Global_34165.f_48 && !Function_413())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_412(0);
	Function_411();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_410(uParam4, iVar0, iVar1);
	Function_409();
}

void Function_409() //Position: 0x14119 / 82201
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

void Function_410(int iParam0, bool bParam1, bool bParam2) //Position: 0x1415A / 82266
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

void Function_411() //Position: 0x142C0 / 82624
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_412(bool bParam0) //Position: 0x142E4 / 82660
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

bool Function_413() //Position: 0x14313 / 82707
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_414(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x1432E / 82734
{
	if (Function_415(&iParam0) == iParam7 || Function_413())
	{
		return 1;
	}
	return 0;
}

int Function_415(int iParam0) //Position: 0x1434D / 82765
{
	if (Function_282(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_416() //Position: 0x14365 / 82789
{
	bool bVar0;
	
	Function_420();
	bVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_348);
	bVar0 = (bVar0 || 2048);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_348, bVar0);
	Function_419(Local_4.f_348, 65.0f);
	Function_418(Local_4.f_348, 45.0f, 1,5f, 0,1f);
	Function_417(Local_4.f_348, 1);
	Function_377(Local_4.f_348, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 296)[02], Local_4.f_1556, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 296)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1556), "UseCase1", 4294967295, 1);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 296)[02], 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*&Local_4 + 296)[02], true);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 296)[12], Local_4.f_1560, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 296)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1560), "UseCase1", 4294967295, 1);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 296)[12], 1);
	TASK_STAND_STILL((*&Local_4 + 296)[32], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 296)[32], true);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 296)[32], 1);
	TASK_STAND_STILL((*&Local_4 + 296)[52], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 296)[52], true);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 296)[52], 1);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 296)[22], Local_4.f_1564, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 296)[22], GET_GRINGO_FROM_OBJECT(Local_4.f_1564), "UseCase1", 4294967295, 1);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 296)[22], 1);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 296)[42], Local_4.f_1572, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 296)[42], GET_GRINGO_FROM_OBJECT(Local_4.f_1572), "UseCase1", 4294967295, 1);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 296)[42], 1);
	Function_216((*&Local_4 + 1208)[2]);
	bLocal_499 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_405, "bandit_fire", "amb_campfire_large", Function_216((*&Local_4 + 1208)[2]));
	UNK_0x6745191B(bLocal_499, 0.0f, 0.0f, 0.0f);
	return;
}

void Function_417(bool bParam0, bool bParam1) //Position: 0x14585 / 83333
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_418(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x145C3 / 83395
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
			Function_360(bVar1, bParam1, fParam2, fParam3);
		}
		bVar0++;
	}
}

void Function_419(bool bParam0, bool bParam1) //Position: 0x14609 / 83465
{
	void fVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	fVar0 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (fVar0 - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(bVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(bVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_420() //Position: 0x14662 / 83554
{
	Local_4.f_348 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Bandits"));
	(*&Local_4 + 296)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bandit_0", 397, -1866,494f, 25,64559f, 3300,537f, 0.0f, 17,5112f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 296)[02], Local_4.f_348);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 296)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 296)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 296)[02], 19);
	(*&Local_4 + 296)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bandit_1", 398, -1884,388f, 24,6069f, 3303,539f, 0.0f, 217,5292f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 296)[12], Local_4.f_348);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 296)[12], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 296)[12], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 296)[12], 19);
	(*&Local_4 + 296)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bandit_2", 403, -1881,519f, 24,66298f, 3302,885f, 0.0f, 163,1807f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 296)[22], Local_4.f_348);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 296)[22], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 296)[22], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 296)[22], 19);
	(*&Local_4 + 296)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bandit_3", 400, -1876.0f, 24,59883f, 3298,448f, 1,797911f, 104,8847f, 2,713675f);
	SQUAD_JOIN((*&Local_4 + 296)[32], Local_4.f_348);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 296)[32], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 296)[32], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 296)[32], 19);
	(*&Local_4 + 296)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bandit_6", 399, -1890,118f, 24,4821f, 3304.0f, 0.0f, -14,20155f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 296)[42], Local_4.f_348);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 296)[42], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 296)[42], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 296)[42], 19);
	(*&Local_4 + 296)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bandit_7", 401, -1884,485f, 24,63373f, 3307,515f, 0.0f, 25,16624f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 296)[52], Local_4.f_348);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 296)[52], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 296)[52], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 296)[52], 19);
	return;
}

int Function_421() //Position: 0x1491B / 84251
{
	Function_321(&Local_4 + 208, 397, 2, 0);
	Function_321(&Local_4 + 208, 398, 2, 0);
	Function_321(&Local_4 + 208, 403, 2, 0);
	Function_321(&Local_4 + 208, 400, 2, 0);
	Function_321(&Local_4 + 208, 399, 2, 0);
	Function_321(&Local_4 + 208, 401, 2, 0);
	Function_321(&Local_4 + 208, 402, 2, 0);
	if (Function_313(&Local_4 + 208))
	{
		return 1;
	}
	return 0;
}

void Function_422(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x14989 / 84361
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
				Function_423(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, bParam3, iParam4);
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

void Function_423(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x14AA0 / 84640
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
		}
	}
}

void Function_424(float fParam0) //Position: 0x14B59 / 84825
{
	fParam0->f_4 = 0.0f;
	fParam0->f_8 = 0.0f;
	*fParam0 = 0;
	return;
}

int Function_425(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x14B6D / 84845
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_428(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_429()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_426();
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
	else if ((!Function_428(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_429()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_428(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_426() //Position: 0x14DB3 / 85427
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
			Function_427(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_427(char* cParam0, vector3 vParam1) //Position: 0x14E07 / 85511
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

bool Function_428(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x14F2F / 85807
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_326(bParam0);
		if (VDIST(Function_326(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_429() //Position: 0x14FB9 / 85945
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_430() //Position: 0x14FC8 / 85960
{
	if (iLocal_469 < 3 && iLocal_469 > 105)
	{
		if (iLocal_709 <= 3)
		{
			if (Function_460(&iLocal_480, 60.0f, 200.0f, bLocal_472, "Outlaw_return", "Outlaw_abandoned", &bLocal_495, 1, bLocal_405, Local_4, 325, 1))
			{
				if (IS_VOLUME_VALID((*&Local_4 + 500)[3]))
				{
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 4);
				}
			}
			else if ((iLocal_505 && !iLocal_514) && IS_VOLUME_VALID((*&Local_4 + 500)[3]))
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 3);
			}
		}
		else if (!Function_459(&iLocal_480, 60.0f, bLocal_473, "Horse_return", "Horse_abandoned", &bLocal_495, 1, bLocal_405, Local_4, 334, 1))
		{
			if (Function_460(&iLocal_480, 60.0f, 200.0f, bLocal_472, "Outlaw_return", "Outlaw_abandoned", &bLocal_495, 1, bLocal_405, Local_4, 325, 1))
			{
				if (IS_VOLUME_VALID((*&Local_4 + 500)[3]))
				{
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 4);
				}
			}
			else if ((iLocal_505 && !iLocal_514) && IS_VOLUME_VALID((*&Local_4 + 500)[3]))
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 3);
			}
		}
	}
	switch (iLocal_469)
	{
		case 0x00000000:
			Function_346(0);
			Function_458();
			SET_ACTOR_HEALTH(bLocal_472, GET_ACTOR_MAX_HEALTH(bLocal_472));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			if (iLocal_483[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_343();
				bLocal_470 = Global_30628[0];
				if (!Function_342(bLocal_470))
				{
					Function_341(&Local_406);
				}
				Function_222(Global_34573, (*&Local_4 + 612)[0], 1, 1, 1);
				Function_222(bLocal_472, (*&Local_4 + 612)[2], 1, 1, 1);
				Function_299();
				Function_227(&iLocal_474);
				iLocal_469 = 1;
			}
			else
			{
				Function_227(&iLocal_474);
				iLocal_469 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_457()) && (Function_342(bLocal_470) || bLocal_470 != 4294967295))
			{
				Function_227(&iLocal_474);
				iLocal_469 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_414(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_406, 1))
			{
				vLocal_523 = { -5,027f, 148,468f, 0.0f };
				VSCALE(&vLocal_523, 5.0f);
				vLocal_523 = { StackVal, StackVal, Vector(vLocal_523, StackVal, StackVal) + Vector(2566,635f, 18,013f, -2179,049f) };
				CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(vLocal_523, 0, 0);
				Function_227(&iLocal_474);
				iLocal_469 = 3;
			}
			else
			{
				Function_227(&iLocal_474);
				iLocal_469 = 95;
			}
			Function_238(bLocal_468);
			Function_408(StackVal, StackVal, Function_238(bLocal_468), bLocal_468, Global_30628[0], Function_240(bLocal_468), 0);
			Local_461 = 1000;
			Function_421();
			Function_223();
			if (IS_ACTOR_VALID(bLocal_473))
			{
				Function_222(bLocal_473, (*&Local_4 + 612)[5], 1, 1, 1);
			}
			iLocal_538 = Function_456();
			break;
		
		case 0x00000003:
			if (Function_270("$/cutscene/OUTLAW01_CS02/OUTLAW01_CS02", &Local_461, &Local_406, &bLocal_468, 69252, 68434, 67649, 67055, 66710, 51750, 0, 1, 1, 2, 2, 0, 1))
			{
				ACTOR_END_FORCE_HOLSTER(Global_34573);
				Function_274(1.0f);
				Function_227(&iLocal_474);
				iLocal_469 = 6;
			}
			break;
		
		case 0x0000005F:
			RESET_ANIM_SET_FOR_ACTOR(bLocal_472, 1);
			RESET_REACT_NODE_FOR_ACTOR(bLocal_472);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,5f, 0);
			Function_222(Global_34573, (*&Local_4 + 612)[1], 1, 1, 1);
			Function_222(bLocal_472, (*&Local_4 + 612)[3], 1, 1, 1);
			SET_ACTORS_HORSE(bLocal_472, bLocal_532);
			Function_325(&bLocal_472, bLocal_532, 1);
			MEMORY_PREFER_RIDING(bLocal_472, true);
			TASK_CLEAR(bLocal_472);
			TASK_MOUNT(bLocal_472, bLocal_532, 0, 1, 2, 2147483647);
			Function_227(&iLocal_474);
			iLocal_469 = 96;
			break;
		
		case 0x00000060:
			if (Function_277(&iLocal_474) <= 1,5f)
			{
				Function_274(1.0f);
				Function_227(&iLocal_474);
				iLocal_469 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_453(1, 1);
				Function_452();
				FORCE_LOOK_AT_ACTOR(bLocal_472, Global_34573, -1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_473)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_473, 334, 0.0f, 2, 0);
				}
				Function_227(&iLocal_474);
				iLocal_469 = 7;
			}
			break;
		
		case 0x00000007:
			Function_453(1, 1);
			if (!IS_ACTOR_RIDING(bLocal_472))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bLocal_532)) > 1.0f)
				{
					if (GET_LAST_ATTACKER(bLocal_532) == Global_34573)
					{
						Function_232("Outlaw01_Hurt_Irish_Horse");
						bLocal_495 = true;
						return;
					}
				}
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_203(bLocal_473);
				Function_290(&(Local_611[117]), bLocal_473, "Horse", 0, 0x5f5e100, 1);
				Function_227(&iLocal_474);
				iLocal_469 = 8;
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_277(&iLocal_474) <= 8.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_390("Outlaw01_obj03", 0x40f00000, 1, 2, 0, 0, 0);
				Function_227(&iLocal_474);
				Function_228(&iLocal_477, 7.0f);
				iLocal_469 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_431())
			{
				Function_225(0, 0, 1);
				Function_227(&iLocal_474);
				iLocal_469 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_209();
			iLocal_483[1] = 1;
			Function_227(&iLocal_474);
			bLocal_468 = 2;
			iLocal_469 = 0;
			break;
	}
	return;
}

bool Function_431() //Position: 0x1552E / 87342
{
	if (iLocal_709 >= 2)
	{
		if (iLocal_709 < 4 && iLocal_709 > 6)
		{
			Function_446();
			Function_444();
		}
		Function_453(1, 1);
		Function_443();
		if (iLocal_709 < 8)
		{
			Function_440();
		}
		Function_439();
		if (IS_VOLUME_VALID((*&Local_4 + 500)[2]))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_472, (*&Local_4 + 500)[2]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 500)[2]))
			{
				Function_416();
				DESTROY_VOLUME((*&Local_4 + 500)[2]);
			}
		}
		if (IS_VOLUME_VALID((*&Local_4 + 500)[6]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 500)[6]))
			{
				Function_438();
				iLocal_509 = 1;
				DESTROY_VOLUME((*&Local_4 + 500)[6]);
			}
		}
		if (!iLocal_516)
		{
			Function_340(bLocal_472);
			STREAMING_LOAD_BOUNDS_EXT(0, Function_340(bLocal_472), 20.0f, 1);
		}
		if (IS_VOLUME_VALID((*&Local_4 + 500)[1]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 500)[1]) || Function_368(Local_4.f_348, Global_34573, 7.0f, 0))
			{
				Function_437();
			}
			else if (SQUAD_IS_VALID(Local_4.f_348))
			{
				if (Function_372(Local_4.f_348, Global_34573) || Function_368(Local_4.f_348, Global_34573, 7.0f, 0))
				{
					Function_437();
				}
			}
		}
	}
	if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
	{
		if (!iLocal_514)
		{
			iLocal_514 = 1;
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_472);
		}
	}
	else if (iLocal_514)
	{
		iLocal_514 = 0;
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, true);
	}
	switch (iLocal_709)
	{
		case 0x00000002:
			if (IS_ACTOR_RIDING(Global_34573))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_436();
				AUDIO_MUSIC_SET_MOOD("nCHASE_ALT", 0, 4294967295, 4294967295);
				STOP_FORCE_LOOK_AT_COORD(bLocal_472);
				Function_203(bLocal_473);
				Function_397(&iLocal_555);
				Function_227(&iLocal_474);
				Function_227(&iLocal_477);
				Function_227(&iLocal_552);
				iLocal_709 = 3;
				return 0;
			}
			Function_434();
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING(bLocal_472))
			{
				Function_225(0, 1, 1);
				TASK_CLEAR(bLocal_472);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_472, Local_4.f_1588, 5, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 4);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_472, 3212836864, 3212836864, 4, 1, 0);
				Function_227(&iLocal_561);
				Function_227(&iLocal_474);
				iLocal_709 = 4;
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_277(&iLocal_474) <= 7.0f)
			{
				STREAMING_LOAD_SCENE_EXT(-1933,491f, 33,178f, 3291,625f, -8,929f, -100,275f, 0.0f, 0);
				HUD_CLEAR_OBJECTIVE();
				Function_390("Outlaw01_obj04", 0x40f00000, 1, 2, 0, 0, 0);
				Function_227(&iLocal_474);
				Function_227(&iLocal_477);
				iLocal_709 = 5;
				return 0;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 500)[4]))
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_225(0, 0, 1);
				Function_390("Outlaw01_obj03_hill", 0x40f00000, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT(Local_4.f_1548, 330, 0f, 2, 0);
				iLocal_709 = 6;
				return 0;
			}
			break;
		
		case 0x00000006:
			GET_POSITION(bLocal_472, &vLocal_517);
			ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_1588, &vLocal_517, &Local_4 + 1524, &fLocal_526, &fLocal_527, &uLocal_528);
			if (StackVal || Function_428(StackVal, fLocal_526 <= fLocal_527, bLocal_472, *(&Local_4 + 1524), 3,5f))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_472);
				Function_227(&iLocal_474);
				iLocal_709 = 7;
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 500)[7]))
			{
				Function_227(&iLocal_474);
				iLocal_709 = 7;
				return 0;
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 500)[7]) && IS_ACTOR_RIDING(Global_34573))
			{
				HUD_ENABLE(false);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				HUD_CLEAR_OBJECTIVE();
				ABORT_SCRIPTED_CONVERSATION(1);
				TASK_GO_NEAR_OBJECT(Global_34573, (*&Local_4 + 992)[13], 7.0f, 2, 0, 1);
				iLocal_709 = 8;
				return 0;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 500)[0]))
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_353(Global_34573, 0);
				ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
				Function_226(Local_4.f_1548);
				Function_227(&iLocal_474);
				iLocal_709 = 9;
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(bLocal_472, (*&Local_4 + 500)[0]))
			{
				Function_432();
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!iLocal_516)
				{
					iLocal_516 = 1;
					STREAMING_UNLOAD_BOUNDS();
				}
				return 1;
			}
			break;
		
		case 0x00000000:
			Function_423(StackVal, StackVal, StackVal, Global_34573, *(&Local_4 + 1476), 1, 1, 1);
			TASK_CLEAR(bLocal_472);
			Function_423(StackVal, StackVal, StackVal, bLocal_472, *(&Local_4 + 1500), 1, 1, 1);
			iLocal_709 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_472, Local_4.f_1588, 5, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 4);
				iLocal_709 = 5;
			}
			break;
	}
	return 0;
}

void Function_432() //Position: 0x159A8 / 88488
{
	if (!Function_279(&iLocal_477))
	{
		Function_397(&iLocal_477);
	}
	else if (Function_277(&iLocal_477) <= 30.0f)
	{
		Function_433();
		Function_227(&iLocal_477);
	}
	return;
}

void Function_433() //Position: 0x159D9 / 88537
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NoGetOnHorse1", "Outlaw01_NoGetOnHorse1", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x15A2E / 88622
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_277(&iLocal_477) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			Function_435();
			SET_ANIM_SET_FOR_ACTOR(bLocal_472, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_472, "stand_ambient/one_hnd_hrs");
			Function_227(&iLocal_477);
		}
	}
	return;
}

void Function_435() //Position: 0x15A93 / 88723
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WaitingOnJohnGetOnHorse", "Outlaw01_WaitingOnJohnGetOnHorse", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_436() //Position: 0x15AFC / 88828
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_MountsAndSetsOff", "Outlaw01_MountsAndSetsOff", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_437() //Position: 0x15B57 / 88919
{
	bLocal_502 = true;
	Function_226(Local_4.f_1548);
	Function_203(bLocal_472);
	Function_226((*&Local_4 + 1208)[0]);
	Function_225(0, 0, 1);
	DESTROY_VOLUME((*&Local_4 + 500)[1]);
	DESTROY_VOLUME((*&Local_4 + 500)[0]);
	Function_227(&iLocal_474);
	iLocal_709 = 9;
	bLocal_534 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 652[66], 2, 3212836864);
	TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 652[76], 4, 3212836864);
	TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 652[86], 4, 3212836864);
	TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_4 + 652[96], 4);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_472, bLocal_534);
	TASK_SEQUENCE_RELEASE(bLocal_534, 1);
	TASK_PRIORITY_SET(bLocal_472, true);
	Function_367();
	AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
	Function_289(Local_4.f_348, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_366(Local_4.f_348, Global_34573, 0);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 296)[32], true);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 296)[52], true);
	Function_377(Local_4.f_348, 1);
	Function_365(&iLocal_549, 1.0f);
	iLocal_708 = 2;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	Function_227(&iLocal_474);
	iLocal_469 = 106;
	return;
}

void Function_438() //Position: 0x15C8E / 89230
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AA1", "Outlaw01_NearDJulioBanter_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AA2", "Outlaw01_NearDJulioBanter_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AA3", "Outlaw01_NearDJulioBanter_v1_AA3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AB", "Outlaw01_NearDJulioBanter_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AC", "Outlaw01_NearDJulioBanter_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AD", "Outlaw01_NearDJulioBanter_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AE", "Outlaw01_NearDJulioBanter_v1_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AF1", "Outlaw01_NearDJulioBanter_v1_AF1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AF2", "Outlaw01_NearDJulioBanter_v1_AF2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AG", "Outlaw01_NearDJulioBanter_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AH1", "Outlaw01_NearDJulioBanter_v1_AH1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AH2", "Outlaw01_NearDJulioBanter_v1_AH2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AI1", "Outlaw01_NearDJulioBanter_v1_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AI2", "Outlaw01_NearDJulioBanter_v1_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AI3", "Outlaw01_NearDJulioBanter_v1_AI3", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x1613F / 90431
{
	if (Function_279(&iLocal_561) && !iLocal_505)
	{
		if (Function_369(Global_34573, bLocal_472) <= 17.0f || !IS_ACTOR_RIDING(Global_34573))
		{
			Function_227(&iLocal_561);
		}
		if (Function_277(&iLocal_561) <= 3.0f)
		{
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 3);
			iLocal_505 = 1;
		}
	}
	return;
}

void Function_440() //Position: 0x16189 / 90505
{
	GET_POSITION(bLocal_472, &vLocal_517);
	GET_POSITION(Global_34573, &Local_520);
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_1588, &vLocal_517, &Local_520, &fLocal_526, &fLocal_527, &uLocal_528);
	if ((fLocal_526 - fLocal_527) <= 30.0f)
	{
		Function_442();
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 4);
		iLocal_504 = 1;
	}
	else if ((fLocal_527 - fLocal_526) <= 30.0f)
	{
		Function_441();
		iLocal_504 = 1;
	}
	else if (iLocal_504)
	{
		iLocal_504 = 0;
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_472, 3);
	}
	return;
}

void Function_441() //Position: 0x16204 / 90628
{
	if (Function_279(&iLocal_552))
	{
		if (Function_277(&iLocal_552) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_472, "Outlaw01_2FarAheadDuringRide", "", false, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
			Function_227(&iLocal_552);
		}
	}
	else
	{
		Function_365(&iLocal_552, 9.0f);
	}
	return;
}

void Function_442() //Position: 0x16270 / 90736
{
	if (Function_279(&iLocal_552))
	{
		if (Function_277(&iLocal_552) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_472, "Outlaw01_2FarBehindDuringRide", "", false, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
			SET_ANIM_SET_FOR_ACTOR(bLocal_472, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_472, "stand_ambient/one_hnd_hrs");
			Function_227(&iLocal_552);
		}
	}
	else
	{
		Function_365(&iLocal_552, 9.0f);
	}
	return;
}

void Function_443() //Position: 0x16318 / 90904
{
	if (IS_VOLUME_VALID((*&Local_4 + 500)[3]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_472, (*&Local_4 + 500)[3]))
		{
			iLocal_516 = 1;
			STREAMING_UNLOAD_BOUNDS();
			bLocal_534 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &Local_4 + 652[126], 2);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_472);
			TASK_CLEAR(bLocal_472);
			TASK_SEQUENCE_PERFORM(bLocal_472, bLocal_534);
			TASK_SEQUENCE_RELEASE(bLocal_534, 1);
			Function_424(&iLocal_477);
			DESTROY_VOLUME((*&Local_4 + 500)[3]);
		}
	}
	return;
}

void Function_444() //Position: 0x1638F / 91023
{
	if (IS_ACTOR_SHOOTING(Global_34573))
	{
		if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
		{
			if (Function_369(Global_34573, bLocal_472) > 30.0f)
			{
				if (!Function_445(0x42c80000))
				{
					if (Function_277(&iLocal_567) <= 2.0f)
					{
						if (iLocal_541 <= 3)
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_472, "Outlaw01_ShootsRandToDJulio", "", false, 0, 0, 3, 0, 0, 0, 1000, 0, 0);
							Function_227(&iLocal_567);
							iLocal_541++;
						}
					}
				}
			}
		}
	}
	return;
}

bool Function_445(float fParam0) //Position: 0x16424 / 91172
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	float fVar15;
	
	if (IS_LAYOUTREF_VALID(bLocal_405))
	{
		vVar0 = { -fParam0, -fParam0, -fParam0 };
		vVar3 = { fParam0, fParam0, fParam0 };
		UNK_0xB89CC342(Global_34573, &vVar0, &vVar6);
		UNK_0xB89CC342(Global_34573, &vVar3, &vVar9);
		bVar12 = CREATE_OBJECT_ITERATOR(bLocal_405);
		ITERATE_IN_AREA(bVar12, vVar9, vVar6);
		bVar13 = START_OBJECT_ITERATOR(bVar12);
		while (IS_OBJECT_VALID(bVar13))
		{
			bVar14 = GET_ACTOR_FROM_OBJECT(bVar13);
			if (IS_ACTOR_VALID(bVar14))
			{
				if (IS_ACTOR_HUMAN(bVar14))
				{
					fVar15 = CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(Global_34573, bVar14);
					if (fVar15 > 0,25f)
					{
						DESTROY_ITERATOR(bVar12);
						return 1;
					}
				}
			}
			bVar13 = OBJECT_ITERATOR_NEXT(bVar12);
		}
		DESTROY_ITERATOR(bVar12);
	}
	return 0;
}

void Function_446() //Position: 0x164C7 / 91335
{
	if ((((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE()) && !iLocal_504) && !iLocal_509) && Function_369(Global_34573, bLocal_472) >= 27.0f)
	{
		if (Function_277(&iLocal_555) <= 4.0f)
		{
			switch (iLocal_538)
			{
				case 0x00000000:
					Function_451();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_227(&iLocal_555);
						iLocal_538++;
					}
					break;
				
				case 0x00000001:
					Function_450();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_227(&iLocal_555);
						iLocal_538++;
					}
					break;
				
				case 0x00000002:
					Function_449();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_227(&iLocal_555);
						iLocal_538++;
					}
					break;
				
				case 0x00000003:
					Function_448();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_227(&iLocal_555);
						iLocal_538++;
					}
					break;
				
				case 0x00000063:
					break;
				
				default:
					Function_447();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_538 = 99;
						Function_227(&iLocal_555);
					}
					break;
				}
			}
	}
	return;
}

void Function_447() //Position: 0x165A6 / 91558
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NoTalk", "Outlaw01_NoTalk", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_448() //Position: 0x165ED / 91629
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AA", "Outlaw01_WayToDonJulio_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AB", "Outlaw01_WayToDonJulio_v4_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AC1", "Outlaw01_WayToDonJulio_v4_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AC2", "Outlaw01_WayToDonJulio_v4_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AD", "Outlaw01_WayToDonJulio_v4_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AE", "Outlaw01_WayToDonJulio_v4_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AF", "Outlaw01_WayToDonJulio_v4_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AG1", "Outlaw01_WayToDonJulio_v4_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AG2", "Outlaw01_WayToDonJulio_v4_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AG3", "Outlaw01_WayToDonJulio_v4_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AG4", "Outlaw01_WayToDonJulio_v4_AG4", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AH", "Outlaw01_WayToDonJulio_v4_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AI", "Outlaw01_WayToDonJulio_v4_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AJ1", "Outlaw01_WayToDonJulio_v4_AJ1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AJ2", "Outlaw01_WayToDonJulio_v4_AJ2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AK1", "Outlaw01_WayToDonJulio_v4_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AK2", "Outlaw01_WayToDonJulio_v4_AK2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AL", "Outlaw01_WayToDonJulio_v4_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AM", "Outlaw01_WayToDonJulio_v4_AM", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x16B60 / 93024
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AA", "Outlaw01_WayToDonJulio_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AB", "Outlaw01_WayToDonJulio_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AC1", "Outlaw01_WayToDonJulio_v3_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AC2", "Outlaw01_WayToDonJulio_v3_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AD", "Outlaw01_WayToDonJulio_v3_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AE1", "Outlaw01_WayToDonJulio_v3_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AE2", "Outlaw01_WayToDonJulio_v3_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AF", "Outlaw01_WayToDonJulio_v3_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AG", "Outlaw01_WayToDonJulio_v3_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AH", "Outlaw01_WayToDonJulio_v3_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AI", "Outlaw01_WayToDonJulio_v3_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AJ", "Outlaw01_WayToDonJulio_v3_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AK", "Outlaw01_WayToDonJulio_v3_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AL1", "Outlaw01_WayToDonJulio_v3_AL1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AL2", "Outlaw01_WayToDonJulio_v3_AL2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AM1", "Outlaw01_WayToDonJulio_v3_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AM2", "Outlaw01_WayToDonJulio_v3_AM2", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_450() //Position: 0x17041 / 94273
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AA", "Outlaw01_WayToDonJulio_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AB1", "Outlaw01_WayToDonJulio_v2_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AB2", "Outlaw01_WayToDonJulio_v2_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AB3", "Outlaw01_WayToDonJulio_v2_AB3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AC", "Outlaw01_WayToDonJulio_v2_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AD1", "Outlaw01_WayToDonJulio_v2_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AD2", "Outlaw01_WayToDonJulio_v2_AD2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AE", "Outlaw01_WayToDonJulio_v2_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AF", "Outlaw01_WayToDonJulio_v2_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AG", "Outlaw01_WayToDonJulio_v2_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AH1", "Outlaw01_WayToDonJulio_v2_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AH2", "Outlaw01_WayToDonJulio_v2_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AI", "Outlaw01_WayToDonJulio_v2_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AJ1", "Outlaw01_WayToDonJulio_v2_AJ1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AJ2", "Outlaw01_WayToDonJulio_v2_AJ2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AK", "Outlaw01_WayToDonJulio_v2_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AL", "Outlaw01_WayToDonJulio_v2_AL", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AM", "Outlaw01_WayToDonJulio_v2_AM", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AN", "Outlaw01_WayToDonJulio_v2_AN", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AO", "Outlaw01_WayToDonJulio_v2_AO", true, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_451() //Position: 0x175F9 / 95737
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AA", "Outlaw01_WayToDonJulio_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AB", "Outlaw01_WayToDonJulio_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AC1", "Outlaw01_WayToDonJulio_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AC2", "Outlaw01_WayToDonJulio_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AD", "Outlaw01_WayToDonJulio_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AE1", "Outlaw01_WayToDonJulio_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AE2", "Outlaw01_WayToDonJulio_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AE3", "Outlaw01_WayToDonJulio_v1_AE3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AF", "Outlaw01_WayToDonJulio_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AG1", "Outlaw01_WayToDonJulio_v1_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AG2", "Outlaw01_WayToDonJulio_v1_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AG3", "Outlaw01_WayToDonJulio_v1_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_3160", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AH", "Outlaw01_WayToDonJulio_v1_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AI", "Outlaw01_WayToDonJulio_v1_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AJ", "Outlaw01_WayToDonJulio_v1_AJ", true, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_452() //Position: 0x17A6B / 96875
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_IrishRunsToHorse", "Outlaw01_IrishRunsToHorse", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_453(bool bParam0, bool bParam1) //Position: 0x17AC6 / 96966
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			Function_203(bLocal_473);
			if (GET_MOUNT(Global_34573) != bLocal_473)
			{
				if (GET_MOUNT(Global_34573) == bLocal_532)
				{
					bLocal_533 = bLocal_473;
					bLocal_473 = bLocal_532;
					bLocal_532 = bLocal_533;
					SET_ACTORS_HORSE(Global_34573, bLocal_473);
					Function_454(bLocal_473, 0);
					GIVE_OBJECT_TO_LAYOUT(bLocal_473, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ACTORS_HORSE(bLocal_472, bLocal_532);
					GIVE_OBJECT_TO_LAYOUT(bLocal_532, Local_4);
					if (GET_TASK_STATUS(bLocal_472, 11) == 1)
					{
						TASK_CLEAR(bLocal_472);
						TASK_MOUNT(bLocal_472, bLocal_532, 0, 1, 2, 2147483647);
					}
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(bLocal_473, GET_AMBIENT_LAYOUT());
					bLocal_473 = GET_MOUNT(Global_34573);
					SET_ACTORS_HORSE(Global_34573, bLocal_473);
					Function_454(bLocal_473, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_473, 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_473, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
		else if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_473)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_473, 334, 0, 2, 0);
		}
	}
	if (bParam1)
	{
		if (GET_MOUNT(bLocal_472) != bLocal_532)
		{
			MEMORY_PREFER_RIDING(bLocal_472, true);
			SET_ACTORS_HORSE(bLocal_472, bLocal_532);
			Function_325(&bLocal_472, bLocal_532, 1);
		}
	}
	return;
}

void Function_454(bool bParam0, int iParam1) //Position: 0x17BF6 / 97270
{
	Function_455(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_455(bool bParam0) //Position: 0x17C08 / 97288
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

var Function_456() //Position: 0x17DBE / 97726
{
	return Global_34165.f_60;
}

int Function_457() //Position: 0x17DC9 / 97737
{
	Function_321(&Local_4 + 132, 397, 2, 0);
	Function_321(&Local_4 + 132, 398, 2, 0);
	Function_321(&Local_4 + 132, 403, 2, 0);
	Function_321(&Local_4 + 132, 400, 2, 0);
	Function_321(&Local_4 + 132, 399, 2, 0);
	Function_321(&Local_4 + 132, 401, 2, 0);
	if (Function_313(&Local_4 + 132))
	{
		return 1;
	}
	return 0;
}

void Function_458() //Position: 0x17E2A / 97834
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_472);
	Function_225(0, 0, 1);
	return;
}

bool Function_459(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x17E3C / 97852
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_232(bParam4);
		*uParam5 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_387(8))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_390(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_386(8);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_385(bParam7, 0, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 0, 4294967295, 0, bParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam2, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam2, "MHDR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_387(8))
	{
		Function_384(8);
		if (!Function_383())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_382();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam2, "MHDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
				DECOR_REMOVE(bParam2, "MHDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_385(bParam7, 1, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 1, 4294967295, 0, bParam2);
			}
		}
	}
	return 0;
}

bool Function_460(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x17FA7 / 98215
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_461(Global_34573, bParam3, iParam2))
	{
		Function_232(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_461(Global_34573, bParam3, bParam1))
	{
		if (!Function_387(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_390(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_386(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_385(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_387(2))
	{
		Function_384(2);
		if (!Function_383())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_382();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_203(bParam3);
				Function_226(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_385(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_461(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1813C / 98620
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

void Function_462() //Position: 0x1824D / 98893
{
	if (iLocal_469 < 3 && iLocal_469 > 105)
	{
		Function_216((*&Local_4 + 612)[0]);
		Function_425(StackVal, StackVal, "$/cutscene/OUTLAW01_CS02/OUTLAW01_CS02", &uLocal_570, Function_216((*&Local_4 + 612)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_469)
	{
		case 0x00000000:
			Function_346(0);
			Function_299();
			SET_ACTOR_HEALTH(bLocal_472, GET_ACTOR_MAX_HEALTH(bLocal_472));
			Function_343();
			Function_488(1, 1);
			bLocal_470 = Global_30628[0];
			if (!Function_342(bLocal_470))
			{
				Function_341(&Local_406);
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (Function_282(&Local_406))
			{
				Function_227(&iLocal_474);
				iLocal_469 = 1;
			}
			else
			{
				Function_227(&iLocal_474);
				iLocal_469 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_320()) && (Function_342(bLocal_470) || bLocal_470 != 4294967295))
			{
				Function_222(Global_34573, (*&Local_4 + 588)[1], 1, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, Function_327(Global_34573, 40), 0);
				Function_222(bLocal_472, (*&Local_4 + 588)[3], 1, 1, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_472, "outlaw_sit", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_472, "outlaw_sit");
				SET_REACT_NODE_FOR_ACTOR(bLocal_472, "outlaw_sit");
				SET_MOVER_FROZEN(bLocal_472, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_472);
				TASK_STAND_STILL(bLocal_472, -1.0f, 0, 0);
				Function_287();
				Function_227(&iLocal_474);
				iLocal_469 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_282(&Local_406))
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					return;
				}
				Function_485();
				Function_238(bLocal_468);
				Function_408(StackVal, StackVal, Function_238(bLocal_468), bLocal_468, Global_30628[0], Function_240(bLocal_468), 0);
				Function_457();
				Function_227(&iLocal_474);
				iLocal_469 = 6;
			}
			else
			{
				Function_485();
				Function_238(bLocal_468);
				Function_408(StackVal, StackVal, Function_238(bLocal_468), bLocal_468, Global_30628[0], Function_240(bLocal_468), 0);
				Function_457();
				Function_227(&iLocal_474);
				iLocal_469 = 6;
			}
			break;
		
		case 0x00000006:
			iLocal_503 = 1;
			Function_484();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("SUSPENSE_GUNFIGHT", 0, 4294967295, 4294967295);
			Function_365(&iLocal_543, 0.0f);
			Function_390("Outlaw01_obj01", 0x40f00000, 1, 2, 0, 0, 0);
			Function_227(&iLocal_474);
			iLocal_469 = 7;
			break;
		
		case 0x00000007:
			if (Function_463())
			{
				Function_227(&iLocal_474);
				iLocal_469 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_277(&iLocal_474) <= 6.0f)
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				Function_353(Global_34573, 0);
				SET_PLAYER_CONTROL(0, 0, 1, 1);
				ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
				SET_MOVER_FROZEN(bLocal_472, false);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_483[0] = 1;
				Function_227(&iLocal_474);
				bLocal_468 = true;
				iLocal_469 = 0;
			}
			break;
	}
	return;
}

bool Function_463() //Position: 0x1851C / 99612
{
	if (Function_277(&iLocal_543) <= 25.0f)
	{
		Function_227(&iLocal_543);
		Function_483(&iLocal_543);
	}
	if (!HUD_IS_SHOWING_OBJECTIVE())
	{
		Function_481();
	}
	if (iLocal_710 >= 0)
	{
		Function_460(&iLocal_480, 20.0f, 60.0f, bLocal_472, "Outlaw_return", "Outlaw_abandoned", &bLocal_495, 0, 0, 0, 325, 1);
	}
	if (Function_279(&iLocal_564))
	{
		if (Function_277(&iLocal_564) <= 2,5f)
		{
			CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 368)[02]);
			MEMORY_ALLOW_SHOOTING((*&Local_4 + 368)[02], true);
			Function_227(&iLocal_564);
			Function_483(&iLocal_564);
		}
	}
	switch (iLocal_710)
	{
		case 0x00000000:
			Function_476();
			Function_475();
			Function_472();
			if (IS_ACTOR_ALIVE((*&Local_4 + 368)[12]))
			{
				if (IS_ACTOR_VALID((*&Local_4 + 368)[02]))
				{
					if ((Function_277(&iLocal_474) <= 4.0f || iLocal_539 <= 2) || IS_ACTOR_HOGTIED((*&Local_4 + 368)[02]))
					{
						if (!iLocal_506)
						{
							iLocal_539 = iLocal_539;
							iLocal_506 = 1;
							ABORT_SCRIPTED_CONVERSATION(0);
							SAY_SINGLE_LINE_STRING((*&Local_4 + 368)[12], "Outlaw01_shootsWelsh", true, true, 0, 0, true, false);
							TOGGLE_ACTOR_ACTION_SIGNAL_OFF((*&Local_4 + 368)[12]);
							TASK_CLEAR((*&Local_4 + 368)[12]);
							Function_216(Local_4.f_1552);
							vLocal_517 = { StackVal, StackVal, Function_216(Local_4.f_1552) };
							TASK_KILL_CHAR((*&Local_4 + 368)[12], Global_34573);
							TASK_PRIORITY_SET((*&Local_4 + 368)[12], true);
						}
					}
				}
				else if (!IS_ACTOR_ALIVE((*&Local_4 + 368)[02]))
				{
					if (!iLocal_506)
					{
						iLocal_506 = 1;
						ABORT_SCRIPTED_CONVERSATION(0);
						SAY_SINGLE_LINE_STRING((*&Local_4 + 368)[12], "Outlaw01_shootsWelsh", true, true, 0, 0, true, false);
						TOGGLE_ACTOR_ACTION_SIGNAL_OFF((*&Local_4 + 368)[12]);
						TASK_CLEAR((*&Local_4 + 368)[12]);
						Function_216(Local_4.f_1552);
						vLocal_517 = { StackVal, StackVal, Function_216(Local_4.f_1552) };
						TASK_KILL_CHAR((*&Local_4 + 368)[12], Global_34573);
						TASK_PRIORITY_SET((*&Local_4 + 368)[12], true);
					}
				}
			}
			if (Function_471(Local_4.f_388) < 0)
			{
				HUD_CLEAR_OBJECTIVE();
				iLocal_503 = 0;
				Function_470(Local_4.f_388);
				Function_227(&iLocal_474);
				iLocal_710 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_277(&iLocal_474) <= 2.0f)
			{
				if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 476)[0]))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_469();
					Function_225(0, 1, 1);
					Function_467(1, 1);
					Function_227(&iLocal_474);
					Function_227(&iLocal_477);
					iLocal_710 = 2;
				}
				else
				{
					Function_467(1, 1);
					HUD_CLEAR_OBJECTIVE();
					Function_227(&iLocal_474);
					iLocal_710 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 476)[0]))
			{
				Function_227(&iLocal_474);
				iLocal_710 = 3;
			}
			else
			{
				Function_464();
			}
			if (Function_277(&iLocal_474) <= (4.0f + 3.0f))
			{
				Function_390("Outlaw01_Obj02", 0x40f00000, 1, 2, 0, 0, 0);
				Function_227(&iLocal_474);
				iLocal_710 = 3;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 476)[0]))
			{
				Function_227(&iLocal_474);
				iLocal_710 = 4;
			}
			else
			{
				Function_464();
			}
			break;
		
		case 0x00000004:
			Function_225(0, 0, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_464() //Position: 0x1883B / 100411
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_277(&iLocal_477) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 476)[1]))
			{
				Function_466();
				Function_227(&iLocal_477);
			}
			else
			{
				Function_465();
				Function_227(&iLocal_477);
			}
		}
	}
	return;
}

void Function_465() //Position: 0x18882 / 100482
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WalksAwayFromIrish", "Outlaw01_WalksAwayFromIrish", false, 2, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x188E1 / 100577
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WaitingComeOver", "Outlaw01_WaitingComeOver", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467(int iParam0, bool bParam1) //Position: 0x1893A / 100666
{
	if (iParam0 == 17)
	{
		if (bParam1)
		{
		}
	}
	if (!Function_468(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_26998[iParam018].f_36 = 1;
	}
	else
	{
		Global_26998[iParam018].f_40 = 1;
	}
	return;
}

bool Function_468(int iParam0) //Position: 0x18975 / 100725
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_469() //Position: 0x1898B / 100747
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnKillsBoth", "Outlaw01_JohnKillsBoth", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470(bool bParam0) //Position: 0x189E0 / 100832
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_203(bVar1);
		}
		bVar0++;
	}
	return;
}

int Function_471(bool bParam0) //Position: 0x18A17 / 100887
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

void Function_472() //Position: 0x18A67 / 100967
{
	bool bVar0;
	
	if (((((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE()) && !IS_ANY_SPEECH_PLAYING(bLocal_472)) && !IS_ANY_SPEECH_PLAYING((*&Local_4 + 368)[12])) && !IS_ANY_SPEECH_PLAYING((*&Local_4 + 368)[02])) && Function_277(&iLocal_702) <= 5.0f)
	{
		bLocal_537 = RAND_INT_RANGE_DIFFERENT(iLocal_537, false, 2);
		switch (bLocal_537)
		{
			case 0x00000000:
				if (IS_ACTOR_ALIVE(bLocal_472) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 476)[1]))
				{
					Function_474();
					bVar0 = RAND_FLOAT_RANGE(0,25f, 2,75f);
					Function_228(&iLocal_702, bVar0);
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_ALIVE((*&Local_4 + 368)[12]))
				{
					Function_473();
					bVar0 = RAND_FLOAT_RANGE(0,25f, 2,75f);
					Function_228(&iLocal_702, bVar0);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_ALIVE((*&Local_4 + 368)[02]) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 476)[1]))
				{
					Function_484();
					bVar0 = RAND_FLOAT_RANGE(0,25f, 2,75f);
					Function_228(&iLocal_702, bVar0);
				}
				break;
			}
	}
	return;
}

void Function_473() //Position: 0x18B63 / 101219
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_tauntsJon", "Outlaw01_tauntsJon", false, 1, 1, 0, 1);
		Function_356(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_474() //Position: 0x18BB0 / 101296
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_IrishShouts", "Outlaw01_IrishShouts", false, 2, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_475() //Position: 0x18C01 / 101377
{
	if (!ACTOR_HAS_WEAPON((*&Local_4 + 368)[02], 4))
	{
		if (GET_TASK_STATUS((*&Local_4 + 368)[02], 45) != 1)
		{
			TASK_CLEAR((*&Local_4 + 368)[02]);
			TASK_MELEE_ATTACK((*&Local_4 + 368)[02], Global_34573, -1.0f);
			TASK_PRIORITY_SET((*&Local_4 + 368)[02], true);
		}
	}
	if (!ACTOR_HAS_WEAPON((*&Local_4 + 368)[12], 22))
	{
		if (GET_TASK_STATUS((*&Local_4 + 368)[12], 45) != 1)
		{
			TASK_CLEAR((*&Local_4 + 368)[12]);
			TASK_MELEE_ATTACK((*&Local_4 + 368)[12], Global_34573, -1.0f);
			TASK_PRIORITY_SET((*&Local_4 + 368)[12], true);
		}
	}
	return;
}

void Function_476() //Position: 0x18C96 / 101526
{
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 476)[1]))
	{
		if (IS_ACTOR_ALIVE((*&Local_4 + 368)[12]) || IS_ACTOR_ALIVE((*&Local_4 + 368)[02]))
		{
			if (!Function_279(&iLocal_546))
			{
				Function_365(&iLocal_546, 0.0f);
				Function_365(&iLocal_477, 8.0f);
				if (IS_ACTOR_ALIVE((*&Local_4 + 368)[02]))
				{
					if (IS_ACTOR_ALIVE((*&Local_4 + 368)[12]))
					{
						HUD_CLEAR_OBJECTIVE();
						Function_390("Outlaw01_obj01", 0x40f00000, 1, 2, 0, 0, 0);
					}
					else
					{
						HUD_CLEAR_OBJECTIVE();
						Function_390("Outlaw01_obj01_french", 0x40f00000, 1, 2, 0, 0, 0);
					}
				}
				else if (IS_ACTOR_ALIVE((*&Local_4 + 368)[12]))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_390("Outlaw01_obj01_welsh", 0x40f00000, 1, 2, 0, 0, 0);
				}
			}
			else if (Function_277(&iLocal_546) <= 6.0f)
			{
				if ((IS_ACTOR_ALIVE((*&Local_4 + 368)[02]) && !IS_ACTOR_HOGTIED((*&Local_4 + 368)[02])) && ACTOR_HAS_WEAPON_IN_HAND((*&Local_4 + 368)[02], 4))
				{
					if (GET_TASK_STATUS((*&Local_4 + 368)[02], 5) != 1)
					{
						SET_ACTOR_ONE_SHOT_DEATH(bLocal_472, true);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 368)[02], 31, -1.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 368)[02], 28, -1.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 368)[02], 0, false);
						TASK_CLEAR((*&Local_4 + 368)[02]);
						TASK_KILL_CHAR((*&Local_4 + 368)[02], bLocal_472);
						TASK_PRIORITY_SET((*&Local_4 + 368)[02], true);
					}
				}
				else
				{
					Function_460(&iLocal_480, 60.0f, 200.0f, bLocal_472, "Outlaw_return", "Outlaw_abandoned", &bLocal_495, 0, Local_4, bLocal_405, 325, 1);
				}
			}
			else
			{
				Function_477();
			}
		}
	}
	else
	{
		if (IS_ACTOR_ALIVE((*&Local_4 + 368)[12]))
		{
			if (GET_TASK_STATUS((*&Local_4 + 368)[12], 0) == 1)
			{
				if (iLocal_506)
				{
					TASK_CLEAR((*&Local_4 + 368)[12]);
					TASK_KILL_CHAR((*&Local_4 + 368)[12], Global_34573);
					TASK_PRIORITY_SET((*&Local_4 + 368)[12], true);
				}
			}
		}
		if (Function_279(&iLocal_546))
		{
			Function_227(&iLocal_546);
			Function_424(&iLocal_546);
		}
	}
	return;
}

void Function_477() //Position: 0x18ECD / 102093
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 2);
	if (Function_277(&iLocal_477) <= 10.0f)
	{
		switch (bVar0)
		{
			case 0x00000000:
				Function_480();
				Function_227(&iLocal_477);
				break;
			
			case 0x00000001:
				Function_479();
				Function_227(&iLocal_477);
				break;
			
			case 0x00000002:
				Function_478();
				Function_227(&iLocal_477);
				break;
			}
	}
	return;
}

void Function_478() //Position: 0x18F26 / 102182
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Outlaw01_RunsAwayFromFrench", "Outlaw01_RunsAwayFromFrench", false, 1, 1, 0, 1);
		Function_356(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_479() //Position: 0x18F86 / 102278
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_jonRunsAway", "Outlaw01_jonRunsAway", false, 1, 1, 0, 1);
		Function_356(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_480() //Position: 0x18FD7 / 102359
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_AbandonsIrish", "Outlaw01_AbandonsIrish", false, 2, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_481() //Position: 0x1902C / 102444
{
	if (IS_ACTOR_HOGTIED((*&Local_4 + 368)[02]))
	{
		if (!DECOR_GET_BOOL((*&Local_4 + 368)[02], "dxHogtie"))
		{
			DECOR_SET_BOOL((*&Local_4 + 368)[02], "dxHogtie", true);
			Function_482();
		}
	}
	if (IS_ACTOR_HOGTIED((*&Local_4 + 368)[12]))
	{
		if (!DECOR_GET_BOOL((*&Local_4 + 368)[12], "dxHogtie"))
		{
			DECOR_SET_BOOL((*&Local_4 + 368)[12], "dxHogtie", true);
			Function_482();
		}
	}
	return;
}

void Function_482() //Position: 0x190B8 / 102584
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_HogTiesInstead", "Outlaw01_HogTiesInstead", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483(int iParam0) //Position: 0x1910F / 102671
{
	if (Function_279(iParam0))
	{
		if (!Function_278(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_76(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_484() //Position: 0x191CE / 102862
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Outlaw01_FrenchTauntsJohn", "Outlaw01_FrenchTauntsJohn", false, 1, 1, 0, 1);
		Function_356(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_485() //Position: 0x1922A / 102954
{
	Function_274(1.0f);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	Function_486();
	bLocal_537 = 2;
	return;
}

void Function_486() //Position: 0x19242 / 102978
{
	SQUAD_SET_FACTION(Local_4.f_388, 19);
	Function_364(Local_4.f_388, bLocal_472, 1);
	Function_487(Local_4.f_388);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 368)[02], 0);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 368)[02], false);
	Function_360((*&Local_4 + 368)[02], 60.0f, 1,5f, 0.0f);
	AI_SET_BURST_DURATION((*&Local_4 + 368)[02], 1,5f);
	AI_SET_BURST_DURATION_RANDOMNESS((*&Local_4 + 368)[02], 0.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*&Local_4 + 368)[02], true);
	SET_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 368)[02], (*&Local_4 + 476)[1], 4, true);
	Function_216(Local_4.f_1552);
	vLocal_517 = { StackVal, StackVal, Function_216(Local_4.f_1552) };
	bLocal_534 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_POINT_GUN_AT_OBJECT(false, Global_34573, 1.0f, 1);
	TASK_SHOOT_FROM_POSITION(false, Global_34573, &vLocal_517);
	TASK_SEQUENCE_CLOSE();
	SET_ACTOR_MAX_SPEED((*&Local_4 + 368)[02], true);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 368)[02], bLocal_534);
	TASK_PRIORITY_SET((*&Local_4 + 368)[02], true);
	TASK_SEQUENCE_RELEASE(bLocal_534, 1);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS((*&Local_4 + 368)[12], 2,25f);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 368)[12], 0);
	SET_ACTOR_MAX_SPEED((*&Local_4 + 368)[12], 2);
	TASK_KILL_CHAR((*&Local_4 + 368)[12], Global_34573);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON((*&Local_4 + 368)[12], 8, "KnifeDancing");
	Function_365(&iLocal_702, 0.0f);
	Function_365(&iLocal_564, 0.0f);
	return;
}

void Function_487(bool bParam0) //Position: 0x1938C / 103308
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

void Function_488(int iParam0, bool bParam1) //Position: 0x193BE / 103358
{
	if (iParam0 == 17)
	{
		if (bParam1)
		{
		}
	}
	if (!Function_468(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_26998[iParam018].f_36 = 0;
	}
	else
	{
		Global_26998[iParam018].f_40 = 0;
	}
	return;
}

void Function_489() //Position: 0x193F9 / 103417
{
	switch (iLocal_469)
	{
		case 0x00000006:
			Function_500(&Local_406, 1);
			bLocal_405 = CREATE_LAYOUT("MissionName_DynamicLayout");
			Function_499();
			Global_8492[014].f_8 = 549;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_09", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			if ((!Function_282(&Local_406) && Local_406.f_24 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Outlaw_01/Outlaw_01"))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2168,76f, 16,50196f, 2570,128f, -180.0f, 1, true, 1);
				Global_63097 = 1;
				iLocal_469 = 7;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Outlaw_01/Outlaw_01"))
				{
				}
				if (!Function_282(&Local_406))
				{
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2168,76f, 16,50196f, 2570,128f, -180.0f, 1, true, 1);
				}
				iLocal_469 = 8;
			}
			break;
		
		case 0x00000007:
			if (Function_270("$/cutscene/Outlaw_01/Outlaw_01", &Local_461, &Local_406, &bLocal_468, 69252, 68434, 67649, 67055, 66710, 51750, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_469 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_498())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_301();
				}
				iLocal_469 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_471 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 476)[3], 15);
			RESET_ACTOR_GAITS(bLocal_472, 0);
			SET_CRIPPLE_ENABLE(bLocal_472, 0);
			SET_ACTOR_FACTION(bLocal_472, 20);
			TASK_PRIORITY_SET(bLocal_472, true);
			TASK_STAND_STILL(bLocal_472, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_472, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_472, 50.0f);
			SET_ACTOR_HEALTH(bLocal_472, GET_ACTOR_MAX_HEALTH(bLocal_472));
			RESET_ACTOR_GAITS(bLocal_473, 0);
			TASK_PRIORITY_SET(bLocal_473, true);
			TASK_STAND_STILL(bLocal_473, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_473, 50.0f);
			SET_ACTOR_HEALTH(bLocal_473, GET_ACTOR_MAX_HEALTH(bLocal_473));
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 460)[0]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 460)[0]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 460)[1]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 460)[1]);
			Function_129(&(Global_29008[Global_30640[0]]), 256);
			SET_WEAPONENUM_LOCKED(16, 0);
			Function_496(&uLocal_571, bLocal_405);
			Function_290(&(Local_611[017]), bLocal_472, "Outlaw", 1, 0x5f5e100, 1);
			Function_493(&(Local_611[417]), bLocal_405, 0x5f5e100);
			Function_397(&iLocal_474);
			Function_397(&iLocal_477);
			Function_397(&iLocal_480);
			Function_397(&iLocal_567);
			bLocal_468 = false;
			iLocal_469 = 0;
			Function_491(&Local_406, &bLocal_468, &iLocal_469);
			Function_490(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_406);
			switch (bLocal_468)
			{
				case 0x00000000:
					Function_299();
					break;
				
				case 0x00000001:
					Function_299();
					break;
				
				case 0x00000002:
					Function_212();
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_490(struct<25> Param0) //Position: 0x1972E / 104238
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_468 = false;
			break;
		
		case 0x00000002:
			bLocal_468 = true;
			break;
		
		case 0x00000003:
			bLocal_468 = 2;
			break;
		
		case 0x00000004:
			bLocal_468 = 3;
			break;
		
		case 0x00000005:
			bLocal_468 = 4;
			break;
		
		case 0x00000006:
			bLocal_468 = 5;
			break;
		
		case 0x00000007:
			bLocal_468 = 6;
			break;
		
		case 0x00000008:
			bLocal_468 = 7;
			break;
		
		case 0x00000009:
			bLocal_468 = 8;
			break;
		
		case 0x0000000A:
			bLocal_468 = 101;
			break;
	}
}

void Function_491(int iParam0, var uParam1, int iParam2) //Position: 0x197C3 / 104387
{
	if (Function_282(iParam0))
	{
		*uParam1 = Function_415(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_492();
	}
	return;
}

void Function_492() //Position: 0x197F7 / 104439
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

int Function_493(char* cParam0, bool bParam1, int iParam2) //Position: 0x19848 / 104520
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
	if (!Function_295(cParam0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_294(cParam0, 0);
	cParam0->f_40 = 0;
	Function_291(cParam0, iParam2, 0);
	Function_494(cParam0, 3);
	return 1;
}

void Function_494(int iParam0, int iParam1) //Position: 0x19959 / 104793
{
	if (iParam1 != 100000000)
	{
		Function_495(iParam0, iParam1);
	}
	else
	{
		Function_292(iParam0, 1);
	}
	return;
}

void Function_495(int iParam0, bool bParam1) //Position: 0x19979 / 104825
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_496(var uParam0, bool bParam1) //Position: 0x199A4 / 104868
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_497(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_497(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_497(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_497(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_497(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1A044 / 106564
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

bool Function_498() //Position: 0x1A107 / 106759
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_319(0))
		{
			return 0;
		}
		if (!Function_329())
		{
			return 0;
		}
		if (!Function_313(&bLocal_413))
		{
			return 0;
		}
		if (!Function_313(&bLocal_426))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_472))
		{
			bLocal_472 = Function_304(0, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_473))
		{
			bLocal_473 = Function_213(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_473, 1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_499() //Position: 0x1A185 / 106885
{
	Function_330(&bLocal_413, "custom/stand_ambient", 8, 0);
	Function_330(&bLocal_413, "dead_ground_male", 5, 0);
	Function_330(&bLocal_413, "custom/dead_ground_male", 8, 0);
	Function_330(&bLocal_413, "Outlaw01", 10, 0);
	Function_330(&bLocal_426, "custom/outlaw_sit", 8, 0);
	Function_330(&bLocal_426, "outlaw_sit", 5, 0);
	Function_330(&bLocal_426, "knf", 5, 0);
	Function_330(&bLocal_426, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_330(&bLocal_426, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_330(&bLocal_426, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_indef", 1, 0);
	Function_330(&bLocal_426, "$/content/scripting/gringo/simplegringo/leaning_stand_indef", 1, 0);
	Function_330(&bLocal_426, "$/content/scripting/gringo/simplegringo/lean_rail_drink", 1, 0);
	Function_330(&bLocal_426, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	return;
}

void Function_500(int iParam0, bool bParam1) //Position: 0x1A3ED / 107501
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_506(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_282(iParam0))
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
	if (!Function_282(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_200();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_242();
	Function_273();
	Function_232("");
	Function_505(0);
	Function_504();
	Function_193();
	Function_192();
	ENABLE_JOURNAL_REPLAY(0);
	Function_503();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_347(0, 0x40400000);
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
	Function_502(13);
	Function_502(14);
	Function_502(25);
	Function_502(24);
	Function_502(12);
	Function_502(27);
	Function_502(26);
	Function_502(15);
	Function_501();
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

void Function_501() //Position: 0x1A811 / 108561
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

void Function_502(int iParam0) //Position: 0x1A885 / 108677
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_503() //Position: 0x1A8A5 / 108709
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

void Function_504() //Position: 0x1A8E2 / 108770
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_505(int iParam0) //Position: 0x1A8F6 / 108790
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_196())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_506(int iParam0, int iParam1) //Position: 0x1A92B / 108843
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
			Function_507(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_507(int iParam0) //Position: 0x1A9AD / 108973
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

void Function_508() //Position: 0x1A9FB / 109051
{
	return;
}

bool Function_509(int iParam0) //Position: 0x1AA01 / 109057
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_510(int iParam0) //Position: 0x1AA1F / 109087
{
	bool bVar0;
	
	switch (iParam0->f_16)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000002:
					if (!iParam0->f_12)
					{
						iLocal_539 = 4;
						bVar0 = RAND_INT_RANGE(false, true);
						if (bVar0 == 0)
						{
							Function_524();
							Function_227(&iLocal_702);
						}
						else
						{
							Function_523();
							Function_227(&iLocal_702);
						}
					}
					break;
				
				case 0x00000003:
					if (!iParam0->f_12)
					{
						iLocal_539 = 4;
						bVar0 = RAND_INT_RANGE(false, true);
						if (bVar0 == 0)
						{
							if (IS_ACTOR_ALIVE((*&Local_4 + 368)[12]))
							{
								Function_522();
								Function_227(&iLocal_702);
							}
							else
							{
								Function_521();
								Function_227(&iLocal_702);
							}
						}
						else
						{
							Function_520();
							Function_227(&iLocal_702);
						}
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (bLocal_468 == 0)
					{
						Function_519();
						Function_227(&iLocal_702);
					}
					else if (bLocal_468 == 1)
					{
						if (!iParam0->f_12)
						{
							Function_518();
						}
						else
						{
							Function_517();
						}
					}
					break;
				
				case 0x00000002:
					iLocal_539 = 4;
					if (IS_ACTOR_VALID((*&Local_4 + 368)[12]))
					{
						Function_516();
						Function_227(&iLocal_702);
					}
					break;
				
				case 0x00000003:
					iLocal_539 = 4;
					if (IS_ACTOR_VALID((*&Local_4 + 368)[02]))
					{
						Function_515();
						Function_227(&iLocal_702);
					}
					break;
				
				case 0x00000004:
					if (iLocal_540 <= 2)
					{
						Function_514();
						iLocal_540++;
					}
					break;
			}
			break;
		
		case 0x00000020:
			break;
		
		case 0x00000040:
			break;
		
		case 0x00000080:
		case 0x00000100:
			switch (StackVal)
			{
				case 0x00000000:
					if (bLocal_468 != 1 || bLocal_468 != 2)
					{
						if (!iLocal_507)
						{
							Function_513();
							iLocal_507 = 1;
						}
					}
					break;
			}
			break;
		
		case 0x00000200:
		case 0x00000400:
			switch (StackVal)
			{
				case 0x00000000:
					if (bLocal_468 == 1)
					{
						if (!iLocal_508)
						{
							Function_512();
							iLocal_508 = 1;
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
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_511(iParam0, 1);
			return 1;
		}
	}
	Function_511(iParam0, 0);
	return 0;
}

void Function_511(int iParam0, bool bParam1) //Position: 0x1AC2F / 109615
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

void Function_512() //Position: 0x1AC53 / 109651
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_BumpsIrishDuringRide", "Outlaw01_BumpsIrishDuringRide", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x1ACB6 / 109750
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_AssaultIrishToDJulio", "Outlaw01_AssaultIrishToDJulio", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x1AD19 / 109849
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_ShootsAmbToDJulio", "Outlaw01_ShootsAmbToDJulio", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x1AD76 / 109942
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Outlaw01_JohnShootsFrenchNoKill", "Outlaw01_JohnShootsFrenchNoKill", false, 1, 1, 0, 1);
		Function_356(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_516() //Position: 0x1ADDE / 110046
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_shootsWelsh", "Outlaw01_shootsWelsh", false, 1, 1, 0, 1);
		Function_356(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_517() //Position: 0x1AE2F / 110127
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_ShootsIrishHorseRide", "Outlaw01_ShootsIrishHorseRide", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_518() //Position: 0x1AE92 / 110226
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_ShootsIrishToDJulio", "Outlaw01_ShootsIrishToDJulio", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_519() //Position: 0x1AEF3 / 110323
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnShootsIrish", "Outlaw01_JohnShootsIrish", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_520() //Position: 0x1AF4C / 110412
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_jonKillsFrench", "Outlaw01_jonKillsFrench", false, 1, 1, 0, 1);
		Function_356(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_521() //Position: 0x1AFA3 / 110499
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnKillsFrench02", "Outlaw01_JohnKillsFrench02", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x1B000 / 110592
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnKillsFrench01", "Outlaw01_JohnKillsFrench01", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1B05D / 110685
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Outlaw01_JohnKillsWelsh2", "Outlaw01_JohnKillsWelsh2", false, 1, 1, 0, 1);
		Function_356(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_524() //Position: 0x1B0B7 / 110775
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnKillsWelsh", "Outlaw01_JohnKillsWelsh", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_525(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1B10E / 110862
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
		Function_511(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_544(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_543(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_543(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_529(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_152(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_511(iParam2, 0);
														return 0;
													}
													if (Function_152(bVar17, 2))
													{
														Function_528(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_527(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_152(bVar17, 4))
													{
														Function_528(&bVar17);
														strcpy(&Var18, "", 64);
														Function_526(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_232(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_527(StackVal, iParam2, bVar17);
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
	Function_511(iParam2, 0);
	return 0;
}

void Function_526(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1B4A7 / 111783
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

void Function_527(var uParam0, int iParam1, bool bParam2) //Position: 0x1B592 / 112018
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

void Function_528(bool bParam0) //Position: 0x1B608 / 112136
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_529(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1B62A / 112170
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
			return Function_540(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_533(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_540(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_530(iParam0, bVar2);
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
						bVar2 = Function_540(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_530(iParam0, bVar2);
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

var Function_530(int iParam0, bool bParam1) //Position: 0x1B774 / 112500
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_152(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_532(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_531(16);
			}
		}
	}
	else if (Function_152(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_532(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_531(256);
			}
		}
	}
	return bParam1;
}

bool Function_531(int iParam0) //Position: 0x1B8A7 / 112807
{
	return 2 | iParam0;
}

int Function_532(int iParam0) //Position: 0x1B8B1 / 112817
{
	return 4 | iParam0;
}

int Function_533(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1B8BB / 112827
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
				iParam3 = Function_539(iParam0, iParam1, bParam4);
				if (Function_152(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_531(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_534(iParam0, iParam1, 0, bParam4);
				if (Function_152(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_531(16);
		}
	}
	return 0;
}

int Function_534(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1B96D / 113005
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_538(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_537(iVar0, 3, 1, bParam3))
			{
				if (!Function_543(iParam0, 8, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_537(iVar0, 2, 1, bParam3))
			{
				if (!Function_543(iParam0, 32, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_537(iVar0, 1, 1, bParam3))
			{
				if (!Function_543(iParam0, 64, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_537(iVar0, 3, 1, bParam3))
			{
				if (!Function_543(iParam0, 128, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_537(iVar0, 1, 1, bParam3))
			{
				if (!Function_543(iParam0, 1024, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_537(iVar0, 1, 1, bParam3))
			{
				if (!Function_543(iParam0, 1024, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_535(int iParam0, int iParam1, bool bParam2) //Position: 0x1BB27 / 113447
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_536(int iParam0, int iParam1, bool bParam2) //Position: 0x1BB3C / 113468
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_537(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1BB51 / 113489
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_538(int iParam0) //Position: 0x1BB6E / 113518
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

int Function_539(var uParam0, int iParam1, bool bParam2) //Position: 0x1BBDD / 113629
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_538(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_537(iVar0, 3, 1, bParam2))
			{
				if (!Function_543(uParam0, 8, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000009:
			if (Function_537(iVar0, 3, 1, bParam2))
			{
				if (!Function_543(uParam0, 8, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x0000006E:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(uParam0, 16, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x0000005B:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(uParam0, 32, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000031:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(uParam0, 64, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000007:
			if (Function_537(iVar0, 3, 1, bParam2))
			{
				if (!Function_543(uParam0, 128, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000008:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(uParam0, 256, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000014:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(uParam0, 512, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000018:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(uParam0, 512, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000057:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(uParam0, 1024, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000058:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(uParam0, 1024, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_540(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1BDF8 / 114168
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
						return Function_539(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_543(iParam0, 2, 1))
					{
						return Function_532(8);
					}
					return Function_531(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_543(iParam0, 4, 1))
					{
						return Function_532(16);
					}
					return Function_531(16);
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
							return Function_534(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_543(iParam0, 2, 1))
						{
							return Function_532(128);
						}
						return Function_531(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_543(iParam0, 4, 1))
						{
							return Function_532(256);
						}
						return Function_531(256);
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
						return Function_534(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_543(iParam0, 2, 1))
					{
						return Function_532(8);
					}
					return Function_531(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_543(iParam0, 4, 1))
					{
						return Function_532(16);
					}
					return Function_531(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_542(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_543(iParam0, 2, 1))
					{
						return Function_532(8);
					}
					return Function_531(8);
				}
				if (!Function_543(iParam0, 4, 1))
				{
					return Function_532(16);
				}
				return Function_531(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_534(iParam0, uParam1, 1, bParam5);
							if (Function_152(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_541(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_531(128);
							}
							if (!Function_543(iParam0, 2, 1))
							{
								return Function_532(8);
							}
							return Function_531(8);
						}
						if (iParam4 == 2)
						{
							if (Function_541(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_531(256);
							}
							if (!Function_543(iParam0, 4, 1))
							{
								return Function_532(16);
							}
							return Function_531(16);
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

bool Function_541(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1C0B9 / 114873
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

int Function_542(int iParam0, var uParam1, bool bParam2) //Position: 0x1C172 / 115058
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_538(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(iParam0, 16, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x0000005B:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_543(iParam0, 32, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000057:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(iParam0, 1024, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000058:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_543(iParam0, 1024, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_543(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C286 / 115334
{
	if (bParam2)
	{
		if (!Function_152(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_152(iParam0->f_40, bParam1);
}

int Function_544(int iParam0) //Position: 0x1C2AE / 115374
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

void Function_545(bool bParam0) //Position: 0x1C2DF / 115423
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam0 == bLocal_472)
		{
			if (MEMORY_GET_IS_VISIBLE(bLocal_472, Global_34573))
			{
				switch (bLocal_468)
				{
					case 0x00000000:
						Function_548();
						break;
					
					case 0x00000001:
						Function_547();
						break;
					}
			}
		}
		else if (MEMORY_GET_IS_VISIBLE(bLocal_472, Global_34573))
		{
			if (bLocal_468 == 1)
			{
				Function_546();
			}
		}
	}
	return;
}

void Function_546() //Position: 0x1C33A / 115514
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_GunOnAmbToDJulio", "Outlaw01_GunOnAmbToDJulio", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_547() //Position: 0x1C395 / 115605
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_GunOnIrishToDJulio", "Outlaw01_GunOnIrishToDJulio", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_548() //Position: 0x1C3F4 / 115700
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnTargetsIrish", "Outlaw01_JohnTargetsIrish", false, 1, 1, 0, 1);
		Function_356(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

var Function_549(var uParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x1C44F / 115791
{
	bool bVar0;
	
	if (Function_551(GET_WEAPON_IN_HAND(Global_34573)))
	{
		if (IS_PLAYER_WEAPON_ZOOMED(Global_34573))
		{
			if (GET_CURRENT_GAME_TIME() <= *uParam1)
			{
				bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 1);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (IS_ACTOR_VALID(*uParam0))
					{
						if ((bParam4 && (GET_CURRENT_GAME_TIME() - *uParam1) <= 5,5f) || (!bParam4 && (GET_CURRENT_GAME_TIME() - *uParam1) <= 2,5f))
						{
							if (Function_550(*uParam0, Global_34573, 50.0f))
							{
								if (!IS_ACTOR_ANIMAL(bVar0))
								{
									if (!AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
									{
										if (bParam2)
										{
											ABORT_SCRIPTED_CONVERSATION(0);
										}
										*uParam1 = (GET_CURRENT_GAME_TIME() + fParam3);
										return bVar0;
									}
								}
							}
						}
					}
					if (*uParam1 <= 0.0f)
					{
						*uParam0 = bVar0;
						*uParam1 = GET_CURRENT_GAME_TIME();
					}
				}
				else
				{
					*uParam0 = "";
					*uParam1 = 0.0f;
				}
			}
		}
	}
	return "";
}

bool Function_550(var uParam0, var uParam1, float fParam2) //Position: 0x1C517 / 115991
{
	float fVar0;
	
	fVar0 = Function_369(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

bool Function_551(bool bParam0) //Position: 0x1C534 / 116020
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

void Function_552(bool bParam0, bool bParam1) //Position: 0x1C57A / 116090
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(*bParam0))
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (!GET_ACTORS_HORSE(bParam1) != bVar0)
				{
					*bParam0 = bVar0;
					Function_454(*bParam0, 0);
				}
			}
			else
			{
				*bParam0 = bVar0;
				Function_454(*bParam0, 0);
			}
		}
	}
	else
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!*bParam0 != bVar0)
			{
				if (IS_ACTOR_VALID(bParam1))
				{
					if (!GET_ACTORS_HORSE(bParam1) != bVar0)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*bParam0)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(*bParam0));
						}
						*bParam0 = bVar0;
						Function_454(*bParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*bParam0));
					}
					*bParam0 = bVar0;
					Function_454(*bParam0, 0);
				}
			}
		}
	}
	return;
}

void Function_553() //Position: 0x1C63F / 116287
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_WelshKillsJon", "Outlaw01_WelshKillsJon", false, 1, 1, 0, 1);
		Function_356(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_554(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1C694 / 116372
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

