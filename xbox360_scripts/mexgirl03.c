//Decompiled with MagicRDR v1.0
//Function Count : 582
//Statics Count : 686
//Natives Count : 736
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1521> Local_4 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_668 = 0;
	iLocal_669 = 0;
	iLocal_670 = 0;
	iLocal_671 = 0;
	iLocal_672 = 0;
	iLocal_673 = 0;
	iLocal_674 = 0;
	iLocal_675 = 0;
	iLocal_676 = 0;
	Local_390 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_437 = 99;
	iLocal_438 = 6;
	iLocal_430 = 1000;
	while (Function_271())
	{
		Function_213();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x64 / 100
{
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 872)[5]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 872)[5]);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 872)[5]);
	}
	SET_ALLOW_RIDE_BY_AI(bLocal_442, 1);
	Function_210(8, 1, 0, 1, 1);
	STREAMING_UNLOAD_BOUNDS();
	Function_209();
	Function_208();
	Function_207();
	Function_206();
	Function_205();
	Function_204();
	if (IS_ACTOR_VALID(bLocal_476))
	{
		DESTROY_ACTOR(bLocal_476);
	}
	if (IS_ACTOR_VALID(bLocal_478))
	{
		DESTROY_ACTOR(bLocal_478);
	}
	if (IS_ACTOR_VALID(bLocal_477))
	{
		DESTROY_ACTOR(bLocal_477);
	}
	DISABLE_PLAYER_GRINGO_USE(0, 0);
	Function_203(bLocal_389);
	Function_203(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_202();
	Function_175(bLocal_462, 1, 0, 1, 0, 0, 0, 0);
	Function_174();
	Function_173(&(Global_29008[Global_30707[1]]), 384);
	Function_169(&bLocal_397);
	Function_169(&bLocal_413);
	Function_167();
	if (IS_ITERATOR_VALID(bLocal_440))
	{
		DESTROY_ITERATOR(bLocal_440);
	}
	RELEASE_LAYOUT_REF(bLocal_389);
	if (bLocal_461)
	{
		Function_24(Local_390, 1, 1, 1, 0);
	}
	else if (bLocal_462)
	{
		Function_20(Local_390);
	}
	else
	{
		Function_2(Local_390);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x174 / 372
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x195 / 405
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1B0 / 432
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x1D1 / 465
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x1E7 / 487
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

void Function_7(int iParam0) //Position: 0x283 / 643
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x2A4 / 676
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

void Function_9() //Position: 0x2EA / 746
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x303 / 771
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x356 / 854
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

struct<16> Function_12(int iParam0) //Position: 0x47A / 1146
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x49F / 1183
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x4BF / 1215
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x4D6 / 1238
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x4F1 / 1265
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x738 / 1848
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x761 / 1889
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

bool Function_19(int iParam0) //Position: 0x785 / 1925
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x79A / 1946
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x7B8 / 1976
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

struct<16> Function_22(int iParam0) //Position: 0x85E / 2142
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x888 / 2184
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xADE / 2782
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

void Function_25() //Position: 0xBCB / 3019
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

int Function_26(int iParam0, bool bParam1) //Position: 0xBFB / 3067
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

int Function_27(int iParam0) //Position: 0xC38 / 3128
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xC52 / 3154
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xC68 / 3176
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF5F / 3935
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

void Function_31(char* cParam0, int iParam1) //Position: 0xFCB / 4043
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x1002 / 4098
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

bool Function_33(var uParam0, int iParam1) //Position: 0x107A / 4218
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x108D / 4237
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

int Function_35(int iParam0) //Position: 0x112E / 4398
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x116B / 4459
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x117E / 4478
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

void Function_38(int iParam0, int iParam1) //Position: 0x1390 / 5008
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x13CA / 5066
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

bool Function_40() //Position: 0x140C / 5132
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1415 / 5141
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

void Function_42() //Position: 0x1466 / 5222
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

void Function_43() //Position: 0x1499 / 5273
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

void Function_44() //Position: 0x159F / 5535
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

void Function_45() //Position: 0x15D2 / 5586
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

void Function_46() //Position: 0x1760 / 5984
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

void Function_47() //Position: 0x1914 / 6420
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1922 / 6434
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

var Function_49() //Position: 0x1B13 / 6931
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1B28 / 6952
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BC3 / 7107
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1E5E / 7774
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

bool Function_53() //Position: 0x248B / 9355
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2493 / 9363
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x24A4 / 9380
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x2599 / 9625
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x25B2 / 9650
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2617 / 9751
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2629 / 9769
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x263B / 9787
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

int Function_61(int iParam0) //Position: 0x276B / 10091
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x277A / 10106
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x27B3 / 10163
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x27F0 / 10224
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x298A / 10634
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

int Function_66(bool bParam0) //Position: 0x2BA4 / 11172
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2BE5 / 11237
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

struct<8> Function_68() //Position: 0x2C6E / 11374
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

struct<8> Function_69() //Position: 0x2D05 / 11525
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

void Function_70() //Position: 0x2D84 / 11652
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2DAA / 11690
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

void Function_72() //Position: 0x2FB4 / 12212
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

bool Function_73(vector3 vParam0) //Position: 0x3055 / 12373
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x306D / 12397
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

vector3 Function_75() //Position: 0x3154 / 12628
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x315D / 12637
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x316C / 12652
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3182 / 12674
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3249 / 12873
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3266 / 12902
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

bool Function_81(int iParam0) //Position: 0x3742 / 14146
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3758 / 14168
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3777 / 14199
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3791 / 14225
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x37F8 / 14328
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

void Function_86() //Position: 0x3A18 / 14872
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A98 / 15000
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3DEA / 15850
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

int Function_89(int iParam0) //Position: 0x3E6D / 15981
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E87 / 16007
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3EB5 / 16053
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4158 / 16728
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

void Function_93(int iParam0, int iParam1) //Position: 0x431B / 17179
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x4579 / 17785
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

int Function_95() //Position: 0x46FE / 18174
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

void Function_96() //Position: 0x479D / 18333
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

void Function_97(int iParam0) //Position: 0x484C / 18508
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

var Function_98(int iParam0) //Position: 0x48AA / 18602
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4939 / 18745
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

var Function_100(int iParam0, int iParam1) //Position: 0x4AD6 / 19158
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

void Function_101() //Position: 0x4B17 / 19223
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4B2D / 19245
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4B6D / 19309
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4BAD / 19373
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4BBC / 19388
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

int Function_106(int iParam0) //Position: 0x4D84 / 19844
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

var Function_107() //Position: 0x4E19 / 19993
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4E3E / 20030
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x52F9 / 21241
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

var Function_110(int iParam0) //Position: 0x560E / 22030
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x56B1 / 22193
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

int Function_112(int iParam0, bool bParam1) //Position: 0x58AC / 22700
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5A48 / 23112
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5B13 / 23315
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
			Function_173(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_154(9, bParam2, 4);
			Function_156(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_156(Global_30640[0]);
			Function_156(Global_30658[0]);
			Function_129(&(Global_29008[Global_30658[0]]), 32768);
			Function_173(&(Global_29008[Global_30658[0]]), 256);
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
			Function_173(&(Global_29008[Global_30640[4]]), 256);
			Function_156(Global_30640[4]);
			Function_156(Global_30658[0]);
			Function_129(&(Global_29008[Global_30658[0]]), 32768);
			Function_173(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_156(Global_30640[0]);
			Function_156(Global_30640[5]);
			Function_154(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_156(Global_30658[3]);
			Function_129(&(Global_29008[Global_30658[3]]), 32768);
			Function_173(&(Global_29008[Global_30658[3]]), 256);
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
			Function_173(&(Global_29008[Global_30679[1]]), 256);
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
			Function_173(&(Global_29008[Global_30685[2]]), 256);
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
			Function_173(&(Global_29008[Global_30717[1]]), 256);
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

void Function_115(int iParam0) //Position: 0x6403 / 25603
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6572 / 25970
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x6678 / 26232
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x66A5 / 26277
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

var Function_119(vector3 vParam0) //Position: 0x66FC / 26364
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x674A / 26442
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x679E / 26526
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

void Function_122() //Position: 0x693C / 26940
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6942 / 26946
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

void Function_124(bool bParam0, int iParam1) //Position: 0x69E6 / 27110
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6A3B / 27195
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6A51 / 27217
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6AA2 / 27298
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

void Function_128(var uParam0, int iParam1) //Position: 0x6ACF / 27343
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6ADE / 27358
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6AED / 27373
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

void Function_131(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6C37 / 27703
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

bool Function_132() //Position: 0x6C82 / 27778
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_133(bool bParam0) //Position: 0x6CAF / 27823
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

int Function_134(int iParam0) //Position: 0x6E5F / 28255
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

void Function_135(bool bParam0, bool bParam1) //Position: 0x6EB6 / 28342
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

var Function_136(int iParam0) //Position: 0x6EDB / 28379
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

bool Function_137(bool bParam0, bool bParam1) //Position: 0x6F31 / 28465
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

bool Function_138(bool bParam0) //Position: 0x6F90 / 28560
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_139(int iParam0) //Position: 0x6F9C / 28572
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_140(int iParam0) //Position: 0x6FB8 / 28600
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

int Function_141(int iParam0, int iParam1) //Position: 0x700A / 28682
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

int Function_142(int iParam0, int iParam1) //Position: 0x707D / 28797
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x70D9 / 28889
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

int Function_144(int iParam0, int iParam1) //Position: 0x714A / 29002
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_145(int iParam0) //Position: 0x71A4 / 29092
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

void Function_146(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7450 / 29776
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

void Function_147(int iParam0, bool bParam1) //Position: 0x76DF / 30431
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

void Function_148() //Position: 0x773E / 30526
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

var Function_149(int iParam0, int iParam1) //Position: 0x77B9 / 30649
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

int Function_150(int iParam0) //Position: 0x83AC / 33708
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_151(int iParam0) //Position: 0x83C1 / 33729
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

bool Function_152(bool bParam0, bool bParam1) //Position: 0x8410 / 33808
{
	return (bParam0 && bParam1) == 0;
}

void Function_153(bool bParam0, bool bParam1) //Position: 0x841D / 33821
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

void Function_154(bool bParam0, bool bParam1, int iParam2) //Position: 0x846E / 33902
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

bool Function_155(int iParam0, int iParam1) //Position: 0x84DC / 34012
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_156(int iParam0) //Position: 0x84EF / 34031
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

var Function_157(int iParam0) //Position: 0x85EE / 34286
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

bool Function_158(var uParam0, int iParam1) //Position: 0x8646 / 34374
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_159(bool bParam0, bool bParam1, int iParam2) //Position: 0x8662 / 34402
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

bool Function_160(int iParam0) //Position: 0x86B9 / 34489
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_161(bool bParam0) //Position: 0x86CB / 34507
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

void Function_162(int iParam0) //Position: 0x86FF / 34559
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

void Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8766 / 34662
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8843 / 34883
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

void Function_165() //Position: 0x89BC / 35260
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_166(int iParam0) //Position: 0x89C8 / 35272
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

void Function_167() //Position: 0x8A0E / 35342
{
	Function_168();
	return;
}

void Function_168() //Position: 0x8A17 / 35351
{
	Function_169(&Local_4 + 4);
	Function_169(&Local_4 + 80);
	Function_169(&Local_4 + 108);
	Function_169(&Local_4 + 220);
	Function_169(&Local_4 + 308);
	Function_169(&Local_4 + 348);
	Function_169(&Local_4 + 472);
	Function_169(&Local_4 + 500);
	Function_169(&Local_4 + 588);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_169(bool bParam0) //Position: 0x8A66 / 35430
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

void Function_170(var uParam0, int iParam1) //Position: 0x8A8C / 35468
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

void Function_171(var uParam0, int iParam1) //Position: 0x8BBA / 35770
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_172(var uParam0, int iParam1) //Position: 0x8BD4 / 35796
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_173(var uParam0, int iParam1) //Position: 0x8BF1 / 35825
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_174() //Position: 0x8C08 / 35848
{
	if (IS_BLIP_VALID(bLocal_464))
	{
		REMOVE_BLIP(bLocal_464);
	}
	if (IS_OBJECT_VALID(bLocal_465))
	{
		DESTROY_OBJECT(bLocal_465);
	}
	if (IS_OBJECT_VALID(bLocal_466))
	{
		RELEASE_OBJECT_REF(bLocal_466);
	}
	if (IS_ACTOR_VALID(bLocal_478))
	{
		RELEASE_ACTOR(bLocal_478);
	}
	if (IS_ACTOR_VALID(bLocal_469))
	{
		RELEASE_ACTOR(bLocal_469);
	}
	if (IS_ACTOR_VALID(bLocal_470))
	{
		RELEASE_ACTOR(bLocal_470);
	}
	if (IS_ACTOR_VALID(bLocal_476))
	{
		RELEASE_ACTOR(bLocal_476);
	}
	if (IS_ACTOR_VALID(bLocal_477))
	{
		RELEASE_ACTOR(bLocal_477);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_477);
	return;
}

void Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8C8D / 35981
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_201());
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
	Function_200();
	CLEAR_PRINTED_OBJECTIVE();
	Function_199();
	Function_197(0);
	Function_196();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_195();
	Function_194();
	Function_200();
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

void Function_176() //Position: 0x8E7E / 36478
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

void Function_177(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x8ED4 / 36564
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_178((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_178(bool bParam0) //Position: 0x8F1A / 36634
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_179() //Position: 0x8F3F / 36671
{
	return Global_12976.f_156;
}

void Function_180() //Position: 0x8F4A / 36682
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_173(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_181(int iParam0, bool bParam1, int iParam2) //Position: 0x8F74 / 36724
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
			Function_173(&(Global_29008[Global_29006]), 2097152);
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
				if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_173(&(Global_29008[iVar0]), 2097155);
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

void Function_182(int iParam0) //Position: 0x907F / 36991
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

bool Function_183() //Position: 0x90FE / 37118
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

void Function_184() //Position: 0x915B / 37211
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

void Function_185() //Position: 0x9181 / 37249
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

void Function_186(int iParam0) //Position: 0x91A7 / 37287
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_187(int iParam0) //Position: 0x91C4 / 37316
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_188(int iParam0) //Position: 0x91D7 / 37335
{
	Function_189(&Global_28842, iParam0);
	return;
}

void Function_189(var uParam0, int iParam1) //Position: 0x91E5 / 37349
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_190(bool bParam0) //Position: 0x9200 / 37376
{
	if (Function_152(bParam0, 1) && !Function_152(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_191(int iParam0) //Position: 0x922D / 37421
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

void Function_192(bool bParam0) //Position: 0x92F4 / 37620
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

void Function_193(bool bParam0) //Position: 0x9370 / 37744
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

void Function_194() //Position: 0x93E4 / 37860
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

void Function_195() //Position: 0x9425 / 37925
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

void Function_196() //Position: 0x9466 / 37990
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_197(int iParam0) //Position: 0x947A / 38010
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

bool Function_198() //Position: 0x94B6 / 38070
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

void Function_199() //Position: 0x94DB / 38107
{
	Global_8722 = 0.0f;
	return;
}

void Function_200() //Position: 0x94E5 / 38117
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

int Function_201() //Position: 0x9510 / 38160
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_202() //Position: 0x952A / 38186
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_203(bool bParam0) //Position: 0x9533 / 38195
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

void Function_204() //Position: 0x958B / 38283
{
	Function_169(&Local_4 + 348);
	return;
}

void Function_205() //Position: 0x9599 / 38297
{
	Function_169(&Local_4 + 308);
	return;
}

void Function_206() //Position: 0x95A7 / 38311
{
	Function_169(&Local_4 + 220);
	return;
}

void Function_207() //Position: 0x95B4 / 38324
{
	Function_169(&Local_4 + 500);
	return;
}

void Function_208() //Position: 0x95C2 / 38338
{
	Function_169(&Local_4 + 108);
	return;
}

void Function_209() //Position: 0x95CF / 38351
{
	Function_169(&Local_4 + 80);
	return;
}

int Function_210(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x95DC / 38364
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
		Function_212(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_211(StackVal);
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

void Function_211(bool bParam0) //Position: 0x98FA / 39162
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

void Function_212(bool bParam0) //Position: 0x9926 / 39206
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_213() //Position: 0x993B / 39227
{
	var uVar0[11];
	int iVar12;
	
	if (Function_270())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Arrival";
		uVar0[4] = "Stage 08 - Kill the captain";
		uVar0[5] = "Stage 03 - El Presidio";
		uVar0[6] = "Stage 04 - Firing Squad";
		uVar0[7] = "Stage 05 - Escape to the River";
		uVar0[8] = "Last Stage";
		uVar0[9] = "KILL ALL SOLDIERS!";
		uVar0[10] = "to the raft!";
		iVar12 = Function_256(&uLocal_423, &uVar0, &Local_390 + 4, 1, 0);
		if (Function_255(&iVar12, &bLocal_437, &iLocal_438, &iLocal_430))
		{
			Function_248();
			Function_247();
		}
		if (iVar12 == 0)
		{
			Function_248();
			Function_247();
			Function_246(&bLocal_461, 8);
		}
		else if (iVar12 == 1)
		{
			Function_248();
			Function_247();
			Function_241(bLocal_437);
			Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
		}
		else if (iVar12 == 2)
		{
			Function_248();
			Function_247();
			Function_232(&bLocal_463, 4);
		}
		else if (iVar12 == 3)
		{
			Function_230();
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&iLocal_443);
			bLocal_437 = true;
			iLocal_438 = 0;
			iLocal_430 = 1000;
		}
		else if (iVar12 == 4)
		{
			Function_230();
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&iLocal_443);
			bLocal_437 = 2;
			iLocal_438 = 0;
			iLocal_430 = 1000;
		}
		else if (iVar12 == 5)
		{
			Function_230();
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&iLocal_443);
			bLocal_437 = 3;
			iLocal_438 = 0;
			iLocal_430 = 1000;
		}
		else if (iVar12 == 6)
		{
			Function_230();
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&iLocal_443);
			bLocal_437 = 4;
			iLocal_438 = 0;
			iLocal_430 = 1000;
		}
		else if (iVar12 == 7)
		{
			Function_230();
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&iLocal_443);
			bLocal_437 = 5;
			iLocal_438 = 0;
			iLocal_430 = 1000;
		}
		else if (iVar12 == 7)
		{
			Function_230();
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&iLocal_443);
			bLocal_437 = 101;
			iLocal_438 = 0;
			iLocal_430 = 1000;
		}
		else if (iVar12 == 8)
		{
			Function_230();
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&iLocal_443);
			if (!IS_ACTOR_VALID(bLocal_476))
			{
				Function_217();
			}
			bLocal_437 = 101;
			iLocal_438 = 0;
			iLocal_430 = 1000;
		}
		else if (iVar12 == 9)
		{
			Function_248();
			Function_216(&Local_4 + 652);
			Function_216(&Local_4 + 760);
			Function_216(&Local_4 + 744);
			Function_216(&Local_4 + 720);
			KILL_ACTOR(bLocal_475);
			Function_215("EVERYONE IS DEAD!!!", 0x40800000, 0, 2, 1, 0);
		}
		else if (iVar12 == 10)
		{
			Function_248();
			Function_214(GET_MOUNT(Global_34573), (*&Local_4 + 1324)[9], 1, 1, 1);
			Function_214(GET_MOUNT(bLocal_477), (*&Local_4 + 1324)[8], 1, 1, 1);
			iLocal_496 = 1;
			iLocal_673 = 9;
		}
	}
	return;
}

void Function_214(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x9CF4 / 40180
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

void Function_215(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9DFB / 40443
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_216(var uParam0) //Position: 0x9E42 / 40514
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

void Function_217() //Position: 0x9E91 / 40593
{
	if (!IS_ACTOR_VALID(bLocal_476))
	{
		Function_227();
		bLocal_476 = (*&Local_4 + 672)[02];
		SET_ACTOR_MAX_HEALTH(bLocal_476, 150.0f);
		SET_ACTOR_HEALTH(bLocal_476, 150.0f);
		Function_222(&(Local_593[217]), bLocal_476, "RebelLeader", 0, 0x5f5e100, 1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_476), "CanBeLasso", false);
		Function_218(&(Local_593[217]), 2);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_476);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_476, false);
	}
	return;
}

void Function_218(int iParam0, int iParam1) //Position: 0x9F19 / 40729
{
	if (iParam1 != 100000000)
	{
		Function_221(iParam0, iParam1);
	}
	else
	{
		Function_219(iParam0, 1);
	}
	return;
}

void Function_219(int iParam0, bool bParam1) //Position: 0x9F39 / 40761
{
	iParam0->f_40 = 0;
	Function_220(iParam0, 2, bParam1);
	Function_220(iParam0, 4, bParam1);
	Function_220(iParam0, 8, bParam1);
	Function_220(iParam0, 16, bParam1);
	Function_220(iParam0, 32, bParam1);
	Function_220(iParam0, 64, bParam1);
	Function_220(iParam0, 128, bParam1);
	Function_220(iParam0, 256, bParam1);
	Function_220(iParam0, 512, bParam1);
	Function_220(iParam0, 1024, bParam1);
	return;
}

void Function_220(int iParam0, int iParam1, bool bParam2) //Position: 0x9F9F / 40863
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

void Function_221(int iParam0, bool bParam1) //Position: 0x9FDB / 40923
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_222(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA006 / 40966
{
	if (!Function_226(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_225(iParam0, bParam2))
	{
		return 0;
	}
	Function_224(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_223(iParam0, iParam4, iParam5);
	return 1;
}

void Function_223(var uParam0, int iParam1, int iParam2) //Position: 0xA042 / 41026
{
	if (iParam1 != 100000000)
	{
		Function_220(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_219(uParam0, iParam2);
	}
	return;
}

void Function_224(var uParam0, int iParam1) //Position: 0xA065 / 41061
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_225(int iParam0, bool bParam1) //Position: 0xA071 / 41073
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

bool Function_226(int iParam0, bool bParam1) //Position: 0xA0FA / 41210
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

void Function_227() //Position: 0xA286 / 41606
{
	(*&Local_4 + 672)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Reyes", 554, -677,3397f, 63,44807f, 3323,948f, 0.0f, 19,07007f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 672)[02], false);
	SET_ACTOR_FACTION((*&Local_4 + 672)[02], 20);
	return;
}

void Function_228(int iParam0) //Position: 0xA2D3 / 41683
{
	Function_229(iParam0, 0.0f);
	return;
}

void Function_229(int iParam0, float fParam1) //Position: 0xA2DF / 41695
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_230() //Position: 0xA300 / 41728
{
	if (IS_BLIP_VALID(bLocal_464))
	{
		REMOVE_BLIP(bLocal_464);
	}
	if (IS_OBJECT_VALID(bLocal_465))
	{
		DESTROY_OBJECT(bLocal_465);
	}
	if (IS_OBJECT_VALID(bLocal_466))
	{
		DESTROY_OBJECT(bLocal_466);
	}
	if (IS_OBJECT_VALID(bLocal_467))
	{
		DESTROY_OBJECT(bLocal_467);
	}
	if (IS_OBJECT_VALID(bLocal_468))
	{
		DESTROY_OBJECT(bLocal_468);
	}
	if (IS_ACTOR_VALID(bLocal_478))
	{
		DESTROY_ACTOR(bLocal_478);
	}
	if (IS_ACTOR_VALID(bLocal_469))
	{
		DESTROY_ACTOR(bLocal_469);
	}
	if (IS_ACTOR_VALID(bLocal_476))
	{
		DESTROY_ACTOR(bLocal_476);
	}
	if (IS_ACTOR_VALID(bLocal_477))
	{
		DESTROY_ACTOR(bLocal_477);
	}
	if (IS_ACTOR_VALID(bLocal_470))
	{
		DESTROY_ACTOR(bLocal_470);
	}
	if (SQUAD_IS_VALID(Local_4.f_808))
	{
		Function_231(&Local_4 + 808);
		DESTROY_OBJECT(Local_4.f_808);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_441);
	return;
}

void Function_231(int iParam0) //Position: 0xA3BE / 41918
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

void Function_232(bool bParam0, int iParam1) //Position: 0xA405 / 41989
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_233(iParam1);
	*bParam0 = 1;
	return;
}

void Function_233(int iParam0) //Position: 0xA428 / 42024
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_236("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_235(2) || Function_235(8)) || Function_235(9)) || Function_235(10))
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
		Function_236("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_236("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_236("");
	}
	else if (iParam0 == 8)
	{
		Function_234();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_234();
	}
	return;
}

void Function_234() //Position: 0xA51F / 42271
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_235(int iParam0) //Position: 0xA52B / 42283
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

void Function_236(bool bParam0) //Position: 0xA561 / 42337
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_237(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA5CB / 42443
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_238(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_233(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_238(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA608 / 42504
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_240(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_239(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_239(int iParam0) //Position: 0xA68B / 42635
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

var Function_240(vector3 vParam0, bool bParam3) //Position: 0xAB39 / 43833
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

vector3 Function_241(int iParam0) //Position: 0xABA4 / 43940
{
	Function_242(iParam0 + 1);
	return StackVal, StackVal, Function_242(iParam0 + 1);
}

vector3 Function_242(int iParam0) //Position: 0xABB1 / 43953
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_243((*&Local_4 + 1060)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1060)[0]);
			break;
		
		case 0x00000001:
			Function_243((*&Local_4 + 1212)[1]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1212)[1]);
			break;
		
		case 0x00000002:
			Function_243((*&Local_4 + 1284)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1284)[0]);
			break;
		
		case 0x00000003:
			Function_243((*&Local_4 + 1116)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1116)[0]);
			break;
		
		case 0x00000004:
			Function_243((*&Local_4 + 1152)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1152)[0]);
			break;
		
		case 0x00000005:
			Function_243((*&Local_4 + 1324)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1324)[0]);
			break;
		
		default:
			Function_243((*&Local_4 + 1176)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1176)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_243((*&Local_4 + 1060)[0]);
	return StackVal, StackVal, Function_243((*&Local_4 + 1060)[0]);
}

vector3 Function_243(bool bParam0) //Position: 0xACBA / 44218
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

int Function_244(int iParam0) //Position: 0xACE1 / 44257
{
	return Function_245(iParam0 + 1);
}

int Function_245(int iParam0) //Position: 0xACEE / 44270
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 1060)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 1212)[1]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1284)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1116)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 1152)[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING((*&Local_4 + 1324)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1176)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 1060)[0]);
}

void Function_246(bool bParam0, int iParam1) //Position: 0xADF7 / 44535
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_233(iParam1);
	*bParam0 = 1;
	return;
}

void Function_247() //Position: 0xAE1A / 44570
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_248() //Position: 0xAE2F / 44591
{
	Function_250();
	Function_249(10, 3);
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0xAE3E / 44606
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

void Function_250() //Position: 0xAF75 / 44917
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_254())
	{
		Function_253(10, 3);
	}
	else
	{
		Function_251();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_251() //Position: 0xAFC0 / 44992
{
	Function_252(25, 2);
	return;
}

void Function_252(int iParam0, int iParam1) //Position: 0xAFCC / 45004
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

void Function_253(int iParam0, int iParam1) //Position: 0xB1CA / 45514
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

bool Function_254() //Position: 0xB301 / 45825
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

bool Function_255(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB368 / 45928
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_248();
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
		Function_236("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_256(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB40E / 46094
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_269(&Var15, &Var0);
	uVar20 = Function_268(*uParam1, &Var15);
	Function_267(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_266(uParam0, uVar20);
	Function_264(StackVal, uParam0, Var15.f_12);
	Function_262(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_261(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_258(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_257(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_257(int iParam0, int iParam1, int iParam2) //Position: 0xB4D5 / 46293
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

bool Function_258(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB531 / 46385
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
				Function_260(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_260(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_257(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_259(bParam1->f_32);
	}
	else
	{
		Function_259(bParam1->f_32);
	}
	return 0;
}

void Function_259(bool bParam0) //Position: 0xB6B7 / 46775
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

void Function_260(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB6F1 / 46833
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

var Function_261(int iParam0, var uParam1, int iParam2) //Position: 0xB79F / 47007
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_262(var uParam0, int iParam1, int iParam2) //Position: 0xB7C3 / 47043
{
	switch (Function_263())
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

int Function_263() //Position: 0xB85F / 47199
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

void Function_264(var uParam0, int iParam1, int iParam2) //Position: 0xB89B / 47259
{
	switch (Function_265(uParam0))
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

int Function_265(bool bParam0) //Position: 0xB933 / 47411
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

var Function_266(var uParam0, int iParam1) //Position: 0xBA7E / 47742
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

void Function_267(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBBCD / 48077
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

var Function_268(int iParam0, int iParam1) //Position: 0xBC60 / 48224
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_269(var uParam0, var uParam1) //Position: 0xBC7A / 48250
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

bool Function_270() //Position: 0xBCC8 / 48328
{
	return Global_30920;
}

bool Function_271() //Position: 0xBCD1 / 48337
{
	if (IS_EXITFLAG_SET())
	{
		Function_241(bLocal_437);
		Function_237(StackVal, StackVal, 4, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
		return 0;
	}
	Function_581(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_390, bLocal_437, iLocal_438, &bLocal_463, &bLocal_461, &bLocal_462);
	if (bLocal_437 == 99 && bLocal_437 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_241(bLocal_437);
			Function_237(StackVal, StackVal, 1, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
			return 1;
		}
		if (Function_561(&Local_593, &uLocal_553, &uLocal_662, bLocal_440, iLocal_511))
		{
			if (Function_555(&uLocal_662))
			{
				Function_241(bLocal_437);
				Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
				return 1;
			}
		}
		Function_550(Function_553(&uLocal_479, &uLocal_507, 1, 7.0f, 0));
		if (Function_549(2048))
		{
			Function_241(bLocal_437);
			Function_237(StackVal, StackVal, 3, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(bLocal_441))
		{
			Function_236("Mexgirl_dead");
			Function_241(bLocal_437);
			Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
			return 1;
		}
		if (!bLocal_524)
		{
			if (IS_ACTOR_VALID(bLocal_476) && bLocal_437 == 101)
			{
				if ((!IS_ACTOR_ALIVE(bLocal_476) || FIRE_IS_ACTOR_ON_FIRE(bLocal_476)) && GET_LAST_ATTACKER(bLocal_476) == Global_34573)
				{
					if ((bLocal_437 != 1 || bLocal_437 != 2) || bLocal_437 != 3)
					{
						bLocal_524 = true;
					}
					else
					{
						Function_236("RebelLeader_dead");
						Function_241(bLocal_437);
						Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
						return 1;
					}
				}
			}
		}
		if (bLocal_524)
		{
			if (!Function_548(&uLocal_550))
			{
				Function_547(&uLocal_550);
			}
			else if (Function_546(&uLocal_550) < 3.0f)
			{
				Function_236("mexgirl03_reyes_execute");
				Function_241(bLocal_437);
				Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
				return 1;
			}
		}
		Function_543(&bLocal_442, bLocal_441);
		Function_542();
	}
	switch (bLocal_437)
	{
		case 0x00000063:
			Function_526();
			break;
		
		case 0x00000000:
			Function_523();
			break;
		
		case 0x00000001:
			Function_502();
			break;
		
		case 0x00000002:
			Function_500();
			break;
		
		case 0x00000003:
			Function_450();
			break;
		
		case 0x00000004:
			Function_444();
			break;
		
		case 0x00000005:
			Function_357();
			break;
		
		case 0x00000065:
			Function_274();
			break;
		
		case 0x00000064:
			if (Function_273(&bLocal_462))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_272(&bLocal_437, &iLocal_438, &iLocal_430))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_461)
	{
		Function_246(&bLocal_461, 8);
		Function_1();
		return 0;
	}
	if (bLocal_462 && bLocal_437 == 100)
	{
		Function_241(bLocal_437);
		Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
	}
	if (bLocal_463)
	{
		Function_232(&bLocal_463, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_272(var uParam0, var uParam1, int iParam2) //Position: 0xBFA2 / 49058
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

bool Function_273(int iParam0) //Position: 0xBFE2 / 49122
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_274() //Position: 0xBFF5 / 49141
{
	switch (iLocal_438)
	{
		case 0x00000000:
			Function_353(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_441, GET_ACTOR_MAX_HEALTH(bLocal_441));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			if (!iLocal_452[5])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_350();
				Function_214(Global_34573, (*&Local_4 + 1176)[0], 1, 1, 1);
				iLocal_496 = 1;
				Function_228(&iLocal_443);
				iLocal_438 = 1;
			}
			else
			{
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000001:
			Function_348();
			if ((STREAMING_IS_WORLD_LOADED_PRIORITY(3) && Function_347()) && iLocal_496 != 3)
			{
				Function_346();
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000002:
			bLocal_442 = GET_MOUNT(Global_34573);
			Function_228(&iLocal_443);
			iLocal_438 = 3;
			break;
		
		case 0x00000003:
			if (Function_276("$/cutscene/MEXGIRL03_CS03/MEXGIRL03_CS03", &iLocal_430, &Local_390, &bLocal_437, 78726, 78624, 77843, 77140, 76752, 52233, 0, 2, 1, 1, 2, 0, 1))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_442, false);
				Function_228(&iLocal_443);
				iLocal_438 = 4;
			}
			break;
		
		case 0x00000004:
			if ((Function_546(&iLocal_443) <= 2.0f && STREAMING_IS_WORLD_LOADED()) && GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(Local_4.f_1484))
			{
				Function_275(1.0f);
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "marston_smoke/04/exit");
				Function_228(&iLocal_443);
				iLocal_438 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_461 = true;
			}
			break;
	}
	return;
}

void Function_275(bool bParam0) //Position: 0xC1AE / 49582
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

bool Function_276(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xC1CB / 49611
{
	if (!bParam15)
	{
		Function_285(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_284(iParam2) || iParam2->f_24 < 1))
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
				Function_228(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_283())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_282(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_228(iParam1 + 4);
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
					Function_282(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_546(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_546(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_280(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_282(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_228(iParam1 + 4);
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
						Function_275(1.0f);
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
						Function_278();
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
					Function_277(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_284(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_277(bool bParam0) //Position: 0xC7DF / 51167
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

void Function_278() //Position: 0xC884 / 51332
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_279();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_279() //Position: 0xC8C9 / 51401
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_280(bool bParam0, bool bParam1) //Position: 0xC8DB / 51419
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
			if ((bVar3 == Global_34573 && !Function_281(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_281(bool bParam0) //Position: 0xC95B / 51547
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

int Function_282(bool bParam0) //Position: 0xC98A / 51594
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

bool Function_283() //Position: 0xCA42 / 51778
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

bool Function_284(int iParam0) //Position: 0xCA7C / 51836
{
	return iParam0->f_20;
}

void Function_285(var uParam0, int iParam1) //Position: 0xCA86 / 51846
{
	Function_286(uParam0, iParam1, 0);
	return;
}

void Function_286(var uParam0, bool bParam1, bool bParam2) //Position: 0xCA94 / 51860
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
			Function_287(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_287(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_287(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xCBE0 / 52192
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

int Function_288() //Position: 0xCC09 / 52233
{
	switch (bLocal_437)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				if (Function_327() && Function_301())
				{
					Function_299();
					Function_291();
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
		
		case 0x00000003:
			Function_214(Global_34573, (*&Local_4 + 1152)[1], 1, 1, 1);
			Function_214(bLocal_476, (*&Local_4 + 1296)[0], 1, 1, 1);
			if (Function_290(Local_4.f_784) < 0)
			{
				DESTROY_OBJECT(Local_4.f_784);
				Function_289();
			}
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

void Function_289() //Position: 0xCCB1 / 52401
{
	Local_4.f_784 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horses"));
	(*&Local_4 + 764)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "H_01", 976, -715,1494f, 63,23293f, 3287,308f, 0.0f, 249,6426f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 764)[02], Local_4.f_784);
	TASK_STAND_STILL((*&Local_4 + 764)[02], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 764)[02], 3);
	(*&Local_4 + 764)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "H_02", 977, -710,6495f, 63,26289f, 3282,628f, 0.0f, 168,08f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 764)[12], Local_4.f_784);
	TASK_STAND_STILL((*&Local_4 + 764)[12], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 764)[12], 3);
	return;
}

int Function_290(bool bParam0) //Position: 0xCD7D / 52605
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

void Function_291() //Position: 0xCDCD / 52685
{
	Function_292();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	TASK_CLEAR(bLocal_441);
	bLocal_490 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1520, 2, 1, 0, 1, false);
	TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_474, 0, 2, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_441, bLocal_490);
	TASK_SEQUENCE_RELEASE(bLocal_490, 1);
	TASK_PRIORITY_SET(bLocal_441, true);
	return;
}

void Function_292() //Position: 0xCE1B / 52763
{
	if (!IS_ACTOR_VALID(bLocal_474))
	{
		Function_294();
		bLocal_474 = (*&Local_4 + 604)[02];
		ENABLE_VEHICLE_SEAT(bLocal_474, false, 0);
		Function_293(bLocal_474);
		Function_222(&(Local_593[117]), bLocal_474, "MGWagon", 1, 0x5f5e100, 1);
	}
	else
	{
		ENABLE_VEHICLE_SEAT(bLocal_474, false, 0);
	}
	return;
}

void Function_293(bool bParam0) //Position: 0xCE72 / 52850
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_FRIENDLY -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(bParam0))
	{
		bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_FACTION(bVar1, 20);
		}
		bVar0++;
	}
	return;
}

void Function_294() //Position: 0xCEE4 / 52964
{
	(*&Local_4 + 604)[02] = Function_295(Local_4, "Wagon", 1199, 977, -2168,773f, 17,38851f, 4942,911f, 0.0f, -1,087488f, 0.0f, 1, 976, 976, 976, 4);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 604)[02], false);
	return;
}

var Function_295(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xCF32 / 53042
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
			if (Function_298(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_297(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_296(bVar16, &iVar1))
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

bool Function_296(int iParam0, int iParam1) //Position: 0xD166 / 53606
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

var Function_297(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xD198 / 53656
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_298(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD1B0 / 53680
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

vector3 Function_299() //Position: 0xD1D7 / 53719
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("mexgirl03_layout");
	Local_4.f_868 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 852)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -2147,302f, 21,30998f, 4966,541f, 0.0f, 29,97828f, 0.0f, 63,37608f, 15,84402f, 97,32751f);
	ADD_TO_VOLUME_SET(Local_4.f_868, (*&Local_4 + 852)[0]);
	(*&Local_4 + 852)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_868, (*&Local_4 + 852)[1]);
	(*&Local_4 + 852)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_868, (*&Local_4 + 852)[2]);
	Local_4.f_920 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Intro_Vols_set");
	(*&Local_4 + 872)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Arriving", 2, -885,5063f, 71,02844f, 3459,772f, 0.0f, 0,9154919f, 0.0f, 15.0f, 35,56342f, 60.0f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[0]);
	(*&Local_4 + 872)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "No_Skip", 2, -1005,403f, 72,29717f, 3482,512f, 0.0f, 19,09753f, 0.0f, 15.0f, 35,56342f, 60.0f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[1]);
	(*&Local_4 + 872)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Arrive_Stop", 2, -771,8818f, 63,514f, 3304,389f, 0.0f, 27,85619f, 0.0f, 23,84423f, 35,80158f, 38,78996f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[2]);
	(*&Local_4 + 872)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Inside_Fort", 3, -731,9033f, 78,2035f, 3303,307f, 0.0f, -34,8117f, 0.0f, 6.0f, 10.0f, 6,283681f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[3]);
	(*&Local_4 + 872)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Start_Taunt", 2, -706,4816f, 63,24707f, 3310,005f, 0.0f, -24,69768f, 0.0f, 74,80878f, 52,29089f, 50,512f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[4]);
	(*&Local_4 + 872)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "No_Ambient", 2, -698,2527f, 63,24707f, 3303,118f, 0.0f, -39,25649f, 0.0f, 81,74729f, 46,54661f, 40,8791f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[5]);
	(*&Local_4 + 872)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nSpot_Torq", 2, -793,6565f, 67,3216f, 3301,728f, 0.0f, -55,99568f, 0.0f, 44,89231f, 54,74784f, 135,8667f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[6]);
	(*&Local_4 + 872)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nDont_Stop", 2, -783,8865f, 64,44145f, 3308,08f, 0.0f, -64,18146f, 0.0f, 35,99099f, 54,74784f, 61,61946f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[7]);
	(*&Local_4 + 872)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LeaveConvers", 2, -764,3283f, 63,68045f, 3298,768f, 0.0f, -55,99568f, 0.0f, 15,98346f, 54,74784f, 39,34919f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[8]);
	(*&Local_4 + 872)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ShootAlert", 2, -689,3385f, 63,78056f, 3327,678f, 0.0f, -55,99568f, 0.0f, 194,5297f, 82,50922f, 116,7601f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[9]);
	(*&Local_4 + 872)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InTower", 3, -717,328f, 75,40679f, 3316,368f, 0.0f, -34,8117f, 0.0f, 12,54331f, 12,18546f, 13,44562f);
	ADD_TO_VOLUME_SET(Local_4.f_920, (*&Local_4 + 872)[10]);
	Local_4.f_952 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "S3_Vols_set");
	(*&Local_4 + 924)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "In_Courtyard", 2, -684,0215f, 63,24707f, 3308,601f, 0.0f, 53,29716f, 0.0f, 24,36192f, 19,65169f, 25,53335f);
	ADD_TO_VOLUME_SET(Local_4.f_952, (*&Local_4 + 924)[0]);
	(*&Local_4 + 924)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Near_Reyes", 3, -678,4454f, 63,24707f, 3316,69f, 0.0f, -0,2709955f, 0.0f, 10,127f, 14,97149f, 8,066444f);
	ADD_TO_VOLUME_SET(Local_4.f_952, (*&Local_4 + 924)[1]);
	(*&Local_4 + 924)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Alert_Guards", 2, -692,8801f, 63,24707f, 3302,508f, -1,352119f, -34,04354f, 1,833305f, 41,22725f, 25,77068f, 26,38286f);
	ADD_TO_VOLUME_SET(Local_4.f_952, (*&Local_4 + 924)[2]);
	(*&Local_4 + 924)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Alert_Guards_0", 2, -710,6722f, 65,50745f, 3299,144f, 1,361628f, 47,99157f, 2,270094f, 18,87839f, 21,71614f, 14,79646f);
	ADD_TO_VOLUME_SET(Local_4.f_952, (*&Local_4 + 924)[3]);
	(*&Local_4 + 924)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OffSnipNest", 2, -715,9097f, 65,48933f, 3293,052f, 1,496578f, 50,17238f, 2,372087f, 35,03299f, 24,38996f, 16,61829f);
	ADD_TO_VOLUME_SET(Local_4.f_952, (*&Local_4 + 924)[4]);
	(*&Local_4 + 924)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CS_Start", 3, -677,2515f, 63,69664f, 3322,898f, 0.0f, 17,33948f, 0.0f, 4,716102f, 2,683502f, 3,321483f);
	ADD_TO_VOLUME_SET(Local_4.f_952, (*&Local_4 + 924)[5]);
	Local_4.f_980 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "S4_Vols_set");
	(*&Local_4 + 956)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nS4_Finish", 2, -724,879f, 62,97328f, 3282,887f, 0.0f, -40,62146f, 0.0f, 3,598381f, 24,88271f, 24,37135f);
	ADD_TO_VOLUME_SET(Local_4.f_980, (*&Local_4 + 956)[0]);
	(*&Local_4 + 956)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Leaving_Fort", 2, -704,4041f, 63,39534f, 3299,708f, 0.0f, 54,38402f, 0.0f, 31,10604f, 7,96239f, 9,399423f);
	ADD_TO_VOLUME_SET(Local_4.f_980, (*&Local_4 + 956)[1]);
	(*&Local_4 + 956)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Dont_Leave", 2, -695,3824f, 63,24707f, 3303,862f, 0.0f, -32,20607f, 0.0f, 41,63456f, 7,981709f, 22,64047f);
	ADD_TO_VOLUME_SET(Local_4.f_980, (*&Local_4 + 956)[2]);
	(*&Local_4 + 956)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Pick_Up", 3, -676,7836f, 63,24707f, 3319,351f, 0.0f, 29,22851f, 0.0f, 7,831734f, 4,456323f, 5,515779f);
	ADD_TO_VOLUME_SET(Local_4.f_980, (*&Local_4 + 956)[3]);
	(*&Local_4 + 956)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Abandon_Reyes", 2, -718,8348f, 63,39534f, 3289,37f, 0.0f, 54,38402f, 0.0f, 31,10604f, 7,96239f, 9,399423f);
	ADD_TO_VOLUME_SET(Local_4.f_980, (*&Local_4 + 956)[4]);
	Local_4.f_1028 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "S5_Vols_set");
	(*&Local_4 + 984)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Spot_Guide", 2, -723,0269f, 63,24707f, 3286,276f, 0.0f, -39,91206f, 0.0f, 4,401531f, 21,45656f, 16,54011f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[0]);
	(*&Local_4 + 984)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "First_Cav_Chase", 2, -803,9163f, 64,03825f, 3300,518f, 0.0f, 13,82261f, 0.0f, 7,614686f, 63,24012f, 68,90417f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[1]);
	(*&Local_4 + 984)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Spawn_First_Inf", 2, -1011,356f, 37,91776f, 3372,599f, 0.0f, -9,197808f, 0.0f, 7,614686f, 33,28429f, 83,93001f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[2]);
	(*&Local_4 + 984)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Announce_First_Inf", 2, -1093,932f, 27,17082f, 3349,248f, 0.0f, -9,197808f, 0.0f, 7,614686f, 33,28429f, 83,93001f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[3]);
	(*&Local_4 + 984)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NoHorseFail", 2, -702,6577f, 63,24707f, 3307,858f, 0.0f, 53,29716f, 0.0f, 62,04222f, 46,25627f, 78,62685f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[4]);
	(*&Local_4 + 984)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StartSlowDown", 2, -1496,448f, 20,18502f, 3670,865f, 0.0f, 25,13816f, 0.0f, 7,614686f, 33,28429f, 83,93001f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[5]);
	(*&Local_4 + 984)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EndSlowDown", 2, -1550,673f, 22,25229f, 3698,239f, 0.0f, 25,13816f, 0.0f, 7,614686f, 33,28429f, 83,93001f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[6]);
	(*&Local_4 + 984)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StartCSEarly", 3, -2121,233f, 8,3f, 3776,341f, 0.0f, 277,6994f, 0.0f, 7,463212f, 8,832316f, 7,372356f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[7]);
	(*&Local_4 + 984)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TeleportLuisa", 2, -2101,266f, 11,70931f, 3891,909f, 0.0f, -25,65625f, 0.0f, 25,28363f, 42,88611f, 465,3692f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[8]);
	(*&Local_4 + 984)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TauntAllow", 2, -1178,808f, 15,28923f, 3335,313f, -0,1880755f, 7,141819f, 0,5893492f, 99,14672f, 65,43492f, 117,1289f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 984)[9]);
	Local_4.f_1052 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "S6_Vols_set");
	(*&Local_4 + 1032)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Guide_Move", 2, -1966,467f, 11,96543f, 3780,289f, 2,118405f, 3,911542f, 2,300171f, 17,12427f, 48,73776f, 92,51093f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1032)[0]);
	(*&Local_4 + 1032)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "At_Luisa_Vol", 2, -2102,951f, 10,27985f, 3793,106f, 0.0f, 26,73616f, 0.0f, 36,65163f, 30,92913f, 48,51594f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1032)[1]);
	(*&Local_4 + 1032)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nSetup_End", 2, -1704,077f, 13,48435f, 3749,343f, -14,2626f, 42,65008f, -1,590319f, 12,84471f, 133,9862f, 532,5955f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1032)[2]);
	(*&Local_4 + 1032)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nNo_Return", 2, -1982,629f, 10,42334f, 3781,917f, 2,700884f, 9,346189f, 1,856837f, 507,1868f, 112,0598f, 243,597f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1032)[3]);
	Local_4.f_1056 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 1060)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -2146,637f, 17,91467f, 4958,636f, 0.0f, 4,664067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[0], Local_4.f_1056);
	(*&Local_4 + 1060)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -2146,637f, 17,91467f, 4958,636f, 0.0f, 4,664067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[1], Local_4.f_1056);
	(*&Local_4 + 1060)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -2145,119f, 17,72864f, 4956,783f, 0.0f, 1,79727f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[2], Local_4.f_1056);
	(*&Local_4 + 1060)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelStart01", -677,1518f, 63,46236f, 3324,316f, 0.0f, 376,8383f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[3], Local_4.f_1056);
	(*&Local_4 + 1060)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -2140,505f, 15,90178f, 4941,358f, 0.0f, -276,3564f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[4], Local_4.f_1056);
	(*&Local_4 + 1060)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd01", -2140,512f, 15,90265f, 4941,332f, 177,827f, -255,7034f, 177,1831f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[5], Local_4.f_1056);
	Local_4.f_1088 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 1092)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -911,0991f, 71,02844f, 3461,276f, 0.0f, -82,78098f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1092)[0], Local_4.f_1088);
	(*&Local_4 + 1092)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -914,8337f, 71,27846f, 3468f, 0.0f, -86,57755f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1092)[1], Local_4.f_1088);
	(*&Local_4 + 1092)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelStart02", -677,1528f, 63,46236f, 3324,344f, 0.0f, 377,7396f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1092)[2], Local_4.f_1088);
	(*&Local_4 + 1092)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -944,9748f, 71,02845f, 3464,861f, 0.0f, 282,2951f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1092)[3], Local_4.f_1088);
	Local_4.f_1112 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 1116)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -732,5897f, 72,71735f, 3305,376f, 0.0f, -191,1696f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1116)[0], Local_4.f_1112);
	(*&Local_4 + 1116)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -800.0f, 73,28624f, 3424f, 0.0f, -31,93752f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1116)[1], Local_4.f_1112);
	(*&Local_4 + 1116)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -808,013f, 71,32492f, 3440f, 0.0f, -5,548965f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1116)[2], Local_4.f_1112);
	(*&Local_4 + 1116)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", -808,0001f, 71,32425f, 3440f, 0.0f, 156,9596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1116)[3], Local_4.f_1112);
	(*&Local_4 + 1116)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelStart03", -677,1501f, 63,46236f, 3324,325f, 0.0f, 377,7396f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1116)[4], Local_4.f_1112);
	(*&Local_4 + 1116)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -810,0304f, 70,98299f, 3440,694f, 0.0f, 135,8217f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1116)[5], Local_4.f_1112);
	(*&Local_4 + 1116)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd03", -810,0304f, 70,98299f, 3440,694f, 0.0f, 121,0803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1116)[6], Local_4.f_1112);
	Local_4.f_1148 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 1152)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -677,6077f, 63,44807f, 3323,259f, 0.0f, -144,6809f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1152)[0], Local_4.f_1148);
	(*&Local_4 + 1152)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -679,26f, 63,33193f, 3320,377f, 0.0f, 16,54819f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1152)[1], Local_4.f_1148);
	(*&Local_4 + 1152)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -2124.0f, 15,44049f, 3820f, 0.0f, 135,8217f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1152)[2], Local_4.f_1148);
	(*&Local_4 + 1152)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelStart04", -677,1528f, 63,46236f, 3324,344f, 0.0f, 377,7396f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1152)[3], Local_4.f_1148);
	Local_4.f_1172 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 1176)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -2125,625f, 8,251389f, 3782,8f, 0,5171312f, 176,3018f, -0,6049124f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1176)[0], Local_4.f_1172);
	(*&Local_4 + 1176)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -2120f, 8,174189f, 3778,51f, 0.0f, 259,3653f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1176)[1], Local_4.f_1172);
	(*&Local_4 + 1176)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -2121,052f, 8,283127f, 3776,692f, 0.0f, 275,0297f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1176)[2], Local_4.f_1172);
	(*&Local_4 + 1176)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelStartLast", -2120f, 8,172109f, 3778,469f, 0.0f, 262,1328f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1176)[3], Local_4.f_1172);
	(*&Local_4 + 1176)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndLast", -2125,489f, 8,228805f, 3781,489f, 0.0f, 262,1328f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1176)[4], Local_4.f_1172);
	(*&Local_4 + 1176)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEndLast", -2121,325f, 8,811575f, 3790,657f, 0.0f, 35,25228f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1176)[5], Local_4.f_1172);
	(*&Local_4 + 1176)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseEndFadeUp", -2111,948f, 10,67317f, 3793,521f, 0.0f, 133,9647f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1176)[6], Local_4.f_1172);
	Local_4.f_1208 = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", Local_4, 8, 0);
	(*&Local_4 + 1212)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "El_Presidio_dest", -777,9123f, 63,73535f, 3307,99f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[0], Local_4.f_1208);
	(*&Local_4 + 1212)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Player_Arrive", -908,0001f, 72,09045f, 3469,844f, 0.0f, -60,99778f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[1], Local_4.f_1208);
	(*&Local_4 + 1212)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Wagon_Arrive", -899,1436f, 71,02844f, 3460,06f, 0.0f, -86,97433f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[2], Local_4.f_1208);
	(*&Local_4 + 1212)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse_arrive", -909,1066f, 71,02844f, 3458,527f, 0.0f, -86,97433f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[3], Local_4.f_1208);
	(*&Local_4 + 1212)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Fort_Entrance", -737,3531f, 73,04096f, 3308,397f, 0.0f, -53,54468f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[4], Local_4.f_1208);
	(*&Local_4 + 1212)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Inside_Dest", -732,2811f, 72,71381f, 3304,268f, 0.0f, -53,54468f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[5], Local_4.f_1208);
	Local_4.f_1240 = CREATE_OBJECTSET_IN_LAYOUT("StageThreeSet", Local_4, 8, 0);
	(*&Local_4 + 1244)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_JumpToo", -711,044f, 72,946f, 3280,16f, 0.0f, 216,613f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1244)[0], Local_4.f_1240);
	(*&Local_4 + 1244)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Cpt_Move", -677,9646f, 63,24707f, 3316,885f, 0.0f, -176,1083f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1244)[1], Local_4.f_1240);
	(*&Local_4 + 1244)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Snip_Pos", -711,044f, 72,946f, 3280,16f, 0.0f, 216,613f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1244)[2], Local_4.f_1240);
	(*&Local_4 + 1244)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Sold_Pos_0", -676,8882f, 63,29906f, 3317,912f, 0.0f, -183,4733f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1244)[3], Local_4.f_1240);
	(*&Local_4 + 1244)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Sold_Pos_1", -679,1474f, 63,29906f, 3317,575f, 0.0f, -173,0972f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1244)[4], Local_4.f_1240);
	(*&Local_4 + 1244)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Sold_Pos_2", -681,1856f, 63,29906f, 3318,072f, 0.0f, -157,7748f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1244)[5], Local_4.f_1240);
	(*&Local_4 + 1244)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Point_Blank", -677,1078f, 63,24707f, 3322,892f, 0.0f, -184,195f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1244)[6], Local_4.f_1240);
	(*&Local_4 + 1244)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "Rifle_Ammo", -710,4676f, 73,2368f, 3278,235f, 93,95827f, -144,3731f, -35,12152f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1244)[7], Local_4.f_1240);
	Local_4.f_1280 = CREATE_OBJECTSET_IN_LAYOUT("StageEightSet", Local_4, 8, 0);
	(*&Local_4 + 1284)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S8_JumpToo", -732,6223f, 72,72227f, 3304,328f, 0.0f, -46,4296f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[0], Local_4.f_1280);
	Local_4.f_1292 = CREATE_OBJECTSET_IN_LAYOUT("StageFourSet", Local_4, 8, 0);
	(*&Local_4 + 1296)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_Reyes", -677,6699f, 63,25645f, 3320,929f, 0.0f, 19,95792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1296)[0], Local_4.f_1292);
	(*&Local_4 + 1296)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse_Blip", -712,3768f, 63,24707f, 3284,307f, 0.0f, 82,02938f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1296)[1], Local_4.f_1292);
	(*&Local_4 + 1296)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Reyes_Go", -709,1356f, 63,24707f, 3298,327f, 0.0f, 15,36569f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1296)[2], Local_4.f_1292);
	(*&Local_4 + 1296)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "nRaft_Dest", -2132f, 9,492493f, 3796.0f, 0.0f, -162,5144f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1296)[3], Local_4.f_1292);
	(*&Local_4 + 1296)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "ReyesPstCS", -677,8426f, 63,25645f, 3317,49f, 0.0f, 18,80022f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1296)[4], Local_4.f_1292);
	Local_4.f_1320 = CREATE_OBJECTSET_IN_LAYOUT("StageFiveSet", Local_4, 8, 0);
	(*&Local_4 + 1324)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_JumpToo", -677,6945f, 63,24707f, 3314,306f, 0.0f, 70,68383f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[0], Local_4.f_1320);
	(*&Local_4 + 1324)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Reyes", -675,541f, 63,24707f, 3316,459f, 0.0f, 54,58983f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[1], Local_4.f_1320);
	(*&Local_4 + 1324)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Horse", -679,3246f, 63,24459f, 3318,66f, -1,12877f, 63,29898f, -0,7919179f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[2], Local_4.f_1320);
	(*&Local_4 + 1324)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "guide_goto", -728,1209f, 64,32458f, 3283,005f, 0.0f, -274,693f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[3], Local_4.f_1320);
	(*&Local_4 + 1324)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "nGuide_End", -2112,637f, 9,279246f, 3784,888f, 0.0f, -299,5159f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[4], Local_4.f_1320);
	(*&Local_4 + 1324)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "End_Dest", -2122,898f, 9,964634f, 3794,898f, 0.0f, -299,5159f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[5], Local_4.f_1320);
	(*&Local_4 + 1324)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "GuideApproach", -720,2476f, 63,24707f, 3288,375f, 0.0f, -123,4114f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[6], Local_4.f_1320);
	(*&Local_4 + 1324)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "Cav_go_near", -795,8352f, 63,55296f, 3287,308f, 0.0f, -235,9214f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[7], Local_4.f_1320);
	(*&Local_4 + 1324)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "debug_0", -1769,794f, 12,26386f, 3750,459f, 0.0f, -284,6833f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[8], Local_4.f_1320);
	(*&Local_4 + 1324)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "debug_1", -1766,301f, 12,27024f, 3751,813f, 0.0f, -287,2689f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[9], Local_4.f_1320);
	Local_4.f_1368 = CREATE_OBJECTSET_IN_LAYOUT("S3_Exe_CoverSet", Local_4, 8, 0);
	(*&Local_4 + 1372)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Cover_0", -693,3383f, 63,24707f, 3298,715f, 0.0f, 57,99351f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1372)[0], Local_4.f_1368);
	(*&Local_4 + 1372)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Cover_1", -683,3019f, 63,24707f, 3300,673f, 0.0f, 50,58054f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1372)[1], Local_4.f_1368);
	(*&Local_4 + 1372)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Cover_2", -698,5878f, 63,24707f, 3305,127f, 0.0f, 23,76124f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1372)[2], Local_4.f_1368);
	Local_4.f_1388 = CREATE_OBJECTSET_IN_LAYOUT("S3_FG_CoverSet", Local_4, 8, 0);
	(*&Local_4 + 1392)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "FG_Cover_0", -694,3547f, 63,24707f, 3308,983f, 0.0f, 53,60592f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1392)[0], Local_4.f_1388);
	(*&Local_4 + 1392)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "FG_Cover_1", -687,9369f, 63,24707f, 3304,22f, 0.0f, 51,75644f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1392)[1], Local_4.f_1388);
	Local_4.f_1404 = CREATE_OBJECTSET_IN_LAYOUT("S3_SG_CoverSet", Local_4, 8, 0);
	(*&Local_4 + 1408)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "SG_Cover_0", -704,556f, 66,33054f, 3307,191f, 0.0f, 24,34379f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1408)[0], Local_4.f_1404);
	(*&Local_4 + 1408)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "SG_Cover_1", -687,2466f, 68,84904f, 3289,826f, 0.0f, 82,91697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1408)[1], Local_4.f_1404);
	Local_4.f_1420 = CREATE_OBJECTSET_IN_LAYOUT("S3_BG_DestSet", Local_4, 8, 0);
	(*&Local_4 + 1424)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "BG_0_Pos", -724,469f, 73,03422f, 3292,539f, 0.0f, -44,34444f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1424)[0], Local_4.f_1420);
	(*&Local_4 + 1424)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "BG_1_Pos", -710,322f, 71,65691f, 3308,516f, 0.0f, 0,6527044f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1424)[1], Local_4.f_1420);
	Local_4.f_1436 = CREATE_OBJECTSET_IN_LAYOUT("SniperAlertSet", Local_4, 8, 0);
	(*&Local_4 + 1440)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Alert_0", -718,3266f, 80,36768f, 3306,511f, 0.0f, -144,373f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1440)[0], Local_4.f_1436);
	(*&Local_4 + 1440)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Alert_1", -712,0892f, 73,94379f, 3283,904f, 0.0f, -144,373f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1440)[1], Local_4.f_1436);
	(*&Local_4 + 1440)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Alert_2", -713,0984f, 68,51507f, 3294,382f, 0.0f, -144,373f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1440)[2], Local_4.f_1436);
	(*&Local_4 + 1440)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Alert_3", -731,902f, 74,5094f, 3294,455f, 0.0f, -144,373f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1440)[3], Local_4.f_1436);
	Local_4.f_1460 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_nospawn", "lean_rail_nospawn", -686,5988f, 66,48352f, 3294,252f, 0.0f, -164,9354f, 0.0f);
	Local_4.f_1464 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_nospawn1", "lean_rail_nospawn", -698,2076f, 66,47968f, 3312,875f, 0.0f, -57,48556f, 0.0f);
	Local_4.f_1468 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_nospawn2", "lean_rail_nospawn", -685,3981f, 66,46928f, 3319,316f, 0.0f, -118,2768f, 0.0f);
	Local_4.f_1472 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_nospawn3", "lean_rail_nospawn", -674,4167f, 65,89659f, 3311,385f, 0.0f, -210,6487f, 0.0f);
	Local_4.f_1476 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_nospawn6", "lean_rail_nospawn", -709,7307f, 71,80135f, 3308,458f, 0.0f, -80,14588f, 0.0f);
	Local_4.f_1480 = CREATE_GRINGO_IN_LAYOUT(Local_4, "pole_hostage_beatup", "pole_hostage_beatup", -677,1118f, 63,44554f, 3324,502f, 0.0f, 16,55152f, 0.0f);
	Local_4.f_1484 = CREATE_GRINGO_IN_LAYOUT(Local_4, "MissionEnd_MarstonSmoke", "MissionEnd_MarstonSmoke", -2115,912f, 12,525f, 3804,282f, 0.0f, 210,421f, 0.0f);
}

var E­Ä×â`@¸À E%»ÄÕò @¸È_EïÄÔ(@ºFE¸©ÄÓ$Ý@Á#pEÎEÄÑà­@ÎHÓEÊÄÏ4@½E­ÿÄÍ¹@¹¡E¥KÄË<@¸Â¶E­òÄÉ"@¸À©EÒ\ÄÇJÊ@¸À¨EìÄÄìµ@¸À¨EÄ¿ð@¸À¿E1Ä½G	@¸ÀÅE;Ä»L(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63) //Position: 0x103FB / 66555
{
}

int Function_301() //Position: 0x11872 / 71794
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_326(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_320(&bLocal_413))
		{
			return 0;
		}
		if (!Function_319())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_442))
		{
			bLocal_442 = Function_313(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_442, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_441))
		{
			bLocal_441 = Function_302(8, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
	}
	return 1;
}

bool Function_302(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x118EE / 71918
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
		Function_311(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_310(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_305(StackVal, iParam7);
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
		Function_304(bVar1, 0, 0, 0, 0);
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
		Function_303(bVar1, 0);
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

void Function_303(bool bParam0, bool bParam1) //Position: 0x11DD8 / 73176
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_304(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x11DF8 / 73208
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

bool Function_305(int iParam0, bool bParam1) //Position: 0x11E4C / 73292
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_309(iParam0))
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
						Function_306(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_306(bool bParam0, bool bParam1) //Position: 0x11ECC / 73420
{
	Function_308(bParam0);
	Function_307(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_307(bool bParam0) //Position: 0x11EF2 / 73458
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_308(bool bParam0) //Position: 0x11F16 / 73494
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

bool Function_309(int iParam0) //Position: 0x11FE5 / 73701
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_310(int iParam0, bool bParam1) //Position: 0x11FFC / 73724
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

void Function_311(int iParam0, bool bParam1, bool bParam2) //Position: 0x1208F / 73871
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
						Function_211(bVar1);
					}
				}
				Function_312(bVar0);
			}
		}
	}
	return;
}

void Function_312(bool bParam0) //Position: 0x12186 / 74118
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

bool Function_313(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x121B2 / 74162
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
	if (Global_3381 || Function_235(1))
	{
		Function_318(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_319())
		{
			return "";
		}
	}
	if (!Function_316())
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
		Function_243(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_243(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_243(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_243(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_315(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_315(StackVal, StackVal, vVar5, 0, 1, 1);
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

void Function_314(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1250A / 75018
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

var Function_315(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12547 / 75079
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

bool Function_316() //Position: 0x125E2 / 75234
{
	if (Function_317() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_317() //Position: 0x125F8 / 75256
{
	return Global_12976.f_152;
}

void Function_318(var uParam0, bool bParam1, bool bParam2) //Position: 0x12603 / 75267
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

bool Function_319() //Position: 0x12630 / 75312
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

bool Function_320(bool bParam0) //Position: 0x12650 / 75344
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_325();
	iVar1 = 0;
	if (!Function_172(bParam0[iVar03], 16))
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
				Function_324(bParam0[iVar03], 1);
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

void Function_321() //Position: 0x129CB / 76235
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

bool Function_322(int iParam0) //Position: 0x12A0B / 76299
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_323() //Position: 0x12A27 / 76327
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

void Function_324(var uParam0, int iParam1) //Position: 0x12A52 / 76370
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_325() //Position: 0x12A63 / 76387
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

bool Function_326(bool bParam0) //Position: 0x12AA5 / 76453
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

int Function_327() //Position: 0x12AD3 / 76499
{
	Function_328(&Local_4 + 80, 1199, 2, 0);
	Function_328(&Local_4 + 80, 977, 2, 0);
	if (Function_320(&Local_4 + 80))
	{
		return 1;
	}
	return 0;
}

var Function_328(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x12B00 / 76544
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

int Function_329() //Position: 0x12BD0 / 76752
{
	switch (bLocal_437)
	{
		case 0x00000063:
			Function_330(2, 0, 1, 1, 1, 1, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			Function_330(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(bLocal_476))
			{
				DESTROY_ACTOR(bLocal_476);
			}
			Function_210(8, 1, 0, 1, 1);
			Function_330(2, 0, 0, 0, 1, 1, 0, 0, 1, 0);
			SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 2,281f, 57,813f, 0.0f, 0);
			return 1;
			break;
		
		default:
			Function_330(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_330(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x12C64 / 76900
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
	Function_277(bParam9);
}

int Function_331() //Position: 0x12D54 / 77140
{
	switch (bLocal_437)
	{
		case 0x00000063:
			Function_214(Global_34573, (*&Local_4 + 1060)[0], 1, 1, 1);
			Function_214(bLocal_441, (*&Local_4 + 1060)[2], 1, 1, 1);
			Function_291();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2,5f, 0);
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000003:
			Function_332();
			Function_211(bLocal_476);
			if (Function_290(Local_4.f_784) < 0)
			{
				DESTROY_OBJECT(Local_4.f_784);
				Function_289();
			}
			SET_ACTOR_ONE_SHOT_DEATH(bLocal_476, false);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1.0f, 0);
			SET_ACTOR_FACE_STYLE(bLocal_476, 2);
			Function_243((*&Local_4 + 1296)[4]);
			vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1296)[4]) };
			TASK_CLEAR(bLocal_476);
			TASK_GO_NEAR_COORD(bLocal_476, &vLocal_497, 0,25f, true);
			return 1;
			break;
		
		case 0x00000065:
			DECOR_SET_BOOL(Global_34573, "Stand", true);
			GIVE_OBJECT_TO_LAYOUT(Local_4.f_1484, Global_6288);
			SNAP_ACTOR_TO_GRINGO(Global_34573, Local_4.f_1484, "UseCase1", false, 0, 0);
			TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(Local_4.f_1484), "UseCase1", true, 1);
			Function_214(bLocal_442, (*&Local_4 + 1176)[6], 1, 1, 1);
			TASK_STAND_STILL(bLocal_442, -1.0f, 0, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_332() //Position: 0x12EA7 / 77479
{
	bLocal_487 = Function_333(Global_30707[1], "nfortDiego", "entStructure01", 98);
	if (!IS_DOOR_VALID(bLocal_487))
	{
		LOG_ERROR("back gate 98 is not valid");
	}
	else
	{
		Function_153(bLocal_487, 0);
		OPEN_DOOR_DIRECTION(bLocal_487, true);
	}
	bLocal_488 = Function_333(Global_30707[1], "nfortDiego", "entStructure01", 99);
	if (!IS_DOOR_VALID(bLocal_488))
	{
		LOG_ERROR("back gate 99 is not valid");
	}
	else
	{
		Function_153(bLocal_488, 0);
		OPEN_DOOR_DIRECTION(bLocal_488, false);
	}
	return;
}

var Function_333(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x12F77 / 77687
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

int Function_334() //Position: 0x13013 / 77843
{
	switch (bLocal_437)
	{
		case 0x00000063:
			if ((!Function_336() && !Function_320(&bLocal_397)) && Function_335())
			{
				iLocal_519 = 1;
				return 0;
			}
			return 1;
			break;
		
		case 0x00000065:
			if (IS_OBJECT_VALID(bLocal_478))
			{
				DESTROY_OBJECT(bLocal_478);
			}
			if (!iLocal_525)
			{
				Function_214(bLocal_442, (*&Local_4 + 1176)[5], 0, 1, 1);
				iLocal_525 = 1;
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_335() //Position: 0x13081 / 77953
{
	if (!IS_EXITFLAG_SET())
	{
		if (!iLocal_519)
		{
			if (!Function_326(0))
			{
				return 0;
			}
			if (!Function_336())
			{
				return 0;
			}
			iLocal_519 = 1;
		}
		if (!IS_ACTOR_VALID(bLocal_441))
		{
			bLocal_441 = Function_302(8, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_320(&bLocal_397))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_442))
		{
			bLocal_442 = Function_313(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_442, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_336() //Position: 0x130FF / 78079
{
	Function_328(&Local_4 + 4, 976, 2, 0);
	Function_328(&Local_4 + 4, 977, 2, 0);
	Function_337(&Local_4 + 4, "p_gen_crateTnt01x", 0, 0);
	Function_337(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_337(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/pole_hostage_beatup", 1, 0);
	Function_337(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/missionend_marstonsmoke", 1, 0);
	if (Function_320(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_337(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x13224 / 78372
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_338(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_324(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_338(var uParam0, int iParam1, int iParam2) //Position: 0x1325C / 78428
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_172(uParam0[iVar03], 4))
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

int Function_339() //Position: 0x13320 / 78624
{
	switch (bLocal_437)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				return 1;
			}
			if (Function_301() && Function_327())
			{
				Function_299();
				Function_292();
				Function_214(bLocal_441, (*&Local_4 + 1060)[2], 1, 1, 1);
				TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
			}
			break;
		
		case 0x00000065:
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_442, true);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_340() //Position: 0x13386 / 78726
{
	switch (bLocal_437)
	{
		case 0x00000063:
			Function_343(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			fLocal_489 = CREATE_VOLUME_IN_LAYOUT(bLocal_389, "nintro_vol", 2, -2148,529f, 17,49f, 4964,149f, 0.0f, 0.0f, 0.0f, 63.0f, 15.0f, 97.0f);
			Function_341(StackVal, StackVal, bLocal_389, *(&Global_3422[3540] + 52), &fLocal_489, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000003:
			Function_343(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_243((*&Local_4 + 1152)[0]);
			Function_341(StackVal, StackVal, bLocal_389, Function_243((*&Local_4 + 1152)[0]), &Local_4 + 924[5], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_343(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_343(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_341(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x13472 / 78962
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
				Function_342(bVar1, bParam0);
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

void Function_342(bool bParam0, bool bParam1) //Position: 0x136E0 / 79584
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

void Function_343(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x13755 / 79701
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
				Function_345(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_345(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_344()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_344()));
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
		Function_161(0x4000000);
	}
	if (Function_322(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_161(0x8000000);
	}
}

var Function_344() //Position: 0x139FE / 80382
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

vector3 Function_345(bool bParam0) //Position: 0x13A7D / 80509
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_346() //Position: 0x13A8E / 80526
{
	Function_214(Global_34573, (*&Local_4 + 1324)[0], 1, 1, 1);
	Function_214(bLocal_442, (*&Local_4 + 1324)[2], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(Global_34573, bLocal_442);
	Function_217();
	SET_ACTOR_IS_COMPANION(bLocal_476, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_476);
	Function_214(bLocal_476, (*&Local_4 + 1324)[1], 1, 1, 1);
	SET_ANIM_SET_FOR_ACTOR(bLocal_476, "gent_ride_passenger", 0);
	SET_MOUNTS_AS_PASSENGER(bLocal_476, 1);
	Function_314(bLocal_476, 0, 0, 0, 0, 0, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	ACTOR_MOUNT_ACTOR(bLocal_476, bLocal_442);
	iLocal_496 = 1;
	return;
}

int Function_347() //Position: 0x13B35 / 80693
{
	Function_328(&Local_4 + 348, 529, 2, 0);
	Function_328(&Local_4 + 348, 980, 2, 0);
	Function_328(&Local_4 + 348, 554, 2, 0);
	Function_328(&Local_4 + 348, 1191, 2, 0);
	Function_328(&Local_4 + 348, 392, 2, 0);
	Function_328(&Local_4 + 348, 981, 2, 0);
	Function_328(&Local_4 + 348, 391, 2, 0);
	Function_328(&Local_4 + 348, 380, 2, 0);
	Function_328(&Local_4 + 348, 379, 2, 0);
	Function_328(&Local_4 + 348, 393, 2, 0);
	if (Function_320(&Local_4 + 348))
	{
		return 1;
	}
	return 0;
}

void Function_348() //Position: 0x13BD5 / 80853
{
	switch (iLocal_496)
	{
		case 0x00000001:
			Function_243((*&Local_4 + 1176)[2]);
			STREAMING_LOAD_BOUNDS(Function_243((*&Local_4 + 1176)[2]), 15.0f, 1);
			iLocal_496 = 2;
			break;
		
		case 0x00000002:
			Function_243((*&Local_4 + 1176)[2]);
			if (STREAMING_ARE_BOUNDS_LOADED(Function_243((*&Local_4 + 1176)[2]), 15.0f))
			{
				if (bLocal_437 != 101)
				{
					Function_349();
					bLocal_478 = (*&Local_4 + 684)[02];
				}
				Function_214(bLocal_441, (*&Local_4 + 1176)[2], 1, 1, 1);
				TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_441, true);
				iLocal_496 = 3;
			}
			break;
	}
	return;
}

void Function_349() //Position: 0x13C61 / 80993
{
	Local_4.f_696 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Rebel_Raftset", 0);
	(*&Local_4 + 684)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Raft", 1191, -2121,641f, 8,226f, 3774,083f, 0.0f, 185,9035f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_696, (*&Local_4 + 684)[02]);
	return;
}

void Function_350() //Position: 0x13CC0 / 81088
{
	Function_186(47);
	Function_187(256);
	Function_161(114700);
	Function_351(9);
	return;
}

void Function_351(int iParam0) //Position: 0x13CDD / 81117
{
	Function_352(&Global_28842, iParam0);
	return;
}

void Function_352(var uParam0, int iParam1) //Position: 0x13CEB / 81131
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_353(bool bParam0) //Position: 0x13D0E / 81166
{
	Function_354(0, 0x40400000);
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

void Function_354(bool bParam0, float fParam1) //Position: 0x13D42 / 81218
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
	Function_356();
	Function_355();
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

void Function_355() //Position: 0x13E40 / 81472
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_356() //Position: 0x13E72 / 81522
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

void Function_357() //Position: 0x13F6F / 81775
{
	if (Function_443(Global_30707[1]))
	{
		Function_442(&iLocal_482);
	}
	else
	{
		iLocal_491 = 0;
	}
	if (iLocal_438 < 3 && iLocal_438 > 105)
	{
		Function_440();
		Function_243((*&Local_4 + 1176)[0]);
		Function_435(StackVal, StackVal, "$/cutscene/MEXGIRL03_CS03/MEXGIRL03_CS03", &uLocal_667, Function_243((*&Local_4 + 1176)[0]), 0, 75.0f, 150.0f, 2, 1, 1, 2, 0, 1);
	}
	switch (iLocal_438)
	{
		case 0x00000000:
			Function_353(0);
			SET_ACTOR_HEALTH(bLocal_441, GET_ACTOR_MAX_HEALTH(bLocal_441));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			if (iLocal_452[4] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_350();
				bLocal_439 = Global_30633[1];
				if (!Function_443(bLocal_439))
				{
					Function_434(&Local_390);
				}
				Function_214(Global_34573, (*&Local_4 + 1324)[0], 1, 1, 1);
				Function_214(bLocal_441, (*&Local_4 + 1176)[1], 1, 1, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 1;
			}
			else
			{
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_443(Global_30707[1]) || bLocal_439 != 4294967295)) && Function_347())
			{
				if (iLocal_452[4] == 0)
				{
					Function_431();
					Function_332();
					Function_228(&iLocal_443);
					iLocal_438 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_430())
			{
				Function_242(bLocal_437);
				Function_424(StackVal, StackVal, Function_242(bLocal_437), bLocal_437, Global_30633[1], Function_245(bLocal_437), 2);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_228(&iLocal_443);
				iLocal_438 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_423();
				AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
				Function_214(bLocal_441, (*&Local_4 + 1176)[1], 1, 1, 1);
				TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
				Function_228(&iLocal_443);
				iLocal_438 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_546(&iLocal_443) <= 8.0f)
			{
				Function_422("mexgirl03_obj09", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&iLocal_443);
				iLocal_438 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_360())
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_358(Global_34573, 0);
				Function_228(&iLocal_443);
				Function_311(8, 0, 1);
				Function_211(bLocal_477);
				iLocal_438 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_546(&iLocal_443) <= 3.0f)
			{
				iLocal_438 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_204();
			STREAMING_UNLOAD_BOUNDS();
			iLocal_452[5] = 1;
			Function_228(&iLocal_443);
			bLocal_437 = 101;
			iLocal_438 = 0;
			break;
	}
	return;
}

void Function_358(bool bParam0, bool bParam1) //Position: 0x1422C / 82476
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
	else if (!bParam1 || Function_359(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_359(bool bParam0, bool bParam1) //Position: 0x14289 / 82569
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_360() //Position: 0x142A8 / 82600
{
	if (IS_VOLUME_VALID((*&Local_4 + 1032)[2]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1032)[2]))
		{
			DESTROY_VOLUME((*&Local_4 + 1032)[2]);
			iLocal_496 = 1;
		}
	}
	if (IS_VOLUME_VALID((*&Local_4 + 984)[8]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[8]))
		{
			DESTROY_VOLUME((*&Local_4 + 984)[8]);
			Function_214(bLocal_441, (*&Local_4 + 1176)[2], 0, 0, 0);
			SET_ANIM_SET_FOR_ACTOR(bLocal_441, "luisa_search", 0);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_441, "luisa_search/search");
			SET_REACT_NODE_FOR_ACTOR(bLocal_441, "luisa_search/search");
		}
	}
	if (!iLocal_512)
	{
		if (iLocal_675 != 3 && iLocal_674 != 3)
		{
			AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
			iLocal_512 = 1;
		}
	}
	Function_408();
	Function_407();
	Function_397();
	Function_383();
	Function_348();
	Function_382();
	if ((iLocal_673 < 4 && iLocal_673 >= 5) && !HUD_IS_SHOWING_OBJECTIVE())
	{
		Function_377();
		Function_374();
	}
	switch (iLocal_673)
	{
		case 0x00000000:
			Function_372();
			Function_371();
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 956)[1]))
			{
				Function_228(&iLocal_443);
				iLocal_673 = 1;
			}
			break;
		
		case 0x00000001:
			Function_372();
			Function_371();
			TASK_CLEAR(bLocal_477);
			bLocal_490 = TASK_SEQUENCE_OPEN();
			Function_243((*&Local_4 + 1324)[6]);
			vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1324)[6]) };
			TASK_GO_NEAR_COORD(false, &vLocal_497, 0,5f, 2);
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_477, bLocal_490);
			AI_ACTOR_FORCE_SPEED(bLocal_477, 4);
			TASK_SEQUENCE_RELEASE(bLocal_490, 1);
			Function_228(&iLocal_443);
			iLocal_673 = 2;
			break;
		
		case 0x00000002:
			Function_372();
			Function_371();
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[0]) || IS_ACTOR_IN_VOLUME(bLocal_477, (*&Local_4 + 984)[0]))
			{
				TASK_CLEAR(bLocal_477);
				bLocal_490 = TASK_SEQUENCE_OPEN();
				Function_243((*&Local_4 + 1324)[3]);
				vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1324)[3]) };
				TASK_FACE_COORD(false, &vLocal_497, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_477, bLocal_490);
				TASK_SEQUENCE_RELEASE(bLocal_490, 1);
				Function_228(&iLocal_443);
				iLocal_673 = 3;
			}
			break;
		
		case 0x00000003:
			Function_372();
			Function_371();
			if ((Function_370(Global_34573, bLocal_477, 6.0f) && IS_ACTOR_RIDING(Global_34573)) && IS_ACTOR_RIDING(bLocal_476))
			{
				TASK_CLEAR(bLocal_477);
				bLocal_490 = TASK_SEQUENCE_OPEN();
				GET_PATH_POINT(Local_4.f_1492, false, &vLocal_497);
				TASK_FACE_COORD(false, &vLocal_497, 0);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_4.f_1492, -25.0f, 1, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_477, bLocal_490);
				TASK_SEQUENCE_RELEASE(bLocal_490, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_477, true);
				SET_ACTOR_MIN_SPEED(bLocal_477, 2);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_477, 3212836864, 3212836864, 4, 1, 0);
				Function_247();
				Function_369();
				iLocal_673 = 4;
				Function_228(&iLocal_443);
			}
			break;
		
		case 0x00000004:
			Function_372();
			Function_371();
			Function_364();
			if ((Function_370(Global_34573, bLocal_441, 15.0f) && IS_ACTOR_RIDING(bLocal_476)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[7]))
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				return 1;
			}
			if (IS_ACTOR_RIDING(Global_34573) && IS_ACTOR_RIDING(bLocal_476))
			{
				if (Function_546(&iLocal_443) <= 8.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_247();
					Function_422("mexgirl03_obj10", 0x40f00000, 1, 2, 0, 0, 0);
					ADD_BLIP_FOR_ACTOR(bLocal_477, 325, 0, 2, 0);
					Function_228(&iLocal_443);
					iLocal_673 = 5;
				}
			}
			break;
		
		case 0x00000005:
			Function_372();
			Function_371();
			Function_364();
			if ((Function_370(Global_34573, bLocal_441, 15.0f) && IS_ACTOR_RIDING(bLocal_476)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[7]))
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(bLocal_477, (*&Local_4 + 1032)[0]))
			{
				TASK_CLEAR(bLocal_477);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_477, Local_4.f_1492, 3, 0, 0, 1, false);
				Function_211(bLocal_477);
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_477);
				Function_311(8, 1, 1);
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_361();
				Function_228(&iLocal_443);
				iLocal_673 = 6;
			}
			break;
		
		case 0x00000006:
			Function_364();
			if ((Function_370(Global_34573, bLocal_441, 15.0f) && IS_ACTOR_RIDING(bLocal_476)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[7]))
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				return 1;
			}
			if (Function_546(&iLocal_443) <= 4.0f)
			{
				Function_247();
				Function_211(bLocal_477);
				Function_422("mexgirl03_obj12", 0x40f00000, 1, 2, 0, 0, 0);
				Function_228(&iLocal_443);
				iLocal_673 = 7;
			}
			break;
		
		case 0x00000007:
			Function_364();
			if ((Function_370(Global_34573, bLocal_441, 15.0f) && IS_ACTOR_RIDING(bLocal_476)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[7]))
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				return 1;
			}
			if (!Function_132())
			{
				Function_228(&iLocal_443);
				iLocal_673 = 8;
			}
			break;
		
		case 0x00000008:
			Function_364();
			if ((Function_370(Global_34573, bLocal_441, 15.0f) && IS_ACTOR_RIDING(bLocal_476)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[7]))
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				return 1;
			}
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_673 = 3;
			}
			break;
	}
	return 0;
}

void Function_361() //Position: 0x147E8 / 83944
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "MexGirl03_GuideFarewell", "MexGirl03_GuideFarewell", false, 2, 1, 0, 1);
		Function_362(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_362(int iParam0) //Position: 0x14840 / 84032
{
	Function_363(0, Global_34573, iParam0, 0);
	Function_363(1, bLocal_441, iParam0, 0);
	Function_363(2, bLocal_475, iParam0, 0);
	Function_363(4, bLocal_476, iParam0, 0);
	Function_363(5, bLocal_477, iParam0, 0);
	return;
}

void Function_363(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x14878 / 84088
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_152(uParam2, Function_138(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_364() //Position: 0x1489D / 84125
{
	if (!iLocal_521)
	{
		if (Function_367(bLocal_476, bLocal_441) > 45.0f)
		{
			if (Function_366(bLocal_441, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				Function_365();
				iLocal_521 = 1;
			}
		}
	}
	return;
}

void Function_365() //Position: 0x148D9 / 84185
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_spotLuisa", "MexGirl03_spotLuisa", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_366(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x14929 / 84265
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

float Function_367(bool bParam0, bool bParam1) //Position: 0x14943 / 84291
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_368(&uVar0, &uVar3);
	return iVar6;
}

var Function_368(var uParam0, bool bParam1) //Position: 0x14962 / 84322
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_369() //Position: 0x14980 / 84352
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "MexGirl03_GuideEscort", "MexGirl03_GuideEscort", false, 2, 1, 0, 1);
		Function_362(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_370(var uParam0, bool bParam1, float fParam2) //Position: 0x149D4 / 84436
{
	float fVar0;
	
	fVar0 = Function_367(uParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

void Function_371() //Position: 0x149F1 / 84465
{
	if (DECOR_CHECK_EXIST(Global_34573, "beingBucked"))
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_476, "MexGirl03_ThrownOffHorse", "", false, 0, 0, 3, 0, 0, 0, 1000, 0, 0);
	}
	return;
}

void Function_372() //Position: 0x14A3F / 84543
{
	if (iLocal_515)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			iLocal_515 = 0;
		}
		else if (Function_546(&iLocal_446) <= 8.0f)
		{
			if (!Function_132() && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_373();
				Function_228(&iLocal_446);
			}
		}
	}
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		if (!iLocal_515 && !DECOR_CHECK_EXIST(Global_34573, "beingBucked"))
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_476, "MexGirl03_jonOffHorseReyes", "", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
			iLocal_515 = 1;
			Function_228(&iLocal_446);
		}
	}
	return;
}

void Function_373() //Position: 0x14AE3 / 84707
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_wontBackHorse_AA", "MexGirl03_wontBackHorse_AA", false, 1, 0, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_374() //Position: 0x14B41 / 84801
{
	if (!Function_548(&iLocal_535))
	{
		Function_547(&iLocal_535);
	}
	else if (Function_546(&iLocal_535) <= 8.0f)
	{
		if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && (Function_290(Local_4.f_808) < 0 && Function_375(Local_4.f_808, Global_34573, 45.0f, 1))) || ((Function_290(Local_4.f_848) < 0 && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[9])) && IS_ACTOR_IN_VOLUME(bLocal_476, (*&Local_4 + 984)[9])))
		{
			SAY_SINGLE_LINE_STRING(bLocal_476, "MexGirl03_ReyesTaunts", false, false, 3, 0, true, false);
			Function_228(&iLocal_535);
		}
	}
	return;
}

int Function_375(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x14BE2 / 84962
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
					if (!Function_376(bVar1, 1) || uParam3)
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

bool Function_376(bool bParam0, int iParam1) //Position: 0x14C7B / 85115
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

void Function_377() //Position: 0x14CC5 / 85189
{
	if (iLocal_517)
	{
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_228(&iLocal_532);
		}
		else if (Function_548(&iLocal_532))
		{
			if (Function_546(&iLocal_532) <= 2.0f)
			{
				iLocal_517 = 0;
			}
		}
	}
	if (!Function_548(&iLocal_532))
	{
		Function_381(&iLocal_532, (20.0f - 8.0f));
	}
	else if ((((((Function_290(Local_4.f_848) >= 0 && Function_290(Local_4.f_808) >= 0) && !IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_675 != 3) && iLocal_674 != 3) && !iLocal_517) && IS_ACTOR_RIDING(bLocal_476))
	{
		Function_228(&iLocal_532);
		switch (iLocal_492)
		{
			case 0x00000000:
				Function_380();
				iLocal_517 = 1;
				iLocal_492 = 1;
				break;
			
			case 0x00000001:
				Function_379();
				iLocal_517 = 1;
				iLocal_492 = 2;
				break;
			
			case 0x00000002:
				Function_378();
				iLocal_517 = 1;
				iLocal_492 = 3;
				break;
		}
	}
	else if (!IS_ACTOR_RIDING(bLocal_476))
	{
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			ABORT_SCRIPTED_CONVERSATION(1);
		}
	}
	return;
}

void Function_378() //Position: 0x14DAD / 85421
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v7_AA", "MexGirl03_combatBanter_v7_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v7_AB", "MexGirl03_combatBanter_v7_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v7_AC", "MexGirl03_combatBanter_v7_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v7_AD", "MexGirl03_combatBanter_v7_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v7_AE", "MexGirl03_combatBanter_v7_AE", 4, 1, 0, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_379() //Position: 0x14F2B / 85803
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v3_AA", "MexGirl03_combatBanter_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v3_AB", "MexGirl03_combatBanter_v3_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v3_AC", "MexGirl03_combatBanter_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v3_AD", "MexGirl03_combatBanter_v3_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v3_AE", "MexGirl03_combatBanter_v3_AE", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v3_AF", "MexGirl03_combatBanter_v3_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v3_AG", "MexGirl03_combatBanter_v3_AG", 4, 1, 0, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_380() //Position: 0x15137 / 86327
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v1_AA", "MexGirl03_combatBanter_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v1_AB", "MexGirl03_combatBanter_v1_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v1_AC", "MexGirl03_combatBanter_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v1_AD", "MexGirl03_combatBanter_v1_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_combatBanter_v1_AE", "MexGirl03_combatBanter_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_combatBanter_v1_AF", "MexGirl03_combatBanter_v1_AF", 4, 1, 0, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_381(int iParam0, float fParam1) //Position: 0x152FC / 86780
{
	if (!Function_548(iParam0))
	{
		Function_229(iParam0, fParam1);
	}
	return;
}

void Function_382() //Position: 0x15312 / 86802
{
	if (!iLocal_520)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_477, (*&Local_4 + 984)[5]))
		{
			SET_ACTOR_MAX_SPEED(bLocal_477, 4);
			iLocal_520 = 1;
		}
	}
	else if (IS_ACTOR_IN_VOLUME(bLocal_477, (*&Local_4 + 984)[6]))
	{
		CLEAR_ACTOR_MAX_SPEED(bLocal_477);
		iLocal_520 = 0;
	}
	return;
}

void Function_383() //Position: 0x15359 / 86873
{
	switch (iLocal_675)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[2]))
			{
				Function_389();
				iLocal_675 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[3]))
			{
				Function_388();
				Function_387(Local_4.f_848, Global_34573, 0);
				AUDIO_MUSIC_SET_MOOD("CHASE_HIGH", 0, 4294967295, 4294967295);
				Function_386(Local_4.f_848, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				iLocal_675 = 2;
			}
			break;
		
		case 0x00000002:
			Function_384(Local_4.f_848, Global_34573, 115.0f, 1);
			if (Function_290(Local_4.f_848) < 0)
			{
				iLocal_511 = 0;
				AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
				iLocal_675 = 3;
			}
			break;
	}
	return;
}

void Function_384(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15422 / 87074
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
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!Function_385(bParam1, bVar1, bParam2))
			{
				SQUAD_LEAVE(bVar1);
				RELEASE_ACTOR(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_RIDING(bVar1))
					{
						RELEASE_ACTOR(GET_MOUNT(bVar1));
					}
				}
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_385(bool bParam0, bool bParam1, bool bParam2) //Position: 0x154A1 / 87201
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

void Function_386(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x155B2 / 87474
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

void Function_387(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1569C / 87708
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

void Function_388() //Position: 0x15707 / 87815
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_soldiersCampRiver", "MexGirl03_soldiersCampRiver", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_389() //Position: 0x15767 / 87911
{
	Function_396();
	Function_395(Local_4.f_848, bLocal_477, 2);
	Function_395(Local_4.f_848, GET_MOUNT(bLocal_477), 2);
	Function_395(Local_4.f_848, bLocal_476, 2);
	Function_393(Local_4.f_848, 48.0f, -1.0f, -1.0f);
	Function_392(Local_4.f_848, 0);
	Function_391(Local_4.f_848, 1);
	Function_390(Local_4.f_848, 1);
	return;
}

void Function_390(bool bParam0, int iParam1) //Position: 0x157C1 / 88001
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

void Function_391(bool bParam0, int iParam1) //Position: 0x15802 / 88066
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

void Function_392(bool bParam0, int iParam1) //Position: 0x15849 / 88137
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

void Function_393(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x15880 / 88192
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
			Function_394(bVar1, fParam1, fParam2, fParam3);
		}
		bVar0++;
	}
}

void Function_394(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x158C6 / 88262
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

void Function_395(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1590D / 88333
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

void Function_396() //Position: 0x15952 / 88402
{
	Local_4.f_848 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Infantry_0"));
	(*&Local_4 + 812)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Inf_0_0", 392, -1150,42f, 16,38765f, 3306,846f, 0.0f, 212,1946f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 812)[02], Local_4.f_848);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 812)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 812)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 812)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 812)[02], 19);
	(*&Local_4 + 812)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Inf_0_1", 380, -1153,058f, 16,34948f, 3308,283f, 0.0f, 212,1946f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 812)[12], Local_4.f_848);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 812)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 812)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 812)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 812)[12], 19);
	(*&Local_4 + 812)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Inf_0_2", 379, -1194,381f, 37,83099f, 3356f, 0.0f, 225,9713f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 812)[22], Local_4.f_848);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 812)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 812)[22], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 812)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 812)[22], 19);
	(*&Local_4 + 812)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Inf_0_3", 393, -1190,282f, 37,92279f, 3354,373f, 0.0f, 207,9504f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 812)[32], Local_4.f_848);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 812)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 812)[32], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 812)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 812)[32], 19);
	return;
}

void Function_397() //Position: 0x15B5A / 88922
{
	switch (iLocal_674)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[0]))
			{
				Function_402();
				iLocal_674 = 1;
			}
			break;
		
		case 0x00000001:
			if ((((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[1]) && Function_290(Local_4.f_808) <= 0) || Function_401(Local_4.f_808, Global_34573)) || Function_400((*&Local_4 + 788)[02], 0)) || Function_400((*&Local_4 + 788)[12], 0))
			{
				Function_399(Local_4.f_808);
				Function_398();
				AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
				TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH((*&Local_4 + 788)[02], Global_34573, Local_4.f_1492, 2,5f, 1, false);
				TASK_PRIORITY_SET((*&Local_4 + 788)[02], true);
				TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH((*&Local_4 + 788)[12], Global_34573, Local_4.f_1492, 2,5f, 1, false);
				TASK_PRIORITY_SET((*&Local_4 + 788)[12], true);
				iLocal_674 = 2;
			}
			break;
		
		case 0x00000002:
			Function_384(Local_4.f_808, Global_34573, 85.0f, 1);
			if (Function_290(Local_4.f_808) < 0)
			{
				iLocal_511 = 0;
				iLocal_674 = 3;
			}
			break;
	}
	return;
}

void Function_398() //Position: 0x15C6B / 89195
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_fortWaveAttack", "MexGirl03_fortWaveAttack", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_399(bool bParam0) //Position: 0x15CC5 / 89285
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

bool Function_400(bool bParam0, bool bParam1) //Position: 0x15CF7 / 89335
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

int Function_401(bool bParam0, bool bParam1) //Position: 0x15D82 / 89474
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

void Function_402() //Position: 0x15DEB / 89579
{
	Function_405();
	Function_404(Local_4.f_808, 1);
	Function_403(Local_4.f_808, 1);
	Function_386(Local_4.f_808, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_395(Local_4.f_808, bLocal_477, 2);
	Function_395(Local_4.f_808, GET_MOUNT(bLocal_477), 2);
	Function_395(Local_4.f_808, bLocal_476, 2);
	Function_393(Local_4.f_808, 48.0f, -1.0f, -1.0f);
	bLocal_480 = GET_MOUNT((*&Local_4 + 788)[02]);
	bLocal_481 = GET_MOUNT((*&Local_4 + 788)[12]);
	bLocal_490 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1512, 4, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 788)[02], bLocal_490);
	TASK_SEQUENCE_RELEASE(bLocal_490, 1);
	bLocal_490 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1516, 4, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 788)[12], bLocal_490);
	TASK_SEQUENCE_RELEASE(bLocal_490, 1);
	return;
}

void Function_403(bool bParam0, bool bParam1) //Position: 0x15ED9 / 89817
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

void Function_404(bool bParam0, bool bParam1) //Position: 0x15F17 / 89879
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

void Function_405() //Position: 0x15F5F / 89951
{
	Local_4.f_808 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nCavalry_0"));
	(*&Local_4 + 788)[02] = Function_406(Local_4, "Cav_0_0", 392, Function_53(), 981, -855,7823f, 67,89626f, 3348,469f, 0.0f, -35,1418f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 788)[02], Local_4.f_808);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 788)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 788)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 788)[02], 19);
	(*&Local_4 + 788)[12] = Function_406(Local_4, "Cav_0_1", 391, Function_53(), 980, -852,8286f, 67,89626f, 3349,342f, 0.0f, -40,16252f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 788)[12], Local_4.f_808);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 788)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 788)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 788)[12], 19);
	return;
}

var Function_406(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x16068 / 90216
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_309(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_309(bParam4))
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

void Function_407() //Position: 0x1618D / 90509
{
	if (!IS_ACTOR_ALIVE(bLocal_442) && !IS_ACTOR_ALIVE(Global_12976.f_36))
	{
		if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[4]))
		{
			if (iLocal_674 > 1)
			{
				if (!IS_ACTOR_ALIVE(bLocal_480) && !IS_ACTOR_ALIVE(bLocal_481))
				{
					Function_236("mexgirl03_no_horse");
					Function_241(bLocal_437);
					Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
				}
			}
			else
			{
				Function_236("mexgirl03_no_horse");
				Function_241(bLocal_437);
				Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
			}
		}
		else if (Function_290(Local_4.f_784) < 0)
		{
			Function_236("mexgirl03_no_horse");
			Function_241(bLocal_437);
			Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
		}
	}
	return;
}

void Function_408() //Position: 0x16271 / 90737
{
	switch (iLocal_676)
	{
		case 0x00000000:
			if (Function_421(&iLocal_449, 5.0f, 40.0f, bLocal_476, "mexgirl03_obj08", "RebelLeader_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_476, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_476), "BLIP_COMP_REBEL");
				if (iLocal_673 < 5)
				{
					Function_211(bLocal_477);
				}
				else
				{
					Function_311(8, 0, 1);
				}
				iLocal_676 = 1;
			}
			else if (iLocal_673 > 5)
			{
				if (iLocal_673 == 5)
				{
					if (Function_411(&iLocal_449, 60.0f, 200.0f, bLocal_477, "RebelGuide_return", "RebelGuide_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
					{
						Function_409();
						iLocal_676 = 2;
					}
				}
				else if (iLocal_673 < 5 && iLocal_673 >= 8)
				{
					if (IS_VOLUME_VALID((*&Local_4 + 1032)[3]))
					{
						if (Function_367(Global_34573, bLocal_441) >= 50.0f)
						{
							DESTROY_VOLUME((*&Local_4 + 1032)[3]);
							return;
						}
						if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1032)[3]))
						{
							if (Function_411(&iLocal_449, 60.0f, 200.0f, bLocal_441, "Mexgirl_return", "Mexgirl_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
							{
								iLocal_676 = 3;
							}
						}
					}
					else if (Function_411(&iLocal_449, 60.0f, 200.0f, bLocal_441, "Mexgirl_return", "Mexgirl_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
					{
						iLocal_676 = 3;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_421(&iLocal_449, 5.0f, 40.0f, bLocal_476, "mexgirl03_obj08", "RebelLeader_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
			{
				if (iLocal_673 <= 5)
				{
					Function_247();
					Function_422("mexgirl03_obj09", 0x40f00000, 1, 2, 0, 0, 0);
				}
				else if (iLocal_673 == 5)
				{
					Function_247();
					if (Function_367(Global_34573, bLocal_477) > 60.0f)
					{
						Function_422("mexgirl03_obj10", 0x40f00000, 1, 2, 0, 0, 0);
					}
					else
					{
						Function_422("RebelGuide_Return", 0x40f00000, 1, 2, 0, 0, 0);
					}
					ADD_BLIP_FOR_ACTOR(bLocal_477, 325, 0, 2, 0);
				}
				else
				{
					Function_247();
					if (Function_367(Global_34573, bLocal_441) > 60.0f)
					{
						Function_422("mexgirl03_obj12", 0x40f00000, 1, 2, 0, 0, 0);
					}
					else
					{
						Function_422("Mexgirl_return", 0x40f00000, 1, 2, 0, 0, 0);
					}
					Function_211(bLocal_477);
					Function_311(8, 1, 1);
				}
				Function_211(bLocal_476);
				iLocal_676 = 0;
			}
			else
			{
				Function_311(8, 0, 1);
				Function_211(bLocal_477);
			}
			break;
		
		case 0x00000002:
			if (!Function_411(&iLocal_449, 60.0f, 200.0f, bLocal_477, "RebelGuide_return", "RebelGuide_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
			{
				Function_247();
				Function_422("mexgirl03_obj10", 0x40f00000, 1, 2, 0, 0, 0);
				iLocal_676 = 0;
			}
			else if (Function_421(&iLocal_449, 5.0f, 40.0f, bLocal_476, "mexgirl03_obj08", "RebelLeader_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_476, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_476), "BLIP_COMP_REBEL");
				Function_211(bLocal_477);
				iLocal_676 = 1;
			}
			break;
		
		case 0x00000003:
			if (!Function_411(&iLocal_449, 60.0f, 200.0f, bLocal_441, "Mexgirl_return", "Mexgirl_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
			{
				iLocal_676 = 0;
			}
			else if (Function_421(&iLocal_449, 5.0f, 40.0f, bLocal_476, "mexgirl03_obj08", "RebelLeader_abandoned", &bLocal_462, 1, 0, 0, 325, 0))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_476, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_476), "BLIP_COMP_REBEL");
				Function_311(8, 0, 1);
				iLocal_676 = 1;
			}
			break;
	}
	return;
}

void Function_409() //Position: 0x16785 / 92037
{
	if (Function_546(&iLocal_446) <= 10.0f)
	{
		if (IS_ACTOR_RIDING(Global_34573) && IS_ACTOR_RIDING(bLocal_476))
		{
			if (!Function_132() && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_410();
				Function_228(&iLocal_446);
			}
		}
	}
	return;
}

void Function_410() //Position: 0x167BF / 92095
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_NoFolloGuideEscort", "MexGirl03_NoFolloGuideEscort", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_411(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x16821 / 92193
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_418(Global_34573, bParam3, iParam2))
	{
		Function_236(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_418(Global_34573, bParam3, bParam1))
	{
		if (!Function_417(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_422(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_416(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_415(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_415(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_417(1))
	{
		Function_414(1);
		if (!Function_413())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_412();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_415(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_415(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_412() //Position: 0x1698F / 92559
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

bool Function_413() //Position: 0x169BA / 92602
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

void Function_414(bool bParam0) //Position: 0x169FE / 92670
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

void Function_415(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x16A61 / 92769
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

void Function_416(bool bParam0) //Position: 0x16B02 / 92930
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

bool Function_417(bool bParam0) //Position: 0x16B65 / 93029
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

bool Function_418(bool bParam0, bool bParam1, float fParam2) //Position: 0x16BAC / 93100
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_420(bParam0);
			Function_419(bParam1);
			if (VDIST(Function_420(bParam0), Function_419(bParam1)) >= fParam2)
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

vector3 Function_419(bool bParam0) //Position: 0x16CC6 / 93382
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

vector3 Function_420(bool bParam0) //Position: 0x16D32 / 93490
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

bool Function_421(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x16D9C / 93596
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_385(Global_34573, bParam3, iParam2))
	{
		Function_236(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_385(Global_34573, bParam3, bParam1))
	{
		if (!Function_417(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_422(bParam4, 7,5f, 0, 2, iParam7, 0, 0);
				}
				Function_416(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_415(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_415(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_417(2))
	{
		Function_414(2);
		if (!Function_413())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_412();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_211(bParam3);
				Function_312(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_415(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_415(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_422(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x16F30 / 94000
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

void Function_423() //Position: 0x16F83 / 94083
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_setOff", "MexGirl03_setOff", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_424(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x16FCD / 94157
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
	if (iParam3 != Global_34165.f_48 && !Function_429())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_428(0);
	Function_427();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_426(uParam4, iVar0, iVar1);
	Function_425();
}

void Function_425() //Position: 0x1706A / 94314
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

void Function_426(int iParam0, bool bParam1, bool bParam2) //Position: 0x170AB / 94379
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

void Function_427() //Position: 0x17211 / 94737
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_428(bool bParam0) //Position: 0x17235 / 94773
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

bool Function_429() //Position: 0x17264 / 94820
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_430() //Position: 0x1727F / 94847
{
	if (!IS_DOOR_VALID(bLocal_487))
	{
		LOG_ERROR("back gate 98 is not valid");
		return 0;
	}
	if (!IS_DOOR_OPENED(bLocal_487))
	{
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_488))
	{
		LOG_ERROR("back gate 99 is not valid");
		return 0;
	}
	if (!IS_DOOR_OPENED(bLocal_488))
	{
		return 0;
	}
	return 1;
}

void Function_431() //Position: 0x172FA / 94970
{
	Function_214(Global_34573, (*&Local_4 + 1324)[0], 1, 1, 1);
	Function_214(bLocal_442, (*&Local_4 + 1324)[2], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(Global_34573, bLocal_442);
	Function_217();
	SET_ACTOR_IS_COMPANION(bLocal_476, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_476);
	Function_214(bLocal_476, (*&Local_4 + 1324)[1], 1, 1, 1);
	SET_ANIM_SET_FOR_ACTOR(bLocal_476, "gent_ride_passenger", 0);
	SET_MOUNTS_AS_PASSENGER(bLocal_476, 1);
	Function_314(bLocal_476, 0, 0, 0, 0, 0, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	ACTOR_MOUNT_ACTOR(bLocal_476, bLocal_442);
	DECOR_SET_BOOL(bLocal_442, "bNoInjuryEjection", true);
	if (Function_290(Local_4.f_784) < 0)
	{
		Function_289();
	}
	Function_432();
	return;
}

void Function_432() //Position: 0x173CB / 95179
{
	if (!IS_ACTOR_VALID(bLocal_477))
	{
		Function_433();
		bLocal_477 = (*&Local_4 + 656)[02];
		MEMORY_PREFER_RIDING(bLocal_477, true);
		MEMORY_ALLOW_SHOOTING(bLocal_477, false);
		AI_IGNORE_ACTOR(bLocal_477);
		Function_222(&(Local_593[317]), bLocal_477, "RebelGuide", 1, 0x5f5e100, 1);
		SET_ACTORS_HORSE(bLocal_477, GET_MOUNT(bLocal_477));
		DECOR_SET_BOOL(GET_MOUNT(bLocal_477), "bNoInjuryEjection", true);
	}
	return;
}

void Function_433() //Position: 0x1744D / 95309
{
	Local_4.f_668 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Rebel_Guideset", 0);
	(*&Local_4 + 656)[02] = Function_406(Local_4, "Guide", 529, Function_53(), 980, -745,5235f, 63,64517f, 3289,63f, 0.0f, -66,21224f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_668, (*&Local_4 + 656)[02]);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 656)[02], false);
	SET_ACTOR_FACTION((*&Local_4 + 656)[02], 20);
	return;
}

void Function_434(int iParam0) //Position: 0x174CD / 95437
{
	if (!Function_284(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_181(1, 0, 1);
		}
	}
	return;
}

int Function_435(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x174E8 / 95464
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_438(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_439()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_436();
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
	else if ((!Function_438(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_439()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_438(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_436() //Position: 0x1772E / 96046
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
			Function_437(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_437(char* cParam0, vector3 vParam1) //Position: 0x17782 / 96130
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

bool Function_438(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x178AA / 96426
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_420(bParam0);
		if (VDIST(Function_420(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_439() //Position: 0x17934 / 96564
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_440() //Position: 0x17943 / 96579
{
	if (!Function_441(Global_34573, bLocal_442))
	{
		if (!iLocal_518)
		{
			TASK_CLEAR(bLocal_476);
			TASK_FACE_ACTOR(bLocal_476, Global_34573, 1, 3212836864);
			TASK_PRIORITY_SET(bLocal_476, true);
			iLocal_518 = 1;
		}
	}
	else if (iLocal_518)
	{
		if (!IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(Global_34573))))
		{
			TASK_CLEAR(bLocal_476);
			TASK_MOUNT(bLocal_476, bLocal_442, 0, 1, 2, 2147483647);
			TASK_PRIORITY_SET(bLocal_476, true);
			if (!DECOR_CHECK_EXIST(bLocal_442, "bNoInjuryEjection"))
			{
				DECOR_SET_BOOL(bLocal_442, "bNoInjuryEjection", true);
			}
			iLocal_518 = 0;
		}
	}
	else if (!IS_ACTOR_RIDING(bLocal_476))
	{
		if (!IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(Global_34573))))
		{
			if (GET_TASK_STATUS(bLocal_476, 11) != 1)
			{
				TASK_CLEAR(bLocal_476);
				TASK_MOUNT(bLocal_476, bLocal_442, 0, 1, 2, 2147483647);
				TASK_PRIORITY_SET(bLocal_476, true);
			}
		}
	}
	return;
}

bool Function_441(bool bParam0, int iParam1) //Position: 0x17A39 / 96825
{
	if (GET_MOUNT(bParam0) != iParam1)
	{
		return 0;
	}
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(bParam0))
	{
		return 1;
	}
	return 0;
}

void Function_442(int iParam0) //Position: 0x17A56 / 96854
{
	switch (iLocal_491)
	{
		case 0x00000000:
			iLocal_491++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID((*iParam0)[0]))
			{
				(*iParam0)[0] = Function_333(Global_30707[1], "nfortDiego", "gates01", 96);
				if (IS_DOOR_VALID((*iParam0)[0]))
				{
				}
			}
			if (IS_DOOR_VALID((*iParam0)[0]))
			{
				Function_120((*iParam0)[0], 0);
			}
			if (!IS_DOOR_VALID((*iParam0)[1]))
			{
				(*iParam0)[1] = Function_333(Global_30707[1], "nfortDiego", "gates01", 97);
				if (IS_DOOR_VALID((*iParam0)[1]))
				{
				}
			}
			if (IS_DOOR_VALID((*iParam0)[1]))
			{
				Function_120((*iParam0)[1], 0);
			}
			if (bLocal_437 <= 3)
			{
				if (!IS_DOOR_VALID((*iParam0)[2]))
				{
					(*iParam0)[2] = Function_333(Global_30707[1], "nfortDiego", "entStructure01", 98);
					if (IS_DOOR_VALID((*iParam0)[2]))
					{
					}
				}
				if (IS_DOOR_VALID((*iParam0)[2]))
				{
					Function_120((*iParam0)[2], 0);
				}
				if (!IS_DOOR_VALID((*iParam0)[3]))
				{
					(*iParam0)[3] = Function_333(Global_30707[1], "nfortDiego", "entStructure01", 99);
					if (IS_DOOR_VALID((*iParam0)[3]))
					{
					}
				}
				if (IS_DOOR_VALID((*iParam0)[3]))
				{
					Function_120((*iParam0)[3], 0);
				}
			}
			iLocal_491++;
			break;
		
		case 0x00000002:
			iLocal_491++;
			break;
	}
	return;
}

bool Function_443(bool bParam0) //Position: 0x17C0B / 97291
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_158(&(Global_29008[bParam0]), 4);
}

void Function_444() //Position: 0x17C27 / 97319
{
	if (Function_443(Global_30707[1]))
	{
		Function_442(&iLocal_482);
	}
	else
	{
		iLocal_491 = 0;
	}
	if (iLocal_438 < 6 && iLocal_438 > 105)
	{
		Function_421(&iLocal_449, 60.0f, 200.0f, bLocal_476, "MG03_RebelLeader_return", "RebelLeader_abandoned", &bLocal_462, 0, 0, 0, 325, 1);
		Function_407();
	}
	switch (iLocal_438)
	{
		case 0x00000000:
			Function_353(0);
			SET_ACTOR_HEALTH(bLocal_441, GET_ACTOR_MAX_HEALTH(bLocal_441));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			if (iLocal_452[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_350();
				bLocal_439 = Global_30633[1];
				if (!Function_443(bLocal_439))
				{
					Function_434(&Local_390);
				}
				Function_214(Global_34573, (*&Local_4 + 1152)[1], 1, 1, 1);
				Function_214(bLocal_441, (*&Local_4 + 1176)[1], 1, 1, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 1;
			}
			else
			{
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_443(bLocal_439) || bLocal_439 != 4294967295)) && Function_449())
			{
				Function_448();
				Function_332();
				Function_214(bLocal_476, (*&Local_4 + 1296)[0], 0, 1, 1);
				Function_243((*&Local_4 + 1296)[4]);
				vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1296)[4]) };
				TASK_CLEAR(bLocal_476);
				TASK_GO_NEAR_COORD(bLocal_476, &vLocal_497, 0,25f, true);
				Function_228(&iLocal_443);
				iLocal_438 = 85;
			}
			break;
		
		case 0x00000055:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000002:
			Function_242(bLocal_437);
			Function_424(StackVal, StackVal, Function_242(bLocal_437), bLocal_437, Global_30633[1], Function_245(bLocal_437), 0);
			Function_347();
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_214(bLocal_441, (*&Local_4 + 1176)[1], 1, 1, 1);
			TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
			Function_228(&iLocal_443);
			iLocal_438 = 95;
			break;
		
		case 0x0000005F:
			if (!HUD_IS_FADING())
			{
				Function_447();
				Function_446();
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1296)[1], 325, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1296)[1]), "mexgirl03_blip_stable");
				Function_228(&iLocal_443);
				iLocal_438 = 6;
			}
			break;
		
		case 0x00000006:
			Function_446();
			if (iLocal_452[2] == 0)
			{
				if (Function_546(&iLocal_443) > 5.0f)
				{
					return;
				}
			}
			if (!HUD_IS_FADING())
			{
				Function_422("mexgirl03_obj07", 0x40f00000, 1, 2, 0, 0, 0);
				Function_228(&iLocal_443);
				iLocal_438 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_290(Local_4.f_784) < 0)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1296)[1])))
				{
					Function_312((*&Local_4 + 1296)[1]);
				}
			}
			Function_446();
			if (IS_ACTOR_RIDING(Global_34573))
			{
				Function_312((*&Local_4 + 1296)[1]);
				Function_422("mexgirl03_obj08", 0x40f00000, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_ACTOR(bLocal_476, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_476), "BLIP_COMP_REBEL");
				Function_228(&iLocal_443);
				iLocal_438 = 8;
			}
			else if (Function_546(&iLocal_443) <= 25.0f && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_445();
				Function_228(&iLocal_443);
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 956)[3]) && IS_ACTOR_RIDING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(Global_34573))))
				{
					SET_MOVER_FROZEN(bLocal_476, false);
					TASK_CLEAR(bLocal_476);
					TASK_MOUNT(bLocal_476, GET_MOUNT(Global_34573), 0, 1, 2, 2147483647);
					TASK_PRIORITY_SET(bLocal_476, true);
					Function_228(&iLocal_443);
					iLocal_438 = 9;
				}
			}
			break;
		
		case 0x00000009:
			Function_440();
			if (IS_ACTOR_RIDING(Global_34573) && IS_ACTOR_RIDING(bLocal_476))
			{
				bLocal_442 = GET_MOUNT(Global_34573);
				DECOR_SET_BOOL(bLocal_442, "bNoInjuryEjection", true);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_476);
				Function_432();
				Function_211(bLocal_476);
				Function_228(&iLocal_443);
				iLocal_438 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_205();
			iLocal_452[4] = 1;
			Function_228(&iLocal_443);
			bLocal_437 = 5;
			iLocal_438 = 0;
			break;
	}
	return;
}

void Function_445() //Position: 0x18082 / 98434
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_findAHorse_waiting", "MexGirl03_findAHorse_waiting", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446() //Position: 0x180E4 / 98532
{
	if (!iLocal_523)
	{
		Function_345(bLocal_476);
		Function_243((*&Local_4 + 1296)[4]);
		if (VDIST(Function_345(bLocal_476), Function_243((*&Local_4 + 1296)[4])) > 0,75f)
		{
			TASK_CLEAR(bLocal_476);
			SET_ACTOR_FACE_STYLE(bLocal_476, 2);
			TASK_FACE_ACTOR(bLocal_476, Global_34573, 1, -1.0f);
			SET_MOVER_FROZEN(bLocal_476, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_476, (*&Local_4 + 924)[1], 2, true);
			iLocal_523 = 1;
		}
	}
	return;
}

void Function_447() //Position: 0x18141 / 98625
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_findAHorse", "MexGirl03_findAHorse", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_448() //Position: 0x18193 / 98707
{
	Function_214(Global_34573, (*&Local_4 + 1152)[1], 1, 1, 1);
	Function_217();
	SET_ACTOR_IS_COMPANION(bLocal_476, 1);
	Function_214(bLocal_476, (*&Local_4 + 1296)[0], 0, 1, 1);
	SET_ANIM_SET_FOR_ACTOR(bLocal_476, "gent_ride_passenger", 0);
	SET_MOUNTS_AS_PASSENGER(bLocal_476, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	Function_289();
	return;
}

int Function_449() //Position: 0x18202 / 98818
{
	Function_328(&Local_4 + 308, 529, 2, 0);
	Function_328(&Local_4 + 308, 980, 2, 0);
	Function_328(&Local_4 + 308, 554, 2, 0);
	if (Function_320(&Local_4 + 308))
	{
		return 1;
	}
	return 0;
}

void Function_450() //Position: 0x18240 / 98880
{
	if (Function_443(Global_30707[1]))
	{
		Function_442(&iLocal_482);
	}
	else
	{
		iLocal_491 = 0;
	}
	switch (iLocal_438)
	{
		case 0x00000000:
			Function_353(0);
			SET_ACTOR_HEALTH(bLocal_441, GET_ACTOR_MAX_HEALTH(bLocal_441));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			if (iLocal_452[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_350();
				bLocal_439 = Global_30633[1];
				if (!Function_443(bLocal_439))
				{
					Function_434(&Local_390);
				}
				Function_442(&iLocal_482);
				Function_214(Global_34573, (*&Local_4 + 1244)[0], 1, 1, 1);
				Function_214(bLocal_441, (*&Local_4 + 1176)[1], 1, 1, 1);
				bLocal_516 = true;
				iLocal_670 = 8;
				Function_228(&iLocal_443);
				iLocal_438 = 1;
			}
			else
			{
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_443(bLocal_439) || bLocal_439 != 4294967295)) && Function_499())
			{
				Function_491();
				DISABLE_PLAYER_GRINGO_USE(0, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 85;
			}
			break;
		
		case 0x00000055:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_669 = iLocal_670;
			iLocal_511 = 1;
			Function_449();
			if (iLocal_452[2] == 0)
			{
				SET_CAMERA_POSITION(GET_GAME_CAMERA(), -713,333f, 75,613f, 3277,214f);
				SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), -16,526f, -142,155f, 0.0f, 0);
				ACTOR_END_FORCE_HOLSTER(bLocal_475);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_475, 0);
				bLocal_490 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1480), "Beatup", 4294967295, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_475, bLocal_490);
				TASK_SEQUENCE_RELEASE(bLocal_490, 1);
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			ADD_COMPANION_PERMANENT();
			SET_ACTOR_ONE_SHOT_DEATH(bLocal_476, true);
			if (bLocal_516)
			{
				Function_242(bLocal_437);
				Function_424(StackVal, StackVal, Function_242(bLocal_437), bLocal_437, Global_30633[1], Function_245(bLocal_437), 0);
			}
			if (!bLocal_510)
			{
				Function_228(&iLocal_443);
				iLocal_438 = 6;
			}
			else
			{
				Function_228(&iLocal_443);
				iLocal_438 = 95;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_DRUM_HIGH", 0, 4294967295, 4294967295);
				Function_247();
				Function_422("mexgirl03_obj05", 0x40f00000, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_ACTOR(bLocal_475, 322, 0, 2, 0);
				iLocal_669 = 22;
				iLocal_671 = 1;
				Function_228(&iLocal_443);
				iLocal_438 = 7;
			}
			break;
		
		case 0x0000005F:
			if (!IS_ACTOR_ALIVE(bLocal_475))
			{
				Function_490();
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				iLocal_671 = 2;
				Function_228(&iLocal_443);
				iLocal_438 = 7;
			}
			else
			{
				Function_489();
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				iLocal_671 = 2;
				Function_228(&iLocal_443);
				iLocal_438 = 7;
			}
			break;
		
		case 0x00000007:
			Function_243((*&Local_4 + 1296)[0]);
			Function_435(StackVal, StackVal, "$/cutscene/MEX_GIRL_03_CS02/MEX_GIRL_03_CS02", &uLocal_667, Function_243((*&Local_4 + 1296)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
			if (Function_458())
			{
				Function_214(bLocal_441, (*&Local_4 + 1176)[1], 1, 1, 1);
				TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
				iLocal_511 = 0;
				Function_229(&iLocal_443, 12.0f);
				iLocal_438 = 9;
			}
			break;
		
		case 0x00000009:
			Function_243((*&Local_4 + 1296)[0]);
			Function_435(StackVal, StackVal, "$/cutscene/MEX_GIRL_03_CS02/MEX_GIRL_03_CS02", &uLocal_667, Function_243((*&Local_4 + 1296)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
			if (Function_455())
			{
				Function_228(&iLocal_443);
				iLocal_438 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_454();
			Function_206();
			iLocal_452[3] = 1;
			Function_228(&iLocal_443);
			bLocal_437 = 4;
			iLocal_438 = 0;
			break;
		
		case 0x00000060:
			SET_ACTOR_ONE_SHOT_DEATH(bLocal_476, true);
			Function_453(Local_4.f_652, 1);
			Function_395(Local_4.f_652, bLocal_476, 4);
			Function_452(Local_4.f_652, bLocal_476, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_652, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			MEMORY_ALLOW_SHOOTING(bLocal_475, true);
			MEMORY_CONSIDER_AS_ENEMY(bLocal_475, bLocal_476);
			Function_451(bLocal_475, bLocal_476);
			Function_228(&iLocal_443);
			iLocal_438 = 97;
			break;
		
		case 0x00000061:
			if (Function_546(&iLocal_443) <= 0,25f)
			{
			}
			break;
	}
	return;
}

void Function_451(bool bParam0, bool bParam1) //Position: 0x186C7 / 100039
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &uVar0);
	return;
}

void Function_452(bool bParam0, bool bParam1, bool bParam2) //Position: 0x186DD / 100061
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
			GET_POSITION(bVar1, &uVar2);
			TASK_SHOOT_FROM_POSITION(bVar1, bParam1, &uVar2);
			TASK_PRIORITY_SET(bVar1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_453(bool bParam0, bool bParam1) //Position: 0x18737 / 100151
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

void Function_454() //Position: 0x1877F / 100223
{
	Function_214(bLocal_441, (*&Local_4 + 1176)[1], 1, 1, 1);
	TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_441, true);
	if (IS_ACTOR_VALID(bLocal_474))
	{
		RELEASE_ACTOR(bLocal_474);
	}
	return;
}

bool Function_455() //Position: 0x187B5 / 100277
{
	Function_421(&iLocal_449, 60.0f, 200.0f, bLocal_476, "MG03_RebelLeader_return", "RebelLeader_abandoned", &bLocal_462, 0, 0, 0, 325, 1);
	switch (iLocal_672)
	{
		case 0x00000000:
			if (Function_367(bLocal_476, Global_34573) > 27.0f)
			{
				if (Function_546(&iLocal_443) <= 15.0f && iLocal_493 > 3)
				{
					iLocal_493++;
					Function_228(&iLocal_443);
					Function_457();
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[1]))
			{
				Function_456();
				Function_228(&iLocal_443);
				iLocal_672 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_367(bLocal_476, Global_34573) > 27.0f)
			{
				if (Function_546(&iLocal_443) <= 15.0f && iLocal_493 > 3)
				{
					iLocal_493++;
					Function_228(&iLocal_443);
					Function_457();
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[5]) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_211(bLocal_476);
				Function_228(&iLocal_443);
				iLocal_672 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_276("$/cutscene/MEX_GIRL_03_CS02/MEX_GIRL_03_CS02", &iLocal_430, &Local_390, &bLocal_437, 78726, 78624, 77843, 77140, 76752, 52233, 0, 1, 1, 2, 2, 0, 1))
			{
				SET_ACTOR_IS_COMPANION(bLocal_476, 1);
				Function_228(&iLocal_443);
				iLocal_672 = 5;
			}
			break;
		
		case 0x00000005:
			if (SET_ANIM_SET_FOR_ACTOR(bLocal_476, "gent_ride_passenger", 0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_456() //Position: 0x18983 / 100739
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_ReyesShoutsUntie", "MexGirl03_ReyesShoutsUntie", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_457() //Position: 0x189E1 / 100833
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_ReyesWaitingforJohn", "MexGirl03_ReyesWaitingforJohn", false, 1, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_458() //Position: 0x18A45 / 100933
{
	switch (iLocal_671)
	{
		case 0x00000000:
			Function_477();
			if (GATEWAY_UPDATE(bLocal_472))
			{
				Function_476(bLocal_472);
				iLocal_670 = iLocal_669;
				iLocal_669 = 22;
				bLocal_516 = true;
				return 1;
			}
			if (((Function_400(Global_34573, 1) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[2])) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[3])) || bLocal_510)
			{
				if (!Function_548(&iLocal_529))
				{
					Function_381(&iLocal_529, 0.0f);
					bLocal_510 = true;
				}
				else if (Function_546(&iLocal_529) <= 0,1f)
				{
					return 1;
				}
			}
			break;
		
		case 0x00000001:
			Function_477();
			if (((Function_400(Global_34573, 1) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[2])) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[3])) || bLocal_510)
			{
				if (!Function_548(&iLocal_529))
				{
					Function_381(&iLocal_529, 0.0f);
					bLocal_510 = true;
				}
				else if (Function_546(&iLocal_529) <= 0,25f)
				{
					if (!IS_ACTOR_ALIVE(bLocal_475))
					{
						Function_490();
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
						iLocal_671 = 2;
					}
					else
					{
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
						Function_489();
						iLocal_671 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_474())
			{
				iLocal_671 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_ALIVE(bLocal_476))
			{
				Function_236("RebelLeader_dead");
				Function_241(bLocal_437);
				Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
			}
			if (!Function_548(&iLocal_529))
			{
				Function_381(&iLocal_529, 0.0f);
			}
			else if (Function_546(&iLocal_529) <= 1,45f)
			{
				if (IS_ACTOR_ALIVE(bLocal_475))
				{
					MEMORY_ALLOW_SHOOTING(bLocal_475, true);
					MEMORY_CONSIDER_AS_ENEMY(bLocal_475, bLocal_476);
					TASK_CLEAR(bLocal_475);
					Function_243((*&Local_4 + 1244)[1]);
					vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1244)[1]) };
					TASK_SHOOT_FROM_POSITION(bLocal_475, bLocal_476, &vLocal_497);
					TASK_PRIORITY_SET(bLocal_475, true);
					SET_ACTOR_ONE_SHOT_DEATH(bLocal_476, true);
				}
				else if (!bLocal_516)
				{
					Function_242(bLocal_437);
					Function_424(StackVal, StackVal, Function_242(bLocal_437), bLocal_437, Global_30633[1], Function_245(bLocal_437), 0);
					bLocal_516 = true;
				}
				DISABLE_PLAYER_GRINGO_USE(0, 0);
				Function_386(Local_4.f_652, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_473(Local_4.f_652);
				Function_395(Local_4.f_652, Global_34573, 4);
				Function_453(Local_4.f_652, 1);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_652, 0);
				Function_472(Local_4.f_652, Local_4.f_1368, 1, 2, -1.0f, 1, 0);
				AI_SHOOT_TARGET_SET_BONE((*&Local_4 + 616)[12], Global_34573, "head");
				AI_SHOOT_TARGET_SET_BONE((*&Local_4 + 616)[22], Global_34573, "head");
				AI_SHOOT_TARGET_SET_BONE((*&Local_4 + 616)[32], Global_34573, "head");
				Function_470();
				Function_469();
				Function_466();
				AUDIO_ENABLE_PLAYER_TAUNTS();
				Function_228(&iLocal_529);
				iLocal_671 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_546(&iLocal_529) <= 3.0f)
			{
				Function_422("mexgirl03_obj06", 0x40f00000, 1, 2, 0, 0, 0);
				Function_228(&iLocal_529);
				iLocal_671 = 5;
			}
			break;
		
		case 0x00000005:
			Function_465();
			Function_464();
			Function_463();
			Function_462();
			if (IS_VOLUME_VALID((*&Local_4 + 924)[4]))
			{
				if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[4]))
				{
					DESTROY_VOLUME((*&Local_4 + 924)[4]);
					AI_SHOOT_TARGET_CLEAR_OFFSET((*&Local_4 + 616)[12]);
					AI_SHOOT_TARGET_CLEAR_OFFSET((*&Local_4 + 616)[22]);
					AI_SHOOT_TARGET_CLEAR_OFFSET((*&Local_4 + 616)[32]);
					Function_460();
				}
			}
			if (!IS_ACTOR_ALIVE(bLocal_475))
			{
				if (!bLocal_516)
				{
					Function_242(bLocal_437);
					Function_424(StackVal, StackVal, Function_242(bLocal_437), bLocal_437, Global_30633[1], Function_245(bLocal_437), 0);
					bLocal_516 = true;
				}
			}
			if (!iLocal_513)
			{
				if ((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_652) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_760)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_744)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_720)) == 1)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					iLocal_513 = 1;
				}
			}
			if (Function_459())
			{
				Function_228(&iLocal_529);
				AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_671 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_546(&iLocal_529) <= 2.0f)
			{
				ADD_BLIP_FOR_ACTOR(bLocal_476, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_476), "BLIP_COMP_REBEL");
				Function_422("mexgirl03_obj06a", 0x40f00000, 1, 2, 0, 0, 0);
				RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_459() //Position: 0x18EB0 / 102064
{
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_652) >= 0)
	{
		return 0;
	}
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_760) >= 0)
	{
		return 0;
	}
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_744) >= 0)
	{
		return 0;
	}
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_720) >= 0)
	{
		return 0;
	}
	if (IS_ACTOR_ALIVE(bLocal_475))
	{
		return 0;
	}
	return 1;
}

void Function_460() //Position: 0x18EFA / 102138
{
	Function_399(Local_4.f_652);
	Function_399(Local_4.f_744);
	Function_399(Local_4.f_720);
	Function_399(Local_4.f_760);
	Function_461(Local_4.f_652, -1.0f);
	Function_461(Local_4.f_744, -1.0f);
	Function_461(Local_4.f_720, -1.0f);
	Function_461(Local_4.f_760, -1.0f);
	Function_393(Local_4.f_652, 65.0f, -1.0f, -1.0f);
	Function_393(Local_4.f_744, 65.0f, -1.0f, -1.0f);
	Function_393(Local_4.f_720, 65.0f, -1.0f, -1.0f);
	Function_393(Local_4.f_760, 65.0f, -1.0f, -1.0f);
	return;
}

void Function_461(bool bParam0, bool bParam1) //Position: 0x18F80 / 102272
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
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_462() //Position: 0x18FC9 / 102345
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[10]))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 748)[02]))
		{
			if (IS_ACTOR_IN_VOLUME((*&Local_4 + 748)[02], (*&Local_4 + 872)[10]))
			{
				if (GET_TASK_STATUS((*&Local_4 + 748)[02], 5) != 1)
				{
					TASK_CLEAR((*&Local_4 + 748)[02]);
					TASK_KILL_CHAR((*&Local_4 + 748)[02], Global_34573);
				}
			}
		}
	}
	return;
}

void Function_463() //Position: 0x1902F / 102447
{
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 984)[4]))
	{
		if (IS_ACTOR_ALIVE(bLocal_476))
		{
			Function_236("mexgirl03_reyes_execute");
			Function_241(bLocal_437);
			Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
		}
	}
	return;
}

void Function_464() //Position: 0x19084 / 102532
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[1]))
	{
		if (!Function_459())
		{
			if (!Function_548(&iLocal_544))
			{
				Function_229(&iLocal_544, 10.0f);
			}
			else if (Function_546(&iLocal_544) < 12.0f)
			{
				SAY_SINGLE_LINE_STRING(bLocal_476, "MexGirl03_UntieReyesEarly", true, false, 3, 0, true, false);
				Function_228(&iLocal_544);
			}
		}
	}
	return;
}

void Function_465() //Position: 0x190F7 / 102647
{
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[1]))
	{
		if (!Function_459())
		{
			if (!Function_548(&iLocal_544))
			{
				Function_229(&iLocal_544, 7.0f);
			}
			else if (Function_546(&iLocal_544) < 15.0f)
			{
				SAY_SINGLE_LINE_STRING(bLocal_476, "MexGirl03_ReyesShouts", false, false, 3, 0, true, false);
				Function_228(&iLocal_544);
			}
		}
	}
	return;
}

void Function_466() //Position: 0x19163 / 102755
{
	Function_399(Local_4.f_744);
	Function_453(Local_4.f_744, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_744, 0);
	Function_395(Local_4.f_744, Global_34573, 4);
	Function_393(Local_4.f_744, 53.0f, -1.0f, -1.0f);
	Function_473(Local_4.f_744);
	Function_467((*&Local_4 + 724)[02], (*&Local_4 + 1392)[1], 1, 2, -1.0f, 1, 0, 1, 0);
	Function_467((*&Local_4 + 724)[12], (*&Local_4 + 1392)[0], 1, 2, -1.0f, 1, 0, 1, 0);
	return;
}

void Function_467(bool bParam0, bool bParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8) //Position: 0x191DB / 102875
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
	Function_468(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, Var0, iParam2, iParam3, fParam4, iParam5, iParam6, iParam7, iParam8);
}

void Function_468(bool bParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13) //Position: 0x19232 / 102962
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	bVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, &vParam1, 2,5f, 90.0f, 7);
	bVar1 = TASK_SEQUENCE_OPEN();
	if (IS_COVER_LOCATION_VALID(bVar0))
	{
		if (bParam8 != 2)
		{
			Function_345(bParam0);
			if (VDIST(Function_345(bParam0), vParam1) < 5.0f)
			{
				if (bParam13)
				{
					TASK_GO_NEAR_COORD(false, &vParam1, 2.0f, bParam8);
				}
				else
				{
					TASK_GO_TO_COORD_NONSTOP(false, &vParam1, bParam8, 3212836864);
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
		TASK_GO_NEAR_COORD(false, &vParam1, 5.0f, bParam8);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &vParam1, bParam9);
	}
	else
	{
		TASK_GO_TO_COORD(false, &vParam1, bParam8);
		UNK_0x44986367(StackVal, &vVar2);
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar2, vParam1, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal) };
		TASK_FACE_COORD(false, &vParam1, 0);
		TASK_CROUCH(false, bParam9);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bParam0);
	TASK_PRIORITY_SET(bParam0, bParam7);
	TASK_SEQUENCE_PERFORM(bParam0, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
}

void Function_469() //Position: 0x1934A / 103242
{
	Function_399(Local_4.f_720);
	Function_453(Local_4.f_720, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_720, 0);
	Function_395(Local_4.f_720, Global_34573, 4);
	Function_393(Local_4.f_720, 40.0f, -1.0f, -1.0f);
	Function_473(Local_4.f_720);
	Function_472(Local_4.f_720, Local_4.f_1404, 1, 2, -1.0f, 1, 0);
	return;
}

void Function_470() //Position: 0x193A0 / 103328
{
	Function_399(Local_4.f_760);
	Function_453(Local_4.f_760, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_760, 0);
	Function_393(Local_4.f_760, 45.0f, -1.0f, -1.0f);
	Function_395(Local_4.f_760, Global_34573, 4);
	TASK_CLEAR((*&Local_4 + 748)[02]);
	Function_471((*&Local_4 + 748)[02], 3212836864);
	TASK_PRIORITY_SET((*&Local_4 + 748)[02], true);
	return;
}

void Function_471(bool bParam0, bool bParam1) //Position: 0x19403 / 103427
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

void Function_472(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x1941E / 103454
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(bParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) >= GET_OBJECTSET_SIZE(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam1))
	{
		bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		if (IS_OBJECT_VALID(bVar5))
		{
			DECOR_REMOVE_ALL(bVar5);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam1))
	{
		bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		if (IS_OBJECT_VALID(bVar5))
		{
			GET_OBJECT_POSITION(bVar5, &vVar7);
			bVar4 = FIND_NEAREST_COVER_LOCATION(&vVar7, 2,5f, GET_OBJECT_HEADING(bVar5), 90.0f, 7);
			if (IS_COVER_LOCATION_VALID(bVar4))
			{
				DECOR_SET_INT(bVar5, "cover", bVar4);
				bVar2 = false;
				bVar1 = false;
				while (bVar1 <= bVar0)
				{
					if (!bVar2)
					{
						bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(((bVar0 - bVar1) - 1), bParam1);
						if (IS_OBJECT_VALID(bVar6))
						{
							if (DECOR_CHECK_EXIST(bVar6, "cover"))
							{
								if (bVar4 == DECOR_GET_INT(bVar6, "cover"))
								{
									bVar2 = true;
									GET_OBJECT_POSITION(bVar6, &vVar10);
									GET_COVER_LOCATION_BASE_POSITION(bVar4, &vVar13);
									if (VDIST(vVar7, vVar13) > VDIST(vVar10, vVar13))
									{
										DECOR_REMOVE(bVar6, "cover");
									}
									else
									{
										DECOR_REMOVE(bVar5, "cover");
									}
								}
							}
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar3))
		{
			if (IS_ACTOR_ALIVE(bVar3))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
				if (IS_OBJECT_VALID(bVar5))
				{
					GET_POSITION(bVar3, &vVar7);
					GET_OBJECT_POSITION(bVar5, &vVar10);
					bVar4 = "";
					if (DECOR_CHECK_EXIST(bVar5, "cover"))
					{
						bVar4 = DECOR_GET_INT(bVar5, "cover");
					}
					bVar1 = TASK_SEQUENCE_OPEN();
					if (iParam6 && bVar0 == 0)
					{
						TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,1f, 0,35f), 0, 0);
					}
					if (IS_COVER_LOCATION_VALID(bVar4))
					{
						if (bParam3 != 2)
						{
							if (VDIST(vVar7, vVar10) < 5.0f)
							{
								TASK_GO_TO_COORD_NONSTOP(false, &vVar10, bParam3, 3212836864);
							}
						}
						if (bParam5)
						{
							TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar4, bParam4, 1086324736);
						}
						else
						{
							TASK_HIDE_AT_COVER(false, bVar4, bParam4, 6f, 1);
						}
					}
					else if (bParam5)
					{
						TASK_GO_NEAR_COORD(false, &vVar10, 5.0f, bParam3);
						TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vVar10, GET_OBJECT_HEADING(bVar5), bParam4);
					}
					else
					{
						TASK_GO_TO_COORD(false, &vVar10, bParam3);
						UNK_0x44986367(&vVar13, GET_OBJECT_HEADING(bVar5));
						vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar13, vVar10, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal) };
						TASK_FACE_COORD(false, &vVar10, 0);
						TASK_CROUCH(false, bParam4);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_CLEAR(bVar3);
					TASK_PRIORITY_SET(bVar3, bParam2);
					TASK_SEQUENCE_PERFORM(bVar3, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
			}
		}
		bVar0++;
	}
}

void Function_473(bool bParam0) //Position: 0x196CA / 104138
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
				DECOR_SET_INT(bVar1, "AICoverExpose", true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 2, false);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 3, false);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 14, 3,5f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 15, 0,75f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 9, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 10, 1,7f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 11, 0,5f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 17, 1.0f);
			}
			bVar0++;
		}
	}
	return;
}

bool Function_474() //Position: 0x1976C / 104300
{
	switch (iLocal_495)
	{
		case 0x00000000:
			if (IS_OBJECT_VALID(bLocal_472))
			{
				Function_476(bLocal_472);
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Function_228(&iLocal_547);
			iLocal_495 = 1;
			break;
		
		case 0x00000001:
			if (Function_546(&iLocal_443) < RAND_FLOAT_RANGE(0,1f, 0,25f))
			{
				Function_386(Local_4.f_652, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_475(Local_4.f_652, 2);
				Function_228(&iLocal_547);
				iLocal_495 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_546(&iLocal_443) < RAND_FLOAT_RANGE(0,1f, 0,35f))
			{
				Function_386(Local_4.f_760, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_475(Local_4.f_760, 1);
				Function_228(&iLocal_547);
				iLocal_495 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_546(&iLocal_443) < RAND_FLOAT_RANGE(0,15f, 0,25f))
			{
				Function_386(Local_4.f_744, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_475(Local_4.f_744, 1);
				Function_228(&iLocal_547);
				iLocal_495 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_546(&iLocal_443) < RAND_FLOAT_RANGE(0,2f, 0,25f))
			{
				Function_386(Local_4.f_720, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_475(Local_4.f_720, 1);
				Function_228(&iLocal_547);
				iLocal_495 = 5;
			}
			break;
		
		case 0x00000005:
			return 1;
			break;
	}
	return 0;
}

void Function_475(bool bParam0, int iParam1) //Position: 0x198E5 / 104677
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	Function_399(bParam0);
	SQUAD_GOALS_CLEAR(bParam0);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_243((*&Local_4 + 1440)[iParam1]);
			vVar2 = { StackVal, StackVal, Function_243((*&Local_4 + 1440)[iParam1]) };
			TASK_POINT_GUN_AT_COORD(bVar1, &vVar2, -1.0f);
		}
		bVar0++;
	}
	return;
}

void Function_476(bool bParam0) //Position: 0x19934 / 104756
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

void Function_477() //Position: 0x199BE / 104894
{
	switch (iLocal_669)
	{
		case 0x00000001:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				SAY_SINGLE_LINE_STRING(bLocal_475, "MexGirl03_runsAroundFort", true, false, 3, 1, true, false);
				Function_228(&iLocal_443);
				iLocal_669 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_546(&iLocal_443) <= 20.0f)
			{
				SAY_SINGLE_LINE_STRING(bLocal_475, "MexGirl03_runsAroundFort", true, false, 3, 2, true, false);
				Function_228(&iLocal_443);
				iLocal_669 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_546(&iLocal_443) <= 20.0f)
			{
				SAY_SINGLE_LINE_STRING(bLocal_475, "MexGirl03_runsAroundFort", true, false, 3, 3, true, false);
				Function_228(&iLocal_443);
				iLocal_669 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_546(&iLocal_443) <= 20.0f)
			{
				SAY_SINGLE_LINE_STRING(bLocal_475, "MexGirl03_runsAroundFort", true, false, 3, 4, true, false);
				Function_228(&iLocal_443);
				iLocal_669 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_546(&iLocal_443) <= 20.0f)
			{
				SAY_SINGLE_LINE_STRING(bLocal_475, "MexGirl03_runsAroundFort", true, false, 3, 5, true, false);
				Function_228(&iLocal_443);
				iLocal_669 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_546(&iLocal_443) <= 20.0f)
			{
				SAY_SINGLE_LINE_STRING(bLocal_475, "MexGirl03_runsAroundFort", true, false, 3, 6, true, false);
				Function_228(&iLocal_443);
				iLocal_669 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_546(&iLocal_443) <= 20.0f)
			{
				Function_228(&iLocal_443);
				return;
			}
			break;
		
		case 0x0000000A:
			Function_243((*&Local_4 + 1244)[2]);
			Function_488((*&Local_4 + 1244)[2]);
			bLocal_472 = Function_487(StackVal, StackVal, StackVal, StackVal, bLocal_389, "snipeGateway", Function_243((*&Local_4 + 1244)[2]), Function_488((*&Local_4 + 1244)[2]), Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			Function_247();
			Function_422("mexgirl03_obj04", 0x40f00000, 1, 2, 0, 0, 0);
			Function_312((*&Local_4 + 1212)[5]);
			SET_MAX_SCRIPTED_CONVERSATION_DISTANCE(70.0f);
			Function_228(&iLocal_443);
			iLocal_669 = 8;
			iLocal_438 = 8;
			break;
		
		case 0x00000009:
			if (Function_546(&iLocal_443) <= 2.0f)
			{
				Function_228(&iLocal_443);
				iLocal_669 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_546(&iLocal_443) <= 8.0f)
			{
				Function_486();
				Function_228(&iLocal_443);
				iLocal_669 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_546(&iLocal_443) <= 8.0f)
			{
				Function_486();
				Function_228(&iLocal_443);
				iLocal_669 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_546(&iLocal_443) <= 8.0f)
			{
				Function_486();
				Function_228(&iLocal_443);
				iLocal_669 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_546(&iLocal_443) <= 8.0f)
			{
				Function_486();
				TASK_CLEAR(bLocal_475);
				TASK_STAND_STILL(bLocal_475, -1.0f, 0, 0);
				Function_228(&iLocal_443);
				iLocal_669 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_546(&iLocal_443) <= 0,75f)
			{
				SET_ACTOR_FACE_STYLE(bLocal_475, 2);
				Function_243((*&Local_4 + 1244)[1]);
				vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1244)[1]) };
				bLocal_490 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(false, &vLocal_497, 0);
				TASK_GO_TO_COORD_PRECISELY(bLocal_475, &vLocal_497, 1, GET_OBJECT_HEADING((*&Local_4 + 1244)[1]), 0,5f, 0,5f, 0, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_475, Local_4.f_1504, true, 1, 0, 1, false);
				TASK_SEQUENCE_PERFORM(bLocal_475, bLocal_490);
				TASK_SEQUENCE_RELEASE(bLocal_490, 1);
				TASK_PRIORITY_SET(bLocal_475, true);
				Function_228(&iLocal_443);
				iLocal_669 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_546(&iLocal_443) <= 2,5f && GET_TASK_STATUS(bLocal_475, 0) == 1)
			{
				Function_486();
				TASK_STAND_STILL(bLocal_475, -1.0f, 0, 0);
				Function_228(&iLocal_443);
				iLocal_669 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_546(&iLocal_443) <= 4.0f)
			{
				Function_485();
				Function_399(Local_4.f_652);
				Function_243((*&Local_4 + 1244)[3]);
				vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1244)[3]) };
				Function_488((*&Local_4 + 1244)[3]);
				Local_500 = { StackVal, StackVal, Function_488((*&Local_4 + 1244)[3]) };
				TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 616)[12], &vLocal_497, true);
				Function_243((*&Local_4 + 1244)[4]);
				vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1244)[4]) };
				Function_488((*&Local_4 + 1244)[4]);
				Local_500 = { StackVal, StackVal, Function_488((*&Local_4 + 1244)[4]) };
				TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 616)[22], &vLocal_497, true);
				Function_243((*&Local_4 + 1244)[5]);
				vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1244)[5]) };
				Function_488((*&Local_4 + 1244)[5]);
				Local_500 = { StackVal, StackVal, Function_488((*&Local_4 + 1244)[5]) };
				TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 616)[32], &vLocal_497, true);
				Function_228(&iLocal_443);
				iLocal_669 = 18;
			}
			break;
		
		case 0x00000011:
			if (Function_546(&iLocal_443) <= 3.0f)
			{
				Function_484();
				Function_483(Local_4.f_652, 41, 1, 1);
				Function_228(&iLocal_443);
				iLocal_669 = 18;
			}
			break;
		
		case 0x00000012:
			if (Function_546(&iLocal_443) <= 4.0f)
			{
				Function_482();
				Function_481(Local_4.f_652, GET_OBJECT_FROM_ACTOR(bLocal_476), -1.0f, 1);
				TASK_CLEAR(bLocal_475);
				TASK_POINT_GUN_AT_OBJECT(bLocal_475, bLocal_476, -1.0f, 0);
				Function_228(&iLocal_443);
				iLocal_669 = 19;
			}
			break;
		
		case 0x00000013:
			if (Function_546(&iLocal_443) <= 5.0f)
			{
				Function_480();
				Function_228(&iLocal_443);
				iLocal_669 = 20;
			}
			break;
		
		case 0x00000014:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_479();
				Function_228(&iLocal_443);
				iLocal_669 = 21;
			}
			break;
		
		case 0x00000015:
			if (Function_546(&iLocal_443) <= 3,5f)
			{
				Function_478();
				iLocal_438 = 96;
			}
			break;
		
		case 0x00000016:
			if (Function_546(&iLocal_443) <= 8.0f)
			{
				iLocal_669 = iLocal_670;
			}
			break;
	}
	return;
}

void Function_478() //Position: 0x19F79 / 106361
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexGirl03_captainSaysFire", "MexGirl03_captainSaysFire", false, 3, 1, 0, 1);
		Function_362(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_479() //Position: 0x19FD4 / 106452
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexGirl03_ReyesResponds", "MexGirl03_ReyesResponds", false, 3, 1, 0, 1);
		Function_362(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_480() //Position: 0x1A02C / 106540
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexGirl03_anyLastWords", "MexGirl03_anyLastWords", false, 3, 1, 0, 1);
		Function_362(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1A081 / 106625
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
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
				TASK_POINT_GUN_AT_OBJECT(bVar1, bParam1, bParam2, 0);
				TASK_PRIORITY_SET(bVar1, bParam3);
			}
		}
		bVar0++;
	}
}

void Function_482() //Position: 0x1A0E3 / 106723
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexGirl03_takeAim", "MexGirl03_takeAim", false, 3, 1, 0, 1);
		Function_362(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1A12E / 106798
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
				if (iParam2 || !ACTOR_HAS_WEAPON(bVar1, bParam1))
				{
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, false, 1, 1);
				}
				if (!ACTOR_HAS_WEAPON_IN_HAND(bVar1, bParam1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(bVar1, bParam1, iParam3);
				}
			}
		}
		bVar0++;
	}
}

void Function_484() //Position: 0x1A19E / 106910
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexGirl03_getWeaponsReady", "MexGirl03_getWeaponsReady", false, 3, 1, 0, 1);
		Function_362(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_485() //Position: 0x1A1F9 / 107001
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexGirl03_getIntoPosition", "MexGirl03_getIntoPosition", false, 3, 1, 0, 1);
		Function_362(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_486() //Position: 0x1A254 / 107092
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexGirl03_captainThreatens", "MexGirl03_captainThreatens", false, 3, 1, 0, 1);
		Function_362(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_487(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x1A2B1 / 107185
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { iParam9, 2.0f, iParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

vector3 Function_488(bool bParam0) //Position: 0x1A37C / 107388
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

void Function_489() //Position: 0x1A3A3 / 107427
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexGirl03_jonShootsSoldier", "MexGirl03_jonShootsSoldier", false, 3, 1, 0, 1);
		Function_362(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_490() //Position: 0x1A400 / 107520
{
	if (IS_ACTOR_ALIVE((*&Local_4 + 748)[02]))
	{
		SAY_SINGLE_LINE_STRING((*&Local_4 + 748)[02], "MexGirl03_jonKillsArmyCapt", true, false, 3, 0, true, false);
	}
	else if (IS_ACTOR_ALIVE((*&Local_4 + 700)[12]))
	{
		SAY_SINGLE_LINE_STRING((*&Local_4 + 700)[12], "MexGirl03_jonKillsArmyCapt", true, false, 3, 0, true, false);
	}
	else if (IS_ACTOR_ALIVE((*&Local_4 + 700)[02]))
	{
		SAY_SINGLE_LINE_STRING((*&Local_4 + 700)[02], "MexGirl03_jonKillsArmyCapt", true, false, 3, 0, true, false);
	}
	return;
}

void Function_491() //Position: 0x1A4C0 / 107712
{
	bool bVar0;
	
	Function_217();
	SNAP_ACTOR_TO_GRINGO(bLocal_476, Local_4.f_1480, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(bLocal_476, GET_GRINGO_FROM_OBJECT(Local_4.f_1480), "UseCase1", 4294967295, 1);
	TASK_PRIORITY_SET(bLocal_476, true);
	SET_MOUNTS_AS_PASSENGER(bLocal_476, 1);
	Function_498();
	Function_395(Local_4.f_652, bLocal_476, 2);
	Function_453(Local_4.f_652, 0);
	Function_403(Local_4.f_652, 1);
	bVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_652);
	bVar0 = (bVar0 || 2048);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_652, bVar0);
	Function_395(Local_4.f_652, Global_34573, 2);
	bLocal_475 = (*&Local_4 + 616)[02];
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_475, 0);
	SQUAD_LEAVE(bLocal_475);
	Function_399(Local_4.f_652);
	bLocal_490 = TASK_SEQUENCE_OPEN();
	TASK_FACE_ACTOR(false, bLocal_476, 0, 3212836864);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 616)[12], bLocal_490);
	TASK_SEQUENCE_RELEASE(bLocal_490, 1);
	bLocal_490 = TASK_SEQUENCE_OPEN();
	TASK_FACE_ACTOR(false, bLocal_476, 0, 3212836864);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 616)[22], bLocal_490);
	TASK_SEQUENCE_RELEASE(bLocal_490, 1);
	bLocal_490 = TASK_SEQUENCE_OPEN();
	TASK_FACE_ACTOR(false, bLocal_476, 0, 3212836864);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 616)[32], bLocal_490);
	TASK_SEQUENCE_RELEASE(bLocal_490, 1);
	Function_392(Local_4.f_652, 0);
	Function_483(Local_4.f_652, 9, 0, 1);
	Function_493();
	TASK_CLEAR((*&Local_4 + 700)[12]);
	TASK_USE_GRINGO((*&Local_4 + 700)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1460), "UseCase1", 4294967295, 1);
	GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(Local_4.f_1480), "Player", 0);
	Function_243((*&Local_4 + 1244)[7]);
	vLocal_497 = { StackVal, StackVal, Function_243((*&Local_4 + 1244)[7]) };
	Function_492(bLocal_389, 19, (*&Local_4 + 1244)[7], 0, 10, 0, 1, 3212836864);
	return;
}

var Function_492(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, int iParam7) //Position: 0x1A68E / 108174
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

void Function_493() //Position: 0x1A70C / 108300
{
	bool bVar0;
	
	Function_497();
	Function_395(Local_4.f_720, bLocal_476, 2);
	Function_403(Local_4.f_720, 1);
	bVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_720);
	bVar0 = (bVar0 || 2048);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_720, bVar0);
	Function_453(Local_4.f_720, 0);
	Function_395(Local_4.f_720, Global_34573, 2);
	Function_496(Local_4.f_720, 350.0f);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 700)[02], Local_4.f_1464, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 700)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1464), "UseCase1", 4294967295, 1);
	TASK_STAND_STILL((*&Local_4 + 700)[12], -1.0f, 0, 0);
	Function_495();
	Function_403(Local_4.f_744, 1);
	Function_395(Local_4.f_744, bLocal_476, 2);
	bVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_744);
	bVar0 = (bVar0 || 2048);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_744, bVar0);
	Function_453(Local_4.f_744, 0);
	Function_395(Local_4.f_744, Global_34573, 2);
	Function_496(Local_4.f_744, 350.0f);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 724)[02], Local_4.f_1472, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 724)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1472), "UseCase1", 4294967295, 1);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 724)[12], Local_4.f_1468, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 724)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1468), "UseCase1", 4294967295, 1);
	Function_494();
	Function_403(Local_4.f_760, 1);
	Function_395(Local_4.f_760, bLocal_476, 2);
	bVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_760);
	bVar0 = (bVar0 || 2048);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_760, bVar0);
	Function_453(Local_4.f_760, 0);
	Function_395(Local_4.f_760, Global_34573, 2);
	Function_496(Local_4.f_760, 350.0f);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 748)[02], Local_4.f_1476, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 748)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1476), "UseCase1", 4294967295, 1);
	return;
}

void Function_494() //Position: 0x1A91E / 108830
{
	Local_4.f_760 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Back_Guards"));
	(*&Local_4 + 748)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BG_1", 391, -710,235f, 71,76643f, 3308,497f, 0.0f, -89,13804f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 748)[02], Local_4.f_760);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 748)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 748)[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 748)[02], -1.0f, 0, 0);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 748)[02], 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 748)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 748)[02], 19);
	return;
}

void Function_495() //Position: 0x1A9D7 / 109015
{
	Local_4.f_744 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Front_Guards"));
	(*&Local_4 + 724)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "FG_1", 392, -674,2457f, 65,9096f, 3311,145f, 0.0f, 153,1452f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 724)[02], Local_4.f_744);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 724)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 724)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 724)[02], -1.0f, 0, 0);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 724)[02], 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 724)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 724)[02], 19);
	(*&Local_4 + 724)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "FG_2", 393, -685,8713f, 66,45266f, 3319,037f, 0.0f, 239,9616f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 724)[12], Local_4.f_744);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 724)[12], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 724)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 724)[12], -1.0f, 0, 0);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 724)[12], 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 724)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 724)[12], 19);
	return;
}

void Function_496(bool bParam0, bool bParam1) //Position: 0x1AB29 / 109353
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

void Function_497() //Position: 0x1AB68 / 109416
{
	Local_4.f_720 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Side_Guards"));
	(*&Local_4 + 700)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "SG_0", 379, -698,8193f, 66,56041f, 3312,931f, 0.0f, -32,85331f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 700)[02], Local_4.f_720);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 700)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 700)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 700)[02], -1.0f, 0, 0);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 700)[02], 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 700)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 700)[02], 19);
	(*&Local_4 + 700)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "SG_1", 380, -703,3206f, 66,35136f, 3282,97f, 0.0f, 206,4805f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 700)[12], Local_4.f_720);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 700)[12], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 700)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 700)[12], -1.0f, 0, 0);
	AI_QUICK_EXIT_GRINGO((*&Local_4 + 700)[12], 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 700)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 700)[12], 19);
	return;
}

void Function_498() //Position: 0x1ACB9 / 109753
{
	Local_4.f_652 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nExecutors"));
	(*&Local_4 + 616)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Army_Cpt", 388, -677,5917f, 63,24707f, 3322,655f, 0.0f, 199,7863f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 616)[02], Local_4.f_652);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 616)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 616)[02]);
	TASK_STAND_STILL((*&Local_4 + 616)[02], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 616)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 616)[02], 5, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 616)[02], 5, 1);
	SET_ACTOR_FACTION((*&Local_4 + 616)[02], 19);
	(*&Local_4 + 616)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Sold_01", 391, -676,2189f, 63,24707f, 3316,606f, 0.0f, 151,7337f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 616)[12], Local_4.f_652);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 616)[12], false);
	TASK_STAND_STILL((*&Local_4 + 616)[12], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 616)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 616)[12], 9, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 616)[12], 9, 1);
	SET_ACTOR_FACTION((*&Local_4 + 616)[12], 19);
	(*&Local_4 + 616)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Sold_02", 393, -679,5518f, 63,24707f, 3316,041f, 0.0f, 192,9092f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 616)[22], Local_4.f_652);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 616)[22], false);
	TASK_STAND_STILL((*&Local_4 + 616)[22], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 616)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 616)[22], 9, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 616)[22], 9, 1);
	SET_ACTOR_FACTION((*&Local_4 + 616)[22], 19);
	(*&Local_4 + 616)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Sold_03", 392, -681,6906f, 63,24707f, 3316,967f, 0.0f, 206,7748f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 616)[32], Local_4.f_652);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 616)[32], false);
	TASK_STAND_STILL((*&Local_4 + 616)[32], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 616)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 616)[32], 9, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 616)[32], 9, 1);
	SET_ACTOR_FACTION((*&Local_4 + 616)[32], 19);
	return;
}

int Function_499() //Position: 0x1AF26 / 110374
{
	Function_328(&Local_4 + 220, 388, 2, 0);
	Function_328(&Local_4 + 220, 391, 2, 0);
	Function_328(&Local_4 + 220, 393, 2, 0);
	Function_328(&Local_4 + 220, 392, 2, 0);
	Function_328(&Local_4 + 220, 554, 2, 0);
	Function_328(&Local_4 + 220, 379, 2, 0);
	Function_328(&Local_4 + 220, 380, 2, 0);
	if (Function_320(&Local_4 + 220))
	{
		return 1;
	}
	return 0;
}

void Function_500() //Position: 0x1AF94 / 110484
{
	if (Function_443(Global_30707[1]))
	{
		Function_442(&iLocal_482);
	}
	else
	{
		iLocal_491 = 0;
	}
	switch (iLocal_438)
	{
		case 0x00000000:
			Function_353(0);
			SET_ACTOR_HEALTH(bLocal_441, GET_ACTOR_MAX_HEALTH(bLocal_441));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			if (iLocal_452[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_350();
				bLocal_439 = Global_30633[1];
				if (!Function_443(bLocal_439))
				{
					Function_434(&Local_390);
				}
				Function_442(&iLocal_482);
				Function_214(Global_34573, (*&Local_4 + 1284)[0], 1, 1, 1);
				Function_214(bLocal_441, (*&Local_4 + 1176)[1], 1, 1, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 1;
			}
			else
			{
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_443(bLocal_439) || bLocal_439 != 4294967295)) && Function_501())
			{
				Function_491();
				TASK_CLEAR((*&Local_4 + 700)[12]);
				TASK_USE_GRINGO((*&Local_4 + 700)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1460), "UseCase1", 4294967295, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_669 = 10;
			iLocal_511 = 1;
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			ADD_COMPANION_PERMANENT();
			Function_499();
			DISABLE_PLAYER_GRINGO_USE(0, 1);
			ACTOR_END_FORCE_HOLSTER(bLocal_475);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_475, 0);
			bLocal_490 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1480), "Beatup", 4294967295, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_475, bLocal_490);
			TASK_SEQUENCE_RELEASE(bLocal_490, 1);
			AUDIO_MUSIC_SET_MOOD("SUSPENSE_DRUM", 0, 4294967295, 4294967295);
			SET_ACTOR_ONE_SHOT_DEATH(bLocal_476, true);
			Function_242(bLocal_437);
			Function_424(StackVal, StackVal, Function_242(bLocal_437), bLocal_437, Global_30633[1], Function_245(bLocal_437), 0);
			Function_228(&iLocal_443);
			iLocal_438 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_228(&iLocal_443);
				iLocal_438 = 7;
			}
			break;
		
		case 0x00000007:
			Function_477();
			break;
		
		case 0x00000008:
			if (Function_458())
			{
				iLocal_511 = 0;
				Function_228(&iLocal_443);
				iLocal_438 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_207();
			iLocal_452[2] = 1;
			Function_228(&iLocal_443);
			bLocal_437 = 3;
			iLocal_438 = 0;
			break;
		
		case 0x00000060:
			SET_ACTOR_ONE_SHOT_DEATH(bLocal_476, true);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_652, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_453(Local_4.f_652, 1);
			Function_395(Local_4.f_652, bLocal_476, 4);
			Function_452(Local_4.f_652, bLocal_476, 1);
			MEMORY_ALLOW_SHOOTING(bLocal_475, true);
			MEMORY_CONSIDER_AS_ENEMY(bLocal_475, bLocal_476);
			Function_451(bLocal_475, bLocal_476);
			Function_228(&iLocal_443);
			iLocal_438 = 97;
			break;
	}
	return;
}

int Function_501() //Position: 0x1B237 / 111159
{
	Function_328(&Local_4 + 500, 388, 2, 0);
	Function_328(&Local_4 + 500, 391, 2, 0);
	Function_328(&Local_4 + 500, 393, 2, 0);
	Function_328(&Local_4 + 500, 392, 2, 0);
	Function_328(&Local_4 + 500, 554, 2, 0);
	Function_328(&Local_4 + 500, 379, 2, 0);
	Function_328(&Local_4 + 500, 380, 2, 0);
	if (Function_320(&Local_4 + 500))
	{
		return 1;
	}
	return 0;
}

void Function_502() //Position: 0x1B2AD / 111277
{
	if (Function_443(Global_30707[1]))
	{
		Function_442(&iLocal_482);
	}
	else
	{
		iLocal_491 = 0;
	}
	if (iLocal_438 < 3 && iLocal_438 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 872)[4]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[4]))
			{
				DESTROY_VOLUME((*&Local_4 + 872)[4]);
				iLocal_669 = 1;
			}
		}
		else
		{
			Function_477();
		}
		if (IS_ACTOR_IN_VOLUME(bLocal_441, (*&Local_4 + 872)[2]) && GET_TASK_STATUS(bLocal_441, 6) == 1)
		{
			TASK_CLEAR(bLocal_441);
			TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
		}
	}
	if (((iLocal_438 < 6 && iLocal_438 > 95) && iLocal_438 == 15) && iLocal_438 == 16)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[3]))
		{
			TASK_CLEAR((*&Local_4 + 700)[12]);
			TASK_USE_GRINGO((*&Local_4 + 700)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1460), "UseCase1", 4294967295, 1);
			Function_312((*&Local_4 + 1212)[5]);
			Function_311(8, 0, 1);
			Function_228(&iLocal_443);
			iLocal_438 = 106;
		}
		if (Function_546(&iLocal_526) <= 240.0f)
		{
			Function_228(&iLocal_526);
			Function_521(&iLocal_526);
			Function_228(&iLocal_443);
			iLocal_438 = 95;
		}
	}
	if (iLocal_438 < 2 && iLocal_438 > 9)
	{
		Function_520();
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[3]))
		{
			TASK_CLEAR((*&Local_4 + 700)[12]);
			TASK_USE_GRINGO((*&Local_4 + 700)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1460), "UseCase1", 4294967295, 1);
			TASK_CLEAR(bLocal_441);
			TASK_FOLLOW_PATH(bLocal_441, Local_4.f_1500, 2, 0, 0, 1, false);
			TASK_PRIORITY_SET(bLocal_441, true);
			ENABLE_VEHICLE_SEAT(bLocal_474, true, 0);
			Function_312((*&Local_4 + 1212)[5]);
			Function_311(8, 0, 1);
			Function_228(&iLocal_443);
			iLocal_438 = 106;
		}
	}
	switch (iLocal_438)
	{
		case 0x00000000:
			Function_353(0);
			SET_ACTOR_HEALTH(bLocal_441, GET_ACTOR_MAX_HEALTH(bLocal_441));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			if (iLocal_452[0] != 0 || bLocal_508)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_350();
				if (bLocal_508)
				{
					FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				}
				Function_214(Global_34573, (*&Local_4 + 1212)[1], 1, 1, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 1;
			}
			else
			{
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_519())
			{
				Function_518(bLocal_508);
				Function_214(bLocal_474, (*&Local_4 + 1212)[2], 1, 1, 1);
				Function_214(bLocal_441, (*&Local_4 + 1212)[1], 1, 1, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000002:
			Function_242(bLocal_437);
			Function_424(StackVal, StackVal, Function_242(bLocal_437), bLocal_437, Global_30633[1], Function_245(bLocal_437), 4);
			Function_501();
			if (iLocal_452[0] != 0 || bLocal_508)
			{
				SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_474, true);
				SET_ACTOR_IN_VEHICLE(bLocal_441, bLocal_474, false);
			}
			ADD_COMPANION_PERMANENT();
			Function_228(&iLocal_443);
			iLocal_438 = 15;
			break;
		
		case 0x0000000F:
			if (Function_517(Global_34573, bLocal_474, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(2.0f, 1065353216);
				}
				Function_516();
				Function_491();
				Function_228(&iLocal_443);
				iLocal_438 = 16;
			}
			break;
		
		case 0x00000010:
			if (!HUD_IS_FADING())
			{
				if (iLocal_452[0] != 0 || bLocal_508)
				{
					Function_515();
				}
				Function_228(&iLocal_443);
				iLocal_438 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_421(&iLocal_449, 60.0f, 200.0f, bLocal_441, "Mexgirl_return", "Mexgirl_abandoned", &bLocal_462, 0, 0, 0, 325, 1);
				if (Function_506())
				{
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
					Function_381(&iLocal_526, 0.0f);
					Function_228(&iLocal_443);
					Function_228(&iLocal_446);
					iLocal_438 = 7;
				}
			}
			break;
		
		case 0x00000007:
			Function_411(&iLocal_449, 60.0f, 200.0f, (*&Local_4 + 1212)[5], "mexgirl03_obj03", "RebelLeader_abandoned", &bLocal_462, 0, 0, 0, 4294967295, 1);
			Function_503();
			if (GATEWAY_UPDATE(bLocal_472))
			{
				Function_476(bLocal_472);
				Function_422("mexgirl03_obj03a", 0x40f00000, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1212)[5], 330, 0f, 2, 0);
				Function_228(&iLocal_443);
				iLocal_438 = 9;
			}
			else
			{
				Function_422("mexgirl03_obj03", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&iLocal_443);
				iLocal_438 = 8;
			}
			break;
		
		case 0x00000008:
			Function_411(&iLocal_449, 60.0f, 200.0f, (*&Local_4 + 1212)[5], "mexgirl03_obj03", "RebelLeader_abandoned", &bLocal_462, 0, 0, 0, 4294967295, 1);
			Function_503();
			if (GATEWAY_UPDATE(bLocal_472))
			{
				Function_476(bLocal_472);
				Function_247();
				Function_422("mexgirl03_obj03a", 0x40f00000, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1212)[5], 330, 0f, 2, 0);
				Function_228(&iLocal_443);
				iLocal_438 = 9;
			}
			break;
		
		case 0x00000009:
			Function_411(&iLocal_449, 60.0f, 200.0f, (*&Local_4 + 1212)[5], "mexgirl03_obj03a", "RebelLeader_abandoned", &bLocal_462, 0, 0, 0, 4294967295, 1);
			Function_503();
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[3]))
			{
				TASK_CLEAR((*&Local_4 + 700)[12]);
				TASK_USE_GRINGO((*&Local_4 + 700)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1460), "UseCase1", 4294967295, 1);
				Function_312((*&Local_4 + 1212)[5]);
				Function_228(&iLocal_443);
				iLocal_438 = 106;
			}
			if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[2]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 924)[3])) || bLocal_510)
			{
				if (!Function_548(&iLocal_529))
				{
					Function_381(&iLocal_529, 0.0f);
					bLocal_510 = true;
				}
				else if (Function_546(&iLocal_529) <= 0,1f)
				{
					if (!IS_ACTOR_ALIVE(bLocal_475))
					{
						Function_490();
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
						iLocal_671 = 2;
					}
					else
					{
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
						Function_489();
						iLocal_671 = 2;
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_208();
			iLocal_452[1] = 1;
			Function_228(&iLocal_443);
			bLocal_437 = 2;
			iLocal_438 = 0;
			break;
		
		case 0x0000005F:
			Function_228(&iLocal_443);
			iLocal_438 = 97;
			break;
		
		case 0x00000060:
			if (Function_546(&iLocal_443) <= 2,5f)
			{
				Function_228(&iLocal_443);
				iLocal_438 = 97;
			}
			break;
		
		case 0x00000061:
			if (Function_546(&iLocal_443) <= 1,5f)
			{
				Function_236("mexgirl03_reyes_execute");
				bLocal_462 = true;
			}
			break;
	}
	return;
}

void Function_503() //Position: 0x1B9BD / 113085
{
	if (!Function_517(Global_34573, bLocal_474, 1))
	{
		if (GET_TASK_STATUS(bLocal_441, 43) != 1)
		{
			if (!Function_548(&iLocal_538))
			{
				Function_228(&iLocal_538);
			}
			else if (Function_546(&iLocal_538) <= 0,5f)
			{
				Function_218(&(Local_593[317]), 2);
				TASK_CLEAR(bLocal_441);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_441, Local_4.f_1500, 2, 0, 0, 1, false);
				TASK_PRIORITY_SET(bLocal_441, true);
				STOP_FORCE_LOOK_AT_COORD(bLocal_441);
				SAY_SINGLE_LINE_STRING(bLocal_441, "MexGirl03_GetsOffWagon", false, false, 3, 0, true, false);
				ENABLE_VEHICLE_SEAT(bLocal_474, true, 0);
			}
		}
	}
	else
	{
		Function_504();
	}
	return;
}

void Function_504() //Position: 0x1BA60 / 113248
{
	if (Function_546(&iLocal_446) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
	{
		Function_505();
		Function_228(&iLocal_446);
	}
	return;
}

void Function_505() //Position: 0x1BA83 / 113283
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_waitGetOff", "MexGirl03_waitGetOff", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_506() //Position: 0x1BAD4 / 113364
{
	if (!iLocal_522 && bLocal_437 == 1)
	{
		if (Function_517(bLocal_441, bLocal_474, 0))
		{
			FORCE_VEHICLE_CINEMATIC_CAMERA(1);
			iLocal_522 = 1;
		}
	}
	switch (iLocal_668)
	{
		case 0x00000000:
			Function_513();
			if (Function_517(Global_34573, bLocal_474, 1))
			{
				if (!IS_ACTOR_RIDING_VEHICLE(bLocal_441))
				{
					Function_311(8, 1, 1);
					HUD_CLEAR_OBJECTIVE();
					Function_422("mexgirl03_obj01b", 0x40f00000, 1, 2, 0, 0, 0);
				}
				Function_211(bLocal_474);
				iLocal_668 = 1;
			}
			else if (Function_517(bLocal_441, bLocal_474, 0))
			{
				Function_510();
			}
			break;
		
		case 0x00000001:
			Function_513();
			if (Function_517(Global_34573, bLocal_474, 1) && Function_517(bLocal_441, bLocal_474, 0))
			{
				Function_311(8, 0, 1);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1212)[0], 330, 0f, 2, 0);
				AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				FORCE_VEHICLE_CINEMATIC_CAMERA(1);
				HUD_ENABLE(false);
				Function_228(&iLocal_443);
				iLocal_668 = 2;
			}
			else if (Function_517(bLocal_441, bLocal_474, 0))
			{
				Function_510();
			}
			break;
		
		case 0x00000002:
			bLocal_471 = Local_4.f_1488;
			AI_SET_NAV_MATERIAL_USAGE(bLocal_441, 1024, 1);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_441, bLocal_471, 4, 1, 0, 1, false);
			TASK_PRIORITY_SET(bLocal_441, true);
			if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_473))
			{
				bLocal_473 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, 6, false, 0, 0, 0, 4294967295, 0);
			}
			Function_247();
			Function_422("mexgirl03_wagon_obj", 0x40f00000, 1, 2, 0, 0, 0);
			Function_228(&iLocal_443);
			iLocal_668 = 4;
			break;
		
		case 0x00000003:
			if (Function_546(&iLocal_443) <= 5.0f)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			Function_513();
			Function_509(0);
			if (bLocal_471 == Local_4.f_1488)
			{
				Function_508();
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[0]) && IS_ACTOR_IN_VOLUME(bLocal_441, (*&Local_4 + 872)[0]))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_473))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_473);
					}
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					FORCE_VEHICLE_CINEMATIC_CAMERA(0);
					HUD_ENABLE(true);
					bLocal_471 = Local_4.f_1496;
					Function_515();
					return 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(bLocal_441, (*&Local_4 + 872)[2]))
			{
				Function_228(&iLocal_443);
				iLocal_668 = 9;
			}
			return 0;
			break;
		
		case 0x00000008:
			Function_345(bLocal_441);
			vLocal_497 = { StackVal, StackVal, Function_345(bLocal_441) };
			Function_345(Global_34573);
			Local_500 = { StackVal, StackVal, Function_345(Global_34573) };
			ESTIMATE_TWO_DISTANCES_ALONG_PATH(bLocal_471, &vLocal_497, &Local_500, &fLocal_503, &fLocal_504, &uLocal_505);
			if (fLocal_503 <= fLocal_504)
			{
				TASK_CLEAR(bLocal_441);
				TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
			}
			if (Function_517(bLocal_441, bLocal_474, 0))
			{
				Function_510();
			}
			if (Function_517(Global_34573, bLocal_474, 1))
			{
				iLocal_509 = 0;
				Function_311(8, 0, 1);
				Function_247();
				Function_422("mexgirl03_wagon_obj", 0x40f00000, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1212)[0], 330, 0f, 2, 0);
				TASK_CLEAR(bLocal_441);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_441, bLocal_471, 4, 1, 0, 1, false);
				TASK_PRIORITY_SET(bLocal_441, true);
				Function_228(&iLocal_443);
				iLocal_668 = 4;
				return 0;
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				iLocal_509 = 0;
				Function_311(8, 0, 1);
				Function_247();
				Function_422("mexgirl03_wagon_obj", 0x40f00000, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1212)[0], 330, 0f, 2, 0);
				TASK_CLEAR(bLocal_442);
				bLocal_442 = GET_MOUNT(Global_34573);
				TASK_CLEAR(bLocal_441);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_441, bLocal_471, 4, 1, 0, 1, false);
				TASK_PRIORITY_SET(bLocal_441, true);
				Function_228(&iLocal_443);
				iLocal_668 = 4;
				return 0;
			}
			break;
		
		case 0x00000007:
			Function_247();
			Function_422("mexgirl03_obj01", 0x40f00000, 1, 2, 0, 0, 0);
			Function_311(8, 1, 1);
			Function_312((*&Local_4 + 1212)[0]);
			Function_345(bLocal_441);
			vLocal_497 = { StackVal, StackVal, Function_345(bLocal_441) };
			Function_345(Global_34573);
			Local_500 = { StackVal, StackVal, Function_345(Global_34573) };
			ESTIMATE_TWO_DISTANCES_ALONG_PATH(bLocal_471, &vLocal_497, &Local_500, &fLocal_503, &fLocal_504, &uLocal_505);
			if (fLocal_503 < fLocal_504)
			{
				TASK_CLEAR(bLocal_441);
				TASK_STAND_STILL(bLocal_441, -1.0f, 0, 0);
			}
			Function_228(&iLocal_443);
			iLocal_668 = 8;
			return 0;
			break;
		
		case 0x00000009:
			Function_509(0);
			if (IS_ACTOR_IN_VOLUME(bLocal_441, (*&Local_4 + 872)[6]))
			{
				Function_312((*&Local_4 + 1212)[0]);
				AUDIO_MUSIC_SET_MOOD("DRAMATIC_SUSPENSE_2", 0, 4294967295, 4294967295);
				Function_507();
				FORCE_LOOK_AT_ACTOR(bLocal_441, Global_34573, 3212836864);
				Function_312((*&Local_4 + 1212)[0]);
				Function_311(8, 0, 1);
				Function_243((*&Local_4 + 1212)[4]);
				Function_488((*&Local_4 + 1212)[4]);
				bLocal_472 = Function_487(StackVal, StackVal, StackVal, StackVal, bLocal_389, "wallgateway", Function_243((*&Local_4 + 1212)[4]), Function_488((*&Local_4 + 1212)[4]), Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_228(&iLocal_443);
				iLocal_668 = 12;
				return 0;
			}
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				STOP_FORCE_LOOK_AT_COORD(bLocal_441);
				return 1;
			}
			if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[8]) && !IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[6]))
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					return 0;
				}
			}
			break;
	}
	return 0;
}

void Function_507() //Position: 0x1C00C / 114700
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_arriveElPresidio_v1_AA", "MexGirl03_arriveElPresidio_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_arriveElPresidio_v1_AB", "MexGirl03_arriveElPresidio_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_arriveElPresidio_v1_AC1", "MexGirl03_arriveElPresidio_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_arriveElPresidio_v1_AC2", "MexGirl03_arriveElPresidio_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexGirl03_arriveElPresidio_v1_AD", "MexGirl03_arriveElPresidio_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_arriveElPresidio_v1_AE", "MexGirl03_arriveElPresidio_v1_AE", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_508() //Position: 0x1C204 / 115204
{
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_474, true) == Global_34573)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_473))
		{
			if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_473))
			{
				if (!HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_473);
				if (!HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				bLocal_508 = true;
				Function_85(17, 1, 0, 0);
				Function_247();
				Function_228(&iLocal_443);
				iLocal_668 = 12;
			}
		}
		else
		{
			bLocal_473 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, 6, false, 0, 0, 0, 4294967295, 0);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_473))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_473);
	}
	return;
}

void Function_509(bool bParam0) //Position: 0x1C2B5 / 115381
{
	if (!IS_ACTOR_IN_VOLUME(bLocal_441, (*&Local_4 + 872)[7]))
	{
		if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_474, true) != Global_34573)
		{
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				if (!iLocal_509)
				{
					iLocal_509 = 1;
					if (!bParam0)
					{
						Function_228(&iLocal_443);
						iLocal_668 = 7;
					}
				}
			}
		}
	}
	return;
}

void Function_510() //Position: 0x1C2FF / 115455
{
	if (Function_546(&iLocal_446) <= 15.0f && !HUD_IS_SHOWING_OBJECTIVE())
	{
		if (iLocal_514)
		{
			if (Function_367(Global_34573, bLocal_474) < 8.0f)
			{
				Function_512();
				iLocal_514 = 0;
			}
			else
			{
				Function_511();
			}
		}
		else
		{
			Function_511();
		}
		Function_228(&iLocal_446);
	}
	return;
}

void Function_511() //Position: 0x1C34A / 115530
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_waitingForJon", "MexGirl03_waitingForJon", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x1C3A1 / 115617
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_jonAwayWagon", "MexGirl03_jonAwayWagon", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x1C3F6 / 115702
{
	if (Function_546(&iLocal_541) <= 3.0f)
	{
		if (IS_ACTOR_SHOOTING(Global_34573))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
			{
				if (!Function_514(0x42c80000))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING() && iLocal_494 > 3)
					{
						iLocal_494++;
						SAY_SINGLE_LINE_STRING(bLocal_441, "MexGirl03_shootsGunRand", false, false, 2, 0, true, false);
						Function_228(&iLocal_541);
					}
				}
			}
		}
	}
	return;
}

bool Function_514(float fParam0) //Position: 0x1C471 / 115825
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	float fVar15;
	
	if (IS_LAYOUTREF_VALID(bLocal_389))
	{
		vVar0 = { -fParam0, -fParam0, -fParam0 };
		vVar3 = { fParam0, fParam0, fParam0 };
		UNK_0xB89CC342(Global_34573, &vVar0, &vVar6);
		UNK_0xB89CC342(Global_34573, &vVar3, &vVar9);
		bVar12 = CREATE_OBJECT_ITERATOR(bLocal_389);
		ITERATE_IN_AREA(bVar12, vVar9, vVar6);
		bVar13 = START_OBJECT_ITERATOR(bVar12);
		while (IS_OBJECT_VALID(bVar13))
		{
			bVar14 = GET_ACTOR_FROM_OBJECT(bVar13);
			if (IS_ACTOR_VALID(bVar14))
			{
				if (IS_ACTOR_HUMAN(bVar14) || IS_ACTOR_ANIMAL(bVar14))
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

void Function_515() //Position: 0x1C51A / 115994
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_nearElPresidio", "MexGirl03_nearElPresidio", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516() //Position: 0x1C573 / 116083
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(true);
	TASK_CLEAR(bLocal_441);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_441, bLocal_471, 4, 1, 0, 1, false);
	TASK_PRIORITY_SET(bLocal_441, true);
	iLocal_668 = 9;
	return;
}

bool Function_517(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C5A4 / 116132
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

void Function_518(bool bParam0) //Position: 0x1C5CB / 116171
{
	if (!bParam0)
	{
		Function_292();
		TASK_CLEAR(bLocal_441);
		SET_ACTOR_IN_VEHICLE(bLocal_441, bLocal_474, false);
		Function_312((*&Local_4 + 1212)[0]);
		ADD_BLIP_FOR_OBJECT((*&Local_4 + 1212)[0], 330, 0f, 2, 0);
	}
	bLocal_471 = Local_4.f_1496;
	return;
}

int Function_519() //Position: 0x1C610 / 116240
{
	Function_328(&Local_4 + 108, 1199, 2, 0);
	Function_328(&Local_4 + 108, 977, 2, 0);
	Function_328(&Local_4 + 108, 388, 2, 0);
	Function_328(&Local_4 + 108, 391, 2, 0);
	Function_328(&Local_4 + 108, 393, 2, 0);
	Function_328(&Local_4 + 108, 392, 2, 0);
	Function_328(&Local_4 + 108, 554, 2, 0);
	Function_328(&Local_4 + 108, 379, 2, 0);
	Function_328(&Local_4 + 108, 380, 2, 0);
	if (Function_320(&Local_4 + 108))
	{
		return 1;
	}
	return 0;
}

void Function_520() //Position: 0x1C698 / 116376
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 872)[9]))
	{
		if (Function_400(Global_34573, 1))
		{
			Function_236("MexGirl03_alert_Guards");
			Function_241(bLocal_437);
			Function_237(StackVal, StackVal, 5, &bLocal_462, &bLocal_437, Function_244(bLocal_437), Function_241(bLocal_437), 0);
		}
	}
	return;
}

void Function_521(bool bParam0) //Position: 0x1C6ED / 116461
{
	if (Function_548(bParam0))
	{
		if (!Function_522(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_76(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_522(bool bParam0) //Position: 0x1C7AC / 116652
{
	return Function_152(*bParam0, 2);
}

void Function_523() //Position: 0x1C7B9 / 116665
{
	if (iLocal_438 < 4 && iLocal_438 > 105)
	{
		Function_421(&iLocal_449, 60.0f, 200.0f, bLocal_441, "Mexgirl_return", "Mexgirl_abandoned", &bLocal_462, 1, bLocal_389, Local_4, 325, 1);
		if (!iLocal_514)
		{
			if (Function_367(Global_34573, bLocal_474) > 7.0f)
			{
				iLocal_514 = 1;
				Function_229(&iLocal_446, 10.0f);
			}
		}
	}
	switch (iLocal_438)
	{
		case 0x00000000:
			Function_353(0);
			SET_ACTOR_HEALTH(bLocal_441, GET_ACTOR_MAX_HEALTH(bLocal_441));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_350();
			bLocal_439 = Global_30633[2];
			if (!Function_443(bLocal_439))
			{
				Function_434(&Local_390);
			}
			if (Function_284(&Local_390))
			{
				Function_214(Global_34573, (*&Local_4 + 1060)[0], 1, 1, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 1;
			}
			else
			{
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_443(bLocal_439) || bLocal_439 != 4294967295)) && Function_327())
			{
				Function_214(bLocal_441, (*&Local_4 + 1060)[2], 1, 1, 1);
				Function_291();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2,5f, 0);
				Function_228(&iLocal_443);
				iLocal_438 = 2;
			}
			break;
		
		case 0x00000002:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_519();
			Function_242(bLocal_437);
			Function_424(StackVal, StackVal, Function_242(bLocal_437), bLocal_437, Global_30633[2], Function_245(bLocal_437), 0);
			Function_228(&iLocal_443);
			iLocal_438 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_525();
				Function_311(8, 1, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_517(Global_34573, bLocal_474, 1))
			{
				Function_311(8, 0, 1);
				Function_228(&iLocal_443);
				iLocal_438 = 8;
			}
			else
			{
				Function_311(8, 1, 1);
			}
			if (Function_546(&iLocal_443) <= 5.0f)
			{
				Function_422("mexgirl03_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&iLocal_443);
				Function_228(&iLocal_446);
				iLocal_438 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_506())
			{
				if (bLocal_508)
				{
					Function_287(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
				}
				Function_228(&iLocal_443);
				iLocal_438 = 106;
			}
			break;
		
		case 0x0000006A:
			if (bLocal_508)
			{
				if (HUD_IS_FADED())
				{
					Function_209();
					Function_345(Global_34573);
					Function_243((*&Local_4 + 1212)[1]);
					Function_524(VDIST(Function_345(Global_34573), Function_243((*&Local_4 + 1212)[1])));
					iLocal_452[0] = 1;
					Function_228(&iLocal_443);
					bLocal_437 = true;
					iLocal_438 = 0;
				}
			}
			else
			{
				Function_209();
				iLocal_452[0] = 1;
				Function_228(&iLocal_443);
				bLocal_437 = true;
				iLocal_438 = 0;
			}
			break;
	}
	return;
}

void Function_524(bool bParam0) //Position: 0x1CA62 / 117346
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

void Function_525() //Position: 0x1CA7A / 117370
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_ready2Leave", "MexGirl03_ready2Leave", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x1CACD / 117453
{
	switch (iLocal_438)
	{
		case 0x00000006:
			Function_129(&(Global_29008[Global_30707[1]]), 384);
			CLEAR_AMBIENT_OBJECTS_VOLUME(StackVal, 15);
			Function_534(&Local_390, 1);
			bLocal_389 = CREATE_LAYOUT("mexgirl03_DynamicLayout");
			Function_533();
			DISABLE_WORLD_SECTOR("campoMiradaBefore");
			ENABLE_WORLD_SECTOR("campoMiradaAfter");
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_02", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			if ((!Function_284(&Local_390) && Local_390.f_24 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MEX_GIRL_03/MEX_GIRL_03"))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2146,637f, 17,915f, 4958,636f, 4,664f, 1, true, 1);
				Global_63097 = 1;
				iLocal_438 = 7;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MEX_GIRL_03/MEX_GIRL_03"))
				{
				}
				if (!Function_284(&Local_390))
				{
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2146,637f, 17,915f, 4958,636f, 4,664f, 1, true, 1);
				}
				iLocal_438 = 8;
			}
			break;
		
		case 0x00000007:
			if (Function_276("$/cutscene/MEX_GIRL_03/MEX_GIRL_03", &iLocal_430, &Local_390, &bLocal_437, 78726, 78624, 77843, 77140, 76752, 52233, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_438 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_335())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_299();
				}
				iLocal_438 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_440 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_CRIPPLE_ENABLE(bLocal_441, 0);
			SET_ACTOR_FACTION(bLocal_441, 20);
			TASK_PRIORITY_SET(bLocal_441, true);
			AI_BEHAVIOR_SET_ALLOW(bLocal_441, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_441, 50.0f);
			SET_ACTOR_HEALTH(bLocal_441, GET_ACTOR_MAX_HEALTH(bLocal_441));
			ACTOR_START_FORCE_HOLSTER(bLocal_441, 0, 0);
			Function_156(Global_30707[1]);
			RESET_ACTOR_GAITS(bLocal_442, 0);
			TASK_PRIORITY_SET(bLocal_442, true);
			TASK_STAND_STILL(bLocal_442, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_442, 50.0f);
			SET_ACTOR_HEALTH(bLocal_442, GET_ACTOR_MAX_HEALTH(bLocal_442));
			SET_ALLOW_RIDE_BY_AI(bLocal_442, 0);
			SET_WEAPONENUM_LOCKED(19, 0);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 19, 0.0f, 0, 1);
			Function_531(&uLocal_553, bLocal_389);
			Function_222(&(Local_593[017]), bLocal_441, "MexGirl", 1, 0x5f5e100, 1);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 872)[5]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 872)[5]);
			Function_547(&iLocal_443);
			Function_547(&iLocal_446);
			Function_547(&iLocal_449);
			Function_547(&iLocal_541);
			bLocal_437 = false;
			iLocal_438 = 0;
			Function_528(&Local_390, &bLocal_437, &iLocal_438);
			Function_527(StackVal, StackVal, StackVal, StackVal, StackVal, Function_299(), Local_390);
			switch (bLocal_437)
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
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_527(struct<25> Param0) //Position: 0x1CE30 / 118320
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_437 = false;
			break;
		
		case 0x00000002:
			bLocal_437 = true;
			break;
		
		case 0x00000003:
			bLocal_437 = 2;
			break;
		
		case 0x00000004:
			bLocal_437 = 3;
			break;
		
		case 0x00000005:
			bLocal_437 = 4;
			break;
		
		case 0x00000006:
			bLocal_437 = 5;
			break;
		
		case 0x00000007:
			bLocal_437 = 6;
			break;
		
		case 0x00000008:
			bLocal_437 = 7;
			break;
		
		case 0x00000009:
			bLocal_437 = 8;
			break;
		
		case 0x0000000A:
			bLocal_437 = 101;
			break;
	}
}

void Function_528(int iParam0, var uParam1, int iParam2) //Position: 0x1CEC5 / 118469
{
	if (Function_284(iParam0))
	{
		*uParam1 = Function_530(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_529();
	}
	return;
}

void Function_529() //Position: 0x1CEF9 / 118521
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

var Function_530(int iParam0) //Position: 0x1CF4A / 118602
{
	if (Function_284(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_531(var uParam0, bool bParam1) //Position: 0x1CF62 / 118626
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_532(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_532(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_532(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_532(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1D602 / 120322
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

void Function_533() //Position: 0x1D6C5 / 120517
{
	Function_337(&bLocal_397, "gent_ride_passenger", 5, 0);
	Function_337(&bLocal_397, "luisa_search", 5, 0);
	Function_337(&bLocal_397, "custom/luisa_search", 8, 0);
	SET_WEAPONENUM_LOCKED(19, 0);
	Function_337(&bLocal_397, "rifle_rollingBlock01x", 0, 0);
	Function_337(&bLocal_397, "nMexGirl03", 10, 0);
	Function_337(&bLocal_413, "p_gen_crateTnt01x", 0, 0);
	Function_337(&bLocal_413, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_337(&bLocal_413, "$/content/scripting/gringo/simplegringo/pole_hostage_beatup", 1, 0);
	return;
}

void Function_534(int iParam0, bool bParam1) //Position: 0x1D808 / 120840
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_540(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_284(iParam0))
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
	if (!Function_284(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_202();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_247();
	Function_279();
	Function_236("");
	Function_539(0);
	Function_538();
	Function_195();
	Function_194();
	ENABLE_JOURNAL_REPLAY(0);
	Function_537();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_354(0, 0x40400000);
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
	Function_536(13);
	Function_536(14);
	Function_536(25);
	Function_536(24);
	Function_536(12);
	Function_536(27);
	Function_536(26);
	Function_536(15);
	Function_535();
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

void Function_535() //Position: 0x1DC2C / 121900
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

void Function_536(int iParam0) //Position: 0x1DCA0 / 122016
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_537() //Position: 0x1DCC0 / 122048
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

void Function_538() //Position: 0x1DCFD / 122109
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_539(int iParam0) //Position: 0x1DD11 / 122129
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

void Function_540(int iParam0, int iParam1) //Position: 0x1DD46 / 122182
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
			Function_541(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_541(int iParam0) //Position: 0x1DDC8 / 122312
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

void Function_542() //Position: 0x1DE16 / 122390
{
	return;
}

void Function_543(var uParam0, bool bParam1) //Position: 0x1DE1C / 122396
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
					Function_544(*uParam0, 0);
				}
			}
			else
			{
				*uParam0 = bVar0;
				Function_544(*uParam0, 0);
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
						Function_544(*uParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
					}
					*uParam0 = bVar0;
					Function_544(*uParam0, 0);
				}
			}
		}
	}
	return;
}

void Function_544(var uParam0, int iParam1) //Position: 0x1DEE1 / 122593
{
	Function_545(iParam1);
	Global_12976.f_72 = uParam0;
	return;
}

void Function_545(bool bParam0) //Position: 0x1DEF3 / 122611
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

float Function_546(int iParam0) //Position: 0x1E0A9 / 123049
{
	if (Function_548(iParam0))
	{
		if (Function_522(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_547(int iParam0) //Position: 0x1E171 / 123249
{
	if (!Function_548(iParam0))
	{
		Function_229(iParam0, 0.0f);
	}
	return;
}

bool Function_548(int iParam0) //Position: 0x1E186 / 123270
{
	return Function_152(*iParam0, 1);
}

bool Function_549(int iParam0) //Position: 0x1E193 / 123283
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_550(bool bParam0) //Position: 0x1E1B1 / 123313
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam0 == bLocal_441)
		{
			if (MEMORY_GET_IS_VISIBLE(bLocal_441, Global_34573))
			{
				Function_552();
			}
		}
		else if (bParam0 == bLocal_476)
		{
			if (MEMORY_GET_IS_VISIBLE(bLocal_476, Global_34573))
			{
				SAY_SINGLE_LINE_STRING(bLocal_476, "MexGirl03_jonTargetsReyes", true, false, 3, 0, true, false);
			}
		}
		else if (MEMORY_GET_IS_VISIBLE(bLocal_441, Global_34573))
		{
			Function_551();
		}
	}
	return;
}

void Function_551() //Position: 0x1E227 / 123431
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_gunOnChar", "MexGirl03_gunOnChar", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_552() //Position: 0x1E276 / 123510
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_gunOnLuisa", "MexGirl03_gunOnLuisa", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_553(var uParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x1E2C7 / 123591
{
	bool bVar0;
	
	if (Function_554(GET_WEAPON_IN_HAND(Global_34573)))
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
							if (Function_370(*uParam0, Global_34573, 50.0f))
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

bool Function_554(bool bParam0) //Position: 0x1E38F / 123791
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

bool Function_555(int iParam0) //Position: 0x1E3D5 / 123861
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			Function_560();
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
						Function_559();
					}
					break;
				
				case 0x00000002:
					SAY_SINGLE_LINE_STRING(bLocal_476, "MexGirl03_jonShootsReyes", true, false, 3, 0, true, false);
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
					}
					else
					{
						Function_558();
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
					Function_557();
					break;
				
				case 0x00000002:
					SAY_SINGLE_LINE_STRING(bLocal_476, "MexGirl03_jonAssaultsReyes", true, false, 3, 0, true, false);
					break;
			}
			break;
		
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
			Function_556(iParam0, 1);
			return 1;
		}
	}
	Function_556(iParam0, 0);
	return 0;
}

void Function_556(int iParam0, bool bParam1) //Position: 0x1E504 / 124164
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

void Function_557() //Position: 0x1E528 / 124200
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_assaultLuisa", "MexGirl03_assaultLuisa", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x1E57D / 124285
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_jonShootsWagonHorse", "MexGirl03_jonShootsWagonHorse", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x1E5E0 / 124384
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_shootsLuisa", "MexGirl03_shootsLuisa", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x1E633 / 124467
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexGirl03_jonKillsWagonHorse_v2", "MexGirl03_jonKillsWagonHorse_v2", false, 1, 1, 0, 1);
		Function_362(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_561(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1E69A / 124570
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
		Function_556(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_580(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_579(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_579(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_565(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_152(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_556(iParam2, 0);
														return 0;
													}
													if (Function_152(bVar17, 2))
													{
														Function_564(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_563(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_152(bVar17, 4))
													{
														Function_564(&bVar17);
														strcpy(&Var18, "", 64);
														Function_562(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_236(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_563(StackVal, iParam2, bVar17);
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
	Function_556(iParam2, 0);
	return 0;
}

void Function_562(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1EA33 / 125491
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

void Function_563(var uParam0, int iParam1, bool bParam2) //Position: 0x1EB1E / 125726
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

void Function_564(bool bParam0) //Position: 0x1EB94 / 125844
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_565(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1EBB6 / 125878
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
			return Function_576(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_569(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_576(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_566(iParam0, bVar2);
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
						bVar2 = Function_576(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_566(iParam0, bVar2);
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

var Function_566(int iParam0, bool bParam1) //Position: 0x1ED00 / 126208
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
				bParam1 = Function_568(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_567(16);
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
				bParam1 = Function_568(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_567(256);
			}
		}
	}
	return bParam1;
}

bool Function_567(int iParam0) //Position: 0x1EE33 / 126515
{
	return 2 | iParam0;
}

int Function_568(int iParam0) //Position: 0x1EE3D / 126525
{
	return 4 | iParam0;
}

int Function_569(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1EE47 / 126535
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
				iParam3 = Function_575(iParam0, iParam1, bParam4);
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
			return Function_567(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_570(iParam0, iParam1, 0, bParam4);
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
			return Function_567(16);
		}
	}
	return 0;
}

int Function_570(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1EEF9 / 126713
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_574(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_573(iVar0, 3, 1, bParam3))
			{
				if (!Function_579(iParam0, 8, 1))
				{
					return Function_572(64, 1024, bParam2);
				}
			}
			return Function_571(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_573(iVar0, 2, 1, bParam3))
			{
				if (!Function_579(iParam0, 32, 1))
				{
					return Function_572(64, 1024, bParam2);
				}
			}
			return Function_571(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_573(iVar0, 1, 1, bParam3))
			{
				if (!Function_579(iParam0, 64, 1))
				{
					return Function_572(64, 1024, bParam2);
				}
			}
			return Function_571(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_573(iVar0, 3, 1, bParam3))
			{
				if (!Function_579(iParam0, 128, 1))
				{
					return Function_572(64, 1024, bParam2);
				}
			}
			return Function_571(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_573(iVar0, 1, 1, bParam3))
			{
				if (!Function_579(iParam0, 1024, 1))
				{
					return Function_572(64, 1024, bParam2);
				}
			}
			return Function_571(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_573(iVar0, 1, 1, bParam3))
			{
				if (!Function_579(iParam0, 1024, 1))
				{
					return Function_572(64, 1024, bParam2);
				}
			}
			return Function_571(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_571(int iParam0, int iParam1, bool bParam2) //Position: 0x1F0B3 / 127155
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_572(int iParam0, int iParam1, bool bParam2) //Position: 0x1F0C8 / 127176
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_573(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1F0DD / 127197
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_574(int iParam0) //Position: 0x1F0FA / 127226
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

int Function_575(var uParam0, int iParam1, bool bParam2) //Position: 0x1F169 / 127337
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_574(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_573(iVar0, 3, 1, bParam2))
			{
				if (!Function_579(uParam0, 8, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000009:
			if (Function_573(iVar0, 3, 1, bParam2))
			{
				if (!Function_579(uParam0, 8, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x0000006E:
			if (Function_573(iVar0, 2, 1, bParam2))
			{
				if (!Function_579(uParam0, 16, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x0000005B:
			if (Function_573(iVar0, 2, 1, bParam2))
			{
				if (!Function_579(uParam0, 32, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000031:
			if (Function_573(iVar0, 1, 1, bParam2))
			{
				if (!Function_579(uParam0, 64, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000007:
			if (Function_573(iVar0, 3, 1, bParam2))
			{
				if (!Function_579(uParam0, 128, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000008:
			if (Function_573(iVar0, 2, 1, bParam2))
			{
				if (!Function_579(uParam0, 256, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000014:
			if (Function_573(iVar0, 1, 1, bParam2))
			{
				if (!Function_579(uParam0, 512, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000018:
			if (Function_573(iVar0, 1, 1, bParam2))
			{
				if (!Function_579(uParam0, 512, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000057:
			if (Function_573(iVar0, 1, 1, bParam2))
			{
				if (!Function_579(uParam0, 1024, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000058:
			if (Function_573(iVar0, 1, 1, bParam2))
			{
				if (!Function_579(uParam0, 1024, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_576(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1F384 / 127876
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
						return Function_575(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_579(iParam0, 2, 1))
					{
						return Function_568(8);
					}
					return Function_567(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_579(iParam0, 4, 1))
					{
						return Function_568(16);
					}
					return Function_567(16);
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
							return Function_570(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_579(iParam0, 2, 1))
						{
							return Function_568(128);
						}
						return Function_567(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_579(iParam0, 4, 1))
						{
							return Function_568(256);
						}
						return Function_567(256);
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
						return Function_570(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_579(iParam0, 2, 1))
					{
						return Function_568(8);
					}
					return Function_567(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_579(iParam0, 4, 1))
					{
						return Function_568(16);
					}
					return Function_567(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_578(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_579(iParam0, 2, 1))
					{
						return Function_568(8);
					}
					return Function_567(8);
				}
				if (!Function_579(iParam0, 4, 1))
				{
					return Function_568(16);
				}
				return Function_567(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_570(iParam0, uParam1, 1, bParam5);
							if (Function_152(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_577(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_567(128);
							}
							if (!Function_579(iParam0, 2, 1))
							{
								return Function_568(8);
							}
							return Function_567(8);
						}
						if (iParam4 == 2)
						{
							if (Function_577(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_567(256);
							}
							if (!Function_579(iParam0, 4, 1))
							{
								return Function_568(16);
							}
							return Function_567(16);
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

bool Function_577(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1F643 / 128579
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

int Function_578(int iParam0, var uParam1, bool bParam2) //Position: 0x1F6FC / 128764
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_574(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_573(iVar0, 2, 1, bParam2))
			{
				if (!Function_579(iParam0, 16, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x0000005B:
			if (Function_573(iVar0, 2, 1, bParam2))
			{
				if (!Function_579(iParam0, 32, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000057:
			if (Function_573(iVar0, 1, 1, bParam2))
			{
				if (!Function_579(iParam0, 1024, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		case 0x00000058:
			if (Function_573(iVar0, 1, 1, bParam2))
			{
				if (!Function_579(iParam0, 1024, 1))
				{
					return Function_568(64);
				}
			}
			return Function_567(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_579(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F810 / 129040
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

int Function_580(bool bParam0) //Position: 0x1F838 / 129080
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

void Function_581(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1F869 / 129129
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

