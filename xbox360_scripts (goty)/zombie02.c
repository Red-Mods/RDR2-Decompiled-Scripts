//Decompiled with MagicRDR v1.0
//Function Count : 625
//Statics Count : 1095
//Natives Count : 789
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2501> Local_4 = { 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_748 = 0;
	fLocal_924 = 2.0f;
	vLocal_1023 = { -3860.474f, 8.108f, 3664.828f };
	vLocal_1026 = { -3871.219f, 7.9f, 3663.52f };
	vLocal_1029 = { -3866.824f, 8.031f, 3664.106f };
	iLocal_1038 = 0;
	iLocal_1042 = 0;
	iLocal_1043 = 0;
	iLocal_1044 = 0;
	iLocal_1045 = 0;
	iLocal_1046 = 0;
	iLocal_1047 = 0;
	iLocal_1048 = 0;
	bLocal_1049 = false;
	iLocal_1050 = 0;
	iLocal_1053 = 0;
	iLocal_1056 = 0;
	iLocal_1057 = 0;
	iLocal_1059 = 0;
	bLocal_1060 = false;
	iLocal_1080 = 1;
	iLocal_1082 = 1;
	iLocal_1083 = 1;
	iLocal_1084 = 1;
	Local_750 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_811 = 99;
	iLocal_812 = 6;
	Local_804 = 1000;
	Function_624(0);
	while (Function_225())
	{
		Function_178();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0xD4 / 212
{
	if (DECOR_CHECK_EXIST(Global_34573, "NoGringoCamera"))
	{
		DECOR_REMOVE(Global_34573, "NoGringoCamera");
	}
	Function_177(bLocal_749);
	Function_177(Local_4);
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_995, 0);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	Function_176();
	Function_175(&(Global_29008[Global_30658[4]]), 256);
	Function_146(bLocal_922, 1, 1, 1, 1, 1, 1, 1);
	Function_143(2, 0, 1, 0, 1);
	Function_142();
	Function_138(&bLocal_757);
	Function_134();
	DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
	Function_132();
	if (IS_ITERATOR_VALID(bLocal_814))
	{
		DESTROY_ITERATOR(bLocal_814);
	}
	RELEASE_LAYOUT_REF(bLocal_749);
	if (bLocal_921)
	{
		Function_26(Local_750, 1, 1, 1, 0);
	}
	else if (bLocal_922)
	{
		Function_22(Local_750);
	}
	else
	{
		Function_2(Local_750);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x1B3 / 435
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x1D4 / 468
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1EF / 495
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x210 / 528
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x226 / 550
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

void Function_7(int iParam0) //Position: 0x2C2 / 706
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x2E3 / 739
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

void Function_9() //Position: 0x329 / 809
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x342 / 834
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, bool bParam1) //Position: 0x395 / 917
{
	struct<4> Var0;
	
	if (!Function_20(bParam1))
	{
		return;
	}
	switch (Function_17(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_17(bParam1), Function_15(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x4B9 / 1209
{
	char* cVar0[16];
	
	if (!Function_13())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_13() //Position: 0x4F3 / 1267
{
	if (Function_14(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x50E / 1294
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x51B / 1307
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_16(int iParam0) //Position: 0x53B / 1339
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x552 / 1362
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_18() //Position: 0x56D / 1389
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
			Function_19(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_19(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7B4 / 1972
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_20(int iParam0) //Position: 0x7DD / 2013
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x801 / 2049
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x816 / 2070
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x834 / 2100
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	iVar0 = Function_17(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x8DA / 2266
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0x919 / 2329
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB6F / 2927
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(bParam0) == 1)
	{
		iVar2 = Function_15(bParam0);
		Function_127(&(Global_3422[iVar240]));
		Function_126(4194304);
		if (bParam3)
		{
			Function_123(iVar2, &uVar0, 0);
		}
		else if (bParam4)
		{
			Function_123(iVar2, &uVar0, 0);
		}
		uVar1 = Function_122();
		if (bParam1)
		{
			Function_100(iVar2, bParam0, uVar1);
			Function_99();
		}
	}
	Global_34165.f_56 = 0;
	Global_34165.f_60 = 0;
	Global_13172[bParam011].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	Function_42(bParam0, bParam1, uParam2, uVar1);
	if (Function_17(bParam0) == 1)
	{
		if (bParam1)
		{
		}
	}
	Function_28(0);
	iVar2 = Function_15(bParam0);
	if (iVar2 == 1)
	{
		Function_27("ZOMBIE_STORY_1_SHORT", (7.5f + 5.0f), 1, 2, 0, 0, 0, 0);
	}
	else if (iVar2 == 2)
	{
		Function_27("ZOMBIE_STORY_4_SHORT", 7.5f, 1, 2, 0, 0, 0, 0);
	}
}

void Function_27(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xC78 / 3192
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_28(int iParam0) //Position: 0xCFD / 3325
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_39(1, 0))
	{
		Function_37("ZOMBIE_STORY_1_OBJ");
		if (!Function_36(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_36(4) && !Function_34(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_36(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_2Nigel_OBJ");
		Function_37("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_36(8) && !Function_36(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_36(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_36(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_36(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_36(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_31(&Global_3422[240] + 128, 2) || ((((((Function_36(14) && Function_36(18)) && Function_36(37)) && Function_36(7)) && Function_36(11)) && Function_36(5)) && Function_36(21)))
	{
		Function_37("ZOMBIE_STORY_3_OBJ");
		if (!Function_39(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_39(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_4_OBJ");
		if (!Function_36(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_31(&Global_3422[340] + 128, 2) || ((Function_36(27) && Function_36(1)) && Function_36(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_5_OBJ");
		if (!Function_39(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_39(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_36(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[255].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[455].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[355].f_140);
		bVar1 = false;
		if (Function_36(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[255] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[255].f_140, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_36(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_36(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[455] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_30(Global_30734)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[455].f_140, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_30(Global_30734) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater3_OBJ", 4, 0);
			}
			if (Function_30(Global_30734) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_29(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_29(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_36(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_36(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_36(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[655].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[755].f_140);
		if (Function_36(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[655].f_140, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_36(6) && Function_30(Global_30735) < 0) && Function_30(Global_30737) < 0) && Function_30(Global_30738) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[655].f_140, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[755].f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_36(11))
	{
		if (Function_36(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_63541[855].f_140);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_29(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_29(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_29(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_29(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_29(491) <= 5 && Function_29(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_36(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_36(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[1055].f_140, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(bVar0))
	{
		Function_27(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_29(int iParam0) //Position: 0x15F2 / 5618
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_30(bool bParam0) //Position: 0x1633 / 5683
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

bool Function_31(int iParam0, int iParam1) //Position: 0x164D / 5709
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_32() //Position: 0x1669 / 5737
{
	return STRING_TO_HASH(Function_33());
}

var Function_33() //Position: 0x1675 / 5749
{
	return "ZOMBIE_STORY";
}

bool Function_34(int iParam0) //Position: 0x168A / 5770
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_35(iParam0)11].f_12 < 0;
}

int Function_35(int iParam0) //Position: 0x16F0 / 5872
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

bool Function_36(int iParam0) //Position: 0x17B2 / 6066
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_37(bool bParam0) //Position: 0x17C7 / 6087
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_32(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_33(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_32(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_32(), bParam0, 0, 3, false);
	Function_38(Function_32(), 0);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x180F / 6159
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

bool Function_39(int iParam0, bool bParam1) //Position: 0x1834 / 6196
{
	int iVar0;
	
	iVar0 = Function_40(iParam0);
	if (!Function_16(iVar0))
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

int Function_40(int iParam0) //Position: 0x1871 / 6257
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_41(int iParam0) //Position: 0x188B / 6283
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_42(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x18A1 / 6305
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_98())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_15(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		if (Function_98())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_94();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_98())
	{
		Function_93();
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
			Function_88(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
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
						switch (Function_15(bParam0))
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
			Function_46(1);
			Function_44(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_43(bParam0, &Var14);
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

void Function_43(int iParam0, int iParam1) //Position: 0x1AF5 / 6901
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_44(bool bParam0, int iParam1) //Position: 0x1B2F / 6959
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_45())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_45() //Position: 0x1B71 / 7025
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_46(bool bParam0) //Position: 0x1B7A / 7034
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_77();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_47(&Global_63095, 1);
		Function_47(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x1BCB / 7115
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_48() //Position: 0x1BDE / 7134
{
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_56(0);
	Function_56(0);
	if (!Function_45())
	{
		Function_53();
		Function_52();
		Function_51();
		Function_50();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_49();
	return;
}

void Function_49() //Position: 0x1C30 / 7216
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

void Function_50() //Position: 0x1D36 / 7478
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

void Function_51() //Position: 0x1D69 / 7529
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

void Function_52() //Position: 0x1EF7 / 7927
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

void Function_53() //Position: 0x20AB / 8363
{
	Function_54(&Global_28260, 1, 0);
	return;
}

void Function_54(int iParam0, bool bParam1, var uParam2) //Position: 0x20B9 / 8377
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
	
	bVar0 = Function_55();
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

var Function_55() //Position: 0x22AA / 8874
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_56(int iParam0) //Position: 0x22BF / 8895
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_29((50 + iVar4)) + Function_29((183 + iVar4))) + Function_29((90 + iVar4)));
				}
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
	Function_57(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x2365 / 9061
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
		Function_71(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_70(iParam0);
	if (bParam2)
	{
		Function_58(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_58(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x2600 / 9728
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_69(390))), 32);
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
					bVar19 = (Function_68(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_68(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_66(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_63(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_60(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_59(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_59() //Position: 0x2C2D / 11309
{
	int iVar0;
	
	return iVar0;
}

var Function_60(int iParam0) //Position: 0x2C35 / 11317
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_61(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2C46 / 11334
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_62(char* cParam0, bool bParam1) //Position: 0x2D3B / 11579
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_63(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2D54 / 11604
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_65(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_64(Function_65(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_64(int iParam0, int iParam1) //Position: 0x2DB9 / 11705
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_65(int iParam0, bool bParam1) //Position: 0x2DCB / 11723
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_66(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2DDD / 11741
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
	if (((Function_67(iParam0) != 19 || Function_67(iParam0) != 17) || Function_67(iParam0) != 10) || Function_67(iParam0) != 9)
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

int Function_67(int iParam0) //Position: 0x2F0D / 12045
{
	return Global_35278[iParam020].f_48;
}

float Function_68(int iParam0) //Position: 0x2F1C / 12060
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_69(int iParam0) //Position: 0x2F55 / 12117
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_70(int iParam0) //Position: 0x2F92 / 12178
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

int Function_71(int iParam0, bool bParam1, bool bParam2) //Position: 0x312C / 12588
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
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

struct<8> Function_72() //Position: 0x3370 / 13168
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
		iVar2 = ((Function_29((50 + iVar3) + 15) + Function_29((183 + iVar3) + 15)) + Function_29((90 + iVar3) + 15));
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
	Function_57(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x33F9 / 13305
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
			iVar2 = ((Function_29((50 + iVar3) + 8) + Function_29((183 + iVar3) + 8)) + Function_29((90 + iVar3) + 8));
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
	Function_57(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_74() //Position: 0x3490 / 13456
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
		iVar2 = ((Function_29((50 + iVar3)) + Function_29((183 + iVar3))) + Function_29((90 + iVar3)));
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
	Function_57(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_75() //Position: 0x350F / 13583
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_76(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_57(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x3548 / 13640
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
	Function_71(iParam0, bParam1, 1);
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_58(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_77() //Position: 0x3752 / 14162
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_13())
	{
		Function_85(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_85(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_78(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

bool Function_78(vector3 vParam0) //Position: 0x380D / 14349
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_79(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3825 / 14373
{
	int iVar0;
	
	iVar0 = Function_83(uParam2, uParam3);
	if (Function_82(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_81(&Global_63095, 1);
			Function_47(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_81(&Global_63095, 2);
			Function_47(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_81(&Global_63095, 2);
		Function_47(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_80();
	return StackVal, StackVal, Function_80();
}

vector3 Function_80() //Position: 0x390C / 14604
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_81(bool bParam0, bool bParam1) //Position: 0x3915 / 14613
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_82(int iParam0) //Position: 0x3924 / 14628
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0, bool bParam1) //Position: 0x393A / 14650
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
				fVar2 = Function_84(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_84(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_82(bVar0) && !bParam1)
	{
		bVar0 = Function_83(bParam0, 1);
	}
	return bVar0;
}

float Function_84(vector3 vParam0, vector3 vParam3) //Position: 0x3A01 / 14849
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_85(var uParam0, int iParam1) //Position: 0x3A1E / 14878
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_87(Global_34573, &vVar4);
	if (!Function_86(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_81(&Global_63095, 2);
	Function_47(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_78(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_86(int iParam0) //Position: 0x4248 / 16968
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_87(bool bParam0, bool bParam1) //Position: 0x4283 / 17027
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_88(bool bParam0) //Position: 0x4290 / 17040
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(bParam0))
	{
		return;
	}
	switch (Function_17(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_92(12, 1, 0, 0);
				Function_91(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_92(13, 1, 0, 0);
				Function_91(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_92(14, 1, 0, 0);
				Function_91(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_92(15, 1, 0, 0);
				Function_91(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_92(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_30(bParam0) == 1)
					{
						iVar0 = Function_90(bParam0);
						if (Function_89(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_91(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_91(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_91(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_91(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_91(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_91(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_91(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_91(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_91(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_91(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_91(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_91(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_91(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_91(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_91(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_91(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_91(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_91(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_91(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_91(4, 19);
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
								Function_92(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_92(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_92(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_90(bParam0) == 0)
			{
				if (Function_30(bParam0) == 1)
				{
					Function_92(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_89(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_91(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_91(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_91(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_91(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_91(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_91(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_91(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_91(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_30(bParam0) == 1)
			{
				Function_92(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_92(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_91(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_91(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_91(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_92(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_91(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_91(6, 9);
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

bool Function_89(int iParam0) //Position: 0x476C / 18284
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_90(bool bParam0) //Position: 0x4782 / 18306
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

void Function_91(int iParam0, bool bParam1) //Position: 0x47A1 / 18337
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

int Function_92(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4808 / 18440
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
	Function_71(iParam0, TO_FLOAT(bParam1), 1);
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_58(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_93() //Position: 0x4A28 / 18984
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_29(0));
	PLAYSTAT_INT("HC_FAME", Function_29(3));
	PLAYSTAT_INT("HC_HONOR", Function_29(1));
	return;
}

void Function_94() //Position: 0x4B80 / 19328
{
	int iVar0;
	int iVar1;
	
	if (!Function_41(Global_6269))
	{
		return;
	}
	iVar0 = Function_29(24);
	iVar1 = Function_40(Global_6269);
	if (!Function_41(iVar0) && Function_97(iVar1) < 0)
	{
		Function_57(24, Global_6269, 0);
		Function_95(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_97(Function_40(iVar0)))
	{
		Function_57(24, Global_6269, 0);
		Function_95(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_95(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4C00 / 19456
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
		Function_96(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_96(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x4F52 / 20306
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
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_97(int iParam0) //Position: 0x4FD5 / 20437
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_98() //Position: 0x4FEF / 20463
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_99() //Position: 0x501A / 20506
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

void Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x5048 / 20552
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
	
	if (!Function_41(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_121(iParam0);
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
				bVar0 = (Function_29(42) - Global_34165.f_116);
				bVar1 = (Function_29(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_69(49)) - Global_34165.f_124);
				bVar3 = (Function_29(49) - Global_34165.f_128);
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
				bVar4 = (Function_29(355) - Global_34165.f_116);
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
		iVar15 = Function_120(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_101(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
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

void Function_101(int iParam0, bool bParam1, bool bParam2) //Position: 0x52E4 / 21220
{
	int iVar0;
	bool bVar1;
	
	if (Function_119(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_98())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_29(3);
	Function_116();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_114(3, bVar1);
		if (!bParam2)
		{
			if (!Function_113(Global_76848, 4))
			{
				Function_108(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_92(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_68(3));
	iVar0 = Function_29(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
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

void Function_102(int iParam0, int iParam1) //Position: 0x54B3 / 21683
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_103(int iParam0, char* cParam1, bool bParam2) //Position: 0x5711 / 22289
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
	Function_95(iParam0, cParam1, 0, 1);
	iVar1 = Function_104();
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

int Function_104() //Position: 0x5896 / 22678
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
	Function_105();
	return 0;
}

void Function_105() //Position: 0x5935 / 22837
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
		Function_106(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_106(int iParam0) //Position: 0x59E4 / 23012
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

var Function_107(int iParam0) //Position: 0x5A42 / 23106
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

void Function_108(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5AD1 / 23249
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_110(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_109(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_109(char* cParam0, int iParam1) //Position: 0x5B3D / 23357
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

bool Function_110(bool bParam0, var uParam1, int iParam2) //Position: 0x5B74 / 23412
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
		if (Function_112(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_111(uVar0))
		{
			case 0x00000002:
				if (!Function_113(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_111(char* cParam0) //Position: 0x5BEC / 23532
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

int Function_112(int iParam0) //Position: 0x5C8D / 23693
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_47(&bVar1, 2147483648);
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

bool Function_113(var uParam0, int iParam1) //Position: 0x5CCA / 23754
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_114(int iParam0, bool bParam1) //Position: 0x5CDD / 23773
{
	bool bVar0;
	int iVar1;
	
	Function_92(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_115(iParam0, 4294967295);
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
	iVar1 = Function_104();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_115(int iParam0, int iParam1) //Position: 0x5E7A / 24186
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

void Function_116() //Position: 0x5EBB / 24251
{
	Function_118(3, 0.0f);
	Function_117(3, 10000.0f);
	return;
}

int Function_117(int iParam0, int iParam1) //Position: 0x5ED1 / 24273
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_118(int iParam0, int iParam1) //Position: 0x5F11 / 24337
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_119(int iParam0) //Position: 0x5F51 / 24401
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_120(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5F60 / 24416
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

int Function_121(int iParam0) //Position: 0x6128 / 24872
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

var Function_122() //Position: 0x61BD / 25021
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_123(int iParam0, var uParam1, bool bParam2) //Position: 0x61E2 / 25058
{
	struct<4> Var0;
	
	*uParam1 = *uParam1;
	if (!Function_41(iParam0))
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
			Function_124(21, bParam2, 0);
			Function_124(16, bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_124(bool bParam0, bool bParam1, int iParam2) //Position: 0x6280 / 25216
{
	if (!Function_125(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_55(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_55(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_55(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0x62D7 / 25303
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_126(bool bParam0) //Position: 0x62E9 / 25321
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_127(int iParam0) //Position: 0x631D / 25373
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
			Function_128(4, 0, 0);
		}
	}
	return;
}

void Function_128(bool bParam0, bool bParam1, int iParam2) //Position: 0x6384 / 25476
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
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
		Function_129(Global_16524, bVar0, 1);
	}
	return;
}

void Function_129(int iParam0, bool bParam1, bool bParam2) //Position: 0x646A / 25706
{
	int iVar0;
	
	Function_131(iParam0);
	Function_8(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, bParam1);
	Function_130();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_130() //Position: 0x65E3 / 26083
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_131(int iParam0) //Position: 0x65EF / 26095
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

void Function_132() //Position: 0x6635 / 26165
{
	Function_133();
	return;
}

void Function_133() //Position: 0x663E / 26174
{
	Function_138(&Local_4 + 4);
	Function_138(&Local_4 + 452);
	Function_138(&Local_4 + 612);
	Function_138(&Local_4 + 736);
	Function_138(&Local_4 + 884);
	Function_138(&Local_4 + 1032);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_134() //Position: 0x6678 / 26232
{
	if (iLocal_1033 == 4294967295 || IS_OBJECT_VALID(Local_987[02]))
	{
		if (bLocal_1051)
		{
			DESTROY_OBJECT(bLocal_994);
		}
		if (!iLocal_1059)
		{
			TRAIN_DESTROY_TRAIN(iLocal_1033);
		}
		else
		{
			TRAIN_RELEASE_TRAIN(iLocal_1033, 0);
		}
	}
	if (IS_OBJECT_VALID(Local_630.f_256))
	{
		DESTROY_OBJECT(Local_630.f_256);
	}
	if (IS_OBJECT_VALID(Local_630.f_252))
	{
		DESTROY_OBJECT(Local_630.f_252);
	}
	if (IS_OBJECT_VALID(Local_630.f_260))
	{
		DESTROY_OBJECT(Local_630.f_260);
	}
	if (IS_OBJECT_VALID(Local_630.f_264))
	{
		DESTROY_OBJECT(Local_630.f_264);
	}
	if (IS_OBJECT_VALID(Local_630.f_244))
	{
		DESTROY_OBJECT(Local_630.f_244);
	}
	if (IS_OBJECT_VALID(Local_630.f_248))
	{
		DESTROY_OBJECT(Local_630.f_248);
	}
	if (IS_OBJECT_VALID(Local_630.f_296))
	{
		DESTROY_OBJECT(Local_630.f_296);
	}
	Function_137();
	Function_136();
	Function_135();
	return;
}

void Function_135() //Position: 0x6749 / 26441
{
	Function_138(&Local_734 + 4);
	RELEASE_LAYOUT_REF(Local_734);
	return;
}

void Function_136() //Position: 0x675D / 26461
{
	Function_138(&Local_705 + 4);
	RELEASE_LAYOUT_REF(Local_705);
	return;
}

void Function_137() //Position: 0x6771 / 26481
{
	Function_138(&Local_630 + 4);
	RELEASE_LAYOUT_REF(Local_630);
	return;
}

void Function_138(bool bParam0) //Position: 0x6785 / 26501
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_139(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_139(var uParam0, int iParam1) //Position: 0x67AB / 26539
{
	if (Function_141(uParam0[iParam13], 4))
	{
		if (Function_141(uParam0[iParam13], 1))
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
			Function_140(uParam0[iParam13], 1);
			Function_140(uParam0[iParam13], 2);
			Function_140(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_140(var uParam0, int iParam1) //Position: 0x68D9 / 26841
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_141(int iParam0, int iParam1) //Position: 0x68F3 / 26867
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_142() //Position: 0x6910 / 26896
{
	Function_138(&bLocal_938);
	return;
}

int Function_143(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x691C / 26908
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
		Function_145(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, 1);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_144(StackVal);
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

void Function_144(bool bParam0) //Position: 0x6C3A / 27706
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

void Function_145(bool bParam0) //Position: 0x6C66 / 27750
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_146(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x6C7B / 27771
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_174());
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
	Function_173();
	CLEAR_PRINTED_OBJECTIVE();
	Function_172();
	Function_170(0);
	Function_169();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(50f);
	Function_168();
	Function_167();
	Function_173();
	ENABLE_JOURNAL_REPLAY(1);
	Function_166(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(false, 0, 0, 0);
	}
	else if (bParam7)
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ACTOR_INVULNERABILITY(Global_34573, 0);
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
		Function_165(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(Global_34573) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_161(Global_28178);
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
	Function_160();
	Function_159(1178687);
	Function_157(33039);
	Function_156(0x218003f);
	Function_155(4194560);
	Function_154();
	Function_153();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_148(0, 1, 1);
	}
	else
	{
		Function_148(0, 1, 1);
	}
	Function_147();
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
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_47(&Global_12976 + 36 + 20, 16);
}

void Function_147() //Position: 0x6E6C / 28268
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_175(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_148(int iParam0, bool bParam1, int iParam2) //Position: 0x6E96 / 28310
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
		if (Function_89(Global_29006))
		{
			Function_152(&(Global_29008[Global_29006]), 131072);
			Function_175(&(Global_29008[Global_29006]), 2097152);
			Function_150(Global_29006);
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
				if (Function_149(&(Global_29008[iVar0]), 4) || Function_149(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_175(&(Global_29008[iVar0]), 2097155);
					Function_152(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_45())
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

bool Function_149(var uParam0, int iParam1) //Position: 0x6FA1 / 28577
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_150(int iParam0) //Position: 0x6FBD / 28605
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_151())
			{
				return;
			}
		}
		if (!Function_149(&(Global_29008[iParam0]), 2048))
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

bool Function_151() //Position: 0x703C / 28732
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_149(&(Global_29008[iVar0]), 4) || Function_149(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_152(var uParam0, int iParam1) //Position: 0x70A5 / 28837
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_153() //Position: 0x70B4 / 28852
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

void Function_154() //Position: 0x70DA / 28890
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

void Function_155(int iParam0) //Position: 0x7100 / 28928
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_156(int iParam0) //Position: 0x711D / 28957
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_157(int iParam0) //Position: 0x7130 / 28976
{
	Function_158(&Global_28842, iParam0);
	return;
}

void Function_158(var uParam0, int iParam1) //Position: 0x713E / 28990
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_159(bool bParam0) //Position: 0x7159 / 29017
{
	if (Function_14(bParam0, 1) && !Function_14(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_160() //Position: 0x7186 / 29062
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_161(int iParam0) //Position: 0x71F8 / 29176
{
	int iVar0;
	int iVar1;
	
	if (!Function_164(iParam0))
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
		Function_162(78, 1, 1);
		if (!Function_113(Global_76847, 64))
		{
			Function_108(Global_34573, 64, 2, 0);
		}
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_27774[iParam013].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(Global_34573);
		DECOR_SET_BOOL(Global_34573, "zMarston", true);
		DECOR_SET_BOOL(Global_34573, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
	}
	return;
}

int Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x7326 / 29478
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_163(bParam0), Function_55()) == 0)
		{
			ADD_ITEM(Function_163(bParam0), Function_55(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_163(bParam0), Function_55(), iParam2);
	return 1;
}

var Function_163(bool bParam0) //Position: 0x7371 / 29553
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

bool Function_164(int iParam0) //Position: 0x7462 / 29794
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_165(bool bParam0) //Position: 0x7478 / 29816
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

void Function_166(bool bParam0) //Position: 0x74F4 / 29940
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

void Function_167() //Position: 0x7568 / 30056
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

void Function_168() //Position: 0x75A9 / 30121
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

void Function_169() //Position: 0x75EA / 30186
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_170(int iParam0) //Position: 0x75FE / 30206
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_171())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_171() //Position: 0x763A / 30266
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

void Function_172() //Position: 0x765F / 30303
{
	Global_8722 = 0.0f;
	return;
}

void Function_173() //Position: 0x7669 / 30313
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

int Function_174() //Position: 0x7694 / 30356
{
	bool bVar0;
	
	bVar0 = Function_55();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_175(var uParam0, int iParam1) //Position: 0x76AE / 30382
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_176() //Position: 0x76C5 / 30405
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_177(bool bParam0) //Position: 0x76CE / 30414
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

void Function_178() //Position: 0x7726 / 30502
{
	var uVar0[12];
	int iVar13;
	
	if (Function_224())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Stage 2 - Camp";
		uVar0[3] = "Stage 3 - Ride";
		uVar0[4] = "Stage 4 - Defend Train";
		uVar0[5] = "Stage 5 - Ride to Mexico";
		uVar0[6] = "Stage 6 - Clear the barricade";
		uVar0[7] = "Mission End - Scripted Cutscene";
		uVar0[8] = "Infinte Ammo";
		uVar0[9] = "Kill Zombie Wave";
		uVar0[10] = "Test train station gringos";
		uVar0[11] = "Activate custom music";
		iVar13 = Function_210(&uLocal_797, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_209(&iVar13, &iLocal_811, &iLocal_812, &Local_804))
		{
			Function_202();
			Function_201();
		}
		if (iVar13 == 0)
		{
			Function_202();
			Function_201();
			Function_200(&bLocal_921, 8);
		}
		else if (iVar13 == 1)
		{
			Function_202();
			Function_201();
			Function_195(iLocal_811);
			Function_187(StackVal, StackVal, 5, &bLocal_922, &iLocal_811, Function_198(iLocal_811), Function_195(iLocal_811), 0);
		}
		else if (iVar13 == 2)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_811 = 1;
			iLocal_812 = 0;
			Local_804 = 1000;
		}
		else if (iVar13 == 3)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_811 = 2;
			iLocal_812 = 0;
			Local_804 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_811 = 3;
			iLocal_812 = 0;
			Local_804 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_811 = 4;
			iLocal_812 = 0;
			Local_804 = 1000;
		}
		else if (iVar13 == 6)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_811 = 5;
			iLocal_812 = 0;
			Local_804 = 1000;
		}
		else if (iVar13 == 7)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_811 = 101;
			iLocal_812 = 0;
			Local_804 = 1000;
		}
		else if (iVar13 == 8)
		{
			GIVE_WEAPON_TO_ACTOR(Global_34573, 34, 0, 1, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 31, 0.0f, 0, 0);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0, 1, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 6, 0, 1, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 18, 0, 1, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 35, 0, 1, 1);
			_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 15, true);
			_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 13, true);
			Function_202();
			Function_201();
		}
		else if (iVar13 == 9)
		{
			if (SQUAD_IS_VALID(bLocal_1007))
			{
				Function_184(&bLocal_1007);
			}
			if (SQUAD_IS_VALID(bLocal_1008))
			{
				PRINTSTRING("This is the size of station squad: ");
				PRINTINT(SQUAD_GET_SIZE(bLocal_1008));
				PRINTNL();
				Function_184(&bLocal_1008);
				PRINTSTRING("This is the size of station squad after killing: ");
				PRINTINT(SQUAD_GET_SIZE(bLocal_1008));
				PRINTNL();
				PRINTINT(SQUAD_GET_SIZE(bLocal_1008));
			}
			Function_183("ZOMBINATION - It's fun being a dev. ", 4.0f, 1, 2, 1, 0);
			Function_202();
		}
		else if (iVar13 == 10)
		{
			Function_179();
			Function_202();
			Function_201();
		}
		else if (iVar13 == 11)
		{
			AUDIO_MUSIC_FORCE_TRACK("ZOMBIE_CUSTOM_TRAIN_SONG", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_202();
		}
	}
	return;
}

void Function_179() //Position: 0x7B67 / 31591
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Z02_YellsDeserters", "Z02_YellsDeserters", 2, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_180(int iParam0) //Position: 0x7BB2 / 31666
{
	Function_181(0, Global_34573, iParam0, 0);
	Function_181(1, (*&Local_4 + 1048)[02], iParam0, 0);
	Function_181(2, (*&Local_4 + 1096)[02], iParam0, 0);
	return;
}

void Function_181(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x7BE0 / 31712
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_14(uParam2, Function_182(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_182(bool bParam0) //Position: 0x7C05 / 31749
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_183(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x7C11 / 31761
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

void Function_184(bool bParam0) //Position: 0x7C88 / 31880
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

void Function_185(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x7CD7 / 31959
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

void Function_186() //Position: 0x7D00 / 32000
{
	Function_185(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1);
	Function_177(bLocal_749);
	Function_177(Local_4);
	Function_201();
	Function_138(&bLocal_938);
	return;
}

void Function_187(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0x7D23 / 32035
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_192(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_188(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_188(int iParam0) //Position: 0x7D60 / 32096
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_191("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_190(2) || Function_190(8)) || Function_190(9)) || Function_190(10))
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
		Function_191("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_191("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_191("");
	}
	else if (iParam0 == 8)
	{
		Function_189();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_189();
	}
	return;
}

void Function_189() //Position: 0x7E57 / 32343
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_190(int iParam0) //Position: 0x7E63 / 32355
{
	int iVar0;
	
	if (!Function_41(iParam0))
	{
		return 0;
	}
	iVar0 = Function_40(iParam0);
	if (!Function_20(Function_40(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_191(bool bParam0) //Position: 0x7E99 / 32409
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_192(vector3 vParam0, var uParam3, var uParam4) //Position: 0x7F03 / 32515
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_194(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_193(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_193(int iParam0) //Position: 0x7F86 / 32646
{
	if (!Function_89(iParam0))
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

var Function_194(vector3 vParam0, bool bParam3) //Position: 0x843C / 33852
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

vector3 Function_195(int iParam0) //Position: 0x84A7 / 33959
{
	Function_196(iParam0 + 1);
	return StackVal, StackVal, Function_196(iParam0 + 1);
}

vector3 Function_196(int iParam0) //Position: 0x84B4 / 33972
{
	iParam0 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			Function_197((*&Local_4 + 1840)[0]);
			return StackVal, StackVal, Function_197((*&Local_4 + 1840)[0]);
			break;
		
		case 0x00000001:
			Function_197((*&Local_4 + 1964)[0]);
			return StackVal, StackVal, Function_197((*&Local_4 + 1964)[0]);
			break;
		
		case 0x00000002:
			Function_197((*&Local_4 + 1868)[2]);
			return StackVal, StackVal, Function_197((*&Local_4 + 1868)[2]);
			break;
		
		case 0x00000003:
			Function_197((*&Local_4 + 1964)[19]);
			return StackVal, StackVal, Function_197((*&Local_4 + 1964)[19]);
			break;
		
		case 0x00000004:
			Function_197((*&Local_4 + 2072)[0]);
			return StackVal, StackVal, Function_197((*&Local_4 + 2072)[0]);
			break;
		
		case 0x00000005:
			Function_197((*&Local_4 + 2164)[1]);
			return StackVal, StackVal, Function_197((*&Local_4 + 2164)[1]);
			break;
		
		case 0x00000065:
			Function_197((*&Local_4 + 2120)[0]);
			return StackVal, StackVal, Function_197((*&Local_4 + 2120)[0]);
			break;
	}
	Function_197((*&Local_4 + 1840)[0]);
	return StackVal, StackVal, Function_197((*&Local_4 + 1840)[0]);
}

vector3 Function_197(bool bParam0) //Position: 0x8564 / 34148
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

int Function_198(int iParam0) //Position: 0x858B / 34187
{
	return Function_199(iParam0 + 1);
}

int Function_199(int iParam0) //Position: 0x8598 / 34200
{
	iParam0 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 1840)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 1964)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1868)[2]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1964)[19]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 2072)[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING((*&Local_4 + 2164)[1]);
			break;
		
		case 0x00000065:
			return GET_OBJECT_HEADING((*&Local_4 + 2120)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 1840)[0]);
}

void Function_200(bool bParam0, int iParam1) //Position: 0x8648 / 34376
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_188(iParam1);
	*bParam0 = 1;
	return;
}

void Function_201() //Position: 0x866B / 34411
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_202() //Position: 0x8680 / 34432
{
	Function_204();
	Function_203(10, 3);
	return;
}

void Function_203(int iParam0, int iParam1) //Position: 0x868F / 34447
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

void Function_204() //Position: 0x87C6 / 34758
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_208())
	{
		Function_207(10, 3);
	}
	else
	{
		Function_205();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_55(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_55());
	UI_POP("nDebugMenu");
	return;
}

void Function_205() //Position: 0x8811 / 34833
{
	Function_206(25, 2);
	return;
}

void Function_206(int iParam0, int iParam1) //Position: 0x881D / 34845
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

void Function_207(int iParam0, int iParam1) //Position: 0x8A1B / 35355
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

bool Function_208() //Position: 0x8B52 / 35666
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
				if (!Function_14(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_209(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8BB9 / 35769
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_202();
			Function_201();
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
				SET_PLAYER_CONTROL(false, 1, 0, 0);
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
		Function_191("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_210(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8C5F / 35935
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_223(&Var15, &Var0);
	uVar20 = Function_222(*uParam1, &Var15);
	Function_221(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_220(uParam0, uVar20);
	Function_218(StackVal, uParam0, Var15.f_12);
	Function_216(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_215(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_212(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_211(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_211(int iParam0, int iParam1, int iParam2) //Position: 0x8D26 / 36134
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

bool Function_212(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x8D82 / 36226
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
				Function_214(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, false)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, false)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_214(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
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
				Function_211(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_213(bParam1->f_32);
	}
	else
	{
		Function_213(bParam1->f_32);
	}
	return 0;
}

void Function_213(bool bParam0) //Position: 0x8F08 / 36616
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

void Function_214(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x8F42 / 36674
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

var Function_215(int iParam0, var uParam1, int iParam2) //Position: 0x8FF0 / 36848
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_216(var uParam0, int iParam1, int iParam2) //Position: 0x9014 / 36884
{
	switch (Function_217())
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

int Function_217() //Position: 0x90B0 / 37040
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

void Function_218(var uParam0, int iParam1, int iParam2) //Position: 0x90EC / 37100
{
	switch (Function_219(uParam0))
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

int Function_219(bool bParam0) //Position: 0x9184 / 37252
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_55()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, false))
	{
		if (!Function_14(*bParam0, 0x40000000))
		{
			Function_81(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, false))
	{
		if (!Function_14(*bParam0, 0x40000000))
		{
			Function_81(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_47(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_55()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, false))
	{
		if (!Function_14(*bParam0, 0x20000000))
		{
			Function_81(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, false))
	{
		if (!Function_14(*bParam0, 0x20000000))
		{
			Function_81(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_47(bParam0, 0x20000000);
	return 0;
}

var Function_220(var uParam0, int iParam1) //Position: 0x92CF / 37583
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_221(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x941E / 37918
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

var Function_222(int iParam0, int iParam1) //Position: 0x94B1 / 38065
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_223(var uParam0, var uParam1) //Position: 0x94CB / 38091
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1.6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_224() //Position: 0x9519 / 38169
{
	return Global_30920;
}

bool Function_225() //Position: 0x9522 / 38178
{
	if (IS_EXITFLAG_SET())
	{
		Function_195(iLocal_811);
		Function_187(StackVal, StackVal, 4, &bLocal_922, &iLocal_811, Function_198(iLocal_811), Function_195(iLocal_811), 0);
		return 0;
	}
	Function_623(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, iLocal_811, iLocal_812, &bLocal_923, &bLocal_921, &bLocal_922);
	if (iLocal_811 == 99 && iLocal_811 == 100)
	{
		if (Function_603(&Local_856, &uLocal_816, &uLocal_908, bLocal_814, iLocal_815))
		{
			if (Function_601(&uLocal_908))
			{
				Function_195(iLocal_811);
				Function_187(StackVal, StackVal, 5, &bLocal_922, &iLocal_811, Function_198(iLocal_811), Function_195(iLocal_811), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_195(iLocal_811);
			Function_187(StackVal, StackVal, 1, &bLocal_922, &iLocal_811, Function_198(iLocal_811), Function_195(iLocal_811), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_195(iLocal_811);
			Function_187(StackVal, StackVal, 2, &bLocal_922, &iLocal_811, Function_198(iLocal_811), Function_195(iLocal_811), 0);
			return 1;
		}
	}
	switch (iLocal_811)
	{
		case 0x00000063:
			Function_582();
			break;
		
		case 0x00000000:
			Function_580();
			break;
		
		case 0x00000001:
			Function_545();
			break;
		
		case 0x00000002:
			Function_521();
			break;
		
		case 0x00000003:
			Function_493();
			break;
		
		case 0x00000004:
			Function_449();
			break;
		
		case 0x00000005:
			Function_373();
			break;
		
		case 0x00000065:
			Function_229();
			break;
		
		case 0x00000064:
			if (Function_228(&bLocal_922))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_227(&iLocal_811, &iLocal_812, &Local_804))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_921)
	{
		Function_200(&bLocal_921, 8);
		Function_1();
		return 0;
	}
	if (bLocal_922 && iLocal_811 == 100)
	{
		Function_195(iLocal_811);
		Function_187(StackVal, StackVal, 5, &bLocal_922, &iLocal_811, Function_198(iLocal_811), Function_195(iLocal_811), 0);
	}
	if (bLocal_923)
	{
		Function_226(&bLocal_923, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_226(var uParam0, int iParam1) //Position: 0x96CB / 38603
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_188(iParam1);
	*uParam0 = 1;
	return;
}

bool Function_227(var uParam0, var uParam1, int iParam2) //Position: 0x96EE / 38638
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

bool Function_228(int iParam0) //Position: 0x972E / 38702
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_229() //Position: 0x9741 / 38721
{
	switch (iLocal_812)
	{
		case 0x00000000:
			Function_369(0);
			if (!iLocal_913[5])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_368(Global_34573, (*&Local_4 + 2120)[0], 1, 1, 1);
				Function_366(&iLocal_969);
				iLocal_812 = 1;
			}
			else
			{
				Function_366(&iLocal_969);
				iLocal_812 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					Function_197((*&Local_4 + 2164)[0]);
					if (Function_344(StackVal, StackVal, Function_197((*&Local_4 + 2164)[0]), GET_OBJECT_HEADING((*&Local_4 + 2164)[0])))
					{
						Function_366(&iLocal_969);
						iLocal_812 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, iLocal_811) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MEXICO_CROSSING_5_CS_SEQ/MEXICO_CROSSING_5_CS_SEQ"))
			{
				DESTROY_OBJECT(Local_4.f_2492);
				Function_340(Local_4.f_2480);
				Function_339(Local_4.f_2484, 1);
				iLocal_1035 = 0;
				Function_366(&iLocal_969);
				iLocal_812 = 3;
			}
			else
			{
				iLocal_1035 = 1;
				Function_366(&iLocal_969);
				iLocal_812 = 4;
			}
			break;
		
		case 0x00000003:
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 8)
			{
				DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			if (Function_231("$/cutscene/MEXICO_CROSSING_5_CS_SEQ/MEXICO_CROSSING_5_CS_SEQ", &Local_804, &Local_750, &iLocal_811, 76480, 75823, 75500, 63047, 61945, 42093, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_366(&iLocal_969);
				iLocal_812 = 4;
			}
			break;
		
		case 0x00000004:
			Function_230(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			iLocal_812 = 106;
			break;
		
		case 0x0000006A:
			bLocal_921 = true;
			break;
	}
	return;
}

void Function_230(bool bParam0) //Position: 0x994F / 39247
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

bool Function_231(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0x996C / 39276
{
	if (!bParam15)
	{
		Function_243(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_242(iParam2) || iParam2->f_24 < 1))
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
				Function_366(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_241())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_240(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_366(iParam1 + 4);
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
					Function_240(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_237(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_237(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_235(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0.1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_240(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_366(iParam1 + 4);
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
						Function_230(1.0f);
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
						Function_233();
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
					Function_232(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_242(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_232(bool bParam0) //Position: 0x9F80 / 40832
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_160();
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

void Function_233() //Position: 0xA02F / 41007
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_234();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	return;
}

void Function_234() //Position: 0xA074 / 41076
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_235(bool bParam0, bool bParam1) //Position: 0xA086 / 41094
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_59(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_236(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_236(bool bParam0) //Position: 0xA106 / 41222
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0) == bParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

float Function_237(int iParam0) //Position: 0xA135 / 41269
{
	if (Function_239(iParam0))
	{
		if (Function_238(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_238(int iParam0) //Position: 0xA1FD / 41469
{
	return Function_14(*iParam0, 2);
}

bool Function_239(int iParam0) //Position: 0xA20A / 41482
{
	return Function_14(*iParam0, 1);
}

int Function_240(bool bParam0) //Position: 0xA217 / 41495
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
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
		iVar0++;
	}
	return 1;
}

bool Function_241() //Position: 0xA2CF / 41679
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		iVar0++;
	}
	return 1;
}

bool Function_242(int iParam0) //Position: 0xA309 / 41737
{
	return iParam0->f_20;
}

void Function_243(var uParam0, int iParam1) //Position: 0xA313 / 41747
{
	Function_244(uParam0, iParam1, 0);
	return;
}

void Function_244(var uParam0, bool bParam1, bool bParam2) //Position: 0xA321 / 41761
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
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_92(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
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
						Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_92(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_245() //Position: 0xA46D / 42093
{
	switch (iLocal_811)
	{
		case 0x00000063:
			if (!Function_248(&bLocal_757))
			{
				return 0;
			}
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				Function_246();
			}
			bLocal_1085 = true;
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

void Function_246() //Position: 0xA4B6 / 42166
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
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	
	Function_247(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Zombie02_layout");
	Local_4.f_1660 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 1640)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MexicoCrossing_1", 2, -3858.204f, 8.525387f, 3665.887f, 0.0f, 1.194711f, 0.0f, 17.68165f, 7.751794f, 21.26391f);
	ADD_TO_VOLUME_SET(Local_4.f_1660, (*&Local_4 + 1640)[0]);
	(*&Local_4 + 1640)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -4324.901f, 25.64268f, 2724.79f, 170.8587f, -101.8083f, -170.7355f, 56.75175f, 22.16785f, 156.2397f);
	ADD_TO_VOLUME_SET(Local_4.f_1660, (*&Local_4 + 1640)[1]);
	(*&Local_4 + 1640)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MexicoCrossing_4", 2, -3751.199f, 23.03201f, 3999.257f, 1.301097f, -117.6936f, 0.5893043f, 91.23454f, 34.82357f, 183.8816f);
	ADD_TO_VOLUME_SET(Local_4.f_1660, (*&Local_4 + 1640)[2]);
	(*&Local_4 + 1640)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MexicoCrossing_2", 2, -3699.723f, 8.516953f, 3477.148f, 0.0f, 1.194711f, 0.0f, 8.156269f, 11.24115f, 43.09532f);
	ADD_TO_VOLUME_SET(Local_4.f_1660, (*&Local_4 + 1640)[3]);
	Local_4.f_1676 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "clearAmbZombies_set");
	(*&Local_4 + 1664)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "clearZombies01", 3, -3727.537f, 26.58328f, 3474.633f, 0.0f, -1.181195f, 0.0f, 133.394f, 22.02563f, 158.0546f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 1664)[0]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 1664)[0]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 1664)[0], 15);
	ADD_TO_VOLUME_SET(Local_4.f_1676, (*&Local_4 + 1664)[0]);
	(*&Local_4 + 1664)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "clearZombies02", 2, -3776.875f, 33.27648f, 3826.81f, 0.0f, -80.85915f, 0.0f, 617.2618f, 67.93808f, 311.3629f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 1664)[1]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 1664)[1]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 1664)[1], 15);
	ADD_TO_VOLUME_SET(Local_4.f_1676, (*&Local_4 + 1664)[1]);
	Local_4.f_1712 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "RideZombieSpawnTriggers_set");
	(*&Local_4 + 1680)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RideZombieSpawnTrigger_1", 2, -3777.996f, 9.918535f, 3570.391f, 0.0f, -41.89626f, 0.0f, 46.30988f, 26.41579f, 8.00574f);
	ADD_TO_VOLUME_SET(Local_4.f_1712, (*&Local_4 + 1680)[0]);
	(*&Local_4 + 1680)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RideZombieSpawnTrigger_2", 2, -3780.663f, 9.918535f, 3576.372f, 0.0f, -41.89626f, 0.0f, 46.30988f, 26.41579f, 8.690695f);
	ADD_TO_VOLUME_SET(Local_4.f_1712, (*&Local_4 + 1680)[1]);
	(*&Local_4 + 1680)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RideZombieSpawnTrigger_3", 2, -3818.566f, 7.721951f, 3658.753f, 0.0f, -14.47849f, 0.0f, 46.30988f, 26.41579f, 4.652714f);
	ADD_TO_VOLUME_SET(Local_4.f_1712, (*&Local_4 + 1680)[2]);
	(*&Local_4 + 1680)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RideZombieSpawnTrigger_4", 2, -3840.446f, 7.721951f, 3713.991f, 0.0f, -14.47849f, 0.0f, 48.73788f, 42.08585f, 4.652714f);
	ADD_TO_VOLUME_SET(Local_4.f_1712, (*&Local_4 + 1680)[3]);
	(*&Local_4 + 1680)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RideZombieSpawnTrigger_5", 2, -3842.783f, 7.721951f, 3723.045f, 0.0f, -16.47849f, 0.0f, 48.73788f, 42.08585f, 4.652714f);
	ADD_TO_VOLUME_SET(Local_4.f_1712, (*&Local_4 + 1680)[4]);
	(*&Local_4 + 1680)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RideZombieSpawnTrigger_6", 2, -3860.146f, 7.721951f, 3790.284f, 0.0f, -14.47849f, 0.0f, 48.73788f, 42.08585f, 4.652714f);
	ADD_TO_VOLUME_SET(Local_4.f_1712, (*&Local_4 + 1680)[5]);
	(*&Local_4 + 1680)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RideZombieSpawnTrigger_7", 2, -3863.746f, 7.721951f, 3804.227f, 0.0f, -14.47849f, 0.0f, 48.73788f, 42.08585f, 4.652714f);
	ADD_TO_VOLUME_SET(Local_4.f_1712, (*&Local_4 + 1680)[6]);
	Local_4.f_1716 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S05_Climax_Hit", 2, -3873.46f, 16.80466f, 3876.875f, 0.0f, -60.03141f, 0.0f, 6.4599f, 23.91191f, 122.8596f);
	Local_4.f_1720 = CREATE_VOLUME_IN_LAYOUT(Local_4, "SaveStageTwo", 3, -4305.314f, 20.15537f, 3738.096f, 0.0f, -64.0f, 0.0f, 42.32508f, 26.90337f, 62.94528f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1720);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1720);
	CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1720, 15);
	Local_4.f_1724 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S2_InitVol", 3, -4278.175f, 23.71785f, 3715.699f, 0.0f, -55.0f, 0.0f, 68.97753f, 25.0264f, 133.4412f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1724);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1724);
	CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1724, 15);
	Local_4.f_1728 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S2_Speak", 3, -4313.891f, 6.047823f, 3734.882f, 0.0f, -85.0f, 0.0f, 3.235575f, 1.359311f, 4.132001f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1728);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1728);
	CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1728, 15);
	Local_4.f_1732 = CREATE_VOLUME_IN_LAYOUT(Local_4, "CS_TrainStation", 3, -3716.816f, 10.0541f, 3475.775f, 0.0f, 0.0f, 0.0f, 63.47186f, 10.42578f, 88.28519f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1732);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1732);
	CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1732, 15);
	Local_4.f_1736 = CREATE_VOLUME_IN_LAYOUT(Local_4, "Load_Trainstation", 3, -3760.188f, 10.0541f, 3467.32f, 0.0f, 0.0f, 0.0f, 117.5721f, 21.98058f, 152.275f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1736);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1736);
	CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1736, 15);
	Local_4.f_1740 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S2_SoldierHutVol", 2, -4313.98f, 8.806722f, 3743.272f, 0.0f, -0.03140748f, 0.0f, 9.711241f, 3.23478f, 12.11053f);
	Local_4.f_1744 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S3_PlayerLeftHut", 2, -4313.98f, 6.106722f, 3743.422f, 0.0f, -0.03140748f, 0.0f, 9.340595f, 3.005138f, 9.718735f);
	Local_4.f_1748 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S04_RestrictVol", 2, -3697.681f, 10.1846f, 3475.36f, 0.0f, -89.85f, 0.0f, 25.7378f, 3.516452f, 1.022504f);
	Local_4.f_1752 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S6_ZombieAdvance", 2, -3719.876f, 26.24278f, 4024.716f, 0.0f, -30.03141f, 0.0f, 6.4599f, 9.551929f, 37.75441f);
	Local_4.f_1756 = CREATE_VOLUME_IN_LAYOUT(Local_4, "switchJunctionVol", 2, -3825.863f, 13.13498f, 3682.539f, 0.0f, -14.85f, 0.0f, 38.71201f, 14.32536f, 17.72906f);
	Local_4.f_1760 = CREATE_VOLUME_IN_LAYOUT(Local_4, "nfireVol_1", 2, -3521.141f, 19.0473f, 4197.471f, 0.0f, -19.54688f, 0.0f, 3.658831f, 5.786253f, 3.693243f);
	Local_4.f_1764 = CREATE_VOLUME_IN_LAYOUT(Local_4, "nfireVol_2", 2, -3525.368f, 19.0473f, 4208.706f, 0.0f, -80.91785f, 0.0f, 2.612779f, 5.786253f, 3.693243f);
	Local_4.f_1768 = CREATE_VOLUME_IN_LAYOUT(Local_4, "nfireVol_3", 2, -3509.892f, 19.49765f, 4201.649f, 0.0f, -27.49065f, 0.0f, 9.784613f, 10.11713f, 10.32695f);
	Local_4.f_1772 = CREATE_VOLUME_IN_LAYOUT(Local_4, "nfireVol_4", 2, -3516.694f, 19.53754f, 4217.884f, 0.0f, -142.3409f, 0.0f, 4.59338f, 5.786253f, 7.703686f);
	Local_4.f_1776 = CREATE_VOLUME_IN_LAYOUT(Local_4, "speakNearBarricade", 2, -3766.524f, 26.24278f, 3993.418f, 0.0f, -30.03141f, 0.0f, 6.4599f, 9.551929f, 9.718735f);
	Local_4.f_1780 = CREATE_VOLUME_IN_LAYOUT(Local_4, "s5_fadeOutMusic", 2, -3772.412f, 26.24278f, 3990.015f, 0.0f, -30.03141f, 0.0f, 6.4599f, 9.551929f, 9.718735f);
	Local_4.f_1784 = CREATE_VOLUME_IN_LAYOUT(Local_4, "trainStopForBarricade", 2, -3713.777f, 27.10139f, 4021.336f, 0.0f, -25.07717f, 0.0f, 6.4599f, 9.551929f, 9.718735f);
	Local_4.f_1788 = CREATE_VOLUME_IN_LAYOUT(Local_4, "rideStopSpawningZombies", 2, -3831.406f, 23.30861f, 3949.346f, 0.0f, -38.50079f, 0.0f, 6.803715f, 13.5199f, 81.62794f);
	Local_4.f_1792 = CREATE_VOLUME_IN_LAYOUT(Local_4, "LastStage_ZombieVol", 2, -3753.773f, 18.47881f, 4004.929f, 0.0f, -125.9178f, 0.0f, 82.88731f, 41.03404f, 174.9452f);
	Local_4.f_1796 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S2_CampBattleVol", 2, -4312.888f, 7.406722f, 3744.725f, 0.0f, 39.96859f, 0.0f, 23.63537f, 7.015969f, 22.10988f);
	Local_4.f_1800 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S3_DesertWander", 2, -4312.885f, 6.106722f, 3744.518f, 0.0f, -45.03141f, 0.0f, 24.36953f, 7.073134f, 24.38555f);
	Local_4.f_1804 = CREATE_VOLUME_IN_LAYOUT(Local_4, "BP_TrainStationWander", 3, -3698.866f, 10.0541f, 3475.775f, 0.0f, 0.0f, 0.0f, 17.82701f, 4.36482f, 21.49359f);
	Local_4.f_1808 = CREATE_VOLUME_IN_LAYOUT(Local_4, "CS_TrainStation1", 3, -3798.566f, 10.0541f, 3475.775f, 0.0f, 0.0f, 0.0f, 152.246f, 20.22237f, 171.2424f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1808);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1808);
	CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1808, 15);
	Local_4.f_1812 = CREATE_VOLUME_IN_LAYOUT(Local_4, "unloadStage3", 3, -3891.166f, 10.0541f, 3475.775f, 0.0f, 0.0f, 0.0f, 253.2623f, 33.64006f, 284.8631f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1812);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1812);
	CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1812, 15);
	Local_4.f_1816 = CREATE_OBJECTSET_IN_LAYOUT("ClearGrassSet", Local_4, 8, 0);
	(*&Local_4 + 1820)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "ClearGrass_1", -4302.992f, 5.542459f, 3735.147f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[0], Local_4.f_1816);
	Function_197((*&Local_4 + 1820)[0]);
	CLEAR_AREA_OF_GRASS(Function_197((*&Local_4 + 1820)[0]), 3.5f);
	(*&Local_4 + 1820)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "ClearGrass_2", -4300.134f, 5.137414f, 3732.134f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[1], Local_4.f_1816);
	Function_197((*&Local_4 + 1820)[1]);
	CLEAR_AREA_OF_GRASS(Function_197((*&Local_4 + 1820)[1]), 3.5f);
	(*&Local_4 + 1820)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "ClearGrass_3", -3862.752f, 8.03117f, 3666.897f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[2], Local_4.f_1816);
	Function_197((*&Local_4 + 1820)[2]);
	CLEAR_AREA_OF_GRASS(Function_197((*&Local_4 + 1820)[2]), 3.5f);
	Local_4.f_1836 = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", Local_4, 8, 0);
	(*&Local_4 + 1840)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -3860.43f, 8.038821f, 3667.538f, 0.0f, 36.02785f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1840)[0], Local_4.f_1836);
	(*&Local_4 + 1840)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -3880.942f, 8.031368f, 3658.557f, 0.0f, 90.36728f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1840)[1], Local_4.f_1836);
	(*&Local_4 + 1840)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "StageOneTrainStart", -3700.068f, 8.97694f, 3492.775f, 0.0f, 175.4377f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1840)[2], Local_4.f_1836);
	Local_4.f_1856 = CREATE_OBJECTSET_IN_LAYOUT("S02_HillZombSpawnFlagsSet", Local_4, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "nHZSpawn_1", -4340.58f, 4.444851f, 3738.309f, 0.0f, -90.79666f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_1856);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "nHZSpawn_2", -4297.427f, 3.658526f, 3758.573f, 0.0f, -297.7967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_1856);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "nHZSpawn_3", -4286.89f, 2.937f, 3757.804f, 0.0f, -316.3381f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_1856);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "nHZSpawn_4", -4279.146f, 3.012f, 3735.791f, 0.0f, -274.1969f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_1856);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "nHZSpawn_5", -4285.146f, 3.752f, 3721.724f, 0.0f, -228.1969f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_1856);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "nHZSpawn_6", -4324.898f, 3.299f, 3724.877f, 0.0f, -142.3741f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_1856);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "nHZSpawn_7", -4332.117f, 5.188f, 3757.48f, 0.0f, -142.3741f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_1856);
	Local_4.f_1860 = CREATE_OBJECTSET_IN_LAYOUT("S02_CampZombSpawnFlagsSet", Local_4, 8, 0);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "SP_Spawn_1", -4325.596f, 4.995249f, 3744.0f, 0.0f, -90.79666f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_1860);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "SP_Spawn_2", -4304f, 4.773434f, 3743.265f, 0.0f, -259.7967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_1860);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "SP_Spawn_3", -4308.0f, 4.989434f, 3734.381f, 0.0f, -235.7967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_1860);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "SP_Spawn_4", -4309.101f, 4.9872f, 3732f, 0.0f, 151.2033f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_1860);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "SP_Spawn_5", -4318.653f, 4.741691f, 3733.386f, 0.0f, 200.2033f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_1860);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "SP_Spawn_6", -4323.413f, 4.47344f, 3738.511f, 0.0f, -134.7967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_1860);
	Local_4.f_1864 = CREATE_OBJECTSET_IN_LAYOUT("S02_CampsiteSet", Local_4, 8, 0);
	(*&Local_4 + 1868)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01CS", -4301.881f, 5.277f, 3734.171f, 0.0f, 90.02785f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[0], Local_4.f_1864);
	(*&Local_4 + 1868)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -4301.846f, 4.626915f, 3720.383f, 0.0f, 291.5302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[1], Local_4.f_1864);
	(*&Local_4 + 1868)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -4302.73f, 4.893764f, 3731.32f, 0.0f, 710.0726f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[2], Local_4.f_1864);
	(*&Local_4 + 1868)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "oZombieAttackMove_1", -4315.612f, 5.000669f, 3736f, 0.0f, 177.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[3], Local_4.f_1864);
	(*&Local_4 + 1868)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "oZombieAttackMove_2", -4306.584f, 5.191231f, 3739.677f, 0.0f, 89.9559f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[4], Local_4.f_1864);
	(*&Local_4 + 1868)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "oCampCenter", -4303.261f, 5.361083f, 3735.261f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[5], Local_4.f_1864);
	(*&Local_4 + 1868)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "speakerGringo", -4314.101f, 4.998824f, 3736.499f, 0.0f, 1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[6], Local_4.f_1864);
	(*&Local_4 + 1868)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "s03_Soldier01Pos", -4308.0f, 4.836051f, 3746.229f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[7], Local_4.f_1864);
	(*&Local_4 + 1868)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "s03_Soldier02Pos", -4310.365f, 5.010022f, 3736.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[8], Local_4.f_1864);
	(*&Local_4 + 1868)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "s03_Goto01", -4311.164f, 4.671583f, 3751.164f, 0.0f, -180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[9], Local_4.f_1864);
	(*&Local_4 + 1868)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "s03_Goto02", -4310.365f, 5.010022f, 3736.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[10], Local_4.f_1864);
	(*&Local_4 + 1868)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "s03_Goto03", -4317.302f, 5.001161f, 3737.302f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[11], Local_4.f_1864);
	(*&Local_4 + 1868)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "s03_Goto04", -4310.365f, 5.010022f, 3736.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[12], Local_4.f_1864);
	(*&Local_4 + 1868)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "noCampLoad", -4311.953f, 5.34764f, 3727.615f, 0.0f, -216.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[13], Local_4.f_1864);
	(*&Local_4 + 1868)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "speakerGringo1", -4311.978f, 5.006171f, 3735.763f, 0.0f, 25.94366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[14], Local_4.f_1864);
	(*&Local_4 + 1868)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "speakerGringo2", -4316.252f, 4.994727f, 3735.584f, 0.0f, -39.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[15], Local_4.f_1864);
	(*&Local_4 + 1868)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "speakerGringo3", -4318.8f, 4.881783f, 3738.455f, 0.0f, 1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1868)[16], Local_4.f_1864);
	Local_4.f_1940 = CREATE_OBJECTSET_IN_LAYOUT("S02_campFallBackSet", Local_4, 8, 0);
	(*&Local_4 + 1944)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "campFallBack_1", -4310.671f, 7.678683f, 3739.063f, 0.0f, -32.29721f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1944)[0], Local_4.f_1940);
	(*&Local_4 + 1944)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "campFallBack_2", -4316.535f, 7.950738f, 3740.271f, 0.0f, 35.49743f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1944)[1], Local_4.f_1940);
	(*&Local_4 + 1944)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "campFallBack_3", -4310.587f, 7.747241f, 3747.303f, 0.0f, -91.10616f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1944)[2], Local_4.f_1940);
	Local_4.f_1960 = CREATE_OBJECTSET_IN_LAYOUT("CS_MexicoCrossing_2Set", Local_4, 8, 0);
	(*&Local_4 + 1964)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -4207.835f, 6.023521f, 3631.759f, 0.0f, 138.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[0], Local_4.f_1960);
	(*&Local_4 + 1964)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -4210.789f, 6.014297f, 3634.561f, 0.0f, 508.6624f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[1], Local_4.f_1960);
	(*&Local_4 + 1964)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "TrainPos_CS02", -3699.978f, 9.211248f, 3489.362f, 0.0f, 176.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[2], Local_4.f_1960);
	(*&Local_4 + 1964)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CA_Cap_StartPos_CS02", -3699.637f, 11.3024f, 3479.688f, -0.2808875f, 55.49104f, -0.4731658f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[3], Local_4.f_1960);
	(*&Local_4 + 1964)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CA_E01_StartPos_CS03", -3700.26f, 10.11033f, 3484.612f, 0.0f, 69.72743f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[4], Local_4.f_1960);
	(*&Local_4 + 1964)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CA_E02_StartPos_CS02", -3700.128f, 10.08773f, 3483.214f, 0.0f, 98.72743f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[5], Local_4.f_1960);
	(*&Local_4 + 1964)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CA_M01_StartPos", -3698.698f, 9.982797f, 3462.767f, 0.0f, 317.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[6], Local_4.f_1960);
	(*&Local_4 + 1964)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CA_M02_StartPos_CS02", -3698.252f, 9.916917f, 3474.704f, 0.0f, 265.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[7], Local_4.f_1960);
	(*&Local_4 + 1964)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_B01_StartPos", -3695.251f, 9.533043f, 3474.329f, 0.0f, 436.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[8], Local_4.f_1960);
	(*&Local_4 + 1964)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_B03_StartPos", -3701.845f, 8.9303f, 3478.753f, 0.0f, 261.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[9], Local_4.f_1960);
	(*&Local_4 + 1964)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_B05_StartPos", -3696.695f, 9.549715f, 3476.831f, 0.0f, 427.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[10], Local_4.f_1960);
	(*&Local_4 + 1964)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_B06_StartPos", -3701.315f, 9.961642f, 3478.831f, 0.0f, 261.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[11], Local_4.f_1960);
	(*&Local_4 + 1964)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_B07_StartPos", -3696.314f, 9.531811f, 3478.175f, 0.0f, 72.72743f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[12], Local_4.f_1960);
	(*&Local_4 + 1964)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_B08_StartPos", -3701.896f, 8.921188f, 3484.076f, 0.0f, 263.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[13], Local_4.f_1960);
	(*&Local_4 + 1964)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_T03_StartPos", -3701.964f, 8.972612f, 3482.435f, 0.0f, 245.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[14], Local_4.f_1960);
	(*&Local_4 + 1964)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_T04_StartPos", -3696.693f, 9.565573f, 3474.681f, 0.0f, 79.72743f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[15], Local_4.f_1960);
	(*&Local_4 + 1964)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_T05_StartPos", -3694.723f, 9.537374f, 3472.51f, 0.0f, 99.72743f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[16], Local_4.f_1960);
	(*&Local_4 + 1964)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_T06_StartPos", -3701.838f, 8.984467f, 3479.802f, 0.0f, 267.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[17], Local_4.f_1960);
	(*&Local_4 + 1964)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "Z_F04_StartPos", -3701.056f, 8.933258f, 3484.833f, 0.0f, 267.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[18], Local_4.f_1960);
	(*&Local_4 + 1964)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_PlayerStart", -3749.522f, 7.779883f, 3502.269f, 0.0f, 303.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[19], Local_4.f_1960);
	(*&Local_4 + 1964)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_PHorseStart", -3731.145f, 7.792569f, 3496.536f, 0.0f, 651.6624f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[20], Local_4.f_1960);
	(*&Local_4 + 1964)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "gw_TrainBoard", -3702.706f, 8.78061f, 3480.181f, 0.0f, 263.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[21], Local_4.f_1960);
	(*&Local_4 + 1964)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_PHorseGOTO", -3729.754f, 7.810968f, 3498.878f, 0.0f, 652.6624f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[22], Local_4.f_1960);
	(*&Local_4 + 1964)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "CA_M01_ShootFrom", -3702.197f, 8.975497f, 3459.12f, 0.0f, 423.7274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[23], Local_4.f_1960);
	(*&Local_4 + 1964)[24] = CREATE_POINT_IN_LAYOUT(Local_4, "loadCutscene", -3704.797f, 9.379f, 3485.784f, 12.961f, -56.34f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1964)[24], Local_4.f_1960);
	Local_4.f_2068 = CREATE_OBJECTSET_IN_LAYOUT("CS_MexicoCrossing_4Set", Local_4, 8, 0);
	(*&Local_4 + 2072)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart06", -3699.357f, 10.11741f, 3475.463f, 0.0f, 1.498387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2072)[0], Local_4.f_2068);
	(*&Local_4 + 2072)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart06", -3693.158f, 8.981272f, 3489.173f, 0.0f, 360.4913f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2072)[1], Local_4.f_2068);
	(*&Local_4 + 2072)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MainPos_MC4", -3744.32f, 23.78187f, 4006.251f, 0.0f, 360.4913f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2072)[2], Local_4.f_2068);
	Local_4.f_2088 = CREATE_OBJECTSET_IN_LAYOUT("S04_ToxicShootPosSet", Local_4, 8, 0);
	(*&Local_4 + 2092)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nTSP_Pos01", -3694.513f, 9.531811f, 3468.122f, 0.0f, 91.49839f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[0], Local_4.f_2088);
	(*&Local_4 + 2092)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "nTSP_Pos02", -3694.831f, 9.531811f, 3483.657f, 0.0f, 77.49839f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[1], Local_4.f_2088);
	(*&Local_4 + 2092)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nTSP_Pos03", -3706.497f, 8.514468f, 3459.763f, 0.0f, 218.4984f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[2], Local_4.f_2088);
	(*&Local_4 + 2092)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "nTSP_Pos04", -3700.411f, 8.976666f, 3456.805f, 0.0f, -177.5016f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[3], Local_4.f_2088);
	(*&Local_4 + 2092)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "nTSP_Pos05", -3708.0f, 8.031364f, 3484f, 0.0f, -43.50161f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[4], Local_4.f_2088);
	Local_4.f_2116 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene10Set", Local_4, 8, 0);
	(*&Local_4 + 2120)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart10", -3754.311f, 21.093f, 4024.476f, 0.0f, -121.5123f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2120)[0], Local_4.f_2116);
	(*&Local_4 + 2120)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "trainMid_10_1", -3599.606f, 21.40324f, 4101.038f, 0.0f, -136.4257f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2120)[1], Local_4.f_2116);
	Local_4.f_2132 = CREATE_OBJECTSET_IN_LAYOUT("StationZombSpawnFlags1Set", Local_4, 8, 0);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "nSZSpawn_2", -3713.682f, 8.031368f, 3494.902f, 0.0f, -345.2359f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_2132);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "nSZSpawn_4", -3704.956f, 8.727327f, 3454.337f, 0.0f, -237.1763f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_2132);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "nSZSpawn_5", -3709.464f, 8.186319f, 3457.044f, 0.0f, -164.1763f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_2132);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "nSZSpawn_6", -3709.039f, 8.032858f, 3488.059f, 0.0f, -420.277f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_2132);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "nSZSpawn_7", -3700.764f, 8.979527f, 3452.817f, 0.0f, -177.3713f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_2132);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "nSZSpawn_8", -3714.397f, 7.781372f, 3459.973f, 0.0f, -123.7978f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_2132);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "nSZSpawn_9", -3719.178f, 7.781364f, 3475.711f, 0.0f, -90.00455f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_2132);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "SZSpawn_11", -3707.84f, 8.41753f, 3497.626f, 0.0f, -28.0762f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_4.f_2132);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "SZSpawn_12", -3717.594f, 7.781372f, 3467.97f, 0.0f, -207.61f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_4.f_2132);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "SZSpawn_13", -3694.918f, 8.377533f, 3456.151f, 0.0f, -207.61f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_4.f_2132);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "SZSpawn_14", -3704.217f, 8.622108f, 3491.172f, 0.0f, -337.135f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_4.f_2132);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_4, "SZSpawn_15", -3691.118f, 9.531811f, 3465.145f, 0.0f, -254.7866f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_4.f_2132);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_4, "SZSpawn_16", -3694.616f, 9.531811f, 3481.293f, 0.0f, -289.068f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_4.f_2132);
	Local_4.f_2136 = CREATE_OBJECTSET_IN_LAYOUT("S05_PlayerPosRideSet", Local_4, 8, 0);
	(*&Local_4 + 2140)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "ns5_PPR_01", -3796.036f, 10.336f, 3603.651f, 0.0f, 91.49839f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2140)[0], Local_4.f_2136);
	(*&Local_4 + 2140)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "ns5_PPR_02", -3805.278f, 10.092f, 3626.131f, 0.0f, 91.49839f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2140)[1], Local_4.f_2136);
	(*&Local_4 + 2140)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "ns5_PPR_03", -3795.429f, 22.545f, 3971.405f, 0.0f, 91.49839f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2140)[2], Local_4.f_2136);
	Local_4.f_2156 = CREATE_OBJECTSET_IN_LAYOUT("RideZombieSpawnsSet", Local_4, 8, 0);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_4, "RideZombieSpawn_1", -3785.327f, 9.320001f, 3640.95f, 0.0f, 70.72125f, 0.0f);
	DECOR_SET_INT(bVar27, "iNumZombies", 4);
	DECOR_SET_BOOL(bVar27, "bFollowRight", false);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_4.f_2156);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_4, "RideZombieSpawn_2", -3821.588f, 8.099592f, 3606.798f, 0.0f, -92.37823f, 0.0f);
	DECOR_SET_INT(bVar28, "iNumZombies", 3);
	DECOR_SET_BOOL(bVar28, "bFollowRight", true);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_4.f_2156);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_4, "RideZombieSpawn_3", -3810.155f, 7.528532f, 3692f, 0.0f, 82.09377f, 0.0f);
	DECOR_SET_INT(bVar29, "iNumZombies", 3);
	DECOR_SET_BOOL(bVar29, "bFollowRight", false);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_4.f_2156);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_4, "RideZombieSpawn_4", -3869.749f, 8.50349f, 3735.574f, 0.0f, -460.579f, 0.0f);
	DECOR_SET_INT(bVar30, "iNumZombies", 6);
	DECOR_SET_BOOL(bVar30, "bFollowRight", true);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_4.f_2156);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_4, "RideZombieSpawn_5", -3812.0f, 9.035286f, 3780f, 0.0f, -614.1112f, 0.0f);
	DECOR_SET_INT(bVar31, "iNumZombies", 5);
	DECOR_SET_BOOL(bVar31, "bFollowRight", false);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_4.f_2156);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_4, "RideZombieSpawn_6", -3911.328f, 11.0726f, 3840.673f, 0.0f, -467.1112f, 0.0f);
	DECOR_SET_INT(bVar32, "iNumZombies", 4);
	DECOR_SET_BOOL(bVar32, "bFollowRight", true);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_4.f_2156);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_4, "RideZombieSpawn_7", -3828.049f, 10.44119f, 3833.891f, 0.0f, -655.1112f, 0.0f);
	DECOR_SET_INT(bVar33, "iNumZombies", 5);
	DECOR_SET_BOOL(bVar33, "bFollowRight", false);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_4.f_2156);
	Local_4.f_2160 = CREATE_OBJECTSET_IN_LAYOUT("Last_StageSet", Local_4, 8, 0);
	(*&Local_4 + 2164)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "oTrainGoTo", -3728.845f, 24.0475f, 4013.685f, 0.0f, 242.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[0], Local_4.f_2160);
	(*&Local_4 + 2164)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "LS_PlayerPos", -3698.474f, 24.06728f, 4028.62f, 0.0f, 64.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[1], Local_4.f_2160);
	(*&Local_4 + 2164)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nLS_AMed02", -3696.487f, 22.89205f, 4035.876f, 0.0f, 205.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[2], Local_4.f_2160);
	(*&Local_4 + 2164)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "LS_AEasy02", -3698.077f, 23.99352f, 4029.935f, 0.0f, 64.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[3], Local_4.f_2160);
	(*&Local_4 + 2164)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "LS_AHard03", -3697.312f, 24.07875f, 4027.845f, 0.0f, 64.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[4], Local_4.f_2160);
	(*&Local_4 + 2164)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "LS_AEasy01", -3692.0f, 23.09018f, 4023.722f, 0.0f, -39.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[5], Local_4.f_2160);
	(*&Local_4 + 2164)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "LS_PlayerPos2", -3529.746f, 19.69326f, 4197.925f, 0.0f, 216.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[6], Local_4.f_2160);
	(*&Local_4 + 2164)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "nLS_pHorse", -3506.032f, 20.237f, 4204.774f, 0.0f, 122.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[7], Local_4.f_2160);
	(*&Local_4 + 2164)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "e01_RetreatPt", -4001.409f, 8.031489f, 3584.0f, 0.0f, 122.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[8], Local_4.f_2160);
	(*&Local_4 + 2164)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "m02_RetreatPt", -4124.0f, 7.027439f, 3668f, 0.0f, 122.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[9], Local_4.f_2160);
	(*&Local_4 + 2164)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "E02_Combat01", -3710.137f, 23.63652f, 4027.729f, 0.0f, 64.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[10], Local_4.f_2160);
	(*&Local_4 + 2164)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "E02_Combat02", -3705.354f, 23.91942f, 4028.267f, 0.0f, 64.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[11], Local_4.f_2160);
	(*&Local_4 + 2164)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "Capt_Combat01", -3701.869f, 23.81924f, 4023.199f, 0.0f, 64.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[12], Local_4.f_2160);
	(*&Local_4 + 2164)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "Capt_Combat02", -3705.746f, 23.62654f, 4020.186f, 0.0f, 64.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2164)[13], Local_4.f_2160);
	Local_4.f_2224 = CREATE_OBJECTSET_IN_LAYOUT("RideToxicSet", Local_4, 8, 0);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_4, "RT_Pos01", -3849.367f, 17.29115f, 3915.637f, 0.0f, 70.72125f, 0.0f);
	DECOR_SET_INT(bVar34, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_4.f_2224);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_4, "RT_Pos02", -3843.677f, 17.12384f, 3921.265f, 0.0f, 80.72125f, 0.0f);
	DECOR_SET_INT(bVar35, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_4.f_2224);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_4, "RT_Pos03", -3853.007f, 15.95854f, 3941.154f, 0.0f, 4.721254f, 0.0f);
	DECOR_SET_INT(bVar36, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_4.f_2224);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_4, "RT_Pos04", -3841.191f, 16.1728f, 3917.71f, -5.011031f, 79.72203f, -6.436483f);
	DECOR_SET_INT(bVar37, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_4.f_2224);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_4, "RT_Pos05", -3838.333f, 16.49808f, 3921.659f, 0.0f, 82.72125f, 0.0f);
	DECOR_SET_INT(bVar38, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_4.f_2224);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_4, "RT_Pos06", -3847.815f, 16.98717f, 3938.748f, 0.0f, 15.72125f, 0.0f);
	DECOR_SET_INT(bVar39, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_4.f_2224);
	Local_4.f_2228 = CREATE_OBJECTSET_IN_LAYOUT("RideToxic_2Set", Local_4, 8, 0);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT2_Pos01", -3819.764f, 17.83457f, 3940.347f, 0.0f, 84.72125f, 0.0f);
	DECOR_SET_INT(bVar40, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_4.f_2228);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT2_Pos02", -3818.342f, 18.2949f, 3944.686f, 0.0f, 104.7213f, 0.0f);
	DECOR_SET_INT(bVar41, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_4.f_2228);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT2_Pos03", -3816.608f, 18.5478f, 3947.52f, 0.0f, 105.7213f, 0.0f);
	DECOR_SET_INT(bVar42, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_4.f_2228);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT2_Pos04", -3813.519f, 18.98011f, 3950.569f, 0.0f, 102.7213f, 0.0f);
	DECOR_SET_INT(bVar43, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_4.f_2228);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT2_Pos05", -3824.838f, 18.85331f, 3964f, 0.0f, 29.72125f, 0.0f);
	DECOR_SET_INT(bVar44, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_4.f_2228);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT2_Pos06", -3828.562f, 18.30177f, 3957.651f, 0.0f, 16.72125f, 0.0f);
	DECOR_SET_INT(bVar45, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_4.f_2228);
	Local_4.f_2232 = CREATE_OBJECTSET_IN_LAYOUT("RideToxic_3Set", Local_4, 8, 0);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT3_Pos01", -3818.112f, 19.31502f, 3966.583f, 0.0f, 22.72125f, 0.0f);
	DECOR_SET_INT(bVar46, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_4.f_2232);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT3_Pos02", -3821.356f, 18.98479f, 3966.644f, 0.0f, 26.72125f, 0.0f);
	DECOR_SET_INT(bVar47, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_4.f_2232);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT3_Pos03", -3814.616f, 19.56674f, 3971.92f, 0.0f, 30.72125f, 0.0f);
	DECOR_SET_INT(bVar48, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_4.f_2232);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT3_Pos04", -3810.201f, 19.30025f, 3954.519f, 0.0f, 83.72125f, 0.0f);
	DECOR_SET_INT(bVar49, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_4.f_2232);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT3_Pos05", -3807.568f, 19.67507f, 3957.947f, 0.0f, 76.72125f, 0.0f);
	DECOR_SET_INT(bVar50, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_4.f_2232);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_4, "nRT3_Pos06", -3819.775f, 19.32421f, 3962.638f, 0.0f, 18.72125f, 0.0f);
	DECOR_SET_INT(bVar51, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_4.f_2232);
	Local_4.f_2236 = CREATE_POINT_IN_LAYOUT(Local_4, "oCompanionWaitS1", -3694.139f, 9.531811f, 3486.326f, 0.0f, 75.24585f, 0.0f);
	*(&Local_4 + 2240) = { -4260.596f, 3.86697f, 3686.177f };
	*(&Local_4 + 2240 + 12) = { 0.0f, -136.0931f, 0.0f };
	Local_4.f_2264 = CREATE_POINT_IN_LAYOUT(Local_4, "barricadeExplode_2_1", -3519.229f, 20.44556f, 4199.376f, 0.0f, 0.0f, 0.0f);
	Local_4.f_2268 = CREATE_POINT_IN_LAYOUT(Local_4, "barricadeExplode_2_2", -3526.877f, 21.08047f, 4203.216f, 0.0f, 0.0f, 0.0f);
	Local_4.f_2272 = CREATE_POINT_IN_LAYOUT(Local_4, "rainDebris_1", -3518.917f, 19.27827f, 4204.169f, 0.0f, -48.78418f, 0.0f);
	Local_4.f_2276 = CREATE_POINT_IN_LAYOUT(Local_4, "rainDebris_2", -3522.926f, 19.26698f, 4207.352f, 0.0f, 88.49452f, 0.0f);
	Local_4.f_2280 = CREATE_POINT_IN_LAYOUT(Local_4, "rainDebris_3", -3521.684f, 19.50792f, 4205.54f, 0.0f, -14.13293f, 0.0f);
	Local_4.f_2284 = CREATE_POINT_IN_LAYOUT(Local_4, "rainDebris_4", -3520.498f, 19.47718f, 4207.348f, 0.0f, -1.305405f, 0.0f);
	Local_4.f_2288 = CREATE_POINT_IN_LAYOUT(Local_4, "trainFinalRest", -3519.182f, 20.43235f, 4207.448f, 11.27671f, 182.4427f, -79.75522f);
	Local_4.f_2292 = CREATE_POINT_IN_LAYOUT(Local_4, "oThrowStuff_1", -3641.891f, 22.89016f, 4062.627f, 15.65226f, -160.784f, 9.221066f);
	Local_4.f_2296 = CREATE_POINT_IN_LAYOUT(Local_4, "oThrowStuff_2", -3641.062f, 22.89157f, 4060.974f, 72.02671f, -105.5356f, -56.90139f);
	Local_4.f_2300 = CREATE_POINT_IN_LAYOUT(Local_4, "oThrowStuff_3", -3520.527f, 20.31323f, 4198.207f, 95.94997f, -75.18831f, -28.21078f);
	Local_4.f_2304 = CREATE_POINT_IN_LAYOUT(Local_4, "oThrowStuff_4", -3522.322f, 21.29137f, 4201.305f, 81.17383f, -150.8052f, 6.024557f);
	Local_4.f_2308 = CREATE_POINT_IN_LAYOUT(Local_4, "oThrowStuff_5", -3526.447f, 20.38296f, 4202.25f, 71.4288f, -200.6512f, 23.49746f);
	*(&Local_4 + 2312) = { -3690.309f, 23.89144f, 4032.595f };
	*(&Local_4 + 2312 + 12) = { 0.0f, -116.9268f, 0.0f };
	Local_4.f_2336 = CREATE_POINT_IN_LAYOUT(Local_4, "oSoldiersGoBarricade", -3690.309f, 23.89144f, 4032.595f, 0.0f, -116.9268f, 0.0f);
	*(&Local_4 + 2340) = { -3404.821f, 21.03662f, 4306.749f };
	*(&Local_4 + 2340 + 12) = { 0.0f, -139.1438f, 0.0f };
	Local_4.f_2364 = CREATE_POINT_IN_LAYOUT(Local_4, "oTrainRunBarricade", -3404.821f, 21.03662f, 4306.749f, 0.0f, -139.1438f, 0.0f);
	*(&Local_4 + 2368) = { -3693.938f, 23.93987f, 4030.896f };
	*(&Local_4 + 2368 + 12) = { 0.0f, -111.9807f, 0.0f };
	Local_4.f_2392 = CREATE_POINT_IN_LAYOUT(Local_4, "oTrainGoTo1", -3693.938f, 23.93987f, 4030.896f, 0.0f, -111.9807f, 0.0f);
	Local_4.f_2396 = CREATE_POINT_IN_LAYOUT(Local_4, "nhideTrain", -3344.202f, 22.0109f, 4326.955f, 0.0f, -100.0f, 0.0f);
	Local_4.f_2400 = CREATE_POINT_IN_LAYOUT(Local_4, "hideTrain1", -3776.149f, 9.027691f, 3572.377f, 0.0f, -214.0f, 0.0f);
	Local_4.f_2404 = CREATE_POINT_IN_LAYOUT(Local_4, "hideTrain2", -3836.275f, 18.867f, 3940.473f, 0.0f, -132.0f, 0.0f);
	Local_4.f_2408 = CREATE_POINT_IN_LAYOUT(Local_4, "trainEnd", -3526.351f, 19.44744f, 4196.338f, 0.0f, -151.0f, 0.0f);
	Local_4.f_2412 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_E01", "DLC_Mexico_crossing1", -3699.719f, 10.37504f, 3484.564f, 0.0f, 87.0f, 0.0f);
	Local_4.f_2416 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_E02", "DLC_Mexico_crossing2", -3699.902f, 10.32354f, 3483.62f, 0.0f, -271.0f, 0.0f);
	Local_4.f_2420 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_Capt", "DLC_Mexico_crossing3", -3699.688f, 11.29788f, 3479.083f, 0.0f, 7.0f, 0.0f);
	Local_4.f_2424 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_B08", "DLC_mexico_crossing_B1", -3695.197f, 9.531811f, 3474.371f, 0.0f, 90.0f, 0.0f);
	Local_4.f_2428 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_F04", "DLC_mexico_crossing_B2", -3701.127f, 8.975038f, 3484.841f, 0.0f, -92.0f, 0.0f);
	Local_4.f_2432 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_T06", "DLC_Mexico_crossing_z1", -3701.908f, 8.89505f, 3479.765f, 0.0f, -92.0f, 0.0f);
	Local_4.f_2436 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_T03", "DLC_Mexico_crossing_z2", -3701.915f, 8.900581f, 3482.445f, 0.0f, -111.0f, 0.0f);
	Local_4.f_2440 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Locked_Footlocker", "ZombiePack_Footlocker", -4304.0f, 4.998949f, 3731.368f, 0.0f, 180.0f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2440, "bGiveNothing", true);
	Local_4.f_2444 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_M01", "DLC_Mexico_crossing1", -3698.975f, 9.982062f, 3462.778f, 0.0f, -108.2477f, 0.0f);
	Local_4.f_2448 = CREATE_GRINGO_IN_LAYOUT(Local_4, "go_S04_M02", "DLC_Mexico_crossing2", -3698.72f, 9.982756f, 3475.031f, 0.0f, -446.0f, 0.0f);
}

void Function_247(int iParam0, int iParam1) //Position: 0xED5B / 60763
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

bool Function_248(bool bParam0) //Position: 0xEDA4 / 60836
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_253();
	iVar1 = 0;
	if (!Function_141(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_252(bParam0[iVar03], 8);
		}
		else if (Function_251())
		{
			iVar1 = 1;
			Function_252(bParam0[iVar03], 8);
		}
		Function_252(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_141(bParam0[iVar03], 4))
		{
			if (!Function_141(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_141(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_141(bParam0[03], 8) || iVar1));
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
				Function_252(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_141(bParam0[iVar03], 4))
		{
			if (!Function_141(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_252(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_252(bParam0[iVar03], 2);
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
							Function_252(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_252(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_252(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_252(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_252(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_252(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_252(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_252(bParam0[iVar03], 2);
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
	Function_249();
	return 1;
}

void Function_249() //Position: 0xF11F / 61727
{
	if (!Function_250(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_250(int iParam0) //Position: 0xF15F / 61791
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_251() //Position: 0xF17B / 61819
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

void Function_252(var uParam0, int iParam1) //Position: 0xF1A6 / 61862
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_253() //Position: 0xF1B7 / 61879
{
	if (!Function_250(128))
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

int Function_254() //Position: 0xF1F9 / 61945
{
	switch (iLocal_811)
	{
		case 0x00000063:
			if (Function_256())
			{
				if (bLocal_1085)
				{
					if (!STREAMING_IS_WORLD_LOADED())
					{
						return 0;
					}
				}
				Function_255(2, 0, 0, 1, 1, 1, 0, 0, 1, 1);
				return 1;
			}
			break;
		
		case 0x00000003:
			Function_255(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_255(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_255(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xF25F / 62047
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
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_55();
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
			if (Function_45())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_92(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_201();
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
	Function_232(bParam9);
}

bool Function_256() //Position: 0xF34F / 62287
{
	if (bLocal_1085)
	{
		return 1;
	}
	switch (iLocal_813)
	{
		case 0x00000000:
			if (UNK_0xCDA6BB6C())
			{
				CANCEL_CUTSCENE_TUNER_PLAYBACK();
			}
			if (IS_OBJECT_VALID(Local_804.f_16))
			{
				DESTROY_OBJECT(Local_804.f_16);
			}
			Local_804.f_16 = Function_258(Local_4, 0, 1, 0, 0);
			Function_230(1.0f);
			Function_257(Global_34573, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_1023, 85.786f, 0, false, 0);
			TASK_GO_NEAR_COORD(Global_34573, &vLocal_1026, 0.5f, 1);
			iLocal_813 = 6;
			Function_366(&iLocal_969);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_OBJECT_VALID(Local_804.f_16))
			{
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				if (IS_OBJECT_VALID(Local_804.f_16))
				{
					DESTROY_OBJECT(Local_804.f_16);
				}
				Function_257(Global_34573, 0, 1);
				iLocal_813 = 106;
				Function_366(&iLocal_969);
				return 1;
			}
			break;
		
		case 0x0000006A:
			return 1;
			break;
	}
	return 0;
}

void Function_257(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF427 / 62503
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
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
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
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

var Function_258(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xF4C1 / 62657
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_59(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Zombie02_Intro_Ex", 2, 1);
	}
	Function_259(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_259(int iParam0) //Position: 0xF53E / 62782
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_261(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_260(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 4.0f, 0, 0);
	return;
}

void Function_260(int iParam0) //Position: 0xF573 / 62835
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.22902f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3871.526f, 9.369291f, 3668.096f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.027807f, -1.352602f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_261(var uParam0) //Position: 0xF5DD / 62941
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.22902f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -3871.472f, 9.365944f, 3668.858f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.027807f, -1.333964f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_262() //Position: 0xF647 / 63047
{
	switch (iLocal_811)
	{
		case 0x00000063:
			if (bLocal_1085)
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_1029, 76.72f, 0, false, 0);
			}
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			TASK_CLEAR(Global_34573);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.5f, 0);
			return 1;
			break;
		
		case 0x00000003:
			Function_302();
			return 1;
			break;
		
		case 0x00000004:
			Function_299();
			return 1;
			break;
		
		case 0x00000005:
			Function_274();
			return 1;
			break;
		
		case 0x00000065:
			Function_263();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_263() //Position: 0xF6D7 / 63191
{
	AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
	Function_271(Local_4.f_2408);
	Function_368(Global_34573, (*&Local_4 + 2164)[6], 1, 1, 1);
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 4.0f, 1);
	if (!IS_ACTOR_VALID(bLocal_1006))
	{
		bLocal_1006 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	Function_368(bLocal_1006, (*&Local_4 + 2164)[7], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1006, -1.0f, 0, 0);
	iLocal_1059 = 1;
	return;
}

bool Function_264(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0xF748 / 63304
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
	if (Global_3381)
	{
		Function_270(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_269())
		{
			return "";
		}
	}
	if (!Function_267())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_160();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_197(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_197(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_197(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_197(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_266(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_266(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_45() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_59(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_59(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
				if (!Function_78(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_59(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_59(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
		Function_265(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_45() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_265(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFA9E / 64158
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_266(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xFADB / 64219
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

bool Function_267() //Position: 0xFB76 / 64374
{
	if (Function_268() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_268() //Position: 0xFB8C / 64396
{
	return Global_12976.f_152;
}

bool Function_269() //Position: 0xFB97 / 64407
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_270(var uParam0, bool bParam1, bool bParam2) //Position: 0xFBB7 / 64439
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_81(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_81(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_271(bool bParam0) //Position: 0xFBE4 / 64484
{
	var uVar0;
	var uVar3;
	
	if (Function_272(TRAIN_GET_CAR(iLocal_1033, 0), bParam0) < 40.0f)
	{
		GET_OBJECT_POSITION(bParam0, &uVar0);
		GET_OBJECT_AXIS(bParam0, &uVar3, 2);
		VSCALE(&uVar3, -1.0f);
		TRAIN_SET_POSITION_DIRECTION(iLocal_1033, &uVar0, &uVar3);
	}
	return;
}

float Function_272(bool bParam0, bool bParam1) //Position: 0xFC23 / 64547
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_273(bParam0);
			vVar0 = { StackVal, StackVal, Function_273(bParam0) };
			Function_273(bParam1);
			vVar3 = { StackVal, StackVal, Function_273(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_273(bool bParam0) //Position: 0xFCBE / 64702
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

void Function_274() //Position: 0xFD2A / 64810
{
	Function_271((*&Local_4 + 2164)[0]);
	if (!SQUAD_IS_VALID(Local_4.f_1092))
	{
		Function_298();
	}
	Function_368(Global_34573, (*&Local_4 + 2164)[1], 0, 1, 1);
	Function_368((*&Local_4 + 1048)[02], (*&Local_4 + 2164)[4], 1, 1, 1);
	Function_368((*&Local_4 + 1048)[22], (*&Local_4 + 2164)[2], 1, 1, 1);
	Function_368((*&Local_4 + 1048)[42], (*&Local_4 + 2164)[3], 1, 1, 1);
	Function_368((*&Local_4 + 1048)[32], (*&Local_4 + 2164)[5], 1, 1, 1);
	Function_287(0, 1);
	Function_286(Local_4.f_1092, 0);
	Function_285(Local_4.f_1092, Global_34573, 0);
	Function_284(Local_4.f_1092, 0);
	Function_282();
	Function_276();
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 1048)[02], 5, 0);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 1048)[22], 16, 0);
	SET_DRAW_OBJECT(Local_4.f_2492, 1);
	Function_339(Local_4.f_2496, 1);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(Local_4.f_2496, 1);
	Function_275(&bLocal_1007);
	Function_275(&Local_4 + 1124);
	if (SQUAD_IS_VALID(bLocal_1009))
	{
		Function_275(&bLocal_1009);
		DESTROY_OBJECT(bLocal_1009);
	}
	return;
}

void Function_275(bool bParam0) //Position: 0xFE37 / 65079
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

void Function_276() //Position: 0xFE7E / 65150
{
	if (SQUAD_IS_VALID(bLocal_1008))
	{
		Function_275(&bLocal_1008);
	}
	if (!SQUAD_IS_VALID(Local_4.f_1580))
	{
		Function_280();
	}
	bLocal_1008 = Local_4.f_1580;
	Function_279(bLocal_1008, 0.4f);
	Function_278(bLocal_1008);
	SQUAD_GOALS_CLEAR(bLocal_1008);
	Function_277(bLocal_1008, Local_4.f_1792, 4, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 2, 0, 3);
	TASK_GO_NEAR_ACTOR(false, (*&Local_4 + 1048)[02], 10.0f, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 2, 0, 3);
	TASK_GO_NEAR_ACTOR(false, (*&Local_4 + 1048)[42], 10.0f, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 2, 0, 2);
	TASK_GO_NEAR_ACTOR(false, Global_34573, 10.0f, 1);
	return;
}

void Function_277(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xFF1D / 65309
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
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, iParam3);
			}
			bVar0++;
		}
	}
}

void Function_278(bool bParam0) //Position: 0xFF6C / 65388
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

void Function_279(bool bParam0, float fParam1) //Position: 0xFF9E / 65438
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
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar1, fParam1);
		}
		bVar0++;
	}
	return;
}

void Function_280() //Position: 0xFFDE / 65502
{
	Local_4.f_1580 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S06_Z_Barricade"));
	(*&Local_4 + 1496)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_T01", 1222, -3722.746f, 24.17775f, 4016.77f, 0.0f, 245.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[02], Local_4.f_1580);
	TASK_STAND_STILL((*&Local_4 + 1496)[02], -1.0f, 0, 0);
	(*&Local_4 + 1496)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_T02", 1224, -3724.783f, 23.92747f, 4018.654f, 0.0f, 248.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[12], Local_4.f_1580);
	TASK_STAND_STILL((*&Local_4 + 1496)[12], -1.0f, 0, 0);
	(*&Local_4 + 1496)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_F07", 1210, -3721.861f, 24.31775f, 4016.236f, 0.0f, 240.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[22], Local_4.f_1580);
	TASK_STAND_STILL((*&Local_4 + 1496)[22], -1.0f, 0, 0);
	(*&Local_4 + 1496)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_F10", 1213, -3721.171f, 24.07747f, 4015.075f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[32], Local_4.f_1580);
	TASK_STAND_STILL((*&Local_4 + 1496)[32], -1.0f, 0, 0);
	(*&Local_4 + 1496)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_B02", 1215, -3724.757f, 24.05865f, 4013.778f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[42], Local_4.f_1580);
	TASK_STAND_STILL((*&Local_4 + 1496)[42], -1.0f, 0, 0);
	(*&Local_4 + 1496)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_B04", 1217, -3726.079f, 24.05865f, 4016.974f, 0.0f, 249.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[52], Local_4.f_1580);
	TASK_STAND_STILL((*&Local_4 + 1496)[52], -1.0f, 0, 0);
	(*&Local_4 + 1496)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_F02", 1205, -3721.991f, 24.03651f, 4014.294f, 0.0f, 227.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[62], Local_4.f_1580);
	MEMORY_CONSIDER_AS((*&Local_4 + 1496)[62], Global_34573, 3);
	Function_281((*&Local_4 + 1496)[62], Local_4.f_1092, 3);
	TASK_STAND_STILL((*&Local_4 + 1496)[62], -1.0f, 0, 0);
	(*&Local_4 + 1496)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_F03", 1206, -3723.092f, 24.10865f, 4014.139f, 0.0f, 231.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[72], Local_4.f_1580);
	MEMORY_CONSIDER_AS((*&Local_4 + 1496)[72], Global_34573, 3);
	Function_281((*&Local_4 + 1496)[72], Local_4.f_1092, 3);
	TASK_STAND_STILL((*&Local_4 + 1496)[72], -1.0f, 0, 0);
	(*&Local_4 + 1496)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_F04", 1207, -3723.27f, 24.11775f, 4018.352f, 0.0f, 240.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[82], Local_4.f_1580);
	MEMORY_CONSIDER_AS((*&Local_4 + 1496)[82], Global_34573, 3);
	Function_281((*&Local_4 + 1496)[82], Local_4.f_1092, 3);
	TASK_STAND_STILL((*&Local_4 + 1496)[82], -1.0f, 0, 0);
	(*&Local_4 + 1496)[92] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BZ_F09", 1212, -3722.221f, 24.16775f, 4018.047f, 0.0f, 241.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1496)[92], Local_4.f_1580);
	MEMORY_CONSIDER_AS((*&Local_4 + 1496)[92], Global_34573, 3);
	Function_281((*&Local_4 + 1496)[92], Local_4.f_1092, 3);
	TASK_STAND_STILL((*&Local_4 + 1496)[92], -1.0f, 0, 0);
	return;
}

void Function_281(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10390 / 66448
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

void Function_282() //Position: 0x103DA / 66522
{
	float fVar0;
	float fVar1;
	
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "ptl_base", 1);
	if (ACTOR_GET_NEXT_EQUIP_SLOT(Global_34573) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(Global_34573, true) != 4)
	{
		ACTOR_SET_NEXT_WEAPON(Global_34573, 4);
	}
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 4, 0);
	RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	ACTOR_POP_NEXT_GAIT(Global_34573, 0, 0);
	fVar0 = _GET_MAX_AMMO_AMOUNT(Global_34573, 7);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, 7, 1);
	if (fVar0 < fVar1)
	{
		_ADD_AMMO_OF_TYPE(Global_34573, 7, Function_283((fVar0 - fVar1), 10.0f), 0, 1);
	}
	return;
}

var Function_283(int iParam0, int iParam1) //Position: 0x10460 / 66656
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_284(bool bParam0, int iParam1) //Position: 0x10473 / 66675
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
				MEMORY_ALLOW_SHOOTING(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_285(bool bParam0, bool bParam1, bool bParam2) //Position: 0x104BB / 66747
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

void Function_286(bool bParam0, int iParam1) //Position: 0x10500 / 66816
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

void Function_287(int iParam0, bool bParam1) //Position: 0x10537 / 66871
{
	switch (iParam0)
	{
		case 0x00000000:
			if (!iLocal_1054)
			{
				if (SQUAD_IS_VALID(Local_4.f_1092))
				{
					Function_293(&(Local_856[017]), Local_4.f_1092, "Zombie02_Army", 0, 0x5f5e100, 1);
					Function_289(&(Local_856[017]), 2);
					iLocal_1054 = 1;
				}
			}
			else if (!bParam1)
			{
				Function_288(&(Local_856[017]));
				iLocal_1054 = 0;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_1055)
			{
				if (SQUAD_IS_VALID(Local_4.f_1124))
				{
					Function_293(&(Local_856[117]), Local_4.f_1124, "Zombie02_Army", 0, 0x5f5e100, 1);
					Function_289(&(Local_856[117]), 2);
					iLocal_1055 = 1;
				}
			}
			else if (!bParam1)
			{
				Function_288(&(Local_856[117]));
				iLocal_1055 = 0;
			}
			break;
	}
	return;
}

void Function_288(int iParam0) //Position: 0x1060E / 67086
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

void Function_289(int iParam0, int iParam1) //Position: 0x106C2 / 67266
{
	if (iParam1 != 100000000)
	{
		Function_292(iParam0, iParam1);
	}
	else
	{
		Function_290(iParam0, 1);
	}
	return;
}

void Function_290(int iParam0, bool bParam1) //Position: 0x106E2 / 67298
{
	iParam0->f_40 = 0;
	Function_291(iParam0, 2, bParam1);
	Function_291(iParam0, 4, bParam1);
	Function_291(iParam0, 8, bParam1);
	Function_291(iParam0, 16, bParam1);
	Function_291(iParam0, 32, bParam1);
	Function_291(iParam0, 64, bParam1);
	Function_291(iParam0, 128, bParam1);
	Function_291(iParam0, 256, bParam1);
	Function_291(iParam0, 512, bParam1);
	Function_291(iParam0, 1024, bParam1);
	return;
}

void Function_291(int iParam0, int iParam1, bool bParam2) //Position: 0x10748 / 67400
{
	bool bVar0;
	
	Function_81(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_81(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_47(iParam0 + 40, bVar0);
	}
	else
	{
		Function_81(iParam0 + 40, bVar0);
	}
	return;
}

void Function_292(int iParam0, bool bParam1) //Position: 0x10784 / 67460
{
	bool bVar0;
	
	Function_47(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_81(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_47(iParam0 + 40, bVar0);
	return;
}

int Function_293(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) //Position: 0x107AF / 67503
{
	if (!Function_297(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_296(uParam0, uParam2))
	{
		return 0;
	}
	Function_295(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_294(uParam0, iParam4, iParam5);
	return 1;
}

void Function_294(var uParam0, int iParam1, int iParam2) //Position: 0x107EB / 67563
{
	if (iParam1 != 100000000)
	{
		Function_291(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_290(uParam0, iParam2);
	}
	return;
}

void Function_295(var uParam0, int iParam1) //Position: 0x1080E / 67598
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_296(int iParam0, bool bParam1) //Position: 0x1081A / 67610
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

bool Function_297(int iParam0, bool bParam1) //Position: 0x108A3 / 67747
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

void Function_298() //Position: 0x10A2F / 68143
{
	Local_4.f_1092 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "soldiers"));
	(*&Local_4 + 1048)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Army_Captain", 1262, -3705.692f, 8.344243f, 3481.947f, 0.0f, -84.63236f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1048)[02], Local_4.f_1092);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1048)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[02], 5, 0.999f, 1, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_4 + 1048)[02], 0.0f);
	TASK_STAND_STILL((*&Local_4 + 1048)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1048)[02], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[02], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 1048)[02], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS((*&Local_4 + 1048)[02], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 1048)[02], 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 1048)[02], 1);
	(*&Local_4 + 1048)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Army_Med01", 372, -3709.959f, 8.031375f, 3474.593f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1048)[12], Local_4.f_1092);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1048)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[12], 16, 0.999f, 1, 1);
	if (IS_WEAPONENUM_LOCKED(12))
	{
		GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[12], 41, 1.0f, 1, 1);
	}
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_4 + 1048)[12], true);
	TASK_STAND_STILL((*&Local_4 + 1048)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1048)[12], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[12], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 1048)[12], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS((*&Local_4 + 1048)[12], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 1048)[12], 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 1048)[12], 1);
	(*&Local_4 + 1048)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Army_Med02", 373, -3704.965f, 8.653705f, 3464.446f, 0.0f, 76.01837f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1048)[22], Local_4.f_1092);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1048)[22], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[22], 16, 0.999f, 1, 1);
	if (IS_WEAPONENUM_LOCKED(12))
	{
		GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[22], 41, 1.0f, 1, 1);
	}
	TASK_STAND_STILL((*&Local_4 + 1048)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1048)[22], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[22], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 1048)[22], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS((*&Local_4 + 1048)[22], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 1048)[22], 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 1048)[22], 1);
	(*&Local_4 + 1048)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Army_E01", 369, -3696.117f, 9.531811f, 3478.961f, 0.0f, -89.68085f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1048)[32], Local_4.f_1092);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1048)[32], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[32], 16, 0.999f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 1048)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1048)[32], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[32], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 1048)[32], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS((*&Local_4 + 1048)[32], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 1048)[32], 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 1048)[32], 1);
	(*&Local_4 + 1048)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Army_E02", 370, -3705.076f, 8.406718f, 3476.685f, 0.0f, -81.4502f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1048)[42], Local_4.f_1092);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1048)[42], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[42], 16, 0.999f, 1, 1);
	if (IS_WEAPONENUM_LOCKED(12))
	{
		GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[42], 41, 1.0f, 1, 1);
	}
	TASK_STAND_STILL((*&Local_4 + 1048)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1048)[42], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[42], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 1048)[42], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS((*&Local_4 + 1048)[42], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 1048)[42], 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 1048)[42], 1);
	return;
}

void Function_299() //Position: 0x10E7F / 69247
{
	Function_271((*&Local_4 + 1964)[2]);
	Function_301();
	if (!iLocal_913[3])
	{
		Function_298();
	}
	if (IS_ACTOR_VALID((*&Local_4 + 1048)[12]))
	{
		DESTROY_ACTOR((*&Local_4 + 1048)[12]);
	}
	Function_368(Global_34573, Local_734.f_40, 1, 1, 1);
	Function_80();
	Function_80();
	iLocal_1000 = ATTACH_OBJECTS(Global_34573, Local_734.f_40, Function_59(), Function_80(), Function_80(), 4294967295);
	Function_368((*&Local_4 + 1048)[02], Local_734.f_36, 1, 1, 1);
	Function_80();
	Function_80();
	iLocal_996 = ATTACH_OBJECTS((*&Local_4 + 1048)[02], Local_734.f_36, Function_59(), Function_80(), Function_80(), 4294967295);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 1048)[02], 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_4 + 1048)[02], 0.0f);
	Function_368((*&Local_4 + 1048)[32], Local_705.f_80, 1, 1, 1);
	Function_80();
	Function_80();
	iLocal_997 = ATTACH_OBJECTS((*&Local_4 + 1048)[32], Local_705.f_80, Function_59(), Function_80(), Function_80(), 4294967295);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 1048)[32], 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_4 + 1048)[32], 0.0f);
	Function_368((*&Local_4 + 1048)[42], Local_705.f_84, 1, 1, 1);
	Function_80();
	Function_80();
	iLocal_998 = ATTACH_OBJECTS((*&Local_4 + 1048)[42], Local_705.f_84, Function_59(), Function_80(), Function_80(), 4294967295);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 1048)[42], 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_4 + 1048)[42], 0.0f);
	Function_368((*&Local_4 + 1048)[22], Local_705.f_88, 1, 1, 1);
	Function_80();
	Function_80();
	iLocal_999 = ATTACH_OBJECTS((*&Local_4 + 1048)[22], Local_705.f_88, Function_59(), Function_80(), Function_80(), 4294967295);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 1048)[22], 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_4 + 1048)[22], 0.0f);
	Function_285(Local_4.f_1092, Global_34573, 0);
	Function_287(0, 1);
	Function_300(Local_4.f_1092, 0, 3212836864, 0, 1);
	if (!SQUAD_IS_VALID(bLocal_1008))
	{
		bLocal_1008 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "stationZombiesSquad"));
	}
	Function_275(&bLocal_1007);
	Function_275(&Local_4 + 1124);
	return;
}

void Function_300(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x11059 / 69721
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			if (bParam1)
			{
				TASK_CROUCH(bVar1, bParam2);
			}
			else
			{
				TASK_STAND_STILL(bVar1, bParam2, iParam3, 0);
			}
			TASK_PRIORITY_SET(bVar1, iParam4);
		}
		bVar0++;
	}
}

void Function_301() //Position: 0x110C5 / 69829
{
	vector3 vVar0;
	
	Function_197((*&Local_4 + 2164)[0]);
	vVar0 = { StackVal, StackVal, Function_197((*&Local_4 + 2164)[0]) };
	TRAIN_SET_MAX_ACCEL(iLocal_1033, 3.5f);
	TRAIN_SET_TARGET_SPEED(iLocal_1033, 5.2f);
	TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1033, 1);
	TRAIN_SET_TARGET_POS(iLocal_1033, &vVar0);
	TRAIN_PLAY_WHISTLE_SEQUENCE(iLocal_1033, 0);
	return;
}

void Function_302() //Position: 0x11106 / 69894
{
	Function_271((*&Local_4 + 1964)[2]);
	Function_323();
	Function_321();
	Function_304();
	Function_303();
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	return;
}

void Function_303() //Position: 0x1112A / 69930
{
	if (!IS_ACTOR_VALID(bLocal_1006))
	{
		bLocal_1006 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	RESET_ACTOR_GAITS(Global_34573, 0);
	RESET_ACTOR_GAITS(bLocal_1006, 0);
	Function_368(bLocal_1006, (*&Local_4 + 1964)[20], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1006, -1.0f, 0, 0);
	if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
	{
		ACTOR_MOUNT_ACTOR(Global_34573, bLocal_1006);
	}
	return;
}

void Function_304() //Position: 0x11185 / 70021
{
	if (!iLocal_1081)
	{
		Function_197((*&Local_4 + 1964)[24]);
		vLocal_1017 = { StackVal, StackVal, Function_197((*&Local_4 + 1964)[24]) };
		Function_320((*&Local_4 + 1964)[24]);
		vLocal_1020 = { StackVal, StackVal, Function_320((*&Local_4 + 1964)[24]) };
		STREAMING_LOAD_SCENE_EXT(vLocal_1017, vLocal_1020, 0);
		if (!SQUAD_IS_VALID(Local_4.f_1388))
		{
			Function_319();
			Function_310(Local_4.f_1388, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
			Function_309(Local_4.f_1388);
		}
		if (!SQUAD_IS_VALID(Local_4.f_1412))
		{
			Function_308();
			Function_309(Local_4.f_1412);
		}
		Function_307(Local_4.f_1412, 0);
		Function_306(Local_4.f_1388, Local_4.f_1412, 0);
		Function_306(Local_4.f_1412, Local_4.f_1388, 0);
		Function_368((*&Local_4 + 1312)[42], (*&Local_4 + 1964)[8], 1, 1, 1);
		Function_368((*&Local_4 + 1312)[52], (*&Local_4 + 1964)[9], 1, 1, 1);
		Function_368((*&Local_4 + 1312)[62], (*&Local_4 + 1964)[10], 1, 1, 1);
		Function_368((*&Local_4 + 1392)[12], (*&Local_4 + 1964)[11], 1, 1, 1);
		Function_368((*&Local_4 + 1312)[72], (*&Local_4 + 1964)[12], 1, 1, 1);
		Function_368((*&Local_4 + 1312)[82], (*&Local_4 + 1964)[13], 1, 1, 1);
		Function_368((*&Local_4 + 1392)[02], (*&Local_4 + 1964)[18], 1, 1, 1);
		Function_368((*&Local_4 + 1312)[02], (*&Local_4 + 1964)[14], 1, 1, 1);
		Function_368((*&Local_4 + 1312)[12], (*&Local_4 + 1964)[15], 1, 1, 1);
		Function_368((*&Local_4 + 1312)[22], (*&Local_4 + 1964)[16], 1, 1, 1);
		Function_368((*&Local_4 + 1312)[32], (*&Local_4 + 1964)[17], 1, 1, 1);
		SET_ACTOR_STREAMING_HIGH_PRIORITY((*&Local_4 + 1312)[02], 1);
		SET_ACTOR_STREAMING_HIGH_PRIORITY((*&Local_4 + 1312)[82], 1);
		SET_ACTOR_STREAMING_HIGH_PRIORITY((*&Local_4 + 1048)[32], 1);
		SET_ACTOR_STREAMING_HIGH_PRIORITY((*&Local_4 + 1048)[42], 1);
		Function_279(Local_4.f_1388, 0.6f);
		Function_305(Local_4.f_1388, Local_4.f_1748);
		iLocal_1081 = 1;
	}
	return;
}

int Function_305(bool bParam0, bool bParam1) //Position: 0x11374 / 70516
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

void Function_306(bool bParam0, bool bParam1, int iParam2) //Position: 0x113C9 / 70601
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_281(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_307(bool bParam0, int iParam1) //Position: 0x11418 / 70680
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		SET_ACTOR_INVULNERABILITY(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_308() //Position: 0x11440 / 70720
{
	Local_4.f_1412 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S04_Station_Spec_Z"));
	(*&Local_4 + 1392)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "F04", 1204, -3705.137f, 8.677471f, 3481.642f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1392)[02], Local_4.f_1412);
	TASK_STAND_STILL((*&Local_4 + 1392)[02], -1.0f, 0, 0);
	(*&Local_4 + 1392)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "B06", 1219, -3705.208f, 8.677471f, 3477.922f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1392)[12], Local_4.f_1412);
	TASK_STAND_STILL((*&Local_4 + 1392)[12], -1.0f, 0, 0);
	return;
}

void Function_309(bool bParam0) //Position: 0x114FC / 70908
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
			AI_IGNORE_ACTOR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_310(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1153B / 70971
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		PRINTSTRING("MAKE_SQUAD_ZOMBIE -- Passed invalid squad, exiting...");
		PRINTNL();
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_311(bVar1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
		}
		else
		{
			PRINTSTRING("MAKE_SQUAD_ZOMBIE -- Invalid member in the squad..");
			PRINTNL();
		}
		bVar0++;
	}
}

void Function_311(bool bParam0, int iParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x11605 / 71173
{
	int iVar0;
	
	if (Function_318(bParam0) && !Function_317(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (bParam2 == 4294967294 && bParam3 == 4294967294)
	{
		if (bParam2 == 4294967295)
		{
			bParam2 = RAND_INT_RANGE(false, 4);
		}
		if (bParam3 == 4294967295)
		{
			bParam3 = RAND_INT_RANGE(false, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, bParam2, bParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_315(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_314(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	iVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", true);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_312(bParam0, uParam4, uParam5);
}

void Function_312(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11868 / 71784
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_313(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_313(bool bParam0, int iParam1, bool bParam2) //Position: 0x1191A / 71962
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_59(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_80();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_59(), vVar3, Function_80());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_59(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_80();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_59(), vVar0, Function_80());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	return;
}

void Function_314(bool bParam0) //Position: 0x11ACA / 72394
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

void Function_315(bool bParam0) //Position: 0x11AFE / 72446
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_316(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_316(var uParam0, bool bParam1) //Position: 0x11E62 / 73314
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

bool Function_317(bool bParam0, int iParam1) //Position: 0x11E84 / 73348
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_318(bool bParam0) //Position: 0x11EC6 / 73414
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_319() //Position: 0x11EE6 / 73446
{
	Local_4.f_1388 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S04_Z_Station"));
	(*&Local_4 + 1312)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_E01", 202, -3703.324f, 8.677471f, 3479.994f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[02], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[02], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[02], -1.0f, 0, 0);
	(*&Local_4 + 1312)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_E02", 87, -3702.991f, 8.677471f, 3478.948f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[12], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[12], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[12], -1.0f, 0, 0);
	(*&Local_4 + 1312)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_E03", 22, -3703.842f, 8.677471f, 3480.465f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[22], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[22], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[22], -1.0f, 0, 0);
	(*&Local_4 + 1312)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_M01", 311, -3703.828f, 8.677471f, 3479.439f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[32], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[32], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[32], -1.0f, 0, 0);
	(*&Local_4 + 1312)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_M02", 49, -3704.341f, 8.677471f, 3478.875f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[42], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[42], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[42], -1.0f, 0, 0);
	(*&Local_4 + 1312)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_M03", 50, -3705.048f, 8.677471f, 3480.548f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[52], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[52], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[52], -1.0f, 0, 0);
	(*&Local_4 + 1312)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_H01", 74, -3704.545f, 8.677471f, 3481.104f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[62], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[62], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[62], -1.0f, 0, 0);
	(*&Local_4 + 1312)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_H02", 142, -3704.77f, 8.677471f, 3478.403f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[72], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[72], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[72], -1.0f, 0, 0);
	(*&Local_4 + 1312)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DnD_H03", 136, -3704.346f, 8.677471f, 3479.91f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1312)[82], Local_4.f_1388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1312)[82], false);
	TASK_STAND_STILL((*&Local_4 + 1312)[82], -1.0f, 0, 0);
	return;
}

vector3 Function_320(bool bParam0) //Position: 0x1222F / 74287
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

void Function_321() //Position: 0x12256 / 74326
{
	if (!SQUAD_IS_VALID(Local_4.f_1092))
	{
		Function_298();
	}
	Function_285(Local_4.f_1092, Global_34573, 0);
	Function_368((*&Local_4 + 1048)[02], Local_705.f_72, 1, 1, 1);
	Function_368((*&Local_4 + 1048)[12], (*&Local_4 + 1964)[6], 1, 1, 1);
	Function_368((*&Local_4 + 1048)[22], (*&Local_4 + 1964)[7], 1, 1, 1);
	Function_368((*&Local_4 + 1048)[32], (*&Local_4 + 1964)[4], 1, 1, 1);
	Function_368((*&Local_4 + 1048)[42], (*&Local_4 + 1964)[5], 1, 1, 1);
	Function_80();
	Function_80();
	iLocal_996 = ATTACH_OBJECTS((*&Local_4 + 1048)[02], Local_705.f_72, Function_59(), Function_80(), Function_80(), 4294967295);
	Function_80();
	Function_80();
	iLocal_998 = ATTACH_OBJECTS((*&Local_4 + 1048)[42], Local_705.f_76, Function_59(), Function_80(), Function_80(), 4294967295);
	Function_322();
	Function_287(0, 1);
	return;
}

void Function_322() //Position: 0x12324 / 74532
{
	Function_286(Local_4.f_1092, 0);
	Function_284(Local_4.f_1092, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[32], 8, 0, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 1048)[32], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[32], 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[42], 8, 0, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 1048)[42], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[42], 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[22], 8, 0, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 1048)[22], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[22], 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[12], 8, 0, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 1048)[12], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[12], 0);
	TASK_USE_GRINGO((*&Local_4 + 1048)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_2420), "USECASE1", 1, 1);
	TASK_USE_GRINGO((*&Local_4 + 1048)[42], GET_GRINGO_FROM_OBJECT(Local_4.f_2416), "USECASE1", 1, 1);
	TASK_USE_GRINGO((*&Local_4 + 1048)[32], GET_GRINGO_FROM_OBJECT(Local_4.f_2412), "USECASE1", 1, 1);
	TASK_USE_GRINGO((*&Local_4 + 1048)[22], GET_GRINGO_FROM_OBJECT(Local_4.f_2448), "USECASE1", 1, 1);
	TASK_USE_GRINGO((*&Local_4 + 1048)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_2444), "USECASE1", 1, 1);
	TASK_USE_GRINGO((*&Local_4 + 1312)[82], GET_GRINGO_FROM_OBJECT(Local_4.f_2424), "USECASE1", 1, 1);
	TASK_USE_GRINGO((*&Local_4 + 1392)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_2428), "USECASE1", 1, 1);
	TASK_USE_GRINGO((*&Local_4 + 1312)[32], GET_GRINGO_FROM_OBJECT(Local_4.f_2432), "USECASE1", 1, 1);
	TASK_USE_GRINGO((*&Local_4 + 1312)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_2436), "USECASE1", 1, 1);
	TASK_PRIORITY_SET((*&Local_4 + 1048)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 1048)[42], 1);
	TASK_PRIORITY_SET((*&Local_4 + 1048)[32], 1);
	TASK_PRIORITY_SET((*&Local_4 + 1048)[22], 1);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1048)[02], Local_4.f_2420, "USECASE1", 1, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1048)[42], Local_4.f_2416, "USECASE1", 1, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1048)[32], Local_4.f_2412, "USECASE1", 1, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1048)[22], Local_4.f_2448, "USECASE1", 1, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1048)[12], Local_4.f_2444, "USECASE1", 1, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1312)[82], Local_4.f_2424, "USECASE1", 1, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1392)[02], Local_4.f_2428, "USECASE1", 1, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1312)[32], Local_4.f_2432, "USECASE1", 1, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1312)[02], Local_4.f_2436, "USECASE1", 1, 0, 0);
	return;
}

void Function_323() //Position: 0x1267D / 75389
{
	if (!IS_OBJECTSET_VALID(bLocal_1001))
	{
		bLocal_1001 = CREATE_OBJECTSET_IN_LAYOUT("osClimbOnTrain", Local_4, 12, 1);
	}
	if (!IS_OBJECT_IN_OBJECTSET(Local_630.f_256, bLocal_1001))
	{
		ADD_OBJECT_TO_OBJECTSET(Local_630.f_256, bLocal_1001);
		ADD_OBJECT_TO_OBJECTSET(Local_630.f_252, bLocal_1001);
		ADD_OBJECT_TO_OBJECTSET(Local_630.f_260, bLocal_1001);
		ADD_OBJECT_TO_OBJECTSET(Local_630.f_264, bLocal_1001);
	}
	return;
}

int Function_324() //Position: 0x126EC / 75500
{
	switch (iLocal_811)
	{
		case 0x00000063:
			if (!Function_248(&bLocal_757))
			{
				return 0;
			}
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				Function_246();
			}
			Function_326();
			return 1;
			break;
		
		case 0x00000003:
			Function_325(Local_4.f_2396);
			return 1;
			break;
		
		case 0x00000004:
			Function_325(Local_4.f_2400);
			return 1;
			break;
		
		case 0x00000005:
			Function_325(Local_4.f_2396);
			TRAIN_SET_TARGET_SPEED(iLocal_1033, 0.0f);
			Function_248(&bLocal_757);
			return 1;
		
		case 0x00000065:
			Function_325(Local_4.f_2404);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_325(bool bParam0) //Position: 0x12780 / 75648
{
	if (!iLocal_1078)
	{
		Function_271(bParam0);
		iLocal_1078 = 1;
	}
	return;
}

void Function_326() //Position: 0x12796 / 75670
{
	if (!iLocal_1079)
	{
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		bLocal_1003 = CREATE_PROP_IN_LAYOUT(bLocal_749, Function_59(), "p_gen_stool02x", -3860.191f, 8.012622f, 3668.214f, 0.0f, -90.0f, 0.0f, 1);
		bLocal_1002 = CREATE_GRINGO_IN_LAYOUT(bLocal_749, Function_59(), "stool_sit_attach_indef", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		ATTACH_OBJECTS(bLocal_1002, bLocal_1003, Function_59(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		SET_DRAW_OBJECT(bLocal_1003, 0);
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
		iLocal_1079 = 1;
	}
	return;
}

int Function_327() //Position: 0x1282F / 75823
{
	switch (iLocal_811)
	{
		case 0x00000063:
			if (STREAMING_IS_WORLD_LOADED() && Function_248(&bLocal_757))
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_246();
				}
				CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(-3880.992f, 9.495f, 3658.541f, 0, 0);
				return 1;
			}
			return 0;
			break;
		
		case 0x00000003:
			if (STREAMING_IS_WORLD_LOADED() && Function_248(&bLocal_757))
			{
				CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_246();
				}
				return 1;
			}
			return 0;
			break;
		
		case 0x00000004:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-3699.505f, 12.198f, 3484.008f, -0.237f, -0.052f, 0.97f);
			return 1;
			break;
		
		case 0x00000005:
			if (Function_329())
			{
				CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
				Function_328();
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_328() //Position: 0x128ED / 76013
{
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "ptl_base", 1);
	if (ACTOR_GET_NEXT_EQUIP_SLOT(Global_34573) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(Global_34573, true) != 4)
	{
		ACTOR_SET_NEXT_WEAPON(Global_34573, 4);
	}
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 4, 0);
	return;
}

bool Function_329() //Position: 0x12934 / 76084
{
	Function_330(&Local_4 + 884, 1222, 2, 0);
	Function_330(&Local_4 + 884, 1224, 2, 0);
	Function_330(&Local_4 + 884, 1210, 2, 0);
	Function_330(&Local_4 + 884, 1213, 2, 0);
	Function_330(&Local_4 + 884, 1215, 2, 0);
	Function_330(&Local_4 + 884, 1217, 2, 0);
	Function_330(&Local_4 + 884, 1205, 2, 0);
	Function_330(&Local_4 + 884, 1206, 2, 0);
	Function_330(&Local_4 + 884, 1207, 2, 0);
	Function_330(&Local_4 + 884, 1212, 2, 0);
	Function_330(&Local_4 + 884, 1218, 2, 0);
	Function_330(&Local_4 + 884, 1219, 2, 0);
	if (Function_248(&Local_4 + 884))
	{
		return 1;
	}
	return 0;
}

var Function_330(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x129F0 / 76272
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_141(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_252(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_252(uParam0[iVar03], 8);
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

int Function_331() //Position: 0x12AC0 / 76480
{
	switch (iLocal_811)
	{
		case 0x00000063:
			Function_337();
			CLEAR_AREA_OF_GRASS(-3862.752f, 8.03117f, 3666.897f, 5.0f);
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_197((*&Local_4 + 1840)[0]);
			Function_332(StackVal, StackVal, bLocal_749, Function_197((*&Local_4 + 1840)[0]), &Local_4 + 1640[0], 0, 0, 0, 0, 1, 1);
			Function_366(&iLocal_969);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000003:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_197((*&Local_4 + 1964)[19]);
			Function_332(StackVal, StackVal, bLocal_749, Function_197((*&Local_4 + 1964)[19]), &Local_4 + 1640[3], 0, 0, 0, 0, 1, 1);
			AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
			iLocal_1078 = 0;
			return 1;
			break;
		
		case 0x00000004:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_197((*&Local_4 + 1964)[19]);
			Function_332(StackVal, StackVal, bLocal_749, Function_197((*&Local_4 + 1964)[19]), &Local_4 + 1640[3], 0, 0, 0, 0, 1, 1);
			iLocal_1078 = 0;
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000005:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_197((*&Local_4 + 2164)[0]);
			Function_332(StackVal, StackVal, bLocal_749, Function_197((*&Local_4 + 2164)[0]), &Local_4 + 1640[2], 0, 0, 0, 0, 1, 1);
			SET_DRAW_OBJECT(Local_4.f_2492, 0);
			iLocal_1078 = 0;
			AUDIO_MUSIC_FORCE_TRACK("FTR_ZMB_SONG_01", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			return 1;
			break;
		
		case 0x00000065:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_197((*&Local_4 + 2164)[0]);
			Function_332(StackVal, StackVal, bLocal_749, Function_197((*&Local_4 + 2164)[0]), &Local_4 + 1640[2], 0, 0, 0, 0, 1, 1);
			iLocal_1078 = 0;
			return 1;
			break;
		
		default:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_197((*&Local_4 + 2072)[2]);
			Function_332(StackVal, StackVal, bLocal_749, Function_197((*&Local_4 + 2072)[2]), &Local_4 + 1640[2], 0, 0, 0, 0, 1, 1);
			Function_271(Local_4.f_2396);
			return 1;
			break;
	}
	return 0;
}

void Function_332(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x12CB4 / 76980
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
				Function_333(bVar1, bParam0);
			}
		}
		if (!Function_78(StackVal, StackVal, vVar2))
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

void Function_333(bool bParam0, bool bParam1) //Position: 0x12F22 / 77602
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

void Function_334(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x12F97 / 77719
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
	Function_201();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_55();
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
			if (Function_45())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
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
				Function_336(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_59(), 2, Function_336(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_92(19, 1, 0, 0);
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
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_335()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_335()));
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
	if (Function_250(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_126(0x4000000);
	}
	if (Function_250(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_126(0x8000000);
	}
}

var Function_335() //Position: 0x13245 / 78405
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

vector3 Function_336(bool bParam0) //Position: 0x132C4 / 78532
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_337() //Position: 0x132D5 / 78549
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { -3862.622f, 8.109f, 3664.495f };
	bVar3 = CREATE_VOLUME_IN_LAYOUT(bLocal_749, "tempPhysVol", 2, vVar0, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Function_338(bLocal_749, "blanket", bVar3);
	if (IS_VOLUME_VALID(bVar3))
	{
		DESTROY_VOLUME(bVar3);
	}
	return;
}

void Function_338(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1333A / 78650
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_59(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, bParam2, bParam1, 1);
	bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_OBJECTSET(bVar1);
	DESTROY_ITERATOR(bVar2);
	return;
}

void Function_339(bool bParam0, int iParam1) //Position: 0x13393 / 78739
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
		SET_DRAW_OBJECT(bVar1, iParam1);
		bVar0++;
	}
	return;
}

void Function_340(bool bParam0) //Position: 0x133C4 / 78788
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

int Function_341(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x13409 / 78857
{
	if (Function_343(&uParam0) == iParam7 || Function_342())
	{
		return 1;
	}
	return 0;
}

bool Function_342() //Position: 0x13428 / 78888
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

int Function_343(int iParam0) //Position: 0x13443 / 78915
{
	if (Function_242(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

bool Function_344(vector3 vParam0, bool bParam3) //Position: 0x1345B / 78939
{
	switch (iLocal_1036)
	{
		case 0x00000000:
			Unknown_Function();
			if (bParam3)
			{
				iLocal_1036 = 1;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			iLocal_1036 = 2;
			break;
		
		case 0x00000002:
			iLocal_1036 = 3;
			break;
		
		case 0x00000003:
			if (Function_354(Local_987[22]))
			{
				iLocal_1036 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_350(Local_987[12]))
			{
				iLocal_1036 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_345(Local_987[02]))
			{
				iLocal_1036 = 6;
				return 1;
			}
			break;
		
		case 0x00000006:
			if (iLocal_811 > 3)
			{
				TRAIN_FORCE_HIGH_LOD(iLocal_1033, 1);
			}
			iLocal_1036 = 7;
			return 1;
			break;
	}
	return 0;
}

bool Function_345(bool bParam0) //Position: 0x13510 / 79120
{
	var uVar0;
	
	Function_247(3, 2);
	uVar0 = uVar0;
	Function_348(&Local_734 + 4, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_248(&Local_734 + 4))
	{
		return 0;
	}
	Local_734 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_59()));
	Local_734.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_734, "onTrain", 2, 0.0f, 3.3001f, 0.0f, 0.0f, 0.0f, 0.0f, 2.854816f, 4.537057f, 11.21205f);
	Local_734.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_734, "pullLeverVol", 2, 0.02866647f, 2.145835f, 3.668741f, 0.0f, 0.0f, 0.0f, 1.881216f, 2.271825f, 1.684511f);
	Local_734.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_734, "soldierRestrict", 2, 0.02866647f, 2.145835f, 4.245661f, 0.0f, 0.0f, 0.0f, 2.425989f, 2.929713f, 2.172321f);
	Local_734.f_32 = CREATE_POINT_IN_LAYOUT(Local_734, "EngineerPos", 0.07880644f, 1.124678f, 4.140462f, 0.0f, -25.61189f, 0.0f);
	Local_734.f_36 = CREATE_POINT_IN_LAYOUT(Local_734, "ncptAttach", -0.847216f, 1.124678f, 5.395226f, 0.0f, 20.38811f, 0.0f);
	Local_734.f_40 = CREATE_POINT_IN_LAYOUT(Local_734, "plAttach", 0.06013123f, 1.124678f, 3.967168f, 0.0f, -1.61189f, 0.0f);
	Local_734.f_44 = CREATE_GRINGO_IN_LAYOUT(Local_734, "train_engineer", "train_engineer", -0.2373522f, 1.14287f, 3.859487f, 0.0f, 0.0f, 0.0f);
	Local_734.f_48 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_734, "cover_right", 0.520601f, 1.131388f, 4.548862f, 0.0f, 90.0f, 0.0f, 1);
	Local_734.f_52 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_734, "cover_left", -0.7171702f, 1.131388f, 4.461259f, 0.0f, -180.0f, 0.0f, 1);
	Function_347(&Local_734 + 52);
	Function_346(Local_734, bParam0);
	return 1;
}

void Function_346(bool bParam0, bool bParam1) //Position: 0x1375E / 79710
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_59(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

void Function_347(int iParam0) //Position: 0x137A0 / 79776
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	Function_197(*iParam0);
	vVar0 = { StackVal, StackVal, Function_197(*iParam0) };
	Function_320(*iParam0);
	vVar3 = { StackVal, StackVal, Function_320(*iParam0) };
	strcpy(&cVar6, GET_OBJECT_NAME(*iParam0), 64);
	bVar22 = GET_OBJECT_OWNER(*iParam0);
	vVar3.x = 0.0f;
	vVar3.f_8 = 0.0f;
	vVar3.f_4 = (180.0f - vVar3.y);
	vVar3.f_4 = GET_OBJECT_HEADING(*iParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(bVar22));
	PRINTSTRING(" at ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(vVar3);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar6);
	PRINTNL();
	DESTROY_OBJECT(*iParam0);
	*iParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(bVar22, &cVar6, vVar0, vVar3, 2);
	return;
}

var Function_348(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1386C / 79980
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_349(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_252(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_349(var uParam0, int iParam1, int iParam2) //Position: 0x138A4 / 80036
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_141(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_252(uParam0[iVar03], 4);
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

bool Function_350(int iParam0) //Position: 0x13968 / 80232
{
	var uVar0;
	
	Function_247(3, 2);
	uVar0 = uVar0;
	Function_348(&Local_705 + 4, "$/content/scripting/gringo/simplegringo/jump_from_horse", 1, 0);
	if (!Function_248(&Local_705 + 4))
	{
		return 0;
	}
	Local_705 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_59()));
	Local_705.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_705, "onTrain", 2, 0.0f, 2.703149f, 0.0f, 0.0f, 0.0f, 0.0f, 2.831535f, 4.018743f, 7.445875f);
	Local_705.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_705, "cptRestrict", 2, -0.04399485f, 3.223202f, 0.9988728f, 0.0f, 0.0f, 0.0f, 2.135586f, 2.568695f, 2.205698f);
	Local_705.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_705, "soldierRestrict", 2, -0.01584982f, 2.386658f, -1.908162f, 0.0f, 0.0f, 0.0f, 2.410197f, 2.568695f, 2.205698f);
	Local_705.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_705, "s05_e01_restrict", 2, 0.6341502f, 2.186658f, -2.958162f, 0.0f, 0.0f, 0.0f, 1.191936f, 2.945847f, 1.522069f);
	Local_705.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_705, "s05_cap_restrict", 2, -0.6158498f, 2.186658f, -2.958162f, 0.0f, 0.0f, 0.0f, 1.191936f, 2.955712f, 1.522069f);
	Local_705.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_705, "nzombieOut", 2, 0.0f, 2.653149f, -0.1f, 0.0f, 0.0f, 0.0f, 3.802749f, 4.957779f, 7.844279f);
	*(&Local_705 + 44) = { -0.7303683f, 0.7902242f, -3.098026f };
	*(&Local_705 + 44 + 12) = { 0.0f, 96.51199f, 0.0f };
	Function_351(iParam0, &Local_705 + 44);
	Local_705.f_68 = CREATE_POINT_IN_LAYOUT(Local_705, "cptWatch", -0.7303683f, 0.7902242f, -3.098026f, 0.0f, 96.51199f, 0.0f);
	Local_705.f_72 = CREATE_POINT_IN_LAYOUT(Local_705, "ncptAttach", 0.8012701f, 2.111853f, 1.827781f, 0.0f, -136.0f, 0.0f);
	Local_705.f_76 = CREATE_POINT_IN_LAYOUT(Local_705, "soldierAttach", 0.2474272f, 1.137075f, -2.152601f, 0.0f, -86.0f, 0.0f);
	Local_705.f_80 = CREATE_POINT_IN_LAYOUT(Local_705, "s05_E01_Attach", 0.521233f, 1.137075f, -2.574993f, 0.0f, -4.0f, 0.0f);
	Local_705.f_84 = CREATE_POINT_IN_LAYOUT(Local_705, "s05_E02_Attach", 0.002307758f, 2.24259f, 1.765795f, 0.0f, 0.0f, 0.0f);
	Local_705.f_88 = CREATE_POINT_IN_LAYOUT(Local_705, "s05_M02_Attach", 0.7970448f, 0.8494907f, 3.497481f, 0.0f, 0.0f, 0.0f);
	Local_705.f_92 = CREATE_GRINGO_IN_LAYOUT(Local_705, "jump_from_horse", "jump_from_horse", 0.9720914f, 0.7902242f, -3.250493f, 0.0f, 0.0f, 0.0f);
	Local_705.f_96 = CREATE_GRINGO_IN_LAYOUT(Local_705, "jump_from_horse1", "jump_from_horse", -1.092879f, 0.7902243f, -3.362524f, 0.0f, 0.0f, 0.0f);
	Local_705.f_100 = CREATE_GRINGO_IN_LAYOUT(Local_705, "jump_from_horse2", "jump_from_horse", -1.170888f, 0.8494906f, 3.303611f, 0.0f, 0.0f, 0.0f);
	Local_705.f_104 = CREATE_GRINGO_IN_LAYOUT(Local_705, "jump_from_horse3", "jump_from_horse", 1.054609f, 0.8494909f, 3.194651f, 0.0f, 0.0f, 0.0f);
	Local_705.f_108 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_705, "cover_left", -0.6827322f, 1.137075f, -2.340713f, 0.0f, -90.0f, 0.0f, 1);
	Local_705.f_112 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_705, "cover_right", 0.645075f, 1.137075f, -2.340713f, 0.0f, 0.0f, 0.0f, 1);
	Function_347(&Local_705 + 112);
	Function_346(Local_705, iParam0);
	return 1;
}

void Function_351(var uParam0, int iParam1) //Position: 0x13DEF / 81391
{
	Function_352(uParam0, 1, iParam1, iParam1 + 12);
	return;
}

void Function_352(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x13E01 / 81409
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_353(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_353(int iParam0, bool bParam1) //Position: 0x13F29 / 81705
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, bParam1, &uVar0))
	{
		if (!Function_78(StackVal, StackVal, *bParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, bParam1, &uVar0))
	{
		if (!Function_78(StackVal, StackVal, *bParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_354(var uParam0) //Position: 0x13F94 / 81812
{
	var uVar0;
	
	Function_247(3, 2);
	uVar0 = uVar0;
	Function_348(&Local_630 + 4, "p_gen_crateMultiplayerAmmoFull01x", 0, 0);
	Function_348(&Local_630 + 4, "$/content/scripting/gringo/simplegringo/train_lean_rail_nospawn", 1, 0);
	Function_348(&Local_630 + 4, "$/content/scripting/gringo/simplegringo/train_stand_lookdistance_w_any", 1, 0);
	Function_348(&Local_630 + 4, "$/content/scripting/gringo/simplegringo/z_dlc_z_climb", 1, 0);
	Function_348(&Local_630 + 4, "$/content/scripting/gringo/simplegringo/jump_from_horse", 1, 0);
	if (!Function_248(&Local_630 + 4))
	{
		return 0;
	}
	Local_630 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_59()));
	Local_630.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_630, "onTrain", 2, 0.0f, 2.913689f, 0.0f, 0.0f, 0.0f, 0.0f, 3.899684f, 4.472909f, 17.71123f);
	Local_630.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_630, "onFront", 2, 0.0f, 2.913689f, -4.457579f, 0.0f, 0.0f, 0.0f, 3.756499f, 4.472909f, 6.768486f);
	Local_630.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_630, "onBack", 2, 0.0f, 2.913689f, 3.994514f, 0.0f, 0.0f, 0.0f, 3.738349f, 4.472909f, 7.565088f);
	Local_630.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_630, "stayOut", 2, 0.0f, 2.113689f, -0.75f, 0.0f, 0.0f, 0.0f, 6.002841f, 4.472909f, 19.9494f);
	*(&Local_630 + 84) = { -0.9690404f, 0.8494907f, 8.208385f };
	*(&Local_630 + 84 + 12) = { 0.0f, -262.8362f, 0.0f };
	Function_351(uParam0, &Local_630 + 84);
	Local_630.f_108 = CREATE_POINT_IN_LAYOUT(Local_630, "GuardingFront", -0.9690404f, 0.8494907f, 8.208385f, 0.0f, -262.8362f, 0.0f);
	*(&Local_630 + 112) = { -1.040968f, 0.8004913f, -8.218503f };
	*(&Local_630 + 112 + 12) = { 0.0f, 76.56722f, 0.0f };
	Function_351(uParam0, &Local_630 + 112);
	Local_630.f_136 = CREATE_POINT_IN_LAYOUT(Local_630, "GuardingBack", -1.040968f, 0.8004913f, -8.218503f, 0.0f, 76.56722f, 0.0f);
	*(&Local_630 + 140) = { -1.320253f, 1.084862f, 1.627733f };
	*(&Local_630 + 140 + 12) = { 0.0f, -278.5902f, 0.0f };
	Function_351(uParam0, &Local_630 + 140);
	Local_630.f_164 = CREATE_POINT_IN_LAYOUT(Local_630, "GuardingMid", -1.320253f, 1.084862f, 1.627733f, 0.0f, -278.5902f, 0.0f);
	Local_630.f_168 = CREATE_OBJECTSET_IN_LAYOUT("DefendPos1Set", Local_630, 8, 0);
	(*&Local_630 + 172)[0] = CREATE_POINT_IN_LAYOUT(Local_630, "Def_1", -1.412868f, 1.08065f, 1.72801f, 0.0f, 92.60244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 172)[0], Local_630.f_168);
	(*&Local_630 + 172)[1] = CREATE_POINT_IN_LAYOUT(Local_630, "Def_5", 1.218355f, 1.085525f, 1.37169f, 0.0f, 276.4541f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 172)[1], Local_630.f_168);
	(*&Local_630 + 172)[2] = CREATE_POINT_IN_LAYOUT(Local_630, "Def_6", 1.267388f, 1.087534f, -6.896013f, 0.0f, 270.7169f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 172)[2], Local_630.f_168);
	(*&Local_630 + 172)[3] = CREATE_POINT_IN_LAYOUT(Local_630, "Def_7", -1.382259f, 1.08065f, -6.495248f, 0.0f, 449.6314f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 172)[3], Local_630.f_168);
	(*&Local_630 + 172)[4] = CREATE_POINT_IN_LAYOUT(Local_630, "Def_8", 1.271683f, 1.083226f, -1.485292f, 0.0f, 267.7339f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 172)[4], Local_630.f_168);
	(*&Local_630 + 172)[5] = CREATE_POINT_IN_LAYOUT(Local_630, "Def_9", 1.114372f, 1.0939f, 6.413198f, 0.0f, 181.7339f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 172)[5], Local_630.f_168);
	Local_630.f_200 = CREATE_POINT_IN_LAYOUT(Local_630, "Def_10", 1.114372f, 1.0939f, 6.413198f, 0.0f, 181.7339f, 0.0f);
	Local_630.f_204 = CREATE_OBJECTSET_IN_LAYOUT("ZombieFollowLeftSet", Local_630, 8, 0);
	(*&Local_630 + 208)[0] = CREATE_POINT_IN_LAYOUT(Local_630, "zf_L_01", -5.65844f, 0.1281526f, 1.394819f, 0.0f, 92.60244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 208)[0], Local_630.f_204);
	(*&Local_630 + 208)[1] = CREATE_POINT_IN_LAYOUT(Local_630, "zf_L_02", -4.048771f, 0.08064997f, -3.407602f, 0.0f, 92.60244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 208)[1], Local_630.f_204);
	(*&Local_630 + 208)[2] = CREATE_POINT_IN_LAYOUT(Local_630, "zf_L_03", -4.382504f, -0.06935003f, -9.648886f, 0.0f, 92.60244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 208)[2], Local_630.f_204);
	Local_630.f_224 = CREATE_OBJECTSET_IN_LAYOUT("ZombieFollowRightSet", Local_630, 8, 0);
	(*&Local_630 + 228)[0] = CREATE_POINT_IN_LAYOUT(Local_630, "zf_R_01", 5.584477f, 0.03064997f, -9.50129f, 0.0f, 92.60244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 228)[0], Local_630.f_224);
	(*&Local_630 + 228)[1] = CREATE_POINT_IN_LAYOUT(Local_630, "zf_R_02", 4.117798f, -0.11935f, -4.32936f, 0.0f, 92.60244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 228)[1], Local_630.f_224);
	(*&Local_630 + 228)[2] = CREATE_POINT_IN_LAYOUT(Local_630, "zf_R_03", 5.604891f, -0.11935f, -0.2426678f, 0.0f, 92.60244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_630 + 228)[2], Local_630.f_224);
	Local_630.f_244 = CREATE_GRINGO_IN_LAYOUT(Local_630, "train_lean_rail_nospawn", "train_lean_rail_nospawn", -0.3141045f, 1.08065f, -1.751267f, 0.0f, 89.06522f, 0.0f);
	Local_630.f_248 = CREATE_GRINGO_IN_LAYOUT(Local_630, "train_rand_idle_stand_nospawn", "train_stand_lookdistance_w_any", 1.284201f, 1.08065f, -0.4395666f, 0.0f, 271.5391f, 0.0f);
	Local_630.f_252 = CREATE_GRINGO_IN_LAYOUT(Local_630, "z_dlc_z_climb1", "z_dlc_z_climb", 4.35f, -0.349983f, 1.656989f, 0.0f, 90.0f, 0.0f);
	Local_630.f_256 = CREATE_GRINGO_IN_LAYOUT(Local_630, "z_dlc_z_climb", "z_dlc_z_climb", 4.35f, -0.375f, 6.990816f, 0.0f, 90.0f, 0.0f);
	Local_630.f_260 = CREATE_GRINGO_IN_LAYOUT(Local_630, "z_dlc_z_climb2", "z_dlc_z_climb", 4.35f, -0.375f, -2.125458f, 0.0f, 90.0f, 0.0f);
	Local_630.f_264 = CREATE_GRINGO_IN_LAYOUT(Local_630, "z_dlc_z_climb3", "z_dlc_z_climb", 4.35f, -0.375f, -6.889865f, 0.0f, 90.0f, 0.0f);
	Local_630.f_268 = CREATE_GRINGO_IN_LAYOUT(Local_630, "jump_from_horse", "jump_from_horse", 1.712382f, 1.08065f, 5.1021f, 0.0f, 1.0f, 0.0f);
	Local_630.f_272 = CREATE_GRINGO_IN_LAYOUT(Local_630, "jump_from_horse1", "jump_from_horse", 1.803739f, 1.08065f, -4.047189f, 0.0f, 0.0f, 0.0f);
	Local_630.f_276 = CREATE_GRINGO_IN_LAYOUT(Local_630, "jump_from_horse2", "jump_from_horse", -1.677039f, 1.08065f, -1.963834f, 0.0f, 2.0f, 0.0f);
	Local_630.f_280 = CREATE_GRINGO_IN_LAYOUT(Local_630, "jump_from_horse3", "jump_from_horse", -1.666663f, 1.08065f, 5.190672f, 0.0f, -1.0f, 0.0f);
}

vector3 V?Yx:Aç@mH   (var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139) //Position: 0x14A86 / 84614
{
	Local_630.f_288 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, 3510);
}

void Function_356() //Position: 0x150B1 / 86193
{
	return;
}

bool Function_357(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x150B7 / 86199
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_358(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1515B / 86363
{
	struct<8> Var0;
	
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_365(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	Unknown_Function();
	if (!bParam0)
	{
		Function_92(456, 1, 0, 0);
		Unknown_Function();
		if (bParam2)
		{
			if (!Function_357(0, 0, 1, 1))
			{
				Function_46(1);
				Function_44(1, 5);
			}
			else
			{
				Function_356();
			}
		}
		Function_361(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_360() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_360() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_359(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_113(Global_76846, 2))
			{
				Function_108(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_359(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x152B0 / 86704
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_360() //Position: 0x1532B / 86827
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_361(bool bParam0) //Position: 0x15358 / 86872
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
			if (Function_364(bParam0, Function_182(bVar24)))
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
			if (Function_364(bParam0, Function_182(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_363(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_38(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_362(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_362(int iParam0) //Position: 0x15508 / 87304
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_164(iParam0))
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

var Function_363(int iParam0) //Position: 0x1555F / 87391
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_164(iParam0))
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

bool Function_364(bool bParam0, bool bParam1) //Position: 0x155B5 / 87477
{
	int iVar0;
	
	if (!Function_164(bParam0))
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

bool Function_365(int iParam0) //Position: 0x15614 / 87572
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_366(int iParam0) //Position: 0x15630 / 87600
{
	Function_367(iParam0, 0.0f);
	return;
}

void Function_367(int iParam0, float fParam1) //Position: 0x1563C / 87612
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_81(iParam0, 1);
	Function_47(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_368(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1565D / 87645
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
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam0, vVar0, iParam2, bParam3, iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_369(bool bParam0) //Position: 0x15764 / 87908
{
	Function_370(0, 0x40400000);
	Function_168();
	Function_167();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_370(bool bParam0, float fParam1) //Position: 0x15798 / 87960
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
		{
			TASK_CLEAR(Global_12976.f_36);
		}
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, 1);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_372();
	Function_371();
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

void Function_371() //Position: 0x15896 / 88214
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_372() //Position: 0x158C8 / 88264
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

void Function_373() //Position: 0x159C5 / 88517
{
	Function_447();
	if (iLocal_812 > 7)
	{
		Function_438(Local_987[22], "Zombie02_Warn_Train", "Zombie02_Fail_Train", "Z02_Blip_Train", bLocal_1008);
		Function_197((*&Local_4 + 2164)[0]);
		if (!Function_433(StackVal, StackVal, "$/cutscene/MEXICO_CROSSING_5_CS_SEQ/MEXICO_CROSSING_5_CS_SEQ", &uLocal_925, Function_197((*&Local_4 + 2164)[0]), 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
		{
		}
	}
	switch (iLocal_812)
	{
		case 0x00000000:
			Function_369(0);
			iLocal_1035 = 4294967295;
			Function_432();
			if (!iLocal_913[4])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_431();
				Function_366(&iLocal_969);
				iLocal_812 = 1;
			}
			else
			{
				Function_366(&iLocal_969);
				iLocal_812 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (Function_329())
					{
						Function_197((*&Local_4 + 2164)[0]);
						if (Function_344(StackVal, StackVal, Function_197((*&Local_4 + 2164)[0]), 242.0f))
						{
							Function_366(&iLocal_969);
							iLocal_812 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, iLocal_811) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MEXICO_CROSSING_CS_SEQ/MEXICO_CROSSING_CS_SEQ"))
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				Function_366(&iLocal_969);
				iLocal_812 = 3;
			}
			else
			{
				AUDIO_MUSIC_FORCE_TRACK("FTR_ZMB_SONG_01", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_274();
				Function_366(&iLocal_969);
				iLocal_812 = 4;
			}
			break;
		
		case 0x00000003:
			switch (iLocal_1035)
			{
				case 0xFFFFFFFF:
					if (TRAIN_GET_VELOCITY(iLocal_1033) > 8.0f)
					{
						Function_428();
						CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
						iLocal_1035++;
					}
					break;
				
				case 0x00000000:
					if (Function_425("$/cutscene/MEXICO_CROSSING_CS_SEQ/MEXICO_CROSSING_CS_SEQ", &Local_804, &Local_750, &iLocal_811, 76480, 75823, 75500, 63047, 98792, 98785, 1, 2, 1, 2, 2, 0, 1, 1))
					{
						iLocal_1035++;
						Function_366(&iLocal_969);
						iLocal_812 = 4;
					}
					break;
			}
			break;
		
		case 0x00000004:
			Function_196(iLocal_811);
			Function_418(StackVal, StackVal, Function_196(iLocal_811), iLocal_811, Global_30628[3], Function_199(iLocal_811), 0);
			iLocal_1043 = 0;
			Function_366(&iLocal_969);
			iLocal_812 = 5;
			break;
		
		case 0x00000005:
			if (Function_417() && Function_415(bLocal_1008, 1))
			{
				Function_230(1.0f);
				STREAMING_UNLOAD_BOUNDS();
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				iLocal_812 = 6;
			}
			else if (SQUAD_GET_SIZE(bLocal_1008) < 0)
			{
				Function_276();
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED() && !HUD_IS_FADING())
			{
				Function_414();
				Function_408();
				iLocal_1039 = 0;
				Function_366(&iLocal_984);
				Function_366(&iLocal_969);
				iLocal_812 = 7;
			}
			break;
		
		case 0x00000007:
			if (!iLocal_1073 && Function_237(&iLocal_969) < 2.0f)
			{
				Function_27("Zombie02_Stg02_obj11", 0x40f00000, 1, 2, 0, 0, 0, 0);
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				iLocal_1073 = 1;
			}
			Function_378();
			if (!iLocal_1070)
			{
				if (Function_237(&iLocal_969) <= 4.0f)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					iLocal_1070 = 1;
				}
			}
			if (!iLocal_1053)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) < 5)
				{
					Function_377(bLocal_1008, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_27("Zombie02_Stg02_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_1053 = 1;
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_1620) >= 0)
			{
				Function_184(&bLocal_1008);
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				Function_366(&iLocal_969);
				iLocal_812 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_376(0x40800000))
			{
				Function_375();
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_630.f_296)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_630.f_296));
				}
				ADD_BLIP_FOR_OBJECT(Local_734.f_24, 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(Local_734.f_24), "Z02_Blip_Train_Brakes");
				iLocal_1004 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Z02_Disengage", Local_734.f_24, 0, 4, 0, false, 0, 0, 4294967295, 0);
				Function_366(&iLocal_969);
				iLocal_812 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_376(2.0f))
			{
				Function_27("Zombie02_Stg06_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_366(&iLocal_969);
				iLocal_812 = 11;
			}
			break;
		
		case 0x0000006A:
			Function_374();
			STREAMING_UNLOAD_BOUNDS();
			iLocal_913[5] = 1;
			TASK_CLEAR(Global_34573);
			iLocal_811 = 101;
			iLocal_812 = 0;
			break;
	}
	return;
}

void Function_374() //Position: 0x15F14 / 89876
{
	Function_138(&Local_4 + 884);
	return;
}

void Function_375() //Position: 0x15F22 / 89890
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Z02_BoardTrain", "Z02_BoardTrain", 1, 1, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_376(bool bParam0) //Position: 0x15F65 / 89957
{
	return (((!HUD_IS_FADING() && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !HUD_IS_SHOWING_OBJECTIVE()) && Function_237(&iLocal_969) < bParam0);
}

void Function_377(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x15F83 / 89987
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

void Function_378() //Position: 0x1606D / 90221
{
	bool bVar0;
	bool bVar1;
	
	Function_406();
	Function_402(80.0f);
	Function_390();
	if (!Function_239(&iLocal_972))
	{
		Function_389(&iLocal_972);
	}
	switch (iLocal_1042)
	{
		case 0x00000000:
			if (Function_388(bLocal_1008, Local_4.f_1752))
			{
				if (Function_387((*&Local_4 + 1048)[42], Local_4.f_1092, 1))
				{
					bVar0 = (*&Local_4 + 1048)[42];
					if (Function_386())
					{
						bVar1 = (*&Local_4 + 2164)[10];
					}
					else
					{
						bVar1 = (*&Local_4 + 2164)[11];
					}
					SET_ACTOR_ONE_SHOT_DEATH(bVar0, true);
					TASK_CLEAR(bVar0);
					Function_384(bVar0, bVar1, 0, 2, -1.0f, 1, 0, 0, 1);
				}
				Function_366(&iLocal_972);
				iLocal_1042++;
			}
			break;
		
		case 0x00000001:
			if (Function_237(&iLocal_972) < RAND_FLOAT_RANGE(2.0f, 5.0f))
			{
				if (Function_387((*&Local_4 + 1048)[02], Local_4.f_1092, 1))
				{
					bVar0 = (*&Local_4 + 1048)[02];
					if (Function_386())
					{
						bVar1 = (*&Local_4 + 2164)[12];
					}
					else
					{
						bVar1 = (*&Local_4 + 2164)[13];
					}
					TASK_CLEAR(bVar0);
					Function_384(bVar0, bVar1, 0, 2, -1.0f, 1, 0, 0, 1);
					Function_383();
				}
				Function_366(&iLocal_972);
				iLocal_1042++;
			}
			break;
		
		case 0x00000002:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) > 4 && Function_382(2.0f))
			{
				if (!SQUAD_IS_VALID(Local_4.f_1620))
				{
					Function_381();
					Function_380(Local_4.f_1620, 0, 0, 0);
					iLocal_1042++;
					Function_366(&iLocal_972);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_237(&iLocal_972) < 2.0f && Function_237(&iLocal_972) > 4.0f)
			{
				if (IS_ACTOR_VALID((*&Local_4 + 1584)[02]))
				{
					Function_313((*&Local_4 + 1584)[02], 1, 0);
					Function_265((*&Local_4 + 1584)[02], 1, 1, 1, 1, 0, 1);
					Function_367(&iLocal_972, 4.0f);
				}
			}
			else if (Function_237(&iLocal_972) < 4.5f && Function_237(&iLocal_972) > 6.0f)
			{
				if (IS_ACTOR_VALID((*&Local_4 + 1584)[12]))
				{
					Function_313((*&Local_4 + 1584)[12], 1, 0);
					Function_265((*&Local_4 + 1584)[12], 1, 1, 1, 1, 0, 1);
					TASK_MELEE_ATTACK((*&Local_4 + 1584)[12], Global_34573, -1.0f);
					Function_367(&iLocal_972, 7.0f);
				}
			}
			else if (Function_237(&iLocal_972) < 7.5f && Function_237(&iLocal_972) > 9.0f)
			{
				if (IS_ACTOR_VALID((*&Local_4 + 1584)[22]))
				{
					Function_313((*&Local_4 + 1584)[22], 1, 0);
					Function_265((*&Local_4 + 1584)[22], 1, 1, 1, 1, 0, 1);
					TASK_MELEE_ATTACK((*&Local_4 + 1584)[22], Global_34573, -1.0f);
					Function_367(&iLocal_972, 9.0f);
				}
			}
			else if (Function_237(&iLocal_972) < 9.5f)
			{
				if (IS_ACTOR_VALID((*&Local_4 + 1584)[32]))
				{
					Function_313((*&Local_4 + 1584)[32], 1, 0);
					Function_265((*&Local_4 + 1584)[32], 1, 1, 1, 1, 0, 1);
					TASK_MELEE_ATTACK((*&Local_4 + 1584)[32], Global_34573, -1.0f);
					Function_377(Local_4.f_1620, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					iLocal_1042++;
				}
			}
			break;
		
		case 0x00000004:
			Function_197((*&Local_4 + 2164)[9]);
			Function_379(StackVal, StackVal, (*&Local_4 + 1048)[42], Function_197((*&Local_4 + 2164)[9]), Local_4.f_2456, 1);
			Function_197((*&Local_4 + 2164)[8]);
			Function_379(StackVal, StackVal, (*&Local_4 + 1048)[02], Function_197((*&Local_4 + 2164)[8]), Local_4.f_2452, 0);
			iLocal_1043++;
			iLocal_1042++;
			Function_366(&iLocal_972);
			break;
		
		default:
			iLocal_1042++;
			break;
	}
	return;
}

void Function_379(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x163B4 / 91060
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam0 != (*&Local_4 + 1048)[02])
		{
			SAY_SINGLE_LINE_CONTEXT(bParam0, 28, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		AI_IGNORE_ACTOR(bParam0);
		SET_ACTOR_ONE_SHOT_DEATH(bParam0, bParam5);
		SQUAD_LEAVE(bParam0);
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam4, 4, 1, 0, 1, 0);
		TASK_GO_TO_COORD_NONSTOP(false, &uParam1, 4, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(bParam0);
		TASK_SEQUENCE_PERFORM(bParam0, bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
		TASK_PRIORITY_SET(bParam0, 1);
	}
}

void Function_380(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1642B / 91179
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_265(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, iParam2, iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_381() //Position: 0x16461 / 91233
{
	Local_4.f_1620 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S06_ZWv02_Barricade"));
	(*&Local_4 + 1584)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nBZ_W2_T01", 1222, -3706.322f, 24.16634f, 4024.736f, 0.0f, 245.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1584)[02], Local_4.f_1620);
	TASK_STAND_STILL((*&Local_4 + 1584)[02], -1.0f, 0, 0);
	Function_312((*&Local_4 + 1584)[02], 1, 0);
	(*&Local_4 + 1584)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nBZ_W2_B02", 1215, -3708.476f, 23.83561f, 4027.285f, 0.0f, 267.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1584)[12], Local_4.f_1620);
	TASK_STAND_STILL((*&Local_4 + 1584)[12], -1.0f, 0, 0);
	Function_312((*&Local_4 + 1584)[12], 1, 0);
	(*&Local_4 + 1584)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nBZ_W2_B05", 1218, -3706.06f, 23.6364f, 4020.113f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1584)[22], Local_4.f_1620);
	TASK_STAND_STILL((*&Local_4 + 1584)[22], -1.0f, 0, 0);
	Function_312((*&Local_4 + 1584)[22], 1, 0);
	(*&Local_4 + 1584)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nBZ_W2_B06", 1219, -3708.298f, 24.09716f, 4023.791f, 0.0f, 241.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1584)[32], Local_4.f_1620);
	TASK_STAND_STILL((*&Local_4 + 1584)[32], -1.0f, 0, 0);
	Function_312((*&Local_4 + 1584)[32], 1, 0);
	return;
}

bool Function_382(bool bParam0) //Position: 0x165FE / 91646
{
	return ((!HUD_IS_FADING() && !IS_SCRIPTED_CONVERSATION_ONGOING()) && Function_237(&iLocal_984) < bParam0);
}

void Function_383() //Position: 0x16617 / 91671
{
	SQUAD_GOALS_CLEAR(bLocal_1008);
	if (IS_ACTOR_ALIVE((*&Local_4 + 1048)[42]))
	{
		if (Function_387((*&Local_4 + 1048)[42], Local_4.f_1092, 1))
		{
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 0, 1, 3);
			TASK_MELEE_ATTACK(false, (*&Local_4 + 1048)[42], -1.0f);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_4 + 1048)[02]))
	{
		if (Function_387((*&Local_4 + 1048)[02], Local_4.f_1092, 1))
		{
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 1, 0, 3);
			TASK_GO_NEAR_ACTOR(false, (*&Local_4 + 1048)[02], 10.0f, 2);
		}
	}
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 2, 0, 2);
	TASK_GO_NEAR_ACTOR(false, Global_34573, 10.0f, 1);
	return;
}

void Function_384(bool bParam0, bool bParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8) //Position: 0x166B1 / 91825
{
	struct<6> Var0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	if (GET_OBJECT_TYPE(bParam1) != 8)
	{
		return;
	}
	GET_OBJECT_POSITION(bParam1, &Var0);
	(&Var0 + 12)->f_4 = GET_OBJECT_HEADING(bParam1);
	Function_385(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, Var0, iParam2, iParam3, fParam4, iParam5, iParam6, iParam7, iParam8);
}

void Function_385(bool bParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13) //Position: 0x16708 / 91912
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	bVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, &vParam1, 2.5f, 90.0f, 7);
	bVar1 = TASK_SEQUENCE_OPEN();
	if (IS_COVER_LOCATION_VALID(bVar0))
	{
		if (iParam8 != 2)
		{
			Function_336(bParam0);
			if (VDIST(Function_336(bParam0), vParam1) < 5.0f)
			{
				if (bParam13)
				{
					TASK_GO_NEAR_COORD(false, &vParam1, 2.0f, iParam8);
				}
				else
				{
					TASK_GO_TO_COORD_NONSTOP(false, &vParam1, iParam8, 3212836864);
				}
			}
		}
		if (bParam10)
		{
			if (bParam11)
			{
				TASK_SHOOT_FROM_COVER(false, Global_34573, bVar0, bParam9, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar0, bParam9, 1086324736);
			}
		}
		else
		{
			TASK_HIDE_AT_COVER(false, bVar0, bParam9, 6.0f, iParam12);
		}
	}
	else if (bParam10)
	{
		TASK_GO_NEAR_COORD(false, &vParam1, 5.0f, iParam8);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &vParam1, bParam9);
	}
	else
	{
		TASK_GO_TO_COORD(false, &vParam1, iParam8);
		UNK_0x44986367(StackVal, &vVar2);
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar2, vParam1, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal) };
		TASK_FACE_COORD(false, &vParam1, 0);
		TASK_CROUCH(false, bParam9);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bParam0);
	TASK_PRIORITY_SET(bParam0, iParam7);
	TASK_SEQUENCE_PERFORM(bParam0, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
}

bool Function_386() //Position: 0x16820 / 92192
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_387(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16833 / 92211
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

bool Function_388(bool bParam0, bool bParam1) //Position: 0x16873 / 92275
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

void Function_389(int iParam0) //Position: 0x168F5 / 92405
{
	if (!Function_239(iParam0))
	{
		Function_367(iParam0, 0.0f);
	}
	return;
}

void Function_390() //Position: 0x1690A / 92426
{
	switch (iLocal_1043)
	{
		case 0x00000000:
			if (Function_401(bLocal_1008, Global_34573) || IS_ACTOR_SHOOTING(Global_34573))
			{
				Function_366(&iLocal_981);
			}
			if (Function_382(0x41000000))
			{
				if (Function_400(Global_34573, (*&Local_4 + 1048)[02]) <= 35.0f)
				{
					Function_399();
					Function_366(&iLocal_984);
				}
				else if (GET_LAST_ATTACKER(Global_34573) == (*&Local_4 + 1048)[02])
				{
					Function_398();
					CLEAR_LAST_ATTACK(Global_34573);
					CLEAR_LAST_HIT(Global_34573);
					Function_366(&iLocal_984);
				}
				else if (Function_397(bLocal_1008, Global_34573) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) > 4)
				{
					Function_396();
					Function_366(&iLocal_981);
					Function_366(&iLocal_984);
				}
				else if (Function_237(&iLocal_981) < 16.0f)
				{
					Function_395();
					Function_366(&iLocal_981);
					Function_366(&iLocal_984);
				}
				else if (Function_237(&iLocal_984) < (8.0f + 6.0f))
				{
					if (Function_386())
					{
						Function_394();
					}
					else
					{
						Function_393();
					}
					Function_366(&iLocal_984);
				}
			}
			break;
		
		case 0x00000001:
			if (Function_382(2.0f))
			{
				Function_392();
				Function_366(&iLocal_969);
				Function_366(&iLocal_984);
				iLocal_1043++;
			}
			break;
		
		case 0x00000002:
			if (Function_382(2.0f))
			{
				Function_391();
				Function_366(&iLocal_984);
				iLocal_1043++;
			}
			break;
		
		case 0x00000003:
			if (Function_382(4.0f))
			{
				SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_RED_MIST_DESCENDS", true, false, 2, 0, true, false);
				Function_366(&iLocal_984);
				iLocal_1043++;
			}
			break;
	}
	return;
}

void Function_391() //Position: 0x16A8C / 92812
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Z02_CaptFlees", "Z02_CaptFlees", 1, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_392() //Position: 0x16ACD / 92877
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_DecidesFlee", "Z02_DecidesFlee", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_393() //Position: 0x16B12 / 92946
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_TauntsZomby", "Z02_TauntsZomby", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_394() //Position: 0x16B57 / 93015
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_ShoutsEnco", "Z02_ShoutsEnco", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_395() //Position: 0x16B9A / 93082
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_JonNoHelp", "Z02_JonNoHelp", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_396() //Position: 0x16BDB / 93147
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_CleanUpStrags", "Z02_CleanUpStrags", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_397(bool bParam0, bool bParam1) //Position: 0x16C24 / 93220
{
	bool bVar0;
	bool bVar1;
	int iVar2;
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
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					if (!IS_ACTOR_ALIVE(bVar3))
					{
						bVar0 = true;
					}
				}
			}
		}
		bVar1++;
	}
	return bVar0;
}

void Function_398() //Position: 0x16C96 / 93334
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_ShootsJonAcc", "Z02_ShootsJonAcc", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_399() //Position: 0x16CDD / 93405
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_JonRunsAway", "Z02_JonRunsAway", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

float Function_400(bool bParam0, bool bParam1) //Position: 0x16D22 / 93474
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

int Function_401(bool bParam0, bool bParam1) //Position: 0x16E13 / 93715
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_402(float fParam0) //Position: 0x16E7C / 93820
{
	if (IS_ACTOR_VALID((*&Local_4 + 1048)[32]))
	{
		Function_197((*&Local_4 + 2164)[1]);
		if (StackVal && Function_403(StackVal, !Function_405((*&Local_4 + 1048)[32], 0x3f800000, 0x42960000, 1, 1, 0), (*&Local_4 + 1048)[32], Function_197((*&Local_4 + 2164)[1])) < fParam0)
		{
			DESTROY_ACTOR((*&Local_4 + 1048)[32]);
		}
	}
	if (IS_ACTOR_VALID((*&Local_4 + 1048)[22]))
	{
		Function_197((*&Local_4 + 2164)[1]);
		if (StackVal && Function_403(StackVal, !Function_405((*&Local_4 + 1048)[22], 0x3f800000, 0x42960000, 1, 1, 0), (*&Local_4 + 1048)[22], Function_197((*&Local_4 + 2164)[1])) < fParam0)
		{
			DESTROY_ACTOR((*&Local_4 + 1048)[22]);
		}
	}
	if (IS_ACTOR_VALID((*&Local_4 + 1048)[02]))
	{
		Function_197((*&Local_4 + 2164)[1]);
		if (StackVal && Function_403(StackVal, !Function_405((*&Local_4 + 1048)[02], 0x3f800000, 0x42960000, 1, 1, 0), (*&Local_4 + 1048)[02], Function_197((*&Local_4 + 2164)[1])) < fParam0)
		{
			DESTROY_ACTOR((*&Local_4 + 1048)[02]);
		}
	}
	if (IS_ACTOR_VALID((*&Local_4 + 1048)[42]))
	{
		Function_197((*&Local_4 + 2164)[1]);
		if (StackVal && Function_403(StackVal, !Function_405((*&Local_4 + 1048)[42], 0x3f800000, 0x42960000, 1, 1, 0), (*&Local_4 + 1048)[42], Function_197((*&Local_4 + 2164)[1])) < fParam0)
		{
			DESTROY_ACTOR((*&Local_4 + 1048)[42]);
		}
	}
	return;
}

float Function_403(bool bParam0, vector3 vParam1) //Position: 0x16FBE / 94142
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_404(bParam0);
		vVar0 = { StackVal, StackVal, Function_404(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_404(bool bParam0) //Position: 0x17038 / 94264
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

bool Function_405(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x170A2 / 94370
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_406() //Position: 0x170BC / 94396
{
	float fVar0;
	bool bVar1;
	
	if (!IS_SCRIPT_USE_CONTEXT_VALID(iLocal_1004))
	{
		if (GET_WEAPON_IN_HAND(Global_34573) < 4294967295 && GET_WEAPON_IN_HAND(Global_34573) > 21)
		{
			fVar0 = _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(Global_34573)), 1);
			bVar1 = (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(Global_34573))) * 0.1f);
		}
		if (Function_382(0x41000000))
		{
			if (Function_239(&iLocal_978))
			{
				if (fVar0 > (bVar1 - fVar0))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_630.f_296)))
					{
						SET_BLIP_BLINK(ADD_BLIP_FOR_OBJECT(Local_630.f_296, 335, 0f, 2, 0), 1, 0, 5f);
						SET_BLIP_NAME(GET_BLIP_ON_OBJECT(Local_630.f_296), "Z02_Blip_Ammo");
						if (iLocal_1044 <= 2)
						{
							iLocal_1061 = 1;
						}
					}
				}
				else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_630.f_296)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_630.f_296));
				}
			}
			else
			{
				Function_389(&iLocal_978);
			}
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_630.f_296)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_630.f_296));
	}
	if ((Function_407(Global_34573, Local_630.f_296, 1.25f) && GET_WEAPON_IN_HAND(Global_34573) < 4294967295) && GET_WEAPON_IN_HAND(Global_34573) > 21)
	{
		fVar0 = _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(Global_34573)), 1);
		bVar1 = (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(Global_34573))) * 0.1f);
		if (fVar0 <= 0.0f)
		{
			if (iLocal_1080)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(Global_34573)), bVar1, 0, 1);
				Function_359("Zombie02_Help_Ammo", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_1061 = 0;
				iLocal_1062 = 1;
				iLocal_1080 = 0;
			}
			else if (fVar0 > (bVar1 - fVar0))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(Global_34573)), (bVar1 - fVar0), 0, 1);
				if (iLocal_1045 <= 2)
				{
					iLocal_1061 = 0;
					iLocal_1062 = 1;
				}
			}
		}
	}
	return;
}

bool Function_407(bool bParam0, bool bParam1, float fParam2) //Position: 0x1728F / 94863
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_404(bParam0);
			Function_273(bParam1);
			if (VDIST(Function_404(bParam0), Function_273(bParam1)) >= fParam2)
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

void Function_408() //Position: 0x173A9 / 95145
{
	Function_413(Local_4.f_1092, 1);
	Function_284(Local_4.f_1092, 1);
	Function_412(Local_4.f_1092, 0, 3212836864);
	Function_410(Local_4.f_1092, 75.0f, 0x40400000, 0x40000000);
	Function_279(Local_4.f_1092, 0.1f);
	Function_306(Local_4.f_1092, bLocal_1008, 4);
	Function_306(bLocal_1008, Local_4.f_1092, 4);
	Function_307(Local_4.f_1092, 0);
	Function_409(Local_4.f_1092);
	iLocal_815 = 1;
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[32]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1048)[22]);
	Function_197((*&Local_4 + 2164)[8]);
	Function_379(StackVal, StackVal, (*&Local_4 + 1048)[32], Function_197((*&Local_4 + 2164)[8]), Local_4.f_2452, 1);
	Function_197((*&Local_4 + 2164)[9]);
	Function_379(StackVal, StackVal, (*&Local_4 + 1048)[22], Function_197((*&Local_4 + 2164)[9]), Local_4.f_2456, 1);
	return;
}

void Function_409(bool bParam0) //Position: 0x17470 / 95344
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

void Function_410(bool bParam0, float fParam1, int iParam2, int iParam3) //Position: 0x174B7 / 95415
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
			Function_411(bVar1, fParam1, iParam2, iParam3);
		}
		bVar0++;
	}
}

void Function_411(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x174FD / 95485
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_412(bool bParam0, int iParam1, bool bParam2) //Position: 0x17544 / 95556
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
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
			GET_POSITION(bVar1, &uVar2);
			bVar5 = GET_HEADING(bVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(bVar1, &uVar2, bVar5, fParam2);
			TASK_PRIORITY_SET(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_413(bool bParam0, int iParam1) //Position: 0x1759D / 95645
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_414() //Position: 0x175DE / 95710
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_FinalWave", "Z02_FinalWave", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_415(bool bParam0, int iParam1) //Position: 0x1761F / 95775
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
				if (!Function_416(bVar1, iParam1, 0x41700000))
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

bool Function_416(bool bParam0, bool bParam1, float fParam2) //Position: 0x1767E / 95870
{
	float fVar0;
	bool bVar1;
	
	if (Function_45() || !bParam1)
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

bool Function_417() //Position: 0x1771B / 96027
{
	if ((IS_ACTOR_FULLY_FADED_EXT(GET_ACTOR_FROM_OBJECT(Local_987[22]), true) && Function_415(Local_4.f_1092, 1)) && STREAMING_IS_WORLD_LOADED())
	{
		return 1;
	}
	return 0;
}

void Function_418(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x17742 / 96066
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
	if (iParam3 != Global_34165.f_48 && !Function_342())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_424(0);
	Function_423();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	if (Function_98())
	{
		Function_421(iParam3);
	}
	Function_420(uParam4, iVar0, iVar1);
	Function_419();
}

void Function_419() //Position: 0x177EA / 96234
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

void Function_420(int iParam0, bool bParam1, bool bParam2) //Position: 0x1782B / 96299
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
	if (Function_89(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_421(bool bParam0) //Position: 0x17991 / 96657
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_422() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_29(0));
	PLAYSTAT_INT("HC_FAME", Function_29(3));
	PLAYSTAT_INT("HC_HONOR", Function_29(1));
	return;
}

struct<16> Function_422() //Position: 0x17B1F / 97055
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_3422)
	{
		if (IS_SCRIPT_VALID(Global_3422[iVar040].f_108))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[iVar040] + 12) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_423() //Position: 0x17B64 / 97124
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_424(bool bParam0) //Position: 0x17B88 / 97160
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

bool Function_425(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17) //Position: 0x17BB7 / 97207
{
	if (!bParam15)
	{
		Function_243(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_242(iParam2) || iParam2->f_24 < 1))
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
				Call_Loc(uParam4);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_366(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_241())
					{
						if ((!HUD_IS_FADED() && !HUD_IS_FADING()) && !bParam17)
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_240(1);
						if (bParam17)
						{
							CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
						}
						else
						{
							CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
						}
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_366(iParam1 + 4);
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
					Function_240(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_237(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_237(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(uParam5);
					if (StackVal)
					{
						Function_235(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0.1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_240(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_366(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(uParam6);
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
						Function_230(1.0f);
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
				Call_Loc(uParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (bParam16)
					{
						Function_233();
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
				Call_Loc(uParam8);
				if (StackVal)
				{
					Function_232(1);
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
				Call_Loc(uParam9);
				if (StackVal)
				{
					Call_Loc(uParam7);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_242(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

int Function_426() //Position: 0x181E1 / 98785
{
	return 1;
}

int Function_427() //Position: 0x181E8 / 98792
{
	Function_255(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_428() //Position: 0x181FC / 98812
{
	CLEAR_CHARACTER_BLOOD();
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_430(Local_4.f_1092, 0);
	Function_429(Local_4.f_1092);
	Function_278(Local_4.f_1092);
	Function_429(bLocal_1008);
	return;
}

void Function_429(bool bParam0) //Position: 0x18227 / 98855
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
				TASK_OVERRIDE_CLEAR_MOVETYPE(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_430(bool bParam0, int iParam1) //Position: 0x1826D / 98925
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			STOP_PED_SPEAKING(bVar1, iParam1);
			bVar0++;
		}
	}
	return;
}

void Function_431() //Position: 0x182A1 / 98977
{
	iLocal_1035 = 0;
	SET_PLAYER_CONTROL(false, 0, 0, 0);
	if (!IS_ACTOR_VALID(bLocal_1006))
	{
		bLocal_1006 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	Function_368(Global_34573, (*&Local_4 + 2164)[1], 0, 1, 1);
	Function_368(bLocal_1006, (*&Local_4 + 2072)[1], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1006, -1.0f, 0, 0);
	return;
}

void Function_432() //Position: 0x182F5 / 99061
{
	if (IS_OBJECTSET_VALID(Local_4.f_2500))
	{
		Function_340(Local_4.f_2500);
		DESTROY_OBJECTSET(Local_4.f_2500);
	}
	return;
}

bool Function_433(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x18316 / 99094
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_436(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_437()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
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
				if (!Function_78(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
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
					Function_434();
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
	else if ((!Function_436(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_437()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_436(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_434() //Position: 0x1855C / 99676
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_435(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_435(char* cParam0, vector3 vParam1) //Position: 0x185B0 / 99760
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

bool Function_436(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x186D8 / 100056
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_404(bParam0);
		if (VDIST(Function_404(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_437() //Position: 0x18762 / 100194
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_438(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x18771 / 100209
{
	if (Function_440(&iLocal_975, 100.0f, 200.0f, uParam0, uParam1, uParam2, &bLocal_922, 1, Local_4, bLocal_749, 330, 1, uParam3))
	{
		if (!iLocal_1075)
		{
			if (iLocal_1053)
			{
				Function_439(bParam4, 0);
				iLocal_1075 = 1;
			}
		}
	}
	else if (iLocal_1075)
	{
		Function_439(bParam4, 1);
		iLocal_1075 = 0;
	}
}

void Function_439(bool bParam0, bool bParam1) //Position: 0x187CB / 100299
{
	if (SQUAD_IS_VALID(bParam0))
	{
		bLocal_1049 = false;
		while (bLocal_1049 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049))))
			{
				SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049)), bParam1);
			}
			bLocal_1049++;
		}
	}
	return;
}

bool Function_440(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, char* cParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12) //Position: 0x18814 / 100372
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_407(Global_34573, bParam3, fParam2))
	{
		Function_191(cParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_407(Global_34573, bParam3, fParam1))
	{
		if (!Function_446(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_27(bParam4, 7.5f, 0, 2, bParam7, 0, 0, 0);
				Function_445(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_444(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_444(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				if (IS_STRING_VALID(bParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bParam3), bParam12);
				}
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_446(1))
	{
		Function_443(1);
		if (!Function_442())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_441();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_444(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_444(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_441() //Position: 0x18995 / 100757
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_LAST_NOTE_OBJECTIVE();
	bVar1 = UI_GET_STRING_BY_HASH(iVar0);
	if (STRING_LENGTH(bVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(bVar1, 7.5f, 1, 2, false, 0, 0, 0);
	}
	return;
}

bool Function_442() //Position: 0x189C0 / 100800
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

void Function_443(bool bParam0) //Position: 0x18A04 / 100868
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_47(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_444(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x18A67 / 100967
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

void Function_445(bool bParam0) //Position: 0x18B08 / 101128
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_81(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_446(bool bParam0) //Position: 0x18B6B / 101227
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_447() //Position: 0x18BB2 / 101298
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1004))
	{
		if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1004))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_734.f_24)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_734.f_24));
				Function_448();
				Function_366(&iLocal_969);
				iLocal_812 = 106;
			}
		}
	}
	return;
}

void Function_448() //Position: 0x18BF1 / 101361
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_449() //Position: 0x18BFD / 101373
{
	if (iLocal_812 >= 6)
	{
		Function_438(Local_987[22], "Zombie02_Warn_Train", "Zombie02_Fail_Train", "Z02_Blip_Train", bLocal_1008);
		Function_197((*&Local_4 + 2164)[0]);
		if (!Function_433(StackVal, StackVal, "$/cutscene/MEXICO_CROSSING_CS_SEQ/MEXICO_CROSSING_CS_SEQ", &uLocal_925, Function_197((*&Local_4 + 2164)[0]), 0, 150.0f, 250.0f, 2, 1, 2, 2, 0, 1))
		{
		}
	}
	Function_492();
	switch (iLocal_812)
	{
		case 0x00000000:
			Function_369(0);
			if (!iLocal_913[3])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_489();
				Function_488();
				Function_366(&iLocal_969);
				iLocal_812 = 1;
			}
			else
			{
				Function_366(&iLocal_969);
				iLocal_812 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (Function_487())
					{
						Function_197((*&Local_4 + 1964)[2]);
						if (Function_344(StackVal, StackVal, Function_197((*&Local_4 + 1964)[2]), 175.438f))
						{
							Function_366(&iLocal_969);
							iLocal_812 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, iLocal_811) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/mexico_crossing_3_cs/mexico_crossing_3_cs"))
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				Function_366(&iLocal_969);
				iLocal_812 = 3;
			}
			else
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				Function_299();
				Function_366(&iLocal_969);
				iLocal_812 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_231("$/cutscene/mexico_crossing_3_cs/mexico_crossing_3_cs", &Local_804, &Local_750, &iLocal_811, 76480, 75823, 75500, 63047, 61945, 42093, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_366(&iLocal_969);
				iLocal_812 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_417())
			{
				REMOVE_OBJECT_ATTACHMENT(iLocal_996);
				REMOVE_OBJECT_ATTACHMENT(iLocal_997);
				REMOVE_OBJECT_ATTACHMENT(iLocal_998);
				REMOVE_OBJECT_ATTACHMENT(iLocal_999);
				Function_196(iLocal_811);
				Function_418(StackVal, StackVal, Function_196(iLocal_811), iLocal_811, Global_30628[1], Function_199(iLocal_811), 0);
				Function_301();
				STREAMING_UNLOAD_BOUNDS();
				Function_329();
				Function_230(1.0f);
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				REMOVE_OBJECT_ATTACHMENT(iLocal_1000);
				SQUAD_GOALS_CLEAR(bLocal_1008);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 0, 0, 4294967295);
				TASK_FOLLOW_ACTOR(false, Global_34573);
				iLocal_1043 = 0;
				iLocal_812 = 6;
			}
			break;
		
		case 0x00000006:
			Function_480();
			Function_406();
			Function_470();
			Function_468(bLocal_1008);
			Function_466();
			if (iLocal_1043 > 3)
			{
				Function_462();
				ADD_COMPANION_PERMANENT();
				Function_366(&iLocal_969);
				iLocal_812 = 7;
			}
			break;
		
		case 0x00000007:
			Function_406();
			Function_470();
			Function_468(bLocal_1008);
			Function_466();
			Function_452();
			if (IS_VOLUME_VALID(Local_4.f_1776))
			{
				if (IS_OBJECT_IN_VOLUME(Local_987[02], Local_4.f_1776))
				{
					DESTROY_VOLUME(Local_4.f_1776);
					DYNAMICMIXER_DETRIGGERSTATE(uLocal_995, 0);
					Function_451();
					iLocal_1050 = 5;
					Function_366(&iLocal_969);
					iLocal_812 = 8;
				}
			}
			break;
		
		case 0x00000008:
			Function_450();
			if (Function_376(5.0f))
			{
				Function_366(&iLocal_969);
				iLocal_812 = 106;
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_987[22])))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_987[22]));
			}
			iLocal_913[4] = 1;
			iLocal_1053 = 0;
			iLocal_1075 = 0;
			iLocal_1070 = 0;
			Function_142();
			iLocal_811 = 5;
			iLocal_812 = 0;
			break;
	}
	return;
}

void Function_450() //Position: 0x18FB5 / 102325
{
	vector3 vVar0;
	
	vVar0 = { -3698.474f, 24.06728f, 4028.62f };
	switch (iLocal_1050)
	{
		case 0x00000005:
			TASK_CLEAR((*&Local_4 + 1048)[02]);
			TASK_FACE_COORD((*&Local_4 + 1048)[02], &vVar0, 1);
			DELETE_WEAPON_FROM_ACTOR((*&Local_4 + 1048)[02], 23);
			Function_366(&iLocal_972);
			iLocal_1050++;
			break;
		
		case 0x00000006:
			if (Function_237(&iLocal_972) <= RAND_FLOAT_RANGE(2.0f, 3.0f))
			{
				TASK_CLEAR((*&Local_4 + 1048)[32]);
				TASK_FACE_COORD((*&Local_4 + 1048)[32], &vVar0, 1);
				TASK_CLEAR((*&Local_4 + 1048)[42]);
				TASK_FACE_COORD((*&Local_4 + 1048)[42], &vVar0, 1);
				Function_366(&iLocal_972);
				iLocal_1050++;
			}
			break;
		
		case 0x00000007:
			if (Function_237(&iLocal_972) <= RAND_FLOAT_RANGE(1.0f, 2.0f))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW((*&Local_4 + 1048)[22], (*&Local_4 + 1048)[02], 6.0f, 0);
				TASK_CLEAR((*&Local_4 + 1048)[22]);
				TASK_GO_NEAR_ACTOR((*&Local_4 + 1048)[22], (*&Local_4 + 1048)[02], 9.0f, 2);
				Function_366(&iLocal_972);
				iLocal_1050++;
			}
			break;
	}
	return;
}

void Function_451() //Position: 0x190CA / 102602
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_SeesRodBlok", "Z02_SeesRodBlok", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_452() //Position: 0x1910F / 102671
{
	switch (iLocal_1050)
	{
		case 0x00000000:
			if (IS_VOLUME_VALID(Local_4.f_1716))
			{
				if (IS_OBJECT_IN_VOLUME(Local_987[02], Local_4.f_1716) || IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1716))
				{
					bLocal_1049 = false;
					if (!SQUAD_IS_VALID(bLocal_1009))
					{
						bLocal_1009 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "climaxZ_Squad"));
					}
					Function_460(bLocal_1009, Local_4.f_2224, 0, 8, &iLocal_926, &iLocal_932, 1);
					Function_455(bLocal_1009);
					GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1048)[02], 23, 0, 1, 1);
					ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 1048)[02], 23, 1);
					Function_454(bLocal_1008, 2);
					Function_366(&iLocal_969);
					iLocal_1050++;
					DESTROY_VOLUME(Local_4.f_1716);
				}
			}
			break;
		
		case 0x00000001:
			if (Function_237(&iLocal_969) < 7.5f)
			{
				Function_460(bLocal_1009, Local_4.f_2228, 0, 8, &iLocal_926, &iLocal_932, 1);
				Function_455(bLocal_1009);
				iLocal_1050++;
				Function_366(&iLocal_969);
			}
			break;
		
		case 0x00000002:
			if (Function_237(&iLocal_969) < 5.0f)
			{
				Function_460(bLocal_1009, Local_4.f_2232, 0, 6, &iLocal_926, &iLocal_932, 1);
				Function_455(bLocal_1009);
				iLocal_1050++;
				Function_366(&iLocal_969);
			}
			break;
		
		case 0x00000003:
			Function_453();
			break;
	}
	return;
}

void Function_453() //Position: 0x19257 / 102999
{
	if (IS_VOLUME_VALID(Local_4.f_1780))
	{
		if (IS_OBJECT_IN_VOLUME(Local_987[02], Local_4.f_1780))
		{
			DESTROY_VOLUME(Local_4.f_1780);
			AUDIO_MUSIC_SUSPEND(8000);
			Function_454(bLocal_1008, 1);
		}
	}
	return;
}

void Function_454(bool bParam0, int iParam1) //Position: 0x1928E / 103054
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
				TASK_OVERRIDE_SET_MOVETYPE(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_455(bool bParam0) //Position: 0x192D6 / 103126
{
	vector3 vVar0;
	
	bLocal_1049 = false;
	while (bLocal_1049 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049)))
		{
			Function_336(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049));
			vVar0 = { StackVal, StackVal, Function_336(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049)) };
			TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049));
			switch (RAND_INT_RANGE(true, 4))
			{
				case 0x00000001:
					TASK_SHOOT_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049), Global_34573, &vVar0);
					break;
				
				case 0x00000002:
					TASK_SHOOT_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049), (*&Local_4 + 1048)[02], &vVar0);
					break;
				
				case 0x00000003:
					TASK_SHOOT_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049), (*&Local_4 + 1048)[32], &vVar0);
					break;
				
				case 0x00000004:
					TASK_SHOOT_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049), (*&Local_4 + 1048)[22], &vVar0);
					break;
			}
			SET_ACTOR_VISION_XRAY(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049), 1);
			TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049), 1);
			AI_SET_FIRE_DELAY(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049), 0.0f);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_1049), 0.0f, 0.0f);
		}
		bLocal_1049++;
	}
	Function_410(bParam0, 200.0f, 0x40400000, 0x40000000);
	Function_306(Local_4.f_1092, bParam0, 4);
	Function_306(bParam0, Local_4.f_1092, 4);
	Function_459(bParam0, Local_4.f_1092, 1);
	Function_413(bParam0, 1);
	Function_457(Local_4.f_1092, bParam0, 0);
	Function_457(bParam0, Local_4.f_1092, 0);
	Function_456(Local_4.f_1092, 100.0f);
	return;
}

void Function_456(bool bParam0, float fParam1) //Position: 0x1942B / 103467
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(bVar2, fParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar2, fParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bVar2, 0.1f);
		AI_SET_WEAPON_MAX_RANGE(bVar2, fParam1);
		bVar1++;
	}
	return;
}

void Function_457(bool bParam0, bool bParam1, int iParam2) //Position: 0x19484 / 103556
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(bParam1) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar3);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_458(&bVar0, bVar1, iParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_458(var uParam0, bool bParam1, bool bParam2) //Position: 0x194FF / 103679
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_404(bParam1);
			vVar0 = { StackVal, StackVal, Function_404(bParam1) };
			if (bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(*uParam0, bParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(*uParam0, bParam1, &vVar0);
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

void Function_459(bool bParam0, bool bParam1, int iParam2) //Position: 0x19607 / 103943
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(bVar2, bVar3, iParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_460(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1968C / 104076
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam2 - 1))
	{
		bVar2 = Function_461((*iParam4)[RAND_INT_RANGE(false, (*iParam4 - 1))], bParam1, &iVar1);
		ACTOR_SET_GRABBED_BY_CUTSCENE(bVar2, 0);
		Function_257(bVar2, 0, 1);
		SQUAD_JOIN(bVar2, bParam0);
		if (iParam6 != 4294967295)
		{
			if (Function_386())
			{
				Function_312(bVar2, 0, 1);
			}
			else
			{
				Function_312(bVar2, 1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iParam3 - 1))
	{
		bVar2 = Function_461((*iParam5)[RAND_INT_RANGE(false, (*iParam5 - 1))], bParam1, &iVar1);
		ACTOR_SET_GRABBED_BY_CUTSCENE(bVar2, 0);
		Function_257(bVar2, 0, 1);
		SQUAD_JOIN(bVar2, bParam0);
		if (iParam6 != 4294967295)
		{
			if (Function_386())
			{
				Function_312(bVar2, 0, 1);
			}
			else
			{
				Function_312(bVar2, 1, 1);
			}
		}
		iVar0++;
	}
}

bool Function_461(bool bParam0, bool bParam1, int iParam2) //Position: 0x19752 / 104274
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = *iParam2;
	while (iVar1 <= GET_OBJECTSET_SIZE(bParam1))
	{
		bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		*iParam2++;
		if (*iParam2 == GET_OBJECTSET_SIZE(bParam1))
		{
			*iParam2 = 0;
		}
		GET_OBJECT_POSITION(bVar5, &vVar2);
		bVar6 = GET_OBJECT_HEADING(bVar5);
		return CREATE_ACTOR_IN_LAYOUT(Local_4, Function_59(), bParam0, vVar2, 0.0f, bVar6, 0.0f);
		bVar0++;
		iVar1++;
		if (bVar0 == GET_OBJECTSET_SIZE(bParam1))
		{
			bVar0 = false;
		}
	}
	return "";
}

void Function_462() //Position: 0x197CD / 104397
{
	vector3 vVar0;
	
	if (!iLocal_1072)
	{
		Function_465(Local_4.f_1092);
		Function_284(Local_4.f_1092, 1);
		Function_413(Local_4.f_1092, 1);
		Function_306(Local_4.f_1092, bLocal_1008, 4);
		Function_306(bLocal_1008, Local_4.f_1092, 4);
		Function_285(Local_4.f_1092, Global_34573, 0);
		Function_456(Local_4.f_1092, 200.0f);
		Function_464(Local_4.f_1092, 359.0f);
		Function_286(Local_4.f_1092, 0);
		Function_459(Local_4.f_1092, bLocal_1008, 1);
		Function_457(Local_4.f_1092, bLocal_1008, 0);
		Function_278(Local_4.f_1092);
		Function_300(Local_4.f_1092, 0, 3212836864, 0, 1);
		Function_454(Local_4.f_1092, 5);
		iLocal_1072 = 1;
		Function_463(Local_4.f_1092, 0);
		Function_197((*&Local_630 + 172)[5]);
		vVar0 = { StackVal, StackVal, Function_197((*&Local_630 + 172)[5]) };
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[22]);
		SET_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[22], Local_630.f_68, 2, 0);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[42]);
		SET_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[42], Local_705.f_24, 2, 0);
		AI_SET_NAV_PATHFINDING_ENABLED((*&Local_4 + 1048)[42], 0);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[42], 1);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[32]);
		SET_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[32], Local_705.f_32, 2, 0);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[32], 1);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[02]);
		SET_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[02], Local_705.f_36, 2, 0);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[02], 1);
		Function_430(Local_4.f_1092, 1);
	}
	return;
}

void Function_463(bool bParam0, int iParam1) //Position: 0x1993D / 104765
{
	bool bVar0;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		SET_MOVER_FROZEN(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_464(bool bParam0, float fParam1) //Position: 0x19974 / 104820
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
			SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, fParam1);
		}
		bVar0++;
	}
	return;
}

void Function_465(bool bParam0) //Position: 0x199B3 / 104883
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
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_466() //Position: 0x199E8 / 104936
{
	if (!Function_467(Global_34573))
	{
		if (Function_407(Global_34573, Local_987[02], 80.0f))
		{
			if (Function_237(&iLocal_975) <= 12.0f)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_987[22])))
				{
					ADD_BLIP_FOR_OBJECT(Local_987[22], 330, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(Local_987[22]), "Z02_Blip_Train");
					iLocal_1064 = 1;
				}
				Function_366(&iLocal_975);
			}
		}
		else
		{
			Function_191("Zombie02_Fail_Train");
			bLocal_922 = true;
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_987[22])))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_987[22]));
		iLocal_1064 = 0;
	}
	return;
}

bool Function_467(bool bParam0) //Position: 0x19AA4 / 105124
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (((IS_ACTOR_IN_VOLUME(bParam0, Local_630.f_68) || IS_ACTOR_IN_VOLUME(bParam0, Local_705.f_20)) || IS_ACTOR_IN_VOLUME(bParam0, Local_734.f_20)) || IS_ACTOR_ON_TRAIN(bParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_468(bool bParam0) //Position: 0x19ADF / 105183
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (!ACTORS_IN_RANGE(Global_34573, bVar1, 90.0f))
				{
					Function_469(bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_469(bool bParam0) //Position: 0x19B2A / 105258
{
	SQUAD_LEAVE(bParam0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(bParam0, 0);
	Function_257(bParam0, 0, 1);
	MEMORY_CLEAR_ALL(bParam0);
	Function_144(bParam0);
	DESTROY_ACTOR(bParam0);
	return;
}

void Function_470() //Position: 0x19B51 / 105297
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	
	bVar0 = false;
	iVar1 = 0;
	bVar3 = true;
	if (IS_VOLUME_VALID(Local_4.f_1788))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1788))
		{
			iLocal_1043++;
			DESTROY_VOLUME(Local_4.f_1788);
			Function_479(&bVar11, 0, 1);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (Local_4.f_1680 - 1))
			{
				if (IS_VOLUME_VALID((*&Local_4 + 1680)[bVar0]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_987[22], (*&Local_4 + 1680)[bVar0]))
					{
						bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Local_4.f_2156);
						if (IS_OBJECT_VALID(bVar4))
						{
							bVar2 = DECOR_GET_INT(bVar4, "iNumZombies");
							bVar3 = DECOR_GET_BOOL(bVar4, "bFollowRight");
							DESTROY_VOLUME((*&Local_4 + 1680)[bVar0]);
							iVar1 = 0;
							while (iVar1 < (bVar2 - 1))
							{
								vVar8.x = RAND_FLOAT_RANGE(-2.0f, 2.0f);
								vVar8.f_8 = RAND_FLOAT_RANGE(-2.0f, 2.0f);
								GET_OBJECT_RELATIVE_POSITION(bVar4, vVar8, &vVar5);
								if ((RAND_INT_RANGE(false, 12) % 3) == 0)
								{
									bVar12 = iLocal_932[RAND_INT_RANGE(false, (iLocal_932 - 1))];
								}
								else
								{
									bVar12 = iLocal_926[RAND_INT_RANGE(false, (iLocal_926 - 1))];
								}
								bVar11 = CREATE_ACTOR_IN_LAYOUT(Local_4, Function_59(), bVar12, vVar5, 0.0f, 0.0f, 0.0f);
								ACTOR_SET_GRABBED_BY_CUTSCENE(bVar11, 0);
								Function_257(bVar11, 0, 1);
								Function_476(bVar11, Local_987[22]);
								AI_ACTOR_FORCE_SPEED(bVar11, 3);
								if (bVar3)
								{
									TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar11, Function_475(&Local_630 + 224), 5.0f, 3);
								}
								else
								{
									TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar11, Function_475(&Local_630 + 204), 5.0f, 3);
								}
								TASK_PRIORITY_SET(bVar11, 1);
								SQUAD_JOIN(bVar11, bLocal_1008);
								Function_474(Local_4.f_1092, bVar11, 1);
								Function_473(Local_4.f_1092, bVar11, 1);
								Function_471(Local_4.f_1092, bVar11, 0);
								ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar11, Local_705.f_40);
								ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar11, Local_630.f_80);
								iVar1++;
							}
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_471(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19D1C / 105756
{
	Function_474(bParam0, bParam1, 1);
	Function_413(bParam0, 1);
	Function_285(bParam0, bParam1, 4);
	Function_472(bParam0, bParam1);
	if (bParam2)
	{
		Function_377(bParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_472(bool bParam0, bool bParam1) //Position: 0x19D5C / 105820
{
	bool bVar0;
	bool bVar1;
	
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
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_473(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19DAE / 105902
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
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
			MEMORY_IDENTIFY(bVar1, bParam1);
			if (!bParam2)
			{
				GET_POSITION(bParam1, &uVar2);
				MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
			}
			else
			{
				MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, 1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_474(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19E0D / 105997
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
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, 1);
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

var Function_475(int iParam0) //Position: 0x19E78 / 106104
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = "";
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		bVar1 = GET_OBJECTSET_SIZE(*iParam0);
		if (bVar1 >= 0)
		{
			bVar2 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % IntToFloat(bVar1)));
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, *iParam0);
		}
	}
	PRINTSTRING("Finished getting random object");
	PRINTNL();
	return bVar0;
}

void Function_476(var uParam0, bool bParam1) //Position: 0x19EDE / 106206
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	Function_477(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_477(bool bParam0, vector3 vParam1) //Position: 0x19EF5 / 106229
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_478(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_478(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_478(bool bParam0, vector3 vParam1) //Position: 0x19F2D / 106285
{
	vector3 vVar0;
	
	Function_336(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_336(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_479(var uParam0, bool bParam1, bool bParam2) //Position: 0x19FB0 / 106416
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
				if (!Function_405(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_480() //Position: 0x1A02C / 106540
{
	if (iLocal_1064)
	{
		if (Function_376(2.0f))
		{
			if (iLocal_1047 <= 3)
			{
				Function_486();
				iLocal_1047++;
				Function_366(&iLocal_969);
			}
			Function_27("Zombie02_Stg04_obj05", 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
	}
	switch (iLocal_1043)
	{
		case 0x00000000:
			if (Function_376(0x40800000))
			{
				Function_485();
				iLocal_1043++;
				Function_366(&iLocal_969);
			}
			break;
		
		case 0x00000001:
			if (Function_376(0x40800000))
			{
				if ((Function_484() % 2) <= 1)
				{
					Function_483();
				}
				else
				{
					Function_482();
				}
				iLocal_1043++;
				Function_366(&iLocal_969);
			}
			break;
		
		case 0x00000002:
			if (Function_376(2.0f))
			{
				Function_481();
				AUDIO_MUSIC_FORCE_TRACK("ZOMBIE_CUSTOM_TRAIN_SONG", "IDLE", 0.0f, 4294967295, 4294967295, 0.0f, 0);
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_ZOMBIE_CUSTOM_TRAIN_SONG", &uLocal_995);
				Function_366(&iLocal_969);
				Function_366(&iLocal_981);
				iLocal_1043++;
			}
			break;
	}
	return;
}

void Function_481() //Position: 0x1A15D / 106845
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_SpotsMoreZombies", "Z02_SpotsMoreZombies", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_482() //Position: 0x1A1AC / 106924
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_SetsOffBant_v2_AA", "Z02_SetsOffBant_v2_AA", 0, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_SetsOffBant_v2_AB", "Z02_SetsOffBant_v2_AB", 1, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(1, "Z02_SetsOffBant_v2_AC", "Z02_SetsOffBant_v2_AC", 0, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_SetsOffBant_v2_AD", "Z02_SetsOffBant_v2_AD", 1, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(1, "Z02_SetsOffBant_v2_AE", "Z02_SetsOffBant_v2_AE", 0, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_SetsOffBant_v2_AF1", "Z02_SetsOffBant_v2_AF1", 1, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_SetsOffBant_v2_AF2", "Z02_SetsOffBant_v2_AF2", 1, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_483() //Position: 0x1A357 / 107351
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Z02_SetsOffBant_v1_AA", "Z02_SetsOffBant_v1_AA", 1, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(1, "Z02_SetsOffBant_v1_AB", "Z02_SetsOffBant_v1_AB", 0, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_SetsOffBant_v1_AC", "Z02_SetsOffBant_v1_AC", 1, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(1, "Z02_SetsOffBant_v1_AD1", "Z02_SetsOffBant_v1_AD1", 0, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(1, "Z02_SetsOffBant_v1_AD2", "Z02_SetsOffBant_v1_AD2", 0, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_SetsOffBant_v1_AE", "Z02_SetsOffBant_v1_AE", 1, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_484() //Position: 0x1A4C9 / 107721
{
	return Global_34165.f_56;
}

void Function_485() //Position: 0x1A4D4 / 107732
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_TrainSetsOff", "Z02_TrainSetsOff", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_486() //Position: 0x1A51B / 107803
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_JonJumpsOffTrain", "Z02_JonJumpsOffTrain", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_487() //Position: 0x1A56A / 107882
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_926 - 1))
	{
		Function_330(&bLocal_938, iLocal_926[iVar0], 2, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_932 - 1))
	{
		Function_330(&bLocal_938, iLocal_932[iVar0], 2, 0);
		iVar0++;
	}
	if (Function_248(&bLocal_938))
	{
		return 1;
	}
	return 0;
}

void Function_488() //Position: 0x1A5CB / 107979
{
	SET_PLAYER_CONTROL(false, 0, 0, 0);
	if (!IS_ACTOR_VALID(bLocal_1006))
	{
		bLocal_1006 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	Function_368(Global_34573, (*&Local_4 + 1964)[19], 1, 1, 1);
	Function_368(bLocal_1006, (*&Local_4 + 2072)[1], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1006, -1.0f, 0, 0);
	return;
}

void Function_489() //Position: 0x1A61C / 108060
{
	Function_490(&iLocal_926, 1204, 1213);
	Function_490(&iLocal_932, 1222, 1227);
	return;
}

void Function_490(int iParam0, bool bParam1, bool bParam2) //Position: 0x1A63A / 108090
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		bVar1 = RAND_INT_RANGE(bParam1, bParam2);
		while (Function_491(bVar1, iParam0) && bVar1 > bParam2)
		{
			bVar1++;
		}
		(*iParam0)[iVar0] = bVar1;
		iVar0++;
	}
	return;
}

int Function_491(int iParam0, int iParam1) //Position: 0x1A683 / 108163
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

void Function_492() //Position: 0x1A6B5 / 108213
{
	if (IS_VOLUME_VALID(Local_4.f_1756))
	{
		if (IS_OBJECT_IN_VOLUME(Local_987[02], Local_4.f_1756))
		{
			DESTROY_VOLUME(Local_4.f_1756);
			TRAIN_SET_JUNCTION_STATE(iLocal_1033, 11, 1);
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1784))
	{
		if (IS_OBJECT_IN_VOLUME(Local_987[02], Local_4.f_1784))
		{
			DESTROY_VOLUME(Local_4.f_1784);
			Function_197((*&Local_4 + 2164)[0]);
			vLocal_1014 = { StackVal, StackVal, Function_197((*&Local_4 + 2164)[0]) };
			TRAIN_SET_TARGET_POS(iLocal_1033, &vLocal_1014);
			TRAIN_SET_TARGET_SPEED(iLocal_1033, 0.0f);
		}
	}
	return;
}

void Function_493() //Position: 0x1A72D / 108333
{
	if (iLocal_812 >= 6)
	{
		Function_438(Local_987[22], "Zombie02_Warn_Train", "Zombie02_Fail_Train", "Z02_Blip_Train", bLocal_1008);
		if (!bLocal_1071)
		{
			bLocal_1071 = Function_487();
		}
		Function_406();
		Function_511();
		Function_197((*&Local_4 + 1964)[2]);
		if (!Function_433(StackVal, StackVal, "$/cutscene/mexico_crossing_3_cs/mexico_crossing_3_cs", &uLocal_925, Function_197((*&Local_4 + 1964)[2]), 0, 80.0f, 120.0f, 2, 1, 2, 2, 0, 1))
		{
		}
	}
	switch (iLocal_812)
	{
		case 0x00000000:
			Function_369(0);
			Function_510();
			if (!iLocal_913[2])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_368(Global_34573, (*&Local_4 + 1964)[19], 1, 1, 1);
				Function_366(&iLocal_969);
				iLocal_812 = 1;
			}
			else
			{
				Function_366(&iLocal_969);
				iLocal_812 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (Function_509())
					{
						Function_197((*&Local_4 + 1964)[2]);
						if (Function_344(StackVal, StackVal, Function_197((*&Local_4 + 1964)[2]), 175.438f))
						{
							Function_304();
							Function_510();
							Function_366(&iLocal_969);
							iLocal_812 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, iLocal_811) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/mexico_crossing_2_cs/mexico_crossing_2_cs"))
			{
				Function_510();
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				Function_366(&iLocal_969);
				iLocal_812 = 3;
			}
			else
			{
				AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
				Function_302();
				Function_366(&iLocal_969);
				iLocal_812 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_231("$/cutscene/mexico_crossing_2_cs/mexico_crossing_2_cs", &Local_804, &Local_750, &iLocal_811, 76480, 75823, 75500, 63047, 61945, 42093, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_366(&iLocal_969);
				iLocal_812 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_417())
			{
				Function_196(iLocal_811);
				Function_418(StackVal, StackVal, Function_196(iLocal_811), iLocal_811, Global_30628[1], Function_199(iLocal_811), 0);
				STREAMING_UNLOAD_BOUNDS();
				AI_STOP_IGNORING_ACTORS();
				Function_489();
				iLocal_1043 = 0;
				Function_230(1.0f);
				iLocal_812 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_376(0x40800000))
			{
				Function_27("Zombie02_Stg02_obj09", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_815 = 1;
				Function_389(&iLocal_972);
				Function_366(&iLocal_969);
				iLocal_812 = 7;
			}
			break;
		
		case 0x00000007:
			Function_499();
			Function_494();
			if (iLocal_1039 > 10)
			{
				if (Function_237(&iLocal_969) <= 1.0f)
				{
					Function_463(Local_4.f_1092, 0);
					Function_366(&iLocal_969);
					iLocal_812 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_376(1.0f) && iLocal_1043 < 3)
			{
				Function_366(&iLocal_969);
				iLocal_812 = 106;
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			STREAMING_UNLOAD_SCENE();
			iLocal_913[3] = 1;
			TASK_CLEAR(Global_34573);
			iLocal_1075 = 0;
			iLocal_811 = 4;
			iLocal_812 = 0;
			break;
	}
	return;
}

void Function_494() //Position: 0x1AAB1 / 109233
{
	if (!iLocal_1057)
	{
		if ((IS_ACTOR_SHOOTING(Global_34573) || Function_497(Global_34573, bLocal_1008, 1, 0, 1, 16.0f)) || Function_436(Global_34573, -3707.454f, 8.111f, 3489.138f, 16.0f))
		{
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			iLocal_1057 = 1;
			Function_495();
			Function_278(bLocal_1008);
			Function_472(bLocal_1008, Global_34573);
			Function_278(bLocal_1008);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 2, 0, 2);
			TASK_GO_NEAR_OBJECT(false, Global_34573, 9.0f, 2, 0, 1);
		}
	}
	return;
}

void Function_495() //Position: 0x1AB3F / 109375
{
	vector3 vVar0;
	
	Function_284(Local_4.f_1092, 1);
	Function_413(Local_4.f_1092, 1);
	Function_306(Local_4.f_1092, Local_4.f_1388, 4);
	Function_306(Local_4.f_1388, Local_4.f_1092, 4);
	Function_456(Local_4.f_1092, 60.0f);
	Function_464(Local_4.f_1092, 359.0f);
	Function_336((*&Local_4 + 1048)[02]);
	vVar0 = { StackVal, StackVal, Function_336((*&Local_4 + 1048)[02]) };
	SET_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[02], Local_705.f_24, 2, 0);
	TASK_CLEAR((*&Local_4 + 1048)[02]);
	TASK_STAND_STILL((*&Local_4 + 1048)[02], -1.0f, 0, 0);
	Function_336(Function_496(Local_4.f_1388, (*&Local_4 + 1048)[02], 0, 0));
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, StackVal, Function_478((*&Local_4 + 1048)[02], &vVar0, (*&Local_4 + 1048)[02], Function_336(Function_496(Local_4.f_1388, (*&Local_4 + 1048)[02], 0, 0))), -1.0f);
	SET_ACTOR_PROOF((*&Local_4 + 1048)[02], 8);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 1048)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 1048)[02], 1);
	TASK_CLEAR((*&Local_4 + 1048)[32]);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 1048)[32], GET_COVER_LOCATION_FROM_OBJECT(Local_734.f_48), -1.0f, 1086324736);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 1048)[32], 1);
	TASK_PRIORITY_SET((*&Local_4 + 1048)[32], 1);
	TASK_CLEAR((*&Local_4 + 1048)[42]);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 1048)[42], GET_COVER_LOCATION_FROM_OBJECT(Local_705.f_112), -1.0f, 1086324736);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 1048)[42], 1);
	TASK_PRIORITY_SET((*&Local_4 + 1048)[42], 1);
	Function_336((*&Local_4 + 1048)[22]);
	vVar0 = { StackVal, StackVal, Function_336((*&Local_4 + 1048)[22]) };
	TASK_CLEAR((*&Local_4 + 1048)[22]);
	SET_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[22], Local_630.f_72, 1, 0);
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_4 + 1048)[22], &vVar0, 90.0f, 3212836864);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 1048)[22], 1);
	Function_336((*&Local_4 + 1048)[12]);
	vVar0 = { StackVal, StackVal, Function_336((*&Local_4 + 1048)[12]) };
	TASK_CLEAR((*&Local_4 + 1048)[12]);
	SET_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 1048)[12], Local_630.f_76, 1, 0);
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_4 + 1048)[12], &vVar0, 160.0f, 3212836864);
	REMOVE_OBJECT_ATTACHMENT(iLocal_998);
	SET_MOVER_FROZEN((*&Local_4 + 1048)[02], 1);
	Function_279(Local_4.f_1092, 0.1f);
	return;
}

bool Function_496(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1AD43 / 109891
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
			fVar3 = Function_400(bVar4, bParam1);
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

bool Function_497(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0x1ADFD / 110077
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
			if (Function_498(bParam0, bVar1, iParam2, iParam3, iParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_498(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1AE5D / 110173
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
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
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
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
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

void Function_499() //Position: 0x1AF4A / 110410
{
	Function_508(-3729.209f, 8.584f, 3483.748f);
	if (!SQUAD_IS_VALID(bLocal_1008))
	{
		bLocal_1008 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "stationZombiesSquad"));
		SQUAD_JOIN((*&Local_4 + 1312)[32], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1312)[42], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1312)[52], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1312)[62], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1312)[72], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1312)[82], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1312)[02], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1312)[12], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1312)[22], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1392)[12], bLocal_1008);
		SQUAD_JOIN((*&Local_4 + 1392)[02], bLocal_1008);
	}
	if (iLocal_1039 <= 2)
	{
		Function_506(Local_4.f_1092, (*&Local_4 + 2072)[0], 2.0f, 6.0f);
		Function_505();
	}
	switch (iLocal_1039)
	{
		case 0x00000000:
			if ((Function_237(&iLocal_972) <= 70.0f && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) >= 2) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) >= 1)
			{
				SAY_SINGLE_LINE_CONTEXT(Function_496(Local_4.f_1092, Global_34573, 1, 0), 119, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
				Function_502();
				iLocal_1066 = 1;
				Function_306(Local_4.f_1092, bLocal_1008, 4);
				Function_306(bLocal_1008, Local_4.f_1092, 4);
				Function_285(bLocal_1008, Global_34573, 4);
				Function_366(&iLocal_972);
				iLocal_1039 = 1;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_1053)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) < 5)
				{
					Function_377(bLocal_1008, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_27("Zombie02_Stg02_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_RED_MIST_DESCENDS", true, false, 2, 0, false, false);
					iLocal_1053 = 1;
				}
			}
			if (!iLocal_1070)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) < 3)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
					iLocal_1070 = 1;
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) <= 1)
			{
				Function_500();
				iLocal_1043++;
				iLocal_1039++;
				Function_366(&iLocal_972);
				Function_366(&iLocal_969);
				Function_366(&iLocal_984);
				iLocal_1039 = 10;
			}
			break;
	}
	return;
}

void Function_500() //Position: 0x1B1A2 / 111010
{
	Function_463(Local_4.f_1092, 0);
	Function_501(Local_4.f_1092, 1);
	REMOVE_OBJECT_ATTACHMENT(iLocal_996);
	Function_278(Local_4.f_1092);
	Function_300(Local_4.f_1092, 1, -1.0f, 1, 1);
	return;
}

void Function_501(bool bParam0, int iParam1) //Position: 0x1B1D4 / 111060
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_SET_NAV_PATHFINDING_ENABLED(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_502() //Position: 0x1B213 / 111123
{
	if (!SQUAD_IS_VALID(Local_4.f_1492))
	{
		Function_504();
		Function_310(Local_4.f_1492, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	}
	SQUAD_JOIN((*&Local_4 + 1416)[32], bLocal_1008);
	SQUAD_JOIN((*&Local_4 + 1416)[42], bLocal_1008);
	SQUAD_JOIN((*&Local_4 + 1416)[52], bLocal_1008);
	SQUAD_JOIN((*&Local_4 + 1416)[62], bLocal_1008);
	SQUAD_JOIN((*&Local_4 + 1416)[72], bLocal_1008);
	SQUAD_JOIN((*&Local_4 + 1416)[82], bLocal_1008);
	SQUAD_JOIN((*&Local_4 + 1416)[02], bLocal_1008);
	SQUAD_JOIN((*&Local_4 + 1416)[12], bLocal_1008);
	SQUAD_JOIN((*&Local_4 + 1416)[22], bLocal_1008);
	Function_278(bLocal_1008);
	SQUAD_GOALS_CLEAR(bLocal_1008);
	Function_279(bLocal_1008, 0.6f);
	Function_413(bLocal_1008, 1);
	Function_413(bLocal_1008, 1);
	Function_306(Local_4.f_1092, bLocal_1008, 4);
	Function_306(bLocal_1008, Local_4.f_1092, 4);
	Function_305(bLocal_1008, Local_4.f_1748);
	if (IS_ACTOR_VALID((*&Local_4 + 1048)[12]))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 0, 2, 2);
		TASK_GO_NEAR_ACTOR(false, (*&Local_4 + 1048)[12], 10.0f, 2);
	}
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 2, 2, 2);
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 2092)[3], 10.0f, 2, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 1, 2, 2);
	TASK_GO_NEAR_OBJECT(false, Global_34573, 0.0f, 2, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 3, 2, 4294967295);
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1964)[17], 10.0f, 2, 0, 1);
	Function_503();
	return;
}

void Function_503() //Position: 0x1B380 / 111488
{
	vector3 vVar0;
	
	Function_197((*&Local_4 + 1964)[23]);
	vVar0 = { StackVal, StackVal, Function_197((*&Local_4 + 1964)[23]) };
	if (IS_ACTOR_VALID((*&Local_4 + 1048)[12]))
	{
		if (IS_MOVER_FROZEN((*&Local_4 + 1048)[12]))
		{
			SET_MOVER_FROZEN((*&Local_4 + 1048)[12], 0);
		}
		TASK_CLEAR((*&Local_4 + 1048)[12]);
		Function_336(Function_496(bLocal_1008, (*&Local_4 + 1048)[12], 0, 0));
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, StackVal, Function_478((*&Local_4 + 1048)[12], &vVar0, (*&Local_4 + 1048)[12], Function_336(Function_496(bLocal_1008, (*&Local_4 + 1048)[12], 0, 0))), -1.0f);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[12], 0);
		SAY_SINGLE_LINE_CONTEXT((*&Local_4 + 1048)[12], 118, Global_34573, 1, 1, 3, 4294967295, 4294967295, 0, 1);
	}
	return;
}

void Function_504() //Position: 0x1B418 / 111640
{
	Local_4.f_1492 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S04_Z_Station_Wv02"));
	(*&Local_4 + 1416)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_E01", 202, -3706.942f, 8.52854f, 3451.102f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[02], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[02], -1.0f, 0, 0);
	(*&Local_4 + 1416)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_E02", 87, -3710.862f, 8.031372f, 3455.702f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[12], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[12], -1.0f, 0, 0);
	(*&Local_4 + 1416)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_E03", 48, -3714.86f, 7.781372f, 3459.988f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[22], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[22], -1.0f, 0, 0);
	(*&Local_4 + 1416)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_M01", 311, -3715.893f, 7.781372f, 3468.04f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[32], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[32], -1.0f, 0, 0);
	(*&Local_4 + 1416)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_M02", 49, -3716.399f, 7.781364f, 3476.129f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[42], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[42], -1.0f, 0, 0);
	(*&Local_4 + 1416)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_M03", 50, -3715.116f, 7.783278f, 3484.485f, 0.0f, 321.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[52], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[52], -1.0f, 0, 0);
	(*&Local_4 + 1416)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_H01", 74, -3713.091f, 8.044673f, 3490.644f, 0.0f, 308.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[62], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[62], -1.0f, 0, 0);
	(*&Local_4 + 1416)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_H02", 142, -3708.783f, 8.312814f, 3495.267f, 0.0f, 317.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[72], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[72], -1.0f, 0, 0);
	(*&Local_4 + 1416)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDnD_2_H03", 136, -3698.843f, 8.977999f, 3454.708f, 0.0f, 172.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1416)[82], Local_4.f_1492);
	TASK_STAND_STILL((*&Local_4 + 1416)[82], -1.0f, 0, 0);
	return;
}

void Function_505() //Position: 0x1B70B / 112395
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bLocal_1008))
	{
		if (!iLocal_1058)
		{
			if ((Function_467(Global_34573) || !SQUAD_GOAL_IS_VALID(uLocal_1010)) || !SQUAD_GOAL_IS_VALID(uLocal_1011))
			{
				bVar0 = RAND_INT_RANGE(false, 3);
				bVar1 = RAND_INT_RANGE_DIFFERENT(bVar0, false, 3);
				uLocal_1010 = SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_1001)), "UseCase1", 1, 4);
				uLocal_1011 = SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1008, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_1001)), "UseCase1", 1, 4);
				iLocal_1058 = 1;
			}
			else
			{
				iLocal_1058 = 0;
			}
		}
		else if (!SQUAD_GOAL_IS_VALID(uLocal_1010) || !SQUAD_GOAL_IS_VALID(uLocal_1011))
		{
			iLocal_1058 = 0;
		}
		if (!IS_ACTOR_VALID(bLocal_1012))
		{
			if (SQUAD_GOAL_IS_VALID(uLocal_1010))
			{
				bLocal_1012 = SQUAD_GET_SINGLE_ACTOR_CONTROLLED_BY_GOAL(bLocal_1008, uLocal_1010);
				AI_IGNORE_ACTOR(bLocal_1012);
			}
		}
		else if (IS_ACTOR_IN_VOLUME(bLocal_1012, Local_630.f_68) && GET_TASK_STATUS(bLocal_1012, 45) == 1)
		{
			if (iLocal_1046 <= 3)
			{
				iLocal_1063 = 1;
			}
			TASK_CLEAR(bLocal_1012);
			TASK_MELEE_ATTACK(bLocal_1012, Function_496(Local_4.f_1092, bLocal_1012, 0, 0), -1.0f);
			Function_471(Local_4.f_1092, bLocal_1012, 0);
			AI_STOP_IGNORING_ACTOR(bLocal_1012);
		}
		if (!IS_ACTOR_VALID(bLocal_1013))
		{
			if (SQUAD_GOAL_IS_VALID(uLocal_1011))
			{
				bLocal_1013 = SQUAD_GET_SINGLE_ACTOR_CONTROLLED_BY_GOAL(bLocal_1008, uLocal_1011);
				AI_IGNORE_ACTOR(bLocal_1013);
			}
		}
		else if (IS_ACTOR_IN_VOLUME(bLocal_1013, Local_630.f_68) && GET_TASK_STATUS(bLocal_1013, 45) == 1)
		{
			if (iLocal_1046 <= 3)
			{
				iLocal_1063 = 1;
			}
			TASK_CLEAR(bLocal_1013);
			TASK_MELEE_ATTACK(bLocal_1013, Function_496(Local_4.f_1092, bLocal_1013, 0, 0), -1.0f);
			Function_471(Local_4.f_1092, bLocal_1013, 0);
			AI_STOP_IGNORING_ACTOR(bLocal_1013);
		}
	}
	return;
}

void Function_506(var uParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x1B8B2 / 112818
{
	bool bVar0;
	
	if (Function_407(Global_34573, bParam1, 170.0f))
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_1032) < 0.0f)
		{
			fLocal_1032 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(fParam2, bParam3));
			bVar0 = Function_507(uParam0);
			switch (RAND_INT_RANGE(false, 11))
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
				case 0x00000003:
					SAY_SINGLE_LINE_CONTEXT(bVar0, 60, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					break;
				
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					SAY_SINGLE_LINE_CONTEXT(bVar0, 96, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					break;
				
				case 0x00000008:
				case 0x00000009:
				case 0x0000000A:
				case 0x0000000B:
					SAY_SINGLE_LINE_CONTEXT(bVar0, 27, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					break;
				
				default:
					SAY_SINGLE_LINE_CONTEXT(bVar0, 96, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					break;
				}
			}
	}
}

var Function_507(bool bParam0) //Position: 0x1B98E / 113038
{
	if (SQUAD_GET_SIZE(bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(bParam0) - 1)));
	}
	return "";
}

void Function_508(vector3 vParam0) //Position: 0x1B9B0 / 113072
{
	if (IS_ACTOR_VALID(bLocal_1006))
	{
		if (!IS_ACTOR_MOUNTED(bLocal_1006))
		{
			if (!Function_436(StackVal, StackVal, bLocal_1006, vParam0, 10.0f))
			{
				Function_336(Global_34573);
				TASK_GO_TO_COORD_AND_STAY(StackVal, StackVal, bLocal_1006, Function_478(&vParam0, 2, bLocal_1006, Function_336(Global_34573)));
			}
		}
		else
		{
			TASK_CLEAR(bLocal_1006);
		}
	}
	return;
}

bool Function_509() //Position: 0x1B9FA / 113146
{
	Function_330(&Local_4 + 736, 202, 2, 0);
	Function_330(&Local_4 + 736, 87, 2, 0);
	Function_330(&Local_4 + 736, 22, 2, 0);
	Function_330(&Local_4 + 736, 311, 2, 0);
	Function_330(&Local_4 + 736, 49, 2, 0);
	Function_330(&Local_4 + 736, 50, 2, 0);
	Function_330(&Local_4 + 736, 74, 2, 0);
	Function_330(&Local_4 + 736, 142, 2, 0);
	Function_330(&Local_4 + 736, 136, 2, 0);
	Function_330(&Local_4 + 736, 1204, 2, 0);
	Function_330(&Local_4 + 736, 1219, 2, 0);
	Function_330(&Local_4 + 736, 48, 2, 0);
	if (Function_248(&Local_4 + 736))
	{
		return 1;
	}
	return 0;
}

int Function_510() //Position: 0x1BAAD / 113325
{
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Fast_04", (*&Local_4 + 1392)[02]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_03", (*&Local_4 + 1312)[02]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_04", (*&Local_4 + 1312)[12]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_05", (*&Local_4 + 1312)[22]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_06", (*&Local_4 + 1312)[32]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_01", (*&Local_4 + 1312)[42]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_03", (*&Local_4 + 1312)[52]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_05", (*&Local_4 + 1312)[62]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_06", (*&Local_4 + 1392)[12]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_07", (*&Local_4 + 1312)[72]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_08", (*&Local_4 + 1312)[82]);
	return 1;
}

void Function_511() //Position: 0x1BBFF / 113663
{
	switch (iLocal_1043)
	{
		case 0x00000000:
			if (Function_382(0x41000000) && Function_520(Global_34573, (*&Local_4 + 1048)[02], 40.0f))
			{
				Function_519();
				iLocal_1043++;
				Function_366(&iLocal_984);
			}
			break;
		
		case 0x00000001:
			if (Function_382(5.0f))
			{
				Function_518();
				iLocal_1043++;
				Function_366(&iLocal_984);
			}
			break;
		
		case 0x00000002:
			if (Function_401(bLocal_1008, Global_34573) || IS_ACTOR_SHOOTING(Global_34573))
			{
				Function_366(&iLocal_981);
			}
			if (Function_382(8.0f))
			{
				if (Function_400(Global_34573, (*&Local_4 + 1048)[02]) <= 35.0f)
				{
					Function_399();
					Function_366(&iLocal_984);
				}
				else if (GET_LAST_ATTACKER(Global_34573) == (*&Local_4 + 1048)[02])
				{
					Function_398();
					CLEAR_LAST_ATTACK(Global_34573);
					CLEAR_LAST_HIT(Global_34573);
					Function_366(&iLocal_984);
				}
				else if (GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) * 0.7f) && !iLocal_1067)
				{
					Function_517();
					iLocal_1067 = 1;
					Function_366(&iLocal_984);
				}
				else if (iLocal_1065)
				{
					Function_516();
					iLocal_1065 = 0;
					Function_366(&iLocal_984);
				}
				else if (iLocal_1066)
				{
					Function_414();
					iLocal_1066 = 0;
					Function_366(&iLocal_984);
				}
				else if (iLocal_1061)
				{
					Function_515();
					iLocal_1044++;
					iLocal_1061 = 0;
					Function_366(&iLocal_984);
				}
				else if (iLocal_1062)
				{
					Function_514();
					iLocal_1045++;
					iLocal_1062 = 0;
					Function_366(&iLocal_984);
				}
				else if (iLocal_1063)
				{
					Function_513();
					iLocal_1046++;
					iLocal_1063 = 0;
					Function_366(&iLocal_984);
				}
				else if (Function_397(bLocal_1008, Global_34573) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1008) > 4)
				{
					Function_396();
					Function_366(&iLocal_981);
					Function_366(&iLocal_984);
				}
				else if (Function_237(&iLocal_981) < 16.0f)
				{
					Function_395();
					Function_366(&iLocal_981);
					Function_366(&iLocal_984);
				}
				else if (Function_237(&iLocal_984) < (8.0f + 6.0f))
				{
					if (Function_386())
					{
						Function_394();
					}
					else
					{
						Function_393();
					}
					Function_366(&iLocal_984);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_382(2.0f))
			{
				Function_512();
				iLocal_1043++;
				Function_366(&iLocal_981);
				Function_366(&iLocal_984);
			}
			break;
	}
	return;
}

void Function_512() //Position: 0x1BE26 / 114214
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_AllZombysDead", "Z02_AllZombysDead", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_513() //Position: 0x1BE6F / 114287
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_ZombsBoardTrain", "Z02_ZombsBoardTrain", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_514() //Position: 0x1BEBC / 114364
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_JonGetsAmmo", "Z02_JonGetsAmmo", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_515() //Position: 0x1BF01 / 114433
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_AmmoInBak", "Z02_AmmoInBak", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_516() //Position: 0x1BF42 / 114498
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_Spots2ndWave", "Z02_Spots2ndWave", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_517() //Position: 0x1BF89 / 114569
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_CoverInBak", "Z02_CoverInBak", 0, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_518() //Position: 0x1BFCC / 114636
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_HoldThemOff", "Z02_HoldThemOff", 0, 3, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_519() //Position: 0x1C012 / 114706
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_JonArrives", "Z02_JonArrives", 0, 3, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_520(bool bParam0, bool bParam1, int iParam2) //Position: 0x1C055 / 114773
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
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

void Function_521() //Position: 0x1C166 / 115046
{
	if (iLocal_812 > 8)
	{
		Function_542();
		Function_540();
		Function_197((*&Local_4 + 1964)[2]);
		if (!Function_433(StackVal, StackVal, "$/cutscene/mexico_crossing_2_cs/mexico_crossing_2_cs", &uLocal_925, Function_197((*&Local_4 + 1964)[2]), 0, 350.0f, 400.0f, 2, 1, 2, 2, 0, 1))
		{
		}
	}
	switch (iLocal_812)
	{
		case 0x00000000:
			Function_369(0);
			Function_539();
			if (!iLocal_913[1])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_366(&iLocal_969);
				iLocal_812 = 1;
			}
			else
			{
				Function_366(&iLocal_969);
				iLocal_812 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED() && Function_538())
				{
					Function_197((*&Local_4 + 1840)[2]);
					if (Function_344(StackVal, StackVal, Function_197((*&Local_4 + 1840)[2]), 175.438f))
					{
						AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
						Function_531();
						Function_366(&iLocal_969);
						iLocal_812 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_196(iLocal_811);
			Function_418(StackVal, StackVal, Function_196(iLocal_811), iLocal_811, Global_30628[1], Function_199(iLocal_811), 0);
			Function_230(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			Function_509();
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 4.0f, 1);
			if (iLocal_1068)
			{
				iLocal_1043 = 3;
			}
			else
			{
				iLocal_1043 = 0;
			}
			iLocal_1034 = 0;
			iLocal_812 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_4.f_2440)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_4.f_2440));
				}
				if (IS_ACTOR_ALIVE((*&Local_4 + 1096)[02]))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 1096)[02])))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 1096)[02]));
					}
				}
				ADD_BLIP_FOR_OBJECT(Local_630.f_68, 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(Local_630.f_68), "Z02_Blip_Train");
				Function_201();
				Function_389(&iLocal_972);
				Function_366(&iLocal_969);
				iLocal_812 = 7;
			}
			break;
		
		case 0x00000007:
			Function_524();
			if (Function_376(0x40800000))
			{
				Function_27("Zombie02_Stg03_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_380(Local_4.f_1124, 1, 1, 1);
				Function_366(&iLocal_969);
				iLocal_812 = 8;
			}
			break;
		
		case 0x00000008:
			Function_524();
			Function_523(Local_4.f_1732, 200.0f);
			if (!iLocal_1070)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
					iLocal_1070 = 1;
				}
			}
			if (!iLocal_1086)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1812))
				{
					STREAMING_UNLOAD_SCENE();
					if (SQUAD_IS_VALID(bLocal_1007))
					{
						Function_479(&bLocal_1007, 0, 0);
					}
					if (SQUAD_IS_VALID(Local_4.f_1124))
					{
						Function_479(&Local_4 + 1124, 0, 0);
					}
					iLocal_1086 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1808))
			{
				Function_304();
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1732))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_630.f_68)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_630.f_68));
				}
				Function_366(&iLocal_969);
				iLocal_812 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_522();
			STREAMING_UNLOAD_BOUNDS();
			iLocal_913[2] = 1;
			iLocal_1075 = 0;
			iLocal_811 = 3;
			iLocal_812 = 0;
			break;
	}
	return;
}

void Function_522() //Position: 0x1C49E / 115870
{
	Function_138(&Local_4 + 612);
	return;
}

void Function_523(bool bParam0, float fParam1) //Position: 0x1C4AC / 115884
{
	if (Function_407(Global_34573, bParam0, fParam1))
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_1032) < 0.0f)
		{
			fLocal_1032 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(0.5f, 2.0f));
			if (Function_386())
			{
				Function_197(bParam0);
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_LO_POWER_MASTER", Function_197(bParam0));
			}
			else
			{
				Function_197(bParam0);
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_HI_POWER_MASTER", Function_197(bParam0));
			}
		}
	}
	return;
}

void Function_524() //Position: 0x1C53A / 116026
{
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_1124) >= 0)
	{
		switch (iLocal_1043)
		{
			case 0x00000000:
				if (Function_382(2.0f))
				{
					Function_530();
					iLocal_1043++;
					Function_366(&iLocal_984);
				}
				break;
			
			case 0x00000001:
				if (Function_382(2.0f))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 1096)[02]))
					{
						if (Function_400(Global_34573, (*&Local_4 + 1096)[02]) >= 30.0f && Function_237(&iLocal_984) < 15.0f)
						{
							Function_529();
							iLocal_1043++;
							Function_366(&iLocal_984);
						}
						else if (Function_400(Global_34573, (*&Local_4 + 1096)[02]) < 30.0f)
						{
							iLocal_1043++;
						}
					}
					else
					{
						iLocal_1043++;
					}
				}
				break;
			
			case 0x00000002:
				if (Function_382(4.0f))
				{
					if (Function_528(Global_34573, (*&Local_4 + 1868)[6]) <= 35.0f)
					{
						Function_527();
						iLocal_1043++;
						Function_366(&iLocal_984);
					}
				}
				break;
			
			case 0x00000003:
				if (iLocal_1068)
				{
					Function_526();
					iLocal_1068 = 0;
					iLocal_1043 = 5;
					Function_366(&iLocal_984);
				}
				break;
			
			case 0x00000004:
				Function_525();
				iLocal_1043++;
				Function_366(&iLocal_984);
				break;
			}
	}
	return;
}

void Function_525() //Position: 0x1C667 / 116327
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_JonShootsMen", "Z02_JonShootsMen", 0, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_526() //Position: 0x1C6AE / 116398
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_JonStealsUniform", "Z02_JonStealsUniform", 0, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_527() //Position: 0x1C6FD / 116477
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Z02_WishYaLuk", "Z02_WishYaLuk", 2, 3, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

float Function_528(bool bParam0, bool bParam1) //Position: 0x1C73E / 116542
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_404(bParam0);
			vVar0 = { StackVal, StackVal, Function_404(bParam0) };
			Function_273(bParam1);
			vVar3 = { StackVal, StackVal, Function_273(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_529() //Position: 0x1C7DE / 116702
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_Loitering", "Z02_Loitering", 0, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_530() //Position: 0x1C81F / 116767
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Z02_Thanks", "Z02_Thanks", 2, 1, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_531() //Position: 0x1C85A / 116826
{
	vector3 vVar0;
	bool bVar3;
	
	if (Function_537(Local_750) == 0)
	{
		Function_197((*&Local_4 + 1868)[16]);
		vVar0 = { StackVal, StackVal, Function_197((*&Local_4 + 1868)[16]) };
		Function_536();
		bVar3 = LOCATE_GRINGO_OF_TYPE("lean_fence_h_talking", &vVar0, 4.0f, 0);
		SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1096)[02], GET_OBJECT_FROM_GRINGO(bVar3), "USECASE1", 1, 0, 0);
		TASK_USE_GRINGO((*&Local_4 + 1096)[02], bVar3, "USECASE1", 1, 1);
		TASK_WANDER_IN_VOLUME((*&Local_4 + 1096)[12], Local_4.f_1800, -1.0f);
		TASK_WANDER_IN_VOLUME((*&Local_4 + 1096)[22], Local_4.f_1800, -1.0f);
		Function_368((*&Local_4 + 1096)[12], (*&Local_4 + 1868)[7], 1, 1, 1);
		Function_368((*&Local_4 + 1096)[22], (*&Local_4 + 1868)[8], 1, 1, 1);
		Function_286(Local_4.f_1124, 0);
	}
	else if (Function_537(Local_750) == 1)
	{
		Function_536();
		iLocal_1068 = 1;
		Function_465(Local_4.f_1124);
		Function_380(Local_4.f_1124, 1, 1, 1);
		Function_285(Local_4.f_1124, Global_34573, 4);
		Function_306(Local_4.f_1124, bLocal_1007, 4);
		SQUAD_SET_FACTION(Local_4.f_1124, 19);
		Function_471(Local_4.f_1124, Global_34573, 0);
		Function_277(Local_4.f_1124, Local_4.f_1796, 4, 0);
		Function_278(Local_4.f_1124);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_1124, 1, 1, 4294967295);
		TASK_KILL_CHAR(false, Global_34573);
		Function_368((*&Local_4 + 1096)[12], (*&Local_4 + 1868)[7], 1, 1, 1);
		Function_368((*&Local_4 + 1096)[22], (*&Local_4 + 1868)[8], 1, 1, 1);
		Function_286(Local_4.f_1124, 0);
	}
	else if (Function_537(Local_750) == 2)
	{
		if (!SQUAD_IS_VALID(bLocal_1007))
		{
			bLocal_1007 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "campZombiesSquad"));
		}
		Function_533();
		Function_536();
		iLocal_1068 = 1;
		Function_465(Local_4.f_1124);
		Function_380(Local_4.f_1124, 1, 1, 1);
		Function_285(Local_4.f_1124, Global_34573, 4);
		Function_306(Local_4.f_1124, bLocal_1007, 4);
		SQUAD_SET_FACTION(Local_4.f_1124, 19);
		Function_471(Local_4.f_1124, Global_34573, 0);
		Function_277(Local_4.f_1124, Local_4.f_1796, 4, 0);
		Function_278(Local_4.f_1124);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_1124, 1, 1, 4294967295);
		TASK_KILL_CHAR(false, Global_34573);
		Function_368((*&Local_4 + 1096)[12], (*&Local_4 + 1868)[7], 1, 1, 1);
		Function_368((*&Local_4 + 1096)[22], (*&Local_4 + 1868)[8], 1, 1, 1);
		Function_286(Local_4.f_1124, 0);
	}
	else if (Function_537(Local_750) == 3)
	{
		iLocal_1068 = 1;
		if (!SQUAD_IS_VALID(bLocal_1007))
		{
			bLocal_1007 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "campZombiesSquad"));
		}
		Function_533();
	}
	else
	{
		iLocal_1068 = 1;
	}
	Function_532(Local_4.f_2488, "amb_factory_smoke", 0.569f, 0.0f, 0.712f, 1);
	return;
}

void Function_532(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5) //Position: 0x1CB2E / 117550
{
	vector3 vVar0;
	bool bVar3;
	
	GET_OBJECT_RELATIVE_POSITION(bParam0, vParam2, &vVar0);
	if (bParam5)
	{
		bVar3 = CREATE_VOLUME_IN_LAYOUT(Local_4, Function_59(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 10.0f, 2.0f);
		RESET_RMPTFX_IN_VOLUME(bVar3);
	}
	UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_59(), bParam1, vVar0), 0.0f, 0.0f, 0.0f);
}

void Function_533() //Position: 0x1CB7A / 117626
{
	Function_535();
	Function_310(Local_4.f_1308, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	SQUAD_JOIN((*&Local_4 + 1232)[02], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1232)[12], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1232)[22], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1232)[32], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1232)[42], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1232)[52], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1232)[62], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1232)[72], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1232)[82], bLocal_1007);
	Function_306(Local_4.f_1124, bLocal_1007, 4);
	Function_306(bLocal_1007, Local_4.f_1124, 4);
	Function_534(bLocal_1007, Local_4.f_1124, 0);
	Function_278(bLocal_1007);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1007, 0, 2, 4);
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1868)[3], 0.0f, 1, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1007, 0, 2, 2);
	TASK_GO_NEAR_OBJECT(false, Global_34573, 0.0f, 4, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1007, 0, 2, 4294967295);
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1868)[4], 0.0f, 1, 0, 1);
	return;
}

void Function_534(bool bParam0, bool bParam1, int iParam2) //Position: 0x1CC86 / 117894
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(bVar2, bVar3, iParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_535() //Position: 0x1CCF7 / 118007
{
	Local_4.f_1308 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S02_CampZombies_Wv02"));
	(*&Local_4 + 1232)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_E01", 153, -4341.712f, 4.057462f, 3739.319f, 0.0f, 205.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[02], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[02], -1.0f, 0, 0);
	(*&Local_4 + 1232)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_E02", 142, -4332.0f, 5.24222f, 3757.225f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[12], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[12], -1.0f, 0, 0);
	(*&Local_4 + 1232)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_E03", 74, -4312f, 4.445021f, 3763.082f, 0.0f, 245.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[22], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[22], -1.0f, 0, 0);
	(*&Local_4 + 1232)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_M01", 50, -4288f, 2.993114f, 3756.566f, 0.0f, 245.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[32], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[32], -1.0f, 0, 0);
	(*&Local_4 + 1232)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_M02", 49, -4285.485f, 3.071273f, 3734.514f, 0.0f, 266.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[42], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[42], -1.0f, 0, 0);
	(*&Local_4 + 1232)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_M03", 311, -4291.396f, 4.009795f, 3719.212f, 0.0f, -53.72361f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[52], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[52], -1.0f, 0, 0);
	(*&Local_4 + 1232)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_M04", 22, -4325f, 3.296772f, 3725f, 0.0f, 185.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[62], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[62], -1.0f, 0, 0);
	(*&Local_4 + 1232)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_M05", 87, -4302.593f, 4.589622f, 3720.25f, 0.0f, 162.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[72], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[72], -1.0f, 0, 0);
	(*&Local_4 + 1232)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_Wv02_H01", 202, -4290.937f, 3.290339f, 3748.0f, 0.0f, 85.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1232)[82], Local_4.f_1308);
	TASK_STAND_STILL((*&Local_4 + 1232)[82], -1.0f, 0, 0);
	return;
}

void Function_536() //Position: 0x1CFFE / 118782
{
	Local_4.f_1124 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nDeserters"));
	(*&Local_4 + 1096)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "speaker", 371, -4316.071f, 8.23325f, 3741.462f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1096)[02], Local_4.f_1124);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1096)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1096)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1096)[02], 8, 0.5f, 1, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_4 + 1096)[02], 0.0f);
	TASK_STAND_STILL((*&Local_4 + 1096)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1096)[02], 23);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 1096)[02], 1);
	(*&Local_4 + 1096)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "deserter_2", 370, -4310.72f, 7.759778f, 3739.249f, 0.0f, -37.51608f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1096)[12], Local_4.f_1124);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1096)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1096)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1096)[12], 8, 0.5f, 1, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_4 + 1096)[12], 0.1f);
	TASK_STAND_STILL((*&Local_4 + 1096)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1096)[12], 23);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 1096)[12], 1);
	(*&Local_4 + 1096)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "deserter_3", 369, -4310.702f, 7.764156f, 3746.989f, 0.0f, 208.9703f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1096)[22], Local_4.f_1124);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 1096)[22], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 1096)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 1096)[22], 8, 0.5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 1096)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1096)[22], 23);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 1096)[22], 1);
	return;
}

int Function_537(int iParam0) //Position: 0x1D1F1 / 119281
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

int Function_538() //Position: 0x1D20B / 119307
{
	Function_330(&Local_4 + 612, 371, 2, 0);
	Function_330(&Local_4 + 612, 153, 2, 0);
	Function_330(&Local_4 + 612, 142, 2, 0);
	Function_330(&Local_4 + 612, 74, 2, 0);
	Function_330(&Local_4 + 612, 50, 2, 0);
	Function_330(&Local_4 + 612, 49, 2, 0);
	Function_330(&Local_4 + 612, 311, 2, 0);
	Function_330(&Local_4 + 612, 22, 2, 0);
	Function_330(&Local_4 + 612, 87, 2, 0);
	Function_330(&Local_4 + 612, 202, 2, 0);
	if (Function_248(&Local_4 + 612))
	{
		return 1;
	}
	return 0;
}

void Function_539() //Position: 0x1D2A3 / 119459
{
	if (!IS_ACTOR_VALID(bLocal_1006))
	{
		bLocal_1006 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	Function_368(bLocal_1006, (*&Local_4 + 1868)[1], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1006, -1.0f, 0, 0);
	Function_368(Global_34573, (*&Local_4 + 1868)[2], 1, 1, 1);
	return;
}

void Function_540() //Position: 0x1D2EC / 119532
{
	if (SQUAD_IS_VALID(Local_4.f_1124))
	{
		switch (iLocal_1034)
		{
			case 0x00000000:
				if (Function_497(Global_34573, Local_4.f_1124, 1, 0, 0, -1.0f) || Function_541(Local_4.f_1124, Global_34573))
				{
					Function_465(Local_4.f_1124);
					Function_380(Local_4.f_1124, 1, 1, 1);
					Function_285(Local_4.f_1124, Global_34573, 4);
					SQUAD_SET_FACTION(Local_4.f_1124, 19);
					Function_471(Local_4.f_1124, Global_34573, 0);
					Function_277(Local_4.f_1124, Local_4.f_1796, 4, 0);
					Function_278(Local_4.f_1124);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_1124, 1, 1, 4294967295);
					TASK_KILL_CHAR(false, Global_34573);
					iLocal_1043 = 4;
					iLocal_1034++;
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID((*&Local_4 + 1096)[02]))
				{
					if (Function_400(Global_34573, (*&Local_4 + 1096)[02]) <= 80.0f)
					{
						RELEASE_ACTOR_AS_AMBIENT((*&Local_4 + 1096)[02]);
					}
				}
				if (IS_ACTOR_VALID((*&Local_4 + 1096)[12]))
				{
					if (Function_400(Global_34573, (*&Local_4 + 1096)[12]) <= 80.0f)
					{
						RELEASE_ACTOR_AS_AMBIENT((*&Local_4 + 1096)[12]);
					}
				}
				if (IS_ACTOR_VALID((*&Local_4 + 1096)[22]))
				{
					if (Function_400(Global_34573, (*&Local_4 + 1096)[22]) <= 80.0f)
					{
						RELEASE_ACTOR_AS_AMBIENT((*&Local_4 + 1096)[22]);
					}
				}
				break;
			}
	}
	return;
}

int Function_541(bool bParam0, bool bParam1) //Position: 0x1D430 / 119856
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
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
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar1)) > 1.0f)
				{
					if (GET_LAST_ATTACKER(bVar1) == bParam1)
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

void Function_542() //Position: 0x1D4A3 / 119971
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1736))
	{
		if (!SQUAD_IS_VALID(Local_4.f_1092))
		{
			Function_298();
			TELEPORT_OBJECT_TO_OBJECT((*&Local_4 + 1048)[42], Local_630.f_108, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TELEPORT_OBJECT_TO_OBJECT((*&Local_4 + 1048)[12], Local_630.f_164, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TELEPORT_OBJECT_TO_OBJECT((*&Local_4 + 1048)[02], Local_705.f_68, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 1048)[02], 4294967295);
			Function_287(0, 1);
			Function_380(Local_4.f_1092, 0, 0, 0);
			Function_544();
		}
		if (iLocal_811 > 3 && !iLocal_1077)
		{
			if (Function_497(Global_34573, Local_4.f_1092, 1, 1, 0, 3212836864))
			{
				SQUAD_SET_FACTION(Local_4.f_1092, 22);
				Function_543();
				iLocal_1077 = 1;
			}
		}
	}
	else if (SQUAD_IS_VALID(Local_4.f_1092))
	{
		iLocal_1076 = 0;
		iLocal_1077 = 0;
		Function_287(0, 0);
		Function_275(&Local_4 + 1092);
		DESTROY_OBJECT(Local_4.f_1092);
	}
	return;
}

void Function_543() //Position: 0x1D598 / 120216
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Z02_AssaultsArmyCapt", "Z02_AssaultsArmyCapt", 0, 3, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_544() //Position: 0x1D5E7 / 120295
{
	Unknown_Function();
	if (!9 && !iLocal_1076)
	{
		Function_278(Local_4.f_1092);
		SQUAD_SET_FACTION(Local_4.f_1092, 1);
		SNAP_ACTOR_TO_GRINGO((*&Local_4 + 1048)[02], Local_734.f_44, "USECASE1", 1, 0, 0);
		TASK_USE_GRINGO((*&Local_4 + 1048)[02], GET_GRINGO_FROM_OBJECT(Local_734.f_44), "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[02], 2);
		TASK_WANDER_IN_VOLUME((*&Local_4 + 1048)[42], Local_4.f_1804, -1f);
		TASK_WANDER_IN_VOLUME((*&Local_4 + 1048)[32], Local_4.f_1804, -1f);
		TASK_WANDER_IN_VOLUME((*&Local_4 + 1048)[22], Local_4.f_1804, -1f);
		TASK_STAND_STILL((*&Local_4 + 1048)[12], -1.0f, 1, 0);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[42], 2);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[32], 2);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[12], 2);
		TASK_PRIORITY_SET((*&Local_4 + 1048)[22], 2);
		Function_279(Local_4.f_1092, 0.0f);
		Function_380(Local_4.f_1092, 1, 1, 1);
		iLocal_1076 = 1;
	}
	return;
}

void Function_545() //Position: 0x1D6EC / 120556
{
	if (iLocal_812 > 6)
	{
		Function_579();
		Function_572();
	}
	if (iLocal_812 > 9)
	{
		Function_438((*&Local_4 + 1868)[5], "Zombie02_Warn_Camp", "Zombie02_Fail_Camp", "Z02_Deserter_Camp", bLocal_1007);
		Function_571();
		Function_542();
	}
	switch (iLocal_812)
	{
		case 0x00000000:
			Function_369(0);
			if (!iLocal_913[0])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_570();
				Function_366(&iLocal_969);
				iLocal_812 = 1;
			}
			else
			{
				Function_366(&iLocal_969);
				iLocal_812 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_569())
				{
					Function_197((*&Local_4 + 1840)[2]);
					if (Function_344(StackVal, StackVal, Function_197((*&Local_4 + 1840)[2]), 175.438f))
					{
						AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						Function_366(&iLocal_969);
						iLocal_812 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADING())
			{
				Function_196(iLocal_811);
				Function_418(StackVal, StackVal, Function_196(iLocal_811), iLocal_811, Global_30628[1], Function_199(iLocal_811), 0);
				Function_230(1.0f);
				STREAMING_UNLOAD_BOUNDS();
				Function_538();
				Function_568(Local_750, 0);
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				iLocal_1043 = 0;
				Function_366(&iLocal_969);
				iLocal_812 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1720) || Function_567(Local_4.f_1124) < 0))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1868)[5])))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT((*&Local_4 + 1868)[5]));
				}
				Function_366(&iLocal_969);
				iLocal_812 = 9;
			}
			break;
		
		case 0x00000009:
			Function_564();
			Function_562();
			AUDIO_SET_PLAYER_MOOD(1, 0);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			iLocal_1034 = 0;
			Function_366(&iLocal_969);
			iLocal_812 = 10;
			break;
		
		case 0x0000000A:
			Function_558();
			if (Function_376(0x40800000))
			{
				Function_27("Zombie02_Stg02_obj10", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_557(1, 0);
				iLocal_812 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_558();
			break;
		
		case 0x0000000C:
			Function_555();
			break;
		
		case 0x0000000D:
			Function_548();
			break;
		
		case 0x00000010:
			Function_557(0, 0);
			Function_547();
			ADD_BLIP_FOR_OBJECT(Local_4.f_2440, 330, 0f, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_OBJECT(Local_4.f_2440), "Z02_Blip_UniformChest");
			Function_27("Zombie02_Stg02_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_366(&iLocal_969);
			iLocal_812 = 17;
			break;
		
		case 0x00000011:
			Unknown_Function();
			if (9 && iLocal_1037 <= 1)
			{
				Unknown_Function();
				if (StackVal)
				{
					Function_368(Global_34573, (*&Local_4 + 1868)[2], 1, 1, 1);
					Function_366(&iLocal_969);
					iLocal_812 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_1124) >= 0)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) >= 0)
				{
					if (bLocal_1060 || iLocal_1068)
					{
						Function_568(Local_750, 2);
					}
				}
				else if (bLocal_1060 || iLocal_1068)
				{
					Function_568(Local_750, 1);
				}
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) >= 0)
			{
				Function_568(Local_750, 3);
			}
			else
			{
				Function_568(Local_750, 4);
			}
			STREAMING_UNLOAD_BOUNDS();
			STREAMING_UNLOAD_SCENE();
			iLocal_913[1] = 1;
			iLocal_1053 = 0;
			iLocal_1070 = 0;
			Function_546();
			iLocal_811 = 2;
			iLocal_812 = 0;
			break;
	}
	return;
}

void Function_546() //Position: 0x1DA7A / 121466
{
	Function_138(&Local_4 + 452);
	return;
}

void Function_547() //Position: 0x1DA88 / 121480
{
	Function_430(Local_4.f_1124, 0);
	Function_278(Local_4.f_1124);
	Function_286(Local_4.f_1124, 0);
	SQUAD_SET_FACTION(Local_4.f_1124, 1);
	if (IS_ACTOR_VALID((*&Local_4 + 1096)[02]))
	{
		SET_ACTOR_FACTION((*&Local_4 + 1096)[02], 1);
		TASK_WANDER_IN_VOLUME((*&Local_4 + 1096)[02], Local_4.f_1800, -1.0f);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 1096)[12]))
	{
		SET_ACTOR_FACTION((*&Local_4 + 1096)[12], 1);
		TASK_WANDER_IN_VOLUME((*&Local_4 + 1096)[12], Local_4.f_1800, -1.0f);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 1096)[22]))
	{
		SET_ACTOR_FACTION((*&Local_4 + 1096)[22], 1);
		TASK_WANDER_IN_VOLUME((*&Local_4 + 1096)[22], Local_4.f_1800, -1.0f);
	}
	return;
}

void Function_548() //Position: 0x1DB32 / 121650
{
	if (iLocal_1038 <= 1)
	{
		iLocal_1038++;
	}
	Function_554();
	Function_553();
	if (!bLocal_1060)
	{
		if (!IS_ACTOR_ALIVE((*&Local_4 + 1096)[02]))
		{
			Function_552();
		}
		switch (iLocal_1034)
		{
			case 0x00000000:
				if (IS_ACTOR_ALIVE((*&Local_4 + 1096)[02]))
				{
					Function_285(Local_4.f_1124, Global_34573, 2);
					Function_551(Local_4.f_1124);
				}
				Function_550();
				iLocal_1034 = 1;
				Function_366(&iLocal_984);
				Function_366(&iLocal_975);
				Function_366(&iLocal_969);
				break;
			
			case 0x00000001:
				if (IS_ACTOR_ALIVE((*&Local_4 + 1096)[02]))
				{
					if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1728) && IS_ACTOR_IN_VOLUME((*&Local_4 + 1096)[02], Local_4.f_1728)) && Function_237(&iLocal_969) < 2.0f)
					{
						iLocal_1034 = 2;
					}
					else if (Function_237(&iLocal_975) <= 5.0f)
					{
						Function_27("Zombie02_Stg02_obj08", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_557(1, 1);
						Function_549(bLocal_1007);
						Function_366(&iLocal_975);
						Function_366(&iLocal_969);
						iLocal_1034 = 2;
					}
				}
				break;
			
			case 0x00000002:
				if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1728) && IS_ACTOR_IN_VOLUME((*&Local_4 + 1096)[02], Local_4.f_1728)) && Function_237(&iLocal_969) < 2.0f)
				{
					Function_448();
					Function_144((*&Local_4 + 1096)[02]);
					iLocal_1074 = 1;
					Function_366(&iLocal_969);
					iLocal_1034 = 3;
				}
				break;
			}
	}
	return;
}

void Function_549(bool bParam0) //Position: 0x1DC90 / 122000
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

void Function_550() //Position: 0x1DCDD / 122077
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_FormPerim", "Z02_FormPerim", 0, 3, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_551(bool bParam0) //Position: 0x1DD1E / 122142
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		CLEAR_LAST_HIT(bVar1);
		bVar0++;
	}
	return;
}

void Function_552() //Position: 0x1DD4D / 122189
{
	iLocal_1034 = 0;
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) >= 0)
	{
		Function_285(Local_4.f_1124, Global_34573, 4);
		iLocal_1068 = 1;
	}
	Function_366(&iLocal_969);
	iLocal_812 = 17;
	return;
}

void Function_553() //Position: 0x1DD7C / 122236
{
	if (IS_ACTOR_VALID((*&Local_4 + 1096)[22]))
	{
		if (!IS_ACTOR_IN_VOLUME((*&Local_4 + 1096)[22], Local_4.f_1740))
		{
			if (!iLocal_1082)
			{
				AI_SET_NAV_PATHFINDING_ENABLED((*&Local_4 + 1096)[22], 1);
				iLocal_1082 = 1;
			}
		}
	}
	if (IS_ACTOR_VALID((*&Local_4 + 1096)[12]))
	{
		if (!IS_ACTOR_IN_VOLUME((*&Local_4 + 1096)[12], Local_4.f_1740))
		{
			if (!iLocal_1083)
			{
				AI_SET_NAV_PATHFINDING_ENABLED((*&Local_4 + 1096)[12], 1);
				iLocal_1083 = 1;
			}
		}
	}
	if (IS_ACTOR_VALID((*&Local_4 + 1096)[02]))
	{
		if (!IS_ACTOR_IN_VOLUME((*&Local_4 + 1096)[02], Local_4.f_1740))
		{
			if (!iLocal_1084)
			{
				AI_SET_NAV_PATHFINDING_ENABLED((*&Local_4 + 1096)[02], 1);
				iLocal_1084 = 1;
			}
		}
	}
	return;
}

void Function_554() //Position: 0x1DE2D / 122413
{
	if (Function_397(Local_4.f_1124, Global_34573))
	{
		iLocal_1038 += 2;
	}
	if (Function_497(Global_34573, Local_4.f_1124, 1, 0, 0, -1.0f) || Function_541(Local_4.f_1124, Global_34573))
	{
		if (iLocal_1038 > 1)
		{
			bLocal_1060 = true;
			iLocal_1034 = 0;
			Function_366(&iLocal_975);
			iLocal_812 = 12;
		}
		else
		{
			iLocal_1038++;
			Function_551(Local_4.f_1124);
		}
	}
	return;
}

void Function_555() //Position: 0x1DE94 / 122516
{
	switch (iLocal_1034)
	{
		case 0x00000000:
			Function_465(Local_4.f_1124);
			Function_380(Local_4.f_1124, 1, 1, 1);
			Function_285(Local_4.f_1124, Global_34573, 4);
			Function_306(Local_4.f_1124, bLocal_1007, 4);
			SQUAD_SET_FACTION(Local_4.f_1124, 19);
			Function_471(Local_4.f_1124, Global_34573, 0);
			Function_277(Local_4.f_1124, Local_4.f_1796, 4, 0);
			Function_278(Local_4.f_1124);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_1124, 1, 1, 4294967295);
			TASK_KILL_CHAR(false, Global_34573);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_1124) >= 0)
			{
				Function_549(Local_4.f_1124);
				Function_377(Local_4.f_1124, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			Function_366(&iLocal_969);
			iLocal_1034 = 1;
			break;
		
		case 0x00000001:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_1124) >= 0)
			{
				if (Function_376(0x40800000))
				{
					Function_27("Zombie02_Stg02_obj07", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_366(&iLocal_969);
					iLocal_1034 = 2;
				}
				else if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
				}
			}
			else
			{
				Function_366(&iLocal_969);
				iLocal_1034 = 2;
			}
			break;
		
		case 0x00000002:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_1124) <= 1)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) >= 0)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) >= 5)
					{
						if (Function_376(0x40800000))
						{
							Function_27("Zombie02_Stg02_obj11", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_366(&iLocal_969);
							iLocal_1034 = 3;
						}
						else if (Function_556())
						{
							Function_448();
						}
					}
					else
					{
						Function_366(&iLocal_969);
						iLocal_1034 = 3;
					}
				}
				else
				{
					Function_366(&iLocal_969);
					iLocal_1034 = 4;
				}
			}
			break;
		
		case 0x00000003:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) >= 5 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) < 0)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1007)))
				{
					Function_377(bLocal_1007, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (Function_376(0x40800000))
				{
					Function_27("Zombie02_Stg02_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_366(&iLocal_969);
					iLocal_1034 = 4;
				}
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) < 0)
			{
				Function_366(&iLocal_969);
				iLocal_1034 = 4;
			}
			break;
		
		case 0x00000004:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) < 0)
			{
				Function_448();
				Function_366(&iLocal_969);
				iLocal_812 = 16;
			}
			break;
	}
	return;
}

bool Function_556() //Position: 0x1E0F5 / 123125
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_557(bool bParam0, bool bParam1) //Position: 0x1E102 / 123138
{
	if (bParam0)
	{
		if (IS_ACTOR_VALID((*&Local_4 + 1096)[02]))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 1096)[02])))
			{
				ADD_BLIP_FOR_ACTOR((*&Local_4 + 1096)[02], 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR((*&Local_4 + 1096)[02]), "Z02_Blip_Deserters");
			}
		}
		if (!bParam1)
		{
			if (IS_ACTOR_VALID((*&Local_4 + 1096)[12]))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 1096)[12])))
				{
					ADD_BLIP_FOR_ACTOR((*&Local_4 + 1096)[12], 325, 0, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR((*&Local_4 + 1096)[12]), "Z02_Blip_Deserters");
				}
			}
			if (IS_ACTOR_VALID((*&Local_4 + 1096)[22]))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 1096)[22])))
				{
					ADD_BLIP_FOR_ACTOR((*&Local_4 + 1096)[22], 325, 0, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR((*&Local_4 + 1096)[22]), "Z02_Blip_Deserters");
				}
			}
		}
	}
	else
	{
		if (IS_ACTOR_VALID((*&Local_4 + 1096)[02]))
		{
			Function_144((*&Local_4 + 1096)[02]);
		}
		if (IS_ACTOR_VALID((*&Local_4 + 1096)[12]))
		{
			Function_144((*&Local_4 + 1096)[12]);
		}
		if (IS_ACTOR_VALID((*&Local_4 + 1096)[22]))
		{
			Function_144((*&Local_4 + 1096)[22]);
		}
	}
	return;
}

void Function_558() //Position: 0x1E260 / 123488
{
	if (iLocal_1041 <= 3)
	{
		Function_560();
		Function_508(StackVal, StackVal, *(&Local_4 + 2240));
	}
	Function_554();
	switch (iLocal_1041)
	{
		case 0x00000000:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) < 3)
			{
				Function_533();
				iLocal_1041++;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_1053)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) < 5)
				{
					Function_557(0, 0);
					Function_377(bLocal_1007, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_27("Zombie02_Stg02_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_1053 = 1;
					iLocal_1041++;
				}
			}
			break;
		
		case 0x00000002:
			if (!iLocal_1070)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) < 2)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
					iLocal_1070 = 1;
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1007) < 0)
			{
				AUDIO_SET_PLAYER_MOOD(0, 0);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				Function_559();
				iLocal_1037 = 0;
				iLocal_1034 = 0;
				iLocal_1041++;
				Function_366(&iLocal_975);
				iLocal_812 = 13;
			}
			break;
	}
	return;
}

void Function_559() //Position: 0x1E375 / 123765
{
	bool bVar0;
	
	SQUAD_GOALS_CLEAR(Local_4.f_1124);
	Function_430(Local_4.f_1124, 1);
	bVar0 = (*&Local_4 + 1096)[02];
	if (IS_ACTOR_VALID(bVar0))
	{
		MEMORY_CLEAR_ALL(bVar0);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bVar0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bVar0, 0);
		iLocal_1084 = 0;
		bLocal_1040 = TASK_SEQUENCE_OPEN();
		TASK_STAND_STILL(false, RAND_FLOAT_RANGE(3.0f, 4.0f), 0, 0);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2468, 1, 0, 0, 1, 0);
		TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(bVar0);
		TASK_SEQUENCE_PERFORM(bVar0, bLocal_1040);
		TASK_SEQUENCE_RELEASE(bLocal_1040, 1);
		TASK_PRIORITY_SET(bVar0, 1);
	}
	bVar0 = (*&Local_4 + 1096)[12];
	if (IS_ACTOR_VALID(bVar0))
	{
		MEMORY_CLEAR_ALL(bVar0);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bVar0, 0);
		iLocal_1082 = 0;
		bLocal_1040 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(false, 1);
		TASK_STAND_STILL(false, RAND_FLOAT_RANGE(2.0f, 4.0f), 0, 0);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2464, 1, 0, 0, 1, 0);
		TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(bVar0);
		TASK_SEQUENCE_PERFORM(bVar0, bLocal_1040);
		TASK_SEQUENCE_RELEASE(bLocal_1040, 1);
		TASK_PRIORITY_SET(bVar0, 1);
	}
	bVar0 = (*&Local_4 + 1096)[22];
	if (IS_ACTOR_VALID(bVar0))
	{
		MEMORY_CLEAR_ALL(bVar0);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bVar0, 0);
		iLocal_1083 = 0;
		bLocal_1040 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(false, 1);
		TASK_STAND_STILL(false, RAND_FLOAT_RANGE(1.0f, 3.0f), 0, 0);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2460, 1, 0, 0, 1, 0);
		TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(bVar0);
		TASK_SEQUENCE_PERFORM(bVar0, bLocal_1040);
		TASK_SEQUENCE_RELEASE(bLocal_1040, 1);
		TASK_PRIORITY_SET(bVar0, 1);
	}
	return;
}

void Function_560() //Position: 0x1E501 / 124161
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_561(Local_4.f_1124, Local_4.f_1740))
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_1124))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_1124, bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (!IS_ACTOR_IN_VOLUME(bVar0, Local_4.f_1740))
				{
					if (GET_TASK_STATUS(bVar0, 50) != 1)
					{
						TASK_CLEAR(bVar0);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar0, -1.0f);
					}
				}
			}
			bVar1++;
		}
	}
	return;
}

bool Function_561(bool bParam0, bool bParam1) //Position: 0x1E569 / 124265
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (!IS_ACTOR_IN_VOLUME(bVar1, bParam1))
				{
					return 0;
				}
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_562() //Position: 0x1E5B7 / 124343
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_1124))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_1124, bVar0);
		Function_336(bVar1);
		bVar2 = Function_563(StackVal, StackVal, &Local_4 + 1940, Function_336(bVar1), 0, 0x42960000);
		bVar6 = GET_OBJECT_HEADING(bVar2);
		Function_197(bVar2);
		vVar3 = { StackVal, StackVal, Function_197(bVar2) };
		bLocal_1040 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(false, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vVar3, bVar6, -1.0f);
		TASK_CROUCH(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(bVar1);
		TASK_SEQUENCE_PERFORM(bVar1, bLocal_1040);
		TASK_SEQUENCE_RELEASE(bLocal_1040, 1);
		TASK_PRIORITY_SET(bVar1, 1);
		SET_OBJECT_POSITION(bVar2, 0.0f, 0.0f, 0.0f);
		bVar0++;
	}
	return;
}

var Function_563(var uParam0, vector3 vParam1, float fParam4, float fParam5) //Position: 0x1E646 / 124486
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	bVar3 = 999999.0f;
	if (!IS_OBJECTSET_VALID(*uParam0))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(*uParam0) < 0)
	{
		return "";
	}
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(*uParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, *uParam0);
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vParam1, vVar4);
		if ((bVar2 >= bVar3 && bVar2 <= fParam4) && bVar2 >= fParam5)
		{
			bVar3 = bVar2;
			bVar1 = bVar0;
		}
		bVar7++;
	}
	return bVar1;
}

void Function_564() //Position: 0x1E6C9 / 124617
{
	if (!SQUAD_IS_VALID(bLocal_1007))
	{
		bLocal_1007 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "campZombiesSquad"));
	}
	if (!SQUAD_IS_VALID(Local_4.f_1204))
	{
		Function_566();
	}
	if (!SQUAD_IS_VALID(Local_4.f_1228))
	{
		Function_565();
	}
	AI_STOP_IGNORING_ACTORS();
	Function_306(Local_4.f_1204, Local_4.f_1228, 0);
	Function_306(Local_4.f_1228, Local_4.f_1204, 0);
	bLocal_1007 = Local_4.f_1204;
	Function_310(bLocal_1007, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	SQUAD_JOIN((*&Local_4 + 1208)[02], bLocal_1007);
	SQUAD_JOIN((*&Local_4 + 1208)[12], bLocal_1007);
	Function_306(Local_4.f_1124, bLocal_1007, 4);
	Function_306(bLocal_1007, Local_4.f_1124, 4);
	Function_534(bLocal_1007, Local_4.f_1124, 0);
	Function_278(bLocal_1007);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1007, 0, 2, 4);
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1868)[3], 0.0f, 1, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1007, 0, 2, 2);
	TASK_GO_NEAR_OBJECT(false, Global_34573, 0.0f, 4, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1007, 0, 2, 4294967295);
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1868)[4], 0.0f, 1, 0, 1);
	return;
}

void Function_565() //Position: 0x1E7DA / 124890
{
	Local_4.f_1228 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S02_Camp_Special_Z"));
	(*&Local_4 + 1208)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_T03", 1224, -4304.435f, 5.475019f, 3738.8f, 0.0f, 143.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1208)[02], Local_4.f_1228);
	TASK_STAND_STILL((*&Local_4 + 1208)[02], -1.0f, 0, 0);
	(*&Local_4 + 1208)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_T04", 1227, -4323.217f, 4.915652f, 3748.0f, 0.0f, -54.72361f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1208)[12], Local_4.f_1228);
	TASK_STAND_STILL((*&Local_4 + 1208)[12], -1.0f, 0, 0);
	return;
}

void Function_566() //Position: 0x1E89C / 125084
{
	Local_4.f_1204 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S02_CampZombies"));
	(*&Local_4 + 1128)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_E01", 202, -4315.316f, 4.995399f, 3732f, 0.0f, 205.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[02], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[02], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[02]);
	(*&Local_4 + 1128)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_E02", 87, -4317.871f, 4.674454f, 3733.87f, 0.0f, 222.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[12], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[12], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[12]);
	(*&Local_4 + 1128)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_E03", 46, -4321.102f, 4.685884f, 3737.318f, 0.0f, 245.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[22], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[22], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[22]);
	(*&Local_4 + 1128)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_M01", 311, -4324.269f, 4.867883f, 3741.711f, 0.0f, 245.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[32], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[32], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[32]);
	(*&Local_4 + 1128)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_M02", 49, -4325.416f, 5.258275f, 3746.678f, 0.0f, 266.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[42], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[42], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[42]);
	(*&Local_4 + 1128)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_M03", 50, -4323.798f, 5.27557f, 3751.063f, 0.0f, -53.72361f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[52], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[52], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[52]);
	(*&Local_4 + 1128)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_M04", 74, -4312.0f, 5.067668f, 3733.999f, 0.0f, 185.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[62], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[62], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[62], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[62]);
	(*&Local_4 + 1128)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_M05", 142, -4306.496f, 5.174467f, 3736f, 0.0f, 162.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[72], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[72], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[72], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[72]);
	(*&Local_4 + 1128)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CZ_H01", 153, -4302.252f, 5.209476f, 3740.512f, 0.0f, 85.2764f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 1128)[82], Local_4.f_1204);
	TASK_STAND_STILL((*&Local_4 + 1128)[82], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 1128)[82], 19);
	AI_IGNORE_ACTOR((*&Local_4 + 1128)[82]);
	return;
}

int Function_567(bool bParam0) //Position: 0x1EC54 / 126036
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (Function_405(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_568(int iParam0, int iParam1) //Position: 0x1ECA1 / 126113
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

bool Function_569() //Position: 0x1ECBC / 126140
{
	Function_330(&Local_4 + 452, 371, 2, 0);
	Function_330(&Local_4 + 452, 202, 2, 0);
	Function_330(&Local_4 + 452, 87, 2, 0);
	Function_330(&Local_4 + 452, 46, 2, 0);
	Function_330(&Local_4 + 452, 311, 2, 0);
	Function_330(&Local_4 + 452, 49, 2, 0);
	Function_330(&Local_4 + 452, 50, 2, 0);
	Function_330(&Local_4 + 452, 74, 2, 0);
	Function_330(&Local_4 + 452, 142, 2, 0);
	Function_330(&Local_4 + 452, 153, 2, 0);
	Function_330(&Local_4 + 452, 1224, 2, 0);
	Function_330(&Local_4 + 452, 1227, 2, 0);
	Function_330(&Local_4 + 452, 22, 2, 0);
	if (Function_248(&Local_4 + 452))
	{
		return 1;
	}
	return 0;
}

void Function_570() //Position: 0x1ED7D / 126333
{
	if (!IS_ACTOR_VALID(bLocal_1006))
	{
		bLocal_1006 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	TASK_STAND_STILL(bLocal_1006, -1.0f, 0, 0);
	ACTOR_MOUNT_ACTOR(Global_34573, bLocal_1006);
	Function_368(bLocal_1006, (*&Local_4 + 1964)[1], 1, 1, 1);
	ADD_BLIP_FOR_OBJECT((*&Local_4 + 1868)[5], 330, 0f, 2, 0);
	SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1868)[5]), "Z02_Deserter_Camp");
	return;
}

void Function_571() //Position: 0x1EDF3 / 126451
{
	switch (iLocal_1037)
	{
		case 0xFFFFFFFE:
			if (!IS_GRINGO_VALID(bLocal_1005))
			{
				bLocal_1005 = GET_GRINGO_FROM_OBJECT(Local_4.f_2440);
			}
			else if (GRINGO_IS_ACTIVATION_ALLOWED(bLocal_1005))
			{
				GRINGO_ALLOW_ACTIVATION(bLocal_1005, false);
				iLocal_1037 = 4294967295;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!GRINGO_IS_ACTIVATION_ALLOWED(bLocal_1005))
			{
				GRINGO_ALLOW_ACTIVATION(bLocal_1005, true);
				iLocal_1037 = 0;
			}
			break;
		
		case 0x00000000:
			if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(Local_4.f_2440))
			{
				Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0);
				HUD_CLEAR_OBJECTIVE();
				iLocal_1037 = 1;
			}
			break;
		
		case 0x00000001:
			if ((GET_CURRENT_GRINGO(Global_34573) != "" && DECOR_CHECK_EXIST(Local_4.f_2440, "GringoIsDone")) || HUD_IS_FADED())
			{
				Function_557(0, 0);
				Function_358(9, 1, 0, 0, 1);
				Unknown_Function();
				Function_552();
				iLocal_1037 = 2;
			}
			break;
	}
	return;
}

void Function_572() //Position: 0x1EECB / 126667
{
	if (bLocal_1060 && iLocal_1043 > 6)
	{
		iLocal_1043 = 6;
		Function_201();
		if (IS_ACTOR_ALIVE((*&Local_4 + 1096)[02]))
		{
			Function_525();
		}
	}
	switch (iLocal_1043)
	{
		case 0x00000000:
			if (Function_578(Local_4.f_1720, 1.0f, 80.0f, 1, 1, 0))
			{
				if (Function_382(0x41000000))
				{
					Function_577();
					iLocal_1043++;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_400(Global_34573, (*&Local_4 + 1096)[02]) > 25.0f)
			{
				if (Function_382(0x41000000))
				{
					Function_576();
					iLocal_1043++;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_400(Global_34573, (*&Local_4 + 1096)[02]) > 40.0f)
			{
				if (Function_382(0x41000000))
				{
					Function_179();
					Function_366(&iLocal_984);
					iLocal_1043++;
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_1041 >= 0)
			{
				if (Function_382(0x41000000))
				{
					Function_575();
					Function_366(&iLocal_984);
					iLocal_1043++;
				}
			}
			else if (Function_382(0x41000000))
			{
				Function_574();
				Function_366(&iLocal_984);
			}
			break;
		
		case 0x00000004:
			if ((Function_382(2.0f) && iLocal_1034 <= 2) && iLocal_1074)
			{
				Function_573();
				AI_GOAL_LOOK_AT_ACTOR_NEW((*&Local_4 + 1096)[02], Global_34573, -1f, 0);
				iLocal_1043++;
				Function_366(&iLocal_984);
			}
			else if (Function_382(15.0f) && iLocal_1041 > 3)
			{
				Function_574();
				Function_366(&iLocal_984);
			}
			break;
		
		case 0x00000005:
			if (Function_382(0x41000000))
			{
				Function_366(&iLocal_969);
				iLocal_812 = 16;
				iLocal_1043++;
			}
			break;
	}
	return;
}

void Function_573() //Position: 0x1F068 / 127080
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_GiveMeAUniform_v1_AA", "Z02_GiveMeAUniform_v1_AA", 0, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_GiveMeAUniform_v1_AB", "Z02_GiveMeAUniform_v1_AB", 2, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(2, "Z02_GiveMeAUniform_v1_AC", "Z02_GiveMeAUniform_v1_AC", 0, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_GiveMeAUniform_v1_AD1", "Z02_GiveMeAUniform_v1_AD1", 2, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Z02_GiveMeAUniform_v1_AD2", "Z02_GiveMeAUniform_v1_AD2", 2, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(2, "Z02_GiveMeAUniform_v1_AE1", "Z02_GiveMeAUniform_v1_AE1", 0, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(2, "Z02_GiveMeAUniform_v1_AE2", "Z02_GiveMeAUniform_v1_AE2", 0, 1, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_574() //Position: 0x1F241 / 127553
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_YellsAtZombs", "Z02_YellsAtZombs", 0, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_575() //Position: 0x1F288 / 127624
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_AnotWaveZombs", "Z02_AnotWaveZombs", 0, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_576() //Position: 0x1F2D1 / 127697
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_ZombClose", "Z02_ZombClose", 0, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_577() //Position: 0x1F312 / 127762
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Z02_SpotsSmoke", "Z02_SpotsSmoke", 2, 1, 1, 0, 1);
	Function_180(1);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_578(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1F355 / 127829
{
	return CAMERA_IS_VISIBLE_VOLUME(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_579() //Position: 0x1F36F / 127855
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1724))
	{
		if (!iLocal_1069)
		{
			Function_359("Zombie02_Help_Camp01", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_1069 = 1;
		}
		if (!SQUAD_IS_VALID(Local_4.f_1124))
		{
			Function_536();
		}
		if (!SQUAD_IS_VALID(Local_4.f_1204))
		{
			Function_566();
		}
		if (iLocal_812 < 11)
		{
			Function_506(Local_4.f_1124, (*&Local_4 + 1868)[5], 0x3f000000, 0x3fe00000);
		}
		if (!iLocal_1056)
		{
			Function_380(Local_4.f_1124, 0, 0, 0);
			Function_285(Local_4.f_1124, Global_34573, 1);
			Function_286(Local_4.f_1124, 0);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_1124, true, Local_4.f_1796, 4294967295);
			Function_277(Local_4.f_1124, Local_4.f_1796, 2, 0);
			Function_279(Local_4.f_1124, 0.0f);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_1124, 658056);
			Function_197((*&Local_4 + 1868)[13]);
			vLocal_1017 = { StackVal, StackVal, Function_197((*&Local_4 + 1868)[13]) };
			Function_320((*&Local_4 + 1868)[13]);
			vLocal_1020 = { StackVal, StackVal, Function_320((*&Local_4 + 1868)[13]) };
			STREAMING_LOAD_SCENE_EXT(vLocal_1017, vLocal_1020, 0);
			if (!SQUAD_IS_VALID(bLocal_1007))
			{
				bLocal_1007 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "campZombiesSquad"));
			}
			bLocal_1007 = Local_4.f_1204;
			Function_310(bLocal_1007, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
			Function_532(Local_4.f_2488, "amb_factory_smoke", 0.569f, 0.0f, 0.712f, 1);
			iLocal_1041 = 0;
			iLocal_1056 = 1;
		}
	}
	return;
}

void Function_580() //Position: 0x1F4EC / 128236
{
	if (iLocal_812 >= 6)
	{
		Function_542();
	}
	switch (iLocal_812)
	{
		case 0x00000000:
			Function_369(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_581();
			Function_366(&iLocal_969);
			iLocal_812 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_366(&iLocal_969);
				iLocal_812 = 2;
			}
			break;
		
		case 0x00000002:
			Function_197((*&Local_4 + 1840)[2]);
			if (Function_344(StackVal, StackVal, Function_197((*&Local_4 + 1840)[2]), 175.438f))
			{
				if (Function_242(&Local_750))
				{
					Function_337();
					Function_197(bLocal_1006);
					ENABLE_GAME_CAMERA_FOCUS(Function_197(bLocal_1006), 0.0f, 0, 1, 1, 0);
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_1029, 76.72f, 0, false, 0);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
					TASK_CLEAR(Global_34573);
					ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.5f, 0);
				}
				Function_366(&iLocal_969);
				iLocal_812 = 4;
			}
			break;
		
		case 0x00000004:
			Function_196(iLocal_811);
			Function_418(StackVal, StackVal, Function_196(iLocal_811), iLocal_811, Global_30628[1], Function_199(iLocal_811), 0);
			Function_230(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			iLocal_812 = 6;
			break;
		
		case 0x00000006:
			if (Function_376(1.0f))
			{
				Function_201();
				Function_27("Zombie02_Stg01_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1868)[5], 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1868)[5]), "Z02_Deserter_Camp");
				iLocal_812 = 7;
			}
			break;
		
		case 0x00000007:
			Function_523((*&Local_4 + 1868)[5], 170.0f);
			if (!bLocal_1052)
			{
				bLocal_1052 = Function_569();
			}
			if (!iLocal_1070)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
					iLocal_1070 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1724))
			{
				iLocal_812 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_1070 = 0;
			STREAMING_UNLOAD_BOUNDS();
			iLocal_913[0] = 1;
			iLocal_811 = 1;
			iLocal_812 = 0;
			break;
	}
	return;
}

void Function_581() //Position: 0x1F6D7 / 128727
{
	SET_DRAW_OBJECT(bLocal_1003, 1);
	if (!IS_ACTOR_VALID(bLocal_1006))
	{
		bLocal_1006 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	TELEPORT_OBJECT_TO_OBJECT(bLocal_1006, (*&Local_4 + 1840)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
	TASK_STAND_STILL(bLocal_1006, -1.0f, 0, 0);
	AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	return;
}

void Function_582() //Position: 0x1F730 / 128816
{
	switch (iLocal_812)
	{
		case 0x00000006:
			Function_593(&Local_750, 1);
			Function_152(&(Global_29008[Global_30658[4]]), 256);
			bLocal_749 = CREATE_LAYOUT("ZOMBIE02_DYNAMICLAYOUT");
			Function_156(0x4000000);
			Function_126(114696);
			Function_591(1);
			Function_590(6, 1);
			Function_589();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_814 = CREATE_OBJECT_ITERATOR(bLocal_749);
			AUDIO_MUSIC_FORCE_TRACK("FTR_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_326();
			if (((Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, iLocal_811) && !Function_242(&Local_750)) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/mexico_crossing_1_cs/mexico_crossing_1_cs")) && iLocal_748 != 0)
			{
				iLocal_812 = 7;
			}
			else
			{
				iLocal_812 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_812 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_231("$/cutscene/mexico_crossing_1_cs/mexico_crossing_1_cs", &Local_804, &Local_750, &iLocal_811, 76480, 75823, 75500, 63047, 61945, 42093, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_366(&iLocal_969);
				iLocal_812 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_587())
			{
				Function_585(&uLocal_816, bLocal_749);
				iLocal_1054 = 0;
				iLocal_812 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_389(&iLocal_981);
			Function_389(&iLocal_984);
			Function_389(&iLocal_975);
			iLocal_811 = iLocal_748;
			iLocal_812 = 0;
			Function_339(Local_4.f_2484, 0);
			Function_339(Local_4.f_2496, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(Local_4.f_2496, 0);
			DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
			ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
			ENABLE_CHILD_SECTOR("dlc_frb_zombie02x");
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Function_583(&Local_750, &iLocal_811, &iLocal_812);
			break;
	}
	return;
}

void Function_583(int iParam0, var uParam1, int iParam2) //Position: 0x1F985 / 129413
{
	if (Function_242(iParam0))
	{
		*uParam1 = Function_343(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_584();
	}
	return;
}

void Function_584() //Position: 0x1F9B9 / 129465
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

int Function_585(var uParam0, bool bParam1) //Position: 0x1FA0A / 129546
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_586(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_586(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_586(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_586(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_586(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x200C9 / 131273
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
	Function_81(iParam0 + 8, iParam4);
	return 1;
}

bool Function_587() //Position: 0x2018C / 131468
{
	int iVar0;
	
	iVar0 = 1;
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_248(&bLocal_757))
		{
			iVar0 = 0;
		}
		if (!IS_LAYOUTREF_VALID(Local_4))
		{
			Function_246();
		}
		if (IS_ACTOR_VALID(Function_264(0, 0, 0, 0, 0, 0, 1, 0)))
		{
			if (!IS_ACTOR_VALID(bLocal_1006))
			{
				bLocal_1006 = Function_264(1, 1, 0, 0, 0, 0, 1, 0);
				iVar0 = 0;
			}
		}
		if (!Function_588())
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool Function_588() //Position: 0x201ED / 131565
{
	Function_330(&Local_4 + 4, 1262, 2, 0);
	Function_330(&Local_4 + 4, 372, 2, 0);
	Function_330(&Local_4 + 4, 373, 2, 0);
	Function_330(&Local_4 + 4, 369, 2, 0);
	Function_330(&Local_4 + 4, 370, 2, 0);
	Function_348(&Local_4 + 4, "p_gen_tent01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_tent03x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_bedRollClosed01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_bedRollOpen01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_bottle02x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_bottleBeer01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_canteen01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_can05x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_can03x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_can01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_pot02x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_bucket03x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_carcassSmall01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_barricade01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_flag04x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_crateStack02x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_crateStack01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_crateWeapons03x", 0, 0);
	Function_348(&Local_4 + 4, "p_bat_flourSack01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_crateTnt01x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_crateTnt02x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_campfire03x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_wagonBroken02x", 0, 0);
	Function_348(&Local_4 + 4, "p_gen_package06x", 0, 0);
	Function_348(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing1", 1, 0);
	Function_348(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing2", 1, 0);
	Function_348(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing3", 1, 0);
	Function_348(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing_b1", 1, 0);
	Function_348(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing_b2", 1, 0);
	Function_348(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing_z1", 1, 0);
	Function_348(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing_z2", 1, 0);
	Function_348(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_footlocker", 1, 0);
	if (Function_248(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_589() //Position: 0x20757 / 132951
{
	Function_348(&bLocal_757, "dlc_zombiepack_zombie02", 10, 0);
	Function_330(&bLocal_757, 1166, 2, 1);
	Function_330(&bLocal_757, 1167, 2, 1);
	Function_330(&bLocal_757, 1164, 2, 1);
	Function_348(&bLocal_757, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_348(&bLocal_757, "p_gen_crateMultiplayerWeapon01x", 0, 0);
	Function_348(&bLocal_757, "p_gen_stool02x", 0, 0);
	Function_348(&bLocal_757, "ptl_base", 5, 0);
	Function_348(&bLocal_757, "$/content/scripting/gringo/simplegringo/stool_sit_attach_indef", 1, 0);
	return;
}

void Function_590(int iParam0, int iParam1) //Position: 0x2088D / 133261
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_591(int iParam0) //Position: 0x208AA / 133290
{
	Function_592(&Global_28842, iParam0);
	return;
}

void Function_592(var uParam0, int iParam1) //Position: 0x208B8 / 133304
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_593(int iParam0, bool bParam1) //Position: 0x208DB / 133339
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_599(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_242(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		Function_99();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_15(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_242(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_176();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_201();
	Function_234();
	Function_191("");
	Function_598(0);
	Function_597();
	Function_168();
	Function_167();
	ENABLE_JOURNAL_REPLAY(0);
	Function_596();
	SET_PLAYER_CONTROL(false, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_264(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_370(0, 0x40400000);
	}
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
	Function_595(13);
	Function_595(14);
	Function_595(25);
	Function_595(24);
	Function_595(12);
	Function_595(27);
	Function_595(26);
	Function_595(15);
	Function_594();
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

void Function_594() //Position: 0x20D13 / 134419
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

void Function_595(int iParam0) //Position: 0x20D87 / 134535
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_596() //Position: 0x20DA7 / 134567
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

void Function_597() //Position: 0x20DE4 / 134628
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_598(int iParam0) //Position: 0x20DF8 / 134648
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_171())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_599(int iParam0, int iParam1) //Position: 0x20E2D / 134701
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
			Function_600(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_600(int iParam0) //Position: 0x20EAF / 134831
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

bool Function_601(int iParam0) //Position: 0x20EFD / 134909
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
			Function_602(iParam0, 1);
			return 1;
		}
	}
	Function_602(iParam0, 0);
	return 0;
}

void Function_602(int iParam0, bool bParam1) //Position: 0x20F84 / 135044
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

bool Function_603(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x20FA8 / 135080
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
		Function_602(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_622(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_621(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_621(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_607(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_602(iParam2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_606(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_605(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_606(&bVar17);
														strcpy(&Var18, "", 64);
														Function_604(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_191(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_605(StackVal, iParam2, bVar17);
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
	Function_602(iParam2, 0);
	return 0;
}

void Function_604(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x21341 / 136001
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

void Function_605(var uParam0, int iParam1, bool bParam2) //Position: 0x2142C / 136236
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
			Function_47(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_47(&bParam2, 2);
			break;
	}
	Function_47(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_606(bool bParam0) //Position: 0x214A2 / 136354
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_47(&iVar0, 1);
	Function_47(&iVar0, 2);
	Function_47(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_607(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x214C4 / 136388
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
			return Function_618(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_611(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_618(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_608(iParam0, bVar2);
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
						bVar2 = Function_618(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_608(iParam0, bVar2);
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

var Function_608(int iParam0, bool bParam1) //Position: 0x2160E / 136718
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_610(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_609(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_610(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_609(256);
			}
		}
	}
	return bParam1;
}

bool Function_609(int iParam0) //Position: 0x21741 / 137025
{
	return 2 | iParam0;
}

int Function_610(int iParam0) //Position: 0x2174B / 137035
{
	return 4 | iParam0;
}

int Function_611(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x21755 / 137045
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
				iParam3 = Function_617(iParam0, iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_81(&iParam3, 2);
					Function_47(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_609(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_612(iParam0, iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_81(&iParam3, 2);
					Function_47(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_609(16);
		}
	}
	return 0;
}

int Function_612(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x21807 / 137223
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_616(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_615(iVar0, 3, 1, bParam3))
			{
				if (!Function_621(iParam0, 8, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_615(iVar0, 2, 1, bParam3))
			{
				if (!Function_621(iParam0, 32, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_615(iVar0, 1, 1, bParam3))
			{
				if (!Function_621(iParam0, 64, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_615(iVar0, 3, 1, bParam3))
			{
				if (!Function_621(iParam0, 128, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_615(iVar0, 1, 1, bParam3))
			{
				if (!Function_621(iParam0, 1024, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_615(iVar0, 1, 1, bParam3))
			{
				if (!Function_621(iParam0, 1024, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_613(int iParam0, int iParam1, bool bParam2) //Position: 0x219C1 / 137665
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_614(int iParam0, int iParam1, bool bParam2) //Position: 0x219D6 / 137686
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_615(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x219EB / 137707
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_616(int iParam0) //Position: 0x21A08 / 137736
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

int Function_617(var uParam0, int iParam1, bool bParam2) //Position: 0x21A77 / 137847
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_616(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_615(iVar0, 3, 1, bParam2))
			{
				if (!Function_621(uParam0, 8, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000009:
			if (Function_615(iVar0, 3, 1, bParam2))
			{
				if (!Function_621(uParam0, 8, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x0000006E:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(uParam0, 16, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x0000005B:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(uParam0, 32, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000031:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 64, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000007:
			if (Function_615(iVar0, 3, 1, bParam2))
			{
				if (!Function_621(uParam0, 128, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000008:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(uParam0, 256, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000014:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 512, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000018:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 512, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000057:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 1024, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000058:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 1024, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_618(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x21C92 / 138386
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
						return Function_617(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_621(iParam0, 2, 1))
					{
						return Function_610(8);
					}
					return Function_609(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_621(iParam0, 4, 1))
					{
						return Function_610(16);
					}
					return Function_609(16);
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
							return Function_612(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_621(iParam0, 2, 1))
						{
							return Function_610(128);
						}
						return Function_609(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_621(iParam0, 4, 1))
						{
							return Function_610(256);
						}
						return Function_609(256);
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
						return Function_612(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_621(iParam0, 2, 1))
					{
						return Function_610(8);
					}
					return Function_609(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_621(iParam0, 4, 1))
					{
						return Function_610(16);
					}
					return Function_609(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_620(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_621(iParam0, 2, 1))
					{
						return Function_610(8);
					}
					return Function_609(8);
				}
				if (!Function_621(iParam0, 4, 1))
				{
					return Function_610(16);
				}
				return Function_609(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_612(iParam0, uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_81(&iParam4, 2);
								Function_47(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_619(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_609(128);
							}
							if (!Function_621(iParam0, 2, 1))
							{
								return Function_610(8);
							}
							return Function_609(8);
						}
						if (iParam4 == 2)
						{
							if (Function_619(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_609(256);
							}
							if (!Function_621(iParam0, 4, 1))
							{
								return Function_610(16);
							}
							return Function_609(16);
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

bool Function_619(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x21F51 / 139089
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

int Function_620(int iParam0, var uParam1, bool bParam2) //Position: 0x2200A / 139274
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_616(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(iParam0, 16, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x0000005B:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(iParam0, 32, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000057:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(iParam0, 1024, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000058:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(iParam0, 1024, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_621(int iParam0, bool bParam1, bool bParam2) //Position: 0x2211E / 139550
{
	if (bParam2)
	{
		if (!Function_14(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(iParam0->f_40, bParam1);
}

int Function_622(bool bParam0) //Position: 0x22146 / 139590
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_59());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_59());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_623(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x22177 / 139639
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_45())
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

void Function_624(int iParam0) //Position: 0x221B5 / 139701
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

