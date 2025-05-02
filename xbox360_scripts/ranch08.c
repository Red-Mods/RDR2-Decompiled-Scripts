//Decompiled with MagicRDR v1.0
//Function Count : 619
//Statics Count : 757
//Natives Count : 735
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1337> Local_4 = { 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_341 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_406 = 99;
	iLocal_407 = 6;
	Local_399 = 1000;
	while (Function_268())
	{
		Function_223();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	bool bVar0;
	
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_410);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_411);
	if (IS_ACTOR_VALID(bLocal_410))
	{
		bVar0 = GET_MOUNT(bLocal_410);
		if (IS_ACTOR_VALID(bVar0))
		{
			DESTROY_ACTOR(bVar0);
		}
		TREAT_AMBIENT_SPEECH_AS_SCRIPTED(bLocal_410, 1);
	}
	Function_220(3, 1, 0, 1, 1);
	Function_219(bLocal_340);
	Function_219(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_218();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_217();
	Function_190(bLocal_429, 1, 0, 1, 1, 1, 1, 1);
	Function_189();
	Function_188();
	Function_187();
	Function_183(4, 0, 0);
	Function_170();
	Function_166(&iLocal_348);
	Function_164();
	if (IS_ITERATOR_VALID(bLocal_409))
	{
		DESTROY_ITERATOR(bLocal_409);
	}
	RELEASE_LAYOUT_REF(bLocal_340);
	if (bLocal_428)
	{
		Function_24(Local_341, 1, 1, 1, 0);
	}
	else if (bLocal_429)
	{
		Function_20(Local_341);
	}
	else
	{
		Function_2(Local_341);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x10B / 267
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x12C / 300
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x147 / 327
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x168 / 360
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x17E / 382
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

void Function_7(int iParam0) //Position: 0x21A / 538
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x23B / 571
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

void Function_9() //Position: 0x281 / 641
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x29A / 666
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x2ED / 749
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

struct<16> Function_12(int iParam0) //Position: 0x411 / 1041
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x436 / 1078
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x456 / 1110
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x46D / 1133
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x488 / 1160
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6CF / 1743
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x6F8 / 1784
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

bool Function_19(int iParam0) //Position: 0x71C / 1820
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x731 / 1841
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x74F / 1871
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

struct<16> Function_22(int iParam0) //Position: 0x7F5 / 2037
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x81F / 2079
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA75 / 2677
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

void Function_25() //Position: 0xB62 / 2914
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

int Function_26(int iParam0, bool bParam1) //Position: 0xB92 / 2962
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

int Function_27(int iParam0) //Position: 0xBCF / 3023
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xBE9 / 3049
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xBFF / 3071
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEF6 / 3830
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

void Function_31(char* cParam0, int iParam1) //Position: 0xF62 / 3938
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xF99 / 3993
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

bool Function_33(var uParam0, int iParam1) //Position: 0x1011 / 4113
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1024 / 4132
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

int Function_35(int iParam0) //Position: 0x10C5 / 4293
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1102 / 4354
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1115 / 4373
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

void Function_38(int iParam0, int iParam1) //Position: 0x1327 / 4903
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x1361 / 4961
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

bool Function_40() //Position: 0x13A3 / 5027
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x13AC / 5036
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

void Function_42() //Position: 0x13FD / 5117
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

void Function_43() //Position: 0x1430 / 5168
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

void Function_44() //Position: 0x1536 / 5430
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

void Function_45() //Position: 0x1569 / 5481
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

void Function_46() //Position: 0x16F7 / 5879
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

void Function_47() //Position: 0x18AB / 6315
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x18B9 / 6329
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

var Function_49() //Position: 0x1AAA / 6826
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1ABF / 6847
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B5A / 7002
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1DF5 / 7669
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

var Function_53() //Position: 0x2422 / 9250
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x242A / 9258
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x243B / 9275
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x2530 / 9520
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2549 / 9545
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x25AE / 9646
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x25C0 / 9664
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x25D2 / 9682
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

int Function_61(int iParam0) //Position: 0x2702 / 9986
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2711 / 10001
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x274A / 10058
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2787 / 10119
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2921 / 10529
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

int Function_66(bool bParam0) //Position: 0x2B3B / 11067
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2B7C / 11132
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

struct<8> Function_68() //Position: 0x2C05 / 11269
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

struct<8> Function_69() //Position: 0x2C9C / 11420
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

void Function_70() //Position: 0x2D1B / 11547
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D41 / 11585
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

void Function_72() //Position: 0x2F4B / 12107
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

bool Function_73(vector3 vParam0) //Position: 0x2FEC / 12268
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3004 / 12292
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

vector3 Function_75() //Position: 0x30EB / 12523
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x30F4 / 12532
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3103 / 12547
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3119 / 12569
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x31E0 / 12768
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x31FD / 12797
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

bool Function_81(int iParam0) //Position: 0x36D9 / 14041
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x36EF / 14063
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x370E / 14094
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3728 / 14120
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x378F / 14223
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

void Function_86() //Position: 0x39AF / 14767
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A2F / 14895
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D81 / 15745
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

int Function_89(int iParam0) //Position: 0x3E04 / 15876
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E1E / 15902
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E4C / 15948
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x40EA / 16618
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

void Function_93(int iParam0, int iParam1) //Position: 0x42AD / 17069
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x450B / 17675
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

int Function_95() //Position: 0x4690 / 18064
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

void Function_96() //Position: 0x472F / 18223
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

void Function_97(int iParam0) //Position: 0x47DE / 18398
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

var Function_98(int iParam0) //Position: 0x483C / 18492
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

int Function_99(int iParam0, bool bParam1) //Position: 0x48CB / 18635
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

var Function_100(int iParam0, int iParam1) //Position: 0x4A68 / 19048
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

void Function_101() //Position: 0x4AA9 / 19113
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4ABF / 19135
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4AFF / 19199
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B3F / 19263
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B4E / 19278
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

int Function_106(int iParam0) //Position: 0x4D16 / 19734
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

var Function_107() //Position: 0x4DAB / 19883
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4DD0 / 19920
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x528B / 21131
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

var Function_110(int iParam0) //Position: 0x55A0 / 21920
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5643 / 22083
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

int Function_112(int iParam0, bool bParam1) //Position: 0x583E / 22590
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x59DA / 23002
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5AA5 / 23205
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

void Function_115(int iParam0) //Position: 0x6395 / 25493
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6504 / 25860
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x660A / 26122
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(bool bParam0) //Position: 0x6637 / 26167
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

var Function_119(vector3 vParam0) //Position: 0x668E / 26254
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x66DC / 26332
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6730 / 26416
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

void Function_122() //Position: 0x68CE / 26830
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x68D4 / 26836
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6978 / 27000
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x69CD / 27085
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x69E3 / 27107
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6A34 / 27188
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

void Function_128(var uParam0, int iParam1) //Position: 0x6A61 / 27233
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A70 / 27248
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6A87 / 27271
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6A96 / 27286
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6BE0 / 27616
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

bool Function_133() //Position: 0x6C2B / 27691
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6C58 / 27736
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

int Function_135(int iParam0) //Position: 0x6E08 / 28168
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6E5F / 28255
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

var Function_137(int iParam0) //Position: 0x6E84 / 28292
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6EDA / 28378
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

bool Function_139(bool bParam0) //Position: 0x6F39 / 28473
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F45 / 28485
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6F61 / 28513
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

int Function_142(int iParam0, int iParam1) //Position: 0x6FB3 / 28595
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

int Function_143(int iParam0, int iParam1) //Position: 0x7026 / 28710
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7082 / 28802
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

int Function_145(int iParam0, int iParam1) //Position: 0x70F3 / 28915
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x714D / 29005
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x73F9 / 29689
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

void Function_148(int iParam0, bool bParam1) //Position: 0x7688 / 30344
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

void Function_149() //Position: 0x76E7 / 30439
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

var Function_150(int iParam0, int iParam1) //Position: 0x7762 / 30562
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

int Function_151(int iParam0) //Position: 0x8354 / 33620
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x8369 / 33641
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x83B8 / 33720
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x83C5 / 33733
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8416 / 33814
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

bool Function_156(int iParam0, int iParam1) //Position: 0x8484 / 33924
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8497 / 33943
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

var Function_158(int iParam0) //Position: 0x8596 / 34198
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

bool Function_159(var uParam0, int iParam1) //Position: 0x85EE / 34286
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x860A / 34314
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

bool Function_161(int iParam0) //Position: 0x8661 / 34401
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x8673 / 34419
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

void Function_163(var uParam0) //Position: 0x86A7 / 34471
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
			Function_183(4, 0, 0);
		}
	}
	return;
}

void Function_164() //Position: 0x870E / 34574
{
	Function_165();
	return;
}

void Function_165() //Position: 0x8717 / 34583
{
	Function_166(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_166(int iParam0) //Position: 0x8729 / 34601
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_167(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_167(var uParam0, int iParam1) //Position: 0x874F / 34639
{
	if (Function_169(uParam0[iParam13], 4))
	{
		if (Function_169(uParam0[iParam13], 1))
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
			Function_168(uParam0[iParam13], 1);
			Function_168(uParam0[iParam13], 2);
			Function_168(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_168(var uParam0, int iParam1) //Position: 0x887D / 34941
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_169(int iParam0, int iParam1) //Position: 0x8897 / 34967
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_170() //Position: 0x88B4 / 34996
{
	SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
	SET_FORCED_LOOK_ENABLE(Global_34573, 1);
	UNK_0x6F37F42C(Global_34573);
	STREAMING_UNLOAD_BOUNDS();
	UI_HIDE("RacePosition");
	DECOR_REMOVE(Global_34573, "herding");
	if (IS_BLIP_VALID(bLocal_709))
	{
		REMOVE_BLIP(bLocal_709);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_715))
	{
		DESTROY_OBJECT(Local_715);
	}
	if (IS_OBJECT_VALID(bLocal_632))
	{
		DESTROY_OBJECT(bLocal_632);
	}
	if (IS_OBJECT_VALID(bLocal_631))
	{
		DESTROY_OBJECT(bLocal_631);
	}
	if (IS_ACTOR_VALID(bLocal_710))
	{
		RELEASE_ACTOR(bLocal_710);
	}
	if (SQUAD_IS_VALID(Local_715.f_44))
	{
		Function_181(&Local_715 + 44, 0, 0);
		RELEASE_OBJECT_REF(Local_715.f_44);
	}
	if (SQUAD_IS_VALID(Local_715.f_48))
	{
		Function_181(&Local_715 + 48, 0, 0);
		RELEASE_OBJECT_REF(Local_715.f_48);
	}
	if (SQUAD_IS_VALID(Local_715.f_52))
	{
		Function_181(&Local_715 + 52, 0, 0);
		RELEASE_OBJECT_REF(Local_715.f_52);
	}
	if (SQUAD_IS_VALID(Local_715.f_56))
	{
		Function_181(&Local_715 + 56, 0, 0);
		RELEASE_OBJECT_REF(Local_715.f_56);
	}
	if (SQUAD_IS_VALID(bLocal_712))
	{
		Function_181(&bLocal_712, 0, 0);
		RELEASE_OBJECT_REF(bLocal_712);
	}
	if (SQUAD_IS_VALID(Local_4.f_224))
	{
		Function_172(Local_4.f_224, 0, 0, 2, 1);
		RELEASE_OBJECT_REF(Local_4.f_224);
	}
	if (SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_181(&Local_4 + 176, 0, 0);
		RELEASE_OBJECT_REF(Local_4.f_176);
	}
	if (SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_181(&Local_4 + 200, 0, 0);
		RELEASE_OBJECT_REF(Local_4.f_200);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
	{
		MEMORY_PREFER_RIDING((*&Local_4 + 140)[02], false);
		Function_171((*&Local_4 + 140)[02], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
	{
		MEMORY_PREFER_RIDING((*&Local_4 + 140)[12], false);
		Function_171((*&Local_4 + 140)[12], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	if (IS_OBJECT_VALID(bLocal_630))
	{
		DESTROY_OBJECT(bLocal_630);
	}
	return;
}

void Function_171(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x8A96 / 35478
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

int Function_172(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8B9E / 35742
{
	bool bVar0;
	bool bVar1;
	void fVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		fVar2 = SQUAD_GET_SIZE(bParam0);
		bVar1 = false;
		while (bVar1 < (fVar2 - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_173(bVar0, uParam1, uParam2, uParam3, uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(bParam0);
		return 1;
	}
	return 0;
}

int Function_173(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x8BF6 / 35830
{
	char* cVar0[32];
	
	Function_180();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_179(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_178(bParam0, 0);
	Function_177(bParam0, uParam1);
	Function_176(bParam0, uParam2);
	Function_175(bParam0, uParam3);
	if (Function_174(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_174(bool bParam0) //Position: 0x8E44 / 36420
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_175(bool bParam0, bool bParam1) //Position: 0x8E67 / 36455
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_176(bool bParam0, bool bParam1) //Position: 0x8E8A / 36490
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_177(bool bParam0, bool bParam1) //Position: 0x8EAE / 36526
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_178(bool bParam0, bool bParam1) //Position: 0x8ED4 / 36564
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_179(bool bParam0) //Position: 0x8EF7 / 36599
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_180() //Position: 0x8F15 / 36629
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8F5F / 36703
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
				if (!Function_182(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_182(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x8FDB / 36827
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8FF5 / 36853
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
		Function_184(Global_16524, bVar0, 1);
	}
	return;
}

void Function_184(bool bParam0, bool bParam1, bool bParam2) //Position: 0x90D2 / 37074
{
	int iVar0;
	
	Function_186(bParam0);
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
	Function_185();
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

void Function_185() //Position: 0x924B / 37451
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_186(int iParam0) //Position: 0x9257 / 37463
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

void Function_187() //Position: 0x929D / 37533
{
	Global_16517.f_8 = -1.0f;
	Global_16517.f_12 = -1.0f;
	Global_16517.f_16 = 0;
	return;
}

void Function_188() //Position: 0x92B5 / 37557
{
	Global_16524.f_24 = -1.0f;
	return;
}

void Function_189() //Position: 0x92C1 / 37569
{
	Global_16524.f_28 = -1.0f;
	return;
}

void Function_190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x92CD / 37581
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_216());
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
	Function_215();
	CLEAR_PRINTED_OBJECTIVE();
	Function_214();
	Function_212(0);
	Function_211();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_210();
	Function_209();
	Function_215();
	ENABLE_JOURNAL_REPLAY(1);
	Function_208(1);
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
		Function_207(Global_34573);
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
	Function_206(Global_28178);
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
	Function_205(1178687);
	Function_203(33039);
	Function_202(0x218003f);
	Function_201(4194560);
	Function_200();
	Function_199();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_196(0, 1, 1);
	}
	else
	{
		Function_196(0, 1, 1);
	}
	Function_195();
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
	Function_191();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_191() //Position: 0x94BE / 38078
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
		if (Function_194() > 3)
		{
			bVar0 *= 2;
		}
		Function_192(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_192(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x9514 / 38164
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_193((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_193(bool bParam0) //Position: 0x955A / 38234
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_194() //Position: 0x957F / 38271
{
	return Global_12976.f_156;
}

void Function_195() //Position: 0x958A / 38282
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

void Function_196(int iParam0, bool bParam1, int iParam2) //Position: 0x95B4 / 38324
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
			Function_197(Global_29006);
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

void Function_197(int iParam0) //Position: 0x96BF / 38591
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_198())
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

bool Function_198() //Position: 0x973E / 38718
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

void Function_199() //Position: 0x979B / 38811
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

void Function_200() //Position: 0x97C1 / 38849
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

void Function_201(int iParam0) //Position: 0x97E7 / 38887
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_202(int iParam0) //Position: 0x9804 / 38916
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_203(int iParam0) //Position: 0x9817 / 38935
{
	Function_204(&Global_28842, iParam0);
	return;
}

void Function_204(var uParam0, int iParam1) //Position: 0x9825 / 38949
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_205(bool bParam0) //Position: 0x9840 / 38976
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_206(int iParam0) //Position: 0x986D / 39021
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

void Function_207(bool bParam0) //Position: 0x9934 / 39220
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

void Function_208(bool bParam0) //Position: 0x99B0 / 39344
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

void Function_209() //Position: 0x9A24 / 39460
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

void Function_210() //Position: 0x9A65 / 39525
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

void Function_211() //Position: 0x9AA6 / 39590
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_212(int iParam0) //Position: 0x9ABA / 39610
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_213())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_213() //Position: 0x9AF6 / 39670
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

void Function_214() //Position: 0x9B1B / 39707
{
	Global_8722 = 0.0f;
	return;
}

void Function_215() //Position: 0x9B25 / 39717
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

int Function_216() //Position: 0x9B50 / 39760
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_217() //Position: 0x9B6A / 39786
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

void Function_218() //Position: 0x9C84 / 40068
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_219(bool bParam0) //Position: 0x9C8D / 40077
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

int Function_220(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9CE5 / 40165
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
		Function_222(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_221(StackVal);
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

void Function_221(bool bParam0) //Position: 0xA003 / 40963
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

void Function_222(bool bParam0) //Position: 0xA02F / 41007
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_223() //Position: 0xA044 / 41028
{
	var uVar0[8];
	int iVar9;
	
	if (Function_267())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02: Stragglers";
		uVar0[4] = "Stage 03: Stampede";
		uVar0[5] = "Stage 04: Round 'em up";
		uVar0[6] = "Stage 05: Back to the Ranch";
		uVar0[7] = "Last Stage";
		iVar9 = Function_253(&uLocal_392, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_252(&iVar9, &iLocal_406, &iLocal_407, &Local_399))
		{
			Function_245();
			Function_244();
		}
		if (iVar9 == 0)
		{
			Function_245();
			Function_244();
			Function_243(&bLocal_428, 8);
		}
		else if (iVar9 == 1)
		{
			Function_245();
			Function_244();
			Function_238(iLocal_406);
			Function_234(StackVal, StackVal, 5, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
		}
		else if (iVar9 == 2)
		{
			Function_245();
			Function_244();
			Function_229(&bLocal_430, 4);
		}
		else if (iVar9 == 3)
		{
			Function_227();
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_225(&bLocal_412);
			iLocal_406 = 1;
			iLocal_407 = 0;
			Local_399 = 1000;
		}
		else if (iVar9 == 4)
		{
			Function_227();
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_225(&bLocal_412);
			iLocal_406 = 2;
			iLocal_407 = 0;
			Local_399 = 1000;
		}
		else if (iVar9 == 5)
		{
			Function_224(Local_341, 21);
			Function_227();
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_225(&bLocal_412);
			iLocal_406 = 3;
			iLocal_407 = 0;
			Local_399 = 1000;
		}
		else if (iVar9 == 6)
		{
			Function_224(Local_341, 21);
			Function_227();
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_225(&bLocal_412);
			iLocal_406 = 4;
			iLocal_407 = 0;
			Local_399 = 1000;
		}
		else if (iVar9 == 7)
		{
			Function_224(Local_341, 21);
			Function_227();
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_225(&bLocal_412);
			iLocal_406 = 101;
			iLocal_407 = 0;
			Local_399 = 1000;
		}
	}
	return;
}

void Function_224(int iParam0, bool bParam1) //Position: 0xA2B7 / 41655
{
	if (!Function_18(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = bParam1;
	return;
}

void Function_225(bool bParam0) //Position: 0xA2D2 / 41682
{
	Function_226(bParam0, 0.0f);
	return;
}

void Function_226(int iParam0, float fParam1) //Position: 0xA2DE / 41694
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_227() //Position: 0xA2FF / 41727
{
	STREAMING_UNLOAD_BOUNDS();
	UI_HIDE("RacePosition");
	DECOR_REMOVE(Global_34573, "herding");
	if (IS_BLIP_VALID(bLocal_709))
	{
		REMOVE_BLIP(bLocal_709);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_715))
	{
		DESTROY_OBJECT(Local_715);
	}
	if (IS_OBJECT_VALID(bLocal_632))
	{
		DESTROY_OBJECT(bLocal_632);
	}
	if (IS_OBJECT_VALID(bLocal_631))
	{
		DESTROY_OBJECT(bLocal_631);
	}
	if (IS_ACTOR_VALID(bLocal_710))
	{
		DESTROY_ACTOR(bLocal_710);
	}
	if (SQUAD_IS_VALID(Local_715.f_44))
	{
		Function_228(&Local_715 + 44);
		DESTROY_OBJECT(Local_715.f_44);
	}
	if (SQUAD_IS_VALID(Local_715.f_48))
	{
		Function_228(&Local_715 + 48);
		DESTROY_OBJECT(Local_715.f_48);
	}
	if (SQUAD_IS_VALID(Local_715.f_52))
	{
		Function_228(&Local_715 + 52);
		DESTROY_OBJECT(Local_715.f_52);
	}
	if (SQUAD_IS_VALID(Local_715.f_56))
	{
		Function_228(&Local_715 + 56);
		DESTROY_OBJECT(Local_715.f_56);
	}
	if (SQUAD_IS_VALID(bLocal_712))
	{
		Function_228(&bLocal_712);
		DESTROY_OBJECT(bLocal_712);
	}
	if (SQUAD_IS_VALID(Local_4.f_160))
	{
		Function_228(&Local_4 + 160);
		DESTROY_OBJECT(Local_4.f_160);
	}
	if (SQUAD_IS_VALID(Local_4.f_224))
	{
		Function_228(&Local_4 + 224);
		DESTROY_OBJECT(Local_4.f_224);
	}
	if (SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_228(&Local_4 + 176);
		DESTROY_OBJECT(Local_4.f_176);
	}
	if (SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_228(&Local_4 + 200);
		DESTROY_OBJECT(Local_4.f_200);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
	if (IS_OBJECT_VALID(bLocal_431))
	{
		DESTROY_OBJECT(bLocal_431);
	}
	if (IS_OBJECT_VALID(bLocal_630))
	{
		DESTROY_OBJECT(bLocal_630);
	}
	return;
}

void Function_228(bool bParam0) //Position: 0xA48F / 42127
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

void Function_229(bool bParam0, int iParam1) //Position: 0xA4D6 / 42198
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(iParam1);
	*bParam0 = 1;
	return;
}

void Function_230(int iParam0) //Position: 0xA4F9 / 42233
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_233("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_232(2) || Function_232(8)) || Function_232(9)) || Function_232(10))
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
		Function_233("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_233("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_233("");
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

void Function_231() //Position: 0xA5F0 / 42480
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_232(int iParam0) //Position: 0xA5FC / 42492
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

void Function_233(bool bParam0) //Position: 0xA632 / 42546
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_234(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA69C / 42652
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_235(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_230(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_235(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA6D9 / 42713
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_237(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_236(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_236(int iParam0) //Position: 0xA75C / 42844
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

var Function_237(vector3 vParam0, bool bParam3) //Position: 0xAC0A / 44042
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

vector3 Function_238(int iParam0) //Position: 0xAC75 / 44149
{
	Function_239(iParam0 + 1);
	return StackVal, StackVal, Function_239(iParam0 + 1);
}

vector3 Function_239(int iParam0) //Position: 0xAC82 / 44162
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_240((*&Local_4 + 448)[0]);
			return StackVal, StackVal, Function_240((*&Local_4 + 448)[0]);
			break;
		
		case 0x00000001:
			Function_240((*&Local_4 + 492)[0]);
			return StackVal, StackVal, Function_240((*&Local_4 + 492)[0]);
			break;
		
		case 0x00000002:
			Function_240((*&Local_4 + 516)[0]);
			return StackVal, StackVal, Function_240((*&Local_4 + 516)[0]);
			break;
		
		case 0x00000003:
			Function_240((*&Local_4 + 564)[0]);
			return StackVal, StackVal, Function_240((*&Local_4 + 564)[0]);
			break;
		
		case 0x00000004:
			Function_240((*&Local_4 + 604)[0]);
			return StackVal, StackVal, Function_240((*&Local_4 + 604)[0]);
			break;
		
		default:
			Function_240((*&Local_4 + 644)[0]);
			return StackVal, StackVal, Function_240((*&Local_4 + 644)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_240((*&Local_4 + 448)[0]);
	return StackVal, StackVal, Function_240((*&Local_4 + 448)[0]);
}

vector3 Function_240(bool bParam0) //Position: 0xAD76 / 44406
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

int Function_241(int iParam0) //Position: 0xAD9D / 44445
{
	return Function_242(iParam0 + 1);
}

int Function_242(int iParam0) //Position: 0xADAA / 44458
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 448)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 492)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 516)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 564)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 604)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 644)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 448)[0]);
}

void Function_243(bool bParam0, int iParam1) //Position: 0xAE3A / 44602
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(iParam1);
	*bParam0 = 1;
	return;
}

void Function_244() //Position: 0xAE5D / 44637
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_245() //Position: 0xAE72 / 44658
{
	Function_247();
	Function_246(10, 3);
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0xAE81 / 44673
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

void Function_247() //Position: 0xAFB8 / 44984
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_251())
	{
		Function_250(10, 3);
	}
	else
	{
		Function_248();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_248() //Position: 0xB003 / 45059
{
	Function_249(25, 2);
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0xB00F / 45071
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

void Function_250(int iParam0, int iParam1) //Position: 0xB20D / 45581
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

bool Function_251() //Position: 0xB344 / 45892
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

bool Function_252(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB3AB / 45995
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_245();
			Function_244();
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
		Function_233("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB451 / 46161
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_266(&Var15, &Var0);
	uVar20 = Function_265(*uParam1, &Var15);
	Function_264(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_263(uParam0, uVar20);
	Function_261(StackVal, uParam0, Var15.f_12);
	Function_259(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_258(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_255(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_254(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_254(int iParam0, int iParam1, int iParam2) //Position: 0xB518 / 46360
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

bool Function_255(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB574 / 46452
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
				Function_257(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_257(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_254(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_256(bParam1->f_32);
	}
	else
	{
		Function_256(bParam1->f_32);
	}
	return 0;
}

void Function_256(bool bParam0) //Position: 0xB6FA / 46842
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

void Function_257(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB734 / 46900
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

var Function_258(int iParam0, var uParam1, int iParam2) //Position: 0xB7E2 / 47074
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_259(var uParam0, int iParam1, int iParam2) //Position: 0xB806 / 47110
{
	switch (Function_260())
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

int Function_260() //Position: 0xB8A2 / 47266
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

void Function_261(var uParam0, int iParam1, int iParam2) //Position: 0xB8DE / 47326
{
	switch (Function_262(uParam0))
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

int Function_262(bool bParam0) //Position: 0xB976 / 47478
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

var Function_263(var uParam0, int iParam1) //Position: 0xBAC1 / 47809
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

void Function_264(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBC10 / 48144
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

var Function_265(int iParam0, int iParam1) //Position: 0xBCA3 / 48291
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_266(var uParam0, var uParam1) //Position: 0xBCBD / 48317
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

bool Function_267() //Position: 0xBD0B / 48395
{
	return Global_30920;
}

bool Function_268() //Position: 0xBD14 / 48404
{
	if (IS_EXITFLAG_SET())
	{
		Function_238(iLocal_406);
		Function_234(StackVal, StackVal, 4, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
		return 0;
	}
	Function_618(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_341, iLocal_406, iLocal_407, &bLocal_430, &bLocal_428, &bLocal_429);
	if (iLocal_406 == 99 && iLocal_406 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_238(iLocal_406);
			Function_234(StackVal, StackVal, 1, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_238(iLocal_406);
			Function_234(StackVal, StackVal, 2, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
			return 1;
		}
		if (Function_617(2048))
		{
			Function_238(iLocal_406);
			Function_234(StackVal, StackVal, 3, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
			return 1;
		}
		if (Function_597(&Local_473, &uLocal_433, &uLocal_610, bLocal_409, iLocal_432))
		{
			if (Function_595(&uLocal_610))
			{
				Function_238(iLocal_406);
				Function_234(StackVal, StackVal, 5, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
				return 1;
			}
		}
		if (SQUAD_IS_VALID(Local_715.f_44))
		{
			if (iLocal_407 > 6)
			{
				if (SQUAD_IS_VALID(Local_715.f_56))
				{
					if (SQUAD_IS_VALID(Local_715.f_48))
					{
						if (SQUAD_IS_VALID(Local_715.f_52))
						{
							if (!iLocal_407 != 106)
							{
								bLocal_618 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_56)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_52));
								if (iLocal_406 != 0 || iLocal_406 != 1)
								{
									bLocal_619 = (11 - bLocal_618);
								}
								else
								{
									bLocal_619 = (21 - bLocal_618);
								}
								bLocal_620 = ROUND((0,6f * IntToFloat(bLocal_618)));
								if (bLocal_619 > bLocal_620)
								{
									PRINTINT(bLocal_618);
									PRINTNL();
									PRINTINT(bLocal_619);
									PRINTNL();
									PRINTINT(bLocal_620);
									PRINTNL();
									if (iLocal_406 == 2)
									{
										Function_233("nHerd_dead");
										Function_238(iLocal_406);
										Function_234(StackVal, StackVal, 5, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
										return 1;
									}
									Function_233("nHerd_lost");
									Function_238(iLocal_406);
									Function_234(StackVal, StackVal, 5, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
									return 1;
									return 1;
								}
							}
						}
					}
				}
			}
		}
		Function_594(&bLocal_411, bLocal_410);
		Function_593();
	}
	switch (iLocal_406)
	{
		case 0x00000063:
			Function_533();
			break;
		
		case 0x00000000:
			Function_506();
			break;
		
		case 0x00000001:
			Function_495();
			break;
		
		case 0x00000002:
			Function_460();
			break;
		
		case 0x00000003:
			Function_446();
			break;
		
		case 0x00000004:
			Function_347();
			break;
		
		case 0x00000065:
			Function_271();
			break;
		
		case 0x00000064:
			if (Function_270(&bLocal_429))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_269(&iLocal_406, &iLocal_407, &Local_399))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_428)
	{
		Function_243(&bLocal_428, 8);
		Function_1();
		return 0;
	}
	if (bLocal_430)
	{
		Function_229(&bLocal_430, 4);
		Function_1();
		return 0;
	}
	if (bLocal_429 && iLocal_406 == 100)
	{
		Function_238(iLocal_406);
		Function_234(StackVal, StackVal, 5, &bLocal_429, &iLocal_406, Function_241(iLocal_406), Function_238(iLocal_406), 0);
	}
	return 1;
}

bool Function_269(var uParam0, var uParam1, int iParam2) //Position: 0xBFF5 / 49141
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

bool Function_270(int iParam0) //Position: 0xC036 / 49206
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_271() //Position: 0xC049 / 49225
{
	Function_346(bLocal_340);
	switch (iLocal_407)
	{
		case 0x00000000:
			Function_342(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_410, GET_ACTOR_MAX_HEALTH(bLocal_410));
			bLocal_616 = false;
			if (IS_ACTOR_VALID(bLocal_411))
			{
				TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_411, true);
			}
			if (IS_ACTOR_VALID(bLocal_410))
			{
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_410, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_408 = Global_30668[0];
				if (!Function_333(bLocal_408))
				{
					Function_331(&Local_341);
				}
				Function_330(Global_34573, (*&Local_4 + 644)[0], 1, 1, 1);
				Function_225(&bLocal_412);
				iLocal_407 = 1;
			}
			else
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_327(&uLocal_634))
			{
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				Function_326(0,65f);
				Function_325(0,01f);
				Function_323(4, 1);
				bLocal_618 = Function_322(Local_341);
				PRINTINT(bLocal_618);
				PRINTNL();
				bLocal_619 = (21 - bLocal_618);
				PRINTINT(bLocal_619);
				PRINTNL();
				Function_303();
				if (iLocal_421[4] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_411))
						{
							Function_330(bLocal_411, (*&Local_4 + 644)[13], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_410))
					{
						Function_330(bLocal_410, (*&Local_4 + 644)[1], 1, 1, 1);
						if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
						{
							Function_330((*&Local_4 + 164)[02], (*&Local_4 + 644)[14], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
							}
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_160))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_160);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
				}
				if (SQUAD_IS_VALID(Local_715.f_56))
				{
					Function_302(Local_715.f_56, Local_715.f_44);
				}
				if (SQUAD_IS_VALID(Local_715.f_52))
				{
					Function_302(Local_715.f_52, Local_715.f_44);
				}
				if (SQUAD_IS_VALID(Local_715.f_48))
				{
					Function_302(Local_715.f_48, Local_715.f_44);
				}
				if (SQUAD_IS_VALID(bLocal_712))
				{
					SQUAD_GOALS_CLEAR(bLocal_712);
					Function_301(bLocal_712);
					Function_300(bLocal_712);
					Function_302(bLocal_712, Local_715.f_44);
				}
				if (SQUAD_IS_VALID(Local_715.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_44);
					Function_301(Local_715.f_44);
					Function_300(Local_715.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_368, -1.0f);
				}
				Function_225(&bLocal_412);
				iLocal_407 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_272())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_225(&bLocal_412);
				iLocal_407 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				PRINTINT(Local_715.f_76);
				PRINTNL();
				PRINTINT(Local_715.f_80);
				PRINTNL();
				bLocal_622 = Local_715.f_76;
				Global_34165.f_124 = bLocal_622;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_623 = Local_715.f_80;
				Global_34165.f_128 = bLocal_623;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_85(355, bLocal_618, 1, 0);
				if (bLocal_618 == 21)
				{
					Function_109(200, 1, 0);
				}
				bLocal_428 = true;
			}
			break;
	}
	return;
}

bool Function_272() //Position: 0xC3E1 / 50145
{
	var uVar0;
	
	if (Function_299(&Local_399 + 4))
	{
		if (Function_297(&Local_399 + 4) <= 2.0f)
		{
			Function_295(&Local_399, 1, 0);
		}
	}
	switch (Local_399)
	{
		case 0x000003E8:
			Function_291(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 6, bLocal_410);
				Local_399.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_399.f_16 = Function_285(Local_4, 0, Global_34573, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_399.f_16))
				{
				}
				else
				{
					LOG_ERROR("ranch08_cutsceneLast - Failed to create ranch08_cutsceneLast_cutscene");
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_411))
				{
					Function_330(bLocal_411, (*&Local_4 + 644)[13], 1, 1, 1);
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
					{
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_410))
			{
				Function_330(bLocal_410, (*&Local_4 + 644)[1], 1, 1, 1);
				if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
				{
					Function_330((*&Local_4 + 164)[02], (*&Local_4 + 644)[14], 1, 1, 1);
					if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
					{
						ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
					}
				}
			}
			Local_399 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_399.f_16), false))
			{
				Function_284(Global_34573, 1, 1);
				Function_284(bLocal_410, 1, 1);
				if (SQUAD_IS_VALID(Local_4.f_160))
				{
					Function_282((*&Local_4 + 140)[02], (*&Local_4 + 644)[11], 1, 1, 1);
					Function_282((*&Local_4 + 140)[12], (*&Local_4 + 644)[12], 1, 1, 1);
				}
				if (SQUAD_IS_VALID(Local_4.f_224))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_224);
					Function_301(Local_4.f_224);
					Function_281(Local_4.f_224);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_224, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					if (IS_ACTOR_VALID((*&Local_4 + 204)[02]))
					{
						Function_330((*&Local_4 + 204)[02], (*&Local_4 + 644)[7], 1, 1, 1);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 204)[12]))
					{
						Function_330((*&Local_4 + 204)[12], (*&Local_4 + 644)[9], 1, 1, 1);
					}
				}
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 228)[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 228)[2]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 228)[2], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 228)[2]);
				Function_280(&Local_399 + 4);
				Local_399 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Local_399 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_297(&Local_399 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_225(&Local_399 + 4);
					iLocal_748 = 6;
					iLocal_749 = 6;
					Local_399 = 1004;
				}
			}
			else
			{
				Function_225(&Local_399 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_276() && Function_275())
			{
				Function_225(&Local_399 + 4);
				Local_399 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				HUD_TIMER_DISPLAY(0);
				Function_284(Global_34573, 0, 1);
				Function_284(bLocal_410, 0, 1);
				if (IS_ACTOR_VALID(Global_34573))
				{
				}
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_273(2, 0, 1, 0, 1, 1, 1, 1, 1, 1);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_399.f_16))
				{
					DESTROY_OBJECT(Local_399.f_16);
				}
				Local_399 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(bLocal_410))
				{
					Function_282(bLocal_410, (*&Local_4 + 644)[15], 1, 1, 1);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 1160, 5.0f, 3);
					TASK_GO_NEAR_COORD(false, &Local_4 + 1184, 5.0f, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
				{
					Function_330((*&Local_4 + 140)[02], (*&Local_4 + 644)[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
				{
					Function_330((*&Local_4 + 140)[12], (*&Local_4 + 644)[6], 1, 1, 1);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 204)[02]))
				{
					Function_330((*&Local_4 + 204)[02], (*&Local_4 + 644)[8], 1, 1, 1);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 204)[12]))
				{
					Function_330((*&Local_4 + 204)[12], (*&Local_4 + 644)[10], 1, 1, 1);
				}
				if (IS_DOOR_VALID(uLocal_634[0]))
				{
					CLOSE_DOOR_FAST(uLocal_634[0]);
				}
				if (IS_DOOR_VALID(uLocal_634[1]))
				{
					CLOSE_DOOR_FAST(uLocal_634[1]);
				}
				Local_399 = 1104;
			}
			break;
	}
	return 0;
}

void Function_273(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xC8A8 / 51368
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
		Function_244();
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
	Function_274(bParam9);
}

void Function_274(bool bParam0) //Position: 0xC998 / 51608
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

int Function_275() //Position: 0xCA3D / 51773
{
	if (IS_DOOR_VALID(uLocal_634[0]))
	{
		if (!IS_DOOR_CLOSED(uLocal_634[0]))
		{
			if (IS_ACTOR_VALID((*&Local_4 + 204)[02]))
			{
				if (IS_ACTION_NODE_PLAYING((*&Local_4 + 204)[02], "ranch08_close/01"))
				{
					if (fLocal_713 >= 0.0f)
					{
						fLocal_713 = Function_297(&Local_399 + 4);
					}
					else if (Function_297(&Local_399 + 4) <= (fLocal_713 + 1,5f))
					{
						CLOSE_DOOR(uLocal_634[0], 0,5f);
					}
				}
			}
		}
	}
	if (IS_DOOR_VALID(uLocal_634[1]))
	{
		if (!IS_DOOR_CLOSED(uLocal_634[1]))
		{
			if (IS_ACTOR_VALID((*&Local_4 + 204)[12]))
			{
				if (IS_ACTION_NODE_PLAYING((*&Local_4 + 204)[12], "ranch08_close/02"))
				{
					if (fLocal_714 >= 0.0f)
					{
						fLocal_714 = Function_297(&Local_399 + 4);
					}
					else if (Function_297(&Local_399 + 4) <= (fLocal_714 + 1,5f))
					{
						CLOSE_DOOR(uLocal_634[1], 0,5f);
					}
				}
			}
		}
	}
	switch (iLocal_749)
	{
		case 0x00000006:
			if (Function_297(&Local_399 + 4) < 0.0f)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
				}
				if (IS_ACTOR_VALID((*&Local_4 + 204)[02]))
				{
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1280), "UseCase1", true, 1);
					TASK_GO_TO_COORD(false, &Local_4 + 912, true);
					TASK_GO_NEAR_COORD(false, &Local_4 + 728, 5.0f, true);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 204)[02], bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET((*&Local_4 + 204)[02], true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 204)[12]))
				{
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1284), "UseCase1", true, 1);
					TASK_GO_TO_COORD(false, &Local_4 + 936, true);
					TASK_GO_NEAR_COORD(false, &Local_4 + 752, 5.0f, true);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 204)[12], bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET((*&Local_4 + 204)[12], true);
				}
				iLocal_749 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_297(&Local_399 + 4) < 2.0f)
			{
				iLocal_749 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_297(&Local_399 + 4) < 6,5f)
			{
				if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
				{
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1,5f, 0, 0);
					TASK_GO_TO_COORD(false, &Local_4 + 1160, 2);
					TASK_GO_TO_COORD(false, &Local_4 + 1184, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[12], bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET((*&Local_4 + 140)[12], true);
				}
				iLocal_749 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_297(&Local_399 + 4) < 10.0f)
			{
				if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
				{
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1,5f, 0, 0);
					TASK_GO_TO_COORD(false, &Local_4 + 1160, 2);
					TASK_GO_TO_COORD(false, &Local_4 + 1184, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				}
				iLocal_749 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_297(&Local_399 + 4) < 12,5f)
			{
				iLocal_749 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_297(&Local_399 + 4) < 13,5f)
			{
				iLocal_749 = 36;
			}
			break;
		
		case 0x00000024:
			if (Function_297(&Local_399 + 4) < 14.0f)
			{
				if (IS_ACTOR_VALID(bLocal_410))
				{
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 1160, 5.0f, 3);
					TASK_GO_NEAR_COORD(false, &Local_4 + 1184, 5.0f, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				iLocal_749 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_297(&Local_399 + 4) < 17,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_276() //Position: 0xCE01 / 52737
{
	switch (iLocal_748)
	{
		case 0x00000006:
			if (Function_297(&Local_399 + 4) < 0.0f)
			{
				iLocal_748 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_297(&Local_399 + 4) < 8.0f)
			{
				Function_277();
				iLocal_748 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_297(&Local_399 + 4) < 16.0f)
			{
				iLocal_748 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_297(&Local_399 + 4) < 17.0f)
			{
				iLocal_748 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_297(&Local_399 + 4) < 17,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_277() //Position: 0xCEA7 / 52903
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_CS03_v1_AA", "Ranch08_CS03_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_CS03_v1_AB", "Ranch08_CS03_v1_AB", true, 4, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_278(int iParam0) //Position: 0xCF27 / 53031
{
	Function_279(0, Global_34573, iParam0, 0);
	Function_279(1, bLocal_410, iParam0, 0);
	return;
}

void Function_279(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xCF41 / 53057
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_280(int iParam0) //Position: 0xCF66 / 53094
{
	if (!Function_299(iParam0))
	{
		Function_226(iParam0, 0.0f);
	}
	return;
}

var Function_281(bool bParam0) //Position: 0xCF7B / 53115
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 1;
	if (!SQUAD_IS_VALID(bParam0))
	{
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (!MAKE_ACTOR_READY_FOR_ACTION(bVar2, 1))
				{
					iVar0 = 0;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_282(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCFC6 / 53190
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
				Function_283(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
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

void Function_283(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xD0DD / 53469
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

void Function_284(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD196 / 53654
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

var Function_285(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xD230 / 53808
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ranch08_cutsceneLast", 4, 1);
	}
	Function_286(&bVar0, uParam2);
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

void Function_286(var uParam0, char* cParam1) //Position: 0xD2B2 / 53938
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_290(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_289(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_288(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_287(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 8.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 10,5f, 2, 0);
	return;
}

void Function_287(int iParam0) //Position: 0xD338 / 54072
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 31,01268f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -892,5979f, 92,31427f, 2495,232f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,032448f, -0,209647f, 1E-06f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_288(int iParam0) //Position: 0xD3A6 / 54182
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 31,01268f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -894,3387f, 92,313f, 2494,647f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,032448f, -0,701004f, 1E-06f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_289(int iParam0) //Position: 0xD414 / 54292
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52,46033f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -893,5203f, 91,46874f, 2489,663f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,01957f, 0,865663f, 0,000671f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_290(bool bParam0) //Position: 0xD47B / 54395
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 52,46033f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -888,7482f, 91,33773f, 2485,414f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,023775f, 1,289036f, 0,000671f, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_291(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xD4E2 / 54498
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
	Function_244();
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
				Function_294(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_294(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_293()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_293()));
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
	if (Function_292(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_292(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_292(int iParam0) //Position: 0xD78B / 55179
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_293() //Position: 0xD7A7 / 55207
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

vector3 Function_294(bool bParam0) //Position: 0xD826 / 55334
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_295(int iParam0, bool bParam1, bool bParam2) //Position: 0xD837 / 55351
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
			Function_296(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_296(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_296(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD983 / 55683
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

float Function_297(bool bParam0) //Position: 0xD9AC / 55724
{
	if (Function_299(bParam0))
	{
		if (Function_298(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_298(int iParam0) //Position: 0xDA74 / 55924
{
	return Function_153(*iParam0, 2);
}

bool Function_299(int iParam0) //Position: 0xDA81 / 55937
{
	return Function_153(*iParam0, 1);
}

void Function_300(bool bParam0) //Position: 0xDA8E / 55950
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

void Function_301(bool bParam0) //Position: 0xDAD5 / 56021
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

void Function_302(bool bParam0, bool bParam1) //Position: 0xDB07 / 56071
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

void Function_303() //Position: 0xDB4B / 56139
{
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_321();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_320(Local_4.f_176, 0);
			Function_319(Local_4.f_176, 3);
			Function_317(Local_4.f_176, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
			{
				Function_330((*&Local_4 + 164)[02], (*&Local_4 + 644)[14], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_316();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_320(Local_4.f_200, 0);
			Function_319(Local_4.f_200, 3);
			Function_317(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 180)[02]))
			{
				Function_330((*&Local_4 + 180)[02], (*&Local_4 + 644)[11], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 180)[12]))
			{
				Function_330((*&Local_4 + 180)[12], (*&Local_4 + 644)[12], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_160))
	{
		Function_315();
		if (SQUAD_IS_VALID(Local_4.f_160))
		{
			Function_320(Local_4.f_160, 0);
			SQUAD_SET_FACTION(Local_4.f_160, 20);
			Function_317(Local_4.f_160, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
			{
				Function_330((*&Local_4 + 140)[02], (*&Local_4 + 644)[3], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
			{
				Function_330((*&Local_4 + 140)[12], (*&Local_4 + 644)[5], 1, 1, 1);
			}
			Function_314(Local_4.f_160, Local_4.f_200);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_224))
	{
		Function_313();
		if (SQUAD_IS_VALID(Local_4.f_224))
		{
			Function_320(Local_4.f_224, 0);
			SQUAD_SET_FACTION(Local_4.f_224, 20);
			Function_317(Local_4.f_224, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 204)[02]))
			{
				Function_330((*&Local_4 + 204)[02], (*&Local_4 + 644)[7], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 204)[12]))
			{
				Function_330((*&Local_4 + 204)[12], (*&Local_4 + 644)[9], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_224, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_304();
	return;
}

void Function_304() //Position: 0xDD7B / 56699
{
	Function_312();
	Local_715.f_12 = Local_4.f_1316;
	if (!SQUAD_IS_VALID(Local_715.f_44))
	{
		Local_715.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_44);
			Function_309(&Local_715, bLocal_340, Local_4.f_824, &iLocal_680, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_320(Local_715.f_44, 0);
			Function_308(Local_715.f_44, 1);
			Function_307(Local_715.f_44, 0);
			Function_306(Local_715.f_44, 0);
			Function_305(Local_715.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_368, -1.0f);
		}
	}
	return;
}

void Function_305(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDE4B / 56907
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

void Function_306(bool bParam0, bool bParam1) //Position: 0xDE92 / 56978
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

void Function_307(bool bParam0, bool bParam1) //Position: 0xDED3 / 57043
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

void Function_308(bool bParam0, bool bParam1) //Position: 0xDF14 / 57108
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

void Function_309(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, float fParam7, bool bParam8) //Position: 0xDF58 / 57176
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
					Function_240(bParam2);
					vVar36 = { StackVal, StackVal, Function_240(bParam2) };
					Function_311(bParam2);
					vVar39 = { StackVal, StackVal, Function_311(bParam2) };
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
						if (Function_310(bVar53))
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

bool Function_310(int iParam0) //Position: 0xE0FA / 57594
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

vector3 Function_311(bool bParam0) //Position: 0xE111 / 57617
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

void Function_312() //Position: 0xE138 / 57656
{
	iLocal_680[0] = 1008;
	iLocal_680[1] = 1009;
	iLocal_680[2] = 1010;
	iLocal_680[3] = 1011;
	(*&Local_715 + 104)[0] = Global_34573;
	(*&Local_715 + 104)[1] = bLocal_410;
	if (iLocal_406 == 2)
	{
		if (iLocal_655)
		{
			Local_715.f_68 = (Function_322(Local_341) - 10);
		}
		else
		{
			Local_715.f_68 = Function_322(Local_341);
		}
	}
	else
	{
		Local_715.f_68 = Function_322(Local_341);
	}
	if (iLocal_406 != 0 || iLocal_406 != 1)
	{
		Local_715.f_72 = 11;
	}
	else
	{
		Local_715.f_72 = 21;
	}
	PRINTINT(Local_715.f_68);
	PRINTNL();
	Local_715.f_64 = "RANCH08_COWS01";
	if (!Function_299(&Local_715 + 88))
	{
		Function_280(&Local_715 + 88);
	}
	else
	{
		Function_225(&Local_715 + 88);
	}
	if (!IS_OBJECT_VALID(Local_715))
	{
		Local_715 = CREATE_POINT_IN_LAYOUT(bLocal_340, "COWS_01_BASE", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(Local_715))
		{
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		Local_715.f_4 = CREATE_POINT_IN_LAYOUT(bLocal_340, "COWS_01_CENTER", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(StackVal))
		{
		}
	}
	if (!SQUAD_IS_VALID(Local_715.f_48))
	{
		Local_715.f_48 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS_01_STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_48))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_48);
		}
	}
	if (!SQUAD_IS_VALID(Local_715.f_52))
	{
		Local_715.f_52 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS_01_RETURN_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_52))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_52);
		}
	}
	if (!SQUAD_IS_VALID(Local_715.f_56))
	{
		Local_715.f_56 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS_01_GOAL_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_56))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_56);
		}
	}
	if (!IS_VOLUME_VALID(Local_715.f_40))
	{
		Local_715.f_40 = CREATE_VOLUME_IN_LAYOUT(bLocal_340, "HERD_VOLUME_MEDIUM", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 9.0f, 9.0f, 9.0f);
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			if (IS_OBJECT_VALID(StackVal))
			{
				ATTACH_OBJECTS(StackVal, Local_715.f_40, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			}
		}
	}
	Local_715.f_12 = "";
	Local_715.f_8 = "";
	Local_715.f_100 = 0;
	return;
}

void Function_313() //Position: 0xE3EC / 58348
{
	Local_4.f_224 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RanchHand02"));
	(*&Local_4 + 204)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RANCHHAND_02_01", 288, -911,9269f, 90,35291f, 2489,149f, 0.0f, 249,0511f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 204)[02], Local_4.f_224);
	(*&Local_4 + 204)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RANCHHAND_02_02", 160, -904,0801f, 90,35291f, 2485,309f, 0.0f, 230,1027f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 204)[12], Local_4.f_224);
	return;
}

void Function_314(bool bParam0, bool bParam1) //Position: 0xE495 / 58517
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

void Function_315() //Position: 0xE4FF / 58623
{
	Local_4.f_160 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RanchHand01"));
	(*&Local_4 + 140)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RANCHHAND_01_01", 550, -855,9774f, 90,35297f, 2434,973f, 0.0f, 40,45127f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 140)[02], Local_4.f_160);
	(*&Local_4 + 140)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RANCHHAND_01_02", 155, -856.0f, 90,35297f, 2440.0f, 0.0f, 82,68872f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 140)[12], Local_4.f_160);
	return;
}

void Function_316() //Position: 0xE5A8 / 58792
{
	Local_4.f_200 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse02"));
	(*&Local_4 + 180)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_02_01", 976, -848,233f, 90,35291f, 2435,268f, 0.0f, 68,955f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 180)[02], Local_4.f_200);
	(*&Local_4 + 180)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_02_02", 980, -863,4081f, 90,35291f, 2435,053f, 0.0f, 394,4722f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 180)[12], Local_4.f_200);
	return;
}

void Function_317(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE646 / 58950
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_318(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, iParam2, bParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_318(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xE67C / 59004
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

void Function_319(bool bParam0, bool bParam1) //Position: 0xE6B9 / 59065
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

void Function_320(bool bParam0, bool bParam1) //Position: 0xE6FB / 59131
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

void Function_321() //Position: 0xE73C / 59196
{
	Local_4.f_176 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse01"));
	(*&Local_4 + 164)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_01", 977, -853,7443f, 90,35294f, 2447,199f, 0.0f, 29,67169f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[02], Local_4.f_176);
	return;
}

int Function_322(int iParam0) //Position: 0xE799 / 59289
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

void Function_323(int iParam0, int iParam1) //Position: 0xE7B3 / 59315
{
	Function_186(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_324(StackVal, iParam1);
	}
	return;
}

void Function_324(int iParam0, int iParam1) //Position: 0xE7E4 / 59364
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_186(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_184(iParam0, iVar0, iParam1);
	return;
}

void Function_325(int iParam0) //Position: 0xE809 / 59401
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_326(int iParam0) //Position: 0xE81E / 59422
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

bool Function_327(int iParam0) //Position: 0xE833 / 59443
{
	switch (bLocal_616)
	{
		case 0x00000000:
			bLocal_616++;
			break;
		
		case 0x00000001:
			if (!IS_OBJECT_VALID(bLocal_431))
			{
				bLocal_431 = CREATE_WORLD_SECTOR(bLocal_340, "hennigansRanch");
				if (IS_OBJECT_VALID(bLocal_431))
				{
				}
			}
			bLocal_616++;
			break;
		
		case 0x00000002:
			if (IS_WORLD_SECTOR_LOADED(bLocal_431))
			{
				if (!IS_DOOR_VALID((*iParam0)[0]))
				{
					(*iParam0)[0] = Function_328("hennigansRanch", "stable02", 11);
				}
				if (!IS_DOOR_VALID((*iParam0)[1]))
				{
					(*iParam0)[1] = Function_328("hennigansRanch", "stable02", 10);
				}
				bLocal_616++;
			}
			break;
		
		case 0x00000003:
			if (IS_DOOR_VALID((*iParam0)[0]) && IS_DOOR_VALID((*iParam0)[1]))
			{
				Function_154((*iParam0)[0], 0);
				OPEN_DOOR_DIRECTION((*iParam0)[0], false);
				Function_154((*iParam0)[1], 0);
				OPEN_DOOR_DIRECTION((*iParam0)[1], true);
				bLocal_616++;
			}
			break;
		
		case 0x00000004:
			if (IS_DOOR_VALID((*iParam0)[0]) && IS_DOOR_VALID((*iParam0)[1]))
			{
				if (IS_DOOR_OPENED((*iParam0)[0]) && IS_DOOR_OPENED((*iParam0)[1]))
				{
					if (IS_OBJECT_VALID(bLocal_431))
					{
						DESTROY_OBJECT(bLocal_431);
					}
					bLocal_616++;
				}
			}
			break;
		
		case 0x00000005:
			return 1;
			break;
	}
	return 0;
}

int Function_328(var uParam0, var uParam1, int iParam2) //Position: 0xE9B7 / 59831
{
	return Function_329(Global_29006, uParam0, uParam1, iParam2);
}

int Function_329(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xE9C9 / 59849
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

void Function_330(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xEA65 / 60005
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

void Function_331(int iParam0) //Position: 0xEB6C / 60268
{
	if (!Function_332(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_196(1, 0, 1);
		}
	}
	return;
}

bool Function_332(int iParam0) //Position: 0xEB87 / 60295
{
	return iParam0->f_20;
}

bool Function_333(bool bParam0) //Position: 0xEB91 / 60305
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

void Function_334() //Position: 0xEBAD / 60333
{
	Function_162(18444);
	Function_341(12);
	Function_341(9);
	Function_341(13);
	Function_341(11);
	Function_341(35);
	Function_341(6);
	Function_341(3);
	Function_341(10);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1008);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1009);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1010);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1011);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1015);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1016);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1017);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1012);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1013);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1014);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1088);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1060);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1073);
	Function_339(268);
	Function_338();
	Function_337();
	if (iLocal_406 == 0)
	{
		Function_336(0);
		Function_335(1);
	}
	else if (iLocal_406 == 1)
	{
		Function_336(1);
		Function_335(1);
	}
	else if (iLocal_406 == 2)
	{
		Function_336(1);
		Function_335(1);
	}
	else if (iLocal_406 == 3)
	{
		Function_336(1);
		Function_335(1);
	}
	else if (iLocal_406 == 4)
	{
		Function_336(0);
		Function_335(1);
	}
	else
	{
		Function_336(0);
		Function_335(1);
	}
	return;
}

void Function_335(int iParam0) //Position: 0xECB3 / 60595
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

void Function_336(int iParam0) //Position: 0xECD1 / 60625
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

void Function_337() //Position: 0xECF6 / 60662
{
	Global_28842.f_44 = 4294967295;
	return;
}

void Function_338() //Position: 0xED02 / 60674
{
	Global_28842.f_40 = 0;
	return;
}

void Function_339(int iParam0) //Position: 0xED0E / 60686
{
	Function_340(&Global_28842, iParam0);
	return;
}

void Function_340(var uParam0, int iParam1) //Position: 0xED1C / 60700
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_341(int iParam0) //Position: 0xED3F / 60735
{
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_342(bool bParam0) //Position: 0xED5F / 60767
{
	Function_343(0, 0x40400000);
	Function_210();
	Function_209();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_343(bool bParam0, float fParam1) //Position: 0xED93 / 60819
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
	Function_345();
	Function_344();
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

void Function_344() //Position: 0xEE91 / 61073
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_345() //Position: 0xEEC3 / 61123
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

void Function_346(bool bParam0) //Position: 0xEFC0 / 61376
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
						if ((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1008 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1009) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1010) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1011) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1015) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1016) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1017) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1012) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1013) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1014) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1073)
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

void Function_347() //Position: 0xF107 / 61703
{
	if (((iLocal_407 < 5 && iLocal_407 > 105) && !iLocal_407 != 104) && !iLocal_407 != 103)
	{
		if (iLocal_407 > 2)
		{
			if (Function_333(Global_30668[0]))
			{
				Function_445(&uLocal_634);
			}
			else
			{
				bLocal_616 = false;
			}
		}
		if (Function_297(&bLocal_677) <= 0,1f)
		{
			Function_444(&Local_715);
			Function_443(Local_715.f_44, Local_715.f_56, Local_4.f_344);
		}
		if (iLocal_407 > 9)
		{
			if (bLocal_647)
			{
				Function_442(&Local_715, 1);
				if (Function_297(&bLocal_677) <= 0,1f)
				{
					Function_441(&Local_715, 1);
					Function_440(&Local_715, 1, 0x41700000);
				}
				if (Function_297(&bLocal_659) <= 0,2f)
				{
					Function_437(&Local_715);
					Function_225(&bLocal_659);
				}
				Function_436();
			}
		}
		else if (bLocal_647)
		{
			Function_432(&Local_715);
			if (Function_297(&bLocal_677) <= 0,1f)
			{
				Function_431(&Local_715);
				Function_430(&Local_715, 0x41700000);
			}
			if (Function_297(&bLocal_659) <= 0,2f)
			{
				Function_437(&Local_715);
				Function_225(&bLocal_659);
			}
			Function_436();
		}
		Function_429(Global_34573);
		Function_425(Local_715.f_48, &iLocal_662, 3.0f, Local_4.f_1316, -20.0f);
		Function_424();
		Function_423();
		Function_422();
		Function_421();
		Function_400();
		if (Function_297(&bLocal_677) <= 0,1f)
		{
			Function_225(&bLocal_677);
		}
	}
	switch (iLocal_407)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_410, GET_ACTOR_MAX_HEALTH(bLocal_410));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_421[3] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_408 = Global_30628[2];
				if (!Function_333(bLocal_408))
				{
					Function_331(&Local_341);
				}
				Function_330(Global_34573, (*&Local_4 + 604)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_411))
				{
					TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_411, true);
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				Function_225(&bLocal_412);
				iLocal_407 = 1;
			}
			else
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("RIDING_ALT", 0, 4294967295, 4294967295);
			bLocal_616 = false;
			iLocal_617 = 0;
			iLocal_624 = 0;
			iLocal_625 = 0;
			iLocal_626 = 0;
			iLocal_627 = 0;
			iLocal_629 = 0;
			iLocal_652 = 0;
			iLocal_432 = 0;
			iLocal_653 = 0;
			iLocal_656 = 0;
			iLocal_658 = 0;
			Function_326(0,65f);
			Function_325(0,01f);
			Function_323(4, 1);
			bLocal_618 = Function_322(Local_341);
			PRINTINT(bLocal_618);
			PRINTNL();
			bLocal_619 = (21 - bLocal_618);
			PRINTINT(bLocal_619);
			PRINTNL();
			bLocal_622 = Global_34165.f_124;
			bLocal_623 = Global_34165.f_128;
			PRINTINT(bLocal_622);
			PRINTNL();
			PRINTINT(bLocal_623);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Local_715.f_76 = bLocal_622;
			Local_715.f_80 = bLocal_623;
			Function_398();
			if (iLocal_421[3] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_330(Global_34573, (*&Local_4 + 604)[0], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_411))
					{
						Function_330(bLocal_411, (*&Local_4 + 604)[1], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
						}
					}
					else
					{
						bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					Function_330(bLocal_410, (*&Local_4 + 604)[2], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
					{
						Function_330((*&Local_4 + 164)[02], (*&Local_4 + 604)[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
						}
					}
				}
			}
			if (SQUAD_IS_VALID(Local_715.f_56))
			{
				Function_302(Local_715.f_56, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_52))
			{
				Function_302(Local_715.f_52, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_48))
			{
				Function_302(Local_715.f_48, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(bLocal_712))
			{
				SQUAD_GOALS_CLEAR(bLocal_712);
				Function_301(bLocal_712);
				Function_300(bLocal_712);
				Function_302(bLocal_712, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_715.f_44);
				Function_301(Local_715.f_44);
				Function_300(Local_715.f_44);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_364, -1.0f);
			}
			Function_387(&(Local_473[017]), bLocal_410, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[117]), Local_4.f_160, "Rancher", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[217]), Local_715.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[317]), Local_715.f_48, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[417]), Local_715.f_52, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[517]), Local_715.f_56, "Cow", 0, 0x5f5e100, 1);
			Function_386(&(Local_473[617]));
			Function_386(&(Local_473[717]));
			Function_382(&(Local_473[217]), 2);
			Function_382(&(Local_473[317]), 2);
			Function_382(&(Local_473[417]), 2);
			Function_382(&(Local_473[517]), 2);
			if (HUD_IS_FADED())
			{
				Function_225(&bLocal_412);
				iLocal_407 = 5;
			}
			else
			{
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			Function_239(iLocal_406);
			Function_376(StackVal, StackVal, Function_239(iLocal_406), iLocal_406, Global_30628[2], Function_242(iLocal_406), 2);
			bLocal_628 = Function_375();
			PRINTINT(bLocal_628);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(bLocal_410) && IS_ACTOR_VALID((*&Local_4 + 164)[02])) && IS_ACTOR_VALID(bLocal_411)) && SQUAD_IS_VALID(Local_715.f_44)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_715.f_44, (SQUAD_GET_SIZE(Local_715.f_44) - 1))))
			{
				if (((Function_374(bLocal_410, 1, 0x41700000) && Function_374((*&Local_4 + 164)[02], 1, 0x41700000)) && Function_374(bLocal_411, 1, 0x41700000)) && Function_374(SQUAD_GET_ACTOR_BY_INDEX(Local_715.f_44, (SQUAD_GET_SIZE(Local_715.f_44) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_410) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_225(&bLocal_412);
						iLocal_407 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(Global_34573))
						{
							Function_330(Global_34573, (*&Local_4 + 604)[0], 1, 1, 1);
							if (IS_ACTOR_VALID(bLocal_411))
							{
								Function_330(bLocal_411, (*&Local_4 + 604)[1], 1, 1, 1);
								if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
								{
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
								}
							}
							else
							{
								bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(bLocal_410))
						{
							Function_330(bLocal_410, (*&Local_4 + 604)[2], 1, 1, 1);
							if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
							{
								Function_330((*&Local_4 + 164)[02], (*&Local_4 + 604)[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
								{
									ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
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
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				Function_373();
				Function_372();
				Function_300(Local_715.f_44);
				Function_370(Local_715.f_44, &Local_4 + 296);
				Function_369(Local_715.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_225(&bLocal_412);
			iLocal_407 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_630))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_630 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_340, "RANCH08_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_630))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_630, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_709))
				{
					bLocal_709 = ADD_BLIP_FOR_OBJECT(Local_4.f_824, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_709))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_631))
				{
					GET_OBJECT_POSITION(Local_4.f_824, &vLocal_694);
					GET_OBJECT_ORIENTATION(Local_4.f_824, &vLocal_697);
					bLocal_631 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_340, "RANCH08GATEWAY01", vLocal_694, vLocal_697, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_631))
					{
					}
				}
				if (iLocal_421[3] == 1)
				{
					if (SQUAD_IS_VALID(Local_715.f_44))
					{
						Function_373();
						Function_372();
						Function_300(Local_715.f_44);
						Function_370(Local_715.f_44, &Local_4 + 296);
						Function_369(Local_715.f_44, 2, 1);
					}
				}
				bLocal_648 = false;
				if (SQUAD_IS_VALID(Local_715.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_48);
					Function_301(Local_715.f_48);
				}
				*(&Local_715 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_715.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_52);
					Function_301(Local_715.f_52);
				}
				Local_715.f_8 = Local_4.f_824;
				GET_OBJECT_POSITION(Local_4.f_824, &uLocal_691);
				if (SQUAD_IS_VALID(Local_715.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_56);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_368, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				}
				Function_368();
				Function_225(&bLocal_412);
				iLocal_407 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				UI_SHOW("RacePosition");
				Function_225(&bLocal_665);
				Function_367("ranch08_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_225(&bLocal_412);
				Function_225(&bLocal_415);
				Function_225(&bLocal_418);
				iLocal_407 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, bLocal_340, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_709))
				{
					REMOVE_BLIP(bLocal_709);
				}
				if (IS_OBJECT_VALID(bLocal_631))
				{
					DESTROY_OBJECT(bLocal_631);
				}
				if (bLocal_647)
				{
					Function_363();
				}
			}
			else
			{
				Function_356(StackVal, &bLocal_418, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_429, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_709))
				{
					bLocal_709 = ADD_BLIP_FOR_OBJECT(Local_4.f_824, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_709))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_631))
				{
					GET_OBJECT_POSITION(Local_4.f_824, &vLocal_694);
					GET_OBJECT_ORIENTATION(Local_4.f_824, &vLocal_697);
					bLocal_631 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_340, "RANCH08GATEWAY01", vLocal_694, vLocal_697, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_631))
					{
					}
				}
				if (!bLocal_647)
				{
					Function_244();
					Function_355();
				}
				Function_352(&Local_715, 5, &bLocal_665, 25.0f);
			}
			if (bLocal_648)
			{
			}
			if (IS_VOLUME_VALID(Local_4.f_408))
			{
				if (IS_OBJECT_VALID(StackVal) && IS_ACTOR_VALID(bLocal_410))
				{
					if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_408) || IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_408))
					{
						iLocal_652 = 1;
						Function_244();
						Function_225(&bLocal_412);
						iLocal_407 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, bLocal_340, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_709))
				{
					REMOVE_BLIP(bLocal_709);
				}
				if (IS_OBJECT_VALID(bLocal_631))
				{
					DESTROY_OBJECT(bLocal_631);
				}
				if (bLocal_647)
				{
					Function_363();
				}
			}
			else
			{
				Function_356(StackVal, &bLocal_418, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_429, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_709))
				{
					bLocal_709 = ADD_BLIP_FOR_OBJECT(Local_4.f_824, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_709))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_631))
				{
					GET_OBJECT_POSITION(Local_4.f_824, &vLocal_694);
					GET_OBJECT_ORIENTATION(Local_4.f_824, &vLocal_697);
					bLocal_631 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_340, "RANCH08GATEWAY01", vLocal_694, vLocal_697, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_631))
					{
					}
				}
				if (!bLocal_647)
				{
					Function_244();
					Function_355();
				}
				if (((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_56)) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_715.f_44) != 0 && SQUAD_GET_SIZE(Local_715.f_48) != 0) && SQUAD_GET_SIZE(Local_715.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_709))
						{
							REMOVE_BLIP(bLocal_709);
						}
						if (IS_OBJECT_VALID(bLocal_631))
						{
							DESTROY_OBJECT(bLocal_631);
						}
						Function_351(Local_715.f_44);
						Function_351(Local_715.f_48);
						Function_351(Local_715.f_52);
						Function_351(Local_715.f_56);
						UI_HIDE("RacePosition");
						Function_244();
						Function_225(&bLocal_412);
						iLocal_407 = 106;
					}
				}
				if (Local_715.f_100)
				{
					if (Function_297(&Local_715 + 88) <= 30.0f)
					{
						if (StackVal && IS_OBJECT_VALID((StackVal && IS_OBJECT_VALID((IS_ACTOR_VALID(bLocal_410) && IS_ACTOR_VALID(Global_34573))))))
						{
							if (Function_348(StackVal, bLocal_410, 25.0f))
							{
								if (StackVal && Function_348(Function_348(StackVal, Global_34573, 25.0f), Global_34573, 25.0f))
								{
									LOG_ERROR("RANCH08 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH08 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_52)) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_56))
									{
										Function_302(Local_715.f_44, Local_715.f_56);
										Function_302(Local_715.f_52, Local_715.f_56);
										Function_302(Local_715.f_48, Local_715.f_56);
									}
									Function_225(&Local_715 + 88);
								}
							}
						}
					}
				}
			}
			if (bLocal_648)
			{
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_715.f_56))
			{
				bLocal_618 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_56);
				Function_224(Local_341, bLocal_618);
			}
			PRINTINT(bLocal_618);
			PRINTNL();
			bLocal_619 = (21 - bLocal_618);
			PRINTINT(bLocal_619);
			PRINTNL();
			bLocal_622 = Local_715.f_76;
			Global_34165.f_124 = bLocal_622;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_623 = Local_715.f_80;
			Global_34165.f_128 = bLocal_623;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			iLocal_421[4] = 1;
			Function_225(&bLocal_412);
			iLocal_406 = 101;
			iLocal_407 = 0;
			break;
	}
	return;
}

bool Function_348(bool bParam0, bool bParam1, bool bParam2) //Position: 0x100D9 / 65753
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_350(bParam0);
			Function_349(bParam1);
			if (VDIST(Function_350(bParam0), Function_349(bParam1)) >= bParam2)
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

vector3 Function_349(bool bParam0) //Position: 0x101F3 / 66035
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

vector3 Function_350(bool bParam0) //Position: 0x1025F / 66143
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

void Function_351(bool bParam0) //Position: 0x102C9 / 66249
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

void Function_352(var uParam0, int iParam1, bool bParam2, float fParam3) //Position: 0x10316 / 66326
{
	bool bVar0;
	
	if (Function_297(bParam2) <= fParam3)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			if (SQUAD_IS_VALID(uParam0->f_44))
			{
				if (SQUAD_IS_VALID(uParam0->f_48))
				{
					if (SQUAD_IS_VALID(uParam0->f_52))
					{
						if (((SQUAD_GET_SIZE(uParam0->f_48) > iParam1 && !SQUAD_GET_SIZE(uParam0->f_48) > 0) && SQUAD_GET_SIZE(uParam0->f_52) > iParam1) && !SQUAD_GET_SIZE(uParam0->f_52) > 0)
						{
							bVar0 = Function_353(StackVal, uParam0->f_44, Global_34573);
							if (IS_ACTOR_VALID(bVar0))
							{
								if (!GET_TASK_STATUS(bVar0, 10) != 1)
								{
									bLocal_615 = TASK_SEQUENCE_OPEN();
									TASK_WANDER(false, 5.0f);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, bLocal_615);
									TASK_SEQUENCE_RELEASE(bLocal_615, 1);
									TASK_PRIORITY_SET(bVar0, true);
									iLocal_650 = 1;
								}
							}
							Function_225(bParam2);
						}
					}
				}
			}
		}
	}
}

var Function_353(bool bParam0, bool bParam1, bool bParam2) //Position: 0x103DC / 66524
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			if (IS_ACTOR_VALID(bParam2))
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
						fVar3 = Function_354(bParam1, bVar2);
						fVar5 = (Function_354(bParam2, bVar2) / 1,75f);
						if (bVar1 > 0 || (fVar3 + fVar5) < (fVar4 + fVar6))
						{
							fVar4 = fVar3;
							fVar6 = fVar5;
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
	}
	return "";
}

float Function_354(bool bParam0, bool bParam1) //Position: 0x1047C / 66684
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_349(bParam0);
			vVar0 = { StackVal, StackVal, Function_349(bParam0) };
			Function_349(bParam1);
			vVar3 = { StackVal, StackVal, Function_349(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_355() //Position: 0x10517 / 66839
{
	bLocal_647 = true;
	if (iLocal_406 == 1)
	{
		_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_715.f_44, Local_715.f_60, Global_34573, 22.0f, 6.0f, 1);
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, Global_34573, 23.0f, 1.0f, 925353388, 925353388, 0);
	}
	else
	{
		_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_715.f_44, Local_715.f_60, Global_34573, 22.0f, 6.0f, 1);
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, Global_34573, 23.0f, 1.0f, 925353388, 925353388, 0);
	}
	UI_SHOW("RacePosition");
	DECOR_SET_BOOL(Global_34573, "herding", true);
	return;
}

int Function_356(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x105BF / 67007
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_348(Global_34573, bParam3, bParam2))
	{
		Function_233(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_348(Global_34573, bParam3, bParam1))
	{
		if (!Function_362(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_367(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_361(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_360(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_360(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_362(1))
	{
		Function_359(1);
		if (!Function_358())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_357();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_360(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_360(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_357() //Position: 0x1072D / 67373
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

bool Function_358() //Position: 0x10758 / 67416
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

void Function_359(bool bParam0) //Position: 0x1079C / 67484
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

void Function_360(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x107FF / 67583
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

void Function_361(bool bParam0) //Position: 0x108A0 / 67744
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

bool Function_362(bool bParam0) //Position: 0x10903 / 67843
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

void Function_363() //Position: 0x1094A / 67914
{
	bool bVar0;
	bool bVar1;
	
	bLocal_647 = false;
	_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_715.f_44, Local_715.f_60, Global_34573);
	if (IS_OBJECT_VALID(StackVal))
	{
		bVar0 = GET_BLIP_ON_OBJECT(StackVal);
		if (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
		}
	}
	if (IS_OBJECT_VALID(Local_715))
	{
		bVar1 = GET_BLIP_ON_OBJECT(Local_715);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
	}
	Function_351(Local_715.f_44);
	Function_351(Local_715.f_48);
	Function_351(Local_715.f_52);
	Function_351(Local_715.f_56);
	UI_HIDE("RacePosition");
	DECOR_REMOVE(Global_34573, "herding");
	return;
}

bool Function_364(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x109E7 / 68071
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_ALIVE(bParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(Global_34573)))
		{
			if (!Function_362(16))
			{
				if (bParam7)
				{
					Function_244();
				}
				if (!Function_366())
				{
					Function_367(bParam4, 7,5f, 0, 2, 0, 0, 0);
					Function_361(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_233(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_362(8))
		{
			if (bParam7)
			{
				Function_244();
			}
			if (!Function_366())
			{
				Function_367(bParam3, 7,5f, 0, 2, 0, 0, 0);
				Function_361(8);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_360(bParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_360(bParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam2, bParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_362(8))
	{
		Function_359(8);
		if (!Function_358())
		{
			Function_365();
			Function_357();
		}
	}
	if (GET_MOUNT(Global_34573) == bParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam2));
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_360(bParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_360(bParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_365() //Position: 0x10B3C / 68412
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_366() //Position: 0x10B48 / 68424
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_367(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x10B55 / 68437
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

void Function_368() //Position: 0x10BA8 / 68520
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_roundAll", "Ranch08_roundAll", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_369(bool bParam0, bool bParam1, int iParam2) //Position: 0x10BF1 / 68593
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

void Function_370(bool bParam0, int iParam1) //Position: 0x10C33 / 68659
{
	int iVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < (*iParam1 - 1))
		{
			if (IS_VOLUME_VALID((*iParam1)[iVar0]))
			{
				Function_371(bParam0, (*iParam1)[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

int Function_371(bool bParam0, bool bParam1) //Position: 0x10C75 / 68725
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

void Function_372() //Position: 0x10CCA / 68810
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_715.f_44, Local_715.f_60, Local_715.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_373() //Position: 0x10CF2 / 68850
{
	Function_301(Local_715.f_44);
	SQUAD_GOALS_CLEAR(Local_715.f_44);
	Local_715.f_60 = UNK_0x48588CCB(Local_715.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_715.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_715.f_44, Local_715.f_60);
	}
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_715.f_44, Local_715.f_60, Global_34573, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, Global_34573, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 0, 1);
	if (IS_ACTOR_VALID(bLocal_410))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_410);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_715.f_40);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_410, Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, bLocal_410, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 140)[02]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 140)[02], Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, (*&Local_4 + 140)[02], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 140)[12]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 140)[12], Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, (*&Local_4 + 140)[12], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	bLocal_647 = true;
	DECOR_SET_BOOL(Global_34573, "herding", true);
	return;
}

bool Function_374(bool bParam0, bool bParam1, float fParam2) //Position: 0x10E97 / 69271
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

bool Function_375() //Position: 0x10F34 / 69428
{
	return Global_34165.f_60;
}

void Function_376(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x10F3F / 69439
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
	if (iParam3 != Global_34165.f_48 && !Function_381())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_380(0);
	Function_379();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_378(uParam4, iVar0, iVar1);
	Function_377();
}

void Function_377() //Position: 0x10FDC / 69596
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

void Function_378(int iParam0, bool bParam1, bool bParam2) //Position: 0x1101D / 69661
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

void Function_379() //Position: 0x11183 / 70019
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_380(bool bParam0) //Position: 0x111A7 / 70055
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

bool Function_381() //Position: 0x111D6 / 70102
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_382(int iParam0, int iParam1) //Position: 0x111F1 / 70129
{
	if (iParam1 != 100000000)
	{
		Function_385(iParam0, iParam1);
	}
	else
	{
		Function_383(iParam0, 1);
	}
	return;
}

void Function_383(int iParam0, bool bParam1) //Position: 0x11211 / 70161
{
	iParam0->f_40 = 0;
	Function_384(iParam0, 2, bParam1);
	Function_384(iParam0, 4, bParam1);
	Function_384(iParam0, 8, bParam1);
	Function_384(iParam0, 16, bParam1);
	Function_384(iParam0, 32, bParam1);
	Function_384(iParam0, 64, bParam1);
	Function_384(iParam0, 128, bParam1);
	Function_384(iParam0, 256, bParam1);
	Function_384(iParam0, 512, bParam1);
	Function_384(iParam0, 1024, bParam1);
	return;
}

void Function_384(int iParam0, int iParam1, bool bParam2) //Position: 0x11277 / 70263
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

void Function_385(int iParam0, bool bParam1) //Position: 0x112B3 / 70323
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

void Function_386(bool bParam0) //Position: 0x112DE / 70366
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

int Function_387(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11392 / 70546
{
	if (!Function_391(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_390(uParam0, bParam2))
	{
		return 0;
	}
	Function_389(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_388(uParam0, iParam4, iParam5);
	return 1;
}

void Function_388(var uParam0, int iParam1, int iParam2) //Position: 0x113CE / 70606
{
	if (iParam1 != 100000000)
	{
		Function_384(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_383(uParam0, iParam2);
	}
	return;
}

void Function_389(var uParam0, int iParam1) //Position: 0x113F1 / 70641
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_390(int iParam0, bool bParam1) //Position: 0x113FD / 70653
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

bool Function_391(var uParam0, bool bParam1) //Position: 0x11486 / 70790
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

bool Function_392(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x11612 / 71186
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
	if (Global_3381 || Function_232(1))
	{
		Function_397(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_396())
		{
			return "";
		}
	}
	if (!Function_394())
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
		Function_240(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_240(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_240(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_240(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_393(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_393(StackVal, StackVal, vVar5, 0, 1, 1);
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

var Function_393(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1196A / 72042
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

bool Function_394() //Position: 0x11A05 / 72197
{
	if (Function_395() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_395() //Position: 0x11A1B / 72219
{
	return Global_12976.f_152;
}

bool Function_396() //Position: 0x11A26 / 72230
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_397(var uParam0, bool bParam1, bool bParam2) //Position: 0x11A46 / 72262
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

void Function_398() //Position: 0x11A73 / 72307
{
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_321();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_320(Local_4.f_176, 0);
			Function_319(Local_4.f_176, 3);
			Function_317(Local_4.f_176, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
			{
				Function_330((*&Local_4 + 164)[02], (*&Local_4 + 604)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_316();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_320(Local_4.f_200, 0);
			Function_319(Local_4.f_200, 3);
			Function_317(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 180)[02]))
			{
				Function_330((*&Local_4 + 180)[02], (*&Local_4 + 604)[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 180)[12]))
			{
				Function_330((*&Local_4 + 180)[12], (*&Local_4 + 604)[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_160))
	{
		Function_315();
		if (SQUAD_IS_VALID(Local_4.f_160))
		{
			Function_320(Local_4.f_160, 0);
			SQUAD_SET_FACTION(Local_4.f_160, 20);
			Function_317(Local_4.f_160, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
			{
				Function_330((*&Local_4 + 140)[02], (*&Local_4 + 604)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
			{
				Function_330((*&Local_4 + 140)[12], (*&Local_4 + 604)[7], 1, 1, 1);
			}
			Function_314(Local_4.f_160, Local_4.f_200);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_399();
	return;
}

void Function_399() //Position: 0x11C10 / 72720
{
	Function_312();
	Local_715.f_12 = Local_4.f_1316;
	if (!SQUAD_IS_VALID(Local_715.f_44))
	{
		Local_715.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_44);
			Function_309(&Local_715, bLocal_340, Local_4.f_820, &iLocal_680, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_320(Local_715.f_44, 0);
			Function_308(Local_715.f_44, 1);
			Function_307(Local_715.f_44, 0);
			Function_306(Local_715.f_44, 0);
			Function_305(Local_715.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_364, -1.0f);
		}
	}
	return;
}

void Function_400() //Position: 0x11CE0 / 72928
{
	if (Function_297(&bLocal_668) <= 0.0f)
	{
		switch (iLocal_627)
		{
			case 0x00000000:
				iLocal_627++;
				break;
			
			case 0x00000001:
				if (iLocal_407 > 8)
				{
					iLocal_627++;
				}
				break;
			
			case 0x00000002:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_402();
				}
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_627++;
				}
				break;
			
			case 0x00000003:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_653)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_627++;
					}
				}
				break;
			
			case 0x00000004:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				if (!Function_133())
				{
					if (Function_297(&bLocal_415) <= 5.0f)
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 140)[02], 8.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 140)[02], "SPEECH_Herd_Objective_Home", Global_34573, 1, 0, 0, 0, 0);
						}
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 140)[12], 8.0f))
						{
							Function_401();
						}
						Function_225(&bLocal_415);
					}
				}
				break;
			
			case 0x00000006:
				iLocal_627++;
				break;
		}
		Function_225(&bLocal_668);
	}
	return;
}

void Function_401() //Position: 0x11E2C / 73260
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch08_meetLaborer", "Ranch08_meetLaborer", false, 2, 1, 0, 1);
		Function_278(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_402() //Position: 0x11E7B / 73339
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_weatherWorse_v2", "Ranch08_weatherWorse_v2", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_403(bool bParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x11ED2 / 73426
{
	if (Function_297(&bLocal_671) <= 3.0f)
	{
		Function_412();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_658)
				{
					iLocal_658 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_getsOffHorse", "Ranch08_getsOffHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_225(&bLocal_671);
				}
				else if (Function_297(&bLocal_415) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_NoOnHorse", "Ranch08_NoOnHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_225(&bLocal_671);
					Function_225(&bLocal_415);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_658)
				{
					iLocal_658 = 0;
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_411))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_411, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_thrownOffHorse", "Ranch08_thrownOffHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_225(&bLocal_671);
					}
				}
			}
			if (bParam0)
			{
				if (!iLocal_653)
				{
					if (!iLocal_656)
					{
						if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_706))
						{
							if (VMAG(vLocal_706) >= 0,15f)
							{
								iLocal_656 = 1;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_JonNoHerd", "Ranch08_JonNoHerd", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_225(&bLocal_671);
							}
						}
					}
				}
			}
			if (bParam0)
			{
				if (iLocal_656)
				{
					if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_706))
					{
						if (VMAG(vLocal_706) <= (0,15f + 2.0f))
						{
							iLocal_656 = 0;
						}
					}
				}
			}
			if (bParam2)
			{
				Function_240(Local_715.f_44);
				if (!Function_411(StackVal, StackVal, StackVal, Function_240(Local_715.f_44), 135.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_WronDirec", "Ranch08_WronDirec", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_225(&bLocal_671);
				}
				if (SQUAD_IS_VALID(Local_715.f_48) && SQUAD_IS_VALID(Local_715.f_52))
				{
					if (SQUAD_GET_SIZE(Local_715.f_52) <= 3 || SQUAD_GET_SIZE(Local_715.f_48) <= 3)
					{
						if (IS_ACTOR_VALID(bLocal_410))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_410, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_herdBad", "Ranch08_herdBad", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_225(&bLocal_671);
							}
						}
					}
				}
			}
			if (bParam1)
			{
				if (SQUAD_IS_VALID(Local_715.f_48) && SQUAD_IS_VALID(Local_715.f_52))
				{
					if (SQUAD_GET_SIZE(Local_715.f_48) != 0 && SQUAD_GET_SIZE(Local_715.f_52) != 0)
					{
						if (!Function_348(StackVal, Global_34573, fParam3) && !Function_408(Global_34573, bLocal_410, fParam3))
						{
							if (!iLocal_656)
							{
								if (!iLocal_653)
								{
									if (iLocal_406 == 1)
									{
										uLocal_633 = Local_4.f_1300;
									}
									else if (iLocal_406 == 2)
									{
										uLocal_633 = Local_4.f_1308;
									}
									else if (iLocal_406 == 3)
									{
										uLocal_633 = Local_4.f_1316;
									}
									else if (iLocal_406 == 4)
									{
										uLocal_633 = Local_4.f_1316;
									}
									if (Function_407(Global_34573, bLocal_410, uLocal_633))
									{
										iLocal_653 = 1;
										ABORT_SCRIPTED_CONVERSATION(1);
										Function_406();
										Function_225(&bLocal_671);
									}
									else
									{
										iLocal_653 = 1;
										ABORT_SCRIPTED_CONVERSATION(1);
										Function_405();
										Function_225(&bLocal_671);
									}
								}
							}
						}
					}
				}
			}
			if (StackVal && Function_348(ACTORS_IN_RANGE(Global_34573, bLocal_410, bParam4), Global_34573, bParam4))
			{
				if (bParam1)
				{
					if (iLocal_653)
					{
						iLocal_653 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_404();
						Function_225(&bLocal_671);
					}
				}
			}
		}
	}
}

void Function_404() //Position: 0x122FF / 74495
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_comesBack", "Ranch08_comesBack", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_405() //Position: 0x1234A / 74570
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_farAhead", "Ranch08_farAhead", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_406() //Position: 0x12393 / 74643
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_farbehind", "Ranch08_farbehind", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_407(bool bParam0, bool bParam1, bool bParam2) //Position: 0x123DE / 74718
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

bool Function_408(var uParam0, bool bParam1, float fParam2) //Position: 0x12436 / 74806
{
	float fVar0;
	
	fVar0 = Function_409(uParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_409(bool bParam0, bool bParam1) //Position: 0x12453 / 74835
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_410(&uVar0, &uVar3);
	return iVar6;
}

var Function_410(var uParam0, int iParam1) //Position: 0x12472 / 74866
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_411(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x12490 / 74896
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

void Function_412() //Position: 0x12515 / 75029
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_410)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_419();
						Function_225(&bLocal_671);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_418();
						Function_225(&bLocal_671);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_418();
					Function_225(&bLocal_671);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_GunBon", "Ranch08_GunBon", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_225(&bLocal_671);
			}
		}
		else if (bVar0 == (*&Local_4 + 164)[02])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_417();
						Function_225(&bLocal_671);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_417();
						Function_225(&bLocal_671);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_417();
					Function_225(&bLocal_671);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_PullBonHorse", "Ranch08_PullBonHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_225(&bLocal_671);
			}
		}
		else if (bVar0 != (*&Local_4 + 180)[02] || bVar0 != (*&Local_4 + 180)[12])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_417();
						Function_225(&bLocal_671);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_417();
						Function_225(&bLocal_671);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_417();
					Function_225(&bLocal_671);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_PullBonHorse", "Ranch08_PullBonHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_225(&bLocal_671);
			}
		}
		else if ((Function_416(bVar0, Local_715.f_44, 0) || Function_416(bVar0, Local_715.f_52, 0)) || Function_416(bVar0, Local_715.f_48, 0))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_415();
						Function_225(&bLocal_671);
					}
					else if (GET_WEAPON_IN_HAND(Global_34573) != 21 || GET_WEAPON_IN_HAND(Global_34573) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_LassosCow", "Ranch08_LassosCow", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_225(&bLocal_671);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_414();
						Function_225(&bLocal_671);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_414();
					Function_225(&bLocal_671);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_AssaultChar", "Ranch08_AssaultChar", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_225(&bLocal_671);
			}
		}
		else if (IS_ACTOR_HUMAN(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_413();
						Function_225(&bLocal_671);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_414();
						Function_225(&bLocal_671);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_414();
					Function_225(&bLocal_671);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_GunChar", "Ranch08_GunChar", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_225(&bLocal_671);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_ShootRandom", "Ranch08_ShootRandom", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_225(&bLocal_671);
				}
			}
		}
	}
	return;
}

void Function_413() //Position: 0x12957 / 76119
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_shootChar", "Ranch08_shootChar", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_414() //Position: 0x129A2 / 76194
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_assaultChar", "Ranch08_assaultChar", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_415() //Position: 0x129F1 / 76273
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_shootsCow", "Ranch08_shootsCow", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_416(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12A3C / 76348
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

void Function_417() //Position: 0x12A7C / 76412
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_shootBonHorse", "Ranch08_shootBonHorse", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_418() //Position: 0x12ACF / 76495
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_assaultBon", "Ranch08_assaultBon", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_419() //Position: 0x12B1C / 76572
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_shootBonnie", "Ranch08_shootBonnie", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_420(bool bParam0) //Position: 0x12B6B / 76651
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

void Function_421() //Position: 0x12BB1 / 76721
{
	if (SQUAD_IS_VALID(Local_715.f_44))
	{
		switch (iLocal_629)
		{
			case 0x00000000:
				iLocal_629++;
				break;
			
			case 0x00000001:
				if (iLocal_652)
				{
					iLocal_629++;
				}
				break;
			
			case 0x00000002:
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_715.f_44, Local_715.f_60, Local_715.f_12);
				SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_715.f_44, Local_715.f_60, Local_715.f_12, 30.0f, 0,85f, 1f, 1082130432);
				iLocal_629++;
				break;
			
			case 0x00000003:
				if (IS_VOLUME_VALID(Local_4.f_412))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_412) || IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_412))
						{
							iLocal_629++;
						}
					}
				}
				break;
			
			case 0x00000004:
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_715.f_44, Local_715.f_60, Local_715.f_12);
				SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_715.f_44, Local_715.f_60, Local_715.f_12, 30.0f, 0,85f, 2.0f, 2.0f);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_715.f_44, Local_715.f_60, 1, 0,25f, 0,25f);
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 0, 16, (4,5f - 0,5f));
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 20, 0,5f);
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 0, 20, (5.0f / 1,5f));
				iLocal_629++;
				break;
			
			case 0x00000005:
				iLocal_629++;
				break;
			}
	}
	return;
}

void Function_422() //Position: 0x12D2F / 77103
{
	switch (iLocal_626)
	{
		case 0x00000000:
			iLocal_626++;
			break;
		
		case 0x00000001:
			if (iLocal_652)
			{
				iLocal_626++;
			}
			break;
		
		case 0x00000002:
			if (!SQUAD_IS_VALID(Local_4.f_224))
			{
				Function_313();
				if (SQUAD_IS_VALID(Local_4.f_224))
				{
					Function_320(Local_4.f_224, 0);
					SQUAD_SET_FACTION(Local_4.f_224, 20);
					Function_317(Local_4.f_224, 0, 0, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_224, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					if (IS_ACTOR_VALID((*&Local_4 + 204)[02]))
					{
						SNAP_ACTOR_TO_GRINGO((*&Local_4 + 204)[02], Local_4.f_1292, "UseCase1", true, 0, 0);
						TASK_USE_GRINGO((*&Local_4 + 204)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1292), "UseCase1", 4294967295, 1);
						TASK_PRIORITY_SET((*&Local_4 + 204)[02], 2);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 204)[12]))
					{
						SNAP_ACTOR_TO_GRINGO((*&Local_4 + 204)[12], Local_4.f_1288, "UseCase1", true, 0, 0);
						TASK_USE_GRINGO((*&Local_4 + 204)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_1288), "UseCase1", 4294967295, 1);
						TASK_PRIORITY_SET((*&Local_4 + 204)[12], 2);
					}
				}
			}
			iLocal_626++;
			break;
		
		case 0x00000003:
			if (SQUAD_IS_VALID(Local_4.f_224))
			{
				Function_387(&(Local_473[717]), Local_4.f_160, "Rancher", 0, 0x5f5e100, 1);
				Function_388(&(Local_473[717]), 1024, 1);
			}
			iLocal_626++;
			break;
		
		case 0x00000004:
			iLocal_626++;
			break;
	}
	return;
}

void Function_423() //Position: 0x12EC3 / 77507
{
	if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
	{
		switch (iLocal_625)
		{
			case 0x00000000:
				iLocal_625++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING((*&Local_4 + 140)[12], true);
				SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[12], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_4 + 140)[12], true);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1312, -2.0f, 1, 0);
				TASK_FACE_ACTOR(false, bLocal_410, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[12], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[12], true);
				iLocal_625++;
				break;
			
			case 0x00000002:
				if (IS_VOLUME_VALID(Local_4.f_388))
				{
					if (IS_ACTOR_IN_VOLUME((*&Local_4 + 140)[12], Local_4.f_388))
					{
						SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[12], 2);
						bLocal_615 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &Local_4 + 888, 3,5f, true);
						TASK_FACE_COORD(false, &Local_4 + 960, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[12], bLocal_615);
						TASK_SEQUENCE_RELEASE(bLocal_615, 1);
						TASK_PRIORITY_SET((*&Local_4 + 140)[12], true);
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 140)[12], Local_4.f_440);
						iLocal_625++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_625++;
				break;
			}
	}
	return;
}

void Function_424() //Position: 0x1300C / 77836
{
	if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
	{
		switch (iLocal_624)
		{
			case 0x00000000:
				iLocal_624++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING((*&Local_4 + 140)[02], true);
				SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[02], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_4 + 140)[02], true);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1320, -2.0f, 1, 0);
				TASK_FACE_ACTOR(false, bLocal_410, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				iLocal_624++;
				break;
			
			case 0x00000002:
				if (IS_VOLUME_VALID(Local_4.f_388))
				{
					if (IS_ACTOR_IN_VOLUME((*&Local_4 + 140)[02], Local_4.f_388))
					{
						SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[02], 2);
						bLocal_615 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &Local_4 + 864, 3,5f, true);
						TASK_FACE_COORD(false, &Local_4 + 960, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
						TASK_SEQUENCE_RELEASE(bLocal_615, 1);
						TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 140)[02], Local_4.f_440);
						iLocal_624++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_624++;
				break;
			}
	}
	return;
}

void Function_425(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x13155 / 78165
{
	if (IS_ACTOR_VALID(bLocal_410))
	{
		if (SQUAD_IS_VALID(bParam0))
		{
			switch (iLocal_617)
			{
				case 0x00000000:
					iLocal_617++;
					break;
				
				case 0x00000001:
					CLEAR_ACTOR_MIN_SPEED(bLocal_410);
					CLEAR_ACTOR_MAX_SPEED(bLocal_410);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_410);
					Function_427(3, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_410, true);
					SET_ACTOR_MAX_SPEED(bLocal_410, 4);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_410, true);
					iLocal_617++;
					break;
				
				case 0x00000002:
					if (Function_297(bParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(bParam0))
						{
							if (SQUAD_GET_SIZE(bParam0) > 2)
							{
								if (!bLocal_648)
								{
									bLocal_710 = Function_426(StackVal, bParam0);
									if (IS_ACTOR_VALID(bLocal_710))
									{
										vLocal_688 = { 0.0f, 0.0f, 0.0f };
										SET_ACTOR_MAX_SPEED(bLocal_410, 4);
										bLocal_615 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(false, bLocal_710, &vLocal_688, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
										TASK_SEQUENCE_RELEASE(bLocal_615, 1);
										TASK_PRIORITY_SET(bLocal_410, true);
										bLocal_648 = true;
									}
								}
								else if (!Function_416(bLocal_710, bParam0, 0))
								{
									bLocal_648 = false;
								}
							}
							else if (!GET_TASK_STATUS(bLocal_410, 72) != 1)
							{
								SET_ACTOR_MAX_SPEED(bLocal_410, 4);
								bLocal_615 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
								TASK_SEQUENCE_RELEASE(bLocal_615, 1);
								TASK_PRIORITY_SET(bLocal_410, true);
								bLocal_648 = false;
							}
						}
						Function_225(bParam1);
					}
					if (IS_VOLUME_VALID(Local_4.f_432))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_432))
						{
							iLocal_617++;
						}
					}
					break;
				
				case 0x00000003:
					GET_OBJECT_POSITION((*&Local_4 + 644)[14], &vLocal_688);
					SET_ACTOR_MAX_SPEED(bLocal_410, 4);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(false, &Local_4 + 1208, 4);
					TASK_FACE_COORD(false, &vLocal_688, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET(bLocal_410, true);
					iLocal_617++;
					break;
				
				case 0x00000004:
					iLocal_617++;
					break;
			}
		}
	}
}

bool Function_426(bool bParam0, bool bParam1) //Position: 0x1335C / 78684
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
					fVar3 = Function_354(bParam1, bVar2);
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

void Function_427(int iParam0, bool bParam1, bool bParam2) //Position: 0x133D8 / 78808
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
						Function_221(bVar1);
					}
				}
				Function_428(bVar0);
			}
		}
	}
	return;
}

void Function_428(bool bParam0) //Position: 0x134CF / 79055
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

void Function_429(bool bParam0) //Position: 0x134FB / 79099
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

void Function_430(int iParam0, float fParam1) //Position: 0x1352A / 79146
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
										if (!Function_348(StackVal, bVar1, fVar4))
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
							if (Function_348(StackVal, bVar1, fVar3))
							{
								if (StackVal && Function_348(iParam0->f_100, bVar1, fVar4))
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
								if (Function_297(iParam0 + 88) <= fParam1)
								{
									if (!Function_348(StackVal, bVar1, fVar4))
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
									Function_225(iParam0 + 88);
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

void Function_431(int iParam0) //Position: 0x13968 / 80232
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
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
						fVar8 = 7.0f;
						fVar6 = 12.0f;
						fVar7 = 14.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						iVar5 = 3;
						iVar4 = 9;
						fVar8 = 12.0f;
						fVar6 = 20.0f;
						fVar7 = 22.0f;
					}
					else
					{
						iVar5 = 3;
						iVar4 = 9;
						fVar8 = 15.0f;
						fVar6 = 23.0f;
						fVar7 = 25.0f;
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
									if (!Function_348(StackVal, bVar0, fVar8))
									{
										if (Function_348(StackVal, bVar0, fVar6))
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
									Function_225(iParam0 + 88);
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
								if (!Function_348(StackVal, bVar0, fVar7))
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
								if (StackVal || Function_348(Function_348(StackVal, bVar0, fVar6), bVar0, fVar6))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									if (Function_348(StackVal, bVar0, fVar6))
									{
									}
									else if (Function_348(StackVal, bVar0, fVar6))
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
												if (Function_348(bVar0, (*iParam0 + 104)[bVar3], 7.0f))
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
											else if (Function_348(bVar0, (*iParam0 + 104)[bVar3], 15.0f))
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

void Function_432(int iParam0) //Position: 0x13FF3 / 81907
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
								Function_434(iParam0->f_56);
								vVar3 = { StackVal, StackVal, Function_434(iParam0->f_56) };
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
								Function_433(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_433(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_434(iParam0->f_52);
								vVar3 = { StackVal, StackVal, Function_434(iParam0->f_52) };
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
								Function_433(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_433(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_434(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_434(iParam0->f_48) };
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
							Function_434(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_434(iParam0->f_44) };
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
							{
								Function_240(*iParam0);
								if (!Function_73(StackVal, StackVal, Function_240(*iParam0)))
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
								Function_240(StackVal);
								if (!Function_73(StackVal, StackVal, Function_240(StackVal)))
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

vector3 Function_433(vector3 vParam0, bool bParam3) //Position: 0x142B2 / 82610
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

vector3 Function_434(bool bParam0) //Position: 0x14352 / 82770
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
		UNK_0x44986367(&vVar5, Function_435(bVar1));
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar5, vVar8, StackVal) };
		bVar0++;
	}
	vVar8 = (vVar8.x / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar8.f_4 = 0.0f;
	vVar8.f_8 = (vVar8.z / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar2.f_4 = UNK_0x9C40E671(&vVar8);
	return StackVal, StackVal, vVar2;
}

var Function_435(bool bParam0) //Position: 0x143BF / 82879
{
	return GET_HEADING(bParam0);
}

void Function_436() //Position: 0x143CA / 82890
{
	int iVar0;
	int iVar1;
	
	iVar0 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_56)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_52));
	iVar1 = (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_48) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_52));
	UI_SET_STRING("Race_Pos", INT_TO_STRING((iVar0 - iVar1)));
	if (iLocal_406 == 1)
	{
		UI_SET_STRING("Race_Total_Racers", INT_TO_STRING(11));
	}
	else
	{
		UI_SET_STRING("Race_Total_Racers", INT_TO_STRING(21));
	}
	UI_LABEL_SET_TEXT("RacePosition", "Race_Position_Format");
	UI_REFRESH("RacePosition");
	return;
}

void Function_437(int iParam0) //Position: 0x1449B / 83099
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
						if ((StackVal && !Function_348(!Function_439(bVar1, Global_34573, bVar7), bVar1, fVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_438(bVar1), &uVar3, 3212836864))
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
						if ((StackVal && !Function_348(!Function_439(bVar1, Global_34573, bVar7), bVar1, fVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_438(bVar1), &uVar3, 3212836864))
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

var Function_438(bool bParam0) //Position: 0x1462F / 83503
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_439(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1464A / 83530
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

void Function_440(int iParam0, bool bParam1, float fParam2) //Position: 0x1475B / 83803
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
										if (!Function_348(StackVal, bVar1, bVar4))
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
							if (Function_348(StackVal, bVar1, bVar3))
							{
								if (StackVal && Function_348(iParam0->f_100, bVar1, bVar4))
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
							if (Function_297(iParam0 + 88) <= fParam2)
							{
								Function_225(iParam0 + 88);
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

void Function_441(int iParam0, bool bParam1) //Position: 0x14A82 / 84610
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
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
						bVar7 = 7.0f;
						bVar5 = 12.0f;
						bVar6 = 14.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						iVar4 = 3;
						bVar7 = 12.0f;
						bVar5 = 20.0f;
						bVar6 = 22.0f;
					}
					else
					{
						iVar4 = 3;
						bVar7 = 15.0f;
						bVar5 = 23.0f;
						bVar6 = 25.0f;
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
									if (!Function_348(StackVal, bVar0, bVar7))
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
									Function_225(iParam0 + 88);
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
								if (!Function_348(StackVal, bVar0, bVar6))
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
								if (StackVal || Function_348(Function_348(StackVal, bVar0, bVar5), bVar0, bVar5))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									if (Function_348(StackVal, bVar0, bVar5))
									{
									}
									else if (Function_348(StackVal, bVar0, bVar5))
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
												if (Function_348(bVar0, (*iParam0 + 104)[bVar3], 7.0f))
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
											else if (Function_348(bVar0, (*iParam0 + 104)[bVar3], 15.0f))
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

void Function_442(int iParam0, bool bParam1) //Position: 0x150C2 / 86210
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
								Function_433(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_433(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_434(iParam0->f_44);
								vVar3 = { StackVal, StackVal, Function_434(iParam0->f_44) };
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
								Function_433(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_433(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_434(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_434(iParam0->f_48) };
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
								Function_240(*iParam0);
								if (!Function_73(StackVal, StackVal, Function_240(*iParam0)))
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
								Function_240(StackVal);
								if (!Function_73(StackVal, StackVal, Function_240(StackVal)))
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
							Function_434(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_434(iParam0->f_44) };
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

void Function_443(bool bParam0, bool bParam1, bool bParam2) //Position: 0x153A0 / 86944
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

void Function_444(int iParam0) //Position: 0x15406 / 87046
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
								if (Function_348(StackVal, bVar1, fVar2))
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
								if (Function_348(StackVal, bVar1, fVar2))
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
								if (Function_348(StackVal, bVar1, fVar2))
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

void Function_445(var uParam0) //Position: 0x15622 / 87586
{
	switch (bLocal_616)
	{
		case 0x00000000:
			bLocal_616++;
			break;
		
		case 0x00000001:
			if (!IS_OBJECT_VALID(bLocal_431))
			{
				bLocal_431 = CREATE_WORLD_SECTOR(bLocal_340, "hennigansRanch");
				if (IS_OBJECT_VALID(bLocal_431))
				{
				}
			}
			bLocal_616++;
			break;
		
		case 0x00000002:
			if (IS_WORLD_SECTOR_LOADED(bLocal_431))
			{
				if (!IS_DOOR_VALID((*uParam0)[0]))
				{
					(*uParam0)[0] = Function_328("hennigansRanch", "stable02", 11);
				}
				if (!IS_DOOR_VALID((*uParam0)[1]))
				{
					(*uParam0)[1] = Function_328("hennigansRanch", "stable02", 10);
				}
				if (!IS_DOOR_VALID((*uParam0)[2]))
				{
					(*uParam0)[2] = Function_328("hennigansRanch", "barn01", 1);
				}
				if (!IS_DOOR_VALID((*uParam0)[3]))
				{
					(*uParam0)[3] = Function_328("hennigansRanch", "barn01", 2);
				}
				if (!IS_DOOR_VALID((*uParam0)[4]))
				{
					(*uParam0)[4] = Function_328("hennigansRanch", "barn02", 7);
				}
				if (!IS_DOOR_VALID((*uParam0)[5]))
				{
					(*uParam0)[5] = Function_328("hennigansRanch", "barn02", 8);
				}
				bLocal_616++;
			}
			break;
		
		case 0x00000003:
			if (IS_DOOR_VALID((*uParam0)[0]) && IS_DOOR_VALID((*uParam0)[1]))
			{
				Function_154((*uParam0)[0], 0);
				if (iLocal_406 == 4)
				{
					OPEN_DOOR_DIRECTION((*uParam0)[0], false);
				}
				else if (iLocal_406 == 101)
				{
					OPEN_DOOR_DIRECTION((*uParam0)[0], false);
				}
				else
				{
					CLOSE_DOOR_FAST((*uParam0)[0]);
				}
				Function_154((*uParam0)[1], 0);
				if (iLocal_406 == 4)
				{
					OPEN_DOOR_DIRECTION((*uParam0)[1], true);
				}
				else if (iLocal_406 == 101)
				{
					OPEN_DOOR_DIRECTION((*uParam0)[1], true);
				}
				else
				{
					CLOSE_DOOR_FAST((*uParam0)[1]);
				}
				Function_154((*uParam0)[2], 0);
				CLOSE_DOOR_FAST((*uParam0)[2]);
				Function_154((*uParam0)[3], 0);
				CLOSE_DOOR_FAST((*uParam0)[2]);
				Function_154((*uParam0)[4], 0);
				CLOSE_DOOR_FAST((*uParam0)[4]);
				Function_154((*uParam0)[5], 0);
				CLOSE_DOOR_FAST((*uParam0)[5]);
				bLocal_616++;
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(bLocal_431))
			{
				DESTROY_OBJECT(bLocal_431);
			}
			bLocal_616++;
			break;
	}
	return;
}

void Function_446() //Position: 0x158CB / 88267
{
	if (((iLocal_407 < 5 && iLocal_407 > 105) && !iLocal_407 != 104) && !iLocal_407 != 103)
	{
		if (Function_297(&bLocal_677) <= 0,1f)
		{
			Function_444(&Local_715);
		}
		if (bLocal_647)
		{
			Function_432(&Local_715);
			if (Function_297(&bLocal_677) <= 0,1f)
			{
				Function_431(&Local_715);
				Function_430(&Local_715, 0x41700000);
			}
			if (iLocal_407 > 9)
			{
				if (Function_297(&bLocal_412) <= (3.0f * 8.0f))
				{
					if (Function_297(&bLocal_659) <= 0,2f)
					{
						Function_459(&Local_715);
						Function_225(&bLocal_659);
					}
				}
			}
			Function_436();
		}
		Function_429(Global_34573);
		Function_458(Local_715.f_48, &iLocal_662, 3.0f, Local_4.f_1316, -20.0f);
		Function_457();
		Function_456();
		if (iLocal_407 > 8)
		{
			if (((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_56)) && SQUAD_IS_VALID(Local_715.f_52))
			{
				if (SQUAD_GET_SIZE(Local_715.f_44) != bLocal_618 || ((SQUAD_GET_SIZE(Local_715.f_48) != 0 && SQUAD_GET_SIZE(Local_715.f_56) != 0) && SQUAD_GET_SIZE(Local_715.f_52) != 0))
				{
					UI_HIDE("RacePosition");
					Function_244();
					Function_225(&bLocal_412);
					iLocal_407 = 106;
				}
			}
		}
		Function_454();
		if (Function_297(&bLocal_677) <= 0,1f)
		{
			Function_225(&bLocal_677);
		}
	}
	switch (iLocal_407)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_410, GET_ACTOR_MAX_HEALTH(bLocal_410));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_421[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_408 = Global_30628[2];
				if (!Function_333(bLocal_408))
				{
					Function_331(&Local_341);
				}
				Function_330(Global_34573, (*&Local_4 + 564)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_411))
				{
					TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_411, true);
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				Function_225(&bLocal_412);
				iLocal_407 = 1;
			}
			else
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
			bLocal_616 = false;
			iLocal_617 = 0;
			iLocal_624 = 0;
			iLocal_625 = 0;
			iLocal_627 = 0;
			iLocal_432 = 0;
			iLocal_653 = 0;
			iLocal_655 = 0;
			iLocal_656 = 0;
			iLocal_658 = 0;
			Function_326(0,65f);
			Function_325(0,01f);
			Function_323(4, 1);
			if (Function_381())
			{
			}
			bLocal_618 = Function_322(Local_341);
			PRINTINT(bLocal_618);
			PRINTNL();
			bLocal_619 = (21 - bLocal_618);
			PRINTINT(bLocal_619);
			PRINTNL();
			bLocal_622 = Global_34165.f_124;
			bLocal_623 = Global_34165.f_128;
			PRINTINT(bLocal_622);
			PRINTNL();
			PRINTINT(bLocal_623);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Local_715.f_76 = bLocal_622;
			Local_715.f_80 = bLocal_623;
			Function_452();
			if (iLocal_421[2] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_330(Global_34573, (*&Local_4 + 564)[0], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_411))
					{
						Function_330(bLocal_411, (*&Local_4 + 564)[1], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
						}
					}
					else
					{
						bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					Function_330(bLocal_410, (*&Local_4 + 564)[2], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
					{
						Function_330((*&Local_4 + 164)[02], (*&Local_4 + 564)[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
						}
					}
				}
			}
			if ((SQUAD_IS_VALID(Local_715.f_56) && SQUAD_IS_VALID(Local_715.f_52)) && SQUAD_IS_VALID(Local_715.f_48))
			{
				Function_351(Local_715.f_56);
				Function_351(Local_715.f_52);
				Function_351(Local_715.f_48);
				Function_451(Local_715.f_56, Local_715.f_44);
				Function_451(Local_715.f_52, Local_715.f_44);
				Function_451(Local_715.f_48, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_715.f_44);
				Function_300(Local_715.f_44);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_364, -1.0f);
			}
			Function_387(&(Local_473[017]), bLocal_410, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[117]), Local_4.f_160, "Rancher", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[217]), Local_715.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[317]), Local_715.f_48, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[417]), Local_715.f_52, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[517]), Local_715.f_56, "Cow", 0, 0x5f5e100, 1);
			Function_386(&(Local_473[617]));
			Function_386(&(Local_473[717]));
			Function_382(&(Local_473[217]), 2);
			Function_382(&(Local_473[317]), 2);
			Function_382(&(Local_473[417]), 2);
			Function_382(&(Local_473[517]), 2);
			if (HUD_IS_FADED())
			{
				Function_225(&bLocal_412);
				iLocal_407 = 5;
			}
			else
			{
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			Function_239(iLocal_406);
			Function_376(StackVal, StackVal, Function_239(iLocal_406), iLocal_406, Global_30628[2], Function_242(iLocal_406), 2);
			bLocal_628 = Function_375();
			PRINTINT(bLocal_628);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(bLocal_410) && IS_ACTOR_VALID((*&Local_4 + 164)[02])) && IS_ACTOR_VALID(bLocal_411)) && SQUAD_IS_VALID(Local_715.f_44)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_715.f_44, (SQUAD_GET_SIZE(Local_715.f_44) - 1))))
			{
				if (((Function_374(bLocal_410, 1, 0x41700000) && Function_374((*&Local_4 + 164)[02], 1, 0x41700000)) && Function_374(bLocal_411, 1, 0x41700000)) && Function_374(SQUAD_GET_ACTOR_BY_INDEX(Local_715.f_44, (SQUAD_GET_SIZE(Local_715.f_44) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_410) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_225(&bLocal_412);
						iLocal_407 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(Global_34573))
						{
							Function_330(Global_34573, (*&Local_4 + 564)[0], 1, 1, 1);
							if (IS_ACTOR_VALID(bLocal_411))
							{
								Function_330(bLocal_411, (*&Local_4 + 564)[1], 1, 1, 1);
								if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
								{
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
								}
							}
							else
							{
								bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(bLocal_410))
						{
							Function_330(bLocal_410, (*&Local_4 + 564)[2], 1, 1, 1);
							if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
							{
								Function_330((*&Local_4 + 164)[02], (*&Local_4 + 564)[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
								{
									ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
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
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				Function_373();
				Function_450();
				Function_300(Local_715.f_44);
				Function_370(Local_715.f_44, &Local_4 + 248);
				Function_369(Local_715.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_225(&bLocal_412);
			iLocal_407 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_630))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_630 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_340, "RANCH08_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_630))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_630, 0);
						}
					}
				}
				if (iLocal_421[2] == 1)
				{
					if (SQUAD_IS_VALID(Local_715.f_44))
					{
						Function_373();
						Function_450();
						Function_300(Local_715.f_44);
						Function_370(Local_715.f_44, &Local_4 + 248);
						Function_369(Local_715.f_44, 2, 1);
					}
				}
				bLocal_648 = false;
				if (SQUAD_IS_VALID(Local_715.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_48);
					Function_301(Local_715.f_48);
				}
				*(&Local_715 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_715.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_52);
					Function_301(Local_715.f_52);
				}
				Local_715.f_8 = Local_4.f_824;
				GET_OBJECT_POSITION(Local_4.f_824, &uLocal_691);
				if (SQUAD_IS_VALID(Local_715.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_56);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_691, 7.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_368, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				}
				if (bLocal_618 == 21)
				{
					Function_449();
				}
				else
				{
					Function_448();
				}
				Function_225(&bLocal_412);
				iLocal_407 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_447();
				Function_225(&bLocal_412);
				iLocal_407 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_297(&bLocal_412) <= 2,5f)
			{
				UI_SHOW("RacePosition");
				Function_367("ranch08_obj04", 7,5f, 1, 2, 0, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, bLocal_340, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_709))
				{
					REMOVE_BLIP(bLocal_709);
				}
				if (IS_OBJECT_VALID(bLocal_631))
				{
					DESTROY_OBJECT(bLocal_631);
				}
				if (bLocal_647)
				{
					Function_363();
				}
			}
			else
			{
				if (bLocal_648)
				{
					Function_356(StackVal, &bLocal_418, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_429, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_356(StackVal, &bLocal_418, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_429, 0, 0, 0, 4294967295, 1);
				}
				if (!bLocal_647)
				{
					Function_244();
					Function_355();
				}
			}
			if (Function_297(&bLocal_412) <= (2,5f * 8.0f))
			{
				if ((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_52))
				{
					if (SQUAD_GET_SIZE(Local_715.f_44) <= bLocal_618)
					{
						if (SQUAD_GET_SIZE(Local_715.f_52) == 0)
						{
							if (SQUAD_GET_SIZE(Local_715.f_48) <= 0 && SQUAD_GET_SIZE(Local_715.f_48) > 3)
							{
								Function_244();
								Function_225(&bLocal_412);
								iLocal_407 = 10;
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (SQUAD_GET_SIZE(Local_715.f_48) == 1)
				{
					Function_367("ranch08_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0);
				}
				else
				{
					Function_367("ranch08_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0);
				}
				Function_225(&bLocal_412);
				Function_225(&bLocal_415);
				Function_225(&bLocal_418);
				iLocal_407 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, bLocal_340, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_709))
				{
					REMOVE_BLIP(bLocal_709);
				}
				if (IS_OBJECT_VALID(bLocal_631))
				{
					DESTROY_OBJECT(bLocal_631);
				}
				if (bLocal_647)
				{
					Function_363();
				}
			}
			else
			{
				Function_356(StackVal, &bLocal_418, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_429, 0, 0, 0, 4294967295, 1);
				if (!bLocal_647)
				{
					Function_244();
					Function_355();
				}
			}
			if ((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_52))
			{
				if (SQUAD_GET_SIZE(Local_715.f_44) == bLocal_618)
				{
					if (SQUAD_GET_SIZE(Local_715.f_48) != 0 && SQUAD_GET_SIZE(Local_715.f_52) != 0)
					{
						Function_244();
						Function_225(&bLocal_412);
						iLocal_407 = 9;
					}
				}
			}
			if (Function_297(&bLocal_415) <= 45.0f)
			{
				Function_244();
				Function_225(&bLocal_412);
				Function_225(&bLocal_415);
				iLocal_407 = 9;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(Local_715.f_56))
				{
					bLocal_618 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_44);
					Function_224(Local_341, bLocal_618);
				}
				PRINTINT(bLocal_618);
				PRINTNL();
				bLocal_619 = (21 - bLocal_618);
				PRINTINT(bLocal_619);
				PRINTNL();
				bLocal_622 = Local_715.f_76;
				Global_34165.f_124 = bLocal_622;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_623 = Local_715.f_80;
				Global_34165.f_128 = bLocal_623;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				iLocal_421[3] = 1;
				Function_225(&bLocal_412);
				iLocal_406 = 4;
				iLocal_407 = 0;
			}
			break;
	}
	return;
}

void Function_447() //Position: 0x16629 / 91689
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_RndUp", "Ranch08_RndUp", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_448() //Position: 0x1666C / 91756
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_saveSome", "Ranch08_saveSome", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x166B5 / 91829
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_saveAll", "Ranch08_saveAll", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_450() //Position: 0x166FC / 91900
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_715.f_44, Local_715.f_60, Local_715.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_451(bool bParam0, bool bParam1) //Position: 0x16724 / 91940
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

void Function_452() //Position: 0x16768 / 92008
{
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_321();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_320(Local_4.f_176, 0);
			Function_319(Local_4.f_176, 3);
			Function_317(Local_4.f_176, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
			{
				Function_330((*&Local_4 + 164)[02], (*&Local_4 + 564)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_316();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_320(Local_4.f_200, 0);
			Function_319(Local_4.f_200, 3);
			Function_317(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 180)[02]))
			{
				Function_330((*&Local_4 + 180)[02], (*&Local_4 + 564)[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 180)[12]))
			{
				Function_330((*&Local_4 + 180)[12], (*&Local_4 + 564)[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_160))
	{
		Function_315();
		if (SQUAD_IS_VALID(Local_4.f_160))
		{
			Function_320(Local_4.f_160, 0);
			SQUAD_SET_FACTION(Local_4.f_160, 20);
			Function_317(Local_4.f_160, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
			{
				Function_330((*&Local_4 + 140)[02], (*&Local_4 + 564)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
			{
				Function_330((*&Local_4 + 140)[12], (*&Local_4 + 564)[7], 1, 1, 1);
			}
			Function_314(Local_4.f_160, Local_4.f_200);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_453();
	return;
}

void Function_453() //Position: 0x16905 / 92421
{
	Function_312();
	Local_715.f_12 = Local_4.f_1316;
	if (!SQUAD_IS_VALID(Local_715.f_44))
	{
		Local_715.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_44);
			Function_309(&Local_715, bLocal_340, Local_4.f_820, &iLocal_680, 2, 4,5f, 8,5f, 1,5f, 1);
			Function_320(Local_715.f_44, 0);
			Function_308(Local_715.f_44, 1);
			Function_307(Local_715.f_44, 0);
			Function_306(Local_715.f_44, 0);
			Function_305(Local_715.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_364, -1.0f);
		}
	}
	return;
}

void Function_454() //Position: 0x169D9 / 92633
{
	if (Function_297(&bLocal_668) <= 0.0f)
	{
		switch (iLocal_627)
		{
			case 0x00000000:
				iLocal_627++;
				break;
			
			case 0x00000001:
				if (iLocal_407 > 9)
				{
					iLocal_627++;
				}
				break;
			
			case 0x00000002:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_455();
				}
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_627++;
				}
				break;
			
			case 0x00000003:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_653)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_627++;
					}
				}
				break;
			
			case 0x00000004:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000006:
				iLocal_627++;
				break;
		}
		Function_225(&bLocal_668);
	}
	return;
}

void Function_455() //Position: 0x16AB1 / 92849
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_noHelpStrag", "Ranch08_noHelpStrag", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_456() //Position: 0x16B00 / 92928
{
	if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
	{
		switch (iLocal_625)
		{
			case 0x00000000:
				iLocal_625++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING((*&Local_4 + 140)[12], true);
				SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[12], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_4 + 140)[12], true);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1312, -2.0f, 1, 0);
				TASK_FACE_ACTOR(false, bLocal_410, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[12], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[12], true);
				iLocal_625++;
				break;
			
			case 0x00000002:
				iLocal_625++;
				break;
			}
	}
	return;
}

void Function_457() //Position: 0x16BB9 / 93113
{
	if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
	{
		switch (iLocal_624)
		{
			case 0x00000000:
				iLocal_624++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING((*&Local_4 + 140)[02], true);
				SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[02], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_4 + 140)[02], true);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1320, -2.0f, 1, 0);
				TASK_FACE_ACTOR(false, bLocal_410, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				iLocal_624++;
				break;
			
			case 0x00000002:
				iLocal_624++;
				break;
			}
	}
	return;
}

void Function_458(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x16C72 / 93298
{
	if (IS_ACTOR_VALID(bLocal_410))
	{
		if (SQUAD_IS_VALID(bParam0))
		{
			switch (iLocal_617)
			{
				case 0x00000000:
					iLocal_617++;
					break;
				
				case 0x00000001:
					CLEAR_ACTOR_MIN_SPEED(bLocal_410);
					CLEAR_ACTOR_MAX_SPEED(bLocal_410);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_410);
					Function_427(3, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_410, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_410, true);
					iLocal_617++;
					break;
				
				case 0x00000002:
					if (Function_297(bParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(bParam0))
						{
							if (SQUAD_GET_SIZE(bParam0) > 2)
							{
								if (!bLocal_648)
								{
									bLocal_710 = Function_426(StackVal, bParam0);
									if (IS_ACTOR_VALID(bLocal_710))
									{
										vLocal_688 = { 0.0f, 0.0f, 0.0f };
										SET_ACTOR_MAX_SPEED(bLocal_410, 4);
										bLocal_615 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(false, bLocal_710, &vLocal_688, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
										TASK_SEQUENCE_RELEASE(bLocal_615, 1);
										TASK_PRIORITY_SET(bLocal_410, true);
										bLocal_648 = true;
									}
								}
								else if (!Function_416(bLocal_710, bParam0, 0))
								{
									bLocal_648 = false;
								}
							}
							else if (!GET_TASK_STATUS(bLocal_410, 72) != 1)
							{
								SET_ACTOR_MAX_SPEED(bLocal_410, 4);
								bLocal_615 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
								TASK_SEQUENCE_RELEASE(bLocal_615, 1);
								TASK_PRIORITY_SET(bLocal_410, true);
								bLocal_648 = false;
							}
						}
						Function_225(bParam1);
					}
					break;
				
				case 0x00000003:
					iLocal_617++;
					break;
			}
		}
	}
}

void Function_459(var uParam0) //Position: 0x16DF0 / 93680
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar6;
	bool bVar7;
	
	if (uParam0->f_68 <= 4 && uParam0->f_68 >= 10)
	{
		bVar6 = (80.0f + 60.0f);
		bVar7 = (100.0f + 60.0f);
	}
	else if (uParam0->f_68 <= 11 && uParam0->f_68 >= 20)
	{
		bVar6 = (80.0f + 60.0f);
		bVar7 = (100.0f + 60.0f);
	}
	else
	{
		bVar6 = (80.0f + 60.0f);
		bVar7 = (100.0f + 60.0f);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(uParam0->f_48))
		{
			if (SQUAD_GET_SIZE(uParam0->f_48) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(uParam0->f_48) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_48, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						GET_OBJECT_POSITION(bVar1, &uVar3);
						if ((StackVal && !Function_348(!Function_439(bVar1, Global_34573, bVar7), bVar1, bVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_438(bVar1), &uVar3, 3212836864))
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
		if (SQUAD_IS_VALID(uParam0->f_52))
		{
			if (SQUAD_GET_SIZE(uParam0->f_52) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(uParam0->f_52) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_52, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						GET_OBJECT_POSITION(bVar1, &uVar3);
						if ((StackVal && !Function_348(!Function_439(bVar1, Global_34573, bVar7), bVar1, bVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_438(bVar1), &uVar3, 3212836864))
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

void Function_460() //Position: 0x16FA8 / 94120
{
	Function_346(bLocal_340);
	if (((iLocal_407 < 5 && iLocal_407 > 105) && !iLocal_407 != 104) && !iLocal_407 != 103)
	{
		if (Function_297(&bLocal_677) <= 0,1f)
		{
			Function_494(Local_715.f_44, Local_4.f_376);
		}
		if (iLocal_407 < 9)
		{
			if (bLocal_647)
			{
				Function_493(&Local_715);
				if (iLocal_407 > 8)
				{
					if (Function_297(&bLocal_677) <= 0,1f)
					{
						Function_492(&Local_715, 2,5f);
						Function_490(&Local_715, 30.0f);
					}
				}
				if (Function_297(&bLocal_659) <= 0,2f)
				{
					Function_489(&Local_715);
					Function_225(&bLocal_659);
				}
				Function_436();
			}
		}
		else if (iLocal_407 > 10)
		{
			Function_493(&Local_715);
		}
		Function_488();
		Function_487();
		Function_486();
		Function_429(Global_34573);
		Function_485();
		if (Function_297(&bLocal_677) <= 0,1f)
		{
			Function_225(&bLocal_677);
		}
	}
	switch (iLocal_407)
	{
		case 0x00000000:
			Function_342(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_410, GET_ACTOR_MAX_HEALTH(bLocal_410));
			if (IS_ACTOR_VALID(bLocal_411))
			{
				TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_411, true);
			}
			if (IS_ACTOR_VALID(bLocal_410))
			{
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_410, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_421[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_408 = Global_30628[2];
				if (!Function_333(bLocal_408))
				{
					Function_331(&Local_341);
				}
				Function_330(Global_34573, (*&Local_4 + 516)[0], 1, 1, 1);
				Function_225(&bLocal_412);
				iLocal_407 = 1;
			}
			else
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("nHERDING_2", 0, 4294967295, 4294967295);
			bLocal_616 = false;
			iLocal_617 = 0;
			iLocal_624 = 0;
			iLocal_625 = 0;
			iLocal_621 = 0;
			iLocal_627 = 0;
			iLocal_653 = 0;
			iLocal_432 = 0;
			iLocal_654 = 0;
			iLocal_655 = 0;
			iLocal_656 = 0;
			iLocal_658 = 0;
			Function_326(0,5f);
			Function_325(0,007f);
			Function_323(4, 1);
			if (Function_381())
			{
			}
			if (iLocal_406 != Global_34165.f_48 && !Function_381())
			{
				iLocal_655 = 1;
				bLocal_618 = (Function_322(Local_341) - 10);
				PRINTINT(bLocal_618);
				PRINTNL();
				bLocal_619 = (11 - bLocal_618);
				PRINTINT(bLocal_619);
				PRINTNL();
			}
			else
			{
				iLocal_655 = 0;
				bLocal_618 = Function_322(Local_341);
				PRINTINT(bLocal_618);
				PRINTNL();
				bLocal_619 = (11 - bLocal_618);
				PRINTINT(bLocal_619);
				PRINTNL();
			}
			bLocal_622 = Global_34165.f_124;
			bLocal_623 = Global_34165.f_128;
			PRINTINT(bLocal_622);
			PRINTNL();
			PRINTINT(bLocal_623);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Local_715.f_76 = bLocal_622;
			Local_715.f_80 = bLocal_623;
			Function_482();
			if (iLocal_421[1] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_330(Global_34573, (*&Local_4 + 516)[0], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_411))
					{
						Function_330(bLocal_411, (*&Local_4 + 516)[4], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
						}
					}
					else
					{
						bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					Function_330(bLocal_410, (*&Local_4 + 516)[1], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
					{
						Function_330((*&Local_4 + 164)[02], (*&Local_4 + 516)[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
						}
					}
				}
			}
			if (SQUAD_IS_VALID(Local_715.f_56))
			{
				Function_302(Local_715.f_56, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_52))
			{
				Function_302(Local_715.f_52, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_48))
			{
				Function_302(Local_715.f_48, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_715.f_44);
				Function_301(Local_715.f_44);
				Function_300(Local_715.f_44);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_356, -1.0f);
			}
			if (SQUAD_IS_VALID(bLocal_712))
			{
				SQUAD_GOALS_CLEAR(bLocal_712);
				Function_301(bLocal_712);
				Function_300(bLocal_712);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_712, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_360, -1.0f);
				Function_481(bLocal_712, Local_4.f_712, 2);
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_712, false)))
				{
					TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(bLocal_712, false), -1.0f, 0, 0);
					TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(bLocal_712, false), true);
				}
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_712, true)))
				{
					TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(bLocal_712, true), -1.0f, 0, 0);
					TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(bLocal_712, true), true);
				}
			}
			Function_387(&(Local_473[017]), bLocal_410, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[117]), Local_4.f_160, "Rancher", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[217]), Local_715.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[317]), Local_715.f_48, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[417]), Local_715.f_52, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[517]), Local_715.f_56, "Cow", 0, 0x5f5e100, 1);
			Function_386(&(Local_473[617]));
			Function_386(&(Local_473[717]));
			Function_382(&(Local_473[217]), 2);
			Function_382(&(Local_473[317]), 2);
			Function_382(&(Local_473[417]), 2);
			Function_382(&(Local_473[517]), 2);
			if (Function_479(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_341, iLocal_406))
			{
				Function_225(&bLocal_412);
				iLocal_407 = 3;
			}
			else
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_282(Global_34573, (*&Local_4 + 516)[5], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					Function_282(bLocal_410, (*&Local_4 + 516)[3], 1, 1, 1);
					TASK_CLEAR(bLocal_410);
					TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				if (IS_ACTOR_VALID(bLocal_411))
				{
					TASK_CLEAR(bLocal_411);
					TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_411, true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
				{
					TASK_CLEAR((*&Local_4 + 164)[02]);
					TASK_STAND_STILL((*&Local_4 + 164)[02], -1.0f, 0, 0);
					TASK_PRIORITY_SET((*&Local_4 + 164)[02], true);
				}
				if (SQUAD_IS_VALID(Local_715.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_44);
					Function_301(Local_715.f_44);
					Function_300(Local_715.f_44);
					Function_478(Local_715.f_44, Local_4.f_1032, 3, 4,5f, 1,5f, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1308, 3, 0, 0, 1, false);
				}
				if (SQUAD_IS_VALID(bLocal_712))
				{
					SQUAD_GOALS_CLEAR(bLocal_712);
					Function_301(bLocal_712);
					Function_300(bLocal_712);
					Function_478(bLocal_712, Local_4.f_1036, 3, 4,5f, 1,5f, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_712, false, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1308, 3, 0, 0, 1, false);
				}
				Function_225(&bLocal_412);
				iLocal_407 = 4;
			}
			if (iLocal_655)
			{
				Function_239(iLocal_406);
				Function_376(StackVal, StackVal, Function_239(iLocal_406), iLocal_406, Global_30628[2], Function_242(iLocal_406), 2);
				bLocal_628 = Function_375();
				PRINTINT(bLocal_628);
				PRINTNL();
			}
			break;
		
		case 0x00000003:
			if (Function_467())
			{
				Function_225(&bLocal_412);
				iLocal_407 = 4;
			}
			break;
		
		case 0x00000004:
			PRINTINT(bLocal_628);
			PRINTNL();
			if (iLocal_655)
			{
			}
			else
			{
				PRINTINT(bLocal_618);
				PRINTNL();
				bLocal_619 = (11 - bLocal_618);
				PRINTINT(bLocal_619);
				PRINTNL();
				bLocal_618 += 10;
				Function_224(Local_341, bLocal_618);
				PRINTINT(bLocal_618);
				PRINTNL();
				bLocal_619 = (21 - bLocal_618);
				PRINTINT(bLocal_619);
				PRINTNL();
			}
			Function_325(0,01f);
			if (!iLocal_654)
			{
				AUDIO_MUSIC_SET_MOOD("CHASE_HIGH", 0, 4294967295, 4294967295);
				iLocal_654 = 1;
			}
			if (SQUAD_IS_VALID(bLocal_712))
			{
				SQUAD_GOALS_CLEAR(bLocal_712);
				Function_301(bLocal_712);
				Function_302(bLocal_712, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_715.f_44);
				Function_301(Local_715.f_44);
				Local_715.f_68 = 21;
				Function_466();
				Function_465();
				Function_300(Local_715.f_44);
				Function_370(Local_715.f_44, &Local_4 + 272);
				Function_369(Local_715.f_44, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_715.f_44, Local_715.f_60, 1, 0,01f, 0,01f);
				Function_464(Local_715.f_44, 424, 0,9f, 0);
			}
			if (IS_ACTOR_VALID(bLocal_410))
			{
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_410))
				{
					ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				TASK_CLEAR(Global_34573);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
			{
				TASK_CLEAR((*&Local_4 + 164)[02]);
			}
			if (HUD_IS_FADED())
			{
				Function_225(&bLocal_412);
				iLocal_407 = 5;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			if (!iLocal_655)
			{
				Function_239(iLocal_406);
				Function_376(StackVal, StackVal, Function_239(iLocal_406), iLocal_406, Global_30628[2], Function_242(iLocal_406), 2);
				bLocal_628 = Function_375();
				PRINTINT(bLocal_628);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(bLocal_410) && IS_ACTOR_VALID((*&Local_4 + 164)[02])) && IS_ACTOR_VALID(bLocal_411)) && SQUAD_IS_VALID(Local_715.f_44)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_715.f_44, (SQUAD_GET_SIZE(Local_715.f_44) - 1))))
			{
				if (((Function_374(bLocal_410, 1, 0x41700000) && Function_374((*&Local_4 + 164)[02], 1, 0x41700000)) && Function_374(bLocal_411, 1, 0x41700000)) && Function_374(SQUAD_GET_ACTOR_BY_INDEX(Local_715.f_44, (SQUAD_GET_SIZE(Local_715.f_44) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_410) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_225(&bLocal_412);
						iLocal_407 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(Global_34573))
						{
							Function_330(Global_34573, (*&Local_4 + 516)[0], 1, 1, 1);
							if (IS_ACTOR_VALID(bLocal_411))
							{
								Function_330(bLocal_411, (*&Local_4 + 516)[4], 1, 1, 1);
								if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
								{
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
								}
							}
							else
							{
								bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(bLocal_410))
						{
							Function_330(bLocal_410, (*&Local_4 + 516)[1], 1, 1, 1);
							if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
							{
								Function_330((*&Local_4 + 164)[02], (*&Local_4 + 516)[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
								{
									ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
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
			CAMERA_RESET(0);
			Function_225(&bLocal_412);
			iLocal_407 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 1232), 300.0f, 1);
				GET_OBJECT_POSITION(Local_4.f_820, &uLocal_685);
				if (IS_ACTOR_VALID(Global_34573))
				{
					SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
					SET_FORCED_LOOK_ENABLE(Global_34573, 0);
					UNK_0xFF36BAED(Global_34573, &uLocal_685, 1, 7.0f);
				}
				if (!IS_OBJECT_VALID(bLocal_630))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_630 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_340, "RANCH08_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_630))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_630, 0);
						}
					}
				}
				bLocal_648 = false;
				if (SQUAD_IS_VALID(Local_715.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_48);
					Function_301(Local_715.f_48);
				}
				*(&Local_715 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_715.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_52);
					Function_301(Local_715.f_52);
				}
				Local_715.f_8 = Local_4.f_820;
				GET_OBJECT_POSITION(Local_4.f_820, &uLocal_691);
				if (SQUAD_IS_VALID(Local_715.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_56);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_691, 15.0f, true);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_364, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				}
				Function_463();
				Function_225(&bLocal_412);
				iLocal_407 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				TRIGGER_LIGHTNING_SEQUENCE();
				UI_SHOW("RacePosition");
				Function_367("ranch08_obj03", 7,5f, 1, 2, 0, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 9;
			}
			break;
		
		case 0x00000009:
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				if (SQUAD_GET_SIZE(Local_715.f_44) > 5)
				{
					if (!iLocal_641[2])
					{
						if (!Function_133())
						{
							iLocal_641[2] = 1;
							Function_462();
						}
					}
				}
			}
			if (((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_56)) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_52))
			{
				if ((SQUAD_GET_SIZE(Local_715.f_44) != 0 && SQUAD_GET_SIZE(Local_715.f_48) != 0) && SQUAD_GET_SIZE(Local_715.f_52) != 0)
				{
					if (IS_BLIP_VALID(bLocal_709))
					{
						REMOVE_BLIP(bLocal_709);
					}
					if (IS_OBJECT_VALID(bLocal_631))
					{
						DESTROY_OBJECT(bLocal_631);
					}
					Function_351(Local_715.f_44);
					Function_351(Local_715.f_48);
					Function_351(Local_715.f_52);
					Function_351(Local_715.f_56);
					UI_HIDE("RacePosition");
					Function_244();
					Function_225(&bLocal_412);
					iLocal_407 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
			GET_OBJECT_POSITION(Local_4.f_820, &uLocal_685);
			if (IS_ACTOR_VALID(Global_34573))
			{
				SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
				SET_FORCED_LOOK_ENABLE(Global_34573, 1);
			}
			if (IS_ACTOR_VALID(bLocal_410))
			{
				Function_427(3, 1, 1);
			}
			if (SQUAD_IS_VALID(Local_715.f_56))
			{
				Function_302(Local_715.f_56, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_52))
			{
				Function_302(Local_715.f_52, Local_715.f_44);
			}
			if (SQUAD_IS_VALID(Local_715.f_48))
			{
				Function_302(Local_715.f_48, Local_715.f_44);
			}
			Function_225(&bLocal_412);
			iLocal_407 = 11;
			break;
		
		case 0x0000000B:
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				Function_373();
				Function_450();
				Function_300(Local_715.f_44);
				Function_370(Local_715.f_44, &Local_4 + 296);
				Function_369(Local_715.f_44, 2, 1);
			}
			bLocal_648 = false;
			if (SQUAD_IS_VALID(Local_715.f_48))
			{
				SQUAD_GOALS_CLEAR(Local_715.f_48);
				Function_301(Local_715.f_48);
			}
			*(&Local_715 + 28) = { 0.0f, 0.0f, 0.0f };
			if (SQUAD_IS_VALID(Local_715.f_52))
			{
				SQUAD_GOALS_CLEAR(Local_715.f_52);
				Function_301(Local_715.f_52);
			}
			Local_715.f_8 = Local_4.f_820;
			GET_OBJECT_POSITION(Local_4.f_820, &uLocal_691);
			if (SQUAD_IS_VALID(Local_715.f_56))
			{
				SQUAD_GOALS_CLEAR(Local_715.f_56);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uLocal_691, 7.0f, 4);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_364, -1.0f);
				TASK_SEQUENCE_CLOSE();
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_56, false, 1, 4294967295);
				TASK_SEQUENCE_PERFORM(false, bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
			}
			Function_367("RanchersDaughter_return", 7,5f, 1, 2, 0, 0, 0);
			Function_225(&bLocal_412);
			Function_225(&bLocal_415);
			Function_225(&bLocal_418);
			iLocal_407 = 12;
			break;
		
		case 0x0000000C:
			if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, bLocal_340, 0, 334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
				{
					Function_427(3, 0, 1);
				}
			}
			else if (Function_461(&bLocal_418, 110.0f, 250.0f, bLocal_410, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_429, 0, 0, 0, 325, 1))
			{
			}
			else if (IS_ACTOR_RIDING(Global_34573))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
				{
					Function_427(3, 1, 1);
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (Function_408(Global_34573, bLocal_410, (6.0f * 3.0f)))
				{
					if (IS_BLIP_VALID(bLocal_709))
					{
						REMOVE_BLIP(bLocal_709);
					}
					if (IS_OBJECT_VALID(bLocal_631))
					{
						DESTROY_OBJECT(bLocal_631);
					}
					Function_427(3, 0, 1);
					Function_244();
					Function_225(&bLocal_412);
					iLocal_407 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			if (((SQUAD_IS_VALID(Local_715.f_56) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_52)) && SQUAD_IS_VALID(Local_715.f_56))
			{
				bLocal_618 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_52)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_56));
				Function_224(Local_341, bLocal_618);
			}
			PRINTINT(bLocal_618);
			PRINTNL();
			bLocal_619 = (21 - bLocal_618);
			PRINTINT(bLocal_619);
			PRINTNL();
			bLocal_622 = Local_715.f_76;
			Global_34165.f_124 = bLocal_622;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_623 = Local_715.f_80;
			Global_34165.f_128 = bLocal_623;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			iLocal_421[2] = 1;
			Function_225(&bLocal_412);
			iLocal_406 = 3;
			iLocal_407 = 0;
			break;
	}
	return;
}

bool Function_461(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x180BC / 98492
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_439(Global_34573, bParam3, bParam2))
	{
		Function_233(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_439(Global_34573, bParam3, bParam1))
	{
		if (!Function_362(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_367(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_361(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_360(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_360(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_362(2))
	{
		Function_359(2);
		if (!Function_358())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_357();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_221(bParam3);
				Function_428(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_360(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_360(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_462() //Position: 0x18250 / 98896
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_runCliffFaster", "Ranch08_runCliffFaster", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_463() //Position: 0x182A5 / 98981
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_runCliff", "Ranch08_runCliff", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_464(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x182EE / 99054
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, bParam1, 0, 2, 0);
			if (IS_BLIP_VALID(bVar2))
			{
				SET_BLIP_SCALE(bVar2, fParam2);
				if (bParam3)
				{
					SET_BLIP_FLAG(bVar2, 4096, 1);
				}
				else
				{
					SET_BLIP_FLAG(bVar2, 4096, 0);
				}
			}
		}
		bVar0++;
	}
}

void Function_465() //Position: 0x18354 / 99156
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_715.f_44, Local_715.f_60, Local_715.f_12, 100.0f, 1.0f, 1.0f, 20.0f);
	return;
}

void Function_466() //Position: 0x18378 / 99192
{
	Function_301(Local_715.f_44);
	SQUAD_GOALS_CLEAR(Local_715.f_44);
	Local_715.f_60 = UNK_0x48588CCB(Local_715.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_715.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_715.f_44, Local_715.f_60);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 0, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 1, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 2, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 8, 1,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 15, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 16, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 21, 8,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 20, 12,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 24, 360.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 25, 1.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 17, 0.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 18, 50.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 26, 0.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 28, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 1, 29, 15.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 0, 21, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_715.f_44, Local_715.f_60, 0, 20, 3.0f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_715.f_44, Local_715.f_60, Global_34573, 7.0f, 60.0f, 0);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, Global_34573, 12.0f, 5.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 0);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 0, 0);
	if (IS_ACTOR_VALID(bLocal_410))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_410);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_715.f_40);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_410, Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, bLocal_410, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 140)[02]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 140)[02], Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, (*&Local_4 + 140)[02], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 140)[12]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 140)[12], Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, (*&Local_4 + 140)[12], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	bLocal_647 = true;
	DECOR_SET_BOOL(Global_34573, "herding", true);
	return;
}

bool Function_467() //Position: 0x1866F / 99951
{
	var uVar0;
	
	if (Function_299(&Local_399 + 4))
	{
		if (Function_297(&Local_399 + 4) <= 2.0f)
		{
			Function_295(&Local_399, 1, 0);
		}
	}
	switch (Local_399)
	{
		case 0x000003E8:
			Function_291(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 6, bLocal_410);
				Local_399.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_399.f_16 = Function_471(Local_4, 0, Global_34573, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_399.f_16))
				{
				}
				else
				{
					LOG_ERROR("ranch08_cutscene03 - Failed to create ranch08_cutscene03_cutscene");
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				Function_330(Global_34573, (*&Local_4 + 516)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_411))
				{
					Function_330(bLocal_411, (*&Local_4 + 516)[4], 1, 1, 1);
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
					{
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
					}
				}
				else
				{
					bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(bLocal_410))
			{
				Function_330(bLocal_410, (*&Local_4 + 516)[1], 1, 1, 1);
				if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
				{
					Function_330((*&Local_4 + 164)[02], (*&Local_4 + 516)[3], 1, 1, 1);
					if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
					{
						ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
					}
				}
			}
			Local_399 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_399.f_16), false))
			{
				Function_284(Global_34573, 1, 1);
				Function_284(bLocal_410, 1, 1);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 228)[1]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 228)[1]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 228)[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 228)[1]);
				Function_280(&Local_399 + 4);
				Local_399 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Local_399 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_297(&Local_399 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_225(&Local_399 + 4);
					iLocal_746 = 6;
					iLocal_747 = 6;
					Local_399 = 1004;
				}
			}
			else
			{
				Function_225(&Local_399 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_469() && Function_468())
			{
				Function_225(&Local_399 + 4);
				Local_399 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				HUD_TIMER_DISPLAY(0);
				Function_284(Global_34573, 0, 1);
				Function_284(bLocal_410, 0, 1);
				if (IS_ACTOR_VALID(Global_34573))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
					TASK_CLEAR(Global_34573);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
				{
					TASK_CLEAR((*&Local_4 + 164)[02]);
				}
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_273(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_399.f_16))
				{
					DESTROY_OBJECT(Local_399.f_16);
				}
				Local_399 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_282(Global_34573, (*&Local_4 + 516)[5], 1, 1, 1);
					TASK_CLEAR(Global_34573);
					TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					TASK_PRIORITY_SET(Global_34573, true);
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					Function_282(bLocal_410, (*&Local_4 + 516)[3], 1, 1, 1);
					TASK_CLEAR(bLocal_410);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_410, 1);
					TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				if (IS_ACTOR_VALID(bLocal_411))
				{
					TASK_CLEAR(bLocal_411);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_411, 0);
					TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_411, true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
				{
					TASK_CLEAR((*&Local_4 + 164)[02]);
					RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 164)[02], 0);
					TASK_STAND_STILL((*&Local_4 + 164)[02], -1.0f, 0, 0);
					TASK_PRIORITY_SET((*&Local_4 + 164)[02], true);
				}
				if (SQUAD_IS_VALID(Local_715.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_44);
					Function_301(Local_715.f_44);
					Function_300(Local_715.f_44);
					Function_478(Local_715.f_44, Local_4.f_1032, 3, 4,5f, 1,5f, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1308, 3, 0, 0, 1, false);
				}
				if (SQUAD_IS_VALID(bLocal_712))
				{
					SQUAD_GOALS_CLEAR(bLocal_712);
					Function_301(bLocal_712);
					Function_300(bLocal_712);
					Function_478(bLocal_712, Local_4.f_1036, 3, 4,5f, 1,5f, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_712, false, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1308, 3, 0, 0, 1, false);
				}
				Local_399 = 1104;
			}
			break;
	}
	return 0;
}

int Function_468() //Position: 0x18B24 / 101156
{
	if (iLocal_747 > 45)
	{
		if (Function_297(&Local_399 + 4) < (8.0f + 0,5f))
		{
			if (iLocal_621 <= 2)
			{
				if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
				{
					if (!IS_ACTION_NODE_PLAYING((*&Local_4 + 164)[02], "horse_Main/Melee/RearUp"))
					{
						SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 164)[02], "horse_Main/Melee/RearUp");
						iLocal_621++;
					}
				}
			}
		}
	}
	switch (iLocal_747)
	{
		case 0x00000006:
			if (Function_297(&Local_399 + 4) < 0,25f)
			{
				iLocal_747 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_297(&Local_399 + 4) < 0,75f)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(false, &Local_4 + 1040, true);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET(Global_34573, true);
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(false, &Local_4 + 1088, true);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				iLocal_747 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_297(&Local_399 + 4) < 4.0f)
			{
				iLocal_747 = 33;
			}
			break;
		
		case 0x00000021:
			if (Function_297(&Local_399 + 4) < 5.0f)
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				TRIGGER_LIGHTNING_SEQUENCE();
				iLocal_747 = 34;
			}
			break;
		
		case 0x00000022:
			if (Function_297(&Local_399 + 4) < 5,25f)
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				iLocal_747 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_297(&Local_399 + 4) < 6,5f)
			{
				AUDIO_MUSIC_SET_MOOD("CHASE_HIGH", 0, 4294967295, 4294967295);
				iLocal_654 = 1;
				bLocal_632 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_4, "FXLIGHTNING01", "script_lightning_strike", *(&Local_4 + 828));
				if (IS_OBJECT_VALID(bLocal_632))
				{
					Function_240(bLocal_632);
					PRINTVECTOR(Function_240(bLocal_632));
					PRINTNL();
					PRINTVECTOR(*(&Local_4 + 828));
					PRINTNL();
				}
				UNK_0x6745191B(bLocal_632, *(&Local_4 + 828 + 12));
				TRIGGER_LIGHTNING_SEQUENCE();
				iLocal_747 = 36;
			}
			break;
		
		case 0x00000024:
			if (Function_297(&Local_399 + 4) < 6,75f)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
					SET_FORCED_LOOK_ENABLE(Global_34573, 0);
				}
				if (SQUAD_IS_VALID(Local_715.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_44);
					Function_301(Local_715.f_44);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 984, 6.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					Function_371(Local_715.f_44, Local_4.f_392);
					Function_371(Local_715.f_44, Local_4.f_396);
				}
				if (SQUAD_IS_VALID(bLocal_712))
				{
					SQUAD_GOALS_CLEAR(bLocal_712);
					Function_301(bLocal_712);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 1008, 6.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_712, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					Function_371(bLocal_712, Local_4.f_392);
					Function_371(bLocal_712, Local_4.f_396);
				}
				iLocal_747 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_297(&Local_399 + 4) < 8.0f)
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				TRIGGER_LIGHTNING_SEQUENCE();
				iLocal_747 = 46;
			}
			break;
		
		case 0x0000002E:
			if (Function_297(&Local_399 + 4) < 8,75f)
			{
				if (IS_ACTOR_VALID(bLocal_411))
				{
					SET_ACTION_NODE_FOR_ACTOR(bLocal_411, "horse_Main/Melee/RearUp");
				}
				iLocal_747 = 47;
			}
			break;
		
		case 0x0000002F:
			if (Function_297(&Local_399 + 4) < 11.0f)
			{
				if (SQUAD_IS_VALID(Local_715.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_44);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 984, 6.0f, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				}
				if (SQUAD_IS_VALID(bLocal_712))
				{
					SQUAD_GOALS_CLEAR(bLocal_712);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 1008, 6.0f, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_712, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				}
				iLocal_747 = 48;
			}
			break;
		
		case 0x00000030:
			if (Function_297(&Local_399 + 4) < 11.0f)
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				TRIGGER_LIGHTNING_SEQUENCE();
				GET_OBJECT_POSITION(Local_4.f_816, &uLocal_685);
				if (IS_ACTOR_VALID(Global_34573))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, false);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(Global_34573, true);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(false, &Local_4 + 1064, 4);
					TASK_FACE_COORD(false, &uLocal_685, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET(Global_34573, true);
				}
				iLocal_747 = 49;
			}
			break;
		
		case 0x00000031:
			if (Function_297(&Local_399 + 4) < 12,5f)
			{
				if (IS_ACTOR_VALID(bLocal_410))
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_410, true);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(false, &Local_4 + 1136, 2);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				iLocal_747 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_297(&Local_399 + 4) < 15,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_469() //Position: 0x19088 / 102536
{
	switch (iLocal_746)
	{
		case 0x00000006:
			if (Function_297(&Local_399 + 4) < 0.0f)
			{
				iLocal_746 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_297(&Local_399 + 4) < 3.0f)
			{
				iLocal_746 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_297(&Local_399 + 4) < 8,5f)
			{
				iLocal_746 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_297(&Local_399 + 4) < 11.0f)
			{
				Function_470();
				iLocal_746 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_297(&Local_399 + 4) < 13,5f)
			{
				iLocal_746 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_297(&Local_399 + 4) < 15,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_470() //Position: 0x19149 / 102729
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_CS02_AA", "Ranch08_CS02_AA", false, 1, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_471(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19190 / 102800
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 5, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ranch08_cutscene03", 5, 1);
	}
	Function_472(&bVar0, uParam2);
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

void Function_472(var uParam0, char* cParam1) //Position: 0x19210 / 102928
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_477(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_476(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_475(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_474(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_473(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 5,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 1, 4, 3.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 8.0f, 3, 0);
	return;
}

void Function_473(int iParam0) //Position: 0x192AE / 103086
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -622,6017f, 103,3779f, 2617,707f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,427958f, 1,349987f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_474(int iParam0) //Position: 0x19318 / 103192
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -586,4291f, 101,2953f, 2599,123f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,000773f, 2,547348f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_475(int iParam0) //Position: 0x1937B / 103291
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -584,093f, 100,1727f, 2619,721f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,082793f, 1,036669f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_476(int iParam0) //Position: 0x193DE / 103390
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -619,7073f, 102,0563f, 2618,376f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,341236f, 1,340245f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_477(bool bParam0) //Position: 0x19441 / 103489
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -588,0919f, 100,837f, 2617,283f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,095627f, 1,042151f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_478(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x194A4 / 103588
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
			Function_240(bParam1);
			vVar3 = { StackVal, StackVal, Function_240(bParam1) };
			Function_311(bParam1);
			Var9 = { StackVal, StackVal, Function_311(bParam1) };
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
					Function_283(StackVal, StackVal, StackVal, bVar2, vVar6, 1, 1, 1);
					iVar1++;
					vVar6.x = (vVar6.x + fParam3);
				}
				bVar0++;
			}
		}
	}
}

bool Function_479(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x19558 / 103768
{
	if (Function_480(&iParam0) == iParam7 || Function_381())
	{
		return 1;
	}
	return 0;
}

int Function_480(int iParam0) //Position: 0x19577 / 103799
{
	if (Function_332(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_481(bool bParam0, bool bParam1, int iParam2) //Position: 0x1958F / 103823
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	struct<5> Var6;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECTSET_VALID(bParam1))
		{
			bVar0 = false;
			while (bVar0 < (iParam2 - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
					if (IS_OBJECT_VALID(bVar2))
					{
						Function_240(bVar2);
						vVar3 = { StackVal, StackVal, Function_240(bVar2) };
						Function_311(bVar2);
						Var6 = { StackVal, StackVal, Function_311(bVar2) };
						if (!Function_73(StackVal, StackVal, vVar3))
						{
							if (!Function_73(StackVal, StackVal, Var6))
							{
								TELEPORT_ACTOR_WITH_HEADING(StackVal, bVar1, vVar3, 1, true, 1);
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

void Function_482() //Position: 0x19626 / 103974
{
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_321();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_320(Local_4.f_176, 0);
			Function_319(Local_4.f_176, 3);
			Function_317(Local_4.f_176, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
			{
				Function_330((*&Local_4 + 164)[02], (*&Local_4 + 516)[2], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_316();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_320(Local_4.f_200, 0);
			Function_319(Local_4.f_200, 3);
			Function_317(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 180)[02]))
			{
				Function_330((*&Local_4 + 180)[02], (*&Local_4 + 516)[9], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 180)[12]))
			{
				Function_330((*&Local_4 + 180)[12], (*&Local_4 + 516)[8], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_160))
	{
		Function_315();
		if (SQUAD_IS_VALID(Local_4.f_160))
		{
			Function_320(Local_4.f_160, 0);
			SQUAD_SET_FACTION(Local_4.f_160, 20);
			Function_317(Local_4.f_160, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
			{
				Function_330((*&Local_4 + 140)[02], (*&Local_4 + 516)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
			{
				Function_330((*&Local_4 + 140)[12], (*&Local_4 + 516)[7], 1, 1, 1);
			}
			Function_314(Local_4.f_160, Local_4.f_200);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_483();
	return;
}

void Function_483() //Position: 0x197C5 / 104389
{
	Function_312();
	Local_715.f_12 = Local_4.f_1308;
	if (!SQUAD_IS_VALID(Local_715.f_44))
	{
		Local_715.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_44);
			Function_309(&Local_715, bLocal_340, Local_4.f_808, &iLocal_680, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_320(Local_715.f_44, 0);
			Function_308(Local_715.f_44, 1);
			Function_307(Local_715.f_44, 0);
			Function_306(Local_715.f_44, 0);
			Function_305(Local_715.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_356, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_712))
	{
		bLocal_712 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(bLocal_712))
		{
			SQUAD_GOALS_CLEAR(bLocal_712);
			Function_484(&bLocal_712, bLocal_340, Local_4.f_852, "RANCH08_COWS02", &iLocal_680, 10, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_320(bLocal_712, 0);
			Function_308(bLocal_712, 1);
			Function_307(bLocal_712, 0);
			Function_306(bLocal_712, 0);
			Function_305(bLocal_712, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_712, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_360, -1.0f);
		}
	}
	return;
}

void Function_484(var uParam0, bool bParam1, bool bParam2, char* cParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10) //Position: 0x19951 / 104785
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
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		if (IS_OBJECT_VALID(bParam2))
		{
			Function_240(bParam2);
			vVar36 = { StackVal, StackVal, Function_240(bParam2) };
			Function_311(bParam2);
			vVar39 = { StackVal, StackVal, Function_311(bParam2) };
			PRINTVECTOR(vVar36);
			PRINTNL();
			bVar51 = RAND_FLOAT_RANGE(bParam7, bParam8);
			vVar42 = { StackVal, StackVal, vVar36 };
			vVar42.x = (vVar42.x - ((IntToFloat(iParam6) * bVar51) / 2.0f));
			vVar42.f_4 = (vVar42.y + fParam9);
			vVar42.f_8 = (vVar42.z - ((IntToFloat((iParam5 / iParam6)) * bVar51) / 2.0f));
			PRINTVECTOR(vVar42);
			PRINTNL();
			vVar45 = { StackVal, StackVal, vVar42 };
			vVar48 = { StackVal, StackVal, vVar39 };
			PRINTVECTOR(vVar45);
			PRINTNL();
			bVar0 = false;
			while (bVar0 < (iParam5 - 1))
			{
				strcpy(&cVar2, cParam3, 64);
				strcpy(&cVar18, "_", 64);
				stradd(&cVar2, &cVar18, 64);
				cVar35 = INT_TO_STRING(bVar0);
				stradd(&cVar2, cVar35, 64);
				if (iVar1 > iParam6)
				{
					iVar1 = 0;
					vVar45.x = vVar42.x;
					bVar51 = RAND_FLOAT_RANGE(bParam7, bParam8);
					vVar45.f_8 = (vVar45.z + bVar51);
				}
				if (bParam10)
				{
					vVar48.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
				}
				bVar52 = RAND_INT_RANGE(false, (*iParam4 - 1));
				bVar53 = (*iParam4)[bVar52];
				if (Function_310(bVar53))
				{
					bVar34 = CREATE_ACTOR_IN_LAYOUT(bParam1, &cVar2, bVar53, vVar45, vVar48);
					if (IS_ACTOR_VALID(bVar34))
					{
						SNAP_OBJECT_TO_GROUND(bVar34, 20.0f, false, 1092616192);
						SQUAD_JOIN(bVar34, *uParam0);
						PRINTSTRING(&cVar2);
						PRINTNL();
						PRINTVECTOR(vVar45);
						PRINTNL();
					}
				}
				bVar51 = RAND_FLOAT_RANGE(bParam7, bParam8);
				vVar45.x = (vVar45.x + bVar51);
				iVar1++;
				bVar0++;
			}
		}
	}
}

void Function_485() //Position: 0x19AD1 / 105169
{
	if (Function_297(&bLocal_668) <= 0.0f)
	{
		switch (iLocal_627)
		{
			case 0x00000000:
				iLocal_627++;
				break;
			
			case 0x00000006:
				iLocal_627++;
				break;
		}
		Function_225(&bLocal_668);
	}
	return;
}

void Function_486() //Position: 0x19B12 / 105234
{
	if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
	{
		switch (iLocal_625)
		{
			case 0x00000000:
				iLocal_625++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING((*&Local_4 + 140)[12], true);
				SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[12], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_4 + 140)[12], true);
				vLocal_703 = { -3.0f, 0.0f, 13.0f };
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT(false, bLocal_410, &vLocal_703, 0, 0, 0, 0, 0, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[12], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[12], true);
				iLocal_625++;
				break;
			
			case 0x00000002:
				iLocal_625++;
				break;
			}
	}
	return;
}

void Function_487() //Position: 0x19BD1 / 105425
{
	if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
	{
		switch (iLocal_624)
		{
			case 0x00000000:
				iLocal_624++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING((*&Local_4 + 140)[02], true);
				SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[02], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_4 + 140)[02], true);
				vLocal_700 = { 3.0f, 0.0f, 12.0f };
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT(false, bLocal_410, &vLocal_700, 0, 0, 0, 0, 0, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				iLocal_624++;
				break;
			
			case 0x00000002:
				iLocal_624++;
				break;
			}
	}
	return;
}

void Function_488() //Position: 0x19C8C / 105612
{
	if (IS_ACTOR_VALID(bLocal_410))
	{
		switch (iLocal_617)
		{
			case 0x00000000:
				iLocal_617++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(bLocal_410);
				CLEAR_ACTOR_MAX_SPEED(bLocal_410);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_410);
				Function_427(3, 0, 1);
				MEMORY_PREFER_RIDING(bLocal_410, true);
				SET_ACTOR_MAX_SPEED(bLocal_410, 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_410, true);
				vLocal_688 = { -15.0f, 0.0f, 10.0f };
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT(StackVal, false, &vLocal_688, 0, 0, 0, 0, 0, 0, 1);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET(bLocal_410, true);
				iLocal_617++;
				break;
			
			case 0x00000002:
				if (iLocal_407 > 11)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_410, 65.0f))
					{
						vLocal_688 = { -3.0f, 0.0f, -5.0f };
						bLocal_615 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT(false, Global_34573, &vLocal_688, 0, 0, 0, 0, 0, 0, 1);
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
						TASK_SEQUENCE_RELEASE(bLocal_615, 1);
						TASK_PRIORITY_SET(bLocal_410, true);
						iLocal_617++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_617++;
				break;
			}
	}
	return;
}

void Function_489(int iParam0) //Position: 0x19DCB / 105931
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar6;
	bool bVar7;
	
	if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
	{
		bVar6 = (80.0f + 50.0f);
		bVar7 = (100.0f + 50.0f);
	}
	else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
	{
		bVar6 = (80.0f + 50.0f);
		bVar7 = (100.0f + 50.0f);
	}
	else
	{
		bVar6 = (80.0f + 50.0f);
		bVar7 = (100.0f + 50.0f);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_44))
		{
			if (SQUAD_GET_SIZE(iParam0->f_44) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						GET_OBJECT_POSITION(bVar1, &uVar3);
						if ((StackVal && !Function_348(!Function_439(bVar1, Global_34573, bVar7), bVar1, bVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_438(bVar1), &uVar3, 3212836864))
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

void Function_490(var uParam0, bool bParam1) //Position: 0x19EEC / 106220
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(uParam0->f_44))
	{
		if (SQUAD_IS_VALID(uParam0->f_56))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(uParam0->f_44) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_44, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (!Function_491(bVar1, uParam0->f_44, bParam1) || !Function_491(bVar1, uParam0->f_56, bParam1))
					{
						bVar2 = GET_BLIP_ON_ACTOR(bVar1);
						if (IS_BLIP_VALID(bVar2))
						{
							REMOVE_BLIP(bVar2);
						}
						SQUAD_LEAVE(bVar1);
						SQUAD_JOIN(bVar1, uParam0->f_56);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

bool Function_491(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19F77 / 106359
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
					if (Function_439(bParam0, bVar1, bParam2))
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

void Function_492(var uParam0, float fParam1) //Position: 0x19FCB / 106443
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	
	if (SQUAD_IS_VALID(uParam0->f_44))
	{
		if (SQUAD_IS_VALID(uParam0->f_56))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(uParam0->f_44) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_44, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					GET_ACTOR_VELOCITY(bVar1, &vVar2);
					bVar5 = VMAG(vVar2);
					if (bVar5 >= fParam1)
					{
						bVar6 = GET_BLIP_ON_ACTOR(bVar1);
						if (IS_BLIP_VALID(bVar6))
						{
							REMOVE_BLIP(bVar6);
						}
						SQUAD_LEAVE(bVar1);
						SQUAD_JOIN(bVar1, uParam0->f_56);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_493(int iParam0) //Position: 0x1A053 / 106579
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
								SQUAD_COMPUTE_CENTROID(iParam0->f_56, &vVar0);
								Function_434(iParam0->f_56);
								vVar3 = { StackVal, StackVal, Function_434(iParam0->f_56) };
								if (SQUAD_GET_SIZE(iParam0->f_56) >= iVar8)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
									{
										Function_240(*iParam0);
										if (!Function_73(StackVal, StackVal, Function_240(*iParam0)))
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
										Function_240(StackVal);
										if (!Function_73(StackVal, StackVal, Function_240(StackVal)))
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
							}
							else if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
							{
								SQUAD_COMPUTE_CENTROID(iParam0->f_52, &vVar0);
								Function_433(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_433(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_434(iParam0->f_52);
								vVar3 = { StackVal, StackVal, Function_434(iParam0->f_52) };
								if (SQUAD_GET_SIZE(iParam0->f_52) >= iVar8)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
									{
										Function_240(*iParam0);
										if (!Function_73(StackVal, StackVal, Function_240(*iParam0)))
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
										Function_240(StackVal);
										if (!Function_73(StackVal, StackVal, Function_240(StackVal)))
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
							}
							else if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
							{
								SQUAD_COMPUTE_CENTROID(iParam0->f_48, &vVar0);
								Function_433(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_433(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_434(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_434(iParam0->f_48) };
								if (SQUAD_GET_SIZE(iParam0->f_48) >= iVar8)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
									{
										Function_240(*iParam0);
										if (!Function_73(StackVal, StackVal, Function_240(*iParam0)))
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
										Function_240(StackVal);
										if (!Function_73(StackVal, StackVal, Function_240(StackVal)))
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
							}
						}
						else
						{
							SQUAD_COMPUTE_CENTROID(iParam0->f_44, &vVar0);
							Function_434(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_434(iParam0->f_44) };
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

void Function_494(bool bParam0, bool bParam1) //Position: 0x1A3CE / 107470
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_VOLUME_VALID(bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						SQUAD_LEAVE(bVar1);
						KILL_ACTOR(bVar1);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_495() //Position: 0x1A427 / 107559
{
	Function_346(bLocal_340);
	if (((iLocal_407 < 5 && iLocal_407 > 105) && !iLocal_407 != 104) && !iLocal_407 != 103)
	{
		if (Function_297(&bLocal_677) <= 0,1f)
		{
			Function_443(Local_715.f_44, Local_715.f_56, Local_4.f_340);
			Function_444(&Local_715);
		}
		if (bLocal_647)
		{
			Function_432(&Local_715);
			if (Function_297(&bLocal_677) <= 0,1f)
			{
				Function_431(&Local_715);
				Function_430(&Local_715, 0x41700000);
			}
			if (Function_297(&bLocal_659) <= 0,2f)
			{
				Function_437(&Local_715);
				Function_225(&bLocal_659);
			}
			Function_436();
		}
		Function_505();
		Function_429(Global_34573);
		Function_503();
		if (Function_297(&bLocal_677) <= 0,1f)
		{
			Function_225(&bLocal_677);
		}
	}
	switch (iLocal_407)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_410, GET_ACTOR_MAX_HEALTH(bLocal_410));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_421[0] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_408 = Global_30628[2];
				if (!Function_333(bLocal_408))
				{
					Function_331(&Local_341);
				}
				Function_330(Global_34573, (*&Local_4 + 492)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_411))
				{
					TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_411, true);
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
				Function_225(&bLocal_412);
				iLocal_407 = 1;
			}
			else
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("nHERDING_2", 0, 4294967295, 4294967295);
			bLocal_616 = false;
			iLocal_617 = 0;
			iLocal_624 = 0;
			iLocal_625 = 0;
			iLocal_627 = 0;
			iLocal_432 = 0;
			iLocal_650 = 0;
			iLocal_651 = 0;
			iLocal_653 = 0;
			iLocal_656 = 0;
			iLocal_658 = 0;
			Function_326(0,3f);
			Function_325(0.0f);
			Function_323(4, 1);
			bLocal_618 = 11;
			bLocal_619 = false;
			Function_224(Local_341, bLocal_618);
			PRINTINT(bLocal_618);
			PRINTNL();
			PRINTINT(bLocal_619);
			PRINTNL();
			Local_715.f_76 = 0;
			Local_715.f_80 = 0;
			bLocal_622 = Local_715.f_76;
			bLocal_623 = Local_715.f_80;
			PRINTINT(bLocal_622);
			PRINTNL();
			PRINTINT(bLocal_623);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(bLocal_623) / TO_FLOAT(bLocal_622)));
			PRINTNL();
			bLocal_622 = Local_715.f_76;
			Global_34165.f_124 = bLocal_622;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_623 = Local_715.f_80;
			Global_34165.f_128 = bLocal_623;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_501();
			if (iLocal_421[0] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_330(Global_34573, (*&Local_4 + 492)[0], 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_411))
					{
						Function_330(bLocal_411, (*&Local_4 + 492)[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
						}
					}
					else
					{
						bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					Function_330(bLocal_410, (*&Local_4 + 492)[1], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
					{
						Function_330((*&Local_4 + 164)[02], (*&Local_4 + 492)[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
						}
					}
				}
			}
			Function_387(&(Local_473[017]), bLocal_410, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[117]), Local_4.f_160, "Rancher", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[217]), Local_715.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[317]), bLocal_712, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[417]), Local_715.f_48, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[517]), Local_715.f_52, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[617]), Local_715.f_56, "Cow", 0, 0x5f5e100, 1);
			Function_386(&(Local_473[717]));
			Function_382(&(Local_473[217]), 2);
			Function_382(&(Local_473[317]), 2);
			Function_382(&(Local_473[417]), 2);
			Function_382(&(Local_473[517]), 2);
			Function_382(&(Local_473[617]), 2);
			if (HUD_IS_FADED())
			{
				Function_225(&bLocal_412);
				iLocal_407 = 5;
			}
			else
			{
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			Function_239(iLocal_406);
			Function_376(StackVal, StackVal, Function_239(iLocal_406), iLocal_406, Global_30628[2], Function_242(iLocal_406), 2);
			bLocal_628 = Function_375();
			PRINTINT(bLocal_628);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(bLocal_410) && IS_ACTOR_VALID((*&Local_4 + 164)[02])) && IS_ACTOR_VALID(bLocal_411)) && SQUAD_IS_VALID(Local_715.f_44)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_715.f_44, (SQUAD_GET_SIZE(Local_715.f_44) - 1))))
			{
				if (((Function_374(bLocal_410, 1, 0x41700000) && Function_374((*&Local_4 + 164)[02], 1, 0x41700000)) && Function_374(bLocal_411, 1, 0x41700000)) && Function_374(SQUAD_GET_ACTOR_BY_INDEX(Local_715.f_44, (SQUAD_GET_SIZE(Local_715.f_44) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_410) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_225(&bLocal_412);
						iLocal_407 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(Global_34573))
						{
							Function_330(Global_34573, (*&Local_4 + 492)[0], 1, 1, 1);
							if (IS_ACTOR_VALID(bLocal_411))
							{
								Function_330(bLocal_411, (*&Local_4 + 492)[2], 1, 1, 1);
								if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_411))
								{
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_411);
								}
							}
							else
							{
								bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(bLocal_410))
						{
							Function_330(bLocal_410, (*&Local_4 + 492)[1], 1, 1, 1);
							if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
							{
								Function_330((*&Local_4 + 164)[02], (*&Local_4 + 492)[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(bLocal_410) && !IS_ACTOR_MOUNTED((*&Local_4 + 164)[02]))
								{
									ACTOR_MOUNT_ACTOR(bLocal_410, (*&Local_4 + 164)[02]);
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
			if (SQUAD_IS_VALID(Local_715.f_44))
			{
				bLocal_647 = true;
				Function_500();
				Function_499();
				Function_300(Local_715.f_44);
				Function_370(Local_715.f_44, &Local_4 + 248);
				Function_369(Local_715.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_225(&bLocal_412);
			iLocal_407 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_630))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_630 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_340, "RANCH08_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_630))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_630, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_709))
				{
					bLocal_709 = ADD_BLIP_FOR_OBJECT(Local_4.f_804, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_709))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_631))
				{
					GET_OBJECT_POSITION(Local_4.f_804, &vLocal_694);
					GET_OBJECT_ORIENTATION(Local_4.f_804, &vLocal_697);
					bLocal_631 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_340, "RANCH08GATEWAY01", vLocal_694, vLocal_697, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_631))
					{
					}
				}
				bLocal_648 = false;
				if (SQUAD_IS_VALID(Local_715.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_48);
					Function_301(Local_715.f_48);
				}
				*(&Local_715 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_715.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_52);
					Function_301(Local_715.f_52);
				}
				Local_715.f_8 = Local_4.f_804;
				GET_OBJECT_POSITION(Local_4.f_804, &uLocal_691);
				if (SQUAD_IS_VALID(Local_715.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_715.f_56);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_691, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_352, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				}
				if (iLocal_421[0] == 1)
				{
					if (SQUAD_IS_VALID(Local_715.f_44))
					{
						bLocal_647 = true;
						Function_500();
						Function_499();
						Function_300(Local_715.f_44);
						Function_370(Local_715.f_44, &Local_4 + 248);
						Function_369(Local_715.f_44, 2, 1);
					}
				}
				Function_498();
				Function_225(&bLocal_412);
				iLocal_407 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				UI_SHOW("RacePosition");
				Function_367("ranch08_obj02", 7,5f, 1, 2, 0, 0, 0);
				Function_225(&bLocal_412);
				Function_225(&bLocal_415);
				Function_225(&bLocal_418);
				iLocal_407 = 8;
			}
			break;
		
		case 0x00000008:
			if (!iLocal_651)
			{
				if (Function_297(&bLocal_412) <= 10,5f)
				{
					Function_496(&Local_715, 5, &bLocal_665, 0,3f);
					if (iLocal_650)
					{
						if (SQUAD_GET_SIZE(Local_715.f_48) <= 1 || SQUAD_GET_SIZE(Local_715.f_52) <= 1)
						{
							Function_132("ranch08_obj02_help1", 10.0f, 1, 0, 2, 1, 0);
							Function_225(&bLocal_412);
							iLocal_407 = 9;
						}
						else if (Function_297(&bLocal_412) <= (10,5f + 6.0f))
						{
							iLocal_651 = 1;
							iLocal_650 = 0;
							Function_225(&bLocal_412);
						}
					}
				}
			}
			else
			{
				Function_496(&Local_715, 5, &bLocal_665, 0,3f);
				if (iLocal_650)
				{
					if (SQUAD_GET_SIZE(Local_715.f_48) <= 1 || SQUAD_GET_SIZE(Local_715.f_52) <= 1)
					{
						Function_132("ranch08_obj02_help1", 10.0f, 1, 0, 2, 1, 0);
						Function_225(&bLocal_412);
						iLocal_407 = 9;
					}
					else if (Function_297(&bLocal_412) <= 20.0f)
					{
						Function_132("ranch08_obj02_help1", 10.0f, 1, 0, 2, 1, 0);
						Function_225(&bLocal_412);
						iLocal_407 = 9;
					}
					else if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_404))
					{
						Function_132("ranch08_obj02_help1", 10.0f, 1, 0, 2, 1, 0);
						Function_225(&bLocal_412);
						iLocal_407 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_297(&bLocal_412) <= 10,5f)
			{
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_715.f_44, Local_715.f_60, Local_715.f_12);
				SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_715.f_44, Local_715.f_60, Local_715.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
				iLocal_650 = 0;
				Function_132("ranch08_obj02_help2", 10.0f, 1, 0, 2, 1, 0);
				Function_225(&bLocal_412);
				Function_225(&bLocal_415);
				Function_225(&bLocal_418);
				iLocal_407 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, bLocal_340, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_709))
				{
					REMOVE_BLIP(bLocal_709);
				}
				if (IS_OBJECT_VALID(bLocal_631))
				{
					DESTROY_OBJECT(bLocal_631);
				}
				if (bLocal_647)
				{
					Function_363();
				}
			}
			else
			{
				Function_356(StackVal, &bLocal_418, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_429, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_709))
				{
					bLocal_709 = ADD_BLIP_FOR_OBJECT(Local_4.f_804, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_709))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_631))
				{
					GET_OBJECT_POSITION(Local_4.f_804, &vLocal_694);
					GET_OBJECT_ORIENTATION(Local_4.f_804, &vLocal_697);
					bLocal_631 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_340, "RANCH08GATEWAY01", vLocal_694, vLocal_697, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_631))
					{
					}
				}
				if (!bLocal_647)
				{
					Function_244();
					Function_355();
				}
				if (Function_297(&bLocal_412) <= 10,5f)
				{
					Function_496(&Local_715, 5, &bLocal_665, 15.0f);
				}
				if ((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_715.f_44) != 0 && SQUAD_GET_SIZE(Local_715.f_52) != 0) && SQUAD_GET_SIZE(Local_715.f_48) >= 3)
					{
						Function_244();
						Function_225(&bLocal_412);
						iLocal_407 = 11;
					}
				}
				if (((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_56)) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_715.f_44) != 0 && SQUAD_GET_SIZE(Local_715.f_48) != 0) && SQUAD_GET_SIZE(Local_715.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_709))
						{
							REMOVE_BLIP(bLocal_709);
						}
						if (IS_OBJECT_VALID(bLocal_631))
						{
							DESTROY_OBJECT(bLocal_631);
						}
						Function_351(Local_715.f_44);
						Function_351(Local_715.f_48);
						Function_351(Local_715.f_52);
						Function_351(Local_715.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_244();
						Function_225(&bLocal_412);
						iLocal_407 = 106;
					}
				}
				if (Local_715.f_100)
				{
					if (Function_297(&Local_715 + 88) <= 30.0f)
					{
						if (StackVal && IS_OBJECT_VALID((StackVal && IS_OBJECT_VALID((IS_ACTOR_VALID(bLocal_410) && IS_ACTOR_VALID(Global_34573))))))
						{
							if (Function_348(StackVal, bLocal_410, 25.0f))
							{
								if (StackVal && Function_348(Function_348(StackVal, Global_34573, 25.0f), Global_34573, 25.0f))
								{
									LOG_ERROR("RANCH08 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH08 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_52)) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_56))
									{
										Function_302(Local_715.f_44, Local_715.f_56);
										Function_302(Local_715.f_52, Local_715.f_56);
										Function_302(Local_715.f_48, Local_715.f_56);
									}
									Function_225(&Local_715 + 88);
								}
							}
						}
					}
				}
			}
			if (bLocal_648)
			{
			}
			break;
		
		case 0x0000000B:
			if (SQUAD_GET_SIZE(Local_715.f_48) == 1)
			{
				Function_367("ranch08_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0);
			}
			else
			{
				Function_367("ranch08_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0);
			}
			Function_225(&bLocal_412);
			Function_225(&bLocal_415);
			Function_225(&bLocal_418);
			iLocal_407 = 12;
			break;
		
		case 0x0000000C:
			if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, bLocal_340, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_709))
				{
					REMOVE_BLIP(bLocal_709);
				}
				if (IS_OBJECT_VALID(bLocal_631))
				{
					DESTROY_OBJECT(bLocal_631);
				}
				if (bLocal_647)
				{
					Function_363();
				}
			}
			else
			{
				Function_356(StackVal, &bLocal_418, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_429, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_709))
				{
					bLocal_709 = ADD_BLIP_FOR_OBJECT(Local_4.f_804, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_709))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_631))
				{
					GET_OBJECT_POSITION(Local_4.f_804, &vLocal_694);
					GET_OBJECT_ORIENTATION(Local_4.f_804, &vLocal_697);
					bLocal_631 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_340, "RANCH08GATEWAY01", vLocal_694, vLocal_697, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_631))
					{
					}
				}
				if (!bLocal_647)
				{
					Function_244();
					Function_355();
				}
				if (SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_48))
				{
					if (SQUAD_GET_SIZE(Local_715.f_44) != 0 && SQUAD_GET_SIZE(Local_715.f_48) != 0)
					{
						Function_244();
						Function_225(&bLocal_412);
						iLocal_407 = 10;
					}
				}
				if (Local_715.f_100)
				{
					if (Function_297(&Local_715 + 88) <= 30.0f)
					{
						if (StackVal && IS_OBJECT_VALID((StackVal && IS_OBJECT_VALID((IS_ACTOR_VALID(bLocal_410) && IS_ACTOR_VALID(Global_34573))))))
						{
							if (Function_348(StackVal, bLocal_410, 25.0f))
							{
								if (StackVal && Function_348(Function_348(StackVal, Global_34573, 25.0f), Global_34573, 25.0f))
								{
									LOG_ERROR("RANCH08 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH08 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(Local_715.f_44) && SQUAD_IS_VALID(Local_715.f_52)) && SQUAD_IS_VALID(Local_715.f_48)) && SQUAD_IS_VALID(Local_715.f_56))
									{
										Function_302(Local_715.f_44, Local_715.f_56);
										Function_302(Local_715.f_52, Local_715.f_56);
										Function_302(Local_715.f_48, Local_715.f_56);
									}
									Function_225(&Local_715 + 88);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_715.f_56))
			{
				bLocal_618 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_56);
				Function_224(Local_341, bLocal_618);
			}
			PRINTINT(bLocal_618);
			PRINTNL();
			bLocal_619 = (11 - bLocal_618);
			PRINTINT(bLocal_619);
			PRINTNL();
			bLocal_622 = Local_715.f_76;
			Global_34165.f_124 = bLocal_622;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_623 = Local_715.f_80;
			Global_34165.f_128 = bLocal_623;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			iLocal_421[1] = 1;
			Function_225(&bLocal_412);
			iLocal_406 = 2;
			iLocal_407 = 0;
			break;
	}
	return;
}

void Function_496(var uParam0, int iParam1, bool bParam2, float fParam3) //Position: 0x1B79B / 112539
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!iLocal_650)
	{
		if (Function_297(bParam2) <= fParam3)
		{
			if (IS_OBJECT_VALID(StackVal))
			{
				if (SQUAD_IS_VALID(uParam0->f_44))
				{
					if (SQUAD_IS_VALID(uParam0->f_48))
					{
						if (SQUAD_IS_VALID(uParam0->f_52))
						{
							if (((SQUAD_GET_SIZE(uParam0->f_48) > iParam1 && !SQUAD_GET_SIZE(uParam0->f_48) > 0) && SQUAD_GET_SIZE(uParam0->f_52) > iParam1) && !SQUAD_GET_SIZE(uParam0->f_52) > 0)
							{
								bVar0 = Function_353(StackVal, uParam0->f_44, Global_34573);
								if (IS_ACTOR_VALID(bVar0))
								{
									if (!GET_TASK_STATUS(bVar0, 61) != 1)
									{
										vVar7 = { 0.0f, 0.0f, 0.0f };
										GET_OBJECT_POSITION(StackVal, &vVar1);
										if (Function_411(StackVal, StackVal, uParam0->f_44, vVar1, 130.0f))
										{
											if (Function_497(StackVal, bVar0))
											{
												vVar7.x = -35.0f;
												vVar7.f_8 = 35.0f;
											}
											else
											{
												vVar7.x = -35.0f;
												vVar7.f_8 = -35.0f;
											}
										}
										else if (Function_497(StackVal, bVar0))
										{
											vVar7.x = -35.0f;
											vVar7.f_8 = -35.0f;
										}
										else
										{
											vVar7.x = -35.0f;
											vVar7.f_8 = 35.0f;
										}
										GET_OBJECT_RELATIVE_POSITION(StackVal, vVar7, &vVar4);
										PRINTVECTOR(vVar4);
										PRINTNL();
										bLocal_615 = TASK_SEQUENCE_OPEN();
										TASK_GO_NEAR_COORD(false, &vVar4, 10.0f, 4);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bVar0, bLocal_615);
										TASK_SEQUENCE_RELEASE(bLocal_615, 1);
										TASK_PRIORITY_SET(bVar0, true);
										iLocal_650 = 1;
									}
								}
								Function_225(bParam2);
							}
						}
					}
				}
			}
		}
	}
}

bool Function_497(int iParam0, bool bParam1) //Position: 0x1B90C / 112908
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	float fVar15;
	bool bVar16;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	bVar16 = iParam0;
	vVar3 = { StackVal, StackVal, vVar0 };
	GET_OBJECT_POSITION(bVar16, &vVar6);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar6, vVar3, StackVal) };
	GET_OBJECT_AXIS(bVar16, &uVar12, 0);
	fVar15 = VDOT(&vVar9, &uVar12);
	if (fVar15 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_498() //Position: 0x1B95A / 112986
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_startHerd", "Ranch08_startHerd", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_499() //Position: 0x1B9A5 / 113061
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_715.f_44, Local_715.f_60, Local_715.f_12, 100.0f, 0,85f, 0,5f, 1082130432);
	return;
}

void Function_500() //Position: 0x1B9D1 / 113105
{
	Function_301(Local_715.f_44);
	SQUAD_GOALS_CLEAR(Local_715.f_44);
	Local_715.f_60 = UNK_0x48588CCB(Local_715.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_715.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_715.f_44, Local_715.f_60);
	}
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_715.f_44, Local_715.f_60, Global_34573, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, Global_34573, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_715.f_44, Local_715.f_60, 0, 1);
	if (IS_ACTOR_VALID(bLocal_410))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_410);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_715.f_40);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_410, Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, bLocal_410, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 140)[02]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 140)[02], Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, (*&Local_4 + 140)[02], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
	{
		if (IS_VOLUME_VALID(Local_715.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 140)[12]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 140)[12], Local_715.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_715.f_44, Local_715.f_60, (*&Local_4 + 140)[12], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	bLocal_647 = true;
	DECOR_SET_BOOL(Global_34573, "herding", true);
	return;
}

void Function_501() //Position: 0x1BB76 / 113526
{
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_321();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_320(Local_4.f_176, 0);
			Function_319(Local_4.f_176, 3);
			Function_317(Local_4.f_176, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
			{
				Function_330((*&Local_4 + 164)[02], (*&Local_4 + 492)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_316();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_320(Local_4.f_200, 0);
			Function_319(Local_4.f_200, 3);
			Function_317(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 180)[02]))
			{
				Function_330((*&Local_4 + 180)[02], (*&Local_4 + 516)[9], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 180)[12]))
			{
				Function_330((*&Local_4 + 180)[12], (*&Local_4 + 516)[8], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_160))
	{
		Function_315();
		if (SQUAD_IS_VALID(Local_4.f_160))
		{
			Function_320(Local_4.f_160, 0);
			SQUAD_SET_FACTION(Local_4.f_160, 20);
			Function_317(Local_4.f_160, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
			{
				Function_330((*&Local_4 + 140)[02], (*&Local_4 + 516)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
			{
				Function_330((*&Local_4 + 140)[12], (*&Local_4 + 516)[7], 1, 1, 1);
			}
			Function_314(Local_4.f_160, Local_4.f_200);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_502();
	return;
}

void Function_502() //Position: 0x1BD15 / 113941
{
	Function_312();
	Local_715.f_12 = Local_4.f_1300;
	if (!SQUAD_IS_VALID(Local_715.f_44))
	{
		Local_715.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_44);
			Function_309(&Local_715, bLocal_340, Local_4.f_800, &iLocal_680, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_320(Local_715.f_44, 0);
			Function_308(Local_715.f_44, 1);
			Function_307(Local_715.f_44, 0);
			Function_306(Local_715.f_44, 0);
			Function_305(Local_715.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_348, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_712))
	{
		bLocal_712 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(bLocal_712))
		{
			SQUAD_GOALS_CLEAR(bLocal_712);
			Function_484(&bLocal_712, bLocal_340, Local_4.f_852, "RANCH08_COWS02", &iLocal_680, 10, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_320(bLocal_712, 0);
			Function_308(bLocal_712, 1);
			Function_307(bLocal_712, 0);
			Function_306(bLocal_712, 0);
			Function_305(bLocal_712, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_712, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_360, -1.0f);
		}
	}
	return;
}

void Function_503() //Position: 0x1BEA1 / 114337
{
	if (Function_297(&bLocal_668) <= 0.0f)
	{
		switch (iLocal_627)
		{
			case 0x00000000:
				iLocal_627++;
				break;
			
			case 0x00000001:
				if (iLocal_407 > 8)
				{
					iLocal_627++;
				}
				break;
			
			case 0x00000002:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_504();
				}
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_627++;
				}
				break;
			
			case 0x00000003:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_653)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_627++;
					}
				}
				break;
			
			case 0x00000004:
				Function_403(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000006:
				iLocal_627++;
				break;
		}
		Function_225(&bLocal_668);
	}
	return;
}

void Function_504() //Position: 0x1BF79 / 114553
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_badWeather", "Ranch08_badWeather", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505() //Position: 0x1BFC6 / 114630
{
	if (IS_ACTOR_VALID(bLocal_410))
	{
		switch (iLocal_617)
		{
			case 0x00000000:
				iLocal_617 = (iLocal_617 + 1);
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(bLocal_410);
				CLEAR_ACTOR_MAX_SPEED(bLocal_410);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_410);
				Function_427(3, 0, 1);
				MEMORY_PREFER_RIDING(bLocal_410, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_410, true);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 2.0f, 0, 0);
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1296, 20.0f, 1, 0);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET(bLocal_410, true);
				iLocal_617++;
				break;
			
			case 0x00000002:
				if (IS_VOLUME_VALID(Local_4.f_404))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_404))
						{
							iLocal_617++;
						}
					}
				}
				break;
			
			case 0x00000003:
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1304, 17.0f, 1, 0);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET(bLocal_410, true);
				iLocal_617++;
				break;
			
			case 0x00000004:
				iLocal_617++;
				break;
			}
	}
	return;
}

void Function_506() //Position: 0x1C10A / 114954
{
	Function_346(bLocal_340);
	if (((iLocal_407 < 5 && iLocal_407 > 105) && !iLocal_407 != 104) && !iLocal_407 != 103)
	{
		Function_529(1, 0);
		Function_528();
		Function_527();
		Function_526();
		Function_525();
		Function_515();
	}
	switch (iLocal_407)
	{
		case 0x00000000:
			Function_342(0);
			if (Function_332(&Local_341))
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			SET_ACTOR_HEALTH(bLocal_410, GET_ACTOR_MAX_HEALTH(bLocal_410));
			if (IS_ACTOR_VALID(bLocal_411))
			{
				TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_411, true);
			}
			if (IS_ACTOR_VALID(bLocal_410))
			{
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_410, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_334();
			bLocal_408 = Global_30668[0];
			if (!Function_333(bLocal_408))
			{
				Function_331(&Local_341);
			}
			if (Function_332(&Local_341))
			{
				Function_330(Global_34573, (*&Local_4 + 448)[0], 1, 1, 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			Function_225(&bLocal_412);
			iLocal_407 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_408) || bLocal_408 != 4294967295))
			{
				Function_225(&bLocal_412);
				iLocal_407 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			bLocal_616 = false;
			iLocal_617 = 0;
			iLocal_624 = 0;
			iLocal_625 = 0;
			iLocal_627 = 0;
			iLocal_432 = 0;
			bLocal_649 = false;
			iLocal_653 = 0;
			iLocal_656 = 0;
			iLocal_657 = 0;
			iLocal_658 = 0;
			Function_514(&iLocal_641);
			Function_326(0,3f);
			Function_325(0.0f);
			Function_323(4, 1);
			Function_513(2.0f, 180.0f);
			bLocal_618 = 11;
			bLocal_619 = false;
			Function_224(Local_341, bLocal_618);
			PRINTINT(bLocal_618);
			PRINTNL();
			PRINTINT(bLocal_619);
			PRINTNL();
			Local_715.f_76 = 0;
			Local_715.f_80 = 0;
			bLocal_622 = Local_715.f_76;
			bLocal_623 = Local_715.f_80;
			PRINTINT(bLocal_622);
			PRINTNL();
			PRINTINT(bLocal_623);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(bLocal_623) / TO_FLOAT(bLocal_622)));
			PRINTNL();
			bLocal_622 = Local_715.f_76;
			Global_34165.f_124 = bLocal_622;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_623 = Local_715.f_80;
			Global_34165.f_128 = bLocal_623;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_511();
			Function_330(bLocal_410, (*&Local_4 + 448)[1], 1, 1, 1);
			Function_330(bLocal_411, (*&Local_4 + 448)[2], 1, 1, 1);
			Function_387(&(Local_473[017]), bLocal_410, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[117]), Local_4.f_160, "Rancher", 1, 0x5f5e100, 1);
			Function_387(&(Local_473[217]), Local_715.f_44, "Cow", 0, 0x5f5e100, 1);
			Function_387(&(Local_473[317]), bLocal_712, "Cow", 0, 0x5f5e100, 1);
			Function_386(&(Local_473[417]));
			Function_386(&(Local_473[517]));
			Function_386(&(Local_473[617]));
			Function_386(&(Local_473[717]));
			if (HUD_IS_FADED())
			{
				Function_225(&bLocal_412);
				iLocal_407 = 5;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			Function_239(iLocal_406);
			Function_376(StackVal, StackVal, Function_239(iLocal_406), iLocal_406, Global_30628[2], Function_242(iLocal_406), 0);
			bLocal_628 = Function_375();
			PRINTINT(bLocal_628);
			PRINTNL();
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_410))
			{
				if (Function_374(bLocal_410, 1, 0x41700000))
				{
					Function_225(&bLocal_412);
					iLocal_407 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_332(&Local_341))
			{
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
				if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
				{
					ACTOR_POP_NEXT_GAIT((*&Local_4 + 140)[02], 2, false);
					GET_OBJECT_POSITION((*&Local_4 + 180)[02], &vLocal_700);
					TASK_GO_NEAR_COORD((*&Local_4 + 140)[02], &vLocal_700, 3.0f, 2);
					TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				}
			}
			Function_225(&bLocal_412);
			iLocal_407 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_225(&bLocal_412);
				iLocal_407 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_IS_VALID(Local_4.f_160))
			{
				if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
				{
					SET_ACTORS_HORSE((*&Local_4 + 140)[02], (*&Local_4 + 180)[02]);
					SET_MOST_RECENT_MOUNT((*&Local_4 + 140)[02], (*&Local_4 + 180)[02]);
					CLEAR_ACTOR_MIN_SPEED((*&Local_4 + 140)[02]);
					CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 140)[02]);
					GET_OBJECT_POSITION(Local_4.f_856, &vLocal_700);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_4 + 140)[02], true);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, (*&Local_4 + 180)[02], 0, 1, 2, 2);
					TASK_FOLLOW_PATH(false, Local_4.f_1336, 2, 1, 0, 1, false);
					TASK_GO_NEAR_COORD(false, &vLocal_700, 3.0f, true);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
				{
					SET_ACTORS_HORSE((*&Local_4 + 140)[12], (*&Local_4 + 180)[12]);
					SET_MOST_RECENT_MOUNT((*&Local_4 + 140)[12], (*&Local_4 + 180)[12]);
					CLEAR_ACTOR_MIN_SPEED((*&Local_4 + 140)[12]);
					CLEAR_ACTOR_MAX_SPEED((*&Local_4 + 140)[12]);
					GET_OBJECT_POSITION(Local_4.f_860, &vLocal_703);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_4 + 140)[12], true);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, (*&Local_4 + 180)[12], 0, 1, 2, 2);
					TASK_GO_NEAR_COORD(false, &vLocal_703, 3.0f, true);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[12], bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET((*&Local_4 + 140)[12], true);
				}
			}
			Function_225(&bLocal_412);
			iLocal_407 = 7;
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(bLocal_411))
			{
				if (!IS_BLIP_VALID(bLocal_709))
				{
					bLocal_709 = ADD_BLIP_FOR_ACTOR(bLocal_411, 334, 0, 2, 0);
					if (IS_BLIP_VALID(bLocal_709))
					{
					}
				}
			}
			Function_367("ranch08_obj00", 7,5f, 1, 2, 0, 0, 0);
			Function_225(&bLocal_412);
			Function_225(&bLocal_415);
			Function_225(&bLocal_418);
			iLocal_407 = 8;
			break;
		
		case 0x00000008:
			if (Function_461(&bLocal_418, 60.0f, 200.0f, bLocal_410, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_429, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_709))
				{
					REMOVE_BLIP(bLocal_709);
				}
				if (IS_ACTOR_VALID(bLocal_410))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
					{
						Function_427(3, 1, 1);
					}
				}
			}
			else
			{
				if (!IS_ACTOR_VALID(bLocal_411))
				{
					if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, 0, 0, 334))
					{
						if (IS_BLIP_VALID(bLocal_709))
						{
							REMOVE_BLIP(bLocal_709);
						}
						if (IS_ACTOR_VALID(bLocal_411))
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_411)))
							{
								ADD_BLIP_FOR_ACTOR(bLocal_411, 334, 0, 2, 0);
							}
						}
					}
					else if (IS_ACTOR_VALID(bLocal_411))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_411)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_411));
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(bLocal_410))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
						{
							Function_427(3, 0, 1);
						}
					}
					if (!IS_BLIP_VALID(bLocal_709))
					{
						bLocal_709 = ADD_BLIP_FOR_ACTOR(bLocal_411, 334, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_709))
						{
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_411))
				{
					if (GET_MOUNT(Global_34573) == bLocal_411)
					{
						if (IS_BLIP_VALID(bLocal_709))
						{
							REMOVE_BLIP(bLocal_709);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_244();
						Function_225(&bLocal_412);
						iLocal_407 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410, 3212836864, 3212836864, 4, 1, 0);
			if (IS_ACTOR_VALID(bLocal_410))
			{
				Function_427(3, 1, 1);
			}
			Function_510();
			Function_225(&bLocal_412);
			iLocal_407 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_297(&bLocal_412) <= 3.0f)
			{
				Function_367("ranch08_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_225(&bLocal_412);
				Function_225(&bLocal_415);
				Function_225(&bLocal_418);
				iLocal_407 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_461(&bLocal_418, (2.0f * 60.0f), (2.0f * 200.0f), bLocal_410, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_429, 0, 0, 0, 325, 1))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
				{
					Function_427(3, 1, 1);
				}
			}
			else if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, 0, 0, 334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
				{
					Function_427(3, 0, 1);
				}
				if (IS_ACTOR_VALID(bLocal_411))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_411)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_411, 334, 0, 2, 0);
					}
				}
			}
			else
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
				{
					Function_427(3, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_411))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_411)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_411));
					}
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (bLocal_649)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_410, (3.0f * 6.0f)) || Function_348(Global_34573, Local_4.f_800, (3.0f * 6.0f)))
					{
						if (IS_BLIP_VALID(bLocal_709))
						{
							REMOVE_BLIP(bLocal_709);
						}
						if (IS_OBJECT_VALID(bLocal_631))
						{
							DESTROY_OBJECT(bLocal_631);
						}
						Function_427(3, 0, 1);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_244();
						Function_225(&bLocal_412);
						iLocal_407 = 12;
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
			{
				Function_427(3, 0, 1);
			}
			if (!IS_BLIP_VALID(bLocal_709))
			{
				bLocal_709 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 492)[2], 330, 0f, 2, 0);
				if (IS_BLIP_VALID(bLocal_709))
				{
					SET_BLIP_PRIORITY(bLocal_709, 3);
				}
			}
			if (!IS_OBJECT_VALID(bLocal_631))
			{
				GET_OBJECT_POSITION((*&Local_4 + 492)[2], &vLocal_694);
				GET_OBJECT_ORIENTATION((*&Local_4 + 492)[2], &vLocal_697);
				bLocal_631 = Function_509(StackVal, StackVal, StackVal, StackVal, bLocal_340, "RANCH08GATEWAY01", vLocal_694, vLocal_697, Global_34573, (4.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(bLocal_631))
				{
				}
			}
			Function_225(&bLocal_412);
			iLocal_407 = 13;
			break;
		
		case 0x0000000D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_367("ranch08_obj01a", 7,5f, 1, 2, 0, 0, 0);
				Function_225(&bLocal_412);
				Function_225(&bLocal_415);
				Function_225(&bLocal_418);
				iLocal_407 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_461(&bLocal_418, (2.0f * 60.0f), (2.0f * 200.0f), bLocal_410, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_429, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_709))
				{
					REMOVE_BLIP(bLocal_709);
				}
				if (IS_OBJECT_VALID(bLocal_631))
				{
					Function_508(bLocal_631);
				}
				if (IS_ACTOR_RIDING(Global_34573))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
					{
						Function_427(3, 1, 1);
					}
				}
			}
			else
			{
				if (Function_364(&bLocal_418, 200.0f, bLocal_411, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_429, 0, 0, 0, 334))
				{
					if (IS_BLIP_VALID(bLocal_709))
					{
						REMOVE_BLIP(bLocal_709);
					}
					if (IS_OBJECT_VALID(bLocal_631))
					{
						Function_508(bLocal_631);
					}
					if (IS_ACTOR_VALID(bLocal_411))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_411)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_411, 334, 0, 2, 0);
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(bLocal_411))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_411)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_411));
						}
					}
					if (!IS_BLIP_VALID(bLocal_709))
					{
						bLocal_709 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 492)[2], 330, 0f, 2, 0);
						if (IS_BLIP_VALID(bLocal_709))
						{
							SET_BLIP_PRIORITY(bLocal_709, 3);
						}
					}
					if (!IS_OBJECT_VALID(bLocal_631))
					{
						GET_OBJECT_POSITION((*&Local_4 + 492)[2], &vLocal_694);
						GET_OBJECT_ORIENTATION((*&Local_4 + 492)[2], &vLocal_697);
						bLocal_631 = Function_509(StackVal, StackVal, StackVal, StackVal, bLocal_340, "RANCH08GATEWAY01", vLocal_694, vLocal_697, Global_34573, (4.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(bLocal_631))
						{
						}
					}
					if (IS_OBJECT_VALID(bLocal_631))
					{
						if (GATEWAY_UPDATE(bLocal_631))
						{
							if (IS_BLIP_VALID(bLocal_709))
							{
								REMOVE_BLIP(bLocal_709);
							}
							if (IS_OBJECT_VALID(bLocal_631))
							{
								Function_508(bLocal_631);
							}
							if (IS_ACTOR_VALID(bLocal_410))
							{
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_410)))
								{
									Function_427(3, 0, 1);
								}
							}
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_244();
							Function_225(&bLocal_412);
							iLocal_407 = 106;
						}
					}
				}
				if (IS_BLIP_VALID(Function_507(3)))
				{
					Function_427(3, 0, 1);
				}
			}
			break;
		
		case 0x0000006A:
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
			if (SQUAD_IS_VALID(Local_715.f_56))
			{
				bLocal_618 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_715.f_56);
				Function_224(Local_341, bLocal_618);
			}
			PRINTINT(bLocal_618);
			PRINTNL();
			bLocal_619 = (11 - bLocal_618);
			PRINTINT(bLocal_619);
			PRINTNL();
			iLocal_421[0] = 1;
			Function_225(&bLocal_412);
			iLocal_406 = 1;
			iLocal_407 = 0;
			break;
	}
	return;
}

var Function_507(int iParam0) //Position: 0x1CEA2 / 118434
{
	return Global_8492[iParam014].f_52;
}

void Function_508(bool bParam0) //Position: 0x1CEB1 / 118449
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

bool Function_509(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x1CF3B / 118587
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_510() //Position: 0x1D006 / 118790
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_setOff", "Ranch08_setOff", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x1D04B / 118859
{
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_321();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_320(Local_4.f_176, 0);
			Function_319(Local_4.f_176, 3);
			Function_317(Local_4.f_176, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
			{
				Function_330((*&Local_4 + 164)[02], (*&Local_4 + 448)[1], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_316();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_320(Local_4.f_200, 0);
			Function_319(Local_4.f_200, 3);
			Function_317(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 180)[02]))
			{
				Function_330((*&Local_4 + 180)[02], (*&Local_4 + 448)[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 180)[12]))
			{
				Function_330((*&Local_4 + 180)[12], (*&Local_4 + 448)[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_160))
	{
		Function_315();
		if (SQUAD_IS_VALID(Local_4.f_160))
		{
			Function_320(Local_4.f_160, 0);
			SQUAD_SET_FACTION(Local_4.f_160, 20);
			Function_317(Local_4.f_160, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
			{
				Function_330((*&Local_4 + 140)[02], (*&Local_4 + 448)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
			{
				Function_330((*&Local_4 + 140)[12], (*&Local_4 + 448)[7], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_512();
	return;
}

void Function_512() //Position: 0x1D1DD / 119261
{
	Function_312();
	if (!SQUAD_IS_VALID(Local_715.f_44))
	{
		Local_715.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_715.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_715.f_44);
			Function_309(&Local_715, bLocal_340, Local_4.f_800, &iLocal_680, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_320(Local_715.f_44, 0);
			Function_308(Local_715.f_44, 1);
			Function_307(Local_715.f_44, 0);
			Function_306(Local_715.f_44, 0);
			Function_305(Local_715.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_715.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_348, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_712))
	{
		bLocal_712 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_340, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(bLocal_712))
		{
			SQUAD_GOALS_CLEAR(bLocal_712);
			Function_484(&bLocal_712, bLocal_340, Local_4.f_852, "RANCH08_COWS02", &iLocal_680, 10, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_320(bLocal_712, 0);
			Function_308(bLocal_712, 1);
			Function_307(bLocal_712, 0);
			Function_306(bLocal_712, 0);
			Function_305(bLocal_712, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_712, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_360, -1.0f);
		}
	}
	return;
}

void Function_513(float fParam0, int iParam1) //Position: 0x1D35F / 119647
{
	Global_16517.f_8 = fParam0;
	Global_16517.f_12 = iParam1;
	Global_16517.f_16 = 1;
	return;
}

void Function_514(var uParam0) //Position: 0x1D379 / 119673
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

void Function_515() //Position: 0x1D39C / 119708
{
	if (Function_297(&bLocal_668) <= 0.0f)
	{
		switch (iLocal_627)
		{
			case 0x00000000:
				iLocal_627++;
				break;
			
			case 0x00000001:
				if (iLocal_407 > 11)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (bLocal_628 == 0)
						{
							Function_524();
						}
						else if (bLocal_628 == 1)
						{
							Function_523();
						}
						else if (bLocal_628 == 2)
						{
							Function_522();
						}
						else if (bLocal_628 == 3)
						{
							Function_521();
						}
						else if (bLocal_628 > 4)
						{
							Function_520();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_627++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_517(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_653)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_627 = 3;
					}
				}
				if (iLocal_407 > 14)
				{
					Function_225(&bLocal_415);
					iLocal_627 = 8;
				}
				break;
			
			case 0x00000003:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_628 == 0)
					{
						Function_522();
					}
					else if (bLocal_628 == 1)
					{
						Function_521();
					}
					else if (bLocal_628 > 2)
					{
						Function_520();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_627++;
					}
				}
				break;
			
			case 0x00000004:
				Function_517(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_653)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_627 = 5;
					}
				}
				if (iLocal_407 > 14)
				{
					Function_225(&bLocal_415);
					iLocal_627 = 8;
				}
				break;
			
			case 0x00000005:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_628 != 0 || bLocal_628 != 1)
					{
						Function_520();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_627++;
						}
					}
					else
					{
						iLocal_627++;
					}
				}
				break;
			
			case 0x00000006:
				Function_517(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_653)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_627 = 7;
					}
				}
				if (iLocal_407 > 14)
				{
					Function_225(&bLocal_415);
					iLocal_627 = 8;
				}
				break;
			
			case 0x00000007:
				Function_517(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_407 > 14)
				{
					Function_225(&bLocal_415);
					iLocal_627 = 8;
				}
				break;
			
			case 0x00000008:
				Function_517(1, 1, 0x420c0000, 0x41c80000);
				if (Function_297(&bLocal_415) <= 10.0f)
				{
					if (!Function_133())
					{
						Function_516();
						Function_225(&bLocal_415);
					}
				}
				break;
			
			case 0x00000009:
				iLocal_627++;
				break;
		}
		Function_225(&bLocal_668);
	}
	return;
}

void Function_516() //Position: 0x1D5E5 / 120293
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_noOnHorse", "Ranch08_noOnHorse", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1D630 / 120368
{
	if (Function_297(&bLocal_671) <= 3.0f)
	{
		Function_519();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_658)
				{
					iLocal_658 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_getsOffHorse", "Ranch08_getsOffHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_225(&bLocal_671);
				}
				else if (Function_297(&bLocal_415) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_NoOnHorse", "Ranch08_NoOnHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_225(&bLocal_671);
					Function_225(&bLocal_415);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_658)
				{
					iLocal_658 = 0;
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_411))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_411, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_thrownOffHorse", "Ranch08_thrownOffHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_225(&bLocal_671);
					}
				}
			}
			if (bParam0)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_410, 1,15f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_rideIntoBonHorse", "Ranch08_rideIntoBonHorse", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_225(&bLocal_671);
				}
			}
			if (!Function_408(Global_34573, bLocal_410, iParam2))
			{
				if (bParam1)
				{
					if (!iLocal_656)
					{
						if (!iLocal_653)
						{
							uLocal_633 = Local_4.f_1324;
							if (Function_518(Global_34573, bLocal_410, uLocal_633))
							{
								iLocal_653 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_406();
								Function_225(&bLocal_671);
							}
							else
							{
								iLocal_653 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_405();
								Function_225(&bLocal_671);
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_410, bParam3))
			{
				if (bParam1)
				{
					if (iLocal_653)
					{
						iLocal_653 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_404();
						Function_225(&bLocal_671);
					}
				}
			}
		}
	}
}

bool Function_518(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1D8B3 / 121011
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

void Function_519() //Position: 0x1D90B / 121099
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_410)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_419();
						Function_225(&bLocal_671);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_418();
						Function_225(&bLocal_671);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_418();
					Function_225(&bLocal_671);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_GunBon", "Ranch08_GunBon", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_225(&bLocal_671);
			}
		}
		else if (bVar0 == (*&Local_4 + 164)[02])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_417();
						Function_225(&bLocal_671);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_417();
						Function_225(&bLocal_671);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_417();
					Function_225(&bLocal_671);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_PullBonHorse", "Ranch08_PullBonHorse", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_225(&bLocal_671);
			}
		}
		else if (IS_ACTOR_HUMAN(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_413();
						Function_225(&bLocal_671);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_414();
						Function_225(&bLocal_671);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_414();
					Function_225(&bLocal_671);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_GunChar", "Ranch08_GunChar", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_225(&bLocal_671);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_420(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_410, "Ranch08_ShootRandom", "Ranch08_ShootRandom", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_225(&bLocal_671);
				}
			}
		}
	}
	return;
}

void Function_520() //Position: 0x1DB7B / 121723
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_noTalk", "Ranch08_noTalk", false, 2, 0, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_521() //Position: 0x1DBC0 / 121792
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_nearPasture_v2_AA", "Ranch08_nearPasture_v2_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_nearPasture_v2_AB", "Ranch08_nearPasture_v2_AB", true, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x1DC5C / 121948
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_nearPasture_v1_AA", "Ranch08_nearPasture_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_nearPasture_v1_AB", "Ranch08_nearPasture_v1_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_nearPasture_v1_AC", "Ranch08_nearPasture_v1_AC", false, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1DD39 / 122169
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v2_AA", "Ranch08_rideOut_v2_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v2_AB", "Ranch08_rideOut_v2_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v2_AC1", "Ranch08_rideOut_v2_AC1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v2_AC2", "Ranch08_rideOut_v2_AC2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v2_AD", "Ranch08_rideOut_v2_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_280", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v2_AE", "Ranch08_rideOut_v2_AE", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v2_AF1", "Ranch08_rideOut_v2_AF1", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v2_AF2", "Ranch08_rideOut_v2_AF2", true, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x1DF3F / 122687
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v1_AA1", "Ranch08_rideOut_v1_AA1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_220", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v1_AA2", "Ranch08_rideOut_v1_AA2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v1_AB1", "Ranch08_rideOut_v1_AB1", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v1_AB2", "Ranch08_rideOut_v1_AB2", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v1_AC", "Ranch08_rideOut_v1_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v1_AD1", "Ranch08_rideOut_v1_AD1", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v1_AD2", "Ranch08_rideOut_v1_AD2", true, 2, 1, 0, 1);
		Function_278(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_525() //Position: 0x1E110 / 123152
{
	if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
	{
		switch (iLocal_625)
		{
			case 0x00000000:
				iLocal_625++;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(bLocal_410))
				{
					if (IS_VOLUME_VALID(Local_4.f_380))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_380))
						{
							iLocal_625++;
						}
					}
				}
				break;
			
			case 0x00000002:
				MEMORY_PREFER_RIDING((*&Local_4 + 140)[12], true);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_410, Local_4.f_1328, 10.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[12], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[12], true);
				iLocal_625++;
				break;
			
			case 0x00000003:
				if (IS_ACTOR_VALID(bLocal_410))
				{
					if (IS_VOLUME_VALID(Local_4.f_420))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_420))
						{
							SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[12], 4);
							iLocal_625++;
						}
					}
				}
				break;
			
			case 0x00000004:
				if (IS_VOLUME_VALID(Local_4.f_384))
				{
					if (IS_ACTOR_IN_VOLUME((*&Local_4 + 140)[12], Local_4.f_384))
					{
						iLocal_625++;
					}
				}
				break;
			
			case 0x00000005:
				GET_OBJECT_POSITION((*&Local_4 + 516)[7], &vLocal_703);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vLocal_703, 3.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[12], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[12], true);
				iLocal_625++;
				break;
			
			case 0x00000006:
				iLocal_625++;
				break;
			}
	}
	return;
}

void Function_526() //Position: 0x1E2A2 / 123554
{
	if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
	{
		switch (iLocal_624)
		{
			case 0x00000000:
				iLocal_624++;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_RIDING((*&Local_4 + 140)[02]))
				{
					iLocal_624++;
				}
				if (iLocal_657)
				{
					iLocal_657 = 0;
					GET_OBJECT_POSITION(Local_4.f_856, &vLocal_700);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, (*&Local_4 + 180)[02], 0, 1, 2, 2147483647);
					TASK_GO_NEAR_COORD(false, &vLocal_700, 3.0f, true);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(bLocal_410))
				{
					if (IS_VOLUME_VALID(Local_4.f_380))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_380))
						{
							iLocal_624++;
						}
					}
				}
				if (iLocal_657)
				{
					iLocal_657 = 0;
					GET_OBJECT_POSITION(Local_4.f_856, &vLocal_700);
					bLocal_615 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, (*&Local_4 + 180)[02], 0, 1, 2, 2147483647);
					TASK_GO_NEAR_COORD(false, &vLocal_700, 3.0f, true);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
					TASK_SEQUENCE_RELEASE(bLocal_615, 1);
					TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				}
				break;
			
			case 0x00000003:
				MEMORY_PREFER_RIDING((*&Local_4 + 140)[02], true);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_410, Local_4.f_1332, 12.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				iLocal_624++;
				break;
			
			case 0x00000004:
				if (IS_ACTOR_VALID(bLocal_410))
				{
					if (IS_VOLUME_VALID(Local_4.f_420))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_420))
						{
							SET_ACTOR_MAX_SPEED((*&Local_4 + 140)[02], 4);
							iLocal_624++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (IS_VOLUME_VALID(Local_4.f_384))
				{
					if (IS_ACTOR_IN_VOLUME((*&Local_4 + 140)[02], Local_4.f_384))
					{
						iLocal_624++;
					}
				}
				break;
			
			case 0x00000006:
				GET_OBJECT_POSITION((*&Local_4 + 516)[6], &vLocal_700);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vLocal_700, 3.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 140)[02], bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
				iLocal_624++;
				break;
			
			case 0x00000007:
				iLocal_624++;
				break;
			}
	}
	return;
}

void Function_527() //Position: 0x1E514 / 124180
{
	if (IS_ACTOR_VALID(bLocal_410))
	{
		switch (iLocal_617)
		{
			case 0x00000000:
				iLocal_617++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(bLocal_410, true);
				CLEAR_ACTOR_MIN_SPEED(bLocal_410);
				CLEAR_ACTOR_MAX_SPEED(bLocal_410);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_410);
				Function_427(3, 0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_410, true);
				SET_ACTORS_HORSE(bLocal_410, (*&Local_4 + 164)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_410, (*&Local_4 + 164)[02]);
				GET_OBJECT_POSITION((*&Local_4 + 492)[3], &vLocal_688);
				bLocal_615 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(false, (*&Local_4 + 164)[02], 0, 1, 2, 2147483647);
				TASK_FOLLOW_PATH(false, Local_4.f_1324, 5, 1, 0, 1, false);
				TASK_GO_TO_COORD(false, &vLocal_688, 5);
				TASK_FACE_COORD(false, &Local_4 + 776, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_410, bLocal_615);
				TASK_SEQUENCE_RELEASE(bLocal_615, 1);
				TASK_PRIORITY_SET(bLocal_410, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_410, 9.0f);
				iLocal_617++;
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
				{
					if (GET_MOUNT(bLocal_410) == (*&Local_4 + 164)[02])
					{
						iLocal_617++;
					}
				}
				break;
			
			case 0x00000003:
				if (IS_VOLUME_VALID(Local_4.f_416))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_416))
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_410, 9.0f);
						iLocal_617++;
					}
				}
				break;
			
			case 0x00000004:
				if (IS_VOLUME_VALID(Local_4.f_420))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_420))
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_410, 15.0f);
						iLocal_617++;
					}
				}
				break;
			
			case 0x00000005:
				if (IS_VOLUME_VALID(Local_4.f_424))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_424))
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_410, 9.0f);
						iLocal_617++;
					}
				}
				break;
			
			case 0x00000006:
				if (IS_VOLUME_VALID(Local_4.f_428))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_410, Local_4.f_428))
					{
						REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_410);
						iLocal_617++;
					}
				}
				break;
			
			case 0x00000007:
				if (GET_TASK_STATUS(bLocal_410, 23) == 0)
				{
					bLocal_649 = true;
					iLocal_617++;
				}
				break;
			
			case 0x00000008:
				iLocal_617++;
				break;
			}
	}
	return;
}

void Function_528() //Position: 0x1E731 / 124721
{
	if (!IS_ACTOR_VALID(bLocal_411) || !IS_ACTOR_ALIVE(bLocal_411))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 164)[02]))
			{
				SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 164)[02], 0);
			}
		}
		if (IS_ACTOR_VALID((*&Local_4 + 180)[02]))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 180)[02]))
			{
				SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 180)[02], 0);
			}
		}
		if (IS_ACTOR_VALID((*&Local_4 + 180)[12]))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 180)[12]))
			{
				SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 180)[12], 0);
			}
		}
	}
	return;
}

void Function_529(bool bParam0, bool bParam1) //Position: 0x1E7B8 / 124856
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			Function_221(bLocal_411);
			if (GET_MOUNT(Global_34573) != bLocal_411)
			{
				if (GET_MOUNT(Global_34573) == (*&Local_4 + 164)[02])
				{
					iLocal_657 = 1;
					TASK_CLEAR((*&Local_4 + 164)[02]);
					bLocal_711 = bLocal_411;
					bLocal_411 = (*&Local_4 + 164)[02];
					(*&Local_4 + 164)[02] = bLocal_711;
					SET_ACTORS_HORSE(Global_34573, bLocal_411);
					Function_531(bLocal_411, 0);
					GIVE_OBJECT_TO_LAYOUT(bLocal_411, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(bLocal_411, 0);
					SET_ACTORS_HORSE(bLocal_410, (*&Local_4 + 164)[02]);
					SET_MOST_RECENT_MOUNT(bLocal_410, (*&Local_4 + 164)[02]);
					SET_ALLOW_RIDE_BY_AI((*&Local_4 + 164)[02], 1);
					GIVE_OBJECT_TO_LAYOUT((*&Local_4 + 164)[02], Local_4);
				}
				else if (GET_MOUNT(Global_34573) == (*&Local_4 + 180)[02])
				{
					iLocal_657 = 1;
					TASK_CLEAR((*&Local_4 + 180)[02]);
					bLocal_711 = bLocal_411;
					bLocal_411 = (*&Local_4 + 180)[02];
					(*&Local_4 + 180)[02] = bLocal_711;
					SET_ACTORS_HORSE(Global_34573, bLocal_411);
					Function_531(bLocal_411, 0);
					GIVE_OBJECT_TO_LAYOUT(bLocal_411, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(bLocal_411, 0);
					SET_ACTORS_HORSE(bLocal_410, (*&Local_4 + 180)[02]);
					SET_MOST_RECENT_MOUNT(bLocal_410, (*&Local_4 + 180)[02]);
					SET_ALLOW_RIDE_BY_AI((*&Local_4 + 180)[02], 1);
					GIVE_OBJECT_TO_LAYOUT((*&Local_4 + 180)[02], Local_4);
				}
				else if (GET_MOUNT(Global_34573) == (*&Local_4 + 180)[12])
				{
					iLocal_657 = 1;
					TASK_CLEAR((*&Local_4 + 180)[12]);
					bLocal_711 = bLocal_411;
					bLocal_411 = (*&Local_4 + 180)[12];
					(*&Local_4 + 180)[12] = bLocal_711;
					SET_ACTORS_HORSE(Global_34573, bLocal_411);
					Function_531(bLocal_411, 0);
					GIVE_OBJECT_TO_LAYOUT(bLocal_411, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(bLocal_411, 0);
					SET_ACTORS_HORSE(bLocal_410, (*&Local_4 + 180)[12]);
					SET_MOST_RECENT_MOUNT(bLocal_410, (*&Local_4 + 180)[12]);
					SET_ALLOW_RIDE_BY_AI((*&Local_4 + 180)[12], 1);
					GIVE_OBJECT_TO_LAYOUT((*&Local_4 + 180)[12], Local_4);
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(bLocal_411, GET_AMBIENT_LAYOUT());
					bLocal_411 = GET_MOUNT(Global_34573);
					SET_ACTORS_HORSE(Global_34573, bLocal_411);
					Function_531(bLocal_411, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_411, 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_411, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
	}
	if (bParam1)
	{
		if (GET_MOUNT(bLocal_410) != (*&Local_4 + 164)[02])
		{
			MEMORY_PREFER_RIDING(bLocal_410, true);
			SET_ACTORS_HORSE(bLocal_410, (*&Local_4 + 164)[02]);
			Function_530(&bLocal_410, (*&Local_4 + 164)[02], 1);
		}
	}
	return;
}

void Function_530(var uParam0, bool bParam1, bool bParam2) //Position: 0x1EA2F / 125487
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_350(bParam1);
			vVar0 = { StackVal, StackVal, Function_350(bParam1) };
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

void Function_531(bool bParam0, int iParam1) //Position: 0x1EB37 / 125751
{
	Function_532(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_532(bool bParam0) //Position: 0x1EB49 / 125769
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

void Function_533() //Position: 0x1ECFF / 126207
{
	switch (iLocal_407)
	{
		case 0x00000006:
			Function_585(&Local_341, 1);
			bLocal_340 = CREATE_LAYOUT("ranch08_DynamicLayout");
			Function_584();
			Function_326(0,25f);
			Function_325(0.0f);
			Function_513(2.0f, 180.0f);
			Function_323(4, 1);
			Function_334();
			iLocal_407 = 7;
			break;
		
		case 0x00000007:
			if (Function_582())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_577();
				}
				if (!Function_332(&Local_341))
				{
					iLocal_407 = 8;
				}
				else
				{
					iLocal_407 = 11;
				}
			}
			break;
		
		case 0x00000008:
			bLocal_628 = Function_375();
			PRINTINT(bLocal_628);
			PRINTNL();
			bLocal_616 = false;
			iLocal_617 = 0;
			iLocal_624 = 0;
			iLocal_625 = 0;
			iLocal_627 = 0;
			Function_330(Global_34573, (*&Local_4 + 448)[0], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_410))
			{
				TASK_CLEAR(bLocal_410);
				TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_410, true);
				Function_330(bLocal_410, (*&Local_4 + 448)[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_411))
			{
				TASK_CLEAR(bLocal_411);
				TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_411, true);
				Function_330(bLocal_411, (*&Local_4 + 448)[2], 1, 1, 1);
			}
			iLocal_407 = 9;
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(Global_30668[0]) || bLocal_408 != 4294967295))
			{
				Function_576();
				iLocal_407 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_541("$/cutscene/r8/r8", &Local_399, &Local_341, &iLocal_406, 137200, 137057, 136167, 135976, 135919, 132669, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_407 = 11;
			}
			break;
		
		case 0x0000000B:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_409 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_427(3, 0, 1);
			RESET_ACTOR_GAITS(bLocal_410, 0);
			SET_CRIPPLE_ENABLE(bLocal_410, 0);
			SET_ACTOR_FACTION(bLocal_410, 20);
			TASK_PRIORITY_SET(bLocal_410, true);
			TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_410, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_410, 50.0f);
			SET_ACTOR_HEALTH(bLocal_410, GET_ACTOR_MAX_HEALTH(bLocal_410));
			TREAT_AMBIENT_SPEECH_AS_SCRIPTED(bLocal_410, 2);
			RESET_ACTOR_GAITS(bLocal_411, 0);
			TASK_PRIORITY_SET(bLocal_411, true);
			TASK_STAND_STILL(bLocal_411, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_411, 50.0f);
			SET_ACTOR_HEALTH(bLocal_411, GET_ACTOR_MAX_HEALTH(bLocal_411));
			SET_ALLOW_RIDE_BY_AI(bLocal_411, 0);
			Function_280(&bLocal_412);
			Function_280(&bLocal_415);
			Function_280(&bLocal_418);
			Function_280(&bLocal_677);
			Function_280(&bLocal_671);
			Function_280(&bLocal_668);
			Function_280(&bLocal_659);
			Function_280(&iLocal_662);
			Function_280(&bLocal_665);
			Function_280(&iLocal_674);
			Function_539("FTR_SONG_01", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_537(&uLocal_433, bLocal_340);
			iLocal_406 = 0;
			iLocal_407 = 0;
			Function_535(&Local_341, &iLocal_406, &iLocal_407);
			Function_534(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_341);
			switch (iLocal_406)
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

void Function_534(struct<25> Param0) //Position: 0x1F02F / 127023
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_406 = 0;
			break;
		
		case 0x00000002:
			iLocal_406 = 1;
			break;
		
		case 0x00000003:
			iLocal_406 = 2;
			break;
		
		case 0x00000004:
			iLocal_406 = 3;
			break;
		
		case 0x00000005:
			iLocal_406 = 4;
			break;
		
		case 0x00000006:
			iLocal_406 = 5;
			break;
		
		case 0x00000007:
			iLocal_406 = 6;
			break;
		
		case 0x00000008:
			iLocal_406 = 7;
			break;
		
		case 0x00000009:
			iLocal_406 = 8;
			break;
		
		case 0x0000000A:
			iLocal_406 = 101;
			break;
	}
}

void Function_535(int iParam0, var uParam1, int iParam2) //Position: 0x1F0C4 / 127172
{
	if (Function_332(iParam0))
	{
		*uParam1 = Function_480(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_536();
	}
	return;
}

void Function_536() //Position: 0x1F0F8 / 127224
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

int Function_537(var uParam0, bool bParam1) //Position: 0x1F149 / 127305
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_538(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_538(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_538(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_538(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_538(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1F7E9 / 129001
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

void Function_539(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1F8AC / 129196
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_540(uParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

var Function_540(int iParam0) //Position: 0x1F8C8 / 129224
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

bool Function_541(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0x1FE05 / 130565
{
	if (!bParam15)
	{
		Function_549(iParam1, uParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_332(iParam2) || iParam2->f_24 < 1))
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
				Function_225(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_548())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_547(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_225(iParam1 + 4);
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
					Function_547(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_297(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_297(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_545(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_547(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_225(iParam1 + 4);
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
						Function_544(1.0f);
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
						Function_542();
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
					Function_274(1);
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
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_332(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_542() //Position: 0x2041A / 132122
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_543();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_543() //Position: 0x2045F / 132191
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_544(bool bParam0) //Position: 0x20471 / 132209
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

void Function_545(bool bParam0, bool bParam1) //Position: 0x2048E / 132238
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
			if ((bVar3 == Global_34573 && !Function_546(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_546(bool bParam0) //Position: 0x2050E / 132366
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

int Function_547(bool bParam0) //Position: 0x2053D / 132413
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

bool Function_548() //Position: 0x205F5 / 132597
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

void Function_549(var uParam0, var uParam1) //Position: 0x2062F / 132655
{
	Function_295(uParam0, uParam1, 0);
	return;
}

int Function_550() //Position: 0x2063D / 132669
{
	switch (iLocal_406)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				if (Function_551())
				{
					Function_577();
					Function_330(Global_34573, (*&Local_4 + 448)[0], 1, 1, 1);
					Function_330(bLocal_410, (*&Local_4 + 448)[1], 1, 1, 1);
					TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_410, true);
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
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_551() //Position: 0x206C1 / 132801
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_560(&iLocal_367))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_411))
		{
			bLocal_411 = Function_392(1, 1, -854,493f, 90,444f, 2424.0f, 367,286f, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_410))
		{
			bLocal_410 = Function_552(3, 0, 1, -848,92f, 90,353f, 2448.0f, 0, 0, 0);
			return 0;
		}
	}
	return 1;
}

bool Function_552(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x2072C / 132908
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
		Function_427(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_559(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_555(StackVal, iParam7);
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
		Function_554(bVar1, 0, 0, 0, 0);
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
		Function_553(bVar1, 0);
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

void Function_553(bool bParam0, bool bParam1) //Position: 0x20C16 / 134166
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_554(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x20C36 / 134198
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

bool Function_555(int iParam0, bool bParam1) //Position: 0x20C8A / 134282
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_310(iParam0))
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
						Function_556(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_556(bool bParam0, bool bParam1) //Position: 0x20D0A / 134410
{
	Function_558(bParam0);
	Function_557(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_557(bool bParam0) //Position: 0x20D30 / 134448
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_558(bool bParam0) //Position: 0x20D54 / 134484
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

bool Function_559(int iParam0, bool bParam1) //Position: 0x20E23 / 134691
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

bool Function_560(int iParam0) //Position: 0x20EB6 / 134838
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_564();
	iVar1 = 0;
	if (!Function_169(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_563(iParam0[iVar03], 8);
		}
		else if (Function_562())
		{
			iVar1 = 1;
			Function_563(iParam0[iVar03], 8);
		}
		Function_563(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_169(iParam0[iVar03], 4))
		{
			if (!Function_169(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_169(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_169(iParam0[03], 8) || iVar1));
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
				Function_563(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_169(iParam0[iVar03], 4))
		{
			if (!Function_169(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_563(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_563(iParam0[iVar03], 2);
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
							Function_563(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_563(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_563(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_563(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_563(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_563(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_563(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_563(iParam0[iVar03], 2);
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
	Function_561();
	return 1;
}

void Function_561() //Position: 0x21231 / 135729
{
	if (!Function_292(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_562() //Position: 0x21271 / 135793
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

void Function_563(var uParam0, int iParam1) //Position: 0x2129C / 135836
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_564() //Position: 0x212AD / 135853
{
	if (!Function_292(128))
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

int Function_565() //Position: 0x212EF / 135919
{
	switch (iLocal_406)
	{
		case 0x00000063:
			Function_273(2, 1, 0, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_273(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_566() //Position: 0x21328 / 135976
{
	switch (iLocal_406)
	{
		case 0x00000063:
			Function_330(Global_34573, (*&Local_4 + 448)[0], 0, 1, 1);
			Function_330(bLocal_410, (*&Local_4 + 448)[1], 1, 1, 1);
			Function_330(bLocal_411, (*&Local_4 + 448)[2], 1, 1, 1);
			if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
			{
				Function_330((*&Local_4 + 140)[02], (*&Local_4 + 448)[8], 1, 1, 1);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 140)[02], 2, false);
				GET_OBJECT_POSITION((*&Local_4 + 180)[02], &vLocal_700);
				TASK_GO_NEAR_COORD((*&Local_4 + 140)[02], &vLocal_700, 3.0f, 2);
				TASK_PRIORITY_SET((*&Local_4 + 140)[02], true);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_567() //Position: 0x213E7 / 136167
{
	switch (iLocal_406)
	{
		case 0x00000063:
			if (!Function_568() && !Function_560(&iLocal_348))
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

bool Function_568() //Position: 0x21417 / 136215
{
	Function_571(&Local_4 + 4, 550, 2, 0);
	Function_571(&Local_4 + 4, 155, 2, 0);
	Function_571(&Local_4 + 4, 977, 2, 0);
	Function_571(&Local_4 + 4, 976, 2, 0);
	Function_571(&Local_4 + 4, 980, 2, 0);
	Function_571(&Local_4 + 4, 288, 2, 0);
	Function_571(&Local_4 + 4, 160, 2, 0);
	Function_569(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/ranch08_close1", 1, 0);
	Function_569(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/ranch08_close2", 1, 0);
	Function_569(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_569(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	if (Function_560(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_569(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x21595 / 136597
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_570(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_563(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_570(var uParam0, int iParam1, int iParam2) //Position: 0x215CD / 136653
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_169(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_563(uParam0[iVar03], 4);
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

var Function_571(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x21691 / 136849
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_169(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_563(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_563(uParam0[iVar03], 8);
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

int Function_572() //Position: 0x21761 / 137057
{
	switch (iLocal_406)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-845,937f, 91,87f, 2442,901f, -0,533f, 0,023f, -0,846f);
				return 1;
			}
			if (Function_551())
			{
				Function_577();
				Function_330(Global_34573, (*&Local_4 + 448)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_410))
				{
					Function_330(bLocal_410, (*&Local_4 + 448)[1], 1, 1, 1);
					TASK_STAND_STILL(bLocal_410, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_410, true);
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_573() //Position: 0x217F0 / 137200
{
	switch (iLocal_406)
	{
		case 0x00000063:
			Function_291(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_574(StackVal, StackVal, bLocal_340, *(&Global_3422[740] + 52), &Local_4 + 228[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_291(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_350(Global_34573);
			Function_574(StackVal, StackVal, bLocal_340, Function_350(Global_34573), &Local_399 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_574(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x21861 / 137313
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
				Function_575(bVar1, bParam0);
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

void Function_575(bool bParam0, bool bParam1) //Position: 0x21ACF / 137935
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

void Function_576() //Position: 0x21B44 / 138052
{
	if (!SQUAD_IS_VALID(Local_4.f_176))
	{
		Function_321();
		if (SQUAD_IS_VALID(Local_4.f_176))
		{
			Function_320(Local_4.f_176, 0);
			Function_319(Local_4.f_176, 3);
			Function_317(Local_4.f_176, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 164)[02]))
			{
				Function_330((*&Local_4 + 164)[02], (*&Local_4 + 448)[1], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_176, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_200))
	{
		Function_316();
		if (SQUAD_IS_VALID(Local_4.f_200))
		{
			Function_320(Local_4.f_200, 0);
			Function_319(Local_4.f_200, 3);
			Function_317(Local_4.f_200, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 180)[02]))
			{
				Function_330((*&Local_4 + 180)[02], (*&Local_4 + 448)[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 180)[12]))
			{
				Function_330((*&Local_4 + 180)[12], (*&Local_4 + 448)[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_160))
	{
		Function_315();
		if (SQUAD_IS_VALID(Local_4.f_160))
		{
			Function_320(Local_4.f_160, 0);
			SQUAD_SET_FACTION(Local_4.f_160, 20);
			Function_317(Local_4.f_160, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 140)[02]))
			{
				Function_330((*&Local_4 + 140)[02], (*&Local_4 + 448)[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 140)[12]))
			{
				Function_330((*&Local_4 + 140)[12], (*&Local_4 + 448)[7], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	return;
}

void Function_577() //Position: 0x21CD3 / 138451
{
	var uVar0;
	
	Function_581(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("ranch08_layout");
	Local_4.f_244 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 228)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -848,3712f, 90,35291f, 2445,679f, 0.0f, 99,08824f, 0.0f, 18.0f, 4.0f, 9.0f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 228)[0]);
	(*&Local_4 + 228)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -594,6225f, 100,4008f, 2599,981f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 228)[1]);
	(*&Local_4 + 228)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -892,1973f, 90,35291f, 2489,938f, 0.0f, 31,55275f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_244, (*&Local_4 + 228)[2]);
	Local_4.f_268 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary01_set");
	(*&Local_4 + 248)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_01", 2, -150,2647f, 75,65933f, 2657,363f, 0.0f, 258,8724f, 0.0f, 500.0f, 100.0f, 150.0f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 248)[0]);
	(*&Local_4 + 248)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_02", 2, -415,4513f, 94,9704f, 2454,234f, 0.0f, 169,513f, 0.0f, 500.0f, 60.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 248)[1]);
	(*&Local_4 + 248)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_03", 2, -466,4846f, 74,78233f, 2804,887f, 0.0f, 176,9571f, 0.0f, 600.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 248)[2]);
	(*&Local_4 + 248)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_04", 2, -761,4756f, 74,739f, 2581,294f, 0.0f, 258,8724f, 0.0f, 600.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 248)[3]);
	Local_4.f_292 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary02_set");
	(*&Local_4 + 272)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_01", 2, -150,2647f, 75,65933f, 2657,363f, 0.0f, 258,8724f, 0.0f, 500.0f, 100.0f, 150.0f);
	ADD_TO_VOLUME_SET(Local_4.f_292, (*&Local_4 + 272)[0]);
	(*&Local_4 + 272)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_02", 2, -415,4513f, 94,9704f, 2454,234f, 0.0f, 169,513f, 0.0f, 500.0f, 60.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_292, (*&Local_4 + 272)[1]);
	(*&Local_4 + 272)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_03", 2, -761,4756f, 74,739f, 2581,294f, 0.0f, 258,8724f, 0.0f, 600.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_292, (*&Local_4 + 272)[2]);
	(*&Local_4 + 272)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_04", 2, -573,3082f, 74,78233f, 2818,244f, 0.0f, 172,0813f, 0.0f, 400.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_292, (*&Local_4 + 272)[3]);
	Local_4.f_332 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary03_set");
	(*&Local_4 + 296)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_01", 2, -150,2647f, 75,65933f, 2657,363f, 0.0f, 258,8724f, 0.0f, 500.0f, 100.0f, 150.0f);
	ADD_TO_VOLUME_SET(Local_4.f_332, (*&Local_4 + 296)[0]);
	(*&Local_4 + 296)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_02", 2, -369,7574f, 94,9704f, 2461,444f, 0.0f, 169,513f, 0.0f, 400.0f, 60.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_332, (*&Local_4 + 296)[1]);
	(*&Local_4 + 296)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_03", 2, -416,9867f, 74,78233f, 2820,555f, 0.0f, 180,6157f, 0.0f, 400.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_332, (*&Local_4 + 296)[2]);
	(*&Local_4 + 296)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_04", 2, -825,7921f, 74,49309f, 2744,199f, 0.0f, 159,1222f, 0.0f, 500.0f, 100.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_332, (*&Local_4 + 296)[3]);
	(*&Local_4 + 296)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_05", 2, -654,3135f, 94,9704f, 2403,064f, 0.0f, 166,1985f, 0.0f, 200.0f, 60.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_332, (*&Local_4 + 296)[4]);
	(*&Local_4 + 296)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_06", 2, -797,2315f, 94,9704f, 2381,855f, 0.0f, 187,227f, 0.0f, 150.0f, 60.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_332, (*&Local_4 + 296)[5]);
	(*&Local_4 + 296)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_07", 2, -1047,842f, 94,9704f, 2497,873f, 0.0f, 254,5417f, 0.0f, 300.0f, 60.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_332, (*&Local_4 + 296)[6]);
	(*&Local_4 + 296)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_08", 2, -847,5237f, 94,9704f, 2364,97f, 0.0f, 156,7978f, 0.0f, 150.0f, 60.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_332, (*&Local_4 + 296)[7]);
	Local_4.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02a", 3, -607,9998f, 101,11f, 2604f, 0.0f, 20.0f, 0.0f, 12.0f, 10.0f, 12.0f);
	Local_4.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02", 2, -605,2075f, 101,3961f, 2603,51f, 0.0f, 251,984f, 0.0f, 250.0f, 40.0f, 10.0f);
	Local_4.f_344 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective04", 2, -896,1979f, 92,79475f, 2484,28f, 0.0f, 123,5795f, 0.0f, 5.0f, 10.0f, 8.0f);
	Local_4.f_348 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander00", 3, -268,0001f, 95,37256f, 2661,347f, 0.0f, 20.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	Local_4.f_352 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander02a", 3, -607,9998f, 101,11f, 2604f, 0.0f, 20.0f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_356 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander02b", 3, -631,9999f, 101,3961f, 2596f, 0.0f, 20.0f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_360 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander02c", 3, -635,9999f, 101,3961f, 2612f, 0.0f, 20.0f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_364 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander03", 3, -396f, 96,37646f, 2658,814f, 0.0f, 20.0f, 0.0f, 35.0f, 10.0f, 35.0f);
	Local_4.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander04", 3, -912,0001f, 90,35291f, 2468.0f, 0.0f, 20.0f, 0.0f, 8.0f, 10.0f, 8.0f);
	Local_4.f_372 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_cow_death_range", 2, -308,2039f, 98,38434f, 2757,428f, 0.0f, 0.0f, 0.0f, 60.0f, 30.0f, 40.0f);
	Local_4.f_376 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_cow_death", 2, -308,2039f, 37,31578f, 2789,299f, -0,2986102f, -2,178008f, -8,913841f, 100.0f, 100.0f, 100.0f);
	Local_4.f_380 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_ranchhand00", 2, -861,2865f, 91,10178f, 2420,159f, 0.0f, 168,1032f, 0.0f, 50.0f, 40.0f, 10.0f);
	Local_4.f_384 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_ranchhand01", 2, -635,9999f, 101,3961f, 2612f, 0.0f, 251,984f, 0.0f, 250.0f, 40.0f, 10.0f);
	Local_4.f_388 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_ranchhand02", 2, -884,5491f, 90,35291f, 2499,372f, 0.0f, 225,2709f, 0.0f, 50.0f, 40.0f, 10.0f);
	Local_4.f_392 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict01", 2, -595,9999f, 99,38824f, 2616f, 0.0f, -25,27668f, 0.0f, 10.0f, 10.0f, 5.0f);
	Local_4.f_396 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict02", 2, -594,2804f, 99,38824f, 2609,817f, 0.0f, -25,27668f, 0.0f, 10.0f, 10.0f, 5.0f);
	Local_4.f_400 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict03", 2, -595,9543f, 99,38824f, 2612,743f, 0.0f, -25,27668f, 0.0f, 10.0f, 10.0f, 12.0f);
	Local_4.f_404 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_herd01", 2, -519,9999f, 98,38434f, 2628f, 0.0f, 260,6196f, 0.0f, 250.0f, 40.0f, 10.0f);
	Local_4.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_herd02", 2, -791,2373f, 96,41742f, 2561,129f, 0.0f, 258,8724f, 0.0f, 500.0f, 40.0f, 20.0f);
	Local_4.f_412 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_herd03", 2, -895,7979f, 90,35291f, 2490,816f, 0.0f, 230,6411f, 0.0f, 500.0f, 40.0f, 20.0f);
	Local_4.f_416 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion00", 2, -847,9861f, 91,4473f, 2406,087f, 0.0f, 112,1841f, 0.0f, 50.0f, 40.0f, 10.0f);
	Local_4.f_420 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion00a", 2, -683,1235f, 95,04074f, 2541,214f, 0.0f, 233,2848f, 0.0f, 50.0f, 40.0f, 10.0f);
	Local_4.f_424 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion00b", 2, -319,646f, 96,99079f, 2617,098f, 0.0f, 256,1349f, 0.0f, 50.0f, 40.0f, 10.0f);
	Local_4.f_428 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion00c", 2, -261,1627f, 95,37256f, 2662,355f, 0.0f, 233,2348f, 0.0f, 100.0f, 40.0f, 10.0f);
	Local_4.f_432 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion01", 2, -886,8922f, 90,35291f, 2497,051f, 0.0f, 225,2709f, 0.0f, 50.0f, 40.0f, 10.0f);
	Local_4.f_436 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_streaming", 2, -352,0001f, 96,37646f, 2696.0f, 0.0f, 0.0f, 0.0f, 300.0f, 1.0f, 300.0f);
	Local_4.f_440 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_exclude_ranchers", 2, -900,3502f, 90,35291f, 2484,621f, 0.0f, 211,2811f, 0.0f, 50.0f, 40.0f, 10.0f);
	Local_4.f_444 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 448)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -844,1066f, 90,36007f, 2441,676f, 0.0f, -405,6323f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[0], Local_4.f_444);
	(*&Local_4 + 448)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -848,9199f, 90,35291f, 2448.0f, 0.0f, 86,67705f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[1], Local_4.f_444);
	(*&Local_4 + 448)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -839,6217f, 90,35291f, 2437,951f, 0.0f, 44,59867f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[2], Local_4.f_444);
	(*&Local_4 + 448)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart01", -853,7443f, 90,35294f, 2447,199f, 0.0f, 389,3228f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[3], Local_4.f_444);
	(*&Local_4 + 448)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start01", -848,1097f, 90,35207f, 2435,269f, 0.0f, 436,8297f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[4], Local_4.f_444);
	(*&Local_4 + 448)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start01", -863,3921f, 90,35207f, 2435,162f, 0.0f, 399,0738f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[5], Local_4.f_444);
	(*&Local_4 + 448)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01Start01", -855,9774f, 90,35297f, 2434,973f, 0.0f, 405,637f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[6], Local_4.f_444);
	(*&Local_4 + 448)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02Start01", -856.0f, 90,35297f, 2440.0f, 0.0f, 443,567f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[7], Local_4.f_444);
	(*&Local_4 + 448)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "ForemanStart01", -845,7654f, 90,36137f, 2442,09f, 0.0f, 5,92682f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 448)[8], Local_4.f_444);
	Local_4.f_488 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 492)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -248f, 95,37256f, 2660.0f, 0.0f, 81,06476f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 492)[0], Local_4.f_488);
	(*&Local_4 + 492)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -248f, 95,37256f, 2664.0f, 0.0f, 13,9814f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 492)[1], Local_4.f_488);
	(*&Local_4 + 492)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -245,6666f, 95,37256f, 2660.0f, 0.0f, 95,56507f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 492)[2], Local_4.f_488);
	(*&Local_4 + 492)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart02", -245,6666f, 95,37256f, 2664.0f, 0.0f, 52,89483f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 492)[3], Local_4.f_488);
	Local_4.f_512 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 516)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -591,9998f, 99,38824f, 2616f, 0.0f, 27,48118f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[0], Local_4.f_512);
	(*&Local_4 + 516)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -591,9999f, 100,3922f, 2600f, 0.0f, 229,8711f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[1], Local_4.f_512);
	(*&Local_4 + 516)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart03", -591,0979f, 99,38824f, 2612,688f, 0.0f, 52,6909f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[2], Local_4.f_512);
	(*&Local_4 + 516)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEnd03", -593,7145f, 99,38824f, 2617,904f, 0.0f, 235,5671f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[3], Local_4.f_512);
	(*&Local_4 + 516)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -593,1656f, 99,38824f, 2618,768f, 0.0f, 47,43582f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[4], Local_4.f_512);
	(*&Local_4 + 516)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd03", -591,9999f, 99,38824f, 2612f, 0.0f, -123,6245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[5], Local_4.f_512);
	(*&Local_4 + 516)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01Start03", -651,9999f, 101,3961f, 2604f, 0.0f, 576,1392f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[6], Local_4.f_512);
	(*&Local_4 + 516)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02Start03", -627,9998f, 101,3961f, 2584f, 0.0f, 576,1392f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[7], Local_4.f_512);
	(*&Local_4 + 516)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start03", -651,9999f, 101,3961f, 2608f, 0.0f, 243,425f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[8], Local_4.f_512);
	(*&Local_4 + 516)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start03", -627,9998f, 101,3961f, 2588f, 0.0f, 244,3532f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 516)[9], Local_4.f_512);
	Local_4.f_560 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 564)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -372f, 96,37646f, 2680.0f, 0.0f, -35,92851f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[0], Local_4.f_560);
	(*&Local_4 + 564)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -356f, 96,37646f, 2684.0f, 0.0f, 51,0537f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[1], Local_4.f_560);
	(*&Local_4 + 564)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -356,0001f, 95,8914f, 2668.0f, 0.0f, 137,5271f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[2], Local_4.f_560);
	(*&Local_4 + 564)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart04", -360f, 96,09892f, 2668.0f, 0.0f, 166,8409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[3], Local_4.f_560);
	(*&Local_4 + 564)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start04", -404f, 95,74117f, 2636.0f, 0.0f, 199,48f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[4], Local_4.f_560);
	(*&Local_4 + 564)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start04", -416f, 96,37646f, 2672.0f, 0.0f, 301,1436f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[5], Local_4.f_560);
	(*&Local_4 + 564)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01Start04", -408,0001f, 96,17288f, 2632.0f, 0.0f, 208,0311f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[6], Local_4.f_560);
	(*&Local_4 + 564)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02Start04", -420f, 96,37646f, 2672.0f, 0.0f, 208,4707f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[7], Local_4.f_560);
	Local_4.f_600 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 604)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -372f, 96,37646f, 2680.0f, 0.0f, -35,92851f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[0], Local_4.f_600);
	(*&Local_4 + 604)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart05", -356f, 96,37646f, 2684.0f, 0.0f, 51,0537f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[1], Local_4.f_600);
	(*&Local_4 + 604)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -356,0001f, 95,8914f, 2668.0f, 0.0f, 137,5271f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[2], Local_4.f_600);
	(*&Local_4 + 604)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart05", -360f, 96,09892f, 2668.0f, 0.0f, 171,0134f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[3], Local_4.f_600);
	(*&Local_4 + 604)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01Start05", -404f, 95,74117f, 2636.0f, 0.0f, 199,48f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[4], Local_4.f_600);
	(*&Local_4 + 604)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02Start05", -416f, 96,37646f, 2672.0f, 0.0f, 301,1436f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[5], Local_4.f_600);
	(*&Local_4 + 604)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01Start05", -408,0001f, 96,17288f, 2632.0f, 0.0f, 208,0311f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[6], Local_4.f_600);
	(*&Local_4 + 604)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02Start05", -420f, 96,37646f, 2672.0f, 0.0f, 208,4707f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 604)[7], Local_4.f_600);
	Local_4.f_640 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 644)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -892,0001f, 90,21791f, 2488.0f, 0.0f, 107,0352f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[0], Local_4.f_640);
	(*&Local_4 + 644)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -892,0001f, 90,35291f, 2496.0f, 0.0f, 19,44652f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[1], Local_4.f_640);
	(*&Local_4 + 644)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -789,684f, 93,233f, 2412,109f, 0.0f, 28,34227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[2], Local_4.f_640);
	(*&Local_4 + 644)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01StartLast", -880,0001f, 90,35291f, 2484.0f, 0.0f, 128,6165f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[3], Local_4.f_640);
	(*&Local_4 + 644)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand01EndLast", -860,0001f, 90,35291f, 2496f, 0.0f, 224,2596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[4], Local_4.f_640);
	(*&Local_4 + 644)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02StartLast", -904,0001f, 90,35291f, 2496.0f, 0.0f, 260,1118f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[5], Local_4.f_640);
	(*&Local_4 + 644)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand02EndLast", -863,6053f, 90,35831f, 2504,139f, 0.0f, 260,1118f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[6], Local_4.f_640);
	(*&Local_4 + 644)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand03StartLast", -911,1899f, 90,35291f, 2489,235f, 0.0f, 265,317f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[7], Local_4.f_640);
	(*&Local_4 + 644)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand03EndLast", -894,3778f, 90,35291f, 2483,087f, 0.0f, 380,8433f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[8], Local_4.f_640);
	(*&Local_4 + 644)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand04StartLast", -903,6192f, 90,35291f, 2485,608f, 0.0f, 248,4792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[9], Local_4.f_640);
	(*&Local_4 + 644)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "RanchHand04EndLast", -892,0001f, 90,35291f, 2476.0f, 0.0f, 375,2749f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[10], Local_4.f_640);
	(*&Local_4 + 644)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse01StartLast", -883,1916f, 90,35291f, 2484,795f, 0.0f, 135,4803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[11], Local_4.f_640);
	(*&Local_4 + 644)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "Horse02StartLast", -901,2327f, 90,35291f, 2494,488f, 0.0f, 216,7514f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[12], Local_4.f_640);
	(*&Local_4 + 644)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -889,8765f, 90,35291f, 2489,938f, 0.0f, 60,4441f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[13], Local_4.f_640);
	(*&Local_4 + 644)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStartLast", -892,7091f, 90,35291f, 2491,732f, 0.0f, -118,0327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[14], Local_4.f_640);
	(*&Local_4 + 644)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEndLast", -860,0001f, 90,35291f, 2496f, 0.0f, -118,0327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 644)[15], Local_4.f_640);
	Local_4.f_712 = CREATE_OBJECTSET_IN_LAYOUT("CowPoints01Set", Local_4, 8, 0);
	(*&Local_4 + 716)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cow01_01", -627,9999f, 101,3961f, 2620,023f, 0.0f, 31,0067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[0], Local_4.f_712);
	(*&Local_4 + 716)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cow01_02", -623,9998f, 101,3961f, 2616,057f, 0.0f, 68,15549f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[1], Local_4.f_712);
	*(&Local_4 + 728) = { -915,6606f, 90,35291f, 2450,725f };
	*(&Local_4 + 728 + 12) = { 0.0f, 61,71318f, 0.0f };
	*(&Local_4 + 752) = { -912,0001f, 90,35291f, 2448f };
	*(&Local_4 + 752 + 12) = { 0.0f, 61,71318f, 0.0f };
	*(&Local_4 + 776) = { -268,0001f, 95,37256f, 2661,347f };
	*(&Local_4 + 776 + 12) = { 0.0f, -281,7473f, 0.0f };
	Local_4.f_800 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective00", -268,0001f, 95,37256f, 2661,347f, 0.0f, -281,7473f, 0.0f);
	Local_4.f_804 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02", -607,9998f, 101,11f, 2604f, 0.0f, 67,49557f, 0.0f);
	Local_4.f_808 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02_1", -606,6039f, 101,11f, 2602,913f, 0.0f, 57,59213f, 0.0f);
	Local_4.f_812 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02_2", -635,9999f, 101,3961f, 2612f, 0.0f, 57,59213f, 0.0f);
	Local_4.f_816 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective03a", -312,0001f, 98,38434f, 2740.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_820 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective03b", -396f, 96,37646f, 2658,814f, 0.0f, 58,88443f, 0.0f);
	Local_4.f_824 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective04", -912,0001f, 90,35291f, 2468.0f, 0.0f, 41,1324f, 0.0f);
	*(&Local_4 + 828) = { -630,487f, 108,803f, 2617,055f };
	*(&Local_4 + 828 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_852 = CREATE_POINT_IN_LAYOUT(Local_4, "point_spawn_cows02", -635,9998f, 101,3961f, 2608f, 0.0f, -2,635109f, 0.0f);
	Local_4.f_856 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_ranchhand01_01", -864,2888f, 90,35291f, 2423,017f, 0.0f, -10,30052f, 0.0f);
	Local_4.f_860 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_ranchhand01_02", -872,5187f, 90,31625f, 2423,226f, 0.0f, -10,30052f, 0.0f);
	*(&Local_4 + 864) = { -883,1916f, 90,35291f, 2484,795f };
	*(&Local_4 + 864 + 12) = { 0.0f, -140,592f, 0.0f };
	*(&Local_4 + 888) = { -901,2327f, 90,35291f, 2494,488f };
	*(&Local_4 + 888 + 12) = { 0.0f, -143,0692f, 0.0f };
	*(&Local_4 + 912) = { -900,0001f, 90,35291f, 2460.0f };
	*(&Local_4 + 912 + 12) = { 0.0f, -143,338f, 0.0f };
	*(&Local_4 + 936) = { -896,0001f, 90,35291f, 2460.0f };
	*(&Local_4 + 936 + 12) = { 0.0f, -157,649f, 0.0f };
	*(&Local_4 + 960) = { -884,0001f, 90,35291f, 2500f };
	*(&Local_4 + 960 + 12) = { 0.0f, -143,338f, 0.0f };
	*(&Local_4 + 984) = { -527,9999f, 98,38434f, 2640f };
	*(&Local_4 + 984 + 12) = { 0.0f, 57,59213f, 0.0f };
	*(&Local_4 + 1008) = { -551,9998f, 98,94958f, 2676f };
	*(&Local_4 + 1008 + 12) = { 0.0f, 57,59213f, 0.0f };
	Local_4.f_1032 = CREATE_POINT_IN_LAYOUT(Local_4, "point_teleport_herd01", -571,9998f, 98,97831f, 2616f, 0.0f, 244,3766f, 0.0f);
	Local_4.f_1036 = CREATE_POINT_IN_LAYOUT(Local_4, "point_teleport_herd02", -563,9998f, 98,38434f, 2632f, 0.0f, 249,0479f, 0.0f);
	*(&Local_4 + 1040) = { -599,9999f, 100,3922f, 2612f };
	*(&Local_4 + 1040 + 12) = { 0.0f, 47,43582f, 0.0f };
	*(&Local_4 + 1064) = { -591,9999f, 99,38824f, 2612f };
	*(&Local_4 + 1064 + 12) = { 0.0f, 230,3344f, 0.0f };
	*(&Local_4 + 1088) = { -599,9999f, 100,3922f, 2608f };
	*(&Local_4 + 1088 + 12) = { 0.0f, 86,47206f, 0.0f };
	*(&Local_4 + 1112) = { -919,9626f, 90,32674f, 2496,137f };
	*(&Local_4 + 1112 + 12) = { 0.0f, 86,47206f, 0.0f };
	*(&Local_4 + 1136) = { -593,7145f, 99,38824f, 2617,904f };
	*(&Local_4 + 1136 + 12) = { 0.0f, 235,5634f, 0.0f };
	*(&Local_4 + 1160) = { -852,0001f, 90,35291f, 2500.0f };
	*(&Local_4 + 1160 + 12) = { 0.0f, 235,5115f, 0.0f };
	*(&Local_4 + 1184) = { -794,9116f, 92,2652f, 2425,005f };
	*(&Local_4 + 1184 + 12) = { 0.0f, 235,5115f, 0.0f };
	*(&Local_4 + 1208) = { -900,0001f, 90,35291f, 2496f };
	*(&Local_4 + 1208 + 12) = { 0.0f, 235,5115f, 0.0f };
	*(&Local_4 + 1232) = { -352,0001f, 96,37646f, 2696.0f };
	*(&Local_4 + 1232 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1256) = { -846,7406f, 90,35291f, 2430,584f };
	*(&Local_4 + 1256 + 12) = { 0.0f, 61,71318f, 0.0f };
	Local_4.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ranch08_close1", "ranch08_close1", -898,978f, 90,342f, 2487,389f, 0.0f, 315.0f, 0.0f);
	Local_4.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ranch08_close2", "ranch08_close2", -892,3127f, 90,289f, 2482,892f, 0.0f, 103,283f, 0.0f);
	Local_4.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -903,6192f, 90,35291f, 2485,608f, 0.0f, -119,1492f, 0.0f);
	Local_4.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_spit", "stand_spit", -911,1899f, 90,35291f, 2489,235f, 0.0f, -88,52366f, 0.0f);
}

var @ïEWÄ-@B½åºEðÄ,yB¼ÿbEqÇÄ*ýB½ýEÉÓÄ(ÝØB¾oEÄ%ïqB¿2­E1ÏÄ BÃVEhÂÄéBÄR£E!ÄÀBÄÒE¨Ä&qBÅïEÕÁÄÿþBÆ)E ÚÄÿüBÅ¶ìE!jdÃú BÄÚE!Õ6Ãê BÃ`E"gÃÖL:BÃVHE"é²ÃÈjBÂ[E#]ÃÓ_(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165) //Position: 0x24B71 / 150385
{
	Local_4.f_1324 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, (StackVal - 15882 % 4.0f * 9121));
}

struct<8> 	§EHrÄ-¡¤B¾C>EvÄ-B¾ÝEèTÄ-(ÊB¾@ïEµÄ,ÈWB½åºEü(Ä+¾B¼ÿbE\Ä*V³B½ýE¯Ä(°þB¾oEãlÄ%Ö:B¿2­E_ÄôBÃVEHëÄù+BÄR£EfoÄõIBÄÒEBÄ¦BÅïE¶ï,½:D0;opath_rancher_right01   p  D(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231) //Position: 0x24D25 / 150821
{
	int iVar46448;
	
	Unknown_Function();
	*(StackVal - 19276) = StackVal;
	(StackVal * 6000)->f_50262 = StackVal;
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
}

void åºE¹Ä,ÔB¼ÿbEòÄ*éFB½ýEäÄ)
³B¾oEÄÄ&¨B¿2­EQ?Ä 4BÃVEÄ§BÄR£E¥ÓÄ*8BÄÒEÇëÄI;BÅïEô,½:D4;opath_rancher01 p   0ÄTö¹B´´´E/ÄUåB´´µE&?ÄVÌB´´±E	ÓÄWnB´´°Eìs,½:D(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, int iParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183) //Position: 0x24EC1 / 151233
{
}

void Function_581(int iParam0, int iParam1) //Position: 0x24FE1 / 151521
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

bool Function_582() //Position: 0x2502A / 151594
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_583(0))
		{
			return 0;
		}
		if (!Function_568())
		{
			return 0;
		}
		if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\ranch08"))
		{
			return 0;
		}
		if (!Function_560(&iLocal_348))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_410))
		{
			bLocal_410 = Function_552(3, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_410, 1))
		{
			return 0;
		}
		if (!Function_396())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_411))
		{
			bLocal_411 = Function_392(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_411, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_583(bool bParam0) //Position: 0x250DC / 151772
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

void Function_584() //Position: 0x2510A / 151818
{
	Function_569(&iLocal_348, "ranch08", 10, 0);
	Function_571(&iLocal_348, 1008, 2, 0);
	Function_571(&iLocal_348, 1009, 2, 0);
	Function_571(&iLocal_348, 1010, 2, 0);
	Function_571(&iLocal_348, 1011, 2, 0);
	Function_571(&iLocal_348, 550, 2, 0);
	return;
}

void Function_585(int iParam0, bool bParam1) //Position: 0x25160 / 151904
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_591(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_332(iParam0))
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
	if (!Function_332(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_218();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244();
	Function_543();
	Function_233("");
	Function_590(0);
	Function_589();
	Function_210();
	Function_209();
	ENABLE_JOURNAL_REPLAY(0);
	Function_588();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_343(0, 0x40400000);
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
	Function_587(13);
	Function_587(14);
	Function_587(25);
	Function_587(24);
	Function_587(12);
	Function_587(27);
	Function_587(26);
	Function_587(15);
	Function_586();
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

void Function_586() //Position: 0x25584 / 152964
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

void Function_587(int iParam0) //Position: 0x255F8 / 153080
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_588() //Position: 0x25618 / 153112
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

void Function_589() //Position: 0x25655 / 153173
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_590(int iParam0) //Position: 0x25669 / 153193
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_213())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_591(int iParam0, int iParam1) //Position: 0x2569E / 153246
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
			Function_592(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_592(int iParam0) //Position: 0x25720 / 153376
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

void Function_593() //Position: 0x2576E / 153454
{
	return;
}

void Function_594(var uParam0, bool bParam1) //Position: 0x25774 / 153460
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
				if (IS_ACTOR_VALID(bParam1) && IS_ACTOR_VALID((*&Local_4 + 140)[02]))
				{
					if (!GET_ACTORS_HORSE(bParam1) != bVar0 && !GET_ACTORS_HORSE((*&Local_4 + 140)[02]) != bVar0)
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

bool Function_595(int iParam0) //Position: 0x25853 / 153683
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
			Function_596(iParam0, 1);
			return 1;
		}
	}
	Function_596(iParam0, 0);
	return 0;
}

void Function_596(int iParam0, bool bParam1) //Position: 0x258DA / 153818
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

bool Function_597(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x258FE / 153854
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
		Function_596(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_616(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_615(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_615(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_601(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_596(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_600(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_599(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_600(&bVar17);
														strcpy(&Var18, "", 64);
														Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_233(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_599(StackVal, iParam2, bVar17);
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
	Function_596(iParam2, 0);
	return 0;
}

void Function_598(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x25C97 / 154775
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

void Function_599(var uParam0, int iParam1, bool bParam2) //Position: 0x25D82 / 155010
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

void Function_600(bool bParam0) //Position: 0x25DF8 / 155128
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_601(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x25E1A / 155162
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
			return Function_612(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_605(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_612(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_602(iParam0, bVar2);
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
						bVar2 = Function_612(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_602(iParam0, bVar2);
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

var Function_602(int iParam0, bool bParam1) //Position: 0x25F64 / 155492
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
				bParam1 = Function_604(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_603(16);
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
				bParam1 = Function_604(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_603(256);
			}
		}
	}
	return bParam1;
}

bool Function_603(int iParam0) //Position: 0x26097 / 155799
{
	return 2 | iParam0;
}

int Function_604(int iParam0) //Position: 0x260A1 / 155809
{
	return 4 | iParam0;
}

int Function_605(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x260AB / 155819
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
				iParam3 = Function_611(iParam0, iParam1, bParam4);
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
			return Function_603(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_606(iParam0, iParam1, 0, bParam4);
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
			return Function_603(16);
		}
	}
	return 0;
}

int Function_606(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2615D / 155997
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_610(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_609(iVar0, 3, 1, bParam3))
			{
				if (!Function_615(iParam0, 8, 1))
				{
					return Function_608(64, 1024, bParam2);
				}
			}
			return Function_607(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_609(iVar0, 2, 1, bParam3))
			{
				if (!Function_615(iParam0, 32, 1))
				{
					return Function_608(64, 1024, bParam2);
				}
			}
			return Function_607(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_609(iVar0, 1, 1, bParam3))
			{
				if (!Function_615(iParam0, 64, 1))
				{
					return Function_608(64, 1024, bParam2);
				}
			}
			return Function_607(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_609(iVar0, 3, 1, bParam3))
			{
				if (!Function_615(iParam0, 128, 1))
				{
					return Function_608(64, 1024, bParam2);
				}
			}
			return Function_607(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_609(iVar0, 1, 1, bParam3))
			{
				if (!Function_615(iParam0, 1024, 1))
				{
					return Function_608(64, 1024, bParam2);
				}
			}
			return Function_607(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_609(iVar0, 1, 1, bParam3))
			{
				if (!Function_615(iParam0, 1024, 1))
				{
					return Function_608(64, 1024, bParam2);
				}
			}
			return Function_607(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_607(int iParam0, int iParam1, bool bParam2) //Position: 0x26317 / 156439
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_608(int iParam0, int iParam1, bool bParam2) //Position: 0x2632C / 156460
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_609(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x26341 / 156481
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_610(int iParam0) //Position: 0x2635E / 156510
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

int Function_611(var uParam0, int iParam1, bool bParam2) //Position: 0x263CD / 156621
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_610(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_609(iVar0, 3, 1, bParam2))
			{
				if (!Function_615(uParam0, 8, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000009:
			if (Function_609(iVar0, 3, 1, bParam2))
			{
				if (!Function_615(uParam0, 8, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x0000006E:
			if (Function_609(iVar0, 2, 1, bParam2))
			{
				if (!Function_615(uParam0, 16, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x0000005B:
			if (Function_609(iVar0, 2, 1, bParam2))
			{
				if (!Function_615(uParam0, 32, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000031:
			if (Function_609(iVar0, 1, 1, bParam2))
			{
				if (!Function_615(uParam0, 64, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000007:
			if (Function_609(iVar0, 3, 1, bParam2))
			{
				if (!Function_615(uParam0, 128, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000008:
			if (Function_609(iVar0, 2, 1, bParam2))
			{
				if (!Function_615(uParam0, 256, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000014:
			if (Function_609(iVar0, 1, 1, bParam2))
			{
				if (!Function_615(uParam0, 512, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000018:
			if (Function_609(iVar0, 1, 1, bParam2))
			{
				if (!Function_615(uParam0, 512, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000057:
			if (Function_609(iVar0, 1, 1, bParam2))
			{
				if (!Function_615(uParam0, 1024, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000058:
			if (Function_609(iVar0, 1, 1, bParam2))
			{
				if (!Function_615(uParam0, 1024, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_612(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x265E8 / 157160
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
						return Function_611(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_615(iParam0, 2, 1))
					{
						return Function_604(8);
					}
					return Function_603(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_615(iParam0, 4, 1))
					{
						return Function_604(16);
					}
					return Function_603(16);
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
							return Function_606(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_615(iParam0, 2, 1))
						{
							return Function_604(128);
						}
						return Function_603(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_615(iParam0, 4, 1))
						{
							return Function_604(256);
						}
						return Function_603(256);
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
						return Function_606(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_615(iParam0, 2, 1))
					{
						return Function_604(8);
					}
					return Function_603(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_615(iParam0, 4, 1))
					{
						return Function_604(16);
					}
					return Function_603(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_614(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_615(iParam0, 2, 1))
					{
						return Function_604(8);
					}
					return Function_603(8);
				}
				if (!Function_615(iParam0, 4, 1))
				{
					return Function_604(16);
				}
				return Function_603(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_606(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_613(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_603(128);
							}
							if (!Function_615(iParam0, 2, 1))
							{
								return Function_604(8);
							}
							return Function_603(8);
						}
						if (iParam4 == 2)
						{
							if (Function_613(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_603(256);
							}
							if (!Function_615(iParam0, 4, 1))
							{
								return Function_604(16);
							}
							return Function_603(16);
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

bool Function_613(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x268A7 / 157863
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

int Function_614(int iParam0, var uParam1, bool bParam2) //Position: 0x26960 / 158048
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_610(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_609(iVar0, 2, 1, bParam2))
			{
				if (!Function_615(iParam0, 16, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x0000005B:
			if (Function_609(iVar0, 2, 1, bParam2))
			{
				if (!Function_615(iParam0, 32, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000057:
			if (Function_609(iVar0, 1, 1, bParam2))
			{
				if (!Function_615(iParam0, 1024, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		case 0x00000058:
			if (Function_609(iVar0, 1, 1, bParam2))
			{
				if (!Function_615(iParam0, 1024, 1))
				{
					return Function_604(64);
				}
			}
			return Function_603(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_615(int iParam0, bool bParam1, bool bParam2) //Position: 0x26A74 / 158324
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

int Function_616(int iParam0) //Position: 0x26A9C / 158364
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

bool Function_617(bool bParam0) //Position: 0x26ACD / 158413
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_618(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x26AEB / 158443
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

