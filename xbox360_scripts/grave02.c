//Decompiled with MagicRDR v1.0
//Function Count : 590
//Statics Count : 702
//Natives Count : 759
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1469> Local_4 = { 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_374 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_381 = 99;
	iLocal_382 = 6;
	Local_383 = 1000;
	while (Function_268())
	{
		Function_213();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	START_VEHICLE((*&Local_4 + 244)[02]);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_400);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_401);
	if (bLocal_391 || bLocal_392)
	{
		if (IS_ACTOR_VALID((*&Local_4 + 244)[02]))
		{
			DESTROY_ACTOR((*&Local_4 + 244)[02]);
		}
	}
	Function_212(&Local_4 + 328);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_400, false);
	RESET_PLAYER_TARGET_WEIGHT();
	Function_210(Global_34207);
	CLEAR_ACTOR_PROOF(Global_34573, 16);
	Function_207(1, 1, 0, 1, 1);
	Function_206();
	Function_205();
	Function_204(bLocal_373);
	Function_204(Local_4);
	SET_WEAPONENUM_LOCKED(23, 1);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	if (IS_BLIP_VALID(bLocal_531))
	{
		REMOVE_BLIP(bLocal_531);
	}
	Function_202(1);
	Function_201();
	Function_174(bLocal_391, 1, 0, 1, 1, 1, 1, 1);
	Function_170(&bLocal_414);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_478))
	{
		DESTROY_ITERATOR(bLocal_478);
	}
	RELEASE_LAYOUT_REF(bLocal_373);
	if (bLocal_390)
	{
		Function_24(Local_374, 1, 1, 1, 0);
	}
	else if (bLocal_391)
	{
		Function_20(Local_374);
	}
	else
	{
		Function_2(Local_374);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x139 / 313
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x15A / 346
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x175 / 373
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x196 / 406
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x1AC / 428
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

void Function_7(int iParam0) //Position: 0x248 / 584
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x269 / 617
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

void Function_9() //Position: 0x2AF / 687
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x2C8 / 712
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x31B / 795
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

struct<16> Function_12(int iParam0) //Position: 0x43F / 1087
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x464 / 1124
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x484 / 1156
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x49B / 1179
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x4B6 / 1206
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6FD / 1789
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x726 / 1830
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

bool Function_19(int iParam0) //Position: 0x74A / 1866
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x75F / 1887
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x77D / 1917
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

struct<16> Function_22(int iParam0) //Position: 0x823 / 2083
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x84D / 2125
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAA3 / 2723
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

void Function_25() //Position: 0xB90 / 2960
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

bool Function_26(int iParam0, bool bParam1) //Position: 0xBC0 / 3008
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

int Function_27(int iParam0) //Position: 0xBFD / 3069
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xC17 / 3095
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xC2D / 3117
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF24 / 3876
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

void Function_31(char* cParam0, int iParam1) //Position: 0xF90 / 3984
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xFC7 / 4039
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

bool Function_33(var uParam0, int iParam1) //Position: 0x103F / 4159
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1052 / 4178
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

int Function_35(int iParam0) //Position: 0x10F3 / 4339
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1130 / 4400
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1143 / 4419
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

void Function_38(int iParam0, int iParam1) //Position: 0x1355 / 4949
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x138F / 5007
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

bool Function_40() //Position: 0x13D1 / 5073
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x13DA / 5082
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

void Function_42() //Position: 0x142B / 5163
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

void Function_43() //Position: 0x145E / 5214
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

void Function_44() //Position: 0x1564 / 5476
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

void Function_45() //Position: 0x1597 / 5527
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

void Function_46() //Position: 0x1725 / 5925
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

void Function_47() //Position: 0x18D9 / 6361
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x18E7 / 6375
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

var Function_49() //Position: 0x1AD8 / 6872
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1AED / 6893
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B88 / 7048
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1E23 / 7715
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

var Function_53() //Position: 0x2450 / 9296
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2458 / 9304
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2469 / 9321
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x255E / 9566
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2577 / 9591
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x25DC / 9692
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x25EE / 9710
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2600 / 9728
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

int Function_61(int iParam0) //Position: 0x2730 / 10032
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x273F / 10047
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2778 / 10104
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x27B5 / 10165
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x294F / 10575
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

int Function_66(bool bParam0) //Position: 0x2B69 / 11113
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2BAA / 11178
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

struct<8> Function_68() //Position: 0x2C33 / 11315
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

struct<8> Function_69() //Position: 0x2CCA / 11466
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

void Function_70() //Position: 0x2D49 / 11593
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D6F / 11631
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

void Function_72() //Position: 0x2F79 / 12153
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

bool Function_73(vector3 vParam0) //Position: 0x301A / 12314
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3032 / 12338
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

vector3 Function_75() //Position: 0x3119 / 12569
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3122 / 12578
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3131 / 12593
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3147 / 12615
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x320E / 12814
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x322B / 12843
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

bool Function_81(int iParam0) //Position: 0x3707 / 14087
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x371D / 14109
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x373C / 14140
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3756 / 14166
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x37BD / 14269
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

void Function_86() //Position: 0x39DD / 14813
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A5D / 14941
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3DAF / 15791
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

int Function_89(int iParam0) //Position: 0x3E32 / 15922
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E4C / 15948
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E7A / 15994
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4118 / 16664
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

void Function_93(int iParam0, int iParam1) //Position: 0x42DB / 17115
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x4539 / 17721
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

int Function_95() //Position: 0x46BE / 18110
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

void Function_96() //Position: 0x475D / 18269
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

void Function_97(int iParam0) //Position: 0x480C / 18444
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

var Function_98(int iParam0) //Position: 0x486A / 18538
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

int Function_99(int iParam0, bool bParam1) //Position: 0x48F9 / 18681
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

var Function_100(int iParam0, int iParam1) //Position: 0x4A96 / 19094
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

void Function_101() //Position: 0x4AD7 / 19159
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4AED / 19181
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4B2D / 19245
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B6D / 19309
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B7C / 19324
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

int Function_106(int iParam0) //Position: 0x4D44 / 19780
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

var Function_107() //Position: 0x4DD9 / 19929
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4DFE / 19966
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x52B9 / 21177
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

var Function_110(int iParam0) //Position: 0x55CE / 21966
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5671 / 22129
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

int Function_112(int iParam0, bool bParam1) //Position: 0x586C / 22636
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5A08 / 23048
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5AD3 / 23251
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

void Function_115(int iParam0) //Position: 0x63C3 / 25539
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6532 / 25906
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x6638 / 26168
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6665 / 26213
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

var Function_119(vector3 vParam0) //Position: 0x66BC / 26300
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x670A / 26378
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x675E / 26462
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

void Function_122() //Position: 0x68FC / 26876
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6902 / 26882
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

void Function_124(bool bParam0, int iParam1) //Position: 0x69A6 / 27046
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x69FB / 27131
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6A11 / 27153
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6A62 / 27234
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

void Function_128(var uParam0, int iParam1) //Position: 0x6A8F / 27279
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A9E / 27294
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6AB5 / 27317
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6AC4 / 27332
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6C0E / 27662
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

bool Function_133() //Position: 0x6C59 / 27737
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6C86 / 27782
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

int Function_135(int iParam0) //Position: 0x6E36 / 28214
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6E8D / 28301
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

var Function_137(int iParam0) //Position: 0x6EB2 / 28338
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

bool Function_138(bool bParam0, int iParam1) //Position: 0x6F08 / 28424
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

int Function_139(bool bParam0) //Position: 0x6F67 / 28519
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F73 / 28531
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6F8F / 28559
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

int Function_142(int iParam0, int iParam1) //Position: 0x6FE1 / 28641
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

int Function_143(int iParam0, int iParam1) //Position: 0x7054 / 28756
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x70B0 / 28848
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

int Function_145(int iParam0, int iParam1) //Position: 0x7121 / 28961
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x717B / 29051
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7427 / 29735
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

void Function_148(int iParam0, bool bParam1) //Position: 0x76B6 / 30390
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

void Function_149() //Position: 0x7715 / 30485
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

var Function_150(int iParam0, int iParam1) //Position: 0x7790 / 30608
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

int Function_151(int iParam0) //Position: 0x8382 / 33666
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x8397 / 33687
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x83E6 / 33766
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x83F3 / 33779
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8444 / 33860
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

bool Function_156(int iParam0, int iParam1) //Position: 0x84B2 / 33970
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x84C5 / 33989
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

var Function_158(int iParam0) //Position: 0x85C4 / 34244
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

bool Function_159(var uParam0, int iParam1) //Position: 0x861C / 34332
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x8638 / 34360
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

bool Function_161(int iParam0) //Position: 0x868F / 34447
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x86A1 / 34465
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

void Function_163(int iParam0) //Position: 0x86D5 / 34517
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x873C / 34620
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8819 / 34841
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

void Function_166() //Position: 0x8992 / 35218
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x899E / 35230
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

void Function_168() //Position: 0x89E4 / 35300
{
	Function_169();
	return;
}

void Function_169() //Position: 0x89ED / 35309
{
	Function_170(&Local_4 + 4);
	Function_170(&Local_4 + 212);
	Function_170(&Local_4 + 228);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170(bool bParam0) //Position: 0x8A0D / 35341
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_171(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x8A33 / 35379
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

void Function_172(var uParam0, int iParam1) //Position: 0x8B61 / 35681
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_173(var uParam0, bool bParam1) //Position: 0x8B7B / 35707
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8B98 / 35736
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

void Function_175() //Position: 0x8D89 / 36233
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

void Function_176(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x8DDF / 36319
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_177((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_177(bool bParam0) //Position: 0x8E25 / 36389
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_178() //Position: 0x8E4A / 36426
{
	return Global_12976.f_156;
}

void Function_179() //Position: 0x8E55 / 36437
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

void Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x8E7F / 36479
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

void Function_181(int iParam0) //Position: 0x8F8A / 36746
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

bool Function_182() //Position: 0x9009 / 36873
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

void Function_183() //Position: 0x9066 / 36966
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

void Function_184() //Position: 0x908C / 37004
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

void Function_185(int iParam0) //Position: 0x90B2 / 37042
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_186(int iParam0) //Position: 0x90CF / 37071
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_187(int iParam0) //Position: 0x90E2 / 37090
{
	Function_188(&Global_28842, iParam0);
	return;
}

void Function_188(var uParam0, int iParam1) //Position: 0x90F0 / 37104
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_189(bool bParam0) //Position: 0x910B / 37131
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_190(int iParam0) //Position: 0x9138 / 37176
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

void Function_191(bool bParam0) //Position: 0x91FF / 37375
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

void Function_192(bool bParam0) //Position: 0x927B / 37499
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

void Function_193() //Position: 0x92EF / 37615
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

void Function_194() //Position: 0x9330 / 37680
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

void Function_195() //Position: 0x9371 / 37745
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_196(int iParam0) //Position: 0x9385 / 37765
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

bool Function_197() //Position: 0x93C1 / 37825
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

void Function_198() //Position: 0x93E6 / 37862
{
	Global_8722 = 0.0f;
	return;
}

void Function_199() //Position: 0x93F0 / 37872
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

int Function_200() //Position: 0x941B / 37915
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_201() //Position: 0x9435 / 37941
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

void Function_202(bool bParam0) //Position: 0x954F / 38223
{
	if (bParam0)
	{
		Function_203("rsdTRAIL_curve20", 5, 50);
		Function_203("rsdTRAIL_curve21", 5, 50);
		Function_203("rsdGPSTRAIL_curve20", 18, 50);
		Function_203("rsdGPSTRAIL_curve21", 18, 50);
		Function_203("rsdGPSTRAIL_curve624", 18, 50);
		Function_203("rsdGPSTRAIL_curve626", 18, 50);
	}
	else
	{
		Function_203("rsdTRAIL_curve20", 5, 10);
		Function_203("rsdTRAIL_curve21", 5, 10);
		Function_203("rsdGPSTRAIL_curve20", 18, 10);
		Function_203("rsdGPSTRAIL_curve21", 18, 10);
		Function_203("rsdGPSTRAIL_curve624", 18, 10);
		Function_203("rsdGPSTRAIL_curve626", 18, 10);
	}
	return;
}

void Function_203(char* cParam0, int iParam1, int iParam2) //Position: 0x96A5 / 38565
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME(cParam0, iParam1));
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_CURVE_WEIGHT(bVar0, iParam2);
		PRINTSTRING(GET_CURVE_NAME(bVar0));
		PRINTSTRING(" has been configured");
		PRINTNL();
	}
	else
	{
		PRINTSTRING(GET_CURVE_NAME(bVar0));
		PRINTSTRING(" is invalid. Could not configure.");
		PRINTNL();
	}
	return;
}

void Function_204(bool bParam0) //Position: 0x9720 / 38688
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

void Function_205() //Position: 0x9778 / 38776
{
	Function_170(&Local_4 + 228);
	return;
}

void Function_206() //Position: 0x9785 / 38789
{
	Function_170(&Local_4 + 212);
	return;
}

int Function_207(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9792 / 38802
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

void Function_208(bool bParam0) //Position: 0x9AB0 / 39600
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

void Function_209(bool bParam0) //Position: 0x9ADC / 39644
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

int Function_210(bool bParam0) //Position: 0x9AF1 / 39665
{
	if (!Function_211(bParam0, "TRAIN_RELEASE"))
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

bool Function_211(int iParam0, int iParam1) //Position: 0x9B40 / 39744
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_212(var uParam0) //Position: 0x9B4F / 39759
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

void Function_213() //Position: 0x9B96 / 39830
{
	var uVar0[12];
	int iVar13;
	
	if (Function_267())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02";
		uVar0[4] = "Stage 03";
		uVar0[5] = "Last Stage";
		uVar0[6] = "nFlame on!";
		uVar0[7] = "turn off the fire";
		uVar0[8] = "HAT!";
		uVar0[9] = "nShoot 135";
		uVar0[10] = "nShoot 180";
		uVar0[11] = "nShoot 225";
		iVar13 = Function_253(&uLocal_393, &uVar0, &Local_374 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_252(&iVar13, &iLocal_381, &iLocal_382, &Local_383))
		{
			Function_245();
			Function_244();
		}
		if (iVar13 == 0)
		{
			Function_245();
			Function_244();
			Function_243(&bLocal_390, 8);
		}
		else if (iVar13 == 1)
		{
			Function_245();
			Function_244();
			Function_239(iLocal_381);
			Function_235(StackVal, StackVal, 5, &bLocal_391, &iLocal_381, Function_241(iLocal_381), Function_239(iLocal_381), 0);
		}
		else if (iVar13 == 2)
		{
			Function_245();
			Function_244();
			Function_230(&bLocal_392, 4);
		}
		else if (iVar13 == 3)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_479);
			iLocal_381 = 1;
			iLocal_382 = 0;
			Local_383 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_479);
			iLocal_381 = 2;
			iLocal_382 = 0;
			Local_383 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_479);
			iLocal_381 = 101;
			iLocal_382 = 0;
			Local_383 = 1000;
		}
		else if (iVar13 == 6)
		{
			Function_245();
			Function_244();
			Function_215();
		}
		else if (iVar13 == 7)
		{
			Function_245();
			Function_244();
			iLocal_513 = 0;
			Function_214();
		}
		else if (iVar13 == 8)
		{
			Function_245();
			Function_244();
			EQUIP_ACCESSORY(bLocal_400, 0, 1);
		}
		else if (iVar13 == 9)
		{
			Function_245();
			Function_244();
			SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Gun/Fire_135");
		}
		else if (iVar13 == 10)
		{
			Function_245();
			Function_244();
			SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Gun/Fire_180");
		}
		else if (iVar13 == 11)
		{
			Function_245();
			Function_244();
			SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Gun/Fire_225");
		}
	}
	return;
}

void Function_214() //Position: 0x9E6F / 40559
{
	UNK_0x1A59E608(bLocal_536);
	UNK_0x1A59E608(bLocal_535);
	UNK_0x1A59E608(bLocal_537);
	return;
}

void Function_215() //Position: 0x9E8A / 40586
{
	Function_214();
	if ((RAND_INT_RANGE(false, 3) % 2) == 0)
	{
		bLocal_536 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_53(), "script_wagon_fire_grave02", (*&Local_4 + 244)[02], 0,648f, 2,266f, 0,536f, true, 0);
		UNK_0x6745191B(bLocal_536, 0.0f, 0.0f, 0.0f);
		Function_227();
	}
	else
	{
		bLocal_535 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_53(), "script_wagon_fire_grave02", (*&Local_4 + 244)[02], -0,688f, 2,266f, 0,536f, true, 0);
		UNK_0x6745191B(bLocal_535, 0.0f, 0.0f, 0.0f);
		Function_225();
	}
	bLocal_537 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_53(), "script_wagonfire_grave02_allWagon", (*&Local_4 + 244)[02], 0.0f, 0.0f, 0.0f, true, 0);
	UNK_0x6745191B(bLocal_537, 0.0f, 0.0f, 0.0f);
	HUD_CLEAR_SMALL_TEXT();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Function_219();
	fLocal_515 = GET_CURRENT_GAME_TIME();
	Function_216(&bLocal_491);
	if (IS_OBJECT_VALID(bLocal_532))
	{
		DESTROY_OBJECT(bLocal_532);
	}
	if (iLocal_503 != 1)
	{
		iLocal_504 = iLocal_503;
		if (iLocal_504 == 7)
		{
			iLocal_504 = 5;
		}
		iLocal_503 = 1;
		SET_PLAYER_CONTROL_RUMBLE(0, 1);
	}
	iLocal_513++;
	return;
}

void Function_216(bool bParam0) //Position: 0x9FCB / 40907
{
	if (Function_218(bParam0))
	{
		if (!Function_217(bParam0))
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

bool Function_217(bool bParam0) //Position: 0xA08A / 41098
{
	return Function_153(*bParam0, 2);
}

bool Function_218(bool bParam0) //Position: 0xA097 / 41111
{
	return Function_153(*bParam0, 1);
}

void Function_219() //Position: 0xA0A4 / 41124
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_WagonOnFire", "Grave02_WagonOnFire", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_220(int iParam0) //Position: 0xA0F3 / 41203
{
	Function_224(0, Global_34573, iParam0, 0);
	Function_224(1, bLocal_400, iParam0, 0);
	if (SQUAD_IS_VALID(Local_4.f_272))
	{
		Function_224(2, Function_221(Local_4.f_272, 505, 1), iParam0, 0);
	}
	Function_224(3, (*&Local_4 + 348)[02], iParam0, 0);
	return;
}

bool Function_221(bool bParam0, int iParam1, int iParam2) //Position: 0xA13A / 41274
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	bVar0 = false;
	bVar4 = false;
	fVar3 = 999999,9f;
	bVar1 = "";
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_SIZE(bParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (!Function_223(bVar1, 0) || iParam2)
				{
					fVar2 = Function_222(bVar1, Global_34573);
					if (fVar2 > fVar3)
					{
						if (GET_ACTOR_ENUM(bVar1) == iParam1)
						{
							fVar3 = fVar2;
							bVar4 = bVar0;
						}
					}
				}
				bVar0++;
			}
		}
		else
		{
			return "";
		}
	}
	return "";
	return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar4);
}

var Function_222(bool bParam0, bool bParam1) //Position: 0xA1C7 / 41415
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

bool Function_223(bool bParam0, int iParam1) //Position: 0xA2B8 / 41656
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

void Function_224(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xA302 / 41730
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_225() //Position: 0xA327 / 41767
{
	Function_226();
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Fire_L");
	iLocal_505 = 9;
	return;
}

void Function_226() //Position: 0xA358 / 41816
{
	if (!ACTOR_HAS_ANIM_SET(bLocal_400, "graverobber"))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_400, 0);
		SET_ANIM_SET_FOR_ACTOR(bLocal_400, "graverobber", 0);
		SET_REACT_NODE_FOR_ACTOR(bLocal_400, "graverobber/Robber/Reaction");
	}
	return;
}

void Function_227() //Position: 0xA3B8 / 41912
{
	Function_226();
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Fire_R");
	iLocal_505 = 9;
	return;
}

void Function_228(bool bParam0) //Position: 0xA3E9 / 41961
{
	Function_229(bParam0, 0.0f);
	return;
}

void Function_229(bool bParam0, bool bParam1) //Position: 0xA3F5 / 41973
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_76(bParam0, 1);
	Function_36(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_230(bool bParam0, int iParam1) //Position: 0xA416 / 42006
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_231(iParam1);
	*bParam0 = 1;
	return;
}

void Function_231(int iParam0) //Position: 0xA439 / 42041
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_234("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_233(2) || Function_233(8)) || Function_233(9)) || Function_233(10))
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
		Function_234("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_234("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_234("");
	}
	else if (iParam0 == 8)
	{
		Function_232();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_232();
	}
	return;
}

void Function_232() //Position: 0xA530 / 42288
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_233(int iParam0) //Position: 0xA53C / 42300
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

void Function_234(bool bParam0) //Position: 0xA572 / 42354
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_235(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA5DC / 42460
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_236(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_231(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_236(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA619 / 42521
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_238(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_237(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_237(int iParam0) //Position: 0xA69C / 42652
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

var Function_238(vector3 vParam0, bool bParam3) //Position: 0xAB4A / 43850
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

vector3 Function_239(int iParam0) //Position: 0xABB5 / 43957
{
	Function_240(iParam0 + 1);
	return StackVal, StackVal, Function_240(iParam0 + 1);
}

vector3 Function_240(int iParam0) //Position: 0xABC2 / 43970
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, StackVal, *(&Local_4 + 548[06]);
			break;
		
		case 0x00000001:
			return StackVal, StackVal, *(&Local_4 + 700[06]);
			break;
		
		case 0x00000002:
			return StackVal, StackVal, *(&Local_4 + 756[06]);
			break;
		
		case 0x00000003:
			return StackVal, StackVal, *(&Local_4 + 868[06]);
			break;
		
		default:
			return StackVal, StackVal, *(&Local_4 + 868[06]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal, StackVal, *(&Local_4 + 868[06]);
}

int Function_241(int iParam0) //Position: 0xAC9B / 44187
{
	return Function_242(iParam0 + 1);
}

int Function_242(int iParam0) //Position: 0xACA8 / 44200
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal;
			break;
		
		case 0x00000001:
			return StackVal;
			break;
		
		case 0x00000002:
			return StackVal;
			break;
		
		case 0x00000003:
			return -374,804f;
			break;
		
		default:
			return -374,804f;
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal;
}

void Function_243(bool bParam0, int iParam1) //Position: 0xAD7F / 44415
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_231(iParam1);
	*bParam0 = 1;
	return;
}

void Function_244() //Position: 0xADA2 / 44450
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_245() //Position: 0xADB7 / 44471
{
	Function_247();
	Function_246(10, 3);
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0xADC6 / 44486
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

void Function_247() //Position: 0xAEFD / 44797
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

void Function_248() //Position: 0xAF48 / 44872
{
	Function_249(25, 2);
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0xAF54 / 44884
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

void Function_250(int iParam0, int iParam1) //Position: 0xB152 / 45394
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

bool Function_251() //Position: 0xB289 / 45705
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

bool Function_252(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB2F0 / 45808
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
		Function_234("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB396 / 45974
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

void Function_254(int iParam0, int iParam1, int iParam2) //Position: 0xB45D / 46173
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

bool Function_255(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB4B9 / 46265
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

void Function_256(bool bParam0) //Position: 0xB63F / 46655
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

void Function_257(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB679 / 46713
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

var Function_258(int iParam0, var uParam1, int iParam2) //Position: 0xB727 / 46887
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_259(var uParam0, int iParam1, int iParam2) //Position: 0xB74B / 46923
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

int Function_260() //Position: 0xB7E7 / 47079
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

void Function_261(var uParam0, int iParam1, int iParam2) //Position: 0xB823 / 47139
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

int Function_262(bool bParam0) //Position: 0xB8BB / 47291
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

var Function_263(var uParam0, int iParam1) //Position: 0xBA06 / 47622
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

void Function_264(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBB55 / 47957
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

var Function_265(int iParam0, int iParam1) //Position: 0xBBE8 / 48104
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_266(var uParam0, var uParam1) //Position: 0xBC02 / 48130
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

bool Function_267() //Position: 0xBC50 / 48208
{
	return Global_30920;
}

bool Function_268() //Position: 0xBC59 / 48217
{
	if (IS_EXITFLAG_SET())
	{
		Function_239(iLocal_381);
		Function_235(StackVal, StackVal, 4, &bLocal_391, &iLocal_381, Function_241(iLocal_381), Function_239(iLocal_381), 0);
		return 0;
	}
	Function_589(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_374, iLocal_381, iLocal_382, &bLocal_392, &bLocal_390, &bLocal_391);
	if (iLocal_381 == 99 && iLocal_381 == 100)
	{
		Function_588();
		if (IS_ACTOR_ALIVE(Global_34573))
		{
			if (FIRE_IS_ACTOR_ON_FIRE(Global_34573))
			{
				FIRE_STOP_ON_ACTOR(Global_34573);
			}
		}
		if (IS_ACTOR_ALIVE(bLocal_400))
		{
			if (FIRE_IS_ACTOR_ON_FIRE(bLocal_400))
			{
				FIRE_STOP_ON_ACTOR(bLocal_400);
			}
		}
		Function_584(Function_586(&uLocal_508, &uLocal_509, 1, 7.0f, iLocal_605));
		if (IS_DEBUGKEY_PRESSED(35) || IS_BUTTON_PRESSED(GET_DEBUG_PADINDEX(), 5, 1, 0))
		{
			iLocal_513 = 0;
			Function_214();
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_239(iLocal_381);
			Function_235(StackVal, StackVal, 1, &bLocal_391, &iLocal_381, Function_241(iLocal_381), Function_239(iLocal_381), 0);
			return 1;
		}
		if (Function_583(2048))
		{
			Function_239(iLocal_381);
			Function_235(StackVal, StackVal, 3, &bLocal_391, &iLocal_381, Function_241(iLocal_381), Function_239(iLocal_381), 0);
			return 1;
		}
		if (Function_563(&Local_648, &uLocal_608, &uLocal_683, bLocal_478, iLocal_605))
		{
			if (Function_561(&uLocal_683))
			{
				Function_239(iLocal_381);
				Function_235(StackVal, StackVal, 5, &bLocal_391, &iLocal_381, Function_241(iLocal_381), Function_239(iLocal_381), 0);
				return 1;
			}
		}
		Function_560();
	}
	switch (iLocal_381)
	{
		case 0x00000063:
			Function_519();
			break;
		
		case 0x00000000:
			Function_490();
			break;
		
		case 0x00000001:
			Function_476();
			break;
		
		case 0x00000002:
			Function_320();
			break;
		
		case 0x00000065:
			Function_271();
			break;
		
		case 0x00000064:
			if (Function_270(&bLocal_391))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_269(&iLocal_381, &iLocal_382, &Local_383))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_392)
	{
		Function_230(&bLocal_392, 4);
		Function_1();
		return 0;
	}
	if (bLocal_390)
	{
		Function_243(&bLocal_390, 8);
		Function_1();
		return 0;
	}
	if (bLocal_391 && iLocal_381 == 100)
	{
		Function_239(iLocal_381);
		Function_235(StackVal, StackVal, 5, &bLocal_391, &iLocal_381, Function_241(iLocal_381), Function_239(iLocal_381), 0);
	}
	return 1;
}

bool Function_269(var uParam0, var uParam1, int iParam2) //Position: 0xBE3D / 48701
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

bool Function_270(int iParam0) //Position: 0xBE7D / 48765
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_271() //Position: 0xBE90 / 48784
{
	switch (iLocal_382)
	{
		case 0x00000000:
			Function_316(0);
			TASK_CLEAR(Global_34573);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_400, GET_ACTOR_MAX_HEALTH(bLocal_400));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_315();
			Function_312();
			bLocal_402 = Function_311(StackVal, StackVal, *(&Local_4 + 868[06]), 0, 1, 1);
			if (!Function_310(bLocal_402))
			{
				Function_309(&Local_374);
			}
			if (!iLocal_403[2])
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 868[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_400, *(&Local_4 + 868[26]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 868[46]), 1, true, 1);
				Function_228(&bLocal_479);
				iLocal_382 = 1;
			}
			else
			{
				Function_228(&bLocal_479);
				iLocal_382 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_310(bLocal_402) || bLocal_402 != 4294967295))
			{
				Function_228(&bLocal_479);
				iLocal_382 = 2;
			}
			break;
		
		case 0x00000002:
			Function_240(iLocal_381);
			Function_303(StackVal, StackVal, Function_240(iLocal_381), iLocal_381, Global_30628[2], Function_242(iLocal_381), 3);
			Function_302(&(Local_648[017]));
			Function_302(&(Local_648[117]));
			Function_214();
			Local_383 = 1000;
			Function_228(&bLocal_479);
			iLocal_382 = 3;
			break;
		
		case 0x00000003:
			if (Function_274())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				TELEPORT_ACTOR_WITH_HEADING(bLocal_401, 0.0f, 0.0f, 0.0f, 0.0f, 1, true, 1);
				if (StackVal || !Function_272(StackVal, !IS_ACTOR_DRIVING_VEHICLE(Global_34573), (*&Local_4 + 244)[02], *(&Local_4 + 868[86]), 10.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 868[86]), 1, true, 1);
					SET_ACTOR_IN_VEHICLE(Global_34573, (*&Local_4 + 244)[02], false);
				}
				Function_228(&bLocal_479);
				iLocal_382 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				SET_ACTOR_SPEED((*&Local_4 + 244)[02], 0.0f);
				bLocal_390 = true;
			}
			break;
	}
	return;
}

bool Function_272(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xC098 / 49304
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_273(bParam0);
		if (VDIST(Function_273(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_273(bool bParam0) //Position: 0xC122 / 49442
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

bool Function_274() //Position: 0xC18C / 49548
{
	Function_299(&Local_383, 0);
	switch (Local_383)
	{
		case 0x000003E8:
			if (iLocal_381 != 99 && (Function_298(&Local_374) || Local_374.f_24 < 1))
			{
				Local_383 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/GRAVE_02_END/GRAVE_02_END"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_383 = 1106;
				return 0;
			}
			Function_295(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_293(StackVal, StackVal, bLocal_373, *(&Local_4 + 868[06]), &Local_4 + 416[1], 0, 0, 0, 0, 1, 1);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			Function_290();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_289(Global_34573, 1, 1);
			DECOR_SET_BOOL(Global_34573, "NoIdle", true);
			Function_289(bLocal_400, 1, 1);
			if (!SQUAD_IS_VALID(Local_4.f_408))
			{
				Function_288();
			}
			if (!SQUAD_IS_VALID(Local_4.f_412))
			{
				Function_287();
			}
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_400);
			TASK_STAND_STILL(bLocal_400, -1.0f, 0, 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!IS_ACTOR_VALID((*&Local_4 + 244)[02]))
			{
				Function_282();
			}
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_63097 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/GRAVE_02_END/GRAVE_02_END", 0, 2, 1, 2, 2);
			}
			Function_228(&Local_383 + 4);
			Local_383 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_281(&Local_383 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_383 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_400, true);
				Global_63097 = 0;
				iLocal_526 = 0;
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_400));
				RESET_ANIM_SET_FOR_ACTOR(bLocal_400, 0);
				TELEPORT_ACTOR(bLocal_400, &Local_4 + 868[76], 1, 1, 1);
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				TELEPORT_ACTOR_WITH_HEADING(bLocal_401, 0.0f, 0.0f, 0.0f, 0.0f, 1, true, 1);
				Function_228(&Local_383 + 4);
				Local_383 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (!iLocal_528)
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 868[106]), 1, true, 1);
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 244)[02]);
				iLocal_528 = 1;
			}
			if (!iLocal_526)
			{
				if (Function_281(&Local_383 + 4) <= 0,75f)
				{
					Function_280(Local_4.f_408);
					Function_279(StackVal, StackVal, Local_4.f_408, *(&Local_4 + 868[116]), 10.0f, 5.0f, 15.0f, -1.0f);
					Function_280(Local_4.f_412);
					Function_279(StackVal, StackVal, Local_4.f_412, *(&Local_4 + 868[126]), 10.0f, 5.0f, 15.0f, -1.0f);
					iLocal_526 = 1;
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_383 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 868[136]), 1, true, 1);
				SNAP_OBJECT_TO_GROUND((*&Local_4 + 244)[02], 0,2f, true, 1092616192);
				TELEPORT_ACTOR_WITH_HEADING(bLocal_401, 0.0f, 0.0f, 0.0f, 0.0f, 1, true, 1);
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_400));
				TELEPORT_ACTOR_WITH_HEADING(bLocal_400, 0.0f, 0.0f, 0.0f, 0.0f, 1, true, 1);
				if (!Function_278())
				{
					SET_ACTOR_IN_VEHICLE(Global_34573, (*&Local_4 + 244)[02], false);
				}
				CAMERA_RESET(0);
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_383.f_20);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_383.f_20);
				DESTROY_VOLUME(Local_383.f_20);
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_400, false);
				Function_276(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				Function_275(1, 1);
				START_VEHICLE((*&Local_4 + 244)[02]);
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_400));
				TELEPORT_ACTOR_WITH_HEADING(bLocal_400, 0.0f, 0.0f, 0.0f, 0.0f, 1, true, 1);
				Function_289(Global_34573, 0, 1);
				Function_289(bLocal_400, 0, 1);
				Local_383 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_63097 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				Local_383 = 1104;
			}
			break;
		
		case 0x00000452:
			Local_383 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_275(bool bParam0, bool bParam1) //Position: 0xC61F / 50719
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

void Function_276(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xC66B / 50795
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
	Function_277(iParam9);
}

void Function_277(bool bParam0) //Position: 0xC75B / 51035
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

bool Function_278() //Position: 0xC800 / 51200
{
	if (IS_ACTOR_VALID((*&Local_4 + 244)[02]))
	{
		if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
		{
			if (GET_VEHICLE(Global_34573) == (*&Local_4 + 244)[02])
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_279(bool bParam0, vector3 vParam1) //Position: 0xC82F / 51247
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar3))
		{
			bVar1 = RAND_FLOAT_RANGE(bParam5, bParam6);
			vParam1.f_4 = (vParam1.y + bVar1);
			bVar2 = RAND_FLOAT_RANGE(-bParam4, bParam4);
			vParam1 = (vParam1.x + bVar2);
			bVar2 = RAND_FLOAT_RANGE(-bParam4, bParam4);
			vParam1.f_8 = (vParam1.z + bVar2);
			TASK_BIRD_SOAR_AT_COORD(bVar3, &vParam1, fParam7, 1106247680);
		}
		bVar0++;
	}
}

void Function_280(bool bParam0) //Position: 0xC8A6 / 51366
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

bool Function_281(bool bParam0) //Position: 0xC8D8 / 51416
{
	if (Function_218(bParam0))
	{
		if (Function_217(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_282() //Position: 0xC9A0 / 51616
{
	Local_4.f_256 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "WagonGroupset", 0);
	(*&Local_4 + 244)[02] = Function_283(Local_4, "nbodyWagon", 1199, 996, -1816f, 24,0941f, 2870,82f, 0.0f, 51,68236f, 0.0f, 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(Local_4.f_256, (*&Local_4 + 244)[02]);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 244)[02], 2, 0);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 244)[02], 3, 0);
	return;
}

var Function_283(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xCA2A / 51754
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
			if (Function_286(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_285(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_284(bVar16, &iVar1))
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

bool Function_284(int iParam0, int iParam1) //Position: 0xCC5E / 52318
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

var Function_285(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xCC90 / 52368
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_286(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xCCA8 / 52392
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

void Function_287() //Position: 0xCCCF / 52431
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_412 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "endCrows_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nendCrow_4", 1132, -3899,151f, 38,02156f, 2926,544f, 0.0f, 191,8601f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_412);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nendCrow_5", 1132, -3896,262f, 36,23165f, 2927,41f, 0.0f, 141,3497f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_412);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nendCrow_6", 1132, -3897,528f, 36,89534f, 2927,032f, 0.0f, 208,3905f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_412);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	return;
}

void Function_288() //Position: 0xCDB1 / 52657
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_408 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "endCrows_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nendCrow_1", 1132, -3900,938f, 37,60048f, 2926,275f, 0.0f, 250,7659f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_408);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nendCrow_2", 1132, -3901,612f, 37,1395f, 2926,186f, 0.0f, 141,3497f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_408);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nendCrow_3", 1132, -3902,771f, 36,47616f, 2925,83f, 0.0f, 208,3905f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_408);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	return;
}

void Function_289(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCE93 / 52883
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

void Function_290() //Position: 0xCF2D / 53037
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bLocal_401))
	{
		bVar1 = GET_MOST_RECENT_MOUNT(Global_34573);
	}
	else
	{
		bVar1 = bLocal_401;
	}
	TELEPORT_ACTOR_WITH_HEADING(bVar1, 0.0f, 0.0f, 0.0f, 0.0f, 1, true, 1);
	bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "unmountedHorses"));
	Function_292(Local_4, &bVar0, bVar1);
	Function_212(&bVar0);
	if (IS_ACTOR_VALID(bVar1))
	{
		PRINTSTRING("GOT PLAYER HORSE! It's at ");
		Function_291(bVar1);
		PRINTVECTOR(Function_291(bVar1));
		PRINTNL();
	}
	return;
}

vector3 Function_291(bool bParam0) //Position: 0xCFB9 / 53177
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_292(bool bParam0, var uParam1, bool bParam2) //Position: 0xCFCA / 53194
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_VALID(bVar0))
		{
			PRINTSTRING("Got a valid actor named ");
			PRINTSTRING(GET_ACTOR_NAME(bVar0));
			PRINTNL();
			if (IS_ACTOR_HORSE(bVar0) && !IS_ACTOR_MOUNTED(bVar0))
			{
				if (bVar0 != bParam2)
				{
					PRINTSTRING(GET_ACTOR_NAME(bVar0));
					PRINTSTRING(" is a horse, put him in the horse squad");
					PRINTNL();
					SQUAD_JOIN(bVar0, *uParam1);
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return;
}

void Function_293(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xD08A / 53386
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
				Function_294(bVar1, bParam0);
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

void Function_294(bool bParam0, bool bParam1) //Position: 0xD2F8 / 54008
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

void Function_295(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xD36D / 54125
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
				Function_291(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_291(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_297()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_297()));
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
	if (Function_296(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_296(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_296(int iParam0) //Position: 0xD616 / 54806
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_297() //Position: 0xD632 / 54834
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

bool Function_298(int iParam0) //Position: 0xD6B1 / 54961
{
	return iParam0->f_20;
}

void Function_299(int iParam0, int iParam1) //Position: 0xD6BB / 54971
{
	Function_300(iParam0, iParam1, 0);
	return;
}

void Function_300(var uParam0, bool bParam1, bool bParam2) //Position: 0xD6C9 / 54985
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
			Function_301(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_301(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_301(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD815 / 55317
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

void Function_302(int iParam0) //Position: 0xD83E / 55358
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

void Function_303(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0xD8F2 / 55538
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
	if (iParam3 != Global_34165.f_48 && !Function_308())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_307(0);
	Function_306();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_305(uParam4, iVar0, iVar1);
	Function_304();
}

void Function_304() //Position: 0xD98F / 55695
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

void Function_305(int iParam0, bool bParam1, bool bParam2) //Position: 0xD9D0 / 55760
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

void Function_306() //Position: 0xDB36 / 56118
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_307(bool bParam0) //Position: 0xDB5A / 56154
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

bool Function_308() //Position: 0xDB89 / 56201
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_309(int iParam0) //Position: 0xDBA4 / 56228
{
	if (!Function_298(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_180(1, 0, 1);
		}
	}
	return;
}

bool Function_310(bool bParam0) //Position: 0xDBBF / 56255
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

bool Function_311(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0xDBDB / 56283
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

void Function_312() //Position: 0xDC6B / 56427
{
	Function_185(47);
	Function_186(256);
	Function_313(9);
	return;
}

void Function_313(int iParam0) //Position: 0xDC81 / 56449
{
	Function_314(&Global_28842, iParam0);
	return;
}

void Function_314(var uParam0, var uParam1) //Position: 0xDC8F / 56463
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_315() //Position: 0xDCB2 / 56498
{
	Function_226();
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "graverobber/Robber/Idle");
	iLocal_505 = 2;
	return;
}

void Function_316(bool bParam0) //Position: 0xDCE0 / 56544
{
	Function_317(0, 0x40400000);
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

void Function_317(bool bParam0, float fParam1) //Position: 0xDD14 / 56596
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
	Function_319();
	Function_318();
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

void Function_318() //Position: 0xDE12 / 56850
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_319() //Position: 0xDE44 / 56900
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

void Function_320() //Position: 0xDF41 / 57153
{
	if (iLocal_382 < 3 && iLocal_382 > 105)
	{
		Function_446();
		Function_439();
		if (iLocal_511 <= 6)
		{
			Function_416();
		}
		if (Function_272(StackVal, StackVal, Global_34573, *(&Local_4 + 1324), 160.0f))
		{
			Function_415();
		}
		if (IS_VOLUME_ENABLED((*&Local_4 + 484)[7]) || IS_VOLUME_ENABLED((*&Local_4 + 484)[8]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 484)[7]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 484)[8]))
			{
				SET_VOLUME_ENABLED((*&Local_4 + 484)[7], 0);
				SET_VOLUME_ENABLED((*&Local_4 + 484)[8], 0);
			}
		}
		if (IS_VOLUME_VALID((*&Local_4 + 484)[2]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 484)[2]))
			{
				DESTROY_VOLUME((*&Local_4 + 484)[2]);
			}
		}
		if (IS_VOLUME_VALID((*&Local_4 + 484)[5]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 484)[5]))
			{
				DESTROY_VOLUME((*&Local_4 + 484)[5]);
			}
		}
		Function_411();
		Function_409();
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_528))
	{
		if (iLocal_382 <= 9)
		{
			if (SQUAD_IS_VALID(Local_4.f_272))
			{
				Function_372();
			}
		}
	}
	switch (iLocal_382)
	{
		case 0x00000000:
			Function_316(0);
			SET_ACTOR_HEALTH(bLocal_400, GET_ACTOR_MAX_HEALTH(bLocal_400));
			iLocal_605 = 1;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_403[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_371(&Local_4 + 276, 1);
				iLocal_503 = 8;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_312();
				SET_VOLUME_ENABLED((*&Local_4 + 436)[0], 0);
				SET_VOLUME_ENABLED((*&Local_4 + 436)[1], 0);
				bLocal_402 = Function_311(StackVal, StackVal, *(&Local_4 + 756[06]), 0, 1, 1);
				if (!Function_310(bLocal_402))
				{
					Function_309(&Local_374);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 756[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 756[16]), 1, true, 1);
				Function_228(&bLocal_479);
				iLocal_382 = 1;
			}
			else
			{
				Function_228(&bLocal_479);
				iLocal_382 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_310(bLocal_402) || bLocal_402 != 4294967295))
			{
				Function_228(&bLocal_479);
				iLocal_382 = 2;
			}
			break;
		
		case 0x00000002:
			Function_240(iLocal_381);
			Function_303(StackVal, StackVal, Function_240(iLocal_381), iLocal_381, Global_30628[2], Function_242(iLocal_381), 3);
			TOGGLE_COVER_PROPS(0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (IS_BLIP_VALID(bLocal_531))
			{
				REMOVE_BLIP(bLocal_531);
			}
			if (iLocal_403[1] == 0)
			{
				Function_370();
				Function_369();
				Function_366();
				iLocal_688 = 2;
				SET_ACTOR_IN_VEHICLE(Global_34573, (*&Local_4 + 244)[02], false);
				Function_315();
				SET_REACT_NODE_FOR_ACTOR(bLocal_400, "graverobber/Robber/Idle");
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "nCHASE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_364();
				Function_363(&Local_4 + 272);
				Function_229(&bLocal_488, (30.0f - 8.0f));
			}
			if (IS_OBJECT_VALID(bLocal_539))
			{
				Function_362(bLocal_539);
			}
			bLocal_539 = Function_361(StackVal, StackVal, StackVal, StackVal, Local_4, "tumblegatewoooo", *(&Local_4 + 1324), *(&Local_4 + 1324 + 12), Global_34573, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			Function_359(StackVal, StackVal, *(&Local_4 + 1324), 0, 48, 1);
			Function_157(Global_30658[0]);
			Function_352(&(Local_648[017]), bLocal_400, "GraveRobber", 1, 0x5f5e100, 1);
			Function_352(&(Local_648[117]), (*&Local_4 + 244)[02], "Wagon", 1, 0x5f5e100, 1);
			Function_229(&bLocal_488, 16.0f);
			Function_228(&bLocal_491);
			Function_228(&bLocal_479);
			iLocal_382 = 6;
			break;
		
		case 0x00000006:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_281(&bLocal_479) <= 7.0f)
			{
				Function_351();
				Function_228(&bLocal_479);
				iLocal_382 = 7;
			}
			break;
		
		case 0x00000007:
			Function_350();
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_281(&bLocal_479) <= 7.0f)
			{
				Function_349("Grave02_obj03", 0x40f00000, 1, 2, 0, 0, 0);
				Function_228(&bLocal_479);
				iLocal_382 = 8;
			}
			break;
		
		case 0x00000008:
			Function_350();
			if (Function_272(StackVal, StackVal, Global_34573, *(&Local_4 + 1324), 160.0f))
			{
				SQUAD_GOALS_CLEAR(Local_4.f_272);
				Function_280(Local_4.f_272);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_272, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 1, 0, 0);
				if (Function_348(Local_4.f_272, bLocal_400, 75.0f, 0) >= 0)
				{
					Function_347();
				}
				else
				{
					SET_VOLUME_ENABLED((*&Local_4 + 484)[6], 1);
				}
				Function_228(&bLocal_479);
				Function_228(&bLocal_482);
				Function_228(&bLocal_485);
				iLocal_382 = 9;
			}
			break;
		
		case 0x00000009:
			Function_344(Local_4.f_272, Global_34573, (Function_346() + 50.0f), 1);
			if (IS_VOLUME_ENABLED((*&Local_4 + 484)[6]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 484)[6]) && Function_278())
				{
					Function_343();
					SET_VOLUME_ENABLED((*&Local_4 + 484)[6], 0);
					Function_288();
					Function_287();
					iLocal_692 = 0;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_342(Local_4.f_272);
					Function_340(&Local_4 + 272, 0, 0);
				}
			}
			if (GATEWAY_UPDATE(bLocal_539))
			{
				Function_362(bLocal_539);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_228(&bLocal_479);
				iLocal_382 = 106;
			}
			break;
		
		case 0x0000005F:
			Function_331(&bLocal_485, 60.0f, 200.0f, bLocal_400, "Grave02_return_wagon", "Wagon_abandoned", &bLocal_391, 0, 0, 0, 325, 1);
			if (Function_281(&bLocal_482) <= 9.0f)
			{
				if (Function_328(Global_34573, bLocal_400, 16.0f))
				{
					Function_327();
				}
				else
				{
					Function_326();
				}
				Function_228(&bLocal_482);
			}
			if (!Function_278())
			{
				if (Function_281(&bLocal_479) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!IS_BLIP_VALID(bLocal_530))
					{
						bLocal_530 = ADD_BLIP_FOR_ACTOR((*&Local_4 + 244)[02], 325, 0, 2, 0);
						Function_349("Grave02_return_wagon", 0x40f00000, 1, 2, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_382 = iLocal_507;
				Function_228(&bLocal_479);
				PRINTSTRING("STAGE 1 - GOAL ");
				PRINTINT(iLocal_382);
				PRINTNL();
				if (IS_BLIP_VALID(bLocal_530))
				{
					REMOVE_BLIP(bLocal_530);
				}
				if (IS_BLIP_VALID(bLocal_531))
				{
					REMOVE_BLIP(bLocal_531);
				}
				Function_325();
				bLocal_539 = Function_361(StackVal, StackVal, StackVal, StackVal, Local_4, "tumblegatewoooo", *(&Local_4 + 1324), *(&Local_4 + 1324 + 12), Global_34573, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_359(StackVal, StackVal, *(&Local_4 + 1324), 0, 48, 1);
			}
			break;
		
		case 0x0000006A:
			if ((IS_ACTOR_RIDING_VEHICLE(Global_34573) && GET_NUM_DRAFTED_ACTORS((*&Local_4 + 244)[02]) < 0) && !Function_321())
			{
				TASK_CLEAR(Global_34573);
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				iLocal_403[2] = 1;
				Function_228(&bLocal_479);
				iLocal_381 = 101;
				bLocal_382 = false;
			}
			break;
	}
	return;
}

bool Function_321() //Position: 0xE671 / 58993
{
	var uVar0;
	var uVar3;
	var uVar6;
	var uVar9;
	
	GET_POSITION((*&Local_4 + 244)[02], &uVar0);
	GET_OBJECT_AXIS((*&Local_4 + 244)[02], &uVar3, 1);
	FIND_GROUND_INTERSECTION(&uVar0, 10.0f, &uVar9, &uVar6);
	if (VDOT(&uVar3, &uVar6) > 0,2f)
	{
		if (Function_218(&bLocal_689))
		{
			if (Function_281(&bLocal_689) < 2.0f)
			{
				Function_323();
				return 1;
			}
		}
	}
	if (!Function_218(&bLocal_689))
	{
		Function_322(&bLocal_689);
	}
	else
	{
		Function_228(&bLocal_689);
	}
	return 0;
}

void Function_322(bool bParam0) //Position: 0xE6E6 / 59110
{
	if (!Function_218(bParam0))
	{
		Function_229(bParam0, 0.0f);
	}
	return;
}

void Function_323() //Position: 0xE6FB / 59131
{
	Function_324();
	REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_400));
	RESET_ANIM_SET_FOR_ACTOR(bLocal_400, 0);
	return;
}

void Function_324() //Position: 0xE714 / 59156
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	vVar1 = { 0.0f, 0,01f, 0.0f };
	REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(Local_4.f_1468));
	ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1468));
	SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(Local_4.f_1468), &vVar1);
	iVar0 = 0;
	while (iVar0 < (Local_4.f_276 - 1))
	{
		if (IS_OBJECT_VALID((*&Local_4 + 276)[iVar02]))
		{
			REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT((*&Local_4 + 276)[iVar02]));
		}
		iVar0++;
	}
	return;
}

void Function_325() //Position: 0xE782 / 59266
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DrivingTooSlow", "Grave02_DrivingTooSlow", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_326() //Position: 0xE7D7 / 59351
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_RunsAwayWagon", "Grave02_RunsAwayWagon", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_327() //Position: 0xE82A / 59434
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_NoGetBackWagon", "Grave02_NoGetBackWagon", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_328(bool bParam0, bool bParam1, float fParam2) //Position: 0xE87F / 59519
{
	float fVar0;
	
	fVar0 = Function_329(bParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_329(bool bParam0, bool bParam1) //Position: 0xE89C / 59548
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_330(&uVar0, &uVar3);
	return iVar6;
}

var Function_330(var uParam0, bool bParam1) //Position: 0xE8BB / 59579
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_331(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xE8D9 / 59609
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_339(Global_34573, bParam3, bParam2))
	{
		Function_234(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_339(Global_34573, bParam3, bParam1))
	{
		if (!Function_338(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_349(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_337(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_336(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_336(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_338(2))
	{
		Function_335(2);
		if (!Function_334())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_333();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_208(bParam3);
				Function_332(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_336(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_336(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_332(bool bParam0) //Position: 0xEA6D / 60013
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

void Function_333() //Position: 0xEA99 / 60057
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

bool Function_334() //Position: 0xEAC4 / 60100
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

void Function_335(int iParam0) //Position: 0xEB08 / 60168
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

void Function_336(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xEB6B / 60267
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

void Function_337(int iParam0) //Position: 0xEC0C / 60428
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

bool Function_338(bool bParam0) //Position: 0xEC6F / 60527
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

bool Function_339(bool bParam0, bool bParam1, bool bParam2) //Position: 0xECB6 / 60598
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

void Function_340(var uParam0, bool bParam1, bool bParam2) //Position: 0xEDC7 / 60871
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
				if (!Function_341(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_341(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xEE43 / 60995
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_342(bool bParam0) //Position: 0xEE5D / 61021
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

void Function_343() //Position: 0xEEAA / 61098
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_ArriveTumbBanter_v1_AA", "Grave02_ArriveTumbBanter_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_ArriveTumbBanter_v1_AB", "Grave02_ArriveTumbBanter_v1_AB", true, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_344(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xEF5A / 61274
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 4294967295;
	}
	bVar0 = false;
	iVar2 = 0;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!Function_339(bParam1, bVar1, bParam2))
			{
				PRINTSTRING("Destroying ");
				PRINTSTRING(GET_ACTOR_NAME(bVar1));
				PRINTSTRING("n, he was ");
				Function_345(bVar1);
				Function_291(Global_34573);
				PRINTFLOAT(VDIST(Function_345(bVar1), Function_291(Global_34573)));
				PRINTSTRING("m away.");
				PRINTNL();
				if (bParam3)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
					{
						PRINTSTRING("He was riding a horse, we'll destroy it too.");
						DESTROY_ACTOR(GET_MOUNT(bVar1));
					}
				}
				SQUAD_LEAVE(bVar1);
				DESTROY_ACTOR(bVar1);
				PRINTNL();
				iVar2++;
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
	return iVar2;
}

vector3 Function_345(bool bParam0) //Position: 0xF067 / 61543
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

float Function_346() //Position: 0xF08E / 61582
{
	return 70.0f;
}

void Function_347() //Position: 0xF099 / 61593
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_NearTumbBanter_v1_AA", "Grave02_NearTumbBanter_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_NearTumbBanter_v1_AB", "Grave02_NearTumbBanter_v1_AB", true, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_348(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF141 / 61761
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_ALIVE(bVar2))
		{
			if (Function_339(bVar2, bParam1, bParam2))
			{
				iVar1++;
				if (bParam3)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_349(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xF1B0 / 61872
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

void Function_350() //Position: 0xF203 / 61955
{
	return;
}

void Function_351() //Position: 0xF209 / 61961
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_SeesMap", "Grave02_SeesMap", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_352(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF250 / 62032
{
	if (!Function_358(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_357(uParam0, bParam2))
	{
		return 0;
	}
	Function_356(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_353(uParam0, iParam4, iParam5);
	return 1;
}

void Function_353(var uParam0, int iParam1, int iParam2) //Position: 0xF28C / 62092
{
	if (iParam1 != 100000000)
	{
		Function_355(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_354(uParam0, iParam2);
	}
	return;
}

void Function_354(int iParam0, bool bParam1) //Position: 0xF2AF / 62127
{
	iParam0->f_40 = 0;
	Function_355(iParam0, 2, bParam1);
	Function_355(iParam0, 4, bParam1);
	Function_355(iParam0, 8, bParam1);
	Function_355(iParam0, 16, bParam1);
	Function_355(iParam0, 32, bParam1);
	Function_355(iParam0, 64, bParam1);
	Function_355(iParam0, 128, bParam1);
	Function_355(iParam0, 256, bParam1);
	Function_355(iParam0, 512, bParam1);
	Function_355(iParam0, 1024, bParam1);
	return;
}

void Function_355(int iParam0, int iParam1, bool bParam2) //Position: 0xF315 / 62229
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

void Function_356(var uParam0, int iParam1) //Position: 0xF351 / 62289
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_357(int iParam0, bool bParam1) //Position: 0xF35D / 62301
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

bool Function_358(int iParam0, bool bParam1) //Position: 0xF3E6 / 62438
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

void Function_359(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0xF572 / 62834
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
		Function_360(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_360(bool bParam0) //Position: 0xF62E / 63022
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

bool Function_361(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0xF66E / 63086
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_362(bool bParam0) //Position: 0xF739 / 63289
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

void Function_363(var uParam0) //Position: 0xF7C3 / 63427
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
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
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else
			{
				DESTROY_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_364() //Position: 0xF842 / 63554
{
	Function_365((*&Local_4 + 244)[02], 0,45f);
	return;
}

void Function_365(bool bParam0, bool bParam1) //Position: 0xF857 / 63575
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
	{
		bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_366() //Position: 0xF898 / 63640
{
	Local_4.f_272 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Riders"));
	(*&Local_4 + 260)[02] = Function_367(Local_4, "rider_1", 506, Function_53(), 977, -2043,931f, 15,81273f, 2587,596f, 0.0f, -68,72905f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 260)[02], Local_4.f_272);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 260)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 260)[02], 23, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 260)[02], 19);
	return;
}

var Function_367(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0xF926 / 63782
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_368(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_368(bParam4))
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

bool Function_368(int iParam0) //Position: 0xFA4B / 64075
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_369() //Position: 0xFA62 / 64098
{
	ATTACH_OBJECTS(Local_4.f_1468, (*&Local_4 + 244)[02], "", 0,23f, 1,2f, 0,62f, -180.0f, -6,24f, -176,98f, 4294967295);
	SET_OBJECT_COLLIDE_WITH_OBJECT(Local_4.f_1468, (*&Local_4 + 244)[02], false);
	SET_OBJECT_COLLIDE_WITH_OBJECT(Local_4.f_1468, bLocal_400, false);
	return;
}

void Function_370() //Position: 0xFAB6 / 64182
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	
	if (IS_OBJECT_ATTACHED(bLocal_400))
	{
		REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_400));
	}
	Function_369();
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 244)[02]), "passengerGraveRobber_wag2_attach", &vVar6, &vVar9);
	vVar6.f_4 = (vVar6.y + 0,08f);
	GET_OBJECT_RELATIVE_POSITION((*&Local_4 + 244)[02], vVar6, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION((*&Local_4 + 244)[02], vVar9, &vVar3);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "Seth_attach_pos", vVar0, vVar3);
	ATTACH_OBJECTS_CONTINUOUS(bVar12, (*&Local_4 + 244)[02], 4294967295);
	if (IS_ACTOR_VALID(bLocal_400))
	{
		ATTACH_OBJECTS(bLocal_400, bVar12, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		TASK_STAND_STILL(bLocal_400, -1.0f, 0, 0);
		TASK_PRIORITY_SET(bLocal_400, true);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_400, (*&Local_4 + 244)[02], false);
		SET_ACTOR_PROOF(bLocal_400, 16);
		SET_ACTOR_FACTION(bLocal_400, 20);
		SET_ACTOR_INVULNERABILITY(bLocal_400, true);
	}
	return;
}

void Function_371(var uParam0, var uParam1) //Position: 0xFBB6 / 64438
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar02]))
		{
			bVar1 = GET_MOUNT((*uParam0)[iVar02]);
			if (IS_ACTOR_VALID(bVar1) && uParam1)
			{
				DESTROY_ACTOR(bVar1);
			}
			DESTROY_ACTOR((*uParam0)[iVar02]);
		}
		iVar0++;
	}
	return;
}

void Function_372() //Position: 0xFC05 / 64517
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	
	iVar0 = 0;
	bVar1 = false;
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_272) >= 0)
	{
		if (!iLocal_525)
		{
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_525 = 1;
		}
	}
	else if (iLocal_525)
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		iLocal_525 = 0;
	}
	iVar0 = (iVar0 - Function_344(Local_4.f_272, Global_34573, (Function_346() * 1,6f), 1));
	if (iVar0 >= 0)
	{
		Function_229(&bLocal_488, 16.0f);
	}
	GET_OBJECT_AXIS((*&Local_4 + 244)[02], &vVar3, 2);
	VSCALE(&vVar3, -16.0f);
	Function_345((*&Local_4 + 244)[02]);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_345((*&Local_4 + 244)[02]), vVar3, StackVal) };
	bVar1 = (SQUAD_GET_SIZE(Local_4.f_272) - 1);
	while (bVar1 > 0)
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_272, bVar1);
		if (IS_ACTOR_ALIVE(bVar2))
		{
			Function_408(bVar2);
			if (IS_ACTOR_RIDING(bVar2))
			{
				if (!DECOR_GET_BOOL(bVar2, "bottlethrower"))
				{
					if (!IS_ACTOR_VALID(bVar6))
					{
						bVar6 = bVar2;
					}
					else
					{
						Function_273(bVar2);
						Function_273(Global_34573);
						Function_273(bVar6);
						Function_273(Global_34573);
						if (VDIST(Function_273(bVar2), Function_273(Global_34573)) > VDIST(Function_273(bVar6), Function_273(Global_34573)))
						{
							bVar6 = bVar2;
						}
					}
				}
				if (Function_407(bVar2))
				{
					TASK_FLEE_ACTOR(bVar2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				Function_291(bVar2);
				if (VDIST(Function_291(bVar2), vVar3) > 30.0f)
				{
				}
			}
			else
			{
				SQUAD_LEAVE(bVar2);
				RELEASE_ACTOR(bVar2);
				TASK_FLEE_ACTOR(bVar2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				MEMORY_ALLOW_SHOOTING(bVar2, false);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
				}
				RELEASE_ACTOR(bVar2);
			}
		}
		bVar1 = (bVar1 + 4294967295);
	}
	if (IS_ACTOR_VALID(bVar6))
	{
		Function_406(bVar6);
	}
	switch (iLocal_506)
	{
		case 0x00000000:
			if (Function_405((*&Local_4 + 244)[02], 0) <= 8.0f)
			{
				fLocal_516 = 0.0f;
				Function_404();
				SQUAD_GOALS_CLEAR(Local_4.f_272);
				Function_403(Local_4.f_272, 27, 1.0f);
				iLocal_506 = 1;
			}
			else if (Function_278())
			{
				if (Function_281(&bLocal_482) <= 8.0f)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_405((*&Local_4 + 244)[02], 0) >= 0,5f)
						{
							if (fLocal_516 >= 0.0f)
							{
								fLocal_516 = GET_CURRENT_GAME_TIME();
							}
							if ((GET_CURRENT_GAME_TIME() - fLocal_516) < 6.0f)
							{
								Function_402();
							}
						}
						else
						{
							fLocal_516 = 0.0f;
							Function_325();
						}
					}
					Function_228(&bLocal_482);
				}
			}
			break;
		
		case 0x00000001:
			Function_378();
			Function_376();
			if (Function_405((*&Local_4 + 244)[02], 0) > 8.0f)
			{
				if (Function_278())
				{
					Function_325();
				}
				Function_228(&bLocal_482);
				Function_375(Local_4.f_272);
				Function_374(Local_4.f_272, 41, 1.0f);
				Function_403(Local_4.f_272, 27, 0.0f);
				Function_373();
				iLocal_506 = 0;
			}
			break;
	}
	return;
}

void Function_373() //Position: 0xFE87 / 65159
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(Local_4.f_272))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_272))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_272, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "tasked"))
				{
					DECOR_REMOVE(bVar1, "tasked");
				}
				if (DECOR_CHECK_EXIST(bVar1, "onright"))
				{
					DECOR_REMOVE(bVar1, "onright");
				}
				if (DECOR_CHECK_EXIST(bVar1, "atHorseLevel"))
				{
					DECOR_REMOVE(bVar1, "atHorseLevel");
				}
				if (DECOR_CHECK_EXIST(bVar1, "atWagonLevel"))
				{
					DECOR_REMOVE(bVar1, "atWagonLevel");
				}
				if (DECOR_CHECK_EXIST(bVar1, "atSethLevel"))
				{
					DECOR_REMOVE(bVar1, "atSethLevel");
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_374(bool bParam0, bool bParam1, bool bParam2) //Position: 0xFF89 / 65417
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (!IS_ACTOR_ANIMAL(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_VALID(bVar1))
				{
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, bParam2, 1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_375(bool bParam0) //Position: 0xFFD5 / 65493
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ANIMAL(bVar1))
			{
				if (!IS_ACTOR_VEHICLE(bVar1))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_376() //Position: 0x1001C / 65564
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	float fVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	
	if (SQUAD_IS_VALID(Local_4.f_272))
	{
		bVar0 = false;
		bVar1 = false;
		bVar2 = false;
		bVar3 = false;
		while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_272))
		{
			bVar4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_272, bVar3);
			if (IS_ACTOR_ALIVE(bVar4))
			{
				if (!DECOR_CHECK_EXIST(bVar4, "tasked"))
				{
					if (Function_328(bVar4, (*&Local_4 + 244)[02], 40.0f))
					{
						DECOR_SET_BOOL(bVar4, "tasked", true);
						vVar5 = { 0.0f, 0.0f, 0.0f };
						Function_273(bVar4);
						GET_OBJECT_RELATIVE_OFFSET((*&Local_4 + 244)[02], Function_273(bVar4), &vVar5);
						fVar8 = 10.0f;
						if (vVar5.x > 0.0f)
						{
							fVar8 = -10.0f;
							DECOR_SET_BOOL(bVar4, "onright", false);
						}
						else
						{
							DECOR_SET_BOOL(bVar4, "onright", true);
						}
						vVar9 = { fVar8, 0.0f, -16.0f };
						Function_377(bVar4, &vVar9);
					}
				}
				else
				{
					vVar12 = { 0.0f, 0.0f, 0.0f };
					Function_273(bVar4);
					GET_OBJECT_RELATIVE_OFFSET((*&Local_4 + 244)[02], Function_273(bVar4), &vVar12);
					fVar15 = 10.0f;
					if (vVar12.x > 0.0f)
					{
						if (DECOR_GET_BOOL(bVar4, "onright"))
						{
							fVar15 = -10.0f;
							DECOR_SET_BOOL(bVar4, "onright", false);
							vVar16 = { fVar15, 0.0f, -16.0f };
							Function_377(bVar4, &vVar16);
						}
					}
					else if (!DECOR_GET_BOOL(bVar4, "onright"))
					{
						DECOR_SET_BOOL(bVar4, "onright", true);
						vVar19 = { fVar15, 0.0f, -16.0f };
						Function_377(bVar4, &vVar19);
					}
				}
				if (DECOR_CHECK_EXIST(bVar4, "atHorseLevel"))
				{
					bVar0 = true;
				}
				if (DECOR_CHECK_EXIST(bVar4, "atWagonLevel"))
				{
					bVar1 = true;
				}
				if (DECOR_CHECK_EXIST(bVar4, "atSethLevel"))
				{
					bVar2 = true;
				}
				if (Function_407(bVar4))
				{
					TASK_FLEE_ACTOR(bVar4, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
			}
			bVar3++;
		}
		if (DECOR_CHECK_EXIST((*&Local_4 + 244)[02], "GunnerAtHorseLevel") && !bVar0)
		{
			DECOR_REMOVE((*&Local_4 + 244)[02], "GunnerAtHorseLevel");
		}
		if (DECOR_CHECK_EXIST((*&Local_4 + 244)[02], "GunnerAtWagonLevel") && !bVar1)
		{
			DECOR_REMOVE((*&Local_4 + 244)[02], "GunnerAtWagonLevel");
		}
		if (DECOR_CHECK_EXIST((*&Local_4 + 244)[02], "GunnerAtSethLevel") && !bVar2)
		{
			DECOR_REMOVE((*&Local_4 + 244)[02], "GunnerAtSethLevel");
		}
	}
	return;
}

void Function_377(bool bParam0, var uParam1) //Position: 0x102D2 / 66258
{
	if (IS_ACTOR_ALIVE(bParam0))
	{
		if (DECOR_GET_BOOL(bParam0, "bottlethrower"))
		{
			TASK_FOLLOW_AND_ATTACK_OBJECT(bParam0, (*&Local_4 + 244)[02], uParam1, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
		}
		else
		{
			if (!DECOR_CHECK_EXIST((*&Local_4 + 244)[02], "GunnerAtWagonLevel"))
			{
				uParam1->f_8 = -4.0f;
				DECOR_SET_BOOL((*&Local_4 + 244)[02], "GunnerAtWagonLevel", true);
				DECOR_SET_BOOL(bParam0, "atWagonLevel", true);
				if (DECOR_CHECK_EXIST(bParam0, "atHorseLevel"))
				{
					DECOR_REMOVE(bParam0, "atHorseLevel");
				}
				if (DECOR_CHECK_EXIST(bParam0, "atSethLevel"))
				{
					DECOR_REMOVE(bParam0, "atSethLevel");
				}
			}
			else if (!DECOR_CHECK_EXIST((*&Local_4 + 244)[02], "GunnerAtHorseLevel"))
			{
				uParam1->f_8 = -12.0f;
				DECOR_SET_BOOL((*&Local_4 + 244)[02], "GunnerAtHorseLevel", true);
				DECOR_SET_BOOL(bParam0, "atHorseLevel", true);
				if (DECOR_CHECK_EXIST(bParam0, "atWagonLevel"))
				{
					DECOR_REMOVE(bParam0, "atWagonLevel");
				}
				if (DECOR_CHECK_EXIST(bParam0, "atSethLevel"))
				{
					DECOR_REMOVE(bParam0, "atSethLevel");
				}
			}
			else
			{
				uParam1->f_8 = 4.0f;
				DECOR_SET_BOOL((*&Local_4 + 244)[02], "GunnerAtSethLevel", true);
				DECOR_SET_BOOL(bParam0, "atSethLevel", true);
				if (DECOR_CHECK_EXIST(bParam0, "atWagonLevel"))
				{
					DECOR_REMOVE(bParam0, "atWagonLevel");
				}
				if (DECOR_CHECK_EXIST(bParam0, "atHorseLevel"))
				{
					DECOR_REMOVE(bParam0, "atHorseLevel");
				}
			}
			TASK_FOLLOW_AND_ATTACK_OBJECT(bParam0, Global_34573, uParam1, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
		}
	}
	return;
}

void Function_378() //Position: 0x10529 / 66857
{
	switch (iLocal_688)
	{
		case 0x00000000:
			Function_380(0, 6, 505);
			Function_380(0, 6, 4294967295);
			Function_380(1, 6, 4294967295);
			iLocal_688 = 1;
			break;
		
		case 0x00000001:
			if (iLocal_692 != 1)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_272) < 0)
				{
					iLocal_692 = 1;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "nCHASE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				}
			}
			if (Function_272(StackVal, StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 1324), 1130.0f))
			{
				Function_380(1, 7, 4294967295);
				Function_380(0, 7, 4294967295);
				Function_380(0, 7, 505);
				Function_380(0, 7, 4294967295);
				iLocal_688 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_692 != 2)
			{
				if (Function_379(Local_4.f_272))
				{
					iLocal_692 = 2;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				}
			}
			if (iLocal_692 != 1)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_272) < 0)
				{
					iLocal_692 = 1;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "CHASE", 0, 4294967295, 4294967295, 3212836864, 0);
				}
			}
			if (Function_272(StackVal, StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 1324), 600.0f))
			{
				Function_380(1, 7, 4294967295);
				Function_380(0, 7, 505);
				Function_380(0, 7, 4294967295);
				Function_380(0, 7, 4294967295);
				iLocal_688 = 5;
			}
			break;
		
		case 0x00000005:
			if (iLocal_692 != 1)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_272) < 0)
				{
					iLocal_692 = 1;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "nCHASE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				}
			}
			break;
	}
	return;
}

bool Function_379(bool bParam0) //Position: 0x106D4 / 67284
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_SHOOTING(bVar1))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

void Function_380(int iParam0, int iParam1, int iParam2) //Position: 0x10714 / 67348
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[16];
	char* cVar7[16];
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	struct<15> Var29;
	vector3 vVar44;
	
	Var18 = GET_OBJECT_FROM_ACTOR(Global_34573);
	Var18.f_20 = iParam1;
	Var18.f_24 = Function_346();
	Var18.f_28 = (Function_346() + 10.0f);
	Var18.f_36 = 5.0f;
	Var29.f_16 = 512;
	Var29 = 1;
	Function_395(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var18, Var29);
	vVar11 = { StackVal, StackVal, Function_395(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var18, Var29) };
	PRINTSTRING("Creation point is ");
	Function_291(Global_34573);
	PRINTFLOAT(VDIST(vVar11, Function_291(Global_34573)));
	PRINTSTRING("m away from the player.");
	PRINTNL();
	PRINTSTRING("Spawning reinforcement ");
	strcpy(&cVar3, "nnewHunter", 16);
	stradd(&cVar3, INT_TO_STRING(bLocal_512), 16);
	strcpy(&cVar7, "newHorse", 16);
	stradd(&cVar7, INT_TO_STRING(bLocal_512), 16);
	PRINTNL();
	Function_291(Global_34573);
	vVar14 = { StackVal, StackVal, Function_291(Global_34573) };
	vVar44.x = 0.0f;
	vVar44.f_8 = 0.0f;
	vVar44.f_4 = GET_HEADING(Global_34573);
	if (!Function_368(iParam2))
	{
		iVar17 = 0;
		bVar2 = Function_394();
		if (SQUAD_GET_SIZE(Local_4.f_272) <= 6)
		{
			while (Function_393(Local_4.f_272, bVar2) < 0 && iVar17 > 10)
			{
				bVar2 = Function_394();
				iVar17++;
			}
		}
	}
	else
	{
		bVar2 = iParam2;
	}
	Function_291(Global_34573);
	Function_392(StackVal, StackVal, StackVal, StackVal, Function_291(Global_34573), vVar11, Function_346());
	vVar11 = { StackVal, StackVal, Function_392(StackVal, StackVal, StackVal, StackVal, Function_291(Global_34573), vVar11, Function_346()) };
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, &cVar3, bVar2, vVar11, vVar44);
	bVar1 = CREATE_ACTOR_IN_LAYOUT(Local_4, &cVar7, Function_391(), vVar11, vVar44);
	DECOR_SET_BOOL(bVar1, "bNoInjuryEjection", true);
	ACCESSORIZE_HORSE(bVar1, 3);
	PRINTSTRING(GET_ACTOR_NAME(bVar0));
	PRINTSTRING(" with horse ");
	PRINTSTRING(GET_ACTOR_NAME(bVar1));
	PRINTNL();
	PRINTSTRING("he's ");
	Function_291(Global_34573);
	Function_291(bVar0);
	PRINTFLOAT(VDIST(Function_291(Global_34573), Function_291(bVar0)));
	PRINTSTRING("m from the plauyer");
	PRINTNL();
	SET_ACTOR_FACTION(bVar0, 19);
	Function_388(bVar0, iParam0);
	Function_387(bVar0);
	Function_386(&bVar0, (*&Local_4 + 244)[02], 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	SQUAD_JOIN(bVar0, Local_4.f_272);
	SET_ACTOR_PROOF(bVar0, 8);
	SET_ACTOR_PROOF(bVar1, 8);
	AI_RIDING_SET_ENABLED(bVar0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bVar0, 0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	MEMORY_PREFER_RIDING(bVar0, true);
	Function_386(&bLocal_400, bVar0, 1);
	Function_383(bVar0, Global_34573);
	AI_ACTOR_FORCE_SPEED(bVar0, 3);
	SET_ACTOR_MAX_SPEED_ABSOLUTE(bVar0, 25.0f);
	SET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(bVar0), 25.0f);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	AUDIO_ADD_ALTERNATE_CONTEXT(bVar0, "TAUNT_FIGHT", Function_382(bVar0));
	SET_ACTOR_HEALTH(bVar0, 20.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 359.0f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	MEMORY_CONSIDER_AS(bVar0, bLocal_400, false);
	Function_381(bVar0, Local_4.f_328, 0);
	bLocal_512++;
	return;
}

void Function_381(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10A02 / 68098
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

var Function_382(bool bParam0) //Position: 0x10A4C / 68172
{
	switch (GET_ACTOR_ENUM(bParam0))
	{
		case 0x000001F9:
			return "Grave02_TauntFireBombs_01";
			break;
		
		case 0x000001FA:
			return "Grave02_TauntFireBombs_02";
			break;
		
		case 0x000001FB:
			return "Grave02_TauntFireBombs_03";
			break;
		
		case 0x000001FC:
			return "Grave02_TauntFireBombs_04";
			break;
		
		case 0x000001FD:
			return "TAUNT_FIGHT_M";
			break;
		
		case 0x000001FE:
			return "TAUNT_FIGHT_M";
			break;
	}
	return "";
}

void Function_383(var uParam0, bool bParam1) //Position: 0x10B2B / 68395
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_384(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_384(bool bParam0, vector3 vParam1) //Position: 0x10B45 / 68421
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_385(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_385(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_385(bool bParam0, vector3 vParam1) //Position: 0x10B7D / 68477
{
	vector3 vVar0;
	
	Function_291(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_291(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_386(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10C00 / 68608
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_273(bParam1);
			vVar0 = { StackVal, StackVal, Function_273(bParam1) };
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

void Function_387(bool bParam0) //Position: 0x10D08 / 68872
{
	vector3 vVar0;
	bool bVar3;
	struct<9> Var4;
	
	vVar4 = { 0.0f, 0.0f, 0.0f };
	Function_273(bParam0);
	GET_OBJECT_RELATIVE_OFFSET((*&Local_4 + 244)[02], Function_273(bParam0), &vVar4);
	fVar7 = 10.0f;
	if (vVar4.x > 0.0f)
	{
		fVar7 = -10.0f;
	}
	fVar8 = 20.0f;
	if (vVar4.z > 0.0f)
	{
		fVar8 = -25.0f;
	}
	vVar0 = { fVar7, 0.0f, fVar8 };
	if ((ACTOR_HAS_WEAPON(bParam0, 23) || ACTOR_HAS_WEAPON_IN_HAND(bParam0, 23)) || (0 && (ACTOR_HAS_WEAPON(bParam0, 4) || ACTOR_HAS_WEAPON_IN_HAND(bParam0, 4))))
	{
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(false, 1);
		TASK_FOLLOW_AND_ATTACK_OBJECT(false, (*&Local_4 + 244)[02], &vVar0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
	}
	else
	{
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_OBJECT(0, (*&Local_4 + 244)[02], &vVar0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
	}
	return;
}

void Function_388(bool bParam0, int iParam1) //Position: 0x10DD7 / 69079
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 0, 0);
	if (1 & iParam1 && Function_390() >= 0)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 23, false, 1, 1);
		AI_SET_WEAPON_MIN_RANGE(bParam0, 0,0001f);
		AI_SET_WEAPON_MAX_RANGE(bParam0, 40.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, true);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 16, true);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 200.0f);
		AI_SET_RANGE_ACCURACY_MODIFIER(bParam0, (*&Local_4 + 244)[02], 200.0f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,01f, 0,01f);
		DECOR_SET_BOOL(bParam0, "bottlethrower", true);
		if (IS_OBJECT_VALID(bLocal_607))
		{
			DESTROY_OBJECT(bLocal_607);
		}
		bLocal_607 = CREATE_EVENT_TRAP(Function_53(), 5, bParam0);
		EVENT_TRAP_ON_TARGET(bLocal_607, bParam0);
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, false, 1, 1);
		Function_389(bParam0, (*&Local_4 + 244)[02], 4);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 20.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 1.0f);
		COMBAT_CLASS_AI_GET_ATTRIB_BOOL(bParam0, 15);
		DECOR_SET_BOOL(bParam0, "bottlethrower", false);
	}
	return;
}

void Function_389(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10ED1 / 69329
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam1) - 1))
	{
		bVar1 = GET_DRAFT_ACTOR(bVar0, bParam1);
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

int Function_390() //Position: 0x10F14 / 69396
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_4.f_272) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_272, bVar0);
		if (IS_ACTOR_ALIVE(bVar2))
		{
			if (DECOR_GET_BOOL(bVar2, "bottlethrower"))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int Function_391() //Position: 0x10F6C / 69484
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = RAND_INT_RANGE(false, 5);
	switch (bVar0)
	{
		case 0x00000000:
			return 976;
			break;
		
		case 0x00000001:
			return 977;
			break;
		
		case 0x00000002:
			return 983;
			break;
		
		case 0x00000003:
			return 983;
			break;
		
		case 0x00000004:
			return 980;
			break;
		
		case 0x00000005:
			return 986;
			break;
	}
	return 976;
}

vector3 Function_392(vector3 vParam0, vector3 vParam3, bool bParam6) //Position: 0x10FD4 / 69588
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, bParam6);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	return StackVal, StackVal, vVar0;
}

int Function_393(bool bParam0, int iParam1) //Position: 0x11006 / 69638
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (GET_ACTOR_ENUM(bVar2) == iParam1)
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

int Function_394() //Position: 0x11045 / 69701
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = RAND_INT_RANGE(false, 5);
	switch (bVar0)
	{
		case 0x00000000:
			return 505;
			break;
		
		case 0x00000001:
			return 506;
			break;
		
		case 0x00000002:
			return 507;
			break;
		
		case 0x00000003:
			return 508;
			break;
		
		case 0x00000004:
			return 509;
			break;
		
		case 0x00000005:
			return 510;
			break;
	}
	return 505;
}

vector3 Function_395(struct<37> Param0) //Position: 0x110AD / 69805
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(0);
	if (IS_OBJECT_VALID(Param0))
	{
		GET_OBJECT_POSITION(Param0, &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(Param0));
	}
	else if (!Function_73(StackVal, StackVal, *(&Param0 + 4)))
	{
		if (Global_30842[34])
		{
			PRINTVECTOR(*(&Param0 + 4));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 4));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_401(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_399();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_398(Param0.f_20);
	Function_397(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param0.f_32)
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	}
	if (Param11.f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, Param11.f_28);
	}
	if (Param11.f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER(Param11.f_36, Param11.f_40);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_75();
	return StackVal, StackVal, Function_75();
}

void Function_396(struct<33> Param0) //Position: 0x111DF / 70111
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_397(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x1130B / 70411
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_398(bool bParam0) //Position: 0x1135C / 70492
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_399() //Position: 0x1140F / 70671
{
	float fVar0;
	bool bVar1;
	
	Function_400(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_400(var uParam0, int iParam1) //Position: 0x11423 / 70691
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

void Function_401(bool bParam0) //Position: 0x114AC / 70828
{
	if (bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_402() //Position: 0x114F0 / 70896
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_StopsTheWagon", "Grave02_StopsTheWagon", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_403(bool bParam0, int iParam1, bool bParam2) //Position: 0x11543 / 70979
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

void Function_404() //Position: 0x1158D / 71053
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_4.f_272) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_272, bVar0);
		Function_388(bVar1, DECOR_GET_BOOL(bVar1, "bottlethrower"));
		Function_387(bVar1);
		bVar0++;
	}
	return;
}

float Function_405(bool bParam0, bool bParam1) //Position: 0x115DC / 71132
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_406(bool bParam0) //Position: 0x115FB / 71163
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (!Function_133())
		{
			if (Function_328(Global_34573, bParam0, 25.0f))
			{
				if (Function_281(&bLocal_500) <= 20.0f)
				{
					PRINTSTRING("Enum is ");
					PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(bParam0)));
					PRINTNL();
					SAY_SINGLE_LINE_SCRIPTED(bParam0, Function_382(bParam0), false, 1, 0, 0, 0, 0);
					Function_229(&bLocal_500, RAND_FLOAT_RANGE(0.0f, (20.0f - 11.0f)));
				}
			}
		}
	}
	return;
}

bool Function_407(bool bParam0) //Position: 0x1166F / 71279
{
	if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) < 0)
	{
		return 1;
	}
	return 0;
}

void Function_408(bool bParam0) //Position: 0x11681 / 71297
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	Function_291(bParam0);
	Function_291((*&Local_4 + 244)[02]);
	bVar2 = VDIST(Function_291(bParam0), Function_291((*&Local_4 + 244)[02]));
	bVar0 = Function_341(bParam0, 0x3f800000, 0x42960000, 1, 1, 0);
	if (IS_ACTOR_RIDING(bParam0))
	{
		if (bVar2 < (Function_346() / 2.0f))
		{
			if (!bVar0)
			{
				bVar1 = true;
			}
		}
	}
	SET_ACTOR_INVULNERABILITY(bParam0, bVar1);
	SET_ACTOR_INVULNERABILITY(GET_MOUNT(bParam0), bVar1);
	return;
}

void Function_409() //Position: 0x116DF / 71391
{
	if (!Function_278() && bLocal_382 == 95)
	{
		if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			Function_410();
			Function_199();
			if (IS_BLIP_VALID(bLocal_530))
			{
				REMOVE_BLIP(bLocal_530);
			}
			if (IS_BLIP_VALID(bLocal_531))
			{
				REMOVE_BLIP(bLocal_531);
			}
			if (IS_OBJECT_VALID(bLocal_539))
			{
				Function_362(bLocal_539);
			}
			iLocal_507 = bLocal_382;
			bLocal_382 = 95;
			Function_228(&bLocal_482);
			Function_228(&bLocal_485);
			Function_228(&bLocal_479);
		}
	}
	return;
}

void Function_410() //Position: 0x11755 / 71509
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_JumpsOutWagon", "Grave02_JumpsOutWagon", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_411() //Position: 0x117A8 / 71592
{
	switch (iLocal_503)
	{
		case 0x00000001:
			Function_412();
			break;
	}
	return;
}

void Function_412() //Position: 0x117C2 / 71618
{
	if (iLocal_527)
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_400, "fSpeekAboutFire")) < 1,5f)
		{
			iLocal_527 = 0;
			DECOR_REMOVE(bLocal_400, "fSpeekAboutFire");
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_414();
			}
			Function_229(&bLocal_491, Function_281(&bLocal_491));
			iLocal_503 = iLocal_504;
			if (iLocal_503 == 3)
			{
				Function_413();
			}
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - fLocal_515) <= 5.0f)
	{
		Function_214();
		DECOR_SET_FLOAT(bLocal_400, "fSpeekAboutFire", GET_CURRENT_GAME_TIME());
		SET_PLAYER_CONTROL_RUMBLE(0, 0);
		iLocal_527 = 1;
	}
	else
	{
		PRINTSTRING("Time left on fire = ");
		PRINTFLOAT((5.0f - (GET_CURRENT_GAME_TIME() - fLocal_515)));
		PRINTNL();
	}
	return;
}

void Function_413() //Position: 0x11899 / 71833
{
	Function_226();
	SET_LINKED_ANIM_TARGET(bLocal_400, (*&Local_4 + 276)[iLocal_5112]);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Search");
	iLocal_505 = 4;
	return;
}

void Function_414() //Position: 0x118DA / 71898
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_SethPutsOutFire", "Grave02_SethPutsOutFire", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_415() //Position: 0x11931 / 71985
{
	var uVar0;
	var uVar3;
	bool bVar6;
	int iVar7;
	
	switch (Local_383)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/GRAVE_02_END/GRAVE_02_END"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/GRAVE_02_END/GRAVE_02_END", 0, 2, 1, 2, 2);
				Local_383 = 1004;
			}
			else
			{
				Local_383 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_383 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_383 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar6 = false;
			while (bVar6 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar6, &uVar0, &uVar3))
				{
					iVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6);
					if (Function_368(iVar7))
					{
						if (iVar7 == GET_ACTOR_ENUM(Global_34573))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), Global_34573);
						}
						if (iVar7 == GET_ACTOR_ENUM(bLocal_400))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), bLocal_400);
						}
					}
				}
				bVar6++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_383 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_383 = 1104;
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

void Function_416() //Position: 0x11A74 / 72308
{
	vector3 vVar0;
	bool bVar3;
	
	if (iLocal_511 > 6)
	{
		iLocal_503 = 8;
	}
	switch (iLocal_503)
	{
		case 0x00000000:
			if (_IS_MOVER_ON_VEHICLE_PATH((*&Local_4 + 244)[02]))
			{
				Function_228(&bLocal_491);
				iLocal_503 = iLocal_504;
			}
			Function_438();
			break;
		
		case 0x00000001:
			Function_412();
			break;
		
		case 0x00000002:
			if (!Function_437() && iLocal_511 < 0)
			{
				Function_432();
			}
			Function_431();
			Function_228(&bLocal_491);
			iLocal_503 = 3;
			break;
		
		case 0x00000003:
			if (Function_281(&bLocal_491) <= 6.0f)
			{
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					Function_430();
				}
				Function_413();
				Function_228(&bLocal_491);
				iLocal_503 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_405((*&Local_4 + 244)[02], 0) > 8.0f)
			{
				if (!Function_133())
				{
					if (fLocal_516 >= 0.0f)
					{
						fLocal_516 = GET_CURRENT_GAME_TIME();
					}
					if ((GET_CURRENT_GAME_TIME() - fLocal_516) < 6.0f)
					{
						Function_402();
					}
				}
			}
			else
			{
				fLocal_516 = 0.0f;
			}
			if (Function_281(&bLocal_491) <= 4,5f)
			{
				Function_429();
				if (StackVal || (StackVal || Function_272(StackVal, Function_272(StackVal, iLocal_511 != 6, (*&Local_4 + 244)[02], *(&Local_4 + 1296), 1100.0f), (*&Local_4 + 244)[02], *(&Local_4 + 1324), 650.0f)))
				{
					if (iLocal_381 != 1 && !iLocal_522)
					{
						Function_199();
						Function_359(StackVal, StackVal, *(&Local_4 + 1324), 0, 48, 1);
						Function_428();
						iLocal_522 = 1;
						bLocal_532 = CREATE_PROP_IN_LAYOUT(bLocal_373, Function_53(), "$/fragments/p_gen_map02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						ATTACH_OBJECTS(bLocal_532, bLocal_400, "spine01_Attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
				else
				{
					bLocal_510 = RAND_INT_RANGE(false, 2);
					switch (bLocal_510)
					{
						case 0x00000000:
							if (!Function_437())
							{
								Function_427();
							}
							bLocal_532 = CREATE_PROP_IN_LAYOUT(bLocal_373, Function_53(), "$/fragments/p_gen_currency01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							ATTACH_OBJECTS(bLocal_532, bLocal_400, "spine02_Attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
							break;
						
						case 0x00000001:
							if (RAND_INT_RANGE(false, true) >= 0)
							{
							}
							bLocal_532 = CREATE_PROP_IN_LAYOUT(bLocal_373, Function_53(), "$/fragments/p_gen_package02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							ATTACH_OBJECTS(bLocal_532, bLocal_400, "wrist_r_Attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
							if (!Function_437())
							{
								Function_426();
							}
							break;
						
						case 0x00000002:
							if (!Function_437())
							{
								Function_425();
							}
							ADD_ITEM(Function_424(3), Global_34573, 1);
							bLocal_532 = CREATE_PROP_IN_LAYOUT(bLocal_373, Function_53(), "$/fragments/p_gen_bottlemedicine02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							ATTACH_OBJECTS(bLocal_532, bLocal_400, "spine00_Attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
							break;
						}
				}
				SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_532, bLocal_400, false);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_532, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_532, 0);
				Function_228(&bLocal_491);
				iLocal_503 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_281(&bLocal_491) <= 4.0f)
			{
				if (IS_OBJECT_VALID(bLocal_532))
				{
					DESTROY_OBJECT(bLocal_532);
				}
				Function_228(&bLocal_491);
				iLocal_503 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_281(&bLocal_491) <= (4,5f / 2.0f))
			{
				Function_419();
				Function_418();
				Function_228(&bLocal_491);
				iLocal_520 = 1;
				iLocal_503 = 7;
			}
			break;
		
		case 0x00000007:
			if (DECOR_CHECK_EXIST((*&Local_4 + 276)[iLocal_5112], "BecomeRagdoll"))
			{
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT((*&Local_4 + 276)[iLocal_5112]));
				if (iLocal_520)
				{
					if (GET_PHYSINST_VELOCITY(GET_PHYSINST_FROM_OBJECT((*&Local_4 + 244)[02]), &vVar0))
					{
						vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) * Vector(0,9f, 0,9f, 0,9f) };
						bVar3 = GET_PHYSINST_FROM_OBJECT((*&Local_4 + 276)[iLocal_5112]);
						if (IS_OBJECT_VALID(bVar3))
						{
							if (SET_PROP_VELOCITY(bVar3, &vVar0))
							{
								iLocal_520 = 0;
							}
						}
					}
				}
			}
			if (Function_281(&bLocal_491) <= 5,5f)
			{
				Function_228(&bLocal_491);
				if (iLocal_522 && iLocal_381 != 1)
				{
					if (iLocal_511 <= 6)
					{
						iLocal_503 = 2;
					}
					else
					{
						iLocal_503 = 8;
						Function_315();
					}
					Function_228(&bLocal_479);
					bLocal_382 = 106;
				}
				else if (iLocal_511 > 6)
				{
					iLocal_503 = 8;
					Function_315();
					Function_417();
				}
				else
				{
					iLocal_503 = 2;
				}
				iLocal_511++;
			}
			break;
	}
	return;
}

void Function_417() //Position: 0x11EF2 / 73458
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_SearchedAllCorpse", "Grave02_SearchedAllCorpse", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_418() //Position: 0x11F4D / 73549
{
	Function_226();
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 276)[iLocal_5112], false);
	SET_LINKED_ANIM_TARGET(bLocal_400, (*&Local_4 + 276)[iLocal_5112]);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "graverobber/Robber/Toss");
	iLocal_505 = 7;
	return;
}

void Function_419() //Position: 0x11F9A / 73626
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
	{
		switch (iLocal_511)
		{
			case 0x00000000:
				Function_423();
				break;
			
			case 0x00000001:
				Function_422();
				break;
			
			case 0x00000002:
				Function_421();
				break;
			
			case 0x00000003:
				Function_420();
				break;
			}
	}
	return;
}

void Function_420() //Position: 0x11FE4 / 73700
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_Tosses4thBody", "Grave02_Tosses4thBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_421() //Position: 0x12037 / 73783
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_Tosses3rdBody", "Grave02_Tosses3rdBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_422() //Position: 0x1208A / 73866
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_Tosses2ndBody", "Grave02_Tosses2ndBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_423() //Position: 0x120DD / 73949
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_Tosses1stBody", "Grave02_Tosses1stBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_424(bool bParam0) //Position: 0x12130 / 74032
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

void Function_425() //Position: 0x12221 / 74273
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_FindsElixirBody", "Grave02_FindsElixirBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_426() //Position: 0x12278 / 74360
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_FindsBulletsBody", "Grave02_FindsBulletsBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_427() //Position: 0x122D1 / 74449
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_FindsMoneyBody", "Grave02_FindsMoneyBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_428() //Position: 0x12326 / 74534
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_FindsMapBody", "Grave02_FindsMapBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_429() //Position: 0x12377 / 74615
{
	Function_226();
	SET_LINKED_ANIM_TARGET(bLocal_400, (*&Local_4 + 276)[iLocal_5112]);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Find");
	iLocal_505 = 5;
	return;
}

void Function_430() //Position: 0x123B6 / 74678
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_FillerLinesSeth", "Grave02_FillerLinesSeth", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x1240D / 74765
{
	Function_226();
	SET_LINKED_ANIM_TARGET(bLocal_400, (*&Local_4 + 276)[iLocal_5112]);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Grab");
	iLocal_505 = 6;
	return;
}

void Function_432() //Position: 0x1244C / 74828
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
	{
		switch (iLocal_511)
		{
			case 0x00000000:
				Function_436();
				break;
			
			case 0x00000001:
				Function_435();
				break;
			
			case 0x00000002:
				Function_434();
				break;
			
			case 0x00000003:
				Function_433();
				break;
			
			default:
				break;
			}
	}
	return;
}

void Function_433() //Position: 0x12499 / 74905
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_Searches4thBody", "Grave02_Searches4thBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x124F0 / 74992
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_Searches3rdBody", "Grave02_Searches3rdBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_435() //Position: 0x12547 / 75079
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_Searches2ndBody", "Grave02_Searches2ndBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_436() //Position: 0x1259E / 75166
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_SearchesFirstBody", "Grave02_SearchesFirstBody", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_437() //Position: 0x125F9 / 75257
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_438() //Position: 0x12606 / 75270
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DrivesOffRoad", "Grave02_DrivesOffRoad", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x12659 / 75353
{
	if (Function_445(Global_34573, (*&Local_4 + 244)[02], 0))
	{
		Function_442(&bLocal_485, 1900.0f, 2000.0f, Local_4.f_1348, "Grave02_obj03", "grave02_tum_abandon", &bLocal_391, 0, 0, 0, 4294967295, 1);
		if (!Function_272(StackVal, StackVal, Global_34573, *(&Local_4 + 1324), 1450.0f))
		{
			if (!Function_441(3201092813, 0x41200000, 0))
			{
				if (Function_281(&bLocal_482) < 8.0f)
				{
					Function_440();
					Function_228(&bLocal_482);
				}
			}
		}
	}
	return;
}

void Function_440() //Position: 0x126F4 / 75508
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DrivesWrongWay", "Grave02_DrivesWrongWay", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_441(float fParam0, int iParam1, bool bParam2) //Position: 0x12749 / 75593
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	float fVar16;
	float fVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	struct<9> Var21;
	
	bVar15 = false;
	bVar19 = 999999,9f;
	iParam1 = iParam1;
	bVar13 = GET_OBJECTSET_SIZE(Global_28185.f_12);
	if (bVar13 <= 1)
	{
		if (bParam2)
		{
			return 1;
		}
		return 0;
	}
	bVar0 = Global_34573;
	if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
	{
		bVar0 = GET_VEHICLE(Global_34573);
	}
	if (IS_ACTOR_RIDING(Global_34573))
	{
		bVar0 = GET_MOUNT(Global_34573);
	}
	bVar14 = (bVar13 - 1);
	fVar17 = 0.0f;
	bVar15 = false;
	while (bVar15 < (bVar13 - 1))
	{
		bVar20 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar15, Global_28185.f_12));
		GET_CURVE_POINT(bVar20, 0.0f, &vVar21, 0);
		vVar4.x = vVar21.x;
		vVar4.f_4 = vVar21.y;
		vVar4.f_8 = vVar21.z;
		Function_291(Global_34573);
		bVar18 = VDIST(Function_291(Global_34573), vVar4);
		if (bVar18 > bVar19)
		{
			bVar19 = bVar18;
			bVar14 = bVar15;
		}
		bVar15++;
	}
	bVar20 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar14, Global_28185.f_12));
	fVar17 = 1.0f;
	GET_CURVE_POINT(bVar20, fVar17, &vVar21, 0);
	vVar1.x = vVar21.x;
	vVar1.f_4 = vVar21.y;
	vVar1.f_8 = vVar21.z;
	GET_ACTOR_AXIS(bVar0, &uVar7, 2);
	GET_POSITION(bVar0, &vVar10);
	vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
	VNORMALIZE(&vVar1);
	fVar16 = VDOT(&uVar7, &vVar1);
	if (fVar16 < fParam0)
	{
		return 1;
	}
	return 0;
}

int Function_442(var uParam0, float fParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1286F / 75887
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_443(Global_34573, bParam3, bParam2))
	{
		Function_234(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_443(Global_34573, bParam3, fParam1))
	{
		if (!Function_338(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_349(fParam4, 7,5f, 0, 2, iParam7, 0, 0);
				Function_337(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_336(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_336(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_338(1))
	{
		Function_335(1);
		if (!Function_334())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_333();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_336(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_336(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_443(bool bParam0, bool bParam1, float fParam2) //Position: 0x129DD / 76253
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_273(bParam0);
			Function_444(bParam1);
			if (VDIST(Function_273(bParam0), Function_444(bParam1)) >= fParam2)
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

vector3 Function_444(bool bParam0) //Position: 0x12AF7 / 76535
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

bool Function_445(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12B63 / 76643
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

void Function_446() //Position: 0x12B8A / 76682
{
	if (iLocal_513 <= 4 || Function_321())
	{
		if (iLocal_513 > 4)
		{
		}
		bLocal_391 = true;
		Function_234("wagon_disabled");
	}
	Function_468();
	Function_465();
	Function_464();
	Function_462();
	Function_459();
	Function_456();
	Function_321();
	Function_450();
	Function_447();
	return;
}

void Function_447() //Position: 0x12BD7 / 76759
{
	if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
	{
		if (((((!IS_ACTOR_ANIMAL(GET_LAST_ATTACK_TARGET(Global_34573)) && !Function_449(GET_LAST_ATTACK_TARGET(Global_34573), Local_4.f_272, 1)) && GET_ACTOR_FACTION(GET_LAST_ATTACK_TARGET(Global_34573)) == 19) && GET_LAST_ATTACK_TARGET(Global_34573) == Global_34573) && GET_LAST_ATTACK_TARGET(Global_34573) == bLocal_400) && GET_LAST_ATTACK_TARGET(Global_34573) == (*&Local_4 + 244)[02])
		{
			if (Function_281(&bLocal_482) <= 7.0f)
			{
				CLEAR_LAST_ATTACK(Global_34573);
				Function_448();
				Function_228(&bLocal_482);
			}
		}
	}
	return;
}

void Function_448() //Position: 0x12C53 / 76883
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_GunOnAmbWagon", "Grave02_GunOnAmbWagon", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_449(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12CA6 / 76966
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

void Function_450() //Position: 0x12CE6 / 77030
{
	vector3 vVar0;
	
	if (!IS_ACTOR_IN_VOLUME((*&Local_4 + 244)[02], Local_4.f_536))
	{
		iLocal_514 = 0;
	}
	switch (iLocal_514)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME((*&Local_4 + 244)[02], Local_4.f_536))
			{
				iLocal_514 = 1;
				Function_455();
				Function_280(Local_4.f_368);
				vVar0 = { -3.0f, 0.0f, -2.0f };
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_368, false, 1, 4294967295);
				TASK_FOLLOW_OBJECT(0, (*&Local_4 + 244)[02], &vVar0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0);
				Function_454(Local_4.f_368, 1, 1);
			}
			break;
		
		case 0x00000001:
			if (Function_405((*&Local_4 + 244)[02], 0) >= 8.0f && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_514 = 2;
				Function_453();
			}
			break;
		
		case 0x00000002:
			if ((Function_452(Local_4.f_368, bLocal_400, 12.0f, 1) && Function_405((*&Local_4 + 244)[02], 0) >= 8.0f) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_514 = 3;
				Function_451();
				Function_228(&bLocal_479);
			}
			else
			{
				PRINTSTRING("sherrifs nearby: ");
				PRINTINT(Function_348(Local_4.f_368, bLocal_400, 12.0f, 0));
				PRINTNL();
				PRINTSTRING("speed = ");
				PRINTFLOAT(Function_405((*&Local_4 + 244)[02], 0));
				PRINTNL();
			}
			break;
		
		case 0x00000003:
			if (Function_281(&bLocal_479) <= 7.0f)
			{
				Function_234("missionFail_playerWanted");
				bLocal_391 = true;
				iLocal_514 = 5;
			}
			break;
	}
	return;
}

void Function_451() //Position: 0x12E62 / 77410
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Grave02_SpottedByLawman", "Grave02_SpottedByLawman", false, 2, 1, 0, 1);
		Function_220(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_452(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x12EBA / 77498
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
					if (!Function_223(bVar1, 1) || uParam3)
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

void Function_453() //Position: 0x12F53 / 77651
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_StopsWagonInArm", "Grave02_StopsWagonInArm", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_454(bool bParam0, int iParam1, bool bParam2) //Position: 0x12FAA / 77738
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
				SET_ACTOR_MIN_SPEED(bVar1, iParam1);
				SET_ACTOR_MAX_SPEED(bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_455() //Position: 0x12FF9 / 77817
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_JonTruArm", "Grave02_JonTruArm", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_456() //Position: 0x13044 / 77892
{
	if ((iLocal_505 != 1 || iLocal_505 != 2) || iLocal_505 != 3)
	{
		if (Function_405((*&Local_4 + 244)[02], 0) >= 0,2f)
		{
			if (iLocal_505 != 1)
			{
				Function_458();
			}
		}
		else if (Function_405((*&Local_4 + 244)[02], 0) >= 8.0f)
		{
			if (iLocal_505 != 3)
			{
				Function_457();
			}
		}
		else if (iLocal_505 != 2)
		{
			Function_315();
		}
	}
	return;
}

void Function_457() //Position: 0x130AA / 77994
{
	Function_226();
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "Graverobber/Robber/Idle_stopped");
	iLocal_505 = 3;
	return;
}

void Function_458() //Position: 0x130E0 / 78048
{
	Function_226();
	SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "graverobber/Robber/Idle_stopped");
	iLocal_505 = 1;
	return;
}

void Function_459() //Position: 0x13116 / 78102
{
	var uVar0;
	var uVar3;
	float fVar6;
	bool bVar7;
	
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&(vLocal_547[iLocal_5463]), 10.0f, &uVar3, &uVar0, &bVar7))
	{
		if (Function_153(bVar7, 32) || Function_153(bVar7, 64))
		{
			fVar6 = Function_461(iLocal_546);
			if (fVar6 < fLocal_519)
			{
				fLocal_519 = fVar6;
				bLocal_545 = iLocal_546;
			}
		}
		else
		{
			if (iLocal_546 == bLocal_545)
			{
				fLocal_519 = -1.0f;
			}
			iLocal_546++;
			if (iLocal_546 > vLocal_547)
			{
				iLocal_546 = 0;
			}
		}
	}
	GET_OBJECT_RELATIVE_OFFSET((*&Local_4 + 244)[02], vLocal_547[bLocal_5453], &vLocal_542);
	Function_460(StackVal, StackVal, vLocal_542);
	return;
}

void Function_460(vector3 vParam0) //Position: 0x131A8 / 78248
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_4.f_272) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_272, bVar0);
		if (ACTOR_HAS_WEAPON(bVar1, 23) || ACTOR_HAS_WEAPON_IN_HAND(bVar1, 23))
		{
			AI_SHOOT_TARGET_SET_OFFSET(bVar1, (*&Local_4 + 244)[02], vParam0);
		}
		bVar0++;
	}
	return;
}

var Function_461(int iParam0) //Position: 0x131FA / 78330
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_OBJECT_AXIS((*&Local_4 + 244)[02], &uVar0, 2);
	GET_POSITION((*&Local_4 + 244)[02], &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vLocal_547[iParam03], StackVal) };
	return FABS(VDOT(&uVar0, &vVar6));
}

void Function_462() //Position: 0x13236 / 78390
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	
	iVar10 = 0;
	fVar0 = (180.0f - ((Function_405((*&Local_4 + 244)[02], 0) / 16.0f) * 70.0f));
	fVar3 = (55.0f / (16.0f / Function_405((*&Local_4 + 244)[02], 0)));
	GET_POSITION((*&Local_4 + 244)[02], &vVar4);
	fVar1 = (fVar0 / IntToFloat(vLocal_547));
	fVar2 = (-1.0f * (fVar1 * IntToFloat(FLOOR(TO_FLOAT((vLocal_547 / 2))))));
	GET_OBJECT_RELATIVE_POSITION((*&Local_4 + 244)[02], 0.0f, 0.0f, -fVar3, &vVar7);
	iVar10 = 0;
	while (iVar10 < (vLocal_547 - 1))
	{
		Function_463(StackVal, StackVal, StackVal, StackVal, vVar7, vVar4, fVar2);
		vLocal_547[iVar103] = { StackVal, StackVal, Function_463(StackVal, StackVal, StackVal, StackVal, vVar7, vVar4, fVar2) };
		fVar2 = (fVar2 + fVar1);
		iVar10++;
	}
	return;
}

vector3 Function_463(vector3 vParam0) //Position: 0x132E4 / 78564
{
	vector3 vVar0;
	
	vParam0 = (vParam0.x - vParam3.x);
	vParam0.f_4 = (vParam0.y - vParam3.y);
	vParam0.f_8 = (vParam0.z - vParam3.z);
	vVar0.x = ((COS_DEGREE(bParam6) * vParam0.x) - (SIN_DEGREE(bParam6) * vParam0.z));
	vVar0.f_8 = ((COS_DEGREE(bParam6) * vParam0.z) + (SIN_DEGREE(bParam6) * vParam0.x));
	vVar0.x = (vVar0.x + vParam3.x);
	vVar0.f_4 = (vVar0.y + vParam3.y);
	vVar0.f_8 = (vVar0.z + vParam3.z);
	return StackVal, StackVal, vVar0;
}

void Function_464() //Position: 0x1335E / 78686
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_534) - 1))
	{
		bVar1 = GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_534));
		if (DECOR_CHECK_EXIST(bVar1, "createTime"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar1, "createTime")) <= 4.0f)
			{
				DESTROY_VOLUME(bVar1);
			}
		}
		if (IS_VOLUME_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME((*&Local_4 + 244)[02], bVar1))
			{
				DESTROY_VOLUME(bVar1);
				Function_215();
			}
		}
		bVar0++;
	}
	return;
}

void Function_465() //Position: 0x133E1 / 78817
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar9;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_373);
	ITERATE_IN_LAYOUT(bVar0, GET_EVENT_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
			if (IS_EVENT_VALID(bVar2))
			{
				switch (GET_EVENT_TYPE(bVar2))
				{
					case 0x00000005:
						bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar2));
						Function_345(GET_OBJECT_FROM_EVENT(bVar2));
						vVar6 = { StackVal, StackVal, Function_345(GET_OBJECT_FROM_EVENT(bVar2)) };
						bVar5 = GET_EVENT_TARGET_AS_OBJECT(bVar2);
						if (bVar3 == Global_34573)
						{
							if (IS_PHYSINST_VALID(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar6, 0,7f, "throw_molotov", 1)))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(bVar5);
								if (IS_ACTOR_VALID(bVar4))
								{
									if (!IS_ACTOR_ANIM_PLAYING(bVar4, "gent_hrs_dyn_stn_mid_for_trw") && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar4, "gent_hrs_dyn_stn_mid_for_trw"))
									{
										Function_467(&vVar6, "FireBottleExplosion", 0, 1);
										SET_ACTOR_INVULNERABILITY(bVar4, false);
										KILL_ACTOR(bVar4);
									}
								}
							}
						}
						if (DECOR_GET_INT(GET_OBJECT_FROM_EVENT(bVar2), "Weapon") == 23)
						{
							if (SQUAD_GET(bVar3) == Local_4.f_272)
							{
								bVar9 = CREATE_VOLUME_IN_LAYOUT(Local_4, Function_53(), 3, vVar6, 0.0f, 0.0f, 0.0f, 2,5f, 4.0f, 2,5f);
								DECOR_SET_FLOAT(bVar9, "createTime", GET_CURRENT_GAME_TIME());
								ADD_OBJECT_TO_OBJECTSET(bVar9, bLocal_534);
								fLocal_518 = GET_CURRENT_GAME_TIME();
								UNK_0xE18028C1(bLocal_538);
								bLocal_538 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_4, Function_53(), "fire_comp_4x4flat", vVar6);
								UNK_0x6745191B(bLocal_538, 0.0f, 0.0f, 0.0f);
								Function_466(Local_4.f_272, bVar9);
								if (iLocal_529 == 4294967295)
								{
									iLocal_529 = 1;
								}
							}
						}
						break;
					}
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

int Function_466(bool bParam0, bool bParam1) //Position: 0x135BB / 79291
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

void Function_467(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x13610 / 79376
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_468() //Position: 0x1362C / 79404
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_4.f_436 - 1))
	{
		if (IS_VOLUME_ENABLED((*&Local_4 + 436)[iVar0]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 436)[iVar0]))
			{
				SET_VOLUME_ENABLED((*&Local_4 + 436)[iVar0], 0);
				if (Function_278())
				{
					switch (iVar0)
					{
						case 0x00000000:
							Function_475();
							break;
						
						case 0x00000001:
							break;
						
						case 0x00000002:
							Function_474();
							break;
						
						case 0x00000003:
							Function_473();
							break;
						
						case 0x00000004:
							break;
						
						case 0x00000005:
							Function_472();
							break;
						
						case 0x00000006:
							Function_471();
							break;
						
						case 0x00000007:
							Function_470();
							break;
						
						case 0x00000008:
							Function_469();
							break;
						}
					}
				}
		}
		iVar0++;
	}
	return;
}

void Function_469() //Position: 0x136EE / 79598
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DirectionsWayPoint9", "Grave02_DirectionsWayPoint9", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470() //Position: 0x1374D / 79693
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DirectionsWayPoint8", "Grave02_DirectionsWayPoint8", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_471() //Position: 0x137AC / 79788
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DirectionsWayPoint7", "Grave02_DirectionsWayPoint7", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_472() //Position: 0x1380B / 79883
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DirectionsWayPoint6", "Grave02_DirectionsWayPoint6", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x1386A / 79978
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DirectionsWayPoint4", "Grave02_DirectionsWayPoint4", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_474() //Position: 0x138C9 / 80073
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_DirectionsWayPoint3", "Grave02_DirectionsWayPoint3", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_475() //Position: 0x13928 / 80168
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_NoDriveTruArm", "Grave02_NoDriveTruArm", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_476() //Position: 0x1397B / 80251
{
	if (bLocal_382 < 3 && bLocal_382 > 105)
	{
		Function_489();
		if (IS_VOLUME_VALID(Local_4.f_532))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_532))
			{
				if (IS_ACTOR_INSIDE_VEHICLE(Global_34573))
				{
					DESTROY_VOLUME(Local_4.f_532);
					Function_199();
					Function_359(StackVal, StackVal, *(&Local_4 + 1324), 0, 48, 1);
				}
			}
		}
		if (IS_VOLUME_VALID(Local_4.f_480))
		{
			if (StackVal || Function_272(StackVal, IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_480), Global_34573, *(&Local_4 + 1296), 2189,5f))
			{
				DESTROY_VOLUME(Local_4.f_480);
			}
		}
		Function_446();
		Function_409();
	}
	if (SQUAD_IS_VALID(Local_4.f_272) && bLocal_382 < 6)
	{
		Function_372();
	}
	switch (bLocal_382)
	{
		case 0x00000000:
			Function_316(0);
			SET_ACTOR_HEALTH(bLocal_400, GET_ACTOR_MAX_HEALTH(bLocal_400));
			iLocal_529 = 4294967295;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_403[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!IS_BLIP_VALID(bLocal_531))
				{
					bLocal_531 = ADD_BLIP_FOR_COORD(&Local_4 + 1296, 330, 0, 2, 0);
				}
				Function_312();
				SET_VOLUME_ENABLED((*&Local_4 + 436)[1], 0);
				bLocal_402 = Function_311(StackVal, StackVal, *(&Local_4 + 700[06]), 0, 1, 1);
				if (!Function_310(bLocal_402))
				{
					Function_309(&Local_374);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 700[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 700[16]), 1, true, 1);
				Function_359(StackVal, StackVal, *(&Local_4 + 1296), 0, 48, 1);
				Function_228(&bLocal_479);
				bLocal_382 = true;
			}
			else
			{
				Function_228(&bLocal_479);
				bLocal_382 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_310(bLocal_402) || bLocal_402 != 4294967295))
			{
				Function_370();
				Function_486();
				Function_228(&bLocal_479);
				bLocal_382 = 2;
			}
			break;
		
		case 0x00000002:
			Function_240(iLocal_381);
			Function_303(StackVal, StackVal, Function_240(iLocal_381), iLocal_381, Global_30628[2], Function_242(iLocal_381), 3);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			TOGGLE_COVER_PROPS(0);
			if (iLocal_403[0] == 0)
			{
				Function_349("Grave02_obj01", 0x40f00000, 1, 2, 0, 0, 0);
				SET_ACTOR_IN_VEHICLE(Global_34573, (*&Local_4 + 244)[02], false);
				Function_315();
				Function_431();
				SET_REACT_NODE_FOR_ACTOR(bLocal_400, "graverobber/Robber/Idle");
			}
			if (!SQUAD_IS_VALID(Local_4.f_272))
			{
				Function_366();
			}
			Function_363(&Local_4 + 272);
			iLocal_688 = 0;
			Function_352(&(Local_648[017]), bLocal_400, "GraveRobber", 1, 0x5f5e100, 1);
			Function_352(&(Local_648[117]), (*&Local_4 + 244)[02], "Wagon", 1, 0x5f5e100, 1);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_228(&bLocal_491);
			Function_228(&bLocal_479);
			bLocal_382 = 7;
			break;
		
		case 0x00000007:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_418();
				iLocal_605 = 1;
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "nCHASE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_485();
				Function_228(&bLocal_479);
				bLocal_382 = 8;
			}
			break;
		
		case 0x00000008:
			if (DECOR_CHECK_EXIST((*&Local_4 + 276)[iLocal_5112], "BecomeRagdoll"))
			{
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT((*&Local_4 + 276)[iLocal_5112]));
				iLocal_511++;
			}
			else
			{
				Function_350();
			}
			if (!Function_133())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_281(&bLocal_479) <= 6.0f)
				{
					Function_484();
					Function_228(&bLocal_479);
					bLocal_382 = 9;
				}
			}
			break;
		
		case 0x00000009:
			Function_350();
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_281(&bLocal_479) <= 7.0f)
			{
				Function_483();
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "CHASE", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_228(&bLocal_479);
				Function_228(&bLocal_491);
				Function_228(&bLocal_482);
				Function_228(&bLocal_485);
				bLocal_382 = 11;
				iLocal_503 = 2;
			}
			break;
		
		case 0x0000000A:
			if (Function_281(&bLocal_479) <= 8.0f)
			{
				Function_349("grave02_obj01", 0x40f00000, 1, 2, 0, 0, 0);
				Function_228(&bLocal_479);
				Function_228(&bLocal_491);
				Function_228(&bLocal_482);
				Function_228(&bLocal_485);
				bLocal_382 = 11;
				iLocal_511 = 0;
			}
			break;
		
		case 0x0000000B:
			if (!iLocal_521)
			{
				if (Function_281(&bLocal_479) <= 16.0f)
				{
					if (!Function_133() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if ((Function_482(Local_4.f_272) <= 2 && Function_481(Local_4.f_272, 23) < 0) && Function_348(Local_4.f_272, bLocal_400, 20.0f, 0) <= 2)
						{
							Function_480();
							iLocal_521 = 1;
						}
					}
				}
			}
			if (!Function_331(&bLocal_485, 60.0f, 200.0f, bLocal_400, "Grave02_return_wagon", "Wagon_abandoned", &bLocal_391, 0, 0, 0, 325, 1))
			{
				if (!Function_133())
				{
					Function_477(&bLocal_485, 1920.0f, "grave02_obj01", 7,5f, 2, 0);
				}
			}
			if (iLocal_511 <= 6)
			{
				Function_416();
			}
			else if (iLocal_503 != 1)
			{
				bLocal_382 = 106;
				Function_228(&bLocal_479);
			}
			break;
		
		case 0x0000005F:
			Function_331(&bLocal_485, 60.0f, 200.0f, bLocal_400, "Grave02_return_wagon", "Wagon_abandoned", &bLocal_391, 0, 0, 0, 325, 1);
			if (Function_281(&bLocal_482) <= 9.0f)
			{
				if (Function_328(Global_34573, bLocal_400, 16.0f))
				{
					Function_327();
				}
				else
				{
					Function_326();
				}
				Function_228(&bLocal_482);
			}
			if (!Function_278())
			{
				if (Function_281(&bLocal_479) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!IS_BLIP_VALID(bLocal_530))
					{
						bLocal_530 = ADD_BLIP_FOR_ACTOR((*&Local_4 + 244)[02], 325, 0, 2, 0);
						Function_349("Grave02_return_wagon", 0x40f00000, 1, 2, 0, 0, 0);
					}
				}
			}
			else
			{
				bLocal_382 = iLocal_507;
				Function_228(&bLocal_479);
				PRINTSTRING("STAGE 1 - GOAL ");
				PRINTINT(bLocal_382);
				PRINTNL();
				if (IS_BLIP_VALID(bLocal_530))
				{
					REMOVE_BLIP(bLocal_530);
				}
				if (IS_BLIP_VALID(bLocal_531))
				{
					REMOVE_BLIP(bLocal_531);
				}
				Function_325();
				bLocal_531 = ADD_BLIP_FOR_COORD(&Local_4 + 1296, 330, 0, 2, 0);
				Function_359(StackVal, StackVal, *(&Local_4 + 1296), 0, 48, 1);
			}
			break;
		
		case 0x0000006A:
			iLocal_403[1] = 1;
			Function_228(&bLocal_479);
			iLocal_381 = 2;
			bLocal_382 = false;
			break;
	}
	return;
}

int Function_477(bool bParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x14044 / 81988
{
	if (Function_281(bParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_244();
		}
		if (!Function_133())
		{
			Function_478(uParam2, uParam3, uParam4);
			Function_228(bParam0);
			return 1;
		}
		Function_229(bParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_478(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14089 / 82057
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_479(bParam0, bParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_132(bParam0, bParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_349(bParam0, bParam1, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, bParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_479(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x140E7 / 82151
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

void Function_480() //Position: 0x1412E / 82222
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave02_NoBurnWagon", "Grave02_NoBurnWagon", false, 2, 1, 0, 1);
		Function_220(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_481(bool bParam0, bool bParam1) //Position: 0x1417D / 82301
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (ACTOR_HAS_WEAPON(bVar2, bParam1) || ACTOR_HAS_WEAPON_IN_HAND(bVar2, bParam1))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

int Function_482(bool bParam0) //Position: 0x141C7 / 82375
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

void Function_483() //Position: 0x14217 / 82455
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_SearchingWagonDrive", "Grave02_SearchingWagonDrive", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_484() //Position: 0x14276 / 82550
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave02_AttackFireBombs", "Grave02_AttackFireBombs", false, 2, 1, 0, 1);
		Function_220(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_485() //Position: 0x142CD / 82637
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_AttackFireBombsSeth", "Grave02_AttackFireBombsSeth", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_486() //Position: 0x1432C / 82732
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = false;
	Function_369();
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 244)[02]), "passengercorpse_wag2_attach", &vVar8, &vVar11);
	vVar8.f_4 = (vVar8.y + 0,08f);
	GET_OBJECT_RELATIVE_POSITION((*&Local_4 + 244)[02], vVar8, &vVar2);
	GET_OBJECT_RELATIVE_ORIENTATION((*&Local_4 + 244)[02], vVar11, &vVar5);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "ZOMBIEGHOST", vVar2, vVar5);
	ATTACH_OBJECTS_CONTINUOUS(bVar1, (*&Local_4 + 244)[02], 4294967295);
	Function_487();
	bVar0 = false;
	while (bVar0 < (Local_4.f_276 - 1))
	{
		ATTACH_OBJECTS((*&Local_4 + 276)[bVar02], bVar1, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_4 + 276)[bVar02], bLocal_400, false);
		SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_4 + 276)[bVar02], (*&Local_4 + 244)[02], false);
		SET_ACTOR_INVULNERABILITY((*&Local_4 + 276)[bVar02], true);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR((*&Local_4 + 276)[bVar02], 0);
		STOP_PED_SPEAKING((*&Local_4 + 276)[bVar02], 1);
		AUDIO_TURN_OFF_PAIN_VOCALS((*&Local_4 + 276)[bVar02]);
		AUDIO_TURN_OFF_VOCALS_EFFECTS((*&Local_4 + 276)[bVar02]);
		SET_ALLOW_COLD_WEATHER_BREATH((*&Local_4 + 276)[bVar02], 0);
		DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 276)[bVar02]);
		TASK_STAND_STILL((*&Local_4 + 276)[bVar02], -1.0f, 0, 0);
		TASK_PRIORITY_SET((*&Local_4 + 276)[bVar02], true);
		SET_ACTOR_PROOF((*&Local_4 + 276)[bVar02], 16);
		SET_ACTOR_FACTION((*&Local_4 + 276)[bVar02], 20);
		SET_ACTOR_INVULNERABILITY((*&Local_4 + 276)[bVar02], true);
		AUDIO_TURN_OFF_PAIN_VOCALS((*&Local_4 + 276)[bVar02]);
		if (SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber", 0))
		{
			switch (bVar0)
			{
				case 0x00000000:
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/A");
					SET_REACT_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/A");
					break;
				
				case 0x00000001:
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/B");
					SET_REACT_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/B");
					break;
				
				case 0x00000002:
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/C");
					SET_REACT_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/C");
					break;
				
				case 0x00000003:
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/D");
					SET_REACT_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/D");
					break;
				
				case 0x00000004:
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/E");
					SET_REACT_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/E");
					break;
				
				case 0x00000005:
					SET_ACTION_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/F");
					SET_REACT_NODE_FOR_ACTOR((*&Local_4 + 276)[bVar02], "Graverobber/Corpse/F");
					break;
			}
		}
		bVar0++;
	}
	return;
}

void Function_487() //Position: 0x146D2 / 83666
{
	Local_4.f_328 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Corpses"));
	(*&Local_4 + 276)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "corpse_1", 543, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 276)[02], Local_4.f_328);
	SET_ACTOR_PROOF((*&Local_4 + 276)[02], 8);
	Function_488((*&Local_4 + 276)[02], 0, 0, 0, 1, 0, 1);
	(*&Local_4 + 276)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "corpse_2", 542, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 276)[12], Local_4.f_328);
	SET_ACTOR_PROOF((*&Local_4 + 276)[12], 8);
	Function_488((*&Local_4 + 276)[12], 0, 0, 0, 1, 0, 1);
	(*&Local_4 + 276)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "corpse_3", 541, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 276)[22], Local_4.f_328);
	SET_ACTOR_PROOF((*&Local_4 + 276)[22], 8);
	Function_488((*&Local_4 + 276)[22], 0, 0, 0, 1, 0, 1);
	(*&Local_4 + 276)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "corpse_4", 343, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 276)[32], Local_4.f_328);
	SET_ACTOR_PROOF((*&Local_4 + 276)[32], 8);
	Function_488((*&Local_4 + 276)[32], 0, 0, 0, 1, 0, 1);
	(*&Local_4 + 276)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "corpse_5", 544, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 276)[42], Local_4.f_328);
	SET_ACTOR_PROOF((*&Local_4 + 276)[42], 8);
	Function_488((*&Local_4 + 276)[42], 0, 0, 0, 1, 0, 1);
	(*&Local_4 + 276)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "corpse_6", 541, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 276)[52], Local_4.f_328);
	SET_ACTOR_PROOF((*&Local_4 + 276)[52], 8);
	Function_488((*&Local_4 + 276)[52], 0, 0, 0, 1, 0, 1);
	return;
}

void Function_488(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x148C9 / 84169
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

void Function_489() //Position: 0x14906 / 84230
{
	if (Function_445(Global_34573, (*&Local_4 + 244)[02], 0))
	{
		Function_442(&bLocal_485, 2850.0f, 3000.0f, Local_4.f_1320, "grave02_obj01", "grave02_dest_abandon", &bLocal_391, 0, 0, 0, 4294967295, 1);
		if (!Function_272(StackVal, StackVal, Global_34573, *(&Local_4 + 1296), 2850.0f))
		{
			if (!Function_441(3201092813, 0x41200000, 0))
			{
				if (Function_281(&bLocal_482) < 8.0f)
				{
					Function_440();
					Function_228(&bLocal_482);
				}
			}
		}
	}
	return;
}

void Function_490() //Position: 0x149A2 / 84386
{
	if (bLocal_382 < 3 && bLocal_382 > 105)
	{
		Function_489();
		Function_331(&bLocal_485, 60.0f, 200.0f, bLocal_400, "Grave02_return_wagon", "Wagon_abandoned", &bLocal_391, 0, 0, 0, 325, 1);
		Function_446();
		Function_517();
		if (IS_VOLUME_VALID(Local_4.f_480))
		{
			if (StackVal || Function_272(StackVal, IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_480), Global_34573, *(&Local_4 + 1296), 2189,5f))
			{
				DESTROY_VOLUME(Local_4.f_480);
			}
		}
		else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_228(&bLocal_488);
			Function_228(&bLocal_479);
			bLocal_382 = 106;
		}
		if (!iLocal_523)
		{
			if (Function_272(StackVal, StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 1404), 260.0f))
			{
				Function_516();
			}
		}
		if (bLocal_382 >= 8)
		{
			Function_409();
		}
		if (Function_278())
		{
			if (Function_281(&bLocal_482) <= 12.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_405((*&Local_4 + 244)[02], 0) >= 0,5f)
					{
						if (fLocal_516 >= 0.0f)
						{
							fLocal_516 = GET_CURRENT_GAME_TIME();
						}
						if ((GET_CURRENT_GAME_TIME() - fLocal_516) < 6.0f)
						{
							Function_402();
						}
					}
					else if (Function_405((*&Local_4 + 244)[02], 0) >= 8.0f)
					{
						Function_325();
						fLocal_516 = 0.0f;
					}
					else
					{
						fLocal_516 = 0.0f;
					}
				}
				Function_228(&bLocal_482);
			}
		}
	}
	switch (bLocal_382)
	{
		case 0x00000000:
			Function_316(0);
			bLocal_545 = CEIL(TO_FLOAT((vLocal_547 / 2)));
			iLocal_605 = 0;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_400, GET_ACTOR_MAX_HEALTH(bLocal_400));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_312();
			bLocal_402 = Function_311(StackVal, StackVal, *(&Local_4 + 548[06]), 0, 1, 1);
			if (!Function_310(bLocal_402))
			{
				if (Function_298(&Local_374))
				{
					Function_309(&Local_374);
				}
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 548[16]), 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_400, *(&Local_4 + 548[36]), 1, true, 1);
			Function_228(&bLocal_479);
			bLocal_382 = true;
			break;
		
		case 0x00000001:
			Function_505();
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_310(bLocal_402) || bLocal_402 != 4294967295)
				{
					if (Function_501() || Function_281(&bLocal_482) <= 15.0f)
					{
						Function_228(&bLocal_479);
						bLocal_382 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			SET_ACTOR_HEALTH(bLocal_400, GET_ACTOR_MAX_HEALTH(bLocal_400));
			TOGGLE_COVER_PROPS(0);
			Function_486();
			Function_366();
			Function_364();
			Function_363(&Local_4 + 272);
			Function_228(&bLocal_479);
			bLocal_382 = 3;
			Function_240(iLocal_381);
			Function_303(StackVal, StackVal, Function_240(iLocal_381), iLocal_381, Global_30628[2], Function_242(iLocal_381), 0);
			break;
		
		case 0x00000003:
			if (Function_505())
			{
				Function_228(&bLocal_479);
				bLocal_382 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				if (!Function_298(&Local_374))
				{
					Function_499();
				}
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (StackVal || !Function_272(StackVal, Function_298(&Local_374), (*&Local_4 + 244)[02], *(&Local_4 + 548[46]), 10.0f))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 548[46]), 1, true, 1);
			}
			Function_352(&(Local_648[017]), bLocal_400, "GraveRobber", 1, 0x5f5e100, 1);
			Function_352(&(Local_648[117]), (*&Local_4 + 244)[02], "Wagon", 1, 0x5f5e100, 1);
			Global_34165.f_64++;
			Global_34165.f_116++;
			ACTIVATE_PHYSINST(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 244)[02]));
			Function_228(&bLocal_491);
			Function_228(&bLocal_479);
			bLocal_382 = 6;
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_498();
				if (Function_298(&Local_374))
				{
					Function_499();
				}
				Function_228(&bLocal_479);
				bLocal_382 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!Function_445(Global_34573, (*&Local_4 + 244)[02], 0))
				{
					ADD_BLIP_FOR_ACTOR((*&Local_4 + 244)[02], 325, 0, 2, 0);
					Function_349("Grave02_return_wagon", 0x40f00000, 1, 2, 0, 0, 0);
				}
				Function_228(&bLocal_482);
				Function_228(&bLocal_479);
				bLocal_382 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_328(Global_34573, bLocal_400, 16.0f))
			{
				if (Function_281(&bLocal_482) <= 15.0f)
				{
					Function_498();
					Function_228(&bLocal_482);
				}
			}
			else if (Function_281(&bLocal_482) <= 7.0f)
			{
				Function_326();
				Function_228(&bLocal_482);
			}
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_INSIDE_VEHICLE(Global_34573))
				{
					Function_370();
					Function_315();
					SET_REACT_NODE_FOR_ACTOR(bLocal_400, "graverobber/Robber/Idle");
					AI_GOAL_LOOK_CLEAR(bLocal_400);
					STOP_FORCE_LOOK_AT_COORD(bLocal_400);
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 244)[02])))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT((*&Local_4 + 244)[02]));
					}
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					HUD_CLEAR_SMALL_TEXT();
					HUD_CLEAR_SMALL_TEXT_QUEUE();
					Function_497();
					bLocal_531 = ADD_BLIP_FOR_COORD(&Local_4 + 1296, 330, 0, 2, 0);
					Function_359(StackVal, StackVal, *(&Local_4 + 1296), 0, 48, 1);
					Function_228(&bLocal_488);
					Function_228(&bLocal_479);
					Function_228(&bLocal_482);
					bLocal_382 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_INSIDE_VEHICLE(Global_34573))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_281(&bLocal_479) <= 10.0f)
				{
					Function_349("Grave02_obj01", 0x40f00000, 1, 2, 0, 0, 0);
					Function_228(&bLocal_488);
					Function_228(&bLocal_479);
					bLocal_382 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_281(&bLocal_479) <= 8.0f)
			{
				if (!IS_VOLUME_ENABLED((*&Local_4 + 436)[0]) && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_431();
					Function_228(&bLocal_479);
					if (Function_26(19, 0))
					{
						bLocal_382 = 56;
					}
					else
					{
						bLocal_382 = 11;
					}
				}
			}
			break;
		
		case 0x00000038:
			if (!Global_3415)
			{
				Function_496();
				Global_3415 = 1;
			}
			Function_228(&bLocal_488);
			Function_228(&bLocal_479);
			Function_228(&bLocal_482);
			bLocal_382 = 11;
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&bLocal_479) <= 3.0f)
			{
				PRINTSTRING("num runs = ");
				PRINTINT(Function_495());
				PRINTNL();
				switch (Function_495())
				{
					case 0x00000000:
						Function_494();
						break;
					
					case 0x00000001:
						Function_493();
						break;
					
					case 0x00000002:
						Function_492();
						break;
					
					default:
						Function_491();
						break;
				}
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_228(&bLocal_488);
					Function_228(&bLocal_479);
					bLocal_382 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			break;
		
		case 0x0000005F:
			if (Function_281(&bLocal_482) <= 9.0f)
			{
				if (Function_328(Global_34573, bLocal_400, 16.0f))
				{
					Function_327();
				}
				else
				{
					Function_326();
				}
				Function_228(&bLocal_482);
			}
			if (!Function_278())
			{
				if (Function_281(&bLocal_479) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!IS_BLIP_VALID(bLocal_530))
					{
						bLocal_530 = ADD_BLIP_FOR_ACTOR((*&Local_4 + 244)[02], 325, 0, 2, 0);
						Function_349("Grave02_return_wagon", 0x40f00000, 1, 2, 0, 0, 0);
					}
				}
			}
			else
			{
				bLocal_382 = iLocal_507;
				Function_228(&bLocal_479);
				PRINTSTRING("STAGE 1 - GOAL ");
				PRINTINT(bLocal_382);
				PRINTNL();
				if (IS_BLIP_VALID(bLocal_530))
				{
					REMOVE_BLIP(bLocal_530);
				}
				if (IS_BLIP_VALID(bLocal_531))
				{
					REMOVE_BLIP(bLocal_531);
				}
				Function_325();
				bLocal_531 = ADD_BLIP_FOR_COORD(&Local_4 + 1296, 330, 0, 2, 0);
				Function_359(StackVal, StackVal, *(&Local_4 + 1296), 0, 48, 1);
			}
			break;
		
		case 0x0000006A:
			Function_413();
			iLocal_403[0] = 1;
			Function_228(&bLocal_479);
			iLocal_381 = 1;
			bLocal_382 = false;
			break;
	}
	return;
}

void Function_491() //Position: 0x15162 / 86370
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_NoMoreTalk", "Grave02_NoMoreTalk", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x151AF / 86447
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v3_AA", "Grave02_BanterB4Attack_v3_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v3_AB", "Grave02_BanterB4Attack_v3_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v3_AC1", "Grave02_BanterB4Attack_v3_AC1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v3_AC2", "Grave02_BanterB4Attack_v3_AC2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v3_AD", "Grave02_BanterB4Attack_v3_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v3_AE", "Grave02_BanterB4Attack_v3_AE", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_493() //Position: 0x15377 / 86903
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v2_AA", "Grave02_BanterB4Attack_v2_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v2_AB", "Grave02_BanterB4Attack_v2_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v2_AC", "Grave02_BanterB4Attack_v2_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v2_AD1", "Grave02_BanterB4Attack_v2_AD1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v2_AD2", "Grave02_BanterB4Attack_v2_AD2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v2_AE", "Grave02_BanterB4Attack_v2_AE", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v2_AF", "Grave02_BanterB4Attack_v2_AF", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_494() //Position: 0x15586 / 87430
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v1_AA", "Grave02_BanterB4Attack_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v1_AB", "Grave02_BanterB4Attack_v1_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v1_AC", "Grave02_BanterB4Attack_v1_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v1_AD", "Grave02_BanterB4Attack_v1_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v1_AE1", "Grave02_BanterB4Attack_v1_AE1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v1_AE2", "Grave02_BanterB4Attack_v1_AE2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v1_AF", "Grave02_BanterB4Attack_v1_AF", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v1_AG1", "Grave02_BanterB4Attack_v1_AG1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v1_AG2", "Grave02_BanterB4Attack_v1_AG2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Grave02_BanterB4Attack_v1_AG3", "Grave02_BanterB4Attack_v1_AG3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v1_AH1", "Grave02_BanterB4Attack_v1_AH1", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave02_BanterB4Attack_v1_AH2", "Grave02_BanterB4Attack_v1_AH2", true, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_495() //Position: 0x15902 / 88322
{
	return Global_34165.f_60;
}

void Function_496() //Position: 0x1590D / 88333
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave03_MachGunMissingAmmo_v1_AA", "Grave02_MachGunMissingAmmo_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Grave03_MachGunMissingAmmo_v1_AB", "Grave02_MachGunMissingAmmo_v1_AB", true, 1, 0, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_497() //Position: 0x159C5 / 88517
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_SetOff", "Grave02_SetOff", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_498() //Position: 0x15A0A / 88586
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_WaitingJonGetOnWagon", "Grave02_WaitingJonGetOnWagon", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_499() //Position: 0x15A6B / 88683
{
	if (IS_OBJECT_ATTACHED(bLocal_400))
	{
		REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_400));
	}
	if (!IS_OBJECT_ATTACHED(bLocal_400))
	{
		ATTACH_OBJECTS(bLocal_400, (*&Local_4 + 244)[02], "", 0.0f, 1,2f, 1,9f, 0.0f, 0.0f, 0.0f, 4294967295);
		TASK_STAND_STILL(bLocal_400, -1.0f, 0, 0);
		Function_500();
	}
	return;
}

void Function_500() //Position: 0x15AB9 / 88761
{
	RESET_ANIM_SET_FOR_ACTOR(bLocal_400, 0);
	if (SET_ANIM_SET_FOR_ACTOR(bLocal_400, "graverobber_climbin", 0))
	{
		SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "graverobber_climbin");
		iLocal_505 = 0;
		FORCE_LOOK_AT_ACTOR(bLocal_400, Global_34573, -1.0f);
	}
	return;
}

int Function_501() //Position: 0x15B14 / 88852
{
	var uVar0;
	
	UNK_0x44986367(StackVal, &uVar0);
	bLocal_533 = Function_504(Global_34207, 1);
	if (Function_503(Global_34207))
	{
		if (IS_OBJECT_VALID(bLocal_533))
		{
			TRAIN_SET_POSITION_DIRECTION(Global_34207, &Local_4 + 1404, &uVar0);
			TRAIN_SET_TARGET_POS(Global_34207, &Local_4 + 1404);
			TRAIN_SET_AUTOPILOT_ENABLE(Global_34207, 0);
			TRAIN_SET_SPEED(Global_34207, 0.0f);
			TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
			Function_502(Global_34207, 2, "TRAIN_BOARDING", 0);
			return 1;
		}
	}
	return 0;
}

void Function_502(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x15B90 / 88976
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	bVar1 = TRAIN_GET_CAR(bParam0, bParam1);
	iVar5 = 0;
	if (IS_OBJECT_VALID(bVar1))
	{
		bVar4 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(bVar1, "myLayoutObj"));
		if (IS_LAYOUTREF_VALID(bVar4))
		{
			bVar2 = CREATE_OBJECT_ITERATOR(bVar4);
			ITERATE_ON_OBJECT_TYPE(bVar2, 12);
			ITERATE_IN_LAYOUT(bVar2, bVar4);
			bVar3 = START_OBJECT_ITERATOR(bVar2);
			while (IS_OBJECT_VALID(bVar3))
			{
				bVar0 = GET_GRINGO_FROM_OBJECT(bVar3);
				if (IS_GRINGO_VALID(bVar0))
				{
					if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar3), bParam2))
					{
						GRINGO_SET_USABLE_BY_PLAYER(bVar0, "nPlayerUse", iParam3);
						iVar5++;
					}
				}
				bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
			}
			if (IS_ITERATOR_VALID(bVar2))
			{
				DESTROY_ITERATOR(bVar2);
			}
		}
	}
	if (iVar5 == 0)
	{
	}
}

bool Function_503(bool bParam0) //Position: 0x15C45 / 89157
{
	if (!Function_211(bParam0, "TRAIN_HAS_BEEN_STOLEN"))
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

var Function_504(bool bParam0, bool bParam1) //Position: 0x15CA2 / 89250
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

bool Function_505() //Position: 0x15D15 / 89365
{
	Function_299(&Local_383, 1);
	switch (Local_383)
	{
		case 0x000003E8:
			if (Function_298(&Local_374) || Local_374.f_24 < 1)
			{
				Local_383 = 1106;
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Grave_02/Grave_02"))
			{
				LOG_ERROR("Cutscene file does not exist!");
				Local_383 = 1106;
			}
			else
			{
				Function_295(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				Function_293(StackVal, StackVal, bLocal_373, *(&Global_3422[1340] + 52), &uLocal_606, 1, 0, 0, 0, 1, 1);
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/Grave_02/Grave_02", 0, 1, 1, 2, 2);
				Function_312();
				Function_180(1, 0, 1);
				Global_63097 = 1;
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				if (Function_218(&Local_383 + 4))
				{
					Function_228(&Local_383 + 4);
				}
				else
				{
					Function_322(&Local_383 + 4);
				}
				Local_383 = 1002;
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_281(&Local_383 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene took too long to load! Skipping...");
				Local_383 = 1105;
			}
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) && STREAMING_IS_WORLD_LOADED())
			{
				Function_515(-1781,559f, 26,166f, 2841,432f, -0,631f, -0,214f, -0,746f);
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Global_63097 = 0;
				Local_383 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_511();
			Function_506(&bLocal_414);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_383 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 244)[02], *(&Local_4 + 548[46]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 548[16]), 1, true, 1);
				Function_499();
				UI_POP("nCutscenes");
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				Local_383 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (bLocal_382 != 3 && iLocal_381 != 0)
				{
					AI_STOP_IGNORING_ACTORS();
					Global_63097 = 0;
					Function_276(1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
					Local_383 = 1000;
				}
				return 1;
			}
			break;
		
		case 0x00000452:
			Local_383 = 1000;
			return 1;
			break;
	}
	return 0;
}

bool Function_506(bool bParam0) //Position: 0x15FCF / 90063
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_510();
	iVar1 = 0;
	if (!Function_173(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_509(bParam0[iVar03], 8);
		}
		else if (Function_508())
		{
			iVar1 = 1;
			Function_509(bParam0[iVar03], 8);
		}
		Function_509(bParam0[iVar03], 16);
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
				Function_509(bParam0[iVar03], 1);
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
							Function_509(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_509(bParam0[iVar03], 2);
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
							Function_509(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_509(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_509(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_509(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_509(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_509(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_509(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_509(bParam0[iVar03], 2);
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
	Function_507();
	return 1;
}

void Function_507() //Position: 0x1634A / 90954
{
	if (!Function_296(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_508() //Position: 0x1638A / 91018
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

void Function_509(var uParam0, int iParam1) //Position: 0x163B5 / 91061
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_510() //Position: 0x163C6 / 91078
{
	if (!Function_296(128))
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

bool Function_511() //Position: 0x16408 / 91144
{
	Function_514(&Local_4 + 4, 1199, 2, 0);
	Function_514(&Local_4 + 4, 996, 2, 0);
	Function_514(&Local_4 + 4, 506, 2, 0);
	Function_514(&Local_4 + 4, 977, 2, 0);
	Function_514(&Local_4 + 4, 543, 2, 0);
	Function_514(&Local_4 + 4, 542, 2, 0);
	Function_514(&Local_4 + 4, 541, 2, 0);
	Function_514(&Local_4 + 4, 343, 2, 0);
	Function_514(&Local_4 + 4, 544, 2, 0);
	Function_514(&Local_4 + 4, 9, 2, 0);
	Function_514(&Local_4 + 4, 435, 2, 0);
	Function_514(&Local_4 + 4, 437, 2, 0);
	Function_514(&Local_4 + 4, 173, 2, 0);
	Function_514(&Local_4 + 4, 1132, 2, 0);
	Function_512(&Local_4 + 4, "p_gen_coffinEmpty01x", 0, 0);
	Function_512(&Local_4 + 4, "p_gen_hayPile02x", 0, 0);
	Function_512(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/pitch_hay", 1, 0);
	if (Function_506(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_512(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1654B / 91467
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_513(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_509(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_513(var uParam0, int iParam1, int iParam2) //Position: 0x16583 / 91523
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_509(uParam0[iVar03], 4);
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

var Function_514(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x16647 / 91719
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_173(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_509(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_509(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_515(vector3 vParam0, vector3 vParam3) //Position: 0x16717 / 91927
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	VSCALE(&vVar0, 5.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(vVar0, 0, 0);
}

void Function_516() //Position: 0x16743 / 91971
{
	iLocal_523 = 1;
	TRAIN_SET_MAX_ACCEL(Global_34207, 3,5f);
	TRAIN_SET_TARGET_SPEED(Global_34207, 8,75f);
	TRAIN_SET_AUTOPILOT_ENABLE(Global_34207, 1);
	TRAIN_SET_TARGET_POS(Global_34207, &Local_4 + 1432);
	return;
}

void Function_517() //Position: 0x16775 / 92021
{
	if (Function_278())
	{
		if (IS_ACTOR_SHOOTING(Global_34573))
		{
			if (!iLocal_605)
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					if (Function_281(&bLocal_482) <= 10.0f)
					{
						Function_518();
						Function_228(&bLocal_482);
					}
				}
			}
		}
	}
	return;
}

void Function_518() //Position: 0x167B6 / 92086
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_ShootsGunRandWagon", "Grave02_ShootsGunRandWagon", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_519() //Position: 0x16813 / 92179
{
	switch (bLocal_382)
	{
		case 0x00000006:
			iLocal_692 = 0;
			Function_550(&Local_374, 1);
			bLocal_373 = CREATE_LAYOUT(Function_53());
			Function_549();
			Local_383 = 1000;
			bLocal_382 = 7;
			break;
		
		case 0x00000007:
			if (Local_383 != 1004 || Function_505())
			{
				bLocal_382 = 8;
			}
			break;
		
		case 0x00000008:
			Function_505();
			if (Function_533())
			{
				Function_531();
				bLocal_382 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_478 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			Function_530();
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_202(1);
			Function_529(1, 1, 1);
			RESET_ACTOR_GAITS(bLocal_400, 0);
			SET_CRIPPLE_ENABLE(bLocal_400, 0);
			SET_ACTOR_FACTION(bLocal_400, 20);
			TASK_PRIORITY_SET(bLocal_400, true);
			TASK_STAND_STILL(bLocal_400, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_400, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_400, 50.0f);
			SET_ACTOR_HEALTH(bLocal_400, GET_ACTOR_MAX_HEALTH(bLocal_400));
			SET_ACTOR_PROOF(bLocal_400, 16);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_400, false);
			RESET_ACTOR_GAITS(bLocal_401, 0);
			TASK_PRIORITY_SET(bLocal_401, true);
			TASK_STAND_STILL(bLocal_401, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_401, 50.0f);
			SET_ACTOR_HEALTH(bLocal_401, GET_ACTOR_MAX_HEALTH(bLocal_401));
			SET_PLAYER_TARGET_WEIGHT(-20.0f);
			SET_ACTOR_PROOF(Global_34573, 16);
			Function_529(1, 0, 1);
			bLocal_534 = CREATE_OBJECTSET_IN_LAYOUT("FireVols", Local_4, 4294967295, 1);
			FIRE_STOP_ALL_FIRES();
			SET_WEAPONENUM_LOCKED(23, 0);
			Function_527(&uLocal_608, bLocal_373);
			EQUIP_ACCESSORY(bLocal_400, 0, 1);
			ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bLocal_400, 0, 0);
			if (!IS_ACTOR_VALID((*&Local_4 + 244)[02]))
			{
				Function_282();
				TASK_STAND_STILL((*&Local_4 + 244)[02], -1.0f, 0, 0);
			}
			Function_526((*&Local_4 + 244)[02], 16.0f);
			if (!IS_OBJECT_VALID(bLocal_540))
			{
				bLocal_540 = CREATE_POINT_IN_LAYOUT(Local_4, "TEH_TARGET_GHOOOOST", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			}
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_540);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_540);
			Function_525(70.0f);
			Function_524();
			TASK_USE_GRINGO((*&Local_4 + 396)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1460), "UseCase1", 4294967295, 1);
			TASK_PRIORITY_SET((*&Local_4 + 396)[02], 2);
			SET_ACTOR_PROOF(Global_34573, 16);
			Function_322(&bLocal_479);
			Function_322(&bLocal_482);
			Function_322(&bLocal_485);
			Function_322(&bLocal_491);
			Function_322(&bLocal_488);
			Function_322(&bLocal_494);
			Function_322(&bLocal_497);
			Function_322(&bLocal_500);
			iLocal_381 = 0;
			bLocal_382 = false;
			Function_521(&Local_374, &iLocal_381, &bLocal_382);
			Function_520(StackVal, StackVal, StackVal, StackVal, StackVal, Function_531(), Local_374);
			break;
	}
	return;
}

void Function_520(struct<25> Param0) //Position: 0x16A79 / 92793
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_381 = 0;
			break;
		
		case 0x00000002:
			iLocal_381 = 1;
			break;
		
		case 0x00000003:
			iLocal_381 = 2;
			break;
		
		case 0x00000004:
			iLocal_381 = 3;
			break;
		
		case 0x00000005:
			iLocal_381 = 4;
			break;
		
		case 0x00000006:
			iLocal_381 = 5;
			break;
		
		case 0x00000007:
			iLocal_381 = 6;
			break;
		
		case 0x00000008:
			iLocal_381 = 7;
			break;
		
		case 0x00000009:
			iLocal_381 = 8;
			break;
		
		case 0x0000000A:
			iLocal_381 = 101;
			break;
	}
}

void Function_521(int iParam0, var uParam1, int iParam2) //Position: 0x16B0E / 92942
{
	if (Function_298(iParam0))
	{
		*uParam1 = Function_523(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_522();
	}
	return;
}

void Function_522() //Position: 0x16B42 / 92994
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

var Function_523(int iParam0) //Position: 0x16B93 / 93075
{
	if (Function_298(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_524() //Position: 0x16BAB / 93099
{
	(*&Local_4 + 396)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "farmer_1", 173, -3288,714f, 17,56864f, 2703,287f, 0.0f, 176,2757f, 0.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 396)[02], true);
	return;
}

void Function_525(int iParam0) //Position: 0x16BED / 93165
{
	if (Global_8722 < 0,1f)
	{
		return;
	}
	Global_8722 = iParam0;
	return;
}

void Function_526(bool bParam0, float fParam1) //Position: 0x16C05 / 93189
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
	{
		bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bVar1, fParam1);
			}
		}
		bVar0++;
	}
	return;
}

int Function_527(var uParam0, bool bParam1) //Position: 0x16C46 / 93254
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_528(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_528(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_528(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_528(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_528(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x172E6 / 94950
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

void Function_529(int iParam0, bool bParam1, bool bParam2) //Position: 0x173A9 / 95145
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
				Function_332(bVar0);
			}
		}
	}
	return;
}

void Function_530() //Position: 0x174A0 / 95392
{
	Local_4.f_368 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Sheriffs"));
	(*&Local_4 + 348)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nsheriff_1", 435, -2091,581f, 16,97577f, 2604,329f, 0.0f, 111,0403f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 348)[02], Local_4.f_368);
	TASK_STAND_STILL((*&Local_4 + 348)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 348)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 348)[02], 20);
	(*&Local_4 + 348)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nsheriff_2", 437, -2092,082f, 16,98099f, 2603,421f, 0.0f, 155,5813f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 348)[12], Local_4.f_368);
	TASK_STAND_STILL((*&Local_4 + 348)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 348)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 348)[12], 20);
	return;
}

vector3 Function_531() //Position: 0x17590 / 95632
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
	
	Function_532(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Grave02_layout");
	Local_4.f_432 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 416)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "cutScene01Vol", 2, -1784,874f, 30,38342f, 2852,7f, 0.0f, 24,25881f, 0.0f, 119,284f, 17,75799f, 114,9585f);
	ADD_TO_VOLUME_SET(Local_4.f_432, (*&Local_4 + 416)[0]);
	(*&Local_4 + 416)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "cutScene02Vol", 2, -3863,011f, 35,39275f, 2937,816f, 0.0f, -0,4973582f, 0.0f, 147,7574f, 33,94793f, 81,58124f);
	ADD_TO_VOLUME_SET(Local_4.f_432, (*&Local_4 + 416)[1]);
	(*&Local_4 + 416)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ncs_endVol", 2, -3900,286f, 31,30791f, 2923,297f, 0.0f, 85,49361f, 0.0f, 146,1966f, 48,09691f, 155,5584f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 416)[2]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 416)[2]);
	ADD_TO_VOLUME_SET(Local_4.f_432, (*&Local_4 + 416)[2]);
	Local_4.f_476 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "wayPoints_set");
	(*&Local_4 + 436)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp1", 2, -1817,697f, 56,71944f, 2672,806f, 0.0f, -54,48228f, 0.0f, 1.0f, 114,674f, 1086,22f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[0]);
	(*&Local_4 + 436)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp2", 2, -2108,043f, 22,72487f, 2610,201f, 0.0f, -4,524146f, 0.0f, 1.0f, 21,4371f, 22,57171f);
	SET_VOLUME_ENABLED((*&Local_4 + 436)[1], 0);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[1]);
	(*&Local_4 + 436)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp3", 2, -3677,538f, 32,37743f, 2889,629f, 0.0f, 35,65868f, 0.0f, 1.0f, 21,4371f, 28,74409f);
	SET_VOLUME_ENABLED((*&Local_4 + 436)[2], 0);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[2]);
	(*&Local_4 + 436)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp4", 2, -3778,447f, 28,27812f, 2849,701f, 0.0f, 1,726415f, 0.0f, 80,17427f, 21,4371f, 559,6367f);
	SET_VOLUME_ENABLED((*&Local_4 + 436)[3], 0);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[3]);
	(*&Local_4 + 436)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp5", 2, -3257,779f, 15,66438f, 2715,407f, 0.0f, -0,08823329f, 0.0f, 1.0f, 21,4371f, 128,6963f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[4]);
	(*&Local_4 + 436)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp6", 2, -2990,432f, 20,87183f, 2977,733f, 0.0f, -27,34535f, 0.0f, 1.0f, 21,4371f, 129,0698f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[5]);
	(*&Local_4 + 436)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp7", 2, -2990,432f, 20,87183f, 2977,733f, 0.0f, -27,34535f, 0.0f, 1.0f, 21,4371f, 129,0698f);
	SET_VOLUME_ENABLED((*&Local_4 + 436)[6], 0);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[6]);
	(*&Local_4 + 436)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp8", 2, -3294,29f, 18,43323f, 2981,916f, 0.0f, 20,30192f, 0.0f, 1.0f, 27,54663f, 129,0698f);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[7]);
	(*&Local_4 + 436)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "wp9", 2, -3473,839f, 19,99458f, 3079,855f, 0.0f, 42,2181f, 0.0f, 1.0f, 27,54663f, 270,9615f);
	SET_VOLUME_ENABLED((*&Local_4 + 436)[8], 0);
	ADD_TO_VOLUME_SET(Local_4.f_476, (*&Local_4 + 436)[8]);
	Local_4.f_480 = CREATE_VOLUME_IN_LAYOUT(Local_4, "StartChase", 2, -2282,808f, 20,64789f, 2572.0f, 0.0f, 0.0f, 0.0f, 3,445665f, 42,75916f, 976,4644f);
	Local_4.f_524 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "NearTumbleweed_set");
	(*&Local_4 + 484)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_1", 2, -3756,831f, 24,58898f, 3132,468f, 0.0f, 10,21842f, 0.0f, 148,046f, 35,46769f, 88,74331f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[0]);
	(*&Local_4 + 484)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_2", 2, -3890,407f, 29,37399f, 2494,944f, 0.0f, 20,52201f, 0.0f, 1.0f, 30,28998f, 344,2773f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[1]);
	(*&Local_4 + 484)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_3", 2, -3706,045f, 32,68417f, 2902,495f, 0.0f, -67,52518f, 0.0f, 65,46023f, 35,46769f, 110,0182f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[2]);
	(*&Local_4 + 484)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_4", 2, -4063,283f, 28,6417f, 3132,336f, 0.0f, -5,964409f, 0.0f, 46,14125f, 35,46769f, 55,79634f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[3]);
	(*&Local_4 + 484)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_5", 2, -4046,68f, 31,54537f, 2581,501f, 0.0f, 108,9376f, 0.0f, 1.0f, 30,28998f, 353,1234f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[4]);
	(*&Local_4 + 484)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_6", 2, -3795,432f, 31,81162f, 2941,531f, 0.0f, -85,73697f, 0.0f, 65,46023f, 35,46769f, 21,89343f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[5]);
	(*&Local_4 + 484)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_7", 2, -3796,307f, 32,1452f, 2941,596f, 0.0f, -85,73697f, 0.0f, 65,46023f, 35,46769f, 21,89343f);
	SET_VOLUME_ENABLED((*&Local_4 + 484)[6], 0);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[6]);
	(*&Local_4 + 484)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_8", 2, -3568,311f, 20,85993f, 3057,725f, 0.0f, -169,3741f, 0.0f, 46,7217f, 35,46769f, 21,89343f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[7]);
	(*&Local_4 + 484)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearTumble_9", 2, -3579,803f, 30,01072f, 2778,824f, 0.0f, -42,54221f, 0.0f, 46,7217f, 35,46769f, 21,89343f);
	ADD_TO_VOLUME_SET(Local_4.f_524, (*&Local_4 + 484)[8]);
	Local_4.f_528 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S3_WaitBeforeAttack", 3, -3748,738f, 13,20617f, 3581,713f, 0.0f, 20.0f, 0.0f, 20,41554f, 6,411139f, 20,6894f);
	Local_4.f_532 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gpsShift", 2, -3473,839f, 19,99458f, 3079,855f, 0.0f, 42,2181f, 0.0f, 1.0f, 27,54663f, 270,9615f);
	Local_4.f_536 = CREATE_VOLUME_IN_LAYOUT(Local_4, "armVol", 2, -2137,558f, 26,20729f, 2611,129f, 0.0f, 0.0f, 0.0f, 143,7562f, 25,84402f, 110,7974f);
	Local_4.f_540 = CREATE_VOLUME_IN_LAYOUT(Local_4, "noAmbients", 2, -1842,325f, 35,42273f, 2739,988f, 0.0f, 23,13683f, 0.0f, 95,02532f, 61,09915f, 255,0979f);
	Local_4.f_544 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	*(&Local_4 + 548[06]) = { -1783,1f, 24,0941f, 2839,921f };
	*(&Local_4 + 548[06] + 12) = { 0.0f, 388,91f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -1783,1f, 24,0941f, 2839,921f, 0.0f, 388,91f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_544);
	*(&Local_4 + 548[16]) = { -1783,1f, 24,0941f, 2839,921f };
	*(&Local_4 + 548[16] + 12) = { 0.0f, 388,91f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -1783,1f, 24,0941f, 2839,921f, 0.0f, 388,91f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_544);
	*(&Local_4 + 548[26]) = { -1781,062f, 24,0941f, 2840.0f };
	*(&Local_4 + 548[26] + 12) = { 0.0f, 49,31619f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -1781,062f, 24,0941f, 2840.0f, 0.0f, 49,31619f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_544);
	*(&Local_4 + 548[36]) = { -1782,013f, 23,939f, 2838,665f };
	*(&Local_4 + 548[36] + 12) = { 0.0f, 46,88945f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -1782,013f, 23,939f, 2838,665f, 0.0f, 46,88945f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_544);
	*(&Local_4 + 548[46]) = { -1784,156f, 24,07471f, 2836,673f };
	*(&Local_4 + 548[46] + 12) = { 0.0f, 46,88945f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "wagonStart01", -1784,156f, 24,07471f, 2836,673f, 0.0f, 46,88945f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_544);
	*(&Local_4 + 548[56]) = { -1789,979f, 24,06899f, 2839,873f };
	*(&Local_4 + 548[56] + 12) = { 0.0f, -154,4233f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "horseStart01", -1789,979f, 24,06899f, 2839,873f, 0.0f, -154,4233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_544);
	Local_4.f_696 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	*(&Local_4 + 700[06]) = { -2227,17f, 15,02873f, 2800,633f };
	*(&Local_4 + 700[06] + 12) = { 0.0f, -545,2394f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -2227,17f, 15,02873f, 2800,633f, 0.0f, -545,2394f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_696);
	*(&Local_4 + 700[16]) = { -2223,875f, 14,78665f, 2803,763f };
	*(&Local_4 + 700[16] + 12) = { 0.0f, -233,6988f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "WagonStart02", -2223,875f, 14,78665f, 2803,763f, 0.0f, -233,6988f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_696);
	Local_4.f_752 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	*(&Local_4 + 756[06]) = { -3318,61f, 11,10652f, 3017,124f };
	*(&Local_4 + 756[06] + 12) = { 0.0f, -267,6695f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -3318,61f, 11,10652f, 3017,124f, 0.0f, -267,6695f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_752);
	*(&Local_4 + 756[16]) = { -3320,185f, 10,79314f, 3012,853f };
	*(&Local_4 + 756[16] + 12) = { 0.0f, -253,8054f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "WagonStart03", -3320,185f, 10,79314f, 3012,853f, 0.0f, -253,8054f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_752);
	Local_4.f_808 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	*(&Local_4 + 812[06]) = { -3744,223f, 7,846857f, 3579,611f };
	*(&Local_4 + 812[06] + 12) = { 0.0f, -348,291f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -3744,223f, 7,846857f, 3579,611f, 0.0f, -348,291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_808);
	*(&Local_4 + 812[16]) = { -3747,878f, 8,164696f, 3583,967f };
	*(&Local_4 + 812[16] + 12) = { 0.0f, -348,291f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "WagonStart04", -3747,878f, 8,164696f, 3583,967f, 0.0f, -348,291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_808);
	Local_4.f_864 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene10Set", Local_4, 8, 0);
	*(&Local_4 + 868[06]) = { -3898,977f, 30,22297f, 2943,812f };
	*(&Local_4 + 868[06] + 12) = { 0.0f, -374,8042f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart10", -3898,977f, 30,22297f, 2943,812f, 0.0f, -374,8042f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_864);
	*(&Local_4 + 868[16]) = { -3896,39f, 30,58775f, 2941,646f };
	*(&Local_4 + 868[16] + 12) = { 0.0f, -338,0822f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd10", -3896,39f, 30,58775f, 2941,646f, 0.0f, -338,0822f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_864);
	*(&Local_4 + 868[26]) = { -3899,538f, 30,83667f, 2936,644f };
	*(&Local_4 + 868[26] + 12) = { 0.0f, -269,3444f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart10", -3899,538f, 30,83667f, 2936,644f, 0.0f, -269,3444f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_864);
	*(&Local_4 + 868[36]) = { -3899,97f, 31,84533f, 2927,26f };
	*(&Local_4 + 868[36] + 12) = { 0.0f, -16,29702f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd10", -3899,97f, 31,84533f, 2927,26f, 0.0f, -16,29702f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_864);
	*(&Local_4 + 868[46]) = { -3884,487f, 31,22706f, 2939,691f };
	*(&Local_4 + 868[46] + 12) = { 0.0f, -263,6578f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "WagonStart10", -3884,487f, 31,22706f, 2939,691f, 0.0f, -263,6578f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_864);
	*(&Local_4 + 868[56]) = { -3899,663f, 30,89977f, 2935,03f };
	*(&Local_4 + 868[56] + 12) = { 0.0f, -348,3313f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionGoto_10", -3899,663f, 30,89977f, 2935,03f, 0.0f, -348,3313f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_864);
	*(&Local_4 + 868[66]) = { -3902,977f, 32,25705f, 2937,675f };
	*(&Local_4 + 868[66] + 12) = { 0.0f, -356,802f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerLookAt_10", -3902,977f, 32,25705f, 2937,675f, 0.0f, -356,802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_864);
	*(&Local_4 + 868[76]) = { -3904,068f, 30,65091f, 2936,238f };
	*(&Local_4 + 868[76] + 12) = { 0.0f, -523,0786f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionGoto_10_1", -3904,068f, 30,65091f, 2936,238f, 0.0f, -523,0786f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_864);
	*(&Local_4 + 868[86]) = { -3899,912f, 30,50125f, 2939,669f };
	*(&Local_4 + 868[86] + 12) = { 0.0f, -257,1525f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "WagonStartGoTo", -3899,912f, 30,50125f, 2939,669f, 0.0f, -257,1525f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_4.f_864);
	*(&Local_4 + 868[96]) = { -3787,974f, 32,08393f, 2935,996f };
	*(&Local_4 + 868[96] + 12) = { 0.0f, -250,8537f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "playerHorse10", -3787,974f, 32,08393f, 2935,996f, 0.0f, -250,8537f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_4.f_864);
	*(&Local_4 + 868[106]) = { -3792,298f, 31,94429f, 2937,93f };
	*(&Local_4 + 868[106] + 12) = { 0.0f, -257,1525f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "WagonHide10", -3792,298f, 31,94429f, 2937,93f, 0.0f, -257,1525f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_4.f_864);
	*(&Local_4 + 868[116]) = { -3938,491f, 52,53443f, 2966,577f };
	*(&Local_4 + 868[116] + 12) = { 0.0f, -257,1525f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "birdsFly_1", -3938,491f, 52,53443f, 2966,577f, 0.0f, -257,1525f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_4.f_864);
	*(&Local_4 + 868[126]) = { -3887,951f, 52,53443f, 2995,584f };
	*(&Local_4 + 868[126] + 12) = { 0.0f, -257,1525f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_4, "birdsFly_2", -3887,951f, 52,53443f, 2995,584f, 0.0f, -257,1525f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_4.f_864);
	*(&Local_4 + 868[136]) = { -3898,579f, 30,64741f, 2940,24f };
	*(&Local_4 + 868[136] + 12) = { 0.0f, -265,4376f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_4, "WagonEnd10", -3898,579f, 30,64741f, 2940,24f, 0.0f, -265,4376f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_4.f_864);
	*(&Local_4 + 1208) = { -953,5786f, 103,3968f, 2564f };
	*(&Local_4 + 1208 + 12) = { 0.0f, -165,7462f, 0.0f };
	Local_4.f_1232 = CREATE_POINT_IN_LAYOUT(Local_4, "riderStartS2_1", -953,5786f, 103,3968f, 2564f, 0.0f, -165,7462f, 0.0f);
	*(&Local_4 + 1236) = { -925,407f, 106,9779f, 2568f };
	*(&Local_4 + 1236 + 12) = { 0.0f, -127,3655f, 0.0f };
	Local_4.f_1260 = CREATE_POINT_IN_LAYOUT(Local_4, "riderStartS2_2", -925,407f, 106,9779f, 2568f, 0.0f, -127,3655f, 0.0f);
	*(&Local_4 + 1264) = { -2687,626f, 34,82334f, 2789,865f };
	*(&Local_4 + 1264 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_1288 = CREATE_POINT_IN_LAYOUT(Local_4, "huntersGoAway", -2687,626f, 34,82334f, 2789,865f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1292 = CREATE_OBJECTSET_IN_LAYOUT("SheriffSpawnPosSet", Local_4, 8, 0);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_4, "sheriff_spawn_1", -3940,188f, 21,33431f, 2703,452f, 0.0f, -42,49853f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_4.f_1292);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_4, "sheriff_spawn_2", -4032,48f, 28,84756f, 2938,977f, 0.0f, -86,6069f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_4.f_1292);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_4, "sheriff_spawn_3", -3857,533f, 26,19585f, 3094,447f, 0.0f, -66,65485f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_4.f_1292);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_4, "sheriff_spawn_4", -3731,986f, 31,72861f, 2949,577f, 0.0f, -30,27116f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_4.f_1292);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_4, "sheriff_spawn_5", -4069,922f, 31,58713f, 3086,458f, 0.0f, -138,278f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_4.f_1292);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_4, "sheriff_spawn_6", -4026,865f, 26,60113f, 2858,064f, 0.0f, -368,7701f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_4.f_1292);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_4, "sheriff_spawn_7", -4012f, 22,68958f, 2663,902f, 0.0f, 21,98278f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_4.f_1292);
	*(&Local_4 + 1296) = { -4472.0f, 27,63686f, 2973,542f };
	*(&Local_4 + 1296 + 12) = { 0.0f, 158,4548f, 0.0f };
	Local_4.f_1320 = CREATE_POINT_IN_LAYOUT(Local_4, "secretSpot", -4472.0f, 27,63686f, 2973,542f, 0.0f, 158,4548f, 0.0f);
	*(&Local_4 + 1324) = { -3896,935f, 30,92446f, 2940,903f };
	*(&Local_4 + 1324 + 12) = { 0.0f, 87,50251f, 0.0f };
	Local_4.f_1348 = CREATE_POINT_IN_LAYOUT(Local_4, "S2_End", -3896,935f, 30,92446f, 2940,903f, 0.0f, 87,50251f, 0.0f);
	*(&Local_4 + 1352[06]) = { -3768,549f, 32,3289f, 2931,339f };
	*(&Local_4 + 1352[06] + 12) = { 0.0f, -81,11816f, 0.0f };
	*(&Local_4 + 1352[16]) = { -3768,379f, 32,33361f, 2934,468f };
	*(&Local_4 + 1352[16] + 12) = { 0.0f, -79,90369f, 0.0f };
	*(&Local_4 + 1404) = { -2213,148f, 16,25004f, 2628,07f };
	*(&Local_4 + 1404 + 12) = { 0.0f, -184,0029f, 0.0f };
	Local_4.f_1428 = CREATE_POINT_IN_LAYOUT(Local_4, "trainStart", -2213,148f, 16,25004f, 2628,07f, 0.0f, -184,0029f, 0.0f);
	*(&Local_4 + 1432) = { -3699,367f, 8,972512f, 3468,752f };
	*(&Local_4 + 1432 + 12) = { 0.0f, -184,0029f, 0.0f };
	Local_4.f_1456 = CREATE_POINT_IN_LAYOUT(Local_4, "trainEnd", -3699,367f, 8,972512f, 3468,752f, 0.0f, -184,0029f, 0.0f);
	Local_4.f_1460 = CREATE_GRINGO_IN_LAYOUT(Local_4, "npitch_hay", "npitch_hay", -3288,855f, 17,46142f, 2704f, 0.0f, -162,2986f, 0.0f);
}

void Function_532(int iParam0, int iParam1) //Position: 0x18E3D / 101949
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

bool Function_533() //Position: 0x18E86 / 102022
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_548(0))
		{
			return 0;
		}
		if (!Function_511())
		{
			return 0;
		}
		if (!Function_506(&bLocal_414))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_400))
		{
			bLocal_400 = Function_540(1, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_401))
		{
			bLocal_401 = Function_534(1, 0, 0, 0, 0, 0, 1, 0);
			if (Function_272(StackVal, StackVal, bLocal_401, *(&Global_3422[1340] + 52), 20.0f))
			{
				if (!Function_272(StackVal, StackVal, bLocal_401, *(&Local_4 + 548[56]), 2.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_401, *(&Local_4 + 548[56]), 1, true, 1);
				}
			}
			return 0;
		}
	}
	return 1;
}

bool Function_534(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x18F35 / 102197
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
	if (Global_3381 || Function_233(1))
	{
		Function_539(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_538())
		{
			return "";
		}
	}
	if (!Function_536())
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
		Function_345(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_345(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_345(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_345(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_535(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_535(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_488(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

var Function_535(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1928D / 103053
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

bool Function_536() //Position: 0x19328 / 103208
{
	if (Function_537() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_537() //Position: 0x1933E / 103230
{
	return Global_12976.f_152;
}

bool Function_538() //Position: 0x19349 / 103241
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_539(var uParam0, bool bParam1, bool bParam2) //Position: 0x19369 / 103273
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

bool Function_540(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x19396 / 103318
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
		Function_529(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_547(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_543(StackVal, uParam7);
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
		Function_542(bVar1, 0, 0, 0, 0);
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
		Function_541(bVar1, 0);
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

void Function_541(bool bParam0, bool bParam1) //Position: 0x19880 / 104576
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_542(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x198A0 / 104608
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

bool Function_543(int iParam0, bool bParam1) //Position: 0x198F4 / 104692
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_368(iParam0))
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
						Function_544(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_544(bool bParam0, bool bParam1) //Position: 0x19974 / 104820
{
	Function_546(bParam0);
	Function_545(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_545(bool bParam0) //Position: 0x1999A / 104858
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_546(bool bParam0) //Position: 0x199BE / 104894
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

bool Function_547(int iParam0, bool bParam1) //Position: 0x19A8D / 105101
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

bool Function_548(bool bParam0) //Position: 0x19B20 / 105248
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

void Function_549() //Position: 0x19B4E / 105294
{
	Function_512(&bLocal_414, "$/fragments/p_gen_currency01x", 0, 0);
	Function_512(&bLocal_414, "$/fragments/p_gen_package02x", 0, 0);
	Function_512(&bLocal_414, "$/fragments/p_gen_bottlemedicine02x", 0, 0);
	Function_512(&bLocal_414, "$/fragments/p_gen_map02x", 0, 0);
	Function_512(&bLocal_414, "graverobber", 5, 0);
	Function_512(&bLocal_414, "custom/graverobber", 8, 0);
	Function_512(&bLocal_414, "dead_ground_male", 5, 0);
	Function_512(&bLocal_414, "custom/dead_ground_male", 8, 0);
	Function_512(&bLocal_414, "graverobber_climbin", 5, 0);
	Function_512(&bLocal_414, "custom/graverobber_climbin", 8, 0);
	Function_514(&bLocal_414, 505, 2, 0);
	Function_514(&bLocal_414, 507, 2, 0);
	Function_514(&bLocal_414, 508, 2, 0);
	Function_514(&bLocal_414, 509, 2, 0);
	Function_514(&bLocal_414, 510, 2, 0);
	Function_514(&bLocal_414, 976, 2, 0);
	Function_514(&bLocal_414, 977, 2, 0);
	Function_514(&bLocal_414, 983, 2, 0);
	Function_514(&bLocal_414, 980, 2, 0);
	Function_514(&bLocal_414, 986, 2, 0);
	Function_512(&bLocal_414, "grave02", 10, 0);
	return;
}

void Function_550(int iParam0, bool bParam1) //Position: 0x19D40 / 105792
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_558(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_298(iParam0))
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
	if (!Function_298(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_557();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244();
	Function_556();
	Function_234("");
	Function_555(0);
	Function_554();
	Function_194();
	Function_193();
	ENABLE_JOURNAL_REPLAY(0);
	Function_553();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_317(0, 0x40400000);
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
	Function_552(13);
	Function_552(14);
	Function_552(25);
	Function_552(24);
	Function_552(12);
	Function_552(27);
	Function_552(26);
	Function_552(15);
	Function_551();
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

void Function_551() //Position: 0x1A164 / 106852
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

void Function_552(int iParam0) //Position: 0x1A1D8 / 106968
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_553() //Position: 0x1A1F8 / 107000
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

void Function_554() //Position: 0x1A235 / 107061
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_555(int iParam0) //Position: 0x1A249 / 107081
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

void Function_556() //Position: 0x1A27E / 107134
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_557() //Position: 0x1A290 / 107152
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_558(int iParam0, int iParam1) //Position: 0x1A299 / 107161
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
			Function_559(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_559(int iParam0) //Position: 0x1A31B / 107291
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

void Function_560() //Position: 0x1A369 / 107369
{
	return;
}

bool Function_561(int iParam0) //Position: 0x1A36F / 107375
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
			Function_562(iParam0, 1);
			return 1;
		}
	}
	Function_562(iParam0, 0);
	return 0;
}

void Function_562(int iParam0, bool bParam1) //Position: 0x1A3F6 / 107510
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

bool Function_563(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1A41A / 107546
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
		Function_562(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_582(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_581(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_581(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_567(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_562(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_566(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_565(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_566(&bVar17);
														strcpy(&Var18, "", 64);
														Function_564(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_234(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_565(StackVal, iParam2, bVar17);
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
	Function_562(iParam2, 0);
	return 0;
}

void Function_564(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1A7B3 / 108467
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

void Function_565(var uParam0, int iParam1, bool bParam2) //Position: 0x1A89E / 108702
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

void Function_566(bool bParam0) //Position: 0x1A914 / 108820
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_567(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1A936 / 108854
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
			return Function_578(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_571(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_578(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_568(iParam0, bVar2);
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
						bVar2 = Function_578(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_568(iParam0, bVar2);
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

var Function_568(int iParam0, bool bParam1) //Position: 0x1AA80 / 109184
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
				bParam1 = Function_570(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_569(16);
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
				bParam1 = Function_570(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_569(256);
			}
		}
	}
	return bParam1;
}

bool Function_569(int iParam0) //Position: 0x1ABB3 / 109491
{
	return 2 | iParam0;
}

int Function_570(int iParam0) //Position: 0x1ABBD / 109501
{
	return 4 | iParam0;
}

int Function_571(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1ABC7 / 109511
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
				iParam3 = Function_577(iParam0, iParam1, bParam4);
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
			return Function_569(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_572(iParam0, iParam1, 0, bParam4);
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
			return Function_569(16);
		}
	}
	return 0;
}

int Function_572(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1AC79 / 109689
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_576(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_575(iVar0, 3, 1, bParam3))
			{
				if (!Function_581(iParam0, 8, 1))
				{
					return Function_574(64, 1024, bParam2);
				}
			}
			return Function_573(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_575(iVar0, 2, 1, bParam3))
			{
				if (!Function_581(iParam0, 32, 1))
				{
					return Function_574(64, 1024, bParam2);
				}
			}
			return Function_573(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_575(iVar0, 1, 1, bParam3))
			{
				if (!Function_581(iParam0, 64, 1))
				{
					return Function_574(64, 1024, bParam2);
				}
			}
			return Function_573(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_575(iVar0, 3, 1, bParam3))
			{
				if (!Function_581(iParam0, 128, 1))
				{
					return Function_574(64, 1024, bParam2);
				}
			}
			return Function_573(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_575(iVar0, 1, 1, bParam3))
			{
				if (!Function_581(iParam0, 1024, 1))
				{
					return Function_574(64, 1024, bParam2);
				}
			}
			return Function_573(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_575(iVar0, 1, 1, bParam3))
			{
				if (!Function_581(iParam0, 1024, 1))
				{
					return Function_574(64, 1024, bParam2);
				}
			}
			return Function_573(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_573(int iParam0, int iParam1, bool bParam2) //Position: 0x1AE33 / 110131
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_574(int iParam0, int iParam1, bool bParam2) //Position: 0x1AE48 / 110152
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_575(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1AE5D / 110173
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_576(int iParam0) //Position: 0x1AE7A / 110202
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

int Function_577(var uParam0, int iParam1, bool bParam2) //Position: 0x1AEE9 / 110313
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_576(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_575(iVar0, 3, 1, bParam2))
			{
				if (!Function_581(uParam0, 8, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000009:
			if (Function_575(iVar0, 3, 1, bParam2))
			{
				if (!Function_581(uParam0, 8, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x0000006E:
			if (Function_575(iVar0, 2, 1, bParam2))
			{
				if (!Function_581(uParam0, 16, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x0000005B:
			if (Function_575(iVar0, 2, 1, bParam2))
			{
				if (!Function_581(uParam0, 32, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000031:
			if (Function_575(iVar0, 1, 1, bParam2))
			{
				if (!Function_581(uParam0, 64, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000007:
			if (Function_575(iVar0, 3, 1, bParam2))
			{
				if (!Function_581(uParam0, 128, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000008:
			if (Function_575(iVar0, 2, 1, bParam2))
			{
				if (!Function_581(uParam0, 256, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000014:
			if (Function_575(iVar0, 1, 1, bParam2))
			{
				if (!Function_581(uParam0, 512, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000018:
			if (Function_575(iVar0, 1, 1, bParam2))
			{
				if (!Function_581(uParam0, 512, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000057:
			if (Function_575(iVar0, 1, 1, bParam2))
			{
				if (!Function_581(uParam0, 1024, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000058:
			if (Function_575(iVar0, 1, 1, bParam2))
			{
				if (!Function_581(uParam0, 1024, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_578(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1B104 / 110852
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
						return Function_577(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_581(iParam0, 2, 1))
					{
						return Function_570(8);
					}
					return Function_569(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_581(iParam0, 4, 1))
					{
						return Function_570(16);
					}
					return Function_569(16);
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
							return Function_572(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_581(iParam0, 2, 1))
						{
							return Function_570(128);
						}
						return Function_569(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_581(iParam0, 4, 1))
						{
							return Function_570(256);
						}
						return Function_569(256);
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
						return Function_572(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_581(iParam0, 2, 1))
					{
						return Function_570(8);
					}
					return Function_569(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_581(iParam0, 4, 1))
					{
						return Function_570(16);
					}
					return Function_569(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_580(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_581(iParam0, 2, 1))
					{
						return Function_570(8);
					}
					return Function_569(8);
				}
				if (!Function_581(iParam0, 4, 1))
				{
					return Function_570(16);
				}
				return Function_569(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_572(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_579(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_569(128);
							}
							if (!Function_581(iParam0, 2, 1))
							{
								return Function_570(8);
							}
							return Function_569(8);
						}
						if (iParam4 == 2)
						{
							if (Function_579(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_569(256);
							}
							if (!Function_581(iParam0, 4, 1))
							{
								return Function_570(16);
							}
							return Function_569(16);
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

bool Function_579(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1B3C3 / 111555
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

int Function_580(int iParam0, var uParam1, bool bParam2) //Position: 0x1B47C / 111740
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_576(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_575(iVar0, 2, 1, bParam2))
			{
				if (!Function_581(iParam0, 16, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x0000005B:
			if (Function_575(iVar0, 2, 1, bParam2))
			{
				if (!Function_581(iParam0, 32, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000057:
			if (Function_575(iVar0, 1, 1, bParam2))
			{
				if (!Function_581(iParam0, 1024, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		case 0x00000058:
			if (Function_575(iVar0, 1, 1, bParam2))
			{
				if (!Function_581(iParam0, 1024, 1))
				{
					return Function_570(64);
				}
			}
			return Function_569(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_581(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B590 / 112016
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

int Function_582(int iParam0) //Position: 0x1B5B8 / 112056
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

bool Function_583(int iParam0) //Position: 0x1B5E9 / 112105
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_584(bool bParam0) //Position: 0x1B607 / 112135
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam0 == bLocal_400)
		{
			if (MEMORY_GET_IS_VISIBLE(bParam0, Global_34573))
			{
				Function_585();
			}
		}
	}
	return;
}

void Function_585() //Position: 0x1B62B / 112171
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Grave02_GunOnSeth", "Grave02_GunOnSeth", false, 2, 1, 0, 1);
		Function_220(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_586(var uParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x1B676 / 112246
{
	bool bVar0;
	
	if (Function_587(GET_WEAPON_IN_HAND(Global_34573)))
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
							if (Function_328(*uParam0, Global_34573, 50.0f))
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

bool Function_587(bool bParam0) //Position: 0x1B73E / 112446
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

void Function_588() //Position: 0x1B784 / 112516
{
	if (IS_ACTOR_ALIVE((*&Local_4 + 396)[02]))
	{
		if (!DECOR_CHECK_EXIST((*&Local_4 + 396)[02], "bSpoke"))
		{
			if (Function_328((*&Local_4 + 396)[02], Global_34573, 25.0f))
			{
				DECOR_SET_BOOL((*&Local_4 + 396)[02], "bSpoke", true);
				SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 396)[02], "Grave02_TruAFarm", Global_34573, 1, 0, 0, 0, 0);
			}
		}
	}
	return;
}

void Function_589(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1B802 / 112642
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

