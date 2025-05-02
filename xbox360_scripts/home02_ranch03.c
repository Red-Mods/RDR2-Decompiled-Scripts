//Decompiled with MagicRDR v1.0
//Function Count : 521
//Statics Count : 542
//Natives Count : 702
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<597> Local_4 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_333 = 4294967295;
	iLocal_334 = 1;
	fLocal_335 = 200.0f;
	fLocal_336 = 300.0f;
	iLocal_530 = 0;
	iLocal_531 = 0;
	iLocal_532 = 0;
	Local_155 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_183 = 99;
	iLocal_184 = 0;
	iLocal_176 = 1000;
	while (Function_259())
	{
		Function_215();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x60 / 96
{
	if (Function_214(Global_30717[1]))
	{
		if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 94)))
		{
			if (IS_DOOR_OPENED(Function_213(Global_30717[1], "beechersHope", "stable01", 94)) || IS_DOOR_OPENING(Function_213(Global_30717[1], "beechersHope", "stable01", 94)))
			{
				CLOSE_DOOR_FAST(Function_213(Global_30717[1], "beechersHope", "stable01", 94));
				SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 94), 1);
			}
		}
		if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 95)))
		{
			if (IS_DOOR_OPENED(Function_213(Global_30717[1], "beechersHope", "stable01", 95)) || IS_DOOR_OPENING(Function_213(Global_30717[1], "beechersHope", "stable01", 95)))
			{
				CLOSE_DOOR_FAST(Function_213(Global_30717[1], "beechersHope", "stable01", 95));
				SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 95), 1);
			}
		}
		if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 96)))
		{
			if (IS_DOOR_OPENED(Function_213(Global_30717[1], "beechersHope", "stable01", 96)) || IS_DOOR_OPENING(Function_213(Global_30717[1], "beechersHope", "stable01", 96)))
			{
				CLOSE_DOOR_FAST(Function_213(Global_30717[1], "beechersHope", "stable01", 96));
				SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 96), 1);
			}
		}
		if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 97)))
		{
			if (IS_DOOR_OPENED(Function_213(Global_30717[1], "beechersHope", "stable01", 97)) || IS_DOOR_OPENING(Function_213(Global_30717[1], "beechersHope", "stable01", 97)))
			{
				CLOSE_DOOR_FAST(Function_213(Global_30717[1], "beechersHope", "stable01", 97));
				SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 97), 1);
			}
		}
	}
	if (!DECOR_GET_BOOL(Global_34573, "CanBeLasso"))
	{
		DECOR_SET_BOOL(Global_34573, "CanBeLasso", true);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_187);
	TASK_DISMOUNT(bLocal_187, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_187);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_189);
	Function_211(13, 0, 1);
	Function_210(bLocal_154);
	Function_210(Local_4);
	Function_207(12, 0, 1, 1, 1);
	Function_207(13, 0, 0, 1, 1);
	Function_207(11, 0, 0, 1, 1);
	STREAMING_UNLOAD_BOUNDS();
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_206();
	Function_179(bLocal_205, 1, 0, 1, 0, 1, 1, 1);
	Function_174();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	Function_170(&bLocal_162);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_186))
	{
		DESTROY_ITERATOR(bLocal_186);
	}
	RELEASE_LAYOUT_REF(bLocal_154);
	if (bLocal_204)
	{
		Function_24(Local_155, 1, 1, 1, 0);
	}
	else if (bLocal_205)
	{
		Function_20(Local_155);
	}
	else
	{
		Function_2(Local_155);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x489 / 1161
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x4AA / 1194
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x4C5 / 1221
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x4E6 / 1254
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x4FC / 1276
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

void Function_7(int iParam0) //Position: 0x598 / 1432
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x5B9 / 1465
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

void Function_9() //Position: 0x5FF / 1535
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x618 / 1560
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x66B / 1643
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

struct<16> Function_12(int iParam0) //Position: 0x78F / 1935
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x7B4 / 1972
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x7D4 / 2004
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x7EB / 2027
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x806 / 2054
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA4D / 2637
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0xA76 / 2678
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

bool Function_19(int iParam0) //Position: 0xA9A / 2714
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0xAAF / 2735
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0xACD / 2765
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

struct<16> Function_22(int iParam0) //Position: 0xB73 / 2931
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0xB9D / 2973
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xDF3 / 3571
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

void Function_25() //Position: 0xEE0 / 3808
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

int Function_26(int iParam0, bool bParam1) //Position: 0xF10 / 3856
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

int Function_27(int iParam0) //Position: 0xF4D / 3917
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xF67 / 3943
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xF7D / 3965
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1274 / 4724
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

void Function_31(char* cParam0, int iParam1) //Position: 0x12E0 / 4832
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x1317 / 4887
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

bool Function_33(var uParam0, int iParam1) //Position: 0x138F / 5007
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x13A2 / 5026
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

int Function_35(int iParam0) //Position: 0x1443 / 5187
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1480 / 5248
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1493 / 5267
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

void Function_38(int iParam0, int iParam1) //Position: 0x16A5 / 5797
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x16DF / 5855
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

bool Function_40() //Position: 0x1721 / 5921
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x172A / 5930
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

void Function_42() //Position: 0x177B / 6011
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

void Function_43() //Position: 0x17AE / 6062
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

void Function_44() //Position: 0x18B4 / 6324
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

void Function_45() //Position: 0x18E7 / 6375
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

void Function_46() //Position: 0x1A75 / 6773
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

void Function_47() //Position: 0x1C29 / 7209
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1C37 / 7223
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

var Function_49() //Position: 0x1E28 / 7720
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1E3D / 7741
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1ED8 / 7896
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2173 / 8563
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

var Function_53() //Position: 0x27A0 / 10144
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x27A8 / 10152
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x27B9 / 10169
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x28AE / 10414
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x28C7 / 10439
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x292C / 10540
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x293E / 10558
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2950 / 10576
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

int Function_61(int iParam0) //Position: 0x2A80 / 10880
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2A8F / 10895
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2AC8 / 10952
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2B05 / 11013
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C9F / 11423
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

int Function_66(bool bParam0) //Position: 0x2EB9 / 11961
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2EFA / 12026
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

struct<8> Function_68() //Position: 0x2F83 / 12163
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

struct<8> Function_69() //Position: 0x301A / 12314
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

void Function_70() //Position: 0x3099 / 12441
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x30BF / 12479
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

void Function_72() //Position: 0x32C9 / 13001
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

bool Function_73(vector3 vParam0) //Position: 0x336A / 13162
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3382 / 13186
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

vector3 Function_75() //Position: 0x3469 / 13417
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3472 / 13426
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3481 / 13441
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3497 / 13463
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x355E / 13662
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x357B / 13691
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

bool Function_81(int iParam0) //Position: 0x3A57 / 14935
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3A6D / 14957
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3A8C / 14988
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3AA6 / 15014
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3B0D / 15117
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

void Function_86() //Position: 0x3D2D / 15661
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3DAD / 15789
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4103 / 16643
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

int Function_89(int iParam0) //Position: 0x4186 / 16774
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x41A0 / 16800
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x41CE / 16846
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x446A / 17514
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

void Function_93(int iParam0, int iParam1) //Position: 0x462D / 17965
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x488B / 18571
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

int Function_95() //Position: 0x4A10 / 18960
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

void Function_96() //Position: 0x4AAF / 19119
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

void Function_97(int iParam0) //Position: 0x4B5E / 19294
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

var Function_98(int iParam0) //Position: 0x4BBC / 19388
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4C4B / 19531
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

var Function_100(int iParam0, int iParam1) //Position: 0x4DE8 / 19944
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

void Function_101() //Position: 0x4E29 / 20009
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4E3F / 20031
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4E7F / 20095
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4EBF / 20159
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4ECE / 20174
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

int Function_106(int iParam0) //Position: 0x5096 / 20630
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

var Function_107() //Position: 0x512B / 20779
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x5150 / 20816
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x560B / 22027
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

var Function_110(int iParam0) //Position: 0x5920 / 22816
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x59C3 / 22979
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5BBE / 23486
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5D5A / 23898
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5E25 / 24101
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

void Function_115(int iParam0) //Position: 0x6715 / 26389
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6884 / 26756
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x698A / 27018
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x69B7 / 27063
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

var Function_119(vector3 vParam0) //Position: 0x6A0E / 27150
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x6A5C / 27228
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6AB0 / 27312
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

void Function_122() //Position: 0x6C4E / 27726
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6C54 / 27732
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6CF8 / 27896
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6D4D / 27981
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6D63 / 28003
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6DB4 / 28084
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

void Function_128(var uParam0, int iParam1) //Position: 0x6DE1 / 28129
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6DF0 / 28144
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6E07 / 28167
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6E16 / 28182
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6F60 / 28512
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

bool Function_133() //Position: 0x6FAB / 28587
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6FD8 / 28632
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

int Function_135(int iParam0) //Position: 0x7188 / 29064
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x71DF / 29151
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

var Function_137(int iParam0) //Position: 0x7204 / 29188
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x725A / 29274
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

bool Function_139(bool bParam0) //Position: 0x72B9 / 29369
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x72C5 / 29381
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x72E1 / 29409
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

int Function_142(int iParam0, int iParam1) //Position: 0x7333 / 29491
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

int Function_143(int iParam0, int iParam1) //Position: 0x73A6 / 29606
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7402 / 29698
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

int Function_145(int iParam0, int iParam1) //Position: 0x7473 / 29811
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x74CD / 29901
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7779 / 30585
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

void Function_148(int iParam0, bool bParam1) //Position: 0x7A08 / 31240
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

void Function_149() //Position: 0x7A67 / 31335
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

var Function_150(int iParam0, int iParam1) //Position: 0x7AE2 / 31458
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

int Function_151(int iParam0) //Position: 0x86D4 / 34516
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x86E9 / 34537
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x8738 / 34616
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8745 / 34629
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8796 / 34710
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

bool Function_156(int iParam0, int iParam1) //Position: 0x8804 / 34820
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8817 / 34839
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

var Function_158(int iParam0) //Position: 0x8916 / 35094
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

bool Function_159(var uParam0, int iParam1) //Position: 0x896E / 35182
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x898A / 35210
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

bool Function_161(int iParam0) //Position: 0x89E1 / 35297
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x89F3 / 35315
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

void Function_163(int iParam0) //Position: 0x8A27 / 35367
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A8E / 35470
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8B6B / 35691
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

void Function_166() //Position: 0x8CE4 / 36068
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8CF0 / 36080
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

void Function_168() //Position: 0x8D36 / 36150
{
	Function_169();
	return;
}

void Function_169() //Position: 0x8D3F / 36159
{
	Function_170(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170(int iParam0) //Position: 0x8D51 / 36177
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

void Function_171(var uParam0, int iParam1) //Position: 0x8D77 / 36215
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

void Function_172(var uParam0, int iParam1) //Position: 0x8EA5 / 36517
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_173(int iParam0, int iParam1) //Position: 0x8EBF / 36543
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_174() //Position: 0x8EDC / 36572
{
	if (IS_BLIP_VALID(bLocal_211))
	{
		REMOVE_BLIP(bLocal_211);
	}
	if (IS_BLIP_VALID(bLocal_212))
	{
		REMOVE_BLIP(bLocal_212);
	}
	if (IS_OBJECT_VALID(bLocal_214))
	{
		DESTROY_OBJECT(bLocal_214);
	}
	if (IS_OBJECT_VALID(bLocal_215))
	{
		DESTROY_OBJECT(bLocal_215);
	}
	if (IS_ACTOR_RIDING(bLocal_187))
	{
		TASK_DISMOUNT(bLocal_187, 1);
	}
	else
	{
		TASK_CLEAR(bLocal_187);
	}
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_187);
	Function_207(13, 0, 1, 1, 1);
	Function_207(12, 0, 0, 1, 1);
	Function_207(11, 0, 0, 1, 1);
	if (IS_ACTOR_VALID(bLocal_273))
	{
		RELEASE_ACTOR(bLocal_273);
	}
	if (IS_ACTOR_VALID(bLocal_274))
	{
		RELEASE_ACTOR(bLocal_274);
	}
	if (IS_ACTOR_VALID(bLocal_188))
	{
		RELEASE_ACTOR_AS_AMBIENT(bLocal_188);
	}
	Function_178(&bLocal_286);
	if (SQUAD_IS_VALID(bLocal_290))
	{
		bLocal_219 = false;
		while (bLocal_219 <= SQUAD_GET_SIZE(bLocal_290))
		{
			bLocal_279 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_290, bLocal_219);
			SET_ACTOR_RIDEABLE(bLocal_279, 1);
			bLocal_219++;
		}
		Function_176(&bLocal_290, 1, 0);
		RELEASE_OBJECT_REF(bLocal_290);
	}
	if (SQUAD_IS_VALID(bLocal_291))
	{
		Function_175(&bLocal_291);
		DESTROY_OBJECT(bLocal_291);
	}
	if (SQUAD_IS_VALID(bLocal_292))
	{
		Function_175(&bLocal_292);
		DESTROY_OBJECT(bLocal_292);
	}
	if (SQUAD_IS_VALID(Local_4.f_92))
	{
		Function_175(&Local_4 + 92);
		DESTROY_OBJECT(Local_4.f_92);
	}
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		Function_175(&Local_4 + 180);
		DESTROY_OBJECT(Local_4.f_180);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_187);
	return;
}

void Function_175(bool bParam0) //Position: 0x9020 / 36896
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

void Function_176(var uParam0, bool bParam1, bool bParam2) //Position: 0x9067 / 36967
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
				if (!Function_177(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_177(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x90E3 / 37091
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_178(bool bParam0) //Position: 0x90FD / 37117
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (IS_OBJECT_VALID((*bParam0)[iVar0]))
		{
			RELEASE_OBJECT_REF((*bParam0)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_179(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x912E / 37166
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_205());
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
	Function_204();
	CLEAR_PRINTED_OBJECTIVE();
	Function_203();
	Function_201(0);
	Function_200();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_199();
	Function_198();
	Function_204();
	ENABLE_JOURNAL_REPLAY(1);
	Function_197(1);
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
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_180() //Position: 0x931F / 37663
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
		Function_181(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_181(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x9375 / 37749
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_182((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_182(bool bParam0) //Position: 0x93BB / 37819
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_183() //Position: 0x93E0 / 37856
{
	return Global_12976.f_156;
}

void Function_184() //Position: 0x93EB / 37867
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

void Function_185(int iParam0, bool bParam1, int iParam2) //Position: 0x9415 / 37909
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

void Function_186(int iParam0) //Position: 0x9520 / 38176
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

bool Function_187() //Position: 0x959F / 38303
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

void Function_188() //Position: 0x95FC / 38396
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

void Function_189() //Position: 0x9622 / 38434
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

void Function_190(int iParam0) //Position: 0x9648 / 38472
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_191(int iParam0) //Position: 0x9665 / 38501
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_192(int iParam0) //Position: 0x9678 / 38520
{
	Function_193(&Global_28842, iParam0);
	return;
}

void Function_193(var uParam0, int iParam1) //Position: 0x9686 / 38534
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_194(bool bParam0) //Position: 0x96A1 / 38561
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_195(int iParam0) //Position: 0x96CE / 38606
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

void Function_196(bool bParam0) //Position: 0x9795 / 38805
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

void Function_197(bool bParam0) //Position: 0x9811 / 38929
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

void Function_198() //Position: 0x9885 / 39045
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

void Function_199() //Position: 0x98C6 / 39110
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

void Function_200() //Position: 0x9907 / 39175
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_201(int iParam0) //Position: 0x991B / 39195
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_202())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_202() //Position: 0x9957 / 39255
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

void Function_203() //Position: 0x997C / 39292
{
	Global_8722 = 0.0f;
	return;
}

void Function_204() //Position: 0x9986 / 39302
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

int Function_205() //Position: 0x99B1 / 39345
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_206() //Position: 0x99CB / 39371
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

int Function_207(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x99D4 / 39380
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

void Function_208(bool bParam0) //Position: 0x9CF2 / 40178
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

void Function_209(bool bParam0) //Position: 0x9D1E / 40222
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_210(bool bParam0) //Position: 0x9D33 / 40243
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

void Function_211(int iParam0, bool bParam1, bool bParam2) //Position: 0x9D8B / 40331
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
				Function_212(bVar0);
			}
		}
	}
	return;
}

void Function_212(bool bParam0) //Position: 0x9E82 / 40578
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

bool Function_213(int iParam0, bool bParam1, char* cParam2, int iParam3) //Position: 0x9EAE / 40622
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
	bParam1 = bParam1;
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

bool Function_214(bool bParam0) //Position: 0x9F4A / 40778
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

void Function_215() //Position: 0x9F66 / 40806
{
	var uVar0[12];
	int iVar13;
	
	if (Function_258())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Horse Breaking";
		uVar0[4] = "Stage 03 - Ride Home";
		uVar0[5] = "Last Stage";
		iVar13 = Function_244(&uLocal_169, &uVar0, &Local_155 + 4, 1, 0);
		if (Function_243(&iVar13, &iLocal_183, &iLocal_184, &iLocal_176))
		{
			Function_236();
			Function_235();
		}
		if (iVar13 == 0)
		{
			Function_236();
			Function_235();
			Function_234(&bLocal_204, 8);
		}
		else if (iVar13 == 1)
		{
			Function_236();
			Function_235();
			Function_229(iLocal_183);
			Function_225(StackVal, StackVal, 5, &bLocal_205, &iLocal_183, Function_232(iLocal_183), Function_229(iLocal_183), 0);
		}
		else if (iVar13 == 2)
		{
			Function_236();
			Function_235();
			Function_220(&bLocal_206, 4);
		}
		else if (iVar13 == 3)
		{
			Function_218();
			Function_236();
			Function_235();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_216(&iLocal_190);
			iLocal_183 = 1;
			iLocal_184 = 0;
			iLocal_176 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_218();
			Function_236();
			Function_235();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_216(&iLocal_190);
			iLocal_183 = 2;
			iLocal_184 = 0;
			iLocal_176 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_218();
			Function_236();
			Function_235();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_216(&iLocal_190);
			iLocal_183 = 101;
			iLocal_184 = 0;
			iLocal_176 = 1000;
		}
	}
	return;
}

void Function_216(int iParam0) //Position: 0xA0F4 / 41204
{
	Function_217(iParam0, 0.0f);
	return;
}

void Function_217(var uParam0, float fParam1) //Position: 0xA100 / 41216
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(uParam0, 1);
	Function_36(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_218() //Position: 0xA121 / 41249
{
	if (IS_BLIP_VALID(bLocal_211))
	{
		REMOVE_BLIP(bLocal_211);
	}
	if (IS_BLIP_VALID(bLocal_212))
	{
		REMOVE_BLIP(bLocal_212);
	}
	if (IS_OBJECT_VALID(bLocal_214))
	{
		DESTROY_OBJECT(bLocal_214);
	}
	if (IS_OBJECT_VALID(bLocal_215))
	{
		DESTROY_OBJECT(bLocal_215);
	}
	if (IS_ACTOR_VALID(bLocal_273))
	{
		DESTROY_ACTOR(bLocal_273);
	}
	if (IS_ACTOR_VALID(bLocal_274))
	{
		DESTROY_ACTOR(bLocal_274);
	}
	Function_219(&bLocal_286);
	if (IS_ATTACHMENT_VALID(bLocal_280))
	{
		REMOVE_OBJECT_ATTACHMENT(bLocal_280);
	}
	if (SQUAD_IS_VALID(Local_4.f_92))
	{
		Function_175(&Local_4 + 92);
		DESTROY_OBJECT(Local_4.f_92);
	}
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		Function_175(&Local_4 + 180);
		DESTROY_OBJECT(Local_4.f_180);
	}
	if (SQUAD_IS_VALID(bLocal_290))
	{
		Function_175(&bLocal_290);
		DESTROY_OBJECT(bLocal_290);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_187);
	return;
}

void Function_219(bool bParam0) //Position: 0xA1D9 / 41433
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (IS_OBJECT_VALID((*bParam0)[iVar0]))
		{
			DESTROY_OBJECT((*bParam0)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_220(bool bParam0, int iParam1) //Position: 0xA20A / 41482
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_221(iParam1);
	*bParam0 = 1;
	return;
}

void Function_221(int iParam0) //Position: 0xA22D / 41517
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_224("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_223(2) || Function_223(8)) || Function_223(9)) || Function_223(10))
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
		Function_224("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_224("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_224("");
	}
	else if (iParam0 == 8)
	{
		Function_222();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_222();
	}
	return;
}

void Function_222() //Position: 0xA324 / 41764
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_223(int iParam0) //Position: 0xA330 / 41776
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

void Function_224(bool bParam0) //Position: 0xA366 / 41830
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_225(int iParam0, int iParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA3D0 / 41936
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_226(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_221(iParam0);
		*iParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_226(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA40D / 41997
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_228(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_227(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_227(int iParam0) //Position: 0xA490 / 42128
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

var Function_228(vector3 vParam0, bool bParam3) //Position: 0xA93E / 43326
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

vector3 Function_229(int iParam0) //Position: 0xA9A9 / 43433
{
	Function_230(iParam0 + 1);
	return StackVal, StackVal, Function_230(iParam0 + 1);
}

vector3 Function_230(int iParam0) //Position: 0xA9B6 / 43446
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_231((*&Local_4 + 336)[0]);
			return StackVal, StackVal, Function_231((*&Local_4 + 336)[0]);
			break;
		
		case 0x00000001:
			Function_231((*&Local_4 + 380)[0]);
			return StackVal, StackVal, Function_231((*&Local_4 + 380)[0]);
			break;
		
		case 0x00000002:
			Function_231((*&Local_4 + 420)[0]);
			return StackVal, StackVal, Function_231((*&Local_4 + 420)[0]);
			break;
		
		default:
			Function_231((*&Local_4 + 460)[0]);
			return StackVal, StackVal, Function_231((*&Local_4 + 460)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_231((*&Local_4 + 336)[0]);
	return StackVal, StackVal, Function_231((*&Local_4 + 336)[0]);
}

vector3 Function_231(bool bParam0) //Position: 0xAA80 / 43648
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

int Function_232(int iParam0) //Position: 0xAAA7 / 43687
{
	return Function_233(iParam0 + 1);
}

int Function_233(int iParam0) //Position: 0xAAB4 / 43700
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 336)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 380)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 420)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 460)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 336)[0]);
}

void Function_234(bool bParam0, int iParam1) //Position: 0xAB7E / 43902
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_221(iParam1);
	*bParam0 = 1;
	return;
}

void Function_235() //Position: 0xABA1 / 43937
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_236() //Position: 0xABB6 / 43958
{
	Function_238();
	Function_237(10, 3);
	return;
}

void Function_237(int iParam0, int iParam1) //Position: 0xABC5 / 43973
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

void Function_238() //Position: 0xACFC / 44284
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_242())
	{
		Function_241(10, 3);
	}
	else
	{
		Function_239();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_239() //Position: 0xAD47 / 44359
{
	Function_240(25, 2);
	return;
}

void Function_240(int iParam0, int iParam1) //Position: 0xAD53 / 44371
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

void Function_241(int iParam0, int iParam1) //Position: 0xAF51 / 44881
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

bool Function_242() //Position: 0xB088 / 45192
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

bool Function_243(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB0EF / 45295
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_236();
			Function_235();
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
		Function_224("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB195 / 45461
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_257(&Var15, &Var0);
	uVar20 = Function_256(*uParam1, &Var15);
	Function_255(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_254(uParam0, uVar20);
	Function_252(StackVal, uParam0, Var15.f_12);
	Function_250(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_249(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_246(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_245(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_245(int iParam0, int iParam1, int iParam2) //Position: 0xB25C / 45660
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

bool Function_246(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB2B8 / 45752
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
				Function_248(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_248(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_245(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_247(bParam1->f_32);
	}
	else
	{
		Function_247(bParam1->f_32);
	}
	return 0;
}

void Function_247(bool bParam0) //Position: 0xB43E / 46142
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

void Function_248(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB478 / 46200
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

var Function_249(int iParam0, var uParam1, int iParam2) //Position: 0xB526 / 46374
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_250(var uParam0, int iParam1, int iParam2) //Position: 0xB54A / 46410
{
	switch (Function_251())
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

int Function_251() //Position: 0xB5E6 / 46566
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

void Function_252(var uParam0, int iParam1, int iParam2) //Position: 0xB622 / 46626
{
	switch (Function_253(uParam0))
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

int Function_253(bool bParam0) //Position: 0xB6BA / 46778
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

var Function_254(var uParam0, int iParam1) //Position: 0xB805 / 47109
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

void Function_255(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB954 / 47444
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

var Function_256(int iParam0, int iParam1) //Position: 0xB9E7 / 47591
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_257(var uParam0, var uParam1) //Position: 0xBA01 / 47617
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

bool Function_258() //Position: 0xBA4F / 47695
{
	return Global_30920;
}

bool Function_259() //Position: 0xBA58 / 47704
{
	if (IS_EXITFLAG_SET())
	{
		Function_229(iLocal_183);
		Function_225(StackVal, StackVal, 4, &bLocal_205, &iLocal_183, Function_232(iLocal_183), Function_229(iLocal_183), 0);
		return 0;
	}
	Function_520(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_155, iLocal_183, iLocal_184, &bLocal_206, &bLocal_204, &bLocal_205);
	Function_519();
	if (iLocal_183 == 99 && iLocal_183 == 100)
	{
		Function_516(&uLocal_234, &uLocal_295, &uLocal_218, iLocal_333, 1.0f, iLocal_334);
		if (Function_496(&Local_387, &uLocal_347, &uLocal_524, bLocal_186, uLocal_346))
		{
			if (Function_494(&uLocal_524))
			{
				Function_229(iLocal_183);
				Function_225(StackVal, StackVal, 5, &bLocal_205, &iLocal_183, Function_232(iLocal_183), Function_229(iLocal_183), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_229(iLocal_183);
			Function_225(StackVal, StackVal, 1, &bLocal_205, &iLocal_183, Function_232(iLocal_183), Function_229(iLocal_183), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_229(iLocal_183);
			Function_225(StackVal, StackVal, 2, &bLocal_205, &iLocal_183, Function_232(iLocal_183), Function_229(iLocal_183), 0);
			return 1;
		}
		if (Function_493(2048))
		{
			Function_229(iLocal_183);
			Function_225(StackVal, StackVal, 3, &bLocal_205, &iLocal_183, Function_232(iLocal_183), Function_229(iLocal_183), 0);
			return 1;
		}
		Function_492();
	}
	switch (iLocal_183)
	{
		case 0x00000063:
			Function_463();
			break;
		
		case 0x00000000:
			Function_449();
			break;
		
		case 0x00000001:
			Function_417();
			break;
		
		case 0x00000002:
			Function_345();
			break;
		
		case 0x00000065:
			Function_262();
			break;
		
		case 0x00000064:
			if (Function_261(&bLocal_205))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_260(&iLocal_183, &iLocal_184, &iLocal_176))
			{
				return 0;
			}
			break;
	}
	if (bLocal_204)
	{
		Function_234(&bLocal_204, 8);
		return 0;
	}
	if (bLocal_205 && iLocal_183 == 100)
	{
		Function_229(iLocal_183);
		Function_225(StackVal, StackVal, 5, &bLocal_205, &iLocal_183, Function_232(iLocal_183), Function_229(iLocal_183), 0);
	}
	if (bLocal_206)
	{
		Function_220(&bLocal_206, 4);
		return 0;
	}
	return 1;
}

bool Function_260(var uParam0, var uParam1, int iParam2) //Position: 0xBBDF / 48095
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

bool Function_261(int iParam0) //Position: 0xBC1F / 48159
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_262() //Position: 0xBC32 / 48178
{
	if (Function_214(Global_30717[1]))
	{
		Function_344(&uLocal_281);
	}
	switch (iLocal_184)
	{
		case 0x00000000:
			Function_340(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_187, GET_ACTOR_MAX_HEALTH(bLocal_187));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_339();
				bLocal_185 = Global_30637[0];
				if (!Function_214(bLocal_185))
				{
					Function_338(&Local_155);
				}
				iLocal_217 = 0;
				Function_337(Global_34573, (*&Local_4 + 460)[0], 1, 1, 1);
				Function_216(&iLocal_190);
				iLocal_184 = 1;
			}
			else
			{
				Function_216(&iLocal_190);
				iLocal_184 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_214(bLocal_185) || bLocal_185 != 4294967295))
			{
				Function_216(&iLocal_190);
				iLocal_184 = 2;
			}
			break;
		
		case 0x00000002:
			Function_333();
			Function_331(&iLocal_207, 1, 0, 4294967295, 4294967295);
			Function_216(&iLocal_190);
			iLocal_184 = 3;
			break;
		
		case 0x00000003:
			if (Function_263("$/cutscene/Home02_END/Home02_END", &iLocal_176, &Local_155, &iLocal_183, 66367, 64512, 64475, 64330, 64070, 51441, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				TASK_CLEAR(bLocal_187);
				TASK_CLEAR(bLocal_189);
				Function_216(&iLocal_190);
				iLocal_184 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_204 = true;
			}
			break;
	}
	return;
}

bool Function_263(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xBDA9 / 48553
{
	if (!bParam15)
	{
		Function_276(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_275(iParam2) || iParam2->f_24 < 1))
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
				Function_216(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_274())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_273(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_216(iParam1 + 4);
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
					Function_273(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_270(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_270(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_268(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_273(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_216(iParam1 + 4);
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
						Function_267(1.0f);
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
						Function_265();
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
					Function_264(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_275(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_264(bool bParam0) //Position: 0xC3C8 / 50120
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

void Function_265() //Position: 0xC46D / 50285
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_266();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_266() //Position: 0xC4B2 / 50354
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_267(bool bParam0) //Position: 0xC4C4 / 50372
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

void Function_268(bool bParam0, bool bParam1) //Position: 0xC4E1 / 50401
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
			if ((bVar3 == Global_34573 && !Function_269(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_269(bool bParam0) //Position: 0xC561 / 50529
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

float Function_270(int iParam0) //Position: 0xC590 / 50576
{
	if (Function_272(iParam0))
	{
		if (Function_271(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_271(int iParam0) //Position: 0xC658 / 50776
{
	return Function_153(*iParam0, 2);
}

bool Function_272(int iParam0) //Position: 0xC665 / 50789
{
	return Function_153(*iParam0, 1);
}

int Function_273(bool bParam0) //Position: 0xC672 / 50802
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

bool Function_274() //Position: 0xC72A / 50986
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

bool Function_275(int iParam0) //Position: 0xC764 / 51044
{
	return iParam0->f_20;
}

void Function_276(var uParam0, int iParam1) //Position: 0xC76E / 51054
{
	Function_277(uParam0, iParam1, 0);
	return;
}

void Function_277(var uParam0, bool bParam1, bool bParam2) //Position: 0xC77C / 51068
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
			Function_278(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_278(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_278(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC8C8 / 51400
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

int Function_279() //Position: 0xC8F1 / 51441
{
	if (Function_307())
	{
		if (Function_280())
		{
			return 1;
		}
	}
	return 0;
}

bool Function_280() //Position: 0xC906 / 51462
{
	if (!Function_305())
	{
	}
	if (!Function_299(&bLocal_162))
	{
	}
	if (!Function_281())
	{
	}
	if ((Function_305() && Function_299(&bLocal_162)) && Function_281())
	{
		return 1;
	}
	return 0;
}

bool Function_281() //Position: 0xC936 / 51510
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_298(0))
		{
			return 0;
		}
		if (!Function_305())
		{
			return 0;
		}
		if (!Function_299(&bLocal_162))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_187))
		{
			bLocal_187 = Function_289(13, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_187, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_277))
		{
			bLocal_277 = Function_289(12, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_277, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_278))
		{
			bLocal_278 = Function_289(11, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_278, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_189))
		{
			bLocal_189 = Function_282(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_189, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_282(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xCA0A / 51722
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
	if (Global_3381 || Function_223(1))
	{
		Function_288(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_287())
		{
			return "";
		}
	}
	if (!Function_285())
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
		Function_231(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_231(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_231(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_231(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_284(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_284(StackVal, StackVal, vVar5, 0, 1, 1);
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

void Function_283(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xCD62 / 52578
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

var Function_284(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xCD9F / 52639
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

bool Function_285() //Position: 0xCE3A / 52794
{
	if (Function_286() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_286() //Position: 0xCE50 / 52816
{
	return Global_12976.f_152;
}

bool Function_287() //Position: 0xCE5B / 52827
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_288(var uParam0, bool bParam1, bool bParam2) //Position: 0xCE7B / 52859
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

bool Function_289(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0xCEA8 / 52904
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
		Function_211(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_297(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_292(StackVal, iParam7);
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
		Function_291(bVar1, 0, 0, 0, 0);
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
		Function_290(bVar1, 0);
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

void Function_290(bool bParam0, bool bParam1) //Position: 0xD392 / 54162
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_291(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xD3B2 / 54194
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

bool Function_292(int iParam0, bool bParam1) //Position: 0xD406 / 54278
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_296(iParam0))
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
						Function_293(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_293(bool bParam0, bool bParam1) //Position: 0xD486 / 54406
{
	Function_295(bParam0);
	Function_294(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_294(bool bParam0) //Position: 0xD4AC / 54444
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_295(bool bParam0) //Position: 0xD4D0 / 54480
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

bool Function_296(int iParam0) //Position: 0xD59F / 54687
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_297(int iParam0, bool bParam1) //Position: 0xD5B6 / 54710
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

bool Function_298(bool bParam0) //Position: 0xD649 / 54857
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

bool Function_299(bool bParam0) //Position: 0xD677 / 54903
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_304();
	iVar1 = 0;
	if (!Function_173(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_303(bParam0[iVar03], 8);
		}
		else if (Function_302())
		{
			iVar1 = 1;
			Function_303(bParam0[iVar03], 8);
		}
		Function_303(bParam0[iVar03], 16);
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
				Function_303(bParam0[iVar03], 1);
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
							Function_303(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_303(bParam0[iVar03], 2);
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
							Function_303(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_303(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_303(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_303(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_303(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_303(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_303(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_303(bParam0[iVar03], 2);
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
	Function_300();
	return 1;
}

void Function_300() //Position: 0xD9F2 / 55794
{
	if (!Function_301(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_301(int iParam0) //Position: 0xDA32 / 55858
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_302() //Position: 0xDA4E / 55886
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

void Function_303(var uParam0, int iParam1) //Position: 0xDA79 / 55929
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_304() //Position: 0xDA8A / 55946
{
	if (!Function_301(128))
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

bool Function_305() //Position: 0xDACC / 56012
{
	Function_306(&Local_4 + 4, 977, 2, 0);
	Function_306(&Local_4 + 4, 981, 2, 0);
	Function_306(&Local_4 + 4, 976, 2, 0);
	Function_306(&Local_4 + 4, 980, 2, 0);
	Function_306(&Local_4 + 4, 987, 2, 0);
	Function_306(&Local_4 + 4, 991, 2, 0);
	if (Function_299(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_306(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xDB2D / 56109
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
			Function_303(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_303(uParam0[iVar03], 8);
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

bool Function_307() //Position: 0xDBFD / 56317
{
	if (!Function_305())
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Function_308();
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_189))
	{
		if (Function_287())
		{
			bLocal_189 = Function_282(1, 1, 0, 0, 0, 0, 1, 0);
		}
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_189, 1))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_187))
	{
		bLocal_187 = Function_289(13, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	else if (!IS_ACTOR_VALID(bLocal_277))
	{
		bLocal_277 = Function_289(12, 0, 1, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_278))
	{
		bLocal_278 = Function_289(11, 0, 1, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!iLocal_228)
	{
		Function_337(Global_34573, (*&Local_4 + 336)[1], 1, 1, 1);
		Function_337(bLocal_187, (*&Local_4 + 336)[3], 1, 1, 1);
		Function_337(bLocal_189, (*&Local_4 + 336)[5], 1, 1, 1);
		Function_337(bLocal_277, (*&Local_4 + 336)[8], 1, 1, 1);
		Function_337(bLocal_278, (*&Local_4 + 336)[8], 1, 1, 1);
		iLocal_228 = 1;
		return 0;
	}
	return 1;
	return 0;
}

struct<8> Function_308() //Position: 0xDD0F / 56591
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("home02_ranch03_layout");
	Local_4.f_244 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 216)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 216)[0]);
	(*&Local_4 + 216)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 216)[1]);
	(*&Local_4 + 216)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 216)[2]);
	(*&Local_4 + 216)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 216)[3]);
	(*&Local_4 + 216)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -49,02504f, 116,1868f, 1416f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 7,079496f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 216)[4]);
	(*&Local_4 + 216)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVolHorse", 2, -39,44329f, 116,6032f, 1425,314f, 0.0f, -43,84933f, 0.0f, 10,58847f, 19,69661f, 22,44232f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 216)[5]);
	Local_4.f_288 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary01_set");
	(*&Local_4 + 248)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_01", 2, 151,523f, 128,9171f, 1387,222f, 0.0f, 76,27037f, 0.0f, 54,07419f, 65,53797f, 21,59639f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[0]);
	(*&Local_4 + 248)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_02", 2, 460,2025f, 93,85825f, 1334,691f, 0.0f, 117,273f, 0.0f, 150.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[1]);
	(*&Local_4 + 248)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_03", 2, 358,8476f, 101,3961f, 1260,301f, 0.0f, 71,62419f, 0.0f, 150.0f, 100.0f, 150.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[2]);
	(*&Local_4 + 248)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_04", 2, 62,281f, 110,4314f, 1312,246f, 0.0f, 130,836f, 0.0f, 150.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[3]);
	(*&Local_4 + 248)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_05", 2, -48,5784f, 110,4313f, 1513,941f, 0.0f, 161,6617f, 0.0f, 150.0f, 100.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[4]);
	(*&Local_4 + 248)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_06", 2, 16,01669f, 110,4313f, 1731,114f, -6,217152f, 248,1178f, 9,608168f, 150.0f, 100.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[5]);
	(*&Local_4 + 248)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_07", 2, 267,4984f, 117,5899f, 1724,876f, -171,4855f, 254,1804f, 175,6394f, 150.0f, 100.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[6]);
	(*&Local_4 + 248)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_08", 2, 464,2484f, 87,31177f, 1570,036f, -184,8926f, 188,2372f, 184,8152f, 150.0f, 154,947f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[7]);
	(*&Local_4 + 248)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_09", 2, 231,8983f, 101,3961f, 1233,009f, 0.0f, 86,63589f, 0.0f, 150.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_288, (*&Local_4 + 248)[8]);
	Local_4.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander01", 3, 172.0f, 129,5059f, 1380.0f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_296 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander01a", 3, 64,00003f, 124,8668f, 1560.0f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_300 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander01b", 3, 272.0f, 115,451f, 1488.0f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_304 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective00", 2, 55,99994f, 115,9075f, 1256.0f, 0.0f, -26,60107f, 0.0f, 15.0f, 30.0f, 15.0f);
	Local_4.f_308 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01", 3, 172.0f, 129,5059f, 1380.0f, 0.0f, 20.0f, 0.0f, 80.0f, 30.0f, 80.0f);
	Local_4.f_312 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_UncleStop", 3, 115,9999f, 129,9301f, 1420f, 0.0f, 20.0f, 0.0f, 25,90414f, 9,714052f, 25,90414f);
	Local_4.f_316 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02", 2, -71,85542f, 116,8612f, 1408f, 0.0f, -26,60107f, 0.0f, 15.0f, 30.0f, 15.0f);
	Local_4.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HerdFailCheck", 3, 193,4656f, 121,3107f, 1510,196f, 0.0f, 15,73308f, 0.0f, 258,9291f, 100.0f, 256,7533f);
	Local_4.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_4, "nwanderVol", 2, 200,9715f, 115,6733f, 1489,289f, 0.0f, -26,60107f, 0.0f, 339,6824f, 137,696f, 335,1709f);
	Local_4.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_4, "UncleAvoidWallsVol", 2, 151,3905f, 129,0457f, 1385,097f, 0.0f, -13,2767f, 0.0f, 15.0f, 54,47433f, 45,32737f);
	Local_4.f_332 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 336)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -18,17371f, 125,9829f, 1444,402f, 0.0f, -215,4216f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[0], Local_4.f_332);
	(*&Local_4 + 336)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -18,17371f, 125,9829f, 1444,402f, 0.0f, -231,9698f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[1], Local_4.f_332);
	(*&Local_4 + 336)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -17,91529f, 126,8327f, 1447,248f, 0.0f, 12,7515f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[2], Local_4.f_332);
	(*&Local_4 + 336)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -17,91529f, 126,8327f, 1447,248f, 0,7706428f, 97,48432f, 3,861846f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[3], Local_4.f_332);
	(*&Local_4 + 336)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -60f, 116,1573f, 1440f, 0.0f, -278,9565f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[4], Local_4.f_332);
	(*&Local_4 + 336)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd01", -60f, 116,1573f, 1440f, 0.0f, -287,6256f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[5], Local_4.f_332);
	(*&Local_4 + 336)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart01", -57,26038f, 116,321f, 1441,26f, 0.0f, 110,6265f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[6], Local_4.f_332);
	(*&Local_4 + 336)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEnd01", -57,26038f, 116,321f, 1441,26f, 0.0f, 110,6265f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[7], Local_4.f_332);
	(*&Local_4 + 336)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "FamStart", -68.0f, 116,8612f, 1402,723f, 0.0f, -215,4216f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 336)[8], Local_4.f_332);
	Local_4.f_376 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 380)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", 168,0003f, 128,5019f, 1404f, 0.0f, -29,72478f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 380)[0], Local_4.f_376);
	(*&Local_4 + 380)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", 168,0003f, 128,5019f, 1404f, 0.0f, -29,72478f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 380)[1], Local_4.f_376);
	(*&Local_4 + 380)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", 164,0003f, 128,5019f, 1404f, 0.0f, -74,75838f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 380)[2], Local_4.f_376);
	(*&Local_4 + 380)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", 164,0003f, 128,5019f, 1404f, 0.0f, -74,75838f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 380)[3], Local_4.f_376);
	(*&Local_4 + 380)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEnd02", 164,0003f, 128,5019f, 1408f, 0.0f, 360,8972f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 380)[4], Local_4.f_376);
	(*&Local_4 + 380)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart02", 164,0003f, 128,5019f, 1408f, 0.0f, 360,8972f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 380)[5], Local_4.f_376);
	(*&Local_4 + 380)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd02", 160,0002f, 128,8044f, 1400f, 0.0f, -9,419387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 380)[6], Local_4.f_376);
	(*&Local_4 + 380)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", 160,0002f, 128,8044f, 1400f, 0.0f, -9,419387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 380)[7], Local_4.f_376);
	Local_4.f_416 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 420)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", 164,3139f, 128,2344f, 1414,482f, 0.0f, 90,11026f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[0], Local_4.f_416);
	(*&Local_4 + 420)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", 164,3139f, 128,2344f, 1414,482f, 0.0f, 90,11026f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[1], Local_4.f_416);
	(*&Local_4 + 420)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", 159,9999f, 128,5103f, 1408.0f, 0.0f, -209,9831f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[2], Local_4.f_416);
	(*&Local_4 + 420)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", 159,9999f, 128,5103f, 1408.0f, 0.0f, -209,9831f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[3], Local_4.f_416);
	(*&Local_4 + 420)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEnd03", 159,9999f, 128,5103f, 1408.0f, 0.0f, 163,2988f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[4], Local_4.f_416);
	(*&Local_4 + 420)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart03", 159,9999f, 128,5103f, 1408.0f, 0.0f, 163,2988f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[5], Local_4.f_416);
	(*&Local_4 + 420)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd03", 164,3139f, 128,2344f, 1414,482f, 0.0f, -274,4908f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[6], Local_4.f_416);
	(*&Local_4 + 420)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", 164,3139f, 128,2344f, 1414,482f, 0.0f, -262,4081f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 420)[7], Local_4.f_416);
	Local_4.f_456 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 460)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -72.0f, 116,8612f, 1404f, 0.0f, 159,7218f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[0], Local_4.f_456);
	(*&Local_4 + 460)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -48f, 116,0577f, 1413,798f, 0.0f, -208,9285f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[1], Local_4.f_456);
	(*&Local_4 + 460)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -72.0f, 116,8612f, 1408f, 0.0f, 41,21596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[2], Local_4.f_456);
	(*&Local_4 + 460)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -41,88215f, 116,5301f, 1413,882f, 0.0f, -61,04815f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[3], Local_4.f_456);
	(*&Local_4 + 460)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEndLast", -49,08193f, 116,1761f, 1417,082f, 0.0f, 337,884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[4], Local_4.f_456);
	(*&Local_4 + 460)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStartLast", -48,2616f, 116,1975f, 1413,931f, 0.0f, 145,851f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[5], Local_4.f_456);
	(*&Local_4 + 460)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEndLast", -48f, 116,0619f, 1413,864f, 0.0f, -560,649f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[6], Local_4.f_456);
	(*&Local_4 + 460)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -49,09972f, 116,1758f, 1417,1f, 0.0f, -383,2449f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 460)[7], Local_4.f_456);
	*(&Local_4 + 496) = { 64,00003f, 124,8668f, 1560.0f };
	*(&Local_4 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_520 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_herd01a", 64,00003f, 124,8668f, 1560.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 524) = { 272.0f, 115,451f, 1488.0f };
	*(&Local_4 + 524 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_548 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_herd01b", 272.0f, 115,451f, 1488.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 552) = { 172.0f, 129,5059f, 1380.0f };
	*(&Local_4 + 552 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_576 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_herd01", 172.0f, 129,5059f, 1380.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_580 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02", -44f, 116,4222f, 1420f, 0.0f, 0.0f, 0.0f);
	Local_4.f_584 = CREATE_POINT_IN_LAYOUT(Local_4, "point_sGoal_teleport", -39,12149f, 116,5989f, 1428f, 0.0f, 0.0f, 0.0f);
	Local_4.f_588 = CREATE_POINT_IN_LAYOUT(Local_4, "HerdStartPos", 190,1392f, 128,0396f, 1354,139f, 0.0f, 0.0f, 0.0f);
}

void 0D¾zÃD²BìnrD½Æ½ÃiIBìnD½?Ã?BìnD¼MÎÃCBìlD»òÃ 
(Bìi¡DºèLÂø+aBìiòDºYÛÂð8BìjwD¹Í%Âè
¯BìjÀD¹?ÿÂßþâBìkÂD(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74) //Position: 0xF8CA / 63690
{
	strcpy((StackVal - Vector(StackVal, StackVal, StackVal)) - 5017, StackVal, 68);
	(194 - 5023)->f_47002 = 141;
	return;
	PatchTrapB();
	PatchTrapA();
	(StackVal - 5029)->f_46862 = StackVal;
}

int Function_310() //Position: 0xFA46 / 64070
{
	Function_311(1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_311(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xFA5A / 64090
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
		Function_235();
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
	Function_264(bParam9);
}

int Function_312() //Position: 0xFB4A / 64330
{
	Function_337(Global_34573, (*&Local_4 + 460)[1], 0, 0, 0);
	Function_337(bLocal_189, (*&Local_4 + 460)[6], 1, 1, 1);
	Function_337(bLocal_188, (*&Local_4 + 460)[4], 1, 1, 1);
	Function_337(bLocal_187, (*&Local_4 + 460)[3], 1, 1, 1);
	DELETE_WEAPON_FROM_ACTOR(bLocal_187, 21);
	TASK_CLEAR(bLocal_187);
	TASK_STAND_STILL(bLocal_188, 4.0f, 0, 0);
	TASK_CLEAR(Global_34573);
	ACTOR_MOUNT_ACTOR(Global_34573, bLocal_189);
	AI_ACTOR_FORCE_SPEED(bLocal_187, true);
	ACTOR_POP_NEXT_GAIT(bLocal_187, 1, false);
	GET_OBJECT_POSITION(Local_4.f_584, &vLocal_264);
	ENABLE_GAME_CAMERA_FOCUS(vLocal_264, -1.0f, 0, 0, 1, 0);
	return 1;
}

int Function_313() //Position: 0xFBDB / 64475
{
	if (!Function_305())
	{
	}
	if (!Function_299(&bLocal_162))
	{
	}
	if (Function_305() && Function_299(&bLocal_162))
	{
		return 1;
	}
	return 0;
}

int Function_314() //Position: 0xFC00 / 64512
{
	Function_219(&bLocal_286);
	DELETE_WEAPON_FROM_ACTOR(bLocal_187, 21);
	if (SQUAD_IS_VALID(bLocal_290))
	{
		Function_324(bLocal_290);
		GET_OBJECT_POSITION(Local_4.f_584, &vLocal_264);
		GET_OBJECT_ORIENTATION(Local_4.f_584, &vLocal_267);
		Function_318(StackVal, StackVal, StackVal, StackVal, bLocal_290, vLocal_264, vLocal_267, 2, 2.0f, 3.0f, 0, 0);
		Function_317(bLocal_290);
		SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_290, false, 1, 4294967295);
		TASK_WANDER_IN_VOLUME(false, (*&Local_4 + 216)[5], -1.0f);
		Function_316(bLocal_290, (*&Local_4 + 216)[5], 1, 1);
	}
	else
	{
		Function_315();
		bLocal_290 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sGoal"));
		Function_324(bLocal_290);
		Function_317(bLocal_290);
		GET_OBJECT_POSITION(Local_4.f_584, &vLocal_264);
		GET_OBJECT_ORIENTATION(Local_4.f_584, &vLocal_267);
		Function_318(StackVal, StackVal, StackVal, StackVal, bLocal_290, vLocal_264, vLocal_267, 2, 2.0f, 3.0f, 0, 0);
		SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_290, false, 1, 4294967295);
		TASK_WANDER_IN_VOLUME(false, (*&Local_4 + 216)[5], -1.0f);
		Function_316(bLocal_290, (*&Local_4 + 216)[5], 1, 1);
	}
	Function_337(bLocal_277, (*&Local_4 + 336)[8], 1, 1, 1);
	Function_337(bLocal_278, (*&Local_4 + 336)[8], 1, 1, 1);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse01", bLocal_189);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse02", bLocal_188);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 216)[4]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 216)[4]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 216)[4], 15);
	iLocal_228 = 1;
	return 1;
}

void Function_315() //Position: 0xFD77 / 64887
{
	Local_4.f_212 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sGoal"));
	(*&Local_4 + 184)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_GOAL_01", 976, 171,9999f, 128,3002f, 1400.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 184)[02], Local_4.f_212);
	SET_ACTOR_FACTION((*&Local_4 + 184)[02], 2);
	(*&Local_4 + 184)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_GOAL_02", 977, 172.0f, 127,498f, 1404.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 184)[12], Local_4.f_212);
	(*&Local_4 + 184)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_GOAL_03", 980, 167,9999f, 128,502f, 1400.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 184)[22], Local_4.f_212);
	return;
}

void Function_316(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xFE68 / 65128
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

void Function_317(bool bParam0) //Position: 0xFEB7 / 65207
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

void Function_318(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8, float fParam9, bool bParam10, float fParam11) //Position: 0xFEE9 / 65257
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	bool bVar15;
	var uVar16;
	
	uVar16 = vParam4.y;
	vVar8 = { 0.0f, 1.0f, 0.0f };
	UNK_0x44986367(&vParam4, vParam4.y);
	VCROSS(&vVar8, &vParam4, &vVar5);
	VSCALE(&vVar5, bParam8);
	VSCALE(&vParam4, bParam8);
	vVar2 = { StackVal, StackVal, vParam1 };
	vVar2.f_4 = (vVar2.y + fParam9);
	bVar0 = false;
	bVar15 = false;
	bVar14 = false;
	while (bVar14 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar14);
		if (IS_ACTOR_VALID(bVar1))
		{
			if ((bParam10 && !Function_177(bVar1, 0x3f800000, 0x42960000, 1, 1, 0)) || !bParam10)
			{
				if (!Function_321(bVar1, Global_34573, fParam11))
				{
					if (bVar0 == iParam7)
					{
						bVar0 = false;
						bVar15++;
						vVar2 = { StackVal, StackVal, vParam1 };
						vVar11 = { StackVal, StackVal, vParam4 };
						VSCALE(&vVar11, TO_FLOAT(bVar15));
						vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar11, vVar2, StackVal) };
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Hit max cols, starting a new row");
						PRINTNL();
					}
					else
					{
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - current col is ");
						PRINTINT(bVar0);
						PRINTNL();
					}
					Function_320(StackVal, StackVal, bVar1, vVar2, uVar16, 1, 1, 1);
					PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Teleporting  ");
					PRINTSTRING(GET_ACTOR_NAME(bVar1));
					PRINTSTRING(" with index ");
					PRINTINT(bVar14);
					PRINTSTRING(" to ");
					PRINTVECTOR(vVar2);
					PRINTNL();
					if (fParam11 < 0.0f)
					{
						PRINTSTRING("He was ");
						PRINTFLOAT(Function_319(Global_34573, bVar1));
						PRINTSTRING("m away");
						PRINTNL();
					}
					bVar0++;
					vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar5, vVar2, StackVal) };
				}
			}
		}
		bVar14++;
	}
}

var Function_319(bool bParam0, bool bParam1) //Position: 0x100F4 / 65780
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

void Function_320(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x101E5 / 66021
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

bool Function_321(bool bParam0, var uParam1, float fParam2) //Position: 0x1029E / 66206
{
	float fVar0;
	
	fVar0 = Function_322(bParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_322(bool bParam0, bool bParam1) //Position: 0x102BB / 66235
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_323(&uVar0, &uVar3);
	return iVar6;
}

var Function_323(var uParam0, int iParam1) //Position: 0x102DA / 66266
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_324(bool bParam0) //Position: 0x102F8 / 66296
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

int Function_325() //Position: 0x1033F / 66367
{
	Function_340(0);
	iLocal_228 = 0;
	Function_328(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	bLocal_189 = GET_MOUNT(Global_34573);
	Function_326(StackVal, StackVal, bLocal_154, *(&Global_3422[5640] + 52), &iLocal_176 + 20, 0, 0, 0, 0, 1, 1);
	Function_331(&iLocal_207, 0, 0, 4294967295, 4294967295);
	return 1;
}

void Function_326(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x10387 / 66439
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
				Function_327(bVar1, bParam0);
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

void Function_327(bool bParam0, bool bParam1) //Position: 0x105F5 / 67061
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

void Function_328(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1066A / 67178
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
	Function_235();
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
				Function_330(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_330(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_329()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_329()));
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
	if (Function_301(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_301(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_329() //Position: 0x10913 / 67859
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

vector3 Function_330(bool bParam0) //Position: 0x10992 / 67986
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_331(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x109A3 / 68003
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_332(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_332(int iParam0) //Position: 0x109C7 / 68039
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

void Function_333() //Position: 0x10F04 / 69380
{
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_187);
	if (!SQUAD_IS_VALID(Local_4.f_92))
	{
		Function_336();
		if (SQUAD_IS_VALID(Local_4.f_92))
		{
			Function_335(Local_4.f_92, 0);
			Function_334(Local_4.f_92, 3);
			if (IS_ACTOR_VALID((*&Local_4 + 80)[02]))
			{
				Function_337((*&Local_4 + 80)[02], (*&Local_4 + 460)[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_92, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			bLocal_188 = (*&Local_4 + 80)[02];
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_188, 0);
		}
	}
	if (Function_214(Global_30717[1]))
	{
		if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 94)))
		{
			if (IS_DOOR_OPENED(Function_213(Global_30717[1], "beechersHope", "stable01", 94)) || IS_DOOR_OPENING(Function_213(Global_30717[1], "beechersHope", "stable01", 94)))
			{
				CLOSE_DOOR_FAST(Function_213(Global_30717[1], "beechersHope", "stable01", 94));
				SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 94), 1);
			}
		}
		if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 95)))
		{
			if (IS_DOOR_OPENED(Function_213(Global_30717[1], "beechersHope", "stable01", 95)) || IS_DOOR_OPENING(Function_213(Global_30717[1], "beechersHope", "stable01", 95)))
			{
				CLOSE_DOOR_FAST(Function_213(Global_30717[1], "beechersHope", "stable01", 95));
				SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 95), 1);
			}
		}
		if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 96)))
		{
			if (IS_DOOR_OPENED(Function_213(Global_30717[1], "beechersHope", "stable01", 96)) || IS_DOOR_OPENING(Function_213(Global_30717[1], "beechersHope", "stable01", 96)))
			{
				CLOSE_DOOR_FAST(Function_213(Global_30717[1], "beechersHope", "stable01", 96));
				SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 96), 1);
			}
		}
		if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 97)))
		{
			if (IS_DOOR_OPENED(Function_213(Global_30717[1], "beechersHope", "stable01", 97)) || IS_DOOR_OPENING(Function_213(Global_30717[1], "beechersHope", "stable01", 97)))
			{
				CLOSE_DOOR_FAST(Function_213(Global_30717[1], "beechersHope", "stable01", 97));
				SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 97), 1);
			}
		}
	}
	return;
}

void Function_334(bool bParam0, bool bParam1) //Position: 0x112CC / 70348
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

void Function_335(bool bParam0, bool bParam1) //Position: 0x1130E / 70414
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

void Function_336() //Position: 0x1134F / 70479
{
	Local_4.f_92 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse01"));
	(*&Local_4 + 80)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_01", 977, -74,45387f, 116,861f, 1410,802f, 0.0f, 80,54409f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 80)[02], Local_4.f_92);
	return;
}

void Function_337(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x113AC / 70572
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

void Function_338(int iParam0) //Position: 0x114B3 / 70835
{
	if (!Function_275(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_185(1, 0, 1);
		}
	}
	return;
}

void Function_339() //Position: 0x114CE / 70862
{
	return;
}

void Function_340(bool bParam0) //Position: 0x114D4 / 70868
{
	Function_341(0, 0x40400000);
	Function_199();
	Function_198();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_341(bool bParam0, float fParam1) //Position: 0x11508 / 70920
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
	Function_343();
	Function_342();
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

void Function_342() //Position: 0x11606 / 71174
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_343() //Position: 0x11638 / 71224
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

void Function_344(var uParam0) //Position: 0x11735 / 71477
{
	switch (iLocal_217)
	{
		case 0x00000000:
			if (((IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 94)) && IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 95))) && IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 96))) && IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 97)))
			{
				iLocal_217++;
			}
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID((*uParam0)[0]))
			{
				(*uParam0)[0] = Function_213(Global_30717[1], "beechersHope", "stable01", 94);
				if (IS_DOOR_VALID((*uParam0)[0]))
				{
					Function_154((*uParam0)[0], 0);
					OPEN_DOOR_DIRECTION((*uParam0)[0], true);
					SET_DOOR_AUTO_CLOSE((*uParam0)[0], 0);
				}
			}
			else
			{
				Function_154((*uParam0)[0], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[0], true);
				SET_DOOR_AUTO_CLOSE((*uParam0)[0], 0);
			}
			if (!IS_DOOR_VALID((*uParam0)[1]))
			{
				(*uParam0)[1] = Function_213(Global_30717[1], "beechersHope", "stable01", 95);
				if (IS_DOOR_VALID((*uParam0)[1]))
				{
					Function_154((*uParam0)[1], 0);
					OPEN_DOOR_DIRECTION((*uParam0)[1], false);
					SET_DOOR_AUTO_CLOSE((*uParam0)[1], 0);
				}
			}
			else
			{
				Function_154((*uParam0)[1], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[1], false);
				SET_DOOR_AUTO_CLOSE((*uParam0)[1], 0);
			}
			if (!IS_DOOR_VALID((*uParam0)[2]))
			{
				(*uParam0)[2] = Function_213(Global_30717[1], "beechersHope", "stable01", 96);
				if (IS_DOOR_VALID((*uParam0)[2]))
				{
					Function_154((*uParam0)[2], 0);
					OPEN_DOOR_DIRECTION((*uParam0)[2], false);
					SET_DOOR_AUTO_CLOSE((*uParam0)[2], 0);
				}
			}
			else
			{
				Function_154((*uParam0)[2], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[2], false);
				SET_DOOR_AUTO_CLOSE((*uParam0)[2], 0);
			}
			if (!IS_DOOR_VALID((*uParam0)[3]))
			{
				(*uParam0)[3] = Function_213(Global_30717[1], "beechersHope", "stable01", 97);
				if (IS_DOOR_VALID((*uParam0)[3]))
				{
					Function_154((*uParam0)[3], 0);
					OPEN_DOOR_DIRECTION((*uParam0)[3], true);
					SET_DOOR_AUTO_CLOSE((*uParam0)[3], 0);
				}
			}
			else
			{
				Function_154((*uParam0)[3], 0);
				OPEN_DOOR_DIRECTION((*uParam0)[3], true);
				SET_DOOR_AUTO_CLOSE((*uParam0)[3], 0);
			}
			iLocal_217++;
			break;
		
		case 0x00000002:
			iLocal_217++;
			break;
	}
	return;
}

void Function_345() //Position: 0x11A09 / 72201
{
	if (Function_214(Global_30717[1]))
	{
		Function_344(&uLocal_281);
	}
	if (iLocal_184 > 6)
	{
		GET_OBJECT_POSITION(bLocal_187, &vLocal_270);
		STREAMING_LOAD_BOUNDS(vLocal_270, 50.0f, 1);
	}
	if (iLocal_184 >= 7)
	{
		Function_413();
		if (SQUAD_IS_VALID(Local_4.f_180))
		{
			Function_411();
		}
		Function_410();
		GET_OBJECT_POSITION(Local_4.f_580, &vLocal_270);
		Function_406(StackVal, StackVal, "$/cutscene/HOME02_END/HOME02_END", &uLocal_343, vLocal_270, 87347, 0, 100.0f, 200.0f, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_184)
	{
		case 0x00000000:
			Function_340(0);
			SET_ACTOR_HEALTH(bLocal_187, GET_ACTOR_MAX_HEALTH(bLocal_187));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_199[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_339();
				bLocal_185 = Global_30637[0];
				if (!Function_214(bLocal_185))
				{
					Function_338(&Local_155);
				}
				Function_337(Global_34573, (*&Local_4 + 420)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_187))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_187);
					CLEAR_ACTOR_MAX_SPEED(bLocal_187);
					TASK_STAND_STILL(bLocal_187, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_187, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_187, true);
					MEMORY_PREFER_RIDING(bLocal_187, false);
				}
				if (IS_ACTOR_VALID(bLocal_189))
				{
					TASK_STAND_STILL(bLocal_189, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_189, true);
				}
				Function_216(&iLocal_190);
				iLocal_184 = 1;
			}
			else
			{
				Function_216(&iLocal_190);
				iLocal_184 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_214(bLocal_185) || bLocal_185 != 4294967295))
			{
				Function_216(&iLocal_190);
				iLocal_184 = 2;
			}
			break;
		
		case 0x00000002:
			Function_230(iLocal_183);
			Function_400(StackVal, StackVal, Function_230(iLocal_183), iLocal_183, Global_30637[0], Function_233(iLocal_183), 2);
			Function_331(&iLocal_207, 3, 0, 4294967295, 4294967295);
			if (HUD_IS_FADED())
			{
				Function_392();
				if (IS_ACTOR_VALID(bLocal_187))
				{
					Function_211(13, 0, 1);
					MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_187);
					TASK_STAND_STILL(bLocal_187, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_187, true);
				}
			}
			Function_390();
			Function_216(&iLocal_190);
			iLocal_184 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!HUD_IS_FADING())
			{
				if (SQUAD_GET_SIZE(bLocal_290) > 3)
				{
					if (!iLocal_344)
					{
						if (IS_ACTOR_VALID(bLocal_187))
						{
							if (IS_OBJECT_VALID(bLocal_216))
							{
								DESTROY_OBJECT(bLocal_216);
							}
							GET_PATH_POINT(Local_4.f_596, Function_389(bLocal_187, Local_4.f_596), &vLocal_264);
							Function_75();
							bLocal_216 = CREATE_POINT_IN_LAYOUT(bLocal_154, "PathPointObject", vLocal_264, Function_75());
							bLocal_208 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_OBJECT(false, bLocal_216, 5.0f, 4, 1, 0);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_596, 4, 0, 0, 0, false);
							TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_187, bLocal_208);
							TASK_SEQUENCE_RELEASE(bLocal_208, 1);
							TASK_PRIORITY_SET(bLocal_187, true);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_187, true);
							iLocal_344 = 1;
						}
					}
				}
				vLocal_261 = { 0.0f, 0.0f, 7.0f };
				if (IS_ACTOR_VALID(bLocal_189))
				{
					TASK_CLEAR(bLocal_189);
					bLocal_208 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(false, Global_34573, &vLocal_261, 0, 0, 0, 0, 0, 0, 1);
					TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_189, bLocal_208);
					TASK_SEQUENCE_RELEASE(bLocal_208, 1);
					TASK_PRIORITY_SET(bLocal_189, true);
				}
				Function_387();
				bLocal_339 = Function_386(Global_34573, Local_4.f_580);
				bLocal_339 = (bLocal_339 + 50.0f);
				bLocal_340 = (bLocal_339 + 100.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (ACTORS_IN_RANGE(Global_34573, bLocal_187, 30.0f))
				{
					Function_385();
				}
				Function_384("home02_ranch03_obj05");
				Function_216(&iLocal_190);
				iLocal_217 = 0;
				iLocal_184 = 8;
			}
			break;
		
		case 0x00000008:
			Function_367();
			Function_361();
			if (Function_214(Global_30717[1]))
			{
				if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 94)))
				{
					if (IS_DOOR_CLOSED(Function_213(Global_30717[1], "beechersHope", "stable01", 94)))
					{
						Function_154(Function_213(Global_30717[1], "beechersHope", "stable01", 94), 0);
						OPEN_DOOR_DIRECTION(Function_213(Global_30717[1], "beechersHope", "stable01", 94), true);
						SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 94), 0);
					}
				}
				if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 95)))
				{
					if (IS_DOOR_CLOSED(Function_213(Global_30717[1], "beechersHope", "stable01", 95)))
					{
						Function_154(Function_213(Global_30717[1], "beechersHope", "stable01", 95), 0);
						OPEN_DOOR_DIRECTION(Function_213(Global_30717[1], "beechersHope", "stable01", 95), true);
						SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 95), 0);
					}
				}
				if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 96)))
				{
					if (IS_DOOR_CLOSED(Function_213(Global_30717[1], "beechersHope", "stable01", 96)))
					{
						Function_154(Function_213(Global_30717[1], "beechersHope", "stable01", 96), 0);
						OPEN_DOOR_DIRECTION(Function_213(Global_30717[1], "beechersHope", "stable01", 96), true);
						SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 96), 0);
					}
				}
				if (IS_DOOR_VALID(Function_213(Global_30717[1], "beechersHope", "stable01", 97)))
				{
					if (IS_DOOR_CLOSED(Function_213(Global_30717[1], "beechersHope", "stable01", 97)))
					{
						Function_154(Function_213(Global_30717[1], "beechersHope", "stable01", 97), 0);
						OPEN_DOOR_DIRECTION(Function_213(Global_30717[1], "beechersHope", "stable01", 97), true);
						SET_DOOR_AUTO_CLOSE(Function_213(Global_30717[1], "beechersHope", "stable01", 97), 0);
					}
				}
			}
			if (!IS_ACTOR_RIDING(bLocal_187))
			{
				if (GET_TASK_STATUS(bLocal_187, 11) != 1)
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_187);
					TASK_MOUNT(bLocal_187, bLocal_188, 0, 1, 2, 2147483647);
					iLocal_345 = 0;
					iLocal_344 = 0;
				}
			}
			else if (!SQUAD_GET_SIZE(bLocal_290) > 3)
			{
				if (Function_386(bLocal_187, Local_4.f_580) > 40.0f)
				{
					if (!iLocal_345)
					{
						TASK_OVERRIDE_SET_MOVETYPE(bLocal_187, 2);
						bLocal_208 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_OBJECT(false, Local_4.f_580, 1, 0, 1);
						TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_187, bLocal_208);
						TASK_SEQUENCE_RELEASE(bLocal_208, 1);
						bLocal_219 = false;
						while (bLocal_219 <= SQUAD_GET_SIZE(bLocal_290))
						{
							bLocal_279 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_290, bLocal_219);
							TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_279, bLocal_187, TO_FLOAT(bLocal_219 * 2 + 1), 2);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_279, false);
							bLocal_219++;
						}
						iLocal_345 = 1;
					}
				}
				else if (!iLocal_344)
				{
					if (IS_ACTOR_VALID(bLocal_187))
					{
						if (IS_OBJECT_VALID(bLocal_216))
						{
							DESTROY_OBJECT(bLocal_216);
						}
						GET_PATH_POINT(Local_4.f_596, Function_389(bLocal_187, Local_4.f_596), &vLocal_264);
						Function_75();
						bLocal_216 = CREATE_POINT_IN_LAYOUT(bLocal_154, "PathPointObject", vLocal_264, Function_75());
						bLocal_208 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(false, bLocal_216, 5.0f, 4, 1, 0);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_596, 4, 0, 0, 0, false);
						TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_187, bLocal_208);
						TASK_SEQUENCE_RELEASE(bLocal_208, 1);
						TASK_PRIORITY_SET(bLocal_187, true);
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_187, true);
						iLocal_344 = 1;
					}
				}
			}
			Function_350(&fLocal_193, bLocal_339, bLocal_340, Local_4.f_580, "h2_r3_BeechersReturn", "Uncle_abandoned", &bLocal_205, 0, 0, 0, 4294967295, 1);
			if (IS_OBJECT_VALID(bLocal_214))
			{
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					Function_349();
					Function_235();
					Function_384("Horse_return");
					Function_216(&iLocal_190);
					break;
				}
				if (GATEWAY_UPDATE(bLocal_214))
				{
					DESTROY_OBJECT(bLocal_214);
					Function_346();
					Function_235();
					Function_216(&iLocal_190);
					TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					iLocal_184 = 105;
					break;
				}
			}
			else if (IS_ACTOR_RIDING(Global_34573))
			{
				Function_384("home02_ranch03_obj05");
				Function_216(&iLocal_190);
				Function_387();
			}
			break;
		
		case 0x00000069:
			if (Function_270(&iLocal_190) <= 0,5f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_187);
				Function_216(&iLocal_190);
				iLocal_184 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_199[2] = 1;
				Function_216(&iLocal_190);
				iLocal_183 = 101;
				iLocal_184 = 0;
			}
			break;
	}
	return;
}

void Function_346() //Position: 0x12362 / 74594
{
	Function_211(13, 0, 1);
	if (IS_BLIP_VALID(bLocal_211))
	{
		REMOVE_BLIP(bLocal_211);
	}
	if (IS_OBJECT_VALID(bLocal_214))
	{
		Function_348(bLocal_214);
		Function_204();
	}
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		Function_347(Local_4.f_180);
	}
	if (SQUAD_IS_VALID(bLocal_291))
	{
		Function_347(bLocal_291);
	}
	if (IS_BLIP_VALID(bLocal_213))
	{
		REMOVE_BLIP(bLocal_213);
	}
	return;
}

void Function_347(bool bParam0) //Position: 0x123B9 / 74681
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

void Function_348(bool bParam0) //Position: 0x12406 / 74758
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

void Function_349() //Position: 0x12490 / 74896
{
	Function_211(13, 0, 1);
	if (IS_BLIP_VALID(bLocal_211))
	{
		REMOVE_BLIP(bLocal_211);
	}
	if (IS_OBJECT_VALID(bLocal_214))
	{
		Function_348(bLocal_214);
		Function_204();
	}
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		Function_347(Local_4.f_180);
	}
	if (SQUAD_IS_VALID(bLocal_291))
	{
		Function_347(bLocal_291);
	}
	if (IS_ACTOR_VALID(bLocal_189))
	{
		if (!IS_BLIP_VALID(bLocal_213))
		{
			bLocal_213 = ADD_BLIP_FOR_ACTOR(bLocal_189, 334, 0, 2, 0);
			if (IS_BLIP_VALID(bLocal_213))
			{
			}
		}
	}
	return;
}

bool Function_350(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x12503 / 75011
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_358(Global_34573, bParam3, fParam2))
	{
		Function_224(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_358(Global_34573, bParam3, fParam1))
	{
		if (!Function_357(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_356(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_355(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_354(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_354(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_357(1))
	{
		Function_353(1);
		if (!Function_352())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_351();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_354(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_354(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_351() //Position: 0x12671 / 75377
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

bool Function_352() //Position: 0x1269C / 75420
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

void Function_353(bool bParam0) //Position: 0x126E0 / 75488
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

void Function_354(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x12743 / 75587
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

void Function_355(bool bParam0) //Position: 0x127E4 / 75748
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

void Function_356(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x12847 / 75847
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

bool Function_357(bool bParam0) //Position: 0x1289A / 75930
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

bool Function_358(bool bParam0, bool bParam1, float fParam2) //Position: 0x128E1 / 76001
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_360(bParam0);
			Function_359(bParam1);
			if (VDIST(Function_360(bParam0), Function_359(bParam1)) >= fParam2)
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

vector3 Function_359(bool bParam0) //Position: 0x129FB / 76283
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

vector3 Function_360(bool bParam0) //Position: 0x12A67 / 76391
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

void Function_361() //Position: 0x12AD1 / 76497
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_272(&iLocal_243))
			{
				Function_366(&iLocal_243);
			}
		}
		else
		{
			if (iLocal_226)
			{
				iLocal_226 = 0;
			}
			if (!Function_272(&iLocal_243))
			{
				Function_216(&iLocal_243);
			}
			if (Function_270(&iLocal_243) < 4.0f)
			{
				if (!Function_272(&iLocal_196))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_187, 30.0f))
					{
						if (!HUD_IS_SHOWING_OBJECTIVE())
						{
							switch (iLocal_220)
							{
								case 0x00000000:
								case 0x00000001:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_226 = 1;
										Function_365();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_220 = 2;
										}
									}
									break;
								
								case 0x00000002:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_226 = 1;
										Function_362();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_220 = 3;
										}
									}
									break;
								
								case 0x00000063:
									break;
								
								default:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_220 = 99;
										}
									}
									break;
								}
							}
						}
					}
				}
			}
	}
	return;
}

void Function_362() //Position: 0x12B9E / 76702
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v2_AA1", "Home02_r3_BakRanchBant_v2_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v2_AA2", "Home02_r3_BakRanchBant_v2_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v2_AB", "Home02_r3_BakRanchBant_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v2_AC", "Home02_r3_BakRanchBant_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v2_AD", "Home02_r3_BakRanchBant_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v2_AE", "Home02_r3_BakRanchBant_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v2_AF", "Home02_r3_BakRanchBant_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v2_AG", "Home02_r3_BakRanchBant_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v2_AH", "Home02_r3_BakRanchBant_v2_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v2_AI", "Home02_r3_BakRanchBant_v2_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v2_AJ", "Home02_r3_BakRanchBant_v2_AJ", true, 1, 0, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_363(int iParam0) //Position: 0x12EC9 / 77513
{
	Function_364(0, Global_34573, iParam0, 0);
	Function_364(1, bLocal_187, iParam0, 0);
	return;
}

void Function_364(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x12EE2 / 77538
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_365() //Position: 0x12F07 / 77575
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v1_AA", "Home02_r3_BakRanchBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v1_AB", "Home02_r3_BakRanchBant_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v1_AC", "Home02_r3_BakRanchBant_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v1_AD", "Home02_r3_BakRanchBant_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v1_AE", "Home02_r3_BakRanchBant_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v1_AF1", "Home02_r3_BakRanchBant_v1_AF1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v1_AF2", "Home02_r3_BakRanchBant_v1_AF2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v1_AG", "Home02_r3_BakRanchBant_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v1_AH1", "Home02_r3_BakRanchBant_v1_AH1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v1_AH2", "Home02_r3_BakRanchBant_v1_AH2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v1_AI", "Home02_r3_BakRanchBant_v1_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_BakRanchBant_v1_AJ", "Home02_r3_BakRanchBant_v1_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_BakRanchBant_v1_AK", "Home02_r3_BakRanchBant_v1_AK", false, 1, 0, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_366(int iParam0) //Position: 0x132C4 / 78532
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_367() //Position: 0x132D8 / 78552
{
	switch (iLocal_532)
	{
		case 0x00000000:
			if (bLocal_224)
			{
				if (!ACTOR_HAS_WEAPON(bLocal_187, 21))
				{
					GIVE_WEAPON_TO_ACTOR(bLocal_187, 21, 0.0f, 0, 1);
				}
				ACTOR_SET_NEXT_WEAPON(bLocal_187, 21);
				ACTOR_END_FORCE_HOLSTER(bLocal_187);
				bLocal_276 = Function_383(bLocal_292, bLocal_187, 0, 0);
				if (!ACTORS_IN_RANGE(bLocal_187, bLocal_276, 10.0f))
				{
					MEMORY_REPORT_POSITION_AUTO(bLocal_187, bLocal_276, true);
					TASK_GO_NEAR_ACTOR(bLocal_187, bLocal_276, 10.0f, 4);
					TASK_PRIORITY_SET(bLocal_187, true);
					iLocal_532 = 1;
				}
				else
				{
					MEMORY_REPORT_POSITION_AUTO(bLocal_187, bLocal_276, true);
					DETACH_LASSO(bLocal_187);
					bLocal_208 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(false, bLocal_276, 0, 3212836864);
					TASK_USE_LASSO(false, bLocal_276, 1.0f, 1.0f, 1, 2);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_187, bLocal_208);
					TASK_PRIORITY_SET(bLocal_187, true);
					TASK_SEQUENCE_RELEASE(bLocal_208, 1);
					Function_216(&iLocal_190);
					iLocal_532 = 2;
				}
			}
			else if (SQUAD_IS_VALID(bLocal_292))
			{
				if (SQUAD_GET_SIZE(bLocal_292) > 1)
				{
					bLocal_224 = true;
				}
			}
			break;
		
		case 0x00000001:
			Function_382();
			if (GET_TASK_STATUS(bLocal_187, 83) == 0)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_187);
				TASK_CLEAR(bLocal_187);
				DETACH_LASSO(bLocal_187);
				MEMORY_REPORT_POSITION_AUTO(bLocal_187, bLocal_276, true);
				TASK_USE_LASSO(bLocal_187, bLocal_276, 1.0f, 1.0f, 1, 2);
				TASK_PRIORITY_SET(bLocal_187, true);
				SET_ACTOR_RIDEABLE(bLocal_276, 0);
				TASK_CLEAR(bLocal_276);
				TASK_STAND_STILL(bLocal_276, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_276, true);
				Function_216(&iLocal_190);
				iLocal_532 = 2;
				return 0;
			}
			if (ACTORS_IN_RANGE(bLocal_187, bLocal_276, 25.0f))
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_187, 2);
			}
			else
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_187, 4);
			}
			break;
		
		case 0x00000003:
			Function_381();
			if (!GET_MOUNT(Global_34573) != bLocal_276)
			{
				TASK_CLEAR(bLocal_187);
				DETACH_LASSO(bLocal_187);
				MEMORY_REPORT_POSITION_AUTO(bLocal_187, bLocal_276, true);
				TASK_USE_LASSO(bLocal_187, bLocal_276, 1.0f, 1.0f, 1, 2);
				TASK_PRIORITY_SET(bLocal_187, true);
				SET_ACTOR_RIDEABLE(bLocal_276, 0);
				TASK_CLEAR(bLocal_276);
				TASK_STAND_STILL(bLocal_276, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_276, true);
				Function_216(&iLocal_190);
				iLocal_532 = 2;
			}
			break;
		
		case 0x00000002:
			Function_379();
			if (DECOR_GET_BOOL(Global_34573, "CanBeLasso"))
			{
				DECOR_SET_BOOL(Global_34573, "CanBeLasso", false);
			}
			if (!DECOR_GET_BOOL(bLocal_276, "CanBeLasso"))
			{
				DECOR_SET_BOOL(bLocal_276, "CanBeLasso", true);
			}
			if (!DECOR_GET_BOOL(bLocal_276, "CanLassoIfPlayerRiding"))
			{
				DECOR_SET_BOOL(bLocal_276, "CanLassoIfPlayerRiding", true);
			}
			if (GET_TASK_STATUS(bLocal_187, 68) != 0 || GET_TASK_STATUS(bLocal_187, 0) != 0)
			{
				SQUAD_LEAVE(bLocal_276);
				SET_ALLOW_RIDE_BY_PLAYER(bLocal_276, 0);
				if (SQUAD_IS_VALID(bLocal_290))
				{
					SQUAD_JOIN(bLocal_276, bLocal_290);
				}
				else
				{
					bLocal_290 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sGoal"));
					Function_374(&(Local_387[417]), bLocal_290, "h2_r3_wild_horse", 0, 0x5f5e100, 1);
					Function_370(&(Local_387[417]), 64);
					SQUAD_JOIN(bLocal_276, bLocal_290);
				}
				TASK_CLEAR(bLocal_276);
				Function_208(bLocal_276);
				switch (bLocal_210)
				{
					case 0x00000000:
						vLocal_261 = { -3.0f, 0.0f, 3.0f };
						break;
					
					case 0x00000001:
						vLocal_261 = { 0.0f, 0.0f, 7.0f };
						break;
					
					case 0x00000002:
						vLocal_261 = { 3.0f, 0.0f, 3.0f };
						break;
					
					default:
						vLocal_261 = { 0.0f, 0.0f, 3.0f };
						break;
				}
				SET_ACTOR_MAX_SPEED(bLocal_276, 3);
				TASK_CLEAR(bLocal_187);
				Function_369();
				TASK_CLEAR(bLocal_187);
				TASK_FOLLOW_OBJECT(bLocal_276, bLocal_187, &vLocal_261, 0, 0, 0, 0, 0, 0, 1);
				if (!DECOR_GET_BOOL(Global_34573, "CanBeLasso"))
				{
					DECOR_SET_BOOL(Global_34573, "CanBeLasso", true);
				}
				iLocal_532 = 0;
				bLocal_210++;
				if (SQUAD_GET_SIZE(bLocal_292) <= 1)
				{
					bLocal_224 = false;
				}
				return 1;
			}
			if (Function_270(&iLocal_190) <= 10.0f)
			{
				TASK_CLEAR(bLocal_187);
				iLocal_532 = 0;
			}
			break;
	}
	if (SQUAD_IS_VALID(bLocal_290))
	{
		if (IS_ACTOR_VALID(bLocal_529))
		{
			Function_381();
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				Function_368("Home02_r3_UncTakesCareHors");
				CLEAR_ACTOR_MAX_SPEED(bLocal_529);
				CLEAR_ACTOR_MIN_SPEED(bLocal_529);
				CLEAR_ACTOR_MAX_SPEED(bLocal_187);
				CLEAR_ACTOR_MIN_SPEED(bLocal_187);
				bLocal_529 = "";
			}
		}
		else if (IS_ACTOR_RIDING(Global_34573))
		{
			if (SQUAD_GET(GET_MOUNT(Global_34573)) == bLocal_290)
			{
				Function_368("Home02_r3_NoDismountBrokHors");
				bLocal_529 = GET_MOUNT(Global_34573);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_529, 0.0f);
				SET_ACTOR_MIN_SPEED_ABSOLUTE(bLocal_529, 0.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_187, 0.0f);
				SET_ACTOR_MIN_SPEED_ABSOLUTE(bLocal_187, 0.0f);
			}
		}
	}
	return 0;
}

void Function_368(bool bParam0) //Position: 0x1376C / 79724
{
	if (iLocal_221 <= 10)
	{
		SAY_SINGLE_LINE_SCRIPTED(bLocal_187, bParam0, Global_34573, 0, 1, 0, 1, 3);
		iLocal_221++;
		fLocal_342 = RAND_FLOAT_RANGE(3.0f, 7.0f);
	}
	return;
}

void Function_369() //Position: 0x13796 / 79766
{
	if (IS_ACTOR_VALID(bLocal_276))
	{
		if (IS_ACTOR_HORSE(bLocal_276))
		{
			SQUAD_LEAVE(bLocal_276);
			if (SQUAD_IS_VALID(bLocal_290))
			{
				SQUAD_JOIN(bLocal_276, bLocal_290);
			}
			TASK_CLEAR(bLocal_276);
			if (!IS_OBJECT_VALID(bLocal_286[bLocal_210]))
			{
				bLocal_286[bLocal_210] = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(bLocal_276), Function_53(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(bLocal_286[bLocal_210]))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_286[bLocal_210], bLocal_276, "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 0);
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_286[bLocal_210], bLocal_187, "wrist_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 1);
					LEASH_CONSTRAIN(bLocal_286[bLocal_210]);
					LEASH_RESTART(bLocal_286[bLocal_210]);
					LEASH_SET_CONSTRAINT_LENGTH(bLocal_286[bLocal_210], (8.0f + (IntToFloat(bLocal_210) * 2.0f)));
					LEASH_SET_LEASH_LENGTH(bLocal_286[bLocal_210], (8.0f + (IntToFloat(bLocal_210) * 2.0f)));
					DECOR_SET_BOOL(bLocal_276, "CanBeLasso", false);
					DETACH_LASSO(bLocal_187);
				}
			}
		}
	}
	return;
}

void Function_370(int iParam0, int iParam1) //Position: 0x138CB / 80075
{
	if (iParam1 != 100000000)
	{
		Function_373(iParam0, iParam1);
	}
	else
	{
		Function_371(iParam0, 1);
	}
	return;
}

void Function_371(int iParam0, bool bParam1) //Position: 0x138EB / 80107
{
	iParam0->f_40 = 0;
	Function_372(iParam0, 2, bParam1);
	Function_372(iParam0, 4, bParam1);
	Function_372(iParam0, 8, bParam1);
	Function_372(iParam0, 16, bParam1);
	Function_372(iParam0, 32, bParam1);
	Function_372(iParam0, 64, bParam1);
	Function_372(iParam0, 128, bParam1);
	Function_372(iParam0, 256, bParam1);
	Function_372(iParam0, 512, bParam1);
	Function_372(iParam0, 1024, bParam1);
	return;
}

void Function_372(int iParam0, int iParam1, bool bParam2) //Position: 0x13951 / 80209
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

void Function_373(int iParam0, bool bParam1) //Position: 0x1398D / 80269
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_374(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x139B8 / 80312
{
	if (!Function_378(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_377(uParam0, bParam2))
	{
		return 0;
	}
	Function_376(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_375(uParam0, iParam4, iParam5);
	return 1;
}

void Function_375(var uParam0, int iParam1, int iParam2) //Position: 0x139F4 / 80372
{
	if (iParam1 != 100000000)
	{
		Function_372(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_371(uParam0, iParam2);
	}
	return;
}

void Function_376(var uParam0, int iParam1) //Position: 0x13A17 / 80407
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_377(int iParam0, bool bParam1) //Position: 0x13A23 / 80419
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

bool Function_378(int iParam0, bool bParam1) //Position: 0x13AAC / 80556
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

void Function_379() //Position: 0x13C38 / 80952
{
	if (!Function_272(&iLocal_237))
	{
		Function_216(&iLocal_237);
	}
	else if (Function_270(&iLocal_237) < fLocal_342)
	{
		if (Function_380())
		{
			Function_368("Home02_r3_UncTakesCareHors");
		}
		else
		{
			Function_368("Home02_r3_UncleGetsClose");
		}
		Function_216(&iLocal_237);
	}
	return;
}

bool Function_380() //Position: 0x13CA7 / 81063
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_381() //Position: 0x13CBA / 81082
{
	if (!Function_272(&iLocal_237))
	{
		Function_216(&iLocal_237);
	}
	else if (Function_270(&iLocal_237) < fLocal_342)
	{
		if (Function_380())
		{
			Function_368("Home02_r3_DismountBrokHors");
		}
		else
		{
			Function_368("Home02_r3_NoDismountBrokHors");
		}
		Function_216(&iLocal_237);
	}
	return;
}

void Function_382() //Position: 0x13D2D / 81197
{
	if (!Function_272(&iLocal_237))
	{
		Function_216(&iLocal_237);
	}
	else if (Function_270(&iLocal_237) < fLocal_342)
	{
		if (Function_380())
		{
			Function_368("Home02_r3_RidesOver");
		}
		else
		{
			Function_368("Home02_r3_RidesAwayBrkHors");
		}
		Function_216(&iLocal_237);
	}
	return;
}

bool Function_383(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13D97 / 81303
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
			fVar3 = Function_319(bVar4, bParam1);
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

void Function_384(bool bParam0) //Position: 0x13E51 / 81489
{
	if (!IS_STRING_VALID(bLocal_338))
	{
		bLocal_338 = bParam0;
		if (!Function_272(&iLocal_196))
		{
			Function_216(&iLocal_196);
		}
	}
	else if (!STRINGS_ARE_EQUAL(bLocal_338, bParam0))
	{
		bLocal_338 = bParam0;
		if (!Function_272(&iLocal_196))
		{
			Function_216(&iLocal_196);
		}
	}
	return;
}

void Function_385() //Position: 0x13E96 / 81558
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_3HorseBroke", "Home02_r3_3HorseBroke", true, 2, 1, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_386(bool bParam0, bool bParam1) //Position: 0x13EE9 / 81641
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_360(bParam0);
			vVar0 = { StackVal, StackVal, Function_360(bParam0) };
			Function_359(bParam1);
			vVar3 = { StackVal, StackVal, Function_359(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_387() //Position: 0x13F89 / 81801
{
	Function_211(13, 0, 1);
	if (IS_BLIP_VALID(bLocal_213))
	{
		REMOVE_BLIP(bLocal_213);
	}
	if (IS_BLIP_VALID(bLocal_212))
	{
		REMOVE_BLIP(bLocal_212);
	}
	if (!IS_BLIP_VALID(bLocal_211))
	{
		bLocal_211 = ADD_BLIP_FOR_OBJECT(Local_4.f_580, 330, 0f, 2, 0);
		if (IS_BLIP_VALID(bLocal_211))
		{
		}
	}
	if (!IS_OBJECT_VALID(bLocal_214))
	{
		GET_OBJECT_POSITION(Local_4.f_580, &vLocal_255);
		GET_OBJECT_ORIENTATION(Local_4.f_580, &vLocal_258);
		bLocal_214 = Function_388(StackVal, StackVal, StackVal, StackVal, bLocal_154, "HOME02_RANCH03GATEWAY01", vLocal_255, vLocal_258, Global_34573, 7.0f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
		if (IS_OBJECT_VALID(bLocal_214))
		{
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		Function_347(Local_4.f_180);
	}
	if (SQUAD_IS_VALID(bLocal_291))
	{
		Function_347(bLocal_291);
	}
	return;
}

bool Function_388(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x1406A / 82026
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, iParam8, iParam10, iParam13, 0, uParam14, uParam17);
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

var Function_389(bool bParam0, bool bParam1) //Position: 0x14135 / 82229
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
		Function_330(bParam0);
		bVar6 = VDIST(Function_330(bParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

void Function_390() //Position: 0x14189 / 82313
{
	iLocal_226 = 0;
	Function_366(&iLocal_243);
	iLocal_220 = Function_391();
	return;
}

var Function_391() //Position: 0x1419C / 82332
{
	return Global_34165.f_60;
}

void Function_392() //Position: 0x141A7 / 82343
{
	if (!SQUAD_IS_VALID(Local_4.f_92))
	{
		Function_336();
		if (SQUAD_IS_VALID(Local_4.f_92))
		{
			Function_335(Local_4.f_92, 0);
			Function_334(Local_4.f_92, 3);
			if (IS_ACTOR_VALID((*&Local_4 + 80)[02]))
			{
				Function_337((*&Local_4 + 80)[02], (*&Local_4 + 420)[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_92, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			bLocal_188 = (*&Local_4 + 80)[02];
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_188, 0);
			HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_188, 1);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		Function_335(Local_4.f_180, 0);
		Function_399(Local_4.f_180, 1);
		bLocal_275 = (*&Local_4 + 96)[02];
		SQUAD_GOALS_CLEAR(Local_4.f_180);
		Function_317(Local_4.f_180);
		Function_395(Local_4.f_180);
		iLocal_331 = 6;
		iLocal_332 = 6;
	}
	else
	{
		Function_394();
		Function_335(Local_4.f_180, 0);
		Function_399(Local_4.f_180, 1);
		bLocal_275 = (*&Local_4 + 96)[02];
		SQUAD_GOALS_CLEAR(Local_4.f_180);
		Function_317(Local_4.f_180);
		Function_395(Local_4.f_180);
		iLocal_331 = 6;
		iLocal_332 = 6;
	}
	if (iLocal_199[1] == 0)
	{
		Function_337(bLocal_187, (*&Local_4 + 420)[2], 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(bLocal_187, 100.0f, false, 1092616192);
		Function_337((*&Local_4 + 80)[02], (*&Local_4 + 420)[2], 1, 1, 1);
		Function_337(bLocal_189, (*&Local_4 + 420)[7], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_189))
		{
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_189))
				{
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_189);
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_187))
		{
			if (IS_ACTOR_VALID((*&Local_4 + 80)[02]))
			{
				if (!IS_ACTOR_RIDING(bLocal_187) && !IS_ACTOR_MOUNTED((*&Local_4 + 80)[02]))
				{
					ACTOR_MOUNT_ACTOR(bLocal_187, (*&Local_4 + 80)[02]);
					bLocal_188 = (*&Local_4 + 80)[02];
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_188, 0);
				}
			}
		}
		Function_315();
		bLocal_290 = Local_4.f_212;
		Function_393(bLocal_290);
	}
	Function_374(&(Local_387[017]), bLocal_187, "Uncle", 1, 0x5f5e100, 1);
	Function_370(&(Local_387[017]), 1024);
	SET_ACTORS_HORSE(bLocal_187, bLocal_188);
	SET_MOST_RECENT_MOUNT(bLocal_187, bLocal_188);
	MEMORY_PREFER_RIDING(bLocal_187, true);
	Function_374(&(Local_387[117]), bLocal_188, "Uncle_Horse", 0, 0x5f5e100, 1);
	Function_370(&(Local_387[117]), 1024);
	Function_374(&(Local_387[417]), bLocal_290, "h2_r3_wild_horse", 0, 0x5f5e100, 1);
	Function_370(&(Local_387[417]), 64);
	ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
	return;
}

void Function_393(bool bParam0) //Position: 0x14415 / 82965
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		TASK_CLEAR(bVar1);
		switch (bVar0)
		{
			case 0x00000000:
				vLocal_261 = { -1,5f, 0.0f, 3.0f };
				break;
			
			case 0x00000001:
				vLocal_261 = { 0.0f, 0.0f, 7.0f };
				break;
			
			case 0x00000002:
				vLocal_261 = { 1,5f, 0.0f, 3.0f };
				break;
			
			default:
				vLocal_261 = { 0.0f, 0.0f, 3.0f };
				break;
		}
		TASK_FOLLOW_OBJECT(bVar1, bLocal_187, &vLocal_261, 0, 0, 0, 0, 0, 0, 1);
		GET_OBJECT_RELATIVE_POSITION(bLocal_187, vLocal_261, &uVar2);
		TELEPORT_ACTOR(bVar1, &uVar2, 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(bVar1, 100.0f, false, 1092616192);
		SET_ACTOR_MAX_SPEED(bVar1, 3);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_HORSE(bVar1))
			{
				if (!IS_OBJECT_VALID(bLocal_286[bVar0]))
				{
					bLocal_286[bVar0] = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(bVar1), Function_53(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
					if (IS_OBJECT_VALID(bLocal_286[bVar0]))
					{
						LEASH_ATTACH_TO_OBJECT_BONE(bLocal_286[bVar0], bVar1, "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 0);
						LEASH_ATTACH_TO_OBJECT_BONE(bLocal_286[bVar0], bLocal_187, "wrist_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 1);
						LEASH_CONSTRAIN(bLocal_286[bVar0]);
						LEASH_RESTART(bLocal_286[bVar0]);
						LEASH_SET_CONSTRAINT_LENGTH(bLocal_286[bVar0], (8.0f + (IntToFloat(bVar0) * 2.0f)));
						LEASH_SET_LEASH_LENGTH(bLocal_286[bVar0], (8.0f + (IntToFloat(bVar0) * 2.0f)));
						DECOR_SET_BOOL(bVar1, "CanBeLasso", false);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_394() //Position: 0x145D4 / 83412
{
	Local_4.f_180 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "WildHorse01"));
	(*&Local_4 + 96)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_01", 981, 193,6283f, 127,9104f, 1353,628f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[02], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[02], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[02], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[02], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_02", 976, 195,9999f, 127,8092f, 1352,956f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[12], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[12], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[12], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[12], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_03", 977, 196.0f, 127,8672f, 1356.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[22], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[22], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[22], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[22], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_04", 980, 192f, 127,9772f, 1353,513f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[32], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[32], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[32], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[32], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_05", 987, 188,1694f, 128,0072f, 1352,169f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[42], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[42], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[42], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[42], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_06", 980, 192f, 128,0854f, 1356,886f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[52], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[52], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[52], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[52], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_07", 981, 185,2196f, 128,2078f, 1357,22f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[62], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[62], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[62], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[62], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_08", 976, 186,8312f, 128,1164f, 1354,831f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[72], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[72], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[72], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[72], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_09", 977, 189,2386f, 128,1615f, 1357,239f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[82], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[82], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[82], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[82], "HorseCaptureBoltTime", 1000.0f);
	(*&Local_4 + 96)[92] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WILD_HORSE_01_10", 991, 183,9999f, 128,082f, 1354,094f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 96)[92], Local_4.f_180);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 96)[92], true);
	DECOR_SET_FLOAT((*&Local_4 + 96)[92], "fHowLong", 15.0f);
	DECOR_SET_FLOAT((*&Local_4 + 96)[92], "HorseCaptureBoltTime", 1000.0f);
	return;
}

void Function_395(bool bParam0) //Position: 0x14B94 / 84884
{
	int iVar0;
	bool bVar1;
	
	iVar0 = SQUAD_GOAL_ADD_FLOCK(bParam0, 1, 4294967295, 0);
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (iVar0 == "")
	{
		return;
	}
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 8, 0,75f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 19, 45.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 24, 360.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 25, 3.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 0, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 1, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 2, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 15, 0,75f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 16, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 17, 0,2f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 18, 50.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 21, 1,92f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 20, 9,352f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 28, 0,25f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 1, 29, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 8, 1,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 19, 55.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 24, 360.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 25, 3.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 0, 5.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 1, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 2, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 15, 0,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 16, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 17, 0,7f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 18, 50.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 21, 4,89f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 20, 13.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 26, 0.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 28, 0,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iVar0, 0, 29, 10.0f);
	SQUAD_FLOCK_ADD_EXTERNAL_ALERT(bParam0, iVar0, Global_34573, 32.0f, 25.0f, 0);
	_SQUAD_FLOCK_ADD_EXTERNAL_REPULSION_2(bParam0, iVar0, Global_34573, 33.0f, 1,5f, 925353388, 925353388, 0);
	_SQUAD_FLOCK_ADD_EXTERNAL_REPULSION_2(bParam0, iVar0, bLocal_187, 33.0f, 0,75f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(bParam0, iVar0, 1);
	SQUAD_FLOCK_SET_ALLOW_STRAGGLERS(bParam0, iVar0, 0);
	Function_324(Local_4.f_180);
	Function_397(Local_4.f_180, &Local_4 + 248);
	Function_396(Local_4.f_180, 4, 0);
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(bParam0))
	{
		SET_ACTOR_UPDATE_PRIORITY(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1), false);
		SET_ACTOR_HARDLOCK_BIAS(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1), -10000.0f, 1);
		bVar1++;
	}
	return;
}

int Function_396(bool bParam0, bool bParam1, int iParam2) //Position: 0x14E14 / 85524
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

void Function_397(bool bParam0, int iParam1) //Position: 0x14E56 / 85590
{
	int iVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < (*iParam1 - 1))
		{
			if (IS_VOLUME_VALID((*iParam1)[iVar0]))
			{
				Function_398(bParam0, (*iParam1)[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

int Function_398(bool bParam0, bool bParam1) //Position: 0x14E98 / 85656
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

void Function_399(bool bParam0, bool bParam1) //Position: 0x14EED / 85741
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

void Function_400(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x14F2E / 85806
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

void Function_401() //Position: 0x14FCB / 85963
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

void Function_402(int iParam0, bool bParam1, bool bParam2) //Position: 0x1500C / 86028
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

void Function_403() //Position: 0x15172 / 86386
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_404(bool bParam0) //Position: 0x15196 / 86422
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

bool Function_405() //Position: 0x151C5 / 86469
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

int Function_406(bool bParam0, var uParam1, vector3 vParam2, var uParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, var uParam14) //Position: 0x151E0 / 86496
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_407(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_408()) * (fParam8 - fParam7)) * 0,5f))) || bParam13)
	{
		if (!bParam6 && (HUD_IS_FADED() || HUD_IS_FADING()))
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
		if ((uParam14 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					*uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam9, iParam10, iParam11, iParam12);
					*uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					*uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Call_Loc(uParam5);
				if (StackVal)
				{
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
	else if ((!Function_407(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_408()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_407(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

bool Function_407(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1549A / 87194
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_360(bParam0);
		if (VDIST(Function_360(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_408() //Position: 0x15524 / 87332
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_409() //Position: 0x15533 / 87347
{
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse01", bLocal_189);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse02", bLocal_188);
	return 1;
}

void Function_410() //Position: 0x15578 / 87416
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (SQUAD_IS_VALID(bLocal_292))
		{
			if (SQUAD_GET(GET_MOUNT(Global_34573)) == bLocal_292)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_288))
				{
					if (GET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(Global_34573)))
					{
						SET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(Global_34573), 0);
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
					}
				}
			}
		}
		if (SQUAD_IS_VALID(bLocal_290))
		{
			if (SQUAD_GET(GET_MOUNT(Global_34573)) == bLocal_290)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_288))
				{
					if (GET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(Global_34573)))
					{
						SET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(Global_34573), 0);
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
					}
				}
			}
		}
	}
	return;
}

void Function_411() //Position: 0x1569B / 87707
{
	int iVar0;
	
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			iVar0 = 0;
			if (SQUAD_IS_VALID(Local_4.f_180))
			{
				iVar0 = (iVar0 + Function_412(Local_4.f_180));
			}
			if (SQUAD_IS_VALID(bLocal_291))
			{
				iVar0 = (iVar0 + Function_412(bLocal_291));
			}
			if (SQUAD_IS_VALID(bLocal_292))
			{
				iVar0 = (iVar0 + Function_412(bLocal_292));
			}
			if (SQUAD_IS_VALID(bLocal_290))
			{
				iVar0 = (iVar0 + Function_412(bLocal_290));
			}
			if (SQUAD_IS_VALID(bLocal_293))
			{
				iVar0 = (iVar0 + Function_412(bLocal_293));
			}
			if (iVar0 <= 3)
			{
				Function_224("h2_r3_tooFewHorses");
				bLocal_205 = true;
			}
		}
	}
	return;
}

int Function_412(bool bParam0) //Position: 0x15739 / 87865
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar2 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				bVar2++;
			}
		}
		bVar0++;
	}
	return bVar2;
}

void Function_413() //Position: 0x15786 / 87942
{
	if (!Function_272(&iLocal_237))
	{
		Function_216(&iLocal_237);
	}
	else if (Function_270(&iLocal_237) <= 5.0f)
	{
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
		{
			if (IS_ACTOR_VALID(bLocal_187))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_187, 1.0f))
				{
					if (Function_416(Global_34573, bLocal_187) < 8.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_RidesIntoHorse", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_216(&iLocal_237);
					}
				}
			}
		}
		if (DECOR_GET_BOOL(Global_34573, "beingBucked"))
		{
			if (IS_ACTOR_VALID(bLocal_187))
			{
				if (ACTORS_IN_RANGE(bLocal_187, Global_34573, 20.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_thrownFromHors", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_216(&iLocal_237);
				}
			}
		}
		Function_415();
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_414(GET_WEAPON_IN_HAND(Global_34573)))
			{
				bLocal_279 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_VALID(bLocal_279))
				{
					if (IS_ACTOR_HUMAN(bLocal_279))
					{
						if (bLocal_279 == bLocal_187)
						{
							if (Function_272(&iLocal_240))
							{
								if (Function_270(&iLocal_240) < 0,25f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_GunOnUncle", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
									Function_216(&iLocal_237);
								}
							}
							else
							{
								Function_216(&iLocal_240);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(Global_34573, bLocal_279))
						{
							if (Function_272(&iLocal_240))
							{
								if (Function_270(&iLocal_240) < 0,25f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_GunOnAmb", Function_53(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_216(&iLocal_237);
								}
							}
							else
							{
								Function_216(&iLocal_240);
							}
						}
						else if (Function_272(&iLocal_240))
						{
							Function_366(&iLocal_240);
						}
					}
					else if (Function_272(&iLocal_240))
					{
						Function_366(&iLocal_240);
					}
				}
				else if (Function_272(&iLocal_240))
				{
					Function_366(&iLocal_240);
				}
			}
			else if (Function_272(&iLocal_240))
			{
				Function_366(&iLocal_240);
			}
		}
		else if (Function_272(&iLocal_240))
		{
			Function_366(&iLocal_240);
		}
	}
	return;
}

bool Function_414(bool bParam0) //Position: 0x159A6 / 88486
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

void Function_415() //Position: 0x159EC / 88556
{
	if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_414(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					if (Function_270(&iLocal_237) <= 5.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_ShootsGunRand", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_216(&iLocal_237);
					}
				}
				else if (IS_ACTOR_HORSE(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					if (Function_270(&iLocal_237) <= 5.0f)
					{
						CLEAR_LAST_ATTACK(Global_34573);
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_ShootsUncleHors", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_216(&iLocal_237);
					}
				}
			}
		}
	}
	return;
}

float Function_416(bool bParam0, bool bParam1) //Position: 0x15AB0 / 88752
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	GET_ACTOR_VELOCITY(bParam1, &vVar3);
	return VMAG(Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar0, StackVal));
}

void Function_417() //Position: 0x15AD2 / 88786
{
	if (iLocal_184 < 3 && iLocal_184 > 105)
	{
		Function_413();
		Function_448();
		if (iLocal_184 >= 7)
		{
			if (SQUAD_IS_VALID(Local_4.f_180))
			{
				Function_411();
			}
		}
		Function_445(&Local_4 + 180, &bLocal_215, &iLocal_252);
		Function_444();
		if (SQUAD_IS_VALID(bLocal_291))
		{
			Function_443(Local_4.f_180, bLocal_291, bLocal_215);
		}
		else
		{
			bLocal_291 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sWildStraggle"));
		}
		Function_442();
		if (IS_ACTOR_VALID(bLocal_275))
		{
			Function_440(Local_4.f_180, bLocal_215);
		}
		else
		{
			bLocal_275 = (*&Local_4 + 96)[02];
		}
	}
	switch (iLocal_184)
	{
		case 0x00000000:
			Function_340(0);
			SET_ACTOR_HEALTH(bLocal_187, GET_ACTOR_MAX_HEALTH(bLocal_187));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_199[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_339();
				bLocal_185 = Global_30637[0];
				if (!Function_214(bLocal_185))
				{
					Function_338(&Local_155);
				}
				Function_337(Global_34573, (*&Local_4 + 380)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_187))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_187);
					CLEAR_ACTOR_MAX_SPEED(bLocal_187);
					TASK_STAND_STILL(bLocal_187, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_187, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_187, 2);
				}
				if (IS_ACTOR_VALID(bLocal_189))
				{
					TASK_STAND_STILL(bLocal_189, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_189, true);
				}
				Function_216(&iLocal_190);
				iLocal_184 = 1;
			}
			else
			{
				Function_216(&iLocal_190);
				iLocal_184 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_214(bLocal_185) || bLocal_185 != 4294967295))
			{
				Function_216(&iLocal_190);
				iLocal_184 = 2;
			}
			break;
		
		case 0x00000002:
			Function_230(iLocal_183);
			Function_400(StackVal, StackVal, Function_230(iLocal_183), iLocal_183, Global_30637[0], Function_233(iLocal_183), 2);
			Function_331(&iLocal_207, 26, 0, 4294967295, 4294967295);
			if (HUD_IS_FADED())
			{
				iLocal_209 = 0;
				bLocal_210 = false;
				Function_439();
				if (IS_ACTOR_VALID(bLocal_187))
				{
					Function_211(13, 0, 1);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_187);
					TASK_STAND_STILL(bLocal_187, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_187, true);
				}
				if (iLocal_199[0] == 0)
				{
					Function_337(bLocal_189, (*&Local_4 + 380)[7], 1, 1, 1);
					SNAP_OBJECT_TO_GROUND(bLocal_189, 100.0f, false, 1092616192);
					Function_337(bLocal_187, (*&Local_4 + 380)[2], 1, 1, 1);
					SNAP_OBJECT_TO_GROUND(bLocal_187, 100.0f, false, 1092616192);
					Function_337((*&Local_4 + 80)[02], (*&Local_4 + 380)[5], 1, 1, 1);
					SNAP_OBJECT_TO_GROUND((*&Local_4 + 80)[02], 100.0f, false, 1092616192);
					Function_438();
				}
			}
			Function_216(&iLocal_190);
			iLocal_184 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!HUD_IS_FADING())
			{
				Function_437();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_436();
				Function_434();
				Function_384("home02_ranch03_obj02_start");
				iLocal_221 = 5;
				fLocal_342 = 2.0f;
				Function_216(&iLocal_190);
				iLocal_184 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_270(&iLocal_190) <= 5.0f)
			{
				Function_216(&iLocal_190);
				Function_216(&fLocal_193);
				Function_216(&iLocal_196);
				iLocal_184 = 8;
			}
			break;
		
		case 0x00000008:
			Function_437();
			Function_433();
			Function_410();
			if ((SQUAD_GET_SIZE(bLocal_292) + SQUAD_GET_SIZE(bLocal_290)) > 3)
			{
				Function_346();
				Function_235();
				Function_216(&iLocal_190);
				if (IS_ACTOR_RIDING(Global_34573))
				{
					if (!Function_432(GET_MOUNT(Global_34573), bLocal_292, 0))
					{
						Function_384("home02_ranch03_obj05");
						Function_431();
					}
				}
				else
				{
					Function_384("Horse_return");
					Function_349();
				}
				iLocal_184 = 105;
			}
			else if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				if ((Function_432(GET_MOUNT(Global_34573), Local_4.f_180, 0) || Function_432(GET_MOUNT(Global_34573), bLocal_291, 0)) || Function_432(GET_MOUNT(Global_34573), bLocal_293, 0))
				{
					if (iLocal_531 != 2)
					{
						bLocal_273 = GET_MOUNT(Global_34573);
						iLocal_531 = 2;
						Function_235();
						Function_216(&iLocal_190);
						Function_368("Home02_r3_ShoutsEncoBreakHors");
						Function_384("home02_ranch03_obj04");
						Function_346();
					}
				}
			}
			switch (iLocal_531)
			{
				case 0x00000000:
					if (!IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_320))
					{
						if (Function_350(&iLocal_196, fLocal_335, fLocal_336, bLocal_215, "h2_r3_Herd_return", "h2_r3_Herd_abandoned", &bLocal_205, 0, 0, 0, 4294967295, 1))
						{
							if (bLocal_210 <= 1)
							{
								Function_384("home02_ranch03_obj02_start");
							}
							else
							{
								Function_384("home02_ranch03_obj02");
							}
						}
						else
						{
							Function_434();
						}
					}
					else if (bLocal_210 <= 1)
					{
						Function_384("home02_ranch03_obj02_start");
					}
					else
					{
						Function_384("home02_ranch03_obj02");
					}
					if (Function_430())
					{
						Function_235();
						Function_216(&iLocal_190);
						Function_368("Home02_r3_JonLassosAhorse");
						Function_384("home02_ranch03_obj03");
						Function_346();
						iLocal_531 = 1;
					}
					else if (!DECOR_CHECK_EXIST(bLocal_154, "RopeAHorse"))
					{
						if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_429();
							DECOR_SET_BOOL(bLocal_154, "RopeAHorse", true);
							Function_216(&iLocal_237);
						}
					}
					else
					{
						Function_428();
					}
					break;
				
				case 0x00000001:
					if (Function_427())
					{
						Function_235();
						Function_216(&iLocal_190);
						Function_368("Home02_r3_ShoutsEncoBreakHors");
						Function_384("home02_ranch03_obj04");
						iLocal_531 = 2;
						Function_346();
					}
					else
					{
						Function_426();
					}
					break;
				
				case 0x00000002:
					if (Function_424())
					{
						Function_235();
						Function_216(&iLocal_190);
						Function_368("Home02_r3_BreaksAHorse");
						Function_331(&iLocal_207, 3, 0, 4294967295, 4294967295);
						if (IS_ACTOR_VALID(bLocal_189))
						{
							Function_384("Horse_return");
							Function_349();
						}
						else
						{
							Function_384("H2R3_Horse_any");
						}
						iLocal_531 = 3;
					}
					else
					{
						Function_423();
					}
					break;
				
				case 0x00000003:
					Function_216(&iLocal_190);
					iLocal_531 = 5;
					Function_422();
					Function_349();
					break;
				
				case 0x00000004:
					Function_216(&iLocal_190);
					Function_384("Horse_return");
					iLocal_531 = 5;
					Function_422();
					Function_349();
					break;
				
				case 0x00000005:
					if (Function_419())
					{
						if ((SQUAD_GET_SIZE(bLocal_292) + SQUAD_GET_SIZE(bLocal_290)) > 3)
						{
							Function_346();
							Function_235();
							Function_216(&iLocal_190);
							Function_331(&iLocal_207, 3, 0, 4294967295, 4294967295);
							if (IS_ACTOR_RIDING(Global_34573))
							{
								Function_384("home02_ranch03_obj05");
								Function_431();
							}
							else
							{
								Function_384("Horse_return");
								Function_349();
							}
							iLocal_184 = 105;
						}
						else
						{
							Function_235();
							Function_216(&iLocal_190);
							Function_331(&iLocal_207, 26, 0, 4294967295, 4294967295);
							Function_368("Home02_r3_GoAfterOtherHors");
							Function_384("home02_ranch03_obj02");
							if (Function_386(Global_34573, bLocal_215) > 150.0f)
							{
								fLocal_335 = 150.0f;
								fLocal_336 = 225.0f;
							}
							else
							{
								fLocal_335 = (Function_386(Global_34573, bLocal_215) + 25.0f);
								fLocal_336 = (fLocal_335 + 50.0f);
							}
							iLocal_531 = 0;
							Function_434();
						}
					}
					else
					{
						Function_418();
					}
					break;
			}
			break;
		
		case 0x00000069:
			if (IS_BLIP_VALID(bLocal_213))
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					if (!Function_432(GET_MOUNT(Global_34573), bLocal_292, 0))
					{
						Function_384("home02_ranch03_obj05");
						Function_387();
						Function_216(&iLocal_190);
						iLocal_184 = 106;
					}
				}
			}
			else if (!IS_ACTOR_RIDING(Global_34573))
			{
				Function_384("Horse_return");
				Function_349();
			}
			Function_367();
			Function_433();
			break;
		
		case 0x0000006A:
			iLocal_199[1] = 1;
			Function_216(&iLocal_190);
			iLocal_183 = 2;
			iLocal_184 = 0;
			break;
	}
	return;
}

void Function_418() //Position: 0x1630D / 90893
{
	if (!bLocal_224)
	{
		if (!Function_272(&iLocal_237))
		{
			Function_216(&iLocal_237);
		}
		else if (Function_270(&iLocal_237) < fLocal_342)
		{
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				Function_368("Home02_r3_HasntBakHors");
			}
			else
			{
				Function_368("Home02_r3_NoDismountBrokHors");
			}
			Function_216(&iLocal_237);
		}
	}
	return;
}

bool Function_419() //Position: 0x16386 / 91014
{
	if (Function_420(&fLocal_193, 60.0f, 200.0f, bLocal_187, "Uncle_return", "Uncle_abandoned", &bLocal_205, 0, bLocal_154, Local_4, 325, 1))
	{
		if (IS_BLIP_VALID(bLocal_213))
		{
			REMOVE_BLIP(bLocal_213);
		}
	}
	else
	{
		Function_211(13, 0, 1);
		if (IS_ACTOR_VALID(bLocal_189))
		{
			Function_384("Horse_return");
			Function_349();
		}
		else
		{
			Function_384("H2R3_Horse_any");
		}
	}
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (GET_MOUNT(Global_34573) == bLocal_189)
		{
			return 1;
		}
	}
	if ((SQUAD_GET_SIZE(bLocal_292) + SQUAD_GET_SIZE(bLocal_290)) > 3)
	{
		return 0;
	}
	if (Function_430())
	{
		Function_235();
		Function_216(&iLocal_190);
		Function_384("home02_ranch03_obj03");
		Function_346();
		iLocal_531 = 1;
	}
	return 0;
}

bool Function_420(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x16473 / 91251
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_421(Global_34573, bParam3, iParam2))
	{
		Function_224(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_421(Global_34573, bParam3, bParam1))
	{
		if (!Function_357(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_356(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_355(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_354(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_354(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_357(2))
	{
		Function_353(2);
		if (!Function_352())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_351();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_208(bParam3);
				Function_212(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_354(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_354(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_421(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16607 / 91655
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

void Function_422() //Position: 0x16718 / 91928
{
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		switch (iLocal_223)
		{
			case 0x00000000:
				if (SQUAD_GOAL_IS_VALID(bLocal_294))
				{
					SQUAD_GOAL_REMOVE(Local_4.f_180, bLocal_294);
					bLocal_294 = "";
				}
				bLocal_294 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_180, false, 0, 4294967295);
				TASK_GO_NEAR_COORD(false, &Local_4 + 496, 7.0f, 3);
				iLocal_223++;
				Function_216(&iLocal_249);
				break;
			
			case 0x00000001:
				if (SQUAD_GOAL_IS_VALID(bLocal_294))
				{
					SQUAD_GOAL_REMOVE(Local_4.f_180, bLocal_294);
					bLocal_294 = "";
				}
				bLocal_294 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_180, false, 0, 4294967295);
				TASK_GO_NEAR_COORD(false, &Local_4 + 524, 7.0f, 3);
				iLocal_223++;
				Function_216(&iLocal_249);
				break;
			
			default:
				if (SQUAD_GOAL_IS_VALID(bLocal_294))
				{
					SQUAD_GOAL_REMOVE(Local_4.f_180, bLocal_294);
					bLocal_294 = "";
				}
				bLocal_294 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_180, false, 0, 4294967295);
				TASK_GO_NEAR_COORD(false, &Local_4 + 552, 7.0f, 3);
				iLocal_223 = 0;
				Function_216(&iLocal_249);
				break;
			}
	}
	return;
}

void Function_423() //Position: 0x167F5 / 92149
{
	if (!bLocal_224)
	{
		if (!Function_272(&iLocal_237))
		{
			Function_216(&iLocal_237);
		}
		else if (Function_270(&iLocal_237) < fLocal_342)
		{
			Function_368("Home02_r3_ShoutsEncoBreakHors");
			Function_216(&iLocal_237);
		}
	}
	return;
}

bool Function_424() //Position: 0x16846 / 92230
{
	Function_331(&iLocal_207, 6, 0, 4294967295, 4294967295);
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_189, 10.0f))
		{
			if (GET_TASK_STATUS(bLocal_189, 25) != 1)
			{
				TASK_FLEE_ACTOR(bLocal_189, Global_34573, 15.0f, 5.0f, 0, 1, 0);
			}
		}
		if (IS_ACTOR_VALID(bLocal_273))
		{
			if (ANIMAL_ACTOR_GET_DOCILE(bLocal_273))
			{
				SQUAD_LEAVE(bLocal_273);
				Function_208(bLocal_273);
				if (!bLocal_224)
				{
					if (!SQUAD_IS_VALID(bLocal_292))
					{
						bLocal_292 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sBroken"));
						Function_374(&(Local_387[517]), bLocal_292, "h2_r3_wild_horse", 0, 0x5f5e100, 1);
						Function_370(&(Local_387[517]), 64);
					}
					SQUAD_JOIN(bLocal_273, bLocal_292);
					iLocal_532 = 0;
					bLocal_224 = true;
					return 1;
				}
				SQUAD_JOIN(bLocal_273, bLocal_292);
				return 1;
			}
		}
	}
	Function_235();
	Function_216(&iLocal_190);
	Function_425();
	Function_384("Horse_return");
	iLocal_531 = 5;
	Function_422();
	Function_349();
	return 0;
}

void Function_425() //Position: 0x1694A / 92490
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_FailsBreakinHors", "Home02_r3_FailsBreakinHors", false, 2, 1, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_426() //Position: 0x169A7 / 92583
{
	if (!bLocal_224)
	{
		if (!Function_272(&iLocal_237))
		{
			Function_216(&iLocal_237);
		}
		else if (Function_270(&iLocal_237) < fLocal_342)
		{
			Function_368("Home02_r3_JonLassosAhorse");
			Function_216(&iLocal_237);
		}
	}
	return;
}

bool Function_427() //Position: 0x169F4 / 92660
{
	if (GET_MOUNT(Global_34573) == bLocal_273)
	{
		Function_216(&iLocal_190);
		iLocal_225 = 0;
		return 1;
	}
	if (!iLocal_225)
	{
		iLocal_225 = 1;
	}
	if (GET_LASSO_TARGET(Global_34573) == bLocal_273)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_273)))
		{
			Function_346();
			bLocal_211 = ADD_BLIP_FOR_ACTOR(bLocal_273, 418, 0, 2, 0);
		}
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		if (Function_430())
		{
			return 0;
		}
		Function_235();
		Function_216(&iLocal_190);
		Function_368("Home02_r3_GoAfterOtherHors");
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			Function_384("Horse_return");
			iLocal_531 = 5;
			Function_349();
		}
		else
		{
			Function_368("Home02_r3_GoAfterOtherHors");
			Function_384("home02_ranch03_obj02");
			if (Function_386(Global_34573, bLocal_215) > 150.0f)
			{
				fLocal_335 = 150.0f;
				fLocal_336 = 225.0f;
			}
			else
			{
				fLocal_335 = (Function_386(Global_34573, bLocal_215) + 25.0f);
				fLocal_336 = (fLocal_335 + 50.0f);
			}
			iLocal_531 = 0;
			Function_434();
			Function_422();
			iLocal_225 = 0;
		}
	}
	else if (!ACTORS_IN_RANGE(Global_34573, bLocal_273, 10.0f))
	{
		Function_235();
		Function_216(&iLocal_190);
		Function_368("Home02_r3_GoAfterOtherHors");
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			Function_384("Horse_return");
			iLocal_531 = 5;
			Function_349();
		}
		else
		{
			Function_368("Home02_r3_GoAfterOtherHors");
			Function_384("home02_ranch03_obj02");
			if (Function_386(Global_34573, bLocal_215) > 150.0f)
			{
				fLocal_335 = 150.0f;
				fLocal_336 = 225.0f;
			}
			else
			{
				fLocal_335 = (Function_386(Global_34573, bLocal_215) + 25.0f);
				fLocal_336 = (fLocal_335 + 50.0f);
			}
			iLocal_531 = 0;
			Function_434();
		}
		Function_422();
		iLocal_225 = 0;
	}
	return 0;
}

void Function_428() //Position: 0x16C21 / 93217
{
	if (!bLocal_224)
	{
		if (!Function_272(&iLocal_237))
		{
			Function_216(&iLocal_237);
		}
		else if (Function_270(&iLocal_237) < fLocal_342)
		{
			bLocal_279 = Function_383(Local_4.f_180, Global_34573, 0, 0);
			if (ACTORS_IN_RANGE(Global_34573, bLocal_279, 15.0f))
			{
				if (Function_380())
				{
					Function_368("Home02_r3_ShoutsEnco");
				}
				else
				{
					Function_368("Home02_r3_RopeAHorse");
				}
			}
			else if (iLocal_221 <= 6)
			{
				Function_368("Home02_r3_2Long2Lasso");
			}
			else
			{
				Function_368("Home02_r3_Close2Horse");
			}
			Function_216(&iLocal_237);
		}
	}
	return;
}

void Function_429() //Position: 0x16CEE / 93422
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_RopeAHorse", "Home02_r3_RopeAHorse", false, 2, 1, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_430() //Position: 0x16D3F / 93503
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		bLocal_273 = GET_LASSO_TARGET(Global_34573);
		if (IS_ACTOR_VALID(bLocal_273))
		{
			if (IS_ACTOR_HORSE(bLocal_273))
			{
				if (SQUAD_GET(bLocal_273) != Local_4.f_180 || SQUAD_GET(bLocal_273) != bLocal_291)
				{
					SQUAD_JOIN(bLocal_273, bLocal_293);
					TASK_CLEAR(bLocal_273);
					switch (bLocal_210)
					{
						case 0x00000000:
							DECOR_SET_FLOAT(bLocal_273, "fHowLong", 25.0f);
							break;
						
						case 0x00000001:
							DECOR_SET_FLOAT(bLocal_273, "fHowLong", 35.0f);
							break;
						
						case 0x00000002:
							DECOR_SET_FLOAT(bLocal_273, "fHowLong", 45.0f);
							break;
						
						default:
							DECOR_SET_FLOAT(bLocal_273, "fHowLong", 25.0f);
							break;
					}
					iLocal_225 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_431() //Position: 0x16E18 / 93720
{
	Function_211(13, 1, 1);
	if (IS_BLIP_VALID(bLocal_211))
	{
		REMOVE_BLIP(bLocal_211);
	}
	if (IS_OBJECT_VALID(bLocal_214))
	{
		Function_348(bLocal_214);
		Function_204();
	}
	if (IS_BLIP_VALID(bLocal_213))
	{
		REMOVE_BLIP(bLocal_213);
	}
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		Function_347(Local_4.f_180);
	}
	if (SQUAD_IS_VALID(bLocal_291))
	{
		Function_347(bLocal_291);
	}
	return;
}

bool Function_432(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16E6F / 93807
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

int Function_433() //Position: 0x16EAF / 93871
{
	if (bLocal_210 <= 3 || (SQUAD_GET_SIZE(bLocal_292) + SQUAD_GET_SIZE(bLocal_290)) <= 3)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if ((ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(Global_34573)) != 0 && !SQUAD_GET(GET_MOUNT(Global_34573)) != bLocal_290) && !SQUAD_GET(GET_MOUNT(Global_34573)) != bLocal_292)
			{
				Function_346();
				Function_235();
				Function_216(&iLocal_190);
				iLocal_184 = 106;
				return 1;
			}
		}
	}
	return 0;
}

void Function_434() //Position: 0x16F13 / 93971
{
	Function_211(13, 0, 1);
	if (IS_BLIP_VALID(bLocal_211))
	{
		REMOVE_BLIP(bLocal_211);
	}
	if (IS_OBJECT_VALID(bLocal_214))
	{
		Function_348(bLocal_214);
		Function_204();
	}
	if (IS_BLIP_VALID(bLocal_213))
	{
		REMOVE_BLIP(bLocal_213);
	}
	if (SQUAD_IS_VALID(Local_4.f_180))
	{
		if (SQUAD_GET_SIZE(Local_4.f_180) >= 0)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_180, false))))
			{
				Function_347(Local_4.f_180);
				Function_435(Local_4.f_180, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
		}
	}
	if (SQUAD_IS_VALID(bLocal_291))
	{
		if (SQUAD_GET_SIZE(bLocal_291) >= 0)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_291, false))))
			{
				Function_347(bLocal_291);
				Function_435(bLocal_291, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
		}
	}
	return;
}

void Function_435(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x16FD5 / 94165
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

void Function_436() //Position: 0x170BF / 94399
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_SpotsPackHors", "Home02_r3_SpotsPackHors", false, 2, 1, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_437() //Position: 0x17116 / 94486
{
	Function_367();
	if (!bLocal_224)
	{
		if (SQUAD_GET(GET_MOUNT(Global_34573)) != Local_4.f_180 || SQUAD_GET(GET_MOUNT(Global_34573)) != bLocal_291)
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_187, 20.0f))
			{
				if (GET_TASK_STATUS(bLocal_187, 25) != 1)
				{
					TASK_FLEE_ACTOR(bLocal_187, Global_34573, 30.0f, 5.0f, 0, 1, 0);
				}
			}
			else if (!ACTORS_IN_RANGE(Global_34573, bLocal_187, 35.0f))
			{
				if (GET_TASK_STATUS(bLocal_187, 83) != 1)
				{
					TASK_GO_NEAR_ACTOR(bLocal_187, Global_34573, 25.0f, 4);
				}
			}
			else if (GET_TASK_STATUS(bLocal_187, 22) != 1)
			{
				TASK_FACE_ACTOR(bLocal_187, Global_34573, 1, 3212836864);
			}
		}
		else if (!GET_TASK_STATUS(bLocal_187, 67) != 1)
		{
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_187, Global_34573, 15.0f, 4);
			TASK_PRIORITY_SET(bLocal_187, true);
		}
	}
	return;
}

void Function_438() //Position: 0x171DE / 94686
{
	if (IS_ACTOR_VALID(bLocal_189))
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_189))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_189);
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_187))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 80)[02]))
		{
			if (!IS_ACTOR_RIDING(bLocal_187) && !IS_ACTOR_MOUNTED((*&Local_4 + 80)[02]))
			{
				ACTOR_MOUNT_ACTOR(bLocal_187, (*&Local_4 + 80)[02]);
				MEMORY_PREFER_RIDING(bLocal_187, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_187);
				GIVE_WEAPON_TO_ACTOR(bLocal_187, 21, 1.0f, 0, 1);
				ACTOR_SET_NEXT_WEAPON(bLocal_187, 21);
				ACTOR_START_FORCE_HOLSTER(bLocal_187, 0, 0);
			}
		}
	}
	return;
}

void Function_439() //Position: 0x1726A / 94826
{
	if (!SQUAD_IS_VALID(Local_4.f_92))
	{
		Function_336();
		if (SQUAD_IS_VALID(Local_4.f_92))
		{
			Function_335(Local_4.f_92, 0);
			Function_334(Local_4.f_92, 3);
			if (IS_ACTOR_VALID((*&Local_4 + 80)[02]))
			{
				Function_337((*&Local_4 + 80)[02], (*&Local_4 + 380)[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_92, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			bLocal_188 = (*&Local_4 + 80)[02];
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_188, 0);
			HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_188, 1);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_180))
	{
		Function_394();
		if (SQUAD_IS_VALID(Local_4.f_180))
		{
			bLocal_219 = false;
			while (bLocal_219 <= SQUAD_GET_SIZE(Local_4.f_180))
			{
				bLocal_279 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_180, bLocal_219);
				if (IS_ACTOR_VALID(bLocal_279))
				{
					if (IS_ACTOR_ALIVE(bLocal_279))
					{
						SNAP_OBJECT_TO_GROUND(bLocal_279, 100.0f, false, 1092616192);
					}
				}
				bLocal_219++;
			}
			if (SQUAD_IS_VALID(bLocal_291))
			{
				bLocal_219 = false;
				while (bLocal_219 <= SQUAD_GET_SIZE(bLocal_291))
				{
					bLocal_279 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_291, bLocal_219);
					if (IS_ACTOR_VALID(bLocal_279))
					{
						if (IS_ACTOR_ALIVE(bLocal_279))
						{
							SNAP_OBJECT_TO_GROUND(bLocal_279, 100.0f, false, 1092616192);
						}
					}
					bLocal_219++;
				}
			}
			Function_335(Local_4.f_180, 0);
			Function_399(Local_4.f_180, 1);
			bLocal_275 = (*&Local_4 + 96)[02];
			SQUAD_GOALS_CLEAR(Local_4.f_180);
			Function_317(Local_4.f_180);
			Function_395(Local_4.f_180);
			iLocal_331 = 6;
			iLocal_332 = 6;
		}
	}
	if (!IS_OBJECT_VALID(bLocal_215))
	{
		bLocal_215 = CREATE_POINT_IN_LAYOUT(bLocal_154, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(bLocal_215))
		{
		}
	}
	if (!SQUAD_IS_VALID(bLocal_290))
	{
		bLocal_290 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_154, "SGOAL"));
		if (SQUAD_IS_VALID(bLocal_290))
		{
			SQUAD_GOALS_CLEAR(bLocal_290);
		}
	}
	Function_374(&(Local_387[017]), bLocal_187, "Uncle", 1, 0x5f5e100, 1);
	Function_370(&(Local_387[017]), 1024);
	SET_ACTORS_HORSE(bLocal_187, bLocal_188);
	SET_MOST_RECENT_MOUNT(bLocal_187, bLocal_188);
	MEMORY_PREFER_RIDING(bLocal_187, true);
	Function_374(&(Local_387[117]), bLocal_188, "Uncle_Horse", 0, 0x5f5e100, 1);
	Function_370(&(Local_387[117]), 1024);
	Function_374(&(Local_387[417]), bLocal_290, "h2_r3_wild_horse", 0, 0x5f5e100, 1);
	Function_370(&(Local_387[417]), 64);
	ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
	return;
}

void Function_440(bool bParam0, int iParam1) //Position: 0x174CF / 95439
{
	bool bVar0;
	bool bVar1;
	
	switch (iLocal_331)
	{
		case 0x00000006:
			if (Function_272(&iLocal_249))
			{
				if (Function_270(&iLocal_249) < 15.0f)
				{
					if (SQUAD_GOAL_IS_VALID(bLocal_294))
					{
						SQUAD_GOAL_REMOVE(Local_4.f_180, bLocal_294);
						bLocal_294 = "";
						Function_366(&iLocal_249);
					}
				}
			}
			if (SQUAD_GET_SIZE(bParam0) >= 1)
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(bParam0))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (Function_441(iParam1, bVar1) < 50.0f || IS_ACTOR_IN_VOLUME(bVar1, Local_4.f_288))
						{
							TASK_CLEAR(bVar1);
							SQUAD_LEAVE(bVar1);
							SQUAD_JOIN(bVar1, bLocal_291);
						}
					}
					bVar0++;
				}
			}
			break;
	}
	return;
}

float Function_441(bool bParam0, bool bParam1) //Position: 0x17577 / 95607
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_359(bParam0);
			vVar0 = { StackVal, StackVal, Function_359(bParam0) };
			Function_359(bParam1);
			vVar3 = { StackVal, StackVal, Function_359(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_442() //Position: 0x17612 / 95762
{
	if (!SQUAD_IS_VALID(bLocal_293))
	{
		bLocal_293 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sLassoedSquad"));
	}
	else if (SQUAD_GET_SIZE(bLocal_293) >= 0)
	{
		bLocal_219 = false;
		while (bLocal_219 <= SQUAD_GET_SIZE(bLocal_293))
		{
			bLocal_279 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_293, bLocal_219);
			if (IS_ACTOR_ALIVE(bLocal_279))
			{
				if (GET_LASSO_USER(bLocal_279) == Global_34573)
				{
					if (GET_TASK_STATUS(bLocal_279, 0) != 1)
					{
						bLocal_222 = TASK_SEQUENCE_OPEN();
						TASK_HORSE_ACTION(false, 0);
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_HORSE_ACTION(false, 0);
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_HORSE_ACTION(false, 0);
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_279, bLocal_222);
						TASK_SEQUENCE_RELEASE(bLocal_222, 1);
						TASK_PRIORITY_SET(bLocal_279, true);
					}
				}
				else
				{
					TASK_CLEAR(bLocal_279);
					SQUAD_JOIN(bLocal_279, bLocal_291);
				}
			}
			bLocal_219++;
		}
	}
	return;
}

void Function_443(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1792D / 96557
{
	bool bVar0;
	bool bVar1;
	
	switch (iLocal_332)
	{
		case 0x00000006:
			SQUAD_GOAL_ADD_GENERAL_TASK(bParam1, false, 1, 4294967295);
			vLocal_264 = { 0.0f, 0.0f, 0.0f };
			TASK_FOLLOW_OBJECT(false, bParam2, &vLocal_264, 0, 0, 0, 0, 0, 0, 1);
			iLocal_332 = 7;
			break;
		
		case 0x00000007:
			if (SQUAD_GET_SIZE(bParam1) >= 0)
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(bParam1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (Function_358(bVar1, bParam2, 50.0f))
						{
							if (!IS_ACTOR_IN_VOLUME(bVar1, Local_4.f_288))
							{
								TASK_CLEAR(bVar1);
								SQUAD_LEAVE(bVar1);
								SQUAD_JOIN(bVar1, bParam0);
							}
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x00000068:
			break;
	}
	return;
}

void Function_444() //Position: 0x179D9 / 96729
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		switch (iLocal_209)
		{
			case 0x00000000:
				iLocal_209++;
				break;
			
			case 0x00000001:
				if (!ACTOR_HAS_WEAPON(Global_34573, 21))
				{
					GIVE_WEAPON_TO_ACTOR(Global_34573, 21, false, 1, 1);
				}
				iLocal_209++;
				break;
			
			case 0x00000002:
				if (ACTOR_HAS_WEAPON(Global_34573, 21))
				{
					if (!ACTOR_HAS_WEAPON_SET_AS_NEXT(Global_34573, 21))
					{
						ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
					}
					iLocal_209++;
				}
				break;
			
			case 0x00000003:
				if (ACTOR_HAS_WEAPON_SET_AS_NEXT(Global_34573, 21))
				{
					iLocal_209++;
				}
				break;
			
			case 0x00000004:
				iLocal_209++;
				break;
			}
	}
	return;
}

void Function_445(var uParam0, bool bParam1, int iParam2) //Position: 0x17A7E / 96894
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	if (IS_OBJECT_VALID(*bParam1))
	{
		if (SQUAD_IS_VALID(*uParam0))
		{
			if (!SQUAD_GET_SIZE(*uParam0) != 0)
			{
				SQUAD_COMPUTE_CENTROID(*uParam0, &vVar0);
				Function_446(*uParam0);
				vVar3 = { StackVal, StackVal, Function_446(*uParam0) };
				vVar6 = { 0.0f, 0.0f, 0.0f };
				vVar6.f_4 = UNK_0x9C40E671(&vVar3);
				SET_OBJECT_POSITION(*bParam1, vVar0);
				SET_OBJECT_ORIENTATION(*bParam1, vVar6);
				STREAMING_LOAD_BOUNDS(vVar0, 100.0f, 0);
			}
			GET_OBJECT_POSITION(*bParam1, iParam2);
		}
	}
	return;
}

vector3 Function_446(bool bParam0) //Position: 0x17AFA / 97018
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		UNK_0x44986367(&vVar2, Function_447(bVar1));
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
		bVar0++;
	}
	vVar5.x = (vVar5.x / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar5.f_4 = 0.0f;
	vVar5.f_8 = (vVar5.z / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	return StackVal, StackVal, vVar5;
}

var Function_447(bool bParam0) //Position: 0x17B5E / 97118
{
	return GET_HEADING(bParam0);
}

void Function_448() //Position: 0x17B69 / 97129
{
	if (iLocal_221 > 10)
	{
		if (!Function_272(&iLocal_246))
		{
			Function_216(&iLocal_246);
		}
		else if (Function_270(&iLocal_246) < 1.0f)
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_187, 20.0f))
			{
				SAY_SINGLE_LINE_SCRIPTED(Global_34573, "Home02_r3_ShutIt", bLocal_187, 0, 1, 0, 1, 4);
				Function_366(&iLocal_246);
				Function_216(&iLocal_237);
				iLocal_221 = RAND_INT_RANGE(3, 9);
				fLocal_342 = RAND_FLOAT_RANGE(5.0f, 7.0f);
			}
			else
			{
				iLocal_221 = 9;
				Function_216(&iLocal_237);
			}
		}
	}
	return;
}

void Function_449() //Position: 0x17BE7 / 97255
{
	if (Function_214(Global_30717[1]))
	{
		Function_344(&uLocal_281);
	}
	if (iLocal_184 < 3 && iLocal_184 > 105)
	{
		Function_413();
		if (iLocal_184 >= 7)
		{
			if (!bLocal_229)
			{
				Function_462();
			}
			else
			{
				if (SQUAD_IS_VALID(Local_4.f_180))
				{
					Function_411();
				}
				Function_445(&Local_4 + 180, &bLocal_215, &iLocal_252);
			}
		}
		Function_444();
	}
	switch (iLocal_184)
	{
		case 0x00000000:
			Function_340(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_ACTOR_HEALTH(bLocal_187, GET_ACTOR_MAX_HEALTH(bLocal_187));
			if (IS_ACTOR_VALID(bLocal_189))
			{
				TASK_STAND_STILL(bLocal_189, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_189, true);
			}
			if (Function_275(&Local_155))
			{
				Function_337(Global_34573, (*&Local_4 + 336)[1], 0, 1, 0);
				Function_337(bLocal_187, (*&Local_4 + 336)[3], 0, 1, 0);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_339();
			if (Function_275(&Local_155))
			{
				bLocal_185 = Global_30637[0];
				if (!Function_214(bLocal_185))
				{
					Function_338(&Local_155);
				}
				Function_216(&iLocal_190);
				iLocal_184 = 1;
			}
			else
			{
				Function_216(&iLocal_190);
				iLocal_184 = 2;
			}
			Function_216(&iLocal_190);
			iLocal_184 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_214(bLocal_185) || bLocal_185 != 4294967295))
			{
				Function_461();
				if (IS_ACTOR_VALID(bLocal_187))
				{
					Function_349();
					bLocal_208 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, bLocal_188, 0, 1, 2, 2147483647);
					TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_187, bLocal_208);
					TASK_SEQUENCE_RELEASE(bLocal_208, 1);
					SET_ACTOR_MAX_SPEED(bLocal_187, 4);
				}
				TASK_CLEAR(Global_34573);
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 5.0f, 0);
				Function_337(bLocal_188, (*&Local_4 + 336)[7], 1, 1, 1);
				Function_337(bLocal_189, (*&Local_4 + 336)[5], 1, 1, 1);
				Function_216(&iLocal_190);
				iLocal_184 = 2;
			}
			break;
		
		case 0x00000002:
			Function_230(iLocal_183);
			Function_400(StackVal, StackVal, Function_230(iLocal_183), iLocal_183, Global_30637[0], Function_233(iLocal_183), 0);
			Function_390();
			iLocal_209 = 0;
			iLocal_217 = 0;
			bLocal_210 = false;
			Function_331(&iLocal_207, 1, 0, 4294967295, 4294967295);
			Function_216(&iLocal_190);
			iLocal_184 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!HUD_IS_FADING())
			{
				Function_460();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_216(&iLocal_190);
				iLocal_184 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_270(&iLocal_190) <= 5.0f)
			{
				Function_384("home02_ranch03_obj11");
				Function_216(&iLocal_190);
				Function_216(&fLocal_193);
				Function_216(&iLocal_196);
				iLocal_184 = 18;
			}
			break;
		
		case 0x00000012:
			if (!ACTORS_IN_RANGE(Global_34573, bLocal_187, 100.0f))
			{
				Function_224("Uncle_abandoned");
				bLocal_205 = true;
			}
			if (IS_ACTOR_RIDING(bLocal_187))
			{
				if (!iLocal_230)
				{
					AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_187, Global_34573, -1.0f, 1);
					iLocal_230 = 1;
				}
				MEMORY_PREFER_RIDING(bLocal_187, true);
			}
			if (IS_ACTOR_RIDING(Global_34573) && IS_ACTOR_RIDING(bLocal_187))
			{
				Function_331(&iLocal_207, 3, 0, 4294967295, 4294967295);
				bLocal_189 = GET_MOUNT(Global_34573);
				Function_458(bLocal_189, 0);
				if (IS_ACTOR_VALID(bLocal_187))
				{
					Function_431();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_187, Local_4.f_592, 4, 0, 0, 0, false);
					SET_ACTOR_MAX_SPEED(bLocal_187, 4);
					iLocal_530 = 0;
				}
				AI_GOAL_LOOK_CLEAR(bLocal_187);
				iLocal_230 = 0;
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_187, -1.0f, -1.0f, 4, 1, 0);
				Function_457();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_216(&iLocal_190);
				iLocal_184 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_270(&iLocal_190) <= 5.0f)
			{
				Function_384("home02_ranch03_obj01");
				Function_216(&iLocal_190);
				Function_216(&fLocal_193);
				Function_216(&iLocal_196);
				iLocal_184 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (!Function_420(&fLocal_193, 60.0f, 200.0f, bLocal_187, "Uncle_return", "Uncle_abandoned", &bLocal_205, 0, bLocal_154, Local_4, 325, 1))
				{
					Function_211(13, 1, 1);
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_187, 200.0f))
				{
					Function_224("Uncle_abandoned");
					bLocal_205 = true;
				}
				if (IS_ACTOR_VALID(bLocal_189))
				{
					if (IS_ACTOR_ALIVE(bLocal_189))
					{
						Function_349();
						Function_384("Horse_return");
					}
					else
					{
						Function_346();
						Function_384("Horse_find");
					}
				}
				else
				{
					Function_346();
					Function_384("Horse_find");
				}
			}
			Function_451();
			Function_450();
			if (bLocal_229)
			{
				if (IS_OBJECT_VALID(bLocal_215))
				{
					if (Function_358(Global_34573, bLocal_215, 40.0f))
					{
						if (IS_BLIP_VALID(bLocal_211))
						{
							REMOVE_BLIP(bLocal_211);
						}
						if (IS_OBJECT_VALID(bLocal_214))
						{
							DESTROY_OBJECT(bLocal_214);
						}
						Function_235();
						Function_216(&iLocal_190);
						iLocal_184 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_187);
			iLocal_199[0] = 1;
			Function_216(&iLocal_190);
			iLocal_183 = 1;
			iLocal_184 = 0;
			break;
	}
	return;
}

void Function_450() //Position: 0x1808D / 98445
{
	switch (iLocal_530)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(bLocal_187, Local_4.f_312))
			{
				DESTROY_VOLUME(Local_4.f_312);
				MEMORY_REPORT_POSITION_AUTO(bLocal_187, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_180, true), true);
				TASK_GO_NEAR_ACTOR(bLocal_187, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_180, true), 50.0f, 3);
				CLEAR_ACTOR_MAX_SPEED(bLocal_187);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_187);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_187, Local_4.f_328, 4, 1);
				iLocal_530 = 1;
			}
			else if (GET_TASK_STATUS(bLocal_187, 43) != 1)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_187, Local_4.f_592, 4, 0, 0, 0, false);
				SET_ACTOR_MAX_SPEED(bLocal_187, 4);
			}
			break;
		
		case 0x00000001:
			if (ACTORS_IN_RANGE(Global_34573, bLocal_187, 20.0f))
			{
				if (GET_TASK_STATUS(bLocal_187, 83) == 0)
				{
					TASK_FOLLOW_ACTOR(bLocal_187, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_180, true));
					iLocal_530 = 2;
				}
				else if (GET_TASK_STATUS(bLocal_187, 6) == 1)
				{
					TASK_GO_NEAR_ACTOR(bLocal_187, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_180, true), 50.0f, 3);
					CLEAR_ACTOR_MAX_SPEED(bLocal_187);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_187, 6) != 1)
			{
				TASK_STAND_STILL(bLocal_187, -1.0f, 0, 0);
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_451() //Position: 0x18191 / 98705
{
	if (!iLocal_227)
	{
		if (!ACTORS_IN_RANGE(Global_34573, bLocal_187, 30.0f))
		{
			bLocal_219 = Function_389(Global_34573, Local_4.f_592);
			GET_PATH_POINT(Local_4.f_592, bLocal_219, &vLocal_270);
			fLocal_341 = Function_456(StackVal, StackVal, Global_34573, vLocal_270);
			if (fLocal_341 < 25.0f)
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_WrongDirection", Function_53(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
				iLocal_227 = 1;
			}
			else if (Function_455(Global_34573, bLocal_187, Local_4.f_592))
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_2FarAhead", Function_53(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
				iLocal_227 = 1;
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_2FarBehind", Function_53(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
				iLocal_227 = 1;
			}
		}
	}
	if (!IS_ACTOR_RIDING(Global_34573))
	{
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_272(&iLocal_243))
		{
			Function_366(&iLocal_243);
		}
	}
	else
	{
		if (iLocal_226)
		{
			iLocal_226 = 0;
		}
		if (!Function_272(&iLocal_243))
		{
			Function_216(&iLocal_243);
		}
		if (Function_270(&iLocal_243) < 4.0f)
		{
			if (!Function_272(&iLocal_196))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_187, 30.0f))
				{
					if (iLocal_227)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_187, "Home02_r3_ComesBakUncle", Function_53(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
						RESTART_SCRIPTED_CONVERSATION();
						Function_216(&iLocal_243);
						iLocal_227 = 0;
					}
					else if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						switch (iLocal_220)
						{
							case 0x00000000:
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_226 = 1;
									Function_454();
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_220 = 99;
									}
								}
								break;
							
							case 0x00000001:
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_226 = 1;
									Function_453();
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_220 = 99;
									}
								}
								break;
							
							case 0x00000002:
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_226 = 1;
									Function_452();
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_220 = 99;
									}
								}
								break;
							
							case 0x00000063:
								break;
							
							default:
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_220 = 99;
									}
								}
								break;
							}
						}
					}
				}
			}
	}
	return;
}

void Function_452() //Position: 0x183C0 / 99264
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v3_AA", "Home02_r3_HorseBanter_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v3_AB1", "Home02_r3_HorseBanter_v3_AB1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v3_AB2", "Home02_r3_HorseBanter_v3_AB2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v3_AB3", "Home02_r3_HorseBanter_v3_AB3", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v3_AC", "Home02_r3_HorseBanter_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v3_AD", "Home02_r3_HorseBanter_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2790", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v3_AE", "Home02_r3_HorseBanter_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v3_AF", "Home02_r3_HorseBanter_v3_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v3_AG", "Home02_r3_HorseBanter_v3_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v3_AH1", "Home02_r3_HorseBanter_v3_AH1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v3_AH2", "Home02_r3_HorseBanter_v3_AH2", true, 1, 0, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_453() //Position: 0x186FA / 100090
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v2_AA", "Home02_r3_HorseBanter_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v2_AB", "Home02_r3_HorseBanter_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v2_AC", "Home02_r3_HorseBanter_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v2_AD", "Home02_r3_HorseBanter_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v2_AE", "Home02_r3_HorseBanter_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v2_AF", "Home02_r3_HorseBanter_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_910", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v2_AG", "Home02_r3_HorseBanter_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v2_AH1", "Home02_r3_HorseBanter_v2_AH1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v2_AH2", "Home02_r3_HorseBanter_v2_AH2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v2_AI", "Home02_r3_HorseBanter_v2_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v2_AJ", "Home02_r3_HorseBanter_v2_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v2_AK", "Home02_r3_HorseBanter_v2_AK", false, 1, 0, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_454() //Position: 0x18A72 / 100978
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v1_AA", "Home02_r3_HorseBanter_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4250", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v1_AB", "Home02_r3_HorseBanter_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v1_AC", "Home02_r3_HorseBanter_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v1_AD", "Home02_r3_HorseBanter_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v1_AE1", "Home02_r3_HorseBanter_v1_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v1_AE2", "Home02_r3_HorseBanter_v1_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v1_AF", "Home02_r3_HorseBanter_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2230", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_HorseBanter_v1_AG", "Home02_r3_HorseBanter_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r3_HorseBanter_v1_AH", "Home02_r3_HorseBanter_v1_AH", true, 1, 0, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_455(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18D3B / 101691
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = Function_389(bParam0, bParam2);
	iVar1 = Function_389(bParam1, bParam2);
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	if (iVar0 == iVar1)
	{
		GET_PATH_POINT(bParam2, iVar0 + 1, &vVar4);
		fVar2 = Function_456(StackVal, StackVal, bParam0, vVar4);
		fVar3 = Function_456(StackVal, StackVal, bParam1, vVar4);
		if (fVar2 > fVar3)
		{
			return 1;
		}
		return 0;
	}
	return 0;
	return 0;
}

var Function_456(bool bParam0, vector3 vParam1) //Position: 0x18D9C / 101788
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_360(bParam0);
		vVar0 = { StackVal, StackVal, Function_360(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_457() //Position: 0x18E16 / 101910
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_SetOffHorses", "Home02_r3_SetOffHorses", false, 2, 1, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_458(var uParam0, int iParam1) //Position: 0x18E6B / 101995
{
	Function_459(iParam1);
	Global_12976.f_72 = uParam0;
	return;
}

void Function_459(bool bParam0) //Position: 0x18E7D / 102013
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

void Function_460() //Position: 0x19033 / 102451
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r3_WaitJonMount", "Home02_r3_WaitJonMount", false, 1, 1, 0, 1);
		Function_363(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_461() //Position: 0x19088 / 102536
{
	if (!SQUAD_IS_VALID(Local_4.f_92))
	{
		Function_336();
		if (SQUAD_IS_VALID(Local_4.f_92))
		{
			Function_335(Local_4.f_92, 0);
			Function_334(Local_4.f_92, 3);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_92, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			bLocal_188 = (*&Local_4 + 80)[02];
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_188, 0);
			HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_188, 1);
		}
	}
	Function_374(&(Local_387[017]), bLocal_187, "Uncle", 1, 0x5f5e100, 1);
	Function_370(&(Local_387[017]), 1024);
	SET_ACTORS_HORSE(bLocal_187, bLocal_188);
	SET_MOST_RECENT_MOUNT(bLocal_187, bLocal_188);
	Function_374(&(Local_387[117]), bLocal_188, "Uncle_Horse", 0, 0x5f5e100, 1);
	Function_370(&(Local_387[117]), 1024);
	ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
	return;
}

void Function_462() //Position: 0x1914E / 102734
{
	GET_OBJECT_POSITION(Local_4.f_588, &vLocal_270);
	STREAMING_LOAD_BOUNDS(vLocal_270, 100.0f, 0);
	if (STREAMING_ARE_BOUNDS_LOADED(vLocal_270, 90.0f))
	{
		if (!SQUAD_IS_VALID(Local_4.f_180))
		{
			Function_394();
			if (SQUAD_IS_VALID(Local_4.f_180))
			{
				Function_335(Local_4.f_180, 0);
				Function_399(Local_4.f_180, 1);
				bLocal_275 = (*&Local_4 + 96)[02];
				SQUAD_GOALS_CLEAR(Local_4.f_180);
				Function_317(Local_4.f_180);
				Function_395(Local_4.f_180);
				iLocal_331 = 6;
				iLocal_332 = 6;
			}
		}
		if (!IS_OBJECT_VALID(bLocal_215))
		{
			GET_OBJECT_POSITION(Local_4.f_588, &vLocal_270);
			Function_75();
			bLocal_215 = CREATE_POINT_IN_LAYOUT(bLocal_154, Function_53(), vLocal_270, Function_75());
			if (IS_OBJECT_VALID(bLocal_215))
			{
			}
		}
		bLocal_229 = true;
	}
	return;
}

void Function_463() //Position: 0x1920B / 102923
{
	switch (iLocal_184)
	{
		case 0x00000000:
			Function_484(&Local_155, 1);
			if (!IS_LAYOUTREF_VALID(bLocal_154))
			{
				bLocal_154 = CREATE_LAYOUT("Home02_Ranch03_DynamicLayout");
			}
			Function_483("NRT_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_207 = 0;
			Function_480();
			Function_478(32768);
			if (!IS_ACTOR_VALID(bLocal_187))
			{
				bLocal_187 = Function_289(13, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else if ((!Function_275(&Local_155) && Local_155.f_24 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/UNCLE_03/UNCLE_03"))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -18,17371f, 125,9829f, 1444,402f, -215,4216f, 1, true, 1);
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_187, -1.0f, 0, 0);
				Global_63097 = 1;
				iLocal_184 = 6;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/UNCLE_03/UNCLE_03"))
				{
					LOG_ERROR("/cutscene/UNCLE_03/UNCLE_03 cutscene does not exist");
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				iLocal_184 = 8;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_216(&iLocal_190);
				iLocal_184 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_263("$/cutscene/UNCLE_03/UNCLE_03", &iLocal_176, &Local_155, &iLocal_183, 106362, 56317, 51462, 106203, 106158, 106137, 0, 1, 1, 2, 2, 0, 1))
			{
			}
			break;
		
		case 0x00000008:
			if (Function_473())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_308();
				}
				iLocal_184 = 9;
			}
			break;
		
		case 0x00000009:
			Function_468();
			iLocal_183 = 0;
			iLocal_184 = 0;
			Function_465(&Local_155, &iLocal_183, &iLocal_184);
			Function_464(StackVal, StackVal, StackVal, StackVal, StackVal, Function_308(), Local_155);
			switch (iLocal_183)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_464(struct<25> Param0) //Position: 0x19445 / 103493
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_183 = 0;
			break;
		
		case 0x00000002:
			iLocal_183 = 101;
			break;
	}
}

void Function_465(int iParam0, int iParam1, int iParam2) //Position: 0x1946F / 103535
{
	if (Function_275(iParam0))
	{
		*iParam1 = Function_467(iParam0);
		if (*iParam1 == 4294967295)
		{
			*iParam1 = 0;
		}
		if (*iParam1 == 99)
		{
			*iParam1 = 0;
			*iParam2 = 0;
		}
		Function_466();
	}
	return;
}

void Function_466() //Position: 0x194A3 / 103587
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

var Function_467(int iParam0) //Position: 0x194F4 / 103668
{
	if (Function_275(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_468() //Position: 0x1950C / 103692
{
	if (IS_LAYOUTREF_VALID(Local_4))
	{
		bLocal_186 = CREATE_OBJECT_ITERATOR(Local_4);
	}
	CAMERA_RESET(0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	DECOR_SET_BOOL(Global_34573, "CanBeLasso", false);
	SET_CRIPPLE_ENABLE(bLocal_187, 0);
	SET_ACTOR_FACTION(bLocal_187, 20);
	TASK_PRIORITY_SET(bLocal_187, true);
	AI_BEHAVIOR_SET_ALLOW(bLocal_187, 0, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_187, 50.0f);
	SET_ACTOR_HEALTH(bLocal_187, GET_ACTOR_MAX_HEALTH(bLocal_187));
	SET_ACTOR_UPDATE_PRIORITY(bLocal_187, false);
	RESET_ACTOR_GAITS(bLocal_189, 0);
	TASK_PRIORITY_SET(bLocal_189, true);
	TASK_STAND_STILL(bLocal_189, -1.0f, 0, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_189, 50.0f);
	SET_ACTOR_HEALTH(bLocal_189, GET_ACTOR_MAX_HEALTH(bLocal_189));
	SET_ACTOR_UPDATE_PRIORITY(bLocal_189, false);
	Function_472(&iLocal_231);
	Function_471();
	Function_472(&iLocal_190);
	Function_472(&fLocal_193);
	Function_472(&iLocal_196);
	Function_469(&uLocal_347, bLocal_154);
	Function_374(&(Local_387[617]), bLocal_277, "Son", 1, 0x5f5e100, 1);
	Function_374(&(Local_387[717]), bLocal_278, "Wife", 1, 0x5f5e100, 1);
	Function_337(bLocal_277, (*&Local_4 + 336)[8], 1, 1, 1);
	Function_337(bLocal_278, (*&Local_4 + 336)[8], 1, 1, 1);
	return;
}

int Function_469(var uParam0, bool bParam1) //Position: 0x1961C / 103964
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_470(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_470(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_470(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_470(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_470(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x19CBC / 105660
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

void Function_471() //Position: 0x19D7F / 105855
{
	bool bVar0;
	
	bVar0 = 976;
	while (bVar0 < 1007)
	{
		if (GET_ACTORENUM_SPECIES(bVar0) == 23)
		{
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bVar0);
		}
		bVar0++;
	}
	return;
}

void Function_472(int iParam0) //Position: 0x19DAA / 105898
{
	if (!Function_272(iParam0))
	{
		Function_217(iParam0, 0.0f);
	}
	return;
}

bool Function_473() //Position: 0x19DBF / 105919
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_298(1))
		{
			return 0;
		}
		if (!Function_305())
		{
			return 0;
		}
		if (!Function_299(&bLocal_162))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_187))
		{
			bLocal_187 = Function_289(13, 0, 1, 0, 0, 0, 0, 0, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_187, true);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_187, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_277))
		{
			bLocal_277 = Function_289(12, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_277, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_278))
		{
			bLocal_278 = Function_289(11, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_278, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_189))
		{
			bLocal_189 = Function_282(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_189, 1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_474() //Position: 0x19E99 / 106137
{
	if (Function_307())
	{
		if (Function_280())
		{
			return 1;
		}
	}
	return 0;
}

int Function_475() //Position: 0x19EAE / 106158
{
	Function_311(1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
	Function_468();
	iLocal_183 = 0;
	iLocal_184 = 2;
	Function_465(&Local_155, &iLocal_183, &iLocal_184);
	Function_464(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_155);
	return 1;
}

int Function_476() //Position: 0x19EDB / 106203
{
	Function_461();
	Function_337(bLocal_189, (*&Local_4 + 336)[4], 1, 1, 1);
	Function_337(bLocal_188, (*&Local_4 + 336)[7], 1, 1, 1);
	TASK_STAND_STILL(bLocal_189, -1.0f, 0, 0);
	if (IS_ACTOR_VALID(bLocal_188))
	{
		TASK_STAND_STILL(bLocal_188, -1.0f, 0, 0);
	}
	if (IS_ACTOR_VALID(bLocal_187))
	{
		Function_349();
		bLocal_208 = TASK_SEQUENCE_OPEN();
		TASK_MOUNT(false, bLocal_188, 0, 1, 2, 2147483647);
		TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_187, bLocal_208);
		TASK_SEQUENCE_RELEASE(bLocal_208, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_187, 1, false);
		SET_ACTOR_MAX_SPEED(bLocal_187, 4);
	}
	TASK_CLEAR(Global_34573);
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 5.0f, 0);
	return 1;
}

int Function_477() //Position: 0x19F7A / 106362
{
	Function_340(0);
	Function_328(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_326(StackVal, StackVal, bLocal_154, *(&Global_3422[5640] + 52), &iLocal_176 + 20, 1, 0, 0, 0, 1, 1);
	Function_339();
	Function_185(1, 0, 1);
	Function_331(&iLocal_207, 0, 0, 4294967295, 4294967295);
	return 1;
}

void Function_478(int iParam0) //Position: 0x19FC0 / 106432
{
	Function_479(&Global_28842, iParam0);
	return;
}

void Function_479(var uParam0, var uParam1) //Position: 0x19FCE / 106446
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_480() //Position: 0x19FF1 / 106481
{
	Function_481(&bLocal_162, "home02ranch03", 10, 0);
	Function_481(&bLocal_162, "nminigames", 10, 0);
	return;
}

var Function_481(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1A025 / 106533
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_482(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_303(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_482(var uParam0, int iParam1, int iParam2) //Position: 0x1A05D / 106589
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_303(uParam0[iVar03], 4);
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

void Function_483(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1A121 / 106785
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_332(uParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

void Function_484(int iParam0, bool bParam1) //Position: 0x1A13D / 106813
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_490(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_275(iParam0))
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
	if (!Function_275(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_206();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_235();
	Function_266();
	Function_224("");
	Function_489(0);
	Function_488();
	Function_199();
	Function_198();
	ENABLE_JOURNAL_REPLAY(0);
	Function_487();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_341(0, 0x40400000);
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
	Function_486(13);
	Function_486(14);
	Function_486(25);
	Function_486(24);
	Function_486(12);
	Function_486(27);
	Function_486(26);
	Function_486(15);
	Function_485();
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

void Function_485() //Position: 0x1A561 / 107873
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

void Function_486(int iParam0) //Position: 0x1A5D5 / 107989
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_487() //Position: 0x1A5F5 / 108021
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

void Function_488() //Position: 0x1A632 / 108082
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_489(int iParam0) //Position: 0x1A646 / 108102
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_202())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_490(int iParam0, int iParam1) //Position: 0x1A67B / 108155
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
			Function_491(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_491(int iParam0) //Position: 0x1A6FD / 108285
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

void Function_492() //Position: 0x1A74B / 108363
{
	return;
}

bool Function_493(int iParam0) //Position: 0x1A751 / 108369
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_494(int iParam0) //Position: 0x1A76F / 108399
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
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
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
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
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
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
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
			Function_495(iParam0, 1);
			return 1;
		}
	}
	Function_495(iParam0, 0);
	return 0;
}

void Function_495(int iParam0, bool bParam1) //Position: 0x1A93B / 108859
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

bool Function_496(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1A95F / 108895
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
		Function_495(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_515(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_514(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_514(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_500(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_495(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_499(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_498(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_499(&bVar17);
														strcpy(&Var18, "", 64);
														Function_497(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_224(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_498(StackVal, iParam2, bVar17);
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
	Function_495(iParam2, 0);
	return 0;
}

void Function_497(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1ACF8 / 109816
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

void Function_498(var uParam0, int iParam1, bool bParam2) //Position: 0x1ADE3 / 110051
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

void Function_499(bool bParam0) //Position: 0x1AE59 / 110169
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_500(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1AE7B / 110203
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
			return Function_511(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_504(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_511(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_501(iParam0, bVar2);
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
						bVar2 = Function_511(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_501(iParam0, bVar2);
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

var Function_501(int iParam0, bool bParam1) //Position: 0x1AFC5 / 110533
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
				bParam1 = Function_503(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_502(16);
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
				bParam1 = Function_503(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_502(256);
			}
		}
	}
	return bParam1;
}

bool Function_502(int iParam0) //Position: 0x1B0F8 / 110840
{
	return 2 | iParam0;
}

int Function_503(int iParam0) //Position: 0x1B102 / 110850
{
	return 4 | iParam0;
}

int Function_504(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1B10C / 110860
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
				iParam3 = Function_510(iParam0, iParam1, bParam4);
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
			return Function_502(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_505(iParam0, iParam1, 0, bParam4);
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
			return Function_502(16);
		}
	}
	return 0;
}

int Function_505(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1B1BE / 111038
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_509(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_508(iVar0, 3, 1, bParam3))
			{
				if (!Function_514(iParam0, 8, 1))
				{
					return Function_507(64, 1024, bParam2);
				}
			}
			return Function_506(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_508(iVar0, 2, 1, bParam3))
			{
				if (!Function_514(iParam0, 32, 1))
				{
					return Function_507(64, 1024, bParam2);
				}
			}
			return Function_506(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_508(iVar0, 1, 1, bParam3))
			{
				if (!Function_514(iParam0, 64, 1))
				{
					return Function_507(64, 1024, bParam2);
				}
			}
			return Function_506(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_508(iVar0, 3, 1, bParam3))
			{
				if (!Function_514(iParam0, 128, 1))
				{
					return Function_507(64, 1024, bParam2);
				}
			}
			return Function_506(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_508(iVar0, 1, 1, bParam3))
			{
				if (!Function_514(iParam0, 1024, 1))
				{
					return Function_507(64, 1024, bParam2);
				}
			}
			return Function_506(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_508(iVar0, 1, 1, bParam3))
			{
				if (!Function_514(iParam0, 1024, 1))
				{
					return Function_507(64, 1024, bParam2);
				}
			}
			return Function_506(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_506(int iParam0, int iParam1, bool bParam2) //Position: 0x1B378 / 111480
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_507(int iParam0, int iParam1, bool bParam2) //Position: 0x1B38D / 111501
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_508(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B3A2 / 111522
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_509(int iParam0) //Position: 0x1B3BF / 111551
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

int Function_510(var uParam0, int iParam1, bool bParam2) //Position: 0x1B42E / 111662
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_509(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_508(iVar0, 3, 1, bParam2))
			{
				if (!Function_514(uParam0, 8, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000009:
			if (Function_508(iVar0, 3, 1, bParam2))
			{
				if (!Function_514(uParam0, 8, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x0000006E:
			if (Function_508(iVar0, 2, 1, bParam2))
			{
				if (!Function_514(uParam0, 16, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x0000005B:
			if (Function_508(iVar0, 2, 1, bParam2))
			{
				if (!Function_514(uParam0, 32, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000031:
			if (Function_508(iVar0, 1, 1, bParam2))
			{
				if (!Function_514(uParam0, 64, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000007:
			if (Function_508(iVar0, 3, 1, bParam2))
			{
				if (!Function_514(uParam0, 128, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000008:
			if (Function_508(iVar0, 2, 1, bParam2))
			{
				if (!Function_514(uParam0, 256, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000014:
			if (Function_508(iVar0, 1, 1, bParam2))
			{
				if (!Function_514(uParam0, 512, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000018:
			if (Function_508(iVar0, 1, 1, bParam2))
			{
				if (!Function_514(uParam0, 512, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000057:
			if (Function_508(iVar0, 1, 1, bParam2))
			{
				if (!Function_514(uParam0, 1024, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000058:
			if (Function_508(iVar0, 1, 1, bParam2))
			{
				if (!Function_514(uParam0, 1024, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_511(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1B649 / 112201
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
						return Function_510(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_514(iParam0, 2, 1))
					{
						return Function_503(8);
					}
					return Function_502(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_514(iParam0, 4, 1))
					{
						return Function_503(16);
					}
					return Function_502(16);
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
							return Function_505(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_514(iParam0, 2, 1))
						{
							return Function_503(128);
						}
						return Function_502(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_514(iParam0, 4, 1))
						{
							return Function_503(256);
						}
						return Function_502(256);
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
						return Function_505(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_514(iParam0, 2, 1))
					{
						return Function_503(8);
					}
					return Function_502(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_514(iParam0, 4, 1))
					{
						return Function_503(16);
					}
					return Function_502(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_513(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_514(iParam0, 2, 1))
					{
						return Function_503(8);
					}
					return Function_502(8);
				}
				if (!Function_514(iParam0, 4, 1))
				{
					return Function_503(16);
				}
				return Function_502(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_505(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_512(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_502(128);
							}
							if (!Function_514(iParam0, 2, 1))
							{
								return Function_503(8);
							}
							return Function_502(8);
						}
						if (iParam4 == 2)
						{
							if (Function_512(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_502(256);
							}
							if (!Function_514(iParam0, 4, 1))
							{
								return Function_503(16);
							}
							return Function_502(16);
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

bool Function_512(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1B908 / 112904
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

int Function_513(int iParam0, var uParam1, bool bParam2) //Position: 0x1B9C1 / 113089
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_509(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_508(iVar0, 2, 1, bParam2))
			{
				if (!Function_514(iParam0, 16, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x0000005B:
			if (Function_508(iVar0, 2, 1, bParam2))
			{
				if (!Function_514(iParam0, 32, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000057:
			if (Function_508(iVar0, 1, 1, bParam2))
			{
				if (!Function_514(iParam0, 1024, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		case 0x00000058:
			if (Function_508(iVar0, 1, 1, bParam2))
			{
				if (!Function_514(iParam0, 1024, 1))
				{
					return Function_503(64);
				}
			}
			return Function_502(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_514(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BAD5 / 113365
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

int Function_515(bool bParam0) //Position: 0x1BAFD / 113405
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

void Function_516(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, bool bParam5) //Position: 0x1BB2E / 113454
{
	float fVar0;
	
	if (!Function_272(iParam0))
	{
		Function_472(iParam0);
	}
	if (iParam3 <= 0)
	{
		iParam3 = *uParam1;
	}
	if (*uParam2 <= iParam3)
	{
		if (*uParam2 == 0)
		{
			fVar0 = 0.0f;
		}
		else
		{
			fVar0 = (StackVal + fParam4);
		}
		if (Function_270(iParam0) <= fVar0)
		{
			if (!Function_133() || uParam1[*uParam27]->f_24)
			{
				while (uParam1[*uParam27]->f_20)
				{
					*uParam2++;
					if (*uParam2 > *uParam1)
					{
						return;
					}
					PRINTSTRING((*uParam1)[*uParam27]);
					PRINTSTRING(" has been turned off, so we're not going to show it");
					PRINTNL();
				}
				if (IS_ACTOR_VALID(uParam1[*uParam27]->f_12))
				{
					if (Function_321(Global_34573, uParam1[*uParam27]->f_12, uParam1[*uParam27]->f_16))
					{
						Function_517(StackVal, StackVal, (*uParam1)[*uParam27]);
					}
					else
					{
						PRINTSTRING("Player is ");
						Function_330(Global_34573);
						Function_330(uParam1[*uParam27]->f_12);
						PRINTFLOAT(VDIST(Function_330(Global_34573), Function_330(uParam1[*uParam27]->f_12)));
						PRINTSTRING("m away from sepaker. It's too far. Don't print the line: ");
						PRINTSTRING((*uParam1)[*uParam27]);
						PRINTNL();
					}
				}
				else
				{
					Function_517(StackVal, StackVal, (*uParam1)[*uParam27]);
				}
				Function_216(iParam0);
				if (bParam5)
				{
					uParam1[*uParam27]->f_20 = 1;
				}
				*uParam2++;
			}
		}
	}
}

void Function_517(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1BCF1 / 113905
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_518(bParam0, bParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_132(bParam0, bParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_356(bParam0, bParam1, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, bParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_518(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1BD4F / 113999
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

int Function_519() //Position: 0x1BD96 / 114070
{
	if (IS_STRING_VALID(bLocal_338))
	{
		if (Function_272(&iLocal_196))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!HUD_IS_SHOWING_SMALL_TEXT())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_366(&iLocal_196);
					Function_356(bLocal_338, 0x40f00000, 1, 2, 0, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_520(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1BDD9 / 114137
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

