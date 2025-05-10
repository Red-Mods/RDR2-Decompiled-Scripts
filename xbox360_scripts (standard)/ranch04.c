//Decompiled with MagicRDR v1.0
//Function Count : 639
//Statics Count : 1191
//Natives Count : 833
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1933> Local_4 = { 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_507 = 0;
	iLocal_1001 = 0;
	iLocal_1054 = 0;
	iLocal_1147 = 1;
	iLocal_1150 = 0;
	Local_509 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_488 = 99;
	iLocal_489 = 0;
	Local_490 = 1000;
	while (Function_282())
	{
		Function_232();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x54 / 84
{
	Function_220();
	Function_215(0);
	if (IS_ACTOR_VALID(bLocal_976))
	{
		AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_976, 1);
		AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bLocal_976, 0, 1);
	}
	SET_DUST_LEVEL_MODIFIER(0);
	TASK_CLEAR(Global_34573);
	STREAMING_UNLOAD_SCENE();
	Function_214(Global_30668[0], 0);
	Function_210(1, 60, 0);
	Function_207(3, 1, 0, 1, 1);
	Function_206(bLocal_508);
	Function_206(Local_4);
	Function_205();
	Function_179(bLocal_498, 1, 0, 0, 0, 0, 1, 1);
	Function_175(&bLocal_516);
	Function_175(&bLocal_592);
	Function_165();
	if (IS_ITERATOR_VALID(bLocal_831))
	{
		DESTROY_ITERATOR(bLocal_831);
	}
	if (IS_ITERATOR_VALID(bLocal_832))
	{
		DESTROY_ITERATOR(bLocal_832);
	}
	if (IS_ITERATOR_VALID(bLocal_833))
	{
		DESTROY_ITERATOR(bLocal_833);
	}
	RELEASE_LAYOUT_REF(bLocal_508);
	if (bLocal_497)
	{
		DISABLE_CHILD_SECTOR("hen_barn01x");
		DISABLE_CHILD_SECTOR("hen_barn01props01x");
		DISABLE_CHILD_SECTOR("hen_barn03props01x");
		DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
		ENABLE_CHILD_SECTOR("hen_barn02x");
		ENABLE_CHILD_SECTOR("hen_barn02props01x");
		Function_25(Local_509, 1, 1, 1, 0);
	}
	else if (bLocal_498)
	{
		DISABLE_CHILD_SECTOR("hen_barn02x");
		DISABLE_CHILD_SECTOR("hen_barn02props01x");
		DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
		DISABLE_CHILD_SECTOR("hen_barn03props01x");
		ENABLE_CHILD_SECTOR("hen_barn01x");
		ENABLE_CHILD_SECTOR("hen_barn01props01x");
		Function_21(Local_509);
	}
	else
	{
		DISABLE_CHILD_SECTOR("hen_barn02x");
		DISABLE_CHILD_SECTOR("hen_barn02props01x");
		DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
		DISABLE_CHILD_SECTOR("hen_barn03props01x");
		ENABLE_CHILD_SECTOR("hen_barn01x");
		ENABLE_CHILD_SECTOR("hen_barn01props01x");
		Function_3(Local_509);
	}
	Function_2(1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(bool bParam0) //Position: 0x2B3 / 691
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

void Function_3(int iParam0) //Position: 0x327 / 807
{
	Function_11(iParam0);
	Function_10();
	Function_7(2);
	Function_5((15 - Function_6(105)));
	Function_4(12);
	return;
}

void Function_4(bool bParam0) //Position: 0x348 / 840
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_5(int iParam0) //Position: 0x363 / 867
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_6(105)), 0);
	return;
}

int Function_6(int iParam0) //Position: 0x384 / 900
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_7(bool bParam0) //Position: 0x39A / 922
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_9(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_9(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_9(Global_12976.f_24);
	PRINTNL();
	Function_8(bParam0);
	return;
}

void Function_8(int iParam0) //Position: 0x436 / 1078
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_6(90)), 0);
	return;
}

void Function_9(bool bParam0) //Position: 0x457 / 1111
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

void Function_10() //Position: 0x49D / 1181
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_11(bool bParam0) //Position: 0x4B6 / 1206
{
	int iVar0;
	
	if (!Function_19(bParam0))
	{
		Function_17();
		return;
	}
	iVar0 = Function_16(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_12("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_12(char* cParam0, bool bParam1) //Position: 0x509 / 1289
{
	struct<4> Var0;
	
	if (!Function_19(bParam1))
	{
		return;
	}
	switch (Function_16(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_13(Function_14(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_16(bParam1), Function_14(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_13(int iParam0) //Position: 0x62D / 1581
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_14(bool bParam0) //Position: 0x652 / 1618
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_15(int iParam0) //Position: 0x672 / 1650
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_16(bool bParam0) //Position: 0x689 / 1673
{
	if (!Function_15(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_17() //Position: 0x6A4 / 1700
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
			Function_18(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_18(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8EB / 2283
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_19(int iParam0) //Position: 0x914 / 2324
{
	if (!Function_15(iParam0))
	{
		return 0;
	}
	if (!Function_20(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_20(int iParam0) //Position: 0x938 / 2360
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_21(int iParam0) //Position: 0x94D / 2381
{
	Function_22(iParam0);
	Function_7(2);
	Function_4(12);
	Function_5((15 - Function_6(105)));
	return;
}

void Function_22(bool bParam0) //Position: 0x96B / 2411
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_19(bParam0))
	{
		return;
	}
	iVar0 = Function_16(bParam0);
	if (StackVal == 2)
	{
		Function_12("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_23(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_23(int iParam0) //Position: 0xA11 / 2577
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_24(char* cParam0) //Position: 0xA3B / 2619
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

void Function_25(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC91 / 3217
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_4(12);
	Function_7(2);
	Function_5((15 - Function_6(105)));
	if (Function_16(bParam0) == 1)
	{
		iVar2 = Function_14(bParam0);
		Function_164(&(Global_3422[iVar240]));
		Function_163(4194304);
		if (bParam3)
		{
			Function_115(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_109(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_115(iVar2, &uVar0, 0);
		}
		bVar1 = Function_108();
		if (bParam1)
		{
			Function_92(iVar2, bParam0, bVar1);
			Function_91();
		}
	}
	Function_38(bParam0, bParam1, uParam2, bVar1);
	if (Function_16(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_30(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_16(bParam0) == 1)
		{
			iVar2 = Function_14(bParam0);
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
	Function_26();
}

void Function_26() //Position: 0xD7E / 3454
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_27(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_27(int iParam0, bool bParam1) //Position: 0xDAE / 3502
{
	int iVar0;
	
	iVar0 = Function_28(iParam0);
	if (!Function_15(iVar0))
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

int Function_28(int iParam0) //Position: 0xDEB / 3563
{
	if (!Function_29(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_29(int iParam0) //Position: 0xE05 / 3589
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_30(int iParam0, bool bParam1) //Position: 0xE1B / 3611
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_30(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_30(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_30(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_30(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_30(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_30(57, 0);
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

void Function_31(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1112 / 4370
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_33(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_32(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_32(char* cParam0, int iParam1) //Position: 0x117E / 4478
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

bool Function_33(bool bParam0, var uParam1, int iParam2) //Position: 0x11B5 / 4533
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
		if (Function_36(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_35(uVar0))
		{
			case 0x00000002:
				if (!Function_34(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_34(var uParam0, int iParam1) //Position: 0x122D / 4653
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_35(char* cParam0) //Position: 0x1240 / 4672
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

int Function_36(int iParam0) //Position: 0x12E1 / 4833
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_37(&bVar1, 2147483648);
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

void Function_37(bool bParam0, bool bParam1) //Position: 0x131E / 4894
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_38(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1331 / 4913
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_19(bParam0))
	{
		Function_17();
		return;
	}
	iVar0 = Function_16(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_14(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_23(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_87();
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
		Function_12("DEED_COMPLETE", bParam0);
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
			Function_81(bParam0);
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
						switch (Function_14(bParam0))
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
			Function_42(1);
			Function_40(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_39(bParam0, &Var14);
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

void Function_39(int iParam0, int iParam1) //Position: 0x1543 / 5443
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_40(bool bParam0, int iParam1) //Position: 0x157D / 5501
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_41())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_41() //Position: 0x15BF / 5567
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_42(bool bParam0) //Position: 0x15C8 / 5576
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_73();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_37(&Global_63095, 1);
		Function_37(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_43() //Position: 0x1619 / 5657
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51();
	Function_51();
	if (!Function_41())
	{
		Function_48();
		Function_47();
		Function_46();
		Function_45();
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x164C / 5708
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

void Function_45() //Position: 0x1752 / 5970
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

void Function_46() //Position: 0x1785 / 6021
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

void Function_47() //Position: 0x1913 / 6419
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

void Function_48() //Position: 0x1AC7 / 6855
{
	Function_49(&Global_28260, 1, 0);
	return;
}

void Function_49(int iParam0, bool bParam1, var uParam2) //Position: 0x1AD5 / 6869
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
	
	bVar0 = Function_50();
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

var Function_50() //Position: 0x1CC6 / 7366
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51() //Position: 0x1CDB / 7387
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
				iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D76 / 7542
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2011 / 8209
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_54(), &Var9);
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

var Function_54() //Position: 0x263E / 9790
{
	int iVar0;
	
	return iVar0;
}

var Function_55(int iParam0) //Position: 0x2646 / 9798
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2657 / 9815
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0, char* cParam1) //Position: 0x274C / 10060
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2765 / 10085
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_60(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x27CA / 10186
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x27DC / 10204
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x27EE / 10222
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x291E / 10526
{
	return Global_35278[iParam020].f_48;
}

float Function_63(int iParam0) //Position: 0x292D / 10541
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2966 / 10598
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_65(int iParam0) //Position: 0x29A3 / 10659
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B3D / 11069
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

int Function_67(bool bParam0) //Position: 0x2D57 / 11607
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_68() //Position: 0x2D98 / 11672
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2E21 / 11809
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2EB8 / 11960
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x2F37 / 12087
{
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2F5D / 12125
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x3167 / 12647
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_75(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_75(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_74(StackVal, StackVal, vVar0))
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

bool Function_74(vector3 vParam0) //Position: 0x3208 / 12808
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3220 / 12832
{
	int iVar0;
	
	iVar0 = Function_79(uParam2, uParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_77(&Global_63095, 1);
			Function_37(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_77(&Global_63095, 2);
			Function_37(&Global_63095, 1);
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
		Function_77(&Global_63095, 2);
		Function_37(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_76();
	return StackVal, StackVal, Function_76();
}

vector3 Function_76() //Position: 0x3307 / 13063
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3310 / 13072
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x331F / 13087
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3335 / 13109
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
				fVar2 = Function_80(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(bVar0) && !bParam1)
	{
		bVar0 = Function_79(bParam0, 1);
	}
	return bVar0;
}

float Function_80(vector3 vParam0, vector3 vParam3) //Position: 0x33FC / 13308
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_81(bool bParam0) //Position: 0x3419 / 13337
{
	int iVar0;
	int iVar1;
	
	if (!Function_15(bParam0))
	{
		return;
	}
	switch (Function_16(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_14(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_86(12, 1, 0, 0);
				Function_85(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_86(13, 1, 0, 0);
				Function_85(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_86(14, 1, 0, 0);
				Function_85(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_86(15, 1, 0, 0);
				Function_85(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_86(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_14(bParam0))
			{
				case 0x00000000:
					if (Function_84(bParam0) == 1)
					{
						iVar0 = Function_83(bParam0);
						if (Function_82(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_85(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_85(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_85(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_85(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_85(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_85(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_85(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_85(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_85(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_85(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_85(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_85(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_85(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_85(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_85(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_85(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_85(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_85(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_85(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_85(4, 19);
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
								Function_86(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_86(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_86(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_83(bParam0) == 0)
			{
				if (Function_84(bParam0) == 1)
				{
					Function_86(458, 1, 0, 0);
					iVar0 = Function_14(bParam0);
					if (Function_82(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_85(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_85(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_85(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_85(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_85(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_85(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_85(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_85(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_84(bParam0) == 1)
			{
				Function_86(400, 1, 0, 0);
			}
			switch (Function_14(bParam0))
			{
				case 0x00000001:
					Function_86(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_85(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_85(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_85(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_86(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_85(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_85(6, 9);
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

bool Function_82(int iParam0) //Position: 0x38F5 / 14581
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0) //Position: 0x390B / 14603
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_84(bool bParam0) //Position: 0x392A / 14634
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_85(int iParam0, bool bParam1) //Position: 0x3944 / 14660
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

int Function_86(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x39AB / 14763
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_87() //Position: 0x3BCB / 15307
{
	int iVar0;
	int iVar1;
	
	if (!Function_29(Global_6269))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_28(Global_6269);
	if (!Function_29(iVar0) && Function_90(iVar1) < 0)
	{
		Function_52(24, Global_6269, 0);
		Function_88(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_90(Function_28(iVar0)))
	{
		Function_52(24, Global_6269, 0);
		Function_88(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_88(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3C4B / 15435
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
		Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_89(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3F9D / 16285
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

int Function_90(int iParam0) //Position: 0x4021 / 16417
{
	if (!Function_19(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_91() //Position: 0x403B / 16443
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

void Function_92(int iParam0, int iParam1, bool bParam2) //Position: 0x4069 / 16489
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
	
	if (!Function_29(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_107(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_67(42) - Global_34165.f_116);
				bVar1 = (Function_67(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_34165.f_124);
				bVar3 = (Function_67(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_67(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_106(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_93(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_23(iParam0) };
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

void Function_93(int iParam0, bool bParam1, bool bParam2) //Position: 0x4305 / 17157
{
	int iVar0;
	bool bVar1;
	
	if (Function_105(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_67(3);
	Function_102();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_100(3, bVar1);
		if (!bParam2)
		{
			if (!Function_34(Global_76848, 4))
			{
				Function_31(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_86(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
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

void Function_94(int iParam0, int iParam1) //Position: 0x44C8 / 17608
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

int Function_95(int iParam0, char* cParam1, bool bParam2) //Position: 0x4726 / 18214
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
	Function_88(iParam0, cParam1, 0, 1);
	iVar1 = Function_96();
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

int Function_96() //Position: 0x48AB / 18603
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
	Function_97();
	return 0;
}

void Function_97() //Position: 0x494A / 18762
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
		Function_98(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_98(int iParam0) //Position: 0x49F9 / 18937
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

var Function_99(int iParam0) //Position: 0x4A57 / 19031
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

int Function_100(int iParam0, bool bParam1) //Position: 0x4AE6 / 19174
{
	bool bVar0;
	int iVar1;
	
	Function_86(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_101(iParam0, 4294967295);
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
	iVar1 = Function_96();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_101(int iParam0, int iParam1) //Position: 0x4C83 / 19587
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

void Function_102() //Position: 0x4CC4 / 19652
{
	Function_104(3, 0.0f);
	Function_103(3, 10000.0f);
	return;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4CDA / 19674
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_104(int iParam0, int iParam1) //Position: 0x4D1A / 19738
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_105(int iParam0) //Position: 0x4D5A / 19802
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_106(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4D69 / 19817
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

int Function_107(int iParam0) //Position: 0x4F31 / 20273
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

var Function_108() //Position: 0x4FC6 / 20422
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_109(int iParam0) //Position: 0x4FEB / 20459
{
	if (!Function_29(iParam0))
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
			Function_93(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_93(25, 1, 0);
			Function_114(1, 1);
			break;
		
		case 0x00000015:
			Function_114(50, 1);
			Function_93(250, 1, 0);
			Function_110(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_93(75, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_93(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_114(50, 1);
			Function_93(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_114(5, 1);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_93(75, 1, 0);
			Function_110(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_114(5, 1);
			Function_93(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_93(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_114(25, 1);
			Function_93(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_114(10, 1);
			Function_93(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_93(50, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_93(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_93(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_110(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_114(20, 1);
			Function_93(75, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_114(25, 1);
			Function_93(150, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_114(10, 1);
			Function_93(150, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_93(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_110(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_110(100, 1, 0);
			Function_114(5, 1);
			break;
		
		case 0x0000000F:
			Function_114(3, 1);
			Function_93(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_110(125, 1, 0);
			Function_93(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_114(50, 1);
			Function_93(100, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_114(50, 1);
			Function_93(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_114(75, 1);
			Function_93(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_93(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_93(75, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_93(250, 1, 0);
			Function_110(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_93(75, 1, 0);
			Function_110(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_93(200, 1, 0);
			Function_110(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_93(75, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_93(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_114(50, 1);
			Function_93(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_114(100, 1);
			Function_93(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_93(200, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_93(300, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_93(300, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_93(300, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_93(500, 1, 0);
			Function_110(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_93(150, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_110(25, 1, 0);
			Function_114(100, 1);
			break;
		
		case 0x0000002A:
			Function_93(150, 1, 0);
			Function_110(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_110(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_110(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_110(150, 1, 0);
			Function_114(100, 1);
			break;
		
		case 0x00000035:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_110(150, 1, 0);
			Function_114(100, 1);
			break;
		
		case 0x00000032:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_110(int iParam0, bool bParam1, bool bParam2) //Position: 0x54A6 / 21670
{
	int iVar0;
	bool bVar1;
	
	if (Function_105(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
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
			Function_100(1, bVar1);
			if (!bParam2)
			{
				if (!Function_34(Global_76848, 1))
				{
					Function_31(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_113(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_34(Global_76848, 2))
				{
					Function_31(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_86(1, bVar1, 0, 0);
	}
	else
	{
		Function_112(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_95(2, Function_111(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_95(2, Function_111(Global_12976.f_152), 0);
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
				Function_95(2, Function_111(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_95(2, Function_111(Global_12976.f_152), 1);
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
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_95(2, Function_111(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_95(2, Function_111(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_95(2, Function_111(Global_12976.f_152), 1);
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
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			break;
	}
	Function_94(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_111(int iParam0) //Position: 0x57BB / 22459
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

int Function_112(int iParam0, bool bParam1, int iParam2) //Position: 0x585E / 22622
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_113(int iParam0, bool bParam1) //Position: 0x5A59 / 23129
{
	bool bVar0;
	int iVar1;
	
	Function_112(iParam0, bParam1, 0);
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
	iVar1 = Function_101(iParam0, 4294967295);
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
	iVar1 = Function_96();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_114(bool bParam0, bool bParam1) //Position: 0x5BF5 / 23541
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_86(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_86(597, bParam0, 0, 0);
	}
	if ((Function_67(597) + Function_67(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_115(int iParam0, var uParam1, bool bParam2) //Position: 0x5CC0 / 23744
{
	struct<4> Var0;
	
	if (!Function_29(iParam0))
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
			Function_161(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_158(Global_30640[0]);
			Function_158(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_156(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_158(Global_30668[0]);
			Function_147(0);
			Function_145(2, 1);
			Function_145(0, 1);
			Function_145(1, 1);
			break;
		
		case 0x00000003:
			Function_158(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_158(Global_30668[0]);
			Function_158(Global_30640[0]);
			Function_143(0, 1);
			Function_143(15, 1);
			Function_143(9, 1);
			Function_143(12, 1);
			Function_143(16, 1);
			Function_145(3, 1);
			break;
		
		case 0x00000005:
			Function_158(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_156(21, bParam2, 4);
			Function_158(Global_30668[0]);
			Function_145(39, 1);
			break;
		
		case 0x00000007:
			Function_158(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_158(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_142(4))
					{
						Function_132(4, 0, 0, 1);
					}
				}
			}
			Function_158(Global_30640[0]);
			Function_158(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_158(Global_30640[0]);
			Function_158(Global_30668[2]);
			Function_131(&(Global_29008[Global_30668[2]]), 32768);
			Function_130(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_156(9, bParam2, 4);
			Function_158(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_158(Global_30640[0]);
			Function_158(Global_30658[0]);
			Function_131(&(Global_29008[Global_30658[0]]), 32768);
			Function_130(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_158(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_158(Global_30640[0]);
			Function_158(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_158(Global_30640[1]);
			Function_158(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_158(Global_30679[0]);
			Function_158(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_158(Global_30658[5]);
			Function_158(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_156(21, bParam2, 4);
			Function_158(Global_30640[4]);
			Function_158(Global_30658[4]);
			Function_129(&Global_76847, 0x2000000);
			Function_129(&Global_76847, 0x4000000);
			Function_129(&Global_76847, 4096);
			Function_129(&Global_76847, 8);
			Function_129(&Global_76847, 8388608);
			Function_129(&Global_76847, 524288);
			Function_129(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_158(Global_30640[4]);
			Function_158(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_130(&(Global_29008[Global_30640[4]]), 256);
			Function_158(Global_30640[4]);
			Function_158(Global_30658[0]);
			Function_131(&(Global_29008[Global_30658[0]]), 32768);
			Function_130(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_158(Global_30640[0]);
			Function_158(Global_30640[5]);
			Function_156(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_158(Global_30658[3]);
			Function_131(&(Global_29008[Global_30658[3]]), 32768);
			Function_130(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_156(9, bParam2, 4);
			Function_158(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_131(&(Global_29008[Global_30679[1]]), 32768);
			Function_158(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_156(12, bParam2, 4);
			Function_130(&(Global_29008[Global_30679[1]]), 256);
			Function_158(Global_30668[3]);
			Function_158(Global_30693[0]);
			Function_158(Global_30685[0]);
			Function_147(4);
			Function_143(13, 1);
			Function_143(1, 1);
			Function_143(18, 1);
			Function_145(34, 1);
			Function_145(44, 1);
			Function_145(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_156(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_158(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_158(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_158(Global_30693[0]);
			Function_158(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_158(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_158(Global_30685[0]);
			Function_158(Global_30693[0]);
			Function_158(Global_30693[1]);
			Function_158(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_156(23, bParam2, 3);
			Function_143(23, 1);
			Function_158(Global_30685[0]);
			Function_158(Global_30685[2]);
			Function_131(&(Global_29008[Global_30685[2]]), 32768);
			Function_130(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_156(19, bParam2, 4);
			Function_158(Global_30685[0]);
			Function_158(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_156(24, bParam2, 3);
			Function_143(24, 1);
			Function_158(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_158(Global_30685[0]);
			Function_158(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_158(Global_30693[12]);
			Function_158(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_158(Global_30693[12]);
			Function_158(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_156(25, bParam2, 10);
			Function_158(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_158(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_158(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_156(13, bParam2, 4);
			Function_158(Global_30693[2]);
			Function_158(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_142(8))
				{
					Function_132(8, 0, 0, 1);
				}
			}
			Function_158(Global_30685[0]);
			Function_147(9);
			Function_143(7, 1);
			Function_143(11, 1);
			Function_143(3, 1);
			Function_143(20, 1);
			Function_145(57, 1);
			break;
		
		case 0x0000002A:
			Function_156(2, bParam2, 4);
			Function_158(Global_30717[0]);
			Function_158(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_158(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_158(Global_30717[0]);
			Function_158(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_158(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_158(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_158(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_156(17, bParam2, 4);
			Function_158(Global_30723[0]);
			Function_158(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_127(15))
				{
					Function_122(15, 0, 1);
				}
			}
			Function_130(&(Global_29008[Global_30717[1]]), 256);
			Function_147(11);
			Function_158(Global_30717[1]);
			Function_158(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_158(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_158(Global_30717[1]);
			Function_158(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_158(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_158(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_158(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_158(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_158(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_158(Global_30717[1]);
			Function_116(11);
			Function_147(12);
			Global_16537[1121].f_40 = 0;
			Function_145(56, 1);
			if (!bParam2)
			{
				if (!Function_142(9))
				{
					Function_132(9, 0, 0, 0);
				}
				if (!Function_142(10))
				{
					Function_132(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_116(int iParam0) //Position: 0x65B0 / 26032
{
	bool bVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_121(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_121(Global_16537[iParam021].f_72, 0);
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
			Function_117(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_117(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x671F / 26399
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
		Function_119(Function_120(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_119(Function_120(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_119(StackVal);
				vVar1 = { StackVal, StackVal, Function_119(StackVal) };
				if (Function_118(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_118(vector3 vParam0, vector3 vParam3) //Position: 0x6825 / 26661
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_119(bool bParam0) //Position: 0x6852 / 26706
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

var Function_120(vector3 vParam0) //Position: 0x68A9 / 26793
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

void Function_121(bool bParam0, bool bParam1) //Position: 0x68F7 / 26871
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

void Function_122(bool bParam0, bool bParam1, bool bParam2) //Position: 0x694B / 26955
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_127(bParam0))
	{
		if (!Function_142(bParam0))
		{
			Function_132(bParam0, 1, 0, 0);
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
		Function_86(457, 1, 0, 0);
		Function_125(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_40(1, 0);
			}
			else
			{
				Function_123();
			}
		}
	}
	return;
}

void Function_123() //Position: 0x6AE9 / 27369
{
	return;
}

bool Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6AEF / 27375
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

void Function_125(bool bParam0, int iParam1) //Position: 0x6B93 / 27539
{
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_126(int iParam0) //Position: 0x6BE8 / 27624
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_127(int iParam0) //Position: 0x6BFE / 27646
{
	if (!Function_126(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_128(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0, int iParam1) //Position: 0x6C4F / 27727
{
	int iVar0;
	
	if (!Function_126(iParam0))
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

void Function_129(var uParam0, int iParam1) //Position: 0x6C7C / 27772
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6C8B / 27787
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_131(var uParam0, int iParam1) //Position: 0x6CA2 / 27810
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_132(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6CB1 / 27825
{
	struct<8> Var0;
	
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_141(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_142(bParam0))
	{
		Function_86(456, 1, 0, 0);
		Function_125(bParam0, 2);
		if (bParam2)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_40(1, 5);
			}
			else
			{
				Function_123();
			}
		}
		Function_135(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_134() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_134() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_133(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_34(Global_76846, 2))
		{
			Function_31(Global_34573, 2, 1, 0);
		}
	}
}

void Function_133(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6DFB / 28155
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

bool Function_134() //Position: 0x6E46 / 28230
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_135(bool bParam0) //Position: 0x6E73 / 28275
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
			if (Function_139(bParam0, Function_140(bVar24)))
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
			if (Function_139(bParam0, Function_140(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_138(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_137(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_136(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_136(int iParam0) //Position: 0x7023 / 28707
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_126(iParam0))
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

void Function_137(bool bParam0, bool bParam1) //Position: 0x707A / 28794
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

var Function_138(int iParam0) //Position: 0x709F / 28831
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_126(iParam0))
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

bool Function_139(bool bParam0, bool bParam1) //Position: 0x70F5 / 28917
{
	int iVar0;
	
	if (!Function_126(bParam0))
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

bool Function_140(bool bParam0) //Position: 0x7154 / 29012
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_141(int iParam0) //Position: 0x7160 / 29024
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_142(int iParam0) //Position: 0x717C / 29052
{
	if (!Function_126(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_128(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_143(int iParam0, int iParam1) //Position: 0x71CE / 29134
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_144(iParam0, iParam1);
	Function_31(Global_34573, 1, 4, 1);
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7241 / 29249
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_145(int iParam0, int iParam1) //Position: 0x729D / 29341
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_146(iParam0, iParam1);
	Function_31(Global_34573, 1, 4, 1);
	return 1;
}

int Function_146(int iParam0, int iParam1) //Position: 0x730E / 29454
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_147(int iParam0) //Position: 0x7368 / 29544
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_155(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_155(Global_16537[iParam021].f_72, 0);
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
			Function_86(468, 1, 0, 0);
			Function_85(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_133("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_117(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_132(14, 1, 0, 0);
				Function_148(14, 1, 0, 0, 0);
			}
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_40(1, 6);
			}
			else
			{
				Function_123();
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
			Function_133("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_86(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_85(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_148(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7614 / 30228
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_141(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_128(bParam0, 2))
	{
		Function_86(456, 1, 0, 0);
		Function_125(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_133(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_139(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_125(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_40(1, 0);
			}
			else
			{
				Function_123();
			}
		}
		Function_135(bParam0);
		if (StackVal && !Function_154(((((!Function_134() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_154((((Function_134() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_34(Global_76846, 2))
		{
			Function_31(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_150();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_149(3, bParam1);
				break;
			
			case 0x00000005:
				Function_149(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_149(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_149(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_149(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_149(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_85(2, 24);
				break;
			
			case 0x00000003:
				Function_85(2, 25);
				break;
			
			case 0x0000000F:
				Function_85(2, 26);
				break;
			
			case 0x0000000D:
				Function_85(2, 27);
				break;
			
			case 0x0000000E:
				Function_85(2, 28);
				break;
			}
	}
}

void Function_149(int iParam0, bool bParam1) //Position: 0x78A3 / 30883
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

void Function_150() //Position: 0x7902 / 30978
{
	if (Function_126(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_153(Global_28180);
			Global_28180.f_8 = Function_151(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_153(Global_28180);
			Global_28180.f_8 = Function_151(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_151(int iParam0, int iParam1) //Position: 0x797D / 31101
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
					if (Function_27(6, 0) || Function_27(12, 0))
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
					if (Function_152(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_27(5, 0))
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
					if (Function_152(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_152(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_152(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_152(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_27(26, 0))
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
					if (Function_152(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_152(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_152(27) && iVar18)
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
					if (Function_152(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_152(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_152(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_152(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_27(17, 0) && iVar15)
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
					if (Function_152(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_27(6, 0) && Function_152(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_152(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_27(9, 0) && Function_152(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_152(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_27(8, 0) && iVar19)
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
	if (Function_74(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_74(StackVal, StackVal, vVar3))
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
	if (!Function_74(StackVal, StackVal, vVar3))
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

int Function_152(int iParam0) //Position: 0x856E / 34158
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_153(int iParam0) //Position: 0x8583 / 34179
{
	int iVar0;
	int iVar1;
	
	if (!Function_126(iParam0))
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

bool Function_154(bool bParam0, bool bParam1) //Position: 0x85D2 / 34258
{
	return (bParam0 && bParam1) == 0;
}

void Function_155(bool bParam0, bool bParam1) //Position: 0x85DF / 34271
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

void Function_156(bool bParam0, bool bParam1, int iParam2) //Position: 0x8630 / 34352
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_157(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_161(bParam0, 0, 0);
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

bool Function_157(int iParam0, int iParam1) //Position: 0x869E / 34462
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_158(int iParam0) //Position: 0x86B1 / 34481
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_160(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_131(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_86(473, 1, 0, 0);
		iVar0 = Function_159(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_86(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_86(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_86(476, 1, 0, 0);
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
		Function_85(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_85(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!Function_41())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_159(int iParam0) //Position: 0x87B0 / 34736
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_82(iParam0))
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

bool Function_160(var uParam0, int iParam1) //Position: 0x8808 / 34824
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_161(bool bParam0, bool bParam1, int iParam2) //Position: 0x8824 / 34852
{
	if (!Function_162(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_162(int iParam0) //Position: 0x887B / 34939
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_163(bool bParam0) //Position: 0x888D / 34957
{
	bool bVar0;
	
	if (Function_154(bParam0, 1) && Function_154(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_164(var uParam0) //Position: 0x88C1 / 35009
{
	if (uParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (uParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (uParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (uParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_210(4, 0, 0);
		}
	}
	return;
}

void Function_165() //Position: 0x8928 / 35112
{
	Function_166();
	return;
}

void Function_166() //Position: 0x8931 / 35121
{
	Function_175(&Local_4 + 4);
	Function_175(&Local_4 + 128);
	Function_175(&Local_4 + 216);
	Function_175(&Local_4 + 340);
	Function_175(&Local_4 + 380);
	Function_175(&Local_4 + 420);
	Function_167(&Global_6563, &Global_7581, 0, 0);
	Function_167(&Global_6563, &Global_7581, 16, 0);
	Function_167(&Global_6563, &Global_7581, 2, 0);
	Function_167(&Global_6563, &Global_7581, 5, 0);
	Function_167(&Global_6563, &Global_7581, 24, 0);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_167(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x89A2 / 35234
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_174(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_174(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_174(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_173(uParam0[iVar02], 8);
	}
	Function_173(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_172(StackVal);
	if (bParam3)
	{
		Function_168(uParam0, uParam1, iParam2, 0);
	}
}

void Function_168(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8A3C / 35388
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_171(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_170(Global_29007), Function_169(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_174(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_174(uParam0[iParam22], 1) && !bParam3)
	{
		Function_171(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_170(Global_29007), Function_169(Global_29007), false, 0);
	}
}

int Function_169(int iParam0) //Position: 0x8B8B / 35723
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

int Function_170(int iParam0) //Position: 0x8BB6 / 35766
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

void Function_171(var uParam0, int iParam1) //Position: 0x8BEA / 35818
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_172(bool bParam0) //Position: 0x8BF9 / 35833
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

void Function_173(var uParam0, int iParam1) //Position: 0x8C93 / 35987
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_174(var uParam0, int iParam1) //Position: 0x8CAA / 36010
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_175(bool bParam0) //Position: 0x8CC6 / 36038
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_176(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_176(var uParam0, int iParam1) //Position: 0x8CEC / 36076
{
	if (Function_178(uParam0[iParam13], 4))
	{
		if (Function_178(uParam0[iParam13], 1))
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
			Function_177(uParam0[iParam13], 1);
			Function_177(uParam0[iParam13], 2);
			Function_177(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_177(var uParam0, int iParam1) //Position: 0x8E1A / 36378
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_178(var uParam0, bool bParam1) //Position: 0x8E34 / 36404
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_179(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8E51 / 36433
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_204());
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
	Function_203();
	CLEAR_PRINTED_OBJECTIVE();
	Function_202();
	Function_200(0);
	Function_199();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_198();
	Function_197();
	Function_203();
	ENABLE_JOURNAL_REPLAY(1);
	Function_2(1);
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
		Function_196(Global_34573);
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
	Function_195(Global_28178);
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
	Function_194(1178687);
	Function_192(33039);
	Function_191(0x218003f);
	Function_190(4194560);
	Function_189();
	Function_188();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_185(0, 1, 1);
	}
	else
	{
		Function_185(0, 1, 1);
	}
	Function_184();
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
	Function_180();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_37(&Global_12976 + 36 + 20, 16);
}

void Function_180() //Position: 0x9042 / 36930
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
		if (Function_183() > 3)
		{
			bVar0 *= 2;
		}
		Function_181(StackVal, 0, 0, Function_6(bVar0), 0);
	}
	return;
}

void Function_181(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x9098 / 37016
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_182((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_182(bool bParam0) //Position: 0x90DE / 37086
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_183() //Position: 0x9103 / 37123
{
	return Global_12976.f_156;
}

void Function_184() //Position: 0x910E / 37134
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_130(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_185(int iParam0, bool bParam1, int iParam2) //Position: 0x9138 / 37176
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
		if (Function_82(Global_29006))
		{
			Function_131(&(Global_29008[Global_29006]), 131072);
			Function_130(&(Global_29008[Global_29006]), 2097152);
			Function_186(Global_29006);
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
				if (Function_160(&(Global_29008[iVar0]), 4) || Function_160(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_130(&(Global_29008[iVar0]), 2097155);
					Function_131(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_41())
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

void Function_186(int iParam0) //Position: 0x9243 / 37443
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_187())
			{
				return;
			}
		}
		if (!Function_160(&(Global_29008[iParam0]), 2048))
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

bool Function_187() //Position: 0x92C2 / 37570
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_160(&(Global_29008[iVar0]), 4) || Function_160(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_188() //Position: 0x931F / 37663
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

void Function_189() //Position: 0x9345 / 37701
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

void Function_190(int iParam0) //Position: 0x936B / 37739
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_191(int iParam0) //Position: 0x9388 / 37768
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_192(int iParam0) //Position: 0x939B / 37787
{
	Function_193(&Global_28842, iParam0);
	return;
}

void Function_193(var uParam0, int iParam1) //Position: 0x93A9 / 37801
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_194(bool bParam0) //Position: 0x93C4 / 37828
{
	if (Function_154(bParam0, 1) && !Function_154(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_195(int iParam0) //Position: 0x93F1 / 37873
{
	int iVar0;
	
	if (!Function_126(iParam0))
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

void Function_196(bool bParam0) //Position: 0x94B8 / 38072
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

void Function_197() //Position: 0x9534 / 38196
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

void Function_198() //Position: 0x9575 / 38261
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

void Function_199() //Position: 0x95B6 / 38326
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_200(int iParam0) //Position: 0x95CA / 38346
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_201())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_201() //Position: 0x9606 / 38406
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

void Function_202() //Position: 0x962B / 38443
{
	Global_8722 = 0.0f;
	return;
}

void Function_203() //Position: 0x9635 / 38453
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

int Function_204() //Position: 0x9660 / 38496
{
	bool bVar0;
	
	bVar0 = Function_50();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_205() //Position: 0x967A / 38522
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_206(bool bParam0) //Position: 0x9683 / 38531
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

int Function_207(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x96DB / 38619
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
		Function_209(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_208(StackVal);
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

void Function_208(bool bParam0) //Position: 0x99F9 / 39417
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

void Function_209(bool bParam0) //Position: 0x9A25 / 39461
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_210(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9A3A / 39482
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
		Function_211(Global_16524, bVar0, 1);
	}
	return;
}

void Function_211(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9B17 / 39703
{
	int iVar0;
	
	Function_213(bParam0);
	Function_9(bParam1);
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
	Function_212();
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

void Function_212() //Position: 0x9C90 / 40080
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_213(int iParam0) //Position: 0x9C9C / 40092
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

void Function_214(int iParam0, bool bParam1) //Position: 0x9CE2 / 40162
{
	if (!Function_82(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Function_131(&(Global_29008[iParam0]), 2097152);
	}
	else
	{
		Function_130(&(Global_29008[iParam0]), 2097152);
	}
	return;
}

void Function_215(bool bParam0) //Position: 0x9D16 / 40214
{
	vector3 vVar0;
	
	if (bParam0)
	{
		if (!Function_219(&iLocal_1070))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1500)[16], &vVar0);
			vVar0.f_4 = (vVar0.y + 3.0f);
			bLocal_1122 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1122, "RANCH04_BELL_MASTER", vVar0);
			Function_217(&iLocal_1070);
		}
	}
	else if (Function_219(&iLocal_1070))
	{
		STOP_SOUND(bLocal_1122);
		RELEASE_SOUND_ID(bLocal_1122);
		Function_216(&iLocal_1070);
	}
	return;
}

void Function_216(int iParam0) //Position: 0x9D8E / 40334
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_217(int iParam0) //Position: 0x9DA2 / 40354
{
	Function_218(iParam0, 0.0f);
	return;
}

void Function_218(int iParam0, float fParam1) //Position: 0x9DAE / 40366
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(iParam0, 1);
	Function_37(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_219(int iParam0) //Position: 0x9DCF / 40399
{
	return Function_154(*iParam0, 1);
}

void Function_220() //Position: 0x9DDC / 40412
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	
	if (iLocal_1175)
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_1175 = 0;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "NoGringoCamera"))
	{
		DECOR_REMOVE(Global_34573, "NoGringoCamera");
	}
	SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
	if (uLocal_1154 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(uLocal_1154, 1);
	}
	if (uLocal_1155 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(uLocal_1155, 1);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1182))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
	}
	if (IS_ACTOR_VALID(bLocal_976))
	{
		AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bLocal_976, 0, 1);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_976);
	}
	bLocal_997 = FIND_OBJECT_IN_LAYOUT(Local_4, "DeadHorse01");
	if (IS_OBJECT_VALID(bLocal_997))
	{
		SET_CORPSE_PERMANENT(bLocal_997, 0);
		DESTROY_OBJECT(bLocal_997);
	}
	bLocal_997 = FIND_OBJECT_IN_LAYOUT(Local_4, "DeadHorse02");
	if (IS_OBJECT_VALID(bLocal_997))
	{
		SET_CORPSE_PERMANENT(bLocal_997, 0);
		DESTROY_OBJECT(bLocal_997);
	}
	SET_DRAW_ACTOR(bLocal_976, true);
	Function_230(3, 0, 1);
	if (IS_BLIP_VALID(bLocal_991))
	{
		REMOVE_BLIP(bLocal_991);
	}
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	if (IS_OBJECT_VALID(bLocal_992))
	{
		UNK_0x7246F438(bLocal_992);
		DESTROY_OBJECT(bLocal_992);
	}
	if (IS_OBJECT_VALID(bLocal_1067))
	{
		UNK_0x7246F438(bLocal_1067);
		DESTROY_OBJECT(bLocal_1067);
	}
	if (IS_OBJECT_VALID(bLocal_1061))
	{
		UNK_0x7246F438(bLocal_1061);
		DESTROY_OBJECT(bLocal_1061);
	}
	if (IS_OBJECT_VALID(bLocal_1062))
	{
		UNK_0x7246F438(bLocal_1062);
		DESTROY_OBJECT(bLocal_1062);
	}
	if (IS_OBJECT_VALID(bLocal_1063))
	{
		UNK_0x7246F438(bLocal_1063);
		DESTROY_OBJECT(bLocal_1063);
	}
	if (IS_OBJECT_VALID(bLocal_1064))
	{
		UNK_0x7246F438(bLocal_1064);
		DESTROY_OBJECT(bLocal_1064);
	}
	if (IS_OBJECT_VALID(bLocal_1065))
	{
		UNK_0x7246F438(bLocal_1065);
		DESTROY_OBJECT(bLocal_1065);
	}
	if (UNK_0x7246F438(bLocal_1066))
	{
		UNK_0xE18028C1(bLocal_1066);
		DESTROY_OBJECT(bLocal_1066);
	}
	RESET_RMPTFX_IN_VOLUME((*&Local_4 + 672)[0]);
	RESET_RMPTFX_IN_VOLUME((*&Local_4 + 840)[1]);
	if (bLocal_497)
	{
		GET_OBJECT_POSITION((*&Local_4 + 1500)[10], &vLocal_1127);
		bLocal_997 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "nAfterburn", "script_barnfire_afterburn", vLocal_1127);
		UNK_0x6745191B(bLocal_997, 0.0f, 0.0f, 0.0f);
	}
	GET_VOLUME_CENTER((*&Local_4 + 672)[1], &vVar2);
	bVar1 = LOCATE_PHYSINST_OF_TYPE(vVar2, 50.0f, "hen_barn02x_p_cus_beams01x", 1);
	if (IS_PHYSINST_VALID(bVar1))
	{
		REMOVE_PHYSINST(bVar1);
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	if (IS_ACTORSET_VALID(Local_4.f_632))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(Local_4.f_632))
		{
			bVar5 = GET_ACTOR_FROM_ACTORSET(Local_4.f_632, bVar0);
			if (IS_ACTOR_VALID(bVar5))
			{
				SET_ACTOR_STREAMING_HIGH_PRIORITY(bVar5, 0);
				Function_229(bVar5);
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar5, 0);
				if (IS_ACTOR_RIDING(bVar5))
				{
					ACTOR_DISMOUNT_NOW(bVar5);
				}
				RESET_ANIM_SET_FOR_ACTOR(bVar5, 0);
				TASK_CLEAR(bVar5);
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar5)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(bVar5));
				}
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar5, 64, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar5, 65, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar5, 66, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar5, 67, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar5, 68, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar5, 46, 1);
				SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar5, 1);
				if (bLocal_497)
				{
					Function_228(bVar5);
				}
				GIVE_OBJECT_TO_LAYOUT(bVar5, GET_AMBIENT_LAYOUT());
			}
			bVar0++;
		}
		DESTROY_ACTORSET(Local_4.f_632);
	}
	if (IS_ACTOR_VALID(bLocal_976))
	{
		bVar6 = Function_227(bLocal_976);
		if (IS_OBJECT_VALID(bVar6))
		{
			Function_226(bVar6);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 0);
			DESTROY_OBJECT(bVar6);
		}
	}
	MEMORY_ALLOW_SHOOTING(bLocal_976, true);
	if (SQUAD_IS_VALID(Local_4.f_536))
	{
		Function_224(&Local_4 + 536, 1, 0);
		DESTROY_OBJECT(Local_4.f_536);
	}
	if (IS_ACTORSET_VALID(bLocal_828))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(bLocal_828))
		{
			bVar5 = GET_ACTOR_FROM_ACTORSET(bLocal_828, bVar0);
			if (IS_ACTOR_VALID(bVar5))
			{
				RELEASE_ACTOR_AS_AMBIENT(bVar5);
			}
			bVar0++;
		}
		DESTROY_ACTORSET(bLocal_828);
	}
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	Function_190(256);
	Function_223();
	Function_221();
	Function_192(1);
	return;
}

void Function_221() //Position: 0xA1C4 / 41412
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (IS_DOOR_VALID(Local_835[iVar010]))
		{
			Function_222(Local_835[iVar010]);
		}
		iVar0++;
	}
	return;
}

void Function_222(bool bParam0) //Position: 0xA1F4 / 41460
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

void Function_223() //Position: 0xA248 / 41544
{
	if (IS_DOOR_VALID(bLocal_1148))
	{
		SET_DOOR_AUTO_CLOSE(bLocal_1148, 1);
		SET_DOOR_LOCK(bLocal_1148, 0);
	}
	if (IS_DOOR_VALID(bLocal_1149))
	{
		SET_DOOR_AUTO_CLOSE(bLocal_1149, 1);
		SET_DOOR_LOCK(bLocal_1149, 0);
	}
	if (IS_DOOR_VALID(Local_835[010]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[010], 1);
		SET_DOOR_LOCK(Local_835[010], 0);
	}
	if (IS_DOOR_VALID(Local_835[110]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[110], 1);
		SET_DOOR_LOCK(Local_835[110], 0);
	}
	if (IS_DOOR_VALID(Local_835[210]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[210], 1);
		SET_DOOR_LOCK(Local_835[210], 0);
	}
	if (IS_DOOR_VALID(Local_835[310]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[310], 1);
		SET_DOOR_LOCK(Local_835[310], 0);
	}
	if (IS_DOOR_VALID(Local_835[410]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[410], 1);
		SET_DOOR_LOCK(Local_835[410], 0);
	}
	if (IS_DOOR_VALID(Local_835[510]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[510], 1);
		SET_DOOR_LOCK(Local_835[510], 0);
	}
	if (IS_DOOR_VALID(Local_835[610]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[610], 1);
		SET_DOOR_LOCK(Local_835[610], 0);
	}
	if (IS_DOOR_VALID(Local_835[710]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[710], 1);
		SET_DOOR_LOCK(Local_835[710], 0);
	}
	if (IS_DOOR_VALID(Local_835[810]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[810], 1);
		SET_DOOR_LOCK(Local_835[810], 0);
	}
	if (IS_DOOR_VALID(Local_835[910]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[910], 1);
		SET_DOOR_LOCK(Local_835[910], 0);
	}
	if (IS_DOOR_VALID(Local_835[1210]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[1210], 1);
		SET_DOOR_LOCK(Local_835[1210], 0);
	}
	if (IS_DOOR_VALID(Local_835[1310]))
	{
		SET_DOOR_AUTO_CLOSE(Local_835[1310], 1);
		SET_DOOR_LOCK(Local_835[1310], 0);
	}
	return;
}

void Function_224(var uParam0, bool bParam1, bool bParam2) //Position: 0xA408 / 41992
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
				if (!Function_225(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_225(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA484 / 42116
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_226(bool bParam0) //Position: 0xA49E / 42142
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(bParam0, "water_bucket");
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_GRINGO_FROM_OBJECT(bVar0);
			if (IS_GRINGO_VALID(bVar1))
			{
				GRINGO_DEACTIVATE(bVar1);
			}
		}
	}
	return;
}

bool Function_227(bool bParam0) //Position: 0xA4DF / 42207
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "Water_Bucket_Ref"))
		{
			return DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "Water_Bucket_Ref");
		}
	}
	LOG_ERROR("GET_WATER_BUCKET_IN_HAND: called with an invalid Actor");
	return "";
}

void Function_228(bool bParam0) //Position: 0xA568 / 42344
{
	if (!DECOR_CHECK_EXIST(bLocal_508, "Gringo1Assigned"))
	{
		TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(Local_4.f_1860), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(bParam0, Local_4.f_1860, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(Local_4.f_1860, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(bLocal_508, "Gringo1Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(bLocal_508, "Gringo2Assigned"))
	{
		TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(Local_4.f_1864), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(bParam0, Local_4.f_1864, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(Local_4.f_1864, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(bLocal_508, "Gringo2Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(bLocal_508, "Gringo3Assigned"))
	{
		TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(Local_4.f_1868), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(bParam0, Local_4.f_1868, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(Local_4.f_1868, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(bLocal_508, "Gringo3Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(bLocal_508, "Gringo4Assigned"))
	{
		TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(Local_4.f_1872), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(bParam0, Local_4.f_1872, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(Local_4.f_1872, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(bLocal_508, "Gringo4Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(bLocal_508, "Gringo5Assigned"))
	{
		TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(Local_4.f_1876), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(bParam0, Local_4.f_1876, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(Local_4.f_1876, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(bLocal_508, "Gringo5Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(bLocal_508, "Gringo6Assigned"))
	{
		TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(Local_4.f_1880), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(bParam0, Local_4.f_1880, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(Local_4.f_1880, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(bLocal_508, "Gringo6Assigned", true);
	}
	return;
}

void Function_229(bool bParam0) //Position: 0xA83B / 43067
{
	bool bVar0;
	void fVar1;
	
	bVar0 = Function_227(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		Function_226(bVar0);
		DESTROY_OBJECT(bVar0);
		DECOR_REMOVE(bParam0, "Water_Bucket_Ref");
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
	}
	fVar1 = GET_CURRENT_GRINGO(bParam0);
	if (IS_GRINGO_VALID(fVar1))
	{
		GRINGO_ALLOW_ACTIVATION(fVar1, false);
	}
	return;
}

void Function_230(int iParam0, bool bParam1, bool bParam2) //Position: 0xA88E / 43150
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
						Function_208(bVar1);
					}
				}
				Function_231(bVar0);
			}
		}
	}
	return;
}

void Function_231(bool bParam0) //Position: 0xA985 / 43397
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

void Function_232() //Position: 0xA9B1 / 43441
{
	var uVar0[9];
	int iVar10;
	
	if (!Function_281())
	{
		return;
	}
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "S02: Ride Back";
	uVar0[4] = "S03: Barn Fire";
	uVar0[5] = "S04: Horses";
	uVar0[6] = "Final Cutscene";
	iVar10 = Function_267(&uLocal_500, &uVar0, &Local_509 + 4, GET_DEBUG_PADINDEX(), 0);
	if (Function_266(&iVar10, &bLocal_488, &iLocal_489, &Local_490))
	{
		Function_259();
		Function_258();
	}
	switch (iVar10)
	{
		case 0x00000000:
			Function_259();
			Function_258();
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
			Function_257(&bLocal_497, 8);
			break;
		
		case 0x00000001:
			Function_259();
			Function_258();
			Function_252(bLocal_488);
			Function_248(StackVal, StackVal, 5, &bLocal_498, &bLocal_488, Function_255(bLocal_488), Function_252(bLocal_488), 0);
			break;
		
		case 0x00000002:
			Function_259();
			Function_258();
			Function_243(&uLocal_499, 4);
			break;
		
		case 0x00000003:
			Function_259();
			Function_258();
			Function_242(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_241();
			bLocal_488 = true;
			Local_490 = 1000;
			Function_240(0);
			break;
		
		case 0x00000004:
			Function_259();
			Function_258();
			Function_242(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_239();
			bLocal_488 = 2;
			Local_490 = 1000;
			Function_240(0);
			break;
		
		case 0x00000005:
			Function_259();
			Function_258();
			Function_242(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_237();
			bLocal_488 = 3;
			Local_490 = 1000;
			Function_240(0);
			break;
		
		case 0x00000006:
			Function_259();
			Function_258();
			Function_242(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_233();
			bLocal_488 = 101;
			Local_490 = 1000;
			Function_240(0);
			break;
	}
	return;
}

void Function_233() //Position: 0xAB70 / 43888
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Function_229(bLocal_976);
	TASK_STAND_STILL(bLocal_976, -1.0f, 0, 0);
	Function_230(3, 0, 1);
	Function_236(bLocal_990);
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	if (SQUAD_IS_VALID(Local_4.f_536))
	{
		bVar2 = false;
		while (bVar2 <= SQUAD_GET_SIZE(Local_4.f_536))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, bVar2);
			if (IS_ACTOR_VALID(bVar0))
			{
				bVar1 = GET_BLIP_ON_ACTOR(bVar0);
				if (IS_BLIP_VALID(bVar1))
				{
					REMOVE_BLIP(bVar1);
				}
			}
			bVar2++;
		}
	}
	Function_234(1);
	Function_191(256);
	return;
}

void Function_234(int iParam0) //Position: 0xABF6 / 44022
{
	Function_235(&Global_28842, iParam0);
	return;
}

void Function_235(var uParam0, int iParam1) //Position: 0xAC04 / 44036
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_236(bool bParam0) //Position: 0xAC27 / 44071
{
	if (IS_BLIP_VALID(bParam0))
	{
		REMOVE_BLIP(bParam0);
	}
	return;
}

void Function_237() //Position: 0xAC3A / 44090
{
	Function_238(Global_34573, (*&Local_4 + 1500)[5], 1, 1, 1);
	Function_238(bLocal_976, (*&Local_4 + 1500)[6], 1, 1, 1);
	TASK_STAND_STILL(bLocal_976, -1.0f, 0, 0);
	Function_230(3, 0, 1);
	Function_236(bLocal_990);
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	Function_234(1);
	return;
}

void Function_238(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xAC8A / 44170
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

void Function_239() //Position: 0xAD91 / 44433
{
	Function_238(Global_34573, (*&Local_4 + 1500)[3], 1, 1, 1);
	Function_238(bLocal_976, (*&Local_4 + 1500)[4], 1, 1, 1);
	TASK_STAND_STILL(bLocal_976, -1.0f, 0, 0);
	Function_230(3, 0, 1);
	Function_234(1);
	return;
}

void Function_240(int iParam0) //Position: 0xADCC / 44492
{
	char* cVar0[32];
	
	Function_217(&iLocal_1002);
	Function_217(&fLocal_1005);
	iLocal_489 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (bLocal_488)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "02", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "03", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "04", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "05", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "06", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "07", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "08", 32);
			break;
		
		case 0x00000008:
			stradd(&cVar0, "09", 32);
			break;
		
		case 0x00000065:
			stradd(&cVar0, "FINAL", 32);
			break;
		
		default:
			LOG_ERROR("GoToGoal: Unknown stage ID!");
			break;
	}
	stradd(&cVar0, " - ", 32);
	switch (iParam0)
	{
		case 0x00000000:
			stradd(&cVar0, "INITIALIZE", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "nSTREAMING", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "POST STREAMING", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "FADE IN", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "CUTSCENE", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "POST CUTSCENE", 32);
			break;
		
		case 0x00000069:
			stradd(&cVar0, "FADE OUT", 32);
			break;
		
		case 0x0000006A:
			stradd(&cVar0, "COMPLETE", 32);
			break;
		
		default:
			if (iParam0 <= 6 && iParam0 >= 104)
			{
				stradd(&cVar0, "GOAL ", 32);
				straddi(&cVar0, (iParam0 + 1 - 6), 32);
			}
			else
			{
				LOG_ERROR("GoToGoal: Unknown goal ID!");
			}
			break;
	}
	return;
}

void Function_241() //Position: 0xAFFA / 45050
{
	Function_238(bLocal_978, (*&Local_4 + 892)[0], 1, 1, 1);
	Function_238(bLocal_979, (*&Local_4 + 892)[2], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(Global_34573, bLocal_978);
	ACTOR_MOUNT_ACTOR(bLocal_976, bLocal_979);
	TASK_STAND_STILL(bLocal_976, -1.0f, 0, 0);
	Function_230(3, 1, 1);
	Function_234(1);
	return;
}

void Function_242(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xB049 / 45129
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

void Function_243(var uParam0, int iParam1) //Position: 0xB072 / 45170
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244(iParam1);
	*uParam0 = 1;
	return;
}

void Function_244(int iParam0) //Position: 0xB095 / 45205
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_247("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_246(2) || Function_246(8)) || Function_246(9)) || Function_246(10))
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
		Function_247("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_247("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_247("");
	}
	else if (iParam0 == 8)
	{
		Function_245();
		Function_10();
	}
	else if (iParam0 == 4)
	{
		Function_245();
	}
	return;
}

void Function_245() //Position: 0xB18C / 45452
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_246(int iParam0) //Position: 0xB198 / 45464
{
	int iVar0;
	
	if (!Function_29(iParam0))
	{
		return 0;
	}
	iVar0 = Function_28(iParam0);
	if (!Function_19(Function_28(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_247(bool bParam0) //Position: 0xB1CE / 45518
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_248(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xB238 / 45624
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_249(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_244(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_249(vector3 vParam0, var uParam3, var uParam4) //Position: 0xB275 / 45685
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_251(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_250(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_250(int iParam0) //Position: 0xB2F8 / 45816
{
	if (!Function_82(iParam0))
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

var Function_251(vector3 vParam0, bool bParam3) //Position: 0xB7A6 / 47014
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

vector3 Function_252(int iParam0) //Position: 0xB811 / 47121
{
	Function_253(iParam0 + 1);
	return StackVal, StackVal, Function_253(iParam0 + 1);
}

vector3 Function_253(int iParam0) //Position: 0xB81E / 47134
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_254((*&Local_4 + 860)[1]);
			return StackVal, StackVal, Function_254((*&Local_4 + 860)[1]);
		
		case 0x00000001:
			Function_254((*&Local_4 + 892)[1]);
			return StackVal, StackVal, Function_254((*&Local_4 + 892)[1]);
		
		case 0x00000002:
			Function_254((*&Local_4 + 1500)[3]);
			return StackVal, StackVal, Function_254((*&Local_4 + 1500)[3]);
		
		case 0x00000003:
			Function_254((*&Local_4 + 1500)[5]);
			return StackVal, StackVal, Function_254((*&Local_4 + 1500)[5]);
		
		default:
	}
	Function_254((*&Local_4 + 928)[1]);
	return StackVal, StackVal, Function_254((*&Local_4 + 928)[1]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	Function_254((*&Local_4 + 860)[1]);
	return StackVal, StackVal, Function_254((*&Local_4 + 860)[1]);
}

vector3 Function_254(bool bParam0) //Position: 0xB8D9 / 47321
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

int Function_255(int iParam0) //Position: 0xB900 / 47360
{
	return Function_256(iParam0 + 1);
}

int Function_256(int iParam0) //Position: 0xB90D / 47373
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 860)[1]);
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 892)[1]);
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1500)[3]);
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1500)[5]);
		
		default:
	}
	return GET_OBJECT_HEADING((*&Local_4 + 928)[1]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 860)[1]);
}

void Function_257(bool bParam0, int iParam1) //Position: 0xB9C8 / 47560
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244(iParam1);
	*bParam0 = 1;
	return;
}

void Function_258() //Position: 0xB9EB / 47595
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_259() //Position: 0xBA00 / 47616
{
	Function_261();
	Function_260(10, 3);
	return;
}

void Function_260(int iParam0, int iParam1) //Position: 0xBA0F / 47631
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

void Function_261() //Position: 0xBB46 / 47942
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_265())
	{
		Function_264(10, 3);
	}
	else
	{
		Function_262();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_262() //Position: 0xBB91 / 48017
{
	Function_263(25, 2);
	return;
}

void Function_263(int iParam0, int iParam1) //Position: 0xBB9D / 48029
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

void Function_264(int iParam0, int iParam1) //Position: 0xBD9B / 48539
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

bool Function_265() //Position: 0xBED2 / 48850
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
				if (!Function_154(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_266(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBF39 / 48953
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_259();
			Function_258();
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
		Function_247("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_267(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBFDF / 49119
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_280(&Var15, &Var0);
	uVar20 = Function_279(*uParam1, &Var15);
	Function_278(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_277(uParam0, uVar20);
	Function_275(StackVal, uParam0, Var15.f_12);
	Function_273(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_272(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_269(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_268(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_268(int iParam0, int iParam1, int iParam2) //Position: 0xC0A8 / 49320
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

bool Function_269(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xC104 / 49412
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
				Function_271(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_271(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_268(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_270(bParam1->f_32);
	}
	else
	{
		Function_270(bParam1->f_32);
	}
	return 0;
}

void Function_270(bool bParam0) //Position: 0xC28A / 49802
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

void Function_271(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xC2C4 / 49860
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

var Function_272(int iParam0, var uParam1, int iParam2) //Position: 0xC372 / 50034
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_273(var uParam0, int iParam1, int iParam2) //Position: 0xC396 / 50070
{
	switch (Function_274())
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

int Function_274() //Position: 0xC432 / 50226
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

void Function_275(var uParam0, int iParam1, int iParam2) //Position: 0xC46E / 50286
{
	switch (Function_276(uParam0))
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

int Function_276(bool bParam0) //Position: 0xC506 / 50438
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_50()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_154(*bParam0, 0x40000000))
		{
			Function_77(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_154(*bParam0, 0x40000000))
		{
			Function_77(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_37(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_50()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_154(*bParam0, 0x20000000))
		{
			Function_77(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_154(*bParam0, 0x20000000))
		{
			Function_77(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_37(bParam0, 0x20000000);
	return 0;
}

var Function_277(var uParam0, int iParam1) //Position: 0xC651 / 50769
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

void Function_278(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC7A0 / 51104
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

var Function_279(int iParam0, int iParam1) //Position: 0xC833 / 51251
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_280(var uParam0, var uParam1) //Position: 0xC84D / 51277
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

bool Function_281() //Position: 0xC89B / 51355
{
	return Global_30920;
}

bool Function_282() //Position: 0xC8A4 / 51364
{
	if (IS_EXITFLAG_SET())
	{
		Function_252(bLocal_488);
		Function_248(StackVal, StackVal, 4, &bLocal_498, &bLocal_488, Function_255(bLocal_488), Function_252(bLocal_488), 0);
		return 0;
	}
	Function_638(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_509, bLocal_488, iLocal_489, &uLocal_499, &bLocal_497, &bLocal_498);
	Function_634();
	if ((bLocal_488 == 99 && bLocal_488 == 100) && bLocal_488 == 102)
	{
		if (Function_633())
		{
			if (IS_ACTOR_DEAD(Global_34573))
			{
				Function_252(bLocal_488);
				Function_248(StackVal, StackVal, 1, &bLocal_498, &bLocal_488, Function_255(bLocal_488), Function_252(bLocal_488), 0);
				return 1;
			}
			if (Function_632(2048))
			{
				Function_252(bLocal_488);
				Function_248(StackVal, StackVal, 3, &bLocal_498, &bLocal_488, Function_255(bLocal_488), Function_252(bLocal_488), 0);
				return 1;
			}
			if (Function_612(&Local_649, &uLocal_609, &uLocal_786, cLocal_834, 0))
			{
				if (Function_603(&uLocal_786))
				{
					Function_252(bLocal_488);
					Function_248(StackVal, StackVal, 5, &bLocal_498, &bLocal_488, Function_255(bLocal_488), Function_252(bLocal_488), 0);
					return 1;
				}
			}
			if ((Global_3403 || Global_3404) || Function_601(Global_34573, 25))
			{
				Function_252(bLocal_488);
				Function_248(StackVal, StackVal, 2, &bLocal_498, &bLocal_488, Function_255(bLocal_488), Function_252(bLocal_488), 0);
				return 1;
			}
			if (Function_599())
			{
				Function_247("R4_Terrorize");
				Function_252(bLocal_488);
				Function_248(StackVal, StackVal, 5, &bLocal_498, &bLocal_488, Function_255(bLocal_488), Function_252(bLocal_488), 0);
				return 1;
			}
			Function_598();
		}
	}
	switch (bLocal_488)
	{
		case 0x00000063:
			Function_579();
			break;
		
		case 0x00000000:
			Function_557();
			break;
		
		case 0x00000001:
			Function_522();
			break;
		
		case 0x00000002:
			Function_495();
			break;
		
		case 0x00000003:
			Function_359();
			break;
		
		case 0x00000065:
			Function_285();
			break;
		
		case 0x00000064:
			if (Function_284(&bLocal_498))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_283(&bLocal_488, &iLocal_489, &Local_490))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_497 && bLocal_488 == 102)
	{
		Function_257(&bLocal_497, 8);
		Function_1();
	}
	if (bLocal_498 && bLocal_488 == 100)
	{
		Function_252(bLocal_488);
		Function_248(StackVal, StackVal, 5, &bLocal_498, &bLocal_488, Function_255(bLocal_488), Function_252(bLocal_488), 0);
	}
	if (uLocal_499 && bLocal_488 == 102)
	{
		Function_243(&uLocal_499, 4);
		Function_1();
	}
	return 1;
}

bool Function_283(var uParam0, var uParam1, int iParam2) //Position: 0xCAAF / 51887
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

bool Function_284(int iParam0) //Position: 0xCAEF / 51951
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_285() //Position: 0xCB02 / 51970
{
	switch (iLocal_489)
	{
		case 0x00000000:
			Function_355(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_254((*&Local_4 + 928)[0]);
			bLocal_608 = Function_354(StackVal, StackVal, Function_254((*&Local_4 + 928)[0]), 0, 1, 1);
			if (!Function_353(bLocal_608))
			{
				Function_352(&Local_509);
			}
			if (!iLocal_1042[3])
			{
				iLocal_1151 = 1000;
				Function_242(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_351();
				Function_240(1);
			}
			else if (Function_350())
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_353(bLocal_608) || bLocal_608 != 4294967295)) && Function_350())
			{
				Function_240(2);
			}
			break;
		
		case 0x00000002:
			Function_347();
			Function_240(3);
			break;
		
		case 0x00000003:
			if (Function_345())
			{
				if (Function_290("$/cutscene/R4_END/R4_END", &Local_490, &Local_509, &bLocal_488, 77839, 76275, 73917, 73338, 56017, 55969, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_287();
					Function_240(105);
				}
			}
			break;
		
		case 0x00000069:
			if (!HUD_IS_FADING())
			{
				if (HUD_IS_FADED())
				{
					Function_286(1.0f);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "sleeping"))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_240(106);
			}
			break;
		
		case 0x0000006A:
			bLocal_497 = true;
			break;
	}
	return;
}

void Function_286(bool bParam0) //Position: 0xCC5D / 52317
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

void Function_287() //Position: 0xCC7A / 52346
{
	if (!IS_ACTOR_VALID(bLocal_979))
	{
		Function_289();
		Function_288();
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "sleeping_wall_scripted"))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
		SET_ANIM_SET_FOR_ACTOR(Global_34573, "sleeping_wall_scripted", 0);
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "sleeping_wall_scripted/stand");
	}
	return;
}

bool Function_288() //Position: 0xCD02 / 52482
{
	vector3 vVar0;
	bool bVar3;
	
	if (IS_ACTOR_VALID(bLocal_978))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 488)[02]))
		{
			GET_POSITION((*&Local_4 + 488)[02], &vVar0);
			bVar3 = GET_HEADING((*&Local_4 + 488)[02]);
			DESTROY_ACTOR((*&Local_4 + 488)[02]);
			TELEPORT_ACTOR_WITH_HEADING(bLocal_978, vVar0, bVar3, 1, true, 1);
			TASK_STAND_STILL(bLocal_978, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_978, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_978, true);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_979))
	{
		bLocal_979 = (*&Local_4 + 488)[12];
		TASK_STAND_STILL(bLocal_979, -1.0f, 0, 0);
		TASK_PRIORITY_SET(bLocal_979, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_979, true);
	}
	if (!IS_ACTOR_VALID(bLocal_980))
	{
		bLocal_980 = (*&Local_4 + 488)[22];
		TASK_STAND_STILL(bLocal_980, -1.0f, 0, 0);
		TASK_PRIORITY_SET(bLocal_980, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_980, true);
	}
	if (!IS_ACTOR_VALID(bLocal_978))
	{
		return 0;
		LOG_ERROR("ERROR: m_aPlayerHorse is invalid in CacheHorses!");
	}
	else if (!IS_ACTOR_VALID(bLocal_979))
	{
		return 0;
		LOG_ERROR("ERROR: m_aCompanionHorse is invalid in CacheHorses!");
	}
	else if (!IS_ACTOR_VALID(bLocal_980))
	{
		return 0;
		LOG_ERROR("ERROR: m_aRancherHorse is invalid in CacheHorses!");
	}
	return 1;
}

void Function_289() //Position: 0xCE93 / 52883
{
	(*&Local_4 + 488)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PlayerHorse", 980, -831,2986f, 92,16936f, 2401,908f, 0.0f, 39,10776f, 0.0f);
	ACCESSORIZE_HORSE((*&Local_4 + 488)[02], 3);
	TASK_STAND_STILL((*&Local_4 + 488)[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 488)[02], true);
	(*&Local_4 + 488)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BonnieHorse", 981, -833,4547f, 92,16949f, 2402,206f, 0.0f, -11,70247f, 0.0f);
	ACCESSORIZE_HORSE((*&Local_4 + 488)[12], 3);
	TASK_STAND_STILL((*&Local_4 + 488)[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 488)[12], true);
	(*&Local_4 + 488)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RancherHorse", 976, -1039,087f, 99,65253f, 2948.0f, 0.0f, 188,754f, 0.0f);
	SET_ACTOR_RIDEABLE((*&Local_4 + 488)[22], 0);
	ACCESSORIZE_HORSE((*&Local_4 + 488)[22], 3);
	TASK_STAND_STILL((*&Local_4 + 488)[22], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 488)[22], true);
	return;
}

bool Function_290(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xCFB7 / 53175
{
	if (!bParam15)
	{
		Function_301(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_300(iParam2) || iParam2->f_24 < 1))
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
				Function_217(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_299())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_298(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_217(iParam1 + 4);
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
					Function_298(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_296(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_296(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_294(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_298(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_217(iParam1 + 4);
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
						Function_286(1.0f);
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
						Function_292();
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
					Function_291(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_300(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_291(bool bParam0) //Position: 0xD5CB / 54731
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

void Function_292() //Position: 0xD670 / 54896
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_293();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_293() //Position: 0xD6B5 / 54965
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_294(bool bParam0, bool bParam1) //Position: 0xD6C7 / 54983
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_295(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_295(bool bParam0) //Position: 0xD747 / 55111
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

float Function_296(int iParam0) //Position: 0xD776 / 55158
{
	if (Function_219(iParam0))
	{
		if (Function_297(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_297(int iParam0) //Position: 0xD83E / 55358
{
	return Function_154(*iParam0, 2);
}

int Function_298(bool bParam0) //Position: 0xD84B / 55371
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

bool Function_299() //Position: 0xD903 / 55555
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

bool Function_300(int iParam0) //Position: 0xD93D / 55613
{
	return iParam0->f_20;
}

void Function_301(var uParam0, int iParam1) //Position: 0xD947 / 55623
{
	Function_302(uParam0, iParam1, 0);
	return;
}

void Function_302(var uParam0, bool bParam1, bool bParam2) //Position: 0xD955 / 55637
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
			Function_242(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_86(20, 1, 0, 0);
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
						Function_242(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_86(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_303() //Position: 0xDAA1 / 55969
{
	switch (bLocal_488)
	{
		case 0x00000063:
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
	}
	return 0;
}

int Function_304() //Position: 0xDAD1 / 56017
{
	switch (bLocal_488)
	{
		case 0x00000063:
			Function_317(1, 1, 0, 0, 1, 1, 0, 1, 1, 1);
			Function_309();
			bLocal_488 = false;
			iLocal_489 = 2;
			Function_306(&Local_509, &bLocal_488, &iLocal_489);
			Function_305(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_509);
			return 1;
			break;
		
		case 0x00000001:
			Function_317(1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			RESET_RMPTFX_IN_VOLUME((*&Local_4 + 672)[0]);
			RESET_RMPTFX_IN_VOLUME((*&Local_4 + 840)[1]);
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "sleeping_wall_scripted"))
			{
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				SET_ANIM_SET_FOR_ACTOR(Global_34573, "sleeping_wall_scripted", 0);
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "sleeping_wall_scripted/stand");
			}
			DYNAMICMIXER_DETRIGGERSTATE(uLocal_1156, 1);
			DYNAMICMIXER_DETRIGGERSTATE(uLocal_1157, 1);
			Function_317(1, 1, 0, 0, 1, 1, 0, 1, 1, 1);
			GET_OBJECT_POSITION((*&Local_4 + 928)[4], &vLocal_1127);
			ENABLE_GAME_CAMERA_FOCUS(vLocal_1127, -1.0f, 6, 1, 1, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_305(struct<25> Param0) //Position: 0xDBF8 / 56312
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_488 = false;
			break;
		
		case 0x00000002:
			bLocal_488 = true;
			break;
		
		case 0x00000003:
			bLocal_488 = 101;
			break;
	}
}

void Function_306(int iParam0, int iParam1, int iParam2) //Position: 0xDC31 / 56369
{
	if (Function_300(iParam0))
	{
		*iParam1 = Function_308(iParam0);
		if (*iParam1 == 4294967295)
		{
			*iParam1 = 0;
		}
		if (*iParam1 == 99)
		{
			*iParam1 = 0;
			*iParam2 = 0;
		}
		Function_307();
	}
	return;
}

void Function_307() //Position: 0xDC65 / 56421
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

int Function_308(int iParam0) //Position: 0xDCB6 / 56502
{
	if (Function_300(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_309() //Position: 0xDCCE / 56526
{
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Function_315();
	}
	Function_214(Global_30668[0], 1);
	Function_314("MINI_GAMES_AND_JOBS\\RANCH04");
	if (IS_LAYOUTREF_VALID(Local_4))
	{
		bLocal_831 = CREATE_OBJECT_ITERATOR(Local_4);
		bLocal_832 = CREATE_OBJECT_ITERATOR(Local_4);
		bLocal_833 = CREATE_OBJECT_ITERATOR(Local_4);
	}
	Function_313(bLocal_976, 1);
	Function_230(3, 0, 1);
	SET_CRIPPLE_ENABLE(bLocal_976, 0);
	SET_ACTOR_FACTION(bLocal_976, 20);
	TASK_PRIORITY_SET(bLocal_976, true);
	AI_BEHAVIOR_SET_ALLOW(bLocal_976, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_976, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_976, true);
	SET_ACTOR_MAX_HEALTH(bLocal_976, 50.0f);
	SET_ACTOR_HEALTH(bLocal_976, GET_ACTOR_MAX_HEALTH(bLocal_976));
	if (!IS_ACTOR_VALID((*&Local_4 + 488)[12]))
	{
		Function_289();
		Function_288();
	}
	bLocal_829 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "TownfolkSet", 0);
	Function_311(&uLocal_609, bLocal_508);
	cLocal_834 = CREATE_OBJECT_ITERATOR(Local_4);
	Function_217(&iLocal_1002);
	Function_310(&fLocal_1005);
	Function_310(&iLocal_1008);
	Function_310(&iLocal_1011);
	Function_310(&iLocal_1017);
	return;
}

void Function_310(int iParam0) //Position: 0xDDDA / 56794
{
	if (!Function_219(iParam0))
	{
		Function_218(iParam0, 0.0f);
	}
	return;
}

int Function_311(var uParam0, bool bParam1) //Position: 0xDDEF / 56815
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_312(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_312(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_312(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_312(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_312(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0xE48F / 58511
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
	Function_77(iParam0 + 8, iParam4);
	return 1;
}

bool Function_313(bool bParam0, bool bParam1) //Position: 0xE552 / 58706
{
	if (IS_ACTOR_VALID(bParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

int Function_314(bool bParam0) //Position: 0xE593 / 58771
{
	if (REQUEST_MISSION_AUDIO_BANK(bParam0))
	{
		return 1;
	}
	return 0;
}

struct<8> Function_315() //Position: 0xE5A4 / 58788
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Ranch04_layout");
	Local_4.f_656 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVolumes_set");
	(*&Local_4 + 636)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneVol01", 2, -840,0001f, 91,77865f, 2401,022f, 0.0f, 29,95155f, 0.0f, 18,97917f, 7,683942f, 16,65859f);
	ADD_TO_VOLUME_SET(Local_4.f_656, (*&Local_4 + 636)[0]);
	(*&Local_4 + 636)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneVol03", 2, -1060f, 102,4f, 2956.0f, 0.0f, 11,06756f, 0.0f, 59,42543f, 13,39398f, 63,8956f);
	ADD_TO_VOLUME_SET(Local_4.f_656, (*&Local_4 + 636)[1]);
	(*&Local_4 + 636)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneVol04", 2, -849,09f, 92,0815f, 2449,202f, -3,788235f, 22,07147f, -0,6432894f, 5,939722f, 3,598746f, 5,939722f);
	ADD_TO_VOLUME_SET(Local_4.f_656, (*&Local_4 + 636)[2]);
	(*&Local_4 + 636)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneVolFinal", 2, -868,0001f, 90,35291f, 2460.0f, 0.0f, -66,68871f, 0.0f, 11,01241f, 3,505231f, 9,963429f);
	ADD_TO_VOLUME_SET(Local_4.f_656, (*&Local_4 + 636)[3]);
	Local_4.f_668 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "WildernessVolumes_set");
	(*&Local_4 + 660)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "VultureVol", 2, -1082,933f, 98,86334f, 2837,242f, 0.0f, 155,4373f, 0.0f, 163,0743f, 16,52561f, 49,50444f);
	ADD_TO_VOLUME_SET(Local_4.f_668, (*&Local_4 + 660)[0]);
	Local_4.f_760 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "BarnVolumes_set");
	(*&Local_4 + 672)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WholeBarnVol", 2, -844,7969f, 97,18204f, 2461,04f, 0.0f, 20,88082f, 0.0f, 20,38587f, 22,65216f, 27,45885f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[0]);
	(*&Local_4 + 672)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FrontDoorFireVol", 2, -846,7736f, 91,53082f, 2454,9f, 0.0f, 19,52647f, 0.0f, 15,12309f, 5,128766f, 2,109168f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[1]);
	(*&Local_4 + 672)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "UpperFloorVol", 2, -844,2581f, 99,38801f, 2461,247f, 0.0f, 20,27505f, 0.0f, 9,145086f, 0,6642481f, 20,36151f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[2]);
	(*&Local_4 + 672)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LowerFloorVol", 2, -844,6978f, 88,75982f, 2460,802f, 0.0f, 20,91257f, 0.0f, 14,37202f, 9,369125f, 21,53829f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[3]);
	(*&Local_4 + 672)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ClearAmbientsVol", 2, -846,2655f, 103,1422f, 2454,726f, 0.0f, 19,62343f, 0.0f, 94,64799f, 30,33995f, 115,8557f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[4]);
	(*&Local_4 + 672)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nDebrisVol", 2, -847,7042f, 90,33842f, 2452,276f, 0.0f, 19,52647f, 0.0f, 5,562357f, 3,557329f, 2,109168f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[5]);
	(*&Local_4 + 672)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SecondLock", 2, -847,4207f, 90,35291f, 2452,733f, 0.0f, 19,52647f, 0.0f, 3,948912f, 5,128766f, 3,01898f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[6]);
	(*&Local_4 + 672)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FireFightersStayOut", 2, -844,1649f, 88,75982f, 2461,733f, 0.0f, 20,06541f, 0.0f, 18,05242f, 9,369125f, 28,258f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[7]);
	(*&Local_4 + 672)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FireFightersStayOut1", 2, -857,9287f, 90,35294f, 2432,845f, 0.0f, 38,41717f, 0.0f, 8,322055f, 9,369125f, 14,3591f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[8]);
	(*&Local_4 + 672)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PuzzleStartOverVol", 2, -844,3201f, 87,80589f, 2461,79f, 0.0f, 20,91257f, 0.0f, 52,97617f, 9,369125f, 65,83092f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[9]);
	(*&Local_4 + 672)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DestroyGringos", 2, -846,4194f, 97,18204f, 2456,787f, 0.0f, 20,88082f, 0.0f, 38,73798f, 14,17926f, 49,21365f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[10]);
	(*&Local_4 + 672)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WindmillTop", 2, -834,0547f, 99,65075f, 2452,837f, 0.0f, 19,20418f, 0.0f, 7,111082f, 8,009157f, 6,30303f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[11]);
	(*&Local_4 + 672)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EscapedHorseVol", 2, -856,6164f, 90,35293f, 2442,017f, 0.0f, 19,20418f, 0.0f, 9,013056f, 8,009157f, 9,881026f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[12]);
	(*&Local_4 + 672)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CorraledHorseVol", 2, -877,9052f, 90,35291f, 2465,905f, 0.0f, 19,20418f, 0.0f, 11,04193f, 8,009157f, 12,02781f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[13]);
	(*&Local_4 + 672)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnEntranceBox", 2, -844,7135f, 100,7832f, 2461,265f, 0.0f, 20,28269f, 0.0f, 3,377036f, 3,87675f, 21,14162f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[14]);
	(*&Local_4 + 672)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnExitBox1", 2, -840,6027f, 100,7832f, 2472,389f, 0.0f, 20,28269f, 0.0f, 3,941629f, 3,87675f, 1,69382f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[15]);
	(*&Local_4 + 672)[16] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnExitBox2", 2, -848,7437f, 99,42709f, 2450,36f, 0.0f, 20,28269f, 0.0f, 12,10482f, 6,962595f, 1,69382f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[16]);
	(*&Local_4 + 672)[17] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnCutVol", 2, -852,425f, 90,36543f, 2440,399f, 0.0f, 20,28269f, 0.0f, 15,09021f, 11,78686f, 21,95227f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[17]);
	(*&Local_4 + 672)[18] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnSeeTrigger", 2, -1014,164f, 95,34083f, 2485,088f, 0.0f, 30,13155f, 0.0f, 127,9393f, 51,05502f, 46,47771f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[18]);
	(*&Local_4 + 672)[19] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnEntranceBox1", 2, -852,6032f, 96,0407f, 2453,973f, 0.0f, 20,28269f, 0.0f, 3,377036f, 3,87675f, 1,735514f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[19]);
	(*&Local_4 + 672)[20] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnEntranceBox2", 2, -842,9047f, 96,0407f, 2450,478f, 0.0f, 20,28269f, 0.0f, 3,377036f, 3,87675f, 2,164295f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 672)[20]);
	Local_4.f_776 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "TroughVolumes_set");
	(*&Local_4 + 764)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TroughVol01", 2, -844,5654f, 91,05907f, 2447,269f, 0.0f, 20,621f, 0.0f, 3,841846f, 1,588997f, 1,819975f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 764)[0]);
	(*&Local_4 + 764)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TroughVol02", 2, -861,7427f, 91,0611f, 2442,107f, 0.0f, 110,8367f, 0.0f, 3,87577f, 1,588997f, 1,944277f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 764)[1]);
	Local_4.f_804 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "WindmillVolumes_set");
	(*&Local_4 + 780)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MillVol", 2, -833,7753f, 98,09772f, 2455,244f, 0.0f, 22,33667f, 0.0f, 1,579766f, 3,01659f, 1,522305f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 780)[0]);
	(*&Local_4 + 780)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nShimmyVol", 2, -837,8536f, 98,09772f, 2452,103f, 0.0f, 22,33667f, 0.0f, 1,579766f, 3,01659f, 1,798744f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 780)[1]);
	(*&Local_4 + 780)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "JumpVol", 2, -836,3521f, 101,0065f, 2462,078f, 0.0f, 379,2026f, 0.0f, 2,77975f, 3,773976f, 16,13363f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 780)[2]);
	(*&Local_4 + 780)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HomeStretchVol", 2, -840,7031f, 100,6629f, 2471,332f, 0.0f, 380,0608f, 0.0f, 3,465504f, 3,01659f, 1,557959f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 780)[3]);
	(*&Local_4 + 780)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nAwningVol", 2, -831,9965f, 91,65659f, 2460,813f, 0.0f, 20,00396f, 0.0f, 3,422678f, 6,734645f, 3,773458f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 780)[4]);
	Local_4.f_820 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "RancherVolumes_set");
	(*&Local_4 + 808)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RancherVol", 2, -1054,241f, 101,1929f, 2939,021f, 0.0f, 11,46583f, 0.0f, 21,68541f, 11,35669f, 25,55255f);
	ADD_TO_VOLUME_SET(Local_4.f_820, (*&Local_4 + 808)[0]);
	(*&Local_4 + 808)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RancherHorseVol", 2, -1040,459f, 99,95853f, 2949,018f, 0.0f, 42,0482f, 0.0f, 15,65793f, 11,35669f, 8,606989f);
	ADD_TO_VOLUME_SET(Local_4.f_820, (*&Local_4 + 808)[1]);
	Local_4.f_824 = CREATE_VOLUME_IN_LAYOUT(Local_4, "nCorralVol", 3, -875,9514f, 90,35291f, 2463,076f, 0.0f, 16,20483f, 0.0f, 19,27607f, 4,595464f, 25,90217f);
	Local_4.f_828 = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnStopWagonVol", 2, -867,2538f, 93,65993f, 2414,17f, 0.0f, 25,87298f, 0.0f, 11,9069f, 7,15539f, 46,72555f);
	Local_4.f_832 = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerJumpHelpVol", 2, -833,802f, 100,1178f, 2455,863f, 0.0f, 9,84344f, 0.0f, 1,810452f, 2,025067f, 1,398063f);
	Local_4.f_836 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HitchVol", 2, -832,7964f, 92,16888f, 2401,659f, 0.0f, -13,01326f, 0.0f, 5,345061f, 7,913154f, 3,612509f);
	Local_4.f_852 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "FireOutVols_set");
	(*&Local_4 + 840)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarnBase", 2, -848,9321f, 90,35294f, 2449,258f, 0.0f, 19,20418f, 0.0f, 17,70996f, 14,67231f, 4,860499f);
	ADD_TO_VOLUME_SET(Local_4.f_852, (*&Local_4 + 840)[0]);
	(*&Local_4 + 840)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WindmillBase", 2, -834,0547f, 95,61146f, 2452,837f, 0.0f, 19,20418f, 0.0f, 7,111082f, 22,13903f, 4,860499f);
	ADD_TO_VOLUME_SET(Local_4.f_852, (*&Local_4 + 840)[1]);
	Local_4.f_856 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 860)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -846,4565f, 91,75424f, 2391,903f, 0.0f, 297,0965f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 860)[0], Local_4.f_856);
	(*&Local_4 + 860)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -842,4937f, 91,85876f, 2397,184f, 0.0f, -152,0323f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 860)[1], Local_4.f_856);
	(*&Local_4 + 860)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -786,5624f, 93,65433f, 2409,578f, 0.0f, 118,3325f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 860)[2], Local_4.f_856);
	(*&Local_4 + 860)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -840,9326f, 91,73472f, 2397,532f, 0.0f, 210,8838f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 860)[3], Local_4.f_856);
	(*&Local_4 + 860)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorsePos01", -831,2986f, 92,16936f, 2401,908f, 0.0f, 39,10736f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 860)[4], Local_4.f_856);
	(*&Local_4 + 860)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompHorsePos01", -833,4376f, 92,16949f, 2402,326f, 0.0f, -8,830705f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 860)[5], Local_4.f_856);
	Local_4.f_888 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 892)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -1051,624f, 101,142f, 2932.0f, 0,3356294f, -7,044894f, -1,069509f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 892)[0], Local_4.f_888);
	(*&Local_4 + 892)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -1054,167f, 100,936f, 2936.0f, 0.0f, -203,0249f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 892)[1], Local_4.f_888);
	(*&Local_4 + 892)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -1054,941f, 101,1009f, 2932.0f, 0.0f, -13,02146f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 892)[2], Local_4.f_888);
	(*&Local_4 + 892)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -1056f, 101,2422f, 2934,179f, 0.0f, -174,4378f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 892)[3], Local_4.f_888);
	(*&Local_4 + 892)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "HorsePosition02", -1041,466f, 99,60522f, 2949,466f, 0.0f, -89,46281f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 892)[4], Local_4.f_888);
	(*&Local_4 + 892)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RancherStart02", -1049,152f, 100,35f, 2936,3f, 0.0f, 306,4692f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 892)[5], Local_4.f_888);
	(*&Local_4 + 892)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RancherEnd02", -1050,913f, 100,3922f, 2941,087f, 0.0f, -181,5525f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 892)[6], Local_4.f_888);
	Local_4.f_924 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneFinalSet", Local_4, 8, 0);
	(*&Local_4 + 928)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartFinal", -853,3132f, 90,35294f, 2441,313f, 0.0f, -138,9987f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[0], Local_4.f_924);
	(*&Local_4 + 928)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndFinal", -865,9961f, 90,35415f, 2462,015f, 2,02595f, -612,1258f, 1,74717f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[1], Local_4.f_924);
	(*&Local_4 + 928)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartFinal", -849,0131f, 90,35291f, 2444.0f, 0.0f, -184,1187f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[2], Local_4.f_924);
	(*&Local_4 + 928)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndFinal", -862,7532f, 90,35291f, 2456.0f, -1,528039f, 365,5194f, -0,4633116f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[3], Local_4.f_924);
	(*&Local_4 + 928)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndFinal1", -863,4668f, 90,27599f, 2452,955f, -1,528039f, 365,5194f, -0,4633116f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[4], Local_4.f_924);
	(*&Local_4 + 928)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPathObj", -877,9283f, 90,35291f, 2444.0f, 0.0f, -138,9987f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[5], Local_4.f_924);
	(*&Local_4 + 928)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerAltPathObj", -865,8915f, 90,35291f, 2433,891f, 0.0f, -138,9987f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[6], Local_4.f_924);
	(*&Local_4 + 928)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndStandGateway", -866,7996f, 90,35291f, 2462,8f, -177,883f, -287,0818f, -178,1574f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[7], Local_4.f_924);
	(*&Local_4 + 928)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndMountGateway", -870,8661f, 90,35291f, 2464.0f, -177,883f, -287,0818f, -178,1574f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 928)[8], Local_4.f_924);
	Local_4.f_968 = CREATE_OBJECTSET_IN_LAYOUT("RanchHandStartPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 972)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart01", -847,0391f, 90,34687f, 2436,798f, 0.0f, 166,7697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[0], Local_4.f_968);
	(*&Local_4 + 972)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart02", -845,3018f, 90,34687f, 2437,206f, 0.0f, 166,7697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[1], Local_4.f_968);
	(*&Local_4 + 972)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart03", -843,1362f, 90,34687f, 2437,716f, 0.0f, 166,7697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[2], Local_4.f_968);
	(*&Local_4 + 972)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart04", -834,3173f, 93,33109f, 2429,672f, 0.0f, 189,4806f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[3], Local_4.f_968);
	(*&Local_4 + 972)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart05", -833,111f, 93,33109f, 2429,47f, 0.0f, 189,4806f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[4], Local_4.f_968);
	(*&Local_4 + 972)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart06", -835,7891f, 93,33109f, 2429,918f, 0.0f, 189,4806f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[5], Local_4.f_968);
	(*&Local_4 + 972)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart07", -853,7235f, 90,35291f, 2445,145f, 0.0f, 367,1243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[6], Local_4.f_968);
	(*&Local_4 + 972)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart08", -854,5417f, 90,35291f, 2445,247f, 0.0f, 367,1243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[7], Local_4.f_968);
	(*&Local_4 + 972)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHandStart09", -855,6626f, 90,35291f, 2445,387f, 0.0f, 367,1243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[8], Local_4.f_968);
	*(&Local_4 + 1012[06]) = { -1060f, 129,2347f, 2944f };
	*(&Local_4 + 1012[06] + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_1040 = CREATE_OBJECTSET_IN_LAYOUT("WaterSourcePositionsSet", Local_4, 8, 0);
	*(&Local_4 + 1044[06]) = { -844.0f, 90,35291f, 2432.0f };
	*(&Local_4 + 1044[06] + 12) = { 0.0f, 294,9588f, 0.0f };
	(*&Local_4 + 1144)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "WaterSourcePosition01", -844.0f, 90,35291f, 2432.0f, 0.0f, 294,9588f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1144)[0], Local_4.f_1040);
	*(&Local_4 + 1044[16]) = { -861,614f, 90,35291f, 2442,449f };
	*(&Local_4 + 1044[16] + 12) = { 0.0f, -251,0271f, 0.0f };
	(*&Local_4 + 1144)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "WaterSourcePosition02", -861,614f, 90,35291f, 2442,449f, 0.0f, -251,0271f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1144)[1], Local_4.f_1040);
	*(&Local_4 + 1044[26]) = { -839,4609f, 90,35291f, 2437,997f };
	*(&Local_4 + 1044[26] + 12) = { 0.0f, -392,158f, 0.0f };
	(*&Local_4 + 1144)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "WaterSourcePosition03", -839,4609f, 90,35291f, 2437,997f, 0.0f, -392,158f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1144)[2], Local_4.f_1040);
	*(&Local_4 + 1044[36]) = { -860,0001f, 90,35291f, 2447,594f };
	*(&Local_4 + 1044[36] + 12) = { 0.0f, -248,5233f, 0.0f };
	(*&Local_4 + 1144)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "WaterSourcePosition04", -860,0001f, 90,35291f, 2447,594f, 0.0f, -248,5233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1144)[3], Local_4.f_1040);
	Local_4.f_1164 = CREATE_OBJECTSET_IN_LAYOUT("ThrowWaterPositionsSet", Local_4, 8, 0);
	*(&Local_4 + 1168[06]) = { -840,3335f, 90,36573f, 2445,274f };
	*(&Local_4 + 1168[06] + 12) = { 0.0f, 154,7023f, 0.0f };
	(*&Local_4 + 1340)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "ThrowWaterPos01", -840,3335f, 90,36573f, 2445,274f, 0.0f, 154,7023f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[0], Local_4.f_1164);
	*(&Local_4 + 1168[16]) = { -852,622f, 90,36573f, 2448,303f };
	*(&Local_4 + 1168[16] + 12) = { 0.0f, -172,2545f, 0.0f };
	(*&Local_4 + 1340)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "ThrowWaterPos02", -852,622f, 90,36573f, 2448,303f, 0.0f, -172,2545f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[1], Local_4.f_1164);
	*(&Local_4 + 1168[26]) = { -832,5033f, 90,35291f, 2449,442f };
	*(&Local_4 + 1168[26] + 12) = { 0.0f, 151,1434f, 0.0f };
	(*&Local_4 + 1340)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "ThrowWaterPos03", -832,5033f, 90,35291f, 2449,442f, 0.0f, 151,1434f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[2], Local_4.f_1164);
	*(&Local_4 + 1168[36]) = { -836,1396f, 90,35291f, 2449,918f };
	*(&Local_4 + 1168[36] + 12) = { 0.0f, 132,1111f, 0.0f };
	(*&Local_4 + 1340)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "ThrowWaterPos04", -836,1396f, 90,35291f, 2449,918f, 0.0f, 132,1111f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[3], Local_4.f_1164);
	*(&Local_4 + 1168[46]) = { -855,3555f, 90,35297f, 2449,352f };
	*(&Local_4 + 1168[46] + 12) = { 0.0f, -148,6818f, 0.0f };
	(*&Local_4 + 1340)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "ThrowWaterPos05", -855,3555f, 90,35297f, 2449,352f, 0.0f, -148,6818f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[4], Local_4.f_1164);
	*(&Local_4 + 1168[56]) = { -857,4431f, 90,35294f, 2450,453f };
	*(&Local_4 + 1168[56] + 12) = { 0.0f, -138,5948f, 0.0f };
	(*&Local_4 + 1340)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "ThrowWaterPos06", -857,4431f, 90,35294f, 2450,453f, 0.0f, -138,5948f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[5], Local_4.f_1164);
	*(&Local_4 + 1168[66]) = { -834,4537f, 90,35297f, 2448,843f };
	*(&Local_4 + 1168[66] + 12) = { 0.0f, -166,8252f, 0.0f };
	(*&Local_4 + 1340)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "ThrowWaterPos07", -834,4537f, 90,35297f, 2448,843f, 0.0f, -166,8252f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[6], Local_4.f_1164);
	*(&Local_4 + 1372[06]) = { -872,0001f, 91,35687f, 2412.0f };
	*(&Local_4 + 1372[06] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1372[16]) = { -868,0001f, 91,35687f, 2420.0f };
	*(&Local_4 + 1372[16] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1372[26]) = { -872,0001f, 90,35291f, 2416.0f };
	*(&Local_4 + 1372[26] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1372[36]) = { -872,0001f, 90,35291f, 2420.0f };
	*(&Local_4 + 1372[36] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1372[46]) = { -868,0001f, 91,35687f, 2416.0f };
	*(&Local_4 + 1372[46] + 12) = { -1,147429f, 49,99981f, -0,6855208f };
	Local_4.f_1496 = CREATE_OBJECTSET_IN_LAYOUT("MiscPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1500)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "RancherPos", -1048,882f, 100,3922f, 2943,117f, 0.0f, -511,6318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[0], Local_4.f_1496);
	(*&Local_4 + 1500)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Obj03DestinationPos", -893,4461f, 91,35687f, 2389,446f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[1], Local_4.f_1496);
	(*&Local_4 + 1500)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nLadderPos", -833,6854f, 90,35291f, 2456,833f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[2], Local_4.f_1496);
	(*&Local_4 + 1500)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -920,5992f, 90,10291f, 2430,325f, 0.0f, -73,01686f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[3], Local_4.f_1496);
	(*&Local_4 + 1500)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -919,965f, 90,10291f, 2432,403f, 0.0f, 290,5472f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[4], Local_4.f_1496);
	(*&Local_4 + 1500)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -841,7065f, 99,1981f, 2469,436f, 0.0f, 19,2469f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[5], Local_4.f_1496);
	(*&Local_4 + 1500)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -849,2855f, 90,35291f, 2442,161f, 0.0f, 191,2244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[6], Local_4.f_1496);
	(*&Local_4 + 1500)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseRescuePos", -858,6696f, 90,35292f, 2429,263f, 0.0f, 207,8563f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[7], Local_4.f_1496);
	(*&Local_4 + 1500)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "AIHorseIntermediatePos", -849,5998f, 90,35291f, 2446,312f, 0.0f, -155,8123f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[8], Local_4.f_1496);
	(*&Local_4 + 1500)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "AIHorseReturnPos", -877,9294f, 90,35291f, 2465,929f, 0.0f, -95,91371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[9], Local_4.f_1496);
	(*&Local_4 + 1500)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "FireEffectPos", -844,661f, 93,845f, 2460,781f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[10], Local_4.f_1496);
	(*&Local_4 + 1500)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPumpPos", -862,8054f, 90,35292f, 2441,148f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[11], Local_4.f_1496);
	(*&Local_4 + 1500)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "EndGatewayPos", -873,8206f, 90,35291f, 2440.0f, 0.0f, 9,41f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[12], Local_4.f_1496);
	(*&Local_4 + 1500)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "nYellerPos", -860,1682f, 90,35291f, 2432,934f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[13], Local_4.f_1496);
	(*&Local_4 + 1500)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "EndCutscenePos", -896,0001f, 91,35687f, 2409,977f, 0.0f, -95,91371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[14], Local_4.f_1496);
	(*&Local_4 + 1500)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerDivePos", -847,7042f, 90,33842f, 2452,276f, 0.0f, 23,02821f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[15], Local_4.f_1496);
	(*&Local_4 + 1500)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "BellPos", -771,2733f, 92,32534f, 2443,273f, 0.0f, 207,8563f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[16], Local_4.f_1496);
	(*&Local_4 + 1500)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "AIHorseIntermediatePos1", -874,3376f, 90,35291f, 2440.0f, 0.0f, -95,91371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[17], Local_4.f_1496);
	(*&Local_4 + 1500)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "Stable1DoorPos", -872,897f, 90,35291f, 2440,897f, 0.0f, -95,91371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[18], Local_4.f_1496);
	(*&Local_4 + 1500)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "Stable2DoorPos", -874,4467f, 90,35291f, 2437,01f, 0.0f, -95,91371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[19], Local_4.f_1496);
	(*&Local_4 + 1500)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "FrontFire1Pos", -843,7407f, 94,82363f, 2449,305f, 0.0f, -250,8951f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[20], Local_4.f_1496);
	(*&Local_4 + 1500)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "FrontFire2Pos", -852,9865f, 94,82363f, 2452,651f, 0.0f, -249,9921f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[21], Local_4.f_1496);
	(*&Local_4 + 1500)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "BonnieHidePos", -782,3542f, 94,77856f, 2404f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[22], Local_4.f_1496);
	(*&Local_4 + 1500)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "Stable1DoorWait", -869,3372f, 90,35291f, 2440.0f, 0.0f, -95,91371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[23], Local_4.f_1496);
	(*&Local_4 + 1500)[24] = CREATE_POINT_IN_LAYOUT(Local_4, "Stable2DoorWait", -874,5151f, 90,35291f, 2434,515f, 0.0f, -95,91371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[24], Local_4.f_1496);
	(*&Local_4 + 1500)[25] = CREATE_POINT_IN_LAYOUT(Local_4, "PointerPos", -844,0417f, 90,35291f, 2445,749f, 0.0f, 3,000175f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[25], Local_4.f_1496);
	(*&Local_4 + 1500)[26] = CREATE_POINT_IN_LAYOUT(Local_4, "PanicPos", -846,9248f, 90,35291f, 2444.0f, 0.0f, 158,7466f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[26], Local_4.f_1496);
	(*&Local_4 + 1500)[27] = CREATE_POINT_IN_LAYOUT(Local_4, "WringHandPos", -854,823f, 90,35294f, 2429,109f, 0.0f, 196,0146f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[27], Local_4.f_1496);
	(*&Local_4 + 1500)[28] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerBarnLockTele", -853,3132f, 90,35294f, 2441,313f, 0.0f, -138,9987f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[28], Local_4.f_1496);
	(*&Local_4 + 1500)[29] = CREATE_POINT_IN_LAYOUT(Local_4, "DoorOpenPos", -848,2489f, 90,36541f, 2450,943f, 0.0f, -511,6318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[29], Local_4.f_1496);
	(*&Local_4 + 1500)[30] = CREATE_POINT_IN_LAYOUT(Local_4, "WhereToFuckingLookYouCunt", -843,6718f, 91,53012f, 2466,672f, 0.0f, -511,6318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[30], Local_4.f_1496);
	*(&Local_4 + 1628[06]) = { -1049,284f, 100,3922f, 2945,432f };
	*(&Local_4 + 1628[06] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1628[16]) = { -1049,483f, 100,3922f, 2944f };
	*(&Local_4 + 1628[16] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1628[26]) = { -1047,135f, 100,3922f, 2943,295f };
	*(&Local_4 + 1628[26] + 12) = { 0.0f, 51,99503f, 0.0f };
	*(&Local_4 + 1628[36]) = { -1058,636f, 101,3961f, 2949,364f };
	*(&Local_4 + 1628[36] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1628[46]) = { -1049,005f, 100,3922f, 2942,994f };
	*(&Local_4 + 1628[46] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1628[56]) = { -1057,817f, 101,3961f, 2950,183f };
	*(&Local_4 + 1628[56] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1628[66]) = { -1045,736f, 100,3922f, 2942,934f };
	*(&Local_4 + 1628[66] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1628[76]) = { -1046,972f, 100,3922f, 2941,436f };
	*(&Local_4 + 1628[76] + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_1824 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Horse_slap_1", "slap_horse", -839,4178f, 90,35291f, 2462,25f, 0.0f, 72,34879f, 0.0f);
	Local_4.f_1828 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Horse_slap_2", "slap_horse", -847,7797f, 90,35291f, 2464,783f, 0.0f, -36,1049f, 0.0f);
	Local_4.f_1832 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Horse_slap_3", "slap_horse", -846,0933f, 90,35291f, 2469,615f, 0.0f, -51,91314f, 0.0f);
	Local_4.f_1836 = CREATE_GRINGO_IN_LAYOUT(Local_4, "pull_pitchfork", "pull_pitchfork", -847,4985f, 90,35291f, 2452,226f, 0.0f, 16,93074f, 0.0f);
	Local_4.f_1840 = CREATE_GRINGO_IN_LAYOUT(Local_4, "body_left_for_dead_mourn1", "body_left_for_dead_gped_mourn", -1049,237f, 100,3922f, 2944f, 0.0f, -164,2686f, 0.0f);
	Local_4.f_1844 = CREATE_GRINGO_IN_LAYOUT(Local_4, "sit_headinhands_n_any", "Sit_Ground_Only", -1049,503f, 100,3922f, 2938,496f, 0.0f, 183,6294f, 0.0f);
	Local_4.f_1848 = CREATE_GRINGO_IN_LAYOUT(Local_4, "body_left_for_dead_mourn2", "body_left_for_dead_gped_mourn", -1049,284f, 100,3922f, 2945,451f, 0.0f, -18,44855f, 0.0f);
	Local_4.f_1852 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_chop_door", "stand_chop_door", -847,8162f, 90,35292f, 2450,866f, 0.0f, -157,1056f, 0.0f);
	Local_4.f_1856 = CREATE_GRINGO_IN_LAYOUT(Local_4, "bonniePanic", "panic_female", -846,9248f, 90,35291f, 2444.0f, 0.0f, 174,2887f, 0.0f);
	Local_4.f_1860 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ranch04_reflect1", "ranch04_reflect", -854,3045f, 90,35295f, 2438,304f, 0.0f, -157,0918f, 0.0f);
	Local_4.f_1864 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ranch04_reflect2", "ranch04_reflect", -841,519f, 90,3654f, 2441,589f, 0.0f, -197,8333f, 0.0f);
	Local_4.f_1868 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ranch04_reflect3", "ranch04_reflect", -857,0461f, 90,36545f, 2445,046f, 0.0f, -132,9674f, 0.0f);
	Local_4.f_1872 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ranch04_reflect4", "ranch04_reflect", -845,9275f, 90,35291f, 2437,949f, 0.0f, -175,2087f, 0.0f);
	Local_4.f_1876 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ranch04_reflect5", "ranch04_reflect", -862,5084f, 90,35291f, 2434,508f, 0.0f, -137,1926f, 0.0f);
	Local_4.f_1880 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ranch04_reflect6", "ranch04_reflect", -854,4614f, 90,35295f, 2428.0f, 0.0f, -151,6507f, 0.0f);
}

int ÄQ¹B·åE±ÄQîB¸¹EÎÄQ]ºB¸ÀE¡ÄQ(B¸#E#WÄPóìB¸6#E$ÂÄPB¸MÂE$Æ,GÂ:D;oBloodPath1 p  8ÄDµBÈÈÈE7À ÄBØBÈÈÈE7»(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, float fParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x11983 / 72067
{
	int iVar50235;
	
	CallOutOfPatch();
	return 7;
	return 12878657 - 14136 * 14264 - 21950 * 14251;
	return 4.0f;
	fParam21 = StackVal + 197 - 14136 * 14247;
	stradd(StackVal - 14136 * 14243, StackVal, 196);
	return StackVal;
}

void Function_317(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x11D8A / 73098
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
		bVar0 = Function_50();
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
			if (Function_41())
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
		Function_86(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_258();
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
	Function_291(bParam9);
}

int Function_318() //Position: 0x11E7A / 73338
{
	bool bVar0;
	
	switch (bLocal_488)
	{
		case 0x00000063:
			TASK_FOLLOW_PATH(bLocal_976, Local_4.f_1920, 1, 0, 0, 1, false);
			ACTOR_POP_NEXT_GAIT(bLocal_976, 1, false);
			TASK_CLEAR(Global_34573);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
			return 1;
			break;
		
		case 0x00000001:
			Function_238(bLocal_978, (*&Local_4 + 892)[1], 1, 1, 1);
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_978);
			Function_238(bLocal_979, (*&Local_4 + 892)[3], 1, 1, 1);
			ACTOR_MOUNT_ACTOR(bLocal_976, bLocal_979);
			Function_238(bLocal_977, (*&Local_4 + 892)[6], 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_229(bLocal_976);
			Function_238(Global_34573, (*&Local_4 + 928)[1], 0, 0, 0);
			if (IS_ACTOR_VALID(bLocal_984))
			{
				Function_238(bLocal_984, (*&Local_4 + 1500)[9], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_1124))
			{
				Function_238(bLocal_1124, (*&Local_4 + 1500)[9], 1, 1, 1);
				bLocal_1124 = "";
			}
			if (IS_ACTORSET_VALID(Local_4.f_632))
			{
				bLocal_1125 = false;
				while (bLocal_1125 <= GET_ACTORSET_SIZE(Local_4.f_632))
				{
					bVar0 = GET_ACTOR_FROM_ACTORSET(Local_4.f_632, bLocal_1125);
					if (IS_ACTOR_VALID(bVar0))
					{
						SET_ACTOR_STREAMING_HIGH_PRIORITY(bVar0, 0);
						Function_229(bVar0);
						SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar0, 0);
						if (IS_ACTOR_RIDING(bVar0))
						{
							ACTOR_DISMOUNT_NOW(bVar0);
						}
						RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
						TASK_CLEAR(bVar0);
						if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
						{
							GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(bVar0));
						}
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 64, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 65, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 66, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 67, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 68, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 46, 1);
						SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar0, 1);
						GIVE_OBJECT_TO_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
					}
					bLocal_1125++;
				}
				DESTROY_ACTORSET(Local_4.f_632);
			}
			ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "sleeping_wall_scripted", 0);
			SET_ACTION_NODE_FOR_ACTOR(Global_34573, "sleeping_wall_scripted/stand");
			Function_207(3, 1, 0, 1, 1);
			GET_OBJECT_POSITION((*&Local_4 + 928)[4], &vLocal_1127);
			ENABLE_GAME_CAMERA_FOCUS(vLocal_1127, -1.0f, 6, 1, 1, 0);
			return 1;
			break;
	}
	return 0;
}

int Function_319() //Position: 0x120BD / 73917
{
	switch (bLocal_488)
	{
		case 0x00000063:
			if (!(Function_328() && Function_326()))
			{
			}
			if (!Function_320(&bLocal_516))
			{
			}
			if ((Function_328() && Function_320(&bLocal_516)) && Function_326())
			{
				return 1;
			}
			return 0;
			break;
		
		case 0x00000001:
			Function_328();
			Function_320(&bLocal_516);
			return 1;
			break;
		
		case 0x00000065:
			Function_328();
			Function_320(&bLocal_516);
			if (IS_ACTOR_VALID(bLocal_1124))
			{
				Function_238(bLocal_1124, (*&Local_4 + 1500)[9], 1, 1, 1);
				bLocal_1124 = "";
			}
			return 1;
			break;
	}
	return 0;
}

bool Function_320(bool bParam0) //Position: 0x1214B / 74059
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_325();
	iVar1 = 0;
	if (!Function_178(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_324(bParam0[iVar03], 8);
		}
		else if (Function_323())
		{
			iVar1 = 1;
			Function_324(bParam0[iVar03], 8);
		}
		Function_324(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_178(bParam0[iVar03], 4))
		{
			if (!Function_178(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_178(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_178(bParam0[03], 8) || iVar1));
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
				Function_324(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_178(bParam0[iVar03], 4))
		{
			if (!Function_178(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
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
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
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
	Function_321();
	return 1;
}

void Function_321() //Position: 0x124C6 / 74950
{
	if (!Function_322(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_322(int iParam0) //Position: 0x12506 / 75014
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_323() //Position: 0x12522 / 75042
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

void Function_324(var uParam0, int iParam1) //Position: 0x1254D / 75085
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_325() //Position: 0x1255E / 75102
{
	if (!Function_322(128))
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

int Function_326() //Position: 0x125A0 / 75168
{
	Function_327(&Local_4 + 128, 199, 2, 0);
	Function_327(&Local_4 + 128, 111, 2, 0);
	Function_327(&Local_4 + 128, 608, 2, 0);
	Function_327(&Local_4 + 128, 977, 2, 0);
	Function_327(&Local_4 + 128, 1128, 2, 0);
	Function_327(&Local_4 + 128, 1129, 2, 0);
	Function_327(&Local_4 + 128, 1130, 2, 0);
	if (Function_320(&Local_4 + 128))
	{
		return 1;
	}
	return 0;
}

var Function_327(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1260C / 75276
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_178(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_324(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_324(uParam0[iVar03], 8);
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

bool Function_328() //Position: 0x126DC / 75484
{
	Function_327(&Local_4 + 4, 980, 2, 0);
	Function_327(&Local_4 + 4, 981, 2, 0);
	Function_327(&Local_4 + 4, 976, 2, 0);
	Function_329(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/slap_horse", 1, 0);
	Function_329(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/pull_pitchfork", 1, 0);
	Function_329(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/body_left_for_dead_gped_mourn", 1, 0);
	Function_329(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_329(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_chop_door", 1, 0);
	Function_329(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/panic_female", 1, 0);
	Function_329(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/ranch04_reflect", 1, 0);
	if (Function_320(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_329(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x128F7 / 76023
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_330(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_324(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_330(var uParam0, int iParam1, int iParam2) //Position: 0x1292F / 76079
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_178(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_324(uParam0[iVar03], 4);
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

int Function_331() //Position: 0x129F3 / 76275
{
	switch (bLocal_488)
	{
		case 0x00000063:
			if ((Function_328() && Function_326()) && !IS_LAYOUTREF_VALID(Local_4))
			{
				Function_315();
				Function_289();
			}
			if (!IS_ACTOR_VALID(bLocal_978))
			{
				if (Function_338())
				{
					bLocal_978 = Function_332(1, 1, 0, 0, 0, 0, 1, 0);
				}
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_978, 1))
			{
				return 0;
			}
			if (!Function_288())
			{
				return 0;
			}
			if (!DECOR_CHECK_EXIST(bLocal_976, "TeleportedToStart"))
			{
				Function_238(Global_34573, (*&Local_4 + 860)[1], 1, 1, 1);
				Function_238(bLocal_976, (*&Local_4 + 860)[3], 1, 1, 1);
				Function_238(bLocal_978, (*&Local_4 + 860)[4], 1, 1, 1);
				Function_238(bLocal_979, (*&Local_4 + 860)[5], 1, 1, 1);
				DECOR_SET_BOOL(bLocal_976, "TeleportedToStart", true);
				TASK_STAND_STILL(bLocal_976, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_978, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_979, -1.0f, 0, 0);
				return 0;
			}
			return 1;
			break;
		
		case 0x00000001:
			Function_163(114699);
			Function_185(1, 1, 0);
			CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_4 + 460)[02]);
			CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_4 + 460)[12]);
			CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_980);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000065:
			GET_OBJECT_POSITION((*&Local_4 + 928)[4], &vLocal_1127);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(vLocal_1127, 0, 0);
			BURN_ACTOR(Global_34573, 0,6f, 200.0f);
			return 1;
			break;
	}
	return 0;
}

bool Function_332(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x12B71 / 76657
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
	if (Global_3381 || Function_246(1))
	{
		Function_337(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_338())
		{
			return "";
		}
	}
	if (!Function_335())
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
		Function_254(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_254(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_254(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_254(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_334(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_334(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_41() || NET_IS_IN_SESSION())
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

void Function_333(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x12EC9 / 77513
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

var Function_334(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12F06 / 77574
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

bool Function_335() //Position: 0x12FA1 / 77729
{
	if (Function_336() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_336() //Position: 0x12FB7 / 77751
{
	return Global_12976.f_152;
}

void Function_337(var uParam0, bool bParam1, bool bParam2) //Position: 0x12FC2 / 77762
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_77(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_77(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_338() //Position: 0x12FEF / 77807
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

int Function_339() //Position: 0x1300F / 77839
{
	switch (bLocal_488)
	{
		case 0x00000063:
			Function_355(0);
			Function_342(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_340(bLocal_508, -840,0001f, 91,77865f, 2401,022f, &uLocal_1152, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_342(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			GET_OBJECT_POSITION((*&Local_4 + 892)[0], &vLocal_1127);
			Function_340(StackVal, StackVal, bLocal_508, vLocal_1127, &uLocal_1152, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_342(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_RANCH04_FINAL_CUTSCENE", &uLocal_1156);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_RANCH04_FINAL_CUTSCENE_FIRE_FADEOUT", &uLocal_1157);
			GET_OBJECT_POSITION((*&Local_4 + 1500)[14], &vLocal_1127);
			Function_340(StackVal, StackVal, bLocal_508, vLocal_1127, &uLocal_1152, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_340(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x13140 / 78144
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
				Function_341(bVar1, bParam0);
			}
		}
		if (!Function_74(StackVal, StackVal, vVar2))
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

void Function_341(bool bParam0, bool bParam1) //Position: 0x133AE / 78766
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

void Function_342(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x13423 / 78883
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
	Function_258();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_50();
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
			if (Function_41())
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
				Function_344(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_344(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_86(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_343()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_343()));
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
	if (Function_322(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_163(0x4000000);
	}
	if (Function_322(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_163(0x8000000);
	}
}

var Function_343() //Position: 0x136CC / 79564
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

vector3 Function_344(bool bParam0) //Position: 0x1374B / 79691
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_345() //Position: 0x1375C / 79708
{
	var uVar0;
	var uVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	switch (iLocal_1151)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R4_END/R4_END"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/R4_END/R4_END", 0, 2, 1, 2, 2);
				iLocal_1151 = 1004;
			}
			else
			{
				iLocal_1151 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_1151 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				iLocal_1151 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar6 = false;
			while (bVar6 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar6, &uVar0, &uVar3))
				{
					bVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar6);
					iVar8 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6);
					if (Function_346(iVar8))
					{
						if (iVar8 == GET_ACTOR_ENUM(Global_34573))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(bVar7), Global_34573);
						}
						if (iVar8 == GET_ACTOR_ENUM(bLocal_976))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(bVar7), bLocal_976);
						}
					}
				}
				bVar6++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			iLocal_1151 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				iLocal_1151 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

bool Function_346(int iParam0) //Position: 0x1388A / 80010
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_347() //Position: 0x138A1 / 80033
{
	Function_229(bLocal_976);
	Function_348(&iLocal_1183, 0, 0, 4294967295, 4294967295);
	SET_DRAW_ACTOR(bLocal_976, true);
	ACTOR_HOLSTER_WEAPON(Global_34573, 0);
	ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
	SET_DUST_LEVEL_MODIFIER(4294967294);
	if (uLocal_1154 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(uLocal_1154, 1);
	}
	if (uLocal_1155 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(uLocal_1155, 1);
	}
	return;
}

void Function_348(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x138F4 / 80116
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_349(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_349(int iParam0) //Position: 0x13918 / 80152
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

bool Function_350() //Position: 0x13E55 / 81493
{
	Function_327(&Local_4 + 420, 983, 2, 0);
	Function_327(&Local_4 + 420, 171, 2, 0);
	Function_327(&Local_4 + 420, 288, 2, 0);
	if (Function_320(&Local_4 + 420))
	{
		return 1;
	}
	return 0;
}

void Function_351() //Position: 0x13E92 / 81554
{
	Function_314("MINI_GAMES_AND_JOBS\\RANCH04");
	Function_229(bLocal_976);
	ACTOR_HOLSTER_WEAPON(Global_34573, 0);
	ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
	return;
}

void Function_352(int iParam0) //Position: 0x13ED1 / 81617
{
	if (!Function_300(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_185(1, 0, 1);
		}
	}
	return;
}

bool Function_353(bool bParam0) //Position: 0x13EEC / 81644
{
	if (!Function_82(bParam0))
	{
		return 1;
	}
	return Function_160(&(Global_29008[bParam0]), 4);
}

bool Function_354(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0x13F08 / 81672
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (!(StackVal != 2 && iParam3))
				{
					iVar1 = iVar0;
					if (!(StackVal != 6 && iParam4))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (bParam5)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_355(bool bParam0) //Position: 0x13F98 / 81816
{
	Function_356(0, 0x40400000);
	Function_198();
	Function_197();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_356(bool bParam0, float fParam1) //Position: 0x13FCC / 81868
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
	Function_358();
	Function_357();
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

void Function_357() //Position: 0x140CA / 82122
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_358() //Position: 0x140FC / 82172
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

void Function_359() //Position: 0x141F9 / 82425
{
	vector3 vVar0;
	
	Function_481();
	switch (iLocal_489)
	{
		case 0x00000000:
			Function_355(0);
			iLocal_1151 = 1000;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			if (iLocal_1042[2] == 0)
			{
				Function_242(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				GET_OBJECT_POSITION((*&Local_4 + 1500)[5], &vVar0);
				bLocal_608 = Function_354(StackVal, StackVal, vVar0, 0, 1, 1);
				if (!Function_353(bLocal_608))
				{
					Function_352(&Local_509);
				}
				Function_480();
				Function_240(1);
			}
			else if (Function_479())
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_353(bLocal_608) || bLocal_608 != 4294967295)) && Function_479())
			{
				if (Function_353(Global_30668[0]))
				{
					if (Function_467())
					{
						Function_240(2);
					}
				}
				else
				{
					Function_466(Global_30668[0]);
				}
			}
			break;
		
		case 0x00000002:
			if (HUD_IS_FADED())
			{
				CAMERA_RESET(0);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_456();
			Function_240(6);
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (iLocal_1042[2] == 0)
				{
				}
				if (Function_455())
				{
					Function_240(7);
				}
			}
			break;
		
		case 0x00000007:
			if (!Function_435(&iLocal_1139))
			{
				if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
				{
				}
				else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[3]))
				{
					if (!bLocal_1059)
					{
						Function_426("Ranch04_obj03a");
						if (!IS_BLIP_VALID(bLocal_991))
						{
							vLocal_1127 = { -847,983f, 90.0f, 2451,699f };
							bLocal_991 = ADD_BLIP_FOR_COORD(&vLocal_1127, 330, 0, 2, 0);
						}
						Function_240(8);
					}
				}
				else if (!bLocal_1059)
				{
					Function_426("Ranch04_obj03");
				}
			}
			break;
		
		case 0x00000008:
			if (!Function_435(&iLocal_1139))
			{
				if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
				{
				}
				else if (!bLocal_1059)
				{
					if (!IS_BLIP_VALID(bLocal_991))
					{
						vLocal_1127 = { -847,983f, 90.0f, 2451,699f };
						bLocal_991 = ADD_BLIP_FOR_COORD(&vLocal_1127, 330, 0, 2, 0);
					}
					Function_426("Ranch04_obj03a");
				}
			}
			break;
		
		case 0x00000009:
			if (!Function_364())
			{
				if (iLocal_507 <= 5)
				{
					Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1);
				}
				else
				{
					Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_CorralWarning", "Ranch04_CorralAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1);
				}
			}
			break;
		
		case 0x00000069:
			Function_215(0);
			Function_240(106);
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_360();
				iLocal_1042[3] = 1;
				bLocal_488 = 101;
				Function_240(0);
			}
			break;
	}
	return;
}

void Function_360() //Position: 0x145A5 / 83365
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Function_362();
	if (IS_BLIP_VALID(bLocal_991))
	{
		REMOVE_BLIP(bLocal_991);
	}
	SET_DRAW_ACTOR(bLocal_976, true);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_536))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bVar2 = GET_BLIP_ON_ACTOR(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				REMOVE_BLIP(bVar2);
			}
		}
		bVar0++;
	}
	Function_361();
	return;
}

void Function_361() //Position: 0x14608 / 83464
{
	Function_175(&Local_4 + 380);
	return;
}

void Function_362() //Position: 0x14616 / 83478
{
	Function_363(&(Local_649[017]));
	Function_363(&(Local_649[117]));
	Function_363(&(Local_649[217]));
	Function_363(&(Local_649[317]));
	Function_363(&(Local_649[417]));
	return;
}

void Function_363(int iParam0) //Position: 0x14649 / 83529
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

bool Function_364() //Position: 0x146FD / 83709
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	float fVar8;
	
	fVar8 = 0,75f;
	Function_413();
	Function_412();
	Function_411(&iLocal_1085);
	Function_409();
	Function_408();
	switch (iLocal_507)
	{
		case 0x00000000:
			Function_407();
			if (iLocal_1054 <= 1)
			{
				if (!IS_PHYSINST_VALID(bLocal_1180))
				{
					GET_VOLUME_CENTER((*&Local_4 + 672)[1], &vVar5);
					bLocal_1180 = LOCATE_PHYSINST_OF_TYPE(vVar5, 50.0f, "hen_beamsEntity01x_p_cus_beams01x", 1);
				}
				if (IS_PHYSINST_VALID(bLocal_1180))
				{
					PLAY_SIMPLE_PROP_ANIMATION(bLocal_1180, "Hen_barn02x_A", 0, 0, 1f, 0);
					iLocal_1054 = 1;
					GET_VOLUME_CENTER((*&Local_4 + 672)[1], &vVar5);
					PLAY_SOUND_FROM_POSITION("RANCH04_BARN_CRACK_MASTER", vVar5);
					Function_397();
				}
			}
			if (!SQUAD_GET_SIZE(Local_4.f_536) < 2)
			{
				iLocal_507 = 2;
				return 0;
			}
			Function_384();
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
			{
				if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(Local_4.f_1824))
				{
					iLocal_1178 = 1;
					Function_383();
					bLocal_984 = FIND_ACTOR_IN_LAYOUT(Local_4, "RescueHorse01");
					Function_208(bLocal_984);
					DECOR_SET_BOOL(bLocal_984, "HorseRescued", true);
					bLocal_1068 = Local_4.f_1824;
					bLocal_996 = Local_4.f_1892;
					Function_216(&iLocal_1076);
					iLocal_507 = 1;
					return 0;
				}
				if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(Local_4.f_1828))
				{
					iLocal_1178 = 1;
					Function_383();
					bLocal_984 = FIND_ACTOR_IN_LAYOUT(Local_4, "RescueHorse02");
					Function_208(bLocal_984);
					DECOR_SET_BOOL(bLocal_984, "HorseRescued", true);
					bLocal_1068 = Local_4.f_1828;
					bLocal_996 = Local_4.f_1896;
					Function_216(&iLocal_1076);
					iLocal_507 = 1;
					return 0;
				}
				if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(Local_4.f_1832))
				{
					iLocal_1178 = 1;
					Function_383();
					bLocal_984 = FIND_ACTOR_IN_LAYOUT(Local_4, "RescueHorse03");
					Function_208(bLocal_984);
					DECOR_SET_BOOL(bLocal_984, "HorseRescued", true);
					bLocal_1068 = Local_4.f_1832;
					bLocal_996 = Local_4.f_1900;
					Function_216(&iLocal_1076);
					iLocal_507 = 1;
					return 0;
				}
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(bLocal_984))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "slap"))
				{
					if (!Function_219(&iLocal_1112))
					{
						Function_217(&iLocal_1112);
					}
					if ((!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_984)) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573))) || Function_296(&iLocal_1112) < fVar8)
					{
						Function_382();
					}
				}
				else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_984)) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
				{
					Function_382();
				}
			}
			else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "slap"))
			{
				if (!Function_219(&iLocal_1076))
				{
					Function_217(&iLocal_1076);
				}
				else if (Function_296(&iLocal_1076) < 0.0f)
				{
					Function_317(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(Local_490.f_16))
					{
						DESTROY_OBJECT(Local_490.f_16);
					}
					iLocal_1178 = 0;
					DESTROY_OBJECT(bLocal_1068);
					Function_381();
					iLocal_507 = 0;
				}
			}
			break;
		
		case 0x00000002:
			Function_407();
			if (!Function_134() && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_1054 <= 2)
				{
					if (!IS_PHYSINST_VALID(bLocal_1180))
					{
						GET_VOLUME_CENTER((*&Local_4 + 672)[1], &vVar5);
						bLocal_1180 = LOCATE_PHYSINST_OF_TYPE(vVar5, 50.0f, "hen_beamsEntity01x_p_cus_beams01x", 1);
					}
					if (IS_PHYSINST_VALID(bLocal_1180))
					{
						PLAY_SIMPLE_PROP_ANIMATION(bLocal_1180, "Hen_barn02x_B", 0, 0, 1f, 0);
						GET_VOLUME_CENTER((*&Local_4 + 672)[1], &vVar5);
						PLAY_SOUND_FROM_POSITION("RANCH04_BARN_CRACK_MASTER", vVar5);
						iLocal_1054 = 2;
					}
				}
			}
			if (SQUAD_GET_SIZE(Local_4.f_536) == 1)
			{
				DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, false), "BeLassoBounceOff", true);
				bLocal_984 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, false);
				CLEAR_ACTOR_PROOF_ALL(bLocal_984);
				iLocal_1146 = 0;
				iLocal_507 = 4;
				return 0;
			}
			Function_384();
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
			{
				if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(Local_4.f_1824))
				{
					iLocal_1178 = 1;
					Function_383();
					bLocal_984 = FIND_ACTOR_IN_LAYOUT(Local_4, "RescueHorse01");
					Function_208(bLocal_984);
					DECOR_SET_BOOL(bLocal_984, "HorseRescued", true);
					bLocal_1068 = Local_4.f_1824;
					bLocal_996 = Local_4.f_1892;
					Function_216(&iLocal_1076);
					iLocal_507 = 3;
					return 0;
				}
				if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(Local_4.f_1828))
				{
					iLocal_1178 = 1;
					Function_383();
					bLocal_984 = FIND_ACTOR_IN_LAYOUT(Local_4, "RescueHorse02");
					Function_208(bLocal_984);
					DECOR_SET_BOOL(bLocal_984, "HorseRescued", true);
					bLocal_1068 = Local_4.f_1828;
					bLocal_996 = Local_4.f_1896;
					Function_216(&iLocal_1076);
					iLocal_507 = 3;
					return 0;
				}
				if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(Local_4.f_1832))
				{
					iLocal_1178 = 1;
					Function_383();
					bLocal_984 = FIND_ACTOR_IN_LAYOUT(Local_4, "RescueHorse03");
					Function_208(bLocal_984);
					DECOR_SET_BOOL(bLocal_984, "HorseRescued", true);
					bLocal_1068 = Local_4.f_1832;
					bLocal_996 = Local_4.f_1900;
					Function_216(&iLocal_1076);
					iLocal_507 = 3;
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(bLocal_984))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "slap"))
				{
					if (!Function_219(&iLocal_1112))
					{
						Function_217(&iLocal_1112);
					}
					if ((!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_984)) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573))) || Function_296(&iLocal_1112) < fVar8)
					{
						Function_382();
					}
				}
				else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_984)) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
				{
					Function_382();
				}
			}
			else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "slap"))
			{
				if (!Function_219(&iLocal_1076))
				{
					Function_217(&iLocal_1076);
				}
				else if (Function_296(&iLocal_1076) < 0.0f)
				{
					Function_317(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(Local_490.f_16))
					{
						DESTROY_OBJECT(Local_490.f_16);
					}
					iLocal_1178 = 0;
					DESTROY_OBJECT(bLocal_1068);
					Function_381();
					Function_380();
					iLocal_507 = 2;
				}
			}
			break;
		
		case 0x00000004:
			Function_379();
			Function_378();
			if (iLocal_1054 != 3)
			{
				if (IS_ACTOR_VALID(bLocal_984))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_984, 7.0f))
					{
						if (!IS_PHYSINST_VALID(bLocal_1180))
						{
							GET_VOLUME_CENTER((*&Local_4 + 672)[1], &vVar5);
							bLocal_1180 = LOCATE_PHYSINST_OF_TYPE(vVar5, 50.0f, "hen_beamsEntity01x_p_cus_beams01x", 1);
						}
						Function_342(0, 1, 1, 1, 1, 1, 1, (*&Local_4 + 672)[17], 1, 1, 1, 1);
						if (UNK_0xCDA6BB6C())
						{
							CANCEL_CUTSCENE_TUNER_PLAYBACK();
						}
						else if (IS_OBJECT_VALID(Local_490.f_16))
						{
							DESTROY_OBJECT(Local_490.f_16);
						}
						Local_490.f_16 = Function_374(Local_4, 0, 1, 0, 0);
						if (IS_OBJECT_VALID(Local_490.f_16))
						{
						}
						else
						{
							LOG_ERROR("Ranch04_Collapse - Failed to create Ranch04_Collapse_cutscene");
						}
						Function_217(&iLocal_1076);
						iLocal_1178 = 1;
						Function_372(Global_34573, 0);
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						SET_ACTOR_INVULNERABILITY(Global_34573, true);
						PLAY_SIMPLE_PROP_ANIMATION(bLocal_1180, "Hen_barn02x_C", 0, 0, 1f, 0);
						GET_VOLUME_CENTER((*&Local_4 + 672)[1], &vVar5);
						PLAY_SOUND_FROM_POSITION("RANCH04_BARN_BREAK_MASTER", vVar5);
						SET_ALLOW_RIDE_BY_PLAYER(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, false), 1);
						bVar4 = TASK_SEQUENCE_OPEN();
						TASK_HORSE_ACTION(false, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_STAND_STILL(false, 0,25f, 0, 0);
						TASK_HORSE_ACTION(false, 0);
						TASK_STAND_STILL(false, 0,2f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_STAND_STILL(false, 0,75f, 0, 0);
						TASK_HORSE_ACTION(false, 0);
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM_REPEATEDLY(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, false), bVar4, 4294967295);
						TASK_SEQUENCE_RELEASE(bVar4, 1);
						iLocal_1054 = 3;
					}
				}
			}
			else if (Function_219(&iLocal_1076))
			{
				if (Function_296(&iLocal_1076) <= 3.0f)
				{
					bLocal_1067 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "DebrisFire", "script_Hennigans_BarnDebrisFire", -844.0f, 92.0f, 2461.0f);
					UNK_0x6745191B(bLocal_1067, 0.0f, 0.0f, 0.0f);
					Function_317(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(Local_490.f_16))
					{
						DESTROY_OBJECT(Local_490.f_16);
					}
					iLocal_1178 = 0;
					Function_369();
					Function_426("Ranch04_obj03d");
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					SET_ACTOR_INVULNERABILITY(Global_34573, false);
					GET_OBJECT_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, false), &vLocal_1127);
					ENABLE_GAME_CAMERA_FOCUS(vLocal_1127, -1.0f, 0, 0, 1, 0);
					Function_216(&iLocal_1076);
				}
			}
			if (!iLocal_1146)
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					RESET_ACTOR_GAITS(GET_MOUNT(Global_34573), 1);
					iLocal_1146 = 1;
				}
			}
			else if (!IS_ACTOR_RIDING(Global_34573))
			{
				iLocal_1146 = 0;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[1]))
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					REMOVE_ACTORSET_MEMBER(bLocal_828, bLocal_984);
					Function_368(&bLocal_828);
					SQUAD_LEAVE(bLocal_984);
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_984, true);
					Function_217(&iLocal_1002);
					TASK_PRIORITY_SET(bLocal_984, 2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_984, true);
					Function_348(&iLocal_1183, 8, 0, 4294967295, 4294967295);
					Function_397();
					iLocal_507 = 5;
					return 0;
				}
			}
			break;
		
		case 0x00000005:
			Function_378();
			Function_345();
			Function_367();
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (GET_MOUNT(Global_34573) == bLocal_984)
				{
					if (IS_BLIP_VALID(bLocal_1056))
					{
						REMOVE_BLIP(bLocal_1056);
					}
					if (IS_OBJECT_VALID(bLocal_995))
					{
						DESTROY_OBJECT(bLocal_995);
					}
					GET_OBJECT_POSITION((*&Local_4 + 1500)[12], &vVar5);
					Function_76();
					bLocal_995 = Function_366(StackVal, StackVal, StackVal, StackVal, bLocal_508, "EndGateway", vVar5, Function_76(), Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					ADD_BLIP_FOR_OBJECT(bLocal_995, 330, 0f, 2, 0);
					bLocal_1125 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 0,75f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_STAND_STILL(false, 0,5f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_984, bLocal_1125);
					TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
					Function_397();
					Function_426("Ranch04_obj03db");
					iLocal_507 = 6;
					return 0;
				}
			}
			break;
		
		case 0x00000006:
			Function_367();
			Function_378();
			Function_345();
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_984, Local_4.f_824))
				{
					DESTROY_OBJECT(bLocal_995);
					GET_OBJECT_POSITION((*&Local_4 + 928)[8], &vVar5);
					Function_76();
					bLocal_995 = Function_366(StackVal, StackVal, StackVal, StackVal, bLocal_508, "EndGatewayMounted", vVar5, Function_76(), Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					ADD_BLIP_FOR_OBJECT(bLocal_995, 330, 0f, 2, 0);
					Function_426("Ranch04_obj03dd");
					iLocal_507 = 7;
					Function_216(&iLocal_1088);
					return 0;
				}
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_984)))
			{
				bLocal_1056 = ADD_BLIP_FOR_ACTOR(bLocal_984, 325, 0, 2, 0);
				SET_BLIP_NAME(bLocal_1056, "BLIP_HORSE");
			}
			else
			{
				bLocal_1056 = GET_BLIP_ON_ACTOR(bLocal_984);
				SET_BLIP_NAME(bLocal_1056, "BLIP_HORSE");
			}
			Function_426("Ranch04_obj03dc");
			if (IS_OBJECT_VALID(bLocal_995))
			{
				DESTROY_OBJECT(bLocal_995);
			}
			iLocal_507 = 5;
			break;
		
		case 0x00000007:
			Function_367();
			Function_378();
			Function_345();
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (!STRINGS_ARE_EQUAL("EndGatewayMounted", GET_OBJECT_NAME(bLocal_995)))
				{
					DESTROY_OBJECT(bLocal_995);
					GET_OBJECT_POSITION((*&Local_4 + 928)[8], &vVar5);
					Function_76();
					bLocal_995 = Function_366(StackVal, StackVal, StackVal, StackVal, bLocal_508, "EndGatewayMounted", vVar5, Function_76(), Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				}
				if (GATEWAY_UPDATE(bLocal_995))
				{
					bLocal_1124 = GET_MOUNT(Global_34573);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					UI_PUSH("ncutscenes");
					bLocal_1125 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_DISMOUNT(false, 1);
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 928)[1], 1, 1, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, bLocal_1125);
					TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
					bLocal_1125 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[9], 1, 0, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_984, bLocal_1125);
					TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
					bLocal_1125 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[9], 1, 0, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_1124, bLocal_1125);
					TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
					DESTROY_OBJECT(bLocal_995);
					iLocal_507 = 8;
					return 0;
				}
				if (!IS_ACTOR_IN_VOLUME(bLocal_984, Local_4.f_824))
				{
					Function_217(&iLocal_1002);
					iLocal_507 = 5;
					return 0;
				}
			}
			if (!STRINGS_ARE_EQUAL("EndGatewayStanding", GET_OBJECT_NAME(bLocal_995)))
			{
				DESTROY_OBJECT(bLocal_995);
				GET_OBJECT_POSITION((*&Local_4 + 928)[7], &vVar5);
				Function_76();
				bLocal_995 = Function_366(StackVal, StackVal, StackVal, StackVal, bLocal_508, "EndGatewayStanding", vVar5, Function_76(), Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			}
			if (GATEWAY_UPDATE(bLocal_995))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				UI_PUSH("ncutscenes");
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 928)[1], 1, 1, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 3.0f, 0, 0);
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[9], 1, 0, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_984, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
				DESTROY_OBJECT(bLocal_995);
				iLocal_507 = 8;
				Function_240(105);
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_367();
			Function_378();
			Function_345();
			if (!Function_219(&iLocal_1088))
			{
				if (GET_TASK_STATUS(Global_34573, 88) != 1 || GET_TASK_STATUS(Global_34573, 12) != 1)
				{
					Function_217(&iLocal_1088);
				}
			}
			else if (Function_296(&iLocal_1088) < 0,5f)
			{
				Function_240(105);
			}
			break;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_536))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bVar3 = false;
			if (IS_ACTOR_IN_VOLUME(bVar1, (*&Local_4 + 672)[3]))
			{
				bVar3 = true;
			}
			if (IS_ACTOR_ALIVE(bVar1))
			{
				bVar2 = GET_BLIP_ON_ACTOR(bVar1);
				if (!bVar3)
				{
					if (IS_ACTOR_VALID(GET_LASSO_USER(bVar1)))
					{
						Function_426("Ranch04_obj03cc");
					}
					else if (GET_RIDER(bVar1) == Global_34573)
					{
						Function_426("Ranch04_obj03db");
					}
					else
					{
						if (IS_BLIP_VALID(bVar2))
						{
							REMOVE_BLIP(bVar2);
						}
						SQUAD_LEAVE(bVar1);
						ADD_ACTORSET_MEMBER(bLocal_828, bVar1);
						Function_365(bVar1);
						Function_368(&bLocal_828);
						DECOR_SET_BOOL(bVar1, "BeLassoBounceOff", true);
						SET_ALLOW_RIDE_BY_PLAYER(bVar1, 0);
						AI_SET_NAV_PATHFINDING_ENABLED(bVar1, true);
						TASK_PRIORITY_SET(bVar1, 2);
						SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar1, true);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
						SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, (*&Local_4 + 672)[12], 1, true);
					}
				}
				else if (!IS_BLIP_VALID(bVar2))
				{
					if (!DECOR_CHECK_EXIST(bVar1, "HorseRescued"))
					{
						bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 325, 0, 2, 0);
						SET_BLIP_NAME(bVar2, "BLIP_HORSE");
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_365(bool bParam0) //Position: 0x1597E / 88446
{
	if (!IS_OBJECTSET_VALID(bLocal_1181))
	{
		bLocal_1181 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), bLocal_508, 15, 1);
	}
	if (IS_ACTOR_HORSE(bParam0))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bParam0, bLocal_1181))
		{
			ADD_OBJECT_TO_OBJECTSET(bParam0, bLocal_1181);
		}
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bLocal_1181))
	{
		return 1;
	}
	return 0;
	return 0;
}

bool Function_366(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x159CD / 88525
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { iParam9, 2.0f, iParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_367() //Position: 0x15A98 / 88728
{
	bool bVar0;
	
	if (!Function_219(&iLocal_1073))
	{
		Function_217(&iLocal_1073);
	}
	if (bLocal_1118 > 0.0f || bLocal_1118 < 5.0f)
	{
		bLocal_1118 = RAND_FLOAT_RANGE(0,5f, 4.0f);
	}
	if (Function_296(&iLocal_1073) <= bLocal_1118)
	{
		bLocal_1125 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1125)
		{
			case 0x00000001:
				bLocal_1123 = bLocal_1158;
				bVar0 = "Ranch04_laborersCheer1";
				break;
			
			case 0x00000002:
				bLocal_1123 = bLocal_1159;
				bVar0 = "Ranch04_laborersCheer2";
				break;
			
			case 0x00000003:
				bLocal_1123 = bLocal_1160;
				bVar0 = "Ranch04_laborersCheer3";
				break;
			
			case 0x00000004:
				bLocal_1123 = bLocal_1161;
				bVar0 = "Ranch04_laborersCheer4";
				break;
			
			case 0x00000005:
				bLocal_1123 = bLocal_1162;
				bVar0 = "Ranch04_laborersCheer5";
				break;
			
			case 0x00000006:
				bLocal_1123 = bLocal_1163;
				bVar0 = "Ranch04_laborersCheer6";
				break;
		}
		if (IS_ACTOR_VALID(bLocal_1123))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_1123, 25.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(bLocal_1123))
				{
					SAY_SINGLE_LINE_STRING(bLocal_1123, bVar0, true, true, 3, 0, true, false);
					PRINTSTRING(GET_ACTOR_ENUM_STRING(bLocal_1123));
					PRINTSTRING(" saying CHEER!");
					PRINTNL();
					Function_217(&iLocal_1073);
					bLocal_1118 = RAND_FLOAT_RANGE(0,5f, 4.0f);
				}
			}
		}
	}
	return;
}

void Function_368(bool bParam0) //Position: 0x15C45 / 89157
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*bParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*bParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*bParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*bParam0, GET_ACTOR_FROM_ACTORSET(*bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_369() //Position: 0x15C9E / 89246
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_jumpLastHorse", "Ranch04_jumpLastHorse", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_370(int iParam0) //Position: 0x15CF1 / 89329
{
	Function_371(0, Global_34573, iParam0, 0);
	Function_371(1, bLocal_976, iParam0, 0);
	Function_371(2, bLocal_987, iParam0, 0);
	Function_371(3, bLocal_1158, iParam0, 0);
	Function_371(4, bLocal_1159, iParam0, 0);
	Function_371(5, bLocal_1160, iParam0, 0);
	Function_371(6, bLocal_1161, iParam0, 0);
	Function_371(7, bLocal_1162, iParam0, 0);
	Function_371(8, bLocal_1163, iParam0, 0);
	return;
}

void Function_371(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x15D52 / 89426
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_154(uParam2, Function_140(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_372(bool bParam0, bool bParam1) //Position: 0x15D77 / 89463
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
	else if (!bParam1 || Function_373(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_373(bool bParam0, bool bParam1) //Position: 0x15DD4 / 89556
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_374(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x15DF3 / 89587
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_54(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch04_BarnCollapse", 2, 1);
	}
	Function_375(&bVar0);
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

void Function_375(int iParam0) //Position: 0x15E73 / 89715
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_377(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_376(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 5.0f, 0, 0);
	return;
}

void Function_376(int iParam0) //Position: 0x15EA8 / 89768
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -842,8519f, 91,01871f, 2457,637f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,172439f, 0,73988f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_377(var uParam0) //Position: 0x15F4E / 89934
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -840,1344f, 90,89339f, 2455,722f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,189946f, 1,211727f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_378() //Position: 0x15FF4 / 90100
{
	if (IS_ACTOR_VALID(bLocal_984))
	{
		if (!IS_ACTOR_MOUNTED(bLocal_984))
		{
			bLocal_1123 = bLocal_984;
			if (!Function_219(&iLocal_1115))
			{
				if (IS_ACTOR_IN_FIRE_VOLUME(bLocal_1123))
				{
					Function_217(&iLocal_1115);
				}
			}
			else if (Function_296(&iLocal_1115) < 2.0f)
			{
				if (IS_ACTOR_IN_FIRE_VOLUME(bLocal_1123))
				{
					Function_247("Ranch04_horseBurned");
					bLocal_498 = true;
				}
				else
				{
					Function_216(&iLocal_1115);
				}
			}
		}
		else if (!Function_219(&iLocal_1115))
		{
			if (FIRE_IS_ACTOR_ON_FIRE(Global_34573))
			{
				Function_217(&iLocal_1115);
			}
		}
		else if (Function_296(&iLocal_1115) < 2.0f)
		{
			if (FIRE_IS_ACTOR_ON_FIRE(Global_34573))
			{
				Function_247("Ranch04_horseBurned");
				bLocal_498 = true;
			}
			else
			{
				Function_216(&iLocal_1115);
			}
		}
	}
	return;
}

void Function_379() //Position: 0x160C2 / 90306
{
	bool bVar0;
	
	if (!Function_219(&iLocal_1073))
	{
		Function_217(&iLocal_1073);
	}
	if (bLocal_1118 > 0.0f || bLocal_1118 < 5.0f)
	{
		bLocal_1118 = RAND_FLOAT_RANGE(0,5f, 4.0f);
	}
	if (Function_296(&iLocal_1073) <= bLocal_1118)
	{
		bLocal_1125 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1125)
		{
			case 0x00000001:
				bLocal_1123 = bLocal_1158;
				bVar0 = "Ranch04_outOfTimeLab1";
				break;
			
			case 0x00000002:
				bLocal_1123 = bLocal_1159;
				bVar0 = "Ranch04_outOfTimeLab2";
				break;
			
			case 0x00000003:
				bLocal_1123 = bLocal_1160;
				bVar0 = "Ranch04_outOfTimeLab3";
				break;
			
			case 0x00000004:
				bLocal_1123 = bLocal_1161;
				bVar0 = "Ranch04_outOfTimeLab4";
				break;
			
			case 0x00000005:
				bLocal_1123 = bLocal_1162;
				bVar0 = "Ranch04_outOfTimeLab5";
				break;
			
			case 0x00000006:
				bLocal_1123 = bLocal_1163;
				bVar0 = "Ranch04_outOfTimeLab6";
				break;
		}
		if (IS_ACTOR_VALID(bLocal_1123))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_1123, 25.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(bLocal_1123))
				{
					SAY_SINGLE_LINE_STRING(bLocal_1123, bVar0, true, true, 3, 0, true, false);
					PRINTSTRING(GET_ACTOR_ENUM_STRING(bLocal_1123));
					PRINTSTRING(" saying OUT OF TIME!");
					PRINTNL();
					Function_217(&iLocal_1073);
					bLocal_1118 = RAND_FLOAT_RANGE(0,5f, 4.0f);
				}
			}
		}
	}
	return;
}

void Function_380() //Position: 0x1626F / 90735
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(Local_4.f_1824))
	{
		GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(Local_4.f_1824));
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_4.f_1824), false);
		DESTROY_OBJECT(Local_4.f_1824);
	}
	if (IS_OBJECT_VALID(Local_4.f_1828))
	{
		GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(Local_4.f_1828));
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_4.f_1828), false);
		DESTROY_OBJECT(Local_4.f_1828);
	}
	if (IS_OBJECT_VALID(Local_4.f_1832))
	{
		GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(Local_4.f_1832));
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_4.f_1832), false);
		DESTROY_OBJECT(Local_4.f_1832);
	}
	bLocal_1125 = false;
	while (bLocal_1125 <= SQUAD_GET_SIZE(Local_4.f_536))
	{
		bLocal_1123 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, bLocal_1125);
		if (!DECOR_GET_BOOL(bLocal_1123, "HorseRescued"))
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
			TASK_STAND_STILL(false, 0,25f, 0, 0);
			TASK_HORSE_ACTION(false, 0);
			TASK_STAND_STILL(false, 0,2f, 0, 0);
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
			TASK_STAND_STILL(false, 0,75f, 0, 0);
			TASK_HORSE_ACTION(false, 0);
			TASK_STAND_STILL(false, 0,5f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_1123, bVar0, 4294967295);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
		bLocal_1125++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1182))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
	}
	return;
}

void Function_381() //Position: 0x1653A / 91450
{
	bool bVar0;
	
	bVar0 = false;
	bLocal_1125 = false;
	while (bLocal_1125 <= SQUAD_GET_SIZE(Local_4.f_536))
	{
		bLocal_1123 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, bLocal_1125);
		if (DECOR_GET_BOOL(bLocal_1123, "HorseRescued"))
		{
			bVar0++;
		}
		bLocal_1125++;
	}
	PRINTSTRING("Count of rescued horses = ");
	PRINTINT(bVar0);
	PRINTNL();
	PRINTSTRING("Count of horses in squad = ");
	PRINTINT(SQUAD_GET_SIZE(Local_4.f_536));
	PRINTNL();
	if ((SQUAD_GET_SIZE(Local_4.f_536) - bVar0) == 1)
	{
		Function_380();
	}
	return;
}

int Function_382() //Position: 0x165F5 / 91637
{
	bool bVar0;
	
	MAKE_ACTOR_READY_FOR_ACTION(bLocal_984, 1);
	bVar0 = GET_BLIP_ON_ACTOR(bLocal_984);
	if (IS_BLIP_VALID(bVar0))
	{
		REMOVE_BLIP(bVar0);
	}
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bLocal_984, 0, 0);
	TASK_CLEAR(bLocal_984);
	bLocal_1125 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(false, bLocal_996, 4, 1, 0, 1, false);
	TASK_HORSE_ACTION(false, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_984, bLocal_1125);
	TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
	AI_ACTOR_FORCE_SPEED(bLocal_984, 4);
	TASK_PRIORITY_SET(bLocal_984, true);
	Function_216(&iLocal_1112);
	bLocal_984 = "";
	bLocal_996 = "";
	return 1;
}

void Function_383() //Position: 0x1666F / 91759
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_slapsButt", "Ranch04_slapsButt", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384() //Position: 0x166BA / 91834
{
	float fVar0;
	
	fVar0 = 4.0f;
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1182) && !IS_ACTOR_ON_LADDER(Global_34573))
	{
		if (IS_OBJECT_VALID(Local_4.f_1824))
		{
			if (Function_394(Global_34573, Local_4.f_1824, fVar0))
			{
				bLocal_1182 = ADD_SCRIPT_USE_CONTEXT("R4_Slap_Horse", false, 4, false, 0, 0, 0, 4294967295, 0);
				DECOR_SET_INT(bLocal_508, "CurrentHorseGringo", true);
			}
		}
		if (!DECOR_CHECK_EXIST(bLocal_508, "CurrentHorseGringo"))
		{
			if (IS_OBJECT_VALID(Local_4.f_1828))
			{
				if (Function_394(Global_34573, Local_4.f_1828, fVar0))
				{
					bLocal_1182 = ADD_SCRIPT_USE_CONTEXT("R4_Slap_Horse", false, 4, false, 0, 0, 0, 4294967295, 0);
					DECOR_SET_INT(bLocal_508, "CurrentHorseGringo", 2);
				}
			}
		}
		if (!DECOR_CHECK_EXIST(bLocal_508, "CurrentHorseGringo"))
		{
			if (IS_OBJECT_VALID(Local_4.f_1832))
			{
				if (Function_394(Global_34573, Local_4.f_1832, fVar0))
				{
					bLocal_1182 = ADD_SCRIPT_USE_CONTEXT("R4_Slap_Horse", false, 4, false, 0, 0, 0, 4294967295, 0);
					DECOR_SET_INT(bLocal_508, "CurrentHorseGringo", 3);
				}
			}
		}
	}
	else
	{
		bLocal_1125 = DECOR_GET_INT(bLocal_508, "CurrentHorseGringo");
		switch (bLocal_1125)
		{
			case 0x00000001:
				if (IS_OBJECT_VALID(Local_4.f_1824))
				{
					if (!Function_394(Global_34573, Local_4.f_1824, fVar0) || IS_ACTOR_ON_LADDER(Global_34573))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
						DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
					}
					else if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1182))
					{
						FIRE_STOP_ON_ACTOR(Global_34573);
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
						GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1824), "ButtSlap", 1);
						SNAP_ACTOR_TO_GRINGO(Global_34573, Local_4.f_1824, "ButtSlap", false, 0, 0);
						if (UNK_0xCDA6BB6C())
						{
							CANCEL_CUTSCENE_TUNER_PLAYBACK();
						}
						else if (IS_OBJECT_VALID(Local_490.f_16))
						{
							DESTROY_OBJECT(Local_490.f_16);
						}
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
						Function_342(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 672)[17], 1, 1, 1, 1);
						Local_490.f_16 = Function_391(Local_4, 0, 1, 0, 0);
						if (IS_OBJECT_VALID(Local_490.f_16))
						{
						}
						else
						{
							LOG_ERROR("Ranch04_SlapHorse1 - Failed to create Ranch04_SlapHorse1_cutscene");
						}
						DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
					}
				}
				else
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
					DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
				}
				break;
			
			case 0x00000002:
				if (IS_OBJECT_VALID(Local_4.f_1828))
				{
					if (!Function_394(Global_34573, Local_4.f_1828, fVar0) || IS_ACTOR_ON_LADDER(Global_34573))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
						DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
					}
					else if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1182))
					{
						FIRE_STOP_ON_ACTOR(Global_34573);
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
						GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1828), "ButtSlap", 1);
						SNAP_ACTOR_TO_GRINGO(Global_34573, Local_4.f_1828, "ButtSlap", false, 0, 0);
						if (UNK_0xCDA6BB6C())
						{
							CANCEL_CUTSCENE_TUNER_PLAYBACK();
						}
						else if (IS_OBJECT_VALID(Local_490.f_16))
						{
							DESTROY_OBJECT(Local_490.f_16);
						}
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
						Function_342(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 672)[17], 1, 1, 1, 1);
						Local_490.f_16 = Function_388(Local_4, 0, 1, 0, 0);
						if (IS_OBJECT_VALID(Local_490.f_16))
						{
						}
						else
						{
							LOG_ERROR("Ranch04_SlapHorse2 - Failed to create Ranch04_SlapHorse2_cutscene");
						}
						DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
					}
				}
				else
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
					DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
				}
				break;
			
			case 0x00000003:
				if (IS_OBJECT_VALID(Local_4.f_1832))
				{
					if (!Function_394(Global_34573, Local_4.f_1832, fVar0) || IS_ACTOR_ON_LADDER(Global_34573))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
						DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
					}
					else if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1182))
					{
						FIRE_STOP_ON_ACTOR(Global_34573);
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
						GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1832), "ButtSlap", 1);
						SNAP_ACTOR_TO_GRINGO(Global_34573, Local_4.f_1832, "ButtSlap", false, 0, 0);
						if (UNK_0xCDA6BB6C())
						{
							CANCEL_CUTSCENE_TUNER_PLAYBACK();
						}
						else if (IS_OBJECT_VALID(Local_490.f_16))
						{
							DESTROY_OBJECT(Local_490.f_16);
						}
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
						Function_342(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 672)[17], 1, 1, 1, 1);
						Local_490.f_16 = Function_385(Local_4, 0, 1, 0, 0);
						if (IS_OBJECT_VALID(Local_490.f_16))
						{
						}
						else
						{
							LOG_ERROR("Ranch04_SlapHorse3 - Failed to create Ranch04_SlapHorse3_cutscene");
						}
						DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
					}
				}
				else
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
					DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
				}
				break;
			}
	}
	return;
}

var Function_385(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x16CA9 / 93353
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_54(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch04_SlapHorse3", 1, 1);
	}
	Function_386(&bVar0);
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

void Function_386(int iParam0) //Position: 0x16D27 / 93479
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_387(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 100.0f, 0);
	return;
}

void Function_387(int iParam0) //Position: 0x16D50 / 93520
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -840,3842f, 94,23191f, 2460,766f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,242845f, 2,523558f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 65.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

var Function_388(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x16DEF / 93679
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_54(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch04_SlapHorse2", 1, 1);
	}
	Function_389(&bVar0);
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

void Function_389(int iParam0) //Position: 0x16E6D / 93805
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_390(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 100.0f, 0);
	return;
}

void Function_390(int iParam0) //Position: 0x16E96 / 93846
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -847,103f, 91,72254f, 2456,113f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,005912f, 2,98059f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 75.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

var Function_391(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x16F3C / 94012
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_54(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch04_SlapHorse1", 1, 1);
	}
	Function_392(&bVar0);
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

void Function_392(int iParam0) //Position: 0x16FBA / 94138
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_393(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 100.0f, 0);
	return;
}

void Function_393(int iParam0) //Position: 0x16FE3 / 94179
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -841,3345f, 92,40008f, 2457,207f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,100085f, -2,804826f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 65.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

bool Function_394(bool bParam0, bool bParam1, float fParam2) //Position: 0x17082 / 94338
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_396(bParam0);
			Function_395(bParam1);
			if (VDIST(Function_396(bParam0), Function_395(bParam1)) >= fParam2)
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

vector3 Function_395(bool bParam0) //Position: 0x1719C / 94620
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

vector3 Function_396(bool bParam0) //Position: 0x17208 / 94728
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

void Function_397() //Position: 0x17272 / 94834
{
	Function_362();
	if (IS_ACTOR_VALID(bLocal_976))
	{
		Function_402(&(Local_649[017]), bLocal_976, "RanchersDaughter", 1, 0x5f5e100, 1);
		if (IS_ACTOR_VALID(bLocal_979))
		{
			SET_ACTORS_HORSE(bLocal_976, bLocal_979);
			SET_MOST_RECENT_MOUNT(bLocal_976, bLocal_979);
		}
	}
	if (IS_ACTOR_VALID(bLocal_984))
	{
		Function_402(&(Local_649[117]), bLocal_984, "R4_Horse", 0, 0x5f5e100, 1);
		Function_398(&(Local_649[117]), 64);
	}
	else if (IS_ACTOR_VALID(bLocal_977))
	{
		Function_402(&(Local_649[117]), bLocal_977, "Drew", 0, 0x5f5e100, 1);
		if (IS_ACTOR_VALID(bLocal_980))
		{
			SET_ACTORS_HORSE(bLocal_977, bLocal_980);
		}
	}
	if (IS_ACTORSET_VALID(Local_4.f_632))
	{
		Function_402(&(Local_649[217]), Local_4.f_632, "R4_Townsfolk", 1, 0x5f5e100, 1);
		Function_398(&(Local_649[217]), 2);
		Function_398(&(Local_649[217]), 1024);
	}
	if (SQUAD_IS_VALID(Local_4.f_536))
	{
		Function_402(&(Local_649[317]), Local_4.f_536, "R4_Horse", 0, 0x5f5e100, 1);
		Function_398(&(Local_649[317]), 64);
		Function_398(&(Local_649[317]), 2);
		Function_398(&(Local_649[317]), 128);
	}
	if (IS_ACTORSET_VALID(bLocal_828))
	{
		Function_402(&(Local_649[417]), bLocal_828, "R4_Horse", 0, 0x5f5e100, 1);
		Function_398(&(Local_649[417]), 64);
		Function_398(&(Local_649[417]), 2);
	}
	return;
}

void Function_398(int iParam0, int iParam1) //Position: 0x17401 / 95233
{
	if (iParam1 != 100000000)
	{
		Function_401(iParam0, iParam1);
	}
	else
	{
		Function_399(iParam0, 1);
	}
	return;
}

void Function_399(int iParam0, bool bParam1) //Position: 0x17421 / 95265
{
	iParam0->f_40 = 0;
	Function_400(iParam0, 2, bParam1);
	Function_400(iParam0, 4, bParam1);
	Function_400(iParam0, 8, bParam1);
	Function_400(iParam0, 16, bParam1);
	Function_400(iParam0, 32, bParam1);
	Function_400(iParam0, 64, bParam1);
	Function_400(iParam0, 128, bParam1);
	Function_400(iParam0, 256, bParam1);
	Function_400(iParam0, 512, bParam1);
	Function_400(iParam0, 1024, bParam1);
	return;
}

void Function_400(int iParam0, int iParam1, bool bParam2) //Position: 0x17487 / 95367
{
	bool bVar0;
	
	Function_77(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_37(iParam0 + 40, bVar0);
	}
	else
	{
		Function_77(iParam0 + 40, bVar0);
	}
	return;
}

void Function_401(int iParam0, bool bParam1) //Position: 0x174C3 / 95427
{
	bool bVar0;
	
	Function_37(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_37(iParam0 + 40, bVar0);
	return;
}

int Function_402(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x174EE / 95470
{
	if (!Function_406(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_405(uParam0, bParam2))
	{
		return 0;
	}
	Function_404(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_403(uParam0, iParam4, iParam5);
	return 1;
}

void Function_403(var uParam0, int iParam1, int iParam2) //Position: 0x1752A / 95530
{
	if (iParam1 != 100000000)
	{
		Function_400(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_399(uParam0, iParam2);
	}
	return;
}

void Function_404(var uParam0, int iParam1) //Position: 0x1754D / 95565
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_405(int iParam0, bool bParam1) //Position: 0x17559 / 95577
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

bool Function_406(int iParam0, bool bParam1) //Position: 0x175E2 / 95714
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

void Function_407() //Position: 0x1776E / 96110
{
	bool bVar0;
	
	if (!Function_219(&iLocal_1073))
	{
		Function_217(&iLocal_1073);
	}
	if (bLocal_1118 > 0.0f || bLocal_1118 < 5.0f)
	{
		bLocal_1118 = RAND_FLOAT_RANGE(0,5f, 4.0f);
	}
	if (Function_296(&iLocal_1073) <= bLocal_1118)
	{
		bLocal_1125 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1125)
		{
			case 0x00000001:
				bLocal_1123 = bLocal_1158;
				bVar0 = "Ranch04_putItOut1";
				break;
			
			case 0x00000002:
				bLocal_1123 = bLocal_1159;
				bVar0 = "Ranch04_putItOut2";
				break;
			
			case 0x00000003:
				bLocal_1123 = bLocal_1160;
				bVar0 = "Ranch04_putItOut3";
				break;
			
			case 0x00000004:
				bLocal_1123 = bLocal_1161;
				bVar0 = "Ranch04_putItOut4";
				break;
			
			case 0x00000005:
				bLocal_1123 = bLocal_1162;
				bVar0 = "Ranch04_putItOut5";
				break;
			
			case 0x00000006:
				bLocal_1123 = bLocal_1163;
				bVar0 = "Ranch04_putItOut6";
				break;
		}
		if (IS_ACTOR_VALID(bLocal_1123))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_1123, 25.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(bLocal_1123))
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_1123, bVar0, false, 0, 0, 0, 0, 3);
					PRINTSTRING(GET_ACTOR_ENUM_STRING(bLocal_1123));
					PRINTSTRING(" saying PUT IT OUT!");
					PRINTNL();
					Function_217(&iLocal_1073);
					bLocal_1118 = RAND_FLOAT_RANGE(0,5f, 4.0f);
				}
			}
		}
	}
	return;
}

void Function_408() //Position: 0x17902 / 96514
{
	if (SQUAD_GET(bLocal_981) == Local_4.f_536)
	{
		if (IS_OBJECT_VALID(Local_4.f_1824))
		{
			if (GET_LAST_HIT_FLAGS(bLocal_981) == 4)
			{
				Function_247("R4_Horse_attacked");
				bLocal_498 = true;
			}
			else if (GET_LAST_HIT_FLAGS(bLocal_981) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_981)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(bLocal_981));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_981)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_981));
				}
				Function_208(bLocal_981);
				DECOR_SET_BOOL(bLocal_981, "HorseRescued", true);
				TASK_CLEAR(bLocal_981);
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1892, 4, 1, 0, 1, false);
				TASK_HORSE_ACTION(false, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_981, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1182))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
					DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
				}
				TASK_PRIORITY_SET(bLocal_981, true);
				DESTROY_OBJECT(Local_4.f_1824);
				Function_381();
			}
		}
	}
	if (SQUAD_GET(bLocal_982) == Local_4.f_536)
	{
		if (IS_OBJECT_VALID(Local_4.f_1828))
		{
			if (GET_LAST_HIT_FLAGS(bLocal_982) == 4)
			{
				Function_247("R4_Horse_attacked");
				bLocal_498 = true;
			}
			else if (GET_LAST_HIT_FLAGS(bLocal_982) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_982)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(bLocal_982));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_982)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_982));
				}
				Function_208(bLocal_982);
				DECOR_SET_BOOL(bLocal_982, "HorseRescued", true);
				TASK_CLEAR(bLocal_982);
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1896, 4, 1, 0, 1, false);
				TASK_HORSE_ACTION(false, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_982, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1182))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
					DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
				}
				TASK_PRIORITY_SET(bLocal_982, true);
				DESTROY_OBJECT(Local_4.f_1828);
				Function_381();
			}
		}
	}
	if (SQUAD_GET(bLocal_983) == Local_4.f_536)
	{
		if (IS_OBJECT_VALID(Local_4.f_1832))
		{
			if (GET_LAST_HIT_FLAGS(bLocal_983) == 4)
			{
				Function_247("R4_Horse_attacked");
				bLocal_498 = true;
			}
			else if (GET_LAST_HIT_FLAGS(bLocal_983) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_983)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(bLocal_983));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_983)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_983));
				}
				Function_208(bLocal_983);
				DECOR_SET_BOOL(bLocal_983, "HorseRescued", true);
				TASK_CLEAR(bLocal_983);
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1900, 4, 1, 0, 1, false);
				TASK_HORSE_ACTION(false, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_983, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1182))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1182);
					DECOR_REMOVE(bLocal_508, "CurrentHorseGringo");
				}
				TASK_PRIORITY_SET(bLocal_983, true);
				DESTROY_OBJECT(Local_4.f_1832);
				Function_381();
			}
		}
	}
	return;
}

void Function_409() //Position: 0x17C0E / 97294
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		bLocal_1123 = GET_MOUNT(Global_34573);
		Function_365(bLocal_1123);
		if (!IS_ACTOR_VALID(bLocal_1167))
		{
			bLocal_1167 = bLocal_1123;
		}
		if (!Function_219(&iLocal_1103))
		{
			if (GET_ACTOR_GAIT_TYPE(bLocal_1123) == 0)
			{
				Function_217(&iLocal_1103);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1123, Function_410());
				PRINTSTRING("Player's horse playing startle.");
				PRINTNL();
			}
		}
		else if (GET_ACTOR_GAIT_TYPE(bLocal_1123) == 0)
		{
			if (Function_296(&iLocal_1103) < 2.0f)
			{
				Function_217(&iLocal_1103);
				bLocal_1123 = GET_MOUNT(Global_34573);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1123, Function_410());
				PRINTSTRING("Player's horse playing startle.");
				PRINTNL();
			}
		}
	}
	else if (IS_ACTOR_VALID(bLocal_1167))
	{
		GET_VOLUME_CENTER((*&Local_4 + 672)[0], &vLocal_1127);
		bLocal_1125 = TASK_SEQUENCE_OPEN();
		TASK_HORSE_ACTION(false, 0);
		TASK_FLEE_COORD(false, &vLocal_1127, 4, 100.0f, 5.0f, 0);
		TASK_HORSE_ACTION(false, 0);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_1167, bLocal_1125);
		TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
		bLocal_1167 = "";
	}
	return;
}

var Function_410() //Position: 0x17D3A / 97594
{
	bool bVar0;
	
	switch (RAND_INT_RANGE(false, 2))
	{
		case 0x00000000:
			bVar0 = "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01";
			break;
		
		case 0x00000001:
			bVar0 = "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02";
			break;
		
		case 0x00000002:
			bVar0 = "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03";
			break;
	}
	return bVar0;
}

void Function_411(int iParam0) //Position: 0x17E33 / 97843
{
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
	{
		if (ACTOR_HAS_ANIM_SET(Global_34573, "nnear_fire"))
		{
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
		}
		Function_217(iParam0);
	}
	if (!Function_219(iParam0))
	{
		Function_217(iParam0);
	}
	else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[0]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[11]))
	{
		if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nnear_fire"))
		{
			if (Function_296(iParam0) < 3.0f)
			{
				if ((((((((((!IS_ACTOR_RIDING(Global_34573) && !IS_WEAPON_DRAWN(Global_34573)) && !IS_ACTOR_CROUCHING(Global_34573)) && !IS_ACTOR_FLYING(Global_34573)) && !IS_ACTOR_JUMPING(Global_34573)) && !IS_ACTOR_THROWING(Global_34573)) && !IS_ACTOR_WHISTLING(Global_34573)) && !IS_ACTOR_ON_LADDER(Global_34573)) && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573))) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nhighledge")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nledgeplay"))
				{
					if (HAS_ACTION_TREE_LOADED("nnear_fire"))
					{
						if (!ACTOR_HAS_ANIM_SET(Global_34573, "nnear_fire"))
						{
							SET_ANIM_SET_FOR_ACTOR(Global_34573, "nnear_fire", 0);
						}
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "nnear_fire");
					}
					else
					{
						LOG_ERROR("ACT TREE NOT LOADED: This is a problem");
					}
				}
				else
				{
					if (ACTOR_HAS_ANIM_SET(Global_34573, "nnear_fire"))
					{
					}
					Function_217(iParam0);
				}
			}
		}
		else
		{
			if ((((((((((IS_ACTOR_RIDING(Global_34573) || IS_WEAPON_DRAWN(Global_34573)) || IS_ACTOR_CROUCHING(Global_34573)) || IS_ACTOR_FLYING(Global_34573)) || IS_ACTOR_JUMPING(Global_34573)) || IS_ACTOR_THROWING(Global_34573)) || IS_ACTOR_WHISTLING(Global_34573)) || IS_ACTOR_ON_LADDER(Global_34573)) || IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573))) || IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nhighledge")) || IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nledgeplay"))
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "arm_up_pst"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "near_fire/arm_up/arm_up_pst");
				}
				Function_217(iParam0);
			}
			Function_217(iParam0);
		}
	}
	else
	{
		if (ACTOR_HAS_ANIM_SET(Global_34573, "nnear_fire"))
		{
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
		}
		Function_217(iParam0);
	}
	return;
}

void Function_412() //Position: 0x180A2 / 98466
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), bLocal_508, 15, 1);
	iVar0 = LOCATE_ACTORS_IN_VOLUME((*&Local_4 + 672)[3], bVar3, 0, 1);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar3));
		if (IS_ACTOR_HORSE(bVar4))
		{
			if (!SQUAD_GET(bVar4) != Local_4.f_536 && !bVar4 != bLocal_984)
			{
				if (!GET_TASK_STATUS(bVar4, 0) != 1)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1500)[7], &uVar5);
					bVar2 = TASK_SEQUENCE_OPEN();
					if (IS_ACTOR_MOUNTED(bVar4))
					{
						SET_ACTION_NODE_FOR_ACTOR(GET_RIDER(bVar4), "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
					}
					TASK_FACE_COORD(false, &uVar5, 0);
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[7], 2, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar4, bVar2);
					TASK_SEQUENCE_RELEASE(bVar2, 1);
					if (!IS_ACTOR_IN_ACTORSET(bLocal_828, bVar4))
					{
						ADD_ACTORSET_MEMBER(bLocal_828, bVar4);
						Function_368(&bLocal_828);
					}
				}
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar3);
	return;
}

void Function_413() //Position: 0x181C2 / 98754
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bLocal_976))
	{
		bLocal_976 = Function_418(3, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	switch (iLocal_998)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (IS_ACTION_NODE_PLAYING(bLocal_976, "pull_pitchfork/bonnie_coughing/cough") || IS_ACTION_NODE_PLAYING(bLocal_976, "pull_pitchfork_shoot/bonnie_coughing/cough"))
			{
				if (GET_TASK_STATUS(bLocal_976, 0) != 1)
				{
					bVar0 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1892, true, 0, 0, 1, false);
					TASK_GO_NEAR_OBJECT(false, Local_4.f_1868, 0,5f, 1, 1, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_976, bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_417();
					Function_426("Ranch04_obj03b");
					iLocal_998 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(bLocal_976, 0) == 0)
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "bonnie_coughing"))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_976, "pull_pitchfork/bonnie_coughing/cough"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "pull_pitchfork/bonnie_coughing/pst");
					}
					else if (IS_ACTION_NODE_PLAYING(bLocal_976, "pull_pitchfork_shoot/bonnie_coughing/cough"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "pull_pitchfork_shoot/bonnie_coughing/pst");
					}
				}
				if (GET_TASK_STATUS(bLocal_976, 19) != 1)
				{
					TASK_USE_GRINGO(bLocal_976, GET_GRINGO_FROM_OBJECT(Local_4.f_1868), "UseCase1", 4294967295, 1);
				}
			}
			else if (GET_TASK_STATUS(bLocal_976, 0) != 1)
			{
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_976, 1065353216, 1117126656, 1, 1, 0))
				{
					iLocal_1041 = 0;
					iLocal_998 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (!iLocal_1141)
			{
				Function_414();
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_976, 1065353216, 1117126656, 1, 1, 0) && iLocal_1178)
				{
					Function_229(bLocal_976);
					Function_238(bLocal_976, (*&Local_4 + 1500)[22], 1, 1, 1);
					TASK_STAND_STILL(bLocal_976, -1.0f, 0, 0);
					iLocal_1141 = 1;
				}
			}
			break;
	}
	return;
}

void Function_414() //Position: 0x18462 / 99426
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_1041)
	{
		if (!ACTOR_HAS_ANIM_SET(bLocal_976, "carry_bucket"))
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 0);
			SET_ANIM_SET_FOR_ACTOR(bLocal_976, "carry_bucket", 0);
		}
		if (GET_TASK_STATUS(bLocal_976, 0) != 1)
		{
			bVar0 = RAND_INT_RANGE(false, 6);
			GET_OBJECT_RELATIVE_POSITION((*&Local_4 + 1340)[bVar0], 0.0f, 0.0f, -10.0f, &vLocal_1127);
			bVar1 = TASK_SEQUENCE_OPEN();
			if (IS_ACTOR_RIDING(bLocal_976))
			{
				TASK_DISMOUNT(false, 1);
			}
			TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "carry_bucket/Get_Water_No_Interrupt", &Local_4 + 1044[iLocal_10206], -1.0f, 2, 0,2f);
			TASK_GO_NEAR_COORD(false, &Local_4 + 1168[bVar06], 1.0f, 4);
			TASK_FACE_COORD(false, &vLocal_1127, 0);
			TASK_ACTION_PERFORM(false, "carry_bucket/Toss_Water");
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_976);
			TASK_SEQUENCE_PERFORM(bLocal_976, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
			iLocal_1020++;
			if (iLocal_1020 > 4)
			{
				iLocal_1020 = 0;
			}
		}
	}
	else if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_976, 1))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 0);
		SET_ANIM_SET_FOR_ACTOR(bLocal_976, "carry_bucket", 0);
		Function_415(bLocal_976);
		iLocal_1041 = 1;
	}
	return;
}

void Function_415(bool bParam0) //Position: 0x185BE / 99774
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	bool bVar5;
	
	AI_GOAL_LOOK_AT_ACTOR(bParam0, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
	RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
	SET_ANIM_SET_FOR_ACTOR(bParam0, "carry_bucket", 0);
	bVar4 = CREATE_PROP_IN_LAYOUT(bLocal_508, Function_54(), "$/fragments/p_gen_bucket03x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	if (!IS_OBJECT_VALID(bVar4))
	{
		LOG_ERROR("Failed to create bucket in ActorFightFire!");
		return;
	}
	SET_ACTOR_PROOF(bParam0, 16);
	Function_416(bVar4, 0);
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "Water_Bucket_Ref", bVar4);
	DECOR_SET_OBJECT(bVar4, "Water_Bucket_User", GET_OBJECT_FROM_ACTOR(bParam0));
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar4, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bVar4, GET_OBJECT_FROM_ACTOR(bParam0), false);
	ATTACH_OBJECTS_USING_LOCATOR(bVar4, GET_OBJECT_FROM_ACTOR(bParam0), "wrist_l_Attachment", "grab", 4294967295);
	SET_ACTION_NODE_FOR_ACTOR(bParam0, "carry_bucket/Bucket_Empty");
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, (*&Local_4 + 672)[7]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, (*&Local_4 + 672)[8]);
	SET_ACTOR_VOLUME_PARAMETERS(bParam0, 2, 1);
	GET_OBJECT_POSITION((*&Local_4 + 1500)[15], &uVar1);
	bVar5 = RAND_INT_RANGE(false, 6);
	bVar0 = TASK_SEQUENCE_OPEN();
	if (IS_ACTOR_RIDING(bParam0))
	{
		TASK_DISMOUNT(false, 1);
	}
	TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "carry_bucket/Get_Water_No_Interrupt", &Local_4 + 1044[iLocal_10206], -1.0f, 2, 0,2f);
	TASK_GO_NEAR_COORD(false, &Local_4 + 1168[bVar56], 1.0f, 4);
	TASK_FACE_COORD(false, &uVar1, 0);
	TASK_ACTION_PERFORM(false, "carry_bucket/Toss_Water");
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bParam0);
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	iLocal_1020++;
	if (iLocal_1020 > 4)
	{
		iLocal_1020 = 0;
	}
	return;
}

void Function_416(bool bParam0, bool bParam1) //Position: 0x18809 / 100361
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(bParam0, "water_bucket");
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_GRINGO_FROM_OBJECT(bVar0);
			if (IS_GRINGO_VALID(bVar1))
			{
				GRINGO_ALLOW_ACTIVATION(bVar1, bParam1);
			}
		}
	}
	return;
}

void Function_417() //Position: 0x1884B / 100427
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_grabs1Horse", "Ranch04_grabs1Horse", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_418(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x1889A / 100506
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
		if (!Function_160(&(Global_29008[Global_30621[3]]), 4))
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
		Function_230(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_425(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_421(StackVal, iParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = iParam3;
			vVar3.y = iParam4;
			vVar3.z = iParam5;
			if (Function_74(StackVal, StackVal, vVar3))
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
		Function_420(bVar1, 0, 0, 0, 0);
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
		Function_419(bVar1, 0);
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

void Function_419(bool bParam0, bool bParam1) //Position: 0x18D84 / 101764
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_420(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x18DA4 / 101796
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

bool Function_421(int iParam0, bool bParam1) //Position: 0x18DF8 / 101880
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_346(iParam0))
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
						Function_422(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_422(bool bParam0, bool bParam1) //Position: 0x18E78 / 102008
{
	Function_424(bParam0);
	Function_423(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_423(bool bParam0) //Position: 0x18E9E / 102046
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_424(bool bParam0) //Position: 0x18EC2 / 102082
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

bool Function_425(int iParam0, bool bParam1) //Position: 0x18F91 / 102289
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

void Function_426(bool bParam0) //Position: 0x19024 / 102436
{
	if (!IS_STRING_VALID(bLocal_1055))
	{
		if (!Function_219(&iLocal_1008))
		{
			Function_217(&iLocal_1008);
		}
		bLocal_1055 = bParam0;
	}
	else if (!STRINGS_ARE_EQUAL(bLocal_1055, bParam0))
	{
		if (!Function_219(&iLocal_1008))
		{
			Function_217(&iLocal_1008);
		}
		bLocal_1055 = bParam0;
	}
	return;
}

bool Function_427(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1906D / 102509
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_394(Global_34573, bParam3, fParam2))
	{
		Function_247(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_394(Global_34573, bParam3, fParam1))
	{
		if (!Function_434(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_433(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_432(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_431(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_431(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_434(1))
	{
		Function_430(1);
		if (!Function_429())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_428();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_431(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_431(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_428() //Position: 0x191DB / 102875
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

bool Function_429() //Position: 0x19206 / 102918
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

void Function_430(bool bParam0) //Position: 0x1924A / 102986
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_37(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_431(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x192AD / 103085
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

void Function_432(bool bParam0) //Position: 0x1934E / 103246
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_77(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

void Function_433(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x193B1 / 103345
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

bool Function_434(bool bParam0) //Position: 0x19404 / 103428
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_154(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_435(int iParam0) //Position: 0x1944B / 103499
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (Function_454())
	{
		if (!*iParam0)
		{
			Function_453();
			Function_452();
			Function_451();
			if (IS_VOLUME_VALID((*&Local_4 + 672)[6]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[6]))
				{
					if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bLocal_1069)))
					{
						if (ACTOR_HAS_ANIM_SET(Global_34573, "nnear_fire"))
						{
							RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						}
						DECOR_SET_BOOL(Global_34573, "NoGringoCamera", true);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1069), true);
						bVar0 = Function_227(bLocal_976);
						if (IS_OBJECT_VALID(bVar0))
						{
							Function_226(bVar0);
							DESTROY_OBJECT(bVar0);
						}
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_976);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 0);
						if (!bLocal_1143)
						{
							SET_ANIM_SET_FOR_ACTOR(bLocal_976, "pull_pitchfork", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(bLocal_976, "pull_pitchfork_shoot", 0);
						}
						SET_ACTOR_PROOF(bLocal_976, 16);
						iLocal_998 = 0;
						RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 0);
						TASK_USE_GRINGO(bLocal_976, GET_GRINGO_FROM_OBJECT(bLocal_1069), "nBonnieUse", true, 1);
						SNAP_ACTOR_TO_GRINGO(bLocal_976, bLocal_1069, "nBonnieUse", true, 0, 0);
					}
				}
				else
				{
					if (DECOR_CHECK_EXIST(Global_34573, "NoGringoCamera"))
					{
						DECOR_REMOVE(Global_34573, "NoGringoCamera");
					}
					Function_411(&iLocal_1085);
					if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bLocal_1069)))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 0);
						iLocal_1041 = 0;
						Function_414();
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1069), false);
					}
				}
			}
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
			{
				if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_1069))
				{
					if (iLocal_1144)
					{
						iLocal_1144 = 0;
					}
					else
					{
						if (ACTOR_HAS_ANIM_SET(Global_34573, "nnear_fire"))
						{
							RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						}
						Function_348(&iLocal_1183, 57, 0, 4294967295, 4294967295);
						RESET_RMPTFX_IN_VOLUME((*&Local_4 + 840)[0]);
						if (!bLocal_1143)
						{
							if (UNK_0xCDA6BB6C())
							{
								CANCEL_CUTSCENE_TUNER_PLAYBACK();
							}
							else if (IS_OBJECT_VALID(Local_490.f_16))
							{
								DESTROY_OBJECT(Local_490.f_16);
							}
							GET_OBJECT_POSITION((*&Local_4 + 1500)[30], &vLocal_1127);
							ENABLE_GAME_CAMERA_FOCUS(vLocal_1127, -1.0f, 0, 0, 1, 0);
							Function_342(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 672)[17], 1, 1, 1, 1);
							ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
							fLocal_1121 = 0,15f;
							Local_490.f_16 = Function_445(Local_4, 0, Global_34573, 1, 0, 0);
							if (IS_OBJECT_VALID(Local_490.f_16))
							{
							}
							else
							{
								LOG_ERROR("Ranch04_CSPullPitchfork - Failed to create Ranch04_CSPullPitchfork_cutscene");
							}
						}
						else
						{
							if (UNK_0xCDA6BB6C())
							{
								CANCEL_CUTSCENE_TUNER_PLAYBACK();
							}
							else if (IS_OBJECT_VALID(Local_490.f_16))
							{
								DESTROY_OBJECT(Local_490.f_16);
							}
							GET_OBJECT_POSITION((*&Local_4 + 1500)[30], &vLocal_1127);
							ENABLE_GAME_CAMERA_FOCUS(vLocal_1127, -1.0f, 0, 0, 1, 0);
							Function_342(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 672)[17], 1, 1, 1, 1);
							ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
							fLocal_1121 = 0.0f;
							Local_490.f_16 = Function_439(Local_4, 0, Global_34573, 1, 0, 0);
							if (IS_OBJECT_VALID(Local_490.f_16))
							{
							}
							else
							{
								LOG_ERROR("Ranch04_CSPullPitchfork - Failed to create Ranch04_CSPullPitchforkShoot_cutscene");
							}
						}
						Function_217(&iLocal_1076);
						iLocal_1140 = 0;
						*iParam0 = 1;
						bLocal_1176 = false;
					}
				}
			}
			else if (!iLocal_1144)
			{
				iLocal_1144 = 1;
			}
		}
		else
		{
			GET_OBJECT_POSITION((*&Local_4 + 1500)[30], &vLocal_1127);
			ENABLE_GAME_CAMERA_FOCUS(vLocal_1127, -1.0f, 0, 0, 1, 0);
			Function_455();
			Function_407();
			if (!bLocal_1176)
			{
				if (Function_296(&iLocal_1002) < 2.0f && Function_296(&iLocal_1002) > 9.0f)
				{
					if (IS_BUTTON_PRESSED(0, 6, 1, 0))
					{
						bLocal_1176 = true;
						if (!HUD_IS_FADED() || !HUD_IS_FADING())
						{
							Function_242(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
					}
				}
			}
			else if (HUD_IS_FADED())
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
				{
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
					DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(Global_34573)));
					Function_238(Global_34573, (*&Local_4 + 1500)[29], 1, 1, 1);
				}
			}
			if (!DECOR_CHECK_EXIST(Global_34573, "_PullingPitchfork"))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "pull_pitchfork") || IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "pull_pitchfork_shoot"))
				{
					DECOR_SET_BOOL(Global_34573, "_PullingPitchfork", true);
				}
			}
			if (DECOR_GET_BOOL(Global_34573, "nbOpenDoor"))
			{
				iLocal_1168 = 1;
			}
			if (iLocal_1168 == 1)
			{
				if (!IS_ACTOR_PERFORMING_LINKED_ANIMATION(bLocal_976))
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "kneel_cough_pst"))
					{
						if (!bLocal_1143)
						{
						}
					}
				}
			}
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
			{
				if (!iLocal_1140)
				{
					if (DECOR_GET_BOOL(bLocal_1069, "nbOpenDoor"))
					{
						if (!Function_219(&iLocal_1106))
						{
							Function_217(&iLocal_1106);
						}
						else if (Function_296(&iLocal_1106) < fLocal_1121)
						{
							Local_835[610].f_24 = 0;
							Local_835[710].f_24 = 0;
							Local_835[610].f_28 = 1;
							Local_835[710].f_28 = 1;
							SET_DOOR_AUTO_CLOSE(Local_835[610], 0);
							SET_DOOR_AUTO_CLOSE(Local_835[710], 0);
							Function_438(Local_835[610], 0);
							Function_438(Local_835[710], 0);
							Local_835[1210].f_28 = 1;
							Local_835[1310].f_28 = 1;
							GET_OBJECT_POSITION((*&Local_4 + 1500)[10], &vVar2);
							bLocal_1061 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "m_StallFireF1", "script_Hennigans_BarnStall01", vVar2);
							UNK_0x6745191B(bLocal_1061, 0.0f, 0.0f, 0.0f);
							GET_OBJECT_POSITION((*&Local_4 + 1500)[10], &vVar2);
							bLocal_1062 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "m_StallFireF2", "script_Hennigans_BarnStall06", vVar2);
							UNK_0x6745191B(bLocal_1062, 0.0f, 0.0f, 0.0f);
							bLocal_997 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "nDoorSmoke", "script_Hennigans_BarnDoorOpen", -846.0f, 94.0f, 2456.0f);
							Function_76();
							UNK_0x6745191B(bLocal_997, Function_76());
							if (!bLocal_1176)
							{
								Function_437();
							}
							if (DECOR_CHECK_EXIST(Global_34573, "NoGringoCamera"))
							{
								DECOR_REMOVE(Global_34573, "NoGringoCamera");
							}
							iLocal_1140 = 1;
						}
					}
				}
			}
			else
			{
				if (!DECOR_CHECK_EXIST(bLocal_508, "DoorCutsceneComplete"))
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "kneel_cough_pst"))
					{
						if (!bLocal_1143)
						{
						}
					}
					iLocal_998 = 1;
					GET_OBJECT_POSITION((*&Local_4 + 1500)[30], &vLocal_1127);
					ENABLE_GAME_CAMERA_FOCUS(vLocal_1127, -1.0f, 0, 0, 1, 0);
					Function_317(1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
					ACTOR_END_FORCE_HOLSTER(Global_34573);
					DECOR_REMOVE(Global_34573, "_PullingPitchfork");
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(Local_490.f_16))
					{
						DESTROY_OBJECT(Local_490.f_16);
					}
					if (DECOR_CHECK_EXIST(Global_34573, "NoGringoCamera"))
					{
						DECOR_REMOVE(Global_34573, "NoGringoCamera");
					}
					Function_217(&iLocal_1085);
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(Local_4.f_536))
					{
						bVar5 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, bVar1);
						if (IS_ACTOR_VALID(bVar5))
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar5)))
							{
								ADD_BLIP_FOR_ACTOR(bVar5, 325, 0, 2, 0);
								SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bVar5), "BLIP_HORSE");
							}
						}
						bVar1++;
					}
					TASK_PRIORITY_SET(bLocal_976, true);
					DECOR_SET_BOOL(bLocal_508, "DoorCutsceneComplete", true);
				}
				if (!IS_ACTOR_VALID(bLocal_985))
				{
					bLocal_985 = GET_ACTOR_FROM_ACTORSET(bLocal_829, (GET_ACTORSET_SIZE(bLocal_829) - 1));
					if (IS_ACTOR_VALID(bLocal_985))
					{
						bVar0 = Function_227(bLocal_985);
						if (IS_OBJECT_VALID(bVar0))
						{
							Function_226(bVar0);
							DESTROY_OBJECT(bVar0);
							DECOR_REMOVE_ALL(GET_OBJECT_FROM_ACTOR(bLocal_985));
						}
						AI_SET_NAV_PATHFINDING_ENABLED(bLocal_985, true);
						REMOVE_ACTORSET_MEMBER(bLocal_829, bLocal_985);
						Function_368(&bLocal_829);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_985, 0);
						iLocal_999 = 0;
						bLocal_988 = "";
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_985);
					}
				}
				if (!IS_ACTOR_VALID(bLocal_986))
				{
					bLocal_986 = GET_ACTOR_FROM_ACTORSET(bLocal_829, (GET_ACTORSET_SIZE(bLocal_829) - 1));
					if (IS_ACTOR_VALID(bLocal_986))
					{
						bVar0 = Function_227(bLocal_986);
						if (IS_OBJECT_VALID(bVar0))
						{
							Function_226(bVar0);
							DESTROY_OBJECT(bVar0);
							DECOR_REMOVE_ALL(GET_OBJECT_FROM_ACTOR(bLocal_986));
						}
						AI_SET_NAV_PATHFINDING_ENABLED(bLocal_986, true);
						REMOVE_ACTORSET_MEMBER(bLocal_829, bLocal_986);
						Function_368(&bLocal_829);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_986, 0);
						iLocal_1000 = 0;
						bLocal_989 = "";
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_986);
					}
				}
				Function_397();
				*iParam0 = 1;
				if (IS_BLIP_VALID(bLocal_991))
				{
					REMOVE_BLIP(bLocal_991);
				}
				if (IS_OBJECT_VALID(bLocal_1069))
				{
					DESTROY_OBJECT(bLocal_1069);
				}
				if (!iLocal_1140)
				{
					Local_835[610].f_24 = 0;
					Local_835[710].f_24 = 0;
					Local_835[610].f_28 = 1;
					Local_835[710].f_28 = 1;
					SET_DOOR_AUTO_CLOSE(Local_835[610], 0);
					SET_DOOR_AUTO_CLOSE(Local_835[710], 0);
					Function_438(Local_835[610], 0);
					Function_438(Local_835[710], 0);
					Local_835[1210].f_28 = 1;
					Local_835[1310].f_28 = 1;
					GET_OBJECT_POSITION((*&Local_4 + 1500)[10], &vVar2);
					bLocal_1061 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "m_StallFireF1", "script_Hennigans_BarnStall01", vVar2);
					UNK_0x6745191B(bLocal_1061, 0.0f, 0.0f, 0.0f);
					GET_OBJECT_POSITION((*&Local_4 + 1500)[10], &vVar2);
					bLocal_1062 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "m_StallFireF2", "script_Hennigans_BarnStall06", vVar2);
					UNK_0x6745191B(bLocal_1062, 0.0f, 0.0f, 0.0f);
					bLocal_997 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "nDoorSmoke", "script_Hennigans_BarnDoorOpen", -846.0f, 94.0f, 2456.0f);
					Function_76();
					UNK_0x6745191B(bLocal_997, Function_76());
					iLocal_1140 = 1;
				}
				if (HUD_IS_FADED())
				{
					Function_286(1.0f);
				}
				else if (!HUD_IS_FADING())
				{
					Function_436();
					Function_310(&iLocal_1014);
					Function_348(&iLocal_1183, 57, 0, 4294967295, 4294967295);
					Function_240(9);
				}
				return 1;
			}
		}
	}
	return 0;
}

void Function_436() //Position: 0x19F6D / 106349
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_437() //Position: 0x19F79 / 106361
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_barndoorOpen", "Ranch04_barndoorOpen", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_438(bool bParam0, bool bParam1) //Position: 0x19FCA / 106442
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		DECOR_SET_BOOL(bParam0, "pickMe", true);
	}
	else
	{
		DECOR_SET_BOOL(bParam0, "unpickMe", true);
	}
	return;
}

var Function_439(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A004 / 106500
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_54(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch04_CSPullPitchforkShoot", 4, 1);
	}
	Function_440(&bVar0, uParam2);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 6.0f, 4294967295, 4, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_440(var uParam0, char* cParam1) //Position: 0x1A08E / 106638
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_444(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_443(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_442(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_441(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 3, cParam1, "_PullingPitchfork", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 3, 0, 1,4f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2,8f, 2);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 6.0f, 3, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 12,6f, 0, 0.0f);
	return;
}

void Function_441(int iParam0) //Position: 0x1A12F / 106799
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -844,3215f, 91,58705f, 2452,855f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,000412f, 1,180611f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 7,7f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 75.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_442(int iParam0) //Position: 0x1A1D5 / 106965
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -849,7648f, 92,02519f, 2446,735f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,019998f, -2,852358f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 1266.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 3);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_443(int iParam0) //Position: 0x1A277 / 107127
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -849,2345f, 91,08173f, 2447,779f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,145614f, -2,850936f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 1266.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_444(bool bParam0) //Position: 0x1A316 / 107286
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -846,1195f, 91,56859f, 2453,19f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,015925f, 0,733807f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*bParam0, 7,7f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*bParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*bParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*bParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*bParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*bParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*bParam0, 16.0f);
	return;
}

var Function_445(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A3B5 / 107445
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_54(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch04_CSPullPitchfork", 4, 1);
	}
	Function_446(&bVar0, uParam2);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 6.0f, 4294967295, 4, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_446(var uParam0, char* cParam1) //Position: 0x1A43A / 107578
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_450(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_449(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_448(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_447(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 3, cParam1, "_PullingPitchfork", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 3, 0, 3,2f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2,8f, 2);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 6.0f, 3, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 12,6f, 0, 0.0f);
	return;
}

void Function_447(int iParam0) //Position: 0x1A4DB / 107739
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -844,3215f, 91,58707f, 2452,855f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,000409f, 1,180727f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 7,7f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 75.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_448(int iParam0) //Position: 0x1A581 / 107905
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -849,7632f, 92,0252f, 2446,768f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,019998f, -2,852358f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 1266.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 3);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_449(int iParam0) //Position: 0x1A623 / 108067
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -849,2345f, 91,08173f, 2447,779f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,145614f, -2,850936f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 1266.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_450(var uParam0) //Position: 0x1A6C2 / 108226
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -846,1195f, 91,56859f, 2453,19f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,015925f, 0,733807f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 7,7f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_451() //Position: 0x1A761 / 108385
{
	if (IS_PHYSINST_VALID(bLocal_1179))
	{
		if (IS_PROP_BROKEN(bLocal_1179) || GET_PROP_HEALTH(bLocal_1179) > 1.0f)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1069), false);
			DESTROY_OBJECT(bLocal_1069);
			bLocal_1069 = CREATE_GRINGO_IN_LAYOUT(Local_4, "pull_pitchfork_shoot", "pull_pitchfork_shoot", vLocal_1133, vLocal_1136);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1069), false);
			bLocal_1179 = "";
			bLocal_1143 = true;
		}
	}
	else if (!bLocal_1143)
	{
		if (IS_OBJECT_VALID(bLocal_1069))
		{
			bLocal_1179 = LOCATE_PHYSINST_OF_TYPE(vLocal_1133, 5.0f, "p_gen_pitchForkBreak01x", 1);
			SET_PROP_HEALTH(bLocal_1179, 1.0f);
		}
	}
	return;
}

void Function_452() //Position: 0x1A826 / 108582
{
	bool bVar0;
	
	if (!Function_219(&iLocal_1073))
	{
		Function_217(&iLocal_1073);
	}
	if (bLocal_1118 > 0.0f || bLocal_1118 < 5.0f)
	{
		bLocal_1118 = RAND_FLOAT_RANGE(0,5f, 4.0f);
	}
	if (Function_296(&iLocal_1073) <= bLocal_1118)
	{
		bLocal_1125 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1125)
		{
			case 0x00000001:
				bLocal_1123 = bLocal_1158;
				bVar0 = "Ranch04_jonNoHelpLab1";
				break;
			
			case 0x00000002:
				bLocal_1123 = bLocal_1159;
				bVar0 = "Ranch04_jonNoHelpLab2";
				break;
			
			case 0x00000003:
				bLocal_1123 = bLocal_1160;
				bVar0 = "Ranch04_jonNoHelpLab3";
				break;
			
			case 0x00000004:
				bLocal_1123 = bLocal_1161;
				bVar0 = "Ranch04_jonNoHelpLab4";
				break;
			
			case 0x00000005:
				bLocal_1123 = bLocal_1162;
				bVar0 = "Ranch04_jonNoHelpLab5";
				break;
			
			case 0x00000006:
				bLocal_1123 = bLocal_1163;
				bVar0 = "Ranch04_jonNoHelpLab6";
				break;
		}
		if (IS_ACTOR_VALID(bLocal_1123))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_1123, 25.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(bLocal_1123))
				{
					SAY_SINGLE_LINE_STRING(bLocal_1123, bVar0, true, true, 3, 0, true, false);
					PRINTSTRING(GET_ACTOR_ENUM_STRING(bLocal_1123));
					PRINTSTRING(" saying NO HELP!");
					PRINTNL();
					Function_217(&iLocal_1073);
					bLocal_1118 = RAND_FLOAT_RANGE(0,5f, 4.0f);
				}
			}
		}
	}
	return;
}

void Function_453() //Position: 0x1A9CF / 109007
{
	if (SQUAD_GET(bLocal_981) == Local_4.f_536)
	{
		if (IS_OBJECT_VALID(Local_4.f_1824))
		{
			if (GET_LAST_HIT_FLAGS(bLocal_981) == 4)
			{
				Function_247("R4_Horse_attacked");
				bLocal_498 = true;
			}
			else if (GET_LAST_HIT_FLAGS(bLocal_981) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_981)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(bLocal_981));
				}
				TASK_CLEAR(bLocal_981);
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_STAND_STILL(false, 0,25f, 0, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, 0,2f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_981, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
				TASK_PRIORITY_SET(bLocal_981, true);
				CLEAR_LAST_HIT(bLocal_981);
			}
		}
	}
	if (SQUAD_GET(bLocal_982) == Local_4.f_536)
	{
		if (IS_OBJECT_VALID(Local_4.f_1828))
		{
			if (GET_LAST_HIT_FLAGS(bLocal_982) == 4)
			{
				Function_247("R4_Horse_attacked");
				bLocal_498 = true;
			}
			else if (GET_LAST_HIT_FLAGS(bLocal_982) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_982)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(bLocal_982));
				}
				TASK_CLEAR(bLocal_982);
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_STAND_STILL(false, 0,25f, 0, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, 0,2f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_982, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
				TASK_PRIORITY_SET(bLocal_982, true);
				CLEAR_LAST_HIT(bLocal_982);
			}
		}
	}
	if (SQUAD_GET(bLocal_983) == Local_4.f_536)
	{
		if (IS_OBJECT_VALID(Local_4.f_1832))
		{
			if (GET_LAST_HIT_FLAGS(bLocal_983) == 4)
			{
				Function_247("R4_Horse_attacked");
				bLocal_498 = true;
			}
			else if (GET_LAST_HIT_FLAGS(bLocal_983) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_983)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(bLocal_983));
				}
				TASK_CLEAR(bLocal_983);
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_STAND_STILL(false, 0,25f, 0, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, 0,2f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_983, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
				TASK_PRIORITY_SET(bLocal_983, true);
				CLEAR_LAST_HIT(bLocal_983);
			}
		}
	}
	return;
}

bool Function_454() //Position: 0x1B10A / 110858
{
	if (bLocal_1059)
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[14]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[19])) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[20]))
		{
			if (Function_219(&iLocal_1109))
			{
				Function_216(&iLocal_1109);
			}
			bLocal_1059 = false;
			return 1;
		}
		if (IS_BLIP_VALID(bLocal_991))
		{
			REMOVE_BLIP(bLocal_991);
		}
		Function_426("Ranch04_barnDoorReturn");
		if (!Function_219(&iLocal_1109))
		{
			Function_217(&iLocal_1109);
		}
		else if (Function_296(&iLocal_1109) < 3.0f)
		{
			Function_247("Ranch04_barnAbandonedS4");
			bLocal_498 = true;
		}
		return 0;
	}
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[15]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[16]))
	{
		bLocal_1059 = true;
		return 0;
	}
	return 1;
	return 0;
}

bool Function_455() //Position: 0x1B1FD / 111101
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = true;
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_536))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, bVar0);
		if (GET_TASK_STATUS(bVar2, 19) != 1)
		{
			bVar1 = false;
		}
		bVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	if (Function_296(&iLocal_1002) < 0,7f)
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_536))
		{
			bVar3 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_536, bVar0);
			if (IS_ACTOR_VALID(bVar3))
			{
				switch (bVar0)
				{
					case 0x00000000:
						if (Function_296(&iLocal_1002) < 0,25f)
						{
							if (!GET_TASK_STATUS(bVar3, 19) != 1)
							{
								TASK_USE_GRINGO(bVar3, GET_GRINGO_FROM_OBJECT(Local_4.f_1824), "UseCase1", 4294967295, 1);
								SNAP_ACTOR_TO_GRINGO(bVar3, Local_4.f_1824, "UseCase1", true, 0, 0);
								GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1824), "ButtSlap", 0);
								SET_ALLOW_RIDE_BY_PLAYER(bVar3, 0);
								DECOR_SET_BOOL(bVar3, "CanBeLasso", true);
								DECOR_SET_BOOL(bVar3, "BeLassoBounceOff", true);
								AI_SET_NAV_PATHFINDING_ENABLED(bVar3, false);
								AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bVar3, 0, 0);
								ANIMAL_ACTOR_SET_DOCILE(bVar3, 0);
								SET_ACTOR_FLY_FX(bVar3, 0);
								REMOVE_HORSE_ACCESSORY(bVar3, 3);
								bLocal_981 = bVar3;
								Function_217(&iLocal_1002);
							}
						}
						break;
					
					case 0x00000001:
						if (Function_296(&iLocal_1002) < 0,25f)
						{
							if (!GET_TASK_STATUS(bVar3, 19) != 1)
							{
								TASK_USE_GRINGO(bVar3, GET_GRINGO_FROM_OBJECT(Local_4.f_1828), "UseCase1", 4294967295, 1);
								SNAP_ACTOR_TO_GRINGO(bVar3, Local_4.f_1828, "UseCase1", true, 0, 0);
								GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1828), "ButtSlap", 0);
								SET_ALLOW_RIDE_BY_PLAYER(bVar3, 0);
								DECOR_SET_BOOL(bVar3, "CanBeLasso", true);
								DECOR_SET_BOOL(bVar3, "BeLassoBounceOff", true);
								AI_SET_NAV_PATHFINDING_ENABLED(bVar3, false);
								AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bVar3, 0, 0);
								ANIMAL_ACTOR_SET_DOCILE(bVar3, 0);
								SET_ACTOR_FLY_FX(bVar3, 0);
								REMOVE_HORSE_ACCESSORY(bVar3, 3);
								bLocal_982 = bVar3;
								Function_217(&iLocal_1002);
							}
						}
						break;
					
					case 0x00000002:
						if (Function_296(&iLocal_1002) < 0,25f)
						{
							if (!GET_TASK_STATUS(bVar3, 19) != 1)
							{
								TASK_USE_GRINGO(bVar3, GET_GRINGO_FROM_OBJECT(Local_4.f_1832), "UseCase1", 4294967295, 1);
								SNAP_ACTOR_TO_GRINGO(bVar3, Local_4.f_1832, "UseCase1", true, 0, 0);
								GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1832), "ButtSlap", 0);
								SET_ALLOW_RIDE_BY_PLAYER(bVar3, 0);
								DECOR_SET_BOOL(bVar3, "CanBeLasso", true);
								DECOR_SET_BOOL(bVar3, "BeLassoBounceOff", true);
								AI_SET_NAV_PATHFINDING_ENABLED(bVar3, false);
								AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bVar3, 0, 0);
								ANIMAL_ACTOR_SET_DOCILE(bVar3, 0);
								SET_ACTOR_FLY_FX(bVar3, 0);
								REMOVE_HORSE_ACCESSORY(bVar3, 3);
								bLocal_983 = bVar3;
								Function_217(&iLocal_1002);
							}
						}
						break;
					}
			}
			bVar0++;
		}
	}
	return 0;
}

void Function_456() //Position: 0x1B4F4 / 111860
{
	Function_253(bLocal_488);
	Function_460(StackVal, StackVal, Function_253(bLocal_488), bLocal_488, Global_30628[2], Function_256(bLocal_488), 0);
	MEMORY_ALLOW_SHOOTING(bLocal_976, false);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bLocal_976, 0, 0);
	if (IS_OBJECT_VALID(Local_4.f_1852))
	{
		DESTROY_OBJECT(Local_4.f_1852);
	}
	Function_348(&iLocal_1183, 57, 0, 4294967295, 4294967295);
	TASK_STAND_STILL(bLocal_976, -1.0f, 0, 0);
	SNAP_ACTOR_TO_GRINGO(bLocal_976, Local_4.f_1856, "UseCase1", true, 0, 0);
	Function_397();
	Function_459();
	Function_458();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
	SET_DUST_LEVEL_MODIFIER(4294967294);
	TASK_PRIORITY_SET(bLocal_976, true);
	Function_163(114699);
	Function_185(1, 1, 0);
	Function_457(bLocal_488);
	return;
}

void Function_457(int iParam0) //Position: 0x1B59B / 112027
{
	strcpy(&Local_835[010] + 4, "barn01", 16);
	strcpy(&Local_835[110] + 4, "barn01", 16);
	strcpy(&Local_835[210] + 4, "barn01", 16);
	strcpy(&Local_835[310] + 4, "barn01", 16);
	strcpy(&Local_835[410] + 4, "barn01props", 16);
	strcpy(&Local_835[510] + 4, "barn01props", 16);
	strcpy(&Local_835[610] + 4, "barn02", 16);
	strcpy(&Local_835[710] + 4, "barn02", 16);
	strcpy(&Local_835[810] + 4, "barn02", 16);
	strcpy(&Local_835[910] + 4, "barn02", 16);
	strcpy(&Local_835[1210] + 4, "stable01", 16);
	strcpy(&Local_835[1310] + 4, "stable01", 16);
	Local_835[010].f_20 = 1;
	Local_835[110].f_20 = 2;
	Local_835[210].f_20 = 3;
	Local_835[310].f_20 = 4;
	Local_835[410].f_20 = 5;
	Local_835[510].f_20 = 6;
	Local_835[610].f_20 = 7;
	Local_835[710].f_20 = 8;
	Local_835[810].f_20 = 9;
	Local_835[910].f_20 = 10;
	Local_835[1210].f_20 = 1;
	Local_835[1310].f_20 = 2;
	Local_835[010].f_32 = 0;
	Local_835[110].f_32 = 0;
	Local_835[210].f_32 = 0;
	Local_835[310].f_32 = 0;
	Local_835[410].f_32 = 0;
	Local_835[510].f_32 = 0;
	Local_835[610].f_32 = 1;
	Local_835[710].f_32 = 0;
	Local_835[810].f_32 = 0;
	Local_835[910].f_32 = 0;
	Local_835[1210].f_32 = 0;
	Local_835[1310].f_32 = 0;
	switch (iParam0)
	{
		case 0x00000000:
			Local_835[010].f_24 = 0;
			Local_835[110].f_24 = 0;
			Local_835[210].f_24 = 0;
			Local_835[310].f_24 = 0;
			Local_835[410].f_24 = 0;
			Local_835[510].f_24 = 0;
			Local_835[610].f_24 = 0;
			Local_835[710].f_24 = 0;
			Local_835[810].f_24 = 0;
			Local_835[910].f_24 = 0;
			Local_835[1210].f_24 = 0;
			Local_835[1310].f_24 = 0;
			Local_835[010].f_28 = 0;
			Local_835[110].f_28 = 0;
			Local_835[210].f_28 = 0;
			Local_835[310].f_28 = 0;
			Local_835[410].f_28 = 0;
			Local_835[510].f_28 = 0;
			Local_835[610].f_28 = 0;
			Local_835[710].f_28 = 0;
			Local_835[810].f_28 = 0;
			Local_835[910].f_28 = 0;
			Local_835[1210].f_28 = 0;
			Local_835[1310].f_28 = 0;
			Local_835[010].f_36 = 1;
			Local_835[110].f_36 = 1;
			Local_835[210].f_36 = 1;
			Local_835[310].f_36 = 1;
			Local_835[410].f_36 = 1;
			Local_835[510].f_36 = 1;
			Local_835[610].f_36 = 0;
			Local_835[710].f_36 = 0;
			Local_835[810].f_36 = 0;
			Local_835[910].f_36 = 0;
			Local_835[1210].f_36 = 0;
			Local_835[1310].f_36 = 0;
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			Local_835[010].f_24 = 0;
			Local_835[110].f_24 = 0;
			Local_835[210].f_24 = 0;
			Local_835[310].f_24 = 0;
			Local_835[410].f_24 = 0;
			Local_835[510].f_24 = 0;
			Local_835[610].f_24 = 1;
			Local_835[710].f_24 = 1;
			Local_835[810].f_24 = 1;
			Local_835[910].f_24 = 1;
			Local_835[1210].f_24 = 0;
			Local_835[1310].f_24 = 0;
			Local_835[010].f_28 = 1;
			Local_835[110].f_28 = 1;
			Local_835[210].f_28 = 1;
			Local_835[310].f_28 = 1;
			Local_835[410].f_28 = 1;
			Local_835[510].f_28 = 1;
			Local_835[610].f_28 = 0;
			Local_835[710].f_28 = 0;
			Local_835[810].f_28 = 0;
			Local_835[910].f_28 = 0;
			Local_835[1210].f_28 = 0;
			Local_835[1310].f_28 = 0;
			Local_835[010].f_36 = 0;
			Local_835[110].f_36 = 0;
			Local_835[210].f_36 = 0;
			Local_835[310].f_36 = 0;
			Local_835[410].f_36 = 0;
			Local_835[510].f_36 = 0;
			Local_835[610].f_36 = 1;
			Local_835[710].f_36 = 1;
			Local_835[810].f_36 = 1;
			Local_835[910].f_36 = 1;
			Local_835[1210].f_36 = 1;
			Local_835[1310].f_36 = 1;
			break;
	}
	return;
}

void Function_458() //Position: 0x1BA3D / 113213
{
	if (!IS_OBJECT_VALID(bLocal_1069))
	{
		bLocal_1069 = CREATE_GRINGO_IN_LAYOUT(Local_4, "pull_pitchfork", "pull_pitchfork", vLocal_1133, vLocal_1136);
	}
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1069), false);
	bLocal_1179 = LOCATE_PHYSINST_OF_TYPE(vLocal_1133, 5.0f, "p_gen_pitchForkBreak01x", 1);
	SET_PROP_HEALTH(bLocal_1179, 1.0f);
	return;
}

void Function_459() //Position: 0x1BAB9 / 113337
{
	if (IS_OBJECT_VALID(Local_4.f_1836))
	{
		GET_OBJECT_POSITION(Local_4.f_1836, &vLocal_1133);
		GET_OBJECT_ORIENTATION(Local_4.f_1836, &vLocal_1136);
		DESTROY_OBJECT(Local_4.f_1836);
	}
	return;
}

void Function_460(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x1BAEA / 113386
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

void Function_461() //Position: 0x1BB87 / 113543
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

void Function_462(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BBC8 / 113608
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
	if (Function_82(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_463() //Position: 0x1BD2E / 113966
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_464(bool bParam0) //Position: 0x1BD52 / 114002
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

bool Function_465() //Position: 0x1BD81 / 114049
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_466(int iParam0) //Position: 0x1BD9C / 114076
{
	if (!Function_82(iParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_131(&(Global_29008[Global_29155[iParam010]]), 1024);
	}
	return;
}

bool Function_467() //Position: 0x1BDF7 / 114167
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	void fVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	
	if (iLocal_1026)
	{
		return 1;
	}
	bVar3 = true;
	bVar4 = false;
	if (!bLocal_1022)
	{
		bLocal_1022 = true;
		bVar3 = true;
		if (bVar3)
		{
			GET_OBJECT_POSITION((*&Local_4 + 1500)[10], &vVar0);
			bLocal_992 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "BarnFire", "script_barnfire_all", vVar0);
			UNK_0x6745191B(bLocal_992, 0.0f, 0.0f, 0.0f);
			bLocal_994 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "WindowFire", "script_Hennigans_BarnWindows", -835.0f, 97.0f, 2460.0f);
			UNK_0x6745191B(bLocal_994, 0.0f, 0.0f, 0.0f);
			bLocal_993 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_508, "Millfire", "script_Hennigans_Windmill", -835.0f, 97.0f, 2460.0f);
			UNK_0x6745191B(bLocal_993, 0.0f, 0.0f, 0.0f);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 672)[4], 15);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 672)[4]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 672)[4]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 672)[4]);
			bLocal_1022 = true;
		}
	}
	if (!bLocal_1023)
	{
		bLocal_1023 = true;
		bVar3 = true;
		if (bVar3)
		{
			bLocal_1023 = true;
		}
	}
	if (!Function_353(Global_30668[0]))
	{
		return 0;
	}
	if (!IS_ACTORSET_VALID(bLocal_828))
	{
		Function_478();
		bVar4 = false;
		bLocal_828 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "m_SavedHorsesSet", 0);
	}
	if (!bLocal_1024)
	{
		if (bLocal_1022)
		{
			if (bLocal_1023)
			{
				if (Function_469())
				{
					bLocal_1024 = true;
				}
			}
		}
	}
	if (!bLocal_1025)
	{
		if (bLocal_1024)
		{
			bLocal_1025 = true;
			bVar4 = false;
			iVar9 = GET_ACTORSET_SIZE(bLocal_829);
			while (bVar4 <= iVar9)
			{
				if (!iLocal_1034[bVar4])
				{
					bLocal_1025 = false;
					bVar5 = GET_ACTOR_FROM_ACTORSET(bLocal_829, bVar4);
					if (IS_ACTOR_VALID(bVar5))
					{
						if (!iLocal_1027[bVar4])
						{
							Function_415(bVar5);
							iLocal_1034[bVar4] = 1;
						}
						else
						{
							fVar6 = GET_CURRENT_GRINGO(bVar5);
							if (!IS_GRINGO_VALID(fVar6))
							{
								iLocal_1027[bVar4] = 0;
							}
						}
					}
					else
					{
						LOG_ERROR("Invalid actor found in m_TownfolkSet! Oh shit!");
					}
				}
				bVar4++;
			}
		}
	}
	if (!iLocal_1026)
	{
		if (bLocal_1025)
		{
			if (IS_ACTORSET_VALID(bLocal_828))
			{
				bVar7 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), bLocal_508, 4294967295, 0);
				LOCATE_GRINGOS_IN_VOLUME((*&Local_4 + 672)[10], bVar7, 0, 1);
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1824, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1824, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1828, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1828, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1832, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1832, bVar7);
				}
				if (IS_OBJECT_VALID(Local_4.f_1836))
				{
					if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1836, bVar7))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1836, bVar7);
					}
				}
				if (IS_OBJECT_VALID(bLocal_1069))
				{
					if (IS_OBJECT_IN_OBJECTSET(bLocal_1069, bVar7))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(bLocal_1069, bVar7);
					}
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1852, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1852, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1856, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1856, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1860, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1860, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1864, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1864, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1868, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1868, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1872, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1872, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1876, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1876, bVar7);
				}
				if (IS_OBJECT_IN_OBJECTSET(Local_4.f_1880, bVar7))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(Local_4.f_1880, bVar7);
				}
				bVar4 = false;
				while (bVar4 <= GET_OBJECTSET_SIZE(bVar7))
				{
					bVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, bVar7);
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bVar8), false);
					bVar4++;
				}
				Function_468(bVar7);
				DESTROY_OBJECTSET(bVar7);
				if (Function_455())
				{
					Function_397();
					iLocal_1026 = 1;
				}
			}
		}
	}
	return 0;
}

void Function_468(bool bParam0) //Position: 0x1C206 / 115206
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

bool Function_469() //Position: 0x1C24B / 115275
{
	bool bVar0;
	
	bVar0 = true;
	if (!IS_ACTORSET_VALID(Local_4.f_632))
	{
		Function_477();
	}
	if (IS_ACTOR_VALID((*&Local_4 + 572)[02]))
	{
		if (!IS_ACTOR_VALID(bLocal_1158))
		{
			bLocal_1158 = (*&Local_4 + 572)[02];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(bLocal_1158, 1);
			CLEAR_LAST_HIT(bLocal_1158);
			MEMORY_CLEAR_ALL(bLocal_1158);
			Function_238(bLocal_1158, (*&Local_4 + 972)[0], 1, 1, 1);
		}
	}
	else
	{
		(*&Local_4 + 572)[02] = Function_473(&Global_6563, &Global_7581, 0, -854,1386f, 90,36545f, 2448.0f, 0.0f, 83,87775f, 0.0f, 1);
		bVar0 = false;
	}
	if (IS_ACTOR_VALID((*&Local_4 + 572)[12]))
	{
		if (!IS_ACTOR_VALID(bLocal_1159))
		{
			bLocal_1159 = (*&Local_4 + 572)[12];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(bLocal_1159, 1);
			CLEAR_LAST_HIT(bLocal_1159);
			MEMORY_CLEAR_ALL(bLocal_1159);
			Function_238(bLocal_1159, (*&Local_4 + 972)[1], 1, 1, 1);
		}
	}
	else
	{
		(*&Local_4 + 572)[12] = Function_473(&Global_6563, &Global_7581, 16, -849,6518f, 90,36542f, 2441,652f, 0.0f, 83,87775f, 0.0f, 1);
		bVar0 = false;
	}
	if (IS_ACTOR_VALID((*&Local_4 + 572)[22]))
	{
		if (!IS_ACTOR_VALID(bLocal_1160))
		{
			bLocal_1160 = (*&Local_4 + 572)[22];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(bLocal_1160, 1);
			CLEAR_LAST_HIT(bLocal_1160);
			MEMORY_CLEAR_ALL(bLocal_1160);
			Function_238(bLocal_1160, (*&Local_4 + 972)[2], 1, 1, 1);
		}
	}
	else
	{
		(*&Local_4 + 572)[22] = Function_473(&Global_6563, &Global_7581, 2, -850,9159f, 90,36543f, 2440.0f, 0.0f, 83,87775f, 0.0f, 1);
		bVar0 = false;
	}
	if (!IS_ACTOR_VALID(bLocal_1161))
	{
		bLocal_1161 = (*&Local_4 + 572)[32];
		SET_ACTOR_STREAMING_HIGH_PRIORITY(bLocal_1161, 1);
		CLEAR_LAST_HIT(bLocal_1161);
		MEMORY_CLEAR_ALL(bLocal_1161);
		Function_238(bLocal_1161, (*&Local_4 + 972)[3], 1, 1, 1);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 572)[42]))
	{
		if (!IS_ACTOR_VALID(bLocal_1162))
		{
			bLocal_1162 = (*&Local_4 + 572)[42];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(bLocal_1162, 1);
			CLEAR_LAST_HIT(bLocal_1162);
			MEMORY_CLEAR_ALL(bLocal_1162);
			Function_238(bLocal_1162, (*&Local_4 + 972)[4], 1, 1, 1);
		}
	}
	else
	{
		(*&Local_4 + 572)[42] = Function_473(&Global_6563, &Global_7581, 5, -848.0f, 90,35291f, 2437,34f, 0.0f, 83,87775f, 0.0f, 1);
		bVar0 = false;
	}
	if (!IS_ACTOR_VALID(bLocal_1163))
	{
		bLocal_1163 = (*&Local_4 + 572)[52];
		SET_ACTOR_STREAMING_HIGH_PRIORITY(bLocal_1163, 1);
		CLEAR_LAST_HIT(bLocal_1163);
		MEMORY_CLEAR_ALL(bLocal_1163);
		Function_238(bLocal_1163, (*&Local_4 + 972)[5], 1, 1, 1);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 572)[62]))
	{
		if (!IS_ACTOR_VALID(bLocal_1166))
		{
			bLocal_1166 = (*&Local_4 + 572)[62];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(bLocal_1166, 1);
			CLEAR_LAST_HIT(bLocal_1166);
			MEMORY_CLEAR_ALL(bLocal_1166);
			Function_238(bLocal_1166, (*&Local_4 + 972)[8], 1, 1, 1);
		}
	}
	else
	{
		(*&Local_4 + 572)[62] = Function_473(&Global_6563, &Global_7581, 24, -851,8301f, 90,35294f, 2434,025f, 0.0f, 83,87775f, 0.0f, 1);
		bVar0 = false;
	}
	if (bVar0)
	{
		bLocal_1125 = false;
		while (bLocal_1125 <= GET_ACTORSET_SIZE(Local_4.f_632))
		{
			bLocal_1123 = GET_ACTOR_FROM_ACTORSET(Local_4.f_632, bLocal_1125);
			if (IS_ACTOR_VALID(bLocal_1123))
			{
				MAKE_ACTOR_READY_FOR_ACTION(bLocal_1123, 1);
				ADD_ACTORSET_MEMBER(bLocal_829, bLocal_1123);
				Function_368(&bLocal_829);
				TASK_STAND_STILL(bLocal_1123, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_1123, 2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_1123, true);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_1123, 64, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_1123, 65, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_1123, 66, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_1123, 67, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_1123, 68, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_1123, 46, 0);
				SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bLocal_1123, 0);
			}
			bLocal_1125++;
		}
		if (!IS_ACTORSET_VALID(bLocal_830))
		{
			bLocal_830 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "asWeepingTownies", 0);
		}
		if (IS_ACTOR_VALID(bLocal_1166))
		{
			if (!IS_ACTOR_IN_ACTORSET(bLocal_830, bLocal_1166))
			{
				ADD_ACTORSET_MEMBER(bLocal_830, bLocal_1166);
				REMOVE_ACTORSET_MEMBER(bLocal_829, bLocal_1166);
				Function_368(&bLocal_829);
				Function_368(&bLocal_830);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_1166, 0);
				SET_ANIM_SET_FOR_ACTOR(bLocal_1166, "stand_wringhands", 0);
				TASK_CLEAR(bLocal_1166);
				TASK_STAND_STILL(bLocal_1166, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_1166, 2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_1166, true);
				Function_238(bLocal_1166, (*&Local_4 + 1500)[27], 0, 1, 1);
				Function_470(bLocal_1166, (*&Local_4 + 1500)[25]);
			}
		}
		return 1;
	}
	return 0;
}

void Function_470(var uParam0, bool bParam1) //Position: 0x1C68D / 116365
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	Function_471(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_471(bool bParam0, vector3 vParam1) //Position: 0x1C6A4 / 116388
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_472(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_472(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_472(bool bParam0, vector3 vParam1) //Position: 0x1C6DC / 116444
{
	vector3 vVar0;
	
	Function_344(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_344(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

var Function_473(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x1C75F / 116575
{
	var uVar0;
	bool bVar1;
	
	uVar0 = iParam2;
	bVar1 = Function_474(uParam0, uParam1, uVar0, iParam9, 0, 1);
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

var Function_474(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x1C846 / 116806
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_174(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_174(uParam0[iVar02], 2))
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
			if (!Function_174(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_171(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_476(StackVal, StackVal, StackVal, Global_6289, Function_54(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_174(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_171(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_171(uParam0[iVar02], 1);
	Function_475(StackVal, 1);
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

int Function_475(bool bParam0, bool bParam1) //Position: 0x1C9DC / 117212
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

var Function_476(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x1CA7E / 117374
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

void Function_477() //Position: 0x1CB97 / 117655
{
	Local_4.f_632 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "AllTownsfolkset", 0);
	(*&Local_4 + 572)[02] = Function_473(&Global_6563, &Global_7581, 0, -853,573f, 90,35295f, 2432,958f, 0.0f, 83,87775f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_632, (*&Local_4 + 572)[02]);
	(*&Local_4 + 572)[12] = Function_473(&Global_6563, &Global_7581, 16, -849,6518f, 90,36542f, 2441,652f, 0.0f, 83,87775f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_632, (*&Local_4 + 572)[12]);
	(*&Local_4 + 572)[22] = Function_473(&Global_6563, &Global_7581, 2, -850,9159f, 90,36543f, 2440.0f, 0.0f, 83,87775f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_632, (*&Local_4 + 572)[22]);
	(*&Local_4 + 572)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "aTownie4act", 171, -846,9167f, 90,3654f, 2440.0f, 0.0f, 83,87775f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_632, (*&Local_4 + 572)[32]);
	(*&Local_4 + 572)[42] = Function_473(&Global_6563, &Global_7581, 5, -848.0f, 90,35291f, 2437,34f, 0.0f, 83,87775f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_632, (*&Local_4 + 572)[42]);
	(*&Local_4 + 572)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "aTownie6act", 288, -852.0f, 90,35294f, 2437,708f, 0.0f, 83,87775f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_632, (*&Local_4 + 572)[52]);
	(*&Local_4 + 572)[62] = Function_473(&Global_6563, &Global_7581, 24, -851,8301f, 90,35294f, 2434,025f, 0.0f, 83,87775f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_632, (*&Local_4 + 572)[62]);
	return;
}

void Function_478() //Position: 0x1CD67 / 118119
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_536 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RescueHorses"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RescueHorse01", 976, -850,397f, 90,35294f, 2459,996f, 0.0f, -74,89159f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_536);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RescueHorse02", 983, -847,4722f, 90,35297f, 2464,262f, 0.0f, -24,21283f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_536);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RescueHorse03", 981, -841,4352f, 90,35291f, 2466,445f, 0.0f, 42,38236f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_536);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	return;
}

bool Function_479() //Position: 0x1CE69 / 118377
{
	Function_327(&Local_4 + 380, 983, 2, 0);
	Function_327(&Local_4 + 380, 171, 2, 0);
	Function_327(&Local_4 + 380, 288, 2, 0);
	if (Function_320(&Local_4 + 380))
	{
		return 1;
	}
	return 0;
}

void Function_480() //Position: 0x1CEA6 / 118438
{
	Function_238(Global_34573, (*&Local_4 + 1500)[5], 1, 1, 1);
	Function_238(bLocal_976, (*&Local_4 + 1500)[6], 1, 1, 1);
	Function_314("MINI_GAMES_AND_JOBS\\RANCH04");
	DISABLE_CHILD_SECTOR("hen_barn01x");
	DISABLE_CHILD_SECTOR("hen_barn01props01x");
	ENABLE_CHILD_SECTOR("hen_barn02x");
	ENABLE_CHILD_SECTOR("hen_barn02props01x");
	ENABLE_CHILD_SECTOR("hen_barn03props01x");
	ENABLE_CHILD_SECTOR("hen_beamsEntity01x");
	return;
}

void Function_481() //Position: 0x1CF72 / 118642
{
	if (!Function_633())
	{
		return;
	}
	if (!iLocal_1175)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nledgeplay"))
		{
			ENABLE_USE_CONTEXTS(0);
			iLocal_1175 = 1;
		}
	}
	else if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nledgeplay"))
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_1175 = 0;
	}
	if (IS_ACTOR_VALID(bLocal_1165))
	{
		REMOVE_ACTORSET_MEMBER(bLocal_830, bLocal_1165);
		ADD_ACTORSET_MEMBER(bLocal_829, bLocal_1165);
		Function_368(&bLocal_830);
		Function_368(&bLocal_829);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_1165, 0);
		Function_415(bLocal_1165);
		bLocal_1165 = "";
	}
	if (IS_ACTOR_VALID(bLocal_1164))
	{
		REMOVE_ACTORSET_MEMBER(bLocal_830, bLocal_1164);
		ADD_ACTORSET_MEMBER(bLocal_829, bLocal_1164);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_1164, 0);
		Function_415(bLocal_1164);
		bLocal_1164 = "";
	}
	Function_494();
	Function_493();
	Function_492();
	Function_490();
	Function_486();
	Function_485();
	Function_482();
	Function_215(1);
	return;
}

int Function_482() //Position: 0x1D04A / 118858
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_353(Global_30668[0]))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_835[iVar010].f_36)
		{
			if (!IS_DOOR_VALID(Local_835[iVar010]))
			{
				Local_835[iVar010] = Function_483("hennigansRanch", &Local_835[iVar010] + 4, Local_835[iVar010].f_20);
			}
			if (IS_DOOR_VALID(Local_835[iVar010]))
			{
				if (Local_835[iVar010].f_24)
				{
					if (!IS_DOOR_LOCKED(Local_835[iVar010]))
					{
						Function_121(Local_835[iVar010], 1);
					}
				}
				else
				{
					if (IS_DOOR_LOCKED(Local_835[iVar010]))
					{
						Function_155(Local_835[iVar010], 1);
					}
					if (Local_835[iVar010].f_28)
					{
						if (!IS_DOOR_OPENED(Local_835[iVar010]))
						{
							if (!IS_DOOR_OPENING(Local_835[iVar010]))
							{
								OPEN_DOOR_DIRECTION(Local_835[iVar010], Local_835[iVar010].f_32);
								SET_DOOR_CURRENT_SPEED(Local_835[iVar010], 1,5f, 0.0f);
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	if (!iLocal_1169)
	{
		if (!IS_DOOR_VALID(bLocal_1148))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1500)[18], &vLocal_1127);
			bLocal_1148 = FIND_NEAREST_DOOR(&vLocal_1127, 4.0f);
		}
		else if (!IS_DOOR_OPENING(bLocal_1148))
		{
			if (!IS_DOOR_OPENED(bLocal_1148))
			{
				Function_155(bLocal_1148, 1);
				OPEN_DOOR_DIRECTION(bLocal_1148, true);
				SET_DOOR_AUTO_CLOSE(bLocal_1148, 0);
			}
		}
	}
	if (!iLocal_1170)
	{
		if (!IS_DOOR_VALID(bLocal_1149))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1500)[19], &vLocal_1127);
			bLocal_1149 = FIND_NEAREST_DOOR(&vLocal_1127, 4.0f);
		}
		else if (!IS_DOOR_OPENING(bLocal_1149))
		{
			if (!IS_DOOR_OPENED(bLocal_1149))
			{
				Function_155(bLocal_1149, 1);
				OPEN_DOOR_DIRECTION(bLocal_1149, false);
				SET_DOOR_AUTO_CLOSE(bLocal_1149, 0);
			}
		}
	}
	return iVar1;
}

int Function_483(var uParam0, var uParam1, int iParam2) //Position: 0x1D20A / 119306
{
	return Function_484(Global_29006, uParam0, uParam1, iParam2);
}

int Function_484(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x1D21C / 119324
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_82(iParam0))
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

void Function_485() //Position: 0x1D2B8 / 119480
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ITERATOR_VALID(bLocal_832))
	{
		bVar0 = FIND_NAMED_LAYOUT("artgringolayout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
		}
		ITERATE_IN_LAYOUT(bLocal_832, bVar0);
		ITERATE_IN_VOLUME(bLocal_832, (*&Local_4 + 672)[0]);
		ITERATE_ON_PARTIAL_MODEL_NAME(bLocal_832, "bucket");
		bVar1 = START_OBJECT_ITERATOR(bLocal_832);
		while (IS_OBJECT_VALID(bVar1))
		{
			DESTROY_OBJECT(bVar1);
			bVar1 = OBJECT_ITERATOR_NEXT(bLocal_832);
		}
	}
	return;
}

void Function_486() //Position: 0x1D32F / 119599
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	if (HUD_IS_FADING() || HUD_IS_FADED())
	{
		return;
	}
	if (bLocal_1025)
	{
		if (GET_ACTORSET_SIZE(bLocal_829) >= 0)
		{
			bVar1 = false;
			while (bVar1 <= GET_ACTORSET_SIZE(bLocal_829))
			{
				bVar6 = GET_ACTOR_FROM_ACTORSET(bLocal_829, bVar1);
				if (IS_ACTOR_VALID(bVar6))
				{
					if (IS_ACTOR_ALIVE(bVar6))
					{
						bVar5 = Function_227(bVar6);
						if (IS_OBJECT_VALID(bVar5))
						{
							if (!ACTOR_HAS_ANIM_SET(bVar6, "carry_bucket"))
							{
								if (((!IS_ACTION_NODE_PLAYING_PARTIAL(bVar6, "recovery") && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar6, "bumped")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar6, "bump")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar6, "ragdollrecovery"))
								{
									RESET_ANIM_SET_FOR_ACTOR(bVar6, 1);
									SET_ANIM_SET_FOR_ACTOR(bVar6, "carry_bucket", 0);
								}
							}
							if (IS_ACTOR_IN_VOLUME(bVar6, (*&Local_4 + 672)[7]))
							{
								if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bVar6, 1065353216, 1117126656, 1, 1, 0))
								{
									GET_OBJECT_POSITION((*&Local_4 + 972)[5], &vLocal_1127);
									if (!WOULD_ACTOR_BE_VISIBLE(Function_489(bVar6), &vLocal_1127, 3212836864))
									{
										Function_238(bVar6, (*&Local_4 + 972)[5], 0, 1, 1);
									}
								}
							}
							if (GET_TASK_STATUS(bVar6, 0) != 1)
							{
								bVar7 = RAND_INT_RANGE(false, 6);
								GET_OBJECT_RELATIVE_POSITION((*&Local_4 + 1340)[bVar7], 0.0f, 0.0f, -10.0f, &vLocal_1127);
								bVar0 = TASK_SEQUENCE_OPEN();
								if (IS_ACTOR_RIDING(bVar6))
								{
									TASK_DISMOUNT(false, 1);
								}
								TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "carry_bucket/Get_Water_No_Interrupt", &Local_4 + 1044[iLocal_10206], -1.0f, 2, 0,2f);
								TASK_GO_NEAR_COORD(false, &Local_4 + 1168[bVar76], 1.0f, 4);
								TASK_FACE_COORD(false, &vLocal_1127, 0);
								TASK_ACTION_PERFORM(false, "carry_bucket/Toss_Water");
								TASK_SEQUENCE_CLOSE();
								TASK_CLEAR(bVar6);
								TASK_SEQUENCE_PERFORM(bVar6, bVar0);
								TASK_SEQUENCE_RELEASE(bVar0, 1);
								iLocal_1020++;
								if (iLocal_1020 > 4)
								{
									iLocal_1020 = 0;
								}
							}
						}
						else
						{
							Function_415(bVar6);
						}
					}
				}
				bVar1++;
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_1166))
	{
		if (GET_TASK_STATUS(bLocal_1166, 0) == 1)
		{
			if (GET_TASK_STATUS(bLocal_1166, 6) == 1)
			{
				TASK_STAND_STILL(bLocal_1166, -1.0f, 0, 0);
				if (!ACTOR_HAS_ANIM_SET(bLocal_1166, "stand_wringhands"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_1166, 0);
					SET_ANIM_SET_FOR_ACTOR(bLocal_1166, "stand_wringhands", 0);
				}
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1166, "stand_wringhands/wringhands_pre");
			}
		}
		else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1166, "stand_wringhands"))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1500)[25], &vLocal_1127);
			bLocal_1125 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[27], 1, 0, 1);
			TASK_FACE_COORD(false, &vLocal_1127, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1166, bLocal_1125);
			TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
		}
	}
	if (IS_ACTOR_VALID(bLocal_985))
	{
		switch (iLocal_999)
		{
			case 0x00000000:
				if (!IS_ACTOR_VALID(bLocal_988))
				{
					if (!Function_488(&bLocal_985, &bLocal_988))
					{
						GET_OBJECT_POSITION((*&Local_4 + 1500)[15], &uVar2);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1500)[7], 3.0f, 3, 0, 1);
						TASK_FACE_COORD(false, &uVar2, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_985, bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				else if (IS_ACTOR_RIDING(bLocal_985))
				{
					if (GET_MOUNT(bLocal_985) == bLocal_988)
					{
						bLocal_1125 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_988, bLocal_1125);
						TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
						iLocal_999 = 1;
					}
					else
					{
						LOG_ERROR("Ranch hand got on the wrong horse!");
					}
				}
				else if ((IS_ACTOR_MOUNTED(bLocal_988) || !IS_ACTOR_IN_ACTORSET(bLocal_828, bLocal_988)) || IS_ACTOR_IN_VOLUME(bLocal_988, Local_4.f_824))
				{
					bLocal_988 = "";
					if (!Function_488(&bLocal_985, &bLocal_988))
					{
						GET_OBJECT_POSITION((*&Local_4 + 1500)[15], &uVar2);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1500)[7], 3.0f, 3, 0, 1);
						TASK_FACE_COORD(false, &uVar2, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_985, bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				break;
			
			case 0x00000001:
				if (!IS_ACTOR_RIDING(bLocal_985))
				{
					if (!iLocal_1171)
					{
						bLocal_1125 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[23], 4, 0, 1);
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_985, bLocal_1125);
						TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
						if (IS_ACTOR_VALID(bLocal_988))
						{
							SET_ALLOW_RIDE_BY_PLAYER(bLocal_988, 1);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_988);
							SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_988, (*&Local_4 + 672)[13], 1, true);
						}
						DECOR_SET_BOOL(bLocal_985, "bFacingDoor", false);
						iLocal_1171 = 1;
					}
					else if (iLocal_1169)
					{
						if (GET_TASK_STATUS(bLocal_985, 0) == 0)
						{
							ADD_ACTORSET_MEMBER(bLocal_829, bLocal_985);
							Function_368(&bLocal_829);
							Function_415(bLocal_985);
							bLocal_985 = "";
						}
					}
					else if (DECOR_GET_BOOL(bLocal_985, "bFacingDoor"))
					{
						if (GET_TASK_STATUS(bLocal_985, 6) == 1)
						{
							if (!Function_219(&iLocal_1100))
							{
								Function_217(&iLocal_1100);
							}
							else if (Function_296(&iLocal_1100) < 2.0f)
							{
								if (Function_487(Global_34573, (*&Local_4 + 1500)[18]) < 3.0f)
								{
									iLocal_1169 = 1;
									if (!IS_DOOR_VALID(bLocal_1148))
									{
										GET_OBJECT_POSITION((*&Local_4 + 1500)[18], &vLocal_1127);
										bLocal_1148 = FIND_NEAREST_DOOR(&vLocal_1127, 4.0f);
									}
									if (IS_DOOR_VALID(bLocal_1148))
									{
										if (!IS_DOOR_CLOSING(bLocal_1148))
										{
											if (!IS_DOOR_CLOSED(bLocal_1148))
											{
												CLOSE_DOOR(bLocal_1148, 3.0f);
												SET_DOOR_AUTO_CLOSE(bLocal_1148, 1);
											}
										}
									}
									SET_ACTION_NODE_FOR_ACTOR(bLocal_985, "default_character_Main/Melee/DoorKick/DoorKick_Wlk/DoorKickHnd");
									MEMORY_PREFER_WALKING(bLocal_985, true);
									bLocal_1125 = TASK_SEQUENCE_OPEN();
									TASK_STAND_STILL(false, 1.0f, 0, 0);
									TASK_GO_TO_COORD(false, &Local_4 + 1044[iLocal_10206], 4);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_985, bLocal_1125);
									TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
									Function_216(&iLocal_1100);
								}
							}
						}
					}
					else if (GET_TASK_STATUS(bLocal_985, 22) == 1)
					{
						if (iLocal_507 > 7)
						{
							bLocal_1125 = TASK_SEQUENCE_OPEN();
							TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[23], 4, 0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_985, bLocal_1125);
							TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
							DECOR_SET_BOOL(bLocal_985, "bFacingDoor", true);
						}
					}
				}
				break;
			}
	}
	if (IS_ACTOR_VALID(bLocal_986))
	{
		switch (iLocal_1000)
		{
			case 0x00000000:
				if (!IS_ACTOR_VALID(bLocal_989))
				{
					if (!Function_488(&bLocal_986, &bLocal_989))
					{
						GET_OBJECT_POSITION((*&Local_4 + 1500)[15], &uVar2);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1500)[7], 3.0f, 3, 0, 1);
						TASK_FACE_COORD(false, &uVar2, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_986, bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				else if (IS_ACTOR_RIDING(bLocal_986))
				{
					if (GET_MOUNT(bLocal_986) == bLocal_989)
					{
						bLocal_1125 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_989, bLocal_1125);
						TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
						iLocal_1000 = 1;
					}
					else
					{
						LOG_ERROR("Ranch hand got on the wrong horse!");
					}
				}
				else if ((IS_ACTOR_MOUNTED(bLocal_989) || !IS_ACTOR_IN_ACTORSET(bLocal_828, bLocal_989)) || IS_ACTOR_IN_VOLUME(bLocal_989, Local_4.f_824))
				{
					bLocal_989 = "";
					if (!Function_488(&bLocal_986, &bLocal_989))
					{
						GET_OBJECT_POSITION((*&Local_4 + 1500)[15], &uVar2);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1500)[7], 3.0f, 3, 0, 1);
						TASK_FACE_COORD(false, &uVar2, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_986, bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				break;
			
			case 0x00000001:
				if (!IS_ACTOR_RIDING(bLocal_986))
				{
					if (!iLocal_1172)
					{
						bLocal_1125 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[24], 4, 0, 1);
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_986, bLocal_1125);
						TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
						if (IS_ACTOR_VALID(bLocal_989))
						{
							SET_ALLOW_RIDE_BY_PLAYER(bLocal_989, 1);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_989);
							SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_989, (*&Local_4 + 672)[13], 1, true);
						}
						DECOR_SET_BOOL(bLocal_986, "bFacingDoor", false);
						iLocal_1172 = 1;
					}
					else if (iLocal_1170)
					{
						if (GET_TASK_STATUS(bLocal_986, 0) == 0)
						{
							ADD_ACTORSET_MEMBER(bLocal_829, bLocal_986);
							Function_368(&bLocal_829);
							Function_415(bLocal_986);
							bLocal_986 = "";
						}
					}
					else if (DECOR_GET_BOOL(bLocal_986, "bFacingDoor"))
					{
						if (GET_TASK_STATUS(bLocal_986, 6) == 1)
						{
							if (!Function_219(&iLocal_1100))
							{
								Function_217(&iLocal_1100);
							}
							else if (Function_296(&iLocal_1100) < 2.0f)
							{
								if (Function_487(Global_34573, (*&Local_4 + 1500)[19]) < 3.0f)
								{
									iLocal_1170 = 1;
									if (!IS_DOOR_VALID(bLocal_1149))
									{
										GET_OBJECT_POSITION((*&Local_4 + 1500)[19], &vLocal_1127);
										bLocal_1149 = FIND_NEAREST_DOOR(&vLocal_1127, 4.0f);
									}
									if (IS_DOOR_VALID(bLocal_1149))
									{
										if (!IS_DOOR_CLOSING(bLocal_1149))
										{
											if (!IS_DOOR_CLOSED(bLocal_1149))
											{
												CLOSE_DOOR(bLocal_1149, 3.0f);
												SET_DOOR_AUTO_CLOSE(bLocal_1149, 1);
											}
										}
									}
									SET_ACTION_NODE_FOR_ACTOR(bLocal_986, "default_character_Main/Melee/DoorKick/DoorKick_Wlk/DoorKickHnd");
									MEMORY_PREFER_WALKING(bLocal_986, true);
									bLocal_1125 = TASK_SEQUENCE_OPEN();
									TASK_STAND_STILL(false, 1.0f, 0, 0);
									TASK_GO_TO_COORD(false, &Local_4 + 1044[iLocal_10206], 4);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bLocal_986, bLocal_1125);
									TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
									Function_216(&iLocal_1100);
								}
							}
						}
					}
					else if (GET_TASK_STATUS(bLocal_986, 22) == 1)
					{
						if (iLocal_507 > 7)
						{
							bLocal_1125 = TASK_SEQUENCE_OPEN();
							TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[24], 4, 0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_986, bLocal_1125);
							TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
							DECOR_SET_BOOL(bLocal_986, "bFacingDoor", true);
						}
					}
				}
				break;
			}
	}
	return;
}

float Function_487(bool bParam0, bool bParam1) //Position: 0x1DF37 / 122679
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_396(bParam0);
			vVar0 = { StackVal, StackVal, Function_396(bParam0) };
			Function_395(bParam1);
			vVar3 = { StackVal, StackVal, Function_395(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

bool Function_488(bool bParam0, bool bParam1) //Position: 0x1DFD7 / 122839
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar7;
	bool bVar8;
	
	iVar0 = GET_ACTORSET_SIZE(bLocal_828);
	if (!IS_ACTOR_VALID(*bParam0))
	{
		return 0;
	}
	if (!GET_ACTORSET_SIZE(bLocal_828) != 0)
	{
		bVar7 = false;
		bVar7 = false;
		while (bVar7 <= iVar0)
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bLocal_828, bVar7);
			if (!IS_ACTOR_MOUNTED(bVar1))
			{
				if (!IS_ACTOR_IN_VOLUME(bVar1, Local_4.f_824))
				{
					bVar2 = true;
					if (bLocal_988 != bVar1 || bLocal_989 != bVar1)
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						bVar3 = true;
						bVar7 = 1000000;
					}
				}
				else
				{
					REMOVE_ACTORSET_MEMBER(bLocal_828, bVar1);
					Function_368(&bLocal_828);
				}
			}
			bVar7++;
		}
	}
	if (SQUAD_GET_SIZE(Local_4.f_536) != 0 && GET_ACTORSET_SIZE(bLocal_828) != 0)
	{
		bVar3 = false;
	}
	if (!bVar3)
	{
		bVar1 = "";
		return 0;
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		*bParam1 = bVar1;
		AI_SET_NAV_PATHFINDING_ENABLED(*bParam0, true);
		AI_SET_NAV_PATHFINDING_ENABLED(*bParam1, true);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(*bParam1);
		MEMORY_REPORT_POSITION_AUTO(*bParam0, *bParam1, true);
		MEMORY_IDENTIFY(*bParam0, *bParam1);
		MEMORY_CLEAR_RIDING_PREFERENCE(*bParam0);
		GET_OBJECT_POSITION((*&Local_4 + 1500)[15], &uVar4);
		bVar8 = TASK_SEQUENCE_OPEN();
		TASK_DISMOUNT(false, 1);
		TASK_VEHICLE_LEAVE(false);
		TASK_GO_NEAR_ACTOR(false, *bParam1, 3.0f, 3);
		TASK_MOUNT(false, *bParam1, 0, 1, 2, 2147483647);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1932, 2, 0, 0, 1, false);
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1500)[9], 5.0f, 4, 1, 1);
		TASK_DISMOUNT(false, 1);
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1500)[7], 3.0f, 4, 0, 1);
		TASK_FACE_COORD(false, &uVar4, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(*bParam0, bVar8);
		TASK_SEQUENCE_RELEASE(bVar8, 1);
	}
	return 1;
}

var Function_489(bool bParam0) //Position: 0x1E14B / 123211
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

void Function_490() //Position: 0x1E166 / 123238
{
	vector3 vVar0;
	
	if (!Function_219(&iLocal_1097))
	{
		bLocal_1120 = RAND_FLOAT_RANGE(0,5f, 3.0f);
		Function_217(&iLocal_1097);
	}
	else if (Function_296(&iLocal_1097) <= bLocal_1120)
	{
		GET_VOLUME_CENTER((*&Local_4 + 672)[0], &vVar0);
		vVar0.x = (vVar0.x + RAND_FLOAT_RANGE(-10.0f, 10.0f));
		vVar0.f_8 = (vVar0.z + RAND_FLOAT_RANGE(-10.0f, 10.0f));
		if (Function_491())
		{
			PLAY_SOUND_FROM_POSITION("RANCH04_BARN_CREAKING_01_MASTER", vVar0);
		}
		else
		{
			PLAY_SOUND_FROM_POSITION("RANCH04_BARN_CREAKING_02_MASTER", vVar0);
		}
		bLocal_1120 = RAND_FLOAT_RANGE(0,5f, 2.0f);
		Function_217(&iLocal_1097);
	}
	return;
}

bool Function_491() //Position: 0x1E23A / 123450
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_492() //Position: 0x1E24D / 123469
{
	if (IS_STRING_VALID(bLocal_1055))
	{
		if (Function_219(&iLocal_1008))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_216(&iLocal_1008);
				Function_433(bLocal_1055, 0x40f00000, 1, 2, 0, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void Function_493() //Position: 0x1E28B / 123531
{
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[0]))
	{
		if (uLocal_1154 == "")
		{
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_RANCH04_STAGE03_FIRE_ROLLOFF", &uLocal_1154);
			if (uLocal_1155 != "")
			{
				DYNAMICMIXER_DETRIGGERSTATE(uLocal_1155, 1);
			}
		}
	}
	else if (uLocal_1155 == "")
	{
		DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_RANCH04_STAGE4", &uLocal_1155);
		if (uLocal_1154 != "")
		{
			DYNAMICMIXER_DETRIGGERSTATE(uLocal_1154, 1);
		}
	}
	return;
}

void Function_494() //Position: 0x1E32C / 123692
{
	if (IS_OBJECTSET_VALID(bLocal_1181))
	{
		if (GET_OBJECTSET_SIZE(bLocal_1181) >= 0)
		{
			bLocal_1125 = false;
			while (bLocal_1125 <= GET_OBJECTSET_SIZE(bLocal_1181))
			{
				bLocal_1123 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_1125, bLocal_1181));
				if (!IS_ACTOR_MOUNTED(bLocal_1123))
				{
					if (!SQUAD_GET(bLocal_1123) != Local_4.f_536)
					{
						if (GET_TASK_STATUS(bLocal_1123, 6) == 1)
						{
							if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1123, "Startled_stn"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bLocal_1123, Function_410());
							}
						}
					}
				}
				bLocal_1125++;
			}
		}
	}
	return;
}

void Function_495() //Position: 0x1E3B7 / 123831
{
	float fVar0;
	bool bVar1;
	
	Function_519();
	switch (iLocal_489)
	{
		case 0x00000000:
			Function_355(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_254((*&Local_4 + 1500)[3]);
			bLocal_608 = Function_354(StackVal, StackVal, Function_254((*&Local_4 + 1500)[3]), 0, 1, 1);
			if (!Function_353(bLocal_608))
			{
				Function_352(&Local_509);
			}
			if (!iLocal_1042[1])
			{
				Function_242(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_518();
				Function_240(1);
			}
			else if (Function_517())
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_353(bLocal_608) || bLocal_608 != 4294967295)) && Function_517())
			{
				if (Function_353(Global_30668[0]))
				{
					Function_240(2);
				}
				else
				{
					Function_466(Global_30668[0]);
				}
			}
			break;
		
		case 0x00000002:
			Function_240(6);
			Function_516();
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				if (GET_TASK_STATUS(bLocal_976, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1888, 4, 0, 0, 1, false);
				}
				if (GET_TASK_STATUS(Global_34573, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(Global_34573, Local_4.f_1888, 4, 0, 0, 1, false);
				}
				Function_286(1.0f);
			}
			if (!HUD_IS_FADING())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_1021 = Function_515();
					TASK_CLEAR(Global_34573);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					if (GET_TASK_STATUS(bLocal_976, 43) != 1)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1888, 4, 0, 0, 1, false);
					}
					TASK_PRIORITY_SET(bLocal_976, true);
					SET_AUTO_CONVERSATION_LOOK(bLocal_976, 0);
					STOP_FORCE_LOOK_AT_COORD(bLocal_976);
					Function_514();
					Function_426("Ranch04_obj02b");
					Function_240(16);
				}
			}
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_490.f_16))
				{
					DESTROY_OBJECT(Local_490.f_16);
				}
				Local_490.f_16 = Function_510(Local_4, 0, 1, 1, 0);
				if (IS_OBJECT_VALID(Local_490.f_16))
				{
				}
				else
				{
					LOG_ERROR("Ranch04_DoorLock - Failed to create Ranch04_DoorLock_cutscene");
				}
				Function_509();
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_976, 2);
				if (IS_ACTOR_VALID(bLocal_979))
				{
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_979, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
				else if (IS_ACTOR_VALID(GET_MOUNT(bLocal_976)))
				{
					bLocal_979 = GET_MOUNT(bLocal_976);
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_979, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
				GET_OBJECT_POSITION((*&Local_4 + 1500)[15], &vLocal_1127);
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1888, 3, 0, 0, 1, false);
				TASK_DISMOUNT(false, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1856), "UseCase1", 4294967295, 4);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_976, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_976);
				Function_230(3, 0, 1);
				if (IS_BLIP_VALID(bLocal_1057))
				{
					REMOVE_BLIP(bLocal_1057);
				}
				bLocal_1057 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1500)[15], 330, 0f, 2, 0);
				Function_240(7);
			}
			break;
		
		case 0x00000007:
			if (Function_394(Global_34573, (*&Local_4 + 1500)[15], 35.0f))
			{
				Function_508();
				Function_348(&iLocal_1183, 45, 0, 4294967295, 4294967295);
			}
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (Function_296(&iLocal_1002) < 5.0f)
			{
				if (GET_CURRENT_GRINGO(bLocal_976) != GET_GRINGO_FROM_OBJECT(Local_4.f_1856) && ACTORS_IN_RANGE(Global_34573, bLocal_976, 30.0f))
				{
					GET_OBJECT_POSITION(Local_4.f_1856, &vLocal_1127);
					Function_340(StackVal, StackVal, bLocal_508, vLocal_1127, &Local_4 + 672[17], 0, 0, 0, 0, 1, 1);
					if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
					{
						bLocal_1123 = GET_VEHICLE(Global_34573);
						SET_VEHICLE_PASSENGERS_ALLOWED(bLocal_1123, 0);
						DESTROY_ACTOR(bLocal_1123);
					}
					Function_342(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 672)[17], 1, 1, 1, 1);
					PLAY_CUTSCENEOBJECT(Local_490.f_16, false, 0f, 0,5f, 0, 0, 0, 0, 0, 0);
					Function_348(&iLocal_1183, 45, 0, 4294967295, 4294967295);
					if (IS_ACTOR_RIDING(Global_34573))
					{
						ACTOR_DISMOUNT_NOW(Global_34573);
					}
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[17]))
					{
						Function_238(Global_34573, (*&Local_4 + 1500)[28], 1, 1, 1);
					}
					Function_238(bLocal_978, (*&Local_4 + 1500)[1], 1, 1, 1);
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_DISMOUNT(false, 1);
					TASK_FACE_ACTOR(false, bLocal_976, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
					if (IS_ACTOR_VALID(bLocal_979))
					{
						bVar1 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[1], 2, 0, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_979, bVar1);
						TASK_SEQUENCE_RELEASE(bVar1, 1);
					}
					bLocal_1176 = false;
					Function_505();
					Function_508();
					Function_240(26);
				}
			}
			break;
		
		case 0x0000001A:
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (fVar0 > 80.0f)
			{
				if (Function_296(&iLocal_1002) < 2.0f)
				{
					if (IS_BUTTON_PRESSED(0, 6, 1, 0))
					{
						bLocal_1176 = true;
					}
				}
				if (Function_296(&iLocal_1002) < 6.0f || bLocal_1176)
				{
					if (IS_VOLUME_VALID(bLocal_1153))
					{
						REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_1153);
						REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_1153);
					}
					TASK_CLEAR(Global_34573);
					Function_317(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(Local_490.f_16))
					{
						DESTROY_OBJECT(Local_490.f_16);
					}
					Function_230(3, 0, 1);
					if (IS_BLIP_VALID(bLocal_1057))
					{
						REMOVE_BLIP(bLocal_1057);
					}
					if (IS_OBJECT_VALID(bLocal_995))
					{
						DESTROY_OBJECT(bLocal_995);
					}
					bLocal_995 = CREATE_GATEWAY_IN_LAYOUT(bLocal_508, "LadderGateway", (*&Local_4 + 780)[4], Global_34573, 1, 1, 0, false, 1, 1);
					ADD_BLIP_FOR_OBJECT(bLocal_995, 330, 0f, 2, 0);
					REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_976);
					TASK_PRIORITY_SET(bLocal_976, true);
					Function_508();
					Function_348(&iLocal_1183, 45, 0, 4294967295, 4294967295);
					Function_258();
					Function_504();
					Function_240(27);
				}
				else if (!iLocal_1174)
				{
					if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), Global_34573, 1065353216, 1117126656, 1, 1, 0))
					{
						ACTOR_DISMOUNT_NOW(Global_34573);
						Function_238(Global_34573, (*&Local_4 + 1500)[28], 1, 1, 1);
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
						iLocal_1174 = 1;
					}
				}
			}
			break;
		
		case 0x0000001B:
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (!Function_503())
			{
				if (!Function_502())
				{
					if (Function_296(&iLocal_1002) < 5.0f)
					{
						if (!DECOR_CHECK_EXIST(bLocal_508, "FirstClimbObj"))
						{
							Function_426("Ranch04_obj02c");
							DECOR_SET_BOOL(bLocal_508, "FirstClimbObj", true);
						}
						Function_240(29);
					}
				}
			}
			break;
		
		case 0x0000001D:
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (!Function_503())
			{
				if (!Function_501())
				{
					if (!Function_500())
					{
						if (!Function_499())
						{
							if (!Function_502())
							{
								Function_411(&iLocal_1085);
								Function_498();
								if (!DECOR_CHECK_EXIST(bLocal_508, "FirstClimbObj"))
								{
									Function_426("Ranch04_obj02c");
									DECOR_SET_BOOL(bLocal_508, "FirstClimbObj", true);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000024:
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (!Function_503())
			{
				if (!Function_501())
				{
					if (!Function_500())
					{
						if (!Function_499())
						{
							Function_411(&iLocal_1085);
							Function_498();
							if (!DECOR_CHECK_EXIST(bLocal_508, "SecondClimbObj"))
							{
								Function_426("Ranch04_obj02d");
								DECOR_SET_BOOL(bLocal_508, "SecondClimbObj", true);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000002E:
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (!Function_503())
			{
				if (!Function_501())
				{
					if (!Function_500())
					{
						Function_411(&iLocal_1085);
						Function_498();
						if (!DECOR_CHECK_EXIST(bLocal_508, "ThirdClimbObj"))
						{
							Function_426("Ranch04_obj02e");
							DECOR_SET_BOOL(bLocal_508, "ThirdClimbObj", true);
						}
					}
				}
			}
			break;
		
		case 0x00000031:
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (!Function_503())
			{
				if (!Function_501())
				{
					Function_411(&iLocal_1085);
					Function_498();
					if (!DECOR_CHECK_EXIST(bLocal_508, "FourthClimbObj"))
					{
						Function_426("Ranch04_obj02f");
						DECOR_SET_BOOL(bLocal_508, "FourthClimbObj", true);
					}
				}
			}
			break;
		
		case 0x00000034:
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (!Function_503())
			{
				if (!DECOR_CHECK_EXIST(bLocal_508, "FifthClimbObj"))
				{
					Function_426("Ranch04_obj02h");
					DECOR_SET_BOOL(bLocal_508, "FifthClimbObj", true);
				}
				Function_240(56);
			}
			break;
		
		case 0x00000038:
			fVar0 = Function_506(Global_34573, (*&Local_4 + 672)[0]);
			if (Function_427(&fLocal_1005, 150.0f, 250.0f, (*&Local_4 + 1500)[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_498, 0, bLocal_508, Local_4, 330, 1))
			{
			}
			else if (!Function_503())
			{
				Function_411(&iLocal_1085);
				Function_498();
				if (!DECOR_CHECK_EXIST(bLocal_508, "FifthClimbObj"))
				{
					Function_426("Ranch04_obj02h");
					DECOR_SET_BOOL(bLocal_508, "FifthClimbObj", true);
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_496();
				iLocal_1042[2] = 1;
				bLocal_488 = 3;
				Function_240(0);
			}
			break;
	}
	return;
}

void Function_496() //Position: 0x1F05B / 127067
{
	Function_362();
	Function_230(3, 0, 1);
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	Function_497();
	return;
}

void Function_497() //Position: 0x1F07C / 127100
{
	Function_175(&Local_4 + 340);
	return;
}

void Function_498() //Position: 0x1F08A / 127114
{
	if (IS_VOLUME_VALID((*&Local_4 + 672)[9]))
	{
		if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 780)[4]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[9]))
			{
				if (IS_OBJECT_VALID(bLocal_995))
				{
					DESTROY_OBJECT(bLocal_995);
				}
				bLocal_995 = CREATE_GATEWAY_IN_LAYOUT(bLocal_508, "LadderGateway", (*&Local_4 + 780)[4], Global_34573, 1, 1, 0, false, 1, 1);
				ADD_BLIP_FOR_OBJECT(bLocal_995, 330, 0f, 2, 0);
				if (ACTOR_HAS_ANIM_SET(Global_34573, "nnear_fire"))
				{
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				}
				Function_240(27);
			}
		}
	}
	return;
}

bool Function_499() //Position: 0x1F12A / 127274
{
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 780)[0]))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(bLocal_1165))
	{
		REMOVE_ACTORSET_MEMBER(bLocal_830, bLocal_1165);
		ADD_ACTORSET_MEMBER(bLocal_829, bLocal_1165);
		Function_368(&bLocal_829);
		Function_368(&bLocal_830);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_1165, 0);
		Function_415(bLocal_1165);
		bLocal_1165 = "";
	}
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	bLocal_995 = CREATE_GATEWAY_IN_LAYOUT(bLocal_508, "ShimmyGateway", (*&Local_4 + 780)[1], Global_34573, 1, 1, 0, false, 1, 1);
	ADD_BLIP_FOR_OBJECT(bLocal_995, 330, 0f, 2, 0);
	if (!DECOR_CHECK_EXIST(bLocal_508, "ThirdClimbObj"))
	{
		Function_426("Ranch04_obj02e");
		DECOR_SET_BOOL(bLocal_508, "ThirdClimbObj", true);
	}
	Function_240(46);
	return 1;
}

bool Function_500() //Position: 0x1F211 / 127505
{
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 780)[1]))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(bLocal_1165))
	{
		REMOVE_ACTORSET_MEMBER(bLocal_830, bLocal_1165);
		ADD_ACTORSET_MEMBER(bLocal_829, bLocal_1165);
		Function_368(&bLocal_829);
		Function_368(&bLocal_830);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_1165, 0);
		Function_415(bLocal_1165);
		bLocal_1165 = "";
	}
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	if (!DECOR_CHECK_EXIST(bLocal_508, "FourthClimbObj"))
	{
		Function_426("Ranch04_obj02f");
		DECOR_SET_BOOL(bLocal_508, "FourthClimbObj", true);
	}
	iLocal_1147 = 0;
	Function_240(49);
	return 1;
}

bool Function_501() //Position: 0x1F2C7 / 127687
{
	if (!HUD_IS_SHOWING_HELP_TEXT())
	{
		if (!iLocal_1147)
		{
			if (!DECOR_CHECK_EXIST(bLocal_508, "ShimmyHelpText"))
			{
				DECOR_SET_BOOL(bLocal_508, "ShimmyHelpText", true);
			}
			iLocal_1147 = 1;
		}
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 780)[2]))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	if (!DECOR_CHECK_EXIST(bLocal_508, "FifthClimbObj"))
	{
		Function_426("Ranch04_obj02h");
		DECOR_SET_BOOL(bLocal_508, "FifthClimbObj", true);
	}
	Function_240(52);
	return 1;
}

bool Function_502() //Position: 0x1F382 / 127874
{
	vector3 vVar0;
	
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 780)[4]))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	bLocal_995 = CREATE_GATEWAY_IN_LAYOUT(bLocal_508, "MillGateway", (*&Local_4 + 780)[0], Global_34573, 1, 1, 0, false, 1, 1);
	ADD_BLIP_FOR_OBJECT(bLocal_995, 330, 0f, 2, 0);
	if (IS_ACTOR_VALID(bLocal_978))
	{
		vVar0 = { -858,672f, 90,798f, 2417,194f };
		TASK_GO_TO_COORD_AND_STAY(bLocal_978, &vVar0, 2, 203.0f);
		Function_2(0);
	}
	if (!DECOR_CHECK_EXIST(bLocal_508, "FirstHelpText"))
	{
		Function_133("Ranch04_obj02d_help", 10.0f, 1, 0, 2, 1, 0);
		DECOR_SET_BOOL(bLocal_508, "FirstHelpText", true);
	}
	Function_240(36);
	return 1;
}

bool Function_503() //Position: 0x1F469 / 128105
{
	vector3 vVar0;
	bool bVar3;
	
	if ((!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[14]) && !IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[19])) && !IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[20]))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	Function_240(106);
	if (IS_ACTOR_VALID(bLocal_978))
	{
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_978)))
		{
			vVar0 = { -841.0f, 92,5f, 2377.0f };
			bVar3 = LOCATE_GRINGO_OF_TYPE("horseHitch", &vVar0, 6.0f, 0);
			if (IS_GRINGO_VALID(bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(bVar3, true);
				SNAP_ACTOR_TO_GRINGO(bLocal_978, GET_OBJECT_FROM_GRINGO(bVar3), "UseCase1", true, 0, 0);
				TASK_PRIORITY_SET(bLocal_978, 2);
				TASK_USE_GRINGO(bLocal_978, bVar3, "UseCase1", true, 1);
			}
		}
	}
	return 1;
}

void Function_504() //Position: 0x1F53E / 128318
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_lookForWay", "Ranch04_lookForWay", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505() //Position: 0x1F58B / 128395
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_doorsLocked", "Ranch04_doorsLocked", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_506(bool bParam0, int iParam1) //Position: 0x1F5DA / 128474
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_396(bParam0);
		vVar0 = { StackVal, StackVal, Function_396(bParam0) };
		Function_507(iParam1);
		vVar3 = { StackVal, StackVal, Function_507(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_507(bool bParam0) //Position: 0x1F657 / 128599
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_508() //Position: 0x1F668 / 128616
{
	if (IS_CAMERA_FOCUS_ENABLED(bLocal_1060))
	{
		SET_CAMERA_FOCUS_ENABLED(bLocal_1060, 0);
	}
	return;
}

void Function_509() //Position: 0x1F67E / 128638
{
	if (!IS_OBJECT_VALID(bLocal_1060))
	{
		Function_76();
		bLocal_1060 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_508, "cFocus", (*&Local_4 + 1500)[15], Function_76(), 300.0f, 400.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1060, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_1060, "Ranch04_PromptBarnFire");
	}
	else
	{
		Function_76();
		SET_CAMERA_FOCUS_OBJECT(bLocal_1060, (*&Local_4 + 1500)[15], Function_76(), 1.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1060, 1);
	}
	return;
}

var Function_510(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1F6F9 / 128761
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_54(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch04_BarnDoorLocked", 2, 1);
	}
	Function_511(&bVar0);
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

void Function_511(int iParam0) //Position: 0x1F77B / 128891
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_513(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_512(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 2,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 10.0f, 1);
	return;
}

void Function_512(int iParam0) //Position: 0x1F7C0 / 128960
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -850,3034f, 91,81455f, 2452,151f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,037107f, -0,64323f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 60.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_513(var uParam0) //Position: 0x1F866 / 129126
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 16.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -846,7867f, 91,78709f, 2440,552f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0,05031f, 3,056369f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 85.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_514() //Position: 0x1F905 / 129285
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_seeFire", "Ranch04_seeFire", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_515() //Position: 0x1F94C / 129356
{
	return Global_34165.f_60;
}

void Function_516() //Position: 0x1F957 / 129367
{
	Function_348(&iLocal_1183, 54, 0, 4294967295, 4294967295);
	Function_253(bLocal_488);
	Function_460(StackVal, StackVal, Function_253(bLocal_488), bLocal_488, Global_30628[2], Function_256(bLocal_488), 0);
	DISABLE_CHILD_SECTOR("hen_barn01x");
	DISABLE_CHILD_SECTOR("hen_barn01props01x");
	ENABLE_CHILD_SECTOR("hen_barn02x");
	ENABLE_CHILD_SECTOR("hen_barn02props01x");
	ENABLE_CHILD_SECTOR("hen_barn03props01x");
	ENABLE_CHILD_SECTOR("hen_beamsEntity01x");
	if (!iLocal_1042[1])
	{
		Function_238(bLocal_978, (*&Local_4 + 1500)[3], 1, 1, 1);
		ACTOR_MOUNT_ACTOR(Global_34573, bLocal_978);
		Function_238(bLocal_979, (*&Local_4 + 1500)[4], 1, 1, 1);
		ACTOR_MOUNT_ACTOR(bLocal_976, bLocal_979);
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_976, -1.0f, -1.0f, 4, 1, 0);
	}
	Function_230(3, 1, 1);
	Function_234(1);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bLocal_976, 0, 0);
	Local_490 = 1000;
	Function_459();
	Function_365(bLocal_978);
	Function_365(bLocal_978);
	if (GET_TASK_STATUS(bLocal_976, 43) != 1)
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1888, 4, 0, 0, 1, false);
	}
	SET_DUST_LEVEL_MODIFIER(4294967294);
	Function_397();
	Function_457(bLocal_488);
	Function_163(114699);
	Function_185(1, 1, 0);
	return;
}

bool Function_517() //Position: 0x1FAB1 / 129713
{
	Function_327(&Local_4 + 340, 983, 2, 0);
	Function_327(&Local_4 + 340, 171, 2, 0);
	Function_327(&Local_4 + 340, 288, 2, 0);
	if (Function_320(&Local_4 + 340))
	{
		return 1;
	}
	return 0;
}

void Function_518() //Position: 0x1FAEE / 129774
{
	Function_457(bLocal_488);
	Function_238(Global_34573, (*&Local_4 + 1500)[3], 1, 1, 1);
	Function_238(bLocal_976, (*&Local_4 + 1500)[4], 1, 1, 1);
	Function_314("MINI_GAMES_AND_JOBS\\RANCH04");
	return;
}

void Function_519() //Position: 0x1FB3E / 129854
{
	Function_521();
	Function_482();
	if (iLocal_489 >= 1)
	{
		if (Function_467())
		{
			Function_520();
		}
	}
	if (!Function_633())
	{
		return;
	}
	Function_492();
	Function_493();
	if (IS_ACTOR_VALID(bLocal_1165))
	{
		if (GET_TASK_STATUS(bLocal_1165, 6) == 1)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1165, "crowd_pointing_R"))
			{
				TASK_CLEAR(bLocal_1165);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_1165, 0);
				SET_ANIM_SET_FOR_ACTOR(bLocal_1165, "crowd_pointing_R", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1165, "crowd_pointing_R");
			}
		}
		else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1165, "crowd_pointing_R"))
		{
			if (GET_TASK_STATUS(bLocal_1165, 0) != 1)
			{
				bLocal_1125 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[25], 1, 0, 1);
				GET_OBJECT_POSITION((*&Local_4 + 1500)[27], &vLocal_1127);
				TASK_FACE_COORD(false, &vLocal_1127, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1165, bLocal_1125);
				TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
			}
		}
	}
	if (!iLocal_1173)
	{
		if (!IS_ACTOR_MOUNTED(bLocal_978))
		{
			bLocal_1125 = TASK_SEQUENCE_OPEN();
			TASK_ACTION_PERFORM(false, "horse_Main/Melee/RearUp/scripted/canned_rear_up");
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1500)[1], 2, 0, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_978, bLocal_1125);
			TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
			iLocal_1173 = 1;
		}
	}
	else if (IS_ACTOR_MOUNTED(bLocal_978))
	{
		TASK_CLEAR(bLocal_978);
		iLocal_1173 = 1;
	}
	if (!iLocal_1175)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nledgeplay"))
		{
			ENABLE_USE_CONTEXTS(0);
			iLocal_1175 = 1;
		}
	}
	else if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nledgeplay"))
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_1175 = 0;
	}
	Function_407();
	Function_494();
	Function_490();
	Function_486();
	Function_215(1);
	return;
}

void Function_520() //Position: 0x1FD35 / 130357
{
	if (!IS_ACTOR_VALID(bLocal_1164))
	{
		bLocal_1164 = GET_ACTOR_FROM_ACTORSET(bLocal_829, (GET_ACTORSET_SIZE(bLocal_829) - 1));
		REMOVE_ACTORSET_MEMBER(bLocal_829, bLocal_1164);
		ADD_ACTORSET_MEMBER(bLocal_830, bLocal_1164);
		Function_368(&bLocal_829);
		Function_368(&bLocal_830);
		Function_229(bLocal_1164);
		AI_SET_NAV_PATHFINDING_ENABLED(bLocal_1164, false);
		TASK_CLEAR(bLocal_1164);
		TASK_USE_GRINGO(bLocal_1164, GET_GRINGO_FROM_OBJECT(Local_4.f_1852), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO(bLocal_1164, Local_4.f_1852, "UseCase1", true, 0, 0);
		TASK_PRIORITY_SET(bLocal_1164, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_1164, true);
	}
	if (!IS_ACTOR_VALID(bLocal_1165))
	{
		bLocal_1165 = GET_ACTOR_FROM_ACTORSET(bLocal_829, (GET_ACTORSET_SIZE(bLocal_829) - 1));
		REMOVE_ACTORSET_MEMBER(bLocal_829, bLocal_1165);
		ADD_ACTORSET_MEMBER(bLocal_830, bLocal_1165);
		Function_368(&bLocal_829);
		Function_368(&bLocal_830);
		Function_229(bLocal_1165);
		Function_238(bLocal_1165, (*&Local_4 + 1500)[25], 1, 1, 1);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_1165, 0);
		SET_ANIM_SET_FOR_ACTOR(bLocal_1165, "crowd_pointing_R", 0);
		SET_ACTION_NODE_FOR_ACTOR(bLocal_1165, "crowd_pointing_R");
		TASK_CLEAR(bLocal_1165);
		TASK_PRIORITY_SET(bLocal_1165, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_1165, true);
	}
	return;
}

void Function_521() //Position: 0x1FE6F / 130671
{
	if (Function_353(Global_30668[0]))
	{
		if (!IS_DOOR_VALID(Local_835[610]))
		{
			Function_483("hennigansRanch", "barn02", 7);
		}
		else
		{
			if (!IS_DOOR_CLOSED(Local_835[610]))
			{
				CLOSE_DOOR_FAST(Local_835[610]);
			}
			if (!IS_DOOR_LOCKED(Local_835[610]))
			{
				Function_121(Local_835[610], 1);
			}
		}
		if (!IS_DOOR_VALID(Local_835[710]))
		{
			Function_483("hennigansRanch", "barn02", 8);
		}
		else
		{
			if (!IS_DOOR_CLOSED(Local_835[710]))
			{
				CLOSE_DOOR_FAST(Local_835[710]);
			}
			if (!IS_DOOR_LOCKED(Local_835[710]))
			{
				Function_121(Local_835[710], 1);
			}
		}
		if (!IS_DOOR_VALID(Local_835[810]))
		{
			Function_483("hennigansRanch", "barn02", 9);
		}
		else
		{
			if (!IS_DOOR_CLOSED(Local_835[810]))
			{
				CLOSE_DOOR_FAST(Local_835[810]);
			}
			if (!IS_DOOR_LOCKED(Local_835[810]))
			{
				Function_121(Local_835[810], 1);
			}
		}
		if (!IS_DOOR_VALID(Local_835[910]))
		{
			Function_483("hennigansRanch", "barn02", 10);
		}
		else
		{
			if (!IS_DOOR_CLOSED(Local_835[910]))
			{
				CLOSE_DOOR_FAST(Local_835[910]);
			}
			if (!IS_DOOR_LOCKED(Local_835[910]))
			{
				Function_121(Local_835[910], 1);
			}
		}
	}
	return;
}

void Function_522() //Position: 0x20000 / 131072
{
	Function_555();
	switch (iLocal_489)
	{
		case 0x00000000:
			Function_355(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_554();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_254((*&Local_4 + 892)[0]);
			bLocal_608 = Function_354(StackVal, StackVal, Function_254((*&Local_4 + 892)[0]), 0, 1, 1);
			if (!Function_353(bLocal_608))
			{
				Function_352(&Local_509);
			}
			if (!iLocal_1042[0])
			{
				Function_242(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				iLocal_1151 = 1000;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_553();
				Function_240(1);
			}
			else if (Function_552() && Function_320(&bLocal_592))
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if ((((STREAMING_IS_WORLD_LOADED() && Function_552()) && Function_320(&bLocal_592)) && (Function_353(bLocal_608) || bLocal_608 != 4294967295)) && Function_549())
			{
				if (Function_353(Global_30668[0]))
				{
					Function_240(2);
				}
				else
				{
					Function_466(Global_30668[0]);
				}
			}
			break;
		
		case 0x00000002:
			Function_541();
			if (Function_540(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_509, bLocal_488))
			{
				Function_348(&iLocal_1183, 3, 0, 4294967295, 4294967295);
				Function_240(3);
			}
			else
			{
				Function_238(bLocal_978, (*&Local_4 + 892)[1], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_978);
				Function_238(bLocal_979, (*&Local_4 + 892)[3], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(bLocal_976, bLocal_979);
				Function_238(bLocal_977, (*&Local_4 + 892)[6], 1, 1, 1);
				CAMERA_RESET(0);
				Function_240(4);
			}
			break;
		
		case 0x00000003:
			if (Function_290("$/cutscene/RANCH04_CS02/RANCH04_CS02", &Local_490, &Local_509, &bLocal_488, 77839, 76275, 73917, 73338, 56017, 55969, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_240(4);
			}
			break;
		
		case 0x00000004:
			if (Function_537())
			{
				Function_240(6);
			}
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				Function_286(1.0f);
			}
			if (!HUD_IS_FADING())
			{
				iLocal_1021 = Function_515();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_FOLLOW_PATH(bLocal_976, Local_4.f_1888, 4, 0, 0, 1, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_976, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_976, 0);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_976, -1.0f, -1.0f, 4, 1, 0);
				Function_426("Ranch04_obj02a");
				Function_240(7);
			}
			break;
		
		case 0x00000007:
			Function_525();
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_523();
				iLocal_1042[1] = 1;
				bLocal_488 = 2;
				Function_240(0);
			}
			break;
	}
	return;
}

void Function_523() //Position: 0x2025A / 131674
{
	Function_362();
	Function_230(3, 0, 1);
	if (IS_OBJECT_VALID(bLocal_995))
	{
		DESTROY_OBJECT(bLocal_995);
	}
	if (IS_ACTOR_VALID(bLocal_977))
	{
		RELEASE_ACTOR(bLocal_977);
	}
	if (IS_ACTORSET_VALID(Local_4.f_568))
	{
		DESTROY_ACTORSET(Local_4.f_568);
	}
	Function_524();
	Function_175(&bLocal_592);
	return;
}

void Function_524() //Position: 0x202A4 / 131748
{
	Function_175(&Local_4 + 216);
	return;
}

int Function_525() //Position: 0x202B1 / 131761
{
	float fVar0;
	
	fVar0 = Function_536(Global_34573, bLocal_976);
	if (Function_296(&iLocal_1002) < 15.0f)
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_977, 15.0f))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_217(&iLocal_1002);
			}
		}
	}
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		if (IS_ACTOR_VALID(bLocal_978))
		{
			if (!IS_BLIP_VALID(bLocal_1056))
			{
				bLocal_1056 = ADD_BLIP_FOR_ACTOR(bLocal_978, 334, 0, 2, 0);
			}
			Function_426("Horse_return");
		}
		else
		{
			Function_426("Horse_find");
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_976)))
		{
			Function_230(3, 0, 1);
			if (!iLocal_1177)
			{
				iLocal_1177 = 1;
				PAUSE_SCRIPTED_CONVERSATION(1, 1);
				Function_535("Ranch04_getsOffhorse");
			}
		}
		if (fVar0 <= 200.0f)
		{
			Function_533(&fLocal_1005, 60.0f, 200.0f, bLocal_976, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_498, 1, bLocal_508, Local_4, 325, 1);
		}
	}
	else
	{
		if (Function_533(&fLocal_1005, 60.0f, 200.0f, bLocal_976, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_498, 1, bLocal_508, Local_4, 325, 1))
		{
			if (IS_BLIP_VALID(bLocal_1056))
			{
				REMOVE_BLIP(bLocal_1056);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_976)))
			{
				Function_230(3, 1, 1);
			}
		}
		else
		{
			if (IS_BLIP_VALID(bLocal_1056))
			{
				REMOVE_BLIP(bLocal_1056);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_976)))
			{
				Function_230(3, 1, 1);
			}
		}
		if (fVar0 < 15.0f)
		{
			if (!Function_530(Global_34573, bLocal_976, Local_4.f_1888))
			{
				if (!iLocal_1177)
				{
					iLocal_1177 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 1);
					Function_535("Ranch04_farBehind");
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
						SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
					}
				}
			}
			else if (GET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_976) == 22.0f)
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_976, 3);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_976, 22.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(bLocal_976), 22.0f);
				if (!iLocal_1177)
				{
					iLocal_1177 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 1);
					Function_535("Ranch04_farAhead");
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
						SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[18]) || IS_ACTOR_IN_VOLUME(bLocal_976, (*&Local_4 + 672)[18]))
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_976);
				Function_240(106);
				return 1;
			}
		}
		TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
		CLEAR_ACTOR_MAX_SPEED(bLocal_976);
		CLEAR_ACTOR_MAX_SPEED(GET_MOUNT(bLocal_976));
		MEMORY_PREFER_RIDING(bLocal_976, true);
		if (GET_TASK_STATUS(bLocal_976, 43) == 1 && GET_TASK_STATUS(bLocal_976, 16) == 1)
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1888, 4, 0, 0, 1, false);
		}
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 672)[18]) || IS_ACTOR_IN_VOLUME(bLocal_976, (*&Local_4 + 672)[18]))
		{
			ABORT_SCRIPTED_CONVERSATION(0);
			MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_976);
			Function_240(106);
			return 1;
		}
		Function_526();
	}
	return 0;
}

void Function_526() //Position: 0x20686 / 132742
{
	if (iLocal_1177)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_976, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_1177 = 0;
				Function_535("Ranch04_comesBack");
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_219(&iLocal_1079))
		{
			Function_216(&iLocal_1079);
		}
	}
	else
	{
		if (iLocal_1058)
		{
			iLocal_1058 = 0;
		}
		if (!Function_219(&iLocal_1079))
		{
			Function_217(&iLocal_1079);
		}
		if (Function_296(&iLocal_1079) < 4.0f)
		{
			if (!Function_219(&iLocal_1008))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_976, 15.0f))
				{
					switch (iLocal_1021)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1058 = 1;
								Function_529();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1021 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1058 = 1;
								Function_528();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1021 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1058 = 1;
								Function_527();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1021 = 3;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						default:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1021 = 99;
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_527() //Position: 0x207A8 / 133032
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v3_AA", "Ranch04_backToRanch_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v3_AB", "Ranch04_backToRanch_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v3_AC", "Ranch04_backToRanch_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v3_AD", "Ranch04_backToRanch_v3_AD", true, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_528() //Position: 0x208C6 / 133318
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AA", "Ranch04_backToRanch_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AB", "Ranch04_backToRanch_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AC", "Ranch04_backToRanch_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AD", "Ranch04_backToRanch_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AE", "Ranch04_backToRanch_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AF", "Ranch04_backToRanch_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AG", "Ranch04_backToRanch_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AH", "Ranch04_backToRanch_v2_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2830", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AI1", "Ranch04_backToRanch_v2_AI1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AI2", "Ranch04_backToRanch_v2_AI2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AI3", "Ranch04_backToRanch_v2_AI3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AJ", "Ranch04_backToRanch_v2_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AK", "Ranch04_backToRanch_v2_AK", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_529() //Position: 0x20C52 / 134226
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v1_AA", "Ranch04_backToRanch_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v1_AB", "Ranch04_backToRanch_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v1_AC", "Ranch04_backToRanch_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v1_AD", "Ranch04_backToRanch_v1_AD", true, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_530(int iParam0, bool bParam1, bool bParam2) //Position: 0x20D70 / 134512
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = Function_532(iParam0, bParam2);
	iVar1 = Function_532(bParam1, bParam2);
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	if (iVar0 == iVar1)
	{
		GET_PATH_POINT(bParam2, iVar0 + 1, &vVar4);
		fVar2 = Function_531(StackVal, StackVal, iParam0, vVar4);
		fVar3 = Function_531(StackVal, StackVal, bParam1, vVar4);
		if (fVar2 > fVar3)
		{
			return 1;
		}
		return 0;
	}
	return 0;
	return 0;
}

var Function_531(bool bParam0, vector3 vParam1) //Position: 0x20DD1 / 134609
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_396(bParam0);
		vVar0 = { StackVal, StackVal, Function_396(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

var Function_532(var uParam0, bool bParam1) //Position: 0x20E4B / 134731
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = false;
	bVar4 = 4294967295;
	bVar5 = 99999,9f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_PATH_POINTS(bParam1) - 1))
	{
		GET_PATH_POINT(bParam1, bVar0, &vVar1);
		Function_344(uParam0);
		bVar6 = VDIST(Function_344(uParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

bool Function_533(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x20E9F / 134815
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_534(Global_34573, bParam3, iParam2))
	{
		Function_247(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_534(Global_34573, bParam3, bParam1))
	{
		if (!Function_434(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_433(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_432(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_431(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_431(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_434(2))
	{
		Function_430(2);
		if (!Function_429())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_428();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_208(bParam3);
				Function_231(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_431(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_431(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_534(bool bParam0, bool bParam1, bool bParam2) //Position: 0x21033 / 135219
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

void Function_535(bool bParam0) //Position: 0x21144 / 135492
{
	if (!iLocal_1177)
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_976, bParam0, Function_54(), false, 0, 1, 3, 0, 0, "MINOR_SHOCK", 1000, 0, 0);
	}
	else
	{
		SAY_SINGLE_LINE_STRING(bLocal_976, bParam0, false, true, 3, 0, true, false);
	}
	return;
}

var Function_536(bool bParam0, bool bParam1) //Position: 0x21187 / 135559
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

bool Function_537() //Position: 0x21278 / 135800
{
	bool bVar0;
	bool bVar1;
	
	Function_217(&iLocal_1094);
	bVar0 = 199;
	bVar1 = 111;
	switch (iLocal_1150)
	{
		case 0x00000000:
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_978);
			}
			if (!IS_ACTOR_RIDING(bLocal_976))
			{
				ACTOR_MOUNT_ACTOR(bLocal_976, bLocal_979);
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO((*&Local_4 + 460)[02])) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO((*&Local_4 + 460)[12])))
			{
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1840), "UseCase1", "UseAnim", bVar0);
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1848), "UseCase1", "UseAnim", bVar1);
				iLocal_1150 = 1;
				return 0;
			}
			iLocal_1150 = 3;
			Function_348(&iLocal_1183, 11, 0, 4294967295, 4294967295);
			SET_DUST_LEVEL_MODIFIER(4294967294);
			return 0;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_INITED((*&Local_4 + 460)[02]) && IS_ACTOR_INITED((*&Local_4 + 460)[12]))
			{
				if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1840), "UseCase1", "UseAnim", bVar0) && GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(Local_4.f_1848), "UseCase1", "UseAnim", bVar1))
				{
					TASK_USE_GRINGO((*&Local_4 + 460)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1840), "UseCase1", 4294967295, 1);
					TASK_USE_GRINGO((*&Local_4 + 460)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1848), "UseCase1", 4294967295, 1);
					if (SNAP_ACTOR_TO_GRINGO((*&Local_4 + 460)[02], Local_4.f_1840, "UseCase1", false, 0, 0) && SNAP_ACTOR_TO_GRINGO((*&Local_4 + 460)[12], Local_4.f_1848, "UseCase1", false, 0, 0))
					{
						SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 460)[02], "body_left_for_dead_gped_mourn/mourn/body");
						SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 460)[12], "body_left_for_dead_gped_mourn/mourn/body");
						iLocal_1150 = 2;
						Function_217(&iLocal_1002);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (((IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_4 + 460)[02], "body") && IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_4 + 460)[12], "body")) && Function_296(&iLocal_1002) < 1.0f) || Function_296(&iLocal_1002) < 7.0f)
			{
				iLocal_1150 = 3;
				return 0;
			}
			break;
		
		case 0x00000003:
			bLocal_1125 = TASK_SEQUENCE_OPEN();
			TASK_USE_GRINGO(bLocal_977, GET_GRINGO_FROM_OBJECT(Local_4.f_1840), "Robber", true, 1);
			TASK_USE_GRINGO(bLocal_977, GET_GRINGO_FROM_OBJECT(Local_4.f_1848), "Robber", true, 1);
			TASK_WANDER_IN_VOLUME(false, (*&Local_4 + 808)[0], -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_977, bLocal_1125);
			TASK_SEQUENCE_RELEASE(bLocal_1125, 1);
			TASK_PRIORITY_SET(bLocal_977, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_977, true);
			SET_ACTOR_FACTION(bLocal_977, 20);
			Function_539(bLocal_977);
			SET_ACTOR_INVULNERABILITY(bLocal_977, false);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_977, (*&Local_4 + 808)[0], 1, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_980, (*&Local_4 + 808)[1], 1, true);
			TASK_WANDER_IN_VOLUME(bLocal_980, (*&Local_4 + 808)[1], -1.0f);
			Function_538(Global_34573);
			Function_538(bLocal_976);
			Function_538(bLocal_978);
			Function_538(bLocal_979);
			ACTOR_END_FORCE_HOLSTER(Global_34573);
			ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			SET_AUTO_CONVERSATION_LOOK(bLocal_976, 1);
			Function_397();
			Function_457(bLocal_488);
			Function_457(bLocal_488);
			iLocal_1150 = 4;
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_538(bool bParam0) //Position: 0x215F6 / 136694
{
	SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	SET_ACTOR_KO_POINTS(bParam0, GET_ACTOR_MAX_KO_POINTS(bParam0));
	return;
}

void Function_539(bool bParam0) //Position: 0x21610 / 136720
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

bool Function_540(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x21644 / 136772
{
	if (Function_308(&iParam0) == iParam7 || Function_465())
	{
		return 1;
	}
	return 0;
}

void Function_541() //Position: 0x21663 / 136803
{
	int iVar0;
	bool bVar1;
	
	Function_253(bLocal_488);
	Function_460(StackVal, StackVal, Function_253(bLocal_488), bLocal_488, Global_30628[2], Function_256(bLocal_488), 0);
	if (!iLocal_1042[0])
	{
		Function_548();
		Function_547();
		Function_546();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			bVar1 = (*&Local_4 + 540)[iVar02];
			if (Function_313(bVar1, 1))
			{
				TASK_PRIORITY_SET(bVar1, true);
				TASK_BIRD_SOAR_AT_COORD(bVar1, &Local_4 + 1012[06], -1.0f, 1106247680);
				SET_ACTOR_INVULNERABILITY(bVar1, false);
			}
			iVar0++;
		}
	}
	DISABLE_CHILD_SECTOR("hen_barn01x");
	DISABLE_CHILD_SECTOR("hen_barn01props01x");
	ENABLE_CHILD_SECTOR("hen_barn02x");
	ENABLE_CHILD_SECTOR("hen_barn02props01x");
	ENABLE_CHILD_SECTOR("hen_barn03props01x");
	ENABLE_CHILD_SECTOR("hen_beamsEntity01x");
	Function_230(3, 1, 1);
	Function_234(1);
	Function_163(114699);
	Function_185(1, 1, 0);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bLocal_976, 0, 0);
	Local_490 = 1000;
	Function_545();
	Function_459();
	if (!IS_ACTOR_VALID(bLocal_977))
	{
		Function_542();
	}
	iLocal_1150 = 0;
	return;
}

void Function_542() //Position: 0x21798 / 137112
{
	Function_544();
	bLocal_977 = (*&Local_4 + 460)[22];
	TASK_PRIORITY_SET(bLocal_977, 2);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_977, true);
	SET_ACTOR_FACTION(bLocal_977, 20);
	ACTOR_START_FORCE_HOLSTER(bLocal_977, 0, 0);
	MEMORY_ALLOW_SHOOTING(bLocal_977, false);
	if (Function_313(bLocal_977, 1))
	{
		Function_543(&Local_4 + 460[02]);
		TASK_USE_GRINGO((*&Local_4 + 460)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1840), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO((*&Local_4 + 460)[02], Local_4.f_1840, "UseCase1", false, 0, 0);
		SET_ACTOR_STREAMING_HIGH_PRIORITY((*&Local_4 + 460)[02], 1);
		Function_543(&Local_4 + 460[12]);
		TASK_USE_GRINGO((*&Local_4 + 460)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1848), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO((*&Local_4 + 460)[12], Local_4.f_1848, "UseCase1", false, 0, 0);
		SET_ACTOR_STREAMING_HIGH_PRIORITY((*&Local_4 + 460)[12], 1);
		TASK_USE_GRINGO(bLocal_977, GET_GRINGO_FROM_OBJECT(Local_4.f_1844), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO(bLocal_977, Local_4.f_1844, "UseCase1", true, 0, 0);
		TASK_PRIORITY_SET(bLocal_977, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_977, true);
		SET_ACTOR_FACTION(bLocal_977, 20);
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_980, (*&Local_4 + 808)[1], 1, true);
	TASK_WANDER_IN_VOLUME(bLocal_980, (*&Local_4 + 808)[1], -1.0f);
	return;
}

void Function_543(var uParam0) //Position: 0x218F2 / 137458
{
	Function_539(*uParam0);
	AI_DONT_HARM_ACTOR(*uParam0);
	SET_ACTOR_INVULNERABILITY(*uParam0, true);
	Function_333(*uParam0, 0, 0, 0, 0, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(*uParam0, 0);
	UNK_0x99AFD2D1(*uParam0, 1, 0);
	SET_TOUGH_ACTOR(*uParam0, 1);
	SET_ALLOW_EXECUTE(*uParam0, 0);
	DECOR_SET_BOOL(*uParam0, "CanBeLasso", false);
	STOP_PED_SPEAKING(*uParam0, 1);
	SET_AUTO_CONVERSATION_LOOK(*uParam0, 0);
	SET_ACTOR_PERMANENT_DEAD(*uParam0);
	return;
}

void Function_544() //Position: 0x21964 / 137572
{
	(*&Local_4 + 460)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DeadRanchHand01", 199, -1049,339f, 100,3922f, 2944f, 0.0f, 136,5509f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 460)[02]);
	(*&Local_4 + 460)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DeadRanchHand02", 111, -1049,284f, 100,3922f, 2945,519f, 0.0f, 170,0877f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 460)[12]);
	(*&Local_4 + 460)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rancher", 608, -1052f, 100,3922f, 2942,347f, 0.0f, -0,926f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 460)[22], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 460)[22], true);
	return;
}

void Function_545() //Position: 0x21A38 / 137784
{
	iLocal_1058 = 0;
	Function_216(&iLocal_1079);
	iLocal_1021 = Function_515();
	return;
}

void Function_546() //Position: 0x21A4E / 137806
{
	Local_4.f_568 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Vulturesset", 0);
	(*&Local_4 + 540)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nVulture01", 1128, -1052f, 100,3922f, 2936f, 0.0f, 20,21585f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_568, (*&Local_4 + 540)[02]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 540)[02]);
	(*&Local_4 + 540)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nVulture02", 1129, -1052f, 100,3922f, 2948.0f, 0.0f, 16,79937f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_568, (*&Local_4 + 540)[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 540)[12]);
	(*&Local_4 + 540)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nVulture03", 1130, -1068f, 101,3961f, 2944.0f, 0.0f, 181,062f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_568, (*&Local_4 + 540)[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 540)[22]);
	return;
}

void Function_547() //Position: 0x21B57 / 138071
{
	RESET_TREE_TYPE_CLEARING();
	GET_OBJECT_POSITION((*&Local_4 + 1500)[0], &vLocal_1127);
	CLEAR_AREA_OF_GRASS(vLocal_1127, 1.0f);
	GET_OBJECT_POSITION(Local_4.f_1840, &vLocal_1127);
	CLEAR_AREA_OF_GRASS(vLocal_1127, 1.0f);
	GET_OBJECT_POSITION(Local_4.f_1848, &vLocal_1127);
	CLEAR_AREA_OF_GRASS(vLocal_1127, 1.0f);
	CLEAR_AREA_OF_GRASS(*(&Local_4 + 1628[26]), 1.0f);
	CLEAR_AREA_OF_GRASS(*(&Local_4 + 1628[56]), 1.0f);
	return;
}

void Function_548() //Position: 0x21BC3 / 138179
{
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "DeadHorse01", 977, -1045,251f, 100,3922f, 2942,163f, 0.0f, 80,44604f, 0.0f, "dead_ground_horse");
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "DeadHorse02", 981, -1057,982f, 101,3961f, 2950,4f, 0.0f, 123,3348f, 0.0f, "dead_ground_horse");
	return;
}

int Function_549() //Position: 0x21C4B / 138315
{
	if (Function_551(&Local_4 + 1628, &uLocal_1126, 2, 0,25f, 0,6f, 0))
	{
		if (Function_550(Local_4.f_1924, 0,6f, 0,25f))
		{
			if (Function_550(Local_4.f_1928, 0,6f, 0,25f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_550(bool bParam0, float fParam1, bool bParam2) //Position: 0x21C98 / 138392
{
	bool bVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	
	bVar0 = false;
	if (DECOR_CHECK_EXIST(bParam0, "iCurBloodPoint"))
	{
		iVar1 = GET_NUM_PATH_POINTS(bParam0);
		fVar2 = ((fParam1 - bParam2) / IntToFloat(iVar1));
		bVar0 = DECOR_GET_INT(bParam0, "iCurBloodPoint");
		if (bVar0 <= iVar1)
		{
			GET_PATH_POINT(bParam0, bVar0, &vVar3);
			CREATE_DECAL(1, vVar3, (fParam1 - (fVar2 * IntToFloat(bVar0))), 0, 0);
			DECOR_SET_INT(bParam0, "iCurBloodPoint", bVar0 + 1);
		}
		else
		{
			return 1;
		}
	}
	DECOR_SET_INT(bParam0, "iCurBloodPoint", false);
	return 0;
}

bool Function_551(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x21D43 / 138563
{
	if (*uParam1 <= *uParam0)
	{
		CREATE_DECAL(iParam2, *uParam0[*uParam16], RAND_FLOAT_RANGE(bParam3, bParam4), iParam5, 0);
		*uParam1++;
	}
	else
	{
		return 1;
	}
	return 0;
}

int Function_552() //Position: 0x21D7C / 138620
{
	Function_327(&Local_4 + 216, 199, 2, 0);
	Function_327(&Local_4 + 216, 111, 2, 0);
	Function_327(&Local_4 + 216, 608, 2, 0);
	Function_327(&Local_4 + 216, 977, 2, 0);
	Function_327(&Local_4 + 216, 983, 2, 0);
	Function_327(&Local_4 + 216, 1128, 2, 0);
	Function_327(&Local_4 + 216, 1129, 2, 0);
	Function_327(&Local_4 + 216, 1130, 2, 0);
	Function_327(&Local_4 + 216, 171, 2, 0);
	Function_327(&Local_4 + 216, 288, 2, 0);
	if (Function_320(&Local_4 + 216))
	{
		return 1;
	}
	return 0;
}

void Function_553() //Position: 0x21E0E / 138766
{
	Function_457(bLocal_488);
	Function_238(Global_34573, (*&Local_4 + 892)[0], 1, 1, 1);
	Function_238(bLocal_976, (*&Local_4 + 892)[2], 1, 1, 1);
	Function_314("MINI_GAMES_AND_JOBS\\RANCH04");
	return;
}

void Function_554() //Position: 0x21E5E / 138846
{
	Function_327(&bLocal_592, 153, 2, 0);
	Function_327(&bLocal_592, 159, 2, 0);
	Function_327(&bLocal_592, 155, 2, 0);
	Function_327(&bLocal_592, 33, 2, 0);
	Function_327(&bLocal_592, 54, 2, 0);
	return;
}

void Function_555() //Position: 0x21E9B / 138907
{
	Function_556();
	Function_482();
	if (iLocal_489 >= 1)
	{
		Function_467();
	}
	if (!Function_633())
	{
		return;
	}
	Function_492();
	Function_486();
	return;
}

void Function_556() //Position: 0x21EC2 / 138946
{
	if (Function_353(Global_30668[0]))
	{
		if (!IS_DOOR_VALID(Local_835[610]))
		{
			Function_483("hennigansRanch", "barn02", 7);
		}
		else
		{
			if (!IS_DOOR_CLOSED(Local_835[610]))
			{
				CLOSE_DOOR_FAST(Local_835[610]);
			}
			if (!IS_DOOR_LOCKED(Local_835[610]))
			{
				Function_121(Local_835[610], 1);
			}
		}
		if (!IS_DOOR_VALID(Local_835[710]))
		{
			Function_483("hennigansRanch", "barn02", 8);
		}
		else
		{
			if (!IS_DOOR_CLOSED(Local_835[710]))
			{
				CLOSE_DOOR_FAST(Local_835[710]);
			}
			if (!IS_DOOR_LOCKED(Local_835[710]))
			{
				Function_121(Local_835[710], 1);
			}
		}
		if (!IS_DOOR_VALID(Local_835[810]))
		{
			Function_483("hennigansRanch", "barn02", 9);
		}
		else
		{
			if (!IS_DOOR_CLOSED(Local_835[810]))
			{
				CLOSE_DOOR_FAST(Local_835[810]);
			}
			if (!IS_DOOR_LOCKED(Local_835[810]))
			{
				Function_121(Local_835[810], 1);
			}
		}
		if (!IS_DOOR_VALID(Local_835[910]))
		{
			Function_483("hennigansRanch", "barn02", 10);
		}
		else
		{
			if (!IS_DOOR_CLOSED(Local_835[910]))
			{
				CLOSE_DOOR_FAST(Local_835[910]);
			}
			if (!IS_DOOR_LOCKED(Local_835[910]))
			{
				Function_121(Local_835[910], 1);
			}
		}
	}
	return;
}

void Function_557() //Position: 0x22051 / 139345
{
	Function_578();
	switch (iLocal_489)
	{
		case 0x00000000:
			Function_355(0);
			iLocal_1151 = 1000;
			if (Function_300(&Local_509))
			{
				Function_238(Global_34573, (*&Local_4 + 860)[1], 1, 1, 1);
				Function_238(bLocal_976, (*&Local_4 + 860)[3], 1, 1, 1);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_608 = Global_30668[0];
			if (!Function_353(bLocal_608))
			{
				Function_352(&Local_509);
			}
			Function_577();
			Function_240(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_326())
			{
				if (Function_353(bLocal_608))
				{
					if (MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2.0f, 1);
						Function_240(2);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADING())
			{
				Function_576();
				Function_286(1.0f);
				Function_240(5);
			}
			break;
		
		case 0x00000005:
			if (Function_296(&iLocal_1002) <= 1.0f)
			{
				TASK_CLEAR(Global_34573);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_240(6);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!Function_572())
				{
					if (iLocal_1021 == 0)
					{
						bLocal_1056 = ADD_BLIP_FOR_ACTOR(bLocal_978, 334, 0, 2, 0);
						Function_571();
						Function_217(&iLocal_1002);
						iLocal_1021 = 1;
						Function_426("Ranch04_obj01a");
						Function_217(&iLocal_1002);
					}
				}
			}
			break;
		
		case 0x00000012:
			if (Function_394(Global_34573, (*&Local_4 + 1500)[0], 150.0f))
			{
				Function_570();
				Function_549();
			}
			else if (!Function_394(Global_34573, (*&Local_4 + 1500)[0], 160.0f))
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					iLocal_1151 = 1000;
				}
			}
			Function_560();
			break;
		
		case 0x00000069:
			ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
			ACTOR_HOLSTER_WEAPON(Global_34573, 1);
			Function_240(106);
			break;
		
		case 0x0000006A:
			Function_558();
			iLocal_1042[0] = 1;
			bLocal_488 = true;
			Function_240(0);
			break;
	}
	return;
}

void Function_558() //Position: 0x22240 / 139840
{
	CLEAR_ACTOR_MIN_SPEED(bLocal_976);
	CLEAR_ACTOR_MAX_SPEED(bLocal_976);
	STREAMING_UNLOAD_BOUNDS();
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_976);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_836);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_836);
	DESTROY_VOLUME(Local_4.f_836);
	Function_559();
	return;
}

void Function_559() //Position: 0x22277 / 139895
{
	Function_175(&Local_4 + 128);
	return;
}

int Function_560() //Position: 0x22284 / 139908
{
	float fVar0;
	bool bVar1;
	
	fVar0 = Function_536(Global_34573, bLocal_976);
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		if (IS_ACTOR_VALID(bLocal_978))
		{
			if (!IS_BLIP_VALID(bLocal_1056))
			{
				bLocal_1056 = ADD_BLIP_FOR_ACTOR(bLocal_978, 334, 0, 2, 0);
				Function_426("Horse_return");
			}
		}
		else
		{
			Function_426("Horse_find");
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_976)))
		{
			Function_230(3, 0, 1);
			if (!iLocal_1177)
			{
				iLocal_1177 = 1;
				PAUSE_SCRIPTED_CONVERSATION(1, 1);
				Function_535("Ranch04_getsOffhorse");
			}
		}
		if (!IS_ACTOR_IN_VOLUME(bLocal_976, (*&Local_4 + 808)[0]))
		{
			if (GET_TASK_STATUS(bLocal_976, 43) != 1)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1884, 4, 0, 0, 1, false);
			}
		}
		else if (GET_TASK_STATUS(bLocal_976, 0) != 1)
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 892)[3], 2, 0, 1);
			TASK_FACE_ACTOR(false, bLocal_977, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_976, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
			Function_217(&iLocal_1088);
		}
		else if (Function_219(&iLocal_1088))
		{
			if (Function_296(&iLocal_1088) < 10.0f)
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_STAND_STILL(false, 2.0f, 0, 0);
				TASK_FACE_ACTOR(false, bLocal_977, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_976, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				Function_217(&iLocal_1088);
				if (!iLocal_1177)
				{
					iLocal_1177 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 1);
					Function_535("Ranch04_farBehind");
				}
			}
			if (GET_TASK_STATUS(bLocal_976, 6) == 1)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
				}
			}
		}
		if (fVar0 <= 200.0f)
		{
			Function_533(&fLocal_1005, 60.0f, 200.0f, bLocal_976, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_498, 1, bLocal_508, Local_4, 325, 1);
		}
	}
	else
	{
		if (!Function_533(&fLocal_1005, 60.0f, 200.0f, bLocal_976, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_498, 1, bLocal_508, Local_4, 325, 1))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_976)))
			{
				Function_230(3, 1, 1);
			}
		}
		if (!Function_568())
		{
			if (fVar0 < 12.0f)
			{
				if (!Function_530(Global_34573, bLocal_976, Local_4.f_1884))
				{
					if (!iLocal_1177)
					{
						iLocal_1177 = 1;
						PAUSE_SCRIPTED_CONVERSATION(1, 1);
						Function_535("Ranch04_farBehind");
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
							SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
						}
					}
				}
				else if (GET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_976) == 20.0f)
				{
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_976, 3);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_976, 20.0f);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(bLocal_976), 20.0f);
					if (!iLocal_1177)
					{
						iLocal_1177 = 1;
						PAUSE_SCRIPTED_CONVERSATION(1, 1);
						Function_535("Ranch04_farAhead");
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
							SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
						}
					}
				}
				if (!IS_ACTOR_IN_VOLUME(bLocal_976, (*&Local_4 + 808)[0]))
				{
					if (GET_TASK_STATUS(bLocal_976, 43) != 1)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1884, 4, 0, 0, 1, false);
					}
				}
				else if (GET_TASK_STATUS(bLocal_976, 0) != 1)
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
					if (!ACTORS_IN_RANGE(Global_34573, bLocal_976, 10.0f))
					{
						Function_567();
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
							SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
						}
					}
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 892)[3], 2, 0, 1);
					TASK_FACE_ACTOR(false, bLocal_977, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_976, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
					Function_217(&iLocal_1088);
				}
				else if (Function_219(&iLocal_1088))
				{
					if (Function_296(&iLocal_1088) < 10.0f)
					{
						bVar1 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_FACE_ACTOR(false, bLocal_977, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_976, bVar1);
						TASK_SEQUENCE_RELEASE(bVar1, 1);
						Function_217(&iLocal_1088);
						Function_535("Ranch04_farBehind");
					}
					if (GET_TASK_STATUS(bLocal_976, 6) == 1)
					{
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
							SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
						}
					}
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[0]) || ACTORS_IN_RANGE(Global_34573, bLocal_977, 20.0f))
					{
						AI_GOAL_LOOK_AT_ACTOR(bLocal_977, Global_34573, 0, 2.0f, 4.0f, 10.0f, 0);
						MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_976);
						Function_240(105);
						return 1;
					}
				}
			}
			if (iLocal_1001 == 0)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
				CLEAR_ACTOR_MAX_SPEED(bLocal_976);
				CLEAR_ACTOR_MAX_SPEED(GET_MOUNT(bLocal_976));
			}
			else
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_976, 3);
				CLEAR_ACTOR_MAX_SPEED(bLocal_976);
				CLEAR_ACTOR_MAX_SPEED(GET_MOUNT(bLocal_976));
			}
			MEMORY_PREFER_RIDING(bLocal_976, true);
			if (!IS_ACTOR_IN_VOLUME(bLocal_976, (*&Local_4 + 808)[0]))
			{
				if (GET_TASK_STATUS(bLocal_976, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1884, 4, 0, 0, 1, false);
				}
			}
			else if (GET_TASK_STATUS(bLocal_976, 0) != 1)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_976, 10.0f))
				{
					Function_567();
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
						SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
					}
				}
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 892)[3], 2, 0, 1);
				TASK_FACE_ACTOR(false, bLocal_977, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_976, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				Function_217(&iLocal_1088);
			}
			else if (Function_219(&iLocal_1088))
			{
				if (Function_296(&iLocal_1088) < 10.0f)
				{
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_FACE_ACTOR(false, bLocal_977, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_976, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
					Function_217(&iLocal_1088);
					Function_535("Ranch04_farBehind");
				}
				if (GET_TASK_STATUS(bLocal_976, 6) == 1)
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "one_hnd_hrs"))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
						SET_ANIM_SET_FOR_ACTOR(bLocal_976, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "stand_ambient/one_hnd_hrs");
					}
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[0]) || ACTORS_IN_RANGE(Global_34573, bLocal_977, 20.0f))
				{
					AI_GOAL_LOOK_AT_ACTOR(bLocal_977, Global_34573, 0, 2.0f, 4.0f, 10.0f, 0);
					MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_976);
					Function_240(105);
					return 1;
				}
			}
			if (iLocal_1001 == 0)
			{
				Function_561();
			}
		}
		else if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[0]) || ACTORS_IN_RANGE(Global_34573, bLocal_977, 20.0f))
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				AI_GOAL_LOOK_AT_ACTOR(bLocal_977, Global_34573, 0, 2.0f, 4.0f, 10.0f, 0);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_976);
				Function_240(105);
				return 1;
			}
		}
	}
	return 0;
}

void Function_561() //Position: 0x22B4F / 142159
{
	if (iLocal_1177)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_976, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_1177 = 0;
				Function_535("Ranch04_comesBack");
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_219(&iLocal_1079))
		{
			Function_216(&iLocal_1079);
		}
	}
	else
	{
		if (iLocal_1058)
		{
			iLocal_1058 = 0;
		}
		if (!Function_219(&iLocal_1079))
		{
			Function_217(&iLocal_1079);
		}
		if (Function_296(&iLocal_1079) < 4.0f)
		{
			if (!Function_219(&iLocal_1008))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_976, 12.0f))
				{
					switch (iLocal_1021)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1058 = 1;
								Function_566();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1021 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1058 = 1;
								Function_565();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1021 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1058 = 1;
								Function_564();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1021 = 3;
								}
							}
							break;
						
						case 0x00000003:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1058 = 1;
								Function_563();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1021 = 4;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						default:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_562();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1021 = 99;
								}
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_562() //Position: 0x22C9B / 142491
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_noTalk", "Ranch04_noTalk", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_563() //Position: 0x22CE0 / 142560
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v4_AA", "Ranch04_rideOut_v4_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AB", "Ranch04_rideOut_v4_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v4_AC", "Ranch04_rideOut_v4_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AD1", "Ranch04_rideOut_v4_AD1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AD2", "Ranch04_rideOut_v4_AD2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v4_AE", "Ranch04_rideOut_v4_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AF1", "Ranch04_rideOut_v4_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AF2", "Ranch04_rideOut_v4_AF2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AF3", "Ranch04_rideOut_v4_AF3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v4_AG", "Ranch04_rideOut_v4_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AH", "Ranch04_rideOut_v4_AH", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_564() //Position: 0x22F77 / 143223
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AA", "Ranch04_rideOut_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v3_AB", "Ranch04_rideOut_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AC", "Ranch04_rideOut_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v3_AD", "Ranch04_rideOut_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AE", "Ranch04_rideOut_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v3_AF", "Ranch04_rideOut_v3_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AG1", "Ranch04_rideOut_v3_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_210", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AG2", "Ranch04_rideOut_v3_AG2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4030", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v3_AH", "Ranch04_rideOut_v3_AH", true, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_565() //Position: 0x231D1 / 143825
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v2_AA", "Ranch04_rideOut_v2_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AB", "Ranch04_rideOut_v2_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v2_AC", "Ranch04_rideOut_v2_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AD1", "Ranch04_rideOut_v2_AD1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AD2", "Ranch04_rideOut_v2_AD2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v2_AE", "Ranch04_rideOut_v2_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AF1", "Ranch04_rideOut_v2_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AF2", "Ranch04_rideOut_v2_AF2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AF3", "Ranch04_rideOut_v2_AF3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AF4", "Ranch04_rideOut_v2_AF4", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v2_AG", "Ranch04_rideOut_v2_AG", true, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566() //Position: 0x2346A / 144490
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v1_AA", "Ranch04_rideOut_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v1_AB", "Ranch04_rideOut_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v1_AC", "Ranch04_rideOut_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v1_AD", "Ranch04_rideOut_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v1_AE", "Ranch04_rideOut_v1_AE", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_567() //Position: 0x235A1 / 144801
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_farBehind", "Ranch04_farBehind", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_568() //Position: 0x235EC / 144876
{
	switch (iLocal_1001)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(bLocal_976, (*&Local_4 + 660)[0]))
			{
				MEMORY_REPORT_POSITION_AUTO(bLocal_976, bLocal_977, true);
				SET_AUTO_CONVERSATION_LOOK(bLocal_976, 0);
				STOP_FORCE_LOOK_AT_COORD(bLocal_976);
				ABORT_SCRIPTED_CONVERSATION(1);
				GET_OBJECT_POSITION((*&Local_4 + 1500)[0], &vLocal_1127);
				FORCE_LOOK_AT_COORD(bLocal_976, &vLocal_1127, 20.0f);
				Function_217(&iLocal_1094);
				iLocal_1001 = 1;
				return 1;
			}
			if (!Function_219(&iLocal_1094))
			{
				Function_217(&iLocal_1094);
				bLocal_1119 = 2.0f;
			}
			else if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				STOP_FORCE_LOOK_AT_COORD(bLocal_976);
			}
			else if (Function_296(&iLocal_1094) < bLocal_1119)
			{
				bLocal_1119 = RAND_FLOAT_RANGE(1.0f, 3.0f);
				Function_217(&iLocal_1094);
				Function_76();
				vLocal_1127 = { StackVal, StackVal, Function_76() };
				vLocal_1127.x = RAND_FLOAT_RANGE(-30.0f, 30.0f);
				vLocal_1127.f_8 = RAND_FLOAT_RANGE(-40.0f, -10.0f);
				GET_OBJECT_RELATIVE_POSITION(bLocal_976, vLocal_1127, &uLocal_1130);
				FORCE_LOOK_AT_COORD(bLocal_976, &uLocal_1130, bLocal_1119);
			}
			break;
		
		case 0x00000001:
			GET_OBJECT_POSITION((*&Local_4 + 1500)[0], &vLocal_1127);
			FORCE_LOOK_AT_COORD(bLocal_976, &vLocal_1127, 20.0f);
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!ACTOR_HAS_ANIM_SET(bLocal_976, "aiming_point"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_976, "aiming_point", 0);
				}
				else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "aiming_point"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "aiming_point");
				}
				STOP_FORCE_LOOK_AT_COORD(bLocal_976);
				AI_GOAL_AIM_AT_OBJECT(bLocal_976, (*&Local_4 + 1500)[0], 0);
				Function_217(&iLocal_1094);
				iLocal_1001 = 2;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000002:
			if (Function_296(&iLocal_1094) < 2.0f)
			{
				if (Function_534(Global_34573, bLocal_976, 36.0f))
				{
					Function_569();
				}
				Function_217(&iLocal_1094);
				iLocal_1001 = 3;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000003:
			if (!ACTOR_HAS_ANIM_SET(bLocal_976, "aiming_point"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_976, "aiming_point", 0);
			}
			else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_976, "aiming_point"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_976, "aiming_point");
			}
			if (Function_296(&iLocal_1094) < 1.0f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_976, 2);
				CLEAR_ACTOR_MAX_SPEED(bLocal_976);
				CLEAR_ACTOR_MIN_SPEED(bLocal_976);
				Function_217(&iLocal_1094);
				iLocal_1001 = 4;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000004:
			if (Function_296(&iLocal_1094) < 3.0f)
			{
				if (ACTOR_HAS_ANIM_SET(bLocal_976, "aiming_point"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_976, 1);
				}
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
				AI_GOAL_AIM_CLEAR(bLocal_976);
				STOP_FORCE_LOOK_AT_COORD(bLocal_976);
				Function_217(&iLocal_1094);
				iLocal_1001 = 7;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000007:
			return 0;
			break;
	}
	return 0;
}

void Function_569() //Position: 0x238D4 / 145620
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_spotPeople", "Ranch04_spotPeople", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_570() //Position: 0x23921 / 145697
{
	var uVar0;
	var uVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	switch (iLocal_1151)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH04_CS02/RANCH04_CS02"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/RANCH04_CS02/RANCH04_CS02", 0, 2, 0, 2, 2);
				iLocal_1151 = 1004;
			}
			else
			{
				iLocal_1151 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_1151 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				iLocal_1151 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar6 = false;
			while (bVar6 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar6, &uVar0, &uVar3))
				{
					bVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar6);
					iVar8 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6);
					if (Function_346(iVar8))
					{
						if (iVar8 == GET_ACTOR_ENUM(Global_34573))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(bVar7), Global_34573);
						}
						if (iVar8 == GET_ACTOR_ENUM(bLocal_976))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(bVar7), bLocal_976);
						}
						if (iVar8 == GET_ACTOR_ENUM(bLocal_977))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(bVar7), bLocal_977);
						}
					}
				}
				bVar6++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			iLocal_1151 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				iLocal_1151 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_571() //Position: 0x23A7D / 146045
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_headOut", "Ranch04_headOut", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_572() //Position: 0x23AC4 / 146116
{
	bool bVar0;
	var uVar1;
	float fVar4;
	
	fVar4 = Function_536(Global_34573, bLocal_976);
	if (fVar4 <= 200.0f)
	{
		Function_533(&fLocal_1005, 60.0f, 200.0f, bLocal_976, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_498, 1, bLocal_508, Local_4, 325, 1);
	}
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (IS_BLIP_VALID(bLocal_1056))
		{
			REMOVE_BLIP(bLocal_1056);
		}
		Function_230(3, 1, 1);
		Function_426("Ranch04_obj01b");
		if (GET_MOUNT(Global_34573) == bLocal_979)
		{
			bLocal_979 = bLocal_978;
			TASK_CLEAR(bLocal_976);
			TASK_MOUNT(bLocal_976, bLocal_979, 0, 1, true, 2);
			SET_ACTORS_HORSE(bLocal_976, bLocal_979);
			Function_397();
		}
		if (GET_MOUNT(Global_34573) != bLocal_978)
		{
			bLocal_978 = GET_MOUNT(Global_34573);
			Function_574(bLocal_978, 0);
			Function_397();
		}
	}
	else if (!IS_ACTOR_ALIVE(bLocal_978))
	{
		Function_426("Horse_find");
		if (IS_ACTOR_VALID(bLocal_978))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_978)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_978));
			}
		}
		if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_979))
		{
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_979, 0);
		}
	}
	else
	{
		Function_426("Ranch04_obj01a");
	}
	if (!IS_ACTOR_RIDING(bLocal_976))
	{
		if (!GET_TASK_STATUS(bLocal_976, 11) != 1)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TASK_MOUNT(bLocal_976, bLocal_979, 0, 1, true, 2);
			}
		}
	}
	if (IS_ACTOR_RIDING(bLocal_976))
	{
		if (GET_TASK_STATUS(bLocal_976, 0) != 1)
		{
			bVar0 = Function_532(bLocal_976, Local_4.f_1884);
			GET_PATH_POINT(Local_4.f_1884, bVar0, &uVar1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(false, &uVar1, 0);
			TASK_GO_TO_COORD(false, &uVar1, 2);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1884, true, 0, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_976, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			iLocal_1142 = 0;
		}
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				if (Function_296(&iLocal_1002) <= 10.0f)
				{
					if (!iLocal_1142)
					{
						iLocal_1142 = 1;
					}
					else
					{
						TASK_OVERRIDE_SET_MOVETYPE(bLocal_976, 3);
					}
					Function_573();
					Function_217(&iLocal_1002);
				}
			}
		}
	}
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
	{
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_976))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_976, 8.0f) || Function_487(Global_34573, (*&Local_4 + 860)[4]) < 30.0f)
			{
				if (GET_TASK_STATUS(bLocal_976, 0) == 1)
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1884, 4, 0, 0, 1, false);
					ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_976, -1.0f, -1.0f, 4, 1, 0);
					if (IS_BLIP_VALID(bLocal_1056))
					{
						REMOVE_BLIP(bLocal_1056);
					}
					iLocal_1021 = Function_515();
					iLocal_1151 = 1000;
					Function_348(&iLocal_1183, 3, 0, 4294967295, 4294967295);
					Function_426("Ranch04_obj01b");
					Function_240(18);
					return 1;
				}
			}
		}
	}
	if (Function_487(Global_34573, (*&Local_4 + 860)[4]) < 30.0f)
	{
		if (GET_TASK_STATUS(bLocal_976, 0) == 1)
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_976);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_976, Local_4.f_1884, 4, 0, 0, 1, false);
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_976, -1.0f, -1.0f, 4, 1, 0);
			if (IS_BLIP_VALID(bLocal_1056))
			{
				REMOVE_BLIP(bLocal_1056);
			}
			iLocal_1021 = Function_515();
			iLocal_1151 = 1000;
			Function_348(&iLocal_1183, 3, 0, 4294967295, 4294967295);
			Function_426("Ranch04_obj01b");
			Function_240(18);
			return 1;
		}
	}
	return 0;
}

void Function_573() //Position: 0x23E18 / 146968
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_waitingOnJon", "Ranch04_waitingOnJon", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_574(var uParam0, int iParam1) //Position: 0x23E69 / 147049
{
	Function_575(iParam1);
	Global_12976.f_72 = uParam0;
	return;
}

void Function_575(bool bParam0) //Position: 0x23E7B / 147067
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

void Function_576() //Position: 0x24036 / 147510
{
	bool bVar0;
	int iVar1;
	
	Function_348(&iLocal_1183, 3, 0, 4294967295, 4294967295);
	Function_253(bLocal_488);
	Function_460(StackVal, StackVal, Function_253(bLocal_488), bLocal_488, Global_30628[2], Function_256(bLocal_488), 0);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_836);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_836);
	CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_836, 15);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(Local_4.f_836);
	Function_538(bLocal_976);
	Function_538(bLocal_978);
	Function_538(bLocal_979);
	TASK_STAND_STILL(bLocal_978, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_979, -1.0f, 0, 0);
	Function_372(bLocal_978, 0);
	Function_372(bLocal_979, 0);
	Function_547();
	Function_546();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar0 = (*&Local_4 + 540)[iVar12];
		if (Function_313(bVar0, 1))
		{
			TASK_PRIORITY_SET(bVar0, true);
			TASK_BIRD_SOAR_AT_COORD(bVar0, &Local_4 + 1012[06], -1.0f, 1106247680);
			SET_ACTOR_INVULNERABILITY(bVar0, false);
		}
		iVar1++;
	}
	Function_457(bLocal_488);
	Function_238(bLocal_978, (*&Local_4 + 860)[4], 1, 1, 1);
	Function_238(bLocal_979, (*&Local_4 + 860)[5], 1, 1, 1);
	Function_397();
	Function_545();
	Function_459();
	iLocal_1021 = 0;
	Function_542();
	if (!GET_TASK_STATUS(bLocal_976, 16) != 1)
	{
		TASK_FOLLOW_PATH(bLocal_976, Local_4.f_1920, 1, 0, 0, 1, false);
		AI_ACTOR_FORCE_SPEED(bLocal_976, true);
	}
	Function_217(&iLocal_1002);
	Function_217(&fLocal_1005);
	Function_217(&iLocal_1008);
	Function_217(&iLocal_1011);
	return;
}

void Function_577() //Position: 0x24173 / 147827
{
	TASK_STAND_STILL(bLocal_978, -1.0f, 0, 0);
	Function_238(bLocal_978, (*&Local_4 + 860)[4], 1, 1, 1);
	DISABLE_CHILD_SECTOR("hen_barn02x");
	DISABLE_CHILD_SECTOR("hen_barn02props01x");
	DISABLE_CHILD_SECTOR("hen_barn03props01x");
	DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
	ENABLE_CHILD_SECTOR("hen_barn01x");
	ENABLE_CHILD_SECTOR("hen_barn01props01x");
	return;
}

void Function_578() //Position: 0x24215 / 147989
{
	if (!Function_633())
	{
		return;
	}
	if (iLocal_489 < 6 && iLocal_489 > 106)
	{
		if (!iLocal_1145)
		{
			GET_OBJECT_POSITION((*&Local_4 + 1500)[0], &vLocal_1127);
			STREAMING_LOAD_BOUNDS_EXT(0, vLocal_1127, 30.0f, 0);
			if (STREAMING_ARE_BOUNDS_LOADED(vLocal_1127, 30.0f))
			{
				Function_548();
				bLocal_997 = FIND_OBJECT_IN_LAYOUT(Local_4, "DeadHorse01");
				if (IS_OBJECT_VALID(bLocal_997))
				{
					SET_CORPSE_PERMANENT(bLocal_997, 1);
					bLocal_997 = "";
				}
				else
				{
					LOG_ERROR("HORSE01 NOT SET PERMANENT");
				}
				bLocal_997 = FIND_OBJECT_IN_LAYOUT(Local_4, "DeadHorse02");
				if (IS_OBJECT_VALID(bLocal_997))
				{
					SET_CORPSE_PERMANENT(bLocal_997, 1);
					bLocal_997 = "";
				}
				else
				{
					LOG_ERROR("HORSE02 NOT SET PERMANENT");
				}
				iLocal_1145 = 1;
			}
		}
		GET_OBJECT_POSITION(bLocal_976, &vLocal_1127);
		STREAMING_LOAD_BOUNDS_EXT(1, vLocal_1127, 30.0f, 0);
	}
	Function_492();
	Function_482();
	return;
}

void Function_579() //Position: 0x24329 / 148265
{
	switch (iLocal_489)
	{
		case 0x00000000:
			Function_590(&Local_509, 1);
			if (!IS_LAYOUTREF_VALID(bLocal_508))
			{
				bLocal_508 = CREATE_LAYOUT("Ranch04_DynamicLayout");
			}
			Function_589();
			Function_588();
			Function_587("FTR_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_1183 = 0;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_234(1);
			Function_163(114696);
			Function_585(0, 0);
			iLocal_998 = 0;
			iLocal_999 = 0;
			if (!IS_ACTOR_VALID(bLocal_976))
			{
				bLocal_976 = Function_418(3, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else if ((!Function_300(&Local_509) && Local_509.f_24 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R4/R4"))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -840,0001f, 91,77865f, 2401,022f, -131,7449f, 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(bLocal_976, -839,9487f, 91,73472f, 2399,405f, 213,6059f, 1, true, 1);
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_976, -1.0f, 0, 0);
				Function_581();
				Global_63097 = 1;
				iLocal_489 = 6;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R4/R4"))
				{
					LOG_ERROR("R4/R4 cutscene does not exist");
				}
				iLocal_489 = 8;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_217(&iLocal_1002);
				iLocal_489 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_290("$/cutscene/R4/R4", &Local_490, &Local_509, &bLocal_488, 77839, 76275, 73917, 73338, 56017, 55969, 0, 1, 1, 2, 2, 0, 1))
			{
			}
			break;
		
		case 0x00000008:
			if (Function_580())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_315();
				}
				iLocal_489 = 9;
			}
			break;
		
		case 0x00000009:
			Function_309();
			bLocal_488 = false;
			iLocal_489 = 0;
			Local_490 = 1000;
			Function_306(&Local_509, &bLocal_488, &iLocal_489);
			Function_305(StackVal, StackVal, StackVal, StackVal, StackVal, Function_315(), Local_509);
			switch (bLocal_488)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_241();
					break;
				
				case 0x00000002:
					Function_239();
					break;
				
				case 0x00000003:
					Function_237();
					break;
				
				case 0x00000065:
					Function_233();
					break;
				
				default:
					LOG_ERROR("MissionInit: Invalid stage! I will loop forever!");
					break;
			}
			break;
	}
	return;
}

bool Function_580() //Position: 0x245C5 / 148933
{
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_328())
	{
		return 0;
	}
	if (!STREAMING_IS_WORLD_LOADED())
	{
		return 0;
	}
	if (!Function_320(&bLocal_516))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_978))
	{
		if (Function_338())
		{
			bLocal_978 = Function_332(1, 1, 0, 0, 0, 0, 1, 0);
		}
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_978, 1))
	{
		return 0;
	}
	return 1;
}

int Function_581() //Position: 0x24622 / 149026
{
	switch (bLocal_488)
	{
		case 0x00000063:
			Function_584(&iLocal_791);
			if (IS_ACTOR_VALID(bLocal_976))
			{
				Function_582(bLocal_976, &iLocal_791);
			}
			Function_582(Global_34573, &iLocal_791);
			return 1;
			break;
		
		case 0x00000000:
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000003:
		case 0x00000065:
			return 1;
			break;
	}
	return 0;
}

void Function_582(bool bParam0, int iParam1) //Position: 0x2467F / 149119
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = Function_583(bParam0, iParam1);
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= *iParam1)
			{
				if (!IS_ACTOR_VALID((*iParam1)[iVar19]))
				{
					(*iParam1)[iVar19] = bParam0;
					return;
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_583(int iParam0, int iParam1) //Position: 0x246C5 / 149189
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if (IS_ACTOR_VALID((*iParam1)[iVar09]))
		{
			if (iParam0 == (*iParam1)[iVar09])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_584(int iParam0) //Position: 0x246F9 / 149241
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar09] = "";
		*(iParam0[iVar09] + 4) = { 0.0f, 0.0f, 0.0f };
		iParam0[iVar09]->f_16 = 0.0f;
		*(iParam0[iVar09] + 20) = { 0.0f, 0.0f, 0.0f };
		iParam0[iVar09]->f_32 = 0.0f;
		iVar0++;
	}
	return;
}

void Function_585(var uParam0, int iParam1) //Position: 0x24747 / 149319
{
	Function_213(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_586(StackVal, iParam1);
	}
	return;
}

void Function_586(int iParam0, int iParam1) //Position: 0x24778 / 149368
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_213(iParam0);
	Function_9(iVar0);
	PRINTNL();
	Function_211(iParam0, iVar0, iParam1);
	return;
}

void Function_587(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2479D / 149405
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_349(uParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

void Function_588() //Position: 0x247B9 / 149433
{
	Function_329(&bLocal_516, "ranch04", 10, 0);
	Function_329(&bLocal_516, "carry_bucket", 5, 0);
	Function_329(&bLocal_516, "custom/carry_bucket", 8, 0);
	Function_329(&bLocal_516, "dead_ground_horse", 5, 0);
	Function_329(&bLocal_516, "dead_ground_male", 5, 0);
	Function_329(&bLocal_516, "$/fragments/p_gen_bucket03x", 0, 0);
	Function_329(&bLocal_516, "aiming_point", 5, 0);
	Function_329(&bLocal_516, "custom/aiming_point", 8, 0);
	Function_329(&bLocal_516, "sleeping_wall_scripted", 5, 0);
	Function_329(&bLocal_516, "custom/sleeping_wall_scripted", 8, 0);
	Function_329(&bLocal_516, "nnear_fire", 5, 0);
	Function_329(&bLocal_516, "custom/near_fire", 8, 0);
	Function_329(&bLocal_516, "stand_ambient", 5, 0);
	Function_329(&bLocal_516, "custom/stand_ambient", 8, 0);
	Function_329(&bLocal_516, "crowd_pointing_R", 5, 0);
	Function_329(&bLocal_516, "custom/crowd_pointing_R", 8, 0);
	Function_329(&bLocal_516, "stand_wringhands", 5, 0);
	Function_329(&bLocal_516, "custom/stand_wringhands", 8, 0);
	Function_329(&bLocal_516, "slap_horse", 5, 0);
	Function_329(&bLocal_516, "custom/slap_horse", 8, 0);
	Function_329(&bLocal_516, "pull_pitchfork", 5, 0);
	Function_329(&bLocal_516, "custom/pull_pitchfork", 8, 0);
	Function_329(&bLocal_516, "pull_pitchfork_shoot", 5, 0);
	Function_329(&bLocal_516, "custom/pull_pitchfork_shoot", 8, 0);
	Function_329(&bLocal_516, "$/content/scripting/gringo/simplegringo/pull_pitchfork", 1, 0);
	return;
}

void Function_589() //Position: 0x24AD5 / 150229
{
	return;
}

void Function_590(int iParam0, bool bParam1) //Position: 0x24ADB / 150235
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_596(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_300(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_14(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_23(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_300(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_205();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_258();
	Function_293();
	Function_247("");
	Function_595(0);
	Function_594();
	Function_198();
	Function_197();
	ENABLE_JOURNAL_REPLAY(0);
	Function_593();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_356(0, 0x40400000);
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
	Function_592(13);
	Function_592(14);
	Function_592(25);
	Function_592(24);
	Function_592(12);
	Function_592(27);
	Function_592(26);
	Function_592(15);
	Function_591();
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
	Var1 = { StackVal, StackVal, StackVal, Function_13(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_591() //Position: 0x24EFF / 151295
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

void Function_592(int iParam0) //Position: 0x24F73 / 151411
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_593() //Position: 0x24F93 / 151443
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

void Function_594() //Position: 0x24FD0 / 151504
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_595(int iParam0) //Position: 0x24FE4 / 151524
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_201())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_596(int iParam0, int iParam1) //Position: 0x25019 / 151577
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
			Function_597(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_597(int iParam0) //Position: 0x2509B / 151707
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

void Function_598() //Position: 0x250E9 / 151785
{
	return;
}

bool Function_599() //Position: 0x250EF / 151791
{
	if (IS_ACTORSET_VALID(Local_4.f_632))
	{
		bLocal_1125 = false;
		while (bLocal_1125 <= GET_ACTORSET_SIZE(Local_4.f_632))
		{
			bLocal_1123 = GET_ACTOR_FROM_ACTORSET(Local_4.f_632, bLocal_1125);
			if (IS_ACTOR_VALID(bLocal_1123))
			{
				if (Function_600(Global_34573, bLocal_1123, 1, 0, 1))
				{
					return 1;
				}
			}
			bLocal_1125++;
		}
	}
	return 0;
}

bool Function_600(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x25146 / 151878
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
		if (GET_LAST_ATTACKER(bParam0) == bParam1)
		{
			CLEAR_LAST_HIT(bParam0);
			return 1;
		}
	}
	if (bParam3)
	{
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			if (IS_PLAYER_WEAPON_ZOOMED(Global_34573))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			if (AI_IS_HOSTILE_OR_ENEMY(bParam1, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_601(bool bParam0, int iParam1) //Position: 0x25210 / 152080
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
	Function_602(bVar0, iVar1);
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

void Function_602(bool bParam0, bool bParam1) //Position: 0x25293 / 152211
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

bool Function_603(int iParam0) //Position: 0x252C2 / 152258
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_611();
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_610();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_610();
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
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_609();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_611();
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_608();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_610();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_607();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_610();
					}
					break;
			}
			break;
		
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_606();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_611();
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_608();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_610();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_605();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_610();
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
			Function_604(iParam0, 1);
			return 1;
		}
	}
	Function_604(iParam0, 0);
	return 0;
}

void Function_604(int iParam0, bool bParam1) //Position: 0x254BB / 152763
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

void Function_605() //Position: 0x254DF / 152799
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_assaultChar", "Ranch04_assaultChar", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_606() //Position: 0x2552E / 152878
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_assaultBon", "Ranch04_assaultBon", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_607() //Position: 0x2557B / 152955
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_shootChar", "Ranch04_shootChar", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_608() //Position: 0x255C6 / 153030
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_attacksDrew", "Ranch04_attacksDrew", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_609() //Position: 0x25615 / 153109
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_shootBon", "Ranch04_shootBon", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_610() //Position: 0x2565E / 153182
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_shootsHorse", "Ranch04_shootsHorse", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_611() //Position: 0x256AD / 153261
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_shootBonHorse", "Ranch04_shootBonHorse", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_612(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x25700 / 153344
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
		Function_604(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_631(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_630(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_630(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_616(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_154(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_604(iParam2, 0);
														return 0;
													}
													if (Function_154(bVar17, 2))
													{
														Function_615(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_614(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_154(bVar17, 4))
													{
														Function_615(&bVar17);
														strcpy(&Var18, "", 64);
														Function_613(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_247(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_614(StackVal, iParam2, bVar17);
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
	Function_604(iParam2, 0);
	return 0;
}

void Function_613(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x25A99 / 154265
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

void Function_614(var uParam0, int iParam1, bool bParam2) //Position: 0x25B84 / 154500
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
			Function_37(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_37(&bParam2, 2);
			break;
	}
	Function_37(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_615(bool bParam0) //Position: 0x25BFA / 154618
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_37(&iVar0, 1);
	Function_37(&iVar0, 2);
	Function_37(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_616(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x25C1C / 154652
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
			return Function_627(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_620(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_627(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_617(iParam0, bVar2);
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
						bVar2 = Function_627(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_617(iParam0, bVar2);
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

var Function_617(int iParam0, bool bParam1) //Position: 0x25D66 / 154982
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_154(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_619(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_618(16);
			}
		}
	}
	else if (Function_154(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_619(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_618(256);
			}
		}
	}
	return bParam1;
}

bool Function_618(int iParam0) //Position: 0x25E99 / 155289
{
	return 2 | iParam0;
}

int Function_619(int iParam0) //Position: 0x25EA3 / 155299
{
	return 4 | iParam0;
}

int Function_620(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x25EAD / 155309
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
				iParam3 = Function_626(iParam0, iParam1, bParam4);
				if (Function_154(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_37(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_618(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_621(iParam0, iParam1, 0, bParam4);
				if (Function_154(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_37(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_618(16);
		}
	}
	return 0;
}

int Function_621(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25F5F / 155487
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_625(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_624(iVar0, 3, 1, bParam3))
			{
				if (!Function_630(iParam0, 8, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_624(iVar0, 2, 1, bParam3))
			{
				if (!Function_630(iParam0, 32, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_624(iVar0, 1, 1, bParam3))
			{
				if (!Function_630(iParam0, 64, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_624(iVar0, 3, 1, bParam3))
			{
				if (!Function_630(iParam0, 128, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_624(iVar0, 1, 1, bParam3))
			{
				if (!Function_630(iParam0, 1024, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_624(iVar0, 1, 1, bParam3))
			{
				if (!Function_630(iParam0, 1024, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_622(int iParam0, int iParam1, bool bParam2) //Position: 0x26119 / 155929
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_623(int iParam0, int iParam1, bool bParam2) //Position: 0x2612E / 155950
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_624(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x26143 / 155971
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_625(int iParam0) //Position: 0x26160 / 156000
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

int Function_626(var uParam0, int iParam1, bool bParam2) //Position: 0x261CF / 156111
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_625(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_624(iVar0, 3, 1, bParam2))
			{
				if (!Function_630(uParam0, 8, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000009:
			if (Function_624(iVar0, 3, 1, bParam2))
			{
				if (!Function_630(uParam0, 8, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x0000006E:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(uParam0, 16, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x0000005B:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(uParam0, 32, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000031:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 64, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000007:
			if (Function_624(iVar0, 3, 1, bParam2))
			{
				if (!Function_630(uParam0, 128, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000008:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(uParam0, 256, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000014:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 512, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000018:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 512, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000057:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 1024, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000058:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 1024, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_627(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x263EA / 156650
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
						return Function_626(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_630(iParam0, 2, 1))
					{
						return Function_619(8);
					}
					return Function_618(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_630(iParam0, 4, 1))
					{
						return Function_619(16);
					}
					return Function_618(16);
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
							return Function_621(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_630(iParam0, 2, 1))
						{
							return Function_619(128);
						}
						return Function_618(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_630(iParam0, 4, 1))
						{
							return Function_619(256);
						}
						return Function_618(256);
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
						return Function_621(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_630(iParam0, 2, 1))
					{
						return Function_619(8);
					}
					return Function_618(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_630(iParam0, 4, 1))
					{
						return Function_619(16);
					}
					return Function_618(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_629(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_630(iParam0, 2, 1))
					{
						return Function_619(8);
					}
					return Function_618(8);
				}
				if (!Function_630(iParam0, 4, 1))
				{
					return Function_619(16);
				}
				return Function_618(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_621(iParam0, uParam1, 1, bParam5);
							if (Function_154(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_37(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_628(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_618(128);
							}
							if (!Function_630(iParam0, 2, 1))
							{
								return Function_619(8);
							}
							return Function_618(8);
						}
						if (iParam4 == 2)
						{
							if (Function_628(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_618(256);
							}
							if (!Function_630(iParam0, 4, 1))
							{
								return Function_619(16);
							}
							return Function_618(16);
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

bool Function_628(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x266A9 / 157353
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

int Function_629(int iParam0, var uParam1, bool bParam2) //Position: 0x26762 / 157538
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_625(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(iParam0, 16, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x0000005B:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(iParam0, 32, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000057:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(iParam0, 1024, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000058:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(iParam0, 1024, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_630(int iParam0, bool bParam1, bool bParam2) //Position: 0x26876 / 157814
{
	if (bParam2)
	{
		if (!Function_154(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_154(iParam0->f_40, bParam1);
}

int Function_631(int iParam0) //Position: 0x2689E / 157854
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_632(int iParam0) //Position: 0x268CF / 157903
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_633() //Position: 0x268ED / 157933
{
	switch (iLocal_489)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
	}
	return 1;
}

void Function_634() //Position: 0x26925 / 157989
{
	if (!Function_219(&iLocal_1091))
	{
		Function_217(&iLocal_1091);
	}
	else if (Function_296(&iLocal_1091) <= 5.0f)
	{
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
		{
			if (IS_ACTOR_VALID(bLocal_976))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_976, 1.0f))
				{
					if (Function_637(Global_34573, bLocal_976) < 8.0f)
					{
						Function_535("Ranch04_rideIntoBon");
						Function_217(&iLocal_1091);
					}
				}
			}
		}
		if (DECOR_GET_BOOL(Global_34573, "beingBucked"))
		{
			if (IS_ACTOR_VALID(bLocal_976))
			{
				if (ACTORS_IN_RANGE(bLocal_976, Global_34573, 20.0f))
				{
					Function_535("Ranch04_buckedOffHorse");
					Function_217(&iLocal_1091);
				}
			}
		}
		Function_636();
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_635(GET_WEAPON_IN_HAND(Global_34573)))
			{
				bLocal_1123 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_VALID(bLocal_1123))
				{
					if (IS_ACTOR_HUMAN(bLocal_1123))
					{
						if (bLocal_1123 == bLocal_976)
						{
							if (Function_219(&iLocal_1082))
							{
								if (Function_296(&iLocal_1082) < 0,25f)
								{
									Function_535("Ranch04_gunBon");
									Function_217(&iLocal_1091);
								}
							}
							else
							{
								Function_217(&iLocal_1082);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(Global_34573, bLocal_1123))
						{
							if (Function_219(&iLocal_1082))
							{
								if (Function_296(&iLocal_1082) < 0,25f)
								{
									Function_535("Ranch04_gunChar");
									Function_217(&iLocal_1091);
								}
							}
							else
							{
								Function_217(&iLocal_1082);
							}
						}
						else if (Function_219(&iLocal_1082))
						{
							Function_216(&iLocal_1082);
						}
					}
					else if (Function_219(&iLocal_1082))
					{
						Function_216(&iLocal_1082);
					}
				}
				else if (Function_219(&iLocal_1082))
				{
					Function_216(&iLocal_1082);
				}
			}
			else if (Function_219(&iLocal_1082))
			{
				Function_216(&iLocal_1082);
			}
		}
		else if (Function_219(&iLocal_1082))
		{
			Function_216(&iLocal_1082);
		}
	}
	return;
}

bool Function_635(bool bParam0) //Position: 0x26B0A / 158474
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

void Function_636() //Position: 0x26B50 / 158544
{
	if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_635(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					if (Function_296(&iLocal_1091) <= 3.0f)
					{
						Function_535("Ranch04_shootRandom");
						Function_217(&iLocal_1091);
					}
				}
			}
		}
	}
	return;
}

float Function_637(bool bParam0, bool bParam1) //Position: 0x26BAB / 158635
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	GET_ACTOR_VELOCITY(bParam1, &vVar3);
	return VMAG(Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar0, StackVal));
}

void Function_638(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x26BCD / 158669
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_41())
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

