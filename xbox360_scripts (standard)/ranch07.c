//Decompiled with MagicRDR v1.0
//Function Count : 583
//Statics Count : 831
//Natives Count : 732
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1369> Local_4 = { 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_348 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_428 = 99;
	iLocal_429 = 6;
	Local_421 = 1000;
	while (Function_265())
	{
		Function_221();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	bool bVar0;
	
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_432);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_433);
	if (IS_ACTOR_VALID(bLocal_432))
	{
		bVar0 = GET_MOUNT(bLocal_432);
		if (IS_ACTOR_VALID(bVar0))
		{
			DESTROY_ACTOR(bVar0);
		}
	}
	Function_218(3, 1, 0, 1, 1);
	Function_217(bLocal_347);
	Function_217(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_216();
	Function_215();
	Function_188(bLocal_451, 1, 0, 1, 1, 1, 1, 1);
	if (iLocal_428 == 0)
	{
	}
	else if (iLocal_428 == 1)
	{
	}
	else if (iLocal_428 == 2)
	{
	}
	else if (iLocal_428 == 3)
	{
	}
	else if (iLocal_428 == 4)
	{
	}
	else if (iLocal_428 == 101)
	{
	}
	Function_182();
	Function_178(&bLocal_355);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_431))
	{
		DESTROY_ITERATOR(bLocal_431);
	}
	RELEASE_LAYOUT_REF(bLocal_347);
	if (bLocal_450)
	{
		Function_24(Local_348, 1, 1, 1, 0);
	}
	else if (bLocal_451)
	{
		Function_20(Local_348);
	}
	else
	{
		Function_2(Local_348);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x12F / 303
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x150 / 336
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x16B / 363
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x18C / 396
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x1A2 / 418
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

void Function_7(int iParam0) //Position: 0x23E / 574
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x25F / 607
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

void Function_9() //Position: 0x2A5 / 677
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x2BE / 702
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x311 / 785
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

struct<16> Function_12(int iParam0) //Position: 0x435 / 1077
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x45A / 1114
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x47A / 1146
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x491 / 1169
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x4AC / 1196
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6F3 / 1779
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x71C / 1820
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

bool Function_19(int iParam0) //Position: 0x740 / 1856
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x755 / 1877
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x773 / 1907
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

struct<16> Function_22(int iParam0) //Position: 0x819 / 2073
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x843 / 2115
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA99 / 2713
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

void Function_25() //Position: 0xB86 / 2950
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

int Function_26(int iParam0, bool bParam1) //Position: 0xBB6 / 2998
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

int Function_27(int iParam0) //Position: 0xBF3 / 3059
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xC0D / 3085
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xC23 / 3107
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF1A / 3866
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

void Function_31(char* cParam0, int iParam1) //Position: 0xF86 / 3974
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xFBD / 4029
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

bool Function_33(var uParam0, int iParam1) //Position: 0x1035 / 4149
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1048 / 4168
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

int Function_35(int iParam0) //Position: 0x10E9 / 4329
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1126 / 4390
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1139 / 4409
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

void Function_38(int iParam0, int iParam1) //Position: 0x134B / 4939
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x1385 / 4997
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

bool Function_40() //Position: 0x13C7 / 5063
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x13D0 / 5072
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

void Function_42() //Position: 0x1421 / 5153
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

void Function_43() //Position: 0x1454 / 5204
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

void Function_44() //Position: 0x155A / 5466
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

void Function_45() //Position: 0x158D / 5517
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

void Function_46() //Position: 0x171B / 5915
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

void Function_47() //Position: 0x18CF / 6351
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x18DD / 6365
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

var Function_49() //Position: 0x1ACE / 6862
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1AE3 / 6883
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B7E / 7038
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1E19 / 7705
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

var Function_53() //Position: 0x2446 / 9286
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x244E / 9294
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x245F / 9311
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x2554 / 9556
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x256D / 9581
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x25D2 / 9682
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x25E4 / 9700
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x25F6 / 9718
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

int Function_61(int iParam0) //Position: 0x2726 / 10022
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2735 / 10037
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x276E / 10094
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x27AB / 10155
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2945 / 10565
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

int Function_66(bool bParam0) //Position: 0x2B5F / 11103
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2BA0 / 11168
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

struct<8> Function_68() //Position: 0x2C29 / 11305
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

struct<8> Function_69() //Position: 0x2CC0 / 11456
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

void Function_70() //Position: 0x2D3F / 11583
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D65 / 11621
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

void Function_72() //Position: 0x2F6F / 12143
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

bool Function_73(vector3 vParam0) //Position: 0x3010 / 12304
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3028 / 12328
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

vector3 Function_75() //Position: 0x310F / 12559
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3118 / 12568
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3127 / 12583
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x313D / 12605
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3204 / 12804
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3221 / 12833
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

bool Function_81(int iParam0) //Position: 0x36FD / 14077
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3713 / 14099
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3732 / 14130
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x374C / 14156
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x37B3 / 14259
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

void Function_86() //Position: 0x39D3 / 14803
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A53 / 14931
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3DA5 / 15781
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

int Function_89(int iParam0) //Position: 0x3E28 / 15912
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E42 / 15938
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E70 / 15984
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x410D / 16653
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

void Function_93(int iParam0, int iParam1) //Position: 0x42D0 / 17104
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x452E / 17710
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

int Function_95() //Position: 0x46B3 / 18099
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

void Function_96() //Position: 0x4752 / 18258
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

void Function_97(int iParam0) //Position: 0x4801 / 18433
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

var Function_98(int iParam0) //Position: 0x485F / 18527
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

int Function_99(int iParam0, bool bParam1) //Position: 0x48EE / 18670
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

var Function_100(int iParam0, int iParam1) //Position: 0x4A8B / 19083
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

void Function_101() //Position: 0x4ACC / 19148
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4AE2 / 19170
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4B22 / 19234
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B62 / 19298
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B71 / 19313
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

int Function_106(int iParam0) //Position: 0x4D39 / 19769
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

var Function_107() //Position: 0x4DCE / 19918
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4DF3 / 19955
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x52AE / 21166
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

var Function_110(int iParam0) //Position: 0x55C3 / 21955
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5666 / 22118
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5861 / 22625
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x59FD / 23037
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5AC8 / 23240
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

void Function_115(int iParam0) //Position: 0x63B8 / 25528
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6527 / 25895
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x662D / 26157
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(bool bParam0) //Position: 0x665A / 26202
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

var Function_119(vector3 vParam0) //Position: 0x66B1 / 26289
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x66FF / 26367
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6753 / 26451
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

void Function_122() //Position: 0x68F1 / 26865
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x68F7 / 26871
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

void Function_124(bool bParam0, int iParam1) //Position: 0x699B / 27035
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x69F0 / 27120
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6A06 / 27142
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6A57 / 27223
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

void Function_128(var uParam0, int iParam1) //Position: 0x6A84 / 27268
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A93 / 27283
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6AAA / 27306
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6AB9 / 27321
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6C03 / 27651
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

bool Function_133() //Position: 0x6C4E / 27726
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6C7B / 27771
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

int Function_135(int iParam0) //Position: 0x6E2B / 28203
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6E82 / 28290
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

var Function_137(int iParam0) //Position: 0x6EA7 / 28327
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6EFD / 28413
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

bool Function_139(bool bParam0) //Position: 0x6F5C / 28508
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F68 / 28520
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6F84 / 28548
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

int Function_142(int iParam0, int iParam1) //Position: 0x6FD6 / 28630
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

int Function_143(int iParam0, int iParam1) //Position: 0x7049 / 28745
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x70A5 / 28837
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

int Function_145(int iParam0, int iParam1) //Position: 0x7116 / 28950
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x7170 / 29040
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x741C / 29724
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

void Function_148(int iParam0, bool bParam1) //Position: 0x76AB / 30379
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

void Function_149() //Position: 0x770A / 30474
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

var Function_150(int iParam0, int iParam1) //Position: 0x7785 / 30597
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

int Function_151(int iParam0) //Position: 0x8377 / 33655
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x838C / 33676
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x83DB / 33755
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x83E8 / 33768
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8439 / 33849
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

bool Function_156(int iParam0, int iParam1) //Position: 0x84A7 / 33959
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x84BA / 33978
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

var Function_158(int iParam0) //Position: 0x85B9 / 34233
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

bool Function_159(var uParam0, int iParam1) //Position: 0x8611 / 34321
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x862D / 34349
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

bool Function_161(int iParam0) //Position: 0x8684 / 34436
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x8696 / 34454
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

void Function_163(int iParam0) //Position: 0x86CA / 34506
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8731 / 34609
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x880E / 34830
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

void Function_166() //Position: 0x8987 / 35207
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8993 / 35219
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

void Function_168() //Position: 0x89D9 / 35289
{
	Function_169();
	return;
}

void Function_169() //Position: 0x89E2 / 35298
{
	Function_178(&Local_4 + 4);
	Function_170(&Global_6563, &Global_7581, 7, 0);
	Function_170(&Global_6563, &Global_7581, 2, 0);
	Function_170(&Global_6563, &Global_7581, 13, 0);
	Function_170(&Global_6563, &Global_7581, 4, 0);
	Function_170(&Global_6563, &Global_7581, 0, 0);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8A2C / 35372
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

void Function_171(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8AC6 / 35526
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

int Function_172(int iParam0) //Position: 0x8C15 / 35861
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

int Function_173(int iParam0) //Position: 0x8C40 / 35904
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

void Function_174(var uParam0, int iParam1) //Position: 0x8C74 / 35956
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_175(bool bParam0) //Position: 0x8C83 / 35971
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

void Function_176(var uParam0, int iParam1) //Position: 0x8D1D / 36125
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_177(var uParam0, int iParam1) //Position: 0x8D34 / 36148
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178(int iParam0) //Position: 0x8D50 / 36176
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

void Function_179(var uParam0, int iParam1) //Position: 0x8D76 / 36214
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

void Function_180(var uParam0, int iParam1) //Position: 0x8EA4 / 36516
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_181(int iParam0, int iParam1) //Position: 0x8EBE / 36542
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0x8EDB / 36571
{
	DECOR_REMOVE(Global_34573, "herding");
	AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(6);
	if (IS_BLIP_VALID(bLocal_699))
	{
		REMOVE_BLIP(bLocal_699);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_760))
	{
		DESTROY_OBJECT(Local_760);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_791))
	{
		DESTROY_OBJECT(Local_791);
	}
	if (IS_OBJECT_VALID(bLocal_700))
	{
		DESTROY_OBJECT(bLocal_700);
	}
	if (IS_ACTOR_VALID(bLocal_702))
	{
		RELEASE_ACTOR(bLocal_702);
	}
	if (SQUAD_IS_VALID(Local_760.f_44))
	{
		Function_186(&Local_760 + 44, 0, 0);
		RELEASE_OBJECT_REF(Local_760.f_44);
	}
	if (SQUAD_IS_VALID(Local_760.f_48))
	{
		Function_186(&Local_760 + 48, 0, 0);
		RELEASE_OBJECT_REF(Local_760.f_48);
	}
	if (SQUAD_IS_VALID(Local_760.f_52))
	{
		Function_186(&Local_760 + 52, 0, 0);
		RELEASE_OBJECT_REF(Local_760.f_52);
	}
	if (SQUAD_IS_VALID(Local_760.f_56))
	{
		Function_186(&Local_760 + 56, 0, 0);
		RELEASE_OBJECT_REF(Local_760.f_56);
	}
	if (SQUAD_IS_VALID(Local_791.f_44))
	{
		Function_186(&Local_791 + 44, 0, 0);
		RELEASE_OBJECT_REF(Local_791.f_44);
	}
	if (SQUAD_IS_VALID(Local_791.f_48))
	{
		Function_186(&Local_791 + 48, 0, 0);
		RELEASE_OBJECT_REF(Local_791.f_48);
	}
	if (SQUAD_IS_VALID(Local_791.f_52))
	{
		Function_186(&Local_791 + 52, 0, 0);
		RELEASE_OBJECT_REF(Local_791.f_52);
	}
	if (SQUAD_IS_VALID(Local_791.f_56))
	{
		Function_186(&Local_791 + 56, 0, 0);
		RELEASE_OBJECT_REF(Local_791.f_56);
	}
	if (SQUAD_IS_VALID(Local_4.f_272))
	{
		Function_184(&Global_6563, &Global_7581, Local_4.f_272, 0);
		RELEASE_OBJECT_REF(Local_4.f_272);
	}
	if (SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_186(&Local_4 + 200, 0, 0);
		RELEASE_OBJECT_REF(Local_4.f_200);
	}
	if (SQUAD_IS_VALID(Local_4.f_296))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
		{
			CLEAR_ACTOR_MIN_SPEED((*&Local_4 + 276)[02]);
			CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 276)[02]);
			TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_4 + 276)[02]);
			Function_183(StackVal, StackVal, (*&Local_4 + 276)[02], *(&Local_4 + 984), 0, 3, 2, 1);
		}
		if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
		{
			CLEAR_ACTOR_MIN_SPEED((*&Local_4 + 276)[12]);
			CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 276)[12]);
			TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_4 + 276)[12]);
			Function_183(StackVal, StackVal, (*&Local_4 + 276)[12], *(&Local_4 + 984), 0, 3, 2, 1);
		}
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_432);
	if (IS_OBJECT_VALID(bLocal_752))
	{
		DESTROY_OBJECT(bLocal_752);
	}
	return;
}

void Function_183(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x9136 / 37174
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

void Function_184(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x923E / 37438
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
				Function_185(uParam0, uParam1, bVar1, iParam3);
			}
		}
		bVar0++;
	}
}

void Function_185(var uParam0, var uParam1, int iParam2, var uParam3) //Position: 0x928F / 37519
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

void Function_186(var uParam0, bool bParam1, bool bParam2) //Position: 0x92D7 / 37591
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
				if (!Function_187(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_187(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9353 / 37715
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_188(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x936D / 37741
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_214());
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
	Function_213();
	CLEAR_PRINTED_OBJECTIVE();
	Function_212();
	Function_210(0);
	Function_209();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_208();
	Function_207();
	Function_213();
	ENABLE_JOURNAL_REPLAY(1);
	Function_206(1);
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
		Function_205(Global_34573);
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
	Function_204(Global_28178);
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
	Function_203(1178687);
	Function_201(33039);
	Function_200(0x218003f);
	Function_199(4194560);
	Function_198();
	Function_197();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_194(0, 1, 1);
	}
	else
	{
		Function_194(0, 1, 1);
	}
	Function_193();
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
	Function_189();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_189() //Position: 0x955E / 38238
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
		if (Function_192() > 3)
		{
			bVar0 *= 2;
		}
		Function_190(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_190(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x95B4 / 38324
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_191((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_191(bool bParam0) //Position: 0x95FA / 38394
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_192() //Position: 0x961F / 38431
{
	return Global_12976.f_156;
}

void Function_193() //Position: 0x962A / 38442
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

void Function_194(int iParam0, bool bParam1, int iParam2) //Position: 0x9654 / 38484
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
			Function_195(Global_29006);
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

void Function_195(int iParam0) //Position: 0x975F / 38751
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_196())
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

bool Function_196() //Position: 0x97DE / 38878
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

void Function_197() //Position: 0x983B / 38971
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

void Function_198() //Position: 0x9861 / 39009
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

void Function_199(int iParam0) //Position: 0x9887 / 39047
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_200(int iParam0) //Position: 0x98A4 / 39076
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_201(int iParam0) //Position: 0x98B7 / 39095
{
	Function_202(&Global_28842, iParam0);
	return;
}

void Function_202(var uParam0, int iParam1) //Position: 0x98C5 / 39109
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_203(bool bParam0) //Position: 0x98E0 / 39136
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_204(int iParam0) //Position: 0x990D / 39181
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

void Function_205(bool bParam0) //Position: 0x99D4 / 39380
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

void Function_206(bool bParam0) //Position: 0x9A50 / 39504
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

void Function_207() //Position: 0x9AC4 / 39620
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

void Function_208() //Position: 0x9B05 / 39685
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

void Function_209() //Position: 0x9B46 / 39750
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_210(int iParam0) //Position: 0x9B5A / 39770
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_211())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_211() //Position: 0x9B96 / 39830
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

void Function_212() //Position: 0x9BBB / 39867
{
	Global_8722 = 0.0f;
	return;
}

void Function_213() //Position: 0x9BC5 / 39877
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

int Function_214() //Position: 0x9BF0 / 39920
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_215() //Position: 0x9C0A / 39946
{
	if (VMAG(*(&Global_63098 + 44)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_63098.f_16 < 0.0f)
	{
		Global_63098.f_4 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, StackVal, Global_63098, Global_63098.f_16);
		Global_63098.f_16 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(Global_63098));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(Global_63098) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
		}
	}
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 4;
	return;
}

void Function_216() //Position: 0x9D24 / 40228
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_217(bool bParam0) //Position: 0x9D2D / 40237
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

int Function_218(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9D85 / 40325
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
		Function_220(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_219(StackVal);
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

void Function_219(bool bParam0) //Position: 0xA0A3 / 41123
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

void Function_220(bool bParam0) //Position: 0xA0CF / 41167
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_221() //Position: 0xA0E4 / 41188
{
	var uVar0[8];
	int iVar9;
	
	if (Function_264())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 2: Out of the pen";
		uVar0[4] = "Stage 3: Down the road";
		uVar0[5] = "Stage 4: Out to pasture";
		uVar0[6] = "Stage 5: Large herd";
		uVar0[7] = "Last Stage";
		iVar9 = Function_250(&uLocal_414, &uVar0, &Local_348 + 4, 1, 0);
		if (Function_249(&iVar9, &iLocal_428, &iLocal_429, &Local_421))
		{
			Function_242();
			Function_241();
		}
		if (iVar9 == 0)
		{
			Function_242();
			Function_241();
			Function_240(&bLocal_450, 8);
		}
		else if (iVar9 == 1)
		{
			Function_242();
			Function_241();
			Function_235(iLocal_428);
			Function_231(StackVal, StackVal, 5, &bLocal_451, &iLocal_428, Function_238(iLocal_428), Function_235(iLocal_428), 0);
		}
		else if (iVar9 == 2)
		{
			Function_242();
			Function_241();
			Function_226(&bLocal_452, 4);
		}
		else if (iVar9 == 3)
		{
			Function_224();
			Function_242();
			Function_241();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_222(&bLocal_434);
			iLocal_428 = 1;
			iLocal_429 = 0;
			Local_421 = 1000;
		}
		else if (iVar9 == 4)
		{
			Function_224();
			Function_242();
			Function_241();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_222(&bLocal_434);
			iLocal_428 = 2;
			iLocal_429 = 0;
			Local_421 = 1000;
		}
		else if (iVar9 == 5)
		{
			Function_224();
			Function_242();
			Function_241();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_222(&bLocal_434);
			iLocal_428 = 3;
			iLocal_429 = 0;
			Local_421 = 1000;
		}
		else if (iVar9 == 6)
		{
			Function_224();
			Function_242();
			Function_241();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_222(&bLocal_434);
			iLocal_428 = 4;
			iLocal_429 = 0;
			Local_421 = 1000;
		}
		else if (iVar9 == 7)
		{
			Function_224();
			Function_242();
			Function_241();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_222(&bLocal_434);
			iLocal_428 = 101;
			iLocal_429 = 0;
			Local_421 = 1000;
		}
	}
	return;
}

void Function_222(bool bParam0) //Position: 0xA331 / 41777
{
	Function_223(bParam0, 0.0f);
	return;
}

void Function_223(int iParam0, float fParam1) //Position: 0xA33D / 41789
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_224() //Position: 0xA35E / 41822
{
	DECOR_REMOVE(Global_34573, "herding");
	if (IS_BLIP_VALID(bLocal_699))
	{
		REMOVE_BLIP(bLocal_699);
	}
	if (IS_OBJECT_VALID(bLocal_700))
	{
		DESTROY_OBJECT(bLocal_700);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_760))
	{
		DESTROY_OBJECT(Local_760);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_791))
	{
		DESTROY_OBJECT(Local_791);
	}
	if (IS_ACTOR_VALID(bLocal_702))
	{
		DESTROY_ACTOR(bLocal_702);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 188)[02]);
	}
	if (SQUAD_IS_VALID(Local_760.f_44))
	{
		Function_225(&Local_760 + 44);
		DESTROY_OBJECT(Local_760.f_44);
	}
	if (SQUAD_IS_VALID(Local_760.f_48))
	{
		Function_225(&Local_760 + 48);
		DESTROY_OBJECT(Local_760.f_48);
	}
	if (SQUAD_IS_VALID(Local_760.f_52))
	{
		Function_225(&Local_760 + 52);
		DESTROY_OBJECT(Local_760.f_52);
	}
	if (SQUAD_IS_VALID(Local_760.f_56))
	{
		Function_225(&Local_760 + 56);
		DESTROY_OBJECT(Local_760.f_56);
	}
	if (SQUAD_IS_VALID(Local_791.f_44))
	{
		Function_225(&Local_791 + 44);
		DESTROY_OBJECT(Local_791.f_44);
	}
	if (SQUAD_IS_VALID(Local_791.f_48))
	{
		Function_225(&Local_791 + 48);
		DESTROY_OBJECT(Local_791.f_48);
	}
	if (SQUAD_IS_VALID(Local_791.f_52))
	{
		Function_225(&Local_791 + 52);
		DESTROY_OBJECT(Local_791.f_52);
	}
	if (SQUAD_IS_VALID(Local_791.f_56))
	{
		Function_225(&Local_791 + 56);
		DESTROY_OBJECT(Local_791.f_56);
	}
	if (SQUAD_IS_VALID(Local_4.f_272))
	{
		Function_184(&Global_6563, &Global_7581, Local_4.f_272, 0);
		DESTROY_OBJECT(Local_4.f_272);
	}
	if (SQUAD_IS_VALID(Local_4.f_296))
	{
		Function_225(&Local_4 + 296);
		DESTROY_OBJECT(Local_4.f_296);
	}
	if (SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_225(&Local_4 + 200);
		DESTROY_OBJECT(Local_4.f_200);
	}
	if (SQUAD_IS_VALID(Local_4.f_224))
	{
		Function_225(&Local_4 + 224);
		DESTROY_OBJECT(Local_4.f_224);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_432);
	if (IS_OBJECT_VALID(bLocal_752))
	{
		DESTROY_OBJECT(bLocal_752);
	}
	return;
}

void Function_225(int iParam0) //Position: 0xA558 / 42328
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

void Function_226(bool bParam0, int iParam1) //Position: 0xA59F / 42399
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_227(iParam1);
	*bParam0 = 1;
	return;
}

void Function_227(int iParam0) //Position: 0xA5C2 / 42434
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_230("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_229(2) || Function_229(8)) || Function_229(9)) || Function_229(10))
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
		Function_230("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_230("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_230("");
	}
	else if (iParam0 == 8)
	{
		Function_228();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_228();
	}
	return;
}

void Function_228() //Position: 0xA6B9 / 42681
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_229(int iParam0) //Position: 0xA6C5 / 42693
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

void Function_230(bool bParam0) //Position: 0xA6FB / 42747
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_231(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA765 / 42853
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_232(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_227(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_232(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA7A2 / 42914
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_234(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_233(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_233(int iParam0) //Position: 0xA825 / 43045
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

var Function_234(vector3 vParam0, bool bParam3) //Position: 0xACD3 / 44243
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

vector3 Function_235(int iParam0) //Position: 0xAD3E / 44350
{
	Function_236(iParam0 + 1);
	return StackVal, StackVal, Function_236(iParam0 + 1);
}

vector3 Function_236(int iParam0) //Position: 0xAD4B / 44363
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_237((*&Local_4 + 540)[0]);
			return StackVal, StackVal, Function_237((*&Local_4 + 540)[0]);
			break;
		
		case 0x00000001:
			Function_237((*&Local_4 + 564)[0]);
			return StackVal, StackVal, Function_237((*&Local_4 + 564)[0]);
			break;
		
		case 0x00000002:
			Function_237((*&Local_4 + 608)[0]);
			return StackVal, StackVal, Function_237((*&Local_4 + 608)[0]);
			break;
		
		case 0x00000003:
			Function_237((*&Local_4 + 648)[0]);
			return StackVal, StackVal, Function_237((*&Local_4 + 648)[0]);
			break;
		
		case 0x00000004:
			Function_237((*&Local_4 + 680)[0]);
			return StackVal, StackVal, Function_237((*&Local_4 + 680)[0]);
			break;
		
		default:
			Function_237((*&Local_4 + 728)[0]);
			return StackVal, StackVal, Function_237((*&Local_4 + 728)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_237((*&Local_4 + 540)[0]);
	return StackVal, StackVal, Function_237((*&Local_4 + 540)[0]);
}

vector3 Function_237(bool bParam0) //Position: 0xAE3F / 44607
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

int Function_238(int iParam0) //Position: 0xAE66 / 44646
{
	return Function_239(iParam0 + 1);
}

int Function_239(int iParam0) //Position: 0xAE73 / 44659
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 540)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 564)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 608)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 648)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 680)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 728)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 540)[0]);
}

void Function_240(bool bParam0, int iParam1) //Position: 0xAF67 / 44903
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_227(iParam1);
	*bParam0 = 1;
	return;
}

void Function_241() //Position: 0xAF8A / 44938
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_242() //Position: 0xAF9F / 44959
{
	Function_244();
	Function_243(10, 3);
	return;
}

void Function_243(int iParam0, int iParam1) //Position: 0xAFAE / 44974
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

void Function_244() //Position: 0xB0E5 / 45285
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_248())
	{
		Function_247(10, 3);
	}
	else
	{
		Function_245();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_245() //Position: 0xB130 / 45360
{
	Function_246(25, 2);
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0xB13C / 45372
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

void Function_247(int iParam0, int iParam1) //Position: 0xB33A / 45882
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

bool Function_248() //Position: 0xB471 / 46193
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

bool Function_249(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB4D8 / 46296
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_242();
			Function_241();
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
		Function_230("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_250(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB57E / 46462
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_263(&Var15, &Var0);
	uVar20 = Function_262(*uParam1, &Var15);
	Function_261(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_260(uParam0, uVar20);
	Function_258(StackVal, uParam0, Var15.f_12);
	Function_256(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_255(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_252(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_251(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_251(int iParam0, int iParam1, int iParam2) //Position: 0xB645 / 46661
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

bool Function_252(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB6A1 / 46753
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
				Function_254(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_254(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_251(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_253(bParam1->f_32);
	}
	else
	{
		Function_253(bParam1->f_32);
	}
	return 0;
}

void Function_253(bool bParam0) //Position: 0xB827 / 47143
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

void Function_254(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB861 / 47201
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

var Function_255(int iParam0, var uParam1, int iParam2) //Position: 0xB90F / 47375
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_256(var uParam0, int iParam1, int iParam2) //Position: 0xB933 / 47411
{
	switch (Function_257())
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

int Function_257() //Position: 0xB9CF / 47567
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

void Function_258(var uParam0, int iParam1, int iParam2) //Position: 0xBA0B / 47627
{
	switch (Function_259(uParam0))
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

int Function_259(bool bParam0) //Position: 0xBAA3 / 47779
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

var Function_260(var uParam0, int iParam1) //Position: 0xBBEE / 48110
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

void Function_261(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBD3D / 48445
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

var Function_262(int iParam0, int iParam1) //Position: 0xBDD0 / 48592
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_263(var uParam0, var uParam1) //Position: 0xBDEA / 48618
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

bool Function_264() //Position: 0xBE38 / 48696
{
	return Global_30920;
}

bool Function_265() //Position: 0xBE41 / 48705
{
	if (IS_EXITFLAG_SET())
	{
		Function_235(iLocal_428);
		Function_231(StackVal, StackVal, 4, &bLocal_451, &iLocal_428, Function_238(iLocal_428), Function_235(iLocal_428), 0);
		return 0;
	}
	Function_582(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_348, iLocal_428, iLocal_429, &bLocal_452, &bLocal_450, &bLocal_451);
	if (iLocal_428 == 99 && iLocal_428 == 100)
	{
		if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_581(8), Function_580(8)))
		{
			Function_579(8);
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_235(iLocal_428);
			Function_231(StackVal, StackVal, 1, &bLocal_451, &iLocal_428, Function_238(iLocal_428), Function_235(iLocal_428), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_235(iLocal_428);
			Function_231(StackVal, StackVal, 2, &bLocal_451, &iLocal_428, Function_238(iLocal_428), Function_235(iLocal_428), 0);
			return 1;
		}
		if (Function_578(2048))
		{
			Function_235(iLocal_428);
			Function_231(StackVal, StackVal, 3, &bLocal_451, &iLocal_428, Function_238(iLocal_428), Function_235(iLocal_428), 0);
			return 1;
		}
		if (Function_576(Global_34573, 0))
		{
			Function_235(iLocal_428);
			Function_231(StackVal, StackVal, 2, &bLocal_451, &iLocal_428, Function_238(iLocal_428), Function_235(iLocal_428), 0);
			return 1;
		}
		if (Function_556(&Local_494, &uLocal_454, &uLocal_648, bLocal_431, uLocal_453))
		{
			if (Function_554(&uLocal_648))
			{
				Function_235(iLocal_428);
				Function_231(StackVal, StackVal, 5, &bLocal_451, &iLocal_428, Function_238(iLocal_428), Function_235(iLocal_428), 0);
				return 1;
			}
		}
		Function_553(&bLocal_433, bLocal_432);
		Function_552();
	}
	switch (iLocal_428)
	{
		case 0x00000063:
			Function_497();
			break;
		
		case 0x00000000:
			Function_458();
			break;
		
		case 0x00000001:
			Function_445();
			break;
		
		case 0x00000002:
			Function_437();
			break;
		
		case 0x00000003:
			Function_419();
			break;
		
		case 0x00000004:
			Function_331();
			break;
		
		case 0x00000065:
			Function_268();
			break;
		
		case 0x00000064:
			if (Function_267(&bLocal_451))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_266(&iLocal_428, &iLocal_429, &Local_421))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_450)
	{
		Function_240(&bLocal_450, 8);
		Function_1();
		return 0;
	}
	if (bLocal_451 && iLocal_428 == 100)
	{
		Function_235(iLocal_428);
		Function_231(StackVal, StackVal, 5, &bLocal_451, &iLocal_428, Function_238(iLocal_428), Function_235(iLocal_428), 0);
	}
	if (bLocal_452)
	{
		Function_226(&bLocal_452, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_266(var uParam0, var uParam1, int iParam2) //Position: 0xC048 / 49224
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

bool Function_267(int iParam0) //Position: 0xC088 / 49288
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_268() //Position: 0xC09B / 49307
{
	Function_330(bLocal_347);
	switch (iLocal_429)
	{
		case 0x00000000:
			Function_326(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_432, GET_ACTOR_MAX_HEALTH(bLocal_432));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				iLocal_430 = Global_30628[2];
				if (!Function_321(iLocal_430))
				{
					Function_319(&Local_348);
				}
				Function_318(Global_34573, (*&Local_4 + 728)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_432))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_432);
					CLEAR_ACTOR_MAX_SPEED(bLocal_432);
					TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_433, true);
				}
				Function_222(&bLocal_434);
				iLocal_429 = 1;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_430) || iLocal_430 != 4294967295))
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			Function_300();
			if (iLocal_443[4] == 0)
			{
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_432))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
					{
						Function_318((*&Local_4 + 188)[02], (*&Local_4 + 728)[5], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_296))
				{
					if (SQUAD_IS_VALID(Local_4.f_224))
					{
						Function_299(Local_4.f_296, Local_4.f_224);
					}
				}
				if (SQUAD_IS_VALID(Local_760.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_44);
					Function_298(Local_760.f_44);
					Function_297(Local_760.f_44);
				}
				if (SQUAD_IS_VALID(Local_791.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_791.f_44);
					Function_298(Local_791.f_44);
					Function_297(Local_791.f_44);
				}
			}
			if (SQUAD_IS_VALID(Local_760.f_56))
			{
				Function_296(Local_760.f_56, Local_791.f_44);
			}
			if (SQUAD_IS_VALID(Local_760.f_44))
			{
				Function_297(Local_760.f_44);
				Function_296(Local_760.f_44, Local_791.f_44);
			}
			if (SQUAD_IS_VALID(Local_791.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_791.f_44);
				Function_298(Local_791.f_44);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_791.f_44, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_472, -1.0f);
			}
			Function_222(&bLocal_434);
			iLocal_429 = 3;
			break;
		
		case 0x00000003:
			if (Function_269())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (SQUAD_IS_VALID(Local_4.f_224))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_224);
					Function_298(Local_4.f_224);
				}
				if (SQUAD_IS_VALID(Local_4.f_296))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_296);
					Function_298(Local_4.f_296);
				}
				Function_222(&bLocal_434);
				iLocal_429 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_450 = true;
			}
			break;
	}
	return;
}

bool Function_269() //Position: 0xC390 / 50064
{
	var uVar0;
	
	if (Function_295(&Local_421 + 4))
	{
		if (Function_293(&Local_421 + 4) <= 2.0f)
		{
			Function_291(&Local_421, 1, 0);
		}
	}
	switch (Local_421)
	{
		case 0x000003E8:
			Function_287(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 6, bLocal_432);
				Local_421.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_421.f_16 = Function_281(Local_4, 0, Global_34573, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_421.f_16))
				{
				}
				else
				{
					LOG_ERROR("ranch07_cutsceneLast - Failed to create ranch07_cutsceneLast_cutscene");
				}
			}
			Local_421 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_421.f_16), false))
			{
				Function_280(Global_34573, 1, 1);
				Function_280(bLocal_432, 1, 1);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 300)[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 300)[2]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 300)[2], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 300)[2]);
				Function_279(&Local_421 + 4);
				Local_421 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_318(bLocal_433, (*&Local_4 + 728)[2], 1, 1, 1);
			Function_277(Global_34573, (*&Local_4 + 728)[2], 1, 1, 1);
			Function_277(bLocal_432, (*&Local_4 + 728)[5], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_432))
			{
				TASK_CLEAR(bLocal_432);
				TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_432, true);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
			{
				GET_OBJECT_POSITION((*&Local_4 + 728)[8], &vLocal_687);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vLocal_687, 3.0f, 2);
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 276)[02], bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET((*&Local_4 + 276)[02], true);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
			{
				Function_277((*&Local_4 + 276)[12], (*&Local_4 + 728)[9], 1, 1, 1);
				GET_OBJECT_POSITION((*&Local_4 + 728)[9], &uLocal_690);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 276)[12], bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET((*&Local_4 + 276)[12], true);
			}
			Local_421 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_293(&Local_421 + 4) < 0,75f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_222(&Local_421 + 4);
					iLocal_822 = 6;
					iLocal_823 = 6;
					Local_421 = 1004;
				}
			}
			else
			{
				Function_222(&Local_421 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_273() && Function_272())
			{
				Function_222(&Local_421 + 4);
				Local_421 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				HUD_TIMER_DISPLAY(0);
				Function_280(Global_34573, 0, 1);
				Function_280(bLocal_432, 0, 1);
				AI_GOAL_LOOK_CLEAR(bLocal_432);
				AI_GOAL_LOOK_CLEAR(Global_34573);
				TASK_CLEAR(Global_34573);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_270(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_421.f_16))
				{
					DESTROY_OBJECT(Local_421.f_16);
				}
				Local_421 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Function_277(bLocal_432, (*&Local_4 + 728)[4], 1, 1, 1);
				Local_421 = 1104;
			}
			break;
	}
	return 0;
}

void Function_270(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xC73C / 51004
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
		Function_241();
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

void Function_271(bool bParam0) //Position: 0xC82C / 51244
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

int Function_272() //Position: 0xC8D1 / 51409
{
	switch (iLocal_823)
	{
		case 0x00000006:
			if (Function_293(&Local_421 + 4) < 0.0f)
			{
				if (SQUAD_IS_VALID(Local_791.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_791.f_44);
					Function_298(Local_791.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_791.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_472, -1.0f);
				}
				iLocal_823 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_293(&Local_421 + 4) < 5.0f)
			{
				AI_GOAL_LOOK_AT_ACTOR(bLocal_432, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
				AI_GOAL_LOOK_AT_ACTOR(Global_34573, bLocal_432, 0, 1065353216, 3212836864, 3212836864, 0);
				iLocal_823 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_293(&Local_421 + 4) < 10.0f)
			{
				iLocal_823 = 34;
			}
			break;
		
		case 0x00000022:
			if (Function_293(&Local_421 + 4) < 14.0f)
			{
				if (IS_ACTOR_VALID(bLocal_432))
				{
					GET_OBJECT_POSITION((*&Local_4 + 728)[4], &vLocal_675);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(false, Local_4.f_1328, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
				{
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1,5f, 0, 0);
					TASK_FOLLOW_PATH(false, Local_4.f_1328, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 276)[02], bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
					TASK_PRIORITY_SET((*&Local_4 + 276)[02], true);
				}
				iLocal_823 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_293(&Local_421 + 4) < 14,5f)
			{
				iLocal_823 = 36;
			}
			break;
		
		case 0x00000024:
			if (Function_293(&Local_421 + 4) < 15,5f)
			{
				iLocal_823 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_293(&Local_421 + 4) < 20.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_273() //Position: 0xCAB8 / 51896
{
	switch (iLocal_822)
	{
		case 0x00000006:
			if (Function_293(&Local_421 + 4) < 0.0f)
			{
				iLocal_822 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_293(&Local_421 + 4) < 6.0f)
			{
				Function_274();
				iLocal_822 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_293(&Local_421 + 4) < 10,5f)
			{
				iLocal_822 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_293(&Local_421 + 4) < 13,5f)
			{
				iLocal_822 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_293(&Local_421 + 4) < 20.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_274() //Position: 0xCB5A / 52058
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_EndCut_v1_AA", "Ranch07_EndCut_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_EndCut_v1_AB", "Ranch07_EndCut_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_EndCut_v1_AC", "Ranch07_EndCut_v1_AC", true, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_EndCut_v1_AD", "Ranch07_EndCut_v1_AD", false, 4, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_275(int iParam0) //Position: 0xCC50 / 52304
{
	Function_276(0, Global_34573, iParam0, 0);
	Function_276(1, bLocal_432, iParam0, 0);
	if (SQUAD_IS_VALID(Local_4.f_272))
	{
		Function_276(2, (*&Local_4 + 228)[42], iParam0, 0);
		Function_276(3, (*&Local_4 + 228)[02], iParam0, 0);
		Function_276(4, (*&Local_4 + 228)[12], iParam0, 0);
		Function_276(5, (*&Local_4 + 228)[22], iParam0, 0);
		Function_276(6, (*&Local_4 + 228)[32], iParam0, 0);
	}
	if (SQUAD_IS_VALID(Local_4.f_296))
	{
		Function_276(7, (*&Local_4 + 276)[02], iParam0, 0);
		Function_276(8, (*&Local_4 + 276)[12], iParam0, 0);
	}
	return;
}

void Function_276(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xCCE5 / 52453
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_277(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCD0A / 52490
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
				Function_278(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
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

void Function_278(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0xCE21 / 52769
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

void Function_279(int iParam0) //Position: 0xCEDA / 52954
{
	if (!Function_295(iParam0))
	{
		Function_223(iParam0, 0.0f);
	}
	return;
}

void Function_280(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCEEF / 52975
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

var Function_281(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xCF89 / 53129
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ranch07_cutsceneLast", 4, 1);
	}
	Function_282(&bVar0, uParam2);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_282(var uParam0, char* cParam1) //Position: 0xD00B / 53259
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_286(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_285(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_284(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_283(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 2, 3, 20.0f, 2, 0);
	return;
}

void Function_283(int iParam0) //Position: 0xD08D / 53389
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 33,69f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -659,0156f, 103,1961f, 2592,759f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,051159f, 3,001771f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_284(int iParam0) //Position: 0xD0F7 / 53495
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 33,69f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -649,8079f, 103,1961f, 2596,424f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,055756f, 2,46803f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_285(int iParam0) //Position: 0xD15A / 53594
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36,88042f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -645,8021f, 103,5081f, 2613,703f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,098282f, 0,891085f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_286(bool bParam0) //Position: 0xD1BD / 53693
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 36,88042f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -642,6305f, 103,6084f, 2611,829f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0,115683f, 0,970925f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_287(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xD220 / 53792
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
	Function_241();
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
				Function_290(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_290(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_289()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_289()));
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
	if (Function_288(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_288(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_288(int iParam0) //Position: 0xD4C9 / 54473
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_289() //Position: 0xD4E5 / 54501
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

vector3 Function_290(bool bParam0) //Position: 0xD564 / 54628
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_291(int iParam0, bool bParam1, bool bParam2) //Position: 0xD575 / 54645
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
			Function_292(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_292(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_292(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD6C1 / 54977
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

float Function_293(bool bParam0) //Position: 0xD6EA / 55018
{
	if (Function_295(bParam0))
	{
		if (Function_294(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_294(int iParam0) //Position: 0xD7B2 / 55218
{
	return Function_153(*iParam0, 2);
}

bool Function_295(int iParam0) //Position: 0xD7BF / 55231
{
	return Function_153(*iParam0, 1);
}

void Function_296(bool bParam0, bool bParam1) //Position: 0xD7CC / 55244
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

void Function_297(bool bParam0) //Position: 0xD810 / 55312
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

void Function_298(bool bParam0) //Position: 0xD857 / 55383
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

void Function_299(bool bParam0, bool bParam1) //Position: 0xD889 / 55433
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

void Function_300() //Position: 0xD8F3 / 55539
{
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_317();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_316(Local_4.f_200, 0);
			Function_315(Local_4.f_200, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				Function_318((*&Local_4 + 188)[02], (*&Local_4 + 728)[5], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_432, (*&Local_4 + 188)[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_224))
	{
		Function_312();
		if (SQUAD_IS_VALID(Local_4.f_224))
		{
			Function_316(Local_4.f_224, 0);
			Function_315(Local_4.f_224, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 204)[02]))
			{
				Function_318((*&Local_4 + 204)[02], (*&Local_4 + 728)[8], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 204)[12]))
			{
				Function_318((*&Local_4 + 204)[12], (*&Local_4 + 728)[9], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_224, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_296))
	{
		Function_311();
		if (SQUAD_IS_VALID(Local_4.f_296))
		{
			SQUAD_SET_FACTION(Local_4.f_296, 20);
			Function_310(Local_4.f_296, 1);
			Function_313(Local_4.f_296, 0, 0, 0);
			Function_316(Local_4.f_296, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
			{
				Function_318((*&Local_4 + 276)[02], (*&Local_4 + 728)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
			{
				Function_318((*&Local_4 + 276)[12], (*&Local_4 + 728)[7], 1, 1, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_224))
			{
				Function_299(Local_4.f_296, Local_4.f_224);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_296, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_301();
	return;
}

void Function_301() //Position: 0xDACA / 56010
{
	Function_309();
	Local_791.f_12 = Local_4.f_1356;
	if (!SQUAD_IS_VALID(Local_791.f_44))
	{
		Local_791.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(Local_791.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_791.f_44);
			Function_306(&Local_791, bLocal_347, Local_4.f_828, &iLocal_747, 5, 4,5f, 7.0f, 1,5f, 1);
			Function_316(Local_791.f_44, 0);
			Function_305(Local_791.f_44, 1);
			Function_304(Local_791.f_44, 0);
			Function_303(Local_791.f_44, 0);
			Function_302(Local_791.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_791.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_472, -1.0f);
		}
	}
	return;
}

void Function_302(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDB9A / 56218
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

void Function_303(bool bParam0, bool bParam1) //Position: 0xDBE1 / 56289
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

void Function_304(bool bParam0, bool bParam1) //Position: 0xDC22 / 56354
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

void Function_305(bool bParam0, bool bParam1) //Position: 0xDC63 / 56419
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

void Function_306(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, float fParam7, bool bParam8) //Position: 0xDCA7 / 56487
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
					Function_237(bParam2);
					vVar36 = { StackVal, StackVal, Function_237(bParam2) };
					Function_308(bParam2);
					vVar39 = { StackVal, StackVal, Function_308(bParam2) };
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
						if (Function_307(bVar53))
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

bool Function_307(int iParam0) //Position: 0xDE49 / 56905
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

vector3 Function_308(bool bParam0) //Position: 0xDE60 / 56928
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

void Function_309() //Position: 0xDE87 / 56967
{
	iLocal_747[0] = 1008;
	iLocal_747[1] = 1009;
	iLocal_747[2] = 1010;
	iLocal_747[3] = 1011;
	(*&Local_791 + 104)[0] = Global_34573;
	(*&Local_791 + 104)[1] = bLocal_432;
	(*&Local_791 + 104)[2] = (*&Local_4 + 276)[02];
	(*&Local_791 + 104)[3] = (*&Local_4 + 276)[12];
	Local_791.f_68 = 15;
	PRINTINT(Local_791.f_68);
	PRINTNL();
	Local_791.f_64 = "HOME01_COWS02";
	if (!Function_295(&Local_791 + 88))
	{
		Function_279(&Local_791 + 88);
	}
	else
	{
		Function_222(&Local_791 + 88);
	}
	if (!IS_OBJECT_VALID(Local_791))
	{
		Local_791 = CREATE_POINT_IN_LAYOUT(bLocal_347, "COWS_02_BASE", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(Local_791))
		{
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		Local_791.f_4 = CREATE_POINT_IN_LAYOUT(bLocal_347, "COWS_02_CENTER", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(StackVal))
		{
		}
	}
	if (!SQUAD_IS_VALID(Local_791.f_48))
	{
		Local_791.f_48 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "STRAGGLE_SQUAD02"));
		if (SQUAD_IS_VALID(Local_791.f_48))
		{
			SQUAD_GOALS_CLEAR(Local_791.f_48);
		}
	}
	if (!SQUAD_IS_VALID(Local_791.f_52))
	{
		Local_791.f_52 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "RETURN_SQUAD02"));
		if (SQUAD_IS_VALID(Local_791.f_52))
		{
			SQUAD_GOALS_CLEAR(Local_791.f_52);
		}
	}
	if (!SQUAD_IS_VALID(Local_791.f_56))
	{
		Local_791.f_56 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "GOAL_SQUAD02"));
		if (SQUAD_IS_VALID(Local_791.f_56))
		{
			SQUAD_GOALS_CLEAR(Local_791.f_56);
		}
	}
	if (!IS_VOLUME_VALID(Local_791.f_40))
	{
		Local_791.f_40 = CREATE_VOLUME_IN_LAYOUT(bLocal_347, "HERD_VOLUME_MEDIUM", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 9.0f, 9.0f, 9.0f);
		if (IS_VOLUME_VALID(Local_791.f_40))
		{
			if (IS_OBJECT_VALID(StackVal))
			{
				ATTACH_OBJECTS(StackVal, Local_791.f_40, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			}
		}
	}
	Local_791.f_12 = "";
	Local_791.f_8 = "";
	Local_791.f_100 = 0;
	return;
}

void Function_310(bool bParam0, bool bParam1) //Position: 0xE0F9 / 57593
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
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_311() //Position: 0xE13A / 57658
{
	Local_4.f_296 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RanchHand02"));
	(*&Local_4 + 276)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RANCHHAND_02_01", 33, -860.0f, 101,3961f, 2672f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 276)[02], Local_4.f_296);
	(*&Local_4 + 276)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RANCHHAND_02_02", 34, -864,0001f, 100,3922f, 2708f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 276)[12], Local_4.f_296);
	return;
}

void Function_312() //Position: 0xE1E1 / 57825
{
	Local_4.f_224 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse02"));
	(*&Local_4 + 204)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_02_01", 980, -864,0001f, 102,4f, 2668f, 0.0f, 154,7027f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 204)[02], Local_4.f_224);
	(*&Local_4 + 204)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_02_02", 981, -864,0001f, 100,3922f, 2712f, 0.0f, -45,79245f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 204)[12], Local_4.f_224);
	return;
}

void Function_313(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0xE27F / 57983
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_314(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1, iParam2, iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_314(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xE2B5 / 58037
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

void Function_315(bool bParam0, bool bParam1) //Position: 0xE2F2 / 58098
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

void Function_316(bool bParam0, bool bParam1) //Position: 0xE334 / 58164
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

void Function_317() //Position: 0xE375 / 58229
{
	Local_4.f_200 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse01"));
	(*&Local_4 + 188)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_01", 977, -813,6013f, 93,36469f, 2430,015f, 0.0f, 77,46044f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 188)[02], Local_4.f_200);
	return;
}

void Function_318(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xE3D2 / 58322
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

void Function_319(int iParam0) //Position: 0xE4D9 / 58585
{
	if (!Function_320(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_194(1, 0, 1);
		}
	}
	return;
}

bool Function_320(int iParam0) //Position: 0xE4F4 / 58612
{
	return iParam0->f_20;
}

bool Function_321(int iParam0) //Position: 0xE4FE / 58622
{
	if (!Function_81(iParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[iParam0]), 4);
}

void Function_322() //Position: 0xE51A / 58650
{
	Function_162(16396);
	Function_325(12);
	Function_325(13);
	Function_325(11);
	Function_325(35);
	Function_325(6);
	Function_325(9);
	Function_323(9);
	return;
}

void Function_323(int iParam0) //Position: 0xE548 / 58696
{
	Function_324(&Global_28842, iParam0);
	return;
}

void Function_324(var uParam0, int iParam1) //Position: 0xE556 / 58710
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_325(int iParam0) //Position: 0xE579 / 58745
{
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_326(bool bParam0) //Position: 0xE599 / 58777
{
	Function_327(0, 0x40400000);
	Function_208();
	Function_207();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_327(bool bParam0, float fParam1) //Position: 0xE5CD / 58829
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
	Function_329();
	Function_328();
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

void Function_328() //Position: 0xE6CB / 59083
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_329() //Position: 0xE6FD / 59133
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

void Function_330(bool bParam0) //Position: 0xE7FA / 59386
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
						if (((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1008 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1009) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1010) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1011) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1012) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1013) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1014) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1073)
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

void Function_331() //Position: 0xE91A / 59674
{
	Function_330(bLocal_347);
	if (!iLocal_716)
	{
		if (iLocal_429 > 2)
		{
			if (Function_321(Global_30668[0]))
			{
				Function_415(&iLocal_668);
			}
			else
			{
				iLocal_654 = 0;
				iLocal_716 = 0;
			}
		}
	}
	if (((iLocal_429 < 5 && iLocal_429 > 105) && !iLocal_429 != 104) && !iLocal_429 != 103)
	{
		Function_414(Local_791.f_44, Local_791.f_56, Local_4.f_452);
		Function_414(Local_791.f_52, Local_791.f_56, Local_4.f_452);
		Function_413(&Local_791);
		if (bLocal_704)
		{
			Function_409(&Local_791, 0);
			if (iLocal_429 > 8)
			{
				Function_408(&Local_791, 0);
				Function_407(&Local_791, 0, 0x41700000);
			}
			if (Function_293(&bLocal_720) <= 0,2f)
			{
				if (!bLocal_705)
				{
					Function_403(Local_791.f_52, &iLocal_723, 3.0f, Local_4.f_1356, 20.0f);
				}
				Function_222(&bLocal_720);
			}
		}
		if (!iLocal_719)
		{
			if (IS_OBJECT_VALID(StackVal) && IS_ACTOR_VALID(bLocal_432))
			{
				if (IS_VOLUME_VALID(Local_4.f_524))
				{
					if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_524) || IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_524))
					{
						iLocal_719 = 1;
					}
				}
			}
		}
		Function_402();
		Function_401(Global_34573);
		Function_381();
	}
	switch (iLocal_429)
	{
		case 0x00000000:
			Function_326(0);
			SET_ACTOR_HEALTH(bLocal_432, GET_ACTOR_MAX_HEALTH(bLocal_432));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_443[3] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				iLocal_430 = Global_30628[2];
				if (!Function_321(iLocal_430))
				{
					Function_319(&Local_348);
				}
				Function_318(Global_34573, (*&Local_4 + 680)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_432))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_432);
					CLEAR_ACTOR_MAX_SPEED(bLocal_432);
					TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_433, true);
				}
				Function_222(&bLocal_434);
				iLocal_429 = 1;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_430) || iLocal_430 != 4294967295))
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(15);
			AUDIO_MUSIC_SET_MOOD("nHERDING_2", 0, 4294967295, 4294967295);
			iLocal_657 = 0;
			iLocal_654 = 0;
			iLocal_655 = 0;
			iLocal_662 = 0;
			iLocal_663 = 0;
			iLocal_664 = 0;
			iLocal_665 = 0;
			iLocal_656 = 0;
			bLocal_704 = false;
			iLocal_714 = 0;
			iLocal_719 = 0;
			Function_379();
			if (iLocal_443[3] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_318(Global_34573, (*&Local_4 + 680)[0], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_433))
					{
						Function_318(bLocal_433, (*&Local_4 + 680)[4], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
						}
					}
				}
				else
				{
					bLocal_433 = Function_373(1, 1, 0, 0, 0, 0, 1, 0);
				}
				if (IS_ACTOR_VALID(bLocal_432))
				{
					Function_318(bLocal_432, (*&Local_4 + 680)[2], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
					{
						Function_318((*&Local_4 + 188)[02], (*&Local_4 + 680)[5], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_432))
			{
				Function_371(3, 0, 1);
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_432);
				CLEAR_ACTOR_MAX_SPEED(bLocal_432);
				TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_432, true);
			}
			if (SQUAD_IS_VALID(Local_760.f_56))
			{
				Function_296(Local_760.f_56, Local_791.f_44);
			}
			if (SQUAD_IS_VALID(Local_760.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_760.f_44);
				Function_297(Local_760.f_44);
				Function_296(Local_760.f_44, Local_791.f_44);
			}
			Function_364(&(Local_494[017]), bLocal_432, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_364(&(Local_494[117]), Local_4.f_296, "Rancher", 1, 0x5f5e100, 1);
			Function_364(&(Local_494[217]), Local_791.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[317]), Local_791.f_48, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[417]), Local_791.f_52, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[517]), Local_791.f_56, "Cow", 0, 0x5f5e100, 1);
			Function_363(&(Local_494[617]));
			Function_363(&(Local_494[717]));
			Function_363(&(Local_494[817]));
			if (HUD_IS_FADED())
			{
				Function_222(&bLocal_434);
				iLocal_429 = 5;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			Function_236(iLocal_428);
			Function_357(StackVal, StackVal, Function_236(iLocal_428), iLocal_428, Global_30628[2], Function_239(iLocal_428), 2);
			bLocal_658 = Function_356();
			PRINTINT(bLocal_658);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID((*&Local_4 + 188)[02])) && IS_ACTOR_VALID(bLocal_433)) && SQUAD_IS_VALID(Local_791.f_44)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_791.f_44, (SQUAD_GET_SIZE(Local_791.f_44) - 1))))
			{
				if (((Function_355(bLocal_432, 1, 0x41700000) && Function_355((*&Local_4 + 188)[02], 1, 0x41700000)) && Function_355(bLocal_433, 1, 0x41700000)) && Function_355(SQUAD_GET_ACTOR_BY_INDEX(Local_791.f_44, (SQUAD_GET_SIZE(Local_791.f_44) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_432) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_222(&bLocal_434);
						iLocal_429 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(Global_34573))
						{
							Function_318(Global_34573, (*&Local_4 + 680)[0], 1, 1, 1);
							if (IS_ACTOR_VALID(bLocal_433))
							{
								Function_318(bLocal_433, (*&Local_4 + 680)[4], 1, 1, 1);
								if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
								{
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
								}
							}
						}
						else
						{
							bLocal_433 = Function_373(1, 1, 0, 0, 0, 0, 1, 0);
						}
						if (IS_ACTOR_VALID(bLocal_432))
						{
							Function_318(bLocal_432, (*&Local_4 + 680)[2], 1, 1, 1);
							if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
							{
								if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
								{
									ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
								}
							}
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
			if (SQUAD_IS_VALID(Local_791.f_44))
			{
				Function_354();
				Function_353();
				Function_297(Local_791.f_44);
				Function_351(Local_791.f_44, &Local_4 + 388);
				Function_350(Local_760.f_44, 2, 1);
				Function_350(Local_760.f_56, 2, 1);
				Function_350(Local_760.f_48, 2, 1);
			}
			CAMERA_RESET(0);
			Function_222(&bLocal_434);
			iLocal_429 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_BLIP_VALID(bLocal_699))
				{
					bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_828, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_699))
					{
						SET_BLIP_PRIORITY(bLocal_699, 3);
					}
				}
				if (!IS_OBJECT_VALID(bLocal_700))
				{
					GET_OBJECT_POSITION(Local_4.f_828, &vLocal_681);
					GET_OBJECT_ORIENTATION(Local_4.f_828, &vLocal_684);
					bLocal_700 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_700))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_752))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_752 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_347, "RANCH07_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_752))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_752, 0);
							SET_CAMERA_FOCUS_OBJECT(StackVal, bLocal_752, 0.0f, 0.0f, 0.0f, 1,5f);
						}
					}
				}
				Function_237(Local_4.f_828);
				vLocal_675 = { StackVal, StackVal, Function_237(Local_4.f_828) };
				if (IS_ACTOR_VALID(bLocal_432))
				{
					CLEAR_ACTOR_MIN_SPEED(bLocal_432);
					CLEAR_ACTOR_MAX_SPEED(bLocal_432);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_432);
					Function_371(3, 0, 1);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_432, 1);
					SET_ACTOR_MAX_SPEED(bLocal_432, 4);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_432, 2);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(false, &vLocal_675, 0);
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1356, 20.0f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
				{
					Function_237(Local_4.f_828);
					vLocal_687 = { StackVal, StackVal, Function_237(Local_4.f_828) };
					SET_ACTOR_MAX_SPEED((*&Local_4 + 276)[02], 4);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(false, &vLocal_687, 0);
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1352, -4.0f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 276)[02], bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
					TASK_PRIORITY_SET((*&Local_4 + 276)[02], 2);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
				{
					SET_ACTOR_MAX_SPEED((*&Local_4 + 276)[12], 4);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(false, &vLocal_687, 0);
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1360, -4.0f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 276)[12], bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
					TASK_PRIORITY_SET((*&Local_4 + 276)[12], 2);
				}
				if (iLocal_443[3] == 1)
				{
					if (SQUAD_IS_VALID(Local_791.f_44))
					{
						Function_354();
						Function_353();
						Function_297(Local_791.f_44);
						Function_351(Local_791.f_44, &Local_4 + 388);
						Function_350(Local_760.f_44, 2, 1);
						Function_350(Local_760.f_56, 2, 1);
						Function_350(Local_760.f_48, 2, 1);
					}
				}
				bLocal_706 = false;
				if (SQUAD_IS_VALID(Local_791.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_791.f_48);
					Function_298(Local_791.f_48);
				}
				*(&Local_791 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_791.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_791.f_52);
					Function_298(Local_791.f_52);
				}
				Local_791.f_8 = Local_4.f_828;
				GET_OBJECT_POSITION(Local_4.f_828, &uLocal_678);
				if (SQUAD_IS_VALID(Local_791.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_791.f_56);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_472, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_791.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				}
				Function_349();
				Function_222(&bLocal_434);
				iLocal_429 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_293(&bLocal_434) <= 5.0f)
			{
				Function_348("ranch07_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_293(&bLocal_434) <= 8.0f)
			{
				if (IS_OBJECT_VALID(bLocal_752))
				{
					SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_752, 1);
				}
				Function_132("ranch07_obj05_start1", 4.0f, 1, 0, 2, 1, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_293(&bLocal_434) <= 5.0f)
			{
				if (IS_OBJECT_VALID(bLocal_752))
				{
					SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_752, 0);
				}
				Function_132("ranch07_obj05_start2", 10.0f, 1, 0, 2, 1, 0);
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_345(&bLocal_440, 60.0f, bLocal_433, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_451, 0, bLocal_347, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_699))
				{
					REMOVE_BLIP(bLocal_699);
				}
				if (IS_OBJECT_VALID(bLocal_700))
				{
					DESTROY_OBJECT(bLocal_700);
				}
				if (bLocal_704)
				{
					Function_344();
				}
			}
			else
			{
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (!bLocal_704)
					{
						Function_241();
						Function_343();
					}
				}
				if (bLocal_706)
				{
					if (Function_336(StackVal, &bLocal_440, 245.0f, 385.0f, "Herd_return", "Herd_abandoned", &bLocal_451, 0, 0, 0, 4294967295, 1))
					{
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						if (IS_OBJECT_VALID(bLocal_700))
						{
							DESTROY_OBJECT(bLocal_700);
						}
					}
					else
					{
						if (!IS_BLIP_VALID(bLocal_699))
						{
							bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_828, 330, 0f, 2, 0);
							if (IS_BLIP_VALID(bLocal_699))
							{
							}
						}
						if (!IS_OBJECT_VALID(bLocal_700))
						{
							GET_OBJECT_POSITION(Local_4.f_828, &vLocal_681);
							GET_OBJECT_ORIENTATION(Local_4.f_828, &vLocal_684);
							bLocal_700 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
							if (IS_OBJECT_VALID(bLocal_700))
							{
							}
						}
					}
				}
				else if (Function_336(StackVal, &bLocal_440, 190.0f, 330.0f, "Herd_return", "Herd_abandoned", &bLocal_451, 0, 0, 0, 4294967295, 1))
				{
					if (IS_BLIP_VALID(bLocal_699))
					{
						REMOVE_BLIP(bLocal_699);
					}
					if (IS_OBJECT_VALID(bLocal_700))
					{
						DESTROY_OBJECT(bLocal_700);
					}
				}
				else
				{
					if (!IS_BLIP_VALID(bLocal_699))
					{
						bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_828, 330, 0f, 2, 0);
						if (IS_BLIP_VALID(bLocal_699))
						{
						}
					}
					if (!IS_OBJECT_VALID(bLocal_700))
					{
						GET_OBJECT_POSITION(Local_4.f_828, &vLocal_681);
						GET_OBJECT_ORIENTATION(Local_4.f_828, &vLocal_684);
						bLocal_700 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
						if (IS_OBJECT_VALID(bLocal_700))
						{
						}
					}
				}
				if (((SQUAD_IS_VALID(Local_791.f_44) && SQUAD_IS_VALID(Local_791.f_56)) && SQUAD_IS_VALID(Local_791.f_48)) && SQUAD_IS_VALID(Local_791.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_791.f_44) != 0 && SQUAD_GET_SIZE(Local_791.f_48) != 0) && SQUAD_GET_SIZE(Local_791.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						if (IS_OBJECT_VALID(bLocal_700))
						{
							DESTROY_OBJECT(bLocal_700);
						}
						Function_335(Local_791.f_44);
						Function_335(Local_791.f_48);
						Function_335(Local_791.f_52);
						Function_335(Local_791.f_56);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_241();
						Function_222(&bLocal_434);
						iLocal_429 = 11;
					}
				}
				if (Local_791.f_100)
				{
					if (Function_293(&Local_791 + 88) <= 30.0f)
					{
						if (StackVal && IS_OBJECT_VALID((StackVal && IS_OBJECT_VALID((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID(Global_34573))))))
						{
							if (Function_332(StackVal, bLocal_432, 25.0f))
							{
								if (StackVal && Function_332(Function_332(StackVal, Global_34573, 25.0f), Global_34573, 25.0f))
								{
									LOG_ERROR("RANCH07 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH07 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(Local_791.f_44) && SQUAD_IS_VALID(Local_791.f_52)) && SQUAD_IS_VALID(Local_791.f_48)) && SQUAD_IS_VALID(Local_791.f_56))
									{
										Function_296(Local_791.f_44, Local_791.f_56);
										Function_296(Local_791.f_52, Local_791.f_56);
										Function_296(Local_791.f_48, Local_791.f_56);
									}
									Function_222(&Local_791 + 88);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_293(&bLocal_434) <= 5.0f)
			{
				Function_241();
				Function_222(&bLocal_434);
				iLocal_429 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_443[4] = 1;
				Function_222(&bLocal_434);
				iLocal_428 = 101;
				iLocal_429 = 0;
			}
			break;
	}
	return;
}

bool Function_332(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF92C / 63788
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_334(bParam0);
			Function_333(bParam1);
			if (VDIST(Function_334(bParam0), Function_333(bParam1)) >= bParam2)
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

vector3 Function_333(bool bParam0) //Position: 0xFA46 / 64070
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

vector3 Function_334(bool bParam0) //Position: 0xFAB2 / 64178
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

void Function_335(bool bParam0) //Position: 0xFB1C / 64284
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

bool Function_336(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xFB69 / 64361
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_332(Global_34573, bParam3, bParam2))
	{
		Function_230(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_332(Global_34573, bParam3, bParam1))
	{
		if (!Function_342(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_348(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_341(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_340(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_340(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_342(1))
	{
		Function_339(1);
		if (!Function_338())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_337();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_340(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_340(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_337() //Position: 0xFCD7 / 64727
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

bool Function_338() //Position: 0xFD02 / 64770
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

void Function_339(int iParam0) //Position: 0xFD46 / 64838
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_36(&bVar0, iParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_340(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xFDA9 / 64937
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

void Function_341(int iParam0) //Position: 0xFE4A / 65098
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_76(&bVar0, iParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_342(bool bParam0) //Position: 0xFEAD / 65197
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

void Function_343() //Position: 0xFEF4 / 65268
{
	bLocal_704 = true;
	if (iLocal_428 == 4)
	{
		_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_791.f_44, Local_791.f_60, Global_34573, 22.0f, 6.0f, 1);
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_791.f_44, Local_791.f_60, Global_34573, 23.0f, 1.0f, 15.0f, 10.0f, 0);
	}
	else
	{
		_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_760.f_44, Local_760.f_60, Global_34573, 15.0f, 4,5f, 1);
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_760.f_44, Local_760.f_60, Global_34573, 23.0f, 1.0f, 9.0f, 7.0f, 0);
	}
	DECOR_SET_BOOL(Global_34573, "herding", true);
	return;
}

void Function_344() //Position: 0xFF8A / 65418
{
	bool bVar0;
	bool bVar1;
	
	bLocal_704 = false;
	if (iLocal_428 == 4)
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_791.f_44, Local_791.f_60, Global_34573);
		if (IS_OBJECT_VALID(StackVal))
		{
			bVar0 = GET_BLIP_ON_OBJECT(StackVal);
			if (IS_BLIP_VALID(bVar0))
			{
				REMOVE_BLIP(bVar0);
			}
		}
		if (IS_OBJECT_VALID(Local_791))
		{
			bVar1 = GET_BLIP_ON_OBJECT(Local_791);
			if (IS_BLIP_VALID(bVar1))
			{
				REMOVE_BLIP(bVar1);
			}
		}
		Function_335(Local_791.f_44);
		Function_335(Local_791.f_48);
		Function_335(Local_791.f_52);
		Function_335(Local_791.f_56);
	}
	else
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_760.f_44, Local_760.f_60, Global_34573);
		if (IS_OBJECT_VALID(StackVal))
		{
			bVar0 = GET_BLIP_ON_OBJECT(StackVal);
			if (IS_BLIP_VALID(bVar0))
			{
				REMOVE_BLIP(bVar0);
			}
		}
		if (IS_OBJECT_VALID(Local_760))
		{
			bVar1 = GET_BLIP_ON_OBJECT(Local_760);
			if (IS_BLIP_VALID(bVar1))
			{
				REMOVE_BLIP(bVar1);
			}
		}
		Function_335(Local_760.f_44);
		Function_335(Local_760.f_48);
		Function_335(Local_760.f_52);
		Function_335(Local_760.f_56);
	}
	DECOR_REMOVE(Global_34573, "herding");
	return;
}

bool Function_345(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x10090 / 65680
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_ALIVE(bParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(Global_34573)))
		{
			if (!Function_342(16))
			{
				if (bParam7)
				{
					Function_241();
				}
				if (!Function_347())
				{
					Function_348(bParam4, 7,5f, 0, 2, 0, 0, 0);
					Function_341(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_230(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_342(8))
		{
			if (bParam7)
			{
				Function_241();
			}
			if (!Function_347())
			{
				Function_348(bParam3, 7,5f, 0, 2, 0, 0, 0);
				Function_341(8);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_340(bParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_340(bParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam2, bParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_342(8))
	{
		Function_339(8);
		if (!Function_338())
		{
			Function_346();
			Function_337();
		}
	}
	if (GET_MOUNT(Global_34573) == bParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam2));
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_340(bParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_340(bParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_346() //Position: 0x101E5 / 66021
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_347() //Position: 0x101F1 / 66033
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_348(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x101FE / 66046
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

void Function_349() //Position: 0x10251 / 66129
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_smallToLarge", "Ranch07_smallToLarge", false, 2, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_350(bool bParam0, bool bParam1, int iParam2) //Position: 0x102A2 / 66210
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

void Function_351(bool bParam0, int iParam1) //Position: 0x102E4 / 66276
{
	int iVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < (*iParam1 - 1))
		{
			if (IS_VOLUME_VALID((*iParam1)[iVar0]))
			{
				Function_352(bParam0, (*iParam1)[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

int Function_352(bool bParam0, bool bParam1) //Position: 0x10326 / 66342
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

void Function_353() //Position: 0x1037B / 66427
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_791.f_44, Local_791.f_60, Local_791.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_354() //Position: 0x103A3 / 66467
{
	Function_298(Local_791.f_44);
	SQUAD_GOALS_CLEAR(Local_791.f_44);
	Local_791.f_60 = UNK_0x48588CCB(Local_791.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_791.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_791.f_44, Local_791.f_60);
	}
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_791.f_44, Local_791.f_60, Global_34573, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_791.f_44, Local_791.f_60, Global_34573, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_791.f_44, Local_791.f_60, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_791.f_44, Local_791.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_791.f_44, Local_791.f_60, 0, 1);
	if (IS_ACTOR_VALID(bLocal_432))
	{
		if (IS_VOLUME_VALID(Local_791.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_432);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_791.f_40);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_432, Local_791.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_791.f_44, Local_791.f_60, bLocal_432, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
	{
		if (IS_VOLUME_VALID(Local_791.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 276)[02]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 276)[02], Local_791.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_791.f_44, Local_791.f_60, (*&Local_4 + 276)[02], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
	{
		if (IS_VOLUME_VALID(Local_791.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 276)[12]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 276)[12], Local_791.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_791.f_44, Local_791.f_60, (*&Local_4 + 276)[12], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(Global_34573, "herding", true);
	bLocal_704 = true;
	return;
}

int Function_355(bool bParam0, bool bParam1, float fParam2) //Position: 0x10550 / 66896
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

bool Function_356() //Position: 0x105ED / 67053
{
	return Global_34165.f_60;
}

void Function_357(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x105F8 / 67064
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
	if (iParam3 != Global_34165.f_48 && !Function_362())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_361(0);
	Function_360();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_359(uParam4, iVar0, iVar1);
	Function_358();
}

void Function_358() //Position: 0x10695 / 67221
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

void Function_359(int iParam0, bool bParam1, bool bParam2) //Position: 0x106D6 / 67286
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

void Function_360() //Position: 0x1083C / 67644
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_361(bool bParam0) //Position: 0x10860 / 67680
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

bool Function_362() //Position: 0x1088F / 67727
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_363(bool bParam0) //Position: 0x108AA / 67754
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

int Function_364(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1095E / 67934
{
	if (!Function_370(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_369(uParam0, bParam2))
	{
		return 0;
	}
	Function_368(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_365(uParam0, iParam4, iParam5);
	return 1;
}

void Function_365(var uParam0, int iParam1, int iParam2) //Position: 0x1099A / 67994
{
	if (iParam1 != 100000000)
	{
		Function_367(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_366(uParam0, iParam2);
	}
	return;
}

void Function_366(int iParam0, bool bParam1) //Position: 0x109BD / 68029
{
	iParam0->f_40 = 0;
	Function_367(iParam0, 2, bParam1);
	Function_367(iParam0, 4, bParam1);
	Function_367(iParam0, 8, bParam1);
	Function_367(iParam0, 16, bParam1);
	Function_367(iParam0, 32, bParam1);
	Function_367(iParam0, 64, bParam1);
	Function_367(iParam0, 128, bParam1);
	Function_367(iParam0, 256, bParam1);
	Function_367(iParam0, 512, bParam1);
	Function_367(iParam0, 1024, bParam1);
	return;
}

void Function_367(int iParam0, int iParam1, bool bParam2) //Position: 0x10A23 / 68131
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

void Function_368(var uParam0, int iParam1) //Position: 0x10A5F / 68191
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_369(int iParam0, bool bParam1) //Position: 0x10A6B / 68203
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

bool Function_370(var uParam0, bool bParam1) //Position: 0x10AF4 / 68340
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

void Function_371(int iParam0, bool bParam1, bool bParam2) //Position: 0x10C80 / 68736
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
						Function_219(bVar1);
					}
				}
				Function_372(bVar0);
			}
		}
	}
	return;
}

void Function_372(bool bParam0) //Position: 0x10D77 / 68983
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

bool Function_373(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x10DA3 / 69027
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
	if (Global_3381 || Function_229(1))
	{
		Function_378(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_377())
		{
			return "";
		}
	}
	if (!Function_375())
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
		Function_237(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_237(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_237(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_237(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_374(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_374(StackVal, StackVal, vVar5, 0, 1, 1);
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

var Function_374(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x110FB / 69883
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

bool Function_375() //Position: 0x11196 / 70038
{
	if (Function_376() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_376() //Position: 0x111AC / 70060
{
	return Global_12976.f_152;
}

bool Function_377() //Position: 0x111B7 / 70071
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_378(var uParam0, bool bParam1, bool bParam2) //Position: 0x111D7 / 70103
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

void Function_379() //Position: 0x11204 / 70148
{
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_317();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_316(Local_4.f_200, 0);
			Function_315(Local_4.f_200, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				Function_318((*&Local_4 + 188)[02], (*&Local_4 + 680)[5], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_432, (*&Local_4 + 188)[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_224))
	{
		Function_312();
		if (SQUAD_IS_VALID(Local_4.f_224))
		{
			Function_316(Local_4.f_224, 0);
			Function_315(Local_4.f_224, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_224, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_296))
	{
		Function_311();
		if (SQUAD_IS_VALID(Local_4.f_296))
		{
			Function_310(Local_4.f_296, 1);
			SQUAD_SET_FACTION(Local_4.f_296, 20);
			Function_313(Local_4.f_296, 0, 0, 0);
			Function_316(Local_4.f_296, 0);
			if (SQUAD_IS_VALID(Local_4.f_224))
			{
				Function_299(Local_4.f_296, Local_4.f_224);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_296, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_380();
	return;
}

void Function_380() //Position: 0x1134D / 70477
{
	Function_309();
	Local_791.f_12 = Local_4.f_1356;
	if (!SQUAD_IS_VALID(Local_791.f_44))
	{
		Local_791.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(Local_791.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_791.f_44);
			Function_306(&Local_791, bLocal_347, Local_4.f_824, &iLocal_747, 5, 4,5f, 7.0f, 1,5f, 1);
			Function_316(Local_791.f_44, 0);
			Function_305(Local_791.f_44, 1);
			Function_304(Local_791.f_44, 0);
			Function_303(Local_791.f_44, 0);
			Function_302(Local_791.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_791.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_468, -1.0f);
		}
	}
	return;
}

void Function_381() //Position: 0x1141D / 70685
{
	if (Function_293(&bLocal_729) <= 0,1f)
	{
		switch (iLocal_657)
		{
			case 0x00000000:
				Function_222(&bLocal_437);
				Function_222(&bLocal_741);
				Function_222(&bLocal_744);
				iLocal_657++;
				break;
			
			case 0x00000001:
				if (iLocal_429 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_400();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_657++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_384(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (!iLocal_714)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_657++;
					}
				}
				break;
			
			case 0x00000003:
				Function_384(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (!iLocal_719)
				{
					if (Function_293(&bLocal_437) <= 5.0f)
					{
						if (SQUAD_GET_SIZE(Local_791.f_48) <= 4 || SQUAD_GET_SIZE(Local_791.f_52) <= 4)
						{
							Function_383();
							Function_222(&bLocal_437);
						}
					}
				}
				if (SQUAD_GET_SIZE(Local_791.f_48) != 0 && SQUAD_GET_SIZE(Local_791.f_52) != 0)
				{
					if (Function_293(&bLocal_437) <= 3.0f)
					{
						if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
						{
							if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 276)[02], 24.0f))
							{
								if (Function_382(RAND_INT_RANGE(false, true)))
								{
									SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 276)[02], "Ranch07_goodJob6", Global_34573, 1, 0, 0, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 276)[02], "Ranch07_greatJob6", Global_34573, 1, 0, 0, 0, 0);
								}
							}
						}
						Function_222(&bLocal_437);
					}
					if (Function_293(&bLocal_741) <= 4.0f)
					{
						if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
						{
							if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 276)[12], 24.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 276)[12], "Ranch07_greatJob7", Global_34573, 1, 0, 0, 0, 0);
							}
						}
						Function_222(&bLocal_741);
					}
				}
				break;
			
			case 0x00000004:
				iLocal_657++;
				break;
		}
		Function_222(&bLocal_729);
	}
	return;
}

bool Function_382(bool bParam0) //Position: 0x11623 / 71203
{
	if (bParam0 > 1)
	{
		return 1;
	}
	return 0;
}

void Function_383() //Position: 0x11635 / 71221
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_loseHerdControl", "Ranch07_loseHerdControl", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1168C / 71308
{
	if (Function_293(&bLocal_726) <= 6.0f)
	{
		Function_392();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_offHorse", "Ranch07_offHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		if (!IS_ACTOR_RIDING(bLocal_432))
		{
			if (bParam0)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_391();
				Function_222(&bLocal_726);
			}
		}
		if (bParam5)
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_432, 1,15f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_rideIntoBonHorse", "Ranch07_rideIntoBonHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		if (!iLocal_719)
		{
			if (bParam1)
			{
				Function_237(Local_791.f_44);
				if (!Function_390(StackVal, StackVal, StackVal, Function_237(Local_791.f_44), 135.0f))
				{
					if (bParam1)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_herdWrongDirec", "Ranch07_herdWrongDirec", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_222(&bLocal_726);
					}
				}
				if (SQUAD_GET_SIZE(Local_791.f_48) <= 3 || SQUAD_GET_SIZE(Local_791.f_52) <= 3)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_herdBadly", "Ranch07_herdBadly", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_222(&bLocal_726);
				}
				else if (SQUAD_GET_SIZE(Local_791.f_48) <= 1 || SQUAD_GET_SIZE(Local_791.f_52) <= 1)
				{
					if (!Function_332(StackVal, Global_34573, 35.0f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_returnStragglers", "Ranch07_returnStragglers", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_222(&bLocal_726);
					}
				}
			}
			if (bParam2)
			{
				if (SQUAD_IS_VALID(Local_791.f_48) && SQUAD_IS_VALID(Local_791.f_52))
				{
					if (SQUAD_GET_SIZE(Local_791.f_48) != 0 && SQUAD_GET_SIZE(Local_791.f_52) != 0)
					{
						if (!Function_332(StackVal, Global_34573, bParam3) && !ACTORS_IN_RANGE(Global_34573, bLocal_432, bParam3))
						{
							if (!iLocal_714)
							{
								bLocal_701 = Local_4.f_1356;
								if (Function_389(Global_34573, bLocal_432, bLocal_701))
								{
									iLocal_714 = 1;
									ABORT_SCRIPTED_CONVERSATION(1);
									Function_388();
									Function_222(&bLocal_726);
								}
								else
								{
									iLocal_714 = 1;
									ABORT_SCRIPTED_CONVERSATION(1);
									if (Function_382(RAND_INT_RANGE(false, true)))
									{
										Function_387();
									}
									else
									{
										Function_386();
									}
									Function_222(&bLocal_726);
								}
							}
						}
					}
				}
			}
			if (StackVal && Function_332(ACTORS_IN_RANGE(Global_34573, bLocal_432, bParam4), Global_34573, bParam4))
			{
				if (bParam2)
				{
					if (iLocal_714)
					{
						iLocal_714 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_385();
						Function_222(&bLocal_726);
					}
				}
			}
		}
	}
}

void Function_385() //Position: 0x119A6 / 72102
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_comesBack", "Ranch07_comesBack", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_386() //Position: 0x119F1 / 72177
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_wrongDirec", "Ranch07_wrongDirec", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_387() //Position: 0x11A3E / 72254
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_farAhead", "Ranch07_farAhead", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_388() //Position: 0x11A87 / 72327
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_farBehind", "Ranch07_farBehind", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_389(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11AD2 / 72402
{
	var uVar0;
	var uVar3;
	float fVar6;
	var uVar7;
	float fVar8;
	var uVar9;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
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

bool Function_390(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x11B2A / 72490
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

void Function_391() //Position: 0x11BAF / 72623
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_pullBonOff", "Ranch07_pullBonOff", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_392() //Position: 0x11BFC / 72700
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_432)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_399(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_398();
						Function_222(&bLocal_726);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_397();
						Function_222(&bLocal_726);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_397();
					Function_222(&bLocal_726);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_gunBonnie", "Ranch07_gunBonnie", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		else if (bVar0 == (*&Local_4 + 188)[02])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_399(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_396();
						Function_222(&bLocal_726);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_396();
						Function_222(&bLocal_726);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_396();
					Function_222(&bLocal_726);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_gunBonnie", "Ranch07_gunBonnie", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		else if (IS_ACTOR_HUMAN(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_399(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_395();
						Function_222(&bLocal_726);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_394();
						Function_222(&bLocal_726);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_394();
					Function_222(&bLocal_726);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_gunOnChar", "Ranch07_gunOnChar", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		else if (IS_ACTOR_SHOOTING(Global_34573))
		{
			if (IS_WEAPON_DRAWN(Global_34573))
			{
				if (GET_WEAPON_IN_HAND(Global_34573) != 21 || GET_WEAPON_IN_HAND(Global_34573) != 45)
				{
					if (((Function_393(Local_760.f_44, Global_34573) || Function_393(Local_760.f_48, Global_34573)) || Function_393(Local_760.f_52, Global_34573)) || Function_393(Local_760.f_56, Global_34573))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_lassosCow", "Ranch07_lassosCow", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_222(&bLocal_726);
					}
				}
			}
		}
	}
	else if (!iLocal_428 != 0)
	{
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_399(GET_WEAPON_IN_HAND(Global_34573)))
			{
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_shootRandom", "Ranch07_shootRandom", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_222(&bLocal_726);
					}
				}
			}
		}
	}
	return;
}

int Function_393(bool bParam0, bool bParam1) //Position: 0x11F19 / 73497
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
					if (GET_LASSO_USER(bParam1) == bVar1)
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

void Function_394() //Position: 0x11F6B / 73579
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_assaultChar", "Ranch07_assaultChar", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395() //Position: 0x11FBA / 73658
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_shootChar", "Ranch07_shootChar", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_396() //Position: 0x12005 / 73733
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_shootBonsHorse", "Ranch07_shootBonsHorse", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_397() //Position: 0x1205A / 73818
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_assaultBonnie", "Ranch07_assaultBonnie", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_398() //Position: 0x120AD / 73901
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_shootBonnie", "Ranch07_shootBonnie", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_399(bool bParam0) //Position: 0x120FC / 73980
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

void Function_400() //Position: 0x12142 / 74050
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_remindHerd", "Ranch07_remindHerd", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_401(bool bParam0) //Position: 0x1218F / 74127
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

void Function_402() //Position: 0x121BE / 74174
{
	if (SQUAD_IS_VALID(Local_791.f_44))
	{
		switch (iLocal_656)
		{
			case 0x00000000:
				iLocal_656++;
				break;
			
			case 0x00000001:
				if (IS_VOLUME_VALID(Local_4.f_428))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_428))
						{
							iLocal_656++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (SQUAD_GOAL_IS_VALID(Local_791.f_60))
				{
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_791.f_44, Local_791.f_60, Local_4.f_1356);
					SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_791.f_44, Local_791.f_60, Local_4.f_1356, 75.0f, 1.0f, 0,25f, 1082130432);
					iLocal_656++;
				}
				break;
			
			case 0x00000003:
				iLocal_656++;
				break;
			}
	}
	return;
}

void Function_403(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x12280 / 74368
{
	if (IS_ACTOR_VALID(bLocal_432))
	{
		if (SQUAD_IS_VALID(bParam0))
		{
			switch (iLocal_655)
			{
				case 0x00000000:
					iLocal_655++;
					break;
				
				case 0x00000001:
					if (Function_293(bParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(bParam0))
						{
							if (SQUAD_GET_SIZE(bParam0) > 1)
							{
								if (!bLocal_706)
								{
									bLocal_702 = Function_405(StackVal, bParam0);
									if (IS_ACTOR_VALID(bLocal_702))
									{
										vLocal_675 = { 0.0f, 0.0f, 0.0f };
										SET_ACTOR_MAX_SPEED(bLocal_432, 4);
										bLocal_653 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(false, bLocal_702, &vLocal_675, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
										TASK_SEQUENCE_RELEASE(bLocal_653, 1);
										TASK_PRIORITY_SET(bLocal_432, true);
										bLocal_706 = true;
									}
								}
								else if (!Function_404(bLocal_702, bParam0, 0))
								{
									bLocal_706 = false;
								}
							}
							else if (!GET_TASK_STATUS(bLocal_432, 72) != 1)
							{
								SET_ACTOR_MAX_SPEED(bLocal_432, 4);
								bLocal_653 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
								TASK_SEQUENCE_RELEASE(bLocal_653, 1);
								TASK_PRIORITY_SET(bLocal_432, true);
								bLocal_706 = false;
							}
						}
						Function_222(bParam1);
					}
					break;
				
				case 0x00000003:
					iLocal_655++;
					break;
			}
		}
	}
}

bool Function_404(bool bParam0, bool bParam1, bool bParam2) //Position: 0x123C7 / 74695
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

var Function_405(bool bParam0, bool bParam1) //Position: 0x12407 / 74759
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
					fVar3 = Function_406(bParam1, bVar2);
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

var Function_406(bool bParam0, bool bParam1) //Position: 0x12483 / 74883
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_333(bParam0);
			vVar0 = { StackVal, StackVal, Function_333(bParam0) };
			Function_333(bParam1);
			vVar3 = { StackVal, StackVal, Function_333(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_407(int iParam0, bool bParam1, float fParam2) //Position: 0x1251E / 75038
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
										if (!Function_332(StackVal, bVar1, fVar4))
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
							if (Function_332(StackVal, bVar1, fVar3))
							{
								if (StackVal && Function_332(iParam0->f_100, bVar1, fVar4))
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
							if (Function_293(iParam0 + 88) <= fParam2)
							{
								Function_222(iParam0 + 88);
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

void Function_408(int iParam0, bool bParam1) //Position: 0x12845 / 75845
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
									if (!Function_332(StackVal, bVar0, fVar7))
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
									Function_222(iParam0 + 88);
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
								if (!Function_332(StackVal, bVar0, fVar6))
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
								if (StackVal || Function_332(Function_332(StackVal, bVar0, fVar5), bVar0, fVar5))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									if (Function_332(StackVal, bVar0, fVar5))
									{
									}
									else if (Function_332(StackVal, bVar0, fVar5))
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
												if (Function_332(bVar0, (*iParam0 + 104)[bVar3], 7.0f))
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
											else if (Function_332(bVar0, (*iParam0 + 104)[bVar3], 15.0f))
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

void Function_409(int iParam0, bool bParam1) //Position: 0x12E85 / 77445
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
								Function_412(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_412(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_410(iParam0->f_44);
								vVar3 = { StackVal, StackVal, Function_410(iParam0->f_44) };
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
								Function_412(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_412(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_410(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_410(iParam0->f_48) };
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
								Function_237(*iParam0);
								if (!Function_73(StackVal, StackVal, Function_237(*iParam0)))
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
								Function_237(StackVal);
								if (!Function_73(StackVal, StackVal, Function_237(StackVal)))
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
							Function_410(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_410(iParam0->f_44) };
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

vector3 Function_410(bool bParam0) //Position: 0x13163 / 78179
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
		UNK_0x44986367(&vVar5, Function_411(bVar1));
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar5, vVar8, StackVal) };
		bVar0++;
	}
	vVar8 = (vVar8.x / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar8.f_4 = 0.0f;
	vVar8.f_8 = (vVar8.z / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar2.f_4 = UNK_0x9C40E671(&vVar8);
	return StackVal, StackVal, vVar2;
}

var Function_411(bool bParam0) //Position: 0x131D0 / 78288
{
	return GET_HEADING(bParam0);
}

vector3 Function_412(vector3 vParam0, bool bParam3) //Position: 0x131DB / 78299
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

void Function_413(int iParam0) //Position: 0x1327B / 78459
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
								if (Function_332(StackVal, bVar1, fVar2))
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
								if (Function_332(StackVal, bVar1, fVar2))
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
								if (Function_332(StackVal, bVar1, fVar2))
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

void Function_414(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13497 / 78999
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

void Function_415(int iParam0) //Position: 0x134FD / 79101
{
	switch (iLocal_654)
	{
		case 0x00000000:
			iLocal_654++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID((*iParam0)[0]))
			{
				(*iParam0)[0] = Function_417("hennigansRanch", "stable01", 1);
				if (IS_DOOR_VALID((*iParam0)[0]))
				{
					Function_154((*iParam0)[0], 0);
					if (iLocal_428 == 0)
					{
						CLOSE_DOOR_FAST((*iParam0)[0]);
					}
					else if (iLocal_428 == 1)
					{
						CLOSE_DOOR_FAST((*iParam0)[0]);
					}
					else
					{
						CLOSE_DOOR_FAST((*iParam0)[0]);
					}
				}
			}
			else if (IS_DOOR_VALID((*iParam0)[0]))
			{
				Function_154((*iParam0)[0], 0);
				if (iLocal_428 == 0)
				{
					CLOSE_DOOR_FAST((*iParam0)[0]);
				}
				else if (iLocal_428 == 1)
				{
					CLOSE_DOOR_FAST((*iParam0)[0]);
				}
				else
				{
					CLOSE_DOOR_FAST((*iParam0)[0]);
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[1]))
			{
				(*iParam0)[1] = Function_417("hennigansRanch", "stable01", 2);
				if (IS_DOOR_VALID((*iParam0)[1]))
				{
					Function_154((*iParam0)[1], 0);
					if (iLocal_428 == 0)
					{
						CLOSE_DOOR_FAST((*iParam0)[1]);
					}
					else if (iLocal_428 == 1)
					{
						CLOSE_DOOR_FAST((*iParam0)[1]);
					}
					else
					{
						CLOSE_DOOR_FAST((*iParam0)[1]);
					}
				}
			}
			else if (IS_DOOR_VALID((*iParam0)[1]))
			{
				Function_154((*iParam0)[1], 0);
				if (iLocal_428 == 0)
				{
					CLOSE_DOOR_FAST((*iParam0)[1]);
				}
				else if (iLocal_428 == 1)
				{
					CLOSE_DOOR_FAST((*iParam0)[1]);
				}
				else
				{
					CLOSE_DOOR_FAST((*iParam0)[1]);
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[2]))
			{
				(*iParam0)[2] = Function_417("hennigansRanch", "stable02", 1);
				if (IS_DOOR_VALID((*iParam0)[2]))
				{
					Function_154((*iParam0)[2], 0);
					if (iLocal_428 == 0)
					{
						OPEN_DOOR_DIRECTION((*iParam0)[2], true);
					}
					else if (iLocal_428 == 1)
					{
						OPEN_DOOR_DIRECTION((*iParam0)[2], true);
					}
					else if (iLocal_428 == 2)
					{
						OPEN_DOOR_DIRECTION((*iParam0)[2], true);
					}
					else
					{
						OPEN_DOOR_DIRECTION((*iParam0)[2], true);
					}
				}
			}
			else if (IS_DOOR_VALID((*iParam0)[2]))
			{
				Function_154((*iParam0)[2], 0);
				if (iLocal_428 == 0)
				{
					OPEN_DOOR_DIRECTION((*iParam0)[2], true);
				}
				else if (iLocal_428 == 1)
				{
					OPEN_DOOR_DIRECTION((*iParam0)[2], true);
				}
				else if (iLocal_428 == 2)
				{
					OPEN_DOOR_DIRECTION((*iParam0)[2], true);
				}
				else
				{
					OPEN_DOOR_DIRECTION((*iParam0)[2], true);
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[3]))
			{
				(*iParam0)[3] = Function_417("hennigansRanch", "stable02", 7);
				if (IS_DOOR_VALID((*iParam0)[3]))
				{
					Function_154((*iParam0)[3], 0);
					if (iLocal_428 == 0)
					{
						OPEN_DOOR_DIRECTION((*iParam0)[3], false);
					}
					else if (iLocal_428 == 1)
					{
						OPEN_DOOR_DIRECTION((*iParam0)[3], false);
					}
					else if (iLocal_428 == 2)
					{
						OPEN_DOOR_DIRECTION((*iParam0)[3], false);
					}
					else
					{
						OPEN_DOOR_DIRECTION((*iParam0)[3], false);
					}
				}
			}
			else if (IS_DOOR_VALID((*iParam0)[3]))
			{
				Function_154((*iParam0)[3], 0);
				if (iLocal_428 == 0)
				{
					OPEN_DOOR_DIRECTION((*iParam0)[3], false);
				}
				else if (iLocal_428 == 1)
				{
					OPEN_DOOR_DIRECTION((*iParam0)[3], false);
				}
				else if (iLocal_428 == 2)
				{
					OPEN_DOOR_DIRECTION((*iParam0)[3], false);
				}
				else
				{
					OPEN_DOOR_DIRECTION((*iParam0)[3], false);
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[4]))
			{
				(*iParam0)[4] = Function_417("hennigansRanch", "stable02", 8);
				if (IS_DOOR_VALID((*iParam0)[4]))
				{
					Function_154((*iParam0)[4], 0);
					if (iLocal_428 == 0)
					{
						CLOSE_DOOR_FAST((*iParam0)[4]);
					}
					else if (iLocal_428 == 1)
					{
						CLOSE_DOOR_FAST((*iParam0)[4]);
					}
					else if (iLocal_428 == 2)
					{
						OPEN_DOOR_DIRECTION((*iParam0)[4], false);
					}
					else
					{
						OPEN_DOOR_DIRECTION((*iParam0)[4], false);
					}
				}
			}
			else if (IS_DOOR_VALID((*iParam0)[4]))
			{
				Function_154((*iParam0)[4], 0);
				if (iLocal_428 == 0)
				{
					CLOSE_DOOR_FAST((*iParam0)[4]);
				}
				else if (iLocal_428 == 1)
				{
					if (iLocal_443[0] == 0)
					{
						CLOSE_DOOR_FAST((*iParam0)[4]);
					}
					else
					{
						OPEN_DOOR_DIRECTION((*iParam0)[4], false);
					}
				}
				else if (iLocal_428 == 2)
				{
					OPEN_DOOR_DIRECTION((*iParam0)[4], false);
				}
				else
				{
					OPEN_DOOR_DIRECTION((*iParam0)[4], false);
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[5]))
			{
				(*iParam0)[5] = Function_417("hennigansRanch", "stable02", 9);
				if (IS_DOOR_VALID((*iParam0)[5]))
				{
					Function_154((*iParam0)[5], 0);
					if (iLocal_428 == 0)
					{
						CLOSE_DOOR_FAST((*iParam0)[5]);
					}
					else if (iLocal_428 == 1)
					{
						CLOSE_DOOR_FAST((*iParam0)[5]);
					}
					else if (iLocal_428 == 2)
					{
						OPEN_DOOR_DIRECTION((*iParam0)[5], true);
					}
					else
					{
						OPEN_DOOR_DIRECTION((*iParam0)[5], true);
					}
				}
			}
			else if (IS_DOOR_VALID((*iParam0)[5]))
			{
				Function_154((*iParam0)[5], 0);
				if (iLocal_428 == 0)
				{
					CLOSE_DOOR_FAST((*iParam0)[5]);
				}
				else if (iLocal_428 == 1)
				{
					if (iLocal_443[0] == 0)
					{
						CLOSE_DOOR_FAST((*iParam0)[5]);
					}
					else
					{
						OPEN_DOOR_DIRECTION((*iParam0)[5], true);
					}
				}
				else if (iLocal_428 == 2)
				{
					OPEN_DOOR_DIRECTION((*iParam0)[5], true);
				}
				else
				{
					OPEN_DOOR_DIRECTION((*iParam0)[5], true);
				}
			}
			iLocal_654++;
			break;
		
		case 0x00000002:
			if (iLocal_428 == 0)
			{
				if (iLocal_429 > 15)
				{
					if (IS_VOLUME_VALID(Local_4.f_476))
					{
						if (SQUAD_IS_VALID(Local_4.f_272))
						{
							if (Function_416(Local_4.f_272, Local_4.f_476))
							{
								if (IS_DOOR_VALID(iLocal_668[4]))
								{
									OPEN_DOOR_DIRECTION(iLocal_668[4], true);
								}
								if (IS_DOOR_VALID(iLocal_668[5]))
								{
									OPEN_DOOR_DIRECTION(iLocal_668[5], false);
								}
								iLocal_654++;
							}
						}
					}
				}
			}
			else if (iLocal_428 == 1)
			{
				if (iLocal_429 > 6)
				{
					if (IS_VOLUME_VALID(Local_4.f_476))
					{
						if (SQUAD_IS_VALID(Local_4.f_272))
						{
							if (Function_416(Local_4.f_272, Local_4.f_476))
							{
								if (IS_DOOR_VALID(iLocal_668[4]))
								{
									OPEN_DOOR_DIRECTION(iLocal_668[4], true);
								}
								if (IS_DOOR_VALID(iLocal_668[5]))
								{
									OPEN_DOOR_DIRECTION(iLocal_668[5], false);
								}
								iLocal_654++;
							}
						}
					}
				}
			}
			else
			{
				iLocal_654++;
			}
			break;
		
		case 0x00000003:
			iLocal_654++;
			iLocal_716 = 1;
			break;
	}
	return;
}

bool Function_416(bool bParam0, bool bParam1) //Position: 0x13B68 / 80744
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

int Function_417(var uParam0, var uParam1, int iParam2) //Position: 0x13BEA / 80874
{
	return Function_418(Global_29006, uParam0, uParam1, iParam2);
}

int Function_418(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x13BFC / 80892
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

void Function_419() //Position: 0x13C98 / 81048
{
	Function_330(bLocal_347);
	if (!iLocal_716)
	{
		if (iLocal_429 > 2)
		{
			if (Function_321(Global_30668[0]))
			{
				Function_415(&iLocal_668);
			}
			else
			{
				iLocal_654 = 0;
				iLocal_716 = 0;
			}
		}
	}
	if (((iLocal_429 < 5 && iLocal_429 > 105) && !iLocal_429 != 104) && !iLocal_429 != 103)
	{
		Function_414(Local_760.f_44, Local_760.f_56, Local_4.f_468);
		Function_414(Local_760.f_44, Local_760.f_56, Local_4.f_528);
		Function_414(Local_760.f_52, Local_760.f_56, Local_4.f_468);
		Function_414(Local_760.f_52, Local_760.f_56, Local_4.f_528);
		Function_413(&Local_760);
		if (bLocal_704)
		{
			Function_409(&Local_760, 0);
			Function_408(&Local_760, 0);
			Function_407(&Local_760, 0, 0x41700000);
		}
		Function_434();
		Function_433();
		Function_401(Global_34573);
		Function_430();
	}
	switch (iLocal_429)
	{
		case 0x00000000:
			Function_326(0);
			SET_ACTOR_HEALTH(bLocal_432, GET_ACTOR_MAX_HEALTH(bLocal_432));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_443[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				iLocal_430 = Global_30628[2];
				if (!Function_321(iLocal_430))
				{
					Function_319(&Local_348);
				}
				Function_318(Global_34573, (*&Local_4 + 648)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_432))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_432);
					CLEAR_ACTOR_MAX_SPEED(bLocal_432);
					TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_433, true);
				}
				Function_222(&bLocal_434);
				iLocal_429 = 1;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_430) || iLocal_430 != 4294967295))
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL_HIGH", 0, 4294967295, 4294967295);
			iLocal_657 = 0;
			iLocal_654 = 0;
			iLocal_655 = 0;
			iLocal_662 = 0;
			iLocal_663 = 0;
			iLocal_664 = 0;
			iLocal_665 = 0;
			iLocal_656 = 0;
			iLocal_714 = 0;
			bLocal_704 = false;
			Function_422();
			if (iLocal_443[2] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_318(Global_34573, (*&Local_4 + 648)[0], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_433))
					{
						Function_318(bLocal_433, (*&Local_4 + 648)[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
						}
					}
					else
					{
						bLocal_433 = Function_373(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(bLocal_432))
				{
					Function_318(bLocal_432, (*&Local_4 + 648)[1], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
					{
						Function_318((*&Local_4 + 188)[02], (*&Local_4 + 648)[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_432))
			{
				Function_371(3, 0, 1);
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_432);
				CLEAR_ACTOR_MAX_SPEED(bLocal_432);
				TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_432, true);
			}
			if (SQUAD_IS_VALID(Local_760.f_56))
			{
				Function_296(Local_760.f_56, Local_760.f_44);
			}
			if (SQUAD_IS_VALID(Local_760.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_760.f_44);
				Function_297(Local_760.f_44);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_44, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_468, -1.0f);
			}
			Function_364(&(Local_494[017]), bLocal_432, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_364(&(Local_494[117]), Local_4.f_272, "Rancher", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[217]), Local_4.f_296, "Rancher", 1, 0x5f5e100, 1);
			Function_364(&(Local_494[317]), Local_760.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[417]), Local_791.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[517]), Local_760.f_48, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[617]), Local_760.f_52, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[717]), Local_760.f_56, "Cow", 0, 0x5f5e100, 1);
			Function_363(&(Local_494[817]));
			Function_365(&(Local_494[117]), 1024, 1);
			if (HUD_IS_FADED())
			{
				Function_222(&bLocal_434);
				iLocal_429 = 5;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			Function_236(iLocal_428);
			Function_357(StackVal, StackVal, Function_236(iLocal_428), iLocal_428, Global_30628[2], Function_239(iLocal_428), 2);
			bLocal_658 = Function_356();
			PRINTINT(bLocal_658);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID((*&Local_4 + 188)[02])) && IS_ACTOR_VALID(bLocal_433)) && SQUAD_IS_VALID(Local_760.f_44)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_760.f_44, (SQUAD_GET_SIZE(Local_760.f_44) - 1))))
			{
				if (((Function_355(bLocal_432, 1, 0x41700000) && Function_355((*&Local_4 + 188)[02], 1, 0x41700000)) && Function_355(bLocal_433, 1, 0x41700000)) && Function_355(SQUAD_GET_ACTOR_BY_INDEX(Local_760.f_44, (SQUAD_GET_SIZE(Local_760.f_44) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_432) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_222(&bLocal_434);
						iLocal_429 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(Global_34573))
						{
							Function_318(Global_34573, (*&Local_4 + 648)[0], 1, 1, 1);
							if (IS_ACTOR_VALID(bLocal_433))
							{
								Function_318(bLocal_433, (*&Local_4 + 648)[2], 1, 1, 1);
								if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
								{
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
								}
							}
							else
							{
								bLocal_433 = Function_373(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(bLocal_432))
						{
							Function_318(bLocal_432, (*&Local_4 + 648)[1], 1, 1, 1);
							if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
							{
								Function_318((*&Local_4 + 188)[02], (*&Local_4 + 648)[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
								{
									ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
								}
							}
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
			if (SQUAD_IS_VALID(Local_760.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_760.f_44);
				Function_298(Local_760.f_44);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_44, false, 1, 4294967295);
				TASK_GO_NEAR_COORD(false, &Local_4 + 1248, 4.0f, true);
			}
			CAMERA_RESET(0);
			Function_222(&bLocal_434);
			iLocal_429 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_752))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_752 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_347, "RANCH07_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_752))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_752, 0);
							SET_CAMERA_FOCUS_OBJECT(StackVal, bLocal_752, 0.0f, 0.0f, 0.0f, 1,5f);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_272))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 228)[02]))
					{
						CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 228)[02]);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[12]))
					{
						CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 228)[12]);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[22]))
					{
						GET_OBJECT_POSITION((*&Local_4 + 608)[4], &uLocal_693);
						CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 228)[22]);
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[22], 1);
						bLocal_653 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &uLocal_693, true);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[22], bLocal_653);
						TASK_SEQUENCE_RELEASE(bLocal_653, 1);
						TASK_PRIORITY_SET((*&Local_4 + 228)[22], 2);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[32]))
					{
						GET_OBJECT_POSITION((*&Local_4 + 608)[5], &uLocal_696);
						CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 228)[32]);
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[32], 1);
						bLocal_653 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &uLocal_696, true);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[32], bLocal_653);
						TASK_SEQUENCE_RELEASE(bLocal_653, 1);
						TASK_PRIORITY_SET((*&Local_4 + 228)[32], 2);
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_296))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
					{
						TASK_WANDER_IN_VOLUME((*&Local_4 + 276)[02], Local_4.f_508, -1f);
						TASK_PRIORITY_SET((*&Local_4 + 276)[02], 2);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
					{
						TASK_WANDER_IN_VOLUME((*&Local_4 + 276)[12], Local_4.f_512, -1f);
						TASK_PRIORITY_SET((*&Local_4 + 276)[12], 2);
					}
				}
				if (iLocal_443[2] == 1)
				{
					if (SQUAD_IS_VALID(Local_760.f_44))
					{
						SQUAD_GOALS_CLEAR(Local_760.f_44);
						Function_298(Local_760.f_44);
						SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_44, false, 1, 4294967295);
						TASK_GO_NEAR_COORD(false, &Local_4 + 1248, 4.0f, true);
					}
				}
				bLocal_706 = false;
				if (SQUAD_IS_VALID(Local_760.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_48);
					Function_298(Local_760.f_48);
				}
				*(&Local_760 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_760.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_52);
					Function_298(Local_760.f_52);
				}
				Local_760.f_8 = Local_4.f_824;
				GET_OBJECT_POSITION(Local_4.f_824, &uLocal_678);
				if (SQUAD_IS_VALID(Local_760.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_56);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_468, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				}
				Function_421();
				Function_222(&bLocal_434);
				iLocal_429 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!IS_BLIP_VALID(bLocal_699))
				{
					bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_824, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_699))
					{
						SET_BLIP_PRIORITY(bLocal_699, 3);
					}
				}
				if (!IS_OBJECT_VALID(bLocal_700))
				{
					GET_OBJECT_POSITION(Local_4.f_824, &vLocal_681);
					GET_OBJECT_ORIENTATION(Local_4.f_824, &vLocal_684);
					bLocal_700 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_700))
					{
					}
				}
				Function_420();
				Function_348("ranch07_obj04", 7,5f, 1, 2, 0, 0, 0);
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_293(&bLocal_434) <= 8.0f)
			{
				Function_132("ranch07_obj04_start1", 10.0f, 1, 0, 2, 1, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_345(&bLocal_440, 60.0f, bLocal_433, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_451, 0, bLocal_347, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_699))
				{
					REMOVE_BLIP(bLocal_699);
				}
				if (IS_OBJECT_VALID(bLocal_700))
				{
					DESTROY_OBJECT(bLocal_700);
				}
				if (bLocal_704)
				{
					Function_344();
				}
			}
			else
			{
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (!bLocal_704)
					{
						Function_241();
						Function_343();
					}
				}
				if (bLocal_706)
				{
					if (Function_336(StackVal, &bLocal_440, 245.0f, 385.0f, "Herd_return", "Herd_abandoned", &bLocal_451, 0, 0, 0, 4294967295, 1))
					{
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						if (IS_OBJECT_VALID(bLocal_700))
						{
							DESTROY_OBJECT(bLocal_700);
						}
					}
					else
					{
						if (!IS_BLIP_VALID(bLocal_699))
						{
							bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_824, 330, 0f, 2, 0);
							if (IS_BLIP_VALID(bLocal_699))
							{
							}
						}
						if (!IS_OBJECT_VALID(bLocal_700))
						{
							GET_OBJECT_POSITION(Local_4.f_824, &vLocal_681);
							GET_OBJECT_ORIENTATION(Local_4.f_824, &vLocal_684);
							bLocal_700 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
							if (IS_OBJECT_VALID(bLocal_700))
							{
							}
						}
					}
				}
				else if (Function_336(StackVal, &bLocal_440, 190.0f, 330.0f, "Herd_return", "Herd_abandoned", &bLocal_451, 0, 0, 0, 4294967295, 1))
				{
					if (IS_BLIP_VALID(bLocal_699))
					{
						REMOVE_BLIP(bLocal_699);
					}
					if (IS_OBJECT_VALID(bLocal_700))
					{
						DESTROY_OBJECT(bLocal_700);
					}
				}
				else
				{
					if (!IS_BLIP_VALID(bLocal_699))
					{
						bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_824, 330, 0f, 2, 0);
						if (IS_BLIP_VALID(bLocal_699))
						{
						}
					}
					if (!IS_OBJECT_VALID(bLocal_700))
					{
						GET_OBJECT_POSITION(Local_4.f_824, &vLocal_681);
						GET_OBJECT_ORIENTATION(Local_4.f_824, &vLocal_684);
						bLocal_700 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
						if (IS_OBJECT_VALID(bLocal_700))
						{
						}
					}
				}
				if (((SQUAD_IS_VALID(Local_760.f_44) && SQUAD_IS_VALID(Local_760.f_56)) && SQUAD_IS_VALID(Local_760.f_48)) && SQUAD_IS_VALID(Local_760.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_760.f_44) != 0 && SQUAD_GET_SIZE(Local_760.f_48) != 0) && SQUAD_GET_SIZE(Local_760.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						if (IS_OBJECT_VALID(bLocal_700))
						{
							DESTROY_OBJECT(bLocal_700);
						}
						Function_335(Local_760.f_44);
						Function_335(Local_760.f_48);
						Function_335(Local_760.f_52);
						Function_335(Local_760.f_56);
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_760)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_760));
						}
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
						}
						if (IS_OBJECT_VALID(bLocal_752))
						{
							DESTROY_OBJECT(bLocal_752);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_241();
						Function_222(&bLocal_434);
						iLocal_429 = 106;
					}
				}
				if (Local_760.f_100)
				{
					if (Function_293(&Local_760 + 88) <= 30.0f)
					{
						if (StackVal && IS_OBJECT_VALID((StackVal && IS_OBJECT_VALID((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID(Global_34573))))))
						{
							if (Function_332(StackVal, bLocal_432, 25.0f))
							{
								if (StackVal && Function_332(Function_332(StackVal, Global_34573, 25.0f), Global_34573, 25.0f))
								{
									LOG_ERROR("RANCH07 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH07 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(Local_760.f_44) && SQUAD_IS_VALID(Local_760.f_52)) && SQUAD_IS_VALID(Local_760.f_48)) && SQUAD_IS_VALID(Local_760.f_56))
									{
										Function_296(Local_760.f_44, Local_760.f_56);
										Function_296(Local_760.f_52, Local_760.f_56);
										Function_296(Local_760.f_48, Local_760.f_56);
									}
									Function_222(&Local_760 + 88);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_443[3] = 1;
			Function_222(&bLocal_434);
			iLocal_428 = 4;
			iLocal_429 = 0;
			break;
	}
	return;
}

void Function_420() //Position: 0x14C21 / 85025
{
	if (SQUAD_IS_VALID(Local_4.f_272))
	{
		SQUAD_GOALS_CLEAR(Local_4.f_272);
		Function_298(Local_4.f_272);
		Function_184(&Global_6563, &Global_7581, Local_4.f_272, 0);
		RELEASE_OBJECT_REF(Local_4.f_272);
	}
	return;
}

void Function_421() //Position: 0x14C59 / 85081
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_herdPasture", "Ranch07_herdPasture", false, 2, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_422() //Position: 0x14CA8 / 85160
{
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_317();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_316(Local_4.f_200, 0);
			Function_315(Local_4.f_200, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				Function_318((*&Local_4 + 188)[02], (*&Local_4 + 648)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_432, (*&Local_4 + 188)[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_224))
	{
		Function_312();
		if (SQUAD_IS_VALID(Local_4.f_224))
		{
			Function_316(Local_4.f_224, 0);
			Function_315(Local_4.f_224, 3);
			Function_313(Local_4.f_224, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_224, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_272))
	{
		Function_425();
		if (SQUAD_IS_VALID(Local_4.f_272))
		{
			SQUAD_SET_FACTION(Local_4.f_272, 20);
			Function_310(Local_4.f_272, 1);
			Function_313(Local_4.f_272, 0, 0, 0);
			Function_316(Local_4.f_272, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 228)[02]))
			{
				Function_318((*&Local_4 + 228)[02], (*&Local_4 + 608)[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 228)[12]))
			{
				Function_318((*&Local_4 + 228)[12], (*&Local_4 + 608)[5], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 228)[22]))
			{
				Function_318((*&Local_4 + 228)[22], (*&Local_4 + 608)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 228)[32]))
			{
				Function_318((*&Local_4 + 228)[32], (*&Local_4 + 608)[7], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_272, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_296))
	{
		Function_311();
		if (SQUAD_IS_VALID(Local_4.f_296))
		{
			SQUAD_SET_FACTION(Local_4.f_296, 20);
			Function_310(Local_4.f_296, 1);
			Function_313(Local_4.f_296, 0, 0, 0);
			Function_316(Local_4.f_296, 0);
			if (SQUAD_IS_VALID(Local_4.f_224))
			{
				Function_299(Local_4.f_296, Local_4.f_224);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_296, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_423();
	return;
}

void Function_423() //Position: 0x14ED3 / 85715
{
	Function_424();
	Local_760.f_12 = Local_4.f_1344;
	if (!SQUAD_IS_VALID(Local_760.f_44))
	{
		Local_760.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_44);
			Function_306(&Local_760, bLocal_347, Local_4.f_820, &iLocal_747, 3, 3.0f, 4,5f, 1,5f, 1);
			Function_316(Local_760.f_44, 0);
			Function_305(Local_760.f_44, 1);
			Function_304(Local_760.f_44, 0);
			Function_303(Local_760.f_44, 0);
			Function_302(Local_760.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_456, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(Local_791.f_44))
	{
		Local_791.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(Local_791.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_791.f_44);
			Function_306(&Local_791, bLocal_347, Local_4.f_824, &iLocal_747, 5, 4,5f, 7.0f, 1,5f, 1);
			Function_316(Local_791.f_44, 0);
			Function_305(Local_791.f_44, 1);
			Function_304(Local_791.f_44, 0);
			Function_303(Local_791.f_44, 0);
			Function_302(Local_791.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_791.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_468, -1.0f);
		}
	}
	return;
}

void Function_424() //Position: 0x15060 / 86112
{
	iLocal_747[0] = 1008;
	iLocal_747[1] = 1009;
	iLocal_747[2] = 1010;
	iLocal_747[3] = 1011;
	(*&Local_760 + 104)[0] = Global_34573;
	(*&Local_760 + 104)[1] = bLocal_432;
	Local_760.f_68 = 5;
	PRINTINT(Local_760.f_68);
	PRINTNL();
	Local_760.f_64 = "HOME01_COWS01";
	if (!Function_295(&Local_760 + 88))
	{
		Function_279(&Local_760 + 88);
	}
	else
	{
		Function_222(&Local_760 + 88);
	}
	if (!IS_OBJECT_VALID(Local_760))
	{
		Local_760 = CREATE_POINT_IN_LAYOUT(bLocal_347, "COWS_01_BASE", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(Local_760))
		{
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		Local_760.f_4 = CREATE_POINT_IN_LAYOUT(bLocal_347, "COWS_01_CENTER", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(StackVal))
		{
		}
	}
	if (!SQUAD_IS_VALID(Local_760.f_48))
	{
		Local_760.f_48 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_48))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_48);
		}
	}
	if (!SQUAD_IS_VALID(Local_760.f_52))
	{
		Local_760.f_52 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_52))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_52);
		}
	}
	if (!SQUAD_IS_VALID(Local_760.f_56))
	{
		Local_760.f_56 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_56))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_56);
		}
	}
	Local_760.f_12 = "";
	Local_760.f_8 = "";
	Local_760.f_100 = 0;
	Local_791.f_68 = 10;
	PRINTINT(Local_791.f_68);
	PRINTNL();
	Local_791.f_64 = "HOME01_COWS02";
	return;
}

void Function_425() //Position: 0x1525C / 86620
{
	Local_4.f_272 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RanchHand01"));
	(*&Local_4 + 228)[02] = Function_426(&Global_6563, &Global_7581, 7, -912,0001f, 90,35291f, 2448f, 0.0f, 220,1252f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 228)[02], Local_4.f_272);
	(*&Local_4 + 228)[12] = Function_426(&Global_6563, &Global_7581, 2, -928,0001f, 90,35291f, 2464.0f, 0.0f, 252,1027f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 228)[12], Local_4.f_272);
	(*&Local_4 + 228)[22] = Function_426(&Global_6563, &Global_7581, 13, -924,7995f, 90,35291f, 2453,404f, 0.0f, 260,8762f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 228)[22], Local_4.f_272);
	(*&Local_4 + 228)[32] = Function_426(&Global_6563, &Global_7581, 4, -920,0001f, 90,35291f, 2451,392f, 0.0f, -167,2988f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 228)[32], Local_4.f_272);
	(*&Local_4 + 228)[42] = Function_426(&Global_6563, &Global_7581, 0, -896,0966f, 90,35291f, 2443,538f, 0.0f, -16,606f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 228)[42], Local_4.f_272);
	return;
}

var Function_426(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x15391 / 86929
{
	var uVar0;
	bool bVar1;
	
	uVar0 = iParam2;
	bVar1 = Function_427(uParam0, uParam1, uVar0, iParam9, 0, 1);
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

var Function_427(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x15478 / 87160
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
		uParam1[iVar03]->f_8 = Function_429(StackVal, StackVal, StackVal, Global_6289, Function_53(), (*uParam1)[iVar03], vVar2, 0x42700000);
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
	Function_428(StackVal, 1);
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

int Function_428(bool bParam0, bool bParam1) //Position: 0x1560E / 87566
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

var Function_429(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x156B0 / 87728
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

void Function_430() //Position: 0x157C9 / 88009
{
	if (Function_293(&bLocal_729) <= 0,1f)
	{
		switch (iLocal_657)
		{
			case 0x00000000:
				Function_222(&bLocal_437);
				Function_222(&bLocal_741);
				Function_222(&bLocal_744);
				iLocal_657++;
				break;
			
			case 0x00000001:
				Function_432(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (Function_293(&bLocal_437) <= 5.0f)
				{
					if (StackVal || !Function_332((SQUAD_GET_SIZE(Local_760.f_48) <= 2 || SQUAD_GET_SIZE(Local_760.f_52) <= 2), Global_34573, (190.0f - 30.0f)))
					{
						Function_431();
						Function_222(&bLocal_437);
					}
				}
				if (SQUAD_GET_SIZE(Local_760.f_48) != 0 && SQUAD_GET_SIZE(Local_760.f_52) != 0)
				{
					if (Function_293(&bLocal_437) <= 3.0f)
					{
						if (IS_ACTOR_VALID((*&Local_4 + 228)[02]))
						{
							if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[02], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[02], "Ranch07_greatJob1", Global_34573, 1, 0, 0, 0, 0);
							}
						}
						if (IS_ACTOR_VALID((*&Local_4 + 228)[22]))
						{
							if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[22], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[22], "Ranch07_greatJob3", Global_34573, 1, 0, 0, 0, 0);
							}
						}
						if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
						{
							if (IS_ACTOR_VALID((*&Local_4 + 276)[02]))
							{
								if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 276)[02], 36.0f))
								{
									SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 276)[02], "Ranch07_greatJob6", Global_34573, 1, 0, 0, 0, 0);
								}
							}
						}
						Function_222(&bLocal_437);
					}
					if (Function_293(&bLocal_741) <= 4.0f)
					{
						if (IS_ACTOR_VALID((*&Local_4 + 228)[12]))
						{
							if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[12], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[12], "Ranch07_greatJob2", Global_34573, 1, 0, 0, 0, 0);
							}
						}
						if (IS_ACTOR_VALID((*&Local_4 + 228)[32]))
						{
							if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[32], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[32], "Ranch07_greatJob4", Global_34573, 1, 0, 0, 0, 0);
							}
						}
						Function_222(&bLocal_741);
					}
					if (Function_293(&bLocal_744) <= 5.0f)
					{
						if (IS_ACTOR_VALID((*&Local_4 + 228)[42]))
						{
							if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[42], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[42], "Ranch07_greatJob5", Global_34573, 1, 0, 0, 0, 0);
							}
						}
						if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
						{
							if (IS_ACTOR_VALID((*&Local_4 + 276)[12]))
							{
								if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 276)[12], 36.0f))
								{
								}
							}
						}
						Function_222(&bLocal_744);
					}
				}
				break;
			
			case 0x00000002:
				iLocal_657++;
				break;
		}
		Function_222(&bLocal_729);
	}
	return;
}

void Function_431() //Position: 0x15ABC / 88764
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_notWellHerd", "Ranch07_notWellHerd", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x15B0B / 88843
{
	if (Function_293(&bLocal_726) <= 6.0f)
	{
		Function_392();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_offHorse", "Ranch07_offHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		if (!IS_ACTOR_RIDING(bLocal_432))
		{
			if (bParam0)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_391();
				Function_222(&bLocal_726);
			}
		}
		if (bParam5)
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_432, 1,15f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_rideIntoBonHorse", "Ranch07_rideIntoBonHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		Function_237(Local_760.f_44);
		if (!Function_390(StackVal, StackVal, StackVal, Function_237(Local_760.f_44), 135.0f))
		{
			if (bParam1)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_herdWrongDirec", "Ranch07_herdWrongDirec", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		if (bParam2)
		{
			if (SQUAD_IS_VALID(Local_760.f_48) && SQUAD_IS_VALID(Local_760.f_52))
			{
				if (SQUAD_GET_SIZE(Local_760.f_48) != 0 && SQUAD_GET_SIZE(Local_760.f_52) != 0)
				{
					if (!Function_332(StackVal, Global_34573, bParam3) && !ACTORS_IN_RANGE(Global_34573, bLocal_432, bParam3))
					{
						if (!iLocal_714)
						{
							if (iLocal_428 == 0)
							{
								bLocal_701 = Local_4.f_1312;
							}
							else if (iLocal_428 == 1)
							{
								bLocal_701 = Local_4.f_1332;
							}
							else if (iLocal_428 == 2)
							{
								bLocal_701 = Local_4.f_1340;
							}
							else if (iLocal_428 == 3)
							{
								bLocal_701 = Local_4.f_1344;
							}
							if (Function_389(Global_34573, bLocal_432, bLocal_701))
							{
								iLocal_714 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_388();
								Function_222(&bLocal_726);
							}
							else
							{
								iLocal_714 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								if (Function_382(RAND_INT_RANGE(false, true)))
								{
									Function_387();
								}
								else
								{
									Function_386();
								}
								Function_222(&bLocal_726);
							}
						}
					}
				}
			}
		}
		if (StackVal && Function_332(ACTORS_IN_RANGE(Global_34573, bLocal_432, bParam4), Global_34573, bParam4))
		{
			if (bParam2)
			{
				if (iLocal_714)
				{
					iLocal_714 = 0;
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_385();
					Function_222(&bLocal_726);
				}
			}
		}
	}
}

void Function_433() //Position: 0x15D7B / 89467
{
	if (IS_ACTOR_VALID(bLocal_432))
	{
		switch (iLocal_655)
		{
			case 0x00000000:
				iLocal_655++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(bLocal_432);
				CLEAR_ACTOR_MAX_SPEED(bLocal_432);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_432);
				Function_371(3, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_432, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_432, true);
				GET_OBJECT_POSITION((*&Local_4 + 680)[5], &vLocal_675);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1320, 3, 0, 0, 1, false);
				TASK_GO_NEAR_COORD(false, &vLocal_675, 3.0f, 4);
				TASK_FACE_COORD(false, &Local_4 + 932, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET(bLocal_432, true);
				iLocal_655++;
				break;
			
			case 0x00000002:
				if (GET_TASK_STATUS(bLocal_432, 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR(bLocal_432, "waving_on_horse", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_432, "waving_on_horse/forward");
					iLocal_655++;
				}
				break;
			
			case 0x00000003:
				iLocal_655++;
				break;
			}
	}
	return;
}

void Function_434() //Position: 0x15E9A / 89754
{
	if (SQUAD_IS_VALID(Local_760.f_44))
	{
		switch (iLocal_656)
		{
			case 0x00000000:
				iLocal_656++;
				break;
			
			case 0x00000001:
				if (iLocal_429 > 8)
				{
					if (Function_293(&bLocal_434) <= 2.0f)
					{
						Function_436();
						Function_435();
						Function_297(Local_760.f_44);
						Function_351(Local_760.f_44, &Local_4 + 360);
						Function_350(Local_760.f_44, 2, 1);
						Function_350(Local_760.f_56, 2, 1);
						Function_350(Local_760.f_48, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_760.f_44, Local_760.f_60, 1, 0,5f, 1.0f);
						_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_760.f_44, Local_760.f_60, 0, 16, (4,5f - 0,5f));
						iLocal_656++;
					}
				}
				break;
			
			case 0x00000002:
				if (IS_VOLUME_VALID(Local_4.f_420))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_420))
						{
							iLocal_656++;
						}
					}
				}
				break;
			
			case 0x00000003:
				if (SQUAD_GOAL_IS_VALID(Local_760.f_60))
				{
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_760.f_44, Local_760.f_60, Local_4.f_1344);
					SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_760.f_44, Local_760.f_60, Local_4.f_1348, 1000.0f, 0,85f, 1.0f, 1082130432);
					_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_760.f_44, Local_760.f_60, 0, 16, 4,5f);
					SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_760.f_44, Local_760.f_60, 1, 1.0f, 1,5f);
					iLocal_656++;
				}
				break;
			
			case 0x00000004:
				if (IS_VOLUME_VALID(Local_4.f_424))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_424))
						{
							iLocal_656++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (SQUAD_GOAL_IS_VALID(Local_760.f_60))
				{
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_760.f_44, Local_760.f_60, Local_4.f_1348);
					SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_760.f_44, Local_760.f_60, Local_4.f_1348, 100.0f, 0,85f, 0,5f, 1082130432);
					iLocal_656++;
				}
				break;
			
			case 0x00000006:
				iLocal_656++;
				break;
			}
	}
	return;
}

void Function_435() //Position: 0x1609F / 90271
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_760.f_44, Local_760.f_60, Local_760.f_12, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_436() //Position: 0x160C7 / 90311
{
	Function_298(Local_760.f_44);
	SQUAD_GOALS_CLEAR(Local_760.f_44);
	Local_760.f_60 = UNK_0x48588CCB(Local_760.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_760.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_760.f_44, Local_760.f_60);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_760.f_44, Local_760.f_60, 1, 8, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_760.f_44, Local_760.f_60, 1, 15, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_760.f_44, Local_760.f_60, 1, 16, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_760.f_44, Local_760.f_60, 1, 26, 0,75f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_760.f_44, Local_760.f_60, Global_34573, 15.0f, 4,5f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_760.f_44, Local_760.f_60, Global_34573, 16.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_760.f_44, Local_760.f_60, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_760.f_44, Local_760.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_760.f_44, Local_760.f_60, 0, 1);
	if (IS_ACTOR_VALID(bLocal_432))
	{
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_760.f_44, Local_760.f_60, bLocal_432, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(Global_34573, "herding", true);
	bLocal_704 = true;
	return;
}

void Function_437() //Position: 0x161FC / 90620
{
	Function_330(bLocal_347);
	if (!iLocal_716)
	{
		if (iLocal_429 > 2)
		{
			if (Function_321(Global_30668[0]))
			{
				Function_415(&iLocal_668);
			}
			else
			{
				iLocal_654 = 0;
				iLocal_716 = 0;
			}
		}
	}
	if (((iLocal_429 < 5 && iLocal_429 > 105) && !iLocal_429 != 104) && !iLocal_429 != 103)
	{
		Function_414(Local_760.f_44, Local_760.f_56, Local_4.f_448);
		Function_413(&Local_760);
		if (bLocal_704)
		{
			Function_409(&Local_760, 0);
			Function_408(&Local_760, 0);
			Function_407(&Local_760, 0, 0x41700000);
		}
		Function_444();
		Function_401(Global_34573);
		Function_443();
	}
	switch (iLocal_429)
	{
		case 0x00000000:
			Function_326(0);
			SET_ACTOR_HEALTH(bLocal_432, GET_ACTOR_MAX_HEALTH(bLocal_432));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_443[1] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				iLocal_430 = Global_30628[2];
				if (!Function_321(iLocal_430))
				{
					Function_319(&Local_348);
				}
				Function_318(Global_34573, (*&Local_4 + 608)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_432))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_432);
					CLEAR_ACTOR_MAX_SPEED(bLocal_432);
					TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_433, true);
				}
				Function_222(&bLocal_434);
				iLocal_429 = 1;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_430) || iLocal_430 != 4294967295))
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL_HIGH", 0, 4294967295, 4294967295);
			iLocal_657 = 0;
			iLocal_654 = 0;
			iLocal_655 = 0;
			iLocal_662 = 0;
			iLocal_663 = 0;
			iLocal_664 = 0;
			iLocal_665 = 0;
			bLocal_704 = false;
			iLocal_714 = 0;
			Function_440();
			if (iLocal_443[1] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_318(Global_34573, (*&Local_4 + 608)[0], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_433))
					{
						Function_318(bLocal_433, (*&Local_4 + 608)[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
						}
					}
					else
					{
						bLocal_433 = Function_373(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(bLocal_432))
				{
					Function_318(bLocal_432, (*&Local_4 + 608)[1], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
					{
						Function_318((*&Local_4 + 188)[02], (*&Local_4 + 608)[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_432))
			{
				Function_371(3, 0, 1);
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_432);
				CLEAR_ACTOR_MAX_SPEED(bLocal_432);
				TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_432, true);
			}
			if (SQUAD_IS_VALID(Local_760.f_56))
			{
				Function_296(Local_760.f_56, Local_760.f_44);
			}
			if (SQUAD_IS_VALID(Local_760.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_760.f_44);
				Function_297(Local_760.f_44);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_44, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_464, -1.0f);
			}
			Function_364(&(Local_494[017]), bLocal_432, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_364(&(Local_494[117]), Local_4.f_272, "Rancher", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[217]), Local_760.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[317]), Local_760.f_48, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[417]), Local_760.f_52, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[517]), Local_760.f_56, "Cow", 0, 0x5f5e100, 1);
			Function_363(&(Local_494[617]));
			Function_363(&(Local_494[717]));
			Function_363(&(Local_494[817]));
			Function_365(&(Local_494[117]), 1024, 1);
			if (HUD_IS_FADED())
			{
				Function_222(&bLocal_434);
				iLocal_429 = 5;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			Function_236(iLocal_428);
			Function_357(StackVal, StackVal, Function_236(iLocal_428), iLocal_428, Global_30628[2], Function_239(iLocal_428), 2);
			bLocal_658 = Function_356();
			PRINTINT(bLocal_658);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID((*&Local_4 + 188)[02])) && IS_ACTOR_VALID(bLocal_433)) && SQUAD_IS_VALID(Local_760.f_44)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_760.f_44, (SQUAD_GET_SIZE(Local_760.f_44) - 1))))
			{
				if (((Function_355(bLocal_432, 1, 0x41700000) && Function_355((*&Local_4 + 188)[02], 1, 0x41700000)) && Function_355(bLocal_433, 1, 0x41700000)) && Function_355(SQUAD_GET_ACTOR_BY_INDEX(Local_760.f_44, (SQUAD_GET_SIZE(Local_760.f_44) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_432) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_222(&bLocal_434);
						iLocal_429 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(Global_34573))
						{
							Function_318(Global_34573, (*&Local_4 + 608)[0], 1, 1, 1);
							if (IS_ACTOR_VALID(bLocal_433))
							{
								Function_318(bLocal_433, (*&Local_4 + 608)[2], 1, 1, 1);
								if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
								{
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
								}
							}
							else
							{
								bLocal_433 = Function_373(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(bLocal_432))
						{
							Function_318(bLocal_432, (*&Local_4 + 608)[1], 1, 1, 1);
							if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
							{
								Function_318((*&Local_4 + 188)[02], (*&Local_4 + 608)[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
								{
									ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
								}
							}
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
			if (SQUAD_IS_VALID(Local_760.f_44))
			{
				Function_436();
				Function_439();
				Function_297(Local_760.f_44);
				Function_351(Local_760.f_44, &Local_4 + 340);
				Function_350(Local_760.f_44, 2, 1);
				Function_350(Local_760.f_56, 2, 1);
				Function_350(Local_760.f_48, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_760.f_44, Local_760.f_60, 1, 0,5f, 1.0f);
			}
			CAMERA_RESET(0);
			Function_222(&bLocal_434);
			iLocal_429 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_752))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_752 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_347, "RANCH07_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_752))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_752, 0);
							SET_CAMERA_FOCUS_OBJECT(StackVal, bLocal_752, 0.0f, 0.0f, 0.0f, 1,5f);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_272))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_272);
					if (IS_ACTOR_VALID((*&Local_4 + 228)[02]))
					{
						GET_OBJECT_POSITION((*&Local_4 + 564)[7], &vLocal_687);
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[02], 1);
						TASK_CLEAR((*&Local_4 + 228)[02]);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[12]))
					{
						GET_OBJECT_POSITION((*&Local_4 + 608)[5], &uLocal_690);
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[12], 1);
						TASK_CLEAR((*&Local_4 + 228)[12]);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[22]))
					{
						GET_OBJECT_POSITION((*&Local_4 + 608)[6], &uLocal_693);
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[22], 0);
						SET_ACTOR_MAX_SPEED((*&Local_4 + 228)[22], true);
						SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[22], "guide_herd", 0);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[22], "guide_herd/moving_version/start");
						bLocal_653 = TASK_SEQUENCE_OPEN();
						TASK_FACE_COORD(false, &Local_4 + 884, 0);
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1296, 4.0f, 1, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[22], bLocal_653);
						TASK_SEQUENCE_RELEASE(bLocal_653, 1);
						TASK_PRIORITY_SET((*&Local_4 + 228)[22], 2);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[32]))
					{
						GET_OBJECT_POSITION((*&Local_4 + 608)[7], &uLocal_696);
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[32], 0);
						SET_ACTOR_MAX_SPEED((*&Local_4 + 228)[32], true);
						SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[32], "guide_herd", 0);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[32], "guide_herd/moving_version/start");
						bLocal_653 = TASK_SEQUENCE_OPEN();
						TASK_FACE_COORD(false, &Local_4 + 884, 0);
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1300, 4.0f, 1, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[32], bLocal_653);
						TASK_SEQUENCE_RELEASE(bLocal_653, 1);
						TASK_PRIORITY_SET((*&Local_4 + 228)[32], 2);
					}
				}
				if (iLocal_443[1] == 1)
				{
					if (SQUAD_IS_VALID(Local_760.f_44))
					{
						Function_436();
						Function_439();
						Function_297(Local_760.f_44);
						Function_351(Local_760.f_44, &Local_4 + 340);
						Function_350(Local_760.f_44, 2, 1);
						Function_350(Local_760.f_56, 2, 1);
						Function_350(Local_760.f_48, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_760.f_44, Local_760.f_60, 1, 0,5f, 1.0f);
					}
				}
				bLocal_706 = false;
				if (SQUAD_IS_VALID(Local_760.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_48);
					Function_298(Local_760.f_48);
				}
				*(&Local_760 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_760.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_52);
					Function_298(Local_760.f_52);
				}
				Local_760.f_8 = Local_4.f_820;
				GET_OBJECT_POSITION(Local_4.f_820, &uLocal_678);
				if (SQUAD_IS_VALID(Local_760.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_56);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_464, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				}
				Function_438();
				Function_222(&bLocal_434);
				iLocal_429 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!IS_BLIP_VALID(bLocal_699))
				{
					bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_824, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_699))
					{
						SET_BLIP_PRIORITY(bLocal_699, 3);
					}
				}
				if (!IS_OBJECT_VALID(bLocal_700))
				{
					GET_OBJECT_POSITION(Local_4.f_824, &vLocal_681);
					GET_OBJECT_ORIENTATION(Local_4.f_824, &vLocal_684);
					bLocal_700 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_700))
					{
					}
				}
				Function_348("ranch07_obj03", 7,5f, 1, 2, 0, 0, 0);
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_293(&bLocal_434) <= 8.0f)
			{
				Function_132("ranch07_obj03_start2", 4.0f, 1, 0, 2, 1, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_293(&bLocal_434) <= 5.0f)
			{
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_345(&bLocal_440, 60.0f, bLocal_433, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_451, 0, bLocal_347, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_699))
				{
					REMOVE_BLIP(bLocal_699);
				}
				if (IS_OBJECT_VALID(bLocal_700))
				{
					DESTROY_OBJECT(bLocal_700);
				}
				if (bLocal_704)
				{
					Function_344();
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_699))
				{
					bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_824, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_699))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_700))
				{
					GET_OBJECT_POSITION(Local_4.f_824, &vLocal_681);
					GET_OBJECT_ORIENTATION(Local_4.f_824, &vLocal_684);
					bLocal_700 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_700))
					{
					}
				}
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (!bLocal_704)
					{
						Function_241();
						Function_343();
					}
				}
				if (bLocal_706)
				{
					Function_336(StackVal, &bLocal_440, 245.0f, 385.0f, "Herd_return", "Herd_abandoned", &bLocal_451, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_336(StackVal, &bLocal_440, 190.0f, 330.0f, "Herd_return", "Herd_abandoned", &bLocal_451, 0, 0, 0, 4294967295, 1);
				}
				if (((SQUAD_IS_VALID(Local_760.f_44) && SQUAD_IS_VALID(Local_760.f_56)) && SQUAD_IS_VALID(Local_760.f_48)) && SQUAD_IS_VALID(Local_760.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_760.f_44) != 0 && SQUAD_GET_SIZE(Local_760.f_48) != 0) && SQUAD_GET_SIZE(Local_760.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						if (IS_OBJECT_VALID(bLocal_700))
						{
							DESTROY_OBJECT(bLocal_700);
						}
						Function_335(Local_760.f_44);
						Function_335(Local_760.f_48);
						Function_335(Local_760.f_52);
						Function_335(Local_760.f_56);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_241();
						Function_222(&bLocal_434);
						iLocal_429 = 106;
					}
				}
				if (Local_760.f_100)
				{
					if (Function_293(&Local_760 + 88) <= 30.0f)
					{
						if (StackVal && IS_OBJECT_VALID((StackVal && IS_OBJECT_VALID((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID(Global_34573))))))
						{
							if (Function_332(StackVal, bLocal_432, 25.0f))
							{
								if (StackVal && Function_332(Function_332(StackVal, Global_34573, 25.0f), Global_34573, 25.0f))
								{
									LOG_ERROR("RANCH07 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH07 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(Local_760.f_44) && SQUAD_IS_VALID(Local_760.f_52)) && SQUAD_IS_VALID(Local_760.f_48)) && SQUAD_IS_VALID(Local_760.f_56))
									{
										Function_296(Local_760.f_44, Local_760.f_56);
										Function_296(Local_760.f_52, Local_760.f_56);
										Function_296(Local_760.f_48, Local_760.f_56);
									}
									Function_222(&Local_760 + 88);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_443[2] = 1;
			Function_222(&bLocal_434);
			iLocal_428 = 3;
			iLocal_429 = 0;
			break;
	}
	return;
}

void Function_438() //Position: 0x1711C / 94492
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowsDownRoad", "Ranch07_cowsDownRoad", false, 2, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x1716D / 94573
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_760.f_44, Local_760.f_60, Local_760.f_12, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_440() //Position: 0x17195 / 94613
{
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_317();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_316(Local_4.f_200, 0);
			Function_315(Local_4.f_200, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				Function_318((*&Local_4 + 188)[02], (*&Local_4 + 608)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_432, (*&Local_4 + 188)[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_272))
	{
		Function_425();
		if (SQUAD_IS_VALID(Local_4.f_272))
		{
			SQUAD_SET_FACTION(Local_4.f_272, 20);
			Function_310(Local_4.f_272, 1);
			Function_313(Local_4.f_272, 0, 0, 0);
			Function_316(Local_4.f_272, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 228)[02]))
			{
				Function_318((*&Local_4 + 228)[02], (*&Local_4 + 608)[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 228)[12]))
			{
				Function_318((*&Local_4 + 228)[12], (*&Local_4 + 608)[5], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 228)[22]))
			{
				Function_318((*&Local_4 + 228)[22], (*&Local_4 + 608)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 228)[32]))
			{
				Function_318((*&Local_4 + 228)[32], (*&Local_4 + 608)[7], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_272, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_441();
	return;
}

void Function_441() //Position: 0x17306 / 94982
{
	Function_442();
	Local_760.f_12 = Local_4.f_1340;
	if (!SQUAD_IS_VALID(Local_760.f_44))
	{
		Local_760.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_44);
			Function_306(&Local_760, bLocal_347, Local_4.f_816, &iLocal_747, 3, 3.0f, 4,5f, 1,5f, 1);
			Function_316(Local_760.f_44, 0);
			Function_305(Local_760.f_44, 1);
			Function_304(Local_760.f_44, 0);
			Function_303(Local_760.f_44, 0);
			Function_302(Local_760.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_456, -1.0f);
		}
	}
	return;
}

void Function_442() //Position: 0x173D6 / 95190
{
	iLocal_747[0] = 1008;
	iLocal_747[1] = 1009;
	iLocal_747[2] = 1010;
	iLocal_747[3] = 1011;
	(*&Local_760 + 104)[0] = Global_34573;
	(*&Local_760 + 104)[1] = bLocal_432;
	Local_760.f_68 = 5;
	PRINTINT(Local_760.f_68);
	PRINTNL();
	Local_760.f_64 = "HOME01_COWS01";
	if (!Function_295(&Local_760 + 88))
	{
		Function_279(&Local_760 + 88);
	}
	else
	{
		Function_222(&Local_760 + 88);
	}
	if (!IS_OBJECT_VALID(Local_760))
	{
		Local_760 = CREATE_POINT_IN_LAYOUT(bLocal_347, "COWS_01_BASE", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(Local_760))
		{
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		Local_760.f_4 = CREATE_POINT_IN_LAYOUT(bLocal_347, "COWS_01_CENTER", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(StackVal))
		{
		}
	}
	if (!SQUAD_IS_VALID(Local_760.f_48))
	{
		Local_760.f_48 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_48))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_48);
		}
	}
	if (!SQUAD_IS_VALID(Local_760.f_52))
	{
		Local_760.f_52 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_52))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_52);
		}
	}
	if (!SQUAD_IS_VALID(Local_760.f_56))
	{
		Local_760.f_56 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_56))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_56);
		}
	}
	Local_760.f_12 = "";
	Local_760.f_8 = "";
	Local_760.f_100 = 0;
	return;
}

void Function_443() //Position: 0x175AB / 95659
{
	if (Function_293(&bLocal_729) <= 0,1f)
	{
		switch (iLocal_657)
		{
			case 0x00000000:
				Function_222(&bLocal_437);
				Function_222(&bLocal_741);
				Function_222(&bLocal_744);
				iLocal_657++;
				break;
			
			case 0x00000001:
				Function_432(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (SQUAD_GET_SIZE(Local_760.f_48) != 0 && SQUAD_GET_SIZE(Local_760.f_52) != 0)
				{
					if (Function_293(&bLocal_437) <= 3.0f)
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[02], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[02], "Ranch07_goodJob1", Global_34573, 1, 0, 0, 0, 0);
						}
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[22], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[22], "Ranch07_goodJob3", Global_34573, 1, 0, 0, 0, 0);
						}
						Function_222(&bLocal_437);
					}
					if (Function_293(&bLocal_741) <= 4.0f)
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[12], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[12], "Ranch07_goodJob2", Global_34573, 1, 0, 0, 0, 0);
						}
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[32], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[32], "Ranch07_goodJob5", Global_34573, 1, 0, 0, 0, 0);
						}
						Function_222(&bLocal_741);
					}
					if (Function_293(&bLocal_744) <= 5.0f)
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[42], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[42], "Ranch07_goodJob4", Global_34573, 1, 0, 0, 0, 0);
						}
						Function_222(&bLocal_744);
					}
				}
				break;
			
			case 0x00000002:
				iLocal_657++;
				break;
		}
		Function_222(&bLocal_729);
	}
	return;
}

void Function_444() //Position: 0x17789 / 96137
{
	if (IS_ACTOR_VALID(bLocal_432))
	{
		switch (iLocal_655)
		{
			case 0x00000000:
				iLocal_655++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(bLocal_432);
				CLEAR_ACTOR_MAX_SPEED(bLocal_432);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_432);
				Function_371(3, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_432, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_432, true);
				GET_OBJECT_POSITION((*&Local_4 + 648)[3], &vLocal_675);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(false, &vLocal_675, 0);
				TASK_GO_NEAR_COORD(false, &vLocal_675, 3.0f, 3);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET(bLocal_432, true);
				iLocal_655++;
				break;
			
			case 0x00000002:
				if (GET_TASK_STATUS(bLocal_432, 61) == 0)
				{
					iLocal_655++;
				}
				break;
			
			case 0x00000003:
				SET_ANIM_SET_FOR_ACTOR(bLocal_432, "waving_on_horse", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_432, "waving_on_horse/back");
				iLocal_655++;
				break;
			
			case 0x00000004:
				iLocal_655++;
				break;
			}
	}
	return;
}

void Function_445() //Position: 0x178A6 / 96422
{
	Function_330(bLocal_347);
	if (!iLocal_716)
	{
		if (iLocal_429 > 2)
		{
			if (Function_321(Global_30668[0]))
			{
				Function_415(&iLocal_668);
			}
			else
			{
				iLocal_654 = 0;
				iLocal_716 = 0;
			}
		}
	}
	if (((iLocal_429 < 5 && iLocal_429 > 105) && !iLocal_429 != 104) && !iLocal_429 != 103)
	{
		Function_414(Local_760.f_44, Local_760.f_56, Local_4.f_444);
		Function_413(&Local_760);
		if (bLocal_704)
		{
			Function_409(&Local_760, 0);
			if (iLocal_429 > 8)
			{
				Function_408(&Local_760, 0);
				Function_407(&Local_760, 0, 0x41700000);
			}
		}
		Function_457();
		Function_456();
		Function_452();
		Function_451();
		Function_450();
		Function_401(Global_34573);
		Function_449();
	}
	switch (iLocal_429)
	{
		case 0x00000000:
			Function_326(0);
			SET_ACTOR_HEALTH(bLocal_432, GET_ACTOR_MAX_HEALTH(bLocal_432));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_443[0] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				iLocal_430 = Global_30628[2];
				if (!Function_321(iLocal_430))
				{
					Function_319(&Local_348);
				}
				Function_318(Global_34573, (*&Local_4 + 564)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_432))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_432);
					CLEAR_ACTOR_MAX_SPEED(bLocal_432);
					TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_433, true);
				}
				Function_222(&bLocal_434);
				iLocal_429 = 1;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_430) || iLocal_430 != 4294967295))
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL_HIGH", 0, 4294967295, 4294967295);
			iLocal_657 = 0;
			iLocal_654 = 0;
			iLocal_655 = 0;
			iLocal_662 = 0;
			iLocal_663 = 0;
			iLocal_664 = 0;
			iLocal_665 = 0;
			iLocal_714 = 0;
			bLocal_704 = false;
			Function_447();
			if (iLocal_443[0] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_318(Global_34573, (*&Local_4 + 564)[0], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_433))
					{
						Function_318(bLocal_433, (*&Local_4 + 564)[4], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
						}
					}
					else
					{
						bLocal_433 = Function_373(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(bLocal_432))
				{
					Function_318(bLocal_432, (*&Local_4 + 564)[2], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
					{
						Function_318((*&Local_4 + 188)[02], (*&Local_4 + 564)[6], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
						}
					}
				}
			}
			Function_364(&(Local_494[017]), bLocal_432, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_364(&(Local_494[117]), Local_4.f_272, "Rancher", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[217]), Local_760.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[317]), Local_760.f_48, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[417]), Local_760.f_52, "Cow", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[517]), Local_760.f_56, "Cow", 0, 0x5f5e100, 1);
			Function_363(&(Local_494[617]));
			Function_363(&(Local_494[717]));
			Function_363(&(Local_494[817]));
			Function_365(&(Local_494[117]), 1024, 1);
			if (HUD_IS_FADED())
			{
				Function_222(&bLocal_434);
				iLocal_429 = 5;
			}
			else
			{
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			Function_236(iLocal_428);
			Function_357(StackVal, StackVal, Function_236(iLocal_428), iLocal_428, Global_30628[2], Function_239(iLocal_428), 2);
			bLocal_658 = Function_356();
			PRINTINT(bLocal_658);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID((*&Local_4 + 188)[02])) && IS_ACTOR_VALID(bLocal_433)) && SQUAD_IS_VALID(Local_760.f_44)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_760.f_44, (SQUAD_GET_SIZE(Local_760.f_44) - 1))))
			{
				if (((Function_355(bLocal_432, 1, 0x41700000) && Function_355((*&Local_4 + 188)[02], 1, 0x41700000)) && Function_355(bLocal_433, 1, 0x41700000)) && Function_355(SQUAD_GET_ACTOR_BY_INDEX(Local_760.f_44, (SQUAD_GET_SIZE(Local_760.f_44) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_432) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_222(&bLocal_434);
						iLocal_429 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(Global_34573))
						{
							Function_318(Global_34573, (*&Local_4 + 564)[0], 1, 1, 1);
							if (IS_ACTOR_VALID(bLocal_433))
							{
								Function_318(bLocal_433, (*&Local_4 + 564)[4], 1, 1, 1);
								if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
								{
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
								}
							}
							else
							{
								bLocal_433 = Function_373(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(bLocal_432))
						{
							Function_318(bLocal_432, (*&Local_4 + 564)[2], 1, 1, 1);
							if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
							{
								Function_318((*&Local_4 + 188)[02], (*&Local_4 + 564)[6], 1, 1, 1);
								if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
								{
									ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
								}
							}
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
			if (SQUAD_IS_VALID(Local_760.f_44))
			{
				Function_436();
				Function_446();
				Function_297(Local_760.f_44);
				Function_351(Local_760.f_44, &Local_4 + 320);
				Function_350(Local_760.f_44, 2, 1);
				Function_350(Local_760.f_56, 2, 1);
				Function_350(Local_760.f_48, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_760.f_44, Local_760.f_60, 1, 0,5f, 1.0f);
			}
			CAMERA_RESET(0);
			Function_222(&bLocal_434);
			iLocal_429 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_752))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_752 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_347, "RANCH07_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_752))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_752, 0);
							SET_CAMERA_FOCUS_OBJECT(StackVal, bLocal_752, 0.0f, 0.0f, 0.0f, 1,5f);
						}
					}
				}
				if (iLocal_443[0] == 0)
				{
					if (IS_ACTOR_VALID((*&Local_4 + 228)[02]))
					{
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[02], 1);
						GET_OBJECT_POSITION((*&Local_4 + 608)[4], &vLocal_687);
						bLocal_653 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_687, 2);
						TASK_FACE_COORD(false, &Local_4 + 860, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[02], bLocal_653);
						TASK_SEQUENCE_RELEASE(bLocal_653, 1);
						TASK_PRIORITY_SET((*&Local_4 + 228)[02], 2);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[12]))
					{
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[12], 1);
						GET_OBJECT_POSITION((*&Local_4 + 608)[5], &uLocal_690);
						bLocal_653 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &uLocal_690, 2);
						TASK_FACE_COORD(false, &Local_4 + 860, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[12], bLocal_653);
						TASK_SEQUENCE_RELEASE(bLocal_653, 1);
						TASK_PRIORITY_SET((*&Local_4 + 228)[12], 2);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[22]))
					{
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[22], 1);
						GET_OBJECT_POSITION((*&Local_4 + 608)[6], &uLocal_693);
						bLocal_653 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH(false, Local_4.f_1364, 2, 1, 1, 1, false);
						TASK_GO_TO_COORD(false, &uLocal_693, 2);
						TASK_FACE_COORD(false, &Local_4 + 884, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[22], bLocal_653);
						TASK_SEQUENCE_RELEASE(bLocal_653, 1);
						TASK_PRIORITY_SET((*&Local_4 + 228)[22], 2);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 228)[32]))
					{
						RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[32], 1);
						GET_OBJECT_POSITION((*&Local_4 + 608)[7], &uLocal_696);
						bLocal_653 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH(false, Local_4.f_1368, 2, 1, 1, 1, false);
						TASK_GO_TO_COORD(false, &uLocal_696, 2);
						TASK_FACE_COORD(false, &Local_4 + 884, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[32], bLocal_653);
						TASK_SEQUENCE_RELEASE(bLocal_653, 1);
						TASK_PRIORITY_SET((*&Local_4 + 228)[32], 2);
					}
				}
				if (iLocal_443[0] == 1)
				{
					if (SQUAD_IS_VALID(Local_760.f_44))
					{
						Function_436();
						Function_446();
						Function_297(Local_760.f_44);
						Function_351(Local_760.f_44, &Local_4 + 320);
						Function_350(Local_760.f_44, 2, 1);
						Function_350(Local_760.f_56, 2, 1);
						Function_350(Local_760.f_48, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_760.f_44, Local_760.f_60, 1, 0,5f, 1.0f);
					}
				}
				bLocal_706 = false;
				if (SQUAD_IS_VALID(Local_760.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_48);
					Function_298(Local_760.f_48);
				}
				*(&Local_760 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_760.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_52);
					Function_298(Local_760.f_52);
				}
				Local_760.f_8 = Local_4.f_816;
				GET_OBJECT_POSITION(Local_4.f_816, &uLocal_678);
				if (SQUAD_IS_VALID(Local_760.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_760.f_56);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_460, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				}
				Function_222(&bLocal_434);
				iLocal_429 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_293(&bLocal_434) <= 0,5f)
			{
				Function_348("ranch07_obj02", 7,5f, 1, 2, 0, 0, 0);
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_293(&bLocal_434) <= 8.0f)
			{
				Function_132("ranch07_obj02_start2", 4.0f, 1, 0, 2, 1, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_293(&bLocal_434) <= 5.0f)
			{
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_345(&bLocal_440, 60.0f, bLocal_433, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_451, 0, bLocal_347, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_699))
				{
					REMOVE_BLIP(bLocal_699);
				}
				if (IS_OBJECT_VALID(bLocal_700))
				{
					DESTROY_OBJECT(bLocal_700);
				}
				if (bLocal_704)
				{
					Function_344();
				}
			}
			else
			{
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (!bLocal_704)
					{
						Function_241();
						Function_343();
					}
				}
				if (bLocal_706)
				{
					Function_336(StackVal, &bLocal_440, 245.0f, 385.0f, "Herd_return", "Herd_abandoned", &bLocal_451, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_336(StackVal, &bLocal_440, 190.0f, 330.0f, "Herd_return", "Herd_abandoned", &bLocal_451, 0, 0, 0, 4294967295, 1);
				}
				if (((SQUAD_IS_VALID(Local_760.f_44) && SQUAD_IS_VALID(Local_760.f_56)) && SQUAD_IS_VALID(Local_760.f_48)) && SQUAD_IS_VALID(Local_760.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_760.f_44) != 0 && SQUAD_GET_SIZE(Local_760.f_48) != 0) && SQUAD_GET_SIZE(Local_760.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						if (IS_OBJECT_VALID(bLocal_700))
						{
							DESTROY_OBJECT(bLocal_700);
						}
						Function_335(Local_760.f_44);
						Function_335(Local_760.f_48);
						Function_335(Local_760.f_52);
						Function_335(Local_760.f_56);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_241();
						Function_222(&bLocal_434);
						iLocal_429 = 106;
					}
				}
				if (Local_760.f_100)
				{
					if (Function_293(&Local_760 + 88) <= 30.0f)
					{
						if (StackVal && IS_OBJECT_VALID((StackVal && IS_OBJECT_VALID((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID(Global_34573))))))
						{
							if (Function_332(StackVal, bLocal_432, 25.0f))
							{
								if (StackVal && Function_332(Function_332(StackVal, Global_34573, 25.0f), Global_34573, 25.0f))
								{
									LOG_ERROR("RANCH07 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH07 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(Local_760.f_44) && SQUAD_IS_VALID(Local_760.f_52)) && SQUAD_IS_VALID(Local_760.f_48)) && SQUAD_IS_VALID(Local_760.f_56))
									{
										Function_296(Local_760.f_44, Local_760.f_56);
										Function_296(Local_760.f_52, Local_760.f_56);
										Function_296(Local_760.f_48, Local_760.f_56);
									}
									Function_222(&Local_760 + 88);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_443[1] = 1;
			Function_222(&bLocal_434);
			iLocal_428 = 2;
			iLocal_429 = 0;
			break;
	}
	return;
}

void Function_446() //Position: 0x18620 / 99872
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_760.f_44, Local_760.f_60, Local_760.f_12, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_447() //Position: 0x18648 / 99912
{
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_317();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_316(Local_4.f_200, 0);
			Function_315(Local_4.f_200, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				Function_318((*&Local_4 + 188)[02], (*&Local_4 + 564)[6], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_432, (*&Local_4 + 188)[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_272))
	{
		Function_425();
		if (SQUAD_IS_VALID(Local_4.f_272))
		{
			Function_313(Local_4.f_272, 0, 0, 0);
			SQUAD_SET_FACTION(Local_4.f_272, 20);
			Function_310(Local_4.f_272, 1);
			Function_316(Local_4.f_272, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_272, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_448();
	return;
}

void Function_448() //Position: 0x18731 / 100145
{
	Function_442();
	Local_760.f_12 = Local_4.f_1332;
	if (!SQUAD_IS_VALID(Local_760.f_44))
	{
		Local_760.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_44);
			Function_306(&Local_760, bLocal_347, Local_4.f_808, &iLocal_747, 3, 3.0f, 4,5f, 1,5f, 1);
			Function_316(Local_760.f_44, 0);
			Function_305(Local_760.f_44, 1);
			Function_304(Local_760.f_44, 0);
			Function_303(Local_760.f_44, 0);
			Function_302(Local_760.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_456, -1.0f);
		}
	}
	return;
}

void Function_449() //Position: 0x18801 / 100353
{
	if (Function_293(&bLocal_729) <= 0,1f)
	{
		switch (iLocal_657)
		{
			case 0x00000000:
				Function_222(&bLocal_437);
				Function_222(&bLocal_741);
				Function_222(&bLocal_744);
				iLocal_657++;
				break;
			
			case 0x00000001:
				Function_432(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (SQUAD_GET_SIZE(Local_760.f_48) != 0 && SQUAD_GET_SIZE(Local_760.f_52) != 0)
				{
					if (Function_293(&bLocal_437) <= 3.0f)
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[02], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[02], "Ranch07_ranchhandCheer1", Global_34573, 1, 0, 0, 0, 0);
						}
						Function_222(&bLocal_437);
					}
					if (Function_293(&bLocal_741) <= 4.0f)
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[12], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[12], "Ranch07_ranchhandCheer2", Global_34573, 1, 0, 0, 0, 0);
						}
						Function_222(&bLocal_741);
					}
					if (Function_293(&bLocal_744) <= 5.0f)
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[42], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[42], "Ranch07_ranchhandCheer3", Global_34573, 1, 0, 0, 0, 0);
						}
						Function_222(&bLocal_744);
					}
				}
				break;
			
			case 0x00000002:
				iLocal_657++;
				break;
		}
		Function_222(&bLocal_729);
	}
	return;
}

void Function_450() //Position: 0x18980 / 100736
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[32]))
	{
		switch (iLocal_665)
		{
			case 0x00000000:
				iLocal_665++;
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS((*&Local_4 + 228)[32], 23) == 0)
				{
					iLocal_665++;
				}
				break;
			
			case 0x00000002:
				if (SQUAD_IS_VALID(Local_760.f_56))
				{
					if (SQUAD_GET_SIZE(Local_760.f_56) > 1)
					{
						SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[32], "guide_herd", 0);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[32], "guide_herd/start");
						iLocal_665++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_665++;
				break;
			}
	}
	return;
}

void Function_451() //Position: 0x18A3D / 100925
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[22]))
	{
		switch (iLocal_664)
		{
			case 0x00000000:
				iLocal_664++;
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS((*&Local_4 + 228)[22], 23) == 0)
				{
					iLocal_664++;
				}
				break;
			
			case 0x00000002:
				if (SQUAD_IS_VALID(Local_760.f_56))
				{
					if (SQUAD_GET_SIZE(Local_760.f_56) > 1)
					{
						SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[22], "guide_herd", 0);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[22], "guide_herd/start");
						iLocal_664++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_664++;
				break;
			}
	}
	return;
}

void Function_452() //Position: 0x18AFA / 101114
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[12]))
	{
		switch (iLocal_663)
		{
			case 0x00000000:
				iLocal_663++;
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS((*&Local_4 + 228)[12], 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[12], "guide_herd", 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[12], "guide_herd/start");
					Function_222(&bLocal_738);
					iLocal_663++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_429 > 7)
				{
					if ((SQUAD_IS_VALID(Local_760.f_44) && SQUAD_IS_VALID(Local_760.f_48)) && SQUAD_IS_VALID(Local_760.f_52))
					{
						if ((SQUAD_GET_SIZE(Local_760.f_44) != 0 && SQUAD_GET_SIZE(Local_760.f_48) != 0) && SQUAD_GET_SIZE(Local_760.f_52) != 0)
						{
							iLocal_663 = 3;
						}
						else
						{
							if (Function_293(&bLocal_738) <= 3.0f)
							{
								Function_453((*&Local_4 + 228)[12], Local_760.f_44, 2);
								Function_222(&bLocal_738);
							}
							if ((!Function_416(Local_760.f_44, Local_4.f_520) && !Function_416(Local_760.f_48, Local_4.f_520)) && !Function_416(Local_760.f_52, Local_4.f_520))
							{
								if (IS_ACTION_NODE_PLAYING((*&Local_4 + 228)[12], "guide_herd/start"))
								{
									RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[12], 1);
								}
							}
							else if (!IS_ACTION_NODE_PLAYING((*&Local_4 + 228)[12], "guide_herd/start"))
							{
								SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[12], "guide_herd", 0);
								SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[12], "guide_herd/start");
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION((*&Local_4 + 564)[8], &uLocal_690);
				RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[12], 1);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uLocal_690, true);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[12], bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET((*&Local_4 + 228)[12], 2);
				iLocal_663++;
				break;
			
			case 0x00000004:
				iLocal_663++;
				break;
			}
	}
	return;
}

void Function_453(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18D1E / 101662
{
	vector3 vVar0;
	bool bVar3;
	
	if (SQUAD_IS_VALID(bParam1))
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			bVar3 = Function_454(bParam1, bParam0, 0, 0);
			if (IS_ACTOR_VALID(bVar3))
			{
				GET_OBJECT_POSITION(bVar3, &vVar0);
				PRINTVECTOR(vVar0);
				TASK_FACE_COORD(bParam0, &vVar0, 0);
				TASK_PRIORITY_SET(bParam0, bParam2);
			}
		}
	}
	return;
}

var Function_454(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x18D6B / 101739
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
			fVar3 = Function_455(bVar4, bParam1);
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

var Function_455(bool bParam0, bool bParam1) //Position: 0x18E25 / 101925
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

void Function_456() //Position: 0x18F16 / 102166
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[02]))
	{
		switch (iLocal_662)
		{
			case 0x00000000:
				iLocal_662++;
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS((*&Local_4 + 228)[02], 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[02], "guide_herd", 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[02], "guide_herd/start");
					Function_222(&bLocal_735);
					iLocal_662++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_429 > 7)
				{
					if ((SQUAD_IS_VALID(Local_760.f_44) && SQUAD_IS_VALID(Local_760.f_48)) && SQUAD_IS_VALID(Local_760.f_52))
					{
						if ((SQUAD_GET_SIZE(Local_760.f_44) != 0 && SQUAD_GET_SIZE(Local_760.f_48) != 0) && SQUAD_GET_SIZE(Local_760.f_52) != 0)
						{
							iLocal_662 = 3;
						}
						else
						{
							if (Function_293(&bLocal_735) <= 1.0f)
							{
								Function_453((*&Local_4 + 228)[02], Local_760.f_44, 2);
								Function_222(&bLocal_735);
							}
							if ((!Function_416(Local_760.f_44, Local_4.f_516) && !Function_416(Local_760.f_48, Local_4.f_516)) && !Function_416(Local_760.f_52, Local_4.f_516))
							{
								if (IS_ACTION_NODE_PLAYING((*&Local_4 + 228)[02], "guide_herd/start"))
								{
									RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[02], 1);
								}
							}
							else if (!IS_ACTION_NODE_PLAYING((*&Local_4 + 228)[02], "guide_herd/start"))
							{
								SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[02], "guide_herd", 0);
								SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[02], "guide_herd/start");
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION((*&Local_4 + 564)[7], &vLocal_687);
				RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[02], 1);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &vLocal_687, true);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[02], bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET((*&Local_4 + 228)[02], 2);
				iLocal_662++;
				break;
			
			case 0x00000004:
				iLocal_662++;
				break;
			}
	}
	return;
}

void Function_457() //Position: 0x19139 / 102713
{
	if (IS_ACTOR_VALID(bLocal_432))
	{
		switch (iLocal_655)
		{
			case 0x00000000:
				iLocal_655++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(bLocal_432);
				CLEAR_ACTOR_MAX_SPEED(bLocal_432);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_432);
				Function_371(3, 0, 1);
				MEMORY_PREFER_RIDING(bLocal_432, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_432, true);
				GET_OBJECT_POSITION((*&Local_4 + 608)[3], &vLocal_675);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(Local_4.f_432))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_432))
					{
						TASK_FACE_COORD(false, &Local_4 + 908, 0);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1336, 2, 1, 1, 1, false);
					}
				}
				TASK_GO_NEAR_COORD(false, &vLocal_675, 3.0f, 4);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET(bLocal_432, true);
				iLocal_655++;
				break;
			
			case 0x00000002:
				if (GET_TASK_STATUS(bLocal_432, 61) == 0)
				{
					iLocal_655++;
				}
				break;
			
			case 0x00000003:
				SET_ANIM_SET_FOR_ACTOR(bLocal_432, "waving_on_horse", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_432, "waving_on_horse/back");
				iLocal_655++;
				break;
			
			case 0x00000004:
				iLocal_655++;
				break;
			}
	}
	return;
}

void Function_458() //Position: 0x1927F / 103039
{
	Function_330(bLocal_347);
	if (!iLocal_716)
	{
		if (iLocal_429 > 2)
		{
			if (Function_321(Global_30668[0]))
			{
				Function_415(&iLocal_668);
			}
			else
			{
				iLocal_654 = 0;
				iLocal_716 = 0;
			}
		}
	}
	if (!iLocal_717)
	{
		if (iLocal_429 > 2)
		{
			if (Function_321(Global_30668[0]))
			{
				Function_493();
			}
			else
			{
				iLocal_659 = 0;
				iLocal_717 = 0;
			}
		}
	}
	if (!iLocal_718)
	{
		if (iLocal_429 > 2)
		{
			if (Function_321(Global_30668[0]))
			{
				Function_492();
			}
			else
			{
				iLocal_667 = 0;
				iLocal_718 = 0;
			}
		}
	}
	if (((iLocal_429 < 5 && iLocal_429 > 105) && !iLocal_429 != 104) && !iLocal_429 != 103)
	{
		Function_488(1, 0);
		Function_487();
		Function_486();
		Function_485();
		Function_484();
		Function_483();
		Function_482();
		Function_481();
		if (iLocal_429 <= 15 && iLocal_429 >= 17)
		{
			if (Function_479(&bLocal_440, (2.0f * 60.0f), (2.0f * 200.0f), bLocal_432, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_451, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_699))
				{
					REMOVE_BLIP(bLocal_699);
				}
				if (IS_OBJECT_VALID(bLocal_700))
				{
					Function_478(bLocal_700);
				}
				if (IS_ACTOR_RIDING(Global_34573))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
					{
						Function_371(3, 1, 1);
					}
				}
			}
			else
			{
				if (Function_345(&bLocal_440, 60.0f, bLocal_433, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_451, 0, 0, 0, 334))
				{
					if (IS_BLIP_VALID(bLocal_699))
					{
						REMOVE_BLIP(bLocal_699);
					}
					if (IS_OBJECT_VALID(bLocal_700))
					{
						Function_478(bLocal_700);
					}
					if (IS_ACTOR_VALID(bLocal_433))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_433)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_433, 334, 0, 2, 0);
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(bLocal_433))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_433)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_433));
						}
					}
					if (!IS_BLIP_VALID(bLocal_699))
					{
						bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_812, 330, 0f, 2, 0);
						if (IS_BLIP_VALID(bLocal_699))
						{
							SET_BLIP_PRIORITY(bLocal_699, 3);
						}
					}
					if (!IS_OBJECT_VALID(bLocal_700))
					{
						GET_OBJECT_POSITION(Local_4.f_812, &vLocal_681);
						GET_OBJECT_ORIENTATION(Local_4.f_812, &vLocal_684);
						bLocal_700 = Function_477(StackVal, StackVal, StackVal, StackVal, bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, Global_34573, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(bLocal_700))
						{
						}
					}
					if (IS_OBJECT_VALID(bLocal_700))
					{
						if (GATEWAY_UPDATE(bLocal_700))
						{
							if (IS_BLIP_VALID(bLocal_699))
							{
								REMOVE_BLIP(bLocal_699);
							}
							if (IS_OBJECT_VALID(bLocal_700))
							{
								Function_478(bLocal_700);
							}
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
							if (IS_ACTOR_VALID(bLocal_432))
							{
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
								{
									Function_371(3, 0, 1);
								}
							}
							Function_241();
							Function_222(&bLocal_434);
							iLocal_429 = 106;
						}
					}
				}
				if (IS_BLIP_VALID(Function_476(3)))
				{
					Function_371(3, 0, 1);
				}
			}
		}
		Function_463();
	}
	switch (iLocal_429)
	{
		case 0x00000000:
			Function_326(0);
			if (Function_320(&Local_348))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			TASK_CLEAR(bLocal_432);
			TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_432, true);
			TASK_CLEAR(bLocal_433);
			TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_433, true);
			SET_ACTOR_HEALTH(bLocal_432, GET_ACTOR_MAX_HEALTH(bLocal_432));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_322();
			iLocal_430 = Global_30668[0];
			if (!Function_321(iLocal_430))
			{
				Function_319(&Local_348);
			}
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_488);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_488);
			CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_488, 15);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_492);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_492);
			CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_492, 15);
			if (Function_320(&Local_348))
			{
				Function_318(Global_34573, (*&Local_4 + 540)[0], 1, 1, 1);
			}
			Function_222(&bLocal_434);
			iLocal_429 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_430) || iLocal_430 != 4294967295))
			{
				Function_222(&bLocal_434);
				iLocal_429 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_655 = 0;
			iLocal_662 = 0;
			iLocal_663 = 0;
			iLocal_664 = 0;
			iLocal_665 = 0;
			iLocal_666 = 0;
			iLocal_657 = 0;
			iLocal_667 = 0;
			iLocal_654 = 0;
			iLocal_716 = 0;
			iLocal_718 = 0;
			bLocal_704 = false;
			bLocal_713 = false;
			iLocal_714 = 0;
			iLocal_715 = 0;
			Function_462(&iLocal_707);
			if (Function_320(&Local_348))
			{
				iLocal_659 = 0;
				iLocal_717 = 0;
				if (IS_VOLUME_VALID(Local_4.f_504))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_504);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_504);
					CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_504, 15);
				}
				Function_318(Global_34573, (*&Local_4 + 540)[0], 1, 1, 1);
				Function_318(bLocal_432, (*&Local_4 + 540)[1], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (IS_GRINGO_VALID(bLocal_753[0]))
					{
						Function_318(bLocal_433, (*&Local_4 + 540)[2], 1, 1, 1);
					}
				}
				if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
				{
					if (IS_GRINGO_VALID(bLocal_753[1]))
					{
						SNAP_ACTOR_TO_GRINGO((*&Local_4 + 188)[02], GET_OBJECT_FROM_GRINGO(bLocal_753[1]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO((*&Local_4 + 188)[02], bLocal_753[1], "UseCase1", true, 1);
						TASK_PRIORITY_SET((*&Local_4 + 188)[02], true);
					}
				}
			}
			Local_760.f_76 = 0;
			Local_760.f_80 = 0;
			Local_791.f_76 = 0;
			Local_791.f_80 = 0;
			bLocal_660 = (Local_760.f_76 + Local_791.f_76);
			bLocal_661 = (Local_760.f_80 + Local_791.f_80);
			PRINTINT(bLocal_660);
			PRINTNL();
			PRINTINT(bLocal_661);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(bLocal_661) / TO_FLOAT(bLocal_660)));
			PRINTNL();
			Global_13172[Local_34811].f_24 = bLocal_660;
			PRINTINT(Global_13172[Local_34811].f_24);
			PRINTNL();
			Global_13172[Local_34811].f_28 = (TO_FLOAT(bLocal_661) / TO_FLOAT(bLocal_660));
			PRINTFLOAT(Global_13172[Local_34811].f_28);
			PRINTNL();
			Function_460();
			Function_364(&(Local_494[017]), bLocal_432, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_364(&(Local_494[117]), Local_4.f_272, "Rancher", 0, 0x5f5e100, 1);
			Function_364(&(Local_494[217]), Local_760.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_363(&(Local_494[317]));
			Function_363(&(Local_494[417]));
			Function_363(&(Local_494[517]));
			Function_363(&(Local_494[617]));
			Function_363(&(Local_494[717]));
			Function_363(&(Local_494[817]));
			if (HUD_IS_FADED())
			{
				Function_222(&bLocal_434);
				iLocal_429 = 5;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			Function_236(iLocal_428);
			Function_357(StackVal, StackVal, Function_236(iLocal_428), iLocal_428, Global_30628[2], Function_239(iLocal_428), 0);
			bLocal_658 = Function_356();
			PRINTINT(bLocal_658);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((IS_ACTOR_VALID(bLocal_432) && IS_ACTOR_VALID((*&Local_4 + 188)[02])) && IS_ACTOR_VALID(bLocal_433))
			{
				if ((Function_355(bLocal_432, 1, 0x41700000) && Function_355((*&Local_4 + 188)[02], 1, 0x41700000)) && Function_355(bLocal_433, 1, 0x41700000))
				{
					Function_222(&bLocal_434);
					iLocal_429 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_320(&Local_348))
			{
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
			}
			Function_222(&bLocal_434);
			iLocal_429 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_222(&bLocal_434);
				iLocal_429 = 6;
			}
			break;
		
		case 0x00000006:
			Function_222(&bLocal_434);
			iLocal_429 = 7;
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(bLocal_433))
			{
				if (!IS_ACTOR_DEAD(bLocal_433))
				{
					if (!IS_BLIP_VALID(bLocal_699))
					{
						bLocal_699 = ADD_BLIP_FOR_ACTOR(bLocal_433, 334, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_699))
						{
						}
					}
					Function_348("ranch07_obj00", 7,5f, 1, 2, 0, 0, 0);
				}
			}
			Function_222(&bLocal_434);
			Function_222(&bLocal_437);
			Function_222(&bLocal_440);
			iLocal_429 = 8;
			break;
		
		case 0x00000008:
			if (Function_479(&bLocal_440, 60.0f, 200.0f, bLocal_432, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_451, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_699))
				{
					REMOVE_BLIP(bLocal_699);
				}
				if (IS_ACTOR_VALID(bLocal_432))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
					{
						Function_371(3, 1, 1);
					}
				}
			}
			else
			{
				if (!IS_ACTOR_VALID(bLocal_433))
				{
					if (Function_345(&bLocal_440, 60.0f, bLocal_433, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_451, 0, 0, 0, 334))
					{
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						if (IS_ACTOR_VALID(bLocal_433))
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_433)))
							{
								ADD_BLIP_FOR_ACTOR(bLocal_433, 334, 0, 2, 0);
							}
						}
					}
					else if (IS_ACTOR_VALID(bLocal_433))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_433)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_433));
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(bLocal_432))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
						{
							Function_371(3, 0, 1);
						}
					}
					if (!IS_BLIP_VALID(bLocal_699))
					{
						bLocal_699 = ADD_BLIP_FOR_ACTOR(bLocal_433, 334, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_699))
						{
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (GET_MOUNT(Global_34573) == bLocal_433)
					{
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						Function_241();
						Function_222(&bLocal_434);
						iLocal_429 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_293(&bLocal_434) <= 0,5f)
			{
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_432, 3212836864, 3212836864, 4, 1, 0);
				if (IS_ACTOR_VALID(bLocal_432))
				{
					Function_371(3, 1, 1);
				}
				Function_459();
				Function_222(&bLocal_434);
				iLocal_429 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_293(&bLocal_434) <= 2,5f)
			{
				Function_348("ranch07_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_479(&bLocal_440, (2.0f * 60.0f), (2.0f * 200.0f), bLocal_432, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_451, 0, 0, 0, 325, 1))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
				{
					Function_371(3, 1, 1);
				}
			}
			else if (Function_345(&bLocal_440, 60.0f, bLocal_433, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_451, 0, 0, 0, 334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
				{
					Function_371(3, 0, 1);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_433)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_433, 334, 0, 2, 0);
					}
				}
			}
			else
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
				{
					Function_371(3, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_433)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_433));
					}
				}
			}
			if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_432))
			{
				if (IS_VOLUME_VALID(Local_4.f_432) && IS_VOLUME_VALID(Local_4.f_436))
				{
					if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_432) || IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_436)) || IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_436))
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL_HIGH", 0, 4294967295, 4294967295);
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							ABORT_SCRIPTED_CONVERSATION(1);
						}
						if (IS_BLIP_VALID(bLocal_699))
						{
							REMOVE_BLIP(bLocal_699);
						}
						if (IS_OBJECT_VALID(bLocal_700))
						{
							DESTROY_OBJECT(bLocal_700);
						}
						if (IS_ACTOR_VALID((*&Local_4 + 228)[42]))
						{
							RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[42], 1);
							SET_ACTOR_FACE_STYLE((*&Local_4 + 228)[42], 0);
							TASK_FACE_ACTOR((*&Local_4 + 228)[42], Global_34573, 1, 3212836864);
							TASK_PRIORITY_SET((*&Local_4 + 228)[42], 2);
						}
						Function_241();
						Function_222(&bLocal_434);
						iLocal_429 = 12;
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (IS_ACTOR_VALID((*&Local_4 + 228)[42]))
			{
				if (ACTORS_IN_RANGE(bLocal_432, (*&Local_4 + 228)[42], 8.0f))
				{
					SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[42], "Ranch07_greetBonnie", bLocal_432, 1, 0, 0, 0, 0);
				}
				else if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 228)[42], 8.0f))
				{
					SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 228)[42], "Ranch07_greetJon", Global_34573, 1, 0, 0, 0, 0);
				}
				SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[42], "quest_talking", 0);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 228)[42], "quest_talking/hi");
			}
			Function_222(&bLocal_434);
			iLocal_429 = 13;
			break;
		
		case 0x0000000D:
			if ((Function_293(&bLocal_434) <= 3.0f && !IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_293(&bLocal_434) <= 10.0f)
			{
				if (IS_ACTOR_VALID((*&Local_4 + 228)[42]))
				{
					if (!IS_SCRIPTED_SPEECH_PLAYING((*&Local_4 + 228)[42]) || Function_293(&bLocal_434) <= 10.0f)
					{
						if (IS_ACTOR_VALID((*&Local_4 + 228)[42]))
						{
							RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[42], 1);
							bLocal_653 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_COORD(false, &Local_4 + 1104, 2.0f, true);
							TASK_GO_NEAR_COORD(false, &Local_4 + 1128, 5.0f, true);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[42], bLocal_653);
							TASK_SEQUENCE_RELEASE(bLocal_653, 1);
							TASK_PRIORITY_SET((*&Local_4 + 228)[42], 2);
						}
						Function_222(&bLocal_434);
						iLocal_429 = 14;
					}
				}
				else
				{
					LOG_ERROR("RANCH07 - WARNING - The RANCHHAND_01_05 pers char is NOT valid!!!");
					Function_222(&bLocal_434);
					iLocal_429 = 14;
				}
			}
			break;
		
		case 0x0000000E:
			if (Function_479(&bLocal_440, (2.0f * 60.0f), (2.0f * 200.0f), bLocal_432, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_451, 0, 0, 0, 325, 1))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
				{
					Function_371(3, 1, 1);
				}
			}
			else if (Function_345(&bLocal_440, 60.0f, bLocal_433, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_451, 0, 0, 0, 334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
				{
					Function_371(3, 0, 1);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_433)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_433, 334, 0, 2, 0);
					}
				}
			}
			else
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
				{
					Function_371(3, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_433)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_433));
					}
				}
				if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_432))
				{
					if (bLocal_713)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_432, (3.0f * 6.0f)))
						{
							if (IS_BLIP_VALID(bLocal_699))
							{
								REMOVE_BLIP(bLocal_699);
							}
							if (IS_OBJECT_VALID(bLocal_700))
							{
								DESTROY_OBJECT(bLocal_700);
							}
							Function_371(3, 0, 1);
							REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_432);
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
							Function_241();
							Function_222(&bLocal_434);
							iLocal_429 = 15;
						}
					}
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					if ((IS_VOLUME_VALID(Local_4.f_432) && IS_VOLUME_VALID(Local_4.f_440)) && IS_OBJECT_VALID(Local_4.f_808))
					{
						if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_432) || IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_440)) || Function_332(Global_34573, Local_4.f_808, 30.0f))
						{
							if (IS_BLIP_VALID(bLocal_699))
							{
								REMOVE_BLIP(bLocal_699);
							}
							if (IS_OBJECT_VALID(bLocal_700))
							{
								DESTROY_OBJECT(bLocal_700);
							}
							Function_371(3, 0, 1);
							REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_432);
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
							Function_241();
							Function_222(&bLocal_434);
							iLocal_429 = 15;
						}
					}
				}
			}
			break;
		
		case 0x0000000F:
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_432)))
			{
				Function_371(3, 0, 1);
			}
			if (!IS_BLIP_VALID(bLocal_699))
			{
				bLocal_699 = ADD_BLIP_FOR_OBJECT(Local_4.f_812, 330, 0f, 2, 0);
				if (IS_BLIP_VALID(bLocal_699))
				{
					SET_BLIP_PRIORITY(bLocal_699, 3);
				}
			}
			if (!IS_OBJECT_VALID(bLocal_700))
			{
				GET_OBJECT_POSITION(Local_4.f_812, &vLocal_681);
				GET_OBJECT_ORIENTATION(Local_4.f_812, &vLocal_684);
				bLocal_700 = Function_477(StackVal, StackVal, StackVal, StackVal, bLocal_347, "RANCH07GATEWAY01", vLocal_681, vLocal_684, Global_34573, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(bLocal_700))
				{
				}
			}
			Function_222(&bLocal_434);
			iLocal_429 = 16;
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_348("ranch07_obj01a", 7,5f, 1, 2, 0, 0, 0);
				Function_222(&bLocal_434);
				Function_222(&bLocal_437);
				Function_222(&bLocal_440);
				iLocal_429 = 17;
			}
			break;
		
		case 0x00000011:
			break;
		
		case 0x0000006A:
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_432);
			iLocal_443[0] = 1;
			Function_222(&bLocal_434);
			iLocal_428 = 1;
			iLocal_429 = 0;
			break;
	}
	return;
}

void Function_459() //Position: 0x1A456 / 107606
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPen", "Ranch07_cowPen", false, 2, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460() //Position: 0x1A49B / 107675
{
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_317();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_316(Local_4.f_200, 0);
			Function_315(Local_4.f_200, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				Function_318((*&Local_4 + 188)[02], (*&Local_4 + 540)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_432, (*&Local_4 + 188)[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_272))
	{
		Function_425();
		if (SQUAD_IS_VALID(Local_4.f_272))
		{
			SQUAD_SET_FACTION(Local_4.f_272, 20);
			Function_310(Local_4.f_272, 1);
			Function_313(Local_4.f_272, 0, 0, 0);
			Function_316(Local_4.f_272, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_272, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_461();
	return;
}

void Function_461() //Position: 0x1A584 / 107908
{
	Function_442();
	Local_760.f_12 = Local_4.f_1332;
	if (!SQUAD_IS_VALID(Local_760.f_44))
	{
		Local_760.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_347, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_760.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_760.f_44);
			Function_306(&Local_760, bLocal_347, Local_4.f_808, &iLocal_747, 3, 3.0f, 4,5f, 1,5f, 1);
			Function_316(Local_760.f_44, 0);
			Function_305(Local_760.f_44, 1);
			Function_304(Local_760.f_44, 0);
			Function_303(Local_760.f_44, 0);
			Function_302(Local_760.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_760.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_456, -1.0f);
		}
	}
	return;
}

void Function_462(var uParam0) //Position: 0x1A654 / 108116
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_463() //Position: 0x1A677 / 108151
{
	if (Function_293(&bLocal_729) <= 0,1f)
	{
		switch (iLocal_657)
		{
			case 0x00000000:
				iLocal_657++;
				break;
			
			case 0x00000001:
				if (iLocal_429 > 8)
				{
					Function_471(0, 1, 35.0f, 25.0f, 0);
					if (Global_3403 || Global_3404)
					{
						if (!iLocal_707[0])
						{
							if (!Function_133())
							{
								iLocal_707[0] = 1;
								Function_470();
							}
						}
					}
					if (!Function_133())
					{
						if (Function_293(&bLocal_437) <= 15.0f)
						{
							Function_222(&bLocal_437);
							Function_469();
						}
					}
					if (IS_ACTOR_VALID(bLocal_433))
					{
						if (GET_MOUNT(Global_34573) == bLocal_433)
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							iLocal_657++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (iLocal_429 > 11)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (bLocal_658 == 0)
						{
							Function_468();
						}
						else if (bLocal_658 == 1)
						{
							Function_467();
						}
						else if (bLocal_658 > 2)
						{
							Function_466();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_657++;
						}
					}
				}
				break;
			
			case 0x00000003:
				Function_471(1, 1, 0x420c0000, 0x41c80000, 1);
				if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_432))
				{
					if ((IS_VOLUME_VALID(Local_4.f_432) && IS_VOLUME_VALID(Local_4.f_436)) && IS_VOLUME_VALID(Local_4.f_532))
					{
						if (((IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_432) || IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_436)) || IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_436)) || IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_532))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_222(&bLocal_437);
							iLocal_657 = 5;
						}
					}
				}
				if (!iLocal_714)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_222(&bLocal_437);
						iLocal_657 = 4;
					}
				}
				break;
			
			case 0x00000004:
				Function_471(1, 1, 0x420c0000, 0x41c80000, 1);
				if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_432))
				{
					if ((IS_VOLUME_VALID(Local_4.f_432) && IS_VOLUME_VALID(Local_4.f_436)) && IS_VOLUME_VALID(Local_4.f_532))
					{
						if (((IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_432) || IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_436)) || IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_436)) || IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_532))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_222(&bLocal_437);
							iLocal_657 = 5;
						}
					}
				}
				break;
			
			case 0x00000005:
				Function_471(1, 1, (35.0f + 3.0f), (25.0f + 3.0f), 1);
				if (bLocal_713)
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					iLocal_657++;
				}
				break;
			
			case 0x00000006:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_465();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_657++;
					}
				}
				break;
			
			case 0x00000007:
				Function_471(1, 1, (35.0f + 3.0f), (25.0f + 3.0f), 1);
				if (!iLocal_714)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_222(&bLocal_437);
						iLocal_657++;
					}
				}
				break;
			
			case 0x00000008:
				Function_471(1, 1, (35.0f + 3.0f), (25.0f + 3.0f), 1);
				if (Function_293(&bLocal_437) <= 5.0f)
				{
					Function_222(&bLocal_437);
					iLocal_657++;
				}
				break;
			
			case 0x00000009:
				if (!Function_133())
				{
					if (Function_293(&bLocal_437) <= 15.0f)
					{
						Function_464();
						Function_222(&bLocal_437);
					}
				}
				Function_471(1, 1, (35.0f + 3.0f), (25.0f + 3.0f), 1);
				break;
			
			case 0x0000000A:
				iLocal_657++;
				break;
		}
		Function_222(&bLocal_729);
	}
	return;
}

void Function_464() //Position: 0x1A9B9 / 108985
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_behindHerd", "Ranch07_behindHerd", false, 2, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465() //Position: 0x1AA06 / 109062
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_startHerd", "Ranch07_startHerd", false, 2, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x1AA51 / 109137
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_noTalk", "Ranch07_noTalk", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467() //Position: 0x1AA96 / 109206
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_cowPenTalk_v2_AA", "Ranch07_cowPenTalk_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AB1", "Ranch07_cowPenTalk_v2_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AB2", "Ranch07_cowPenTalk_v2_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AB3", "Ranch07_cowPenTalk_v2_AB3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_cowPenTalk_v2_AC", "Ranch07_cowPenTalk_v2_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AD1", "Ranch07_cowPenTalk_v2_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AD2", "Ranch07_cowPenTalk_v2_AD2", false, 1, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_468() //Position: 0x1AC73 / 109683
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v1_AA", "Ranch07_cowPenTalk_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_cowPenTalk_v1_AB", "Ranch07_cowPenTalk_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v1_AC1", "Ranch07_cowPenTalk_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v1_AC2", "Ranch07_cowPenTalk_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_cowPenTalk_v1_AD", "Ranch07_cowPenTalk_v1_AD", true, 1, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_469() //Position: 0x1ADCC / 110028
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_noToHorse", "Ranch07_noToHorse", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470() //Position: 0x1AE17 / 110103
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_trouble_v1_AA1", "Ranch07_trouble_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_trouble_v1_AA2", "Ranch07_trouble_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_trouble_v1_AB", "Ranch07_trouble_v1_AB", true, 1, 1, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_471(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x1AEE0 / 110304
{
	if (Function_293(&bLocal_726) <= 6.0f)
	{
		Function_392();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_offHorse", "Ranch07_offHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		if (!IS_ACTOR_RIDING(bLocal_432))
		{
			if (bParam0)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_391();
				Function_222(&bLocal_726);
			}
		}
		if (bParam4)
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_432, 1,15f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_432, "Ranch07_rideIntoBonHorse", "Ranch07_rideIntoBonHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_222(&bLocal_726);
			}
		}
		if (bParam1)
		{
			if (!Function_473(Global_34573, bLocal_432, iParam2))
			{
				if (!iLocal_714)
				{
					iLocal_714 = 1;
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_472();
					Function_222(&bLocal_726);
				}
			}
		}
		if (ACTORS_IN_RANGE(Global_34573, bLocal_432, bParam3))
		{
			if (bParam1)
			{
				if (iLocal_714)
				{
					iLocal_714 = 0;
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_385();
					Function_222(&bLocal_726);
				}
			}
		}
	}
}

void Function_472() //Position: 0x1B022 / 110626
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_refuseHerd", "Ranch07_refuseHerd", false, 2, 0, 0, 1);
		Function_275(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_473(var uParam0, var uParam1, float fParam2) //Position: 0x1B06F / 110703
{
	float fVar0;
	
	fVar0 = Function_474(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_474(bool bParam0, bool bParam1) //Position: 0x1B08C / 110732
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_475(&uVar0, &uVar3);
	return iVar6;
}

var Function_475(var uParam0, int iParam1) //Position: 0x1B0AB / 110763
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

var Function_476(int iParam0) //Position: 0x1B0C9 / 110793
{
	return Global_8492[iParam014].f_52;
}

bool Function_477(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x1B0D8 / 110808
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_478(bool bParam0) //Position: 0x1B1A3 / 111011
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

bool Function_479(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1B22D / 111149
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_480(Global_34573, bParam3, bParam2))
	{
		Function_230(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_480(Global_34573, bParam3, bParam1))
	{
		if (!Function_342(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_348(bParam4, 7,5f, 0, 2, iParam7, 0, 0);
				}
				Function_341(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_340(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_340(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_342(2))
	{
		Function_339(2);
		if (!Function_338())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_337();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_219(bParam3);
				Function_372(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_340(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_340(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_480(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B3C1 / 111553
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

void Function_481() //Position: 0x1B4D2 / 111826
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[42]))
	{
		switch (iLocal_666)
		{
			case 0x00000000:
				iLocal_666++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1276)))
				{
					TASK_CLEAR((*&Local_4 + 228)[42]);
					SNAP_ACTOR_TO_GRINGO((*&Local_4 + 228)[42], Local_4.f_1276, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO((*&Local_4 + 228)[42], GET_GRINGO_FROM_OBJECT(Local_4.f_1276), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET((*&Local_4 + 228)[42], 2);
					iLocal_666++;
				}
				break;
			
			case 0x00000003:
				iLocal_666++;
				break;
			}
	}
	return;
}

void Function_482() //Position: 0x1B580 / 112000
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[32]))
	{
		switch (iLocal_665)
		{
			case 0x00000000:
				iLocal_665++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1292)))
				{
					TASK_CLEAR((*&Local_4 + 228)[32]);
					SNAP_ACTOR_TO_GRINGO((*&Local_4 + 228)[32], Local_4.f_1292, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO((*&Local_4 + 228)[32], GET_GRINGO_FROM_OBJECT(Local_4.f_1292), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET((*&Local_4 + 228)[32], 2);
					iLocal_665++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_429 > 15)
				{
					iLocal_665++;
				}
				break;
			
			case 0x00000003:
				RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[32], 1);
				GET_OBJECT_POSITION((*&Local_4 + 608)[7], &uLocal_696);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1368, 2, 1, 1, 1, false);
				TASK_GO_TO_COORD(false, &uLocal_696, 2);
				TASK_FACE_COORD(false, &Local_4 + 884, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[32], bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET((*&Local_4 + 228)[32], 2);
				iLocal_665++;
				break;
			
			case 0x00000004:
				iLocal_665++;
				break;
			}
	}
	return;
}

void Function_483() //Position: 0x1B6C1 / 112321
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[22]))
	{
		switch (iLocal_664)
		{
			case 0x00000000:
				iLocal_664++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1272)))
				{
					TASK_CLEAR((*&Local_4 + 228)[22]);
					SNAP_ACTOR_TO_GRINGO((*&Local_4 + 228)[22], Local_4.f_1272, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO((*&Local_4 + 228)[22], GET_GRINGO_FROM_OBJECT(Local_4.f_1272), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET((*&Local_4 + 228)[22], 2);
					iLocal_664++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_429 > 15)
				{
					iLocal_664++;
				}
				break;
			
			case 0x00000003:
				RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[22], 1);
				GET_OBJECT_POSITION((*&Local_4 + 608)[6], &uLocal_693);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1364, 2, 1, 1, 1, false);
				TASK_GO_TO_COORD(false, &uLocal_693, 2);
				TASK_FACE_COORD(false, &Local_4 + 884, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[22], bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET((*&Local_4 + 228)[22], 2);
				iLocal_664++;
				break;
			
			case 0x00000004:
				iLocal_664++;
				break;
			}
	}
	return;
}

void Function_484() //Position: 0x1B802 / 112642
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[12]))
	{
		switch (iLocal_663)
		{
			case 0x00000000:
				iLocal_663++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(bLocal_753[3]))
				{
					TASK_CLEAR((*&Local_4 + 228)[12]);
					SNAP_ACTOR_TO_GRINGO((*&Local_4 + 228)[12], GET_OBJECT_FROM_GRINGO(bLocal_753[3]), "UseCase1", true, 0, 0);
					TASK_USE_GRINGO((*&Local_4 + 228)[12], bLocal_753[3], "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET((*&Local_4 + 228)[12], 2);
					iLocal_663++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_429 > 15)
				{
					iLocal_663++;
				}
				break;
			
			case 0x00000003:
				RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[12], 1);
				GET_OBJECT_POSITION((*&Local_4 + 608)[5], &uLocal_690);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uLocal_690, 2);
				TASK_FACE_COORD(false, &Local_4 + 860, 0);
				TASK_STAND_STILL(false, -1.0f, 1, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[12], bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET((*&Local_4 + 228)[12], 2);
				iLocal_663++;
				break;
			
			case 0x00000004:
				iLocal_663++;
				break;
			}
	}
	return;
}

void Function_485() //Position: 0x1B935 / 112949
{
	if (IS_ACTOR_VALID((*&Local_4 + 228)[02]))
	{
		switch (iLocal_662)
		{
			case 0x00000000:
				iLocal_662++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_1288)))
				{
					TASK_CLEAR((*&Local_4 + 228)[02]);
					SNAP_ACTOR_TO_GRINGO((*&Local_4 + 228)[02], Local_4.f_1288, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO((*&Local_4 + 228)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1288), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET((*&Local_4 + 228)[02], 2);
					iLocal_662++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_429 > 15)
				{
					iLocal_662++;
				}
				break;
			
			case 0x00000003:
				RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 228)[02], 1);
				GET_OBJECT_POSITION((*&Local_4 + 608)[4], &vLocal_687);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &vLocal_687, 2);
				TASK_FACE_COORD(false, &Local_4 + 860, 0);
				TASK_STAND_STILL(false, -1.0f, 1, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 228)[02], bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET((*&Local_4 + 228)[02], 2);
				iLocal_662++;
				break;
			
			case 0x00000004:
				iLocal_662++;
				break;
			}
	}
	return;
}

void Function_486() //Position: 0x1BA68 / 113256
{
	if (IS_ACTOR_VALID(bLocal_432))
	{
		switch (iLocal_655)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(bLocal_432))
				{
					MEMORY_PREFER_RIDING(bLocal_432, false);
					CLEAR_ACTOR_MIN_SPEED(bLocal_432);
					CLEAR_ACTOR_MAX_SPEED(bLocal_432);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_432);
					Function_371(3, 0, 1);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 1224, true, 3212836864);
					TASK_FOLLOW_PATH(false, Local_4.f_1304, 1, 1, 1, 1, false);
					TASK_FOLLOW_PATH(false, Local_4.f_1308, 2, 1, 0, 1, false);
					TASK_MOUNT(false, (*&Local_4 + 188)[02], 0, 1, 4, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
					TASK_PRIORITY_SET(bLocal_432, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_432, true);
				}
				Function_222(&iLocal_723);
				iLocal_655++;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
				{
					if (GET_MOUNT(bLocal_432) == (*&Local_4 + 188)[02])
					{
						iLocal_655++;
					}
				}
				if (iLocal_715)
				{
					iLocal_715 = 0;
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, (*&Local_4 + 188)[02], 0, 1, 2, 2147483647);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
				if (Function_293(&iLocal_723) <= 35.0f)
				{
					LOG_ERROR("UPDATE_COMPANION_STAGE01 - Timeout!!! Waiting for companion to mount their horse.");
					MEMORY_PREFER_RIDING(bLocal_432, true);
					bLocal_653 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, (*&Local_4 + 188)[02], 0, 1, 2, 2147483647);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
					TASK_SEQUENCE_RELEASE(bLocal_653, 1);
					TASK_PRIORITY_SET(bLocal_432, true);
					Function_222(&iLocal_723);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
				{
					TASK_CLEAR((*&Local_4 + 188)[02]);
				}
				MEMORY_PREFER_RIDING(bLocal_432, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_432, true);
				GET_OBJECT_POSITION(Local_4.f_956, &vLocal_675);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(false, &vLocal_675, 0);
				TASK_GO_NEAR_COORD(false, &vLocal_675, 3.0f, 5);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1312, 5, 1, 0, 1, false);
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 564)[6], 5, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET(bLocal_432, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_432, 3.0f);
				iLocal_655++;
				break;
			
			case 0x00000003:
				if (IS_VOLUME_VALID(Local_4.f_496))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_496))
					{
						if (GET_MOUNT(Global_34573) == bLocal_433)
						{
							iLocal_655 = 6;
						}
						else
						{
							iLocal_655 = 4;
						}
					}
				}
				if (IS_VOLUME_VALID(Local_4.f_500))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_432, Local_4.f_500))
					{
						iLocal_655 = 7;
					}
				}
				break;
			
			case 0x00000004:
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET(bLocal_432, true);
				iLocal_655++;
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (GET_MOUNT(Global_34573) == bLocal_433)
					{
						iLocal_655++;
					}
				}
				break;
			
			case 0x00000006:
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_432, true);
				GET_OBJECT_POSITION((*&Local_4 + 564)[6], &vLocal_675);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_432, Local_4.f_1312, 5, 0, 0, 1, false);
				TASK_GO_TO_COORD(false, &vLocal_675, 5);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET(bLocal_432, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_432, 5.0f);
				iLocal_655++;
				break;
			
			case 0x00000007:
				if (GET_TASK_STATUS(bLocal_432, 1) == 0)
				{
					bLocal_713 = true;
					iLocal_655++;
				}
				break;
			
			case 0x00000008:
				SET_ACTOR_FACE_STYLE(bLocal_432, 0);
				bLocal_653 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_432, bLocal_653);
				TASK_SEQUENCE_RELEASE(bLocal_653, 1);
				TASK_PRIORITY_SET(bLocal_432, true);
				iLocal_655++;
				break;
			
			case 0x00000009:
				iLocal_655++;
				break;
			}
	}
	return;
}

void Function_487() //Position: 0x1BE7A / 114298
{
	if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
	{
		if (!IS_ACTOR_VALID(bLocal_433) || !IS_ACTOR_ALIVE(bLocal_433))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 188)[02]))
			{
				SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 188)[02], 0);
			}
		}
	}
	return;
}

void Function_488(bool bParam0, bool bParam1) //Position: 0x1BEB7 / 114359
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			Function_219(bLocal_433);
			if (GET_MOUNT(Global_34573) != bLocal_433)
			{
				if (GET_MOUNT(Global_34573) == (*&Local_4 + 188)[02])
				{
					iLocal_715 = 1;
					TASK_CLEAR((*&Local_4 + 188)[02]);
					bLocal_703 = bLocal_433;
					bLocal_433 = (*&Local_4 + 188)[02];
					(*&Local_4 + 188)[02] = bLocal_703;
					SET_ACTORS_HORSE(Global_34573, bLocal_433);
					Function_490(bLocal_433, 0);
					GIVE_OBJECT_TO_LAYOUT(bLocal_433, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(bLocal_433, 0);
					SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
					SET_MOST_RECENT_MOUNT(bLocal_432, (*&Local_4 + 188)[02]);
					SET_ALLOW_RIDE_BY_AI((*&Local_4 + 188)[02], 1);
					GIVE_OBJECT_TO_LAYOUT((*&Local_4 + 188)[02], Local_4);
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(bLocal_433, GET_AMBIENT_LAYOUT());
					bLocal_433 = GET_MOUNT(Global_34573);
					SET_ACTORS_HORSE(Global_34573, bLocal_433);
					Function_490(bLocal_433, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_433, 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_433, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
	}
	if (bParam1)
	{
		if (GET_MOUNT(bLocal_432) != (*&Local_4 + 188)[02])
		{
			MEMORY_PREFER_RIDING(bLocal_432, true);
			SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
			Function_489(&bLocal_432, (*&Local_4 + 188)[02], 1);
		}
	}
	return;
}

void Function_489(var uParam0, bool bParam1, bool bParam2) //Position: 0x1BFF4 / 114676
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_334(bParam1);
			vVar0 = { StackVal, StackVal, Function_334(bParam1) };
			if (bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(*uParam0, bParam1, true);
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

void Function_490(bool bParam0, int iParam1) //Position: 0x1C0FD / 114941
{
	Function_491(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_491(bool bParam0) //Position: 0x1C10F / 114959
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

void Function_492() //Position: 0x1C2C5 / 115397
{
	var uVar0;
	
	switch (iLocal_667)
	{
		case 0x00000000:
			iLocal_667++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(bLocal_753[2]))
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_804), &uVar0);
				bLocal_753[2] = LOCATE_GRINGO_OF_TYPE("rand_idle_nearwall_nospawn", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_667++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(bLocal_753[3]))
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_804), &uVar0);
				bLocal_753[3] = LOCATE_GRINGO_OF_TYPE("repair_kneel_nospawn", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_667++;
			}
			break;
		
		case 0x00000003:
			iLocal_667++;
			break;
		
		case 0x00000004:
			iLocal_667++;
			break;
		
		case 0x00000005:
			iLocal_718 = 1;
			iLocal_667++;
			break;
	}
	return;
}

int Function_493() //Position: 0x1C3C9 / 115657
{
	switch (iLocal_659)
	{
		case 0x00000000:
			Function_222(&bLocal_741);
			iLocal_659++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(bLocal_753[0]) && !IS_GRINGO_VALID(bLocal_753[1]))
			{
				Function_496(StackVal, StackVal, *(&Local_4 + 1152), &(bLocal_753[0]), &(bLocal_753[1]));
			}
			else
			{
				iLocal_659 = 2;
			}
			if (Function_293(&bLocal_741) <= 3.0f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch01 gringo is out of order!!!");
				bLocal_753[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 1176, 1,5f, 0);
				if (IS_GRINGO_VALID(bLocal_753[0]))
				{
				}
				bLocal_753[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 1200, 1,5f, 0);
				if (IS_GRINGO_VALID(bLocal_753[1]))
				{
				}
				Function_222(&bLocal_741);
				iLocal_659 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_GRINGO_VALID(bLocal_753[0]) && IS_GRINGO_VALID(bLocal_753[1]))
			{
				Function_237(GET_OBJECT_FROM_GRINGO(bLocal_753[0]));
				Function_494(StackVal, StackVal, Function_237(GET_OBJECT_FROM_GRINGO(bLocal_753[0])), 0, 0);
				Function_237(GET_OBJECT_FROM_GRINGO(bLocal_753[1]));
				Function_494(StackVal, StackVal, Function_237(GET_OBJECT_FROM_GRINGO(bLocal_753[1])), 0, 0);
			}
			iLocal_659++;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(bLocal_433) && IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				if (IS_ACTOR_VALID(bLocal_433))
				{
					if (IS_GRINGO_VALID(bLocal_753[0]))
					{
						Function_318(bLocal_433, (*&Local_4 + 540)[2], 1, 1, 1);
						TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
						TASK_PRIORITY_SET(bLocal_433, true);
					}
					else
					{
						Function_318(bLocal_433, (*&Local_4 + 540)[2], 1, 1, 1);
						TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
						TASK_PRIORITY_SET(bLocal_433, true);
					}
				}
				if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
				{
					if (IS_GRINGO_VALID(bLocal_753[1]))
					{
						SNAP_ACTOR_TO_GRINGO((*&Local_4 + 188)[02], GET_OBJECT_FROM_GRINGO(bLocal_753[1]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO((*&Local_4 + 188)[02], bLocal_753[1], "UseCase1", true, 1);
						TASK_PRIORITY_SET((*&Local_4 + 188)[02], true);
					}
					else
					{
						Function_318((*&Local_4 + 188)[02], (*&Local_4 + 540)[3], 1, 1, 1);
						TASK_STAND_STILL((*&Local_4 + 188)[02], -1.0f, 0, 0);
						TASK_PRIORITY_SET((*&Local_4 + 188)[02], true);
					}
				}
			}
			iLocal_659++;
			break;
		
		case 0x00000004:
			iLocal_717 = 1;
			iLocal_659++;
			break;
		
		case 0x00000005:
			return 1;
			break;
	}
	return 0;
}

int Function_494(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x1C666 / 116326
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_496(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
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
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_495(uVar0[0], "UseCase1"));
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
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_495(uVar0[1], "UseCase1"));
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

var Function_495(bool bParam0, bool bParam1) //Position: 0x1C7C7 / 116679
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_496(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1C7D4 / 116692
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_497() //Position: 0x1C87E / 116862
{
	switch (iLocal_429)
	{
		case 0x00000006:
			Function_544(&Local_348, 1);
			bLocal_347 = CREATE_LAYOUT("ranch07_DynamicLayout");
			Unknown_Function();
			iLocal_659 = 0;
			iLocal_667 = 0;
			iLocal_654 = 0;
			iLocal_716 = 0;
			iLocal_718 = 0;
			iLocal_717 = 0;
			Function_279(&bLocal_434);
			Function_279(&bLocal_741);
			AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(6);
			Function_322();
			iLocal_429 = 7;
			break;
		
		case 0x00000007:
			Unknown_Function();
			if (StackVal)
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_542();
				}
				if (!Function_320(&Local_348))
				{
					iLocal_429 = 8;
				}
				else
				{
					iLocal_429 = 11;
				}
			}
			break;
		
		case 0x00000008:
			bLocal_658 = Function_356();
			PRINTINT(bLocal_658);
			PRINTNL();
			Function_318(Global_34573, (*&Local_4 + 540)[0], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_432))
			{
				TASK_CLEAR(bLocal_432);
				TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_432, true);
				Function_318(bLocal_432, (*&Local_4 + 540)[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_433))
			{
				TASK_CLEAR(bLocal_433);
				TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_433, true);
				Function_318(bLocal_433, (*&Local_4 + 540)[2], 1, 1, 1);
			}
			if (IS_VOLUME_VALID(Local_4.f_504))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_504);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_504);
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_504, 15);
			}
			iLocal_429 = 9;
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(Global_30668[0]) || iLocal_430 != 4294967295))
			{
				Function_541();
				Function_222(&bLocal_434);
				Function_222(&bLocal_741);
				iLocal_429 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_493() || Function_293(&bLocal_434) < 5.0f)
			{
				if (Function_506("$/cutscene/r7/r7", &Local_421, &Local_348, &iLocal_428, 128173, 127986, 126954, 126811, 126730, 123321, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_222(&bLocal_434);
					Function_222(&bLocal_741);
					iLocal_429 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_431 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_371(3, 0, 1);
			RESET_ACTOR_GAITS(bLocal_432, 0);
			SET_CRIPPLE_ENABLE(bLocal_432, 0);
			SET_ACTOR_FACTION(bLocal_432, 20);
			TASK_PRIORITY_SET(bLocal_432, true);
			TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_432, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_432, 50.0f);
			SET_ACTOR_HEALTH(bLocal_432, GET_ACTOR_MAX_HEALTH(bLocal_432));
			RESET_ACTOR_GAITS(bLocal_433, 0);
			TASK_PRIORITY_SET(bLocal_433, true);
			TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_433, 50.0f);
			SET_ACTOR_HEALTH(bLocal_433, GET_ACTOR_MAX_HEALTH(bLocal_433));
			SET_ALLOW_RIDE_BY_AI(bLocal_433, 0);
			Function_279(&bLocal_726);
			Function_279(&bLocal_729);
			Function_279(&bLocal_720);
			Function_279(&iLocal_723);
			Function_279(&iLocal_732);
			Function_279(&bLocal_735);
			Function_279(&bLocal_738);
			Function_222(&bLocal_741);
			Function_279(&bLocal_744);
			Function_504("FTR_SONG_01", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_502(&uLocal_454, bLocal_347);
			Function_222(&bLocal_434);
			Function_279(&bLocal_437);
			Function_279(&bLocal_440);
			iLocal_428 = 0;
			iLocal_429 = 0;
			Function_499(&Local_348, &iLocal_428, &iLocal_429);
			Function_498(StackVal, StackVal, StackVal, StackVal, StackVal, Function_542(), Local_348);
			switch (iLocal_428)
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

void Function_498(struct<25> Param0) //Position: 0x1CBFD / 117757
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_428 = 0;
			break;
		
		case 0x00000002:
			iLocal_428 = 101;
			break;
	}
}

void Function_499(int iParam0, var uParam1, int iParam2) //Position: 0x1CC29 / 117801
{
	if (Function_320(iParam0))
	{
		*uParam1 = Function_501(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_500();
	}
	return;
}

void Function_500() //Position: 0x1CC5D / 117853
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

var Function_501(int iParam0) //Position: 0x1CCAE / 117934
{
	if (Function_320(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_502(var uParam0, bool bParam1) //Position: 0x1CCC6 / 117958
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_503(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_503(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_503(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_503(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_503(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1D366 / 119654
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

void Function_504(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1D429 / 119849
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_505(uParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

var Function_505(int iParam0) //Position: 0x1D445 / 119877
{
	float fVar0;
	
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
	fVar0 = "";
	return fVar0;
}

bool Function_506(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0x1D982 / 121218
{
	if (!bParam15)
	{
		Function_514(iParam1, uParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_320(iParam2) || iParam2->f_24 < 1))
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
				Function_222(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_513())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_512(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_222(iParam1 + 4);
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
					Function_512(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_293(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_293(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_510(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_512(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_222(iParam1 + 4);
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
						Function_509(1.0f);
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
						Function_507();
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
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_320(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_507() //Position: 0x1DF96 / 122774
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_508();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_508() //Position: 0x1DFDB / 122843
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_509(bool bParam0) //Position: 0x1DFED / 122861
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

void Function_510(bool bParam0, bool bParam1) //Position: 0x1E00A / 122890
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
			if ((bVar3 == Global_34573 && !Function_511(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_511(bool bParam0) //Position: 0x1E08A / 123018
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

int Function_512(bool bParam0) //Position: 0x1E0B9 / 123065
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

bool Function_513() //Position: 0x1E171 / 123249
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

void Function_514(var uParam0, var uParam1) //Position: 0x1E1AB / 123307
{
	Function_291(uParam0, uParam1, 0);
	return;
}

int Function_515() //Position: 0x1E1B9 / 123321
{
	switch (iLocal_428)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				if (Function_516())
				{
					Function_542();
					Function_318(Global_34573, (*&Local_4 + 540)[0], 1, 1, 1);
					Function_318(bLocal_432, (*&Local_4 + 540)[1], 1, 1, 1);
					TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				Function_318(bLocal_432, (*&Local_4 + 540)[1], 1, 1, 1);
				return 1;
			}
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_433))
				{
					Function_318(bLocal_433, (*&Local_4 + 728)[2], 1, 1, 1);
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_433))
					{
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_433);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_432))
			{
				if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
				{
					Function_318((*&Local_4 + 188)[02], (*&Local_4 + 728)[5], 1, 1, 1);
					if (!IS_ACTOR_RIDING(bLocal_432) && !IS_ACTOR_MOUNTED((*&Local_4 + 188)[02]))
					{
						ACTOR_MOUNT_ACTOR(bLocal_432, (*&Local_4 + 188)[02]);
					}
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

bool Function_516() //Position: 0x1E2DC / 123612
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_525(&uLocal_389))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_433))
		{
			bLocal_433 = Function_373(1, 1, -813,974f, 93,42f, 2431,932f, 73,384f, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_432))
		{
			bLocal_432 = Function_517(3, 0, 1, -788,77f, 93,654f, 2408,104f, 0, 0, 0);
			return 0;
		}
	}
	return 1;
}

bool Function_517(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x1E347 / 123719
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
		Function_371(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_524(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_520(StackVal, uParam7);
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
		Function_519(bVar1, 0, 0, 0, 0);
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
		Function_518(bVar1, 0);
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

void Function_518(bool bParam0, bool bParam1) //Position: 0x1E831 / 124977
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_519(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1E851 / 125009
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

bool Function_520(int iParam0, bool bParam1) //Position: 0x1E8A5 / 125093
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_307(iParam0))
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
						Function_521(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_521(bool bParam0, bool bParam1) //Position: 0x1E925 / 125221
{
	Function_523(bParam0);
	Function_522(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_522(bool bParam0) //Position: 0x1E94B / 125259
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_523(bool bParam0) //Position: 0x1E96F / 125295
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

bool Function_524(int iParam0, bool bParam1) //Position: 0x1EA3E / 125502
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

bool Function_525(int iParam0) //Position: 0x1EAD1 / 125649
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_529();
	iVar1 = 0;
	if (!Function_181(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_528(iParam0[iVar03], 8);
		}
		else if (Function_527())
		{
			iVar1 = 1;
			Function_528(iParam0[iVar03], 8);
		}
		Function_528(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_181(iParam0[iVar03], 4))
		{
			if (!Function_181(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_181(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_181(iParam0[03], 8) || iVar1));
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
				Function_528(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_181(iParam0[iVar03], 4))
		{
			if (!Function_181(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_528(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_528(iParam0[iVar03], 2);
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
							Function_528(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_528(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_528(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_528(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_528(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_528(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_528(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_528(iParam0[iVar03], 2);
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
	Function_526();
	return 1;
}

void Function_526() //Position: 0x1EE4C / 126540
{
	if (!Function_288(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_527() //Position: 0x1EE8C / 126604
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

void Function_528(var uParam0, int iParam1) //Position: 0x1EEB7 / 126647
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_529() //Position: 0x1EEC8 / 126664
{
	if (!Function_288(128))
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

int Function_530() //Position: 0x1EF0A / 126730
{
	switch (iLocal_428)
	{
		case 0x00000063:
			Function_270(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_270(2, 0, 1, 0, 1, 1, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_270(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_531() //Position: 0x1EF5B / 126811
{
	switch (iLocal_428)
	{
		case 0x00000063:
			Function_318(bLocal_432, (*&Local_4 + 540)[1], 1, 1, 1);
			Function_318(bLocal_433, (*&Local_4 + 540)[2], 1, 1, 1);
			Function_318(Global_34573, (*&Local_4 + 540)[0], 0, 1, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
			return 1;
			break;
		
		case 0x00000065:
			ACTOR_POP_NEXT_GAIT(bLocal_432, 2, false);
			TASK_GO_NEAR_COORD(bLocal_432, &Local_4 + 984, 5.0f, 3);
			TASK_PRIORITY_SET(bLocal_432, true);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_532() //Position: 0x1EFEA / 126954
{
	switch (iLocal_428)
	{
		case 0x00000063:
			if (!Function_533() && !Function_525(&bLocal_355))
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

bool Function_533() //Position: 0x1F01A / 127002
{
	Function_536(&Local_4 + 4, 977, 2, 0);
	Function_536(&Local_4 + 4, 980, 2, 0);
	Function_536(&Local_4 + 4, 981, 2, 0);
	Function_536(&Local_4 + 4, 33, 2, 0);
	Function_536(&Local_4 + 4, 34, 2, 0);
	Function_536(&Local_4 + 4, Global_7581[73], 2, 0);
	Function_536(&Local_4 + 4, Global_7581[23], 2, 0);
	Function_536(&Local_4 + 4, Global_7581[133], 2, 0);
	Function_536(&Local_4 + 4, Global_7581[43], 2, 0);
	Function_536(&Local_4 + 4, Global_7581[03], 2, 0);
	Function_534(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	Function_534(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_534(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_534(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_534(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_back_nospawn", 1, 0);
	if (Function_525(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_534(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1F226 / 127526
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_535(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_528(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_535(var uParam0, int iParam1, int iParam2) //Position: 0x1F25E / 127582
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_181(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_528(uParam0[iVar03], 4);
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

var Function_536(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1F322 / 127778
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
			Function_528(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_528(uParam0[iVar03], 8);
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

int Function_537() //Position: 0x1F3F2 / 127986
{
	switch (iLocal_428)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-789,73f, 95,131f, 2412,583f, -0,556f, -0,187f, 0,81f);
				return 1;
			}
			if (Function_516())
			{
				Function_542();
				Function_318(Global_34573, (*&Local_4 + 540)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_432))
				{
					Function_318(bLocal_432, (*&Local_4 + 540)[1], 1, 1, 1);
					TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_432, true);
				}
			}
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-671,905f, 103,794f, 2619,115f, 0,82f, -0,02f, -0,572f);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_538() //Position: 0x1F4AD / 128173
{
	switch (iLocal_428)
	{
		case 0x00000063:
			Function_287(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_539(StackVal, StackVal, bLocal_347, *(&Global_3422[540] + 52), &Local_4 + 300[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_287(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_237((*&Local_4 + 728)[0]);
			Function_539(StackVal, StackVal, bLocal_347, Function_237((*&Local_4 + 728)[0]), &Local_4 + 300[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_287(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_539(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x1F541 / 128321
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
				Function_540(bVar1, bParam0);
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

void Function_540(bool bParam0, bool bParam1) //Position: 0x1F7AF / 128943
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

void Function_541() //Position: 0x1F824 / 129060
{
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_317();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_316(Local_4.f_200, 0);
			Function_315(Local_4.f_200, 3);
			Function_313(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				Function_318((*&Local_4 + 188)[02], (*&Local_4 + 540)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_432, (*&Local_4 + 188)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_432, (*&Local_4 + 188)[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	return;
}

vector3 Function_542() //Position: 0x1F8B0 / 129200
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Ranch07_layout");
	Local_4.f_316 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 300)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -788,2553f, 93,65432f, 2411,315f, 0.0f, -34,29419f, 0.0f, 8.0f, 5.0f, 9.0f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 300)[0]);
	(*&Local_4 + 300)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 3, -909,5804f, 90,35291f, 2466,531f, 0.0f, 20.0f, 0.0f, 13,5f, 20.0f, 12,5f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 300)[1]);
	(*&Local_4 + 300)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -673,4725f, 101,3961f, 2619,555f, 0.0f, 35,20502f, 0.0f, 10.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 300)[2]);
	Local_4.f_336 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary01_set");
	(*&Local_4 + 320)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_01", 2, -903,6633f, 95,78069f, 2437,63f, 0.0f, 288,5281f, 0.0f, 10.0f, 20.0f, 35.0f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 320)[0]);
	(*&Local_4 + 320)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_02", 2, -937,5132f, 95,78069f, 2470,122f, 0.0f, 176,9309f, 0.0f, 5.0f, 20.0f, 25.0f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 320)[1]);
	(*&Local_4 + 320)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_03", 2, -884,3207f, 95,78069f, 2473,582f, 0.0f, 354,9223f, 0.0f, 5.0f, 20.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 320)[2]);
	Local_4.f_356 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary02_set");
	(*&Local_4 + 340)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_01", 2, -879,9971f, 95,78069f, 2418,414f, 0.0f, 204,3988f, 0.0f, 100.0f, 20.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_356, (*&Local_4 + 340)[0]);
	(*&Local_4 + 340)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_02", 2, -902,8494f, 95,78069f, 2487,049f, 0.0f, 111,7856f, 0.0f, 100.0f, 20.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_356, (*&Local_4 + 340)[1]);
	(*&Local_4 + 340)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_03", 2, -955,0688f, 95,78069f, 2383,427f, 0.0f, 121,9511f, 0.0f, 100.0f, 20.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_356, (*&Local_4 + 340)[2]);
	Local_4.f_384 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary03_set");
	(*&Local_4 + 360)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_02", 2, -860,9365f, 106,0211f, 2406,194f, 0.0f, 298,6861f, 0.0f, 225.0f, 40.0f, 250.0f);
	ADD_TO_VOLUME_SET(Local_4.f_384, (*&Local_4 + 360)[0]);
	(*&Local_4 + 360)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_03", 2, -1096,599f, 106,0211f, 2438,94f, 0.0f, 134,6574f, 0.0f, 100.0f, 40.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_384, (*&Local_4 + 360)[1]);
	(*&Local_4 + 360)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_04", 2, -1012,014f, 106,0211f, 2653,124f, 0.0f, 205,8177f, 0.0f, 100.0f, 40.0f, 600.0f);
	ADD_TO_VOLUME_SET(Local_4.f_384, (*&Local_4 + 360)[2]);
	(*&Local_4 + 360)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_05", 2, -763,4716f, 106,0211f, 2773,4f, 0.0f, 114,8174f, 0.0f, 100.0f, 40.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_384, (*&Local_4 + 360)[3]);
	(*&Local_4 + 360)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_06", 2, -766,6274f, 106,0211f, 2617,476f, 0.0f, 208,4689f, 0.0f, 100.0f, 40.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_384, (*&Local_4 + 360)[4]);
	Local_4.f_416 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary04_set");
	(*&Local_4 + 388)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_01", 2, -771,2646f, 106,0211f, 2515,486f, 0.0f, 110,5579f, 0.0f, 100.0f, 40.0f, 800.0f);
	ADD_TO_VOLUME_SET(Local_4.f_416, (*&Local_4 + 388)[0]);
	(*&Local_4 + 388)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_02", 2, -798,6281f, 106,0211f, 2799,974f, 0.0f, 110,5579f, 0.0f, 100.0f, 40.0f, 800.0f);
	ADD_TO_VOLUME_SET(Local_4.f_416, (*&Local_4 + 388)[1]);
	(*&Local_4 + 388)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_03", 2, -952,3527f, 106,0211f, 2697,731f, 0.0f, 27,28753f, 0.0f, 100.0f, 40.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_416, (*&Local_4 + 388)[2]);
	(*&Local_4 + 388)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_04", 2, -564,9714f, 100,7264f, 2577,972f, 0.0f, 23,91841f, 0.0f, 100.0f, 40.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_416, (*&Local_4 + 388)[3]);
	(*&Local_4 + 388)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_05", 2, -798,803f, 106,0211f, 2799,432f, 0.0f, 100,0964f, 0.0f, 200.0f, 40.0f, 500.0f);
	ADD_TO_VOLUME_SET(Local_4.f_416, (*&Local_4 + 388)[4]);
	(*&Local_4 + 388)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_06", 2, -647,6856f, 106,0211f, 2734,644f, 0.0f, 114,2559f, 0.0f, 200.0f, 40.0f, 500.0f);
	ADD_TO_VOLUME_SET(Local_4.f_416, (*&Local_4 + 388)[5]);
	Local_4.f_420 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_herd1", 2, -1028.0f, 104,4078f, 2544.0f, 0.0f, 110,5579f, 0.0f, 10.0f, 40.0f, 300.0f);
	Local_4.f_424 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_herd2", 2, -881,525f, 101,3961f, 2661,268f, 0.0f, 119,9617f, 0.0f, 10.0f, 40.0f, 300.0f);
	Local_4.f_428 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_herd3", 2, -699,9998f, 99,38824f, 2636f, 0.0f, 23,80697f, 0.0f, 10.0f, 40.0f, 300.0f);
	Local_4.f_432 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective_companion01", 3, -904,0001f, 90,35291f, 2452.0f, 0.0f, 20.0f, 0.0f, 15.0f, 20.0f, 15.0f);
	Local_4.f_436 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective_companion02", 2, -892,9882f, 90,35291f, 2442,717f, 0.0f, 97,50095f, 0.0f, 14.0f, 20.0f, 10.0f);
	Local_4.f_440 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective_companion03", 3, -909,5804f, 90,35291f, 2466,531f, 0.0f, 20.0f, 0.0f, 13,5f, 20.0f, 12,5f);
	Local_4.f_444 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01", 2, -927,6491f, 93,58073f, 2446,745f, 0.0f, 41,29619f, 0.0f, 10.0f, 10.0f, 5.0f);
	Local_4.f_448 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02", 2, -971,6417f, 94,81188f, 2457,61f, 0.0f, 31,21863f, 0.0f, 6.0f, 10.0f, 50.0f);
	Local_4.f_452 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03", 2, -655,9999f, 101,889f, 2608f, 0.0f, 209,5694f, 0.0f, 10.0f, 40.0f, 300.0f);
	Local_4.f_456 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander00", 3, -909,5804f, 90,35291f, 2466,531f, 0.0f, 33,15662f, 0.0f, 2.0f, 10.0f, 2.0f);
	Local_4.f_460 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander01", 3, -942,2333f, 90,10246f, 2440,347f, 0.0f, 16,43982f, 0.0f, 4.0f, 10.0f, 4.0f);
	Local_4.f_464 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander02", 3, -977,9823f, 91,08732f, 2462,137f, 0.0f, 16,43982f, 0.0f, 4.0f, 10.0f, 4.0f);
	Local_4.f_468 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander03", 3, -864,0001f, 100,3922f, 2692f, 0.0f, 20.0f, 0.0f, 9.0f, 10.0f, 9.0f);
	Local_4.f_472 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander04", 3, -655,9999f, 101,889f, 2608f, 0.0f, 20.0f, 0.0f, 7.0f, 10.0f, 7.0f);
	Local_4.f_476 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_gate", 2, -925,9075f, 93,58073f, 2448,82f, 0.0f, 41,29619f, 0.0f, 6.0f, 10.0f, 3,5f);
	Local_4.f_480 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_help", 2, -967,5153f, 102,192f, 2557,117f, 0.0f, 118,8787f, 0.0f, 10.0f, 40.0f, 300.0f);
	Local_4.f_484 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_cow01", 2, -866,4537f, 102,4f, 2697,982f, 0.0f, 110,5579f, 0.0f, 150.0f, 40.0f, 300.0f);
	Local_4.f_488 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_ambient_exclude01", 2, -911,7271f, 90,35291f, 2464,454f, 0.0f, -48,56495f, 0.0f, 50.0f, 20.0f, 30.0f);
	Local_4.f_492 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_ambient_exclude02", 2, -952,0465f, 90,10287f, 2446,679f, 0.0f, 28,8395f, 0.0f, 60.0f, 20.0f, 15.0f);
	Local_4.f_496 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion01", 2, -813,2411f, 92,08532f, 2408,456f, 0.0f, 72,45203f, 0.0f, 40.0f, 10.0f, 3,5f);
	Local_4.f_500 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion02", 2, -895,1879f, 90,17947f, 2432,404f, 0.0f, 18,9082f, 0.0f, 20.0f, 10.0f, 3,5f);
	Local_4.f_504 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_hitch_exclude", 2, -814,0319f, 93,9448f, 2430,977f, 0.0f, -13,24648f, 0.0f, 4.0f, 5.0f, 4,5f);
	Local_4.f_508 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_rancher_02_01", 2, -863,2034f, 101,3961f, 2670,576f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_512 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_rancher_02_02", 2, -865,6187f, 100,3922f, 2711,42f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_516 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_rancher_01_01", 2, -906,7574f, 90,35291f, 2463,95f, 0.0f, 8,591821f, 0.0f, 35.0f, 10.0f, 30.0f);
	Local_4.f_520 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_rancher_01_02", 2, -916,0542f, 90,35291f, 2470,593f, 0.0f, 246,2103f, 0.0f, 35.0f, 10.0f, 30.0f);
	Local_4.f_524 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_no_negative", 2, -703,7247f, 99,38824f, 2637,644f, 0.0f, 23,80697f, 0.0f, 10.0f, 40.0f, 300.0f);
	Local_4.f_528 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_herd_objective", 2, -859,8002f, 101,3961f, 2698,955f, 0.0f, 93,22655f, 0.0f, 10.0f, 40.0f, 300.0f);
	Local_4.f_532 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_abort_speech", 2, -895,34f, 90,35291f, 2435,026f, 0.0f, 108,8719f, 0.0f, 14.0f, 20.0f, 10.0f);
	Local_4.f_536 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 540)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -790,0705f, 93,23322f, 2413,138f, 0.0f, 145,5338f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 540)[0], Local_4.f_536);
	(*&Local_4 + 540)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -788,391f, 93,613f, 2407,269f, 0.0f, 205,9146f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 540)[1], Local_4.f_536);
	(*&Local_4 + 540)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -813,988f, 93,42173f, 2432f, 0.0f, 74,3837f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 540)[2], Local_4.f_536);
	(*&Local_4 + 540)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart01", -813,6116f, 93,36469f, 2430,024f, 0.0f, 78,15494f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 540)[3], Local_4.f_536);
	Local_4.f_560 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 564)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -900,0001f, 90,35291f, 2480.0f, 0.0f, -316,7479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[0], Local_4.f_560);
	(*&Local_4 + 564)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -900,0001f, 90,35291f, 2480.0f, 0.0f, -316,7479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[1], Local_4.f_560);
	(*&Local_4 + 564)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -912,0001f, 90,35291f, 2450,22f, 0.0f, -278,0617f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[2], Local_4.f_560);
	(*&Local_4 + 564)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -912,0001f, 90,35291f, 2450,22f, 0.0f, -275,5527f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[3], Local_4.f_560);
	(*&Local_4 + 564)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -898,5307f, 90,35291f, 2477,698f, 0.0f, -316,7479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[4], Local_4.f_560);
	(*&Local_4 + 564)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd02", -898,5307f, 90,35291f, 2477,698f, 0.0f, -316,7479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[5], Local_4.f_560);
	(*&Local_4 + 564)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEnd02", -912,0001f, 90,35291f, 2452f, 0.0f, -277,8632f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[6], Local_4.f_560);
	(*&Local_4 + 564)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01Start02", -912,1079f, 90,35207f, 2447,94f, 0.0f, -491,5498f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[7], Local_4.f_560);
	(*&Local_4 + 564)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02Start02", -928,1234f, 90,35207f, 2464,006f, 0.0f, -106,6984f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[8], Local_4.f_560);
	Local_4.f_604 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 608)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -915,4027f, 90,1029f, 2433,906f, 0.0f, -247,0593f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 608)[0], Local_4.f_604);
	(*&Local_4 + 608)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -954,7112f, 90,36862f, 2442,32f, 0.0f, 126,0789f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 608)[1], Local_4.f_604);
	(*&Local_4 + 608)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -916,4296f, 90,1029f, 2430,876f, 0.0f, -247,0593f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 608)[2], Local_4.f_604);
	(*&Local_4 + 608)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart03", -956,7614f, 90,30422f, 2443,74f, 0.0f, 172,7343f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 608)[3], Local_4.f_604);
	(*&Local_4 + 608)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01Start03", -920,0001f, 90,35291f, 2448.0f, 0.0f, -534,0908f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 608)[4], Local_4.f_604);
	(*&Local_4 + 608)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02Start03", -927,8561f, 90,35291f, 2454,233f, 0.0f, -97,33108f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 608)[5], Local_4.f_604);
	(*&Local_4 + 608)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand03Start03", -936,0359f, 90,35298f, 2432,257f, 0.0f, -520,0601f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 608)[6], Local_4.f_604);
	(*&Local_4 + 608)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand04Start03", -926,947f, 90,43262f, 2439,619f, 0.0f, -658,5801f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 608)[7], Local_4.f_604);
	Local_4.f_644 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 648)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -971,1949f, 90,22644f, 2454,363f, 0.0f, -233,5066f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 648)[0], Local_4.f_644);
	(*&Local_4 + 648)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -976,0873f, 92,45522f, 2471,195f, 0.0f, 132,5244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 648)[1], Local_4.f_644);
	(*&Local_4 + 648)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -968,4212f, 90,26598f, 2455,346f, 0.0f, -233,5066f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 648)[2], Local_4.f_644);
	(*&Local_4 + 648)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart04", -978,2433f, 92,56252f, 2473,283f, 0.0f, 131,9325f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 648)[3], Local_4.f_644);
	(*&Local_4 + 648)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand03Start04", -966,5421f, 90,41072f, 2455,722f, 0.0f, -243,4933f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 648)[4], Local_4.f_644);
	(*&Local_4 + 648)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand04Start04", -968,1437f, 90,42934f, 2453,477f, 0.0f, -224,8096f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 648)[5], Local_4.f_644);
	Local_4.f_676 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 680)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -884,0001f, 101,3961f, 2696f, 0.0f, -87,86526f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[0], Local_4.f_676);
	(*&Local_4 + 680)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd05", -884,0001f, 101,3961f, 2696f, 0.0f, -89,39442f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[1], Local_4.f_676);
	(*&Local_4 + 680)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -884,0001f, 100,7343f, 2684f, 0.0f, 125,3357f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[2], Local_4.f_676);
	(*&Local_4 + 680)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd05", -884,0001f, 100,7343f, 2684f, 0.0f, 117,3618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[3], Local_4.f_676);
	(*&Local_4 + 680)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart05", -884,0001f, 101,3961f, 2692f, 0.0f, -92,02645f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[4], Local_4.f_676);
	(*&Local_4 + 680)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart05", -888,0001f, 101,3961f, 2688f, 0.0f, 261,0919f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[5], Local_4.f_676);
	(*&Local_4 + 680)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01Start05", -852,0001f, 101,9196f, 2672f, 0.0f, 217,3248f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[6], Local_4.f_676);
	(*&Local_4 + 680)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02Start05", -868,0001f, 100,3922f, 2712f, 0.0f, -49,84656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[7], Local_4.f_676);
	(*&Local_4 + 680)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start05", -864,0001f, 102,4f, 2668f, 0.0f, 154,0399f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[8], Local_4.f_676);
	(*&Local_4 + 680)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start05", -864,0001f, 100,3922f, 2712f, 0.0f, -49,84656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 680)[9], Local_4.f_676);
	Local_4.f_724 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 728)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -667,9999f, 101,3961f, 2620f, 0.0f, -34,26667f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[0], Local_4.f_724);
	(*&Local_4 + 728)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -667,9999f, 101,3961f, 2620f, 0.0f, -33,1846f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[1], Local_4.f_724);
	(*&Local_4 + 728)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -667,9998f, 101,3961f, 2616f, 0.0f, -55,08721f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[2], Local_4.f_724);
	(*&Local_4 + 728)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -671,9998f, 101,3961f, 2616f, 0.0f, 222,38f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[3], Local_4.f_724);
	(*&Local_4 + 728)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -675,9999f, 97,38037f, 2572f, 0.0f, 365,7199f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[4], Local_4.f_724);
	(*&Local_4 + 728)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStartLast", -669,3522f, 101,3961f, 2614,329f, 0.0f, -61,07624f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[5], Local_4.f_724);
	(*&Local_4 + 728)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01StartLast", -647,9999f, 100,3922f, 2588f, 0.0f, -195,6792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[6], Local_4.f_724);
	(*&Local_4 + 728)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02StartLast", -639,9998f, 102,0983f, 2616f, 0.0f, 62,7225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[7], Local_4.f_724);
	(*&Local_4 + 728)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01StartLast", -647,9999f, 101,3961f, 2592f, 0.0f, 150,4378f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[8], Local_4.f_724);
	(*&Local_4 + 728)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02StartLast", -637,2246f, 101,3961f, 2609,225f, 0.0f, 80,42693f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[9], Local_4.f_724);
	(*&Local_4 + 728)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01EndLast", -667,9999f, 98,38434f, 2576f, 0.0f, 27,71587f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 728)[10], Local_4.f_724);
	Local_4.f_776 = CREATE_OBJECTSET_IN_LAYOUT("GringoSet01Set", Local_4, 8, 0);
	(*&Local_4 + 780)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo01_01", -866,1381f, 91,3325f, 2376,577f, 0.0f, -51,03302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[0], Local_4.f_776);
	(*&Local_4 + 780)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo01_02", -912,0001f, 90,35291f, 2445,006f, 0.0f, -51,03302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[1], Local_4.f_776);
	(*&Local_4 + 780)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo01_03", -935,0765f, 90,35291f, 2462,518f, 0.0f, -51,03302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[2], Local_4.f_776);
	(*&Local_4 + 780)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo01_04", -937,8016f, 90,33763f, 2473,722f, 0.0f, -41,98393f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[3], Local_4.f_776);
	(*&Local_4 + 780)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo01_05", -906,907f, 90,35291f, 2444,836f, 0.0f, -51,03302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[4], Local_4.f_776);
	Local_4.f_804 = CREATE_OBJECTSET_IN_LAYOUT("GringoObjectsSet", Local_4, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo01", -912,906f, 90,353f, 2445,146f, 0.0f, 11,227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_804);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo02", -935,694f, 90,353f, 2461,892f, 0.0f, 38,968f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_804);
	Local_4.f_808 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective00", -909,3908f, 90,35291f, 2466,438f, 0.0f, 41,70715f, 0.0f);
	Local_4.f_812 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective00a", -898,5307f, 90,35291f, 2477,698f, 0.0f, 44,80187f, 0.0f);
	Local_4.f_816 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective01", -942,2333f, 90,10246f, 2440,347f, 0.0f, 119,5136f, 0.0f);
	Local_4.f_820 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02", -977,9767f, 90,76653f, 2462,153f, 0.0f, 123,2146f, 0.0f);
	Local_4.f_824 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective03", -864,0001f, 100,3922f, 2692f, 0.0f, -62,63445f, 0.0f);
	Local_4.f_828 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective04", -655,9999f, 101,889f, 2608f, 0.0f, -84,04143f, 0.0f);
	*(&Local_4 + 832) = { -936,8477f, 90,25675f, 2442,305f };
	*(&Local_4 + 832 + 12) = { 0.0f, -277,8632f, 0.0f };
	Local_4.f_856 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart02", -936,8477f, 90,25675f, 2442,305f, 0.0f, -277,8632f, 0.0f);
	*(&Local_4 + 860) = { -908.0f, 90,35291f, 2468.0f };
	*(&Local_4 + 860 + 12) = { 0.0f, 52,44165f, 0.0f };
	*(&Local_4 + 884) = { -932,1596f, 90,10287f, 2436,167f };
	*(&Local_4 + 884 + 12) = { 0.0f, 119,5136f, 0.0f };
	*(&Local_4 + 908) = { -936,8477f, 90,25675f, 2442,305f };
	*(&Local_4 + 908 + 12) = { 0.0f, -281,3525f, 0.0f };
	*(&Local_4 + 932) = { -912,0001f, 90,35291f, 2452f };
	*(&Local_4 + 932 + 12) = { 0.0f, -281,3525f, 0.0f };
	Local_4.f_956 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_companion00", -812,0001f, 92,56207f, 2420,468f, 0.0f, 55,52527f, 0.0f);
	*(&Local_4 + 960) = { -912,0001f, 90,35291f, 2452f };
	*(&Local_4 + 960 + 12) = { 0.0f, 82,19491f, 0.0f };
	*(&Local_4 + 984) = { -758,4387f, 92,15525f, 2455,768f };
	*(&Local_4 + 984 + 12) = { 0.0f, 51,8428f, 0.0f };
	*(&Local_4 + 1008) = { -791,5277f, 92,36078f, 2432,45f };
	*(&Local_4 + 1008 + 12) = { 0.0f, -299,9103f, 0.0f };
	*(&Local_4 + 1032) = { -637,8218f, 101,3961f, 2606,589f };
	*(&Local_4 + 1032 + 12) = { 0.0f, -305,6723f, 0.0f };
	*(&Local_4 + 1056) = { -926,5925f, 90,35291f, 2449,808f };
	*(&Local_4 + 1056 + 12) = { 0.0f, 38,73833f, 0.0f };
	*(&Local_4 + 1080) = { -924,7756f, 90,35291f, 2448,308f };
	*(&Local_4 + 1080 + 12) = { 0.0f, 44,7481f, 0.0f };
	*(&Local_4 + 1104) = { -893,5982f, 90,35291f, 2435,188f };
	*(&Local_4 + 1104 + 12) = { 0.0f, 82,19491f, 0.0f };
	*(&Local_4 + 1128) = { -872,0001f, 90,35291f, 2432f };
	*(&Local_4 + 1128 + 12) = { 0.0f, 82,19491f, 0.0f };
	*(&Local_4 + 1152) = { -815,2798f, 93,9448f, 2430,683f };
	*(&Local_4 + 1152 + 12) = { 0.0f, 78,107f, 0.0f };
	*(&Local_4 + 1176) = { -815,323f, 94,45707f, 2431,662f };
	*(&Local_4 + 1176 + 12) = { 0.0f, 78,107f, 0.0f };
	*(&Local_4 + 1200) = { -814,8933f, 94,45707f, 2429,839f };
	*(&Local_4 + 1200 + 12) = { 0.0f, 67,277f, 0.0f };
	*(&Local_4 + 1224) = { -788,4419f, 93,32145f, 2412,204f };
	*(&Local_4 + 1224 + 12) = { 0.0f, 147,0686f, 0.0f };
	*(&Local_4 + 1248) = { -983,6157f, 99,62829f, 2511,126f };
	*(&Local_4 + 1248 + 12) = { 0.0f, -84,04143f, 0.0f };
	Local_4.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_fence_back", "lean_fence_back", -931,5532f, 90,35316f, 2455,404f, 0.0f, 65,62343f, 0.0f);
	Local_4.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand", "smoking_stand", -896,2141f, 90,35291f, 2443,797f, 0.0f, -18,93927f, 0.0f);
	Local_4.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -919,1184f, 90,359f, 2445,969f, 0.0f, -130,936f, 0.0f);
	Local_4.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", -913,9736f, 90,37537f, 2446,615f, 0.0f, 22,07937f, 0.0f);
	Local_4.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_rail_back_nospawn", "lean_rail_back_nospawn", -914,7988f, 90,36886f, 2445,999f, 0.0f, 25,66695f, 0.0f);
	Local_4.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand1", "smoking_stand", -919,9574f, 90,3483f, 2451,352f, 0.0f, -123,8117f, 0.0f);
}

void e¸E#ÊÊÄ*ÿþBÊÊÈE# Ä%ÿþBÈ.0E!ÀÄÿÿBÊÊÐE"  ,´:DH;opath_herding_middle_01 p   `ÄR BÈÈÈE( ÄJ |BÅÙE' ÄCYBÂÂÈE&ÆÄ<·BÄÄÈE& Ä5aBÆÆÈE%@Ä,ÿüBÈe¸E$Ä'ÿýBÊÊÐE#ÀÄ"ÿþBÊÊÐE"À,´:DL;opath_herdi(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231, var uParam232, var uParam233, var uParam234, var uParam235, var uParam236, var uParam237, var uParam238, var uParam239, var uParam240, var uParam241, var uParam242, var uParam243, var uParam244, var uParam245, var uParam246, var uParam247, var uParam248, var uParam249, var uParam250, var uParam251, var uParam252, var uParam253) //Position: 0x22659 / 140889
{
}

void Function_544(int iParam0, bool bParam1) //Position: 0x22A34 / 141876
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_550(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_320(iParam0))
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
	if (!Function_320(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_216();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_241();
	Function_508();
	Function_230("");
	Function_549(0);
	Function_548();
	Function_208();
	Function_207();
	ENABLE_JOURNAL_REPLAY(0);
	Function_547();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_327(0, 0x40400000);
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
	Function_546(13);
	Function_546(14);
	Function_546(25);
	Function_546(24);
	Function_546(12);
	Function_546(27);
	Function_546(26);
	Function_546(15);
	Function_545();
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

void Function_545() //Position: 0x22E58 / 142936
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

void Function_546(int iParam0) //Position: 0x22ECC / 143052
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_547() //Position: 0x22EEC / 143084
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

void Function_548() //Position: 0x22F29 / 143145
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_549(int iParam0) //Position: 0x22F3D / 143165
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_211())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_550(int iParam0, int iParam1) //Position: 0x22F72 / 143218
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
			Function_551(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_551(int iParam0) //Position: 0x22FF4 / 143348
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

void Function_552() //Position: 0x23042 / 143426
{
	return;
}

void Function_553(var uParam0, bool bParam1) //Position: 0x23048 / 143432
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
					Function_490(*uParam0, 0);
				}
			}
			else
			{
				*uParam0 = bVar0;
				Function_490(*uParam0, 0);
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
						Function_490(*uParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
					}
					*uParam0 = bVar0;
					Function_490(*uParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_554(int iParam0) //Position: 0x2310D / 143629
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
			Function_555(iParam0, 1);
			return 1;
		}
	}
	Function_555(iParam0, 0);
	return 0;
}

void Function_555(int iParam0, bool bParam1) //Position: 0x23194 / 143764
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

bool Function_556(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x231B8 / 143800
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
		Function_555(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_575(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_574(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_574(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_560(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_555(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_559(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_558(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_559(&bVar17);
														strcpy(&Var18, "", 64);
														Function_557(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_230(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_558(StackVal, iParam2, bVar17);
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
	Function_555(iParam2, 0);
	return 0;
}

void Function_557(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x23551 / 144721
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

void Function_558(var uParam0, int iParam1, bool bParam2) //Position: 0x2363C / 144956
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

void Function_559(bool bParam0) //Position: 0x236B2 / 145074
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_560(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x236D4 / 145108
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
			return Function_571(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_564(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_571(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_561(iParam0, bVar2);
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
						bVar2 = Function_571(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_561(iParam0, bVar2);
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

var Function_561(int iParam0, bool bParam1) //Position: 0x2381E / 145438
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
				bParam1 = Function_563(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_562(16);
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
				bParam1 = Function_563(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_562(256);
			}
		}
	}
	return bParam1;
}

bool Function_562(int iParam0) //Position: 0x23951 / 145745
{
	return 2 | iParam0;
}

int Function_563(int iParam0) //Position: 0x2395B / 145755
{
	return 4 | iParam0;
}

int Function_564(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23965 / 145765
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
				iParam3 = Function_570(iParam0, iParam1, bParam4);
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
			return Function_562(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_565(iParam0, iParam1, 0, bParam4);
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
			return Function_562(16);
		}
	}
	return 0;
}

int Function_565(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x23A17 / 145943
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_569(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_568(iVar0, 3, 1, bParam3))
			{
				if (!Function_574(iParam0, 8, 1))
				{
					return Function_567(64, 1024, bParam2);
				}
			}
			return Function_566(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_568(iVar0, 2, 1, bParam3))
			{
				if (!Function_574(iParam0, 32, 1))
				{
					return Function_567(64, 1024, bParam2);
				}
			}
			return Function_566(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_568(iVar0, 1, 1, bParam3))
			{
				if (!Function_574(iParam0, 64, 1))
				{
					return Function_567(64, 1024, bParam2);
				}
			}
			return Function_566(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_568(iVar0, 3, 1, bParam3))
			{
				if (!Function_574(iParam0, 128, 1))
				{
					return Function_567(64, 1024, bParam2);
				}
			}
			return Function_566(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_568(iVar0, 1, 1, bParam3))
			{
				if (!Function_574(iParam0, 1024, 1))
				{
					return Function_567(64, 1024, bParam2);
				}
			}
			return Function_566(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_568(iVar0, 1, 1, bParam3))
			{
				if (!Function_574(iParam0, 1024, 1))
				{
					return Function_567(64, 1024, bParam2);
				}
			}
			return Function_566(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_566(int iParam0, int iParam1, bool bParam2) //Position: 0x23BD1 / 146385
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_567(int iParam0, int iParam1, bool bParam2) //Position: 0x23BE6 / 146406
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_568(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x23BFB / 146427
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_569(int iParam0) //Position: 0x23C18 / 146456
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

int Function_570(var uParam0, int iParam1, bool bParam2) //Position: 0x23C87 / 146567
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_569(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_568(iVar0, 3, 1, bParam2))
			{
				if (!Function_574(uParam0, 8, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000009:
			if (Function_568(iVar0, 3, 1, bParam2))
			{
				if (!Function_574(uParam0, 8, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x0000006E:
			if (Function_568(iVar0, 2, 1, bParam2))
			{
				if (!Function_574(uParam0, 16, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x0000005B:
			if (Function_568(iVar0, 2, 1, bParam2))
			{
				if (!Function_574(uParam0, 32, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000031:
			if (Function_568(iVar0, 1, 1, bParam2))
			{
				if (!Function_574(uParam0, 64, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000007:
			if (Function_568(iVar0, 3, 1, bParam2))
			{
				if (!Function_574(uParam0, 128, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000008:
			if (Function_568(iVar0, 2, 1, bParam2))
			{
				if (!Function_574(uParam0, 256, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000014:
			if (Function_568(iVar0, 1, 1, bParam2))
			{
				if (!Function_574(uParam0, 512, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000018:
			if (Function_568(iVar0, 1, 1, bParam2))
			{
				if (!Function_574(uParam0, 512, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000057:
			if (Function_568(iVar0, 1, 1, bParam2))
			{
				if (!Function_574(uParam0, 1024, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000058:
			if (Function_568(iVar0, 1, 1, bParam2))
			{
				if (!Function_574(uParam0, 1024, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_571(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x23EA2 / 147106
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
						return Function_570(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_574(iParam0, 2, 1))
					{
						return Function_563(8);
					}
					return Function_562(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_574(iParam0, 4, 1))
					{
						return Function_563(16);
					}
					return Function_562(16);
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
							return Function_565(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_574(iParam0, 2, 1))
						{
							return Function_563(128);
						}
						return Function_562(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_574(iParam0, 4, 1))
						{
							return Function_563(256);
						}
						return Function_562(256);
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
						return Function_565(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_574(iParam0, 2, 1))
					{
						return Function_563(8);
					}
					return Function_562(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_574(iParam0, 4, 1))
					{
						return Function_563(16);
					}
					return Function_562(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_573(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_574(iParam0, 2, 1))
					{
						return Function_563(8);
					}
					return Function_562(8);
				}
				if (!Function_574(iParam0, 4, 1))
				{
					return Function_563(16);
				}
				return Function_562(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_565(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_572(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_562(128);
							}
							if (!Function_574(iParam0, 2, 1))
							{
								return Function_563(8);
							}
							return Function_562(8);
						}
						if (iParam4 == 2)
						{
							if (Function_572(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_562(256);
							}
							if (!Function_574(iParam0, 4, 1))
							{
								return Function_563(16);
							}
							return Function_562(16);
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

bool Function_572(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x24161 / 147809
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

int Function_573(int iParam0, var uParam1, bool bParam2) //Position: 0x2421A / 147994
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_569(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_568(iVar0, 2, 1, bParam2))
			{
				if (!Function_574(iParam0, 16, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x0000005B:
			if (Function_568(iVar0, 2, 1, bParam2))
			{
				if (!Function_574(iParam0, 32, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000057:
			if (Function_568(iVar0, 1, 1, bParam2))
			{
				if (!Function_574(iParam0, 1024, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		case 0x00000058:
			if (Function_568(iVar0, 1, 1, bParam2))
			{
				if (!Function_574(iParam0, 1024, 1))
				{
					return Function_563(64);
				}
			}
			return Function_562(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_574(int iParam0, bool bParam1, bool bParam2) //Position: 0x2432E / 148270
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

int Function_575(int iParam0) //Position: 0x24356 / 148310
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

bool Function_576(bool bParam0, int iParam1) //Position: 0x24387 / 148359
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
	Function_577(bVar0, iVar1);
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

void Function_577(bool bParam0, bool bParam1) //Position: 0x2440A / 148490
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

bool Function_578(int iParam0) //Position: 0x24439 / 148537
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_579(int iParam0) //Position: 0x24457 / 148567
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

var Function_580(int iParam0) //Position: 0x24487 / 148615
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_581(bool bParam0) //Position: 0x244F3 / 148723
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

void Function_582(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x2455F / 148831
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

