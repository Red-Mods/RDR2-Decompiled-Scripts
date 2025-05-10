//Decompiled with MagicRDR v1.0
//Function Count : 491
//Statics Count : 486
//Natives Count : 668
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<773> Local_4 = { 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_477 = 6;
	Local_199 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_245 = 99;
	iLocal_246 = 6;
	iLocal_238 = 1000;
	while (Function_255())
	{
		Function_211();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Local_4.f_164))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_164);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_164);
	}
	Function_210(&uLocal_470, &uLocal_471, &uLocal_472);
	STREAMING_UNLOAD_BOUNDS();
	if (SQUAD_IS_VALID(Local_4.f_44))
	{
		Function_209(&Local_4 + 44);
		DESTROY_OBJECT(Local_4.f_44);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_249);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_250);
	TASK_CLEAR(bLocal_249);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_249);
	Function_206();
	PRINTSTRING("COMPANION_RELEASE_ACTOR(COMPANION_SON, FALSE, TRUE)");
	PRINTNL();
	DEREFERENCE_ACTOR(bLocal_249);
	Function_203(12, 0, 1, 1, 1);
	PRINTSTRING("COMPANION_RELEASE_ACTOR(COMPANION_WIFE, FALSE)");
	PRINTNL();
	DEREFERENCE_ACTOR(bLocal_425);
	Function_203(11, 0, 0, 1, 1);
	PRINTSTRING("COMPANION_RELEASE_ACTOR(COMPANION_UNCLE, FALSE)");
	PRINTNL();
	DEREFERENCE_ACTOR(bLocal_428);
	Function_203(13, 0, 0, 1, 1);
	Function_203(14, 0, 0, 1, 1);
	Global_8492[1214].f_8 = 638;
	Function_202(bLocal_198);
	Function_202(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_201();
	AUDIO_SET_PLAYER_MOOD(0, 0);
	Function_197(&bLocal_206);
	Function_195();
	if (IS_ITERATOR_VALID(bLocal_248))
	{
		DESTROY_ITERATOR(bLocal_248);
	}
	RELEASE_LAYOUT_REF(bLocal_198);
	if (bLocal_288)
	{
		Function_60(Local_199, 1, 1, 1, 0);
		Function_24(bLocal_289, 1, 0, 1, 0, 1, 1, 1);
	}
	else if (bLocal_289)
	{
		Function_20(Local_199);
		Function_24(bLocal_289, 1, 0, 1, 1, 1, 1, 1);
	}
	else
	{
		Function_2(Local_199);
		Function_24(bLocal_289, 1, 0, 1, 1, 1, 1, 1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x216 / 534
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x237 / 567
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x252 / 594
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(bool bParam0) //Position: 0x273 / 627
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x289 / 649
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

void Function_7(int iParam0) //Position: 0x325 / 805
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x346 / 838
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

void Function_9() //Position: 0x38C / 908
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x3A5 / 933
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x3F8 / 1016
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

struct<16> Function_12(int iParam0) //Position: 0x51C / 1308
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x541 / 1345
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x561 / 1377
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x578 / 1400
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x593 / 1427
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7DA / 2010
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x803 / 2051
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

bool Function_19(int iParam0) //Position: 0x827 / 2087
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x83C / 2108
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x85A / 2138
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

struct<16> Function_22(int iParam0) //Position: 0x900 / 2304
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x92A / 2346
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

void Function_24(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0xB80 / 2944
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_58());
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
	Function_57();
	CLEAR_PRINTED_OBJECTIVE();
	Function_56();
	Function_54(0);
	Function_53();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_52();
	Function_51();
	Function_57();
	ENABLE_JOURNAL_REPLAY(1);
	Function_50(1);
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
		Function_49(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573) && iParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_47(Global_28178);
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
	Function_45(1178687);
	Function_43(33039);
	Function_42(0x218003f);
	Function_41(4194560);
	Function_40();
	Function_39();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_32(0, 1, 1);
	}
	else
	{
		Function_32(0, 1, 1);
	}
	Function_30();
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
	Function_26();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_25(&Global_12976 + 36 + 20, 16);
}

void Function_25(bool bParam0, bool bParam1) //Position: 0xD71 / 3441
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_26() //Position: 0xD84 / 3460
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
		if (Function_29() > 3)
		{
			bVar0 *= 2;
		}
		Function_27(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_27(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xDDA / 3546
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_28((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_28(bool bParam0) //Position: 0xE20 / 3616
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_29() //Position: 0xE45 / 3653
{
	return Global_12976.f_156;
}

void Function_30() //Position: 0xE50 / 3664
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_31(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0xE7A / 3706
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_32(int iParam0, bool bParam1, int iParam2) //Position: 0xE91 / 3729
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
		if (Function_38(Global_29006))
		{
			Function_37(&(Global_29008[Global_29006]), 131072);
			Function_31(&(Global_29008[Global_29006]), 2097152);
			Function_35(Global_29006);
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
				if (Function_34(&(Global_29008[iVar0]), 4) || Function_34(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_31(&(Global_29008[iVar0]), 2097155);
					Function_37(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_33())
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

bool Function_33() //Position: 0xF9C / 3996
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_34(var uParam0, int iParam1) //Position: 0xFA5 / 4005
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_35(int iParam0) //Position: 0xFC1 / 4033
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_36())
			{
				return;
			}
		}
		if (!Function_34(&(Global_29008[iParam0]), 2048))
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

bool Function_36() //Position: 0x1040 / 4160
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_34(&(Global_29008[iVar0]), 4) || Function_34(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_37(var uParam0, int iParam1) //Position: 0x109D / 4253
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_38(int iParam0) //Position: 0x10AC / 4268
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_39() //Position: 0x10C2 / 4290
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

void Function_40() //Position: 0x10E8 / 4328
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

void Function_41(int iParam0) //Position: 0x110E / 4366
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_42(int iParam0) //Position: 0x112B / 4395
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_43(int iParam0) //Position: 0x113E / 4414
{
	Function_44(&Global_28842, iParam0);
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0x114C / 4428
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_45(bool bParam0) //Position: 0x1167 / 4455
{
	if (Function_46(bParam0, 1) && !Function_46(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_46(bool bParam0, bool bParam1) //Position: 0x1194 / 4500
{
	return (bParam0 && bParam1) == 0;
}

void Function_47(int iParam0) //Position: 0x11A1 / 4513
{
	int iVar0;
	
	if (!Function_48(iParam0))
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

bool Function_48(int iParam0) //Position: 0x1268 / 4712
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_49(bool bParam0) //Position: 0x127E / 4734
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

void Function_50(bool bParam0) //Position: 0x12FA / 4858
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

void Function_51() //Position: 0x136E / 4974
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

void Function_52() //Position: 0x13AF / 5039
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

void Function_53() //Position: 0x13F0 / 5104
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_54(int iParam0) //Position: 0x1404 / 5124
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_55())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_55() //Position: 0x1440 / 5184
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

void Function_56() //Position: 0x1465 / 5221
{
	Global_8722 = 0.0f;
	return;
}

void Function_57() //Position: 0x146F / 5231
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

int Function_58() //Position: 0x149A / 5274
{
	bool bVar0;
	
	bVar0 = Function_59();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_59() //Position: 0x14B4 / 5300
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_60(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x14C9 / 5321
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
		Function_190(&(Global_3422[iVar240]));
		Function_189(4194304);
		if (bParam3)
		{
			Function_146(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_140(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_146(iVar2, &uVar0, 0);
		}
		bVar1 = Function_139();
		if (bParam1)
		{
			Function_123(iVar2, bParam0, bVar1);
			Function_122();
		}
	}
	Function_72(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_65(iVar2, bVar1);
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
	Function_61();
}

void Function_61() //Position: 0x15B6 / 5558
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_62(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_62(int iParam0, bool bParam1) //Position: 0x15E6 / 5606
{
	int iVar0;
	
	iVar0 = Function_63(iParam0);
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

int Function_63(int iParam0) //Position: 0x1623 / 5667
{
	if (!Function_64(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_64(int iParam0) //Position: 0x163D / 5693
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_65(int iParam0, bool bParam1) //Position: 0x1653 / 5715
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
							Function_66(Global_34573, 0x1000000, 3, 0);
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
							Function_66(Global_34573, 0x1000000, 3, 0);
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
							Function_66(Global_34573, 0x1000000, 3, 0);
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
							Function_66(Global_34573, 0x1000000, 3, 0);
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
							Function_66(Global_34573, 0x1000000, 3, 0);
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
							Function_66(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_65(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_65(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_65(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_65(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_65(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_65(57, 0);
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

void Function_66(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x194A / 6474
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_68(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_67(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_67(char* cParam0, int iParam1) //Position: 0x19B6 / 6582
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

bool Function_68(bool bParam0, var uParam1, int iParam2) //Position: 0x19ED / 6637
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
		if (Function_71(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_70(uVar0))
		{
			case 0x00000002:
				if (!Function_69(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_69(var uParam0, int iParam1) //Position: 0x1A65 / 6757
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_70(char* cParam0) //Position: 0x1A78 / 6776
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

int Function_71(int iParam0) //Position: 0x1B19 / 6937
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_25(&bVar1, 2147483648);
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

void Function_72(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1B56 / 6998
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
		Function_118();
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
			Function_113(bParam0);
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
			Function_75(1);
			Function_74(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_73(bParam0, &Var14);
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

void Function_73(int iParam0, int iParam1) //Position: 0x1D68 / 7528
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_74(bool bParam0, int iParam1) //Position: 0x1DA2 / 7586
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_33())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_75(bool bParam0) //Position: 0x1DE4 / 7652
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_105();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_76();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_25(&Global_63095, 1);
		Function_25(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_76() //Position: 0x1E35 / 7733
{
	Function_103();
	Function_102();
	Function_102();
	Function_101();
	Function_101();
	Function_100();
	Function_100();
	Function_83();
	Function_83();
	if (!Function_33())
	{
		Function_81();
		Function_80();
		Function_79();
		Function_78();
	}
	Function_77();
	return;
}

void Function_77() //Position: 0x1E68 / 7784
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

void Function_78() //Position: 0x1F6E / 8046
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

void Function_79() //Position: 0x1FA1 / 8097
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

void Function_80() //Position: 0x212F / 8495
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

void Function_81() //Position: 0x22E3 / 8931
{
	Function_82(&Global_28260, 1, 0);
	return;
}

void Function_82(int iParam0, bool bParam1, var uParam2) //Position: 0x22F1 / 8945
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
	
	bVar0 = Function_59();
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

struct<8> Function_83() //Position: 0x24E2 / 9442
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
				iVar2 = ((Function_99((50 + iVar4)) + Function_99((183 + iVar4))) + Function_99((90 + iVar4)));
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
	Function_84(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_84(int iParam0, bool bParam1, bool bParam2) //Position: 0x257D / 9597
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
		Function_98(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_97(iParam0);
	if (bParam2)
	{
		Function_85(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2818 / 10264
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_96(390))), 32);
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
					bVar19 = (Function_95(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_95(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_93(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_90(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_87(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_86(), &Var9);
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

var Function_86() //Position: 0x2E45 / 11845
{
	int iVar0;
	
	return iVar0;
}

var Function_87(int iParam0) //Position: 0x2E4D / 11853
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_88(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2E5E / 11870
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_89(char* cParam0, char* cParam1) //Position: 0x2F53 / 12115
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_90(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2F6C / 12140
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_92(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_91(Function_92(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_91(int iParam0, int iParam1) //Position: 0x2FD1 / 12241
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_92(int iParam0, bool bParam1) //Position: 0x2FE3 / 12259
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_93(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2FF5 / 12277
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
	if (((Function_94(iParam0) != 19 || Function_94(iParam0) != 17) || Function_94(iParam0) != 10) || Function_94(iParam0) != 9)
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

int Function_94(int iParam0) //Position: 0x3125 / 12581
{
	return Global_35278[iParam020].f_48;
}

float Function_95(int iParam0) //Position: 0x3134 / 12596
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_96(int iParam0) //Position: 0x316D / 12653
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_97(int iParam0) //Position: 0x31AA / 12714
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

int Function_98(int iParam0, bool bParam1, bool bParam2) //Position: 0x3344 / 13124
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

int Function_99(bool bParam0) //Position: 0x355E / 13662
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_100() //Position: 0x359F / 13727
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
		iVar2 = ((Function_99((50 + iVar3) + 15) + Function_99((183 + iVar3) + 15)) + Function_99((90 + iVar3) + 15));
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
	Function_84(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_101() //Position: 0x3628 / 13864
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
			iVar2 = ((Function_99((50 + iVar3) + 8) + Function_99((183 + iVar3) + 8)) + Function_99((90 + iVar3) + 8));
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
	Function_84(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_102() //Position: 0x36BF / 14015
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
		iVar2 = ((Function_99((50 + iVar3)) + Function_99((183 + iVar3))) + Function_99((90 + iVar3)));
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
	Function_84(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_103() //Position: 0x373E / 14142
{
	Function_104(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_84(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_104(int iParam0, bool bParam1, int iParam2) //Position: 0x3764 / 14180
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
	Function_98(iParam0, bParam1, 1);
	Function_97(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_85(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_105() //Position: 0x396E / 14702
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_107(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_107(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_106(StackVal, StackVal, vVar0))
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

bool Function_106(vector3 vParam0) //Position: 0x3A0F / 14863
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_107(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3A27 / 14887
{
	int iVar0;
	
	iVar0 = Function_111(uParam2, uParam3);
	if (Function_110(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_109(&Global_63095, 1);
			Function_25(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_109(&Global_63095, 2);
			Function_25(&Global_63095, 1);
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
		Function_109(&Global_63095, 2);
		Function_25(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_108();
	return StackVal, StackVal, Function_108();
}

vector3 Function_108() //Position: 0x3B0E / 15118
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_109(bool bParam0, bool bParam1) //Position: 0x3B17 / 15127
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_110(int iParam0) //Position: 0x3B26 / 15142
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_111(bool bParam0, bool bParam1) //Position: 0x3B3C / 15164
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
				fVar2 = Function_112(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_112(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_110(bVar0) && !bParam1)
	{
		bVar0 = Function_111(bParam0, 1);
	}
	return bVar0;
}

float Function_112(vector3 vParam0, vector3 vParam3) //Position: 0x3C03 / 15363
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_113(bool bParam0) //Position: 0x3C20 / 15392
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
				Function_117(12, 1, 0, 0);
				Function_116(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_117(13, 1, 0, 0);
				Function_116(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_117(14, 1, 0, 0);
				Function_116(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_117(15, 1, 0, 0);
				Function_116(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_117(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_115(bParam0) == 1)
					{
						iVar0 = Function_114(bParam0);
						if (Function_38(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_116(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_116(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_116(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_116(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_116(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_116(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_116(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_116(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_116(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_116(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_116(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_116(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_116(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_116(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_116(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_116(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_116(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_116(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_116(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_116(4, 19);
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
								Function_117(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_117(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_117(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_114(bParam0) == 0)
			{
				if (Function_115(bParam0) == 1)
				{
					Function_117(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_38(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_116(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_116(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_116(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_116(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_116(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_116(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_116(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_116(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_115(bParam0) == 1)
			{
				Function_117(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_117(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_116(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_116(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_116(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_117(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_116(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_116(6, 9);
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

int Function_114(bool bParam0) //Position: 0x40FE / 16638
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_115(bool bParam0) //Position: 0x411D / 16669
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_116(int iParam0, bool bParam1) //Position: 0x4137 / 16695
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

int Function_117(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x419E / 16798
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
	Function_98(iParam0, TO_FLOAT(bParam1), 1);
	Function_97(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_85(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_118() //Position: 0x43BE / 17342
{
	int iVar0;
	int iVar1;
	
	if (!Function_64(Global_6269))
	{
		return;
	}
	iVar0 = Function_99(24);
	iVar1 = Function_63(Global_6269);
	if (!Function_64(iVar0) && Function_121(iVar1) < 0)
	{
		Function_84(24, Global_6269, 0);
		Function_119(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_121(Function_63(iVar0)))
	{
		Function_84(24, Global_6269, 0);
		Function_119(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_119(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x443E / 17470
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
		Function_120(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4790 / 18320
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

int Function_121(int iParam0) //Position: 0x4813 / 18451
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_122() //Position: 0x482D / 18477
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

void Function_123(int iParam0, int iParam1, bool bParam2) //Position: 0x485B / 18523
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
	
	if (!Function_64(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_138(iParam0);
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
				bVar0 = (Function_99(42) - Global_34165.f_116);
				bVar1 = (Function_99(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_96(49)) - Global_34165.f_124);
				bVar3 = (Function_99(49) - Global_34165.f_128);
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
				bVar4 = (Function_99(355) - Global_34165.f_116);
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
		iVar15 = Function_137(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_124(50, 1, 0);
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

void Function_124(int iParam0, bool bParam1, bool bParam2) //Position: 0x4AF7 / 19191
{
	int iVar0;
	bool bVar1;
	
	if (Function_136(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_99(3);
	Function_133();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_131(3, bVar1);
		if (!bParam2)
		{
			if (!Function_69(Global_76848, 4))
			{
				Function_66(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_117(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_95(3));
	iVar0 = Function_99(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_126(4, Function_130(Global_12976.f_156), 1);
				Function_125(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_126(4, Function_130(Global_12976.f_156), 1);
				Function_125(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_126(4, Function_130(Global_12976.f_156), 1);
				Function_125(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_126(4, Function_130(Global_12976.f_156), 1);
				Function_125(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_126(4, Function_130(Global_12976.f_156), 1);
				Function_125(Global_12976.f_152, Global_12976.f_156);
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

void Function_125(int iParam0, int iParam1) //Position: 0x4CBA / 19642
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

int Function_126(int iParam0, char* cParam1, bool bParam2) //Position: 0x4F18 / 20248
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
	Function_119(iParam0, cParam1, 0, 1);
	iVar1 = Function_127();
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

int Function_127() //Position: 0x509D / 20637
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
	Function_128();
	return 0;
}

void Function_128() //Position: 0x513C / 20796
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
		Function_129(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_129(int iParam0) //Position: 0x51EB / 20971
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

var Function_130(int iParam0) //Position: 0x5249 / 21065
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

int Function_131(int iParam0, bool bParam1) //Position: 0x52D8 / 21208
{
	bool bVar0;
	int iVar1;
	
	Function_117(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_132(iParam0, 4294967295);
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
	iVar1 = Function_127();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_132(int iParam0, int iParam1) //Position: 0x5475 / 21621
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

void Function_133() //Position: 0x54B6 / 21686
{
	Function_135(3, 0.0f);
	Function_134(3, 10000.0f);
	return;
}

int Function_134(int iParam0, int iParam1) //Position: 0x54CC / 21708
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_135(int iParam0, int iParam1) //Position: 0x550C / 21772
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_136(int iParam0) //Position: 0x554C / 21836
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_137(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x555B / 21851
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

int Function_138(int iParam0) //Position: 0x5723 / 22307
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

var Function_139() //Position: 0x57B8 / 22456
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_140(int iParam0) //Position: 0x57DD / 22493
{
	if (!Function_64(iParam0))
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
			Function_124(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_124(25, 1, 0);
			Function_145(1, 1);
			break;
		
		case 0x00000015:
			Function_145(50, 1);
			Function_124(250, 1, 0);
			Function_141(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_124(75, 1, 0);
			Function_141(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_124(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_145(50, 1);
			Function_124(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_145(5, 1);
			Function_141(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_124(75, 1, 0);
			Function_141(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_145(5, 1);
			Function_124(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_124(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_141(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_145(25, 1);
			Function_124(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_145(10, 1);
			Function_124(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_124(50, 1, 0);
			Function_141(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_124(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_124(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_141(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_145(20, 1);
			Function_124(75, 1, 0);
			Function_141(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_145(25, 1);
			Function_124(150, 1, 0);
			Function_141(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_145(10, 1);
			Function_124(150, 1, 0);
			Function_141(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_124(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_141(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_141(100, 1, 0);
			Function_145(5, 1);
			break;
		
		case 0x0000000F:
			Function_145(3, 1);
			Function_124(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_141(125, 1, 0);
			Function_124(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_145(50, 1);
			Function_124(100, 1, 0);
			Function_141(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_145(50, 1);
			Function_124(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_145(75, 1);
			Function_124(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_124(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_124(75, 1, 0);
			Function_141(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_124(250, 1, 0);
			Function_141(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_124(75, 1, 0);
			Function_141(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_124(200, 1, 0);
			Function_141(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_124(75, 1, 0);
			Function_141(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_124(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_145(50, 1);
			Function_124(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_145(100, 1);
			Function_124(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_124(200, 1, 0);
			Function_141(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_124(300, 1, 0);
			Function_141(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_124(300, 1, 0);
			Function_141(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_124(300, 1, 0);
			Function_141(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_124(500, 1, 0);
			Function_141(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_124(150, 1, 0);
			Function_141(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_141(25, 1, 0);
			Function_145(100, 1);
			break;
		
		case 0x0000002A:
			Function_124(150, 1, 0);
			Function_141(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_141(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_141(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_141(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_141(150, 1, 0);
			Function_145(100, 1);
			break;
		
		case 0x00000035:
			Function_141(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_141(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_141(150, 1, 0);
			Function_145(100, 1);
			break;
		
		case 0x00000032:
			Function_141(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_141(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_141(int iParam0, bool bParam1, bool bParam2) //Position: 0x5C98 / 23704
{
	int iVar0;
	bool bVar1;
	
	if (Function_136(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_99(1);
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
			Function_131(1, bVar1);
			if (!bParam2)
			{
				if (!Function_69(Global_76848, 1))
				{
					Function_66(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_144(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_69(Global_76848, 2))
				{
					Function_66(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_117(1, bVar1, 0, 0);
	}
	else
	{
		Function_143(1, (4294967295 * bVar1), 0);
	}
	if (Function_99(1) <= 4294962296)
	{
		Function_84(1, 4294962296, 0);
	}
	else if (Function_99(1) >= 5000)
	{
		Function_84(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_95(1));
	iVar0 = Function_99(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_126(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_126(2, Function_142(Global_12976.f_152), 0);
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
				Function_126(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_126(2, Function_142(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_126(2, Function_142(Global_12976.f_152), 1);
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
				Function_126(2, Function_142(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_126(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_126(2, Function_142(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_126(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_126(2, Function_142(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_126(2, Function_142(Global_12976.f_152), 1);
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
				Function_126(2, Function_142(Global_12976.f_152), 0);
			}
			break;
	}
	Function_125(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_142(int iParam0) //Position: 0x5FAD / 24493
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

int Function_143(int iParam0, bool bParam1, int iParam2) //Position: 0x6050 / 24656
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
	Function_97(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_85(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_144(int iParam0, bool bParam1) //Position: 0x624B / 25163
{
	bool bVar0;
	int iVar1;
	
	Function_143(iParam0, bParam1, 0);
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
	iVar1 = Function_132(iParam0, 4294967295);
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
	iVar1 = Function_127();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_145(bool bParam0, bool bParam1) //Position: 0x63E7 / 25575
{
	bool bVar0;
	
	bVar0 = Function_99(0);
	if ((Function_99(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_117(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_99(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_117(597, bParam0, 0, 0);
	}
	if ((Function_99(597) + Function_99(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_146(int iParam0, var uParam1, bool bParam2) //Position: 0x64B2 / 25778
{
	struct<4> Var0;
	
	if (!Function_64(iParam0))
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
			Function_187(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_185(Global_30640[0]);
			Function_185(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_183(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_185(Global_30668[0]);
			Function_175(0);
			Function_173(2, 1);
			Function_173(0, 1);
			Function_173(1, 1);
			break;
		
		case 0x00000003:
			Function_185(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_185(Global_30668[0]);
			Function_185(Global_30640[0]);
			Function_171(0, 1);
			Function_171(15, 1);
			Function_171(9, 1);
			Function_171(12, 1);
			Function_171(16, 1);
			Function_173(3, 1);
			break;
		
		case 0x00000005:
			Function_185(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_183(21, bParam2, 4);
			Function_185(Global_30668[0]);
			Function_173(39, 1);
			break;
		
		case 0x00000007:
			Function_185(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_185(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_170(4))
					{
						Function_160(4, 0, 0, 1);
					}
				}
			}
			Function_185(Global_30640[0]);
			Function_185(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_185(Global_30640[0]);
			Function_185(Global_30668[2]);
			Function_37(&(Global_29008[Global_30668[2]]), 32768);
			Function_31(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_183(9, bParam2, 4);
			Function_185(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_185(Global_30640[0]);
			Function_185(Global_30658[0]);
			Function_37(&(Global_29008[Global_30658[0]]), 32768);
			Function_31(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_185(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_185(Global_30640[0]);
			Function_185(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_185(Global_30640[1]);
			Function_185(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_185(Global_30679[0]);
			Function_185(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_185(Global_30658[5]);
			Function_185(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_183(21, bParam2, 4);
			Function_185(Global_30640[4]);
			Function_185(Global_30658[4]);
			Function_159(&Global_76847, 0x2000000);
			Function_159(&Global_76847, 0x4000000);
			Function_159(&Global_76847, 4096);
			Function_159(&Global_76847, 8);
			Function_159(&Global_76847, 8388608);
			Function_159(&Global_76847, 524288);
			Function_159(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_185(Global_30640[4]);
			Function_185(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_31(&(Global_29008[Global_30640[4]]), 256);
			Function_185(Global_30640[4]);
			Function_185(Global_30658[0]);
			Function_37(&(Global_29008[Global_30658[0]]), 32768);
			Function_31(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_185(Global_30640[0]);
			Function_185(Global_30640[5]);
			Function_183(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_185(Global_30658[3]);
			Function_37(&(Global_29008[Global_30658[3]]), 32768);
			Function_31(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_183(9, bParam2, 4);
			Function_185(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_37(&(Global_29008[Global_30679[1]]), 32768);
			Function_185(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_183(12, bParam2, 4);
			Function_31(&(Global_29008[Global_30679[1]]), 256);
			Function_185(Global_30668[3]);
			Function_185(Global_30693[0]);
			Function_185(Global_30685[0]);
			Function_175(4);
			Function_171(13, 1);
			Function_171(1, 1);
			Function_171(18, 1);
			Function_173(34, 1);
			Function_173(44, 1);
			Function_173(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_183(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_185(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_185(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_185(Global_30693[0]);
			Function_185(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_185(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_185(Global_30685[0]);
			Function_185(Global_30693[0]);
			Function_185(Global_30693[1]);
			Function_185(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_183(23, bParam2, 3);
			Function_171(23, 1);
			Function_185(Global_30685[0]);
			Function_185(Global_30685[2]);
			Function_37(&(Global_29008[Global_30685[2]]), 32768);
			Function_31(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_183(19, bParam2, 4);
			Function_185(Global_30685[0]);
			Function_185(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_183(24, bParam2, 3);
			Function_171(24, 1);
			Function_185(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_185(Global_30685[0]);
			Function_185(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_185(Global_30693[12]);
			Function_185(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_185(Global_30693[12]);
			Function_185(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_183(25, bParam2, 10);
			Function_185(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_185(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_185(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_183(13, bParam2, 4);
			Function_185(Global_30693[2]);
			Function_185(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_170(8))
				{
					Function_160(8, 0, 0, 1);
				}
			}
			Function_185(Global_30685[0]);
			Function_175(9);
			Function_171(7, 1);
			Function_171(11, 1);
			Function_171(3, 1);
			Function_171(20, 1);
			Function_173(57, 1);
			break;
		
		case 0x0000002A:
			Function_183(2, bParam2, 4);
			Function_185(Global_30717[0]);
			Function_185(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_185(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_185(Global_30717[0]);
			Function_185(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_185(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_185(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_185(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_183(17, bParam2, 4);
			Function_185(Global_30723[0]);
			Function_185(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_157(15))
				{
					Function_153(15, 0, 1);
				}
			}
			Function_31(&(Global_29008[Global_30717[1]]), 256);
			Function_175(11);
			Function_185(Global_30717[1]);
			Function_185(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_185(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_185(Global_30717[1]);
			Function_185(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_185(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_185(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_185(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_185(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_185(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_185(Global_30717[1]);
			Function_147(11);
			Function_175(12);
			Global_16537[1121].f_40 = 0;
			Function_173(56, 1);
			if (!bParam2)
			{
				if (!Function_170(9))
				{
					Function_160(9, 0, 0, 0);
				}
				if (!Function_170(10))
				{
					Function_160(10, 0, 0, 1);
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

void Function_147(int iParam0) //Position: 0x6DA2 / 28066
{
	bool bVar0;
	
	if (!Function_110(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_152(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_152(Global_16537[iParam021].f_72, 0);
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
			Function_148(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_148(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6F11 / 28433
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
		Function_150(Function_151(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_150(Function_151(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_150(StackVal);
				vVar1 = { StackVal, StackVal, Function_150(StackVal) };
				if (Function_149(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_149(vector3 vParam0, vector3 vParam3) //Position: 0x7017 / 28695
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_150(int iParam0) //Position: 0x7044 / 28740
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

var Function_151(vector3 vParam0) //Position: 0x709B / 28827
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

void Function_152(bool bParam0, bool bParam1) //Position: 0x70E9 / 28905
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

void Function_153(bool bParam0, bool bParam1, bool bParam2) //Position: 0x713D / 28989
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_48(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_157(bParam0))
	{
		if (!Function_170(bParam0))
		{
			Function_160(bParam0, 1, 0, 0);
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
		Function_117(457, 1, 0, 0);
		Function_156(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_155(0, 0, 1, 1))
			{
				Function_75(1);
				Function_74(1, 0);
			}
			else
			{
				Function_154();
			}
		}
	}
	return;
}

void Function_154() //Position: 0x72DB / 29403
{
	return;
}

bool Function_155(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x72E1 / 29409
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

void Function_156(bool bParam0, int iParam1) //Position: 0x7385 / 29573
{
	if (!Function_48(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_157(int iParam0) //Position: 0x73DA / 29658
{
	if (!Function_48(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_158(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_158(int iParam0, int iParam1) //Position: 0x742B / 29739
{
	int iVar0;
	
	if (!Function_48(iParam0))
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

void Function_159(var uParam0, int iParam1) //Position: 0x7458 / 29784
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_160(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7467 / 29799
{
	struct<8> Var0;
	
	if (!Function_48(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_169(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_170(bParam0))
	{
		Function_117(456, 1, 0, 0);
		Function_156(bParam0, 2);
		if (bParam2)
		{
			if (!Function_155(0, 0, 1, 1))
			{
				Function_75(1);
				Function_74(1, 5);
			}
			else
			{
				Function_154();
			}
		}
		Function_163(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_162() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_162() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_161(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_69(Global_76846, 2))
		{
			Function_66(Global_34573, 2, 1, 0);
		}
	}
}

void Function_161(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x75B1 / 30129
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

bool Function_162() //Position: 0x75FC / 30204
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_163(bool bParam0) //Position: 0x7629 / 30249
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
			if (Function_167(bParam0, Function_168(bVar24)))
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
			if (Function_167(bParam0, Function_168(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_166(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_165(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_164(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_164(int iParam0) //Position: 0x77D9 / 30681
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_48(iParam0))
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

void Function_165(bool bParam0, bool bParam1) //Position: 0x7830 / 30768
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

var Function_166(int iParam0) //Position: 0x7855 / 30805
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_48(iParam0))
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

bool Function_167(bool bParam0, bool bParam1) //Position: 0x78AB / 30891
{
	int iVar0;
	
	if (!Function_48(bParam0))
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

bool Function_168(bool bParam0) //Position: 0x790A / 30986
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_169(int iParam0) //Position: 0x7916 / 30998
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_170(int iParam0) //Position: 0x7932 / 31026
{
	if (!Function_48(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_158(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_171(int iParam0, int iParam1) //Position: 0x7984 / 31108
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_172(iParam0, iParam1);
	Function_66(Global_34573, 1, 4, 1);
	return 1;
}

int Function_172(int iParam0, int iParam1) //Position: 0x79F7 / 31223
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_173(int iParam0, int iParam1) //Position: 0x7A53 / 31315
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_174(iParam0, iParam1);
	Function_66(Global_34573, 1, 4, 1);
	return 1;
}

int Function_174(int iParam0, int iParam1) //Position: 0x7AC4 / 31428
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_175(int iParam0) //Position: 0x7B1E / 31518
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_110(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_182(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_182(Global_16537[iParam021].f_72, 0);
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
			Function_117(468, 1, 0, 0);
			Function_116(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_161("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_148(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_160(14, 1, 0, 0);
				Function_176(14, 1, 0, 0, 0);
			}
			if (!Function_155(0, 0, 1, 1))
			{
				Function_75(1);
				Function_74(1, 6);
			}
			else
			{
				Function_154();
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
			Function_161("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_117(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_116(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_176(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7DCA / 32202
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_48(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_169(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_158(bParam0, 2))
	{
		Function_117(456, 1, 0, 0);
		Function_156(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_161(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_167(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_156(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_155(0, 0, 1, 1))
			{
				Function_75(1);
				Function_74(1, 0);
			}
			else
			{
				Function_154();
			}
		}
		Function_163(bParam0);
		if (StackVal && !Function_46(((((!Function_162() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_46((((Function_162() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_69(Global_76846, 2))
		{
			Function_66(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_178();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_177(3, bParam1);
				break;
			
			case 0x00000005:
				Function_177(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_177(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_177(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_177(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_177(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_116(2, 24);
				break;
			
			case 0x00000003:
				Function_116(2, 25);
				break;
			
			case 0x0000000F:
				Function_116(2, 26);
				break;
			
			case 0x0000000D:
				Function_116(2, 27);
				break;
			
			case 0x0000000E:
				Function_116(2, 28);
				break;
			}
	}
}

void Function_177(int iParam0, bool bParam1) //Position: 0x805A / 32858
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

void Function_178() //Position: 0x80B9 / 32953
{
	if (Function_48(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_181(Global_28180);
			Global_28180.f_8 = Function_179(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_181(Global_28180);
			Global_28180.f_8 = Function_179(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_179(int iParam0, int iParam1) //Position: 0x8134 / 33076
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
					if (Function_62(6, 0) || Function_62(12, 0))
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
					if (Function_180(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_62(5, 0))
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
					if (Function_180(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_180(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_180(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_180(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_62(26, 0))
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
					if (Function_180(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_180(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_180(27) && iVar18)
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
					if (Function_180(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_180(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_180(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_180(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_62(17, 0) && iVar15)
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
					if (Function_180(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_62(6, 0) && Function_180(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_180(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_62(9, 0) && Function_180(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_180(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_62(8, 0) && iVar19)
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
	if (Function_106(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_106(StackVal, StackVal, vVar3))
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
	if (!Function_106(StackVal, StackVal, vVar3))
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

int Function_180(int iParam0) //Position: 0x8D25 / 36133
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_181(int iParam0) //Position: 0x8D3A / 36154
{
	int iVar0;
	int iVar1;
	
	if (!Function_48(iParam0))
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

void Function_182(bool bParam0, bool bParam1) //Position: 0x8D89 / 36233
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

void Function_183(bool bParam0, bool bParam1, int iParam2) //Position: 0x8DDA / 36314
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_184(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_187(bParam0, 0, 0);
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

bool Function_184(int iParam0, int iParam1) //Position: 0x8E48 / 36424
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_185(int iParam0) //Position: 0x8E5B / 36443
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_34(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_37(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_117(473, 1, 0, 0);
		iVar0 = Function_186(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_117(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_117(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_117(476, 1, 0, 0);
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
		Function_116(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_116(7, 30);
	}
	if (Function_95(473) <= Function_96(473))
	{
		if (!Function_33())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_186(int iParam0) //Position: 0x8F5A / 36698
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_38(iParam0))
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

int Function_187(bool bParam0, bool bParam1, int iParam2) //Position: 0x8FB2 / 36786
{
	if (!Function_188(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_59(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_59(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_59(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_188(int iParam0) //Position: 0x9009 / 36873
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_189(bool bParam0) //Position: 0x901B / 36891
{
	bool bVar0;
	
	if (Function_46(bParam0, 1) && Function_46(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_190(int iParam0) //Position: 0x904F / 36943
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
			Function_191(4, 0, 0);
		}
	}
	return;
}

void Function_191(bool bParam0, bool bParam1, bool bParam2) //Position: 0x90B6 / 37046
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
		Function_192(Global_16524, bVar0, 1);
	}
	return;
}

void Function_192(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9193 / 37267
{
	int iVar0;
	
	Function_194(bParam0);
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
	Function_193();
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

void Function_193() //Position: 0x930C / 37644
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_194(int iParam0) //Position: 0x9318 / 37656
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

void Function_195() //Position: 0x935E / 37726
{
	Function_196();
	return;
}

void Function_196() //Position: 0x9367 / 37735
{
	Function_197(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_197(int iParam0) //Position: 0x9379 / 37753
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_198(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_198(var uParam0, int iParam1) //Position: 0x939F / 37791
{
	if (Function_200(uParam0[iParam13], 4))
	{
		if (Function_200(uParam0[iParam13], 1))
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
			Function_199(uParam0[iParam13], 1);
			Function_199(uParam0[iParam13], 2);
			Function_199(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_199(var uParam0, int iParam1) //Position: 0x94CD / 38093
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_200(int iParam0, int iParam1) //Position: 0x94E7 / 38119
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_201() //Position: 0x9504 / 38148
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_202(bool bParam0) //Position: 0x950D / 38157
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

int Function_203(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9565 / 38245
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
		Function_205(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_204(StackVal);
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

void Function_204(bool bParam0) //Position: 0x9883 / 39043
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

void Function_205(bool bParam0) //Position: 0x98AF / 39087
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_206() //Position: 0x98C4 / 39108
{
	if (IS_OBJECT_VALID(bLocal_435))
	{
		Function_57();
		DESTROY_OBJECT(bLocal_435);
	}
	if (IS_ACTOR_VALID(bLocal_426))
	{
		TASK_CLEAR(bLocal_426);
		PRINTSTRING("RELEASE_ACTOR(aBear)");
		PRINTNL();
		RELEASE_ACTOR(bLocal_426);
	}
	if (IS_ACTOR_VALID(bLocal_427))
	{
		SET_CRIPPLE_ENABLE(bLocal_427, 1);
		SET_ACTOR_IS_COMPANION(bLocal_427, 0);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_427);
		TASK_CLEAR(bLocal_427);
		PRINTSTRING("DEREFERENCE_ACTOR(aDog)");
		PRINTNL();
		DEREFERENCE_ACTOR(bLocal_427);
	}
	if (IS_ACTOR_VALID(bLocal_250))
	{
		TASK_CLEAR(bLocal_250);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_250);
	}
	if (SQUAD_IS_VALID(Local_4.f_44))
	{
		Function_207(&Local_4 + 44, 0, 0);
		PRINTSTRING("RELEASE_OBJECT_REF(home02_son03.Horse01Squad)");
		PRINTNL();
		RELEASE_OBJECT_REF(Local_4.f_44);
	}
	if (IS_ACTOR_VALID(bLocal_249))
	{
		if (IS_ACTOR_CRIPPLED(bLocal_249, 5))
		{
			SET_CRIPPLE_FLAG(bLocal_249, false);
			DECOR_REMOVE(bLocal_249, "NoBleedOut");
			RESET_ANIM_SET_FOR_ACTOR(bLocal_249, 0);
		}
	}
	return;
}

void Function_207(var uParam0, bool bParam1, bool bParam2) //Position: 0x99EA / 39402
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
				if (!Function_208(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_208(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9A66 / 39526
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_209(int iParam0) //Position: 0x9A80 / 39552
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

void Function_210(var uParam0, var uParam1, var uParam2) //Position: 0x9AC7 / 39623
{
	if (IS_DOOR_VALID(*uParam0))
	{
		SET_DOOR_LOCK(*uParam0, 0);
	}
	if (IS_DOOR_VALID(*uParam1))
	{
		SET_DOOR_LOCK(*uParam1, 0);
	}
	if (IS_DOOR_VALID(*uParam2))
	{
		SET_DOOR_LOCK(*uParam2, 0);
	}
	return;
}

void Function_211() //Position: 0x9AFD / 39677
{
	var uVar0[9];
	int iVar10;
	
	if (Function_254())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Follow Rufus";
		uVar0[4] = "Stage 03 - Are you up there?";
		uVar0[5] = "Stage 04 - Save Jake";
		uVar0[6] = "Stage 05 - Ride home";
		uVar0[7] = "Last Stage";
		uVar0[8] = "nPort Home";
		iVar10 = Function_240(&uLocal_231, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_239(&iVar10, &bLocal_245, &iLocal_246, &iLocal_238))
		{
			Function_232();
			Function_231();
		}
		if (iVar10 == 0)
		{
			Function_232();
			Function_231();
			Function_230(&bLocal_288, 8);
		}
		else if (iVar10 == 1)
		{
			Function_232();
			Function_231();
			Function_225(bLocal_245);
			Function_221(StackVal, StackVal, 5, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
		}
		else if (iVar10 == 2)
		{
			Function_232();
			Function_231();
			Function_216(&bLocal_290, 4);
		}
		else if (iVar10 == 3)
		{
			Function_215();
			Function_232();
			Function_231();
			Function_213(&bLocal_251);
			bLocal_245 = true;
			iLocal_246 = 0;
			iLocal_238 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_215();
			Function_232();
			Function_231();
			Function_213(&bLocal_251);
			bLocal_245 = 2;
			iLocal_246 = 0;
			iLocal_238 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_215();
			Function_232();
			Function_231();
			Function_213(&bLocal_251);
			bLocal_245 = 3;
			iLocal_246 = 0;
			iLocal_238 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_215();
			Function_232();
			Function_231();
			Function_213(&bLocal_251);
			bLocal_245 = 4;
			iLocal_246 = 0;
			iLocal_238 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_215();
			Function_232();
			Function_231();
			Function_213(&bLocal_251);
			bLocal_245 = 101;
			iLocal_246 = 0;
			iLocal_238 = 1000;
		}
		else if (iVar10 == 8)
		{
			Function_232();
			Function_231();
			TASK_CLEAR(bLocal_249);
			TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
			Function_212(Global_34573, -78,793f, 117,69f, 1315,892f, 148,456f, 1, 1, 1);
		}
	}
	return;
}

void Function_212(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x9D38 / 40248
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

void Function_213(bool bParam0) //Position: 0x9DF1 / 40433
{
	Function_214(bParam0, 0.0f);
	return;
}

void Function_214(int iParam0, float fParam1) //Position: 0x9DFD / 40445
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_109(iParam0, 1);
	Function_25(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_215() //Position: 0x9E1E / 40478
{
	if (IS_OBJECT_VALID(bLocal_435))
	{
		Function_57();
		DESTROY_OBJECT(bLocal_435);
	}
	if (IS_ACTOR_VALID(bLocal_426))
	{
		DESTROY_ACTOR(bLocal_426);
	}
	if (SQUAD_IS_VALID(Local_4.f_44))
	{
		Function_209(&Local_4 + 44);
		DESTROY_OBJECT(Local_4.f_44);
	}
	if (IS_ACTOR_VALID(bLocal_249))
	{
		if (IS_ACTOR_CRIPPLED(bLocal_249, 5))
		{
			SET_CRIPPLE_FLAG(bLocal_249, false);
			DECOR_REMOVE(bLocal_249, "NoBleedOut");
			DECOR_REMOVE(bLocal_249, "Injury_Idle");
		}
	}
	return;
}

void Function_216(bool bParam0, int iParam1) //Position: 0x9E9B / 40603
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_217(iParam1);
	*bParam0 = 1;
	return;
}

void Function_217(int iParam0) //Position: 0x9EBE / 40638
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_220("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_219(2) || Function_219(8)) || Function_219(9)) || Function_219(10))
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
		Function_220("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_220("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_220("");
	}
	else if (iParam0 == 8)
	{
		Function_218();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_218();
	}
	return;
}

void Function_218() //Position: 0x9FB5 / 40885
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_219(int iParam0) //Position: 0x9FC1 / 40897
{
	int iVar0;
	
	if (!Function_64(iParam0))
	{
		return 0;
	}
	iVar0 = Function_63(iParam0);
	if (!Function_18(Function_63(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_220(bool bParam0) //Position: 0x9FF7 / 40951
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_221(int iParam0, var uParam1, bool bParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA061 / 41057
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*bParam2 != 100)
	{
		Function_222(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_217(iParam0);
		*uParam1 = 1;
		*bParam2 = 100;
	}
}

void Function_222(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA09E / 41118
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_224(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_223(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_223(int iParam0) //Position: 0xA121 / 41249
{
	if (!Function_38(iParam0))
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

var Function_224(vector3 vParam0, bool bParam3) //Position: 0xA5CF / 42447
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

vector3 Function_225(bool bParam0) //Position: 0xA63A / 42554
{
	Function_226(bParam0 + 1);
	return StackVal, StackVal, Function_226(bParam0 + 1);
}

vector3 Function_226(bool bParam0) //Position: 0xA647 / 42567
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_227((*&Local_4 + 188)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 188)[0]);
			break;
		
		case 0x00000001:
			Function_227((*&Local_4 + 240)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 240)[0]);
			break;
		
		case 0x00000002:
			Function_227((*&Local_4 + 268)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 268)[0]);
			break;
		
		case 0x00000003:
			Function_227((*&Local_4 + 300)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 300)[0]);
			break;
		
		case 0x00000004:
			Function_227((*&Local_4 + 356)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 356)[0]);
			break;
		
		default:
			Function_227((*&Local_4 + 400)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 400)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_227((*&Local_4 + 188)[0]);
	return StackVal, StackVal, Function_227((*&Local_4 + 188)[0]);
}

vector3 Function_227(bool bParam0) //Position: 0xA738 / 42808
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

int Function_228(bool bParam0) //Position: 0xA75F / 42847
{
	return Function_229(bParam0 + 1);
}

int Function_229(bool bParam0) //Position: 0xA76C / 42860
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 188)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 240)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 268)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 300)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 356)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 400)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 188)[0]);
}

void Function_230(bool bParam0, int iParam1) //Position: 0xA85D / 43101
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_217(iParam1);
	*bParam0 = 1;
	return;
}

void Function_231() //Position: 0xA880 / 43136
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_232() //Position: 0xA895 / 43157
{
	Function_234();
	Function_233(10, 3);
	return;
}

void Function_233(int iParam0, int iParam1) //Position: 0xA8A4 / 43172
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

void Function_234() //Position: 0xA9DB / 43483
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_238())
	{
		Function_237(10, 3);
	}
	else
	{
		Function_235();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_59(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_59());
	UI_POP("nDebugMenu");
	return;
}

void Function_235() //Position: 0xAA26 / 43558
{
	Function_236(25, 2);
	return;
}

void Function_236(int iParam0, int iParam1) //Position: 0xAA32 / 43570
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

void Function_237(int iParam0, int iParam1) //Position: 0xAC30 / 44080
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

bool Function_238() //Position: 0xAD67 / 44391
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
				if (!Function_46(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_239(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xADCE / 44494
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_232();
			Function_231();
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
		Function_220("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_240(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAE74 / 44660
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_253(&Var15, &Var0);
	uVar20 = Function_252(*uParam1, &Var15);
	Function_251(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_250(uParam0, uVar20);
	Function_248(StackVal, uParam0, Var15.f_12);
	Function_246(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_245(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_242(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_241(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_241(int iParam0, int iParam1, int iParam2) //Position: 0xAF3B / 44859
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

bool Function_242(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xAF97 / 44951
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
				Function_244(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_244(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_241(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_243(bParam1->f_32);
	}
	else
	{
		Function_243(bParam1->f_32);
	}
	return 0;
}

void Function_243(bool bParam0) //Position: 0xB11D / 45341
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

void Function_244(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB157 / 45399
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

var Function_245(int iParam0, var uParam1, int iParam2) //Position: 0xB205 / 45573
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_246(var uParam0, int iParam1, int iParam2) //Position: 0xB229 / 45609
{
	switch (Function_247())
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

int Function_247() //Position: 0xB2C5 / 45765
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

void Function_248(var uParam0, int iParam1, int iParam2) //Position: 0xB301 / 45825
{
	switch (Function_249(uParam0))
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

int Function_249(bool bParam0) //Position: 0xB399 / 45977
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_59()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_46(*bParam0, 0x40000000))
		{
			Function_109(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_46(*bParam0, 0x40000000))
		{
			Function_109(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_25(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_59()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_46(*bParam0, 0x20000000))
		{
			Function_109(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_46(*bParam0, 0x20000000))
		{
			Function_109(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_25(bParam0, 0x20000000);
	return 0;
}

var Function_250(var uParam0, int iParam1) //Position: 0xB4E4 / 46308
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

void Function_251(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB633 / 46643
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

var Function_252(int iParam0, int iParam1) //Position: 0xB6C6 / 46790
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_253(var uParam0, var uParam1) //Position: 0xB6E0 / 46816
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

bool Function_254() //Position: 0xB72E / 46894
{
	return Global_30920;
}

bool Function_255() //Position: 0xB737 / 46903
{
	var uVar0;
	
	if (IS_EXITFLAG_SET())
	{
		Function_225(bLocal_245);
		Function_221(StackVal, StackVal, 4, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
		return 0;
	}
	Function_490(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_199, bLocal_245, iLocal_246, &bLocal_290, &bLocal_288, &bLocal_289);
	if (bLocal_245 == 99 && bLocal_245 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			if (IS_ACTOR_ALIVE(bLocal_249))
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (ACTORS_IN_RANGE(bLocal_249, Global_34573, 25.0f))
					{
						GET_OBJECT_POSITION(Global_34573, &uVar0);
						bLocal_429 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &uVar0, 4);
						TASK_FACE_COORD(false, &uVar0, 0);
						TASK_CROUCH(false, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
						TASK_SEQUENCE_RELEASE(bLocal_429, 1);
						TASK_PRIORITY_SET(bLocal_249, true);
					}
				}
			}
			Function_225(bLocal_245);
			Function_221(StackVal, StackVal, 1, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
			return 1;
		}
		if (Function_470(&Local_332, &uLocal_292, &uLocal_418, bLocal_248, iLocal_291))
		{
			if (Function_468(&uLocal_418))
			{
				Function_225(bLocal_245);
				Function_221(StackVal, StackVal, 5, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
				return 1;
			}
		}
		if (IS_ACTOR_VALID(bLocal_249))
		{
			if (!IS_ACTOR_ALIVE(bLocal_249))
			{
				Function_220("Son_dead");
				Function_225(bLocal_245);
				Function_221(StackVal, StackVal, 5, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
			}
		}
		if (IS_ACTOR_VALID(bLocal_425))
		{
			if (!IS_ACTOR_ALIVE(bLocal_425))
			{
				Function_220("nWife_dead");
				Function_225(bLocal_245);
				Function_221(StackVal, StackVal, 5, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
			}
		}
		if (IS_ACTOR_VALID(bLocal_427))
		{
			if (!IS_ACTOR_ALIVE(bLocal_427))
			{
				Function_220("Dog_dead");
				Function_225(bLocal_245);
				Function_221(StackVal, StackVal, 5, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
			}
		}
		if (Global_3403 || Global_3404)
		{
			Function_225(bLocal_245);
			Function_221(StackVal, StackVal, 2, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
			return 1;
		}
		if (Function_467(2048))
		{
			Function_225(bLocal_245);
			Function_221(StackVal, StackVal, 3, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
			return 1;
		}
		Function_464(&bLocal_250, bLocal_249);
		Function_463();
	}
	switch (bLocal_245)
	{
		case 0x00000063:
			Function_436();
			break;
		
		case 0x00000000:
			Function_424();
			break;
		
		case 0x00000001:
			Function_417();
			break;
		
		case 0x00000002:
			Function_408();
			break;
		
		case 0x00000003:
			Function_401();
			break;
		
		case 0x00000004:
			Function_334();
			break;
		
		case 0x00000065:
			Function_258();
			break;
		
		case 0x00000064:
			if (Function_257(&bLocal_289))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_256(&bLocal_245, &iLocal_246, &iLocal_238))
			{
				return 0;
			}
			break;
	}
	if (bLocal_288)
	{
		Function_230(&bLocal_288, 8);
		return 0;
	}
	if (bLocal_289 && bLocal_245 == 100)
	{
		Function_225(bLocal_245);
		Function_221(StackVal, StackVal, 5, &bLocal_289, &bLocal_245, Function_228(bLocal_245), Function_225(bLocal_245), 0);
	}
	if (bLocal_290)
	{
		Function_216(&bLocal_290, 4);
		return 0;
	}
	return 1;
}

bool Function_256(var uParam0, var uParam1, int iParam2) //Position: 0xB9D0 / 47568
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

bool Function_257(int iParam0) //Position: 0xBA10 / 47632
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_258() //Position: 0xBA23 / 47651
{
	Function_333(bLocal_198);
	Function_330();
	switch (iLocal_246)
	{
		case 0x00000000:
			Function_326(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
			if (IS_ACTOR_VALID(bLocal_427))
			{
				SET_ACTOR_HEALTH(bLocal_427, GET_ACTOR_MAX_HEALTH(bLocal_427));
				Function_324(bLocal_427, (*&Local_4 + 400)[4], 0, 1, 1, 1);
			}
			Function_323(&iLocal_424, 0, 0, 4294967295, 4294967295);
			if (IS_ACTOR_VALID(bLocal_250))
			{
				TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_250, true);
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_249);
				MEMORY_PREFER_RIDING(bLocal_249, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_249);
				TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_249, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_322(0.0f, "Last_Stage.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_318();
				bLocal_247 = Global_30717[1];
				if (!Function_317(bLocal_247))
				{
					Function_316(&Local_199);
				}
				Function_324(Global_34573, (*&Local_4 + 400)[0], 0, 1, 1, 1);
				Function_213(&bLocal_251);
				iLocal_246 = 1;
			}
			else
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_317(bLocal_247) || bLocal_247 != 4294967295))
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_430 = 0;
			iLocal_434 = 0;
			AUDIO_SET_PLAYER_MOOD(0, 0);
			Function_213(&bLocal_251);
			iLocal_246 = 3;
			break;
		
		case 0x00000003:
			if (Function_259("$/cutscene/SON03_CS02_D/SON03_CS02_D", &iLocal_238, &Local_199, &bLocal_245, 59092, 57292, 54940, 53703, 51330, 50997, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_213(&bLocal_251);
				iLocal_246 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_288 = true;
			}
			break;
	}
	return;
}

bool Function_259(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xBBF7 / 48119
{
	if (!bParam15)
	{
		Function_272(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*bParam3 != 99 && (Function_271(iParam2) || iParam2->f_24 < 1))
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
				Function_213(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_270())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_269(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_213(iParam1 + 4);
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
					Function_269(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_266(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_266(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_264(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_269(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_213(iParam1 + 4);
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
						Function_263(1.0f);
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
						Function_261();
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
					Function_260(1);
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
			if ((HUD_IS_FADED() && *bParam3 == 99) && !Function_271(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_260(bool bParam0) //Position: 0xC20C / 49676
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

void Function_261() //Position: 0xC2B1 / 49841
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_262();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_262() //Position: 0xC2F6 / 49910
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_263(bool bParam0) //Position: 0xC308 / 49928
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

void Function_264(bool bParam0, bool bParam1) //Position: 0xC325 / 49957
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_86(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_265(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_265(bool bParam0) //Position: 0xC3A5 / 50085
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

float Function_266(int iParam0) //Position: 0xC3D4 / 50132
{
	if (Function_268(iParam0))
	{
		if (Function_267(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_267(int iParam0) //Position: 0xC49C / 50332
{
	return Function_46(*iParam0, 2);
}

bool Function_268(bool bParam0) //Position: 0xC4A9 / 50345
{
	return Function_46(*bParam0, 1);
}

int Function_269(bool bParam0) //Position: 0xC4B6 / 50358
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

bool Function_270() //Position: 0xC56E / 50542
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

bool Function_271(int iParam0) //Position: 0xC5A8 / 50600
{
	return iParam0->f_20;
}

void Function_272(var uParam0, int iParam1) //Position: 0xC5B2 / 50610
{
	Function_273(uParam0, iParam1, 0);
	return;
}

void Function_273(var uParam0, bool bParam1, bool bParam2) //Position: 0xC5C0 / 50624
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
			Function_274(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_117(20, 1, 0, 0);
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
						Function_274(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_117(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_274(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC70C / 50956
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

int Function_275() //Position: 0xC735 / 50997
{
	switch (bLocal_245)
	{
		case 0x00000063:
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			if (!iLocal_464)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				iLocal_464 = 1;
			}
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED - DEFAULT???");
			Function_276();
			return 1;
			break;
	}
	return 0;
}

int Function_276() //Position: 0xC87B / 51323
{
	return 1;
}

int Function_277() //Position: 0xC882 / 51330
{
	var uVar0;
	
	switch (bLocal_245)
	{
		case 0x00000063:
			AI_STOP_IGNORING_ACTORS();
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 48)[0]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 48)[0]);
			DESTROY_VOLUME((*&Local_4 + 48)[0]);
			Function_288(2, 1, 1, 0, 1, 1, 1, 1, 1, 1);
			if (!IS_ACTOR_VALID(bLocal_250))
			{
				GET_OBJECT_POSITION((*&Local_4 + 188)[7], &vLocal_439);
				bLocal_250 = Function_281(1, 1, vLocal_439.x, vLocal_439.y, vLocal_439.z, 0, 1, 0);
				REMOVE_HORSE_ACCESSORY(bLocal_250, 4);
				ACCESSORIZE_HORSE(bLocal_250, 3);
			}
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			Function_288(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000004:
			Function_288(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			if (GET_MOUNT(Global_34573) != bLocal_250)
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_250);
			}
			if (GET_MOUNT(bLocal_249) != bLocal_250)
			{
				SET_MOUNTS_AS_PASSENGER(bLocal_249, 1);
				SET_ACTORS_HORSE(bLocal_249, bLocal_250);
				Function_279(&bLocal_249, bLocal_250, 1);
				ACTOR_MOUNT_ACTOR(bLocal_249, bLocal_250);
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_288(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			GET_VOLUME_CENTER(Local_4.f_180, &uVar0);
			bLocal_429 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, &uVar0, 7,5f, 4);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_180, -1f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
			TASK_SEQUENCE_RELEASE(bLocal_429, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_249, 0);
			MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_249);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE - DEFAULT???");
			Function_278();
			return 1;
			break;
	}
	return 0;
}

int Function_278() //Position: 0xCAB3 / 51891
{
	Function_288(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_279(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCAC7 / 51911
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_280(bParam1);
			vVar0 = { StackVal, StackVal, Function_280(bParam1) };
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

vector3 Function_280(bool bParam0) //Position: 0xCBCF / 52175
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

bool Function_281(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xCC39 / 52281
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
	if (Global_3381 || Function_219(1))
	{
		Function_287(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_286())
		{
			return "";
		}
	}
	if (!Function_284())
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
		Function_227(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_227(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_227(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_227(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_283(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_283(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_33() || NET_IS_IN_SESSION())
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

void Function_282(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xCF91 / 53137
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

var Function_283(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xCFCE / 53198
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

bool Function_284() //Position: 0xD069 / 53353
{
	if (Function_285() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_285() //Position: 0xD07F / 53375
{
	return Global_12976.f_152;
}

bool Function_286() //Position: 0xD08A / 53386
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_287(var uParam0, bool bParam1, bool bParam2) //Position: 0xD0AA / 53418
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_109(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_109(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_288(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xD0D7 / 53463
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
		bVar0 = Function_59();
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
			if (Function_33())
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
		Function_117(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_231();
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
	Function_260(bParam9);
}

int Function_289() //Position: 0xD1C7 / 53703
{
	switch (bLocal_245)
	{
		case 0x00000063:
			TASK_CLEAR(Global_34573);
			Function_324(Global_34573, (*&Local_4 + 188)[1], ", CUTSCENE_CUSTOM_SET_POSES - SID_INITIALIZE", 0, 1, 1);
			if (!iLocal_461)
			{
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2,5f, 0);
				iLocal_461 = 1;
			}
			if (IS_ACTOR_VALID(bLocal_250))
			{
				SET_ACTOR_HEALTH(bLocal_250, GET_ACTOR_MAX_HEALTH(bLocal_250));
				Function_324(bLocal_250, (*&Local_4 + 188)[7], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
				Function_324(bLocal_249, (*&Local_4 + 188)[3], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_428))
			{
				SET_ACTOR_HEALTH(bLocal_428, GET_ACTOR_MAX_HEALTH(bLocal_428));
				Function_324(bLocal_428, (*&Local_4 + 188)[10], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_425))
			{
				SET_ACTOR_HEALTH(bLocal_425, GET_ACTOR_MAX_HEALTH(bLocal_425));
				Function_324(bLocal_425, (*&Local_4 + 188)[5], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				SET_ACTOR_HEALTH(bLocal_427, GET_ACTOR_MAX_HEALTH(bLocal_427));
				Function_324(bLocal_427, (*&Local_4 + 188)[6], 0, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(Global_34573))
			{
				Function_324(Global_34573, (*&Local_4 + 300)[1], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				Function_324(bLocal_249, (*&Local_4 + 300)[3], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_250))
			{
				Function_324(bLocal_250, (*&Local_4 + 300)[7], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				Function_324(bLocal_427, (*&Local_4 + 300)[5], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_426))
			{
				Function_324(bLocal_426, (*&Local_4 + 300)[10], 0, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(Global_34573))
			{
				ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				if (IS_ACTOR_CRIPPLED(bLocal_249, 5))
				{
					SET_CRIPPLE_FLAG(bLocal_249, false);
					DECOR_REMOVE(bLocal_249, "NoBleedOut");
					DECOR_SET_BOOL(bLocal_249, "Injury_Idle", true);
				}
				if (!IS_ACTOR_CRIPPLED(bLocal_249, 5))
				{
					SET_CRIPPLE_FLAG(bLocal_249, 2);
					DECOR_REMOVE(bLocal_249, "NoBleedOut");
					DECOR_SET_BOOL(bLocal_249, "Injury_Idle", true);
				}
				Function_324(bLocal_249, (*&Local_4 + 356)[2], 0, 1, 1, 1);
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_249, true);
				MEMORY_ALLOW_SHOOTING(bLocal_249, false);
			}
			if (IS_ACTOR_VALID(bLocal_250))
			{
				SET_ACTOR_HEALTH(bLocal_250, GET_ACTOR_MAX_HEALTH(bLocal_250));
				Function_324(bLocal_250, (*&Local_4 + 356)[6], "", 0, 0, 1);
				TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_250);
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				SET_ACTOR_HEALTH(bLocal_427, GET_ACTOR_MAX_HEALTH(bLocal_427));
				Function_324(bLocal_427, (*&Local_4 + 356)[4], 0, 1, 1, 1);
				Function_204(bLocal_427);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 32)[02]))
			{
				if (IS_ACTOR_ALIVE((*&Local_4 + 32)[02]))
				{
					SET_ACTOR_PERMANENT_DEAD((*&Local_4 + 32)[02]);
					Function_291((*&Local_4 + 32)[02]);
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_250))
				{
					if (GET_MOUNT(Global_34573) != bLocal_250)
					{
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_250);
					}
					Function_324(bLocal_250, (*&Local_4 + 356)[6], 0, 1, 1, 1);
				}
				ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				if (IS_ACTOR_VALID(bLocal_250))
				{
					if (GET_MOUNT(bLocal_249) != bLocal_250)
					{
						SET_ACTORS_HORSE(bLocal_249, bLocal_250);
						Function_279(&bLocal_249, bLocal_250, 1);
						ACTOR_MOUNT_ACTOR(bLocal_249, bLocal_250);
					}
				}
			}
			return 1;
			break;
		
		case 0x00000065:
			if (GET_MOUNT(Global_34573) != bLocal_250)
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_250);
			}
			if (GET_MOUNT(bLocal_249) != "")
			{
				ACTOR_DISMOUNT_NOW(bLocal_249);
			}
			Function_324(bLocal_249, (*&Local_4 + 400)[2], 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES - DEFAULT???");
			Function_290();
			return 1;
			break;
	}
	return 0;
}

int Function_290() //Position: 0xD661 / 54881
{
	return 1;
}

void Function_291(bool bParam0) //Position: 0xD668 / 54888
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

int Function_292() //Position: 0xD69C / 54940
{
	switch (bLocal_245)
	{
		case 0x00000063:
			if (!Function_300() && !Function_294(&bLocal_206))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			PRINTSTRING("frame: ");
			PRINTINT(CUTSCENE_MANAGER_GET_CURRENT_FRAME());
			PRINTNL();
			if (CUTSCENE_MANAGER_GET_CURRENT_FRAME() > 400)
			{
				if (!iLocal_464)
				{
					LOG_ERROR("GUNFIGHT_SUSPENSE_HIGH");
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_SUSPENSE_HIGH", 0, 4294967295, 4294967295);
					iLocal_464 = 1;
				}
			}
			if (IS_ACTOR_VALID(bLocal_426))
			{
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					switch (iLocal_434)
					{
						case 0x0000000A:
							if (STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DESCRIPTION(), "BearEatGrowl"))
							{
								SET_ANIM_SET_FOR_ACTOR(bLocal_426, "cs_son03_bear", 0);
								SET_ACTION_NODE_FOR_ACTOR(bLocal_426, "cs_son03_bear");
								iLocal_434 = 11;
							}
							return 0;
							break;
						
						case 0x0000000B:
							if (STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DESCRIPTION(), "BearCharge"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bLocal_426, "cs_son03_bear/CS_Bear_p2");
								iLocal_434 = 12;
							}
							return 0;
							break;
						
						case 0x0000000C:
							return 1;
							break;
						
						default:
							LOG_ERROR("iBearState???");
							break;
						}
					}
			}
			return 0;
			break;
		
		case 0x00000004:
			if (!Function_300() && !Function_294(&bLocal_206))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000065:
			if (!Function_300() && !Function_294(&bLocal_206))
			{
				return 0;
			}
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT - DEFAULT???");
			Function_293();
			return 1;
			break;
	}
	return 0;
}

int Function_293() //Position: 0xD92D / 55597
{
	return 1;
}

bool Function_294(bool bParam0) //Position: 0xD934 / 55604
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_299();
	iVar1 = 0;
	if (!Function_200(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_298(bParam0[iVar03], 8);
		}
		else if (Function_297())
		{
			iVar1 = 1;
			Function_298(bParam0[iVar03], 8);
		}
		Function_298(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_200(bParam0[iVar03], 4))
		{
			if (!Function_200(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_200(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_200(bParam0[03], 8) || iVar1));
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
				Function_298(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_200(bParam0[iVar03], 4))
		{
			if (!Function_200(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_298(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_298(bParam0[iVar03], 2);
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
							Function_298(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_298(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_298(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_298(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_298(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_298(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_298(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_298(bParam0[iVar03], 2);
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
	Function_295();
	return 1;
}

void Function_295() //Position: 0xDCAF / 56495
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

bool Function_296(int iParam0) //Position: 0xDCEF / 56559
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_297() //Position: 0xDD0B / 56587
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

void Function_298(var uParam0, int iParam1) //Position: 0xDD36 / 56630
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_299() //Position: 0xDD47 / 56647
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

bool Function_300() //Position: 0xDD89 / 56713
{
	Function_303(&Local_4 + 4, 999, 2, 0);
	Function_301(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/mex_sitground_tlkpsnt_hrassol_link", 1, 0);
	if (Function_294(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_301(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xDE00 / 56832
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_302(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_298(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_302(var uParam0, int iParam1, int iParam2) //Position: 0xDE38 / 56888
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_200(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_298(uParam0[iVar03], 4);
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

var Function_303(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xDEFC / 57084
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_200(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_298(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_298(uParam0[iVar03], 8);
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

int Function_304() //Position: 0xDFCC / 57292
{
	vector3 vVar0;
	
	switch (bLocal_245)
	{
		case 0x00000063:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			if (!Function_300() && !Function_294(&bLocal_206))
			{
				return 0;
			}
			if (HUD_IS_FADED())
			{
				Function_308(1.0f, "CUTSCENE_CUSTOM_STREAMING - SID_FOURTH_STAGE");
			}
			return 1;
			break;
		
		case 0x00000004:
			Function_306(0, 0, 4294967295, 4294967295);
			Function_323(&iLocal_424, 0, 0, 4294967295, 4294967295);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000065:
			GET_VOLUME_CENTER(Local_4.f_180, &vVar0);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(vVar0, 0, 0);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING - DEFAULT???");
			Function_305();
			return 1;
			break;
	}
	return 0;
}

int Function_305() //Position: 0xE16A / 57706
{
	return 1;
}

void Function_306(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xE171 / 57713
{
	AUDIO_MUSIC_SET_MOOD(Function_307(iParam0), iParam1, iParam2, iParam3);
}

var Function_307(int iParam0) //Position: 0xE187 / 57735
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

void Function_308(bool bParam0, float fParam1) //Position: 0xE6C4 / 59076
{
	HUD_FADE_IN(bParam0, 1065353216);
	return;
}

int Function_309() //Position: 0xE6D4 / 59092
{
	switch (bLocal_245)
	{
		case 0x00000063:
			Function_313(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_227((*&Local_4 + 188)[0]);
			Function_311(StackVal, StackVal, bLocal_198, Function_227((*&Local_4 + 188)[0]), &Local_4 + 48[0], 1, 0, 0, 0, 1, 1);
			Function_324(Global_34573, (*&Local_4 + 188)[1], ", CUTSCENE_CUSTOM_SETUP - SID_INITIALIZE", 1, 1, 1);
			TASK_STAND_STILL(bLocal_426, -1.0f, 0, 0);
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			Function_313(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_227((*&Local_4 + 300)[0]);
			Function_311(StackVal, StackVal, bLocal_198, Function_227((*&Local_4 + 300)[0]), &Local_4 + 48[3], 0, 0, 0, 0, 1, 1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_249, true);
			SET_ANIM_SET_FOR_ACTOR(bLocal_426, "cs_son03_bear", 0);
			return 1;
			break;
		
		case 0x00000004:
			Function_323(&iLocal_424, 0, 0, 4294967295, 4294967295);
			Function_313(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_227((*&Local_4 + 356)[0]);
			Function_311(StackVal, StackVal, bLocal_198, Function_227((*&Local_4 + 356)[0]), &Local_4 + 48[4], 0, 0, 0, 0, 1, 1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_249, true);
			return 1;
			break;
		
		case 0x00000065:
			Function_313(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_227((*&Local_4 + 400)[0]);
			Function_311(StackVal, StackVal, bLocal_198, Function_227((*&Local_4 + 400)[0]), &Local_4 + 48[5], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP - DEFAULT???");
			Function_310();
			return 1;
			break;
	}
	return 0;
}

int Function_310() //Position: 0xE909 / 59657
{
	float fVar0;
	
	Function_313(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol", 2, Global_34574, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	Function_311(StackVal, StackVal, Global_6289, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_311(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xE964 / 59748
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
	if (IS_VOLUME_VALID(*fParam4))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol")))
		{
			if (*fParam4 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"), vParam1);
			}
		}
	}
	else
	{
		*fParam4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "CutsceneVol", 2, vParam1, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	}
	if (IS_VOLUME_VALID(*fParam4))
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
				Function_312(bVar1, bParam0);
			}
		}
		if (!Function_106(StackVal, StackVal, vVar2))
		{
			if (!IS_ACTOR_VALID(bVar0))
			{
				bVar0 = Global_12976.f_36;
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *fParam4))
				{
					TELEPORT_ACTOR(bVar0, &vVar2, 1, 1, 1);
					TASK_CLEAR(bVar0);
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *fParam4))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(*fParam4))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*fParam4);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(*fParam4))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*fParam4);
		}
		if (bParam10)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(*fParam4);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(*fParam4, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(*fParam4);
		if (bParam9)
		{
			Global_63117 = *fParam4;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_312(bool bParam0, bool bParam1) //Position: 0xEBD2 / 60370
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

void Function_313(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xEC47 / 60487
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
	Function_231();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_59();
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
			if (Function_33())
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
				Function_315(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_86(), 2, Function_315(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_117(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_314()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_314()));
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
		Function_189(0x4000000);
	}
	if (Function_296(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_189(0x8000000);
	}
}

var Function_314() //Position: 0xEEF0 / 61168
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

vector3 Function_315(bool bParam0) //Position: 0xEF6F / 61295
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_316(int iParam0) //Position: 0xEF80 / 61312
{
	if (!Function_271(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_32(1, 0, 1);
		}
	}
	return;
}

bool Function_317(bool bParam0) //Position: 0xEF9B / 61339
{
	if (!Function_38(bParam0))
	{
		return 1;
	}
	return Function_34(&(Global_29008[bParam0]), 4);
}

void Function_318() //Position: 0xEFB7 / 61367
{
	Function_189(18444);
	Function_321(12);
	Function_321(13);
	Function_321(11);
	Function_321(35);
	Function_321(6);
	Function_321(3);
	Function_321(16);
	Function_319(4);
	return;
}

void Function_319(int iParam0) //Position: 0xEFE8 / 61416
{
	Function_320(&Global_28842, iParam0);
	return;
}

void Function_320(var uParam0, int iParam1) //Position: 0xEFF6 / 61430
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_321(int iParam0) //Position: 0xF019 / 61465
{
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_322(float fParam0, int iParam1) //Position: 0xF039 / 61497
{
	HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
	HUD_FADE_OUT(fParam0, 1f, 1);
	return;
}

void Function_323(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xF051 / 61521
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_307(*iParam0), iParam2, iParam3, iParam4);
	}
}

void Function_324(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF075 / 61557
{
	Function_325(bParam0, bParam1, iParam3, iParam4, iParam5);
}

void Function_325(bool bParam0, bool bParam1, int iParam2, bool bParam3, var uParam4) //Position: 0xF08A / 61578
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
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam0, vVar0, iParam2, bParam3, uParam4);
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

void Function_326(bool bParam0) //Position: 0xF191 / 61841
{
	Function_327(0, 0x40400000);
	Function_52();
	Function_51();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_327(bool bParam0, float fParam1) //Position: 0xF1C5 / 61893
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

void Function_328() //Position: 0xF2C3 / 62147
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_329() //Position: 0xF2F5 / 62197
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

void Function_330() //Position: 0xF3F2 / 62450
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bLocal_249))
	{
		if (bLocal_245 == 4)
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (GET_MOUNT(Global_34573) != bLocal_250)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
					{
						if (IS_ACTOR_HORSE(GET_MOUNT(Global_34573)))
						{
							bLocal_250 = GET_MOUNT(Global_34573);
							SET_ACTORS_HORSE(bLocal_249, bLocal_250);
							Function_279(&bLocal_249, bLocal_250, 1);
						}
					}
				}
				if (GET_TASK_STATUS(bLocal_249, 7) == 1)
				{
					TASK_CLEAR(bLocal_249);
				}
			}
			else if (!IS_ACTOR_ALIVE(bLocal_250))
			{
				if (GET_TASK_STATUS(bLocal_249, 7) != 1)
				{
					TASK_FOLLOW_ACTOR(bLocal_249, Global_34573);
				}
			}
		}
		switch (iLocal_430)
		{
			case 0x00000000:
				iLocal_430 = 1;
				break;
			
			case 0x00000001:
				iVar0 = 0;
				while (iVar0 < 2)
				{
					ADD_BLOOD_TO_ACTOR(bLocal_249, 0.0f, 0,459f, -0,5f, 4, 1, 0);
					ADD_BLOOD_TO_ACTOR(bLocal_249, 0.0f, 1.0f, -0,5f, 3, 1, 0);
					ADD_BLOOD_TO_ACTOR(bLocal_249, 0.0f, 1,25f, -0,5f, 3, 1, 0);
					iVar0++;
				}
				iLocal_430 = 2;
				break;
			
			case 0x00000002:
				if (bLocal_245 == 3)
				{
					Function_213(&bLocal_260);
					iLocal_430 = 40;
				}
				if (bLocal_245 == 4)
				{
					Function_213(&bLocal_260);
					iLocal_430 = 50;
				}
				break;
			
			case 0x00000028:
				if (Function_332(&bLocal_272, 2.0f))
				{
					if (Function_331())
					{
						SET_ACTION_NODE_FOR_ACTOR(bLocal_250, "son03_jack/talk_leg");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(bLocal_250, "son03_jack/talk_survey");
					}
					Function_213(&bLocal_260);
				}
				break;
			
			case 0x00000032:
				break;
			}
	}
	return;
}

bool Function_331() //Position: 0xF570 / 62832
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_332(bool bParam0, float fParam1) //Position: 0xF583 / 62851
{
	if (Function_268(bParam0))
	{
		if (Function_266(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_333(bool bParam0) //Position: 0xF59F / 62879
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
						if (((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1088 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1101) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1041) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1042) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1043) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1044)
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

void Function_334() //Position: 0xF741 / 63297
{
	struct<5> Var0;
	
	Function_333(bLocal_198);
	if (iLocal_246 < 3 && iLocal_246 > 105)
	{
		Function_330();
		Function_392(15.0f);
		Function_391();
		Function_227((*&Local_4 + 400)[0]);
		Function_388(StackVal, StackVal, "$/cutscene/SON03_CS02_D/SON03_CS02_D", &uLocal_423, Function_227((*&Local_4 + 400)[0]), 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
		if (IS_VOLUME_VALID(Local_4.f_176))
		{
			GET_OBJECT_POSITION(Global_34573, &Var0);
			GET_OBJECT_POSITION(bLocal_427, &Var3);
			if (StackVal || (StackVal > IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_176) && !Function_208(bLocal_427, 0x3f800000, 0x42960000, 1, 1, 0)))
			{
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_427, Global_34573, 60.0f, 10.0f, 50.0f);
				DESTROY_VOLUME(Local_4.f_176);
			}
		}
		if ((iLocal_246 != 42 || iLocal_246 != 43) || iLocal_246 != 44)
		{
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				if (IS_OBJECT_VALID(bLocal_435))
				{
					if (GATEWAY_UPDATE(bLocal_435))
					{
						if (IS_OBJECT_VALID(bLocal_435))
						{
							DESTROY_OBJECT(bLocal_435);
						}
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_231();
						Function_213(&bLocal_251);
						iLocal_246 = 105;
					}
				}
			}
		}
	}
	switch (iLocal_246)
	{
		case 0x00000000:
			Function_326(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
			Function_323(&iLocal_424, 0, 0, 4294967295, 4294967295);
			if (IS_ACTOR_VALID(bLocal_250))
			{
				TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_250, true);
				SET_ACTOR_INVULNERABILITY(bLocal_250, false);
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_249);
				MEMORY_PREFER_RIDING(bLocal_249, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_249);
				TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_249, true);
				SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
				if (!ACTOR_HAS_ANIM_SET(bLocal_249, "gent_ride_passenger"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_249, 0);
					SET_ANIM_SET_FOR_ACTOR(bLocal_249, "gent_ride_passenger", 0);
					SET_MOUNTS_AS_PASSENGER(bLocal_249, 1);
				}
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
				SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
				DECOR_REMOVE(bLocal_427, "Frank");
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_281[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_322(0.0f, "Stage_Five.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_318();
				bLocal_247 = Global_30637[1];
				if (!Function_317(bLocal_247))
				{
					Function_316(&Local_199);
				}
				Function_324(Global_34573, (*&Local_4 + 356)[0], 0, 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_427))
				{
					Function_324(bLocal_427, (*&Local_4 + 356)[4], 0, 1, 1, 1);
				}
				Function_213(&bLocal_251);
				iLocal_246 = 1;
			}
			else
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_317(bLocal_247) || bLocal_247 != 4294967295))
			{
				if (Function_386(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_199, bLocal_245))
				{
					Function_227((*&Local_4 + 356)[0]);
					if (Function_381(StackVal, StackVal, "$/cutscene/SON03_CS02_SEQ/SON03_CS02_SEQ", &uLocal_423, Function_227((*&Local_4 + 356)[0]), 71991, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
					{
						Function_213(&bLocal_251);
						iLocal_246 = 2;
					}
				}
				else
				{
					Function_213(&bLocal_251);
					iLocal_246 = 2;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_430 = 0;
			iLocal_434 = 0;
			iLocal_433 = 0;
			iLocal_465 = 0;
			Function_376();
			iLocal_291 = 0;
			Function_371(&(Local_332[017]), bLocal_249, "Son", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[117]), bLocal_427, "Dog", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[217]), bLocal_428, "Uncle", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[317]), bLocal_425, "Wife", 0, 0x5f5e100, 1);
			Function_367(&(Local_332[117]), 1024);
			Function_366(&(Local_332[417]));
			Function_323(&iLocal_424, 0, 0, 4294967295, 4294967295);
			if (Function_386(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_199, bLocal_245))
			{
				Function_226(bLocal_245);
				Function_360(StackVal, StackVal, Function_226(bLocal_245), bLocal_245, Global_30637[1], Function_229(bLocal_245), 2);
				Function_306(0, 0, 4294967295, 4294967295);
				Function_213(&bLocal_251);
				iLocal_246 = 3;
			}
			else
			{
				Function_226(bLocal_245);
				Function_360(StackVal, StackVal, Function_226(bLocal_245), bLocal_245, Global_30637[1], Function_229(bLocal_245), 2);
				Function_289();
				ACTOR_HOLSTER_WEAPON(Global_34573, 0);
				if (IS_ACTOR_VALID(bLocal_250))
				{
					if (GET_MOUNT(Global_34573) != bLocal_250)
					{
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_250);
					}
					Function_324(bLocal_250, (*&Local_4 + 356)[6], 0, 1, 1, 1);
					if (IS_ACTOR_VALID(bLocal_249))
					{
						if (GET_MOUNT(bLocal_249) != bLocal_250)
						{
							SET_ACTORS_HORSE(bLocal_249, bLocal_250);
							Function_279(&bLocal_249, bLocal_250, 1);
							ACTOR_MOUNT_ACTOR(bLocal_249, bLocal_250);
						}
					}
				}
				if (HUD_IS_FADED())
				{
					Function_308(1.0f, "Stage_Five.GID_POST_STREAMING");
				}
				Function_213(&bLocal_251);
				iLocal_246 = 6;
			}
			break;
		
		case 0x00000003:
			if (Function_259("$/cutscene/SON03_CS02_SEQ/SON03_CS02_SEQ", &iLocal_238, &Local_199, &bLocal_245, 59092, 57292, 54940, 53703, 51330, 50997, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					Function_308(1.0f, "Stage_Five.GID_CUTSCENE");
				}
				Function_213(&bLocal_251);
				iLocal_246 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(bLocal_249))
				{
					MEMORY_PREFER_RIDING(bLocal_249, true);
					MEMORY_ALLOW_SHOOTING(bLocal_249, true);
					Function_108();
					vLocal_436 = { StackVal, StackVal, Function_108() };
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, bLocal_250, 0, 1, 2, 2147483647);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_249, true);
				}
				if (IS_ACTOR_VALID(bLocal_427))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_427, Global_34573, 60.0f, 10.0f, 50.0f);
					vLocal_442[03] = { 1,5f, 0.0f, 6.0f };
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_FOLLOW_OBJECT(false, Global_34573, &(vLocal_442[03]), 0, 0, 0, 0, 0, 0, 1);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				bLocal_435 = Function_359(bLocal_198, "HOME02SON03GATEWAY01", (*&Local_4 + 104)[4], Global_34573, 1, 330, 4294967295, 0, 0, 1);
				if (IS_OBJECT_VALID(bLocal_435))
				{
				}
				Function_227(bLocal_435);
				Function_357(StackVal, StackVal, Function_227(bLocal_435), 0, 48, 1);
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
				Function_213(&bLocal_251);
				iLocal_246 = 7;
			}
			break;
		
		case 0x00000007:
			Function_356("home02_son03_obj06", 7,5f, 1, 2, 0, 0, 0);
			Function_213(&bLocal_251);
			Function_213(&bLocal_254);
			Function_213(&bLocal_257);
			Function_213(&bLocal_269);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_249)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_249));
			}
			Function_323(&iLocal_424, 12, 0, 4294967295, 4294967295);
			Function_231();
			Function_213(&bLocal_251);
			iLocal_246 = 9;
			break;
		
		case 0x00000009:
			if (Function_332(&bLocal_251, 1.0f))
			{
				if (IS_ACTOR_VALID(bLocal_249))
				{
					Function_355(12, 0, 1);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_249, true);
				}
				Function_352();
				Function_213(&bLocal_251);
				iLocal_246 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_332(&bLocal_251, 3.0f))
			{
				Function_356("home02_son03_obj07", 7,5f, 1, 2, 0, 0, 0);
				Function_213(&bLocal_251);
				Function_213(&bLocal_254);
				Function_213(&bLocal_257);
				Function_213(&bLocal_269);
				switch (Function_351())
				{
					case 0x00000000:
						iLocal_477 = 0;
						break;
					
					case 0x00000001:
						iLocal_477 = 2;
						break;
					
					case 0x00000002:
						iLocal_477 = 4;
						break;
					
					default:
						iLocal_477 = 5;
						break;
				}
				iLocal_246 = 42;
			}
			break;
		
		case 0x0000002A:
			if (Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, Local_4, 334))
			{
				Function_346(0);
				Function_345(0);
				Function_344(1);
				Function_213(&bLocal_251);
				iLocal_246 = 43;
			}
			else if (Function_336(&bLocal_257, 40.0f, 150.0f, bLocal_249, "Son_return", "Son_abandoned", &bLocal_289, 1, bLocal_198, Local_4, 325, 1) || !IS_ACTOR_RIDING(bLocal_249))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_356("Son_return", 0x40f00000, 1, 2, 0, 0, 0);
				Function_344(0);
				Function_345(0);
				Function_346(1);
				Function_213(&bLocal_251);
				iLocal_246 = 44;
			}
			break;
		
		case 0x0000002B:
			if (!Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, Local_4, 334))
			{
				Function_335(2);
				if (Function_336(&bLocal_257, 40.0f, 150.0f, bLocal_249, "Son_return", "Son_abandoned", &bLocal_289, 1, bLocal_198, Local_4, 325, 1) || !IS_ACTOR_RIDING(bLocal_249))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_356("Son_return", 0x40f00000, 1, 2, 0, 0, 0);
					Function_344(0);
					Function_345(0);
					Function_346(1);
					Function_213(&bLocal_251);
					iLocal_246 = 44;
				}
				else
				{
					Function_356("home02_son03_obj07", 7,5f, 1, 2, 0, 0, 0);
					Function_344(0);
					Function_346(0);
					Function_345(1);
					Function_213(&bLocal_251);
					iLocal_246 = 42;
				}
			}
			break;
		
		case 0x0000002C:
			if (Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, Local_4, 334))
			{
				Function_346(0);
				Function_345(0);
				Function_344(1);
				Function_213(&bLocal_251);
				iLocal_246 = 43;
			}
			else if (!Function_336(&bLocal_257, 40.0f, 150.0f, bLocal_249, "Son_return", "Son_abandoned", &bLocal_289, 1, bLocal_198, Local_4, 325, 1) && IS_ACTOR_RIDING(bLocal_249))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_356("home02_son03_obj07", 7,5f, 1, 2, 0, 0, 0);
				Function_344(0);
				Function_346(0);
				Function_345(1);
				Function_213(&bLocal_251);
				iLocal_246 = 42;
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_213(&bLocal_251);
				iLocal_246 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_427);
				iLocal_281[4] = 1;
				Function_213(&bLocal_251);
				bLocal_245 = 101;
				iLocal_246 = 0;
			}
			break;
	}
	return;
}

void Function_335(bool bParam0) //Position: 0x10233 / 66099
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_25(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

bool Function_336(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x10296 / 66198
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_343(Global_34573, bParam3, bParam2))
	{
		Function_220(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_343(Global_34573, bParam3, bParam1))
	{
		if (!Function_342(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_356(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
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
		Function_335(2);
		if (!Function_339())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_338();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_204(bParam3);
				Function_337(GET_OBJECT_FROM_ACTOR(bParam3));
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

void Function_337(bool bParam0) //Position: 0x1042A / 66602
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

void Function_338() //Position: 0x10456 / 66646
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

bool Function_339() //Position: 0x10481 / 66689
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

void Function_340(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x104C5 / 66757
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

void Function_341(bool bParam0) //Position: 0x10566 / 66918
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_109(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_342(bool bParam0) //Position: 0x105C9 / 67017
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_46(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_343(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10610 / 67088
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

void Function_344(bool bParam0) //Position: 0x10721 / 67361
{
	if (IS_ACTOR_VALID(bLocal_250))
	{
		if (bParam0)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_250)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_250, 334, 0, 2, 0);
			}
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_250)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_250));
			}
			Function_204(bLocal_250);
		}
	}
	return;
}

void Function_345(bool bParam0) //Position: 0x1076A / 67434
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_435)))
		{
			ADD_BLIP_FOR_OBJECT(bLocal_435, 330, 0f, 2, 0);
			Function_227(bLocal_435);
			Function_357(StackVal, StackVal, Function_227(bLocal_435), 0, 48, 1);
		}
	}
	else
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_435)))
		{
			Function_57();
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_435));
		}
		Function_337(bLocal_435);
	}
	return;
}

void Function_346(bool bParam0) //Position: 0x107BD / 67517
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(Function_347(12)))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_249)))
			{
				Function_355(12, 1, 1);
			}
			else if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_249)))
			{
				SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_249), true);
			}
		}
	}
	else
	{
		if (IS_BLIP_VALID(Function_347(12)))
		{
			Function_355(12, 0, 1);
		}
		Function_204(bLocal_249);
	}
	return;
}

var Function_347(bool bParam0) //Position: 0x10819 / 67609
{
	return Global_8492[bParam014].f_52;
}

bool Function_348(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x10828 / 67624
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
					Function_231();
				}
				if (!Function_350())
				{
					Function_356(bParam4, 7,5f, 0, 2, 0, 0, 0);
					Function_341(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_220(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_342(8))
		{
			if (bParam7)
			{
				Function_231();
			}
			if (!Function_350())
			{
				Function_356(bParam3, 7,5f, 0, 2, 0, 0, 0);
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
		Function_335(8);
		if (!Function_339())
		{
			Function_349();
			Function_338();
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

void Function_349() //Position: 0x1097D / 67965
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_350() //Position: 0x10989 / 67977
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

bool Function_351() //Position: 0x10996 / 67990
{
	return Global_34165.f_60;
}

void Function_352() //Position: 0x109A1 / 68001
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_GetsOnBakJak", "Home02_s3_GetsOnBakJak", true, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_353(int iParam0) //Position: 0x109F6 / 68086
{
	Function_354(0, Global_34573, iParam0, 0);
	Function_354(1, bLocal_249, iParam0, 0);
	Function_354(2, bLocal_428, iParam0, 0);
	return;
}

void Function_354(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x10A19 / 68121
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_46(uParam2, Function_168(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_355(int iParam0, bool bParam1, bool bParam2) //Position: 0x10A3E / 68158
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
						Function_204(bVar1);
					}
				}
				Function_337(bVar0);
			}
		}
	}
	return;
}

void Function_356(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x10B35 / 68405
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

void Function_357(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x10B88 / 68488
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
		Function_358(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_358(bool bParam0) //Position: 0x10C44 / 68676
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

bool Function_359(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x10C84 / 68740
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(bParam0, bParam1, bParam2, bParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, bParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", bParam8);
	}
	return bVar0;
}

void Function_360(vector3 vParam0, bool bParam3, var uParam4, int iParam5, int iParam6) //Position: 0x10D01 / 68865
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam3 == Global_34165.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam3 < 0)
	{
		Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	}
	if (bParam3 != Global_34165.f_48 && !Function_365())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_364(0);
	Function_363();
	Global_34165.f_48 = bParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_362(uParam4, iVar0, iVar1);
	Function_361();
}

void Function_361() //Position: 0x10D9E / 69022
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

void Function_362(int iParam0, bool bParam1, bool bParam2) //Position: 0x10DDF / 69087
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
	if (Function_38(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_76();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_363() //Position: 0x10F45 / 69445
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_364(bool bParam0) //Position: 0x10F69 / 69481
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

bool Function_365() //Position: 0x10F98 / 69528
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_366(int iParam0) //Position: 0x10FB3 / 69555
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

void Function_367(int iParam0, int iParam1) //Position: 0x11067 / 69735
{
	if (iParam1 != 100000000)
	{
		Function_370(iParam0, iParam1);
	}
	else
	{
		Function_368(iParam0, 1);
	}
	return;
}

void Function_368(int iParam0, bool bParam1) //Position: 0x11087 / 69767
{
	iParam0->f_40 = 0;
	Function_369(iParam0, 2, bParam1);
	Function_369(iParam0, 4, bParam1);
	Function_369(iParam0, 8, bParam1);
	Function_369(iParam0, 16, bParam1);
	Function_369(iParam0, 32, bParam1);
	Function_369(iParam0, 64, bParam1);
	Function_369(iParam0, 128, bParam1);
	Function_369(iParam0, 256, bParam1);
	Function_369(iParam0, 512, bParam1);
	Function_369(iParam0, 1024, bParam1);
	return;
}

void Function_369(int iParam0, int iParam1, bool bParam2) //Position: 0x110ED / 69869
{
	bool bVar0;
	
	Function_109(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_109(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_25(iParam0 + 40, bVar0);
	}
	else
	{
		Function_109(iParam0 + 40, bVar0);
	}
	return;
}

void Function_370(int iParam0, bool bParam1) //Position: 0x11129 / 69929
{
	bool bVar0;
	
	Function_25(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_109(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_25(iParam0 + 40, bVar0);
	return;
}

int Function_371(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11154 / 69972
{
	if (!Function_375(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_374(iParam0, bParam2))
	{
		return 0;
	}
	Function_373(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_372(iParam0, iParam4, iParam5);
	return 1;
}

void Function_372(var uParam0, int iParam1, int iParam2) //Position: 0x11190 / 70032
{
	if (iParam1 != 100000000)
	{
		Function_369(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_368(uParam0, iParam2);
	}
	return;
}

void Function_373(var uParam0, int iParam1) //Position: 0x111B3 / 70067
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_374(int iParam0, bool bParam1) //Position: 0x111BF / 70079
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

bool Function_375(int iParam0, bool bParam1) //Position: 0x11248 / 70216
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

void Function_376() //Position: 0x113D4 / 70612
{
	if (!SQUAD_IS_VALID(Local_4.f_44))
	{
		Function_380();
		if (SQUAD_IS_VALID(Local_4.f_44))
		{
			Function_379(Local_4.f_44, 0);
			Function_378(Local_4.f_44, 3);
			if (IS_ACTOR_VALID((*&Local_4 + 32)[02]))
			{
				Function_324((*&Local_4 + 32)[02], (*&Local_4 + 356)[7], 0, 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_44, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			if (IS_ACTOR_ALIVE((*&Local_4 + 32)[02]))
			{
				KILL_ACTOR((*&Local_4 + 32)[02]);
				Function_291((*&Local_4 + 32)[02]);
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_428))
	{
		Function_324(bLocal_428, (*&Local_4 + 188)[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_425))
	{
		Function_324(bLocal_425, (*&Local_4 + 188)[5], 0, 1, 1, 1);
	}
	Function_377("SETUP_MISSION_OBJECTS_STAGE05");
	AUDIO_SET_PLAYER_MOOD(0, 0);
	return;
}

void Function_377(int iParam0) //Position: 0x114BB / 70843
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= Local_4.f_532)
	{
		iVar1 = 5;
		iVar2 = 1;
		CREATE_FOOTPRINT(iVar1, iVar2, *(&Local_4 + 532[iVar06]), *(&Local_4 + 532[iVar06] + 12));
		iVar0++;
	}
	return;
}

void Function_378(bool bParam0, bool bParam1) //Position: 0x114FC / 70908
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

void Function_379(bool bParam0, bool bParam1) //Position: 0x1153E / 70974
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

void Function_380() //Position: 0x1157F / 71039
{
	Local_4.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse01"));
	(*&Local_4 + 32)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_01", 999, -734,0921f, 227,1915f, 1118,09f, -120,6563f, 4,152449f, 87,5424f);
	SQUAD_JOIN((*&Local_4 + 32)[02], Local_4.f_44);
	return;
}

bool Function_381(bool bParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14) //Position: 0x115E4 / 71140
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_382(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_383()) * (fParam8 - fParam7)) * 0,5f))) || bParam13)
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
		if ((iParam14 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_106(StackVal, StackVal, vVar16))
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
				Call_Loc(iParam5);
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
	else if ((!Function_382(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_383()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_382(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

bool Function_382(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1189E / 71838
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_280(bParam0);
		if (VDIST(Function_280(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_383() //Position: 0x11928 / 71976
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_384() //Position: 0x11937 / 71991
{
	bool bVar0;
	var uVar1;
	var uVar4;
	bool bVar7;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar4))
		{
			bVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
			if (Function_385(bVar7))
			{
				if (bVar7 == GET_ACTOR_ENUM(bLocal_249))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), bLocal_249);
				}
				if (bVar7 == 976)
				{
					if (!IS_ACTOR_VALID(bLocal_250))
					{
						PRINTSTRING("  * m_aPlayerHorse is NOT VALID!!!");
						PRINTNL();
						bLocal_250 = Function_281(1, 1, 0, 0, 0, 0, 1, 0);
						REMOVE_HORSE_ACCESSORY(bLocal_250, 4);
						ACCESSORIZE_HORSE(bLocal_250, 3);
						return 0;
					}
					if (!IS_ACTOR_ALIVE(bLocal_250))
					{
						PRINTSTRING("  * m_aPlayerHorse is NOT alive???");
						PRINTNL();
						return 0;
					}
					PRINTSTRING("  * m_aPlayerHorse is alive ");
					PRINTFLOAT(GET_ACTOR_HEALTH(bLocal_250));
					PRINTNL();
					SET_ACTOR_INVULNERABILITY(bLocal_250, true);
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), bLocal_250);
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_385(bool bParam0) //Position: 0x11A53 / 72275
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_386(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x11A6A / 72298
{
	if (Function_387(&iParam0) == iParam7 || Function_365())
	{
		return 1;
	}
	return 0;
}

int Function_387(int iParam0) //Position: 0x11A89 / 72329
{
	if (Function_271(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_388(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, var uParam13) //Position: 0x11AA1 / 72353
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_382(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_383()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
				if (!Function_106(StackVal, StackVal, vVar16))
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
					Function_389();
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
	else if ((!Function_382(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_383()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_382(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_389() //Position: 0x11CE7 / 72935
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
			Function_390(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_390(char* cParam0, vector3 vParam1) //Position: 0x11D3B / 73019
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

void Function_391() //Position: 0x11E63 / 73315
{
	switch (bLocal_245)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			if (IS_VOLUME_VALID((*&Local_4 + 80)[0]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 80)[0]))
				{
					Function_323(&iLocal_424, 23, 0, 4294967295, 4294967295);
					DESTROY_VOLUME((*&Local_4 + 80)[0]);
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 80)[1]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 80)[1]))
				{
					AUDIO_MUSIC_SET_MOOD("CHASE_SUSPENSE", 0, 4294967295, 4294967295);
					DESTROY_VOLUME((*&Local_4 + 80)[1]);
				}
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID((*&Local_4 + 80)[2]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 80)[2]))
				{
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_3", 0, 4294967295, 4294967295);
					DESTROY_VOLUME((*&Local_4 + 80)[2]);
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 80)[3]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 80)[3]))
				{
					Function_323(&iLocal_424, 11, 0, 4294967295, 4294967295);
					DESTROY_VOLUME((*&Local_4 + 80)[3]);
				}
			}
			break;
		
		default:
			LOG_ERROR("invalid UPDATE_MOOD_MUSIC");
			break;
	}
	return;
}

void Function_392(bool bParam0) //Position: 0x11F90 / 73616
{
	if (ACTORS_IN_RANGE(Global_34573, bLocal_249, 36.0f))
	{
		if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "HorseBreaking_Phase"))
		{
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_213(&bLocal_269);
			}
		}
		else
		{
			switch (iLocal_477)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_400();
						iLocal_477 = 1;
					}
					break;
				
				case 0x00000001:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_213(&bLocal_269);
						iLocal_477 = 2;
					}
					break;
				
				case 0x00000002:
					if (Function_332(&bLocal_269, bParam0))
					{
						Function_399();
						iLocal_477 = 3;
					}
					break;
				
				case 0x00000003:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_213(&bLocal_269);
						iLocal_477 = 4;
					}
					break;
				
				case 0x00000004:
					if (Function_332(&bLocal_269, bParam0))
					{
						Function_398();
						iLocal_477 = 6;
						Function_397(&bLocal_269);
					}
					break;
				
				case 0x00000005:
					if (Function_332(&bLocal_269, bParam0))
					{
						Function_396();
						iLocal_477 = 6;
						Function_397(&bLocal_269);
					}
					break;
				
				case 0x00000006:
					break;
				
				default:
					break;
				}
		}
		Function_393(bLocal_249, "Home02_s3_ThrownOffHorse", "Home02_s3_GunOnJak", "Home02_s3_GunOnChar", "Home02_s3_ShootsRand", "Home02_s3_JonShootsTheirHors", "Home02_s3_JonRidesOffEarly", "Home02_s3_JonStopsHors", "Home02_s3_JonGetsOffHors", "Home02_s3_JakWaitJonBakHors");
	}
	return;
}

void Function_393(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x12188 / 74120
{
	bool bVar0;
	
	if (!Function_268(&bLocal_272))
	{
		Function_213(&bLocal_272);
	}
	else if (Function_332(&bLocal_272, 5.0f))
	{
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_395(GET_WEAPON_IN_HAND(Global_34573)))
			{
				bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam4, Function_86(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_213(&bLocal_272);
					}
					else if (GET_LAST_ATTACK_TARGET(Global_34573) == bLocal_250)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam5, Function_86(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						LOG_ERROR(bParam5);
						Function_213(&bLocal_272);
					}
				}
				if (IS_ACTOR_VALID(bVar0))
				{
					if (IS_ACTOR_HUMAN(bVar0))
					{
						if (bVar0 == bParam0)
						{
							if (Function_268(&bLocal_275))
							{
								if (Function_332(&bLocal_275, 0,25f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam2, Function_86(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
									Function_213(&bLocal_272);
								}
							}
							else
							{
								Function_213(&bLocal_275);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(Global_34573, bVar0))
						{
							if (Function_268(&bLocal_275))
							{
								if (Function_332(&bLocal_275, 0,25f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam3, Function_86(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
									LOG_ERROR(bParam3);
									Function_213(&bLocal_272);
								}
							}
							else
							{
								Function_213(&bLocal_275);
							}
						}
						else if (Function_268(&bLocal_275))
						{
							Function_397(&bLocal_275);
						}
					}
					else if (Function_268(&bLocal_275))
					{
						Function_397(&bLocal_275);
					}
				}
				else if (Function_268(&bLocal_275))
				{
					Function_397(&bLocal_275);
				}
			}
			else if (Function_268(&bLocal_275))
			{
				Function_397(&bLocal_275);
			}
		}
		else if (Function_268(&bLocal_275))
		{
			Function_397(&bLocal_275);
		}
		if (DECOR_GET_BOOL(Global_34573, "beingBucked"))
		{
			if (IS_ACTOR_VALID(bParam0))
			{
				if (ACTORS_IN_RANGE(bParam0, Global_34573, 20.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam1, Function_86(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
					LOG_ERROR(bParam1);
					Function_213(&bLocal_272);
				}
			}
		}
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
		{
			if (iLocal_478)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam9, Function_86(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
				LOG_ERROR(bParam9);
				Function_213(&bLocal_272);
				iLocal_478 = 0;
			}
		}
		else if (!iLocal_478)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam8, Function_86(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
			LOG_ERROR(bParam8);
			Function_213(&bLocal_272);
			iLocal_478 = 1;
		}
		if (GET_MOUNT(Global_34573) != GET_MOUNT(bParam0))
		{
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				if (!ACTORS_IN_RANGE(Global_34573, bParam0, 10.0f))
				{
					if (Function_268(&bLocal_278))
					{
						if (Function_332(&bLocal_278, 0,25f))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam6, Function_86(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
							Function_213(&bLocal_272);
						}
					}
					else
					{
						Function_213(&bLocal_278);
					}
				}
			}
			else if (Function_268(&bLocal_278))
			{
				Function_397(&bLocal_278);
			}
		}
		else if (Function_394(Global_34573, 0) > 1.0f)
		{
			if (iLocal_465)
			{
				if (Function_268(&bLocal_278))
				{
					if (Function_332(&bLocal_278, 2,5f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam7, Function_86(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
						Function_213(&bLocal_272);
						iLocal_465 = 0;
					}
				}
				else
				{
					Function_213(&bLocal_278);
				}
			}
		}
		else
		{
			if (!iLocal_465)
			{
				if (Function_394(Global_34573, 0) < 1.0f)
				{
					iLocal_465 = 1;
				}
			}
			if (Function_268(&bLocal_278))
			{
				Function_397(&bLocal_278);
			}
		}
	}
}

float Function_394(bool bParam0, bool bParam1) //Position: 0x124D9 / 74969
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_395(bool bParam0) //Position: 0x124F8 / 75000
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

void Function_396() //Position: 0x1253E / 75070
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_NoTalkOnRide", "Home02_s3_NoTalkOnRide", true, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_397(bool bParam0) //Position: 0x12593 / 75155
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_398() //Position: 0x125A7 / 75175
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v3_AA", "Home02_s3_WayBakBant_v3_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v3_AB", "Home02_s3_WayBakBant_v3_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v3_AC", "Home02_s3_WayBakBant_v3_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v3_AD", "Home02_s3_WayBakBant_v3_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v3_AE1", "Home02_s3_WayBakBant_v3_AE1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v3_AE2", "Home02_s3_WayBakBant_v3_AE2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v3_AF1", "Home02_s3_WayBakBant_v3_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v3_AF2", "Home02_s3_WayBakBant_v3_AF2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v3_AG", "Home02_s3_WayBakBant_v3_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v3_AH1", "Home02_s3_WayBakBant_v3_AH1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v3_AH2", "Home02_s3_WayBakBant_v3_AH2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v3_AI", "Home02_s3_WayBakBant_v3_AI", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v3_AJ", "Home02_s3_WayBakBant_v3_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v3_AK", "Home02_s3_WayBakBant_v3_AK", true, 1, 0, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_399() //Position: 0x12977 / 76151
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v2_AA", "Home02_s3_WayBakBant_v2_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v2_AB", "Home02_s3_WayBakBant_v2_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v2_AC", "Home02_s3_WayBakBant_v2_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v2_AD", "Home02_s3_WayBakBant_v2_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v2_AE", "Home02_s3_WayBakBant_v2_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v2_AF", "Home02_s3_WayBakBant_v2_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v2_AG", "Home02_s3_WayBakBant_v2_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v2_AH", "Home02_s3_WayBakBant_v2_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v2_AI", "Home02_s3_WayBakBant_v2_AI", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v2_AJ", "Home02_s3_WayBakBant_v2_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v2_AK", "Home02_s3_WayBakBant_v2_AK", true, 1, 0, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_400() //Position: 0x12C72 / 76914
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v1_AA", "Home02_s3_WayBakBant_v1_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v1_AB", "Home02_s3_WayBakBant_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v1_AC1", "Home02_s3_WayBakBant_v1_AC1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v1_AC2", "Home02_s3_WayBakBant_v1_AC2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v1_AD", "Home02_s3_WayBakBant_v1_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v1_AE", "Home02_s3_WayBakBant_v1_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v1_AF", "Home02_s3_WayBakBant_v1_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v1_AG", "Home02_s3_WayBakBant_v1_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v1_AH", "Home02_s3_WayBakBant_v1_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v1_AI", "Home02_s3_WayBakBant_v1_AI", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_WayBakBant_v1_AJ", "Home02_s3_WayBakBant_v1_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_WayBakBant_v1_AK", "Home02_s3_WayBakBant_v1_AK", true, 1, 0, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_401() //Position: 0x12FB4 / 77748
{
	Function_333(bLocal_198);
	if (iLocal_246 < 5 && iLocal_246 > 105)
	{
		Function_330();
		Function_406();
		Function_227((*&Local_4 + 356)[0]);
		Function_381(StackVal, StackVal, "$/cutscene/SON03_CS02_SEQ/SON03_CS02_SEQ", &uLocal_423, Function_227((*&Local_4 + 356)[0]), 71991, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_246)
	{
		case 0x00000000:
			Function_326(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
			if (IS_ACTOR_VALID(bLocal_250))
			{
				TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_250, true);
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_249);
				MEMORY_PREFER_RIDING(bLocal_249, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_249);
				TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_249, true);
				SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
				SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
				DECOR_REMOVE(bLocal_427, "Frank");
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_281[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_322(0.0f, "Stage_Four.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_318();
				bLocal_247 = Global_30637[1];
				if (!Function_317(bLocal_247))
				{
					Function_316(&Local_199);
				}
				Function_324(Global_34573, (*&Local_4 + 300)[0], 0, 1, 1, 1);
				Function_213(&bLocal_251);
				iLocal_246 = 1;
			}
			else
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_317(bLocal_247) || bLocal_247 != 4294967295))
			{
				iLocal_430 = 0;
				iLocal_434 = 0;
				iLocal_433 = 0;
				Function_405();
				if (IS_ACTOR_VALID(bLocal_249))
				{
					SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
					MEMORY_PREFER_RIDING(bLocal_249, false);
					if (!IS_ACTOR_CRIPPLED(bLocal_249, 5))
					{
						DECOR_SET_BOOL(bLocal_249, "NoBleedOut", true);
						SET_ANIM_SET_FOR_ACTOR(bLocal_249, "son03_jack", 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_249, "son03_jack");
					}
					Function_324(bLocal_249, (*&Local_4 + 300)[2], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_427))
				{
					SET_ACTOR_HEALTH(bLocal_427, GET_ACTOR_MAX_HEALTH(bLocal_427));
					Function_324(bLocal_427, (*&Local_4 + 300)[4], 0, 1, 1, 1);
					TASK_STAND_STILL(bLocal_427, -1.0f, 0, 0);
					Function_204(bLocal_427);
				}
				if (IS_ACTOR_VALID(bLocal_250))
				{
					SET_ACTOR_HEALTH(bLocal_250, GET_ACTOR_MAX_HEALTH(bLocal_250));
					Function_324(bLocal_250, (*&Local_4 + 300)[6], 0, 1, 1, 1);
					TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_250))
					{
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_250);
					}
				}
				if (IS_ACTOR_VALID((*&Local_4 + 32)[02]))
				{
					if (!IS_ACTOR_ALIVE((*&Local_4 + 32)[02]))
					{
						SET_ACTOR_PERMANENT_DEAD((*&Local_4 + 32)[02]);
						Function_291((*&Local_4 + 32)[02]);
					}
				}
				iLocal_291 = 0;
				Function_371(&(Local_332[017]), bLocal_249, "Son", 0, 0x5f5e100, 1);
				Function_371(&(Local_332[117]), bLocal_427, "Dog", 0, 0x5f5e100, 1);
				Function_371(&(Local_332[217]), bLocal_428, "Uncle", 0, 0x5f5e100, 1);
				Function_371(&(Local_332[317]), bLocal_425, "Wife", 0, 0x5f5e100, 1);
				Function_367(&(Local_332[117]), 1024);
				Function_366(&(Local_332[417]));
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_386(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_199, bLocal_245))
			{
				Function_227((*&Local_4 + 300)[11]);
				if (Function_381(StackVal, StackVal, "$/cutscene/SON03_CS02/SON03_CS02", &uLocal_423, Function_227((*&Local_4 + 300)[11]), 71991, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
				{
					Function_213(&bLocal_251);
					ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_249, true);
					Function_323(&iLocal_424, 0, 0, 4294967295, 4294967295);
					iLocal_434 = 10;
					Function_226(bLocal_245);
					Function_360(StackVal, StackVal, Function_226(bLocal_245), bLocal_245, Global_30637[1], Function_229(bLocal_245), 0);
					if (HUD_IS_FADED())
					{
						Function_308(1.0f, "Stage_Four.GID_POST_STREAMING");
					}
					Function_213(&bLocal_251);
					iLocal_246 = 3;
				}
			}
			else
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					Function_324(Global_34573, (*&Local_4 + 300)[1], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_249))
				{
					Function_324(bLocal_249, (*&Local_4 + 300)[3], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_250))
				{
					Function_324(bLocal_250, (*&Local_4 + 300)[7], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_427))
				{
					Function_324(bLocal_427, (*&Local_4 + 300)[5], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_426))
				{
					Function_324(bLocal_426, (*&Local_4 + 300)[10], 0, 1, 1, 1);
				}
				Function_226(bLocal_245);
				Function_360(StackVal, StackVal, Function_226(bLocal_245), bLocal_245, Global_30637[1], Function_229(bLocal_245), 0);
				Function_213(&bLocal_251);
				iLocal_246 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_259("$/cutscene/SON03_CS02/SON03_CS02", &iLocal_238, &Local_199, &bLocal_245, 59092, 57292, 54940, 53703, 51330, 50997, 0, 2, 2, 2, 2, 0, 1))
			{
				Function_213(&bLocal_251);
				iLocal_246 = 4;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_464)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				iLocal_424 = 46;
				iLocal_464 = 1;
			}
			iLocal_434 = 0;
			Function_213(&bLocal_251);
			iLocal_246 = 5;
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				Function_308(1.0f, "Stage_Four.GID_FADE_IN");
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_213(&bLocal_251);
			iLocal_246 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(bLocal_249))
				{
					Function_355(12, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_249, false);
					MEMORY_ALLOW_SHOOTING(bLocal_249, false);
					GET_OBJECT_POSITION(Local_4.f_520, &vLocal_436);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_249, true);
				}
				if (IS_ACTOR_VALID(bLocal_250))
				{
					SET_ACTION_NODE_FOR_ACTOR(bLocal_250, "horse_Main/Melee/RearUp");
					SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_250, Local_4.f_172, 1, true);
					TASK_PRIORITY_SET(bLocal_250, false);
					TASK_WANDER_IN_VOLUME(bLocal_250, Local_4.f_172, -1.0f);
					TASK_PRIORITY_SET(bLocal_250, false);
				}
				if (IS_ACTOR_VALID(bLocal_427))
				{
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				if (IS_ACTOR_VALID(bLocal_426))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_426, 322, 0, 2, 0);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_426)))
					{
					}
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_426), "home02_son03_obj05_blip");
					MEMORY_CONSIDER_AS_ENEMY(bLocal_426, Global_34573);
					Function_404(bLocal_426, Global_34573);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_426, 0);
					TASK_GO_NEAR_ACTOR(bLocal_426, Global_34573, 5.0f, 3);
					SET_ACTOR_HEALTH(bLocal_426, (GET_ACTOR_MAX_HEALTH(bLocal_426) * 1,5f));
					Function_213(&bLocal_266);
				}
				if (IS_OBJECT_VALID(bLocal_466))
				{
					DESTROY_OBJECT(bLocal_466);
				}
				Function_403();
				Function_213(&bLocal_251);
				iLocal_246 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_332(&bLocal_251, 3.0f))
			{
				Function_356("home02_son03_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_213(&bLocal_251);
				Function_213(&bLocal_254);
				Function_213(&bLocal_257);
				Function_213(&bLocal_269);
				Function_213(&bLocal_266);
				if (IS_ACTOR_VALID(bLocal_426))
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_426);
				}
				iLocal_246 = 8;
			}
			break;
		
		case 0x00000008:
			Function_336(&bLocal_257, 40.0f, 150.0f, bLocal_249, "Son_return", "Son_abandoned", &bLocal_289, 1, bLocal_198, Local_4, 325, 1);
			if (ACTORS_IN_RANGE(Global_34573, bLocal_249, 36.0f))
			{
				if (Function_332(&bLocal_269, 15.0f))
				{
					if (!Function_162())
					{
						Function_213(&bLocal_269);
						Function_402();
						SET_ACTION_NODE_FOR_ACTOR(bLocal_249, "son03_jack/talk_survey");
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_426))
			{
				if (IS_ACTOR_DEAD(bLocal_426))
				{
					if (IS_ACTOR_VALID(bLocal_250))
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_250);
					}
					Function_213(&bLocal_251);
					iLocal_246 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_332(&bLocal_251, 5.0f))
			{
				Function_213(&bLocal_251);
				iLocal_246 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_332(&bLocal_251, 0,5f))
			{
				Function_213(&bLocal_251);
				iLocal_246 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_281[3] = 1;
				STREAMING_UNLOAD_BOUNDS();
				Function_213(&bLocal_251);
				bLocal_245 = 4;
				iLocal_246 = 0;
			}
			break;
	}
	return;
}

void Function_402() //Position: 0x13844 / 79940
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_JakCries4Bear", "Home02_s3_JakCries4Bear", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_403() //Position: 0x1389B / 80027
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_StayDownJak", "Home02_s3_StayDownJak", true, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_404(bool bParam0, bool bParam1) //Position: 0x138EE / 80110
{
	MEMORY_CONSIDER_AS_ENEMY(bParam0, bParam1);
	MEMORY_IDENTIFY(bParam0, bParam1);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 1);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, true);
	return;
}

void Function_405() //Position: 0x13910 / 80144
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!SQUAD_IS_VALID(Local_4.f_44))
	{
		Function_380();
		if (SQUAD_IS_VALID(Local_4.f_44))
		{
			Function_379(Local_4.f_44, 0);
			Function_378(Local_4.f_44, 3);
			if (IS_ACTOR_VALID((*&Local_4 + 32)[02]))
			{
				Function_324((*&Local_4 + 32)[02], (*&Local_4 + 300)[8], 0, 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_44, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			if (IS_ACTOR_ALIVE((*&Local_4 + 32)[02]))
			{
				KILL_ACTOR((*&Local_4 + 32)[02]);
				Function_291((*&Local_4 + 32)[02]);
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_428))
	{
		Function_324(bLocal_428, (*&Local_4 + 188)[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_425))
	{
		Function_324(bLocal_425, (*&Local_4 + 188)[5], 0, 1, 1, 1);
	}
	if (!IS_ACTOR_VALID(bLocal_426))
	{
		GET_OBJECT_POSITION((*&Local_4 + 300)[9], &vVar0);
		GET_OBJECT_ORIENTATION((*&Local_4 + 300)[9], &vVar3);
		bLocal_426 = CREATE_ACTOR_IN_LAYOUT(bLocal_198, "HOME02_SON03_BEAR01", 1099, vVar0, vVar3);
		if (IS_ACTOR_VALID(bLocal_426))
		{
			TASK_STAND_STILL(bLocal_426, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_426, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_426, Local_4.f_168, 2, true);
		}
	}
	Function_377("SETUP_MISSION_OBJECTS_STAGE04");
	AUDIO_SET_PLAYER_MOOD(1, 0);
	return;
}

void Function_406() //Position: 0x13A74 / 80500
{
	if (IS_ACTOR_VALID(bLocal_426))
	{
		switch (iLocal_434)
		{
			case 0x00000000:
				if (GET_TASK_STATUS(bLocal_426, 5) != 1)
				{
					if (GET_TASK_STATUS(bLocal_426, 83) != 1)
					{
						TASK_KILL_CHAR(bLocal_426, Global_34573);
					}
				}
				else
				{
					Function_213(&bLocal_266);
					iLocal_434 = 1;
				}
				break;
			
			case 0x00000001:
				if (!ACTORS_IN_RANGE(bLocal_426, Global_34573, 40.0f))
				{
					if (Function_407(bLocal_426, Global_34573) < (Function_407(bLocal_426, bLocal_249) + 5.0f))
					{
						TASK_CLEAR(bLocal_426);
						Function_315(bLocal_426);
						STREAMING_LOAD_BOUNDS(Function_315(bLocal_426), (Function_407(bLocal_426, bLocal_249) + 5.0f), 0);
						iLocal_434 = 2;
					}
					else
					{
						iLocal_434 = 3;
					}
				}
				if (Function_332(&bLocal_266, 60.0f))
				{
					Function_213(&bLocal_269);
					Function_402();
					iLocal_434 = 2;
				}
				break;
			
			case 0x00000002:
				if (GET_TASK_STATUS(bLocal_426, 5) != 1)
				{
					TASK_KILL_CHAR(bLocal_426, bLocal_249);
					Function_213(&bLocal_266);
				}
				else
				{
					if (ACTORS_IN_RANGE(bLocal_426, Global_34573, 10.0f) && !Function_332(&bLocal_266, 30.0f))
					{
						TASK_CLEAR(bLocal_426);
						STREAMING_UNLOAD_BOUNDS();
						iLocal_434 = 0;
					}
					if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_426, 1))
					{
						TASK_CLEAR(bLocal_426);
						STREAMING_UNLOAD_BOUNDS();
						iLocal_434 = 0;
					}
				}
				break;
			
			case 0x00000003:
				if (!ACTORS_IN_RANGE(bLocal_426, Global_34573, 10.0f))
				{
					if (GET_TASK_STATUS(bLocal_426, 83) != 1)
					{
						TASK_GO_NEAR_ACTOR(bLocal_426, Global_34573, (10.0f * 0,75f), 4);
					}
				}
				else
				{
					TASK_CLEAR(bLocal_426);
					iLocal_434 = 0;
				}
				break;
			
			default:
				LOG_ERROR("iBearState???");
				break;
			}
	}
	return;
}

float Function_407(bool bParam0, bool bParam1) //Position: 0x13BFA / 80890
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

void Function_408() //Position: 0x13CEB / 81131
{
	Function_333(bLocal_198);
	if (iLocal_246 < 3 && iLocal_246 > 105)
	{
		Function_330();
		Function_414(Local_4.f_136, (*&Local_4 + 268)[2]);
		Function_391();
		Function_227((*&Local_4 + 300)[11]);
		Function_381(StackVal, StackVal, "$/cutscene/SON03_CS02/SON03_CS02", &uLocal_423, Function_227((*&Local_4 + 300)[11]), 71991, 0, 75.0f, 150.0f, 2, 2, 2, 2, 0, 1);
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (IS_VOLUME_VALID((*&Local_4 + 104)[3]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 104)[3]))
				{
					Function_231();
					Function_213(&bLocal_251);
					iLocal_246 = 105;
				}
			}
			if (IS_ACTOR_VALID(bLocal_426))
			{
				if (GET_LAST_ATTACKER(bLocal_426) != Global_34573 || IS_PLAYER_TARGETTING_ACTOR(false, bLocal_426, 0))
				{
					SET_ACTOR_HEALTH(bLocal_426, GET_ACTOR_MAX_HEALTH(bLocal_426));
					Function_231();
					Function_213(&bLocal_251);
					iLocal_246 = 105;
				}
			}
		}
	}
	switch (iLocal_246)
	{
		case 0x00000000:
			Function_326(0);
			SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_281[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_322(0.0f, "Stage_Three.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_318();
				bLocal_247 = Global_30637[1];
				if (!Function_317(bLocal_247))
				{
					Function_316(&Local_199);
				}
				Function_324(Global_34573, (*&Local_4 + 268)[0], 0, 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_250))
				{
					TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_250, true);
				}
				if (IS_ACTOR_VALID(bLocal_249))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_249);
					MEMORY_PREFER_RIDING(bLocal_249, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_249);
					TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_249, true);
				}
				if (IS_ACTOR_VALID(bLocal_427))
				{
					Function_324(bLocal_427, (*&Local_4 + 268)[2], 0, 1, 1, 1);
				}
				Function_213(&bLocal_251);
				iLocal_246 = 1;
			}
			else
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_317(bLocal_247) || bLocal_247 != 4294967295))
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000002:
			Function_226(bLocal_245);
			Function_360(StackVal, StackVal, Function_226(bLocal_245), bLocal_245, Global_30637[1], Function_229(bLocal_245), 2);
			if (HUD_IS_FADED())
			{
				Function_308(1.0f, "Stage_Three.GID_POST_STREAMING");
			}
			iLocal_430 = 0;
			iLocal_434 = 0;
			iLocal_433 = 0;
			Function_413();
			if (IS_ACTOR_VALID(bLocal_249))
			{
				if (!IS_ACTOR_CRIPPLED(bLocal_249, 5))
				{
					DECOR_SET_BOOL(bLocal_249, "NoBleedOut", true);
					SET_ANIM_SET_FOR_ACTOR(bLocal_249, "son03_jack", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_249, "son03_jack");
				}
				Function_324(bLocal_249, (*&Local_4 + 268)[1], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				SET_ACTOR_HEALTH(bLocal_427, GET_ACTOR_MAX_HEALTH(bLocal_427));
			}
			if (iLocal_281[1] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_VALID(bLocal_250))
					{
						Function_324(bLocal_250, (*&Local_4 + 268)[3], 0, 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_250))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_250);
						}
					}
				}
			}
			iLocal_291 = 0;
			Function_371(&(Local_332[017]), bLocal_249, "Son", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[117]), bLocal_427, "Dog", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[217]), bLocal_428, "Uncle", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[317]), bLocal_425, "Wife", 0, 0x5f5e100, 1);
			Function_367(&(Local_332[117]), 1024);
			Function_366(&(Local_332[417]));
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_4", 0, 4294967295, 4294967295);
			Function_213(&bLocal_251);
			iLocal_246 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_OBJECT_VALID(bLocal_466))
				{
					DESTROY_OBJECT(bLocal_466);
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
				}
				if (IS_ACTOR_VALID(bLocal_249))
				{
					Function_355(12, 0, 0);
					MEMORY_PREFER_RIDING(bLocal_249, false);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_249, true);
				}
				if (IS_ACTOR_VALID(bLocal_427))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_427, 325, 0, 2, 0);
					}
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				Function_412();
				if (iLocal_281[1] == 0)
				{
					Function_213(&bLocal_251);
					iLocal_246 = 7;
				}
				else
				{
					Function_213(&bLocal_251);
					iLocal_246 = 8;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_332(&bLocal_251, 3.0f))
			{
				Function_213(&bLocal_251);
				Function_213(&bLocal_254);
				Function_213(&bLocal_257);
				Function_213(&bLocal_269);
				iLocal_246 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, 0, 334))
			{
				Function_336(&bLocal_257, 60.0f, 200.0f, bLocal_427, "Dog_return", "Dog_abandoned", &bLocal_289, 1, bLocal_198, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427), true);
					}
				}
			}
			if (Function_332(&bLocal_269, 3.0f))
			{
				if (!Function_162())
				{
					Function_213(&bLocal_269);
					Function_411();
				}
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				if (IS_VOLUME_VALID((*&Local_4 + 104)[2]))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_427, (*&Local_4 + 104)[2]))
					{
						Function_231();
						Function_213(&bLocal_251);
						iLocal_246 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_VALID(bLocal_249))
			{
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				TASK_PRIORITY_SET(bLocal_249, true);
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_427);
				SET_ACTOR_ACTION_SIGNAL(bLocal_427, 8, "BARK");
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "BARK");
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &Local_4 + 532[16], 2);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				TASK_PRIORITY_SET(bLocal_427, true);
				iLocal_433 = 2;
			}
			Function_410();
			Function_213(&bLocal_251);
			iLocal_246 = 10;
			break;
		
		case 0x0000000A:
			if (Function_332(&bLocal_251, 3.0f))
			{
				Function_213(&bLocal_251);
				Function_213(&bLocal_254);
				Function_213(&bLocal_257);
				Function_213(&bLocal_269);
				iLocal_246 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, 0, 334))
			{
				Function_336(&bLocal_257, 60.0f, 200.0f, bLocal_427, "Dog_return", "Dog_abandoned", &bLocal_289, 1, bLocal_198, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427), true);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_249, 36.0f))
				{
					if (Function_332(&bLocal_269, 15.0f))
					{
						if (!Function_162())
						{
							Function_213(&bLocal_269);
							Function_409();
							SET_ACTION_NODE_FOR_ACTOR(bLocal_249, "son03_jack/talk_leg");
						}
					}
					Function_323(&iLocal_424, 1, 0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000069:
			if (Function_332(&bLocal_251, 0,5f))
			{
				Function_213(&bLocal_251);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_427));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_249)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_249));
				}
				Function_213(&bLocal_269);
				iLocal_246 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_204(bLocal_427);
				Function_204(bLocal_250);
				iLocal_281[2] = 1;
				Function_213(&bLocal_251);
				bLocal_245 = 3;
				iLocal_246 = 0;
			}
			break;
	}
	return;
}

void Function_409() //Position: 0x14510 / 83216
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s3_JakCries4Jon", "Home02_s3_JakCries4Jon", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_410() //Position: 0x14565 / 83301
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_FoundBlood", "Home02_s3_FoundBlood", true, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_411() //Position: 0x145B6 / 83382
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_CallsJak", "Home02_s3_CallsJak", false, 2, 1, 0, 1);
		Function_353(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_412() //Position: 0x14603 / 83459
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_Reaches2ndChekpnt", "Home02_s3_Reaches2ndChekpnt", false, 2, 1, 0, 1);
		Function_353(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_413() //Position: 0x14662 / 83554
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bLocal_428))
	{
		Function_324(bLocal_428, (*&Local_4 + 188)[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_425))
	{
		Function_324(bLocal_425, (*&Local_4 + 188)[5], 0, 1, 1, 1);
	}
	if (!IS_ACTOR_VALID(bLocal_426))
	{
		GET_OBJECT_POSITION((*&Local_4 + 268)[5], &vVar0);
		GET_OBJECT_ORIENTATION((*&Local_4 + 268)[5], &vVar3);
		bLocal_426 = CREATE_ACTOR_IN_LAYOUT(bLocal_198, "HOME02_SON03_BEAR01", 1099, vVar0, vVar3);
		if (IS_ACTOR_VALID(bLocal_426))
		{
			TASK_STAND_STILL(bLocal_426, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_426, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_426, Local_4.f_168, 2, true);
		}
	}
	Function_377("SETUP_MISSION_OBJECTS_STAGE03");
	AUDIO_SET_PLAYER_MOOD(1, 0);
	return;
}

void Function_414(bool bParam0, bool bParam1) //Position: 0x1473F / 83775
{
	if (IS_ACTOR_VALID(bLocal_427))
	{
		switch (iLocal_433)
		{
			case 0x00000000:
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_427);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "SNIFF");
				iLocal_433 = 1;
				break;
			
			case 0x00000001:
				if (!GET_TASK_STATUS(bLocal_427, 22) != 1)
				{
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				if (IS_VOLUME_VALID(bParam0))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_427, bParam0))
					{
						GET_OBJECT_POSITION(bParam1, &(vLocal_442[03]));
						bLocal_429 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &(vLocal_442[03]), 3.0f, 2);
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
						TASK_SEQUENCE_RELEASE(bLocal_429, 1);
						TASK_PRIORITY_SET(bLocal_427, true);
						Function_213(&bLocal_263);
						iLocal_433 = 2;
					}
				}
				break;
			
			case 0x00000002:
				if (Function_332(&bLocal_263, 2.0f))
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "BARK");
					SET_ACTOR_ACTION_SIGNAL(bLocal_427, 8, "BARK");
					if (IS_SOUND_ID_VALID(iLocal_475))
					{
						STOP_SOUND(bLocal_475);
					}
					bLocal_474 = PLAY_SOUND_FROM_ACTOR(bLocal_427, "DOG_BARK_NOW_MASTER", 0);
					Function_213(&bLocal_263);
				}
				if (!Function_415(bLocal_427, Local_4.f_772, 2.0f))
				{
					if (GET_TASK_STATUS(bLocal_427, 43) != 1)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_427, Local_4.f_772, 3, 0, 0, 1, false);
						DECOR_SET_BOOL(bLocal_427, "Frank", true);
					}
				}
				else
				{
					TASK_CLEAR(bLocal_427);
					Function_213(&bLocal_263);
					iLocal_433 = 3;
				}
				break;
			
			case 0x00000003:
				if (Function_332(&bLocal_263, 2.0f))
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "BARK");
					SET_ACTOR_ACTION_SIGNAL(bLocal_427, 8, "BARK");
					if (IS_SOUND_ID_VALID(bLocal_474))
					{
						STOP_SOUND(bLocal_474);
					}
					bLocal_475 = PLAY_SOUND_FROM_ACTOR(bLocal_427, "DOG_GROWL_MASTER", 0);
					Function_213(&bLocal_263);
				}
				if (GET_TASK_STATUS(bLocal_427, 0) != 1)
				{
					GET_OBJECT_POSITION(bParam1, &(vLocal_442[03]));
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 300)[4], 2, 0, 1);
					TASK_FACE_ACTOR(false, bLocal_249, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				break;
			
			default:
				break;
			}
	}
	return;
}

bool Function_415(bool bParam0, bool bParam1, float fParam2) //Position: 0x1499F / 84383
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_416(StackVal, StackVal, bParam0, vVar0) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of path end. Returning FALSE.");
	return 0;
	return 0;
}

float Function_416(bool bParam0, vector3 vParam1) //Position: 0x14A32 / 84530
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_280(bParam0);
		vVar0 = { StackVal, StackVal, Function_280(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_417() //Position: 0x14AAC / 84652
{
	Function_333(bLocal_198);
	if (iLocal_246 < 3 && iLocal_246 > 105)
	{
		Function_421(Local_4.f_768, Local_4.f_136, (*&Local_4 + 268)[2]);
		Function_391();
	}
	switch (iLocal_246)
	{
		case 0x00000000:
			Function_326(0);
			SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_281[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_322(0.0f, "Stage_Two.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_318();
				bLocal_247 = Global_30637[1];
				if (!Function_317(bLocal_247))
				{
					Function_316(&Local_199);
				}
				Function_324(Global_34573, (*&Local_4 + 240)[0], 0, 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_250))
				{
					TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_250, true);
				}
				if (IS_ACTOR_VALID(bLocal_249))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_249);
					MEMORY_PREFER_RIDING(bLocal_249, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_249);
					TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_249, true);
				}
				if (IS_ACTOR_VALID(bLocal_427))
				{
					Function_324(bLocal_427, (*&Local_4 + 240)[2], 0, 1, 1, 1);
				}
				Function_213(&bLocal_251);
				iLocal_246 = 1;
			}
			else
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_317(bLocal_247) || bLocal_247 != 4294967295))
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000002:
			Function_226(bLocal_245);
			Function_360(StackVal, StackVal, Function_226(bLocal_245), bLocal_245, Global_30637[1], Function_229(bLocal_245), 2);
			if (HUD_IS_FADED())
			{
				Function_308(1.0f, "Stage_Two.GID_POST_STREAMING");
			}
			iLocal_430 = 0;
			iLocal_434 = 0;
			iLocal_433 = 0;
			Function_420();
			if (IS_ACTOR_VALID(bLocal_249))
			{
				Function_324(bLocal_249, (*&Local_4 + 240)[1], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				SET_ACTOR_HEALTH(bLocal_427, GET_ACTOR_MAX_HEALTH(bLocal_427));
			}
			if (iLocal_281[0] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_VALID(bLocal_250))
					{
						Function_324(bLocal_250, (*&Local_4 + 240)[3], 0, 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_250))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_250);
						}
					}
				}
			}
			iLocal_291 = 0;
			Function_371(&(Local_332[017]), bLocal_249, "Son", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[117]), bLocal_427, "Dog", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[217]), bLocal_428, "Uncle", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[317]), bLocal_425, "Wife", 0, 0x5f5e100, 1);
			Function_367(&(Local_332[117]), 1024);
			Function_366(&(Local_332[417]));
			Function_213(&bLocal_251);
			iLocal_246 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_466))
				{
					if (IS_ACTOR_VALID(bLocal_427))
					{
						Function_108();
						bLocal_466 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_198, "HOME02SON03_CAMERA_FOCUS", bLocal_427, Function_108(), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_466))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_466, 0);
						}
					}
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
				}
				if (IS_ACTOR_VALID(bLocal_249))
				{
					Function_355(12, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_249, false);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_249, true);
				}
				if (IS_ACTOR_VALID(bLocal_427))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_250)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_250));
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_427, 325, 0, 2, 0);
					}
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_768, 3, 0, 0, 1, false);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				Function_419();
				if (iLocal_281[0] == 0)
				{
					Function_213(&bLocal_251);
					iLocal_246 = 7;
				}
				else
				{
					Function_213(&bLocal_251);
					iLocal_246 = 8;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_332(&bLocal_251, 5.0f))
			{
				Function_356("home02_son03_obj02", 7,5f, 1, 2, 0, 0, 0);
				Function_213(&bLocal_251);
				Function_213(&bLocal_254);
				Function_213(&bLocal_269);
				Function_213(&bLocal_257);
				iLocal_246 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, 0, 334))
			{
				Function_336(&bLocal_257, 60.0f, 200.0f, bLocal_427, "Dog_return", "Dog_abandoned", &bLocal_289, 1, bLocal_198, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427), true);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_427, 24.0f))
				{
					if (Function_332(&bLocal_269, 15.0f))
					{
						if (!Function_162())
						{
							Function_213(&bLocal_269);
							Function_418();
						}
					}
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_132))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_132))
				{
					Function_377("volume_blood02");
					DESTROY_VOLUME(Local_4.f_132);
				}
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				if (IS_VOLUME_VALID((*&Local_4 + 104)[1]))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_427, (*&Local_4 + 104)[1]))
					{
						Function_231();
						Function_213(&bLocal_251);
						iLocal_246 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_281[1] = 1;
			Function_213(&bLocal_251);
			bLocal_245 = 2;
			iLocal_246 = 0;
			LOG_ERROR("still blippey");
			break;
	}
	return;
}

void Function_418() //Position: 0x15070 / 86128
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_ShoutsEncoDog", "Home02_s3_ShoutsEncoDog", false, 2, 1, 0, 1);
		Function_353(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_419() //Position: 0x150C7 / 86215
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_Reaches1Chekpnt", "Home02_s3_Reaches1Chekpnt", false, 2, 1, 0, 1);
		Function_353(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_420() //Position: 0x15122 / 86306
{
	if (IS_ACTOR_VALID(bLocal_428))
	{
		Function_324(bLocal_428, (*&Local_4 + 188)[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_425))
	{
		Function_324(bLocal_425, (*&Local_4 + 188)[5], 0, 1, 1, 1);
	}
	Function_377("SETUP_MISSION_OBJECTS_STAGE02");
	AUDIO_SET_PLAYER_MOOD(0, 0);
	return;
}

void Function_421(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15185 / 86405
{
	if (IS_ACTOR_VALID(bLocal_427))
	{
		switch (iLocal_433)
		{
			case 0x00000000:
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_427);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
				iLocal_433++;
				break;
			
			case 0x00000001:
				if (!Function_422(bParam0))
				{
					if (!GET_TASK_STATUS(bLocal_427, 22) != 1)
					{
						bLocal_429 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
						TASK_SEQUENCE_RELEASE(bLocal_429, 1);
						TASK_PRIORITY_SET(bLocal_427, true);
					}
				}
				else if (!GET_TASK_STATUS(bLocal_427, 43) != 1)
				{
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					if (bLocal_245 <= 2)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam0, 3, 0, 0, 1, false);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam0, 2, 0, 0, 1, false);
					}
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				if (IS_VOLUME_VALID(bParam1))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_427, bParam1))
					{
						iLocal_433++;
					}
				}
				break;
			
			case 0x00000002:
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "SNIFF");
				GET_OBJECT_POSITION(bParam2, &(vLocal_442[03]));
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &(vLocal_442[03]), 3.0f, 2);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				TASK_PRIORITY_SET(bLocal_427, true);
				Function_377("UPDATE_DOG_STAGE02");
				iLocal_433++;
				break;
			
			case 0x00000003:
				iLocal_433++;
				break;
			}
	}
	return;
}

bool Function_422(bool bParam0) //Position: 0x1531E / 86814
{
	if (!ACTORS_IN_RANGE(bLocal_427, Global_34573, 60.0f))
	{
		if (Function_423(Global_34573, bParam0) <= Function_423(bLocal_427, bParam0))
		{
			if (!ACTORS_IN_RANGE(Global_34573, bLocal_249, 100.0f))
			{
				return 0;
			}
		}
	}
	return 1;
}

float Function_423(bool bParam0, bool bParam1) //Position: 0x1535E / 86878
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_280(bParam0);
		vVar4 = { StackVal, StackVal, Function_280(bParam0) };
		return VDIST(vVar4, vVar0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_424() //Position: 0x153EB / 87019
{
	Function_333(bLocal_198);
	if (iLocal_246 < 3 && iLocal_246 > 105)
	{
		Function_432();
		Function_429();
		Function_427(10.0f);
		Function_391();
	}
	switch (iLocal_246)
	{
		case 0x00000000:
			Function_326(0);
			SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
			if (IS_ACTOR_VALID(bLocal_250))
			{
				TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_250, true);
			}
			if (IS_ACTOR_VALID(bLocal_249))
			{
				if (IS_ACTOR_CRIPPLED(bLocal_249, 5))
				{
					SET_CRIPPLE_FLAG(bLocal_249, false);
					DECOR_REMOVE(bLocal_249, "NoBleedOut");
				}
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_249);
				MEMORY_PREFER_RIDING(bLocal_249, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_249);
				TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_249, true);
			}
			if (IS_ACTOR_VALID(bLocal_425))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_425);
				MEMORY_PREFER_RIDING(bLocal_425, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_425);
				TASK_STAND_STILL(bLocal_425, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_425, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_318();
			bLocal_247 = Global_30717[1];
			if (!Function_317(bLocal_247))
			{
				Function_316(&Local_199);
			}
			if (Function_271(&Local_199))
			{
				Function_324(Global_34573, (*&Local_4 + 188)[1], 0, 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_427))
				{
					Function_324(bLocal_427, (*&Local_4 + 188)[6], 0, 1, 1, 1);
				}
				Function_213(&bLocal_251);
				iLocal_246 = 1;
			}
			else
			{
				Function_213(&bLocal_251);
				iLocal_246 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_317(bLocal_247) || bLocal_247 != 4294967295))
			{
				Function_213(&bLocal_251);
				iLocal_246 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_430 = 0;
			iLocal_434 = 0;
			iLocal_432 = 0;
			iLocal_431 = 0;
			iLocal_433 = 0;
			bLocal_463 = false;
			iLocal_462 = 0;
			Function_426();
			if (HUD_IS_FADED())
			{
				Function_308(1.0f, "Stage_One.GID_POST_CUTSCENE");
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_226(bLocal_245);
			Function_360(StackVal, StackVal, Function_226(bLocal_245), bLocal_245, Global_30637[0], Function_229(bLocal_245), 0);
			if (!iLocal_461)
			{
				TASK_CLEAR(Global_34573);
				Function_324(Global_34573, (*&Local_4 + 188)[1], ", CUTSCENE_CUSTOM_SET_POSES - SID_INITIALIZE", 1, 1, 1);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
				iLocal_461 = 1;
			}
			iLocal_291 = 0;
			Function_371(&(Local_332[017]), bLocal_249, "Son", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[117]), bLocal_427, "Dog", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[217]), bLocal_428, "Uncle", 0, 0x5f5e100, 1);
			Function_371(&(Local_332[317]), bLocal_425, "Wife", 0, 0x5f5e100, 1);
			Function_367(&(Local_332[117]), 1024);
			Function_366(&(Local_332[417]));
			Function_323(&iLocal_424, 1, 0, 4294967295, 4294967295);
			Function_213(&bLocal_251);
			iLocal_246 = 5;
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_427) && IS_ACTOR_VALID(bLocal_250))
			{
				if (Function_425(bLocal_427, 1, 0x41700000) && Function_425(bLocal_250, 1, 0x41700000))
				{
					Function_213(&bLocal_251);
					iLocal_246 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (Function_332(&bLocal_251, 1,5f))
			{
				if (HUD_IS_FADED())
				{
					Function_308(1.0f, "Stage_One.GID_NINETYNINTH_GOAL");
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_213(&bLocal_251);
				iLocal_246 = 103;
			}
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				Function_213(&bLocal_251);
				iLocal_246 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(bLocal_250))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_250)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_250, 334, 0, 2, 0);
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_250)))
						{
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_249))
				{
					Function_355(12, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_249, false);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_249, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_249, true);
				}
				if (IS_ACTOR_VALID(bLocal_425))
				{
					Function_355(11, 0, 1);
				}
				Function_356("home02_son03_obj00", 7,5f, 1, 2, 0, 0, 0);
				Function_213(&bLocal_251);
				Function_213(&bLocal_254);
				Function_213(&bLocal_257);
				Function_213(&bLocal_269);
				iLocal_246 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_348(&bLocal_257, 100.0f, bLocal_250, "home02_son03_obj00", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, 0, 334))
			{
				Function_336(&bLocal_257, 60.0f, 200.0f, bLocal_250, "home02_son03_obj00", "Horse_abandoned", &bLocal_289, 0, 0, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_250)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_250)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_250), true);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_250))
			{
				if (GET_MOUNT(Global_34573) == bLocal_250)
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_250)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_250));
					}
					Function_231();
					Function_262();
					Function_213(&bLocal_251);
					iLocal_246 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(bLocal_466))
			{
				if (IS_ACTOR_VALID(bLocal_427))
				{
					Function_108();
					bLocal_466 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_198, "HOME02SON03_CAMERA_FOCUS", bLocal_427, Function_108(), 70.0f, 75.0f);
					if (IS_OBJECT_VALID(bLocal_466))
					{
						SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_466, 0);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_427))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_250)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_250));
				}
				ADD_BLIP_FOR_ACTOR(bLocal_427, 325, 0, 2, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
				{
				}
			}
			Function_323(&iLocal_424, 10, 0, 4294967295, 4294967295);
			Function_213(&bLocal_251);
			iLocal_246 = 10;
			break;
		
		case 0x0000000A:
			if (Function_332(&bLocal_251, 5.0f))
			{
				Function_356("home02_son03_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_213(&bLocal_251);
				Function_213(&bLocal_254);
				Function_213(&bLocal_257);
				Function_213(&bLocal_269);
				iLocal_246 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, 0, 334))
			{
				Function_336(&bLocal_257, 60.0f, 200.0f, bLocal_427, "Dog_return", "Dog_abandoned", &bLocal_289, 1, bLocal_198, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427), true);
					}
				}
			}
			if (bLocal_463)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_VALID(bLocal_427))
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_427, 20.0f))
						{
							Function_231();
							Function_213(&bLocal_251);
							iLocal_246 = 12;
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			bLocal_463 = false;
			Function_213(&bLocal_251);
			Function_213(&bLocal_269);
			iLocal_246 = 13;
			break;
		
		case 0x0000000D:
			if (!Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, 0, 334))
			{
				Function_336(&bLocal_257, 60.0f, 200.0f, bLocal_427, "Dog_return", "Dog_abandoned", &bLocal_289, 1, bLocal_198, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427), true);
					}
				}
			}
			if (bLocal_463)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_VALID(bLocal_427))
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_427, 20.0f))
						{
							Function_231();
							Function_213(&bLocal_251);
							iLocal_246 = 14;
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			bLocal_463 = false;
			Function_213(&bLocal_251);
			Function_213(&bLocal_269);
			iLocal_246 = 15;
			break;
		
		case 0x0000000F:
			if (!Function_348(&bLocal_257, 100.0f, bLocal_250, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_289, 1, bLocal_198, 0, 334))
			{
				Function_336(&bLocal_257, 60.0f, 200.0f, bLocal_427, "Dog_return", "Dog_abandoned", &bLocal_289, 1, bLocal_198, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_427)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(bLocal_427), true);
					}
				}
			}
			if (bLocal_463)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_VALID(bLocal_427))
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_427, 20.0f))
						{
							Function_231();
							Function_213(&bLocal_251);
							iLocal_246 = 106;
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_281[0] = 1;
			Function_213(&bLocal_251);
			bLocal_245 = true;
			iLocal_246 = 0;
			break;
	}
	return;
}

int Function_425(bool bParam0, bool bParam1, float fParam2) //Position: 0x15D0A / 89354
{
	float fVar0;
	bool bVar1;
	
	if (Function_33() || !bParam1)
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

void Function_426() //Position: 0x15DA7 / 89511
{
	if (IS_ACTOR_VALID(bLocal_428))
	{
		Function_324(bLocal_428, (*&Local_4 + 188)[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_425))
	{
		Function_324(bLocal_425, (*&Local_4 + 188)[5], 0, 1, 1, 1);
	}
	Function_377("SETUP_MISSION_OBJECTS_STAGE01");
	AUDIO_SET_PLAYER_MOOD(0, 0);
	return;
}

void Function_427(float fParam0) //Position: 0x15E0A / 89610
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bLocal_427))
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_427, 24.0f))
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (Function_332(&bLocal_269, fParam0))
				{
					Function_213(&bLocal_269);
					Function_428();
				}
			}
		}
		switch (iLocal_433)
		{
			case 0x00000000:
				iLocal_433++;
				break;
			
			case 0x00000001:
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_427);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "BARK");
				GET_OBJECT_POSITION((*&Local_4 + 188)[6], &vVar0);
				bLocal_476 = CREATE_VOLUME_IN_LAYOUT(Local_4, Function_86(), 3, vVar0, 0.0f, 0.0f, 0.0f, 4.0f, 5.0f, 4.0f);
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_WANDER_IN_VOLUME(false, bLocal_476, -1f);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				TASK_PRIORITY_SET(bLocal_427, true);
				iLocal_433++;
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(bLocal_250))
				{
					if (GET_MOUNT(Global_34573) == bLocal_250)
					{
						TASK_CLEAR(bLocal_427);
						Function_213(&iLocal_467);
						iLocal_433++;
					}
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(Local_4.f_524, &(vLocal_442[03]));
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 2.0f, 0, 0);
				TASK_FACE_COORD(false, &(vLocal_442[03]), 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				TASK_PRIORITY_SET(bLocal_427, true);
				iLocal_433++;
				break;
			
			case 0x00000004:
				if (GET_TASK_STATUS(bLocal_427, 23) == 0)
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_427, true);
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_756, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
					Function_213(&iLocal_467);
					iLocal_433++;
				}
				break;
			
			case 0x00000005:
				if (Function_332(&iLocal_467, 2.0f))
				{
					if (GET_TASK_STATUS(bLocal_427, 43) == 1)
					{
						Function_213(&iLocal_467);
						iLocal_433++;
					}
				}
				break;
			
			case 0x00000006:
				Function_213(&iLocal_467);
				iLocal_433++;
				break;
			
			case 0x00000007:
				if (!Function_422(Local_4.f_756))
				{
					if (!GET_TASK_STATUS(bLocal_427, 22) != 1)
					{
						bLocal_429 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
						TASK_SEQUENCE_RELEASE(bLocal_429, 1);
						TASK_PRIORITY_SET(bLocal_427, true);
					}
				}
				else if (!GET_TASK_STATUS(bLocal_427, 43) != 1)
				{
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_756, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				if (IS_VOLUME_VALID((*&Local_4 + 144)[2]))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_427, (*&Local_4 + 144)[2]))
					{
						iLocal_433++;
					}
				}
				break;
			
			case 0x00000008:
				bLocal_463 = true;
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "SNIFF");
				GET_OBJECT_POSITION((*&Local_4 + 428)[1], &(vLocal_442[03]));
				GET_OBJECT_POSITION((*&Local_4 + 428)[2], &(vLocal_442[13]));
				GET_OBJECT_POSITION((*&Local_4 + 428)[3], &(vLocal_442[23]));
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &(vLocal_442[03]), 3.0f, 2);
				TASK_GO_NEAR_COORD(false, &(vLocal_442[13]), 3.0f, 2);
				TASK_GO_NEAR_COORD(false, &(vLocal_442[23]), 3.0f, 2);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				TASK_PRIORITY_SET(bLocal_427, true);
				iLocal_433++;
				break;
			
			case 0x00000009:
				if (!bLocal_463)
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_760, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
					iLocal_433++;
				}
				break;
			
			case 0x0000000A:
				if (!Function_422(Local_4.f_760))
				{
					if (!GET_TASK_STATUS(bLocal_427, 22) != 1)
					{
						bLocal_429 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
						TASK_SEQUENCE_RELEASE(bLocal_429, 1);
						TASK_PRIORITY_SET(bLocal_427, true);
					}
				}
				else if (!GET_TASK_STATUS(bLocal_427, 43) != 1)
				{
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_760, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				if (IS_VOLUME_VALID((*&Local_4 + 144)[0]))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_427, (*&Local_4 + 144)[0]))
					{
						iLocal_433++;
					}
				}
				break;
			
			case 0x0000000B:
				bLocal_463 = true;
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "SNIFF");
				GET_OBJECT_POSITION((*&Local_4 + 452)[1], &(vLocal_442[03]));
				GET_OBJECT_POSITION((*&Local_4 + 452)[2], &(vLocal_442[13]));
				GET_OBJECT_POSITION((*&Local_4 + 452)[3], &(vLocal_442[23]));
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &(vLocal_442[03]), 3.0f, 2);
				TASK_GO_NEAR_COORD(false, &(vLocal_442[13]), 3.0f, 2);
				TASK_GO_NEAR_COORD(false, &(vLocal_442[23]), 3.0f, 2);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				TASK_PRIORITY_SET(bLocal_427, true);
				Function_377("UPDATE_DOG_STAGE01");
				iLocal_433++;
				break;
			
			case 0x0000000C:
				if (!bLocal_463)
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_764, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
					iLocal_433++;
				}
				break;
			
			case 0x0000000D:
				if (!Function_422(Local_4.f_764))
				{
					if (!GET_TASK_STATUS(bLocal_427, 22) != 1)
					{
						bLocal_429 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
						TASK_SEQUENCE_RELEASE(bLocal_429, 1);
						TASK_PRIORITY_SET(bLocal_427, true);
					}
				}
				else if (!GET_TASK_STATUS(bLocal_427, 43) != 1)
				{
					DECOR_SET_BOOL(bLocal_427, "Frank", true);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_764, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_427, true);
				}
				if (IS_VOLUME_VALID((*&Local_4 + 144)[1]))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_427, (*&Local_4 + 144)[1]))
					{
						iLocal_433++;
					}
				}
				break;
			
			case 0x0000000E:
				bLocal_463 = true;
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_427, 8, "SNIFF");
				GET_OBJECT_POSITION((*&Local_4 + 476)[1], &(vLocal_442[03]));
				GET_OBJECT_POSITION((*&Local_4 + 476)[2], &(vLocal_442[13]));
				GET_OBJECT_POSITION((*&Local_4 + 476)[3], &(vLocal_442[23]));
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &(vLocal_442[03]), 3.0f, 2);
				TASK_GO_NEAR_COORD(false, &(vLocal_442[13]), 3.0f, 2);
				TASK_GO_NEAR_COORD(false, &(vLocal_442[23]), 3.0f, 2);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_427, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				TASK_PRIORITY_SET(bLocal_427, true);
				iLocal_433++;
				break;
			
			case 0x0000000F:
				if (!bLocal_463)
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_427);
					iLocal_433++;
				}
				break;
			
			case 0x00000010:
				iLocal_433++;
				break;
			}
	}
	return;
}

void Function_428() //Position: 0x16597 / 91543
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s3_JonShoutsEncoDog", "Home02_s3_JonShoutsEncoDog", false, 2, 1, 0, 1);
		Function_353(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_429() //Position: 0x165F4 / 91636
{
	if (IS_ACTOR_VALID(bLocal_428))
	{
		switch (iLocal_431)
		{
			case 0x00000000:
				bLocal_429 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(false, Local_4.f_752, 1, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_752), "UseCase1", true, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_428, bLocal_429);
				TASK_SEQUENCE_RELEASE(bLocal_429, 1);
				Function_431(&bLocal_275);
				iLocal_431 = 1;
				break;
			
			case 0x00000001:
				if (ACTORS_IN_RANGE(bLocal_428, Global_34573, 10.0f))
				{
					if (Function_332(&bLocal_275, 5.0f))
					{
						Function_430();
						Function_213(&bLocal_275);
						LOG_ERROR("Home02_PLAY_s3_UncleYellsHurry");
						iLocal_431 = 0;
					}
				}
				else if (!Function_208(bLocal_428, 1.0f, (10.0f * 2.0f), 1, 1, 0))
				{
					Function_213(&bLocal_275);
				}
				break;
			}
	}
	return;
}

void Function_430() //Position: 0x166CF / 91855
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Home02_s3_UncleYellsHurry", "Home02_s3_UncleYellsHurry", false, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431(int iParam0) //Position: 0x1672A / 91946
{
	if (!Function_268(iParam0))
	{
		Function_214(iParam0, 0.0f);
	}
	return;
}

void Function_432() //Position: 0x1673F / 91967
{
	if (IS_ACTOR_VALID(bLocal_425))
	{
		switch (iLocal_432)
		{
			case 0x00000000:
				if (Function_433(&uLocal_470, &uLocal_471, &uLocal_472))
				{
					iLocal_432++;
				}
				break;
			
			case 0x00000001:
				GET_OBJECT_POSITION(Local_4.f_508, &vLocal_458);
				if (IS_ACTOR_VALID(bLocal_425))
				{
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_GO_NEAR_COORD(false, &vLocal_458, 1.0f, true);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_425, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_425, true);
				}
				iLocal_432++;
				break;
			
			case 0x00000002:
				if (iLocal_462)
				{
					GET_OBJECT_POSITION(Local_4.f_512, &vLocal_458);
					bLocal_429 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_GO_NEAR_COORD(false, &vLocal_458, 1.0f, true);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_425, bLocal_429);
					TASK_SEQUENCE_RELEASE(bLocal_429, 1);
					TASK_PRIORITY_SET(bLocal_425, true);
					iLocal_432++;
				}
				break;
			
			case 0x00000003:
				iLocal_432++;
				break;
			}
	}
	return;
}

bool Function_433(var uParam0, var uParam1, int iParam2) //Position: 0x16830 / 92208
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = "beechersHope";
	uVar1 = "beechersHope01";
	uVar2 = "house01";
	if (IS_WORLD_SECTOR_LOADED(CREATE_WORLD_SECTOR(bLocal_198, bVar0)))
	{
		if (!IS_DOOR_VALID(*uParam0))
		{
			*uParam0 = Function_434(uVar1, uVar2, 1);
			CLOSE_DOOR_FAST(*uParam0);
			SET_DOOR_LOCK(*uParam0, 1);
		}
		if (!IS_DOOR_VALID(*uParam1))
		{
			*uParam1 = Function_434(uVar1, uVar2, 2);
			CLOSE_DOOR_FAST(*uParam1);
			SET_DOOR_LOCK(*uParam1, 1);
		}
		if (!IS_DOOR_VALID(*iParam2))
		{
			*iParam2 = Function_434(uVar1, uVar2, 3);
			CLOSE_DOOR_FAST(*iParam2);
			SET_DOOR_LOCK(*iParam2, 1);
		}
		if ((IS_DOOR_VALID(*uParam0) && IS_DOOR_VALID(*uParam1)) && IS_DOOR_VALID(*iParam2))
		{
			if ((IS_DOOR_LOCKED(*uParam0) && IS_DOOR_LOCKED(*uParam1)) && IS_DOOR_LOCKED(*iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_434(var uParam0, var uParam1, int iParam2) //Position: 0x1690D / 92429
{
	return Function_435(Global_29006, uParam0, uParam1, iParam2);
}

int Function_435(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x1691F / 92447
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_38(iParam0))
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

void Function_436() //Position: 0x169BB / 92603
{
	switch (iLocal_246)
	{
		case 0x00000006:
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_323(&iLocal_424, 0, 0, 4294967295, 4294967295);
			Unknown_Function();
			bLocal_198 = CREATE_LAYOUT("home02_son03_DynamicLayout");
			Function_453();
			Function_452();
			Global_8492[1214].f_8 = 640;
			iLocal_246 = 8;
			break;
		
		case 0x00000008:
			if (Function_442())
			{
				if ((!Function_271(&Local_199) && Local_199.f_24 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/SON_03/SON_03"))
				{
					iLocal_246 = 9;
				}
				else
				{
					iLocal_246 = 10;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_259("$/cutscene/SON_03/SON_03", &iLocal_238, &Local_199, &bLocal_245, 59092, 57292, 54940, 53703, 51330, 50997, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_246 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_248 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (!IS_ACTOR_VALID(bLocal_249))
			{
				Function_324(bLocal_249, (*&Local_4 + 188)[2], 0, 1, 1, 1);
				TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_249, true);
			}
			Function_355(12, 0, 1);
			RESET_ACTOR_GAITS(bLocal_249, 0);
			SET_CRIPPLE_ENABLE(bLocal_249, 0);
			SET_ACTOR_FACTION(bLocal_249, 20);
			TASK_PRIORITY_SET(bLocal_249, true);
			TASK_STAND_STILL(bLocal_249, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_249, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_249, 50.0f);
			SET_ACTOR_HEALTH(bLocal_249, GET_ACTOR_MAX_HEALTH(bLocal_249));
			Function_355(13, 0, 1);
			RESET_ACTOR_GAITS(bLocal_428, 0);
			SET_CRIPPLE_ENABLE(bLocal_428, 0);
			SET_ACTOR_FACTION(bLocal_428, 20);
			TASK_PRIORITY_SET(bLocal_428, true);
			TASK_STAND_STILL(bLocal_428, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_428, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_428, 50.0f);
			SET_ACTOR_HEALTH(bLocal_428, GET_ACTOR_MAX_HEALTH(bLocal_428));
			Function_355(11, 0, 1);
			RESET_ACTOR_GAITS(bLocal_425, 0);
			SET_CRIPPLE_ENABLE(bLocal_425, 0);
			SET_ACTOR_FACTION(bLocal_425, 20);
			TASK_PRIORITY_SET(bLocal_425, true);
			TASK_STAND_STILL(bLocal_425, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_425, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_425, 50.0f);
			SET_ACTOR_HEALTH(bLocal_425, GET_ACTOR_MAX_HEALTH(bLocal_425));
			RESET_ACTOR_GAITS(bLocal_250, 0);
			TASK_PRIORITY_SET(bLocal_250, true);
			TASK_STAND_STILL(bLocal_250, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_250, 50.0f);
			SET_ACTOR_HEALTH(bLocal_250, GET_ACTOR_MAX_HEALTH(bLocal_250));
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_164);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_164);
			Function_440(&uLocal_292, bLocal_198);
			Function_431(&iLocal_467);
			Function_431(&bLocal_251);
			Function_431(&bLocal_254);
			Function_431(&bLocal_257);
			bLocal_245 = false;
			iLocal_246 = 0;
			Function_438(&Local_199, &bLocal_245, &iLocal_246);
			Function_437(StackVal, StackVal, StackVal, &Local_199, 1, Function_453(), Local_199);
			switch (bLocal_245)
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

void Function_437(struct<25> Param0) //Position: 0x16CC9 / 93385
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_245 = false;
			break;
		
		case 0x00000002:
			bLocal_245 = true;
			break;
		
		case 0x00000003:
			bLocal_245 = 2;
			break;
		
		case 0x00000004:
			bLocal_245 = 3;
			break;
		
		case 0x00000005:
			bLocal_245 = 4;
			break;
		
		case 0x00000006:
			bLocal_245 = 5;
			break;
		
		case 0x00000007:
			bLocal_245 = 6;
			break;
		
		case 0x00000008:
			bLocal_245 = 7;
			break;
		
		case 0x00000009:
			bLocal_245 = 8;
			break;
		
		case 0x0000000A:
			bLocal_245 = 101;
			break;
	}
}

void Function_438(int iParam0, var uParam1, int iParam2) //Position: 0x16D54 / 93524
{
	if (Function_271(iParam0))
	{
		*uParam1 = Function_387(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_439();
	}
	return;
}

void Function_439() //Position: 0x16D88 / 93576
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

int Function_440(var uParam0, bool bParam1) //Position: 0x16DD9 / 93657
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_441(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_441(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_441(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_441(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_441(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x17479 / 95353
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
	Function_109(iParam0 + 8, iParam4);
	return 1;
}

bool Function_442() //Position: 0x1753C / 95548
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_451(1))
		{
			return 0;
		}
		if (!Function_300())
		{
			return 0;
		}
		if (!Function_294(&bLocal_206))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_249))
		{
			GET_OBJECT_POSITION((*&Local_4 + 188)[3], &vLocal_436);
			bLocal_249 = Function_443(12, 0, 1, vLocal_436.x, vLocal_436.y, vLocal_436.z, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_249, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_428))
		{
			GET_OBJECT_POSITION((*&Local_4 + 188)[10], &vLocal_455);
			bLocal_428 = Function_443(13, 0, 1, vLocal_455.x, vLocal_455.y, vLocal_455.z, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_428, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_425))
		{
			GET_OBJECT_POSITION((*&Local_4 + 188)[5], &vLocal_458);
			bLocal_425 = Function_443(11, 0, 1, vLocal_458.x, vLocal_458.y, vLocal_458.z, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_425, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_427))
		{
			bLocal_427 = Function_443(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_427, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_250))
		{
			GET_OBJECT_POSITION((*&Local_4 + 188)[7], &vLocal_439);
			bLocal_250 = Function_281(1, 1, vLocal_439.x, vLocal_439.y, vLocal_439.z, 0, 1, 0);
			REMOVE_HORSE_ACCESSORY(bLocal_250, 4);
			ACCESSORIZE_HORSE(bLocal_250, 3);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_250, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_443(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x176B7 / 95927
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
		if (!Function_34(&(Global_29008[Global_30621[3]]), 4))
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
		Function_355(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_450(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_446(StackVal, iParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = iParam3;
			vVar3.y = iParam4;
			vVar3.z = fParam5;
			if (Function_106(StackVal, StackVal, vVar3))
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
		Function_445(bVar1, 0, 0, 0, 0);
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
		Function_444(bVar1, 0);
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

void Function_444(bool bParam0, bool bParam1) //Position: 0x17BA1 / 97185
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_445(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x17BC1 / 97217
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

bool Function_446(int iParam0, bool bParam1) //Position: 0x17C15 / 97301
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_385(iParam0))
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
						Function_447(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_447(bool bParam0, bool bParam1) //Position: 0x17C95 / 97429
{
	Function_449(bParam0);
	Function_448(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_448(bool bParam0) //Position: 0x17CBB / 97467
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_449(bool bParam0) //Position: 0x17CDF / 97503
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

bool Function_450(int iParam0, bool bParam1) //Position: 0x17DAE / 97710
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

bool Function_451(bool bParam0) //Position: 0x17E41 / 97857
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

void Function_452() //Position: 0x17E6F / 97903
{
	Function_301(&bLocal_206, "home02son03", 10, 0);
	Function_303(&bLocal_206, 1041, 2, 0);
	Function_303(&bLocal_206, 1099, 2, 0);
	Function_301(&bLocal_206, "son03_jack", 5, 0);
	Function_301(&bLocal_206, "custom/son03_jack", 8, 0);
	Function_301(&bLocal_206, "cs_son03_bear", 5, 0);
	Function_301(&bLocal_206, "custom/cs_son03_bear", 8, 0);
	Function_301(&bLocal_206, "BeechersHope", 12, 0);
	return;
}

vector3 Function_453() //Position: 0x17F24 / 98084
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
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("home02_son03_layout");
	Local_4.f_76 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 48)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -79,79403f, 117,6869f, 1367,484f, 0.0f, -40,21006f, 0.0f, 91,79516f, 10.0f, 82,98182f);
	ADD_TO_VOLUME_SET(Local_4.f_76, (*&Local_4 + 48)[0]);
	(*&Local_4 + 48)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_76, (*&Local_4 + 48)[1]);
	(*&Local_4 + 48)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_76, (*&Local_4 + 48)[2]);
	(*&Local_4 + 48)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_76, (*&Local_4 + 48)[3]);
	(*&Local_4 + 48)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene05Vol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_76, (*&Local_4 + 48)[4]);
	(*&Local_4 + 48)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_76, (*&Local_4 + 48)[5]);
	Local_4.f_100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "MoodVol_set");
	(*&Local_4 + 80)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mood_volume01a", 2, -96,4699f, 112,1891f, 1228,153f, 0.0f, 25,85769f, 0.0f, 39,27991f, 30.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_100, (*&Local_4 + 80)[0]);
	(*&Local_4 + 80)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mood_volume01b", 2, -379,8145f, 119,338f, 1213,3f, 0.0f, 25,85769f, 0.0f, 40.0f, 30.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_100, (*&Local_4 + 80)[1]);
	(*&Local_4 + 80)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mood_volume02a", 2, -725,9491f, 197,9568f, 1163,366f, 0.0f, 0.0f, 0.0f, 144,2365f, 100.0f, 147,6266f);
	ADD_TO_VOLUME_SET(Local_4.f_100, (*&Local_4 + 80)[2]);
	(*&Local_4 + 80)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mood_volume02b", 3, -36,2914f, 119,5215f, 1435,664f, 0.0f, 20.0f, 0.0f, 585,0934f, 20.0f, 331,1229f);
	ADD_TO_VOLUME_SET(Local_4.f_100, (*&Local_4 + 80)[3]);
	Local_4.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "volume_objective_set");
	(*&Local_4 + 104)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01", 2, -376,553f, 118,3048f, 1223,658f, 0.0f, 0.0f, 0.0f, 20.0f, 15.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_4.f_128, (*&Local_4 + 104)[0]);
	(*&Local_4 + 104)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02", 2, -756,0001f, 178,3272f, 1244,158f, 0.0f, 0.0f, 0.0f, 20.0f, 15.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_4.f_128, (*&Local_4 + 104)[1]);
	(*&Local_4 + 104)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03", 2, -761,4694f, 178,3272f, 1230,619f, 0.0f, -2,559626f, 0.0f, 43,50387f, 30.0f, 34,50921f);
	ADD_TO_VOLUME_SET(Local_4.f_128, (*&Local_4 + 104)[2]);
	(*&Local_4 + 104)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03b", 2, -724,9338f, 224,0182f, 1132,884f, 0.0f, 99,2851f, 0.0f, 43,10511f, 30.0f, 32,85636f);
	ADD_TO_VOLUME_SET(Local_4.f_128, (*&Local_4 + 104)[3]);
	(*&Local_4 + 104)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective04", 2, -81,78777f, 118,7763f, 1334,522f, 0.0f, 91,76753f, 0.0f, 7.0f, 7.0f, 7.0f);
	ADD_TO_VOLUME_SET(Local_4.f_128, (*&Local_4 + 104)[4]);
	Local_4.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_blood02", 2, -733,5162f, 174,367f, 1252,131f, 0.0f, 14,98962f, 0.0f, 45,74283f, 15.0f, 30.0f);
	Local_4.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_finish02", 2, -747,9167f, 176,4982f, 1246,392f, 0.0f, 21,81194f, 0.0f, 21,42168f, 30.0f, 25,81365f);
	Local_4.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_finish03", 2, -752,074f, 226,4311f, 1144,207f, 0.0f, -170,3204f, 0.0f, 10.0f, 30.0f, 30.0f);
	Local_4.f_160 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "volume_dog_scent_set");
	(*&Local_4 + 144)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent01b", 2, -251,6107f, 124,0775f, 1270,722f, 0.0f, 14,09987f, 0.0f, 20.0f, 30.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_160, (*&Local_4 + 144)[0]);
	(*&Local_4 + 144)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent01c", 2, -366,2482f, 117,8714f, 1222,496f, 0.0f, 0,7796523f, 0.0f, 30.0f, 30.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_4.f_160, (*&Local_4 + 144)[1]);
	(*&Local_4 + 144)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent01a", 2, -96,4699f, 112,1891f, 1228,153f, 0.0f, 30,77011f, 0.0f, 20.0f, 30.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_160, (*&Local_4 + 144)[2]);
	Local_4.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_ambient_restrict", 2, -725,9491f, 197,9568f, 1135,293f, 0.0f, 0.0f, 0.0f, 250.0f, 100.0f, 200.0f);
	Local_4.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_bear_restrict", 2, -738,4987f, 227,4755f, 1120.0f, 0.0f, 0.0f, 0.0f, 50.0f, 50.0f, 50.0f);
	Local_4.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_horse_restrict", 2, -750,9561f, 230,4755f, 1145,045f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_teleport", 2, -755,1562f, 179,2446f, 1238,862f, 0.0f, 0.0f, 0.0f, 50.0f, 50.0f, 50.0f);
	Local_4.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_son_wander", 2, -65,35275f, 120,2791f, 1411,941f, 0.0f, -30.0f, 0.0f, 9,202279f, 11,03092f, 11,99365f);
	Local_4.f_184 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 188)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -64,301f, 116,635f, 1382,907f, 0.0f, 39,88f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[0], Local_4.f_184);
	(*&Local_4 + 188)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -64,301f, 116,635f, 1382,907f, 0.0f, 39,88f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[1], Local_4.f_184);
	(*&Local_4 + 188)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -716,9012f, 227,7181f, 1143,099f, 0.0f, 112,9472f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[2], Local_4.f_184);
	(*&Local_4 + 188)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -716,9012f, 227,7181f, 1143,099f, 0.0f, 113,2198f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[3], Local_4.f_184);
	(*&Local_4 + 188)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "WifeStart01", -109,892f, 119,489f, 1364,27f, 0.0f, 342,287f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[4], Local_4.f_184);
	(*&Local_4 + 188)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "nWifeEnd01", -102,166f, 119,489f, 1351,576f, 0.0f, 160,366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[5], Local_4.f_184);
	(*&Local_4 + 188)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart01", -80,62251f, 117,6816f, 1369,607f, 0.0f, -137,9841f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[6], Local_4.f_184);
	(*&Local_4 + 188)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -71,88409f, 117,8836f, 1375,386f, 0.0f, 30,83535f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[7], Local_4.f_184);
	(*&Local_4 + 188)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart01", -734,0921f, 227,1915f, 1118,09f, 60,75098f, -181,9967f, -91,11782f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[8], Local_4.f_184);
	(*&Local_4 + 188)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleStart01", -47,99899f, 115,7071f, 1355,999f, 0.0f, -203,997f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[9], Local_4.f_184);
	(*&Local_4 + 188)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleEnd01", -61,27098f, 116,7625f, 1389,271f, 0.0f, 29,30305f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 188)[10], Local_4.f_184);
	Local_4.f_236 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 240)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -389,804f, 120,3003f, 1222,165f, 0.0f, 85,5071f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 240)[0], Local_4.f_236);
	(*&Local_4 + 240)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -716,9012f, 227,7181f, 1143,099f, 0.0f, 113,5087f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 240)[1], Local_4.f_236);
	(*&Local_4 + 240)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart02", -391,2956f, 120,7483f, 1221,066f, 0.0f, 91,76753f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 240)[2], Local_4.f_236);
	(*&Local_4 + 240)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -366,2114f, 118,0539f, 1222,764f, 0.0f, 100,7799f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 240)[3], Local_4.f_236);
	(*&Local_4 + 240)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart02", -734,0921f, 227,1915f, 1118,09f, 60,75098f, -181,9967f, -91,11782f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 240)[4], Local_4.f_236);
	Local_4.f_264 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 268)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -750,6408f, 178,2551f, 1237,842f, 0.0f, 26,59273f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 268)[0], Local_4.f_264);
	(*&Local_4 + 268)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -716,9012f, 227,7181f, 1143,099f, 0.0f, 113,5087f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 268)[1], Local_4.f_264);
	(*&Local_4 + 268)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart03", -755,1562f, 179,2446f, 1238,862f, 0.0f, -107,8726f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 268)[2], Local_4.f_264);
	(*&Local_4 + 268)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -750,3741f, 177,6511f, 1240,711f, 0.0f, 30,98867f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 268)[3], Local_4.f_264);
	(*&Local_4 + 268)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart03", -734,0921f, 227,1915f, 1118,09f, 60,75098f, -181,9967f, -91,11782f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 268)[4], Local_4.f_264);
	(*&Local_4 + 268)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "BearStart03", -734,1664f, 227,1496f, 1117,233f, 0.0f, 573,97f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 268)[5], Local_4.f_264);
	Local_4.f_296 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 300)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -721,5546f, 226,9982f, 1144,556f, 0.0f, -85,49197f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[0], Local_4.f_296);
	(*&Local_4 + 300)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -720.0f, 226,9591f, 1140f, 0.0f, 50,58324f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[1], Local_4.f_296);
	(*&Local_4 + 300)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -716,9012f, 227,7181f, 1143,099f, 0.0f, 113,5087f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[2], Local_4.f_296);
	(*&Local_4 + 300)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd04", -716,9012f, 227,7181f, 1143,099f, 0.0f, 113,5087f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[3], Local_4.f_296);
	(*&Local_4 + 300)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart04", -736,1304f, 228,523f, 1149,461f, 0.0f, -107,8726f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[4], Local_4.f_296);
	(*&Local_4 + 300)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "DogEnd04", -736,1297f, 228,5119f, 1149,161f, 0.0f, -107,8726f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[5], Local_4.f_296);
	(*&Local_4 + 300)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -723,8226f, 227,2135f, 1145,574f, 0.0f, -28,73355f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[6], Local_4.f_296);
	(*&Local_4 + 300)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd04", -731,9888f, 228,1947f, 1150,096f, 0.0f, -61,54124f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[7], Local_4.f_296);
	(*&Local_4 + 300)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart04", -734,0921f, 227,1915f, 1118,09f, 60,75098f, -181,9967f, -91,11782f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[8], Local_4.f_296);
	(*&Local_4 + 300)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "BearStart04", -734,1664f, 227,1496f, 1117,233f, 0.0f, 573,97f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[9], Local_4.f_296);
	(*&Local_4 + 300)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "nBearEnd04", -734,1664f, 227,1496f, 1117,233f, 0.0f, 573,97f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[10], Local_4.f_296);
	(*&Local_4 + 300)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "Preload_SON03_CS02", -721,5546f, 226,9982f, 1144,556f, 0.0f, -85,49197f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 300)[11], Local_4.f_296);
	Local_4.f_352 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 356)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -728.0f, 228,4642f, 1140.0f, 0.0f, -129,9519f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[0], Local_4.f_352);
	(*&Local_4 + 356)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd05_x_x_x", -728.0f, 228,4642f, 1140.0f, 0.0f, -129,9519f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[1], Local_4.f_352);
	(*&Local_4 + 356)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -724,0883f, 227,4963f, 1143,575f, 0.0f, 49,96714f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[2], Local_4.f_352);
	(*&Local_4 + 356)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd05_x_x_x", -724.0f, 227,5678f, 1140.0f, 0.0f, -47,01635f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[3], Local_4.f_352);
	(*&Local_4 + 356)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart05", -755,1562f, 179,2446f, 1238,862f, 0.0f, -107,8726f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[4], Local_4.f_352);
	(*&Local_4 + 356)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart05", -723,8226f, 227,2135f, 1145,574f, 0.0f, -242,0972f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[5], Local_4.f_352);
	(*&Local_4 + 356)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd05", -723,033f, 229,105f, 1140,297f, 0.0f, 145,655f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[6], Local_4.f_352);
	(*&Local_4 + 356)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart05", -734,0921f, 227,1915f, 1118,09f, 60,75098f, -181,9967f, -91,11782f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[7], Local_4.f_352);
	(*&Local_4 + 356)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Preload_SON03_CS02_B_x_x_x", -728.0f, 228,4642f, 1140.0f, 0.0f, -129,9519f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 356)[8], Local_4.f_352);
	Local_4.f_396 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 400)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -91,44238f, 117,9091f, 1349,361f, 0.0f, -176,2248f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 400)[0], Local_4.f_396);
	(*&Local_4 + 400)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -91,44238f, 117,9091f, 1349,361f, 0.0f, -176,2248f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 400)[1], Local_4.f_396);
	(*&Local_4 + 400)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -81,08397f, 117,1083f, 1401,084f, 0.0f, -179,667f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 400)[2], Local_4.f_396);
	(*&Local_4 + 400)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -86,95138f, 117,9387f, 1347,045f, 0.0f, 132,1316f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 400)[3], Local_4.f_396);
	(*&Local_4 + 400)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStartLast", -96.0f, 118,5026f, 1352f, 0.0f, 291,2343f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 400)[4], Local_4.f_396);
	Local_4.f_424 = CREATE_OBJECTSET_IN_LAYOUT("DogScent01aSet", Local_4, 8, 0);
	(*&Local_4 + 428)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_01", -93,45866f, 112,1375f, 1229,118f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 428)[0], Local_4.f_424);
	(*&Local_4 + 428)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_02", -100,1372f, 112,5933f, 1227,509f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 428)[1], Local_4.f_424);
	(*&Local_4 + 428)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_03", -111,1247f, 113,4245f, 1235,707f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 428)[2], Local_4.f_424);
	(*&Local_4 + 428)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_04", -120,6224f, 114,0106f, 1234,439f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 428)[3], Local_4.f_424);
	Local_4.f_448 = CREATE_OBJECTSET_IN_LAYOUT("DogScent01bSet", Local_4, 8, 0);
	(*&Local_4 + 452)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_01", -263,9273f, 119,111f, 1251,867f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 452)[0], Local_4.f_448);
	(*&Local_4 + 452)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_02", -263,4011f, 117,0485f, 1239,138f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 452)[1], Local_4.f_448);
	(*&Local_4 + 452)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_03", -278,8355f, 117,0596f, 1235,704f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 452)[2], Local_4.f_448);
	(*&Local_4 + 452)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_04", -276,4557f, 114,5372f, 1223,599f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 452)[3], Local_4.f_448);
	Local_4.f_472 = CREATE_OBJECTSET_IN_LAYOUT("DogScent01cSet", Local_4, 8, 0);
	(*&Local_4 + 476)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01c_01", -360.0f, 117,5237f, 1222,128f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[0], Local_4.f_472);
	(*&Local_4 + 476)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01c_02", -368,7196f, 118,0737f, 1225,819f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[1], Local_4.f_472);
	(*&Local_4 + 476)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01c_03", -376,9786f, 118,3962f, 1223,749f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[2], Local_4.f_472);
	(*&Local_4 + 476)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01c_04", -381,9464f, 118,5669f, 1225,371f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[3], Local_4.f_472);
	Local_4.f_496 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective01", -376,553f, 118,3048f, 1223,658f, 0.0f, 91,76753f, 0.0f);
	Local_4.f_500 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02", -755,1562f, 179,2446f, 1238,862f, 0.0f, 91,76753f, 0.0f);
	Local_4.f_504 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective03", -720,5239f, 226,9003f, 1144,094f, 0.0f, 290,5295f, 0.0f);
	Local_4.f_508 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_wife01", -109,892f, 119,489f, 1364,27f, 0.0f, -15,65644f, 0.0f);
	Local_4.f_512 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_wife02", -102,166f, 119,489f, 1351,576f, 0.0f, 160,5223f, 0.0f);
	Local_4.f_516 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_uncle01", -82,66039f, 112,2381f, 1243,67f, 0.0f, 47,27546f, 0.0f);
	Local_4.f_520 = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_son01", -729,1036f, 228,1947f, 1150,096f, 0.0f, 15,8499f, 0.0f);
	Local_4.f_524 = CREATE_POINT_IN_LAYOUT(Local_4, "point_dog_face", 8,007397f, -15,84571f, 11,03278f, 0.0f, 0.0f, 0.0f);
	Local_4.f_528 = CREATE_OBJECTSET_IN_LAYOUT("BloodDecalSet", Local_4, 8, 0);
	*(&Local_4 + 532[06]) = { -743,3141f, 174,367f, 1255,984f };
	*(&Local_4 + 532[06] + 12) = { 0,9f, 1.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBlood0", -743,3141f, 174,367f, 1255,984f, 0,9f, 1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_528);
	*(&Local_4 + 532[16]) = { -755,1562f, 179,2446f, 1238,862f };
	*(&Local_4 + 532[16] + 12) = { 0,75f, 1.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBlood1", -755,1562f, 179,2446f, 1238,862f, 0,75f, 1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_528);
	*(&Local_4 + 532[26]) = { -756,3701f, 1225,16f, 1225,16f };
	*(&Local_4 + 532[26] + 12) = { 0,725f, -1.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBlood2", -756,3701f, 1225,16f, 1225,16f, 0,725f, -1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_528);
	*(&Local_4 + 532[36]) = { -766,8682f, 192,0241f, 1199,743f };
	*(&Local_4 + 532[36] + 12) = { 0,8f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBlood3", -766,8682f, 192,0241f, 1199,743f, 0,8f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_528);
	*(&Local_4 + 532[46]) = { -759,8545f, 195,5195f, 1189,808f };
	*(&Local_4 + 532[46] + 12) = { 0,65f, -1.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBlood4", -759,8545f, 195,5195f, 1189,808f, 0,65f, -1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_528);
	*(&Local_4 + 532[56]) = { -751,8903f, 197,2721f, 1177,344f };
	*(&Local_4 + 532[56] + 12) = { 0,725f, -1.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBlood5", -751,8903f, 197,2721f, 1177,344f, 0,725f, -1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_528);
	*(&Local_4 + 532[66]) = { -777,3704f, 212,269f, 1165,883f };
	*(&Local_4 + 532[66] + 12) = { 0,8f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBlood6", -777,3704f, 212,269f, 1165,883f, 0,8f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_528);
	*(&Local_4 + 532[76]) = { -758,6111f, 224,6886f, 1143,619f };
	*(&Local_4 + 532[76] + 12) = { 0,65f, 1.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBlood7", -758,6111f, 224,6886f, 1143,619f, 0,65f, 1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_528);
	*(&Local_4 + 532[86]) = { -734,1664f, 227,1496f, 1117,233f };
	*(&Local_4 + 532[86] + 12) = { 1.0f, 1.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "horseBodyBlood", -734,1664f, 227,1496f, 1117,233f, 1.0f, 1.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_528);
	Local_4.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Uncle_Sit_Ground", "mex_sitGround_tlkPsnt_hrasSol_link", -58,757f, 116,457f, 1390,409f, 0.0f, -187,8268f, 0.0f);
}

struct<64> YD ÛÄlªCD»§ÄB4CoDÄÄcnCD¡
ÄÃXCÞQDÁÄCF7D^Ä£ÆC#G	DÿÄ/(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210) //Position: 0x1A0B2 / 106674
{
	IntToFloat(StackVal)->f_9725->f_37171 = StackVal;
}

void Ä8 $C. 5D¡ÞÄ:kEC/­D÷Ä;$âC1äRDÄ=eèC7á(D3\,z:D ;opath_dog03 p   ðÄ=eãC7ãD3\Ä>õyC;DiÄ>ÆìCBØÀDýYÄ= CEIPD?­Ä;Â®CDÖÐDÄ<CF*DÄ?$C(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, struct<4> Param5, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57) //Position: 0x1A15D / 106845
{
	var uVar8560;
	
	uVar8560 = StackVal;
	StackVal->f_37647 = StackVal;
	Unknown_Function();
	(147 < 6726->f_19824)->f_37821 = 68;
	PatchTrapE();
	((5->f_19513 + 26444)->f_20241)->f_37724 = iLocal_196 * 137;
	return;
	((StackVal - 19607)->f_21032)->f_37440 = StackVal;
	(StackVal ^ (StackVal + 15190)->f_21536)->f_37346 = StackVal;
	return -772,7477f->f_22142;
	StackVal->f_37269 = StackVal;
	StackVal->f_174 = StackVal;
	Unknown_Function();
	PatchTrapC();
	StackVal->f_37187 = StackVal;
	StackVal->f_243 = StackVal;
}

void Function_456() //Position: 0x1A716 / 108310
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

void Function_457(int iParam0) //Position: 0x1A78A / 108426
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_458() //Position: 0x1A7AA / 108458
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

void Function_459() //Position: 0x1A7E7 / 108519
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_460(int iParam0) //Position: 0x1A7FB / 108539
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_55())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_461(int iParam0, int iParam1) //Position: 0x1A830 / 108592
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
			Function_462(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_462(int iParam0) //Position: 0x1A8B2 / 108722
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

void Function_463() //Position: 0x1A900 / 108800
{
	return;
}

void Function_464(var uParam0, bool bParam1) //Position: 0x1A906 / 108806
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
					Function_465(*uParam0, 0);
				}
			}
			else
			{
				*uParam0 = bVar0;
				Function_465(*uParam0, 0);
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
						Function_465(*uParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
					}
					*uParam0 = bVar0;
					Function_465(*uParam0, 0);
				}
			}
		}
	}
	return;
}

void Function_465(var uParam0, int iParam1) //Position: 0x1A9CB / 109003
{
	Function_466(iParam1);
	Global_12976.f_72 = uParam0;
	return;
}

void Function_466(bool bParam0) //Position: 0x1A9DD / 109021
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

bool Function_467(int iParam0) //Position: 0x1AB93 / 109459
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_468(int iParam0) //Position: 0x1ABB1 / 109489
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
			Function_469(iParam0, 1);
			return 1;
		}
	}
	Function_469(iParam0, 0);
	return 0;
}

void Function_469(int iParam0, bool bParam1) //Position: 0x1AC38 / 109624
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

bool Function_470(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1AC5C / 109660
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
		Function_469(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_489(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_488(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_488(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_474(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_46(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_469(iParam2, 0);
														return 0;
													}
													if (Function_46(bVar17, 2))
													{
														Function_473(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_472(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_46(bVar17, 4))
													{
														Function_473(&bVar17);
														strcpy(&Var18, "", 64);
														Function_471(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_220(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_472(StackVal, iParam2, bVar17);
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
	Function_469(iParam2, 0);
	return 0;
}

void Function_471(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1AFF5 / 110581
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

void Function_472(var uParam0, int iParam1, bool bParam2) //Position: 0x1B0E0 / 110816
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
			Function_25(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_25(&bParam2, 2);
			break;
	}
	Function_25(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_473(bool bParam0) //Position: 0x1B156 / 110934
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_25(&iVar0, 1);
	Function_25(&iVar0, 2);
	Function_25(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_474(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1B178 / 110968
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
			return Function_485(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_478(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_485(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_475(iParam0, bVar2);
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
						bVar2 = Function_485(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_475(iParam0, bVar2);
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

var Function_475(int iParam0, bool bParam1) //Position: 0x1B2C2 / 111298
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_46(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_477(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_476(16);
			}
		}
	}
	else if (Function_46(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_477(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_476(256);
			}
		}
	}
	return bParam1;
}

bool Function_476(int iParam0) //Position: 0x1B3F5 / 111605
{
	return 2 | iParam0;
}

int Function_477(int iParam0) //Position: 0x1B3FF / 111615
{
	return 4 | iParam0;
}

int Function_478(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1B409 / 111625
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
				iParam3 = Function_484(iParam0, iParam1, bParam4);
				if (Function_46(iParam3, 4))
				{
					Function_109(&iParam3, 2);
					Function_25(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_476(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_479(iParam0, iParam1, 0, bParam4);
				if (Function_46(iParam3, 4))
				{
					Function_109(&iParam3, 2);
					Function_25(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_476(16);
		}
	}
	return 0;
}

int Function_479(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1B4BB / 111803
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_483(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_482(iVar0, 3, 1, bParam3))
			{
				if (!Function_488(iParam0, 8, 1))
				{
					return Function_481(64, 1024, bParam2);
				}
			}
			return Function_480(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_482(iVar0, 2, 1, bParam3))
			{
				if (!Function_488(iParam0, 32, 1))
				{
					return Function_481(64, 1024, bParam2);
				}
			}
			return Function_480(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_482(iVar0, 1, 1, bParam3))
			{
				if (!Function_488(iParam0, 64, 1))
				{
					return Function_481(64, 1024, bParam2);
				}
			}
			return Function_480(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_482(iVar0, 3, 1, bParam3))
			{
				if (!Function_488(iParam0, 128, 1))
				{
					return Function_481(64, 1024, bParam2);
				}
			}
			return Function_480(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_482(iVar0, 1, 1, bParam3))
			{
				if (!Function_488(iParam0, 1024, 1))
				{
					return Function_481(64, 1024, bParam2);
				}
			}
			return Function_480(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_482(iVar0, 1, 1, bParam3))
			{
				if (!Function_488(iParam0, 1024, 1))
				{
					return Function_481(64, 1024, bParam2);
				}
			}
			return Function_480(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_480(int iParam0, int iParam1, bool bParam2) //Position: 0x1B675 / 112245
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_481(int iParam0, int iParam1, bool bParam2) //Position: 0x1B68A / 112266
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_482(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B69F / 112287
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_483(int iParam0) //Position: 0x1B6BC / 112316
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

int Function_484(var uParam0, int iParam1, bool bParam2) //Position: 0x1B72B / 112427
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_483(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_482(iVar0, 3, 1, bParam2))
			{
				if (!Function_488(uParam0, 8, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000009:
			if (Function_482(iVar0, 3, 1, bParam2))
			{
				if (!Function_488(uParam0, 8, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x0000006E:
			if (Function_482(iVar0, 2, 1, bParam2))
			{
				if (!Function_488(uParam0, 16, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x0000005B:
			if (Function_482(iVar0, 2, 1, bParam2))
			{
				if (!Function_488(uParam0, 32, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000031:
			if (Function_482(iVar0, 1, 1, bParam2))
			{
				if (!Function_488(uParam0, 64, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000007:
			if (Function_482(iVar0, 3, 1, bParam2))
			{
				if (!Function_488(uParam0, 128, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000008:
			if (Function_482(iVar0, 2, 1, bParam2))
			{
				if (!Function_488(uParam0, 256, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000014:
			if (Function_482(iVar0, 1, 1, bParam2))
			{
				if (!Function_488(uParam0, 512, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000018:
			if (Function_482(iVar0, 1, 1, bParam2))
			{
				if (!Function_488(uParam0, 512, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000057:
			if (Function_482(iVar0, 1, 1, bParam2))
			{
				if (!Function_488(uParam0, 1024, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000058:
			if (Function_482(iVar0, 1, 1, bParam2))
			{
				if (!Function_488(uParam0, 1024, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_485(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1B946 / 112966
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
						return Function_484(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_488(iParam0, 2, 1))
					{
						return Function_477(8);
					}
					return Function_476(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_488(iParam0, 4, 1))
					{
						return Function_477(16);
					}
					return Function_476(16);
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
							return Function_479(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_488(iParam0, 2, 1))
						{
							return Function_477(128);
						}
						return Function_476(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_488(iParam0, 4, 1))
						{
							return Function_477(256);
						}
						return Function_476(256);
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
						return Function_479(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_488(iParam0, 2, 1))
					{
						return Function_477(8);
					}
					return Function_476(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_488(iParam0, 4, 1))
					{
						return Function_477(16);
					}
					return Function_476(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_487(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_488(iParam0, 2, 1))
					{
						return Function_477(8);
					}
					return Function_476(8);
				}
				if (!Function_488(iParam0, 4, 1))
				{
					return Function_477(16);
				}
				return Function_476(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_479(iParam0, uParam1, 1, bParam5);
							if (Function_46(iParam4, 4))
							{
								Function_109(&iParam4, 2);
								Function_25(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_486(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_476(128);
							}
							if (!Function_488(iParam0, 2, 1))
							{
								return Function_477(8);
							}
							return Function_476(8);
						}
						if (iParam4 == 2)
						{
							if (Function_486(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_476(256);
							}
							if (!Function_488(iParam0, 4, 1))
							{
								return Function_477(16);
							}
							return Function_476(16);
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

bool Function_486(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1BC05 / 113669
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

int Function_487(int iParam0, var uParam1, bool bParam2) //Position: 0x1BCBE / 113854
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_483(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_482(iVar0, 2, 1, bParam2))
			{
				if (!Function_488(iParam0, 16, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x0000005B:
			if (Function_482(iVar0, 2, 1, bParam2))
			{
				if (!Function_488(iParam0, 32, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000057:
			if (Function_482(iVar0, 1, 1, bParam2))
			{
				if (!Function_488(iParam0, 1024, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		case 0x00000058:
			if (Function_482(iVar0, 1, 1, bParam2))
			{
				if (!Function_488(iParam0, 1024, 1))
				{
					return Function_477(64);
				}
			}
			return Function_476(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_488(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BDD2 / 114130
{
	if (bParam2)
	{
		if (!Function_46(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_46(iParam0->f_40, bParam1);
}

int Function_489(bool bParam0) //Position: 0x1BDFA / 114170
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_86());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_86());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_490(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1BE2B / 114219
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_33())
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

