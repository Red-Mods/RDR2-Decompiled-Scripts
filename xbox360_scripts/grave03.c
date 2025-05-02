//Decompiled with MagicRDR v1.0
//Function Count : 516
//Statics Count : 555
//Natives Count : 722
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	struct<1189> Local_13 = { 0, 1, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_311 = 0;
	fLocal_429 = 2.0f;
	iLocal_445 = 0;
	iLocal_447 = 0;
	Local_313 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_320 = 99;
	iLocal_321 = 6;
	Local_322 = 1000;
	while (Function_268())
	{
		Function_221();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x50 / 80
{
	DISABLE_CHILD_SECTOR("sp_grave03x");
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	Function_220(Local_13.f_236);
	Function_220(Local_13.f_260);
	Function_220(Local_13.f_300);
	Function_220(Local_13.f_332);
	Function_220(Local_13.f_404);
	if (IS_OBJECT_VALID(Local_13.f_1188))
	{
		DESTROY_OBJECT(Local_13.f_1188);
	}
	if (IS_OBJECT_VALID(bLocal_407))
	{
		DESTROY_OBJECT(bLocal_407);
	}
	if (IS_OBJECTSET_VALID(bLocal_409))
	{
		DESTROY_OBJECTSET(bLocal_409);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_339);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_340);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_339, false);
	RESET_ACTOR_GAITS(bLocal_339, 0);
	SET_CRIPPLE_ENABLE(bLocal_339, 0);
	MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bLocal_339);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_339);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_339, true);
	Function_218(1, 0, 1);
	Function_217(bLocal_312);
	Function_217(Local_13);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	Function_216(&(Global_29008[Global_30658[0]]), 256);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_215();
	Function_188(bLocal_331, 1, 1, 1, 1, 1, 1, 1);
	Function_184(&bLocal_353);
	Function_180();
	if (IS_ITERATOR_VALID(bLocal_378))
	{
		DESTROY_ITERATOR(bLocal_378);
	}
	RELEASE_LAYOUT_REF(bLocal_312);
	if (bLocal_329)
	{
		Function_170(Global_30658[0], &Global_6501, &Global_7490, 1);
		Function_27(Local_313, 1, 1, 1, 0);
	}
	else if (bLocal_331)
	{
		Function_24(1, 0, 0, 1, 1);
		Function_20(Local_313);
		TERMINATE_THIS_SCRIPT();
	}
	else
	{
		Function_24(1, 0, 0, 1, 1);
		Function_2(Local_313);
		TERMINATE_THIS_SCRIPT();
	}
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
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1EF / 495
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
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
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Function_7(bParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x2C2 / 706
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x395 / 917
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

struct<16> Function_12(int iParam0) //Position: 0x4B9 / 1209
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x4DE / 1246
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x4FE / 1278
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x515 / 1301
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x530 / 1328
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x777 / 1911
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x7A0 / 1952
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

bool Function_19(int iParam0) //Position: 0x7C4 / 1988
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x7D9 / 2009
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x7F7 / 2039
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

struct<16> Function_22(int iParam0) //Position: 0x89D / 2205
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x8C7 / 2247
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

int Function_24(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB1D / 2845
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
		Function_26(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_25(StackVal);
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

void Function_25(bool bParam0) //Position: 0xE3B / 3643
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

void Function_26(bool bParam0) //Position: 0xE67 / 3687
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_27(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xE7C / 3708
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
		Function_165(&(Global_3422[iVar240]));
		Function_164(4194304);
		if (bParam3)
		{
			Function_117(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_111(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_117(iVar2, &uVar0, 0);
		}
		bVar1 = Function_110();
		if (bParam1)
		{
			Function_94(iVar2, bParam0, bVar1);
			Function_93();
		}
	}
	Function_40(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_32(iVar2, bVar1);
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
	Function_28();
}

void Function_28() //Position: 0xF69 / 3945
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_29(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

bool Function_29(int iParam0, bool bParam1) //Position: 0xF99 / 3993
{
	int iVar0;
	
	iVar0 = Function_30(iParam0);
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

int Function_30(int iParam0) //Position: 0xFD6 / 4054
{
	if (!Function_31(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_31(int iParam0) //Position: 0xFF0 / 4080
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_32(int iParam0, bool bParam1) //Position: 0x1006 / 4102
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_32(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_32(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_32(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_32(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_32(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_32(57, 0);
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

void Function_33(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x12FD / 4861
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_35(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_34(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_34(char* cParam0, int iParam1) //Position: 0x1369 / 4969
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

bool Function_35(bool bParam0, var uParam1, int iParam2) //Position: 0x13A0 / 5024
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
		if (Function_38(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_37(uVar0))
		{
			case 0x00000002:
				if (!Function_36(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_36(var uParam0, int iParam1) //Position: 0x1418 / 5144
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_37(char* cParam0) //Position: 0x142B / 5163
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

int Function_38(int iParam0) //Position: 0x14CC / 5324
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_39(&bVar1, 2147483648);
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

void Function_39(bool bParam0, bool bParam1) //Position: 0x1509 / 5385
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_40(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x151C / 5404
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
		Function_89();
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
			Function_83(bParam0);
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
			Function_44(1);
			Function_42(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_41(bParam0, &Var14);
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

void Function_41(int iParam0, int iParam1) //Position: 0x172E / 5934
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x1768 / 5992
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_43())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_43() //Position: 0x17AA / 6058
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_44(bool bParam0) //Position: 0x17B3 / 6067
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_75();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_45();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_39(&Global_63095, 1);
		Function_39(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_45() //Position: 0x1804 / 6148
{
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_70();
	Function_70();
	Function_53();
	Function_53();
	if (!Function_43())
	{
		Function_50();
		Function_49();
		Function_48();
		Function_47();
	}
	Function_46();
	return;
}

void Function_46() //Position: 0x1837 / 6199
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

void Function_47() //Position: 0x193D / 6461
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

void Function_48() //Position: 0x1970 / 6512
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

void Function_49() //Position: 0x1AFE / 6910
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

void Function_50() //Position: 0x1CB2 / 7346
{
	Function_51(&Global_28260, 1, 0);
	return;
}

void Function_51(int iParam0, bool bParam1, var uParam2) //Position: 0x1CC0 / 7360
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
	
	bVar0 = Function_52();
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

var Function_52() //Position: 0x1EB1 / 7857
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_53() //Position: 0x1EC6 / 7878
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
				iVar2 = ((Function_69((50 + iVar4)) + Function_69((183 + iVar4))) + Function_69((90 + iVar4)));
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
	Function_54(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F61 / 8033
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
		Function_68(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_67(iParam0);
	if (bParam2)
	{
		Function_55(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_55(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x21FC / 8700
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_66(390))), 32);
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
					bVar19 = (Function_65(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_65(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_63(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_60(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_57(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_56(), &Var9);
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

var Function_56() //Position: 0x2829 / 10281
{
	int iVar0;
	
	return iVar0;
}

var Function_57(int iParam0) //Position: 0x2831 / 10289
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_58(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2842 / 10306
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_59(char* cParam0, char* cParam1) //Position: 0x2937 / 10551
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_60(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2950 / 10576
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_62(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_61(Function_62(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_61(int iParam0, int iParam1) //Position: 0x29B5 / 10677
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_62(int iParam0, bool bParam1) //Position: 0x29C7 / 10695
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_63(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x29D9 / 10713
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
	if (((Function_64(iParam0) != 19 || Function_64(iParam0) != 17) || Function_64(iParam0) != 10) || Function_64(iParam0) != 9)
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

int Function_64(int iParam0) //Position: 0x2B09 / 11017
{
	return Global_35278[iParam020].f_48;
}

float Function_65(int iParam0) //Position: 0x2B18 / 11032
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_66(int iParam0) //Position: 0x2B51 / 11089
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_67(int iParam0) //Position: 0x2B8E / 11150
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

int Function_68(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D28 / 11560
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

int Function_69(bool bParam0) //Position: 0x2F42 / 12098
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_70() //Position: 0x2F83 / 12163
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
		iVar2 = ((Function_69((50 + iVar3) + 15) + Function_69((183 + iVar3) + 15)) + Function_69((90 + iVar3) + 15));
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
	Function_54(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_71() //Position: 0x300C / 12300
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
			iVar2 = ((Function_69((50 + iVar3) + 8) + Function_69((183 + iVar3) + 8)) + Function_69((90 + iVar3) + 8));
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
	Function_54(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x30A3 / 12451
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
		iVar2 = ((Function_69((50 + iVar3)) + Function_69((183 + iVar3))) + Function_69((90 + iVar3)));
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
	Function_54(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_73() //Position: 0x3122 / 12578
{
	Function_74(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_54(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_74(int iParam0, bool bParam1, int iParam2) //Position: 0x3148 / 12616
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
	Function_68(iParam0, bParam1, 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_55(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_75() //Position: 0x3352 / 13138
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_77(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_77(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_76(StackVal, StackVal, vVar0))
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

bool Function_76(vector3 vParam0) //Position: 0x33F3 / 13299
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_77(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x340B / 13323
{
	int iVar0;
	
	iVar0 = Function_81(uParam2, uParam3);
	if (Function_80(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_79(&Global_63095, 1);
			Function_39(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_79(&Global_63095, 2);
			Function_39(&Global_63095, 1);
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
		Function_79(&Global_63095, 2);
		Function_39(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_78();
	return StackVal, StackVal, Function_78();
}

vector3 Function_78() //Position: 0x34F2 / 13554
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_79(bool bParam0, bool bParam1) //Position: 0x34FB / 13563
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_80(int iParam0) //Position: 0x350A / 13578
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_81(bool bParam0, bool bParam1) //Position: 0x3520 / 13600
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
				fVar2 = Function_82(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_82(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_80(bVar0) && !bParam1)
	{
		bVar0 = Function_81(bParam0, 1);
	}
	return bVar0;
}

float Function_82(vector3 vParam0, vector3 vParam3) //Position: 0x35E7 / 13799
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_83(bool bParam0) //Position: 0x3604 / 13828
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
				Function_88(12, 1, 0, 0);
				Function_87(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_88(13, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_88(14, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_88(15, 1, 0, 0);
				Function_87(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_88(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_86(bParam0) == 1)
					{
						iVar0 = Function_85(bParam0);
						if (Function_84(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_87(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_87(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_87(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_87(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_87(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_87(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_87(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_87(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_87(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_87(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_87(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_87(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_87(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_87(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_87(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_87(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_87(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_87(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_87(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_87(4, 19);
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
								Function_88(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_88(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_88(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_85(bParam0) == 0)
			{
				if (Function_86(bParam0) == 1)
				{
					Function_88(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_84(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_87(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_87(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_87(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_87(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_87(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_87(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_87(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_87(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_86(bParam0) == 1)
			{
				Function_88(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_88(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_87(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_87(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_87(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_88(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_87(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_87(6, 9);
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

bool Function_84(int iParam0) //Position: 0x3AE0 / 15072
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_85(bool bParam0) //Position: 0x3AF6 / 15094
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_86(bool bParam0) //Position: 0x3B15 / 15125
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_87(int iParam0, bool bParam1) //Position: 0x3B2F / 15151
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

int Function_88(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3B96 / 15254
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
	Function_68(iParam0, TO_FLOAT(bParam1), 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_55(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_89() //Position: 0x3DB6 / 15798
{
	int iVar0;
	int iVar1;
	
	if (!Function_31(Global_6269))
	{
		return;
	}
	iVar0 = Function_69(24);
	iVar1 = Function_30(Global_6269);
	if (!Function_31(iVar0) && Function_92(iVar1) < 0)
	{
		Function_54(24, Global_6269, 0);
		Function_90(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_92(Function_30(iVar0)))
	{
		Function_54(24, Global_6269, 0);
		Function_90(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_90(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3E36 / 15926
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
		Function_91(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_91(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4195 / 16789
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

int Function_92(int iParam0) //Position: 0x4218 / 16920
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_93() //Position: 0x4232 / 16946
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

void Function_94(int iParam0, int iParam1, bool bParam2) //Position: 0x4260 / 16992
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
	
	if (!Function_31(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_109(iParam0);
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
				bVar0 = (Function_69(42) - Global_34165.f_116);
				bVar1 = (Function_69(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_66(49)) - Global_34165.f_124);
				bVar3 = (Function_69(49) - Global_34165.f_128);
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
				bVar4 = (Function_69(355) - Global_34165.f_116);
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
		iVar15 = Function_108(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_95(50, 1, 0);
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

void Function_95(int iParam0, bool bParam1, bool bParam2) //Position: 0x44FC / 17660
{
	int iVar0;
	bool bVar1;
	
	if (Function_107(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_69(3);
	Function_104();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_102(3, bVar1);
		if (!bParam2)
		{
			if (!Function_36(Global_76848, 4))
			{
				Function_33(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_88(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_65(3));
	iVar0 = Function_69(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_97(4, Function_101(Global_12976.f_156), 1);
				Function_96(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_97(4, Function_101(Global_12976.f_156), 1);
				Function_96(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_97(4, Function_101(Global_12976.f_156), 1);
				Function_96(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_97(4, Function_101(Global_12976.f_156), 1);
				Function_96(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_97(4, Function_101(Global_12976.f_156), 1);
				Function_96(Global_12976.f_152, Global_12976.f_156);
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

void Function_96(int iParam0, int iParam1) //Position: 0x46BF / 18111
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

int Function_97(int iParam0, char* cParam1, bool bParam2) //Position: 0x491D / 18717
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
	Function_90(iParam0, cParam1, 0, 1);
	iVar1 = Function_98();
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

int Function_98() //Position: 0x4AA2 / 19106
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
	Function_99();
	return 0;
}

void Function_99() //Position: 0x4B41 / 19265
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
		Function_100(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_100(int iParam0) //Position: 0x4BF0 / 19440
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

var Function_101(int iParam0) //Position: 0x4C4E / 19534
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

int Function_102(int iParam0, bool bParam1) //Position: 0x4CDD / 19677
{
	bool bVar0;
	int iVar1;
	
	Function_88(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_103(iParam0, 4294967295);
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
	iVar1 = Function_98();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_103(int iParam0, int iParam1) //Position: 0x4E7A / 20090
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

void Function_104() //Position: 0x4EBB / 20155
{
	Function_106(3, 0.0f);
	Function_105(3, 10000.0f);
	return;
}

int Function_105(int iParam0, int iParam1) //Position: 0x4ED1 / 20177
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_106(int iParam0, int iParam1) //Position: 0x4F11 / 20241
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_107(int iParam0) //Position: 0x4F51 / 20305
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_108(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4F60 / 20320
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

int Function_109(int iParam0) //Position: 0x5128 / 20776
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

var Function_110() //Position: 0x51BD / 20925
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_111(int iParam0) //Position: 0x51E2 / 20962
{
	if (!Function_31(iParam0))
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
			Function_95(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_95(25, 1, 0);
			Function_116(1, 1);
			break;
		
		case 0x00000015:
			Function_116(50, 1);
			Function_95(250, 1, 0);
			Function_112(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_95(75, 1, 0);
			Function_112(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_95(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_116(50, 1);
			Function_95(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_116(5, 1);
			Function_112(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_95(75, 1, 0);
			Function_112(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_116(5, 1);
			Function_95(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_95(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_112(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_116(25, 1);
			Function_95(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_116(10, 1);
			Function_95(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_95(50, 1, 0);
			Function_112(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_95(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_95(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_112(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_116(20, 1);
			Function_95(75, 1, 0);
			Function_112(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_116(25, 1);
			Function_95(150, 1, 0);
			Function_112(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_116(10, 1);
			Function_95(150, 1, 0);
			Function_112(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_95(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_112(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_112(100, 1, 0);
			Function_116(5, 1);
			break;
		
		case 0x0000000F:
			Function_116(3, 1);
			Function_95(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_112(125, 1, 0);
			Function_95(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_116(50, 1);
			Function_95(100, 1, 0);
			Function_112(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_116(50, 1);
			Function_95(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_116(75, 1);
			Function_95(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_95(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_95(75, 1, 0);
			Function_112(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_95(250, 1, 0);
			Function_112(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_95(75, 1, 0);
			Function_112(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_95(200, 1, 0);
			Function_112(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_95(75, 1, 0);
			Function_112(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_95(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_116(50, 1);
			Function_95(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_116(100, 1);
			Function_95(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_95(200, 1, 0);
			Function_112(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_95(300, 1, 0);
			Function_112(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_95(300, 1, 0);
			Function_112(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_95(300, 1, 0);
			Function_112(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_95(500, 1, 0);
			Function_112(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_95(150, 1, 0);
			Function_112(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_112(25, 1, 0);
			Function_116(100, 1);
			break;
		
		case 0x0000002A:
			Function_95(150, 1, 0);
			Function_112(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_112(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_112(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_112(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_112(150, 1, 0);
			Function_116(100, 1);
			break;
		
		case 0x00000035:
			Function_112(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_112(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_112(150, 1, 0);
			Function_116(100, 1);
			break;
		
		case 0x00000032:
			Function_112(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_112(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_112(int iParam0, bool bParam1, bool bParam2) //Position: 0x569D / 22173
{
	int iVar0;
	bool bVar1;
	
	if (Function_107(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_69(1);
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
			Function_102(1, bVar1);
			if (!bParam2)
			{
				if (!Function_36(Global_76848, 1))
				{
					Function_33(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_115(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_36(Global_76848, 2))
				{
					Function_33(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_88(1, bVar1, 0, 0);
	}
	else
	{
		Function_114(1, (4294967295 * bVar1), 0);
	}
	if (Function_69(1) <= 4294962296)
	{
		Function_54(1, 4294962296, 0);
	}
	else if (Function_69(1) >= 5000)
	{
		Function_54(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_65(1));
	iVar0 = Function_69(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_97(2, Function_113(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_97(2, Function_113(Global_12976.f_152), 0);
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
				Function_97(2, Function_113(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_97(2, Function_113(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_97(2, Function_113(Global_12976.f_152), 1);
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
				Function_97(2, Function_113(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_97(2, Function_113(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_97(2, Function_113(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_97(2, Function_113(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_97(2, Function_113(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_97(2, Function_113(Global_12976.f_152), 1);
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
				Function_97(2, Function_113(Global_12976.f_152), 0);
			}
			break;
	}
	Function_96(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_113(int iParam0) //Position: 0x59B2 / 22962
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

int Function_114(int iParam0, bool bParam1, int iParam2) //Position: 0x5A55 / 23125
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
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_55(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_115(int iParam0, bool bParam1) //Position: 0x5C50 / 23632
{
	bool bVar0;
	int iVar1;
	
	Function_114(iParam0, bParam1, 0);
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
	iVar1 = Function_103(iParam0, 4294967295);
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
	iVar1 = Function_98();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_116(bool bParam0, bool bParam1) //Position: 0x5DEC / 24044
{
	bool bVar0;
	
	bVar0 = Function_69(0);
	if ((Function_69(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_88(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_69(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_88(597, bParam0, 0, 0);
	}
	if ((Function_69(597) + Function_69(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_117(int iParam0, var uParam1, bool bParam2) //Position: 0x5EB7 / 24247
{
	struct<4> Var0;
	
	if (!Function_31(iParam0))
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
			Function_162(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_159(Global_30640[0]);
			Function_159(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_157(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_159(Global_30668[0]);
			Function_148(0);
			Function_146(2, 1);
			Function_146(0, 1);
			Function_146(1, 1);
			break;
		
		case 0x00000003:
			Function_159(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_159(Global_30668[0]);
			Function_159(Global_30640[0]);
			Function_144(0, 1);
			Function_144(15, 1);
			Function_144(9, 1);
			Function_144(12, 1);
			Function_144(16, 1);
			Function_146(3, 1);
			break;
		
		case 0x00000005:
			Function_159(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_157(21, bParam2, 4);
			Function_159(Global_30668[0]);
			Function_146(39, 1);
			break;
		
		case 0x00000007:
			Function_159(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_159(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_143(4))
					{
						Function_133(4, 0, 0, 1);
					}
				}
			}
			Function_159(Global_30640[0]);
			Function_159(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_159(Global_30640[0]);
			Function_159(Global_30668[2]);
			Function_132(&(Global_29008[Global_30668[2]]), 32768);
			Function_216(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_157(9, bParam2, 4);
			Function_159(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_159(Global_30640[0]);
			Function_159(Global_30658[0]);
			Function_132(&(Global_29008[Global_30658[0]]), 32768);
			Function_216(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_159(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_159(Global_30640[0]);
			Function_159(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_159(Global_30640[1]);
			Function_159(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_159(Global_30679[0]);
			Function_159(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_159(Global_30658[5]);
			Function_159(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_157(21, bParam2, 4);
			Function_159(Global_30640[4]);
			Function_159(Global_30658[4]);
			Function_131(&Global_76847, 0x2000000);
			Function_131(&Global_76847, 0x4000000);
			Function_131(&Global_76847, 4096);
			Function_131(&Global_76847, 8);
			Function_131(&Global_76847, 8388608);
			Function_131(&Global_76847, 524288);
			Function_131(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_159(Global_30640[4]);
			Function_159(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_216(&(Global_29008[Global_30640[4]]), 256);
			Function_159(Global_30640[4]);
			Function_159(Global_30658[0]);
			Function_132(&(Global_29008[Global_30658[0]]), 32768);
			Function_216(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_159(Global_30640[0]);
			Function_159(Global_30640[5]);
			Function_157(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_159(Global_30658[3]);
			Function_132(&(Global_29008[Global_30658[3]]), 32768);
			Function_216(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_157(9, bParam2, 4);
			Function_159(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_132(&(Global_29008[Global_30679[1]]), 32768);
			Function_159(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_157(12, bParam2, 4);
			Function_216(&(Global_29008[Global_30679[1]]), 256);
			Function_159(Global_30668[3]);
			Function_159(Global_30693[0]);
			Function_159(Global_30685[0]);
			Function_148(4);
			Function_144(13, 1);
			Function_144(1, 1);
			Function_144(18, 1);
			Function_146(34, 1);
			Function_146(44, 1);
			Function_146(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_157(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_159(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_159(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_159(Global_30693[0]);
			Function_159(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_159(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_159(Global_30685[0]);
			Function_159(Global_30693[0]);
			Function_159(Global_30693[1]);
			Function_159(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_157(23, bParam2, 3);
			Function_144(23, 1);
			Function_159(Global_30685[0]);
			Function_159(Global_30685[2]);
			Function_132(&(Global_29008[Global_30685[2]]), 32768);
			Function_216(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_157(19, bParam2, 4);
			Function_159(Global_30685[0]);
			Function_159(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_157(24, bParam2, 3);
			Function_144(24, 1);
			Function_159(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_159(Global_30685[0]);
			Function_159(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_159(Global_30693[12]);
			Function_159(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_159(Global_30693[12]);
			Function_159(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_157(25, bParam2, 10);
			Function_159(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_159(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_159(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_157(13, bParam2, 4);
			Function_159(Global_30693[2]);
			Function_159(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_143(8))
				{
					Function_133(8, 0, 0, 1);
				}
			}
			Function_159(Global_30685[0]);
			Function_148(9);
			Function_144(7, 1);
			Function_144(11, 1);
			Function_144(3, 1);
			Function_144(20, 1);
			Function_146(57, 1);
			break;
		
		case 0x0000002A:
			Function_157(2, bParam2, 4);
			Function_159(Global_30717[0]);
			Function_159(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_159(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_159(Global_30717[0]);
			Function_159(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_159(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_159(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_159(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_157(17, bParam2, 4);
			Function_159(Global_30723[0]);
			Function_159(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_129(15))
				{
					Function_124(15, 0, 1);
				}
			}
			Function_216(&(Global_29008[Global_30717[1]]), 256);
			Function_148(11);
			Function_159(Global_30717[1]);
			Function_159(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_159(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_159(Global_30717[1]);
			Function_159(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_159(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_159(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_159(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_159(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_159(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_159(Global_30717[1]);
			Function_118(11);
			Function_148(12);
			Global_16537[1121].f_40 = 0;
			Function_146(56, 1);
			if (!bParam2)
			{
				if (!Function_143(9))
				{
					Function_133(9, 0, 0, 0);
				}
				if (!Function_143(10))
				{
					Function_133(10, 0, 0, 1);
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

void Function_118(int iParam0) //Position: 0x67A7 / 26535
{
	bool bVar0;
	
	if (!Function_80(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_123(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_123(Global_16537[iParam021].f_72, 0);
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
			Function_119(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_119(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6916 / 26902
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
		Function_121(Function_122(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_121(Function_122(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_121(StackVal);
				vVar1 = { StackVal, StackVal, Function_121(StackVal) };
				if (Function_120(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_120(vector3 vParam0, vector3 vParam3) //Position: 0x6A1C / 27164
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_121(int iParam0) //Position: 0x6A49 / 27209
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

var Function_122(vector3 vParam0) //Position: 0x6AA0 / 27296
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

void Function_123(bool bParam0, bool bParam1) //Position: 0x6AEE / 27374
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

void Function_124(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6B42 / 27458
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_128(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_129(bParam0))
	{
		if (!Function_143(bParam0))
		{
			Function_133(bParam0, 1, 0, 0);
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
		Function_88(457, 1, 0, 0);
		Function_127(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_126(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 0);
			}
			else
			{
				Function_125();
			}
		}
	}
	return;
}

void Function_125() //Position: 0x6CE0 / 27872
{
	return;
}

bool Function_126(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6CE6 / 27878
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

void Function_127(bool bParam0, int iParam1) //Position: 0x6D8A / 28042
{
	if (!Function_128(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_128(int iParam0) //Position: 0x6DDF / 28127
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_129(int iParam0) //Position: 0x6DF5 / 28149
{
	if (!Function_128(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_130(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_130(int iParam0, int iParam1) //Position: 0x6E46 / 28230
{
	int iVar0;
	
	if (!Function_128(iParam0))
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

void Function_131(var uParam0, int iParam1) //Position: 0x6E73 / 28275
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_132(var uParam0, int iParam1) //Position: 0x6E82 / 28290
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_133(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6E91 / 28305
{
	struct<8> Var0;
	
	if (!Function_128(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_142(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_143(bParam0))
	{
		Function_88(456, 1, 0, 0);
		Function_127(bParam0, 2);
		if (bParam2)
		{
			if (!Function_126(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 5);
			}
			else
			{
				Function_125();
			}
		}
		Function_136(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_135() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_135() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_134(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_36(Global_76846, 2))
		{
			Function_33(Global_34573, 2, 1, 0);
		}
	}
}

void Function_134(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6FDB / 28635
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

bool Function_135() //Position: 0x7026 / 28710
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_136(bool bParam0) //Position: 0x7053 / 28755
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
			if (Function_140(bParam0, Function_141(bVar24)))
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
			if (Function_140(bParam0, Function_141(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_139(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_138(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_137(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_137(int iParam0) //Position: 0x7203 / 29187
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_128(iParam0))
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

void Function_138(bool bParam0, bool bParam1) //Position: 0x725A / 29274
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

var Function_139(int iParam0) //Position: 0x727F / 29311
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_128(iParam0))
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

bool Function_140(bool bParam0, bool bParam1) //Position: 0x72D5 / 29397
{
	int iVar0;
	
	if (!Function_128(bParam0))
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

bool Function_141(bool bParam0) //Position: 0x7334 / 29492
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_142(int iParam0) //Position: 0x7340 / 29504
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_143(int iParam0) //Position: 0x735C / 29532
{
	if (!Function_128(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_130(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_144(int iParam0, int iParam1) //Position: 0x73AE / 29614
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_145(iParam0, iParam1);
	Function_33(Global_34573, 1, 4, 1);
	return 1;
}

int Function_145(int iParam0, int iParam1) //Position: 0x7421 / 29729
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_146(int iParam0, int iParam1) //Position: 0x747D / 29821
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_147(iParam0, iParam1);
	Function_33(Global_34573, 1, 4, 1);
	return 1;
}

int Function_147(int iParam0, int iParam1) //Position: 0x74EE / 29934
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_148(int iParam0) //Position: 0x7548 / 30024
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_80(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_156(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_156(Global_16537[iParam021].f_72, 0);
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
			Function_88(468, 1, 0, 0);
			Function_87(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_134("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_119(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_133(14, 1, 0, 0);
				Function_149(14, 1, 0, 0, 0);
			}
			if (!Function_126(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 6);
			}
			else
			{
				Function_125();
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
			Function_134("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_88(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_87(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_149(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x77F4 / 30708
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_128(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_142(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_130(bParam0, 2))
	{
		Function_88(456, 1, 0, 0);
		Function_127(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_134(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_140(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_127(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_126(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 0);
			}
			else
			{
				Function_125();
			}
		}
		Function_136(bParam0);
		if (StackVal && !Function_155(((((!Function_135() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_155((((Function_135() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_36(Global_76846, 2))
		{
			Function_33(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_151();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_150(3, bParam1);
				break;
			
			case 0x00000005:
				Function_150(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_150(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_150(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_150(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_150(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_87(2, 24);
				break;
			
			case 0x00000003:
				Function_87(2, 25);
				break;
			
			case 0x0000000F:
				Function_87(2, 26);
				break;
			
			case 0x0000000D:
				Function_87(2, 27);
				break;
			
			case 0x0000000E:
				Function_87(2, 28);
				break;
			}
	}
}

void Function_150(int iParam0, bool bParam1) //Position: 0x7A83 / 31363
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

void Function_151() //Position: 0x7AE2 / 31458
{
	if (Function_128(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_154(Global_28180);
			Global_28180.f_8 = Function_152(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_154(Global_28180);
			Global_28180.f_8 = Function_152(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_152(int iParam0, int iParam1) //Position: 0x7B5D / 31581
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
					if (Function_29(6, 0) || Function_29(12, 0))
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
					if (Function_153(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_29(5, 0))
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
					if (Function_153(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_153(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_153(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_153(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_29(26, 0))
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
					if (Function_153(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_153(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_153(27) && iVar18)
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
					if (Function_153(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_153(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_153(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_153(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_29(17, 0) && iVar15)
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
					if (Function_153(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_29(6, 0) && Function_153(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_153(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_29(9, 0) && Function_153(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_153(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_29(8, 0) && iVar19)
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
	if (Function_76(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_76(StackVal, StackVal, vVar3))
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
	if (!Function_76(StackVal, StackVal, vVar3))
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

int Function_153(int iParam0) //Position: 0x8755 / 34645
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_154(int iParam0) //Position: 0x876A / 34666
{
	int iVar0;
	int iVar1;
	
	if (!Function_128(iParam0))
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

bool Function_155(bool bParam0, bool bParam1) //Position: 0x87B9 / 34745
{
	return (bParam0 && bParam1) == 0;
}

void Function_156(bool bParam0, bool bParam1) //Position: 0x87C6 / 34758
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

void Function_157(bool bParam0, bool bParam1, int iParam2) //Position: 0x8817 / 34839
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_158(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_162(bParam0, 0, 0);
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

bool Function_158(int iParam0, int iParam1) //Position: 0x8885 / 34949
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_159(int iParam0) //Position: 0x8898 / 34968
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_161(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_132(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_88(473, 1, 0, 0);
		iVar0 = Function_160(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_88(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_88(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_88(476, 1, 0, 0);
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
		Function_87(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_87(7, 30);
	}
	if (Function_65(473) <= Function_66(473))
	{
		if (!Function_43())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_160(int iParam0) //Position: 0x8997 / 35223
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_84(iParam0))
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

bool Function_161(var uParam0, int iParam1) //Position: 0x89EF / 35311
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x8A0B / 35339
{
	if (!Function_163(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_52(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_52(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_52(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_163(int iParam0) //Position: 0x8A62 / 35426
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_164(bool bParam0) //Position: 0x8A74 / 35444
{
	bool bVar0;
	
	if (Function_155(bParam0, 1) && Function_155(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_165(int iParam0) //Position: 0x8AA8 / 35496
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
			Function_166(4, 0, 0);
		}
	}
	return;
}

void Function_166(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8B0F / 35599
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
		Function_167(Global_16524, bVar0, 1);
	}
	return;
}

void Function_167(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8BEC / 35820
{
	int iVar0;
	
	Function_169(bParam0);
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
	Function_168();
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

void Function_168() //Position: 0x8D65 / 36197
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_169(int iParam0) //Position: 0x8D71 / 36209
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

void Function_170(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x8DB7 / 36279
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_43())
	{
		return;
	}
	Function_132(&(Global_29008[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= *uParam1)
	{
		iVar1 = iVar0;
		if (Function_179(uParam1[iVar02], 1))
		{
			Function_176(uParam1, uParam2, iVar1, 0);
		}
		Function_174(uParam1, uParam2, iVar1, 0);
		Function_171(uParam1[iVar02], uParam2[iVar03], 0);
		bVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&bVar2, iParam3, 0, false, 0);
		uParam1[iVar02]->f_4 = bVar2;
		iVar0++;
	}
}

void Function_171(var uParam0, var uParam1, int iParam2) //Position: 0x8E37 / 36407
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (iParam2 == 0)
	{
		ADD_TIME(&bVar0, Function_173(Global_29007), 0, false, 0);
	}
	else
	{
		ADD_TIME(&bVar0, iParam2, 0, false, 0);
	}
	uParam0->f_4 = bVar0;
	Function_172(uParam0, 4);
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x8E8A / 36490
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_173(int iParam0) //Position: 0x8E99 / 36505
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

void Function_174(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8ECD / 36557
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_172(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_173(Global_29007), Function_175(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_179(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_179(uParam0[iParam22], 1) && !bParam3)
	{
		Function_172(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_173(Global_29007), Function_175(Global_29007), false, 0);
	}
}

int Function_175(int iParam0) //Position: 0x901C / 36892
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

void Function_176(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x9047 / 36935
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_179(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_179(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_179(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_178(uParam0[iVar02], 8);
	}
	Function_178(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_177(StackVal);
	if (bParam3)
	{
		Function_174(uParam0, uParam1, uParam2, 0);
	}
}

int Function_177(bool bParam0) //Position: 0x90E1 / 37089
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

void Function_178(var uParam0, int iParam1) //Position: 0x917B / 37243
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_179(int iParam0, int iParam1) //Position: 0x9192 / 37266
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_180() //Position: 0x91AE / 37294
{
	Function_183();
	Function_182();
	Function_181();
	return;
}

void Function_181() //Position: 0x91BD / 37309
{
	Function_184(&Local_13 + 4);
	Function_184(&Local_13 + 20);
	Function_184(&Local_13 + 120);
	RELEASE_LAYOUT_REF(Local_13);
	return;
}

void Function_182() //Position: 0x91DD / 37341
{
	Function_184(&Local_13 + 120);
	return;
}

void Function_183() //Position: 0x91EA / 37354
{
	Function_184(&Local_13 + 20);
	return;
}

void Function_184(bool bParam0) //Position: 0x91F7 / 37367
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_185(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_185(var uParam0, int iParam1) //Position: 0x921D / 37405
{
	if (Function_187(uParam0[iParam13], 4))
	{
		if (Function_187(uParam0[iParam13], 1))
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
			Function_186(uParam0[iParam13], 1);
			Function_186(uParam0[iParam13], 2);
			Function_186(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_186(var uParam0, int iParam1) //Position: 0x934B / 37707
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_187(var uParam0, bool bParam1) //Position: 0x9365 / 37733
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_188(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9382 / 37762
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
	Function_39(&Global_12976 + 36 + 20, 16);
}

void Function_189() //Position: 0x9573 / 38259
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

void Function_190(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x95C9 / 38345
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_191((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_191(bool bParam0) //Position: 0x960F / 38415
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_192() //Position: 0x9634 / 38452
{
	return Global_12976.f_156;
}

void Function_193() //Position: 0x963F / 38463
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_216(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_194(int iParam0, bool bParam1, int iParam2) //Position: 0x9669 / 38505
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
		if (Function_84(Global_29006))
		{
			Function_132(&(Global_29008[Global_29006]), 131072);
			Function_216(&(Global_29008[Global_29006]), 2097152);
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
				if (Function_161(&(Global_29008[iVar0]), 4) || Function_161(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_216(&(Global_29008[iVar0]), 2097155);
					Function_132(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_43())
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

void Function_195(int iParam0) //Position: 0x9774 / 38772
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
		if (!Function_161(&(Global_29008[iParam0]), 2048))
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

bool Function_196() //Position: 0x97F3 / 38899
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_161(&(Global_29008[iVar0]), 4) || Function_161(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_197() //Position: 0x9850 / 38992
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

void Function_198() //Position: 0x9876 / 39030
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

void Function_199(int iParam0) //Position: 0x989C / 39068
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_200(int iParam0) //Position: 0x98B9 / 39097
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_201(int iParam0) //Position: 0x98CC / 39116
{
	Function_202(&Global_28842, iParam0);
	return;
}

void Function_202(var uParam0, int iParam1) //Position: 0x98DA / 39130
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_203(bool bParam0) //Position: 0x98F5 / 39157
{
	if (Function_155(bParam0, 1) && !Function_155(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_204(int iParam0) //Position: 0x9922 / 39202
{
	int iVar0;
	
	if (!Function_128(iParam0))
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

void Function_205(bool bParam0) //Position: 0x99E9 / 39401
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

void Function_206(bool bParam0) //Position: 0x9A65 / 39525
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

void Function_207() //Position: 0x9AD9 / 39641
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

void Function_208() //Position: 0x9B1A / 39706
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

void Function_209() //Position: 0x9B5B / 39771
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_210(int iParam0) //Position: 0x9B6F / 39791
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

bool Function_211() //Position: 0x9BAB / 39851
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

void Function_212() //Position: 0x9BD0 / 39888
{
	Global_8722 = 0.0f;
	return;
}

void Function_213() //Position: 0x9BDA / 39898
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

int Function_214() //Position: 0x9C05 / 39941
{
	bool bVar0;
	
	bVar0 = Function_52();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_215() //Position: 0x9C1F / 39967
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

void Function_216(var uParam0, int iParam1) //Position: 0x9D39 / 40249
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_217(bool bParam0) //Position: 0x9D50 / 40272
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

void Function_218(int iParam0, bool bParam1, bool bParam2) //Position: 0x9DA8 / 40360
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
						Function_25(bVar1);
					}
				}
				Function_219(bVar0);
			}
		}
	}
	return;
}

void Function_219(bool bParam0) //Position: 0x9E9F / 40607
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

void Function_220(bool bParam0) //Position: 0x9ECB / 40651
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

void Function_221() //Position: 0x9F0F / 40719
{
	var uVar0[12];
	int iVar13;
	
	if (Function_267())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Mansion Mayhem";
		uVar0[4] = "Last Stage";
		uVar0[5] = "Clear Baddies";
		uVar0[6] = "Spawn/Kill CrazyMiners";
		uVar0[7] = "Kill House Guys";
		uVar0[8] = "Disable Town Fight";
		uVar0[9] = "Debug Front Door";
		uVar0[10] = "Setup Grave";
		uVar0[11] = "Toggle Child Sector";
		iVar13 = Function_253(&uLocal_332, &uVar0, &Local_313 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_252(&iVar13, &iLocal_320, &iLocal_321, &Local_322))
		{
			Function_245();
			Function_244();
		}
		if (iVar13 == 0)
		{
			Function_245();
			Function_244();
			Function_243(&bLocal_329, 8);
		}
		else if (iVar13 == 1)
		{
			Function_245();
			Function_244();
			Function_238(iLocal_320);
			Function_234(StackVal, StackVal, 5, &bLocal_331, &iLocal_320, Function_241(iLocal_320), Function_238(iLocal_320), 0);
		}
		else if (iVar13 == 2)
		{
			Function_245();
			Function_244();
			Function_229(&bLocal_330, 4);
		}
		else if (iVar13 == 3)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&iLocal_379);
			iLocal_320 = 1;
			iLocal_321 = 0;
			Local_322 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227(&iLocal_379);
			iLocal_320 = 101;
			iLocal_321 = 0;
			Local_322 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_245();
			Function_244();
			if (SQUAD_IS_VALID(bLocal_415))
			{
				Function_220(bLocal_415);
			}
		}
		else if (iVar13 == 6)
		{
			Function_245();
			Function_244();
			if (!SQUAD_IS_VALID(Local_13.f_484))
			{
				Function_226();
				Function_225(&Local_13 + 484, 0);
			}
			else
			{
				Function_224(&Local_13 + 484);
			}
		}
		else if (iVar13 == 7)
		{
			if (SQUAD_IS_VALID(Local_13.f_404))
			{
				Function_220(Local_13.f_404);
			}
		}
		else if (iVar13 == 8)
		{
			Function_245();
			Function_244();
			iLocal_452 = 1;
		}
		else if (iVar13 == 9)
		{
			Function_245();
			Function_244();
		}
		else if (iVar13 == 10)
		{
			Function_245();
			Function_244();
			Function_222();
		}
		else if (iVar13 == 11)
		{
			if (!iLocal_469)
			{
				ENABLE_CHILD_SECTOR("sp_grave03x");
				iLocal_469 = 1;
			}
			else
			{
				DISABLE_CHILD_SECTOR("sp_grave03x");
				iLocal_469 = 0;
			}
		}
	}
	return;
}

bool Function_222() //Position: 0xA1ED / 41453
{
	if (!IS_OBJECT_VALID(bLocal_419))
	{
		bLocal_419 = Function_223(Global_30658[0], "tumbleweed", "grave", 13);
	}
	else if (IS_PROP_STREAMED_IN(bLocal_419))
	{
		if (!GRAVE_IS_DUG_UP(bLocal_419))
		{
			GRAVE_SET_DUG_UP(bLocal_419, 1);
		}
		return 1;
	}
	return 0;
}

bool Function_223(int iParam0, bool bParam1, char* cParam2, int iParam3) //Position: 0xA243 / 41539
{
	bool bVar0;
	char* cVar1[8];
	char* cVar3[32];
	bool bVar11;
	
	if (!Function_84(iParam0))
	{
		return "";
	}
	bVar0 = CREATE_WORLD_SECTOR(FIND_NAMED_LAYOUT("formations"), bParam1);
	if (!IS_WORLD_SECTOR_LOADED(bVar0))
	{
		DESTROY_OBJECT(bVar0);
		return "";
	}
	strcpy(&cVar1, "grave", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar1, "0", 8);
	}
	straddi(&cVar1, iParam3, 8);
	memcpy(&cVar3, Global_29155[iParam010].f_20, 8);
	stradd(&cVar3, "_", 32);
	stradd(&cVar3, cParam2, 32);
	stradd(&cVar3, "*", 32);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(bVar0, &cVar3, &cVar1);
	DESTROY_OBJECT(bVar0);
	if (!IS_OBJECT_VALID(bVar11))
	{
		PRINTSTRING("Grave not found:");
		PRINTSTRING(&cVar3);
		PRINTSTRING(&cVar1);
		PRINTNL();
		return "";
	}
	return GET_GRAVE_FROM_OBJECT(bVar11);
}

void Function_224(int iParam0) //Position: 0xA30F / 41743
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

void Function_225(var uParam0, bool bParam1) //Position: 0xA356 / 41814
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SQUAD_SET_UPDATE_PRIORTY was passed an invalid squad");
	}
	return;
}

void Function_226() //Position: 0xA3DF / 41951
{
	Local_13.f_484 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "BaddieTest"));
	(*&Local_13 + 408)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nCM_Hard03", 515, -3881,944f, 31,34614f, 2916,037f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[02], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[02], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[02], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[02], 0);
	(*&Local_13 + 408)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CM_Med03", 510, -3883,472f, 31,17933f, 2916,01f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[12], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[12], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[12], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[12], 0);
	(*&Local_13 + 408)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nCM_Easy03", 507, -3885,322f, 31,12169f, 2916.0f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[22], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[22], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[22], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[22], 0);
	(*&Local_13 + 408)[32] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nCM_Hard02", 514, -3881,944f, 31,34614f, 2918,587f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[32], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[32], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[32], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[32], 0);
	(*&Local_13 + 408)[42] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CM_Med02", 509, -3883,472f, 31,17933f, 2918,56f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[42], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[42], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[42], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[42], 0);
	(*&Local_13 + 408)[52] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nCM_Easy02", 506, -3885,322f, 31,12169f, 2918,55f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[52], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[52], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[52], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[52], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[52], 0);
	(*&Local_13 + 408)[62] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nCM_Hard01", 513, -3881,944f, 31,34614f, 2920,973f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[62], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[62], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[62], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[62], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[62], 0);
	(*&Local_13 + 408)[72] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CM_Med01", 508, -3883,472f, 31,17933f, 2920,946f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[72], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[72], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[72], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[72], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[72], 0);
	(*&Local_13 + 408)[82] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nCM_Easy01", 505, -3885,322f, 31,12169f, 2920,936f, 0.0f, 139.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 408)[82], Local_13.f_484);
	TASK_STAND_STILL((*&Local_13 + 408)[82], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 408)[82], 1);
	SET_ACTOR_FACTION((*&Local_13 + 408)[82], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 408)[82], 0);
	return;
}

void Function_227(int iParam0) //Position: 0xA816 / 43030
{
	Function_228(iParam0, 0.0f);
	return;
}

void Function_228(int iParam0, float fParam1) //Position: 0xA822 / 43042
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_79(iParam0, 1);
	Function_39(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_229(bool bParam0, int iParam1) //Position: 0xA843 / 43075
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(iParam1);
	*bParam0 = 1;
	return;
}

void Function_230(int iParam0) //Position: 0xA866 / 43110
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

void Function_231() //Position: 0xA95D / 43357
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_232(int iParam0) //Position: 0xA969 / 43369
{
	int iVar0;
	
	if (!Function_31(iParam0))
	{
		return 0;
	}
	iVar0 = Function_30(iParam0);
	if (!Function_18(Function_30(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_233(bool bParam0) //Position: 0xA99F / 43423
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_234(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xAA09 / 43529
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

void Function_235(vector3 vParam0, var uParam3, var uParam4) //Position: 0xAA46 / 43590
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

var Function_236(int iParam0) //Position: 0xAAC9 / 43721
{
	if (!Function_84(iParam0))
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

var Function_237(vector3 vParam0, bool bParam3) //Position: 0xAF77 / 44919
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

vector3 Function_238(int iParam0) //Position: 0xAFE2 / 45026
{
	Function_239(iParam0 + 1);
	return StackVal, StackVal, Function_239(iParam0 + 1);
}

vector3 Function_239(int iParam0) //Position: 0xAFEF / 45039
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_240((*&Local_13 + 752)[0]);
			return StackVal, StackVal, Function_240((*&Local_13 + 752)[0]);
			break;
		
		case 0x00000001:
			Function_240((*&Local_13 + 864)[0]);
			return StackVal, StackVal, Function_240((*&Local_13 + 864)[0]);
			break;
		
		default:
			Function_240((*&Local_13 + 884)[0]);
			return StackVal, StackVal, Function_240((*&Local_13 + 884)[0]);
			break;
	}
	Function_240((*&Local_13 + 884)[0]);
	return StackVal, StackVal, Function_240((*&Local_13 + 884)[0]);
}

vector3 Function_240(bool bParam0) //Position: 0xB040 / 45120
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

int Function_241(int iParam0) //Position: 0xB067 / 45159
{
	return Function_242(iParam0 + 1);
}

int Function_242(int iParam0) //Position: 0xB074 / 45172
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_13 + 752)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_13 + 864)[0]);
			break;
		
		case 0x00000065:
			return GET_OBJECT_HEADING((*&Local_13 + 884)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_13 + 884)[0]);
}

void Function_243(bool bParam0, int iParam1) //Position: 0xB0CB / 45259
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(iParam1);
	*bParam0 = 1;
	return;
}

void Function_244() //Position: 0xB0EE / 45294
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_245() //Position: 0xB103 / 45315
{
	Function_247();
	Function_246(10, 3);
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0xB112 / 45330
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

void Function_247() //Position: 0xB249 / 45641
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
	SET_ACTOR_INVULNERABILITY(Function_52(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_52());
	UI_POP("nDebugMenu");
	return;
}

void Function_248() //Position: 0xB294 / 45716
{
	Function_249(25, 2);
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0xB2A0 / 45728
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

void Function_250(int iParam0, int iParam1) //Position: 0xB49E / 46238
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

bool Function_251() //Position: 0xB5D5 / 46549
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
				if (!Function_155(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_252(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB63C / 46652
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

var Function_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB6E2 / 46818
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

void Function_254(int iParam0, int iParam1, int iParam2) //Position: 0xB7A9 / 47017
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

bool Function_255(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB805 / 47109
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

void Function_256(bool bParam0) //Position: 0xB98B / 47499
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

void Function_257(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB9C5 / 47557
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

var Function_258(int iParam0, var uParam1, int iParam2) //Position: 0xBA73 / 47731
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_259(var uParam0, int iParam1, int iParam2) //Position: 0xBA97 / 47767
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

int Function_260() //Position: 0xBB33 / 47923
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

void Function_261(var uParam0, int iParam1, int iParam2) //Position: 0xBB6F / 47983
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

int Function_262(bool bParam0) //Position: 0xBC07 / 48135
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_52()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_155(*bParam0, 0x40000000))
		{
			Function_79(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_155(*bParam0, 0x40000000))
		{
			Function_79(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_39(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_52()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_155(*bParam0, 0x20000000))
		{
			Function_79(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_155(*bParam0, 0x20000000))
		{
			Function_79(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_39(bParam0, 0x20000000);
	return 0;
}

var Function_263(var uParam0, int iParam1) //Position: 0xBD52 / 48466
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

void Function_264(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBEA1 / 48801
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

var Function_265(int iParam0, int iParam1) //Position: 0xBF34 / 48948
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_266(var uParam0, var uParam1) //Position: 0xBF4E / 48974
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

bool Function_267() //Position: 0xBF9C / 49052
{
	return Global_30920;
}

bool Function_268() //Position: 0xBFA5 / 49061
{
	if (IS_EXITFLAG_SET())
	{
		Function_238(iLocal_320);
		Function_234(StackVal, StackVal, 4, &bLocal_331, &iLocal_320, Function_241(iLocal_320), Function_238(iLocal_320), 0);
		return 0;
	}
	Function_515(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_313, iLocal_320, iLocal_321, &bLocal_330, &bLocal_329, &bLocal_331);
	if (iLocal_320 == 99 && iLocal_320 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_238(iLocal_320);
			Function_234(StackVal, StackVal, 1, &bLocal_331, &iLocal_320, Function_241(iLocal_320), Function_238(iLocal_320), 0);
			return 1;
		}
		if (Function_514(2048))
		{
			Function_238(iLocal_320);
			Function_234(StackVal, StackVal, 3, &bLocal_331, &iLocal_320, Function_241(iLocal_320), Function_238(iLocal_320), 0);
			return 1;
		}
		if (Function_494(&Local_525, &uLocal_485, &uLocal_543, bLocal_378, uLocal_484))
		{
			if (Function_492(&uLocal_543))
			{
				Function_238(iLocal_320);
				Function_234(StackVal, StackVal, 5, &bLocal_331, &iLocal_320, Function_241(iLocal_320), Function_238(iLocal_320), 0);
				return 1;
			}
		}
		Function_491();
	}
	switch (iLocal_320)
	{
		case 0x00000063:
			Function_467();
			break;
		
		case 0x00000000:
			Function_416();
			break;
		
		case 0x00000001:
			Function_346();
			break;
		
		case 0x00000065:
			Function_271();
			break;
		
		case 0x00000064:
			if (Function_270(&bLocal_331))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_269(&iLocal_320, &iLocal_321, &Local_322))
			{
				return 0;
			}
			break;
	}
	if (bLocal_330)
	{
		Function_229(&bLocal_330, 4);
		Function_1();
		return 0;
	}
	if (bLocal_329)
	{
		if (!iLocal_454)
		{
			Function_243(&bLocal_329, 8);
			Function_1();
			iLocal_454 = 1;
		}
		else if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_406)))
		{
			vLocal_423 = { -4094,684f, 40,49754f, 2948,147f };
			bLocal_406 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("sit_headinhands_n_any", &vLocal_423, 5.0f, 0));
		}
		else
		{
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			TERMINATE_THIS_SCRIPT();
			return 0;
		}
	}
	if (bLocal_331 && iLocal_320 == 100)
	{
		Function_238(iLocal_320);
		Function_234(StackVal, StackVal, 5, &bLocal_331, &iLocal_320, Function_241(iLocal_320), Function_238(iLocal_320), 0);
	}
	return 1;
}

bool Function_269(var uParam0, var uParam1, int iParam2) //Position: 0xC18A / 49546
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

bool Function_270(int iParam0) //Position: 0xC1CA / 49610
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_271() //Position: 0xC1DD / 49629
{
	switch (iLocal_321)
	{
		case 0x00000000:
			Function_342(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_339, GET_ACTOR_MAX_HEALTH(bLocal_339));
			CLEAR_ACTOR_MIN_SPEED(bLocal_339);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_339();
			bLocal_341 = Global_30628[1];
			if (!Function_338(bLocal_341))
			{
				Function_337(&Local_313);
			}
			Function_227(&iLocal_379);
			iLocal_321 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_338(bLocal_341) || bLocal_341 != 4294967295))
			{
				Function_227(&iLocal_379);
				iLocal_321 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_272("$/cutscene/Grave03_CS03/Grave03_CS03", &Local_322, &Local_313, &iLocal_320, 68235, 67788, 67734, 67235, 66938, 52800, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_227(&iLocal_379);
				iLocal_321 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_329 = true;
			}
			break;
	}
	return;
}

bool Function_272(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xC303 / 49923
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
				Function_227(iParam1 + 4);
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
					Function_282(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_279(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_279(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_277(Global_63117, Global_6289);
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
						Function_276(1.0f);
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
						Function_274();
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
					Function_273(1);
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

void Function_273(bool bParam0) //Position: 0xC917 / 51479
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

void Function_274() //Position: 0xC9BC / 51644
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_275();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_275() //Position: 0xCA01 / 51713
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_276(bool bParam0) //Position: 0xCA13 / 51731
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

void Function_277(bool bParam0, bool bParam1) //Position: 0xCA30 / 51760
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_278(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_278(bool bParam0) //Position: 0xCAB0 / 51888
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

float Function_279(int iParam0) //Position: 0xCADF / 51935
{
	if (Function_281(iParam0))
	{
		if (Function_280(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_280(int iParam0) //Position: 0xCBA7 / 52135
{
	return Function_155(*iParam0, 2);
}

bool Function_281(int iParam0) //Position: 0xCBB4 / 52148
{
	return Function_155(*iParam0, 1);
}

int Function_282(bool bParam0) //Position: 0xCBC1 / 52161
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

bool Function_283() //Position: 0xCC79 / 52345
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

bool Function_284(int iParam0) //Position: 0xCCB3 / 52403
{
	return iParam0->f_20;
}

void Function_285(var uParam0, int iParam1) //Position: 0xCCBD / 52413
{
	Function_286(uParam0, iParam1, 0);
	return;
}

void Function_286(var uParam0, bool bParam1, bool bParam2) //Position: 0xCCCB / 52427
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
		Function_88(20, 1, 0, 0);
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
				Function_88(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_287(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xCE17 / 52759
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

int Function_288() //Position: 0xCE40 / 52800
{
	switch (iLocal_320)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_13))
			{
				if (Function_291())
				{
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
			if (!IS_LAYOUTREF_VALID(Local_13))
			{
				if (Function_291())
				{
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
		
		default:
			return 1;
			break;
	}
	return 0;
}

var Function_289() //Position: 0xCEBA / 52922
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_13 = CREATE_LAYOUT("Grave03_layout");
	Local_13.f_508 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "battleZones_set");
	(*&Local_13 + 488)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "bz_1", 2, -4079,674f, 38,69606f, 2954,757f, 0.0f, -27,06444f, 0.0f, 18,89509f, 18,26869f, 38,56414f);
	ADD_TO_VOLUME_SET(Local_13.f_508, (*&Local_13 + 488)[0]);
	(*&Local_13 + 488)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "bz_2", 2, -4064,686f, 32,41863f, 2959,029f, 0.0f, -3,625995f, 0.0f, 22,85352f, 18,26869f, 56,63118f);
	ADD_TO_VOLUME_SET(Local_13.f_508, (*&Local_13 + 488)[1]);
	(*&Local_13 + 488)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "bz_3", 2, -4039,213f, 29,53448f, 2952,684f, 0.0f, 2,149521f, 0.0f, 24,59064f, 18,26869f, 59,21653f);
	ADD_TO_VOLUME_SET(Local_13.f_508, (*&Local_13 + 488)[2]);
	(*&Local_13 + 488)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "bz_4", 2, -3999,148f, 28,32094f, 2936,556f, 0.0f, 5,313835f, 0.0f, 35,31941f, 15,8791f, 60,59407f);
	ADD_TO_VOLUME_SET(Local_13.f_508, (*&Local_13 + 488)[3]);
	Local_13.f_580 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "MansionVols_set");
	(*&Local_13 + 512)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "inBasement_1", 2, -4101,271f, 35,45918f, 2943,609f, 0.0f, -33,37211f, 0.0f, 5,939363f, 3,437768f, 1.0f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[0]);
	(*&Local_13 + 512)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "inBasement_2", 2, -4096,751f, 35,3269f, 2936,653f, 0.0f, -33,37211f, 0.0f, 5,939363f, 3,437768f, 1.0f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[1]);
	(*&Local_13 + 512)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "player1stFloor", 2, -4092,961f, 38,76855f, 2941,531f, 0.0f, -30,67736f, 0.0f, 17,08137f, 3,38489f, 2,539254f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[2]);
	(*&Local_13 + 512)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "player2ndFloor_L", 2, -4093,41f, 41,02037f, 2930,515f, 0.0f, -119,6774f, 0.0f, 2,47336f, 3,114333f, 0,4874636f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[3]);
	(*&Local_13 + 512)[4] = CREATE_VOLUME_IN_LAYOUT(Local_13, "player2ndFloor_R", 2, -4088,012f, 40,75969f, 2933,606f, 0.0f, -119,6774f, 0.0f, 2,47336f, 3,114333f, 0,4874636f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[4]);
	(*&Local_13 + 512)[5] = CREATE_VOLUME_IN_LAYOUT(Local_13, "player2ndFloor_L2", 2, -4097,109f, 40,46792f, 2942,302f, 0.0f, -119,6774f, 0.0f, 2,47336f, 3,114333f, 0,4874636f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[5]);
	(*&Local_13 + 512)[6] = CREATE_VOLUME_IN_LAYOUT(Local_13, "thruWindow", 2, -4086,134f, 38,21935f, 2945,732f, 0.0f, 59,62789f, 0.0f, 21,06367f, 3,437768f, 1.0f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[6]);
	(*&Local_13 + 512)[7] = CREATE_VOLUME_IN_LAYOUT(Local_13, "treasureBounds", 2, -4098,651f, 41,06268f, 2948,472f, 0.0f, 59,62789f, 0.0f, 1,085408f, 0,9626604f, 0,6179027f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[7]);
	(*&Local_13 + 512)[8] = CREATE_VOLUME_IN_LAYOUT(Local_13, "MansionShell", 2, -4093,273f, 38,21935f, 2941,549f, 0.0f, 59,62789f, 0.0f, 31,29905f, 21,50578f, 25,05025f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[8]);
	(*&Local_13 + 512)[9] = CREATE_VOLUME_IN_LAYOUT(Local_13, "basementSteps", 2, -4102,821f, 36,19485f, 2946,899f, 0.0f, -29,37211f, 0.0f, 2,461056f, 6,282485f, 2,723439f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[9]);
	(*&Local_13 + 512)[10] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nfrontDoor", 2, -4080,492f, 36,4991f, 2950,575f, 0.0f, -29,37211f, 0.0f, 2,173054f, 3,713893f, 3,125601f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[10]);
	(*&Local_13 + 512)[11] = CREATE_VOLUME_IN_LAYOUT(Local_13, "upBasement", 2, -4093,524f, 37,86659f, 2948,144f, 0.0f, -29,37211f, 0.0f, 2,069867f, 3,572973f, 2,723439f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[11]);
	(*&Local_13 + 512)[12] = CREATE_VOLUME_IN_LAYOUT(Local_13, "baddieFirstFl", 2, -4090,645f, 40,45509f, 2937,626f, 0.0f, -30,67736f, 0.0f, 17,08137f, 6,848712f, 11,91126f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[12]);
	(*&Local_13 + 512)[13] = CREATE_VOLUME_IN_LAYOUT(Local_13, "alertDoorway", 2, -4085,498f, 42,12447f, 2942,585f, 0.0f, -119,3721f, 0.0f, 14,83467f, 3,572973f, 4,406552f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[13]);
	(*&Local_13 + 512)[14] = CREATE_VOLUME_IN_LAYOUT(Local_13, "updateBasement", 2, -4091,687f, 34,17862f, 2942,1f, 0.0f, -121,3721f, 0.0f, 21,80067f, 5,401567f, 1.0f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[14]);
	(*&Local_13 + 512)[15] = CREATE_VOLUME_IN_LAYOUT(Local_13, "doorBlocker", 2, -4085,893f, 38,36665f, 2945,579f, 0.0f, -30,16089f, 0.0f, 0,9494758f, 2,524778f, 2,267413f);
	ADD_TO_VOLUME_SET(Local_13.f_580, (*&Local_13 + 512)[15]);
	Local_13.f_596 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "SethVols_set");
	(*&Local_13 + 584)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "SethStage02", 2, -4041,513f, 28,23527f, 2915,95f, 0.0f, 9.0f, 0.0f, 43,73191f, 14,74309f, 347,7109f);
	ADD_TO_VOLUME_SET(Local_13.f_596, (*&Local_13 + 584)[0]);
	(*&Local_13 + 584)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "SethStage03", 2, -4092,21f, 30,98361f, 2923,98f, 0.0f, 9.0f, 0.0f, 57,49835f, 16,754f, 347,7109f);
	ADD_TO_VOLUME_SET(Local_13.f_596, (*&Local_13 + 584)[1]);
	Local_13.f_616 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "CutsceneVols_set");
	(*&Local_13 + 600)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "IntroCS", 2, -3906,577f, 36,69199f, 2913,343f, 0.0f, 60,1983f, 0.0f, 37,66953f, 15,47603f, 53,78489f);
	ADD_TO_VOLUME_SET(Local_13.f_616, (*&Local_13 + 600)[0]);
	(*&Local_13 + 600)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "FinalCS", 2, -4093,32f, 40,03424f, 2949,075f, 0.0f, 60,1983f, 0.0f, 12,03339f, 15,47603f, 12,8734f);
	ADD_TO_VOLUME_SET(Local_13.f_616, (*&Local_13 + 600)[1]);
	(*&Local_13 + 600)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nCorpseVol", 2, -4098,564f, 41,63768f, 2948,597f, 0.0f, 60,1983f, 0.0f, 1,942563f, 2,459336f, 1,329349f);
	ADD_TO_VOLUME_SET(Local_13.f_616, (*&Local_13 + 600)[2]);
	Local_13.f_620 = CREATE_VOLUME_IN_LAYOUT(Local_13, "S1_Fight", 2, -3914,37f, 31,12174f, 2909,676f, 0.0f, -72.0f, 0.0f, 79,37913f, 6,580472f, 1,25855f);
	Local_13.f_624 = CREATE_VOLUME_IN_LAYOUT(Local_13, "nnearHouse", 2, -4092,195f, 41,42531f, 2941,904f, 0.0f, -30,67736f, 0.0f, 27,32982f, 13,9054f, 28,82103f);
	Local_13.f_628 = CREATE_VOLUME_IN_LAYOUT(Local_13, "nearFrontDoor", 2, -4084,753f, 38,36665f, 2946,369f, 0.0f, -30,16089f, 0.0f, 6,507657f, 2,524778f, 2,267413f);
	Local_13.f_632 = CREATE_VOLUME_IN_LAYOUT(Local_13, "inBasement_door", 2, -4101,55f, 34,95256f, 2944,765f, 0.0f, -33,37211f, 0.0f, 1,142369f, 2,347216f, 1.0f);
	Local_13.f_636 = CREATE_VOLUME_IN_LAYOUT(Local_13, "napproachL", 2, -3936,923f, 30,79538f, 3026,882f, 0.0f, 17,93869f, 0.0f, 1.0f, 14,74309f, 239,3237f);
	Local_13.f_640 = CREATE_VOLUME_IN_LAYOUT(Local_13, "napproachR", 2, -4020,83f, 30,41927f, 2804,186f, 0.0f, 24,21904f, 0.0f, 1.0f, 14,74309f, 239,3237f);
	Local_13.f_644 = CREATE_VOLUME_IN_LAYOUT(Local_13, "nearBoss", 2, -4091,194f, 41,55911f, 2951,71f, 0.0f, -30,67736f, 0.0f, 3,529629f, 2,016632f, 5,950282f);
	Local_13.f_648 = CREATE_VOLUME_IN_LAYOUT(Local_13, "treasureRoom", 2, -4096,727f, 41,55911f, 2948,507f, 0.0f, -30,67736f, 0.0f, 6,840574f, 2,016632f, 5,950282f);
	Local_13.f_652 = CREATE_VOLUME_IN_LAYOUT(Local_13, "nbaddieFl1", 2, -4089,713f, 38,44497f, 2939,58f, 0.0f, -30,67736f, 0.0f, 5,656697f, 2,546784f, 5,950282f);
	Local_13.f_656 = CREATE_VOLUME_IN_LAYOUT(Local_13, "nhouseCage", 2, -4092,984f, 41,42531f, 2941,954f, 0.0f, -30,67736f, 0.0f, 20,21956f, 26,64758f, 22,45677f);
	Local_13.f_660 = CREATE_VOLUME_IN_LAYOUT(Local_13, "covBasementSeth", 2, -4093,12f, 35,06679f, 2938,393f, 0.0f, -30,67736f, 0.0f, 8,157269f, 2,582282f, 11,31645f);
	Local_13.f_664 = CREATE_VOLUME_IN_LAYOUT(Local_13, "cov1stFlSeth", 2, -4089,751f, 40,53315f, 2941,642f, 0.0f, -30,67736f, 0.0f, 11,69881f, 6,909453f, 17,61907f);
	Local_13.f_668 = CREATE_VOLUME_IN_LAYOUT(Local_13, "playerBasement", 2, -4092,761f, 41,42531f, 2942,086f, 0.0f, -30,67736f, 0.0f, 20,21956f, 4,352289f, 16,36774f);
	Local_13.f_672 = CREATE_VOLUME_IN_LAYOUT(Local_13, "player2ndFloor", 2, -4090,366f, 39,98158f, 2933,433f, 0.0f, -30,67736f, 0.0f, 2,47336f, 3,114333f, 0,4874636f);
	Local_13.f_676 = CREATE_VOLUME_IN_LAYOUT(Local_13, "cov2ndFlSeth", 2, -4089,441f, 42,42603f, 2941,826f, 0.0f, -30,67736f, 0.0f, 12,49945f, 3,524738f, 17,61907f);
	Local_13.f_704 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "SethS1Vols_set");
	(*&Local_13 + 680)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nS1_Fight1", 2, -3923,055f, 32,82224f, 2891,613f, 0.0f, -124.0f, 0.0f, 33,35488f, 7,538969f, 1,25855f);
	ADD_TO_VOLUME_SET(Local_13.f_704, (*&Local_13 + 680)[0]);
	(*&Local_13 + 680)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nS1_Fight2", 2, -3920,987f, 38,13965f, 2978,005f, 0.0f, -81.0f, 0.0f, 146,7096f, 21,07521f, 1,25855f);
	ADD_TO_VOLUME_SET(Local_13.f_704, (*&Local_13 + 680)[1]);
	(*&Local_13 + 680)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nS1_Fight3", 2, -3970,483f, 28,80408f, 2887,276f, 0.0f, -48.0f, 0.0f, 80,56192f, 21,07521f, 1,25855f);
	ADD_TO_VOLUME_SET(Local_13.f_704, (*&Local_13 + 680)[2]);
	(*&Local_13 + 680)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nS1_Fight4", 2, -3936,873f, 29,17418f, 2941,85f, 0.0f, -75.0f, 0.0f, 52,65687f, 21,07521f, 1,25855f);
	ADD_TO_VOLUME_SET(Local_13.f_704, (*&Local_13 + 680)[3]);
	(*&Local_13 + 680)[4] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nS1_Fight5", 2, -3983,434f, 29,7139f, 2959,193f, 0.0f, -59.0f, 0.0f, 166,8024f, 21,07521f, 46,22523f);
	ADD_TO_VOLUME_SET(Local_13.f_704, (*&Local_13 + 680)[4]);
	Local_13.f_708 = CREATE_VOLUME_IN_LAYOUT(Local_13, "MissionRestrictVol", 2, -3995,315f, 34,03971f, 2931,845f, 0.0f, 5,322636f, 0.0f, 249,4176f, 26,64758f, 106,5863f);
	Local_13.f_712 = CREATE_VOLUME_IN_LAYOUT(Local_13, "SetOffNextBattle", 2, -3974,697f, 27,91657f, 2929,712f, 0.0f, 33,7195f, 0.0f, 1.0f, 14,74309f, 239,3237f);
	Local_13.f_736 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "JohnMansionVols_set");
	(*&Local_13 + 716)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "check1", 2, -4095,446f, 38,60322f, 2947,062f, 0.0f, -29,37211f, 0.0f, 2,069867f, 3,572973f, 2,723439f);
	ADD_TO_VOLUME_SET(Local_13.f_736, (*&Local_13 + 716)[0]);
	(*&Local_13 + 716)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "check2", 2, -4091,116f, 38,94334f, 2934,595f, 0.0f, -119,3721f, 0.0f, 2,069867f, 3,572973f, 2,39027f);
	ADD_TO_VOLUME_SET(Local_13.f_736, (*&Local_13 + 716)[1]);
	(*&Local_13 + 716)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "check3A", 2, -4083,03f, 42,33358f, 2939,094f, 0.0f, -119,3721f, 0.0f, 2,069867f, 3,572973f, 2,39027f);
	ADD_TO_VOLUME_SET(Local_13.f_736, (*&Local_13 + 716)[2]);
	(*&Local_13 + 716)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "check3B", 2, -4097,546f, 41,94956f, 2942,107f, 0.0f, -119,3721f, 0.0f, 2,069867f, 3,214086f, 1,330383f);
	ADD_TO_VOLUME_SET(Local_13.f_736, (*&Local_13 + 716)[3]);
	Local_13.f_740 = CREATE_VOLUME_IN_LAYOUT(Local_13, "skipMansion", 2, -4028,623f, 27,52894f, 2942,44f, 0.0f, 25,93869f, 0.0f, 1.0f, 14,74309f, 239,3237f);
	Local_13.f_744 = CREATE_VOLUME_IN_LAYOUT(Local_13, "nearBossRoom", 2, -4088,625f, 41,69334f, 2948,563f, 0.0f, -30,67736f, 0.0f, 3,529629f, 2,758149f, 5,950282f);
	Local_13.f_748 = CREATE_OBJECTSET_IN_LAYOUT("Stage01Set", Local_13, 8, 0);
	(*&Local_13 + 752)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerPos01", -3913,887f, 31,0999f, 2902,346f, 0.0f, 59.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[0], Local_13.f_748);
	(*&Local_13 + 752)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "nSethPos01", -3916,772f, 31,02521f, 2902,826f, 0.0f, 56,77f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[1], Local_13.f_748);
	(*&Local_13 + 752)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "nLedgeJump", -3928,183f, 30,33865f, 2918,304f, 0.0f, 643.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[2], Local_13.f_748);
	(*&Local_13 + 752)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "BaddieCover1", -3926,975f, 30,55618f, 2897,986f, 185,5632f, 196,9671f, -181,4229f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[3], Local_13.f_748);
	(*&Local_13 + 752)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "nSethCover", -3922,356f, 31,04314f, 2911,302f, 0.0f, 454.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[4], Local_13.f_748);
	(*&Local_13 + 752)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerPos03", -3973,725f, 27,73097f, 2925,725f, 0.0f, 121.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[5], Local_13.f_748);
	(*&Local_13 + 752)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "nSethPos04", -4080,52f, 35,65381f, 2950,848f, 0.0f, 400.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[6], Local_13.f_748);
	(*&Local_13 + 752)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerPos04", -4080,23f, 35,65085f, 2948,836f, 0.0f, 61.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[7], Local_13.f_748);
	(*&Local_13 + 752)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "doorGringoPos", -4084,272f, 37,225f, 2946,852f, 0.0f, 61.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[8], Local_13.f_748);
	(*&Local_13 + 752)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "nSethPos05", -4078,323f, 35,53316f, 2949,033f, 0.0f, 61.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 752)[9], Local_13.f_748);
	Local_13.f_796 = CREATE_OBJECTSET_IN_LAYOUT("S1_SethIdlePtsSet", Local_13, 8, 0);
	(*&Local_13 + 800)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "nIdlePt_01", -3927,335f, 30,4115f, 2895,913f, 0.0f, -273.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 800)[0], Local_13.f_796);
	(*&Local_13 + 800)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "nIdlePt_02", -3951,787f, 29,11373f, 2912,294f, 0.0f, -229.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 800)[1], Local_13.f_796);
	(*&Local_13 + 800)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "nIdlePt_03", -3954,359f, 29,0896f, 2917,579f, 0.0f, -229.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 800)[2], Local_13.f_796);
	(*&Local_13 + 800)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "nIdlePt_04", -3968,933f, 27,70122f, 2913,631f, 0.0f, -238.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 800)[3], Local_13.f_796);
	(*&Local_13 + 800)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "nIdlePt_05", -3975,828f, 27,75798f, 2925,961f, 0.0f, -238.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 800)[4], Local_13.f_796);
	(*&Local_13 + 800)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "nIdlePt_06", -3988,481f, 28,21542f, 2928,492f, 0.0f, -238.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 800)[5], Local_13.f_796);
	(*&Local_13 + 800)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "nIdlePt_07", -3954,965f, 29,05244f, 2919,503f, 0.0f, -238.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 800)[6], Local_13.f_796);
	Local_13.f_832 = CREATE_OBJECTSET_IN_LAYOUT("Wave01_ShootPtsSet", Local_13, 8, 0);
	(*&Local_13 + 836)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "Wv01_ShootFrom01", -3975,946f, 31,932f, 2919,054f, 0.0f, -84.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 836)[0], Local_13.f_832);
	(*&Local_13 + 836)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "Wv01_ShootFrom02", -3965,071f, 29,02164f, 2932.0f, 0.0f, -50.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 836)[1], Local_13.f_832);
	(*&Local_13 + 836)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "Wv01_ShootFrom03", -3976,926f, 27,85839f, 2929,545f, 0.0f, -50.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 836)[2], Local_13.f_832);
	(*&Local_13 + 836)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "Wv01_ShootFrom04", -3977,857f, 33,21274f, 2918,557f, 0.0f, -94.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 836)[3], Local_13.f_832);
	(*&Local_13 + 836)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "Wv02_ShootFrom01", -3992,849f, 29,289f, 2954,191f, 0.0f, -76.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 836)[4], Local_13.f_832);
	Local_13.f_860 = CREATE_OBJECTSET_IN_LAYOUT("Stage02Set", Local_13, 8, 0);
	(*&Local_13 + 864)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerPos12", -4104,056f, 35,76294f, 2948,794f, 0.0f, -30.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 864)[0], Local_13.f_860);
	(*&Local_13 + 864)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "nSethPos12", -4102,746f, 35,8256f, 2949,78f, 0.0f, 716.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 864)[1], Local_13.f_860);
	(*&Local_13 + 864)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStart02", -3925,459f, 31,06101f, 2911,034f, 0.0f, -84,40497f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 864)[2], Local_13.f_860);
	Local_13.f_880 = CREATE_OBJECTSET_IN_LAYOUT("StageLastSet", Local_13, 8, 0);
	(*&Local_13 + 884)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerPos02", -4094,509f, 40,588f, 2949,616f, 0.0f, 240.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 884)[0], Local_13.f_880);
	(*&Local_13 + 884)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "nSethPos02", -4094,935f, 40,58777f, 2951,003f, 0.0f, 685.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 884)[1], Local_13.f_880);
	(*&Local_13 + 884)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "COMPANION_EXIT", -4076,057f, 35,28338f, 2927,535f, 0.0f, 266,8387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 884)[2], Local_13.f_880);
	(*&Local_13 + 884)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "SethGotoEnd", -4098,016f, 40,58777f, 2948,848f, 0.0f, 784.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 884)[3], Local_13.f_880);
	(*&Local_13 + 884)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "nCorpsePos", -4097,867f, 40,58776f, 2946,629f, 0.0f, 685.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 884)[4], Local_13.f_880);
	*(&Local_13 + 908[06]) = { -4002,191f, 26,73814f, 2900,735f };
	*(&Local_13 + 908[06] + 12) = { 0.0f, -73,31422f, 0.0f };
	*(&Local_13 + 908[16]) = { -4014,522f, 28,97481f, 2916,653f };
	*(&Local_13 + 908[16] + 12) = { 0.0f, -73,31422f, 0.0f };
	*(&Local_13 + 908[26]) = { -4004,311f, 28,70392f, 2923,85f };
	*(&Local_13 + 908[26] + 12) = { 0.0f, 17,72256f, 0.0f };
	*(&Local_13 + 908[36]) = { -4011,437f, 29,14916f, 2916,563f };
	*(&Local_13 + 908[36] + 12) = { 0.0f, -87,29693f, 0.0f };
	*(&Local_13 + 908[46]) = { -4004,811f, 26,60392f, 2895,189f };
	*(&Local_13 + 908[46] + 12) = { 0.0f, -87,29693f, 0.0f };
	Local_13.f_1032 = CREATE_OBJECTSET_IN_LAYOUT("sethMansionCoverSet", Local_13, 8, 0);
	(*&Local_13 + 1036)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "nfirstFL01", -4096,358f, 33,808f, 2939,588f, 0.0f, 330.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1036)[0], Local_13.f_1032);
	(*&Local_13 + 1036)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "nfirstFL02", -4102,504f, 33,822f, 2943,601f, 0.0f, -212.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1036)[1], Local_13.f_1032);
	(*&Local_13 + 1036)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "nfirstFL03", -4093,758f, 37,202f, 2947,478f, 0.0f, -26.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1036)[2], Local_13.f_1032);
	(*&Local_13 + 1036)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "nfirstFL04", -4092,688f, 36,437f, 2948,124f, 0.0f, 332.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1036)[3], Local_13.f_1032);
	(*&Local_13 + 1036)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "nfirstFL05", -4089,673f, 37,212f, 2936,975f, 0.0f, 220.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1036)[4], Local_13.f_1032);
	(*&Local_13 + 1036)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "nfirstFL06", -4083,781f, 40,583f, 2936,83f, 0.0f, -211.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1036)[5], Local_13.f_1032);
	(*&Local_13 + 1036)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "nfirstFL07", -4089,425f, 40,549f, 2948,049f, 0.0f, 150.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1036)[6], Local_13.f_1032);
	Local_13.f_1068 = CREATE_OBJECTSET_IN_LAYOUT("SethCovSpotsSet", Local_13, 8, 0);
	(*&Local_13 + 1072)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "SETHC01", -4009,221f, 29,01953f, 2920.0f, 0.0f, -262.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1072)[0], Local_13.f_1068);
	(*&Local_13 + 1072)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "SETHC02", -4005,68f, 28,67109f, 2954,32f, 0.0f, -244.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1072)[1], Local_13.f_1068);
	(*&Local_13 + 1072)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "SETHC03", -4059,221f, 31,10617f, 2940f, 0.0f, -244.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1072)[2], Local_13.f_1068);
	(*&Local_13 + 1072)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "SETHC04", -4049,89f, 30,7164f, 2974,11f, 0.0f, -244.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1072)[3], Local_13.f_1068);
	Local_13.f_1092 = CREATE_OBJECTSET_IN_LAYOUT("HouseGuyPtsSet", Local_13, 8, 0);
	(*&Local_13 + 1096)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "SecondFloor_01", -4090,199f, 40,58777f, 2945,287f, 0.0f, -25.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[0], Local_13.f_1092);
	(*&Local_13 + 1096)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "nNearPiano", -4089,823f, 37,25368f, 2940,712f, 6,490564f, 108,1041f, 7,101904f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[1], Local_13.f_1092);
	(*&Local_13 + 1096)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "treasureGringo", -4091,411f, 33,86287f, 2932,129f, 6,490564f, 108,1041f, 7,101904f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[2], Local_13.f_1092);
	(*&Local_13 + 1096)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "fl1_SideRoom", -4095,414f, 37,23855f, 2936,176f, 0.0f, 155,889f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[3], Local_13.f_1092);
	(*&Local_13 + 1096)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "fl1_BustDoor", -4091,993f, 37,24179f, 2936,538f, 0.0f, 147.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[4], Local_13.f_1092);
	(*&Local_13 + 1096)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "fl1_BustDoor1", -4085,758f, 40,48339f, 2945,612f, 0.0f, 53.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[5], Local_13.f_1092);
	(*&Local_13 + 1096)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "fl2_BustDoor1", -4097,61f, 40,554f, 2938,913f, 0.0f, -19.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[6], Local_13.f_1092);
	(*&Local_13 + 1096)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "fl2_BustDoor2", -4087,197f, 40,40279f, 2945,128f, 0.0f, 57.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[7], Local_13.f_1092);
	(*&Local_13 + 1096)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "fl2_BustDoor3", -4090,352f, 40,54115f, 2951,384f, 0.0f, -34.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[8], Local_13.f_1092);
	(*&Local_13 + 1096)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "bm_Cov01", -4088,701f, 33,84138f, 2941,781f, 0.0f, 63.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[9], Local_13.f_1092);
	(*&Local_13 + 1096)[10] = CREATE_POINT_IN_LAYOUT(Local_13, "bm_Cov02", -4086,911f, 33,93096f, 2935,825f, 0.0f, 83.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1096)[10], Local_13.f_1092);
	Local_13.f_1144 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "cover_corner17", -4089,369f, 40,53251f, 2948,872f, 0.0f, 149,5607f, 0.0f, 1);
	Local_13.f_1148 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "cover_corner21", -4093,673f, 40,59332f, 2951,082f, 0.0f, -481.0f, 0.0f, 1);
	Local_13.f_1152 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "cover_corner22", -4104,332f, 35,88f, 2943,492f, 0.0f, -298.0f, 0.0f, 1);
	Local_13.f_1156 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "SethCovObj_01", -3988,879f, 28,20096f, 2929,258f, 0.0f, -514.0f, 0.0f, 1);
	Local_13.f_1160 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "coverS1Seth", -3954,525f, 29,138f, 2919,259f, 0.0f, 126.0f, 0.0f, 4);
	Local_13.f_1164 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "SethCovObj_02", -3976.0f, 27,84365f, 2929,433f, 0.0f, -595.0f, 0.0f, 1);
	Local_13.f_1168 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "ncover_low", -4086,898f, 33,88873f, 2935,476f, 0.0f, 83.0f, 0.0f, 4);
	Local_13.f_1172 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "cover_low1", -4089,617f, 33,88873f, 2935,143f, 0.0f, -97.0f, 0.0f, 4);
}

void %E8ÇÅ'tBFjE7ÿÛ,G:D ;ofootLocker03x0 op_gen_footLocker03x )ÅL)B"X¯)E8IF)Bl  ,U:D¤z-  (int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186) //Position: 0xF10A / 61706
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

bool Function_291() //Position: 0xF1BA / 61882
{
	if (!IS_EXITFLAG_SET())
	{
		if (!iLocal_450)
		{
			if (!Function_319(0))
			{
				return 0;
			}
			iLocal_450 = 1;
		}
		if (!Function_316())
		{
			return 0;
		}
		if (!Function_314())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_308(&bLocal_353))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_339))
		{
			bLocal_339 = Function_299(1, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_340))
		{
			bLocal_340 = Function_292(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
	}
	return 1;
}

bool Function_292(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0xF23C / 62012
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
		Function_298(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_297())
		{
			return "";
		}
	}
	if (!Function_295())
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
		Function_240(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_240(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_240(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_240(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_294(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_294(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_43() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_56(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_56(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
				if (!Function_76(StackVal, StackVal, vVar10))
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
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_56(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_56(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
		Function_293(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_43() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_293(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xF594 / 62868
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

var Function_294(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xF5D1 / 62929
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

bool Function_295() //Position: 0xF66C / 63084
{
	if (Function_296() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_296() //Position: 0xF682 / 63106
{
	return Global_12976.f_152;
}

bool Function_297() //Position: 0xF68D / 63117
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_298(var uParam0, bool bParam1, bool bParam2) //Position: 0xF6AD / 63149
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_79(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_79(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_299(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0xF6DA / 63194
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
		if (!Function_161(&(Global_29008[Global_30621[3]]), 4))
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
		Function_218(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_307(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_302(StackVal, uParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = uParam3;
			vVar3.y = uParam4;
			vVar3.z = uParam5;
			if (Function_76(StackVal, StackVal, vVar3))
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
		Function_301(bVar1, 0, 0, 0, 0);
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
		Function_300(bVar1, 0);
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

void Function_300(bool bParam0, bool bParam1) //Position: 0xFBC4 / 64452
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_301(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFBE4 / 64484
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

bool Function_302(int iParam0, bool bParam1) //Position: 0xFC38 / 64568
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_306(iParam0))
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
						Function_303(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_303(bool bParam0, bool bParam1) //Position: 0xFCB8 / 64696
{
	Function_305(bParam0);
	Function_304(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_304(bool bParam0) //Position: 0xFCDE / 64734
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_305(bool bParam0) //Position: 0xFD02 / 64770
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

bool Function_306(int iParam0) //Position: 0xFDD1 / 64977
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_307(int iParam0, bool bParam1) //Position: 0xFDE8 / 65000
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

bool Function_308(bool bParam0) //Position: 0xFE7B / 65147
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_313();
	iVar1 = 0;
	if (!Function_187(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_312(bParam0[iVar03], 8);
		}
		else if (Function_311())
		{
			iVar1 = 1;
			Function_312(bParam0[iVar03], 8);
		}
		Function_312(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_187(bParam0[iVar03], 4))
		{
			if (!Function_187(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_187(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_187(bParam0[03], 8) || iVar1));
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
				Function_312(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_187(bParam0[iVar03], 4))
		{
			if (!Function_187(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
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
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
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
	Function_309();
	return 1;
}

void Function_309() //Position: 0x101F8 / 66040
{
	if (!Function_310(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_310(int iParam0) //Position: 0x10238 / 66104
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_311() //Position: 0x10254 / 66132
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

void Function_312(var uParam0, int iParam1) //Position: 0x1027F / 66175
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_313() //Position: 0x10290 / 66192
{
	if (!Function_310(128))
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

bool Function_314() //Position: 0x102D2 / 66258
{
	Function_315(&Local_13 + 20, 505, 2, 0);
	Function_315(&Local_13 + 20, 506, 2, 0);
	Function_315(&Local_13 + 20, 509, 2, 0);
	Function_315(&Local_13 + 20, 512, 2, 0);
	Function_315(&Local_13 + 20, 510, 2, 0);
	Function_315(&Local_13 + 20, 508, 2, 0);
	Function_315(&Local_13 + 20, 513, 2, 0);
	Function_315(&Local_13 + 20, 507, 2, 0);
	if (Function_308(&Local_13 + 20))
	{
		return 1;
	}
	return 0;
}

var Function_315(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1034D / 66381
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_187(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_312(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_312(uParam0[iVar03], 8);
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

bool Function_316() //Position: 0x1041D / 66589
{
	Function_317(&Local_13 + 4, "p_gen_footLocker03x", 0, 0);
	if (Function_308(&Local_13 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_317(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x10450 / 66640
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_318(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_312(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_318(var uParam0, int iParam1, int iParam2) //Position: 0x10488 / 66696
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_187(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_312(uParam0[iVar03], 4);
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

bool Function_319(bool bParam0) //Position: 0x1054C / 66892
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

int Function_320() //Position: 0x1057A / 66938
{
	switch (iLocal_320)
	{
		case 0x00000063:
			Function_321(2, 0, 1, 1, 1, 1, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_321(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_321(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x105B3 / 66995
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
		bVar0 = Function_52();
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
			if (Function_43())
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
		Function_88(21, 1, 0, 0);
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
	Function_273(bParam9);
}

int Function_322() //Position: 0x106A3 / 67235
{
	switch (iLocal_320)
	{
		case 0x00000063:
			Function_325();
			return 1;
			break;
		
		case 0x00000065:
			Function_323();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_323() //Position: 0x106D3 / 67283
{
	SET_ACTOR_SPEED(Global_34573, 0.0f);
	Function_24(1, 1, 0, 1, 1);
	Function_324(Global_34573, (*&Local_13 + 884)[0], 1, 0, 1);
	TASK_STAND_STILL(Global_34573, 1.0f, 1, 0);
	return;
}

void Function_324(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x10703 / 67331
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

void Function_325() //Position: 0x1080A / 67594
{
	if (!iLocal_451)
	{
		vLocal_423 = { -4081,185f, 41,028f, 2946,763f };
		ENABLE_GAME_CAMERA_FOCUS(vLocal_423, 2.0f, 6, 1, 1, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_339, true);
		AI_GOAL_LOOK_AT_COORD(bLocal_339, &vLocal_423, 1, 0.0f, 3.0f, 5.0f);
		Function_324(Global_34573, (*&Local_13 + 752)[0], 1, 1, 0);
		TASK_CLEAR(Global_34573);
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 7.0f, 1);
		ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
		Function_324(bLocal_339, (*&Local_13 + 752)[1], 1, 1, 0);
		ACTOR_POP_NEXT_GAIT(bLocal_339, 1, false);
		iLocal_451 = 1;
	}
	return;
}

int Function_326() //Position: 0x10896 / 67734
{
	switch (iLocal_320)
	{
		case 0x00000063:
			if (!Function_308(&bLocal_353))
			{
				return 0;
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

bool Function_327() //Position: 0x108CC / 67788
{
	switch (iLocal_320)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_13))
			{
				if (Function_338(Global_30658[0]))
				{
					return Function_222();
				}
			}
			if (Function_291())
			{
				bLocal_341 = Global_30658[0];
				if (!Function_338(bLocal_341))
				{
					Function_337(&Local_313);
				}
				Global_63097 = 0;
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -3910,114f, 31,102f, 2907,608f, 98.0f, 1, true, 1);
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			}
			break;
		
		default:
			Function_328();
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
	}
	return 0;
}

void Function_328() //Position: 0x10952 / 67922
{
	bool bVar0;
	
	if (IS_ACTOR_VALID((*&Local_13 + 336)[72]))
	{
		if (IS_ACTOR_IN_VOLUME((*&Local_13 + 336)[72], (*&Local_13 + 600)[2]))
		{
			DESTROY_ACTOR((*&Local_13 + 336)[72]);
			Function_240((*&Local_13 + 884)[4]);
			Function_329((*&Local_13 + 884)[4]);
			bLocal_408 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_312, "WelshCorpse", 515, Function_240((*&Local_13 + 884)[4]), Function_329((*&Local_13 + 884)[4]), "dead_ground_male");
			SNAP_OBJECT_TO_GROUND(bLocal_408, 10.0f, true, 1092616192);
		}
	}
	else if (GET_OBJECTSET_SIZE(bLocal_409) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_409);
		if (IS_OBJECT_VALID(bVar0))
		{
			if (IS_OBJECT_IN_VOLUME(bVar0, (*&Local_13 + 600)[2]))
			{
				DESTROY_OBJECT(bVar0);
				Function_240((*&Local_13 + 884)[4]);
				Function_329((*&Local_13 + 884)[4]);
				bLocal_408 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_312, "WelshCorpse", 515, Function_240((*&Local_13 + 884)[4]), Function_329((*&Local_13 + 884)[4]), "dead_ground_male");
				SNAP_OBJECT_TO_GROUND(bLocal_408, 10.0f, true, 1092616192);
			}
		}
	}
	return;
}

vector3 Function_329(bool bParam0) //Position: 0x10A64 / 68196
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

int Function_330() //Position: 0x10A8B / 68235
{
	switch (iLocal_320)
	{
		case 0x00000063:
			Function_334(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_332(bLocal_312, -3910,114f, 31,102f, 2907,608f, &fLocal_481, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_331();
			Function_334(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Local_322.f_20 = CREATE_VOLUME_IN_LAYOUT(bLocal_312, "FinalCS", 2, -4093,32f, 40,03424f, 2949,075f, 0.0f, 60,1983f, 0.0f, 12,03339f, 15,47603f, 12,8734f);
			Function_240((*&Local_13 + 884)[0]);
			Function_332(StackVal, StackVal, bLocal_312, Function_240((*&Local_13 + 884)[0]), &Local_322 + 20, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_331() //Position: 0x10B5A / 68442
{
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_339, true);
	FIRE_STOP_FLAMES_IN_VOLUME(Local_13.f_648);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	if (IS_OBJECT_VALID(Local_13.f_1188))
	{
		DESTROY_OBJECT(Local_13.f_1188);
	}
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_406)))
	{
		vLocal_423 = { -4094,684f, 40,49754f, 2948,147f };
		bLocal_406 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("sit_headinhands_n_any", &vLocal_423, 5.0f, 0));
	}
	return;
}

void Function_332(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x10BD8 / 68568
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
		if (!Function_76(StackVal, StackVal, vVar2))
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

void Function_333(bool bParam0, bool bParam1) //Position: 0x10E46 / 69190
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

void Function_334(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x10EBB / 69307
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
		bVar1 = Function_52();
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
			if (Function_43())
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
				Function_336(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_56(), 2, Function_336(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_88(19, 1, 0, 0);
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
	if (Function_310(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_164(0x4000000);
	}
	if (Function_310(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_164(0x8000000);
	}
}

var Function_335() //Position: 0x11164 / 69988
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

vector3 Function_336(bool bParam0) //Position: 0x111E3 / 70115
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_337(int iParam0) //Position: 0x111F4 / 70132
{
	if (!Function_284(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_194(1, 0, 1);
		}
	}
	return;
}

bool Function_338(bool bParam0) //Position: 0x1120F / 70159
{
	if (!Function_84(bParam0))
	{
		return 1;
	}
	return Function_161(&(Global_29008[bParam0]), 4);
}

void Function_339() //Position: 0x1122B / 70187
{
	Function_199(47);
	Function_200(256);
	Function_164(15);
	Function_340(9);
	return;
}

void Function_340(int iParam0) //Position: 0x11246 / 70214
{
	Function_341(&Global_28842, iParam0);
	return;
}

void Function_341(var uParam0, int iParam1) //Position: 0x11254 / 70228
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_342(bool bParam0) //Position: 0x11277 / 70263
{
	Function_343(0, 0x40400000);
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

void Function_343(bool bParam0, float fParam1) //Position: 0x112AB / 70315
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

void Function_344() //Position: 0x113A9 / 70569
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_345() //Position: 0x113DB / 70619
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

void Function_346() //Position: 0x114D8 / 70872
{
	if (iLocal_321 == 0 && iLocal_321 == 1)
	{
		Function_240((*&Local_13 + 884)[0]);
		Function_411(StackVal, StackVal, "$/cutscene/Grave03_CS03/Grave03_CS03", &uLocal_480, Function_240((*&Local_13 + 884)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		Function_403(&iLocal_385, 60.0f, 120.0f, bLocal_339, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_331, 0, bLocal_312, Local_13, 325, 1);
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_656) && iLocal_321 > 14)
		{
			Function_401();
		}
		if (bLocal_468)
		{
			Function_395();
		}
		if (iLocal_321 > 8)
		{
			Function_387();
		}
		Function_384(Local_13.f_404);
		Function_380();
	}
	switch (iLocal_321)
	{
		case 0x00000000:
			Function_342(0);
			Function_379(Local_13.f_236);
			CLEAR_ACTOR_MIN_SPEED(bLocal_339);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_339();
			if (!iLocal_342[0] == 1)
			{
				bLocal_341 = Global_30628[1];
				if (!Function_338(bLocal_341))
				{
					Function_337(&Local_313);
				}
				Function_324(Global_34573, (*&Local_13 + 864)[0], 1, 1, 1);
				Function_324(bLocal_339, (*&Local_13 + 864)[1], 1, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_339, "Grave03_Seth_idle", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_339, "Grave03_Seth_idle");
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_339, true);
				SQUAD_GOAL_ADD_BATTLE_ALLIES(bLocal_416, 1, Global_34573, 1);
			}
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_227(&iLocal_379);
			iLocal_321 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_378()) && (Function_338(bLocal_341) || bLocal_341 != 4294967295))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_227(&iLocal_379);
				Function_377();
				iLocal_321 = 2;
			}
			break;
		
		case 0x00000002:
			Function_239(iLocal_320);
			Function_371(StackVal, StackVal, Function_239(iLocal_320), iLocal_320, Global_30628[1], Function_242(iLocal_320), 0);
			Function_240((*&Local_13 + 1096)[2]);
			vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[2]) };
			if (IS_GRINGO_VALID(LOCATE_GRINGO_OF_TYPE("treasure_hunting_3", &vLocal_423, 2.0f, 0)))
			{
				bLocal_421 = LOCATE_GRINGO_OF_TYPE("treasure_hunting_3", &vLocal_423, 2.0f, 0);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_370();
			Function_369((*&Local_13 + 512)[15], bLocal_312);
			Function_369((*&Local_13 + 512)[7], bLocal_312);
			Function_156(Function_367("tumbleweed", "mansion", 3), 1);
			Function_361();
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_339, 0);
			if (IS_MOVER_FROZEN(bLocal_339))
			{
				SET_MOVER_FROZEN(bLocal_339, false);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
			}
			Function_360("Grave03_obj06", 0x40f00000, 1, 2, 0, 0, 0);
			Function_227(&iLocal_379);
			iLocal_321 = 6;
			break;
		
		case 0x00000006:
			if (IS_VOLUME_VALID((*&Local_13 + 512)[9]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[9]))
				{
					DESTROY_VOLUME((*&Local_13 + 512)[9]);
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				}
			}
			if (IS_VOLUME_VALID(Local_13.f_632))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_632))
				{
					DESTROY_VOLUME(Local_13.f_632);
					DESTROY_VOLUME((*&Local_13 + 512)[6]);
					Function_359();
					Function_227(&iLocal_391);
				}
			}
			if (IS_VOLUME_VALID((*&Local_13 + 512)[6]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[6]))
				{
					DESTROY_VOLUME((*&Local_13 + 512)[6]);
					Function_359();
					Function_227(&iLocal_391);
					bLocal_448 = true;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[1]) || bLocal_448)
			{
				MEMORY_ALLOW_SHOOTING((*&Local_13 + 336)[12], false);
				MEMORY_ALLOW_SHOOTING((*&Local_13 + 336)[02], false);
				Function_358(bLocal_339, Local_13.f_404, 1);
				TASK_CLEAR((*&Local_13 + 336)[02]);
				TASK_CLEAR((*&Local_13 + 336)[12]);
				if (!bLocal_448)
				{
					Function_240((*&Local_13 + 1096)[9]);
					vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[9]) };
					bLocal_431 = GET_OBJECT_HEADING((*&Local_13 + 1096)[9]);
					TASK_SHOOT_ENEMIES_FROM_PREFERRED_COVER((*&Local_13 + 336)[02], FIND_NEAREST_COVER_LOCATION(&vLocal_423, 2.0f, bLocal_431, 30.0f, 7), -1.0f, 1086324736);
					Function_240((*&Local_13 + 1096)[10]);
					vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[10]) };
					bLocal_431 = GET_OBJECT_HEADING((*&Local_13 + 1096)[10]);
					TASK_SHOOT_ENEMIES_FROM_PREFERRED_COVER((*&Local_13 + 336)[12], FIND_NEAREST_COVER_LOCATION(&vLocal_423, 2.0f, bLocal_431, 30.0f, 7), -1.0f, 2.0f);
				}
				else
				{
					bLocal_443 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, Global_34573, 3.0f, 2);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_13 + 336)[02], bLocal_443);
					TASK_SEQUENCE_RELEASE(bLocal_443, 1);
					bLocal_443 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, Global_34573, 3.0f, 2);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_13 + 336)[12], bLocal_443);
					TASK_SEQUENCE_RELEASE(bLocal_443, 1);
				}
				TASK_PRIORITY_SET((*&Local_13 + 336)[02], true);
				TASK_PRIORITY_SET((*&Local_13 + 336)[12], true);
				AUDIO_SET_PLAYER_MOOD(2, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_227(&iLocal_379);
				iLocal_321 = 7;
			}
			else if (Function_279(&iLocal_391) < 15.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
				{
					Function_355();
					Function_227(&iLocal_391);
				}
			}
			break;
		
		case 0x00000007:
			if (((Function_354(Global_34573, Local_13.f_404, 1, 1, 0, 3212836864) || MEMORY_GET_IS_IDENTIFIED((*&Local_13 + 336)[02], Global_34573)) || MEMORY_GET_IS_IDENTIFIED((*&Local_13 + 336)[12], Global_34573)) || bLocal_448)
			{
				AUDIO_MUSIC_SET_MOOD("GRAVE_GUNFIGHT_02", 0, 4294967295, 4294967295);
				HUD_CLEAR_SMALL_TEXT();
				HUD_CLEAR_OBJECTIVE();
				SAY_SINGLE_LINE_STRING((*&Local_13 + 336)[02], "Grave03_InsideMansionBasement", true, false, 3, 0, true, false);
				MEMORY_ALLOW_SHOOTING((*&Local_13 + 336)[12], true);
				MEMORY_ALLOW_SHOOTING((*&Local_13 + 336)[02], true);
				Function_227(&iLocal_379);
				Function_227(&iLocal_388);
				Function_227(&iLocal_394);
				Function_227(&iLocal_391);
				iLocal_321 = 8;
			}
			break;
		
		case 0x00000008:
			Function_353();
			if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_644) || MEMORY_GET_IS_VISIBLE((*&Local_13 + 336)[72], Global_34573)) || Function_352(Global_34573, (*&Local_13 + 336)[72], 1, 1, 0, 3212836864))
			{
				MEMORY_ALLOW_TAKE_COVER((*&Local_13 + 336)[72], 0);
				iLocal_442 = 4;
				MEMORY_ALLOW_SHOOTING((*&Local_13 + 336)[72], true);
				TASK_CLEAR((*&Local_13 + 336)[72]);
				Function_336((*&Local_13 + 336)[72]);
				vLocal_423 = { StackVal, StackVal, Function_336((*&Local_13 + 336)[72]) };
				Function_351(Global_34573);
				bLocal_431 = Function_350(StackVal, StackVal, (*&Local_13 + 336)[72], Function_351(Global_34573));
				bLocal_443 = TASK_SEQUENCE_OPEN();
				TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_423, bLocal_431, 3.0f);
				TASK_KILL_CHAR(false, Global_34573);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_13 + 336)[72], bLocal_443);
				TASK_SEQUENCE_RELEASE(bLocal_443, 1);
				TASK_PRIORITY_SET(bLocal_339, true);
				SAY_SINGLE_LINE_STRING((*&Local_13 + 336)[72], "Grave03_ReachesBoss", true, false, 3, 0, true, false);
				Function_227(&iLocal_379);
				iLocal_321 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_349((*&Local_13 + 336)[72], 1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_339, false);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_339, 1);
				iLocal_460 = 1;
				bLocal_443 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(0, (*&Local_13 + 884)[3], 2.0f, 2, 1, 1);
				TASK_DRAW_HOLSTER_WEAPON(false, 0);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_339);
				TASK_SEQUENCE_PERFORM(bLocal_339, bLocal_443);
				TASK_SEQUENCE_RELEASE(bLocal_443, 1);
				TASK_PRIORITY_SET(bLocal_339, true);
				Function_227(&iLocal_379);
				iLocal_321 = 15;
			}
			break;
		
		case 0x0000000F:
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_648))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_279(&iLocal_379) < 10.0f)
				{
					Function_348(bLocal_410);
					Function_348(bLocal_411);
					Function_156(bLocal_410, 1);
					Function_156(bLocal_411, 1);
					SET_ACTOR_PROOF(bLocal_339, 16);
					FIRE_STOP_ON_ACTOR(bLocal_339);
					SET_ACTOR_PROOF(Global_34573, 16);
					FIRE_STOP_ON_ACTOR(Global_34573);
					if (Function_347("pax"))
					{
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_227(&iLocal_379);
					iLocal_321 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (Function_347("pax"))
			{
				if (HUD_IS_FADED())
				{
					bLocal_329 = true;
				}
			}
			else if (!HUD_IS_FADING())
			{
				Function_182();
				DESTROY_ACTOR((*&Local_13 + 336)[72]);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 0);
				iLocal_342[1] = 1;
				Function_227(&iLocal_379);
				iLocal_320 = 101;
				iLocal_321 = 3;
			}
			break;
	}
	return;
}

bool Function_347(bool bParam0) //Position: 0x11D16 / 72982
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_348(bool bParam0) //Position: 0x11D35 / 73013
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

bool Function_349(bool bParam0, int iParam1) //Position: 0x11D89 / 73097
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

bool Function_350(bool bParam0, vector3 vParam1) //Position: 0x11DD3 / 73171
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

vector3 Function_351(bool bParam0) //Position: 0x11E56 / 73302
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

bool Function_352(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x11EC0 / 73408
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

void Function_353() //Position: 0x11FAD / 73645
{
	if (Function_349((*&Local_13 + 336)[12], 1) && Function_349((*&Local_13 + 336)[02], 1))
	{
		if (IS_GRINGO_VALID(bLocal_421))
		{
			if (!GRINGO_IS_ACTIVATION_ALLOWED(bLocal_421))
			{
				GRINGO_ALLOW_ACTIVATION(bLocal_421, true);
			}
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 512)[11]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[11]))
		{
			TASK_KILL_CHAR((*&Local_13 + 336)[02], Global_34573);
			TASK_KILL_CHAR((*&Local_13 + 336)[12], Global_34573);
			DESTROY_VOLUME((*&Local_13 + 512)[11]);
		}
	}
	if (!iLocal_455)
	{
		if (MEMORY_GET_IS_VISIBLE((*&Local_13 + 336)[22], Global_34573))
		{
			Function_336((*&Local_13 + 336)[22]);
			vLocal_423 = { StackVal, StackVal, Function_336((*&Local_13 + 336)[22]) };
			TASK_SHOOT_FROM_POSITION((*&Local_13 + 336)[22], Global_34573, &vLocal_423);
			iLocal_455 = 1;
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 512)[13]))
	{
		if (!Function_349((*&Local_13 + 336)[52], 1))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_744))
			{
				Function_240((*&Local_13 + 1096)[8]);
				vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[8]) };
				TASK_CLEAR((*&Local_13 + 336)[52]);
				TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 336)[52], &vLocal_423, GET_OBJECT_HEADING((*&Local_13 + 1096)[8]), 3212836864);
				DESTROY_VOLUME((*&Local_13 + 512)[13]);
			}
			else if (!iLocal_456)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[13]))
				{
					TASK_CLEAR((*&Local_13 + 336)[52]);
					TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 336)[52], GET_COVER_LOCATION_FROM_OBJECT(Local_13.f_1144), -1.0f, 3.0f);
					iLocal_456 = 1;
				}
			}
			else if (iLocal_456)
			{
				if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[13]))
				{
					TASK_CLEAR((*&Local_13 + 336)[52]);
					TASK_HIDE_AT_COVER((*&Local_13 + 336)[52], GET_COVER_LOCATION_FROM_OBJECT(Local_13.f_1144), -1.0f, 6.0f, 0);
					if (!DECOR_CHECK_EXIST((*&Local_13 + 336)[52], "AiCoverDontPeek"))
					{
						DECOR_SET_BOOL((*&Local_13 + 336)[52], "AiCoverDontPeek", true);
					}
					iLocal_456 = 0;
				}
			}
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 512)[5]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[5]))
		{
			Function_240((*&Local_13 + 1096)[7]);
			vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[7]) };
			Function_351(Global_34573);
			bLocal_431 = Function_350(StackVal, StackVal, (*&Local_13 + 336)[52], Function_351(Global_34573));
			TASK_CLEAR((*&Local_13 + 336)[52]);
			MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[52], 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 336)[52], &vLocal_423, bLocal_431, 3212836864);
			DESTROY_VOLUME((*&Local_13 + 512)[5]);
			DESTROY_VOLUME((*&Local_13 + 512)[13]);
		}
	}
	if (!iLocal_465)
	{
		if (((((Function_352(Global_34573, (*&Local_13 + 336)[22], 1, 0, 0, 3212836864) || Function_352(Global_34573, (*&Local_13 + 336)[32], 1, 0, 0, 3212836864)) || Function_352(Global_34573, (*&Local_13 + 336)[42], 1, 0, 0, 3212836864)) || Function_352((*&Local_13 + 336)[22], Global_34573, 1, 0, 0, 3212836864)) || Function_352((*&Local_13 + 336)[32], Global_34573, 1, 0, 0, 3212836864)) || Function_352((*&Local_13 + 336)[42], Global_34573, 1, 0, 0, 3212836864))
		{
			AUDIO_MUSIC_SET_MOOD("GRAVE_GUNFIGHT_02_HIGH", 0, 4294967295, 4294967295);
			iLocal_465 = 1;
		}
	}
	if (!iLocal_466)
	{
		if ((Function_349((*&Local_13 + 336)[22], 1) && Function_349((*&Local_13 + 336)[32], 1)) && Function_349((*&Local_13 + 336)[42], 1))
		{
			AUDIO_MUSIC_SET_MOOD("GRAVE_GUNFIGHT_02", 0, 4294967295, 4294967295);
			iLocal_466 = 1;
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 512)[3]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[3]))
		{
			bLocal_443 = TASK_SEQUENCE_OPEN();
			Function_240((*&Local_13 + 1096)[6]);
			vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[6]) };
			TASK_GO_TO_OBJECT(0, (*&Local_13 + 1096)[6], 2, 1, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_423, GET_OBJECT_HEADING((*&Local_13 + 1096)[6]), 3.0f);
			TASK_CROUCH(false, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR((*&Local_13 + 336)[62]);
			TASK_SEQUENCE_PERFORM((*&Local_13 + 336)[62], bLocal_443);
			TASK_SEQUENCE_RELEASE(bLocal_443, 1);
			TASK_PRIORITY_SET((*&Local_13 + 336)[62], true);
			DESTROY_VOLUME((*&Local_13 + 512)[3]);
			DESTROY_VOLUME((*&Local_13 + 512)[4]);
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 512)[4]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[4]))
		{
			Function_240((*&Local_13 + 1096)[0]);
			vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[0]) };
			MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[62], 1);
			bLocal_443 = TASK_SEQUENCE_OPEN();
			TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&vLocal_423, 2.0f, GET_OBJECT_HEADING((*&Local_13 + 1096)[0]), 60.0f, 7), 2.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_423, GET_OBJECT_HEADING((*&Local_13 + 1096)[0]), -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR((*&Local_13 + 336)[62]);
			TASK_SEQUENCE_PERFORM((*&Local_13 + 336)[62], bLocal_443);
			TASK_SEQUENCE_RELEASE(bLocal_443, 1);
			TASK_PRIORITY_SET((*&Local_13 + 336)[62], true);
			DESTROY_VOLUME((*&Local_13 + 512)[3]);
			DESTROY_VOLUME((*&Local_13 + 512)[4]);
			DESTROY_VOLUME((*&Local_13 + 512)[5]);
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 512)[2]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[2]))
		{
			if (IS_ACTOR_VALID((*&Local_13 + 336)[42]))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_13 + 336)[42], -1.0f);
			}
			DESTROY_VOLUME((*&Local_13 + 512)[2]);
		}
	}
	if (iLocal_471)
	{
		if (IS_ACTOR_VALID((*&Local_13 + 336)[22]))
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME((*&Local_13 + 336)[22], (*&Local_13 + 512)[12]);
			bLocal_443 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(0, (*&Local_13 + 1096)[1], 2.0f, 2, 1, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR((*&Local_13 + 336)[22]);
			TASK_SEQUENCE_PERFORM((*&Local_13 + 336)[22], bLocal_443);
			TASK_SEQUENCE_RELEASE(bLocal_443, 1);
			TASK_PRIORITY_SET((*&Local_13 + 336)[22], true);
			iLocal_471 = 0;
		}
	}
	return;
}

int Function_354(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12550 / 75088
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
			if (Function_352(bParam0, bVar1, bParam2, bParam3, bParam4, bParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_355() //Position: 0x125B0 / 75184
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_WaitingForJonToGo", "Grave03_WaitingForJonToGo", false, 1, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_356(int iParam0) //Position: 0x12609 / 75273
{
	Function_357(0, Global_34573, iParam0, 0);
	Function_357(1, bLocal_339, iParam0, 0);
	Function_357(2, (*&Local_13 + 208)[02], iParam0, 0);
	Function_357(3, (*&Local_13 + 208)[12], iParam0, 0);
	Function_357(4, (*&Local_13 + 264)[12], iParam0, 0);
	Function_357(5, (*&Local_13 + 336)[22], iParam0, 0);
	Function_357(6, (*&Local_13 + 264)[12], iParam0, 0);
	Function_357(7, (*&Local_13 + 240)[12], iParam0, 0);
	Function_357(8, (*&Local_13 + 304)[02], iParam0, 0);
	Function_357(9, (*&Local_13 + 336)[52], iParam0, 0);
	return;
}

void Function_357(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1269A / 75418
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_155(uParam2, Function_141(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_358(bool bParam0, bool bParam1, bool bParam2) //Position: 0x126BF / 75455
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
				MEMORY_IDENTIFY(bParam0, bVar1);
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bParam0, bVar1, true);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_359() //Position: 0x12714 / 75540
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Grave03_FindsUnlockedDoor", "Grave03_FindsUnlockedDoor", true, 1, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_360(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x1276D / 75629
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

void Function_361() //Position: 0x127C0 / 75712
{
	bool bVar0;
	
	Function_366();
	Function_225(&Local_13 + 404, 0);
	Function_365(Local_13.f_404, 0);
	Function_364(Local_13.f_404);
	Function_363(&Local_13 + 404, 1);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_13.f_404, 2560);
	bLocal_415 = Local_13.f_404;
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_404))
	{
		COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(SQUAD_GET_ACTOR_BY_INDEX(Local_13.f_404, bVar0), 0);
		bVar0++;
	}
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 336)[02], 1);
	TASK_STAND_STILL((*&Local_13 + 336)[02], -1.0f, 0, 0);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 336)[12], 1);
	TASK_STAND_STILL((*&Local_13 + 336)[12], -1.0f, 0, 0);
	vLocal_423 = { -4093,665f, 38,481f, 2942,288f };
	TASK_POINT_GUN_AT_COORD((*&Local_13 + 336)[22], &vLocal_423, -1.0f);
	Function_362((*&Local_13 + 336)[22], 3212836864);
	Function_362((*&Local_13 + 336)[32], 3212836864);
	TASK_PRIORITY_SET((*&Local_13 + 336)[32], false);
	ADD_ACTOR_STAY_WITHIN_VOLUME((*&Local_13 + 336)[42], Local_13.f_652);
	Function_240((*&Local_13 + 1096)[1]);
	vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[1]) };
	bLocal_431 = GET_OBJECT_HEADING((*&Local_13 + 1096)[1]);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 336)[42], FIND_NEAREST_COVER_LOCATION(&vLocal_423, 2.0f, bLocal_431, 90.0f, 7), -1.0f, 1086324736);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_13 + 336)[62], 20, 1.0f);
	TASK_HIDE_AT_COVER((*&Local_13 + 336)[52], GET_COVER_LOCATION_FROM_OBJECT(Local_13.f_1144), -1.0f, 6.0f, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 336)[72]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[72], 8, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_13 + 336)[72], 8, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[72], 0);
	vLocal_423 = { -4088,459f, 40,499f, 2950,366f };
	TASK_POINT_GUN_AT_COORD((*&Local_13 + 336)[72], &vLocal_423, -1.0f);
	MEMORY_ALLOW_SHOOTING((*&Local_13 + 336)[72], false);
	TASK_PRIORITY_SET((*&Local_13 + 336)[72], true);
	bLocal_409 = CREATE_OBJECTSET_IN_LAYOUT("CorpseObjSet", bLocal_312, 4294967295, 0);
	DECOR_SET_OBJECT((*&Local_13 + 336)[72], "ReturnCorpse", bLocal_409);
	return;
}

void Function_362(bool bParam0, bool bParam1) //Position: 0x129C5 / 76229
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

void Function_363(var uParam0, bool bParam1) //Position: 0x129E0 / 76256
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_SQUAD_AI_COMBAT_SET_NEW_STATE_MACHINE was passed an invalid squad");
	}
	return;
}

void Function_364(bool bParam0) //Position: 0x12A7C / 76412
{
	bLocal_444 = false;
	while (bLocal_444 <= SQUAD_GET_SIZE(bParam0))
	{
		bLocal_417 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_444);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_417, 20, 0,8f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_417, 49, 6.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_417, 0,7f);
		bLocal_444++;
	}
	return;
}

void Function_365(bool bParam0, int iParam1) //Position: 0x12AC8 / 76488
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

void Function_366() //Position: 0x12AFF / 76543
{
	Local_13.f_404 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "nhouseGuys"));
	(*&Local_13 + 336)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "houseGuy_1", 507, -4094,222f, 37,21381f, 2948,28f, 0.0f, 246.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 336)[02], Local_13.f_404);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 336)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 336)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[02], 1);
	SET_ACTOR_FACTION((*&Local_13 + 336)[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[02], 0);
	(*&Local_13 + 336)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "houseGuy_2", 506, -4093,075f, 36,82227f, 2947,902f, 178,5827f, -59,84823f, -179,4288f);
	SQUAD_JOIN((*&Local_13 + 336)[12], Local_13.f_404);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 336)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[12], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 336)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[12], 1);
	SET_ACTOR_FACTION((*&Local_13 + 336)[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[12], 0);
	(*&Local_13 + 336)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "houseGuy_3", 507, -4082,036f, 37,21073f, 2938,076f, 0.0f, 116.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 336)[22], Local_13.f_404);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[22], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 336)[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[22], 1);
	SET_ACTOR_FACTION((*&Local_13 + 336)[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[22], 0);
	(*&Local_13 + 336)[32] = CREATE_ACTOR_IN_LAYOUT(Local_13, "houseGuy_5", 509, -4085,862f, 40,60736f, 2935,693f, 0.0f, 155,1318f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 336)[32], Local_13.f_404);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 336)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[32], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 336)[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[32], 1);
	SET_ACTOR_FACTION((*&Local_13 + 336)[32], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[32], 0);
	(*&Local_13 + 336)[42] = CREATE_ACTOR_IN_LAYOUT(Local_13, "houseGuy_7", 514, -4089,863f, 37,20628f, 2940,389f, 0.0f, 101,9665f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 336)[42], Local_13.f_404);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 336)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[42], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 336)[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[42], 1);
	SET_ACTOR_FACTION((*&Local_13 + 336)[42], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[42], 0);
	(*&Local_13 + 336)[52] = CREATE_ACTOR_IN_LAYOUT(Local_13, "houseGuy10", 508, -4090,121f, 40,62067f, 2949,701f, 0.0f, -30,83462f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 336)[52], Local_13.f_404);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 336)[52]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[52], 40, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 336)[52], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[52], 1);
	SET_ACTOR_FACTION((*&Local_13 + 336)[52], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[52], 0);
	(*&Local_13 + 336)[62] = CREATE_ACTOR_IN_LAYOUT(Local_13, "houseGuy_8", 511, -4099,772f, 40,58754f, 2941,927f, 0.0f, -27.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 336)[62], Local_13.f_404);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 336)[62]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[62], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 336)[62], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[62], 1);
	SET_ACTOR_FACTION((*&Local_13 + 336)[62], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[62], 0);
	(*&Local_13 + 336)[72] = CREATE_ACTOR_IN_LAYOUT(Local_13, "leader", 515, -4099,708f, 40,58543f, 2948,07f, 0.0f, 253.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 336)[72], Local_13.f_404);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 336)[72]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 336)[72], 41, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 336)[72], -1.0f, 0, 0);
	TASK_STAND_STILL((*&Local_13 + 336)[72], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 336)[72], 1);
	SET_ACTOR_FACTION((*&Local_13 + 336)[72], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 336)[72], 0);
	return;
}

bool Function_367(var uParam0, var uParam1, int iParam2) //Position: 0x12FCD / 77773
{
	return Function_368(Global_29006, uParam0, uParam1, iParam2);
}

int Function_368(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x12FDF / 77791
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_84(iParam0))
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

void Function_369(bool bParam0, bool bParam1) //Position: 0x1307B / 77947
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar3 = { 0.0f, 0.0f, 0.0f };
	GET_VOLUME_CENTER(bParam0, &vVar0);
	vVar3.f_4 = GET_VOLUME_HEADING(bParam0);
	GET_VOLUME_SCALE(bParam0, &vVar6);
	DESTROY_VOLUME(bParam0);
	CREATE_OBSTACLE_IN_LAYOUT(bParam1, Function_56(), vVar0, vVar3, vVar6);
	return;
}

void Function_370() //Position: 0x130B9 / 78009
{
	GRINGO_ALLOW_ACTIVATION(bLocal_421, false);
	bLocal_483 = ADD_BLIP_FOR_OBJECT(Local_13.f_1188, 335, 0f, 2, 0);
	SET_BLIP_PRIORITY(bLocal_483, 3);
	SET_BLIP_NAME(bLocal_483, "Grave03_Blip_Treasure");
	return;
}

void Function_371(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x130FC / 78076
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
	if (iParam3 != Global_34165.f_48 && !Function_376())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_375(0);
	Function_374();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_373(uParam4, iVar0, iVar1);
	Function_372();
}

void Function_372() //Position: 0x13199 / 78233
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

void Function_373(int iParam0, bool bParam1, bool bParam2) //Position: 0x131DA / 78298
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
	if (Function_84(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_45();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_374() //Position: 0x13340 / 78656
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_375(bool bParam0) //Position: 0x13364 / 78692
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

bool Function_376() //Position: 0x13393 / 78739
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_377() //Position: 0x133AE / 78766
{
	if (Function_338(Global_30628[1]))
	{
		if (IS_DOOR_VALID(Function_367("tumbleweed", "mansion", 1)))
		{
			bLocal_410 = Function_367("tumbleweed", "mansion", 1);
			CLOSE_DOOR_FAST(bLocal_410);
			Function_123(bLocal_410, 0);
		}
		if (IS_DOOR_VALID(Function_367("tumbleweed", "mansion", 2)))
		{
			bLocal_411 = Function_367("tumbleweed", "mansion", 2);
			CLOSE_DOOR_FAST(bLocal_411);
			Function_123(bLocal_411, 0);
		}
		if (IS_DOOR_VALID(Function_367("tumbleweed", "mansion", 9)))
		{
			bLocal_412 = Function_367("tumbleweed", "mansion", 9);
			CLOSE_DOOR_FAST(bLocal_412);
			Function_123(bLocal_412, 0);
		}
		if (IS_DOOR_VALID(Function_367("tumbleweed", "mansion", 8)))
		{
			bLocal_413 = Function_367("tumbleweed", "mansion", 8);
			Function_156(bLocal_413, 1);
			OPEN_DOOR_DIRECTION(bLocal_413, false);
			HIDE_PHYSINST(bLocal_413);
			DESTROY_OBJECT(bLocal_413);
		}
		if (IS_DOOR_VALID(Function_367("tumbleweed", "mansion", 4)))
		{
			bLocal_414 = Function_367("tumbleweed", "mansion", 4);
			Function_156(bLocal_414, 1);
			OPEN_DOOR_DIRECTION(bLocal_414, false);
			HIDE_PHYSINST(bLocal_414);
			DESTROY_OBJECT(bLocal_414);
		}
	}
	return;
}

int Function_378() //Position: 0x1355A / 79194
{
	Function_315(&Local_13 + 120, 507, 2, 0);
	Function_315(&Local_13 + 120, 506, 2, 0);
	Function_315(&Local_13 + 120, 509, 2, 0);
	Function_315(&Local_13 + 120, 514, 2, 0);
	Function_315(&Local_13 + 120, 508, 2, 0);
	Function_315(&Local_13 + 120, 511, 2, 0);
	Function_315(&Local_13 + 120, 515, 2, 0);
	if (Function_308(&Local_13 + 120))
	{
		return 1;
	}
	return 0;
}

void Function_379(bool bParam0) //Position: 0x135C8 / 79304
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
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_380() //Position: 0x1360C / 79372
{
	if (!iLocal_472[3])
	{
		if (IS_ACTOR_VALID((*&Local_13 + 336)[22]))
		{
			if (!Function_349((*&Local_13 + 336)[22], 1))
			{
				if (ACTORS_IN_RANGE(Global_34573, (*&Local_13 + 336)[22], 20.0f))
				{
					if (Function_383((*&Local_13 + 336)[22], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						iLocal_472[3] = 1;
						Function_382();
					}
				}
			}
		}
	}
	if (!iLocal_472[4])
	{
		if (IS_ACTOR_VALID((*&Local_13 + 336)[52]))
		{
			if (!Function_349((*&Local_13 + 336)[52], 1))
			{
				if (ACTORS_IN_RANGE(Global_34573, (*&Local_13 + 336)[52], 20.0f))
				{
					if (Function_383((*&Local_13 + 336)[52], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						iLocal_472[4] = 1;
						Function_381();
					}
				}
			}
		}
	}
	return;
}

void Function_381() //Position: 0x136D8 / 79576
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(9, "Grave03_TreasureHunterTaunts6", "Grave03_TreasureHunterTaunts6", false, 1, 1, 0, 1);
	Function_356(513);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_382() //Position: 0x1373C / 79676
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(5, "Grave03_TreasureHunterTaunts2", "Grave03_TreasureHunterTaunts2", false, 1, 1, 0, 1);
	Function_356(33);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_383(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1379E / 79774
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_384(bool bParam0) //Position: 0x137B8 / 79800
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (Function_386(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				Function_385(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_385(bool bParam0) //Position: 0x137FB / 79867
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!DECOR_CHECK_EXIST(bParam0, "blipped"))
		{
			if (((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bParam0)) > 1.0f || Function_352(bParam0, Global_34573, 1, 0, 0, 3212836864)) || MEMORY_GET_IS_VISIBLE(bParam0, Global_34573))
			{
				DECOR_SET_BOOL(bParam0, "blipped", true);
				bLocal_422 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SET_BLIP_IMPAIRMENT_MASK(bLocal_422, 690824);
			}
		}
	}
	return;
}

int Function_386(bool bParam0) //Position: 0x1386D / 79981
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

void Function_387() //Position: 0x138BD / 80061
{
	if (!iLocal_460)
	{
		if (IS_ACTOR_SHOOTING(Global_34573))
		{
			Function_227(&iLocal_394);
		}
		if (Function_279(&iLocal_385) < 1.0f)
		{
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE()) && Function_279(&iLocal_391) < 15.0f)
			{
				if (Function_394(Global_34573, bLocal_339) < 24.0f)
				{
					Function_393();
					Function_227(&iLocal_391);
				}
				else if (Function_392() && IS_AI_ACTOR_ENGAGED_IN_COMBAT(bLocal_339))
				{
					if (Function_279(&iLocal_394) < 20.0f)
					{
						Function_391();
						Function_227(&iLocal_394);
						Function_227(&iLocal_391);
					}
					else if (RAND_FLOAT_RANGE(1.0f, 500.0f) < 250.0f)
					{
						Function_390();
						Function_227(&iLocal_391);
					}
					else
					{
						Function_389();
						Function_227(&iLocal_391);
					}
				}
				else
				{
					Function_355();
					Function_227(&iLocal_391);
				}
				Function_227(&iLocal_385);
			}
		}
	}
	else if (!iLocal_458)
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_339, 15.0f))
		{
			Function_388();
			iLocal_458 = 1;
		}
	}
	return;
}

void Function_388() //Position: 0x139A4 / 80292
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_ReturnedTreasureSeth", "Grave03_ReturnedTreasureSeth", false, 1, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_389() //Position: 0x13A03 / 80387
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_SethShoutsEncJon", "Grave03_SethShoutsEncJon", false, 2, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_390() //Position: 0x13A5A / 80474
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_SethTauntsAttackers", "Grave03_SethTauntsAttackers", false, 2, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_391() //Position: 0x13AB7 / 80567
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_JonNoShootGF", "Grave03_JonNoShootGF", false, 2, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_392() //Position: 0x13B06 / 80646
{
	if (iLocal_320 == 0)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_236) >= 0)
		{
			return 1;
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_332) >= 0)
		{
			return 1;
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_300) >= 0)
		{
			return 1;
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_260) >= 0)
		{
			return 1;
		}
		if (!Function_349((*&Local_13 + 240)[12], 1))
		{
			return 1;
		}
		return 0;
	}
	if (SQUAD_IS_VALID(Local_13.f_404))
	{
		return SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_404) < 0;
	}
	return 0;
}

void Function_393() //Position: 0x13B89 / 80777
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_RunsAwayGF", "Grave03_RunsAwayGF", false, 2, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

float Function_394(bool bParam0, bool bParam1) //Position: 0x13BD4 / 80852
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

void Function_395() //Position: 0x13CC5 / 81093
{
	switch (iLocal_446)
	{
		case 0x00000000:
			if (IS_BLIP_VALID(bLocal_482))
			{
				if (IS_BLIP_VISIBLE(bLocal_482))
				{
					if (IS_VOLUME_VALID(Local_13.f_628))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_628) && !Function_392())
						{
							if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
							{
								DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(Global_34573));
								SCRIPT_BREAKPOINT("DESTROY GUY ON SHOULDER");
							}
							Function_400(Local_13, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
							Function_398(-4085,193f, 38,739f, 2949,181f, 0,213f, -0,075f, -0,974f, 0x40a00000, 0, 1);
							HUD_ENABLE(false);
							Function_240((*&Local_13 + 752)[8]);
							vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 752)[8]) };
							bLocal_431 = GET_OBJECT_HEADING((*&Local_13 + 752)[8]);
							SET_ANIM_SET_FOR_ACTOR(Global_34573, "door_locked", 1);
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							SET_MOVER_FROZEN(Global_34573, true);
							TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_423, bLocal_431, 0, true, 1);
							SET_ACTION_NODE_FOR_ACTOR(Global_34573, "door_locked");
							AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_339, 1);
							TASK_CLEAR(bLocal_339);
							TASK_STAND_STILL(bLocal_339, -1.0f, 0, 0);
							AI_GOAL_LOOK_AT_ACTOR(bLocal_339, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
							Function_240((*&Local_13 + 752)[6]);
							TELEPORT_ACTOR_WITH_HEADING(bLocal_339, Function_240((*&Local_13 + 752)[6]), GET_OBJECT_HEADING((*&Local_13 + 752)[6]), 1, true, 1);
							SET_ANIM_SET_FOR_ACTOR(bLocal_339, "Grave03_Seth_idle", 0);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_339, "Grave03_Seth_idle");
							Function_227(&iLocal_391);
							iLocal_446 = 1;
							Function_227(&iLocal_385);
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "door_locked"))
			{
				if (IS_BLIP_VALID(bLocal_482))
				{
					REMOVE_BLIP(bLocal_482);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					HUD_CLEAR_OBJECTIVE();
				}
				iLocal_446 = 2;
				Function_227(&iLocal_391);
				Function_227(&iLocal_385);
			}
			break;
		
		case 0x00000002:
			if (Function_279(&iLocal_385) <= 0.0f)
			{
				Function_397();
				ADD_BLIP_FOR_OBJECT(Local_13.f_632, 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(Local_13.f_632), 3);
				SET_MOVER_FROZEN(Global_34573, false);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				HUD_ENABLE(true);
				AI_GOAL_LOOK_CLEAR(bLocal_339);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_339, "Grave03_Seth_idle", 0);
				iLocal_446 = 3;
				Function_227(&iLocal_385);
			}
			break;
		
		case 0x00000003:
			if (!iLocal_461)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "door_locked") || Function_279(&iLocal_385) <= 2.0f)
				{
					Function_396(1, 1);
					iLocal_461 = 1;
				}
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!bLocal_468)
				{
					DESTROY_VOLUME(Local_13.f_628);
				}
				Function_360("Grave03_obj04", 0x40f00000, 1, 2, 0, 0, 0);
				iLocal_446 = 4;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_461)
			{
				Function_396(1, 1);
				iLocal_461 = 1;
				iLocal_446 = 5;
			}
			break;
	}
	return;
}

void Function_396(bool bParam0, bool bParam1) //Position: 0x13FCE / 81870
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

void Function_397() //Position: 0x1401D / 81949
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Grave03_FindsDoorLocked", "Grave03_FindsDoorLocked", true, 1, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_398(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, var uParam8) //Position: 0x14072 / 82034
{
	Function_399(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
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

void Function_399(bool bParam0) //Position: 0x14161 / 82273
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_400(bool bParam0, float fParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0x14172 / 82290
{
	Function_396(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_56(), 2, 1);
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

void Function_401() //Position: 0x1424B / 82507
{
	Function_402();
	if (iLocal_442 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[0]) || bLocal_448)
		{
			Function_336(bLocal_339);
			Function_240((*&Local_13 + 864)[1]);
			if (VDIST(Function_336(bLocal_339), Function_240((*&Local_13 + 864)[1])) <= 5.0f && !IS_ACTOR_IN_VOLUME(bLocal_339, Local_13.f_656))
			{
				Function_240((*&Local_13 + 864)[1]);
				TELEPORT_ACTOR_WITH_HEADING(bLocal_339, Function_240((*&Local_13 + 864)[1]), GET_OBJECT_HEADING((*&Local_13 + 864)[1]), 0, true, 1);
			}
			RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
			Function_240((*&Local_13 + 1036)[0]);
			vLocal_426 = { StackVal, StackVal, Function_240((*&Local_13 + 1036)[0]) };
			bLocal_420 = FIND_NEAREST_COVER_LOCATION(&vLocal_426, 2.0f, 330.0f, 20.0f, 7);
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_339, false);
			bLocal_443 = TASK_SEQUENCE_OPEN();
			Function_240((*&Local_13 + 1096)[6]);
			vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 1096)[6]) };
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_1184, 1, 0, 0, 0, false);
			TASK_HIDE_AT_COVER(false, bLocal_420, -1.0f, 6f, 1);
			TASK_CROUCH(false, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_339);
			TASK_SEQUENCE_PERFORM(bLocal_339, bLocal_443);
			TASK_SEQUENCE_RELEASE(bLocal_443, 1);
			TASK_PRIORITY_SET(bLocal_339, true);
			Function_227(&iLocal_391);
			iLocal_442 = 1;
		}
	}
	else if (iLocal_442 == 1)
	{
		if (Function_349((*&Local_13 + 336)[02], 1) && Function_349((*&Local_13 + 336)[12], 1))
		{
			if (iLocal_447 < 0 || bLocal_448)
			{
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_339, true);
				Function_240((*&Local_13 + 1036)[2]);
				vLocal_426 = { StackVal, StackVal, Function_240((*&Local_13 + 1036)[2]) };
				bLocal_420 = FIND_NEAREST_COVER_LOCATION(&vLocal_426, 2.0f, 330.0f, 20.0f, 7);
				TASK_CLEAR(bLocal_339);
				TASK_HIDE_AT_COVER(bLocal_339, bLocal_420, -1.0f, 6.0f, 0);
				TASK_PRIORITY_SET(bLocal_339, true);
				if (!bLocal_448)
				{
					AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				}
				Function_389();
				Function_227(&iLocal_391);
				iLocal_442 = 2;
			}
		}
	}
	else if (iLocal_442 == 2)
	{
		if ((Function_349((*&Local_13 + 336)[32], 1) && Function_349((*&Local_13 + 336)[42], 1)) && Function_349((*&Local_13 + 336)[22], 1))
		{
			if (iLocal_447 >= 1)
			{
				Function_240((*&Local_13 + 1036)[4]);
				vLocal_426 = { StackVal, StackVal, Function_240((*&Local_13 + 1036)[4]) };
				bLocal_420 = FIND_NEAREST_COVER_LOCATION(&vLocal_426, 2.0f, 220.0f, 30.0f, 7);
				if (IS_ACTOR_VALID((*&Local_13 + 336)[22]))
				{
					Function_351((*&Local_13 + 336)[22]);
					vLocal_423 = { StackVal, StackVal, Function_351((*&Local_13 + 336)[22]) };
				}
				bLocal_443 = TASK_SEQUENCE_OPEN();
				TASK_HIDE_AT_COVER(false, bLocal_420, 4.0f, 6f, 1);
				TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_420, -1.0f, 1086324736);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_339);
				TASK_SEQUENCE_PERFORM(bLocal_339, bLocal_443);
				TASK_SEQUENCE_RELEASE(bLocal_443, 1);
				TASK_PRIORITY_SET(bLocal_339, true);
				Function_390();
				Function_227(&iLocal_391);
				iLocal_442 = 3;
			}
		}
	}
	else if (iLocal_442 == 3)
	{
		if (Function_349((*&Local_13 + 336)[52], 1))
		{
			if (iLocal_447 >= 2)
			{
				Function_240((*&Local_13 + 1036)[5]);
				vLocal_426 = { StackVal, StackVal, Function_240((*&Local_13 + 1036)[5]) };
				bLocal_420 = FIND_NEAREST_COVER_LOCATION(&vLocal_426, 5.0f, 150.0f, 30.0f, 7);
				TASK_CLEAR(bLocal_339);
				TASK_HIDE_AT_COVER(bLocal_339, bLocal_420, -1.0f, 6f, 1);
				Function_390();
				Function_227(&iLocal_391);
				iLocal_442 = 4;
			}
		}
	}
	return;
}

void Function_402() //Position: 0x1451D / 83229
{
	if (IS_VOLUME_VALID((*&Local_13 + 716)[0]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 716)[0]))
		{
			iLocal_447 = 1;
			DESTROY_VOLUME((*&Local_13 + 716)[0]);
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 716)[1]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 716)[1]))
		{
			iLocal_447 = 2;
			iLocal_471 = 1;
			DESTROY_VOLUME((*&Local_13 + 716)[1]);
			DESTROY_VOLUME((*&Local_13 + 716)[0]);
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 716)[2]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 716)[2]))
		{
			iLocal_447 = 3;
			DESTROY_VOLUME((*&Local_13 + 716)[2]);
			DESTROY_VOLUME((*&Local_13 + 716)[3]);
			DESTROY_VOLUME((*&Local_13 + 716)[1]);
			DESTROY_VOLUME((*&Local_13 + 716)[0]);
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 716)[3]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 716)[3]))
		{
			iLocal_447 = 3;
			DESTROY_VOLUME((*&Local_13 + 716)[2]);
			DESTROY_VOLUME((*&Local_13 + 716)[3]);
			DESTROY_VOLUME((*&Local_13 + 716)[1]);
			DESTROY_VOLUME((*&Local_13 + 716)[0]);
		}
	}
	return;
}

bool Function_403(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1462C / 83500
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_410(Global_34573, bParam3, iParam2))
	{
		Function_233(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_410(Global_34573, bParam3, bParam1))
	{
		if (!Function_409(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_360(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_408(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_407(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_407(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_409(2))
	{
		Function_406(2);
		if (!Function_405())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_404();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_25(bParam3);
				Function_219(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_407(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_407(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_404() //Position: 0x147C0 / 83904
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

bool Function_405() //Position: 0x147EB / 83947
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

void Function_406(bool bParam0) //Position: 0x1482F / 84015
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_39(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_407(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x14892 / 84114
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

void Function_408(bool bParam0) //Position: 0x14933 / 84275
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_79(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_409(bool bParam0) //Position: 0x14996 / 84374
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_155(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_410(bool bParam0, bool bParam1, bool bParam2) //Position: 0x149DD / 84445
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

int Function_411(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, var uParam13) //Position: 0x14AEE / 84718
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_414(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_415()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
		if ((uParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_76(StackVal, StackVal, vVar16))
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
					Function_412();
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
	else if ((!Function_414(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_415()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_414(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_412() //Position: 0x14D34 / 85300
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
			Function_413(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_413(char* cParam0, vector3 vParam1) //Position: 0x14D88 / 85384
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

bool Function_414(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x14EB0 / 85680
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_351(bParam0);
		if (VDIST(Function_351(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_415() //Position: 0x14F3A / 85818
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_416() //Position: 0x14F49 / 85833
{
	Function_436();
	switch (iLocal_321)
	{
		case 0x00000000:
			Function_342(0);
			if (Function_284(&Local_313))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				CLEAR_ACTOR_MIN_SPEED(bLocal_339);
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_339();
				bLocal_341 = Global_30628[1];
				if (!Function_338(bLocal_341))
				{
					Function_337(&Local_313);
				}
				Function_227(&iLocal_379);
				iLocal_321 = 1;
			}
			else
			{
				Function_227(&iLocal_379);
				iLocal_321 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_338(bLocal_341) || bLocal_341 != 4294967295))
			{
				if (Function_314())
				{
					if (Function_222())
					{
						Function_227(&iLocal_379);
						iLocal_321 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_325();
			Function_435();
			Function_227(&iLocal_379);
			iLocal_321 = 6;
			break;
		
		case 0x00000006:
			if (!Global_3415)
			{
				if (Function_29(19, 0))
				{
					Function_434();
					Global_3415 = 1;
				}
			}
			Function_227(&iLocal_379);
			iLocal_321 = 7;
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_433();
				Function_227(&iLocal_379);
				iLocal_321 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_360("Grave03_obj_return_house", 0x40f00000, 1, 2, 0, 0, 0);
				bLocal_482 = ADD_BLIP_FOR_OBJECT(Local_13.f_628, 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(Local_13.f_628), 3);
				Function_227(&iLocal_379);
				iLocal_321 = 9;
			}
			break;
		
		case 0x00000009:
			if (iLocal_445 > 2)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_236) > 1 || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 680)[4]))
				{
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_432();
					if (!iLocal_452)
					{
						Function_427();
					}
					Function_227(&iLocal_379);
					iLocal_321 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_421();
			if (Function_279(&iLocal_379) < 1.0f)
			{
				if (!iLocal_449)
				{
					if (Function_394(Global_34573, (*&Local_13 + 264)[12]) > 35.0f)
					{
						bLocal_444 = false;
						while (bLocal_444 <= SQUAD_GET_SIZE(Local_13.f_300))
						{
							TASK_CROUCH(SQUAD_GET_ACTOR_BY_INDEX(Local_13.f_300, bLocal_444), RAND_FLOAT_RANGE(1.0f, 5.0f));
							bLocal_444++;
						}
						iLocal_449 = 1;
					}
				}
			}
			if (!iLocal_467)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_712) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_236) > 1)
				{
					if (!Function_349((*&Local_13 + 208)[22], 1))
					{
						TASK_SHOOT_ENEMIES_FROM_PREFERRED_COVER((*&Local_13 + 208)[22], GET_COVER_LOCATION_FROM_OBJECT(Local_13.f_1164), -1.0f, 1086324736);
					}
					iLocal_467 = 1;
					Function_377();
				}
			}
			if (!iLocal_463)
			{
				if (Function_354(Global_34573, Local_13.f_332, 1, 1, 0, 3212836864) || Function_420(Local_13.f_332, Global_34573, 1, 1, 1))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
					AUDIO_SET_PLAYER_MOOD(1, 0);
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					iLocal_463 = 1;
				}
			}
			if (!iLocal_464)
			{
				if (!Function_392())
				{
					if (!IS_BLIP_VALID(bLocal_482))
					{
						bLocal_482 = ADD_BLIP_FOR_OBJECT(Local_13.f_628, 330, 0f, 2, 0);
						SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(Local_13.f_628), 3);
					}
					Function_360("Grave03_obj_return_house", 0x40f00000, 1, 2, 0, 0, 0);
					AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
					bLocal_470 = true;
					iLocal_464 = 1;
				}
			}
			if (bLocal_470)
			{
				if (IS_BLIP_VISIBLE(bLocal_482))
				{
					if (IS_VOLUME_VALID(Local_13.f_628) && !iLocal_453)
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_628))
						{
							iLocal_453 = 1;
						}
					}
				}
				if (IS_VOLUME_VALID((*&Local_13 + 512)[9]))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[9]))
					{
						DESTROY_VOLUME((*&Local_13 + 512)[9]);
						AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
					}
				}
				if (IS_VOLUME_VALID(Local_13.f_632))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_632))
					{
						DESTROY_VOLUME(Local_13.f_632);
						iLocal_453 = 1;
						Function_359();
						Function_417();
						Function_227(&iLocal_391);
						Function_227(&iLocal_379);
						Function_227(&iLocal_388);
						iLocal_321 = 106;
					}
				}
			}
			if (IS_VOLUME_VALID((*&Local_13 + 512)[6]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 512)[6]))
				{
					DESTROY_VOLUME((*&Local_13 + 512)[6]);
					iLocal_453 = 1;
					bLocal_448 = true;
					Function_219(Local_13.f_632);
					Function_359();
					Function_417();
					Function_227(&iLocal_391);
					Function_227(&iLocal_379);
					Function_227(&iLocal_388);
					iLocal_321 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_342[0] = 1;
			Function_227(&iLocal_379);
			Function_183();
			iLocal_320 = 1;
			iLocal_321 = 2;
			break;
	}
	return;
}

void Function_417() //Position: 0x153B6 / 86966
{
	Function_219(Local_13.f_628);
	if (SQUAD_IS_VALID(Local_13.f_260))
	{
		Function_419(Local_13.f_260);
		Function_418(&Local_13 + 260, 0, 0);
	}
	if (SQUAD_IS_VALID(Local_13.f_300))
	{
		Function_419(Local_13.f_300);
		Function_418(&Local_13 + 300, 0, 0);
	}
	if (SQUAD_IS_VALID(Local_13.f_332))
	{
		Function_419(Local_13.f_332);
		Function_418(&Local_13 + 332, 0, 0);
	}
	return;
}

void Function_418(var uParam0, bool bParam1, bool bParam2) //Position: 0x1541B / 87067
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
				if (!Function_383(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_419(bool bParam0) //Position: 0x15497 / 87191
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
			Function_25(bVar1);
		}
		bVar0++;
	}
	return;
}

int Function_420(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x154CE / 87246
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
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_352(bVar1, bParam1, bParam2, bParam3, bParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_421() //Position: 0x15531 / 87345
{
	if (!iLocal_472[0])
	{
		if (IS_ACTOR_VALID((*&Local_13 + 264)[12]))
		{
			if (!Function_349((*&Local_13 + 264)[12], 1))
			{
				if (ACTORS_IN_RANGE(Global_34573, (*&Local_13 + 264)[12], 20.0f))
				{
					if (Function_383((*&Local_13 + 264)[12], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if ((Function_426() % 2) <= 1)
						{
							Function_425();
						}
						else
						{
							Function_424();
						}
						iLocal_472[0] = 1;
					}
				}
			}
		}
	}
	if (!iLocal_472[1])
	{
		if (IS_ACTOR_VALID((*&Local_13 + 240)[12]))
		{
			if (!Function_349((*&Local_13 + 240)[12], 1))
			{
				if (ACTORS_IN_RANGE(Global_34573, (*&Local_13 + 240)[12], 20.0f))
				{
					if (Function_383((*&Local_13 + 240)[12], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_423();
						iLocal_472[1] = 1;
					}
				}
			}
		}
	}
	if (!iLocal_472[2])
	{
		if (IS_ACTOR_VALID((*&Local_13 + 304)[02]))
		{
			if (!Function_349((*&Local_13 + 304)[02], 1))
			{
				if (ACTORS_IN_RANGE(Global_34573, (*&Local_13 + 304)[02], 20.0f))
				{
					if (Function_383((*&Local_13 + 304)[02], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						iLocal_472[2] = 1;
						Function_422();
					}
				}
			}
		}
	}
	return;
}

void Function_422() //Position: 0x1566B / 87659
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(8, "Grave03_TreasureHunterTaunts5", "Grave03_TreasureHunterTaunts5", false, 1, 1, 0, 1);
	Function_356(257);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_423() //Position: 0x156CF / 87759
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(7, "Grave03_TreasureHunterTaunts4", "Grave03_TreasureHunterTaunts4", false, 1, 1, 0, 1);
	Function_356(129);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_424() //Position: 0x15731 / 87857
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(4, "Grave03_TreasureHunterTaunts3", "Grave03_TreasureHunterTaunts3", false, 1, 1, 0, 1);
	Function_356(17);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_425() //Position: 0x15793 / 87955
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(4, "Grave03_TreasureHunterTaunts1", "Grave03_TreasureHunterTaunts1", false, 1, 1, 0, 1);
	Function_356(17);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_426() //Position: 0x157F5 / 88053
{
	return Global_34165.f_56;
}

void Function_427() //Position: 0x15800 / 88064
{
	Function_431();
	Function_430();
	Function_429();
	Function_363(&Local_13 + 260, 1);
	Function_363(&Local_13 + 300, 1);
	Function_363(&Local_13 + 332, 1);
	Function_364(Local_13.f_260);
	Function_364(Local_13.f_300);
	Function_364(Local_13.f_332);
	SQUAD_LEAVE((*&Local_13 + 240)[12]);
	Function_362((*&Local_13 + 240)[12], 3212836864);
	Function_428(&Local_13 + 240[12], Global_34573, 1);
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_13 + 240)[12], true);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_13.f_260, false, (*&Local_13 + 488)[0], 4, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_13.f_260, 0, (*&Local_13 + 488)[0], 4294967295);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_13.f_300, 0, (*&Local_13 + 488)[2], 4294967295);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_13.f_332, 0, (*&Local_13 + 488)[3], 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_13.f_332, false, (*&Local_13 + 488)[3], 4, 0);
	DECOR_SET_INT(Local_13.f_300, "curVol", 3);
	DECOR_SET_INT(Local_13.f_332, "curVol", 4);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_13.f_260, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_13.f_300, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_13.f_332, 1);
	return;
}

void Function_428(var uParam0, bool bParam1, bool bParam2) //Position: 0x15919 / 88345
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_351(bParam1);
			vVar0 = { StackVal, StackVal, Function_351(bParam1) };
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

void Function_429() //Position: 0x15A21 / 88609
{
	Local_13.f_332 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "bg_hunters_3"));
	(*&Local_13 + 304)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg3_hunter_2", 513, -3987,396f, 28,20847f, 2940f, -292,2352f, -90,42974f, 292,5006f);
	SQUAD_JOIN((*&Local_13 + 304)[02], Local_13.f_332);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 304)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 304)[02], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 304)[02], 1);
	SET_ACTOR_FACTION((*&Local_13 + 304)[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 304)[02], 0);
	TASK_CROUCH((*&Local_13 + 304)[02], -1.0f);
	(*&Local_13 + 304)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg3_hunter_3", 507, -3991,72f, 28,77672f, 2928,981f, 0,4012431f, -187,5269f, 0,3174013f);
	SQUAD_JOIN((*&Local_13 + 304)[12], Local_13.f_332);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 304)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 304)[12], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 304)[12], 1);
	SET_ACTOR_FACTION((*&Local_13 + 304)[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 304)[12], 0);
	TASK_CROUCH((*&Local_13 + 304)[12], -1.0f);
	(*&Local_13 + 304)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg3_hunter_4", 506, -3993,362f, 29,28168f, 2955f, -0,8776791f, -63,04834f, 1,047207f);
	SQUAD_JOIN((*&Local_13 + 304)[22], Local_13.f_332);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 304)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 304)[22], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 304)[22], 1);
	SET_ACTOR_FACTION((*&Local_13 + 304)[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 304)[22], 0);
	TASK_CROUCH((*&Local_13 + 304)[22], -1.0f);
	return;
}

void Function_430() //Position: 0x15C1A / 89114
{
	Local_13.f_300 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "bg_hunters_2"));
	(*&Local_13 + 264)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg2_hunter_2", 506, -4056f, 30,98066f, 2956,746f, -1,620569f, -75,78913f, 1,835844f);
	SQUAD_JOIN((*&Local_13 + 264)[02], Local_13.f_300);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 264)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 264)[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 264)[02], 1);
	SET_ACTOR_FACTION((*&Local_13 + 264)[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 264)[02], 0);
	TASK_CROUCH((*&Local_13 + 264)[02], -1.0f);
	(*&Local_13 + 264)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg2_hunter_3", 508, -4025,926f, 28,42418f, 2940f, -1,054637f, -67,83989f, 1,241591f);
	SQUAD_JOIN((*&Local_13 + 264)[12], Local_13.f_300);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 264)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 264)[12], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 264)[12], 1);
	SET_ACTOR_FACTION((*&Local_13 + 264)[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 264)[12], 0);
	TASK_CROUCH((*&Local_13 + 264)[12], -1.0f);
	(*&Local_13 + 264)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg1_hunter_5", 505, -4039,451f, 30,08911f, 2959,956f, 0.0f, -60,36108f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 264)[22], Local_13.f_300);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 264)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 264)[22], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 264)[22], 1);
	SET_ACTOR_FACTION((*&Local_13 + 264)[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 264)[22], 0);
	TASK_CROUCH((*&Local_13 + 264)[22], -1.0f);
	(*&Local_13 + 264)[32] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg1_hunter_6", 509, -4056f, 30,98065f, 2954,006f, 0.0f, -77,64235f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 264)[32], Local_13.f_300);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 264)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 264)[32], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 264)[32], 1);
	SET_ACTOR_FACTION((*&Local_13 + 264)[32], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 264)[32], 0);
	TASK_CROUCH((*&Local_13 + 264)[32], -1.0f);
	return;
}

void Function_431() //Position: 0x15EA0 / 89760
{
	Local_13.f_260 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "bg_hunters_1"));
	(*&Local_13 + 240)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg1_hunter_2", 512, -4074,548f, 35,11081f, 2947,974f, 2,207938f, 259,6183f, -1,906986f);
	SQUAD_JOIN((*&Local_13 + 240)[02], Local_13.f_260);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 240)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 240)[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 240)[02], 1);
	SET_ACTOR_FACTION((*&Local_13 + 240)[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 240)[02], 0);
	TASK_CROUCH((*&Local_13 + 240)[02], -1.0f);
	(*&Local_13 + 240)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "bg1_hunter_7", 510, -4086,04f, 40,56728f, 2947,351f, -179,0683f, -64,72552f, 179,4223f);
	SQUAD_JOIN((*&Local_13 + 240)[12], Local_13.f_260);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_13 + 240)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 240)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 240)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_VISION_XRAY((*&Local_13 + 240)[12], true);
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_13 + 240)[12], true);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 240)[12], 1);
	SET_ACTOR_FACTION((*&Local_13 + 240)[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 240)[12], 0);
	TASK_CROUCH((*&Local_13 + 240)[12], -1.0f);
	return;
}

void Function_432() //Position: 0x1600E / 90126
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_GoFindTreasure", "Grave03_GoFindTreasure", false, 1, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_433() //Position: 0x16061 / 90209
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_TreasureMansion", "Grave03_TreasureMansion", false, 2, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_434() //Position: 0x160B6 / 90294
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_435() //Position: 0x160CE / 90318
{
	Function_378();
	Function_239(iLocal_320);
	Function_371(StackVal, StackVal, Function_239(iLocal_320), iLocal_320, Global_30628[1], Function_242(iLocal_320), 0);
	Function_222();
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_339, true);
	if (!IS_OBJECT_VALID(bLocal_407))
	{
		bLocal_407 = CREATE_PROP_IN_LAYOUT(bLocal_312, "coffinCorpse02x0", "p_gen_coffinCorpse02x", -3912,762f, 30,46479f, 2899,567f, 0.0f, -135.0f, 0.0f, 1);
	}
	RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
	SET_ANIM_SET_FOR_ACTOR(bLocal_339, "wave", 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_339, 8, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_339, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_339, 53, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_339, 54, 0.0f);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_339, Local_13.f_1180, 1, 0, 0, 1, false);
	SQUAD_GOAL_ADD_BATTLE_ALLIES(bLocal_416, 2, Global_34573, 1);
	Function_123(Function_367("tumbleweed", "mansion", 3), 1);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	Function_276(1.0f);
	return;
}

void Function_436() //Position: 0x161D7 / 90583
{
	if (iLocal_321 < 4 && iLocal_321 > 105)
	{
		Function_451();
		if (Function_403(&iLocal_385, 60.0f, 120.0f, bLocal_339, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_331, 0, bLocal_312, Local_13, 325, 0))
		{
			if (iLocal_321 <= 10)
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(bLocal_482))
				{
					REMOVE_BLIP(bLocal_482);
				}
				if (!iLocal_452)
				{
					Function_427();
				}
				iLocal_478 = 1;
				Function_227(&iLocal_379);
				iLocal_321 = 10;
			}
		}
		else if (iLocal_478)
		{
			Function_360("Grave03_obj02", 0x40f00000, 1, 2, 0, 0, 0);
			Function_450(Local_13.f_236, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			iLocal_478 = 0;
		}
		if (iLocal_321 >= 9)
		{
			Function_441();
			Function_439();
			Function_385((*&Local_13 + 240)[12]);
			Function_437(Local_13.f_260);
			Function_437(Local_13.f_300);
			Function_437(Local_13.f_332);
			Function_395();
		}
	}
	return;
}

void Function_437(bool bParam0) //Position: 0x162FB / 90875
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		if (!DECOR_CHECK_EXIST(bParam0, "blipped"))
		{
			bVar0 = false;
			while (bVar0 < (Function_386(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bVar1)) > 1.0f || Function_438(bParam0, Global_34573))
				{
					if (!DECOR_CHECK_EXIST(bParam0, "blipped"))
					{
						DECOR_SET_BOOL(bParam0, "blipped", true);
						Function_450(bParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0, 690824);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

int Function_438(bool bParam0, bool bParam1) //Position: 0x1639C / 91036
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
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1) && MEMORY_GET_IS_VISIBLE(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_439() //Position: 0x163F2 / 91122
{
	if (!Function_281(&iLocal_400))
	{
		Function_440(&iLocal_400);
	}
	else if (Function_279(&iLocal_400) < 2.0f)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_415) <= 1)
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_332) >= 0)
			{
				bLocal_415 = Local_13.f_332;
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_300) >= 0)
			{
				bLocal_415 = Local_13.f_300;
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_13.f_260) >= 0)
			{
				bLocal_415 = Local_13.f_260;
			}
		}
		Function_227(&iLocal_400);
	}
	return;
}

void Function_440(int iParam0) //Position: 0x16468 / 91240
{
	if (!Function_281(iParam0))
	{
		Function_228(iParam0, 0.0f);
	}
	return;
}

void Function_441() //Position: 0x1647D / 91261
{
	if (IS_OBJECT_VALID(Local_13.f_624))
	{
		if (IS_VOLUME_VALID(Local_13.f_640))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_640))
			{
				if (iLocal_445 <= 1)
				{
					iLocal_445 = 1;
				}
				DESTROY_VOLUME(Local_13.f_640);
				if (Function_449(Local_13.f_332) < 0)
				{
					Function_448(Local_13.f_332, &Local_13 + 908);
				}
			}
		}
		if (IS_VOLUME_VALID(Local_13.f_636))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_13.f_636))
			{
				if (iLocal_445 <= 1)
				{
					iLocal_445 = 1;
				}
				DESTROY_VOLUME(Local_13.f_636);
				DESTROY_VOLUME(Local_13.f_640);
			}
		}
		if (Function_446(Global_34573, Local_13.f_624, 35.0f))
		{
			Function_445(Local_13.f_236);
			Function_444(Local_13.f_236, 0);
			Function_444(Local_13.f_332, 0);
			Function_444(Local_13.f_300, 0);
		}
		else if (Function_446(Global_34573, Local_13.f_624, 55.0f))
		{
			Function_445(Local_13.f_260);
			Function_445(Local_13.f_236);
			Function_444(Local_13.f_236, 1);
			Function_444(Local_13.f_332, 1);
			Function_444(Local_13.f_300, 1);
		}
		else if (Function_446(Global_34573, Local_13.f_624, 85.0f))
		{
			Function_445(Local_13.f_300);
			Function_445(Local_13.f_236);
			Function_444(Local_13.f_236, 2);
			Function_444(Local_13.f_332, 2);
			Function_444(Local_13.f_300, 2);
		}
		else
		{
			Function_444(Local_13.f_332, 3);
			Function_444(Local_13.f_300, 2);
		}
		if (Function_446(Global_34573, Local_13.f_624, 140.0f) || Function_442(Local_13.f_332, Global_34573, 0, 1))
		{
			Function_445(Local_13.f_332);
		}
	}
	return;
}

int Function_442(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x165F7 / 91639
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		bVar2 = GET_MOUNT(bVar1);
		if (Function_443(bVar1, bParam1, bParam2, bParam3) || Function_443(bVar2, bParam1, bParam2, bParam3))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_443(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16649 / 91721
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_LAST_ATTACKER(bParam0) == bParam1)
		{
			if (bParam2)
			{
				if (!IS_ACTOR_ALIVE(bParam0))
				{
					return 1;
				}
			}
			return 1;
		}
		if (bParam3)
		{
			if (GET_LASSO_TARGET(bParam1) == bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_444(bool bParam0, bool bParam1) //Position: 0x16690 / 91792
{
	if (SQUAD_IS_VALID(bParam0))
	{
		if (DECOR_GET_INT(bParam0, "curVol") != bParam1)
		{
			SQUAD_GOALS_CLEAR(bParam0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(bParam0, 1);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, 0, (*&Local_13 + 488)[bParam1], 4294967295);
			DECOR_SET_INT(bParam0, "curVol", bParam1);
		}
	}
	return;
}

void Function_445(bool bParam0) //Position: 0x166DF / 91871
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

bool Function_446(bool bParam0, bool bParam1, float fParam2) //Position: 0x16711 / 91921
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_351(bParam0);
			Function_447(bParam1);
			if (VDIST(Function_351(bParam0), Function_447(bParam1)) >= fParam2)
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

vector3 Function_447(bool bParam0) //Position: 0x1682B / 92203
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

void Function_448(bool bParam0, int iParam1) //Position: 0x16897 / 92311
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), *iParam1[iVar16], 1, true, 1);
		iVar1++;
		if (iVar1 >= (SQUAD_GET_SIZE(bParam0) - 1))
		{
			iVar1 = 0;
		}
		bVar0++;
	}
	return;
}

int Function_449(bool bParam0) //Position: 0x168EF / 92399
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
		if (Function_383(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_450(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1693C / 92476
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

void Function_451() //Position: 0x16A26 / 92710
{
	if (iLocal_445 >= 5)
	{
		Function_387();
	}
	if (iLocal_445 <= 2)
	{
		Function_466(Local_13.f_1180);
	}
	if (!bLocal_462)
	{
		if (iLocal_445 > 4)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_360("Grave03_obj02", 0x40f00000, 1, 2, 0, 0, 0);
				bLocal_462 = true;
			}
		}
	}
	if (iLocal_445 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 680)[0]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 680)[1]))
		{
			MEMORY_ALLOW_SHOOTING(bLocal_339, false);
			if (!SQUAD_IS_VALID(Local_13.f_236))
			{
				Function_465();
				bLocal_415 = Local_13.f_236;
			}
			Function_464();
		}
	}
	else if (iLocal_445 == 1)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 680)[2]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 680)[3]))
		{
			Function_463();
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_339, false);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_339, 0);
			Function_464();
		}
	}
	else if (iLocal_445 == 2)
	{
		if (Function_279(&iLocal_382) <= 0,5f)
		{
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_339, 0);
			MEMORY_ALLOW_SHOOTING(bLocal_339, true);
			Function_462(bLocal_339, Local_13.f_236);
			bLocal_420 = GET_COVER_LOCATION_FROM_OBJECT(Local_13.f_1160);
			bLocal_443 = TASK_SEQUENCE_OPEN();
			TASK_HIDE_AT_COVER(false, bLocal_420, 6.0f, 6.0f, 0);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_420, -1.0f, 1086324736);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_339);
			TASK_SEQUENCE_PERFORM(bLocal_339, bLocal_443);
			TASK_SEQUENCE_RELEASE(bLocal_443, 1);
			TASK_PRIORITY_SET(bLocal_339, true);
			Function_464();
		}
	}
	else if (iLocal_445 == 3)
	{
		if (Function_279(&iLocal_382) <= 1.0f)
		{
			Function_461();
			Function_464();
		}
	}
	else if (iLocal_445 == 4)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_460();
			Function_464();
		}
	}
	else if (iLocal_445 == 5)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && HUD_IS_SHOWING_OBJECTIVE())
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_339, 30.0f))
			{
				Function_459();
			}
			Function_464();
		}
	}
	else if (iLocal_445 == 6)
	{
		if (iLocal_467)
		{
			if (IS_BLIP_VALID(bLocal_482))
			{
				REMOVE_BLIP(bLocal_482);
			}
			MEMORY_ALLOW_SHOOTING(bLocal_339, true);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_339, 1);
			Function_454(Local_13.f_332, Global_34573, 1);
			if (!bLocal_462)
			{
				Function_360("Grave03_obj02", 0x40f00000, 1, 2, 0, 0, 0);
			}
			Function_464();
		}
	}
	else if (iLocal_445 == 7)
	{
		if (Function_392())
		{
			if (!iLocal_453)
			{
				Function_452();
			}
		}
		else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (iLocal_446 <= 1)
			{
				Function_360("Grave03_obj_return_house", 0x40f00000, 1, 2, 0, 0, 0);
				if (!IS_BLIP_VALID(bLocal_482))
				{
					bLocal_482 = ADD_BLIP_FOR_OBJECT(Local_13.f_628, 330, 0f, 2, 0);
					SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(Local_13.f_628), 3);
				}
			}
			bLocal_470 = true;
			Function_156(Function_367("tumbleweed", "mansion", 3), 1);
			TASK_CLEAR(bLocal_339);
			SQUAD_GOAL_ADD_BATTLE_ALLIES(bLocal_416, 1, Global_34573, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_339, "Grave03_Seth_idle", 0);
			Function_464();
		}
	}
	else if (iLocal_445 == 8)
	{
		Function_240((*&Local_13 + 752)[6]);
		vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 752)[6]) };
		bLocal_431 = GET_OBJECT_HEADING((*&Local_13 + 752)[6]);
		bLocal_443 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_OBJECT(0, (*&Local_13 + 752)[6], 4, 0, 1);
		TASK_ACTION_PERFORM(false, "Grave03_Seth_idle");
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(bLocal_339);
		TASK_SEQUENCE_PERFORM(bLocal_339, bLocal_443);
		TASK_SEQUENCE_RELEASE(bLocal_443, 1);
		TASK_PRIORITY_SET(bLocal_339, true);
		Function_464();
	}
	else if (iLocal_445 == 9)
	{
		if (!iLocal_459)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
			{
				if (iLocal_446 <= 1)
				{
					Function_432();
					iLocal_459 = 1;
				}
			}
		}
		if (!IS_MOVER_FROZEN(bLocal_339))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_339, (*&Local_13 + 512)[10]))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_339, "Grave03_Seth_idle"))
				{
					SET_MOVER_FROZEN(bLocal_339, true);
				}
			}
		}
		else if (iLocal_446 > 4)
		{
			SET_MOVER_FROZEN(bLocal_339, false);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_339, "Grave03_Seth_idle", 0);
			Function_240((*&Local_13 + 864)[1]);
			vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 864)[1]) };
			bLocal_431 = GET_OBJECT_HEADING((*&Local_13 + 864)[1]);
			bLocal_443 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, (*&Local_13 + 864)[1], 2, 0, 1);
			TASK_ACTION_PERFORM(false, "Grave03_Seth_idle");
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_339);
			TASK_SEQUENCE_PERFORM(bLocal_339, bLocal_443);
			TASK_SEQUENCE_RELEASE(bLocal_443, 1);
			TASK_PRIORITY_SET(bLocal_339, true);
			Function_464();
		}
	}
	return;
}

void Function_452() //Position: 0x16EB0 / 93872
{
	if (Function_279(&iLocal_397) < 6.0f && iLocal_457)
	{
		GET_OBJECT_POSITION(Global_34573, &vLocal_426);
		bLocal_418 = Function_453(bLocal_415, bLocal_339, 0, 0);
		if (IS_ACTOR_VALID(bLocal_418))
		{
			Function_351(bLocal_418);
			bLocal_430 = Function_350(StackVal, StackVal, bLocal_339, Function_351(bLocal_418));
			bLocal_420 = FIND_NEAREST_COVER_LOCATION(&vLocal_426, 15.0f, bLocal_430, 60.0f, 7);
		}
		else if (IS_ACTOR_VALID((*&Local_13 + 240)[12]))
		{
			Function_351((*&Local_13 + 240)[12]);
			bLocal_430 = Function_350(StackVal, StackVal, bLocal_339, Function_351((*&Local_13 + 240)[12]));
			bLocal_420 = FIND_NEAREST_COVER_LOCATION(&vLocal_426, 15.0f, bLocal_430, 60.0f, 7);
		}
		else
		{
			bLocal_420 = FIND_NEAREST_COVER_LOCATION(&vLocal_426, 15.0f, 100.0f, 60.0f, 7);
		}
		if (IS_COVER_LOCATION_VALID(bLocal_420))
		{
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(bLocal_339))
			{
				TASK_CLEAR(bLocal_339);
				TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_339, bLocal_420, -1.0f, 1086324736);
				iLocal_457 = 0;
			}
			else
			{
				TASK_CLEAR(bLocal_339);
				TASK_HIDE_AT_COVER(bLocal_339, bLocal_420, -1.0f, 6f, 1);
				iLocal_457 = 0;
			}
		}
	}
	if (Function_394(Global_34573, bLocal_339) < 10.0f && !iLocal_457)
	{
		iLocal_457 = 1;
		Function_227(&iLocal_397);
	}
	return;
}

var Function_453(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16FCB / 94155
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
			fVar3 = Function_394(bVar4, bParam1);
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

void Function_454(var uParam0, var uParam1, bool bParam2) //Position: 0x17085 / 94341
{
	Function_458(uParam0, uParam1, 1);
	Function_457(uParam0, 1);
	Function_456(uParam0, uParam1, 4);
	Function_455(uParam0, uParam1);
	if (bParam2)
	{
		Function_450(uParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_455(bool bParam0, bool bParam1) //Position: 0x170C5 / 94405
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

void Function_456(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17117 / 94487
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

void Function_457(bool bParam0, int iParam1) //Position: 0x1715C / 94556
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

void Function_458(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1719D / 94621
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

void Function_459() //Position: 0x17208 / 94728
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_GunFightBanter_v1_AA", "Grave03_GunFightBanter_v1_AA", false, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Grave03_GunFightBanter_v1_AB", "Grave03_GunFightBanter_v1_AB", true, 2, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_460() //Position: 0x172AE / 94894
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Grave03_TreasureHunterSurp", "Grave03_TreasureHunterSurp", false, 2, 1, 0, 1);
	Function_356(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_461() //Position: 0x17309 / 94985
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Grave03_SethYellsAmbush", "Grave03_SethYellsAmbush", false, 2, 1, 0, 1);
	Function_356(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_462(bool bParam0, bool bParam1) //Position: 0x1735E / 95070
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_IDENTIFY(bParam0, bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_463() //Position: 0x17394 / 95124
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_BLIP_VALID(bLocal_482))
	{
		REMOVE_BLIP(bLocal_482);
	}
	Function_454(Local_13.f_236, Global_34573, 1);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_13.f_236, 658056);
	Function_240((*&Local_13 + 836)[3]);
	vVar0 = { StackVal, StackVal, Function_240((*&Local_13 + 836)[3]) };
	Function_351(bLocal_339);
	vVar3 = { StackVal, StackVal, Function_351(bLocal_339) };
	FIRE_PROJECTILE((*&Local_13 + 208)[22], "base_repeater", 0,001f, &vVar0, &vVar3);
	PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_REPEATER_HI_POWER_MASTER", vVar0);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,1f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_13 + 208)[02], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_13 + 208)[02], 53, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_13 + 208)[02], 54, 0.0f);
	Function_240((*&Local_13 + 836)[0]);
	vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 836)[0]) };
	Function_351(Global_34573);
	bLocal_431 = Function_350(StackVal, StackVal, (*&Local_13 + 208)[02], Function_351(Global_34573));
	TASK_CLEAR((*&Local_13 + 208)[02]);
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 208)[02], &vLocal_423, bLocal_431, 3212836864);
	TASK_PRIORITY_SET((*&Local_13 + 208)[02], false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_13 + 208)[12], 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_13 + 208)[12], 53, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_13 + 208)[12], 54, 0.0f);
	Function_240((*&Local_13 + 836)[1]);
	vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 836)[1]) };
	bLocal_431 = GET_OBJECT_HEADING((*&Local_13 + 836)[1]);
	TASK_CLEAR((*&Local_13 + 208)[12]);
	TASK_SHOOT_ENEMIES_FROM_PREFERRED_COVER((*&Local_13 + 208)[12], FIND_NEAREST_COVER_LOCATION(&vLocal_423, 2.0f, bLocal_431, 30.0f, 7), -1.0f, 1086324736);
	TASK_PRIORITY_SET((*&Local_13 + 208)[02], false);
	Function_240((*&Local_13 + 836)[2]);
	vLocal_423 = { StackVal, StackVal, Function_240((*&Local_13 + 836)[2]) };
	bLocal_431 = GET_OBJECT_HEADING((*&Local_13 + 836)[2]);
	TASK_CLEAR((*&Local_13 + 208)[22]);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 208)[22], GET_COVER_LOCATION_FROM_OBJECT(Local_13.f_1164), -1.0f, 1086324736);
	TASK_PRIORITY_SET((*&Local_13 + 208)[22], false);
	return;
}

void Function_464() //Position: 0x17570 / 95600
{
	iLocal_445++;
	Function_227(&iLocal_382);
	PRINTSTRING("iS1SethIndex: ");
	PRINTINT(iLocal_445);
	PRINTNL();
	return;
}

void Function_465() //Position: 0x175A1 / 95649
{
	Local_13.f_236 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "ChurchGuys"));
	(*&Local_13 + 208)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "churchGuy2", 505, -3978,164f, 31,92458f, 2918,071f, 0.0f, 243.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 208)[02], Local_13.f_236);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 208)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 208)[02], 41, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 208)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 208)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 208)[02], 1);
	SET_ACTOR_FACTION((*&Local_13 + 208)[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 208)[02], 0);
	(*&Local_13 + 208)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "churchGuy5", 506, -3963,255f, 29,05244f, 2936.0f, 0.0f, 36.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 208)[12], Local_13.f_236);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 208)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 208)[12], 40, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 208)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 208)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 208)[12], 1);
	SET_ACTOR_FACTION((*&Local_13 + 208)[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 208)[12], 0);
	(*&Local_13 + 208)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "churchGuy1", 509, -3977,487f, 27,85028f, 2928,652f, 0.0f, -78.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 208)[22], Local_13.f_236);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 208)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 208)[22], 41, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 208)[22], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 208)[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_13 + 208)[22], 1);
	SET_ACTOR_FACTION((*&Local_13 + 208)[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_13 + 208)[22], 0);
	return;
}

void Function_466(bool bParam0) //Position: 0x1779D / 96157
{
	GET_POSITION(Global_34573, &uLocal_432);
	GET_POSITION(bLocal_339, &uLocal_435);
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(bParam0, &uLocal_432, &uLocal_435, &fLocal_438, &fLocal_439, &uLocal_440);
	if (!Function_281(&iLocal_403))
	{
		Function_440(&iLocal_403);
	}
	if ((fLocal_438 - fLocal_439) <= 15.0f)
	{
		if (iLocal_479 != 0 || iLocal_479 != 2)
		{
			iLocal_479 = 1;
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_339, 2);
		}
	}
	else if ((fLocal_438 - fLocal_439) >= -15.0f)
	{
		if (iLocal_479 <= 2)
		{
			iLocal_479 = 2;
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_339, false);
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_339, 5);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_339, "nwave/back");
			Function_355();
			Function_227(&iLocal_403);
		}
	}
	else if (ACTORS_IN_RANGE(Global_34573, bLocal_339, 6.0f))
	{
		if (iLocal_479 >= 0)
		{
			iLocal_479 = 0;
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_339);
		}
	}
	if (iLocal_479 == 2)
	{
		if (Function_279(&iLocal_403) < 25.0f)
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_339, 1);
			if (!ACTOR_HAS_ANIM_SET(bLocal_339, "wave"))
			{
				SET_ANIM_SET_FOR_ACTOR(bLocal_339, "wave", 0);
			}
			SET_ACTION_NODE_FOR_ACTOR(bLocal_339, "nwave/back");
			Function_355();
			Function_227(&iLocal_403);
		}
	}
	return;
}

void Function_467() //Position: 0x178C4 / 96452
{
	switch (iLocal_321)
	{
		case 0x00000006:
			Function_482(&Local_313, 1);
			bLocal_312 = CREATE_LAYOUT(Function_56());
			Function_481();
			Function_479(&uLocal_485, bLocal_312);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, -3910,114f, 31,102f, 2907,608f, 98.0f, 1, true, 1);
			ENABLE_CHILD_SECTOR("sp_grave03x");
			Function_164(114688);
			if (((iLocal_320 != 99 && Function_284(&Local_313)) || !CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Grave_03/Grave_03")) || iLocal_311 == 0)
			{
				iLocal_321 = 8;
			}
			else
			{
				fLocal_481 = CREATE_VOLUME_IN_LAYOUT(bLocal_312, "IntroCS", 2, -3906,577f, 35,60458f, 2913,343f, 0.0f, 60,1983f, 0.0f, 37,66953f, 15,47603f, 53,78489f);
				iLocal_321 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_272("$/cutscene/Grave_03/Grave_03", &Local_322, &Local_313, &iLocal_320, 68235, 67788, 67734, 67235, 66938, 52800, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_321 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_291())
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				iLocal_321 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_LAYOUTREF_VALID(Local_13))
			{
			}
			else
			{
				bLocal_378 = CREATE_OBJECT_ITERATOR(Local_13);
				Function_218(1, 1, 1);
				RESET_ACTOR_GAITS(bLocal_339, 0);
				SET_CRIPPLE_ENABLE(bLocal_339, 0);
				SET_ACTOR_FACTION(bLocal_339, 20);
				TASK_PRIORITY_SET(bLocal_339, true);
				TASK_STAND_STILL(bLocal_339, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_339, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_339, 50.0f);
				SET_ACTOR_HEALTH(bLocal_339, GET_ACTOR_MAX_HEALTH(bLocal_339));
				SET_AUTO_CONVERSATION_LOOK(bLocal_339, 0);
				SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_339, Local_13.f_708, 4, true);
				Function_472(&(Local_525[017]), bLocal_339, "GraveRobber", 0, 0x5f5e100, 1);
				RESET_ACTOR_GAITS(bLocal_340, 0);
				TASK_PRIORITY_SET(bLocal_340, true);
				TASK_STAND_STILL(bLocal_340, -1.0f, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_340, 50.0f);
				SET_ACTOR_HEALTH(bLocal_340, GET_ACTOR_MAX_HEALTH(bLocal_340));
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_339, 0);
				iLocal_442 = 0;
				Function_132(&(Global_29008[Global_30658[0]]), 256);
				bLocal_416 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "GoodGuys"));
				SQUAD_JOIN(bLocal_339, bLocal_416);
				uLocal_441 = (*&Global_34165 + 68)[0];
				uLocal_441 = uLocal_441;
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 512)[8]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 512)[8]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_13 + 512)[8], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_13 + 512)[8]);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_13.f_708);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_13.f_708);
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_13.f_708, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(Local_13.f_708);
				Function_440(&iLocal_379);
				Function_440(&iLocal_382);
				Function_440(&iLocal_385);
				Function_440(&iLocal_388);
				Function_440(&iLocal_391);
				Function_440(&iLocal_394);
				Function_440(&iLocal_397);
				iLocal_320 = iLocal_311;
				iLocal_321 = 0;
				Function_469(&Local_313, &iLocal_320, &iLocal_321);
				Function_468(StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(), Local_313);
				TOGGLE_COVER_PROPS(0);
			}
			break;
	}
	return;
}

void Function_468(struct<25> Param0) //Position: 0x17C0A / 97290
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_320 = 0;
			break;
		
		case 0x0000000A:
			iLocal_320 = 101;
			break;
	}
}

void Function_469(int iParam0, var uParam1, int iParam2) //Position: 0x17C36 / 97334
{
	if (Function_284(iParam0))
	{
		*uParam1 = Function_471(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_470();
	}
	return;
}

void Function_470() //Position: 0x17C6A / 97386
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

var Function_471(bool bParam0) //Position: 0x17CBB / 97467
{
	if (Function_284(bParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_472(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x17CD3 / 97491
{
	if (!Function_478(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_477(uParam0, uParam2))
	{
		return 0;
	}
	Function_476(uParam0, uParam3);
	uParam0->f_40 = 0;
	Function_473(uParam0, uParam4, uParam5);
	return 1;
}

void Function_473(var uParam0, int iParam1, int iParam2) //Position: 0x17D0F / 97551
{
	if (iParam1 != 100000000)
	{
		Function_475(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_474(uParam0, iParam2);
	}
	return;
}

void Function_474(int iParam0, bool bParam1) //Position: 0x17D32 / 97586
{
	iParam0->f_40 = 0;
	Function_475(iParam0, 2, bParam1);
	Function_475(iParam0, 4, bParam1);
	Function_475(iParam0, 8, bParam1);
	Function_475(iParam0, 16, bParam1);
	Function_475(iParam0, 32, bParam1);
	Function_475(iParam0, 64, bParam1);
	Function_475(iParam0, 128, bParam1);
	Function_475(iParam0, 256, bParam1);
	Function_475(iParam0, 512, bParam1);
	Function_475(iParam0, 1024, bParam1);
	return;
}

void Function_475(int iParam0, int iParam1, bool bParam2) //Position: 0x17D98 / 97688
{
	bool bVar0;
	
	Function_79(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_79(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_39(iParam0 + 40, bVar0);
	}
	else
	{
		Function_79(iParam0 + 40, bVar0);
	}
	return;
}

void Function_476(var uParam0, int iParam1) //Position: 0x17DD4 / 97748
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_477(int iParam0, bool bParam1) //Position: 0x17DE0 / 97760
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

bool Function_478(var uParam0, bool bParam1) //Position: 0x17E69 / 97897
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

int Function_479(var uParam0, bool bParam1) //Position: 0x17FF5 / 98293
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_480(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_480(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_480(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_480(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_480(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x18696 / 99990
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
	Function_79(iParam0 + 8, iParam4);
	return 1;
}

void Function_481() //Position: 0x18759 / 100185
{
	Function_317(&bLocal_353, "Grave03_Seth_idle", 5, 0);
	Function_317(&bLocal_353, "custom/Grave03_Seth_idle", 8, 0);
	Function_317(&bLocal_353, "door_locked", 5, 0);
	Function_317(&bLocal_353, "custom/door_locked", 8, 0);
	Function_317(&bLocal_353, "wave", 5, 0);
	Function_317(&bLocal_353, "custom/wave", 8, 0);
	Function_317(&bLocal_353, "p_gen_coffinCorpse02x", 0, 0);
	Function_317(&bLocal_353, "grave03", 10, 0);
	return;
}

void Function_482(int iParam0, bool bParam1) //Position: 0x18834 / 100404
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_489(0, 0);
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
	Function_488();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244();
	Function_275();
	Function_233("");
	Function_487(0);
	Function_486();
	Function_208();
	Function_207();
	ENABLE_JOURNAL_REPLAY(0);
	Function_485();
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
	Function_484(13);
	Function_484(14);
	Function_484(25);
	Function_484(24);
	Function_484(12);
	Function_484(27);
	Function_484(26);
	Function_484(15);
	Function_483();
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

void Function_483() //Position: 0x18C58 / 101464
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

void Function_484(int iParam0) //Position: 0x18CCC / 101580
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_485() //Position: 0x18CEC / 101612
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

void Function_486() //Position: 0x18D29 / 101673
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_487(int iParam0) //Position: 0x18D3D / 101693
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

void Function_488() //Position: 0x18D72 / 101746
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_489(int iParam0, int iParam1) //Position: 0x18D7B / 101755
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
			Function_490(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_490(int iParam0) //Position: 0x18DFD / 101885
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

void Function_491() //Position: 0x18E4B / 101963
{
	return;
}

bool Function_492(int iParam0) //Position: 0x18E51 / 101969
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
			Function_493(iParam0, 1);
			return 1;
		}
	}
	Function_493(iParam0, 0);
	return 0;
}

void Function_493(int iParam0, bool bParam1) //Position: 0x18ED8 / 102104
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

bool Function_494(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x18EFC / 102140
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
		Function_493(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_513(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_512(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_512(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_498(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_155(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_493(iParam2, 0);
														return 0;
													}
													if (Function_155(bVar17, 2))
													{
														Function_497(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_496(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_155(bVar17, 4))
													{
														Function_497(&bVar17);
														strcpy(&Var18, "", 64);
														Function_495(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_233(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_496(StackVal, iParam2, bVar17);
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
	Function_493(iParam2, 0);
	return 0;
}

void Function_495(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x19295 / 103061
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

void Function_496(var uParam0, int iParam1, bool bParam2) //Position: 0x19380 / 103296
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
			Function_39(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_39(&bParam2, 2);
			break;
	}
	Function_39(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_497(bool bParam0) //Position: 0x193F6 / 103414
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_39(&iVar0, 1);
	Function_39(&iVar0, 2);
	Function_39(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_498(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x19418 / 103448
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
			return Function_509(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_502(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_509(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_499(iParam0, bVar2);
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
						bVar2 = Function_509(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_499(iParam0, bVar2);
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

var Function_499(int iParam0, bool bParam1) //Position: 0x19562 / 103778
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_155(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_501(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_500(16);
			}
		}
	}
	else if (Function_155(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_501(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_500(256);
			}
		}
	}
	return bParam1;
}

bool Function_500(int iParam0) //Position: 0x19695 / 104085
{
	return 2 | iParam0;
}

int Function_501(int iParam0) //Position: 0x1969F / 104095
{
	return 4 | iParam0;
}

int Function_502(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x196A9 / 104105
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
				iParam3 = Function_508(iParam0, iParam1, bParam4);
				if (Function_155(iParam3, 4))
				{
					Function_79(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_500(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_503(iParam0, iParam1, 0, bParam4);
				if (Function_155(iParam3, 4))
				{
					Function_79(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_500(16);
		}
	}
	return 0;
}

int Function_503(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1975B / 104283
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_507(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_506(iVar0, 3, 1, bParam3))
			{
				if (!Function_512(iParam0, 8, 1))
				{
					return Function_505(64, 1024, bParam2);
				}
			}
			return Function_504(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_506(iVar0, 2, 1, bParam3))
			{
				if (!Function_512(iParam0, 32, 1))
				{
					return Function_505(64, 1024, bParam2);
				}
			}
			return Function_504(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_506(iVar0, 1, 1, bParam3))
			{
				if (!Function_512(iParam0, 64, 1))
				{
					return Function_505(64, 1024, bParam2);
				}
			}
			return Function_504(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_506(iVar0, 3, 1, bParam3))
			{
				if (!Function_512(iParam0, 128, 1))
				{
					return Function_505(64, 1024, bParam2);
				}
			}
			return Function_504(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_506(iVar0, 1, 1, bParam3))
			{
				if (!Function_512(iParam0, 1024, 1))
				{
					return Function_505(64, 1024, bParam2);
				}
			}
			return Function_504(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_506(iVar0, 1, 1, bParam3))
			{
				if (!Function_512(iParam0, 1024, 1))
				{
					return Function_505(64, 1024, bParam2);
				}
			}
			return Function_504(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_504(int iParam0, int iParam1, bool bParam2) //Position: 0x19915 / 104725
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_505(int iParam0, int iParam1, bool bParam2) //Position: 0x1992A / 104746
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_506(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1993F / 104767
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_507(int iParam0) //Position: 0x1995C / 104796
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

int Function_508(var uParam0, int iParam1, bool bParam2) //Position: 0x199CB / 104907
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_507(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_506(iVar0, 3, 1, bParam2))
			{
				if (!Function_512(uParam0, 8, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000009:
			if (Function_506(iVar0, 3, 1, bParam2))
			{
				if (!Function_512(uParam0, 8, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x0000006E:
			if (Function_506(iVar0, 2, 1, bParam2))
			{
				if (!Function_512(uParam0, 16, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x0000005B:
			if (Function_506(iVar0, 2, 1, bParam2))
			{
				if (!Function_512(uParam0, 32, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000031:
			if (Function_506(iVar0, 1, 1, bParam2))
			{
				if (!Function_512(uParam0, 64, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000007:
			if (Function_506(iVar0, 3, 1, bParam2))
			{
				if (!Function_512(uParam0, 128, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000008:
			if (Function_506(iVar0, 2, 1, bParam2))
			{
				if (!Function_512(uParam0, 256, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000014:
			if (Function_506(iVar0, 1, 1, bParam2))
			{
				if (!Function_512(uParam0, 512, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000018:
			if (Function_506(iVar0, 1, 1, bParam2))
			{
				if (!Function_512(uParam0, 512, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000057:
			if (Function_506(iVar0, 1, 1, bParam2))
			{
				if (!Function_512(uParam0, 1024, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000058:
			if (Function_506(iVar0, 1, 1, bParam2))
			{
				if (!Function_512(uParam0, 1024, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_509(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x19BE6 / 105446
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
						return Function_508(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_512(iParam0, 2, 1))
					{
						return Function_501(8);
					}
					return Function_500(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_512(iParam0, 4, 1))
					{
						return Function_501(16);
					}
					return Function_500(16);
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
							return Function_503(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_512(iParam0, 2, 1))
						{
							return Function_501(128);
						}
						return Function_500(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_512(iParam0, 4, 1))
						{
							return Function_501(256);
						}
						return Function_500(256);
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
						return Function_503(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_512(iParam0, 2, 1))
					{
						return Function_501(8);
					}
					return Function_500(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_512(iParam0, 4, 1))
					{
						return Function_501(16);
					}
					return Function_500(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_511(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_512(iParam0, 2, 1))
					{
						return Function_501(8);
					}
					return Function_500(8);
				}
				if (!Function_512(iParam0, 4, 1))
				{
					return Function_501(16);
				}
				return Function_500(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_503(iParam0, uParam1, 1, bParam5);
							if (Function_155(iParam4, 4))
							{
								Function_79(&iParam4, 2);
								Function_39(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_510(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_500(128);
							}
							if (!Function_512(iParam0, 2, 1))
							{
								return Function_501(8);
							}
							return Function_500(8);
						}
						if (iParam4 == 2)
						{
							if (Function_510(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_500(256);
							}
							if (!Function_512(iParam0, 4, 1))
							{
								return Function_501(16);
							}
							return Function_500(16);
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

bool Function_510(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x19EA5 / 106149
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

int Function_511(int iParam0, var uParam1, bool bParam2) //Position: 0x19F5E / 106334
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_507(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_506(iVar0, 2, 1, bParam2))
			{
				if (!Function_512(iParam0, 16, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x0000005B:
			if (Function_506(iVar0, 2, 1, bParam2))
			{
				if (!Function_512(iParam0, 32, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000057:
			if (Function_506(iVar0, 1, 1, bParam2))
			{
				if (!Function_512(iParam0, 1024, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		case 0x00000058:
			if (Function_506(iVar0, 1, 1, bParam2))
			{
				if (!Function_512(iParam0, 1024, 1))
				{
					return Function_501(64);
				}
			}
			return Function_500(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_512(int iParam0, bool bParam1, bool bParam2) //Position: 0x1A072 / 106610
{
	if (bParam2)
	{
		if (!Function_155(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_155(iParam0->f_40, bParam1);
}

int Function_513(int iParam0) //Position: 0x1A09A / 106650
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_56());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_56());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_514(bool bParam0) //Position: 0x1A0CB / 106699
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_515(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1A0E9 / 106729
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_43())
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

