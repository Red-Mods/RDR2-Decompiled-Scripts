//Decompiled with MagicRDR v1.0
//Function Count : 634
//Statics Count : 1189
//Natives Count : 794
//Parameters Count : 7

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_762 = 1;
	iLocal_1175 = 0;
	iLocal_1176 = 0;
	UNK_0x26011C78(Function_633(2));
	Local_736 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_1182 };
	iLocal_743 = 99;
	iLocal_744 = 6;
	iLocal_745 = 1000;
	while (Function_271())
	{
		Function_229();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x54 / 84
{
	Function_228(1, 5, 17, "p_gen_crateTnt01x");
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_1116, 1);
	if (IS_ACTOR_VALID((*&Local_4 + 608)[02]))
	{
		ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[02], false);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 608)[12]))
	{
		ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[12], false);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 608)[22]))
	{
		ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[22], false);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 608)[32]))
	{
		ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[32], false);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 608)[42]))
	{
		ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[42], false);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 608)[52]))
	{
		ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[52], false);
	}
	UNK_0xAC72E757(0);
	SET_AUTO_CONVERSATION_LOOK(bLocal_765, 1);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	if (IS_LAYOUTREF_VALID(Local_1118))
	{
		Function_227();
	}
	if (IS_LAYOUTREF_VALID(Local_1139))
	{
		Function_226();
	}
	if (IS_LAYOUTREF_VALID(Local_1149))
	{
		Function_225();
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_223();
	Function_222();
	Function_221();
	Function_220();
	Function_219();
	Function_218();
	STREAMING_UNLOAD_BOUNDS();
	STREAMING_UNLOAD_SCENE();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_765, 1.0f);
	if (IS_OBJECT_VALID(bLocal_1094))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1094)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_1094));
		}
		TRAIN_DESTROY_TRAIN(bLocal_1093);
	}
	if (SQUAD_IS_VALID(Local_4.f_604))
	{
		Function_217(Local_4.f_604);
	}
	if (SQUAD_IS_VALID(Local_4.f_664))
	{
		Function_215(&Local_4 + 664, 1, 0);
	}
	SET_WAGON_TO_WAGON_JACK_ENABLE(0, 1);
	if (IS_OBJECT_VALID(bLocal_1073))
	{
		Function_214(bLocal_1073);
	}
	if (SQUAD_IS_VALID(bLocal_1009))
	{
		Function_217(bLocal_1009);
	}
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	DESTROY_OBJECTSET(bLocal_1002);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_765);
	DECOR_REMOVE_ALL(bLocal_765);
	Function_212(1);
	Function_211(bLocal_735);
	Function_211(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_210();
	Function_209();
	Function_205(&bLocal_774);
	Function_205(&bLocal_898);
	Function_195();
	if (IS_ITERATOR_VALID(bLocal_908))
	{
		DESTROY_ITERATOR(bLocal_908);
	}
	if (bLocal_752)
	{
		DECOR_SET_BOOL(bLocal_765, "bJustFinished03", true);
		Function_171(bLocal_753, 0, 0, 0, 0, 1, 1, 1);
		Function_27(Local_736, 1, 1, 1, 0);
		Function_24(2, 0, 0, 1, 1);
	}
	else if (bLocal_753)
	{
		Function_24(2, 1, 0, 1, 1);
		Function_171(bLocal_753, 0, 0, 1, 1, 1, 1, 1);
		Function_20(Local_736);
	}
	else
	{
		Function_24(2, 1, 0, 1, 1);
		Function_171(bLocal_753, 0, 0, 1, 1, 1, 1, 1);
		Function_2(Local_736);
	}
	RELEASE_LAYOUT_REF(bLocal_735);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x2C4 / 708
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x2E5 / 741
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x300 / 768
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x321 / 801
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x337 / 823
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

void Function_7(int iParam0) //Position: 0x3D3 / 979
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x3F4 / 1012
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

void Function_9() //Position: 0x43A / 1082
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x453 / 1107
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x4A6 / 1190
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

struct<16> Function_12(int iParam0) //Position: 0x5CA / 1482
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x5EF / 1519
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x60F / 1551
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x626 / 1574
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x641 / 1601
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x888 / 2184
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x8B1 / 2225
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

bool Function_19(int iParam0) //Position: 0x8D5 / 2261
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x8EA / 2282
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x908 / 2312
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

struct<16> Function_22(int iParam0) //Position: 0x9AE / 2478
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x9D8 / 2520
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

int Function_24(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC2E / 3118
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

void Function_25(bool bParam0) //Position: 0xF4C / 3916
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

void Function_26(bool bParam0) //Position: 0xF78 / 3960
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_27(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xF8D / 3981
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
		Function_166(&(Global_3422[iVar240]));
		Function_165(4194304);
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

void Function_28() //Position: 0x107A / 4218
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

int Function_29(int iParam0, bool bParam1) //Position: 0x10AA / 4266
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

int Function_30(int iParam0) //Position: 0x10E7 / 4327
{
	if (!Function_31(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_31(int iParam0) //Position: 0x1101 / 4353
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_32(int iParam0, bool bParam1) //Position: 0x1117 / 4375
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

void Function_33(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x140E / 5134
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

void Function_34(char* cParam0, int iParam1) //Position: 0x147A / 5242
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

bool Function_35(bool bParam0, var uParam1, int iParam2) //Position: 0x14B1 / 5297
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

bool Function_36(var uParam0, int iParam1) //Position: 0x1529 / 5417
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_37(char* cParam0) //Position: 0x153C / 5436
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

int Function_38(int iParam0) //Position: 0x15DD / 5597
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

void Function_39(bool bParam0, bool bParam1) //Position: 0x161A / 5658
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_40(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x162D / 5677
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

void Function_41(int iParam0, int iParam1) //Position: 0x183F / 6207
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x1879 / 6265
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

bool Function_43() //Position: 0x18BB / 6331
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_44(bool bParam0) //Position: 0x18C4 / 6340
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

void Function_45() //Position: 0x1915 / 6421
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

void Function_46() //Position: 0x1948 / 6472
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

void Function_47() //Position: 0x1A4E / 6734
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

void Function_48() //Position: 0x1A81 / 6785
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

void Function_49() //Position: 0x1C0F / 7183
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

void Function_50() //Position: 0x1DC3 / 7619
{
	Function_51(&Global_28260, 1, 0);
	return;
}

void Function_51(int iParam0, bool bParam1, var uParam2) //Position: 0x1DD1 / 7633
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
	void fVar13;
	
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

var Function_52() //Position: 0x1FC2 / 8130
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_53() //Position: 0x1FD7 / 8151
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

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x2072 / 8306
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

void Function_55(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x230D / 8973
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

bool Function_56() //Position: 0x293A / 10554
{
	int iVar0;
	
	return iVar0;
}

var Function_57(int iParam0) //Position: 0x2942 / 10562
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_58(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2953 / 10579
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

struct<32> Function_59(char* cParam0, char* cParam1) //Position: 0x2A48 / 10824
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_60(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A61 / 10849
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_62(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_61(Function_62(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_61(int iParam0, int iParam1) //Position: 0x2AC6 / 10950
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_62(int iParam0, bool bParam1) //Position: 0x2AD8 / 10968
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_63(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2AEA / 10986
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

int Function_64(int iParam0) //Position: 0x2C1A / 11290
{
	return Global_35278[iParam020].f_48;
}

float Function_65(int iParam0) //Position: 0x2C29 / 11305
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_66(int iParam0) //Position: 0x2C62 / 11362
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_67(int iParam0) //Position: 0x2C9F / 11423
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

int Function_68(int iParam0, bool bParam1, bool bParam2) //Position: 0x2E39 / 11833
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

int Function_69(bool bParam0) //Position: 0x3053 / 12371
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_70() //Position: 0x3094 / 12436
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

struct<8> Function_71() //Position: 0x311D / 12573
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

struct<8> Function_72() //Position: 0x31B4 / 12724
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

void Function_73() //Position: 0x3233 / 12851
{
	Function_74(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_54(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_74(int iParam0, bool bParam1, int iParam2) //Position: 0x3259 / 12889
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

void Function_75() //Position: 0x3463 / 13411
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

bool Function_76(vector3 vParam0) //Position: 0x3504 / 13572
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_77(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x351C / 13596
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

vector3 Function_78() //Position: 0x3603 / 13827
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_79(bool bParam0, bool bParam1) //Position: 0x360C / 13836
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_80(int iParam0) //Position: 0x361B / 13851
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_81(bool bParam0, bool bParam1) //Position: 0x3631 / 13873
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

float Function_82(vector3 vParam0, vector3 vParam3) //Position: 0x36F8 / 14072
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_83(bool bParam0) //Position: 0x3715 / 14101
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

bool Function_84(int iParam0) //Position: 0x3BF1 / 15345
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_85(bool bParam0) //Position: 0x3C07 / 15367
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_86(bool bParam0) //Position: 0x3C26 / 15398
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_87(int iParam0, bool bParam1) //Position: 0x3C40 / 15424
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

int Function_88(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3CA7 / 15527
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

void Function_89() //Position: 0x3EC7 / 16071
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

int Function_90(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3F47 / 16199
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

void Function_91(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x42D6 / 17110
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

int Function_92(int iParam0) //Position: 0x4359 / 17241
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_93() //Position: 0x4373 / 17267
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

void Function_94(int iParam0, int iParam1, bool bParam2) //Position: 0x43A1 / 17313
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

void Function_95(int iParam0, bool bParam1, bool bParam2) //Position: 0x463D / 17981
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

void Function_96(int iParam0, int iParam1) //Position: 0x4800 / 18432
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

int Function_97(int iParam0, char* cParam1, bool bParam2) //Position: 0x4A5E / 19038
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

int Function_98() //Position: 0x4BE3 / 19427
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

void Function_99() //Position: 0x4C82 / 19586
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

void Function_100(int iParam0) //Position: 0x4D31 / 19761
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

var Function_101(int iParam0) //Position: 0x4D8F / 19855
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

int Function_102(int iParam0, bool bParam1) //Position: 0x4E1E / 19998
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

var Function_103(int iParam0, int iParam1) //Position: 0x4FBB / 20411
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

void Function_104() //Position: 0x4FFC / 20476
{
	Function_106(3, 0.0f);
	Function_105(3, 10000.0f);
	return;
}

int Function_105(int iParam0, int iParam1) //Position: 0x5012 / 20498
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_106(int iParam0, int iParam1) //Position: 0x5052 / 20562
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_107(int iParam0) //Position: 0x5092 / 20626
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_108(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x50A1 / 20641
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

int Function_109(int iParam0) //Position: 0x5269 / 21097
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

var Function_110() //Position: 0x52FE / 21246
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_111(int iParam0) //Position: 0x5323 / 21283
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

void Function_112(int iParam0, bool bParam1, bool bParam2) //Position: 0x57DE / 22494
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

var Function_113(int iParam0) //Position: 0x5AF3 / 23283
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

int Function_114(int iParam0, bool bParam1, int iParam2) //Position: 0x5B96 / 23446
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

int Function_115(int iParam0, bool bParam1) //Position: 0x5D91 / 23953
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

int Function_116(bool bParam0, bool bParam1) //Position: 0x5F2D / 24365
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

void Function_117(int iParam0, var uParam1, bool bParam2) //Position: 0x5FF8 / 24568
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
			Function_163(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_160(Global_30640[0]);
			Function_160(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_158(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_160(Global_30668[0]);
			Function_149(0);
			Function_147(2, 1);
			Function_147(0, 1);
			Function_147(1, 1);
			break;
		
		case 0x00000003:
			Function_160(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_160(Global_30668[0]);
			Function_160(Global_30640[0]);
			Function_145(0, 1);
			Function_145(15, 1);
			Function_145(9, 1);
			Function_145(12, 1);
			Function_145(16, 1);
			Function_147(3, 1);
			break;
		
		case 0x00000005:
			Function_160(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_158(21, bParam2, 4);
			Function_160(Global_30668[0]);
			Function_147(39, 1);
			break;
		
		case 0x00000007:
			Function_160(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_160(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_144(4))
					{
						Function_134(4, 0, 0, 1);
					}
				}
			}
			Function_160(Global_30640[0]);
			Function_160(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_160(Global_30640[0]);
			Function_160(Global_30668[2]);
			Function_133(&(Global_29008[Global_30668[2]]), 32768);
			Function_132(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_158(9, bParam2, 4);
			Function_160(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_160(Global_30640[0]);
			Function_160(Global_30658[0]);
			Function_133(&(Global_29008[Global_30658[0]]), 32768);
			Function_132(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_160(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_160(Global_30640[0]);
			Function_160(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_160(Global_30640[1]);
			Function_160(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_160(Global_30679[0]);
			Function_160(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_160(Global_30658[5]);
			Function_160(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_158(21, bParam2, 4);
			Function_160(Global_30640[4]);
			Function_160(Global_30658[4]);
			Function_131(&Global_76847, 0x2000000);
			Function_131(&Global_76847, 0x4000000);
			Function_131(&Global_76847, 4096);
			Function_131(&Global_76847, 8);
			Function_131(&Global_76847, 8388608);
			Function_131(&Global_76847, 524288);
			Function_131(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_160(Global_30640[4]);
			Function_160(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_132(&(Global_29008[Global_30640[4]]), 256);
			Function_160(Global_30640[4]);
			Function_160(Global_30658[0]);
			Function_133(&(Global_29008[Global_30658[0]]), 32768);
			Function_132(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_160(Global_30640[0]);
			Function_160(Global_30640[5]);
			Function_158(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_160(Global_30658[3]);
			Function_133(&(Global_29008[Global_30658[3]]), 32768);
			Function_132(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_158(9, bParam2, 4);
			Function_160(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_133(&(Global_29008[Global_30679[1]]), 32768);
			Function_160(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_158(12, bParam2, 4);
			Function_132(&(Global_29008[Global_30679[1]]), 256);
			Function_160(Global_30668[3]);
			Function_160(Global_30693[0]);
			Function_160(Global_30685[0]);
			Function_149(4);
			Function_145(13, 1);
			Function_145(1, 1);
			Function_145(18, 1);
			Function_147(34, 1);
			Function_147(44, 1);
			Function_147(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_158(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_160(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_160(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_160(Global_30693[0]);
			Function_160(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_160(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_160(Global_30685[0]);
			Function_160(Global_30693[0]);
			Function_160(Global_30693[1]);
			Function_160(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_158(23, bParam2, 3);
			Function_145(23, 1);
			Function_160(Global_30685[0]);
			Function_160(Global_30685[2]);
			Function_133(&(Global_29008[Global_30685[2]]), 32768);
			Function_132(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_158(19, bParam2, 4);
			Function_160(Global_30685[0]);
			Function_160(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_158(24, bParam2, 3);
			Function_145(24, 1);
			Function_160(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_160(Global_30685[0]);
			Function_160(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_160(Global_30693[12]);
			Function_160(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_160(Global_30693[12]);
			Function_160(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_158(25, bParam2, 10);
			Function_160(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_160(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_160(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_158(13, bParam2, 4);
			Function_160(Global_30693[2]);
			Function_160(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_144(8))
				{
					Function_134(8, 0, 0, 1);
				}
			}
			Function_160(Global_30685[0]);
			Function_149(9);
			Function_145(7, 1);
			Function_145(11, 1);
			Function_145(3, 1);
			Function_145(20, 1);
			Function_147(57, 1);
			break;
		
		case 0x0000002A:
			Function_158(2, bParam2, 4);
			Function_160(Global_30717[0]);
			Function_160(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_160(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_160(Global_30717[0]);
			Function_160(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_160(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_160(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_160(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_158(17, bParam2, 4);
			Function_160(Global_30723[0]);
			Function_160(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_129(15))
				{
					Function_124(15, 0, 1);
				}
			}
			Function_132(&(Global_29008[Global_30717[1]]), 256);
			Function_149(11);
			Function_160(Global_30717[1]);
			Function_160(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_160(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_160(Global_30717[1]);
			Function_160(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_160(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_160(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_160(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_160(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_160(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_160(Global_30717[1]);
			Function_118(11);
			Function_149(12);
			Global_16537[1121].f_40 = 0;
			Function_147(56, 1);
			if (!bParam2)
			{
				if (!Function_144(9))
				{
					Function_134(9, 0, 0, 0);
				}
				if (!Function_144(10))
				{
					Function_134(10, 0, 0, 1);
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

void Function_118(int iParam0) //Position: 0x68E8 / 26856
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

void Function_119(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6A57 / 27223
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

bool Function_120(vector3 vParam0, vector3 vParam3) //Position: 0x6B5D / 27485
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_121(int iParam0) //Position: 0x6B8A / 27530
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

var Function_122(vector3 vParam0) //Position: 0x6BE1 / 27617
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

void Function_123(bool bParam0, bool bParam1) //Position: 0x6C2F / 27695
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

void Function_124(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6C83 / 27779
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
		if (!Function_144(bParam0))
		{
			Function_134(bParam0, 1, 0, 0);
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

void Function_125() //Position: 0x6E21 / 28193
{
	return;
}

bool Function_126(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6E27 / 28199
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

void Function_127(bool bParam0, int iParam1) //Position: 0x6ECB / 28363
{
	if (!Function_128(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_128(int iParam0) //Position: 0x6F20 / 28448
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_129(int iParam0) //Position: 0x6F36 / 28470
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

bool Function_130(int iParam0, int iParam1) //Position: 0x6F87 / 28551
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

void Function_131(var uParam0, int iParam1) //Position: 0x6FB4 / 28596
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_132(var uParam0, int iParam1) //Position: 0x6FC3 / 28611
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_133(var uParam0, int iParam1) //Position: 0x6FDA / 28634
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_134(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6FE9 / 28649
{
	struct<8> Var0;
	
	if (!Function_128(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_143(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_144(bParam0))
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
		Function_137(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_136() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_136() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_135(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_36(Global_76846, 2))
		{
			Function_33(Global_34573, 2, 1, 0);
		}
	}
}

void Function_135(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7133 / 28979
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

bool Function_136() //Position: 0x717E / 29054
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_137(bool bParam0) //Position: 0x71AB / 29099
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
			if (Function_141(bParam0, Function_142(bVar24)))
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
			if (Function_141(bParam0, Function_142(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_140(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_139(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_138(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_138(int iParam0) //Position: 0x735B / 29531
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

void Function_139(bool bParam0, bool bParam1) //Position: 0x73B2 / 29618
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

var Function_140(int iParam0) //Position: 0x73D7 / 29655
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

bool Function_141(bool bParam0, int iParam1) //Position: 0x742D / 29741
{
	int iVar0;
	
	if (!Function_128(bParam0))
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

int Function_142(bool bParam0) //Position: 0x748C / 29836
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_143(int iParam0) //Position: 0x7498 / 29848
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_144(int iParam0) //Position: 0x74B4 / 29876
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

int Function_145(int iParam0, int iParam1) //Position: 0x7506 / 29958
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_146(iParam0, iParam1);
	Function_33(Global_34573, 1, 4, 1);
	return 1;
}

int Function_146(int iParam0, int iParam1) //Position: 0x7579 / 30073
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_147(int iParam0, int iParam1) //Position: 0x75D5 / 30165
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_148(iParam0, iParam1);
	Function_33(Global_34573, 1, 4, 1);
	return 1;
}

int Function_148(int iParam0, int iParam1) //Position: 0x7646 / 30278
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_149(int iParam0) //Position: 0x76A0 / 30368
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_80(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_157(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_157(Global_16537[iParam021].f_72, 0);
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
			Function_135("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_119(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_134(14, 1, 0, 0);
				Function_150(14, 1, 0, 0, 0);
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
			Function_135("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_88(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_87(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_150(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x794C / 31052
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
	if (!Function_143(3) || uParam3)
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
			Function_135(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_141(bParam0, bParam1))
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
		Function_137(bParam0);
		if (StackVal && !Function_156(((((!Function_136() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_156((((Function_136() || Global_3380) || Global_3392) || Global_3384), 1))
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
			Function_152();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_151(3, bParam1);
				break;
			
			case 0x00000005:
				Function_151(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_151(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_151(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_151(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_151(2, SHIFT_LEFT(bParam1, 18));
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

void Function_151(int iParam0, bool bParam1) //Position: 0x7BDB / 31707
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

void Function_152() //Position: 0x7C3A / 31802
{
	if (Function_128(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_155(Global_28180);
			Global_28180.f_8 = Function_153(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_155(Global_28180);
			Global_28180.f_8 = Function_153(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_153(int iParam0, int iParam1) //Position: 0x7CB5 / 31925
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
					if (Function_154(13) && iVar16)
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
					if (Function_154(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_154(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_154(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_154(23) && iVar17)
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
					if (Function_154(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_154(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_154(27) && iVar18)
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
					if (Function_154(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_154(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_154(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_154(49) && iVar15)
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
					if (Function_154(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_29(6, 0) && Function_154(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_154(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_29(9, 0) && Function_154(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_154(15) && iVar19)
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

int Function_154(int iParam0) //Position: 0x88A8 / 34984
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_155(int iParam0) //Position: 0x88BD / 35005
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

bool Function_156(bool bParam0, bool bParam1) //Position: 0x890C / 35084
{
	return (bParam0 && bParam1) == 0;
}

void Function_157(bool bParam0, bool bParam1) //Position: 0x8919 / 35097
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

void Function_158(bool bParam0, bool bParam1, int iParam2) //Position: 0x896A / 35178
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_159(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_163(bParam0, 0, 0);
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

bool Function_159(int iParam0, int iParam1) //Position: 0x89D8 / 35288
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_160(int iParam0) //Position: 0x89EB / 35307
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_162(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_133(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_88(473, 1, 0, 0);
		iVar0 = Function_161(iParam0);
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

var Function_161(int iParam0) //Position: 0x8AEA / 35562
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

bool Function_162(var uParam0, int iParam1) //Position: 0x8B42 / 35650
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_163(bool bParam0, bool bParam1, int iParam2) //Position: 0x8B5E / 35678
{
	if (!Function_164(bParam0))
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

bool Function_164(int iParam0) //Position: 0x8BB5 / 35765
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_165(bool bParam0) //Position: 0x8BC7 / 35783
{
	bool bVar0;
	
	if (Function_156(bParam0, 1) && Function_156(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_166(int iParam0) //Position: 0x8BFB / 35835
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
			Function_167(4, 0, 0);
		}
	}
	return;
}

void Function_167(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8C62 / 35938
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
		Function_168(Global_16524, bVar0, 1);
	}
	return;
}

void Function_168(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8D3F / 36159
{
	int iVar0;
	
	Function_170(bParam0);
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
	Function_169();
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

void Function_169() //Position: 0x8EB8 / 36536
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_170(bool bParam0) //Position: 0x8EC4 / 36548
{
	switch (bParam0)
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

void Function_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x8F0A / 36618
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_194());
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
	Function_193();
	CLEAR_PRINTED_OBJECTIVE();
	Function_192();
	Function_190(0);
	Function_189();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_188();
	Function_222();
	Function_193();
	ENABLE_JOURNAL_REPLAY(1);
	Function_187(1);
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
		Function_186(Global_34573);
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
	Function_185(Global_28178);
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
	Function_184(1178687);
	Function_212(33039);
	Function_183(0x218003f);
	Function_182(4194560);
	Function_181();
	Function_180();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_177(0, 1, 1);
	}
	else
	{
		Function_177(0, 1, 1);
	}
	Function_176();
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
	Function_172();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_39(&Global_12976 + 36 + 20, 16);
}

void Function_172() //Position: 0x90FB / 37115
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
		if (Function_175() > 3)
		{
			bVar0 *= 2;
		}
		Function_173(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_173(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x9151 / 37201
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_174((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_174(bool bParam0) //Position: 0x9197 / 37271
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_175() //Position: 0x91BC / 37308
{
	return Global_12976.f_156;
}

void Function_176() //Position: 0x91C7 / 37319
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_132(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_177(int iParam0, bool bParam1, int iParam2) //Position: 0x91F1 / 37361
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
			Function_133(&(Global_29008[Global_29006]), 131072);
			Function_132(&(Global_29008[Global_29006]), 2097152);
			Function_178(Global_29006);
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
				if (Function_162(&(Global_29008[iVar0]), 4) || Function_162(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_132(&(Global_29008[iVar0]), 2097155);
					Function_133(&(Global_29008[iVar0]), 262144);
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

void Function_178(int iParam0) //Position: 0x92FC / 37628
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_179())
			{
				return;
			}
		}
		if (!Function_162(&(Global_29008[iParam0]), 2048))
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

bool Function_179() //Position: 0x937B / 37755
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_162(&(Global_29008[iVar0]), 4) || Function_162(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_180() //Position: 0x93D8 / 37848
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

void Function_181() //Position: 0x93FE / 37886
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

void Function_182(int iParam0) //Position: 0x9424 / 37924
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_183(int iParam0) //Position: 0x9441 / 37953
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_184(bool bParam0) //Position: 0x9454 / 37972
{
	if (Function_156(bParam0, 1) && !Function_156(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_185(int iParam0) //Position: 0x9481 / 38017
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

void Function_186(bool bParam0) //Position: 0x9548 / 38216
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

void Function_187(bool bParam0) //Position: 0x95C4 / 38340
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

void Function_188() //Position: 0x9638 / 38456
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

void Function_189() //Position: 0x9679 / 38521
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_190(int iParam0) //Position: 0x968D / 38541
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_191())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_191() //Position: 0x96C9 / 38601
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

void Function_192() //Position: 0x96EE / 38638
{
	Global_8722 = 0.0f;
	return;
}

void Function_193() //Position: 0x96F8 / 38648
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

int Function_194() //Position: 0x9723 / 38691
{
	bool bVar0;
	
	bVar0 = Function_52();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_195() //Position: 0x973D / 38717
{
	Function_196();
	return;
}

void Function_196() //Position: 0x9746 / 38726
{
	Function_205(&Local_4 + 4);
	Function_205(&Local_4 + 104);
	Function_205(&Local_4 + 216);
	Function_205(&Local_4 + 328);
	Function_205(&Local_4 + 404);
	Function_197(&Global_6654, &Global_7716, 0, 0);
	Function_197(&Global_6654, &Global_7716, 1, 0);
	Function_197(&Global_6654, &Global_7716, 3, 0);
	Function_197(&Global_6654, &Global_7716, 2, 0);
	Function_197(&Global_6654, &Global_7716, 5, 0);
	Function_197(&Global_6654, &Global_7716, 4, 0);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_197(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x97B8 / 38840
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_204(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_204(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_204(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_203(uParam0[iVar02], 8);
	}
	Function_203(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_202(StackVal);
	if (bParam3)
	{
		Function_198(uParam0, uParam1, iParam2, 0);
	}
}

void Function_198(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9852 / 38994
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_201(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_200(Global_29007), Function_199(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_204(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_204(uParam0[iParam22], 1) && !bParam3)
	{
		Function_201(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_200(Global_29007), Function_199(Global_29007), false, 0);
	}
}

int Function_199(int iParam0) //Position: 0x99A1 / 39329
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

int Function_200(int iParam0) //Position: 0x99CC / 39372
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

void Function_201(var uParam0, int iParam1) //Position: 0x9A00 / 39424
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_202(bool bParam0) //Position: 0x9A0F / 39439
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

void Function_203(var uParam0, int iParam1) //Position: 0x9AA9 / 39593
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_204(var uParam0, int iParam1) //Position: 0x9AC0 / 39616
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_205(bool bParam0) //Position: 0x9ADC / 39644
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_206(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_206(var uParam0, int iParam1) //Position: 0x9B02 / 39682
{
	if (Function_208(uParam0[iParam13], 4))
	{
		if (Function_208(uParam0[iParam13], 1))
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
			Function_207(uParam0[iParam13], 1);
			Function_207(uParam0[iParam13], 2);
			Function_207(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_207(var uParam0, int iParam1) //Position: 0x9C30 / 39984
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_208(int iParam0, int iParam1) //Position: 0x9C4A / 40010
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_209() //Position: 0x9C67 / 40039
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

void Function_210() //Position: 0x9D81 / 40321
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_211(bool bParam0) //Position: 0x9D8A / 40330
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

void Function_212(int iParam0) //Position: 0x9DE2 / 40418
{
	Function_213(&Global_28842, iParam0);
	return;
}

void Function_213(var uParam0, int iParam1) //Position: 0x9DF0 / 40432
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_214(bool bParam0) //Position: 0x9E0B / 40459
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

void Function_215(var uParam0, bool bParam1, bool bParam2) //Position: 0x9E95 / 40597
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
				if (!Function_216(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_216(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9F11 / 40721
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_217(bool bParam0) //Position: 0x9F2B / 40747
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

void Function_218() //Position: 0x9F6F / 40815
{
	Function_205(&Local_4 + 404);
	return;
}

void Function_219() //Position: 0x9F7D / 40829
{
	Function_205(&Local_4 + 328);
	return;
}

void Function_220() //Position: 0x9F8B / 40843
{
	Function_205(&Local_4 + 216);
	return;
}

void Function_221() //Position: 0x9F98 / 40856
{
	Function_205(&Local_4 + 104);
	return;
}

void Function_222() //Position: 0x9FA5 / 40869
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

void Function_223() //Position: 0x9FE6 / 40934
{
	if (IS_OBJECTSET_VALID(bLocal_1106))
	{
		Function_224(bLocal_1106);
		DESTROY_OBJECTSET(bLocal_1106);
	}
	if (IS_OBJECT_VALID(bLocal_1099))
	{
		DESTROY_OBJECT(bLocal_1099);
	}
	if (IS_OBJECT_VALID(bLocal_1100))
	{
		DESTROY_OBJECT(bLocal_1100);
	}
	if (IS_OBJECT_VALID(bLocal_1101))
	{
		DESTROY_OBJECT(bLocal_1101);
	}
	if (IS_OBJECT_VALID(bLocal_1102))
	{
		DESTROY_OBJECT(bLocal_1102);
	}
	if (IS_OBJECT_VALID(bLocal_1103))
	{
		DESTROY_OBJECT(bLocal_1103);
	}
	if (IS_OBJECT_VALID(bLocal_1104))
	{
		DESTROY_OBJECT(bLocal_1104);
	}
	if (IS_OBJECT_VALID(bLocal_1105))
	{
		DESTROY_OBJECT(bLocal_1105);
	}
	return;
}

void Function_224(bool bParam0) //Position: 0xA06A / 41066
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

void Function_225() //Position: 0xA0AF / 41135
{
	Function_205(&Local_1149 + 4);
	RELEASE_LAYOUT_REF(Local_1149);
	return;
}

void Function_226() //Position: 0xA0C3 / 41155
{
	Function_205(&Local_1139 + 4);
	RELEASE_LAYOUT_REF(Local_1139);
	return;
}

void Function_227() //Position: 0xA0D7 / 41175
{
	Function_205(&Local_1118 + 4);
	RELEASE_LAYOUT_REF(Local_1118);
	return;
}

void Function_228(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xA0EB / 41195
{
	ADD_NEW_EVENT_RESPONSE(iParam0, iParam1, iParam2, iParam3);
	if (iParam2 == 17)
	{
		ADD_NEW_EVENT_RESPONSE(iParam0, iParam1, 27, iParam3);
	}
}

void Function_229() //Position: 0xA112 / 41234
{
	var uVar0[9];
	int iVar10;
	
	if (Function_270())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - start";
		uVar0[4] = "Stage 03 - discovered";
		uVar0[5] = "Stage 04 - before roadblock";
		uVar0[6] = "Stage 05 - after roadblock";
		uVar0[7] = "Last Stage";
		uVar0[8] = "DEBUG";
		iVar10 = Function_256(&uLocal_755, &uVar0, &Local_736 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_255(&iVar10, &iLocal_743, &iLocal_744, &iLocal_745))
		{
			Function_248();
			Function_247();
		}
		if (iVar10 == 0)
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_765, *(&Local_4 + 1112[36]), 1, true, 1);
			Function_248();
			Function_247();
			Function_246(&bLocal_752, 8);
		}
		else if (iVar10 == 1)
		{
			Function_248();
			Function_247();
			Function_241(iLocal_743);
			Function_237(StackVal, StackVal, 5, &bLocal_753, &iLocal_743, Function_244(iLocal_743), Function_241(iLocal_743), 0);
		}
		else if (iVar10 == 2)
		{
			Function_248();
			Function_247();
			Function_232(&bLocal_754, 4);
		}
		else if (iVar10 == 3)
		{
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_230(&iLocal_909);
			iLocal_743 = 1;
			iLocal_744 = 0;
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iLocal_745 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_230(&iLocal_909);
			iLocal_743 = 2;
			iLocal_744 = 0;
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iLocal_745 = 1000;
		}
		else if (iVar10 == 5)
		{
			iLocal_1028 = 0;
			iLocal_1028 = 0;
			while (iLocal_1028 <= 6)
			{
				Function_197(&Global_6654, &Global_7716, iLocal_1028, 0);
				iLocal_1028++;
			}
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_230(&iLocal_909);
			iLocal_743 = 3;
			iLocal_744 = 0;
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iLocal_745 = 1000;
		}
		else if (iVar10 == 6)
		{
			iLocal_1028 = 0;
			iLocal_1028 = 0;
			while (iLocal_1028 <= 6)
			{
				Function_197(&Global_6654, &Global_7716, iLocal_1028, 0);
				iLocal_1028++;
			}
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_230(&iLocal_909);
			iLocal_743 = 4;
			iLocal_744 = 0;
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iLocal_745 = 1000;
		}
		else if (iVar10 == 7)
		{
			iLocal_1028 = 0;
			iLocal_1028 = 0;
			while (iLocal_1028 <= 6)
			{
				Function_197(&Global_6654, &Global_7716, iLocal_1028, 0);
				iLocal_1028++;
			}
			Function_248();
			Function_247();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_230(&iLocal_909);
			iLocal_743 = 101;
			iLocal_744 = 0;
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iLocal_745 = 1000;
		}
		else if (iVar10 == 8)
		{
			Function_248();
			Function_247();
		}
	}
	return;
}

void Function_230(int iParam0) //Position: 0xA420 / 42016
{
	Function_231(iParam0, 0.0f);
	return;
}

void Function_231(int iParam0, float fParam1) //Position: 0xA42C / 42028
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_79(iParam0, 1);
	Function_39(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_232(bool bParam0, int iParam1) //Position: 0xA44D / 42061
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_233(iParam1);
	*bParam0 = 1;
	return;
}

void Function_233(int iParam0) //Position: 0xA470 / 42096
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

void Function_234() //Position: 0xA567 / 42343
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_235(int iParam0) //Position: 0xA573 / 42355
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

void Function_236(bool bParam0) //Position: 0xA5A9 / 42409
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_237(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA613 / 42515
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

void Function_238(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA650 / 42576
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

var Function_239(int iParam0) //Position: 0xA6D3 / 42707
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

var Function_240(vector3 vParam0, bool bParam3) //Position: 0xAB81 / 43905
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

vector3 Function_241(int iParam0) //Position: 0xABEC / 44012
{
	Function_242(iParam0 + 1);
	return StackVal, StackVal, Function_242(iParam0 + 1);
}

vector3 Function_242(int iParam0) //Position: 0xABF9 / 44025
{
	switch (iParam0)
	{
		case 0x00000001:
			Function_243((*&Local_4 + 1360)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1360)[0]);
			break;
		
		case 0x00000002:
			Function_243((*&Local_4 + 1584)[4]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1584)[4]);
			break;
		
		case 0x00000003:
			Function_243((*&Local_4 + 1724)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1724)[0]);
			break;
		
		case 0x00000004:
			Function_243((*&Local_4 + 1848)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 1848)[0]);
			break;
		
		default:
			Function_243((*&Local_4 + 2092)[0]);
			return StackVal, StackVal, Function_243((*&Local_4 + 2092)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_243((*&Local_4 + 1360)[0]);
	return StackVal, StackVal, Function_243((*&Local_4 + 1360)[0]);
}

vector3 Function_243(bool bParam0) //Position: 0xACD8 / 44248
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

int Function_244(int iParam0) //Position: 0xACFF / 44287
{
	return Function_245(iParam0 + 1);
}

int Function_245(int iParam0) //Position: 0xAD0C / 44300
{
	switch (iParam0)
	{
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 1360)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1584)[4]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1724)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 1848)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 2092)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 1360)[0]);
}

void Function_246(bool bParam0, int iParam1) //Position: 0xADEB / 44523
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_233(iParam1);
	*bParam0 = 1;
	return;
}

void Function_247() //Position: 0xAE0E / 44558
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_248() //Position: 0xAE23 / 44579
{
	Function_250();
	Function_249(10, 3);
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0xAE32 / 44594
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

void Function_250() //Position: 0xAF69 / 44905
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
	SET_ACTOR_INVULNERABILITY(Function_52(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_52());
	UI_POP("nDebugMenu");
	return;
}

void Function_251() //Position: 0xAFB4 / 44980
{
	Function_252(25, 2);
	return;
}

void Function_252(int iParam0, int iParam1) //Position: 0xAFC0 / 44992
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

void Function_253(int iParam0, int iParam1) //Position: 0xB1BE / 45502
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

bool Function_254() //Position: 0xB2F5 / 45813
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
				if (!Function_156(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_255(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB35C / 45916
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

var Function_256(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB402 / 46082
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

void Function_257(int iParam0, int iParam1, int iParam2) //Position: 0xB4C9 / 46281
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

bool Function_258(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB525 / 46373
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

void Function_259(bool bParam0) //Position: 0xB6AB / 46763
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

void Function_260(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB6E5 / 46821
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

var Function_261(int iParam0, var uParam1, int iParam2) //Position: 0xB793 / 46995
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_262(var uParam0, int iParam1, int iParam2) //Position: 0xB7B7 / 47031
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

int Function_263() //Position: 0xB853 / 47187
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

void Function_264(var uParam0, int iParam1, int iParam2) //Position: 0xB88F / 47247
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

int Function_265(bool bParam0) //Position: 0xB927 / 47399
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_52()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_156(*bParam0, 0x40000000))
		{
			Function_79(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_156(*bParam0, 0x40000000))
		{
			Function_79(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_39(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_52()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_156(*bParam0, 0x20000000))
		{
			Function_79(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_156(*bParam0, 0x20000000))
		{
			Function_79(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_39(bParam0, 0x20000000);
	return 0;
}

var Function_266(var uParam0, int iParam1) //Position: 0xBA72 / 47730
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

void Function_267(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBBC1 / 48065
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

var Function_268(int iParam0, int iParam1) //Position: 0xBC54 / 48212
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_269(var uParam0, var uParam1) //Position: 0xBC6E / 48238
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

bool Function_270() //Position: 0xBCBC / 48316
{
	return Global_30920;
}

bool Function_271() //Position: 0xBCC5 / 48325
{
	bool bVar0;
	
	if (IS_EXITFLAG_SET())
	{
		Function_241(iLocal_743);
		Function_237(StackVal, StackVal, 4, &bLocal_753, &iLocal_743, Function_244(iLocal_743), Function_241(iLocal_743), 0);
		return 0;
	}
	Function_632(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_736, iLocal_743, iLocal_744, &bLocal_754, &bLocal_752, &bLocal_753);
	if (iLocal_743 == 99 && iLocal_743 == 100)
	{
		if (!IS_ACTOR_ALIVE(GET_PLAYER_ACTOR(0)))
		{
			Function_241(iLocal_743);
			Function_237(StackVal, StackVal, 1, &bLocal_753, &iLocal_743, Function_244(iLocal_743), Function_241(iLocal_743), 0);
			return 1;
		}
		if (Function_631(2048))
		{
			Function_241(iLocal_743);
			Function_237(StackVal, StackVal, 3, &bLocal_753, &iLocal_743, Function_244(iLocal_743), Function_241(iLocal_743), 0);
			return 1;
		}
		if (!IS_ACTOR_ALIVE(bLocal_765))
		{
		}
		else
		{
			bVar0 = GET_LAST_ATTACKER(bLocal_765);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (bVar0 == Global_34573)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_630();
					}
					CLEAR_LAST_HIT(bLocal_765);
				}
				else
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_629();
					}
					CLEAR_LAST_HIT(bLocal_765);
				}
			}
		}
		if (Function_610(&Local_962, &uLocal_922, &uLocal_997, bLocal_908, uLocal_921))
		{
			if (Function_608(&uLocal_997))
			{
				Function_241(iLocal_743);
				Function_237(StackVal, StackVal, 5, &bLocal_753, &iLocal_743, Function_244(iLocal_743), Function_241(iLocal_743), 0);
				return 1;
			}
		}
	}
	switch (iLocal_743)
	{
		case 0x00000063:
			Function_574();
			break;
		
		case 0x00000001:
			Function_551();
			break;
		
		case 0x00000002:
			Function_509();
			break;
		
		case 0x00000003:
			Function_486();
			break;
		
		case 0x00000004:
			Function_340();
			break;
		
		case 0x00000065:
			Function_274();
			break;
		
		case 0x00000064:
			if (Function_273(&bLocal_753))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_272(&iLocal_743, &iLocal_744, &iLocal_745))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_752)
	{
		Function_246(&bLocal_752, 8);
		Function_1();
		return 0;
	}
	if (bLocal_753 && iLocal_743 == 100)
	{
		Function_241(iLocal_743);
		Function_237(StackVal, StackVal, 5, &bLocal_753, &iLocal_743, Function_244(iLocal_743), Function_241(iLocal_743), 0);
	}
	if (bLocal_754)
	{
		Function_232(&bLocal_754, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_272(var uParam0, var uParam1, int iParam2) //Position: 0xBE9F / 48799
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

bool Function_273(int iParam0) //Position: 0xBEDF / 48863
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_274() //Position: 0xBEF2 / 48882
{
	switch (iLocal_744)
	{
		case 0x00000000:
			Function_336(0);
			SET_ACTOR_HEALTH(bLocal_765, GET_ACTOR_MAX_HEALTH(bLocal_765));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_767[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_ACTOR_HEALTH(bLocal_765, GET_ACTOR_MAX_HEALTH(bLocal_765));
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, GET_PLAYER_ACTOR(0), *(&Local_4 + 1872[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_765, *(&Local_4 + 1872[26]), 1, true, 1);
				TASK_STAND_STILL(bLocal_765, -1.0f, 0, 0);
				ACTOR_START_FORCE_HOLSTER(bLocal_765, 0, 0);
				bLocal_1095 = DROP_ACCESSORY_ENUM(bLocal_765, 0);
				DESTROY_OBJECT(bLocal_1095);
			}
			bLocal_766 = Function_335(StackVal, StackVal, *(&Local_4 + 1872[06]), 0, 1, 1);
			if (!Function_334(bLocal_766))
			{
				Function_333(&Local_736);
			}
			Function_230(&iLocal_909);
			iLocal_744 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_334(bLocal_766) || bLocal_766 != 4294967295))
			{
				Function_230(&iLocal_909);
				iLocal_744 = 2;
			}
			break;
		
		case 0x00000002:
			Function_242(iLocal_743);
			Function_327(StackVal, StackVal, Function_242(iLocal_743), iLocal_743, Global_30628[1], Function_245(iLocal_743), 4);
			if (IS_ACTOR_VALID((*&Local_4 + 684)[32]))
			{
				DESTROY_ACTOR((*&Local_4 + 684)[32]);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 684)[22]))
			{
				DESTROY_ACTOR((*&Local_4 + 684)[22]);
			}
			DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
			Function_325(&iLocal_1117, 0, 0, 4294967295, 4294967295);
			Function_160(Global_30658[5]);
			Function_230(&iLocal_909);
			iLocal_744 = 3;
			break;
		
		case 0x00000003:
			if (Function_275("$/cutscene/MERCHANT03_CS03/MERCHANT03_CS03", &iLocal_745, &Local_736, &iLocal_743, 57068, 57022, 55462, 52580, 52320, 52313, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_230(&iLocal_1042);
				Function_230(&iLocal_1036);
				Function_230(&iLocal_909);
				iLocal_744 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				bLocal_752 = true;
			}
			break;
	}
	return;
}

bool Function_275(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xC11C / 49436
{
	if (!bParam15)
	{
		Function_288(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_287(iParam2) || iParam2->f_24 < 1))
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
				Function_230(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_286())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_285(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_230(iParam1 + 4);
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
					Function_285(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_282(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_282(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_285(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_230(iParam1 + 4);
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
						Function_279(1.0f);
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
						Function_277();
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
					Function_276(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_287(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_276(bool bParam0) //Position: 0xC730 / 50992
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

void Function_277() //Position: 0xC7D5 / 51157
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_278();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_278() //Position: 0xC81A / 51226
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_279(bool bParam0) //Position: 0xC82C / 51244
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

void Function_280(bool bParam0, bool bParam1) //Position: 0xC849 / 51273
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

bool Function_281(bool bParam0) //Position: 0xC8C9 / 51401
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

float Function_282(int iParam0) //Position: 0xC8F8 / 51448
{
	if (Function_284(iParam0))
	{
		if (Function_283(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_283(int iParam0) //Position: 0xC9C0 / 51648
{
	return Function_156(*iParam0, 2);
}

bool Function_284(int iParam0) //Position: 0xC9CD / 51661
{
	return Function_156(*iParam0, 1);
}

int Function_285(bool bParam0) //Position: 0xC9DA / 51674
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

bool Function_286() //Position: 0xCA92 / 51858
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

bool Function_287(int iParam0) //Position: 0xCACC / 51916
{
	return iParam0->f_20;
}

void Function_288(var uParam0, int iParam1) //Position: 0xCAD6 / 51926
{
	Function_289(uParam0, iParam1, 0);
	return;
}

void Function_289(var uParam0, bool bParam1, bool bParam2) //Position: 0xCAE4 / 51940
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
			Function_290(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_290(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_290(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xCC30 / 52272
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

int Function_291() //Position: 0xCC59 / 52313
{
	return 1;
}

int Function_292() //Position: 0xCC60 / 52320
{
	Function_293(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_293(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xCC74 / 52340
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
	Function_276(bParam9);
}

int Function_294() //Position: 0xCD64 / 52580
{
	bool bVar0;
	
	if (iLocal_743 == 2)
	{
		Function_308(bLocal_765, (*&Local_4 + 1584)[0], 1, 1, 1);
		if (!IS_ACTORSET_VALID(Local_4.f_740))
		{
			Local_4.f_740 = CREATE_ACTORSET_IN_LAYOUT(bLocal_735, "StageCoach_S2set", 0);
			(*&Local_4 + 728)[02] = Function_304(bLocal_735, "Stagecoach_2", 1202, 976, -3142,842f, 43,22709f, 3770,54f, 0.0f, 160.0f, 0.0f, 0, 977, 976, 976, 4);
			ADD_ACTORSET_MEMBER(Local_4.f_740, (*&Local_4 + 728)[02]);
			SET_ACTOR_INVULNERABILITY((*&Local_4 + 728)[02], true);
			bLocal_1016 = (*&Local_4 + 728)[02];
			Function_297(&(Local_962[117]), bLocal_1016, "wagon", 1, 0x5f5e100, 1);
			Function_296(bLocal_1016);
			Function_295(bLocal_1016);
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[02], false);
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[12], false);
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[22], false);
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[32], false);
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[42], false);
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[52], false);
			ENABLE_VEHICLE_SEAT((*&Local_4 + 728)[02], false, 0);
			ENABLE_VEHICLE_SEAT((*&Local_4 + 728)[02], true, 0);
			bLocal_1017 = GET_DRAFT_ACTOR(false, bLocal_1016);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_1017, false);
			SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1017, 0);
			SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1017, false);
			bLocal_1018 = GET_DRAFT_ACTOR(true, bLocal_1016);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_1018, false);
			SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1018, 0);
			SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1018, false);
			START_VEHICLE((*&Local_4 + 728)[02]);
		}
		iLocal_1107 = 0;
		iLocal_1108 = 2;
		bLocal_1007 = Local_4.f_2852;
		GET_PATH_POINT(bLocal_1007, false, &vLocal_1030);
		TASK_CLEAR(bLocal_765);
		bLocal_1027 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 2284)[5], 2.0f, 2, 1, 0);
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_1016, 0, 2, 0);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_765, bLocal_1027);
		TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_765, 2, false);
		ENABLE_VEHICLE_SEAT(bLocal_1016, true, 1);
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1016)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_1016, 325, 0, 2, 0);
		}
		START_VEHICLE(bLocal_1016);
		Function_308(Global_34573, (*&Local_4 + 1584)[3], 1, 1, 0);
		SIMULATE_PLAYER_INPUT_GAIT(0, 2, 2.0f, 1);
	}
	else if (iLocal_743 == 101)
	{
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Local_4 + 1872[46]), -36,88176f, 1, true, 1);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
		vLocal_1030 = { -4325,354f, 22,863f, 2735,137f };
		if (IS_ACTOR_VALID(bLocal_1016))
		{
			TELEPORT_ACTOR_WITH_HEADING(bLocal_1016, vLocal_1030, 180.0f, 1, true, 1);
		}
		else
		{
			LOG_ERROR("coach was NOT valid");
			bLocal_1016 = Function_304(StackVal, StackVal, bLocal_735, "Stagecoach_5", 1202, 976, vLocal_1030, 0.0f, 180.0f, 0.0f, 1, 976, 976, 976, 4);
		}
		if (!IS_ACTOR_RIDING(bLocal_765))
		{
			SET_ACTOR_IN_VEHICLE(bLocal_765, bLocal_1016, false);
		}
		vLocal_1030 = { -4345,464f, 25,872f, 2750,18f };
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_VEHICLE_LEAVE(false);
		TASK_GO_TO_COORD(false, &vLocal_1030, true);
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("regions_layout")))
		{
			TASK_WANDER_IN_VOLUME(false, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "gtrp_cueva"), -1f);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_765, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "gtrp_cueva"), 1, true);
		}
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_765, bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
	}
	return 1;
}

void Function_295(bool bParam0) //Position: 0xD0FB / 53499
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("IGNORE_VEHICLE_DRAFTS -- Invalid vehicle");
		return;
	}
	bVar1 = false;
	while (bVar1 <= GET_NUM_DRAFTED_ACTORS(bParam0))
	{
		bVar0 = GET_DRAFT_ACTOR(bVar1, bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			AI_IGNORE_ACTOR(bVar0);
		}
		bVar1++;
	}
	return;
}

void Function_296(bool bParam0) //Position: 0xD166 / 53606
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

int Function_297(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xD1D8 / 53720
{
	if (!Function_303(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_302(uParam0, bParam2))
	{
		return 0;
	}
	Function_301(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_298(uParam0, iParam4, iParam5);
	return 1;
}

void Function_298(var uParam0, int iParam1, int iParam2) //Position: 0xD214 / 53780
{
	if (iParam1 != 100000000)
	{
		Function_300(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_299(uParam0, iParam2);
	}
	return;
}

void Function_299(int iParam0, bool bParam1) //Position: 0xD237 / 53815
{
	iParam0->f_40 = 0;
	Function_300(iParam0, 2, bParam1);
	Function_300(iParam0, 4, bParam1);
	Function_300(iParam0, 8, bParam1);
	Function_300(iParam0, 16, bParam1);
	Function_300(iParam0, 32, bParam1);
	Function_300(iParam0, 64, bParam1);
	Function_300(iParam0, 128, bParam1);
	Function_300(iParam0, 256, bParam1);
	Function_300(iParam0, 512, bParam1);
	Function_300(iParam0, 1024, bParam1);
	return;
}

void Function_300(int iParam0, int iParam1, bool bParam2) //Position: 0xD29D / 53917
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

void Function_301(var uParam0, int iParam1) //Position: 0xD2D9 / 53977
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_302(int iParam0, bool bParam1) //Position: 0xD2E5 / 53989
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

bool Function_303(var uParam0, bool bParam1) //Position: 0xD36E / 54126
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

bool Function_304(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xD4FA / 54522
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
			if (Function_307(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_306(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_305(bVar16, &iVar1))
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

bool Function_305(int iParam0, int iParam1) //Position: 0xD72E / 55086
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

int Function_306(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xD760 / 55136
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_307(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD778 / 55160
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

void Function_308(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xD79F / 55199
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

int Function_309() //Position: 0xD8A6 / 55462
{
	bool bVar0;
	
	if (iLocal_743 == 2)
	{
		if (!DECOR_CHECK_EXIST(bLocal_735, "thirdshotdone"))
		{
			bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_ALIVE(bVar0) && !DECOR_CHECK_EXIST(bVar0, "hidthirdshot"))
				{
					TASK_CLEAR(bVar0);
					TELEPORT_ACTOR(bVar0, &Local_4 + 1236[46], 1, 1, 1);
					DECOR_SET_BOOL(bVar0, "hidthirdshot", true);
				}
			}
			bVar0 = Function_310(0, 1, 0, 0, 0, 0, 1, 0);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_ALIVE(bVar0) && !DECOR_CHECK_EXIST(bVar0, "hidthirdshot"))
				{
					TASK_CLEAR(bVar0);
					TELEPORT_ACTOR(bVar0, &Local_4 + 1236[46], 1, 1, 1);
					DECOR_SET_BOOL(bVar0, "hidthirdshot", true);
				}
			}
			DECOR_SET_BOOL(bLocal_735, "thirdshotdone", true);
		}
	}
	else if (iLocal_743 == 101)
	{
		if (IS_ACTOR_VALID(bLocal_1016) && !DECOR_CHECK_EXIST(bLocal_735, "hitwagonlaststage"))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_1016);
			if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, bLocal_1016)))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(GET_DRAFT_ACTOR(false, bLocal_1016));
			}
			if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, bLocal_1016)))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(GET_DRAFT_ACTOR(true, bLocal_1016));
			}
			DECOR_SET_BOOL(bLocal_735, "hitwagonlaststage", true);
		}
	}
	return 1;
}

bool Function_310(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0xDA20 / 55840
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
		Function_316(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_315())
		{
			return "";
		}
	}
	if (!Function_313())
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
		Function_243(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_243(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_243(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_243(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_312(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_312(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_311(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

void Function_311(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xDD78 / 56696
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

var Function_312(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDDB5 / 56757
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

bool Function_313() //Position: 0xDE50 / 56912
{
	if (Function_314() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_314() //Position: 0xDE66 / 56934
{
	return Global_12976.f_152;
}

bool Function_315() //Position: 0xDE71 / 56945
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_316(var uParam0, bool bParam1, bool bParam2) //Position: 0xDE91 / 56977
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

int Function_317() //Position: 0xDEBE / 57022
{
	switch (iLocal_743)
	{
		case 0x00000065:
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(-4327,496f, 25,184f, 2743,262f, 0, 0);
			return 1;
			break;
	}
	return 1;
}

int Function_318() //Position: 0xDEEC / 57068
{
	float fVar0;
	
	Function_321(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol", 2, Global_34574, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	Function_319(StackVal, StackVal, Global_6289, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_319(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0xDF47 / 57159
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = uParam6;
	vVar2.y = uParam7;
	vVar2.z = uParam8;
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
				Function_320(bVar1, bParam0);
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

void Function_320(bool bParam0, bool bParam1) //Position: 0xE1B5 / 57781
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

void Function_321(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xE22A / 57898
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
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
				Function_324(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_56(), 2, Function_324(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_323()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_323()));
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
		Function_165(0x4000000);
	}
	if (Function_322(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_165(0x8000000);
	}
}

bool Function_322(int iParam0) //Position: 0xE4D3 / 58579
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_323() //Position: 0xE4EF / 58607
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

vector3 Function_324(bool bParam0) //Position: 0xE56E / 58734
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_325(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xE57F / 58751
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_326(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_326(int iParam0) //Position: 0xE5A3 / 58787
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

void Function_327(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0xEAE0 / 60128
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
	if (iParam3 != Global_34165.f_48 && !Function_332())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_331(0);
	Function_330();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_329(uParam4, iVar0, iVar1);
	Function_328();
}

void Function_328() //Position: 0xEB7D / 60285
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

void Function_329(int iParam0, bool bParam1, bool bParam2) //Position: 0xEBBE / 60350
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

void Function_330() //Position: 0xED24 / 60708
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_331(bool bParam0) //Position: 0xED48 / 60744
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

bool Function_332() //Position: 0xED77 / 60791
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_333(int iParam0) //Position: 0xED92 / 60818
{
	if (!Function_287(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_177(1, 0, 1);
		}
	}
	return;
}

bool Function_334(bool bParam0) //Position: 0xEDAD / 60845
{
	if (!Function_84(bParam0))
	{
		return 1;
	}
	return Function_162(&(Global_29008[bParam0]), 4);
}

bool Function_335(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0xEDC9 / 60873
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

void Function_336(bool bParam0) //Position: 0xEE59 / 61017
{
	Function_337(0, 0x40400000);
	Function_188();
	Function_222();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_337(bool bParam0, float fParam1) //Position: 0xEE8D / 61069
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
	Function_339();
	Function_338();
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

void Function_338() //Position: 0xEF8B / 61323
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_339() //Position: 0xEFBD / 61373
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

void Function_340() //Position: 0xF0BA / 61626
{
	if (iLocal_744 < 3 && iLocal_744 > 105)
	{
		Function_477();
		if (IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 1052)[0]))
		{
			Function_475();
		}
		if (IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 1052)[1]))
		{
			Function_474();
			if (IS_ACTORSET_VALID(Local_4.f_804))
			{
				Function_473(Local_4.f_804);
				DESTROY_ACTORSET(Local_4.f_804);
			}
		}
		if (IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 1052)[2]))
		{
			Function_470();
		}
		if (IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 1052)[3]))
		{
			Function_459();
		}
		if (IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 1052)[4]) && !bLocal_1058)
		{
			Function_455();
			bLocal_1058 = true;
		}
		Function_452();
		Function_450();
		Function_446();
		if (!Function_444(bLocal_1016, bLocal_1007, 5.0f))
		{
			Function_433();
		}
		Function_427();
		Function_419(&iLocal_918, 60.0f, 200.0f, bLocal_765, "Merchant03_obj_return", "Merchant03_too_far", &bLocal_753, 0, 0, 0, 325, 1);
		if (Function_417(Global_34573, (*&Local_4 + 1052)[7], 150.0f))
		{
			Function_243((*&Local_4 + 1052)[7]);
			if (!Function_412(StackVal, StackVal, "$/cutscene/MERCHANT03_CS03/MERCHANT03_CS03", &uLocal_764, Function_243((*&Local_4 + 1052)[7]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1))
			{
			}
		}
	}
	switch (iLocal_744)
	{
		case 0x00000000:
			Function_336(0);
			SET_ACTOR_HEALTH(bLocal_765, GET_ACTOR_MAX_HEALTH(bLocal_765));
			iLocal_1029 = 0;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			if (iLocal_767[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_243((*&Local_4 + 1848)[0]);
				bLocal_766 = Function_335(StackVal, StackVal, Function_243((*&Local_4 + 1848)[0]), 0, 1, 1);
				if (!Function_334(bLocal_766))
				{
					Function_333(&Local_736);
				}
				TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 1848)[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
				TELEPORT_OBJECT_TO_OBJECT(bLocal_765, (*&Local_4 + 1848)[3], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
				bLocal_1095 = DROP_ACCESSORY_ENUM(bLocal_765, 0);
				DESTROY_OBJECT(bLocal_1095);
				Function_230(&iLocal_909);
				iLocal_744 = 1;
			}
			else
			{
				Function_230(&iLocal_909);
				iLocal_744 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_405())
			{
				Function_230(&iLocal_909);
				iLocal_744 = 2;
			}
			break;
		
		case 0x00000002:
			bLocal_1007 = Local_4.f_2856;
			Local_4.f_824 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "StageCoach_S5set", 0);
			(*&Local_4 + 812)[02] = Function_304(Local_4, "Stagecoach_5", 1202, 976, -3768,356f, 7,762192f, 3670,001f, 0,01077439f, -14,68902f, 0,3247071f, 0, 977, 976, 976, 4);
			ADD_ACTORSET_MEMBER(Local_4.f_824, (*&Local_4 + 812)[02]);
			SET_ACTOR_INVULNERABILITY((*&Local_4 + 812)[02], true);
			bLocal_1016 = (*&Local_4 + 812)[02];
			Function_297(&(Local_962[117]), bLocal_1016, "wagon", 1, 0x5f5e100, 1);
			Function_296(bLocal_1016);
			Function_295(bLocal_1016);
			SET_ACTOR_IN_VEHICLE(GET_PLAYER_ACTOR(0), bLocal_1016, true);
			SET_ACTOR_IN_VEHICLE(bLocal_765, bLocal_1016, false);
			ACTOR_START_FORCE_HOLSTER(bLocal_765, 1, 0);
			MEMORY_ALLOW_SHOOTING(bLocal_765, false);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_765, bLocal_1007, 4, 0, 0, 1, false);
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_765, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_765, 2);
			AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_765, 0);
			bLocal_1017 = GET_DRAFT_ACTOR(false, bLocal_1016);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_1017, false);
			SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1017, 0);
			SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1017, false);
			bLocal_1018 = GET_DRAFT_ACTOR(true, bLocal_1016);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_1018, false);
			SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1018, 0);
			SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1018, false);
			ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), 41, 1);
			if (!SQUAD_IS_VALID(bLocal_1009))
			{
				bLocal_1009 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_735, "mountedattackersquad"));
			}
			if (IS_OBJECT_VALID(bLocal_1094))
			{
				Function_404(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2444[16]), *(&Local_4 + 2444[16] + 12), *(&Local_4 + 2444[16]));
			}
			Function_182(47);
			Function_325(&iLocal_1117, 1, 0, 4294967295, 4294967295);
			Function_160(Global_30658[4]);
			Function_230(&iLocal_909);
			iLocal_744 = 6;
			break;
		
		case 0x00000006:
			if (Function_282(&iLocal_909) <= 3.0f)
			{
				AUDIO_SET_PLAYER_MOOD(1, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_230(&iLocal_909);
				iLocal_744 = 104;
			}
			break;
		
		case 0x00000068:
			if (!HUD_IS_FADING())
			{
				if (!Function_136())
				{
				}
				Function_403();
				Function_230(&iLocal_909);
				iLocal_744 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_282(&iLocal_909) <= 5.0f && !Function_136())
			{
				Function_242(iLocal_743);
				Function_327(StackVal, StackVal, Function_242(iLocal_743), iLocal_743, Global_30628[1], Function_245(iLocal_743), 4);
				Function_402("merchant03_obj05", 7,5f, 1, 2, 0, 0, 0);
				bLocal_1058 = false;
				if (IS_ACTOR_VALID((*&Local_4 + 760)[22]) && !Function_401((*&Local_4 + 760)[22]))
				{
					RELEASE_ACTOR((*&Local_4 + 760)[22]);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 760)[22])))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 760)[22]));
					}
				}
				if (!IS_OBJECT_VALID(bLocal_1074))
				{
					bLocal_1074 = CREATE_POINT_IN_LAYOUT(bLocal_735, "chaserabbit02", *(&Local_4 + 2596[56]), *(&Local_4 + 2596[56] + 12));
				}
				if (!IS_OBJECT_VALID(bLocal_1075))
				{
					bLocal_1075 = CREATE_POINT_IN_LAYOUT(bLocal_735, "chaserabbit03", *(&Local_4 + 2596[76]), *(&Local_4 + 2596[76] + 12));
				}
				if (Function_287(&Local_736))
				{
					Function_230(&iLocal_1111);
				}
				Function_230(&iLocal_909);
				Function_230(&iLocal_915);
				Function_230(&iLocal_918);
				iLocal_744 = 8;
			}
			break;
		
		case 0x00000008:
			Function_419(&iLocal_918, 60.0f, 200.0f, bLocal_765, "Merchant03_obj_return", "Merchant03_too_far", &bLocal_753, 0, 0, 0, 325, 1);
			bLocal_1026 = "";
			if (Function_399(bLocal_1009, bLocal_765, 25.0f, 1))
			{
				bLocal_1026 = Function_396(bLocal_765, bLocal_1009);
				Function_325(&iLocal_1117, 29, 0, 4294967295, 4294967295);
			}
			if (IS_ACTOR_VALID(bLocal_1014))
			{
				if (IS_ACTOR_ALIVE(bLocal_1014))
				{
					if (Function_395(bLocal_765, bLocal_1014, 25.0f))
					{
						bLocal_1026 = bLocal_1014;
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_1015))
			{
				if (IS_ACTOR_ALIVE(bLocal_1015))
				{
					if (Function_395(bLocal_765, bLocal_1015, 25.0f))
					{
						bLocal_1026 = bLocal_1015;
					}
				}
			}
			if (!bLocal_1058)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!Function_284(&iLocal_1054))
					{
						Function_394(&iLocal_1054, 13,1f);
					}
					else if (Function_282(&iLocal_1054) < 13.0f)
					{
						if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_765, 1))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_393();
							}
							Function_230(&iLocal_1054);
						}
					}
					if (IS_ACTOR_VALID(bLocal_1026))
					{
						if (IS_ACTOR_ALIVE(bLocal_1026))
						{
							if (GET_VEHICLE(bLocal_1026) == (*&Local_4 + 860)[02])
							{
								Function_325(&iLocal_1117, 26, 0, 4294967295, 4294967295);
							}
							else if (GET_VEHICLE(bLocal_1026) == (*&Local_4 + 892)[02])
							{
								Function_325(&iLocal_1117, 26, 0, 4294967295, 4294967295);
							}
							else if (GET_VEHICLE(bLocal_1026) == (*&Local_4 + 924)[02])
							{
								Function_325(&iLocal_1117, 26, 0, 4294967295, 4294967295);
							}
							Function_378();
						}
						else
						{
							Function_325(&iLocal_1117, 19, 0, 4294967295, 4294967295);
							Function_364();
						}
					}
					else
					{
						Function_325(&iLocal_1117, 19, 0, 4294967295, 4294967295);
						Function_364();
					}
				}
			}
			else if (!IS_ACTOR_ALIVE(bLocal_1015) && !IS_ACTOR_ALIVE(bLocal_1014))
			{
				Function_325(&iLocal_1117, 38, 0, 4294967295, 4294967295);
			}
			else if (IS_ACTOR_ALIVE(bLocal_1015) && !IS_ACTOR_ALIVE(bLocal_1014))
			{
				if (!Function_395(bLocal_765, bLocal_1015, 30.0f))
				{
					Function_325(&iLocal_1117, 38, 0, 4294967295, 4294967295);
				}
				else
				{
					Function_325(&iLocal_1117, 26, 0, 4294967295, 4294967295);
				}
			}
			else if (IS_ACTOR_ALIVE(bLocal_1014) && !IS_ACTOR_ALIVE(bLocal_1015))
			{
				if (!Function_395(bLocal_765, bLocal_1014, 30.0f))
				{
					Function_325(&iLocal_1117, 38, 0, 4294967295, 4294967295);
				}
				else
				{
					Function_325(&iLocal_1117, 26, 0, 4294967295, 4294967295);
				}
			}
			else if (IS_ACTOR_ALIVE(bLocal_1014) && IS_ACTOR_ALIVE(bLocal_1015))
			{
				if (!Function_395(bLocal_765, bLocal_1014, 30.0f) && !Function_395(bLocal_765, bLocal_1014, 30.0f))
				{
					Function_325(&iLocal_1117, 38, 0, 4294967295, 4294967295);
				}
				else
				{
					Function_325(&iLocal_1117, 26, 0, 4294967295, 4294967295);
				}
			}
			Function_363();
			Function_354();
			if ((IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 1052)[8]) && !IS_ACTORSET_VALID(Local_4.f_856)) && !Function_353(bLocal_1009, 1, 1, 1, 1, 1))
			{
				Function_350();
				Function_345((*&Local_4 + 844)[02], 0, 0);
				REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 844)[02]));
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_344();
				}
			}
			if (((IS_ACTOR_IN_VOLUME(bLocal_765, (*&Local_4 + 1052)[7]) || Function_444(bLocal_1016, bLocal_1007, 10.0f)) && IS_ACTOR_INSIDE_VEHICLE(Global_34573)) && GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1016, true) != Global_34573)
			{
				Function_325(&iLocal_1117, 38, 0, 4294967295, 4294967295);
				Function_341();
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				CANCEL_DEADEYE();
				ACTOR_HOLSTER_WEAPON(Global_34573, 1);
				TASK_DRAW_HOLSTER_WEAPON(Global_34573, 0);
				Function_230(&iLocal_909);
				iLocal_744 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_282(&iLocal_909) <= 6,5f)
			{
				Function_230(&iLocal_909);
				iLocal_744 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
				Function_230(&iLocal_909);
				iLocal_743 = 101;
				iLocal_744 = 0;
				iLocal_767[3] = 1;
			}
			break;
	}
	return;
}

void Function_341() //Position: 0xFA3C / 64060
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_arriveCueva_v1_AA", "Merchant03_arriveCueva_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_arriveCueva_v1_AB", "Merchant03_arriveCueva_v1_AB", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_342(int iParam0) //Position: 0xFAE4 / 64228
{
	Function_343(0, Global_34573, iParam0, 0);
	Function_343(1, bLocal_765, iParam0, 0);
	Function_343(2, bLocal_1021, iParam0, 0);
	Function_343(3, bLocal_1022, iParam0, 0);
	Function_343(4, bLocal_1023, iParam0, 0);
	Function_343(5, bLocal_1024, iParam0, 0);
	Function_343(6, bLocal_1025, iParam0, 0);
	Function_343(7, (*&Local_4 + 580)[02], iParam0, 0);
	return;
}

void Function_343(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xFB3F / 64319
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_156(uParam2, Function_142(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_344() //Position: 0xFB64 / 64356
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_stayAlert", "Merchant03_stayAlert", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_345(bool bParam0, int iParam1, int iParam2) //Position: 0xFBB5 / 64437
{
	if (!SQUAD_IS_VALID(bLocal_1008))
	{
		bLocal_1008 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_735, "attackerhorses"));
	}
	if (!SQUAD_IS_VALID(bLocal_1009))
	{
		bLocal_1009 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_735, "mountedattackersquad"));
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_1009, 0);
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_FACTION(bParam0, 19);
		MEMORY_CONSIDER_AS(bParam0, Global_34573, 4);
		MEMORY_CONSIDER_AS(bParam0, bLocal_765, 4);
		MEMORY_CONSIDER_AS_ENEMY(bParam0, Global_34573);
		MEMORY_CONSIDER_AS_ENEMY(bParam0, bLocal_765);
		MEMORY_PREFER_RIDING(bParam0, true);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_ACTOR_FORCE_SPEED(bParam0, 4);
		Function_349(bParam0, Global_34573);
		Function_349(bParam0, bLocal_765);
		SET_ACTOR_VISION_XRAY(bParam0, true);
		SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
		AI_GOAL_LOOK_AT_ACTOR(bParam0, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
		AI_SET_NAV_ALLOW_TWEAK_DESIRED_MOVEMENT(bParam0, 0);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
		GIVE_WEAPON_TO_ACTOR(bParam0, 40, false, 1, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 41, false, 1, 1);
		SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
		}
		HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(bParam0, true);
		HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
		SQUAD_JOIN(bParam0, bLocal_1009);
		Function_348(bParam0);
		Function_348(GET_MOUNT(bParam0));
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			SQUAD_JOIN(GET_MOUNT(bParam0), bLocal_1008);
			SET_ALLOW_JACK(GET_MOUNT(bParam0), 0);
			SET_ACTORS_HORSE(bParam0, GET_MOUNT(bParam0));
			MEMORY_PREFER_RIDING(bParam0, true);
			MEMORY_PREFER_WALKING(bParam0, false);
		}
		if (bParam0 == bLocal_1019 && bParam0 == bLocal_1020)
		{
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 1);
			ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
		}
		Function_346(bParam0, iParam1, iParam2);
		AI_ACTOR_FORCE_SPEED(bParam0, 3);
	}
	return;
}

void Function_346(bool bParam0, int iParam1, bool bParam2) //Position: 0xFD5A / 64858
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	if (!iLocal_743 != 4 || iParam1)
	{
		uVar0 = Local_4.f_2888;
		uVar1 = Local_4.f_2892;
	}
	else
	{
		uVar0 = Local_4.f_2896;
		uVar1 = Local_4.f_2900;
	}
	if (!Function_395(bParam0, bLocal_1016, 50.0f))
	{
		if (!GET_TASK_STATUS(bParam0, 73) != 1)
		{
			if (iLocal_743 != 2 || iLocal_743 != 3)
			{
				TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), Local_4.f_2852, 0.0f, 1, false);
			}
			else
			{
				TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), Local_4.f_2856, 0.0f, 1, false);
			}
		}
	}
	else if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "nfollowing"))
	{
		if (!bParam2)
		{
			fVar2 = (RAND_FLOAT_RANGE(0.0f, 400000.0f) / 100000.0f);
			if (fVar2 < 3.0f)
			{
				if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright") && !iLocal_743 != 4)
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "frontright", true);
					DECOR_SET_BOOL(GET_MOUNT(bParam0), "frontright", true);
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar1, -2.0f, 1, 3.0f);
					iLocal_1110 = 1;
				}
				else
				{
					Function_347(bParam0, iParam1);
				}
			}
			else if (fVar2 < 2.0f)
			{
				if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright") && !iLocal_743 != 4)
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "nbackright", true);
					DECOR_SET_BOOL(GET_MOUNT(bParam0), "nbackright", true);
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar1, 2.0f, 1, 3.0f);
					iLocal_1110 = 1;
				}
				else
				{
					Function_347(bParam0, iParam1);
				}
			}
			else if (fVar2 < 1.0f)
			{
				if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft"))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "backleft", true);
					DECOR_SET_BOOL(GET_MOUNT(bParam0), "backleft", true);
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar0, 2.0f, 1, -3.0f);
					iLocal_1110 = 0;
				}
				else
				{
					Function_347(bParam0, iParam1);
				}
			}
			else if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft"))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft", true);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "nfrontleft", true);
				DECOR_SET_BOOL(GET_MOUNT(bParam0), "nfrontleft", true);
				TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar0, -2.0f, 1, -3.0f);
				iLocal_1110 = 0;
			}
			else
			{
				Function_347(bParam0, iParam1);
			}
		}
		else if (iLocal_1110)
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft"))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft", true);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "backleft", true);
				DECOR_SET_BOOL(GET_MOUNT(bParam0), "backleft", true);
				TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar0, 2.0f, 1, -3.0f);
				iLocal_1110 = 0;
			}
			else if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft"))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft", true);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "nfrontleft", true);
				DECOR_SET_BOOL(GET_MOUNT(bParam0), "frontright", true);
				TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar0, -2.0f, 1, -3.0f);
				iLocal_1110 = 0;
			}
			else
			{
				Function_347(bParam0, iParam1);
			}
		}
		else if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright"))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright", true);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "frontright", true);
			DECOR_SET_BOOL(GET_MOUNT(bParam0), "frontright", true);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar1, -2.0f, 1, 3.0f);
			iLocal_1110 = 1;
		}
		else if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright"))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright", true);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "nbackright", true);
			DECOR_SET_BOOL(GET_MOUNT(bParam0), "nbackright", true);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar1, 2.0f, 1, 3.0f);
			iLocal_1110 = 1;
		}
		else
		{
			Function_347(bParam0, iParam1);
		}
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "nfollowing", true);
	}
	return;
}

void Function_347(bool bParam0, int iParam1) //Position: 0x10245 / 66117
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (!iLocal_743 != 4 || iParam1)
	{
		uVar0 = Local_4.f_2888;
		uVar1 = Local_4.f_2892;
		uVar2 = Local_4.f_2852;
	}
	else
	{
		uVar0 = Local_4.f_2896;
		uVar1 = Local_4.f_2900;
		uVar2 = Local_4.f_2856;
	}
	if ((!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright") && !iLocal_743 != 4) && !iLocal_1110)
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "frontright", true);
		DECOR_SET_BOOL(GET_MOUNT(bParam0), "frontright", true);
		TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar1, -2.0f, 1, 3.0f);
		iLocal_1110 = 1;
	}
	else if ((!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright") && !iLocal_743 != 4) && !iLocal_1110)
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "nbackright", true);
		DECOR_SET_BOOL(GET_MOUNT(bParam0), "nbackright", true);
		TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar1, 2.0f, 1, 3.0f);
		iLocal_1110 = 1;
	}
	else if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft"))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "backleft", true);
		DECOR_SET_BOOL(GET_MOUNT(bParam0), "backleft", true);
		TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar0, 2.0f, 1, -3.0f);
		iLocal_1110 = 0;
	}
	else if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft"))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "nfrontleft", true);
		DECOR_SET_BOOL(GET_MOUNT(bParam0), "nfrontleft", true);
		TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar0, -2.0f, 1, -3.0f);
		iLocal_1110 = 0;
	}
	else
	{
		TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), uVar2, 10.0f, 1, false);
	}
	return;
}

void Function_348(bool bParam0) //Position: 0x1048C / 66700
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

void Function_349(bool bParam0, bool bParam1) //Position: 0x104C0 / 66752
{
	MEMORY_CONSIDER_AS_ENEMY(bParam0, bParam1);
	MEMORY_IDENTIFY(bParam0, bParam1);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 1);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, true);
	return;
}

void Function_350() //Position: 0x104E2 / 66786
{
	Local_4.f_856 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Ambush_S5_02set", 0);
	(*&Local_4 + 844)[02] = Function_351(Local_4, "Ambush_S5_02_1", 402, Function_56(), 981, -4063,194f, 26,5028f, 3128,066f, 0.0f, 172,4992f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_856, (*&Local_4 + 844)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 844)[02], 19);
	return;
}

var Function_351(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x10560 / 66912
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_352(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_352(bParam4))
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

bool Function_352(bool bParam0) //Position: 0x10685 / 67205
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_353(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1069C / 67228
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(bVar2, 3) || IS_ACTOR_CRIPPLED(bVar2, 4))
					{
						bVar1 = false;
					}
				}
				if (bParam2)
				{
					if (IS_ACTOR_HOGTIED(bVar2))
					{
						bVar1 = false;
					}
				}
				if (bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(bVar2, 1.0f))
					{
						bVar1 = false;
					}
				}
				if (bParam4)
				{
					if (UNK_0x7A207FFE(bVar2))
					{
						bVar1 = false;
					}
				}
				if (bParam5)
				{
					if (!IS_ACTOR_RIDING(bVar2) && !IS_ACTOR_RIDING_VEHICLE(bVar2))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_354() //Position: 0x10750 / 67408
{
	if (Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0))
	{
		Function_358(bLocal_1016);
		vLocal_1030 = { StackVal, StackVal, Function_358(bLocal_1016) };
		Function_358(bLocal_1012);
		vLocal_1033 = { StackVal, StackVal, Function_358(bLocal_1012) };
		ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_2856, &vLocal_1030, &vLocal_1033, &fLocal_1077, &fLocal_1078, &uLocal_1079);
		if ((((!IS_ACTOR_RIDING_VEHICLE(Global_34573) && (Function_395(bLocal_1012, bLocal_1016, 30.0f) || IS_ACTOR_IN_VOLUME(bLocal_1014, (*&Local_4 + 1052)[9]))) && !GET_TASK_STATUS(bLocal_1014, 0) != 1) && !DECOR_CHECK_EXIST(bLocal_1014, "leftvehicle")) && IS_ACTOR_RIDING_VEHICLE(bLocal_1014))
		{
			MEMORY_ALLOW_SHOOTING(bLocal_1014, true);
			ACTOR_END_FORCE_HOLSTER(bLocal_1014);
			GET_PATH_POINT(Local_4.f_2900, Function_355(bLocal_1012, Local_4.f_2900), &vLocal_1030);
			bLocal_1027 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &vLocal_1030, 2);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1014, bLocal_1027);
			TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
			if (Function_359(bLocal_1015, 1, 1, 1, 1, 0, 0, 0, 0))
			{
				bLocal_1027 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 5.0f, 0, 0);
				TASK_VEHICLE_LEAVE(false);
				TASK_KILL_CHAR(false, Global_34573);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1015, bLocal_1027);
				TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
			}
		}
		else if (((!IS_ACTOR_RIDING_VEHICLE(Global_34573) && !Function_359(bLocal_1015, 1, 1, 1, 1, 0, 0, 0, 0)) && IS_ACTOR_RIDING_VEHICLE(bLocal_1014)) && !DECOR_CHECK_EXIST(bLocal_1014, "leftvehicle"))
		{
			bLocal_1027 = TASK_SEQUENCE_OPEN();
			if (!GET_TASK_STATUS(bLocal_1014, 0) != 1)
			{
				GET_PATH_POINT(Local_4.f_2900, Function_355(bLocal_1012, Local_4.f_2900), &vLocal_1030);
				TASK_GO_TO_COORD(false, &vLocal_1030, 2);
			}
			TASK_VEHICLE_LEAVE(false);
			TASK_KILL_CHAR(false, Global_34573);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1014, bLocal_1027);
			TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
			TASK_STAND_STILL(bLocal_1012, -1.0f, 0, 0);
			DECOR_SET_BOOL(bLocal_1014, "leftvehicle", true);
		}
		else if ((DECOR_CHECK_EXIST(bLocal_1014, "leftvehicle") && IS_ACTOR_RIDING_VEHICLE(Global_34573)) && !IS_ACTOR_RIDING_VEHICLE(bLocal_1014))
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_1014, bLocal_1012, 0, 3, 0);
			DECOR_REMOVE(bLocal_1014, "leftvehicle");
		}
		else if (((((IS_ACTOR_RIDING_VEHICLE(Global_34573) && fLocal_1077 > fLocal_1078) && GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1012, false) != bLocal_1014) && !DECOR_CHECK_EXIST(bLocal_1014, "leftvehicle")) && !GET_TASK_STATUS(bLocal_1014, 72) != 1) && !GET_TASK_STATUS(bLocal_1014, 73) != 1)
		{
			if (Function_359(bLocal_1015, 1, 1, 1, 1, 0, 0, 0, 0))
			{
				MEMORY_ALLOW_SHOOTING(bLocal_1014, false);
				ACTOR_START_FORCE_HOLSTER(bLocal_1014, 0, 0);
				if (!IS_ACTOR_RIDING_VEHICLE(bLocal_1015))
				{
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_1015, bLocal_1012, 1, 3, 0);
				}
			}
			else
			{
				MEMORY_ALLOW_SHOOTING(bLocal_1014, true);
				ACTOR_END_FORCE_HOLSTER(bLocal_1014);
			}
			TASK_CLEAR(bLocal_1012);
			if (bLocal_1012 == (*&Local_4 + 860)[02])
			{
				if (!DECOR_CHECK_EXIST(bLocal_1014, "transition"))
				{
					TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_1014, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2868, -5.0f, 1, 0);
				}
				else
				{
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1014, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2868, -5.0f, 1, false);
				}
			}
			if (bLocal_1012 != (*&Local_4 + 892)[02] && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 892)[02]), "retasked"))
			{
				if (!DECOR_CHECK_EXIST(bLocal_1014, "transition"))
				{
					TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_1014, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2876, -5.0f, 1, 0);
				}
				else
				{
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1014, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2876, -5.0f, 1, false);
				}
			}
			if (bLocal_1012 != (*&Local_4 + 924)[02] && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 924)[02]), "retasked"))
			{
				if (!DECOR_CHECK_EXIST(bLocal_1014, "transition"))
				{
					TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_1014, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2916, -5.0f, 1, 0);
				}
				else
				{
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1014, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2916, -5.0f, 1, false);
				}
			}
		}
	}
	return;
}

var Function_355(bool bParam0, bool bParam1) //Position: 0x10B39 / 68409
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	bVar0 = Function_357(bParam0, bParam1);
	GET_PATH_POINT(bParam1, bVar0, &vVar1);
	if (Function_356(StackVal, StackVal, bParam0, vVar1) < 0.0f)
	{
		bVar0++;
	}
	if (bVar0 > GET_PATH_NUM_POINTS(bParam1))
	{
		bVar0 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	}
	return bVar0;
}

float Function_356(bool bParam0, vector3 vParam1) //Position: 0x10B7D / 68477
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar6;
	float fVar9;
	
	if (GET_OBJECT_AXIS(bParam0, &uVar3, 2))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
		fVar9 = VDOT(&vVar6, &uVar3);
	}
	return fVar9;
}

int Function_357(var uParam0, bool bParam1) //Position: 0x10BB0 / 68528
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
		Function_324(uParam0);
		bVar6 = VDIST(Function_324(uParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

vector3 Function_358(bool bParam0) //Position: 0x10C04 / 68612
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

bool Function_359(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x10C6E / 68718
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_362(&bVar0, 1);
	}
	if (bParam2)
	{
		Function_362(&bVar0, 2);
	}
	if (bParam3)
	{
		Function_362(&bVar0, 4);
	}
	if (bParam4)
	{
		Function_362(&bVar0, 8);
	}
	if (bParam5)
	{
		Function_362(&bVar0, 1024);
	}
	if (bParam7)
	{
		Function_362(&bVar0, 16);
	}
	if (bParam8)
	{
		Function_362(&bVar0, 32);
	}
	if (bParam6)
	{
		Function_362(&bVar0, 1048576);
	}
	return Function_360(bParam0, bVar0);
}

int Function_360(bool bParam0, int iParam1) //Position: 0x10CDD / 68829
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_361(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_361(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_361(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_361(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_361(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_361(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_361(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_361(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_361(var uParam0, int iParam1) //Position: 0x10DB6 / 69046
{
	return (uParam0 && iParam1) == 0;
}

void Function_362(bool bParam0, bool bParam1) //Position: 0x10DC3 / 69059
{
	Function_79(bParam0, bParam1);
	return;
}

void Function_363() //Position: 0x10DD0 / 69072
{
	if (IS_ACTORSET_VALID(Local_4.f_920))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 892)[02]))
		{
			if (IS_ACTOR_ALIVE(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 892)[02], false)) && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 892)[02]), "retasked"))
			{
				if (IS_ACTOR_IN_VOLUME((*&Local_4 + 892)[02], (*&Local_4 + 1052)[5]))
				{
					if (bLocal_1012 == (*&Local_4 + 892)[02])
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_1014, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2876, -5.0f, 1, 0);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1014, Local_4.f_2876, true, 0, 0, 1, false);
					}
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR((*&Local_4 + 892)[02]), "retasked", true);
				}
				Function_358(bLocal_1016);
				fLocal_1076 = (VDIST(Function_358(bLocal_1016), *(&Local_4 + 2596[16])) / VDIST(*(&Local_4 + 2596[16]), *(&Local_4 + 2596[26])));
				vLocal_1030 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(&Local_4 + 2596[56]), Vector(Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_4 + 2596[56]), *(&Local_4 + 2596[66]), StackVal), StackVal, StackVal) * Vector(fLocal_1076, fLocal_1076, fLocal_1076), StackVal) };
				SET_OBJECT_POSITION(bLocal_1074, vLocal_1030);
			}
		}
	}
	if (IS_ACTORSET_VALID(Local_4.f_952))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 924)[02]))
		{
			if (IS_ACTOR_ALIVE(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 924)[02], false)) && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 924)[02]), "retasked"))
			{
				if (IS_ACTOR_IN_VOLUME((*&Local_4 + 924)[02], (*&Local_4 + 1052)[6]))
				{
					if (bLocal_1012 == (*&Local_4 + 924)[02])
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_1014, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2916, -5.0f, 1, 0);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1014, Local_4.f_2916, true, 0, 0, 1, false);
					}
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR((*&Local_4 + 924)[02]), "retasked", true);
				}
				Function_358(bLocal_1016);
				fLocal_1076 = (VDIST(Function_358(bLocal_1016), *(&Local_4 + 2596[36])) / VDIST(*(&Local_4 + 2596[36]), *(&Local_4 + 2596[46])));
				vLocal_1030 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(&Local_4 + 2596[76]), Vector(Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_4 + 2596[76]), *(&Local_4 + 2596[86]), StackVal), StackVal, StackVal) * Vector(fLocal_1076, fLocal_1076, fLocal_1076), StackVal) };
				SET_OBJECT_POSITION(bLocal_1075, vLocal_1030);
			}
		}
	}
	return;
}

void Function_364() //Position: 0x10FFF / 69631
{
	if (!Function_284(&iLocal_1048))
	{
		Function_377(&iLocal_1048);
	}
	else if (Function_282(&iLocal_1048) < 14.0f)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (iLocal_743 == 3)
			{
				switch (iLocal_1029)
				{
					case 0x00000000:
						Function_376();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000001:
						Function_375();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000002:
						Function_374();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000003:
						Function_373();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000004:
						Function_372();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000005:
						Function_371();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
				}
			}
			else if (iLocal_743 == 4)
			{
				switch (iLocal_1029)
				{
					case 0x00000000:
						Function_370();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000001:
						Function_369();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000002:
						Function_368();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000003:
						Function_367();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000004:
						Function_366();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					
					case 0x00000005:
						Function_365();
						Function_230(&iLocal_1048);
						iLocal_1029++;
						break;
					}
				}
			}
	}
	return;
}

void Function_365() //Position: 0x11187 / 70023
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rbToCueava_banter_v6_AA", "Merchant03_rbToCueava_banter_v6_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rbToCueava_banter_v6_AB", "Merchant03_rbToCueava_banter_v6_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rbToCueava_banter_v6_AC", "Merchant03_rbToCueava_banter_v6_AC", true, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_366() //Position: 0x1129A / 70298
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rbToCueava_banter_v5_AA", "Merchant03_rbToCueava_banter_v5_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rbToCueava_banter_v5_AB", "Merchant03_rbToCueava_banter_v5_AB", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_367() //Position: 0x1135A / 70490
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rbToCueava_banter_v4_AA", "Merchant03_rbToCueava_banter_v4_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rbToCueava_banter_v4_AB", "Merchant03_rbToCueava_banter_v4_AB", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_368() //Position: 0x1141A / 70682
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rbToCueava_banter_v3_AA", "Merchant03_rbToCueava_banter_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rbToCueava_banter_v3_AB", "Merchant03_rbToCueava_banter_v3_AB", true, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_369() //Position: 0x114DA / 70874
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rbToCueava_banter_v2_AA", "Merchant03_rbToCueava_banter_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rbToCueava_banter_v2_AB", "Merchant03_rbToCueava_banter_v2_AB", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_370() //Position: 0x1159A / 71066
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rbToCueava_banter_v1_AA", "Merchant03_rbToCueava_banter_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rbToCueava_banter_v1_AB", "Merchant03_rbToCueava_banter_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rbToCueava_banter_v1_AC", "Merchant03_rbToCueava_banter_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rbToCueava_banter_v1_AD", "Merchant03_rbToCueava_banter_v1_AD", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_371() //Position: 0x11700 / 71424
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_combatBanter_v6_AA", "Merchant03_combatBanter_v6_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_combatBanter_v6_AB", "Merchant03_combatBanter_v6_AB", true, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_372() //Position: 0x117AC / 71596
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_combatBanter_v5_AA", "Merchant03_combatBanter_v5_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_combatBanter_v5_AB", "Merchant03_combatBanter_v5_AB", true, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_373() //Position: 0x11858 / 71768
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_combatBanter_v4_AA", "Merchant03_combatBanter_v4_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_combatBanter_v4_AB", "Merchant03_combatBanter_v4_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_combatBanter_v4_AC", "Merchant03_combatBanter_v4_AC", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_374() //Position: 0x1194D / 72013
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_combatBanter_v3_AA", "Merchant03_combatBanter_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_combatBanter_v3_AB", "Merchant03_combatBanter_v3_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_combatBanter_v3_AC", "Merchant03_combatBanter_v3_AC", true, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_375() //Position: 0x11A42 / 72258
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_combatBanter_v2_AA", "Merchant03_combatBanter_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_combatBanter_v2_AB", "Merchant03_combatBanter_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_combatBanter_v2_AC", "Merchant03_combatBanter_v2_AC", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_376() //Position: 0x11B37 / 72503
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_combatBanter_v1_AA", "Merchant03_combatBanter_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_combatBanter_v1_AB", "Merchant03_combatBanter_v1_AB", true, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_377(int iParam0) //Position: 0x11BE3 / 72675
{
	if (!Function_284(iParam0))
	{
		Function_231(iParam0, 0.0f);
	}
	return;
}

void Function_378() //Position: 0x11BF8 / 72696
{
	bool bVar0;
	
	if (!Function_284(&iLocal_1048))
	{
		Function_377(&iLocal_1048);
	}
	else if (Function_282(&iLocal_1048) < 13.0f)
	{
		if (!bLocal_1060)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (IS_ACTOR_VALID(bLocal_1026))
				{
					if (IS_ACTOR_ALIVE(bLocal_1026))
					{
						if (Function_392())
						{
							bVar0 = GET_ACTOR_ENUM(bLocal_1026);
							if (bVar0 == 402)
							{
								if (IS_ACTOR_INSIDE_VEHICLE(bLocal_1026))
								{
									bLocal_1025 = bLocal_1026;
									Function_391();
									Function_230(&iLocal_1048);
								}
								else if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_1026))
								{
									bLocal_1025 = bLocal_1026;
									Function_390();
									Function_230(&iLocal_1048);
								}
							}
							else if (bVar0 == 401)
							{
								if (IS_ACTOR_INSIDE_VEHICLE(bLocal_1026))
								{
									bLocal_1023 = bLocal_1026;
									Function_389();
									Function_230(&iLocal_1048);
								}
								else if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_1026))
								{
									bLocal_1023 = bLocal_1026;
									Function_388();
									Function_230(&iLocal_1048);
								}
							}
							else if (bVar0 == 400)
							{
								if (IS_ACTOR_INSIDE_VEHICLE(bLocal_1026))
								{
									if (Function_392())
									{
										bLocal_1024 = bLocal_1026;
										Function_387();
										Function_230(&iLocal_1048);
									}
									else
									{
										bLocal_1024 = bLocal_1026;
										Function_386();
										Function_230(&iLocal_1048);
									}
								}
								else if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_1026))
								{
									bLocal_1024 = bLocal_1026;
									Function_385();
									Function_230(&iLocal_1048);
								}
							}
							else if (bVar0 == 398)
							{
								if (IS_ACTOR_INSIDE_VEHICLE(bLocal_1026))
								{
									bLocal_1022 = bLocal_1026;
									Function_384();
									Function_230(&iLocal_1048);
								}
								else if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_1026))
								{
									bLocal_1022 = bLocal_1026;
									Function_383();
									Function_230(&iLocal_1048);
								}
							}
							else if (bVar0 == 397)
							{
								if (IS_ACTOR_INSIDE_VEHICLE(bLocal_1026))
								{
									bLocal_1021 = bLocal_1026;
									Function_382();
									Function_230(&iLocal_1048);
								}
								else if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_1026))
								{
									bLocal_1021 = bLocal_1026;
									Function_381();
									Function_230(&iLocal_1048);
								}
							}
						}
						else
						{
							if (Function_392())
							{
								Function_380();
							}
							else
							{
								Function_379();
							}
							Function_230(&iLocal_1048);
						}
					}
				}
			}
		}
	}
	return;
}

void Function_379() //Position: 0x11DB1 / 73137
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_spotMoreAttackers", "Merchant03_spotMoreAttackers", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_380() //Position: 0x11E12 / 73234
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_WestShouts", "Merchant03_WestShouts", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_381() //Position: 0x11E65 / 73317
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Merchant03_enemyTaunts1", "Merchant03_enemyTaunts1", false, 1, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_382() //Position: 0x11EBC / 73404
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Merchant03_enemyDriverTaunts1", "Merchant03_enemyDriverTaunts1", false, 1, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_383() //Position: 0x11F1F / 73503
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Merchant03_enemyTaunts2", "Merchant03_enemyTaunts2", false, 1, 1, 0, 1);
		Function_342(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384() //Position: 0x11F77 / 73591
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Merchant03_enemyDriverTaunts2", "Merchant03_enemyDriverTaunts2", false, 1, 1, 0, 1);
		Function_342(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_385() //Position: 0x11FDB / 73691
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Merchant03_enemyTaunts4", "Merchant03_enemyTaunts4", false, 1, 1, 0, 1);
		Function_342(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_386() //Position: 0x12033 / 73779
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Merchant03_gunnerTaunts1", "Merchant03_gunnerTaunts1", false, 1, 1, 0, 1);
		Function_342(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_387() //Position: 0x1208D / 73869
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Merchant03_enemyDriverTaunts3", "Merchant03_enemyDriverTaunts3", false, 1, 1, 0, 1);
		Function_342(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_388() //Position: 0x120F1 / 73969
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Merchant03_enemyTaunts3", "Merchant03_enemyTaunts3", false, 1, 1, 0, 1);
		Function_342(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_389() //Position: 0x12149 / 74057
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Merchant03_gunnerTaunts2", "Merchant03_gunnerTaunts2", false, 1, 1, 0, 1);
		Function_342(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_390() //Position: 0x121A3 / 74147
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Merchant03_enemyTaunts5", "Merchant03_enemyTaunts5", false, 1, 1, 0, 1);
		Function_342(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_391() //Position: 0x121FB / 74235
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Merchant03_gunnerTaunts3", "Merchant03_gunnerTaunts3", false, 1, 1, 0, 1);
		Function_342(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_392() //Position: 0x12255 / 74325
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_393() //Position: 0x12268 / 74344
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_gunOnWest_escape", "Merchant03_gunOnWest_escape", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_394(int iParam0, float fParam1) //Position: 0x122C7 / 74439
{
	if (!Function_284(iParam0))
	{
		Function_231(iParam0, fParam1);
	}
	return;
}

bool Function_395(bool bParam0, bool bParam1, bool bParam2) //Position: 0x122DD / 74461
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

bool Function_396(bool bParam0, bool bParam1) //Position: 0x123EE / 74734
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		if (Function_397(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_397(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_397(bool bParam0, bool bParam1) //Position: 0x124AB / 74923
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_398(&uVar0, &uVar3);
	return iVar6;
}

var Function_398(var uParam0, int iParam1) //Position: 0x124CA / 74954
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_399(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x124E8 / 74984
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
					if (!Function_400(bVar1, 1) || iParam3)
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

bool Function_400(bool bParam0, int iParam1) //Position: 0x12581 / 75137
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

bool Function_401(bool bParam0) //Position: 0x125CB / 75211
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(GET_OBJECT_FROM_ACTOR(bParam0))) == GET_GC_LAYOUT())
		{
			return 1;
		}
	}
	return 0;
}

void Function_402(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x125ED / 75245
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

void Function_403() //Position: 0x12640 / 75328
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_head4CuevaSeca", "Merchant03_head4CuevaSeca", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_404(vector3 vParam0, struct<5> Param3, var uParam8) //Position: 0x1269B / 75419
{
	var uVar0;
	
	UNK_0x44986367(StackVal, &uVar0);
	TRAIN_SET_POSITION_DIRECTION(bLocal_1093, &vParam0, &uVar0);
	TRAIN_SET_TARGET_POS(bLocal_1093, &uParam6);
	TRAIN_SET_MAX_ACCEL(bLocal_1093, 5.0f);
	TRAIN_SET_MAX_DECEL(bLocal_1093, -5.0f);
	TRAIN_SET_AUTOPILOT_ENABLE(bLocal_1093, 0);
	TRAIN_SET_JUNCTION_STATE(bLocal_1093, 10, 1);
	STREAMING_LOAD_BOUNDS(vParam0, 50.0f, 0);
}

int Function_405() //Position: 0x126EE / 75502
{
	Function_411(&Local_4 + 404, 1202, 2, 0);
	Function_411(&Local_4 + 404, 976, 2, 0);
	Function_411(&Local_4 + 404, 401, 2, 0);
	Function_411(&Local_4 + 404, 980, 2, 0);
	Function_411(&Local_4 + 404, 402, 2, 0);
	Function_411(&Local_4 + 404, 981, 2, 0);
	Function_411(&Local_4 + 404, 1200, 2, 0);
	Function_411(&Local_4 + 404, 977, 2, 0);
	Function_411(&Local_4 + 404, 403, 2, 0);
	Function_411(&Local_4 + 404, 400, 2, 0);
	Function_411(&Local_4 + 404, 404, 2, 0);
	Function_411(&Local_4 + 404, 405, 2, 0);
	if (Function_406(&Local_4 + 404))
	{
		return 1;
	}
	return 0;
}

bool Function_406(int iParam0) //Position: 0x127AA / 75690
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_410();
	iVar1 = 0;
	if (!Function_208(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_409(iParam0[iVar03], 8);
		}
		else if (Function_408())
		{
			iVar1 = 1;
			Function_409(iParam0[iVar03], 8);
		}
		Function_409(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_208(iParam0[iVar03], 4))
		{
			if (!Function_208(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_208(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_208(iParam0[03], 8) || iVar1));
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
				Function_409(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_208(iParam0[iVar03], 4))
		{
			if (!Function_208(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_409(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_409(iParam0[iVar03], 2);
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
							Function_409(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_409(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_409(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_409(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_409(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_409(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_409(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_409(iParam0[iVar03], 2);
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
	Function_407();
	return 1;
}

void Function_407() //Position: 0x12B25 / 76581
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

bool Function_408() //Position: 0x12B65 / 76645
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

void Function_409(var uParam0, int iParam1) //Position: 0x12B90 / 76688
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_410() //Position: 0x12BA1 / 76705
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

var Function_411(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x12BE3 / 76771
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_208(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_409(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_409(bParam0[iVar03], 8);
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

bool Function_412(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x12CB3 / 76979
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_415(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_416()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_413();
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
	else if ((!Function_415(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_416()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_415(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_413() //Position: 0x12EF9 / 77561
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
			Function_414(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_414(char* cParam0, vector3 vParam1) //Position: 0x12F4D / 77645
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

bool Function_415(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x13075 / 77941
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_358(bParam0);
		if (VDIST(Function_358(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_416() //Position: 0x130FF / 78079
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

bool Function_417(bool bParam0, bool bParam1, float fParam2) //Position: 0x1310E / 78094
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_358(bParam0);
			Function_418(bParam1);
			if (VDIST(Function_358(bParam0), Function_418(bParam1)) >= fParam2)
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

vector3 Function_418(bool bParam0) //Position: 0x13228 / 78376
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

bool Function_419(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x13294 / 78484
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_395(Global_34573, bParam3, iParam2))
	{
		Function_236(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_395(Global_34573, bParam3, bParam1))
	{
		if (!Function_426(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_402(bParam4, 7,5f, 0, 2, iParam7, 0, 0);
				}
				Function_425(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_424(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_424(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_426(2))
	{
		Function_423(2);
		if (!Function_422())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_421();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_25(bParam3);
				Function_420(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_424(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_424(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_420(bool bParam0) //Position: 0x13428 / 78888
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

void Function_421() //Position: 0x13454 / 78932
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

bool Function_422() //Position: 0x1347F / 78975
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

void Function_423(bool bParam0) //Position: 0x134C3 / 79043
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

void Function_424(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x13526 / 79142
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

void Function_425(bool bParam0) //Position: 0x135C7 / 79303
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

bool Function_426(bool bParam0) //Position: 0x1362A / 79402
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_156(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_427() //Position: 0x13671 / 79473
{
	if (IS_ACTOR_VALID(bLocal_1016))
	{
		if (IS_ACTOR_VALID(bLocal_1017) && !Function_136())
		{
			if (Function_432(bLocal_1017, GET_PLAYER_ACTOR(0)))
			{
				if (IS_ACTOR_ALIVE(bLocal_1018) && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1018), "onlyoneleft"))
				{
					Function_431();
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1018), "onlyoneleft", true);
				}
			}
			else if ((GET_LAST_ATTACKER(bLocal_1017) != GET_PLAYER_ACTOR(0) && !HUD_IS_SHOWING_SMALL_TEXT()) && !GET_LAST_HIT_TIME(bLocal_1017) < 0.0f)
			{
				Function_430();
				CLEAR_LAST_HIT(bLocal_1017);
			}
		}
		if (IS_ACTOR_VALID(bLocal_1018) && !Function_136())
		{
			if (Function_432(bLocal_1018, GET_PLAYER_ACTOR(0)))
			{
				if (IS_ACTOR_ALIVE(bLocal_1017) && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1017), "onlyoneleft"))
				{
					Function_431();
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1017), "onlyoneleft", true);
				}
			}
			else if ((GET_LAST_ATTACKER(bLocal_1018) != GET_PLAYER_ACTOR(0) && GET_LAST_HIT_TIME(bLocal_1018) < 0.0f) && !HUD_IS_SHOWING_SMALL_TEXT())
			{
				Function_430();
				CLEAR_LAST_HIT(bLocal_1018);
			}
		}
	}
	if ((((Function_429(GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0))) && IS_ACTOR_RIDING_VEHICLE(bLocal_765)) && IS_ACTOR_RIDING_VEHICLE(Global_34573)) && !IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_765, "Duck")) && !Function_136())
	{
		if ((_GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(Global_34573)), 0) + ACTOR_GET_WEAPON_AMMO(Global_34573, GET_WEAPON_IN_HAND(Global_34573))) > 10.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(Global_34573)), 10.0f, 1, 1);
			Function_428();
			if (!(iLocal_743 != 3 && iLocal_744 != 10))
			{
				if (!ACTOR_HAS_ANIM_SET(bLocal_765, "driver_gives_ammo"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_765, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_765, "driver_gives_ammo", 0);
				}
				SET_ACTION_NODE_FOR_ACTOR(bLocal_765, "driver_gives_ammo/giving");
			}
		}
	}
	return;
}

void Function_428() //Position: 0x13864 / 79972
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_giveJonAmmo", "Merchant03_giveJonAmmo", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_429(bool bParam0) //Position: 0x138B9 / 80057
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

void Function_430() //Position: 0x138FF / 80127
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_shoots1Horse", "Merchant03_shoots1Horse", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x13956 / 80214
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_WestLoses1Horse", "Merchant03_WestLoses1Horse", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_432(bool bParam0, bool bParam1) //Position: 0x139B3 / 80307
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(bParam0) == bParam1)
	{
		if (IS_ACTOR_DEAD(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_433() //Position: 0x139E4 / 80356
{
	if (!Function_284(&iLocal_1045))
	{
		Function_377(&iLocal_1045);
	}
	if (IS_ACTOR_ALIVE(Global_34573))
	{
		if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (!GET_TASK_STATUS(bLocal_765, 43) != 1)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_765, bLocal_1007, 4, 0, 0, 1, false);
				MEMORY_ALLOW_SHOOTING(bLocal_765, false);
				ACTOR_START_FORCE_HOLSTER(bLocal_765, 1, 0);
				Function_443(2, 0, 1);
				Function_441(2, 0x3f000000, 0x40000000);
				SET_ACTOR_INVULNERABILITY(bLocal_765, false);
				if (iLocal_1061)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_402("Merchant03_obj03b", 7,5f, 1, 2, 0, 0, 0);
					iLocal_1061 = 0;
				}
				if (iLocal_743 != 4 && Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					ACTOR_START_FORCE_HOLSTER(bLocal_1014, 0, 0);
					MEMORY_ALLOW_SHOOTING(bLocal_1014, false);
				}
			}
		}
		else
		{
			if (!GET_TASK_STATUS(bLocal_765, 6) != 1)
			{
				if (DECOR_CHECK_EXIST(bLocal_765, "abandonwarning02"))
				{
					DECOR_REMOVE(bLocal_765, "abandonwarning02");
				}
				if (DECOR_CHECK_EXIST(bLocal_765, "abandonwarning03"))
				{
					DECOR_REMOVE(bLocal_765, "abandonwarning03");
				}
				if (DECOR_CHECK_EXIST(bLocal_765, "abandonwarning01"))
				{
					DECOR_REMOVE(bLocal_765, "abandonwarning01");
				}
				if (!iLocal_1061)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_402("Merchant03_obj03a", 7,5f, 1, 2, 0, 0, 0);
					iLocal_1061 = 1;
				}
				Function_230(&iLocal_1045);
				MEMORY_ALLOW_SHOOTING(bLocal_765, true);
				TASK_PRIORITY_SET(bLocal_765, false);
				ACTOR_END_FORCE_HOLSTER(bLocal_765);
				Function_443(2, 0, 1);
				Function_443(2, 1, 1);
				TASK_STAND_STILL(bLocal_765, -1.0f, 0, 0);
				SET_ACTOR_INVULNERABILITY(bLocal_765, false);
				if (iLocal_743 != 4 && Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					MEMORY_REPORT_POSITION_AUTO(bLocal_1014, bLocal_765, true);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_1014);
					GIVE_WEAPON_TO_ACTOR(bLocal_1014, 40, false, 1, 1);
					ACTOR_END_FORCE_HOLSTER(bLocal_1014);
					TASK_PRIORITY_SET(bLocal_1014, false);
					MEMORY_CONSIDER_AS_ENEMY(bLocal_1014, bLocal_765);
					MEMORY_ALLOW_SHOOTING(bLocal_1014, true);
				}
			}
			Function_434();
		}
	}
	return;
}

void Function_434() //Position: 0x13C13 / 80915
{
	if (!Function_284(&iLocal_1045))
	{
		Function_377(&iLocal_1045);
	}
	if (!DECOR_CHECK_EXIST(bLocal_765, "abandonwarning01") && !Function_136())
	{
		if (iLocal_743 != 2 && iLocal_744 >= 8)
		{
			Function_440();
		}
		else if (iLocal_1057 && !bLocal_1059)
		{
			Function_439();
		}
		else
		{
			Function_438();
		}
		DECOR_SET_BOOL(bLocal_765, "abandonwarning01", true);
	}
	if (Function_437(bLocal_1009, 1, 1, 1, 1, 1) >= 0 && (!Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0) || DECOR_CHECK_EXIST(bLocal_1014, "leftvehicle")))
	{
		if (((Function_282(&iLocal_1045) < 45.0f && DECOR_CHECK_EXIST(bLocal_765, "abandonwarning01")) && DECOR_CHECK_EXIST(bLocal_765, "abandonwarning02")) && DECOR_CHECK_EXIST(bLocal_765, "abandonwarning03"))
		{
			ENABLE_VEHICLE_SEAT(bLocal_1016, true, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_765, bLocal_1007, 4, 0, 0, 1, false);
			TASK_PRIORITY_SET(bLocal_765, true);
			Function_436();
			Function_435(1.0f);
			Function_236("Merchant03_fail_abandon");
			bLocal_753 = true;
		}
		else if ((Function_282(&iLocal_1045) <= 30.0f && !DECOR_CHECK_EXIST(bLocal_765, "abandonwarning03")) && DECOR_CHECK_EXIST(bLocal_765, "abandonwarning02"))
		{
			if (!Function_136())
			{
				if (iLocal_743 != 2 && iLocal_744 >= 8)
				{
					Function_440();
				}
				else if (iLocal_1057 && !bLocal_1059)
				{
					Function_439();
				}
				else
				{
					Function_438();
				}
				DECOR_SET_BOOL(bLocal_765, "abandonwarning03", true);
			}
			else
			{
				Function_231(&iLocal_1045, 30.0f);
			}
		}
		else if ((Function_282(&iLocal_1045) <= 15.0f && !DECOR_CHECK_EXIST(bLocal_765, "abandonwarning02")) && DECOR_CHECK_EXIST(bLocal_765, "abandonwarning01"))
		{
			if (!Function_136())
			{
				if (iLocal_743 != 2 && iLocal_744 >= 8)
				{
					Function_440();
				}
				else if (iLocal_1057 && !bLocal_1059)
				{
					Function_439();
				}
				else
				{
					Function_438();
				}
				DECOR_SET_BOOL(bLocal_765, "abandonwarning02", true);
			}
			else
			{
				Function_231(&iLocal_1045, 15.0f);
			}
		}
	}
	else
	{
		Function_230(&iLocal_1045);
	}
	return;
}

void Function_435(bool bParam0) //Position: 0x13EB0 / 81584
{
	DECOR_SET_FLOAT(Global_34573, "ResetMenuDelay", bParam0);
	return;
}

void Function_436() //Position: 0x13ED0 / 81616
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_makeEscape_Fail", "Merchant03_makeEscape_Fail", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_437(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x13F2D / 81709
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	iVar3 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				bVar2 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(bVar1, 3) || IS_ACTOR_CRIPPLED(bVar1, 4))
					{
						bVar2 = false;
					}
				}
				if (bParam2)
				{
					if (IS_ACTOR_HOGTIED(bVar1))
					{
						bVar2 = false;
					}
				}
				if (bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(bVar1, 1.0f))
					{
						bVar2 = false;
					}
				}
				if (bParam4)
				{
					if (UNK_0x7A207FFE(bVar1))
					{
						bVar2 = false;
					}
				}
				if (bParam5)
				{
					if (!IS_ACTOR_RIDING(bVar1) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					iVar3++;
				}
			}
		}
		bVar0++;
	}
	return iVar3;
}

void Function_438() //Position: 0x13FE7 / 81895
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_getBackOn", "Merchant03_getBackOn", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x14040 / 81984
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_getsOff", "Merchant03_getsOff", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_440() //Position: 0x1408D / 82061
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_makeEscape_waiting", "Merchant03_makeEscape_waiting", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_441(int iParam0, float fParam1, float fParam2) //Position: 0x140F0 / 82160
{
	Function_443(iParam0, 1, 1);
	SET_BLIP_MIN_DISTANCE(Function_442(iParam0), fParam1);
	SET_BLIP_MAX_DISTANCE(Function_442(iParam0), fParam2);
	return;
}

var Function_442(int iParam0) //Position: 0x14111 / 82193
{
	return Global_8492[iParam014].f_52;
}

void Function_443(int iParam0, bool bParam1, bool bParam2) //Position: 0x14120 / 82208
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
				Function_420(bVar0);
			}
		}
	}
	return;
}

bool Function_444(bool bParam0, bool bParam1, float fParam2) //Position: 0x14217 / 82455
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_445(StackVal, StackVal, bParam0, vVar0) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of path end. Returning FALSE.");
	return 0;
	return 0;
}

float Function_445(bool bParam0, vector3 vParam1) //Position: 0x142AA / 82602
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_358(bParam0);
		vVar0 = { StackVal, StackVal, Function_358(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_446() //Position: 0x14324 / 82724
{
	int iVar0;
	
	iVar0 = 1;
	if (IS_ACTOR_VALID(bLocal_1012))
	{
		if (Function_395(bLocal_1016, bLocal_1012, 100.0f))
		{
			iVar0 = 0;
		}
	}
	if ((((!Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0) || iVar0) && IS_ACTORSET_VALID(Local_4.f_920)) && !IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 1052)[10])) && !bLocal_1058)
	{
		if (!Function_284(&iLocal_1039))
		{
			Function_377(&iLocal_1039);
		}
		if (Function_437(bLocal_1009, 1, 1, 1, 1, 1) >= 0)
		{
			Function_230(&iLocal_1039);
		}
		if (!SQUAD_GET_SIZE(bLocal_1009) < 0)
		{
			Function_447(0);
		}
	}
	return;
}

void Function_447(int iParam0) //Position: 0x143B3 / 82867
{
	bool bVar0;
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
	int iVar12;
	bool bVar13;
	
	if (!Function_284(&iLocal_1039))
	{
		Function_377(&iLocal_1039);
	}
	if (Function_437(bLocal_1009, 1, 1, 1, 1, 1) >= 1)
	{
		Function_230(&iLocal_1039);
	}
	if (((((Function_437(bLocal_1009, 1, 1, 1, 1, 1) >= 1 && Function_282(&iLocal_1039) < 5.0f) || (Function_437(bLocal_1009, 1, 1, 1, 1, 1) < 1 && Function_282(&iLocal_1039) < 10.0f)) && !IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 980)[2])) && IS_ACTOR_RIDING_VEHICLE(Global_34573)) && GET_TASK_STATUS(bLocal_765, 43) != 1)
	{
		bVar0 = false;
		bVar1 = false;
		bVar2 = false;
		bVar3 = false;
		bVar4 = CREATE_ACTORSET_IN_LAYOUT(bLocal_735, "m_tempActorSet", 0);
		bVar5 = false;
		while (bVar5 <= SQUAD_GET_SIZE(bLocal_1009))
		{
			bVar6 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1009, bVar5);
			if (IS_ACTOR_VALID(bVar6))
			{
				if ((DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar6), "nfrontleft") && Function_395(bVar6, bLocal_1016, 175.0f)) && Function_359(bVar6, 1, 1, 1, 1, 1, 0, 0, 0))
				{
					bVar0 = true;
				}
				if ((DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar6), "frontright") && Function_395(bVar6, bLocal_1016, 175.0f)) && Function_359(bVar6, 1, 1, 1, 1, 1, 0, 0, 0))
				{
					bVar1 = true;
				}
				if ((DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar6), "backleft") && Function_395(bVar6, bLocal_1016, 175.0f)) && Function_359(bVar6, 1, 1, 1, 1, 1, 0, 0, 0))
				{
					bVar2 = true;
				}
				if ((DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar6), "nbackright") && Function_395(bVar6, bLocal_1016, 175.0f)) && Function_359(bVar6, 1, 1, 1, 1, 1, 0, 0, 0))
				{
					bVar3 = true;
				}
				if (!Function_395(bVar6, bLocal_1016, 175.0f) || !Function_359(bVar6, 1, 1, 1, 1, 1, 0, 0, 0))
				{
					ADD_ACTORSET_MEMBER(bVar4, bVar6);
				}
			}
			bVar5++;
		}
		if (!bVar0 && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft"))
		{
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft");
		}
		if (!bVar1 && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright"))
		{
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright");
		}
		if (!bVar2 && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft"))
		{
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft");
		}
		if (!bVar3 && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright"))
		{
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright");
		}
		bVar5 = false;
		while (bVar5 <= GET_ACTORSET_SIZE(bVar4))
		{
			bVar7 = GET_ACTOR_FROM_ACTORSET(bVar4, bVar5);
			if (IS_ACTOR_VALID(bVar7))
			{
				Function_449(bVar7, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar7)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar7));
				}
				if (IS_ACTOR_VALID(GET_MOUNT(bVar7)))
				{
					RELEASE_ACTOR(GET_MOUNT(bVar7));
				}
				SQUAD_LEAVE(bVar7);
				RELEASE_ACTOR(bVar7);
			}
			bVar5++;
		}
		DESTROY_ACTORSET(bVar4);
		if (Function_437(bLocal_1009, 1, 1, 1, 1, 1) < 2)
		{
			iLocal_1028 = Function_357(bLocal_1016, bLocal_1007);
			GET_PATH_POINT(bLocal_1007, iLocal_1028, &vLocal_1070);
			Function_358(bLocal_1016);
			while ((VDIST(Function_358(bLocal_1016), vLocal_1070) > 100.0f || WOULD_ACTOR_BE_VISIBLE(976, &vLocal_1070, 3212836864)) && bLocal_1028 < 0)
			{
				bLocal_1028 = (bLocal_1028 - 1);
				GET_PATH_POINT(bLocal_1007, bLocal_1028, &vLocal_1070);
			}
			Function_358(bLocal_1016);
			if (VDIST(Function_358(bLocal_1016), vLocal_1070) <= 100.0f)
			{
				Function_243(bLocal_1016);
				vLocal_1030 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_243(bLocal_1016), vLocal_1070, StackVal) };
				VNORMALIZE(&vLocal_1030);
				vLocal_1030 = { StackVal, StackVal, -Vector(vLocal_1030, StackVal, StackVal) };
				bVar8 = UNK_0x9C40E671(&vLocal_1030);
				vLocal_1030 = { 0.0f, 0.0f, 0.0f };
				vLocal_1030.y = bVar8;
				bVar9 = Function_306(StackVal, StackVal, Global_30750[6], vLocal_1070, 4, 23, 0);
				if (!Function_352(bVar9))
				{
					bVar9 = 977;
				}
				bVar10 = Function_448();
				bVar11 = Function_351(StackVal, StackVal, StackVal, StackVal, Local_4, Function_56(), bVar10, Function_56(), bVar9, vLocal_1070, vLocal_1030);
				Function_345(bVar11, 0, 0);
				if ((RAND_INT_RANGE(false, 100000) < 50000 && Function_437(bLocal_1009, 1, 1, 1, 1, 1) >= 2) && iParam0)
				{
					vLocal_1070 = { StackVal, StackVal, Vector(vLocal_1070, StackVal, StackVal) + Vector(0.0f, 0.0f, 1.0f) };
					bVar9 = Function_306(StackVal, StackVal, Global_30750[6], vLocal_1070, 4, 23, 0);
					if (!Function_352(bVar9))
					{
						bVar9 = 976;
					}
					iVar12 = bVar10;
					bVar10 = Function_448();
					while (bVar10 == iVar12)
					{
						bVar10 = Function_448();
					}
					bVar13 = Function_351(StackVal, StackVal, StackVal, StackVal, Local_4, Function_56(), bVar10, Function_56(), bVar9, vLocal_1070, vLocal_1030);
					Function_345(bVar13, 0, 1);
				}
			}
		}
		Function_230(&iLocal_1039);
	}
	return;
}

int Function_448() //Position: 0x14842 / 84034
{
	int iVar0;
	int iVar1;
	
	if (iLocal_743 == 4)
	{
		iVar1 = (RAND_INT_RANGE(false, 300000) / 100000);
		if (iVar1 > 2)
		{
			iVar0 = 403;
		}
		else if (iVar1 > 1)
		{
			iVar0 = 404;
		}
		else
		{
			iVar0 = 405;
		}
	}
	else
	{
		iVar1 = (RAND_INT_RANGE(false, 600000) / 100000);
		if (iVar1 > 5)
		{
			iVar0 = 402;
		}
		else if (iVar1 > 4)
		{
			iVar0 = 401;
		}
		else if (iVar1 > 3)
		{
			iVar0 = 400;
		}
		else if (iVar1 > 2)
		{
			iVar0 = 399;
		}
		else if (iVar1 > 1)
		{
			iVar0 = 398;
		}
		else
		{
			iVar0 = 397;
		}
	}
	return iVar0;
}

void Function_449(bool bParam0, int iParam1) //Position: 0x148DE / 84190
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (((!Function_359(bParam0, 1, 1, 1, 1, 1, 0, 0, 0) || !IS_ACTOR_ALIVE(bParam0)) || !Function_395(bParam0, Global_34573, 175.0f)) || iParam1)
		{
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "frontright"))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "frontright");
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright"))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright", true);
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "nbackright"))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "nbackright");
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright"))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright", true);
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "backleft"))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "backleft");
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft"))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft", true);
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "nfrontleft"))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "nfrontleft");
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft"))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft", true);
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "nfollowing"))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "nfollowing");
			}
		}
	}
	return;
}

void Function_450() //Position: 0x14AAE / 84654
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	if (SQUAD_IS_VALID(bLocal_1008))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bLocal_1008) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1008, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (!DECOR_CHECK_EXIST(bVar1, "nriderless"))
				{
					if (!IS_ACTOR_MOUNTED(bVar1) && !Function_451(bLocal_1009, bVar1))
					{
						DECOR_SET_BOOL(bVar1, "nriderless", true);
						if (iLocal_743 != 2 && iLocal_744 > 10)
						{
							TASK_FLEE_ACTOR(bVar1, bLocal_1016, 100.0f, -1.0f, 1, 0, 0);
						}
						else
						{
							bLocal_1027 = TASK_SEQUENCE_OPEN();
							vVar5 = { 0.0f, 0.0f, 0.0f };
							vVar8 = { 0.0f, 0.0f, 0.0f };
							if (DECOR_CHECK_EXIST(bVar1, "nfrontleft") || DECOR_CHECK_EXIST(bVar1, "backleft"))
							{
								vVar5 = { -5.0f, 0.0f, -20.0f };
								UNK_0xB89CC342(bVar1, &vVar5, &vVar8);
								FIND_GROUND_INTERSECTION(&vVar8, 10.0f, &uVar2, &vVar5);
								TASK_GO_TO_COORD(false, &uVar2, 4);
							}
							else if (DECOR_CHECK_EXIST(bVar1, "frontright") || DECOR_CHECK_EXIST(bVar1, "nbackright"))
							{
								vVar5 = { 5.0f, 0.0f, -20.0f };
								UNK_0xB89CC342(bVar1, &vVar5, &vVar8);
								FIND_GROUND_INTERSECTION(&vVar8, 10.0f, &uVar2, &vVar5);
								TASK_GO_TO_COORD(false, &uVar2, 4);
							}
							else
							{
								if (iLocal_743 == 4)
								{
									GET_PATH_POINT(Local_4.f_2856, false, &uVar2);
								}
								else
								{
									GET_PATH_POINT(Local_4.f_2852, false, &uVar2);
								}
								TASK_GO_TO_COORD(false, &uVar2, 4);
							}
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bVar1, bLocal_1027);
							TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
						}
					}
				}
				else if (!Function_395(bVar1, Global_34573, 100.0f))
				{
					RELEASE_ACTOR(bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

bool Function_451(bool bParam0, int iParam1) //Position: 0x14C58 / 85080
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
				if (IS_ACTOR_ALIVE(bVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTORS_HORSE(bVar1)))
					{
						if (GET_ACTORS_HORSE(bVar1) == iParam1)
						{
							return 1;
						}
					}
				}
			}
			bVar0++;
		}
	}
	return 1;
}

void Function_452() //Position: 0x14CAD / 85165
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(bLocal_1009))
	{
		bVar0 = true;
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(bLocal_1009) - 1))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1009, bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (!GET_TASK_STATUS(bVar2, 67) != 1 || !GET_TASK_STATUS(bVar2, 42) != 1)
					{
						if (bVar0)
						{
							MEMORY_REPORT_POSITION_AUTO(bVar2, Global_34573, true);
							TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar2, Global_34573, 5.0f, 4);
							TASK_PRIORITY_SET(bVar2, false);
							bVar0 = false;
						}
						else
						{
							MEMORY_REPORT_POSITION_AUTO(bLocal_765, bVar2, true);
							MEMORY_REPORT_POSITION_AUTO(bVar2, bLocal_765, true);
							vLocal_1030 = { 5.0f, 0.0f, -5.0f };
							TASK_FOLLOW_AND_ATTACK_OBJECT(bVar2, bLocal_765, &vLocal_1030, 0, 0, 0, 0, 0, 1);
							bVar0 = true;
						}
						if (!DECOR_CHECK_EXIST(bVar2, "nunholster"))
						{
							ACTOR_END_FORCE_HOLSTER(bVar2);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar2, 0);
							DECOR_SET_BOOL(bVar2, "nunholster", true);
						}
					}
				}
				else if (!Function_359(bVar2, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
					{
						SET_BLIP_MIN_DISTANCE(GET_BLIP_ON_ACTOR(bVar2), 0.0f);
						SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(bVar2), 1,25f);
					}
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_392())
						{
							Function_454();
						}
					}
					SQUAD_LEAVE(bVar2);
					TASK_STAND_STILL(bVar2, -1.0f, 0, 0);
				}
				else if (!IS_ACTOR_RIDING(bVar2))
				{
					if (!IS_ACTOR_ALIVE(GET_ACTORS_HORSE(bVar2)) || !Function_453(bVar2, Global_34573, 30.0f))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
						}
						Function_358(bVar2);
						vLocal_1030 = { StackVal, StackVal, Function_358(bVar2) };
						bLocal_1027 = TASK_SEQUENCE_OPEN();
						TASK_TAUNT_ACTOR_IN_PLACE(false, Global_34573, -1f);
						TASK_FLEE_ACTOR(false, Global_34573, 200.0f, -1.0f, 0, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar2, bLocal_1027);
						TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
						SQUAD_LEAVE(bVar2);
						RELEASE_ACTOR(bVar2);
					}
				}
				else
				{
					if (!GET_TASK_STATUS(bVar2, 73) != 1)
					{
						Function_449(bVar2, 1);
						Function_345(bVar2, 1, 0);
					}
					if (GET_NUM_WEAPONS_IN_INVENTORY(bVar2) == 0)
					{
						if (!DECOR_CHECK_EXIST(bVar2, "gaveweapon"))
						{
							GIVE_WEAPON_TO_ACTOR(bVar2, 41, false, 1, 1);
							DECOR_SET_BOOL(bVar2, "gaveweapon", true);
						}
						else
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
							}
							SQUAD_LEAVE(bVar2);
							TASK_FLEE_ACTOR(bVar2, Global_34573, 100.0f, -1.0f, 1, 0, 0);
						}
					}
					else if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)) && Function_395(bVar2, Global_34573, 250.0f))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
						{
							ADD_BLIP_FOR_ACTOR(bVar2, 322, 0, 2, 0);
						}
					}
					if (Function_395(bVar2, bLocal_1016, 50.0f) && !DECOR_CHECK_EXIST(bVar2, "nfollowing"))
					{
						Function_346(bVar2, 0, 0);
					}
					if (Function_395(bVar2, bLocal_1016, 35.0f) && !DECOR_CHECK_EXIST(bVar2, "nunholster"))
					{
						ACTOR_END_FORCE_HOLSTER(bVar2);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar2, 0);
						DECOR_SET_BOOL(bVar2, "nunholster", true);
					}
				}
			}
			bVar1++;
		}
	}
	return;
}

bool Function_453(bool bParam0, bool bParam1, float fParam2) //Position: 0x14F91 / 85905
{
	float fVar0;
	
	fVar0 = Function_397(bParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

void Function_454() //Position: 0x14FAE / 85934
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_jonKills1Attacker", "Merchant03_jonKills1Attacker", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_455() //Position: 0x1500F / 86031
{
	if (IS_ACTOR_ALIVE((*&Local_4 + 860)[12]))
	{
		TASK_STAND_STILL((*&Local_4 + 860)[12], -1.0f, 0, 0);
	}
	if (IS_ACTOR_ALIVE((*&Local_4 + 892)[12]))
	{
		TASK_STAND_STILL((*&Local_4 + 892)[12], -1.0f, 0, 0);
	}
	if (IS_ACTOR_ALIVE((*&Local_4 + 924)[12]))
	{
		TASK_STAND_STILL((*&Local_4 + 924)[12], -1.0f, 0, 0);
	}
	if (Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0))
	{
		TASK_STAND_STILL(bLocal_1014, -1.0f, 0, 0);
	}
	if (Function_359(bLocal_1015, 1, 1, 1, 1, 0, 0, 0, 0))
	{
		TASK_STAND_STILL(bLocal_1015, -1.0f, 0, 0);
	}
	if (IS_BLIP_VALID(bLocal_1064))
	{
		REMOVE_BLIP(bLocal_1064);
	}
	Function_458(bLocal_1009);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1009, false, 1, 4294967295);
	TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_4 + 1748[06], 4);
	bLocal_1028 = false;
	while (bLocal_1028 < (SQUAD_GET_SIZE(bLocal_1009) - 1))
	{
		bLocal_1013 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1009, bLocal_1028);
		if (IS_ACTOR_VALID(bLocal_1013))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1013)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1013));
			}
		}
		bLocal_1028++;
	}
	if (Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0) || Function_353(bLocal_1009, 1, 1, 1, 1, 1))
	{
		Function_457();
	}
	else
	{
		Function_456();
	}
	return;
}

void Function_456() //Position: 0x15142 / 86338
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_noAttackers_AA", "Merchant03_noAttackers_AA", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_457() //Position: 0x1519D / 86429
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_closeToCueva", "Merchant03_closeToCueva", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_458(bool bParam0) //Position: 0x151F4 / 86516
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

void Function_459() //Position: 0x15226 / 86566
{
	if (bLocal_1014 == (*&Local_4 + 924)[12])
	{
		if (IS_ACTOR_VALID(bLocal_1014))
		{
			if (!GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1012, false) != bLocal_1014)
			{
				if (!SET_ACTOR_IN_VEHICLE(bLocal_1014, bLocal_1012, false))
				{
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_1015))
		{
			if (!GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1012, true) != bLocal_1015)
			{
				if (!SET_ACTOR_IN_VEHICLE(bLocal_1015, bLocal_1012, true))
				{
				}
			}
		}
	}
	if (!IS_ACTORSET_VALID(Local_4.f_952))
	{
		Function_469();
		SET_ACTOR_IN_VEHICLE((*&Local_4 + 924)[12], (*&Local_4 + 924)[02], false);
		SET_ACTOR_IN_VEHICLE((*&Local_4 + 924)[22], (*&Local_4 + 924)[02], true);
		SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 892)[12], false);
		SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 892)[02], false);
		MEMORY_REPORT_POSITION_AUTO((*&Local_4 + 892)[22], bLocal_1016, true);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_4 + 924)[12], Local_4.f_2880, 2, 0, 0, 1, false);
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, (*&Local_4 + 924)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, (*&Local_4 + 924)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, (*&Local_4 + 924)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, (*&Local_4 + 924)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(2, (*&Local_4 + 924)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(2, (*&Local_4 + 924)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(3, (*&Local_4 + 924)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(3, (*&Local_4 + 924)[02]), false);
		}
		Function_358((*&Local_4 + 892)[02]);
		vLocal_1030 = { StackVal, StackVal, Function_358((*&Local_4 + 892)[02]) };
		STREAMING_LOAD_BOUNDS(vLocal_1030, 200.0f, 1);
	}
	if (bLocal_1012 == (*&Local_4 + 924)[02] && ((!Function_468(bLocal_1012, 2, 0, 4294967295) || !Function_453(bLocal_1012, bLocal_1016, 150.0f)) || !IS_ACTOR_ALIVE(bLocal_1014)))
	{
		if (Function_359((*&Local_4 + 924)[12], 1, 1, 1, 1, 0, 0, 0, 0))
		{
			bLocal_1014 = (*&Local_4 + 924)[12];
			bLocal_1015 = (*&Local_4 + 924)[22];
		}
		else if (Function_359((*&Local_4 + 924)[22], 1, 1, 1, 1, 0, 0, 0, 0))
		{
			bLocal_1014 = (*&Local_4 + 924)[22];
		}
		bLocal_1012 = (*&Local_4 + 924)[02];
		Function_460();
		TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_1014, bLocal_1075, Local_4.f_2880, 0.0f, 1, 0);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1014, 15.0f);
		AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_1014, 0);
	}
	if (bLocal_1012 == (*&Local_4 + 860)[02] && IS_ACTOR_VALID((*&Local_4 + 860)[02]))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 860)[02], false)))
		{
			if (IS_ACTOR_ALIVE(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 860)[02], false)) && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 860)[02]), "sloweddown"))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 860)[02], false), Local_4.f_2868, 2, 0, 0, 1, false);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR((*&Local_4 + 860)[02]), "sloweddown", true);
			}
		}
	}
	if (bLocal_1012 == (*&Local_4 + 892)[02] && IS_ACTOR_VALID((*&Local_4 + 892)[02]))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 892)[02], false)))
		{
			if (IS_ACTOR_ALIVE(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 892)[02], false)) && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 892)[02]), "sloweddown"))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 892)[02], false), Local_4.f_2868, 2, 0, 0, 1, false);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR((*&Local_4 + 892)[02]), "sloweddown", true);
			}
		}
	}
	return;
}

void Function_460() //Position: 0x15578 / 87416
{
	if (IS_ACTOR_VALID(bLocal_1012))
	{
		SET_ACTOR_UPDATE_PRIORITY(bLocal_1014, false);
		MEMORY_ALLOW_SHOOTING(bLocal_1014, false);
		MEMORY_ATTACK_ON_SIGHT(bLocal_1014, 0);
		Function_348(bLocal_1014);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_1014, true);
		SET_ACTOR_VISION_XRAY(bLocal_1014, true);
		GIVE_WEAPON_TO_ACTOR(bLocal_1014, 40, false, 1, 1);
		SET_ACTOR_VISION_FIELD_OF_VIEW(bLocal_1014, 359,9f);
		if (Function_359(bLocal_1015, 1, 1, 1, 1, 0, 0, 0, 0))
		{
			SET_ACTOR_FACTION(bLocal_1015, 19);
			MEMORY_REPORT_POSITION_AUTO(bLocal_1015, bLocal_765, true);
			MEMORY_REPORT_POSITION_AUTO(bLocal_1015, GET_PLAYER_ACTOR(0), true);
			Function_349(bLocal_1015, GET_PLAYER_ACTOR(0));
			SET_ACTOR_UPDATE_PRIORITY(bLocal_1015, false);
			MEMORY_ALLOW_SHOOTING(bLocal_1015, true);
			MEMORY_PREFER_MELEE(bLocal_1015, 0);
			GIVE_WEAPON_TO_ACTOR(bLocal_1015, 40, false, 1, 1);
			GIVE_WEAPON_TO_ACTOR(bLocal_1015, 41, false, 1, 1);
			Function_348(bLocal_1015);
			MEMORY_CONSIDER_AS_ENEMY(bLocal_1015, Global_34573);
			TASK_PRIORITY_SET(bLocal_1015, false);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_1015, true);
			SET_ACTOR_VISION_XRAY(bLocal_1015, true);
			SET_ACTOR_VISION_FIELD_OF_VIEW(bLocal_1015, 359,9f);
		}
		SET_ACTOR_BASE_SCORE(bLocal_1014, 100.0f, 0);
		SET_ACTOR_BASE_SCORE(bLocal_1015, 100.0f, 0);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_1012, false);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_1014, false);
		SET_ALLOW_JACK(bLocal_1012, 0);
		ENABLE_VEHICLE_SEAT(bLocal_1012, false, 0);
		ENABLE_VEHICLE_SEAT(bLocal_1012, true, 0);
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_1012), false);
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, bLocal_1012)))
		{
			Function_348(GET_DRAFT_ACTOR(false, bLocal_1012));
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, bLocal_1012)))
		{
			Function_348(GET_DRAFT_ACTOR(true, bLocal_1012));
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(2, bLocal_1012)))
		{
			Function_348(GET_DRAFT_ACTOR(2, bLocal_1012));
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(3, bLocal_1012)))
		{
			Function_348(GET_DRAFT_ACTOR(3, bLocal_1012));
		}
		if (bLocal_1012 == (*&Local_4 + 860)[02])
		{
			Function_467(bLocal_1012);
		}
		else if (bLocal_1012 == (*&Local_4 + 892)[02])
		{
			Function_466(bLocal_1012);
			LOG_ERROR("setting up chuckwagon02 mobile");
		}
		else if (bLocal_1012 == (*&Local_4 + 924)[02])
		{
			Function_461(bLocal_1012);
			LOG_ERROR("setting up chuckwagon03 mobile");
		}
	}
	return;
}

int Function_461(bool bParam0) //Position: 0x1578E / 87950
{
	var uVar0;
	
	Function_465(3, 2);
	uVar0 = uVar0;
	Function_463(&Local_1149 + 4, "p_gen_footLocker01x", 0, 0);
	Function_463(&Local_1149 + 4, "p_gen_footLocker02x", 0, 0);
	if (!Function_406(&Local_1149 + 4))
	{
		return 0;
	}
	Local_1149 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_56()));
	Local_1149.f_32 = CREATE_PROP_IN_LAYOUT(Local_1149, "footLocker01x0", "p_gen_footLocker01x", 0,09925159f, 1,218919f, 0,6558979f, -2,660205f, -88,11053f, 0.0f, 1);
	Local_1149.f_36 = CREATE_PROP_IN_LAYOUT(Local_1149, "footLocker02x0", "p_gen_footLocker02x", -0,1490034f, 1,21284f, 1,248426f, 181,159f, 7,664237f, 182,0547f, 1);
	Function_462(Local_1149, bParam0);
	return 1;
}

void Function_462(bool bParam0, bool bParam1) //Position: 0x158A0 / 88224
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			bVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_56(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(bVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

var Function_463(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x158E2 / 88290
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_464(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_409(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_464(var uParam0, int iParam1, int iParam2) //Position: 0x1591A / 88346
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_208(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_409(uParam0[iVar03], 4);
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

void Function_465(int iParam0, int iParam1) //Position: 0x159DE / 88542
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

int Function_466(bool bParam0) //Position: 0x15A27 / 88615
{
	var uVar0;
	
	Function_465(3, 2);
	uVar0 = uVar0;
	Function_463(&Local_1139 + 4, "p_gen_crate01x", 0, 0);
	Function_463(&Local_1139 + 4, "p_gen_crateTnt02x", 0, 0);
	if (!Function_406(&Local_1139 + 4))
	{
		return 0;
	}
	Local_1139 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_56()));
	Local_1139.f_32 = CREATE_PROP_IN_LAYOUT(Local_1139, "ncrate01x0", "p_gen_crate01x", -0,09605226f, 1,226852f, 0,4712868f, 0.0f, 43,73957f, 0.0f, 0);
	Local_1139.f_36 = CREATE_PROP_IN_LAYOUT(Local_1139, "crateTnt02x0", "p_gen_crateTnt02x", -0,3096371f, 1,640403f, 1,270568f, 0,6541448f, -25,2041f, 0.0f, 0);
	Function_462(Local_1139, bParam0);
	return 1;
}

int Function_467(int iParam0) //Position: 0x15B1C / 88860
{
	var uVar0;
	
	Function_465(3, 2);
	uVar0 = uVar0;
	Function_463(&Local_1118 + 4, "p_gen_crate13x", 0, 0);
	Function_463(&Local_1118 + 4, "p_gen_dynamiteCrate01x", 0, 0);
	Function_463(&Local_1118 + 4, "p_gen_dynamite03x", 0, 0);
	Function_463(&Local_1118 + 4, "p_gen_dynamite02x", 0, 0);
	if (!Function_406(&Local_1118 + 4))
	{
		return 0;
	}
	Local_1118 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_56()));
	Local_1118.f_56 = CREATE_PROP_IN_LAYOUT(Local_1118, "ncrate13x0", "p_gen_crate13x", -0,09477046f, 1,610811f, 1,05388f, 0.0f, -86,73031f, 0.0f, 0);
	Local_1118.f_60 = CREATE_PROP_IN_LAYOUT(Local_1118, "ncrate13x1", "p_gen_crate13x", -0,0395196f, 1,217891f, 1,021657f, 0.0f, 0.0f, 0.0f, 0);
	Local_1118.f_64 = CREATE_PROP_IN_LAYOUT(Local_1118, "dynamiteCrate01x0", "p_gen_dynamiteCrate01x", -0,03047861f, 1,252194f, 0,9159957f, 0.0f, -42,38099f, 0.0f, 0);
	Local_1118.f_68 = CREATE_PROP_IN_LAYOUT(Local_1118, "dynamiteCrate01x1", "p_gen_dynamiteCrate01x", -0,3073317f, 1,270497f, 1,259794f, 0.0f, 91,19865f, 0.0f, 0);
	Local_1118.f_72 = CREATE_PROP_IN_LAYOUT(Local_1118, "dynamiteCrate01x2", "p_gen_dynamiteCrate01x", -0,4176571f, 1,64012f, 0,8169175f, 0.0f, 0.0f, 0.0f, 0);
	Local_1118.f_76 = CREATE_PROP_IN_LAYOUT(Local_1118, "dynamite03x0", "p_gen_dynamite03x", -0,4272528f, 1,642763f, 1,147866f, 0.0f, -41,63924f, 0.0f, 0);
	Local_1118.f_80 = CREATE_PROP_IN_LAYOUT(Local_1118, "dynamite02x0", "p_gen_dynamite02x", 0,08020926f, 1,635733f, 1,354899f, 1,762274f, 0.0f, 0.0f, 0);
	Function_462(Local_1118, iParam0);
	return 1;
}

bool Function_468(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x15DB9 / 89529
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

void Function_469() //Position: 0x15E72 / 89714
{
	Local_4.f_952 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "StageCoach_S5_03set", 0);
	(*&Local_4 + 924)[02] = Function_304(Local_4, "Chuckwagon_S5_03", 1200, 977, -4271,522f, 30,05997f, 3037,975f, 0.0f, -39,11447f, 0.0f, 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(Local_4.f_952, (*&Local_4 + 924)[02]);
	(*&Local_4 + 924)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WagonDriver_S5_03", 405, -4276,267f, 30,61671f, 3038,15f, -0,02896471f, -38,10892f, -0,2336061f);
	ADD_ACTORSET_MEMBER(Local_4.f_952, (*&Local_4 + 924)[12]);
	SET_ACTOR_FACTION((*&Local_4 + 924)[12], 19);
	(*&Local_4 + 924)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WagonShotgun_S5_03", 402, -4274,706f, 30,39703f, 3032,587f, -0,03248845f, -45,45274f, -0,2283283f);
	ADD_ACTORSET_MEMBER(Local_4.f_952, (*&Local_4 + 924)[22]);
	SET_ACTOR_FACTION((*&Local_4 + 924)[22], 19);
	return;
}

void Function_470() //Position: 0x15FB2 / 90034
{
	if (bLocal_1014 == (*&Local_4 + 892)[12])
	{
		if (IS_ACTOR_VALID(bLocal_1014))
		{
			if (!GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1012, false) != bLocal_1014)
			{
				if (!SET_ACTOR_IN_VEHICLE(bLocal_1014, bLocal_1012, false))
				{
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_1015))
		{
			if (!GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1012, true) != bLocal_1015)
			{
				if (!SET_ACTOR_IN_VEHICLE(bLocal_1015, bLocal_1012, true))
				{
				}
			}
		}
	}
	if (!IS_ACTORSET_VALID(Local_4.f_920))
	{
		Function_472();
		SET_ACTOR_IN_VEHICLE((*&Local_4 + 892)[12], (*&Local_4 + 892)[02], false);
		SET_ACTOR_IN_VEHICLE((*&Local_4 + 892)[22], (*&Local_4 + 892)[02], true);
		SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 892)[12], false);
		SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 892)[02], false);
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, (*&Local_4 + 892)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, (*&Local_4 + 892)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, (*&Local_4 + 892)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, (*&Local_4 + 892)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(2, (*&Local_4 + 892)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(2, (*&Local_4 + 892)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(3, (*&Local_4 + 892)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(3, (*&Local_4 + 892)[02]), false);
		}
		MEMORY_REPORT_POSITION_AUTO((*&Local_4 + 892)[22], bLocal_1016, true);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_4 + 892)[12], Local_4.f_2872, true, 0, 0, 1, false);
		Function_358((*&Local_4 + 892)[02]);
		vLocal_1030 = { StackVal, StackVal, Function_358((*&Local_4 + 892)[02]) };
		STREAMING_LOAD_BOUNDS(vLocal_1030, 200.0f, 1);
		Function_183(256);
	}
	if (bLocal_1012 == (*&Local_4 + 892)[02] && ((!Function_468(bLocal_1012, 2, 0, 4294967295) || !Function_453(bLocal_1012, bLocal_1016, 150.0f)) || !IS_ACTOR_ALIVE(bLocal_1014)))
	{
		if (Function_359((*&Local_4 + 892)[12], 1, 1, 1, 1, 0, 0, 0, 0))
		{
			bLocal_1014 = (*&Local_4 + 892)[12];
			bLocal_1015 = (*&Local_4 + 892)[22];
		}
		else if (Function_359((*&Local_4 + 892)[22], 1, 1, 1, 1, 0, 0, 0, 0))
		{
			bLocal_1014 = (*&Local_4 + 892)[22];
		}
		bLocal_1012 = (*&Local_4 + 892)[02];
		Function_460();
		TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_1014, bLocal_1074, Local_4.f_2872, 0.0f, 1, 0);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1014, 15.0f);
		AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_1014, 0);
	}
	if (!IS_ACTORSET_VALID(Local_4.f_840))
	{
		Function_471();
		Function_345((*&Local_4 + 828)[02], 0, 0);
		REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 828)[02]));
	}
	if (bLocal_1012 == (*&Local_4 + 860)[02] && IS_ACTOR_VALID((*&Local_4 + 860)[02]))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 860)[02], false)))
		{
			if (IS_ACTOR_ALIVE(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 860)[02], false)) && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 860)[02]), "sloweddown"))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(GET_ACTOR_IN_VEHICLE_SEAT((*&Local_4 + 860)[02], false), Local_4.f_2868, 2, 0, 0, 1, false);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR((*&Local_4 + 860)[02]), "sloweddown", true);
			}
		}
	}
	return;
}

void Function_471() //Position: 0x162A2 / 90786
{
	Local_4.f_840 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Ambush_S5_01set", 0);
	(*&Local_4 + 828)[02] = Function_351(Local_4, "Ambush_S5_01_1", 401, Function_56(), 980, -3760,537f, 7,849437f, 3531,49f, -0,5021762f, 25,04763f, 1,466786f);
	ADD_ACTORSET_MEMBER(Local_4.f_840, (*&Local_4 + 828)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 828)[02], 19);
	return;
}

void Function_472() //Position: 0x16328 / 90920
{
	Local_4.f_920 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "StageCoach_S5_02set", 0);
	(*&Local_4 + 892)[02] = Function_304(Local_4, "Chuckwagon_S5_02", 1200, 977, -3868,016f, 10,79292f, 3210,056f, 0.0f, 106,0406f, 0.0f, 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(Local_4.f_920, (*&Local_4 + 892)[02]);
	(*&Local_4 + 892)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WagonDriver_S5_02", 404, -3876,338f, 11,04287f, 3214,127f, -0,06965236f, 70,90082f, -0,3173002f);
	ADD_ACTORSET_MEMBER(Local_4.f_920, (*&Local_4 + 892)[12]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[12], 19);
	(*&Local_4 + 892)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WagonShotgun_S5_02", 401, -3875,604f, 10,87489f, 3206,413f, -0,6180866f, 87,88683f, -0,8691483f);
	ADD_ACTORSET_MEMBER(Local_4.f_920, (*&Local_4 + 892)[22]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[22], 19);
	return;
}

void Function_473(bool bParam0) //Position: 0x16468 / 91240
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1)))
			{
				if (IS_ACTOR_RIDING_VEHICLE(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1)))
				{
					bVar0 = GET_VEHICLE(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
					DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
					DESTROY_ACTOR(bVar0);
				}
				else if (IS_ACTOR_RIDING(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1)))
				{
					bVar0 = GET_MOUNT(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
					DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
					DESTROY_ACTOR(bVar0);
				}
				else
				{
					DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
				}
			}
			bVar1++;
		}
	}
	return;
}

void Function_474() //Position: 0x16501 / 91393
{
	if (IS_ACTOR_VALID(bLocal_1014))
	{
		if (!GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1012, false) != bLocal_1014)
		{
			if (!SET_ACTOR_IN_VEHICLE(bLocal_1014, bLocal_1012, false))
			{
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_1015))
	{
		if (!GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1012, true) != bLocal_1015)
		{
			if (!SET_ACTOR_IN_VEHICLE(bLocal_1015, bLocal_1012, true))
			{
			}
		}
	}
	if (bLocal_1012 != (*&Local_4 + 860)[02])
	{
		if (IS_ACTOR_ALIVE((*&Local_4 + 860)[12]))
		{
			bLocal_1014 = (*&Local_4 + 860)[12];
			if (IS_ACTOR_ALIVE((*&Local_4 + 860)[22]))
			{
				bLocal_1015 = (*&Local_4 + 860)[22];
			}
		}
		else if (IS_ACTOR_ALIVE((*&Local_4 + 860)[22]))
		{
			bLocal_1014 = (*&Local_4 + 860)[22];
		}
		bLocal_1012 = (*&Local_4 + 860)[02];
		Function_460();
		if (!GET_TASK_STATUS(bLocal_1014, 43) != 1)
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1014, Local_4.f_2868, 3, 0, 0, 1, false);
		}
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1014, 15.0f);
		if (IS_ACTOR_VALID(bLocal_1014))
		{
			GIVE_WEAPON_TO_ACTOR(bLocal_1014, 40, 0,5f, 1, 1);
			MEMORY_ALLOW_SHOOTING(bLocal_1014, false);
		}
		Function_344();
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_765, 2);
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_765, 0);
		AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_1014, 0);
	}
	return;
}

void Function_475() //Position: 0x1661D / 91677
{
	if (!IS_ACTORSET_VALID(Local_4.f_888))
	{
		Function_476();
		SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 860)[12], false);
		SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 860)[02], false);
		MEMORY_REPORT_POSITION_AUTO((*&Local_4 + 860)[22], bLocal_1016, true);
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, (*&Local_4 + 860)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, (*&Local_4 + 860)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, (*&Local_4 + 860)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, (*&Local_4 + 860)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(2, (*&Local_4 + 860)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(2, (*&Local_4 + 860)[02]), false);
		}
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(3, (*&Local_4 + 860)[02])))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(3, (*&Local_4 + 860)[02]), false);
		}
		TASK_STAND_STILL((*&Local_4 + 860)[12], -1.0f, 0, 0);
		TASK_STAND_STILL((*&Local_4 + 860)[22], -1.0f, 0, 0);
		Function_358((*&Local_4 + 860)[02]);
		vLocal_1030 = { StackVal, StackVal, Function_358((*&Local_4 + 860)[02]) };
		STREAMING_LOAD_BOUNDS(vLocal_1030, 200.0f, 1);
	}
	return;
}

void Function_476() //Position: 0x1671B / 91931
{
	Local_4.f_888 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "StageCoach_S5_01set", 0);
	(*&Local_4 + 860)[02] = Function_304(Local_4, "Chuckwagon_S5_01", 1200, 977, -3729,16f, 7,781366f, 3418,573f, 0.0f, 218,2402f, 0.0f, 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(Local_4.f_888, (*&Local_4 + 860)[02]);
	(*&Local_4 + 860)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WagonDriver_S5_01", 403, -3742,459f, 8,845832f, 3416.0f, -179,968f, -44,56268f, 179,7261f);
	ADD_ACTORSET_MEMBER(Local_4.f_888, (*&Local_4 + 860)[12]);
	SET_ACTOR_FACTION((*&Local_4 + 860)[12], 19);
	(*&Local_4 + 860)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WagonShotgun_S5_01", 400, -3738,782f, 9,321652f, 3420f, -179,9531f, -60,93573f, 179,7075f);
	ADD_ACTORSET_MEMBER(Local_4.f_888, (*&Local_4 + 860)[22]);
	SET_ACTOR_FACTION((*&Local_4 + 860)[22], 19);
	return;
}

void Function_477() //Position: 0x1685B / 92251
{
	if (IS_ACTOR_VALID(bLocal_1012))
	{
		Function_481();
		if (Function_468(bLocal_1012, 1, 0, 4294967295))
		{
			if ((!Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0) && !Function_359(bLocal_1015, 1, 1, 1, 1, 0, 0, 0, 0)) && !GET_TASK_STATUS(bLocal_1012, 43) != 1)
			{
				if (bLocal_1012 == (*&Local_4 + 860)[02])
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1012, Local_4.f_2868, 5, 0, 0, 1, 2.0f);
				}
				else if (bLocal_1012 == (*&Local_4 + 892)[02])
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1012, Local_4.f_2876, 5, 0, 0, 1, 2.0f);
				}
				else
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1012, Local_4.f_2916, 5, 0, 0, 1, 2.0f);
				}
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_1012, false);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_1012, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_1012, false);
			}
			Function_480();
			if (IS_ACTOR_ALIVE(bLocal_1014))
			{
				if ((!GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1012, false) != bLocal_1014 && !DECOR_CHECK_EXIST(bLocal_1014, "leftvehicle")) && !DECOR_CHECK_EXIST(bLocal_1014, "transition"))
				{
					SET_ACTOR_IN_VEHICLE(bLocal_1014, bLocal_1012, false);
				}
			}
			if (!IS_ACTOR_ALIVE(bLocal_1015) && IS_ACTOR_ALIVE(bLocal_1014))
			{
				if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1014), "canshoot"))
				{
					MEMORY_REPORT_POSITION_AUTO(bLocal_1014, Global_34573, true);
					MEMORY_ATTACK_ON_SIGHT(bLocal_1014, 1);
					GIVE_WEAPON_TO_ACTOR(bLocal_1014, 40, 0,5f, 1, 1);
					GIVE_WEAPON_TO_ACTOR(bLocal_1014, 39, 0,5f, 1, 1);
					ACTOR_END_FORCE_HOLSTER(bLocal_1014);
					MEMORY_CONSIDER_AS_ENEMY(bLocal_1014, Global_34573);
					MEMORY_ALLOW_SHOOTING(bLocal_1014, true);
					DECOR_SET_BOOL(bLocal_1014, "canshoot", true);
					TASK_PRIORITY_SET(bLocal_1014, false);
					LOG_ERROR("telling driver that he can shoot because shotgunner is dead");
				}
			}
		}
		if (((IS_ACTOR_ALIVE(bLocal_1014) && !IS_ACTOR_RIDING_VEHICLE(bLocal_1014)) && !DECOR_CHECK_EXIST(bLocal_1014, "canshoot")) && DECOR_CHECK_EXIST(bLocal_1014, "leftvehicle"))
		{
			MEMORY_REPORT_POSITION_AUTO(bLocal_1014, Global_34573, true);
			GIVE_WEAPON_TO_ACTOR(bLocal_1014, 40, false, 1, 1);
			ACTOR_END_FORCE_HOLSTER(bLocal_1014);
			MEMORY_CONSIDER_AS_ENEMY(bLocal_1014, Global_34573);
			MEMORY_ALLOW_SHOOTING(bLocal_1014, true);
			DECOR_SET_BOOL(bLocal_1014, "canshoot", true);
			LOG_ERROR("telling driver that he can shoot");
		}
		if (IS_ACTOR_VALID(bLocal_1012) && ((!IS_ACTOR_ALIVE(bLocal_1014) && !IS_ACTOR_ALIVE(bLocal_1015)) || (GET_NUM_WEAPONS_IN_INVENTORY(bLocal_1014) != 0 && GET_NUM_WEAPONS_IN_INVENTORY(bLocal_1015) != 0)))
		{
			if (IS_ACTOR_VALID(bLocal_1014))
			{
				TASK_STAND_STILL(bLocal_1014, -1.0f, 0, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1014)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1014));
				}
			}
			if (IS_ACTOR_VALID(bLocal_1015))
			{
				TASK_STAND_STILL(bLocal_1015, -1.0f, 0, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1015)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1015));
				}
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1012)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1012));
			}
		}
		if (!bLocal_1058)
		{
			Function_478();
		}
	}
	return;
}

void Function_478() //Position: 0x16B5F / 93023
{
	Function_479((*&Local_4 + 860)[02]);
	Function_479((*&Local_4 + 892)[02]);
	Function_479((*&Local_4 + 924)[02]);
	return;
}

void Function_479(bool bParam0) //Position: 0x16B86 / 93062
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bLocal_1012))
	{
		if (((Function_359(bLocal_1014, 1, 1, 1, 1, 0, 0, 0, 0) && bParam0 != bLocal_1012) && IS_ACTOR_RIDING_VEHICLE(bLocal_1014)) && (Function_395(bLocal_1012, Global_34573, 50.0f) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_1012, 1065353216, 1117126656, 1, 1, 0)))
		{
			if (!IS_BLIP_VALID(bLocal_1064))
			{
				bLocal_1064 = ADD_BLIP_FOR_ACTOR(bLocal_1012, 322, 0, 2, 0);
			}
		}
		else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
		}
	}
	return;
}

void Function_480() //Position: 0x16C0F / 93199
{
	if ((!IS_ACTOR_ALIVE(bLocal_1014) && IS_ACTOR_ALIVE(bLocal_1015)) && IS_ACTOR_RIDING_VEHICLE(bLocal_1015))
	{
		bLocal_1014 = bLocal_1015;
		bLocal_1015 = "";
		bLocal_1027 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(false, 0);
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_1012, 0, 2, 0);
		if (bLocal_1012 == (*&Local_4 + 860)[02])
		{
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2868, -5.0f, 1, false);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1012, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2868, -5.0f, 1, false);
		}
		if (bLocal_1012 != (*&Local_4 + 892)[02] && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 892)[02]), "retasked"))
		{
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2876, -5.0f, 1, false);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1012, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2876, -5.0f, 1, false);
		}
		if (bLocal_1012 != (*&Local_4 + 924)[02] && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR((*&Local_4 + 924)[02]), "retasked"))
		{
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2916, -5.0f, 1, false);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1012, GET_OBJECT_FROM_ACTOR(bLocal_1016), Local_4.f_2916, -5.0f, 1, false);
		}
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_1014, bLocal_1027);
		TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
		DECOR_SET_BOOL(bLocal_1014, "transition", true);
		MEMORY_ALLOW_SHOOTING(bLocal_1014, true);
		ACTOR_END_FORCE_HOLSTER(bLocal_1014);
		MEMORY_CONSIDER_AS_ENEMY(bLocal_1014, Global_34573);
		MEMORY_CONSIDER_AS_ENEMY(bLocal_1014, bLocal_1015);
		GIVE_WEAPON_TO_ACTOR(bLocal_1014, 40, 0,5f, 1, 1);
		GIVE_WEAPON_TO_ACTOR(bLocal_1014, 39, 0,5f, 1, 1);
	}
	return;
}

void Function_481() //Position: 0x16D9D / 93597
{
	int iVar0;
	bool bVar3;
	vector3 vVar4;
	struct<5> Var7;
	bool bVar13;
	vector3 vVar14;
	struct<5> Var17;
	bool bVar23;
	vector3 vVar24;
	struct<5> Var27;
	
	if (IS_ACTOR_VALID(bLocal_1012))
	{
		if (bLocal_1012 == (*&Local_4 + 860)[02])
		{
			if (IS_OBJECT_VALID(Local_1118.f_56) && !DECOR_CHECK_EXIST(bLocal_1012, "setupcrates"))
			{
				bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), bLocal_735, 4294967295, 1);
				ADD_OBJECT_TO_OBJECTSET(Local_1118.f_56, bVar3);
				ADD_OBJECT_TO_OBJECTSET(Local_1118.f_60, bVar3);
				ADD_OBJECT_TO_OBJECTSET(Local_1118.f_64, bVar3);
				ADD_OBJECT_TO_OBJECTSET(Local_1118.f_68, bVar3);
				ADD_OBJECT_TO_OBJECTSET(Local_1118.f_72, bVar3);
				ADD_OBJECT_TO_OBJECTSET(Local_1118.f_76, bVar3);
				ADD_OBJECT_TO_OBJECTSET(Local_1118.f_80, bVar3);
				Function_485(bVar3, bLocal_1012);
				DESTROY_OBJECTSET(bVar3);
				DECOR_SET_BOOL(bLocal_1012, "setupcrates", true);
			}
			if (Function_484(Local_1118, &iVar0))
			{
				Function_482(bLocal_1012);
				vVar4 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&iVar0, 5.0f, &Var7, &uVar10);
				Var7.f_4 = (StackVal + 0,1f);
				_CREATE_EXPLOSION(&Var7, "Merchant03BlockadeExplosion", false, &vVar4, 1);
				Function_227();
			}
		}
		else if (bLocal_1012 == (*&Local_4 + 892)[02])
		{
			if (IS_OBJECT_VALID(Local_1139.f_32) && !DECOR_CHECK_EXIST(bLocal_1012, "setupcrates"))
			{
				bVar13 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), bLocal_735, 4294967295, 1);
				ADD_OBJECT_TO_OBJECTSET(Local_1139.f_32, bVar13);
				ADD_OBJECT_TO_OBJECTSET(Local_1139.f_36, bVar13);
				Function_485(bVar13, bLocal_1012);
				DESTROY_OBJECTSET(bVar13);
				DECOR_SET_BOOL(bLocal_1012, "setupcrates", true);
			}
			if (Function_484(Local_1139, &iVar0))
			{
				Function_482(bLocal_1012);
				vVar14 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&iVar0, 5.0f, &Var17, &uVar20);
				Var17.f_4 = (StackVal + 0,1f);
				_CREATE_EXPLOSION(&Var17, "Merchant03BlockadeExplosion", false, &vVar14, 1);
				Function_226();
			}
		}
		else if (bLocal_1012 == (*&Local_4 + 924)[02])
		{
			if (IS_OBJECT_VALID(Local_1149.f_32) && !DECOR_CHECK_EXIST(bLocal_1012, "setupcrates"))
			{
				bVar23 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), bLocal_735, 4294967295, 1);
				ADD_OBJECT_TO_OBJECTSET(Local_1149.f_32, bVar23);
				ADD_OBJECT_TO_OBJECTSET(Local_1149.f_36, bVar23);
				Function_485(bVar23, bLocal_1012);
				DESTROY_OBJECTSET(bVar23);
				DECOR_SET_BOOL(bLocal_1012, "setupcrates", true);
			}
			if (Function_484(Local_1149, &iVar0))
			{
				Function_482(bLocal_1012);
				vVar24 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&iVar0, 5.0f, &Var27, &uVar30);
				Var27.f_4 = (StackVal + 0,1f);
				_CREATE_EXPLOSION(&Var27, "Merchant03BlockadeExplosion", false, &vVar24, 1);
				Function_225();
			}
		}
	}
	return;
}

void Function_482(bool bParam0) //Position: 0x17059 / 94297
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_358(bParam0);
		vLocal_1030 = { StackVal, StackVal, Function_358(bParam0) };
		Function_483(GET_OBJECT_FROM_ACTOR(bParam0));
		vVar0 = { StackVal, StackVal, Function_483(GET_OBJECT_FROM_ACTOR(bParam0)) };
		bVar5 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false);
		if (IS_ACTOR_VALID(bVar5))
		{
			KILL_ACTOR(bVar5);
			ENABLE_VEHICLE_SEAT(bParam0, false, 0);
		}
		bVar5 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, true);
		if (IS_ACTOR_VALID(bVar5))
		{
			KILL_ACTOR(bVar5);
			ENABLE_VEHICLE_SEAT(bParam0, true, 0);
		}
		bVar3 = false;
		while (bVar3 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
		{
			bVar4 = GET_DRAFT_ACTOR(bVar3, bParam0);
			if (IS_ACTOR_VALID(bVar4))
			{
				DETACH_DRAFT_FROM_VEHICLE_BY_ACTOR(bVar4, bParam0);
				SET_ACTOR_HEADING(bVar4, 0.0f, 1);
			}
			bVar3++;
		}
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "kersploded", true);
		REMOVE_ALL_OBJECT_ATTACHMENTS(bParam0);
		uVar6 = GET_PHYSINST_FROM_ACTOR(bParam0);
		HIDE_PHYSINST(GET_PHYSINST_FROM_ACTOR(bParam0));
		if (IS_OBJECT_VALID(bLocal_1003))
		{
			HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bLocal_1003));
		}
		if (IS_OBJECT_VALID(bLocal_1004))
		{
			HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bLocal_1004));
		}
		if (IS_OBJECT_VALID(bLocal_1005))
		{
			HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bLocal_1005));
		}
		if (IS_OBJECT_VALID(bLocal_1006))
		{
			HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bLocal_1006));
		}
		DESTROY_ACTOR(bParam0);
		if (bParam0 == (*&Local_4 + 760)[32])
		{
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01bx01", "p_gen_wagonExplode01bx", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01cx01", "p_gen_wagonExplode01cx", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01dx01", "p_gen_wagonExplode01dx", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01ex01", "p_gen_wagonExplode01ex", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01fx01", "p_gen_wagonExplode01fx", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01gx01", "p_gen_wagonExplodeYoke01x", vLocal_1030, vVar0, 0);
		}
		else
		{
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01bx02", "p_gen_wagonExplode01bx", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01cx02", "p_gen_wagonExplode01cx", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01dx02", "p_gen_wagonExplode01dx", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01ex02", "p_gen_wagonExplode01ex", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01fx02", "p_gen_wagonExplode01fx", vLocal_1030, vVar0, 0);
			CREATE_PROP_IN_LAYOUT(bLocal_735, "wagonExplode01gx01", "p_gen_wagonExplodeYoke01x", vLocal_1030, vVar0, 0);
		}
	}
	return;
}

vector3 Function_483(bool bParam0) //Position: 0x17471 / 95345
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

bool Function_484(bool bParam0, int iParam1) //Position: 0x17498 / 95384
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_IN_LAYOUT(bVar0, GET_EVENT_LAYOUT());
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
				if (IS_EVENT_VALID(bVar2))
				{
					if (GET_EVENT_TYPE(bVar2) == 17)
					{
						Function_243(bVar1);
						*iParam1 = { StackVal, StackVal, Function_243(bVar1) };
						DESTROY_ITERATOR(bVar0);
						return 1;
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		DESTROY_ITERATOR(bVar0);
	}
	return 0;
}

void Function_485(bool bParam0, bool bParam1) //Position: 0x17505 / 95493
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (IS_OBJECTSET_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				SET_OBJECT_COLLIDE_WITH_OBJECT(bVar1, bParam1, false);
				bVar2 = false;
				while (bVar2 <= GET_OBJECTSET_SIZE(bParam0))
				{
					bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bParam0);
					if (IS_OBJECT_VALID(bVar3))
					{
						if (bVar1 != bVar3)
						{
							SET_OBJECT_COLLIDE_WITH_OBJECT(bVar1, bVar3, false);
						}
					}
					bVar2++;
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_486() //Position: 0x17578 / 95608
{
	if (iLocal_744 < 3 && iLocal_744 > 106)
	{
		Function_506();
		Function_427();
		Function_452();
		Function_450();
		if (iLocal_744 <= 9)
		{
			if (!Function_504(bLocal_1016, (*&Local_4 + 1028)[1], 250.0f))
			{
				Function_447(1);
			}
			else if (!Function_504(bLocal_1016, (*&Local_4 + 1028)[1], 150.0f))
			{
				Function_447(0);
			}
		}
		if (IS_ACTOR_VALID((*&Local_4 + 760)[12]))
		{
			if ((StackVal && !Function_415(StackVal, iLocal_1057, (*&Local_4 + 760)[12], *(&Local_4 + 2444[36]), 2.0f)) && !GET_TASK_STATUS((*&Local_4 + 760)[12], 50) != 1)
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_4 + 760)[12], -1.0f);
			}
		}
		Function_419(&iLocal_918, 60.0f, 200.0f, bLocal_765, "Merchant03_obj_return", "Merchant03_too_far", &bLocal_753, 0, 0, 0, 325, 1);
	}
	switch (iLocal_744)
	{
		case 0x00000000:
			Function_336(0);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_MERCHANT03", &uLocal_1116);
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			if (iLocal_767[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, GET_PLAYER_ACTOR(0), *(&Local_4 + 1624[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_765, *(&Local_4 + 1624[36]), 1, true, 1);
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
				SET_ACTOR_HEALTH(bLocal_765, GET_ACTOR_MAX_HEALTH(bLocal_765));
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				bLocal_766 = Function_335(StackVal, StackVal, *(&Local_4 + 1624[06]), 0, 1, 1);
				if (!Function_334(bLocal_766))
				{
					Function_333(&Local_736);
				}
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 2444[56]), 50.0f, 0);
				Function_230(&iLocal_909);
				iLocal_744 = 1;
			}
			else
			{
				Function_230(&iLocal_909);
				iLocal_744 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && STREAMING_ARE_BOUNDS_LOADED(*(&Local_4 + 2444[56]), 50.0f)) && Function_503())
			{
				Local_4.f_756 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "StageCoach_S4set", 0);
				(*&Local_4 + 744)[02] = Function_304(Local_4, "Stagecoach_4", 1202, 976, -3651,216f, 28,4411f, 3999,159f, 0,03465234f, 72,49638f, 0,3604871f, 0, 977, 976, 976, 4);
				ADD_ACTORSET_MEMBER(Local_4.f_756, (*&Local_4 + 744)[02]);
				SET_ACTOR_INVULNERABILITY((*&Local_4 + 744)[02], true);
				bLocal_1016 = (*&Local_4 + 744)[02];
				Function_297(&(Local_962[117]), bLocal_1016, "wagon", 1, 0x5f5e100, 1);
				Function_296(bLocal_1016);
				Function_295(bLocal_1016);
				SET_ACTOR_IN_VEHICLE(GET_PLAYER_ACTOR(0), bLocal_1016, true);
				SET_ACTOR_IN_VEHICLE(bLocal_765, bLocal_1016, false);
				MEMORY_ALLOW_SHOOTING(bLocal_765, false);
				bLocal_1007 = Local_4.f_2852;
				TASK_FOLLOW_PATH_FROM_POINT(StackVal, StackVal, bLocal_765, Function_502(bLocal_1007, 4, *(&Local_4 + 2444[06]), bLocal_1007), 0, 0, 1, 0);
				bLocal_1095 = DROP_ACCESSORY_ENUM(bLocal_765, 0);
				DESTROY_OBJECT(bLocal_1095);
				Function_501();
				if (IS_OBJECT_VALID(bLocal_1094))
				{
					Function_404(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2444[56]), *(&Local_4 + 2444[56] + 12), *(&Local_4 + 2444[16]));
					TRAIN_SET_TARGET_SPEED(bLocal_1093, 15.0f);
					TRAIN_SET_AUTOPILOT_ENABLE(bLocal_1093, 1);
				}
				Function_230(&iLocal_909);
				iLocal_744 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_282(&iLocal_909) <= 2.0f || iLocal_767[2])
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				bLocal_1017 = GET_DRAFT_ACTOR(false, bLocal_1016);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_1017, false);
				SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1017, 0);
				SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1017, false);
				bLocal_1018 = GET_DRAFT_ACTOR(true, bLocal_1016);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_1018, false);
				SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1018, 0);
				SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1018, false);
				AI_GOAL_LOOK_AT_ACTOR(bLocal_765, bLocal_1017, 0, 1065353216, 3212836864, 3212836864, 0);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_765, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_765, 2);
				AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_765, 0);
				ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), 41, 1);
				if (!SQUAD_IS_VALID(bLocal_1009))
				{
					bLocal_1009 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_735, "mountedattackersquad"));
				}
				Function_242(iLocal_743);
				Function_327(StackVal, StackVal, Function_242(iLocal_743), iLocal_743, Global_30628[1], Function_245(iLocal_743), 4);
				Function_230(&iLocal_909);
				iLocal_744 = 6;
			}
			break;
		
		case 0x00000006:
			Function_433();
			if (!HUD_IS_FADING())
			{
				if (Function_287(&Local_736))
				{
					Function_500();
					Function_230(&iLocal_1111);
				}
				Function_405();
				Function_230(&iLocal_909);
				Function_230(&iLocal_915);
				Function_230(&iLocal_918);
				iLocal_744 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(bLocal_1016, (*&Local_4 + 1028)[0]) && !bLocal_1062)
			{
				STREAMING_UNLOAD_BOUNDS();
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 2444[26]), 50.0f, 0);
				Function_325(&iLocal_1117, 47, 0, 4294967295, 4294967295);
				bLocal_1062 = true;
				Function_230(&iLocal_909);
			}
			if (bLocal_1062)
			{
				if (!bLocal_1097)
				{
					if (STREAMING_ARE_BOUNDS_LOADED(*(&Local_4 + 2444[26]), 20.0f))
					{
						Function_494();
					}
					else
					{
						STREAMING_LOAD_BOUNDS(*(&Local_4 + 2444[26]), 50.0f, 0);
					}
				}
			}
			if (!iLocal_1057)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!Function_284(&iLocal_1054))
					{
						Function_394(&iLocal_1054, 13,1f);
					}
					else if (Function_282(&iLocal_1054) < 13.0f)
					{
						if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_765, 1))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_393();
							}
							Function_230(&iLocal_1054);
						}
					}
					if (Function_399(bLocal_1009, bLocal_765, 25.0f, 1))
					{
						if (!bLocal_1062)
						{
							Function_325(&iLocal_1117, 47, 0, 4294967295, 4294967295);
						}
						bLocal_1026 = Function_396(bLocal_765, bLocal_1009);
						Function_378();
					}
					else
					{
						if (!bLocal_1062)
						{
							Function_325(&iLocal_1117, 29, 0, 4294967295, 4294967295);
						}
						Function_364();
					}
				}
			}
			if (((IS_OBJECT_VALID(bLocal_1066) && IS_OBJECT_VALID(bLocal_1067)) && IS_OBJECT_VALID(bLocal_1068)) && IS_OBJECT_VALID(bLocal_1069))
			{
				if (Function_282(&iLocal_909) <= 20.0f || Function_504(bLocal_1016, (*&Local_4 + 1028)[1], 85.0f))
				{
					if (!iLocal_1057)
					{
						Function_493(bLocal_1010, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 760)[12]));
						ADD_BLIP_FOR_ACTOR((*&Local_4 + 760)[12], 323, 0, 2, 0);
						Function_492();
						iLocal_1057 = 1;
					}
					else if (!Function_136() && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "tnthelp"))
					{
						Function_135("Merchant03_obj04_help_tnt_shoot", 0x41200000, 1, 0, 2, 1, 0);
						DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "tnthelp", true);
					}
				}
			}
			if (bLocal_1097)
			{
				if (Function_444(bLocal_1016, bLocal_1007, 10.0f))
				{
					if (((!IS_OBJECT_VALID(bLocal_1003) || !IS_OBJECT_VALID(bLocal_1004)) || !IS_OBJECT_VALID(bLocal_1005)) || !IS_OBJECT_VALID(bLocal_1006))
					{
						bLocal_1007 = Local_4.f_2856;
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_765, bLocal_1007, 4, 0, 0, 1, false);
						DYNAMICMIXER_DETRIGGERSTATE(uLocal_1116, 1);
						Function_325(&iLocal_1117, 19, 0, 4294967295, 4294967295);
						Function_231(&iLocal_909, 20.0f);
						iLocal_744 = 10;
					}
					else
					{
						Function_491();
						iLocal_1057 = 1;
						Function_458(bLocal_1009);
						SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1009, false, 1, 4294967295);
						TASK_KILL_CHAR(false, Global_34573);
						ACTOR_END_FORCE_HOLSTER(bLocal_765);
						MEMORY_ALLOW_SHOOTING(bLocal_765, true);
						MEMORY_ATTACK_ON_SIGHT(bLocal_765, 1);
						TASK_STAND_STILL(bLocal_765, -1.0f, 0, 0);
						Function_230(&iLocal_909);
						iLocal_744 = 9;
					}
				}
				else
				{
					Function_433();
				}
			}
			break;
		
		case 0x00000009:
			if (Function_282(&iLocal_909) <= 5.0f)
			{
				Function_402("merchant03_obj04c", 7,5f, 1, 2, 0, 0, 0);
				Function_231(&iLocal_1111, (30.0f / 3.0f));
				Function_230(&iLocal_909);
				iLocal_744 = 10;
			}
			break;
		
		case 0x0000000A:
			if ((!HUD_IS_SHOWING_HELP_TEXT() && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "tnthelp")) && (((IS_OBJECT_VALID(bLocal_1066) && IS_OBJECT_VALID(bLocal_1067)) && IS_OBJECT_VALID(bLocal_1068)) && IS_OBJECT_VALID(bLocal_1069)))
			{
				Function_135("Merchant03_obj04_help_tnt_shoot", -1.0f, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "tnthelp", true);
			}
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ACTOR_RIDING_VEHICLE(Global_34573)) && Function_282(&iLocal_1111) < 30.0f)
			{
				Function_439();
				Function_230(&iLocal_1111);
			}
			if ((((!IS_OBJECT_VALID(bLocal_1003) || !IS_OBJECT_VALID(bLocal_1004)) || !IS_OBJECT_VALID(bLocal_1005)) || !IS_OBJECT_VALID(bLocal_1006)) && !bLocal_1059)
			{
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					HUD_CLEAR_OBJECTIVE();
				}
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1016, true) == GET_PLAYER_ACTOR(0))
				{
					Function_490();
				}
				else
				{
					Function_489();
				}
				if (IS_ACTOR_VALID((*&Local_4 + 760)[02]))
				{
					SET_ACTOR_CAN_BE_TARGETED((*&Local_4 + 760)[02], true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 760)[12]))
				{
					SET_ACTOR_CAN_BE_TARGETED((*&Local_4 + 760)[12], true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 760)[22]))
				{
					SET_ACTOR_CAN_BE_TARGETED((*&Local_4 + 760)[22], true);
				}
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_765, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_765, 2);
				AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_765, 0);
				Function_325(&iLocal_1117, 19, 0, 4294967295, 4294967295);
				MEMORY_ATTACK_ON_SIGHT(bLocal_765, 0);
				MEMORY_ALLOW_SHOOTING(bLocal_765, false);
				ACTOR_START_FORCE_HOLSTER(bLocal_765, 0, 0);
				Function_377(&iLocal_1051);
				bLocal_1059 = true;
			}
			if (bLocal_1059)
			{
				if (Function_282(&iLocal_1051) < 1.0f)
				{
					bLocal_1007 = Local_4.f_2856;
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_765, bLocal_1007, 4, 0, 0, 1, false);
					DYNAMICMIXER_DETRIGGERSTATE(uLocal_1116, 1);
					Function_231(&iLocal_909, 20.0f);
					iLocal_744 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if ((GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1016, true) != GET_PLAYER_ACTOR(0) && !GET_TASK_STATUS(bLocal_765, 43) != 1) && !GET_TASK_STATUS(bLocal_765, 43) != 4)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_765, bLocal_1007, 4, 0, 0, 1, false);
				MEMORY_ALLOW_SHOOTING(bLocal_765, false);
			}
			else if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1016, true) == GET_PLAYER_ACTOR(0) && !GET_TASK_STATUS(bLocal_765, 6) != 1)
			{
				TASK_STAND_STILL(bLocal_765, -1.0f, 0, 0);
				MEMORY_ALLOW_SHOOTING(bLocal_765, true);
			}
			if (Function_282(&iLocal_909) < 35.0f && !GET_ACTOR_IN_VEHICLE_SEAT(bLocal_1016, true) != GET_PLAYER_ACTOR(0))
			{
				Function_135("Merchant03_obj04_help_wagon", 0x41200000, 1, 0, 2, 1, 0);
				Function_230(&iLocal_909);
			}
			if (GET_TASK_STATUS(bLocal_765, 43) == 1)
			{
				Function_488();
				Function_230(&iLocal_909);
				iLocal_744 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "tnthelp"))
				{
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "tnthelp");
				}
				Function_487();
				Function_219();
				Function_230(&iLocal_909);
				iLocal_743 = 4;
				iLocal_744 = 7;
				iLocal_767[3] = 1;
			}
			break;
	}
	return;
}

void Function_487() //Position: 0x1804D / 98381
{
	if (IS_OBJECT_VALID(bLocal_1003))
	{
		DESTROY_OBJECT(bLocal_1003);
	}
	if (IS_OBJECT_VALID(bLocal_1004))
	{
		DESTROY_OBJECT(bLocal_1004);
	}
	if (IS_OBJECT_VALID(bLocal_1005))
	{
		DESTROY_OBJECT(bLocal_1005);
	}
	if (IS_OBJECT_VALID(bLocal_1006))
	{
		DESTROY_OBJECT(bLocal_1006);
	}
	if (IS_OBJECT_VALID(bLocal_1066))
	{
		DESTROY_OBJECT(bLocal_1066);
	}
	if (IS_OBJECT_VALID(bLocal_1067))
	{
		DESTROY_OBJECT(bLocal_1067);
	}
	if (IS_OBJECT_VALID(bLocal_1068))
	{
		DESTROY_OBJECT(bLocal_1068);
	}
	if (IS_OBJECT_VALID(bLocal_1069))
	{
		DESTROY_OBJECT(bLocal_1069);
	}
	return;
}

void Function_488() //Position: 0x180CB / 98507
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bLocal_1009))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bLocal_1009))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1009, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_449(bVar1, 1);
				Function_345(bVar1, 1, 0);
			}
			bVar0++;
		}
	}
	return;
}

void Function_489() //Position: 0x18110 / 98576
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_roadBlock_clearedOff", "Merchant03_roadBlock_clearedOff", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_490() //Position: 0x18177 / 98679
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_roadBlock_cleared", "Merchant03_roadBlock_cleared", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491() //Position: 0x181D8 / 98776
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_shootDynamite", "Merchant03_shootDynamite", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x18231 / 98865
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_roadBlock", "Merchant03_roadBlock", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_493(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x18282 / 98946
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

void Function_494() //Position: 0x1836C / 99180
{
	if (!SQUAD_IS_VALID(bLocal_1010))
	{
		Function_499();
		bLocal_1010 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, Function_56()));
	}
	else
	{
		SQUAD_JOIN((*&Local_4 + 760)[02], bLocal_1010);
		SQUAD_JOIN((*&Local_4 + 760)[12], bLocal_1010);
		SQUAD_JOIN((*&Local_4 + 760)[22], bLocal_1010);
		Function_498(bLocal_1010);
		Function_497(bLocal_1010, 41, 0.0f);
		SET_ACTOR_CAN_BE_TARGETED((*&Local_4 + 760)[02], false);
		SET_ACTOR_CAN_BE_TARGETED((*&Local_4 + 760)[22], false);
		Function_348((*&Local_4 + 760)[02]);
		Function_348((*&Local_4 + 760)[12]);
		Function_348((*&Local_4 + 760)[22]);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_1010, 0);
		Function_496(bLocal_1010, 15, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 760)[02], &Local_4 + 2444[26], 3212836864);
		SET_ACTOR_VISION_MAX_RANGE((*&Local_4 + 760)[02], 100.0f, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 760)[12], &Local_4 + 2444[36], 3212836864);
		SET_ACTOR_VISION_MAX_RANGE((*&Local_4 + 760)[12], 100.0f, 1);
		TASK_OVERRIDE_SET_POSTURE((*&Local_4 + 760)[12], true);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 760)[22], &Local_4 + 2444[46], 3212836864);
		SET_ACTOR_VISION_MAX_RANGE((*&Local_4 + 760)[22], 100.0f, 1);
		Function_495();
	}
	return;
}

void Function_495() //Position: 0x184C4 / 99524
{
	if (iLocal_1109 == 0)
	{
		if (!IS_OBJECT_VALID(bLocal_1003))
		{
			bLocal_1003 = CREATE_PROP_IN_LAYOUT(bLocal_735, "TnT01", "p_gen_crateTnt01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1003, GET_OBJECT_FROM_ACTOR((*&Local_4 + 760)[32]), false);
			ATTACH_OBJECTS(bLocal_1003, GET_OBJECT_FROM_ACTOR((*&Local_4 + 760)[32]), Function_56(), 0,25f, 1,25f, 1,75f, 0.0f, 90.0f, 0.0f, 4294967295);
			SET_PROP_TARGETABLE(GET_PHYSINST_FROM_OBJECT(bLocal_1003), 1, 0);
			SET_PROP_TARGETABLE_ACQUISITION_RADIUS(GET_PHYSINST_FROM_OBJECT(bLocal_1003), 10.0f);
			SET_PROP_TARGETABLE_TARGET_BOX_SIZE(GET_PHYSINST_FROM_OBJECT(bLocal_1003), 1.0f, 1.0f);
			SET_PROP_TARGETABLE_SCORE_BIAS(GET_PHYSINST_FROM_OBJECT(bLocal_1003), -100.0f);
			SET_PROP_TARGETABLE_AS_ENEMY(GET_PHYSINST_FROM_OBJECT(bLocal_1003), 1);
		}
		else
		{
			bLocal_1066 = CREATE_EVENT_TRAP(Function_56(), 5, bLocal_735);
			EVENT_TRAP_ON_TARGET(bLocal_1066, bLocal_1003);
			EVENT_TRAP_ON_PERPETRATOR(bLocal_1066, Global_34573);
			Function_418(bLocal_1003);
			vLocal_1080[03] = { StackVal, StackVal, Function_418(bLocal_1003) };
			iLocal_1109++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		if (!IS_OBJECT_VALID(bLocal_1004))
		{
			bLocal_1004 = CREATE_PROP_IN_LAYOUT(bLocal_735, "TnT02", "p_gen_crateTnt01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1003, bLocal_1004, false);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1004, GET_OBJECT_FROM_ACTOR((*&Local_4 + 760)[32]), false);
			ATTACH_OBJECTS(bLocal_1004, GET_OBJECT_FROM_ACTOR((*&Local_4 + 760)[32]), Function_56(), 0,225f, 1,835f, 1,7f, 0.0f, 90.0f, 0.0f, 4294967295);
			SET_PROP_TARGETABLE(GET_PHYSINST_FROM_OBJECT(bLocal_1004), 1, 0);
			SET_PROP_TARGETABLE_ACQUISITION_RADIUS(GET_PHYSINST_FROM_OBJECT(bLocal_1004), 10.0f);
			SET_PROP_TARGETABLE_TARGET_BOX_SIZE(GET_PHYSINST_FROM_OBJECT(bLocal_1004), 1.0f, 1.0f);
			SET_PROP_TARGETABLE_SCORE_BIAS(GET_PHYSINST_FROM_OBJECT(bLocal_1004), -100.0f);
			SET_PROP_TARGETABLE_AS_ENEMY(GET_PHYSINST_FROM_OBJECT(bLocal_1004), 1);
		}
		else
		{
			bLocal_1067 = CREATE_EVENT_TRAP(Function_56(), 5, bLocal_735);
			EVENT_TRAP_ON_TARGET(bLocal_1067, bLocal_1004);
			EVENT_TRAP_ON_PERPETRATOR(bLocal_1067, Global_34573);
			Function_418(bLocal_1004);
			vLocal_1080[13] = { StackVal, StackVal, Function_418(bLocal_1004) };
			iLocal_1109++;
		}
	}
	else if (iLocal_1109 == 2)
	{
		if (!IS_OBJECT_VALID(bLocal_1005))
		{
			bLocal_1005 = CREATE_PROP_IN_LAYOUT(bLocal_735, "TnT03", "p_gen_crateTnt01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1005, GET_OBJECT_FROM_ACTOR((*&Local_4 + 760)[42]), false);
			ATTACH_OBJECTS(bLocal_1005, GET_OBJECT_FROM_ACTOR((*&Local_4 + 760)[42]), Function_56(), 0,35f, 1,25f, 1.0f, 93.0f, 0.0f, 90.0f, 4294967295);
			SET_PROP_TARGETABLE(GET_PHYSINST_FROM_OBJECT(bLocal_1005), 1, 0);
			SET_PROP_TARGETABLE_ACQUISITION_RADIUS(GET_PHYSINST_FROM_OBJECT(bLocal_1005), 10.0f);
			SET_PROP_TARGETABLE_TARGET_BOX_SIZE(GET_PHYSINST_FROM_OBJECT(bLocal_1005), 1.0f, 1.0f);
			SET_PROP_TARGETABLE_SCORE_BIAS(GET_PHYSINST_FROM_OBJECT(bLocal_1005), -100.0f);
			SET_PROP_TARGETABLE_AS_ENEMY(GET_PHYSINST_FROM_OBJECT(bLocal_1005), 1);
		}
		else
		{
			bLocal_1068 = CREATE_EVENT_TRAP(Function_56(), 5, bLocal_735);
			EVENT_TRAP_ON_TARGET(bLocal_1068, bLocal_1005);
			EVENT_TRAP_ON_PERPETRATOR(bLocal_1068, Global_34573);
			Function_418(bLocal_1005);
			vLocal_1080[23] = { StackVal, StackVal, Function_418(bLocal_1005) };
			iLocal_1109++;
		}
	}
	else if (iLocal_1109 == 3)
	{
		if (!IS_OBJECT_VALID(bLocal_1006))
		{
			bLocal_1006 = CREATE_PROP_IN_LAYOUT(bLocal_735, "TnT04", "p_gen_crateTnt01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1005, bLocal_1006, false);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1006, GET_OBJECT_FROM_ACTOR((*&Local_4 + 760)[42]), false);
			ATTACH_OBJECTS(bLocal_1006, GET_OBJECT_FROM_ACTOR((*&Local_4 + 760)[42]), Function_56(), -0,2f, 1,75f, 1,7f, 0.0f, 0.0f, 0.0f, 4294967295);
			SET_PROP_TARGETABLE(GET_PHYSINST_FROM_OBJECT(bLocal_1006), 1, 0);
			SET_PROP_TARGETABLE_ACQUISITION_RADIUS(GET_PHYSINST_FROM_OBJECT(bLocal_1006), 10.0f);
			SET_PROP_TARGETABLE_TARGET_BOX_SIZE(GET_PHYSINST_FROM_OBJECT(bLocal_1006), 1.0f, 1.0f);
			SET_PROP_TARGETABLE_SCORE_BIAS(GET_PHYSINST_FROM_OBJECT(bLocal_1006), -100.0f);
			SET_PROP_TARGETABLE_AS_ENEMY(GET_PHYSINST_FROM_OBJECT(bLocal_1006), 1);
		}
		else
		{
			bLocal_1069 = CREATE_EVENT_TRAP(Function_56(), 5, bLocal_735);
			EVENT_TRAP_ON_TARGET(bLocal_1069, bLocal_1006);
			EVENT_TRAP_ON_PERPETRATOR(bLocal_1069, Global_34573);
			Function_418(bLocal_1006);
			vLocal_1080[33] = { StackVal, StackVal, Function_418(bLocal_1006) };
			iLocal_1109++;
		}
	}
	else if (iLocal_1109 == 4)
	{
		ENABLE_VEHICLE_SEAT((*&Local_4 + 760)[42], false, 0);
		ENABLE_VEHICLE_SEAT((*&Local_4 + 760)[42], true, 0);
		ENABLE_VEHICLE_SEAT((*&Local_4 + 760)[42], 2, 0);
		ENABLE_VEHICLE_SEAT((*&Local_4 + 760)[42], 3, 0);
		ENABLE_VEHICLE_SEAT((*&Local_4 + 760)[42], 4, 0);
		ENABLE_VEHICLE_SEAT((*&Local_4 + 760)[42], 5, 0);
		bLocal_1097 = true;
	}
	return;
}

void Function_496(bool bParam0, int iParam1, bool bParam2) //Position: 0x18901 / 100609
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
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_497(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1894B / 100683
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

void Function_498(bool bParam0) //Position: 0x18997 / 100759
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

void Function_499() //Position: 0x189DD / 100829
{
	Local_4.f_804 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Blockadeset", 0);
	Local_4.f_808 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Blockade"));
	(*&Local_4 + 760)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Blockader01", 399, -3772,493f, 7,814853f, 3672,32f, 0.0f, 148,6646f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_804, (*&Local_4 + 760)[02]);
	SQUAD_JOIN((*&Local_4 + 760)[02], Local_4.f_808);
	SET_ACTOR_FACTION((*&Local_4 + 760)[02], 19);
	(*&Local_4 + 760)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Blockader02", 400, -3791,25f, 15,82898f, 3678,978f, 0.0f, 176,216f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_804, (*&Local_4 + 760)[12]);
	SQUAD_JOIN((*&Local_4 + 760)[12], Local_4.f_808);
	SET_ACTOR_FACTION((*&Local_4 + 760)[12], 19);
	(*&Local_4 + 760)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Blockader03", 401, -3765,47f, 8,644755f, 3676,81f, 0.0f, 124,0438f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_804, (*&Local_4 + 760)[22]);
	SQUAD_JOIN((*&Local_4 + 760)[22], Local_4.f_808);
	SET_ACTOR_FACTION((*&Local_4 + 760)[22], 19);
	(*&Local_4 + 760)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BlockadeWagon01", 1200, -3771,131f, 7,812618f, 3668,943f, 0.0f, 51,22158f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_804, (*&Local_4 + 760)[32]);
	SQUAD_JOIN((*&Local_4 + 760)[32], Local_4.f_808);
	(*&Local_4 + 760)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BlockadeWagon02", 1200, -3766,77f, 7,812618f, 3670,59f, 0.0f, -23,50035f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_804, (*&Local_4 + 760)[42]);
	SQUAD_JOIN((*&Local_4 + 760)[42], Local_4.f_808);
	return;
}

void Function_500() //Position: 0x18BEC / 101356
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_makeEscape_getsOn", "Merchant03_makeEscape_getsOn", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_501() //Position: 0x18C4D / 101453
{
	bLocal_1093 = TRAIN_CREATE_NEW_TRAIN(8, "rail__rrtrack_02x", 0);
	if (bLocal_1093 != 4294967295)
	{
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1093, 1166);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1093, 1167);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1093, 1165);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1093, 1165);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1093, 1156);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1093, 1160);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1093, 1160);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1093, 1162);
		bLocal_1094 = TRAIN_GET_CAR(bLocal_1093, false);
	}
	else
	{
		LOG_ERROR("train was NOT created");
	}
	return;
}

var Function_502(vector3 vParam0, bool bParam3) //Position: 0x18CE7 / 101607
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
	while (bVar0 < (GET_NUM_PATH_POINTS(bParam3) - 1))
	{
		GET_PATH_POINT(bParam3, bVar0, &vVar1);
		bVar6 = VDIST(vParam0, vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

int Function_503() //Position: 0x18D3C / 101692
{
	Function_411(&Local_4 + 328, 1202, 2, 0);
	Function_411(&Local_4 + 328, 976, 2, 0);
	Function_411(&Local_4 + 328, 399, 2, 0);
	Function_411(&Local_4 + 328, 400, 2, 0);
	Function_411(&Local_4 + 328, 401, 2, 0);
	Function_411(&Local_4 + 328, 1200, 2, 0);
	if (Function_406(&Local_4 + 328))
	{
		return 1;
	}
	return 0;
}

bool Function_504(bool bParam0, var uParam1, float fParam2) //Position: 0x18DA4 / 101796
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_505(uParam1);
		Function_358(bParam0);
		if (VDIST(Function_505(uParam1), Function_358(bParam0)) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("\Attempting to check whether an INVALID actor is in range of volume centre. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_505(bool bParam0) //Position: 0x18E2E / 101934
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_506() //Position: 0x18E3F / 101951
{
	vector3 vVar0;
	
	if (!iLocal_1096)
	{
		if (IS_OBJECT_VALID(bLocal_1066))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1066))
			{
				Function_508();
			}
		}
		if (IS_OBJECT_VALID(bLocal_1067))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1067))
			{
				Function_508();
			}
		}
		if (IS_OBJECT_VALID(bLocal_1068))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1068))
			{
				Function_508();
			}
		}
		if (IS_OBJECT_VALID(bLocal_1069))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1069))
			{
				Function_508();
			}
		}
	}
	vVar0 = { 0.0f, 5.0f, -5.0f };
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01bx01"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01cx01"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01dx01"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01ex01"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01fx01"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01gx01"), vVar0);
	vVar0 = { -5.0f, 5.0f, 0.0f };
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01bx02"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01cx02"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01dx02"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01ex02"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01fx02"), vVar0);
	Function_507(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_735, "wagonExplode01gx02"), vVar0);
	if ((((!IS_OBJECT_VALID(bLocal_1003) && !IS_OBJECT_VALID(bLocal_1004)) && !IS_OBJECT_VALID(bLocal_1005)) && !IS_OBJECT_VALID(bLocal_1006)) && IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1065))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1065);
	}
	return;
}

void Function_507(bool bParam0, struct<5> Param1) //Position: 0x1907D / 102525
{
	bool bVar0;
	vector3 vVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (!DECOR_CHECK_EXIST(bParam0, "nactivated"))
		{
			bVar0 = GET_PHYSINST_FROM_OBJECT(bParam0);
			if (IS_PHYSINST_VALID(bVar0))
			{
				if (IS_PHYSINST_IN_LEVEL(bVar0) && !IS_PHYSINST_ACTIVE(bVar0))
				{
					ACTIVATE_PHYSINST(bVar0);
					DECOR_SET_BOOL(bParam0, "nactivated", true);
					GET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bParam0), &vVar1);
					vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Param1, vVar1, StackVal) };
					if (Param1 < 0.0f)
					{
						SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(bParam0), &vVar1, 0);
					}
					else if (StackVal < 0.0f)
					{
						SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(bParam0), &vVar1, 2);
					}
				}
			}
		}
	}
}

void Function_508() //Position: 0x1911B / 102683
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	
	Function_482((*&Local_4 + 760)[32]);
	Function_482((*&Local_4 + 760)[42]);
	vVar0 = { 0.0f, 0.0f, 0.0f };
	FIND_GROUND_INTERSECTION(&(vLocal_1080[03]), 5.0f, &uVar3, &uVar6);
	_CREATE_EXPLOSION(&uVar3, "Merchant03BlockadeExplosion", false, &vVar0, 1);
	FIND_GROUND_INTERSECTION(&(vLocal_1080[23]), 5.0f, &uVar3, &uVar6);
	_CREATE_EXPLOSION(&uVar3, "Merchant03BlockadeExplosion", false, &vVar0, 1);
	HUD_TIMER_DISPLAY(0);
	Function_487();
	iLocal_1096 = 1;
	if (!IS_PLAYER_DEADEYE(0))
	{
	}
	return;
}

void Function_509() //Position: 0x191BD / 102845
{
	if (iLocal_744 < 4 && iLocal_744 >= 106)
	{
		if (iLocal_744 <= 8 && IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "help_shotgun01") && !Function_136())
			{
				Function_135("Merchant03_obj03_help_shotgun_03", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "help_shotgun01", true);
			}
			if ((!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "help_shotgun02") && !Function_136()) && IS_ACTOR_RIDING_VEHICLE(Global_34573))
			{
				Function_135("Merchant03_obj03_help_shotgun_01", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "help_shotgun02", true);
			}
			if ((!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_1016), "help_shotgun03") && !Function_136()) && IS_ACTOR_RIDING_VEHICLE(Global_34573))
			{
				Function_135("Merchant03_obj03_help_shotgun_02", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "help_shotgun03", true);
			}
		}
		Function_549();
		Function_427();
		Function_419(&iLocal_918, 60.0f, 200.0f, bLocal_765, "Merchant03_obj_return", "Merchant03_too_far", &bLocal_753, 0, 0, 0, 325, 1);
		if (iLocal_744 != 8 && !IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			Function_434();
		}
		else if (iLocal_744 > 9)
		{
			Function_433();
			Function_452();
			Function_450();
			Function_447(1);
		}
		if (iLocal_744 < 8)
		{
			Function_450();
		}
		if (iLocal_744 > 8 && (IS_ACTOR_RIDING_VEHICLE(Global_34573) || GET_ACTOR_VEHICLE_STATE(Global_34573, &iLocal_1107, &iLocal_1108)))
		{
			if (iLocal_744 == 6)
			{
				Function_548(bLocal_765, Local_4.f_664, 2);
				Function_547(bLocal_765, bLocal_1011);
				Function_458(Local_4.f_664);
				Function_546(Local_4.f_660, bLocal_765, 25.0f, -1.0f, 0, 1);
				SQUAD_SET_FACTION(bLocal_1011, 19);
				Function_458(bLocal_1011);
				SQUAD_GOALS_CLEAR(bLocal_1011);
				Function_545(bLocal_1011);
				SET_PATH_LOOPING(Local_4.f_2904, 1);
				SET_PATH_LOOPING(Local_4.f_2908, 1);
				if (IS_ACTOR_ALIVE(bLocal_1019))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1019, Local_4.f_2904, 4, 0, 0, 1, false);
				}
				if (IS_ACTOR_ALIVE(bLocal_1020))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1020, Local_4.f_2908, 4, 0, 0, 1, false);
				}
				Function_493(bLocal_1011, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			Function_230(&iLocal_909);
			Function_230(&iLocal_915);
			Function_230(&iLocal_918);
			iLocal_744 = 8;
		}
	}
	switch (iLocal_744)
	{
		case 0x00000000:
			Function_336(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			SET_ACTOR_HEALTH(bLocal_765, GET_ACTOR_MAX_HEALTH(bLocal_765));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			if (iLocal_767[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				bLocal_766 = Function_335(StackVal, StackVal, *(&Local_4 + 1388[46]), 0, 1, 1);
				if (!Function_334(bLocal_766))
				{
					Function_333(&Local_736);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_308(Global_34573, (*&Local_4 + 1584)[3], 1, 1, 1);
				Function_308(bLocal_765, (*&Local_4 + 1584)[0], 1, 1, 1);
				TASK_STAND_STILL(bLocal_765, -1.0f, 0, 0);
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 1388[46]), 20.0f, 0);
				Function_230(&iLocal_909);
				iLocal_744 = 1;
			}
			else
			{
				Function_230(&iLocal_909);
				iLocal_744 = 2;
			}
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_334(Global_30679[0])) && STREAMING_ARE_BOUNDS_LOADED(*(&Local_4 + 1388[46]), 20.0f)) && Function_544())
			{
				STREAMING_UNLOAD_BOUNDS();
				Function_230(&iLocal_909);
				iLocal_744 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_OBJECT_VALID(bLocal_1073))
			{
				Function_214(bLocal_1073);
			}
			if (Function_542(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_736, iLocal_743))
			{
				Function_230(&iLocal_909);
				Function_223();
				ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[02], true);
				ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[12], true);
				ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[22], true);
				ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[32], true);
				ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[42], true);
				ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 608)[52], true);
				iLocal_744 = 3;
			}
			else
			{
				if (!IS_ACTORSET_VALID(Local_4.f_740))
				{
					Local_4.f_740 = CREATE_ACTORSET_IN_LAYOUT(bLocal_735, "StageCoach_S2set", 0);
					(*&Local_4 + 728)[02] = Function_304(bLocal_735, "Stagecoach_2", 1202, 976, -3142,842f, 43,22709f, 3770,54f, 0.0f, 160.0f, 0.0f, 0, 977, 976, 976, 4);
					ADD_ACTORSET_MEMBER(Local_4.f_740, (*&Local_4 + 728)[02]);
					SET_ACTOR_INVULNERABILITY((*&Local_4 + 728)[02], true);
					bLocal_1016 = (*&Local_4 + 728)[02];
					Function_297(&(Local_962[117]), bLocal_1016, "wagon", 1, 0x5f5e100, 1);
					Function_296(bLocal_1016);
					Function_295(bLocal_1016);
					ENABLE_VEHICLE_SEAT((*&Local_4 + 728)[02], false, 0);
					ENABLE_VEHICLE_SEAT((*&Local_4 + 728)[02], true, 0);
					bLocal_1017 = GET_DRAFT_ACTOR(false, bLocal_1016);
					SET_ACTOR_CAN_BE_TARGETED(bLocal_1017, false);
					SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1017, 0);
					SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1017, false);
					bLocal_1018 = GET_DRAFT_ACTOR(true, bLocal_1016);
					SET_ACTOR_CAN_BE_TARGETED(bLocal_1018, false);
					SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1018, 0);
					SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1018, false);
					START_VEHICLE((*&Local_4 + 728)[02]);
				}
				TASK_CLEAR(bLocal_765);
				iLocal_1107 = 0;
				iLocal_1108 = 2;
				bLocal_1007 = Local_4.f_2852;
				GET_PATH_POINT(bLocal_1007, false, &vLocal_1030);
				ACTOR_POP_NEXT_GAIT(bLocal_765, 2, false);
				bLocal_1027 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_1016, 0, 2, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_765, bLocal_1027);
				TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
				ENABLE_VEHICLE_SEAT(bLocal_1016, true, 1);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1016)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_1016, 325, 0, 2, 0);
				}
				START_VEHICLE(bLocal_1016);
				Function_308(Global_34573, (*&Local_4 + 1584)[3], 1, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 2, 2.0f, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_ACTOR_INVULNERABILITY(Global_34573, false);
				Function_230(&iLocal_909);
				iLocal_744 = 4;
			}
			Function_242(iLocal_743);
			Function_327(StackVal, StackVal, Function_242(iLocal_743), iLocal_743, Global_30628[3], Function_245(iLocal_743), 0);
			break;
		
		case 0x00000003:
			if (Function_275("$/cutscene/MERCHANT03_CS02/MERCHANT03_CS02", &iLocal_745, &Local_736, &iLocal_743, 57068, 113956, 55462, 52580, 52320, 52313, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_230(&iLocal_909);
				Function_230(&iLocal_915);
				Function_230(&iLocal_918);
				iLocal_744 = 4;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_767[1])
			{
				Function_531(1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 580)[02], *(&Local_4 + 1388[66]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 580)[12], *(&Local_4 + 1388[76]), 1, true, 1);
				Function_501();
			}
			if (!IS_ACTORSET_VALID(Local_4.f_720))
			{
				Function_530();
			}
			MEMORY_PREFER_RIDING((*&Local_4 + 684)[02], true);
			ACTOR_MOUNT_ACTOR((*&Local_4 + 684)[02], (*&Local_4 + 684)[22]);
			Function_529(StackVal, StackVal, StackVal, (*&Local_4 + 684)[22], *(&Local_4 + 1388[16]), 1, 1, 1);
			MEMORY_PREFER_RIDING((*&Local_4 + 684)[12], true);
			ACTOR_MOUNT_ACTOR((*&Local_4 + 684)[12], (*&Local_4 + 684)[32]);
			Function_529(StackVal, StackVal, StackVal, (*&Local_4 + 684)[32], *(&Local_4 + 1388[26]), 1, 1, 1);
			Function_528(Local_4.f_724, Local_4.f_664, 1);
			Function_527(Local_4.f_724, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, false);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			ACTOR_START_FORCE_HOLSTER(bLocal_765, 0, 0);
			MEMORY_ALLOW_SHOOTING(bLocal_765, false);
			Function_526();
			Function_458(Local_4.f_664);
			Function_525(Local_4.f_664);
			bLocal_1027 = TASK_SEQUENCE_OPEN();
			TASK_FLEE_ACTOR(false, bLocal_765, 50.0f, -1.0f, 0, 0, 0);
			TASK_CROUCH(false, -1.0f);
			TASK_SEQUENCE_CLOSE();
			Function_524(Local_4.f_664, bLocal_1027, 1, 1);
			Function_527(Local_4.f_664, 0);
			Function_523(Local_4.f_664, 0);
			Function_522(Local_4.f_664, Global_34573, 1);
			Function_521(Local_4.f_664, 0);
			Function_519();
			Function_497(Local_4.f_724, 40, 0.0f);
			Function_518(Local_4.f_724, 40, 1, 0);
			Function_517(Local_4.f_724, bLocal_765, 0);
			SQUAD_SET_FACTION(Local_4.f_724, 19);
			bLocal_1019 = (*&Local_4 + 684)[02];
			bLocal_1020 = (*&Local_4 + 684)[12];
			bLocal_1011 = Local_4.f_724;
			TASK_CLEAR(bLocal_1019);
			TASK_CLEAR(bLocal_1020);
			if (!SQUAD_IS_VALID(bLocal_1008))
			{
				bLocal_1008 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_735, "attackerhorses"));
			}
			SQUAD_JOIN((*&Local_4 + 684)[22], bLocal_1008);
			SQUAD_JOIN((*&Local_4 + 684)[32], bLocal_1008);
			SET_ALLOW_JACK((*&Local_4 + 684)[22], 0);
			SET_ALLOW_JACK((*&Local_4 + 684)[32], 0);
			Function_493(bLocal_1011, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_325(&iLocal_1117, 0, 0, 4294967295, 4294967295);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_230(&iLocal_909);
			Function_230(&iLocal_915);
			Function_230(&iLocal_918);
			iLocal_744 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_516();
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_548(bLocal_765, Local_4.f_664, 1);
				Function_547(bLocal_765, bLocal_1011);
				SQUAD_SET_FACTION(bLocal_1011, 19);
				Function_458(bLocal_1011);
				SQUAD_GOALS_CLEAR(bLocal_1011);
				Function_545(bLocal_1011);
				SET_PATH_LOOPING(Local_4.f_2904, 1);
				SET_PATH_LOOPING(Local_4.f_2908, 1);
				if (IS_ACTOR_ALIVE(bLocal_1019))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1019, Local_4.f_2904, 4, 0, 0, 1, false);
				}
				if (IS_ACTOR_ALIVE(bLocal_1020))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1020, Local_4.f_2908, 4, 0, 0, 1, false);
				}
				Function_230(&iLocal_909);
				iLocal_744 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_282(&iLocal_909) <= 4.0f)
			{
				Function_515();
				TASK_CLEAR((*&Local_4 + 580)[02]);
				GIVE_WEAPON_TO_ACTOR((*&Local_4 + 580)[02], 40, false, 1, 1);
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 580)[02], true);
				ACTOR_END_FORCE_HOLSTER((*&Local_4 + 580)[02]);
				TASK_KILL_CHAR((*&Local_4 + 580)[02], Global_34573);
				Function_514((*&Local_4 + 580)[02], 40.0f, -1.0f, -1.0f);
				TASK_CLEAR((*&Local_4 + 580)[12]);
				GIVE_WEAPON_TO_ACTOR((*&Local_4 + 580)[12], 40, false, 1, 1);
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 580)[12], true);
				ACTOR_END_FORCE_HOLSTER((*&Local_4 + 580)[12]);
				TASK_KILL_CHAR((*&Local_4 + 580)[12], Global_34573);
				Function_514((*&Local_4 + 580)[12], 40.0f, -1.0f, -1.0f);
				Function_230(&iLocal_909);
				Function_230(&iLocal_915);
				Function_230(&iLocal_918);
				iLocal_744 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_RIDING_VEHICLE(Global_34573) || GET_ACTOR_VEHICLE_STATE(Global_34573, &iLocal_1107, &iLocal_1108))
			{
				if (IS_ACTOR_RIDING_VEHICLE(bLocal_765))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_325(&iLocal_1117, 29, 0, 4294967295, 4294967295);
					if (!Function_287(&Local_736))
					{
						Function_513();
					}
					Function_503();
					ACTOR_END_FORCE_HOLSTER(bLocal_765);
					MEMORY_ALLOW_SHOOTING(bLocal_765, true);
					Function_512();
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1016)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1016));
					}
					Function_230(&iLocal_909);
					iLocal_744 = 9;
				}
			}
			else if (Function_282(&iLocal_909) <= 5.0f)
			{
				if (!iLocal_1098)
				{
					Function_230(&iLocal_915);
					Function_402("merchant03_obj03a", 7,5f, 1, 2, 0, 0, 0);
					iLocal_1098 = 1;
				}
			}
			break;
		
		case 0x00000009:
			if ((((!IS_OBJECT_VALID(bLocal_1095) && Function_282(&iLocal_909) <= 15.0f) && GET_TASK_STATUS(bLocal_765, 43) != 1) && Function_511(bLocal_765, 0) <= 3.0f) && !DECOR_CHECK_EXIST(bLocal_735, "droppedhat"))
			{
				bLocal_1095 = DROP_ACCESSORY_ENUM(bLocal_765, 0);
				vLocal_1030 = { 0.0f, 0,5f, 2.0f };
				SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bLocal_1095), &vLocal_1030);
				DECOR_SET_BOOL(bLocal_735, "droppedhat", true);
			}
			if (Function_282(&iLocal_909) < 5.0f && !Function_136())
			{
				Function_510(Local_4.f_604);
				Function_215(&Local_4 + 604, 0, 0);
				Function_215(&Local_4 + 664, 1, 0);
				Function_230(&iLocal_1039);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_765, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_765, 2);
				AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_765, 0);
				if (IS_OBJECT_VALID(bLocal_1094))
				{
					Function_404(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2316[46]), *(&Local_4 + 2316[46] + 12), *(&Local_4 + 2444[16]));
					TRAIN_SET_TARGET_SPEED(bLocal_1093, 3.0f);
					TRAIN_SET_AUTOPILOT_ENABLE(bLocal_1093, 1);
				}
				Function_230(&iLocal_1111);
				Function_230(&iLocal_909);
				iLocal_744 = 10;
			}
			break;
		
		case 0x0000000A:
			if (((!IS_OBJECT_VALID(bLocal_1095) && Function_282(&iLocal_909) <= (15.0f - 5.0f)) && GET_TASK_STATUS(bLocal_765, 43) != 1) && !DECOR_CHECK_EXIST(bLocal_735, "droppedhat"))
			{
				bLocal_1095 = DROP_ACCESSORY_ENUM(bLocal_765, 0);
				vLocal_1030 = { 0.0f, 0,5f, 2.0f };
				SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bLocal_1095), &vLocal_1030);
				DECOR_SET_BOOL(bLocal_735, "droppedhat", true);
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!Function_284(&iLocal_1054))
				{
					Function_394(&iLocal_1054, 13,1f);
				}
				else if (Function_282(&iLocal_1054) < 13.0f)
				{
					if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_765, 1))
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_393();
						}
						Function_230(&iLocal_1054);
					}
				}
				if (Function_399(bLocal_1009, bLocal_765, 25.0f, 1))
				{
					bLocal_1026 = Function_396(bLocal_765, bLocal_1009);
					Function_325(&iLocal_1117, 47, 0, 4294967295, 4294967295);
					Function_378();
				}
				else
				{
					Function_325(&iLocal_1117, 29, 0, 4294967295, 4294967295);
					Function_364();
				}
			}
			if (IS_ACTOR_IN_VOLUME(bLocal_765, (*&Local_4 + 1004)[1]))
			{
				Function_230(&iLocal_909);
				iLocal_744 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (IS_OBJECT_VALID(bLocal_1094))
				{
					TRAIN_SET_TARGET_SPEED(bLocal_1093, 15.0f);
				}
				Function_220();
				Function_230(&iLocal_909);
				iLocal_743 = 3;
				iLocal_744 = 0;
				iLocal_767[2] = 1;
			}
			break;
	}
	return;
}

void Function_510(bool bParam0) //Position: 0x19FE6 / 106470
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

float Function_511(bool bParam0, bool bParam1) //Position: 0x1A033 / 106547
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_512() //Position: 0x1A052 / 106578
{
	if (!GET_TASK_STATUS(bLocal_765, 43) != 1)
	{
		bLocal_1007 = Local_4.f_2852;
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_765, bLocal_1007, 4, 0, 0, 1, false);
		MEMORY_ATTACK_ON_SIGHT(bLocal_765, 0);
		ACTOR_START_FORCE_HOLSTER(bLocal_765, 1, 0);
		AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_765, 0);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1016)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1016));
	}
	Function_458(bLocal_1011);
	SQUAD_GOALS_CLEAR(bLocal_1011);
	if (Function_359(bLocal_1019, 1, 1, 1, 1, 1, 0, 0, 0))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1019), "nfollowing", true);
		if (IS_ACTOR_IN_VOLUME(bLocal_1019, (*&Local_4 + 1004)[3]))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "frontright", true);
			DECOR_SET_BOOL(GET_MOUNT(bLocal_1019), "frontright", true);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1019), "frontright", true);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1019, GET_OBJECT_FROM_ACTOR(Global_34573), Local_4.f_2892, -2.0f, 1, 3.0f);
		}
		else
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nfrontleft", true);
			DECOR_SET_BOOL(GET_MOUNT(bLocal_1019), "nfrontleft", true);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1019), "nfrontleft", true);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1019, GET_OBJECT_FROM_ACTOR(Global_34573), Local_4.f_2888, -2.0f, 1, -3.0f);
		}
		Function_345(bLocal_1019, 0, 0);
	}
	else
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1019)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1019));
		}
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_1019, -1.0f);
	}
	if (Function_359(bLocal_1020, 1, 1, 1, 1, 1, 0, 0, 0))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1020), "nfollowing", true);
		if (IS_ACTOR_IN_VOLUME(bLocal_1020, (*&Local_4 + 1004)[3]))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "nbackright", true);
			DECOR_SET_BOOL(GET_MOUNT(bLocal_1020), "nbackright", true);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1020), "nbackright", true);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1020, GET_OBJECT_FROM_ACTOR(Global_34573), Local_4.f_2892, 2.0f, 1, 3.0f);
		}
		else
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1016), "backleft", true);
			DECOR_SET_BOOL(GET_MOUNT(bLocal_1020), "backleft", true);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_1020), "backleft", true);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1020, GET_OBJECT_FROM_ACTOR(Global_34573), Local_4.f_2888, 2.0f, 1, -3.0f);
		}
		Function_345(bLocal_1020, 0, 0);
	}
	else
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1020)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1020));
		}
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_1020, -1.0f);
	}
	if (!SQUAD_IS_VALID(bLocal_1009))
	{
		bLocal_1009 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_735, "mountedattackersquad"));
	}
	return;
}

void Function_513() //Position: 0x1A31B / 107291
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rideBanter_v1_AA", "Merchant03_rideBanter_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rideBanter_v1_AB", "Merchant03_rideBanter_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rideBanter_v1_AC", "Merchant03_rideBanter_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rideBanter_v1_AD", "Merchant03_rideBanter_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rideBanter_v1_AE", "Merchant03_rideBanter_v1_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rideBanter_v1_AF", "Merchant03_rideBanter_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rideBanter_v1_AG", "Merchant03_rideBanter_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_rideBanter_v1_AH", "Merchant03_rideBanter_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant03_rideBanter_v1_AI", "Merchant03_rideBanter_v1_AI", true, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x1A5A2 / 107938
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

void Function_515() //Position: 0x1A5E9 / 108009
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_makeEscape", "Merchant03_makeEscape", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516() //Position: 0x1A63C / 108092
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Merchant03_crowdAttacks", "Merchant03_crowdAttacks", false, 1, 1, 0, 1);
		Function_342(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A694 / 108180
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
				MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
			}
		}
		bVar0++;
	}
	return;
}

void Function_518(bool bParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1A6F3 / 108275
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
				if (uParam2 || !ACTOR_HAS_WEAPON(bVar1, bParam1))
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

void Function_519() //Position: 0x1A763 / 108387
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_604))
	{
		bLocal_1013 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_604, bVar0);
		if (IS_ACTOR_VALID(bLocal_1013))
		{
			TASK_KILL_CHAR(bLocal_1013, bLocal_765);
			MEMORY_ALLOW_SHOOTING(bLocal_1013, true);
			Function_514(bLocal_1013, 0.0f, -1.0f, -1.0f);
			TASK_PRIORITY_SET(bLocal_1013, true);
			Function_348(bLocal_1013);
			Function_520(bLocal_1013, 0);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1013)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_1013, 322, 0, 2, 0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_520(bool bParam0, bool bParam1) //Position: 0x1A7DF / 108511
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_521(bool bParam0, int iParam1) //Position: 0x1A7FF / 108543
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
				ACTOR_START_FORCE_HOLSTER(bVar1, iParam1, 0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_522(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A847 / 108615
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

void Function_523(bool bParam0, int iParam1) //Position: 0x1A88C / 108684
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

void Function_524(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1A8CD / 108749
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
			TASK_SEQUENCE_PERFORM(bVar1, bParam1);
			TASK_PRIORITY_SET(bVar1, bParam2);
		}
		bVar0++;
	}
	if (bParam3)
	{
		TASK_SEQUENCE_RELEASE(bParam1, 1);
	}
}

var Function_525(bool bParam0) //Position: 0x1A923 / 108835
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = true;
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
					bVar0 = false;
				}
			}
			bVar1++;
		}
	}
	return bVar0;
}

void Function_526() //Position: 0x1A96E / 108910
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bLocal_1106))
	{
		bLocal_1106 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), bLocal_735, 17, 1);
	}
	if (!IS_OBJECT_VALID(bLocal_1099))
	{
		bLocal_1099 = CREATE_EVENT_TRAP(Function_56(), 13, bLocal_735);
	}
	if (!IS_OBJECT_VALID(bLocal_1100))
	{
		bLocal_1100 = CREATE_EVENT_TRAP(Function_56(), 13, bLocal_735);
	}
	if (!IS_OBJECT_VALID(bLocal_1101))
	{
		bLocal_1101 = CREATE_EVENT_TRAP(Function_56(), 13, bLocal_735);
	}
	if (!IS_OBJECT_VALID(bLocal_1102))
	{
		bLocal_1102 = CREATE_EVENT_TRAP(Function_56(), 13, bLocal_735);
	}
	if (!IS_OBJECT_VALID(bLocal_1103))
	{
		bLocal_1103 = CREATE_EVENT_TRAP(Function_56(), 13, bLocal_735);
	}
	if (!IS_OBJECT_VALID(bLocal_1104))
	{
		bLocal_1104 = CREATE_EVENT_TRAP(Function_56(), 13, bLocal_735);
	}
	if (!IS_OBJECT_VALID(bLocal_1105))
	{
		bLocal_1105 = CREATE_EVENT_TRAP(Function_56(), 13, bLocal_735);
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_735, "tableSnakeOil01x0", "p_gen_tableSnakeOil01x", -3125,33f, 44,22f, 3762,92f, 0.0f, 88,38f, 0.0f, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_1106);
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x0", "p_gen_bottleSnakeOil01x", -3125,36f, 45,02f, 3762,64f, 180.0f, 25,37f, -180.0f, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		EVENT_TRAP_ON_TARGET(bLocal_1099, bVar0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bLocal_1106))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_1106);
		}
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x1", "p_gen_bottleSnakeOil01x", -3125,46f, 45.0f, 3762,27f, 180.0f, 82,08f, -180.0f, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		EVENT_TRAP_ON_TARGET(bLocal_1100, bVar0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bLocal_1106))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_1106);
		}
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x2", "p_gen_bottleSnakeOil01x", -3125,75f, 45,02f, 3762,25f, 180.0f, 39,44f, -180.0f, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		EVENT_TRAP_ON_TARGET(bLocal_1101, bVar0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bLocal_1106))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_1106);
		}
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x3", "p_gen_bottleSnakeOil01x", -3125,8f, 45,02f, 3762,59f, 0.0f, 32,87f, 0.0f, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		EVENT_TRAP_ON_TARGET(bLocal_1102, bVar0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bLocal_1106))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_1106);
		}
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x4", "p_gen_bottleSnakeOil01x", -3126,13f, 45,02f, 3762,76f, 0.0f, -34.0f, 0.0f, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		EVENT_TRAP_ON_TARGET(bLocal_1103, bVar0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bLocal_1106))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_1106);
		}
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_735, "bottleSnakeOil02x1", "p_gen_bottleSnakeOil02x", -3126,11f, 45,02f, 3762,3f, 0.0f, -3,4f, 0.0f, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		EVENT_TRAP_ON_TARGET(bLocal_1104, bVar0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bLocal_1106))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_1106);
		}
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_735, "bottleSnakeOil02x2", "p_gen_bottleSnakeOil02x", -3125,51f, 45,02f, 3762,85f, 180.0f, 82,08f, 180.0f, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		EVENT_TRAP_ON_TARGET(bLocal_1105, bVar0);
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bLocal_1106))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_1106);
		}
	}
	return;
}

void Function_527(bool bParam0, bool bParam1) //Position: 0x1ADD7 / 110039
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

void Function_528(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1AE1F / 110111
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
			Function_548(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_529(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1AE6E / 110190
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

void Function_530() //Position: 0x1AF27 / 110375
{
	Local_4.f_720 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Accusersset", 0);
	Local_4.f_724 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Accusers"));
	(*&Local_4 + 684)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nAccuser01", 756, -3313,897f, 40,57988f, 3698,328f, -179,9771f, -6,652965f, 179,7459f);
	ADD_ACTORSET_MEMBER(Local_4.f_720, (*&Local_4 + 684)[02]);
	SQUAD_JOIN((*&Local_4 + 684)[02], Local_4.f_724);
	SET_ACTOR_FACTION((*&Local_4 + 684)[02], 19);
	(*&Local_4 + 684)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nAccuser02", 757, -3314,709f, 40,53315f, 3701,785f, -179,9767f, -12,43238f, 179,7435f);
	ADD_ACTORSET_MEMBER(Local_4.f_720, (*&Local_4 + 684)[12]);
	SQUAD_JOIN((*&Local_4 + 684)[12], Local_4.f_724);
	SET_ACTOR_FACTION((*&Local_4 + 684)[12], 19);
	(*&Local_4 + 684)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Accuser01Horse", 976, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_720, (*&Local_4 + 684)[22]);
	SQUAD_JOIN((*&Local_4 + 684)[22], Local_4.f_724);
	SET_ACTOR_FACTION((*&Local_4 + 684)[22], 19);
	(*&Local_4 + 684)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Accuser02Horse", 977, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_720, (*&Local_4 + 684)[32]);
	SQUAD_JOIN((*&Local_4 + 684)[32], Local_4.f_724);
	SET_ACTOR_FACTION((*&Local_4 + 684)[32], 19);
	return;
}

void Function_531(bool bParam0) //Position: 0x1B0D8 / 110808
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(Local_4.f_660))
	{
		Function_536();
	}
	Function_535(Local_4.f_660, -1.0f);
	if (bParam0)
	{
		bVar0 = Function_534(Local_4.f_2820, Local_4.f_664);
		if (Function_359(bVar0, 1, 1, 1, 1, 0, 0, 0, 0))
		{
			SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2820, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2820), "UseCase1", 4294967294, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
			Function_533(bVar0);
		}
		bVar0 = Function_534(Local_4.f_2836, Local_4.f_664);
		if (Function_359(bVar0, 1, 1, 1, 1, 0, 0, 0, 0))
		{
			SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2836, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2836), "UseCase1", 4294967294, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
			Function_533(bVar0);
		}
		bVar0 = Function_534(Local_4.f_2816, Local_4.f_664);
		if (Function_359(bVar0, 1, 1, 1, 1, 0, 0, 0, 0))
		{
			SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2816, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2816), "UseCase1", 4294967294, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
			Function_533(bVar0);
		}
		bVar0 = Function_534(Local_4.f_2840, Local_4.f_664);
		if (Function_359(bVar0, 1, 1, 1, 1, 0, 0, 0, 0))
		{
			SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2840, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2840), "UseCase1", 4294967294, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
			Function_533(bVar0);
		}
		bVar0 = Function_534(Local_4.f_2844, Local_4.f_664);
		if (Function_359(bVar0, 1, 1, 1, 1, 0, 0, 0, 0))
		{
			SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2844, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2844), "UseCase1", 4294967294, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
			Function_533(bVar0);
		}
		bVar0 = Function_534(Local_4.f_2824, Local_4.f_664);
		if (Function_359(bVar0, 1, 1, 1, 1, 0, 0, 0, 0))
		{
			MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
			SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2824, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2824), "UseCase1", 4294967294, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
			Function_533(bVar0);
		}
	}
	if (!IS_ACTORSET_VALID(Local_4.f_600))
	{
		Function_532();
	}
	Function_535(Local_4.f_600, -1.0f);
	Function_533((*&Local_4 + 580)[02]);
	Function_533((*&Local_4 + 580)[12]);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 580)[02], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 580)[12], 0);
	return;
}

void Function_532() //Position: 0x1B382 / 111490
{
	Local_4.f_600 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "MiscCrowdMembersset", 0);
	Local_4.f_604 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MiscCrowdMembers"));
	(*&Local_4 + 580)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MiscCrowdMember01", 762, -3121,037f, 44,18573f, 3764,088f, -178,82f, 51,374f, 176,084f);
	ADD_ACTORSET_MEMBER(Local_4.f_600, (*&Local_4 + 580)[02]);
	SQUAD_JOIN((*&Local_4 + 580)[02], Local_4.f_604);
	SET_ACTOR_FACTION((*&Local_4 + 580)[02], 1);
	(*&Local_4 + 580)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MiscCrowdMember02", 767, -3120,765f, 44,1882f, 3762,393f, 174,095f, 58,425f, 169,941f);
	ADD_ACTORSET_MEMBER(Local_4.f_600, (*&Local_4 + 580)[12]);
	SQUAD_JOIN((*&Local_4 + 580)[12], Local_4.f_604);
	SET_ACTOR_FACTION((*&Local_4 + 580)[12], 1);
	return;
}

void Function_533(bool bParam0) //Position: 0x1B4A7 / 111783
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

bool Function_534(bool bParam0, bool bParam1) //Position: 0x1B4F3 / 111859
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_WARNING("Invalid test object passed to GET_CLOSEST_SQUAD_MEMBER_TO_OBJECT");
		return "";
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_OBJECT");
		return "";
	}
	GET_OBJECT_POSITION(bParam0, &vVar4);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0));
		GET_OBJECT_POSITION(bVar3, &vVar7);
		if (VDIST(vVar4, vVar7) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(vVar4, vVar7);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

void Function_535(bool bParam0, bool bParam1) //Position: 0x1B669 / 112233
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				TASK_STAND_STILL(bVar0, bParam1, 0, 0);
			}
			bVar1++;
		}
	}
	return;
}

void Function_536() //Position: 0x1B6AF / 112303
{
	Local_4.f_660 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Crowdset", 0);
	Local_4.f_664 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Crowd"));
	(*&Local_4 + 608)[02] = Function_537(&Global_6654, &Global_7716, 0, -3102,8f, 45,09734f, 3760,586f, 0.0f, 104,4485f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_660, (*&Local_4 + 608)[02]);
	SQUAD_JOIN((*&Local_4 + 608)[02], Local_4.f_664);
	SET_ACTOR_FACTION((*&Local_4 + 608)[02], 1);
	(*&Local_4 + 608)[12] = Function_537(&Global_6654, &Global_7716, 1, -3118,406f, 44,17278f, 3760f, 0.0f, 117,926f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_660, (*&Local_4 + 608)[12]);
	SQUAD_JOIN((*&Local_4 + 608)[12], Local_4.f_664);
	SET_ACTOR_FACTION((*&Local_4 + 608)[12], 1);
	(*&Local_4 + 608)[22] = Function_537(&Global_6654, &Global_7716, 3, -3116,601f, 44,1653f, 3768f, 0,6915786f, 73,61624f, 1,73868f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_660, (*&Local_4 + 608)[22]);
	SQUAD_JOIN((*&Local_4 + 608)[22], Local_4.f_664);
	SET_ACTOR_FACTION((*&Local_4 + 608)[22], 1);
	(*&Local_4 + 608)[32] = Function_537(&Global_6654, &Global_7716, 2, -3120.0f, 44,12778f, 3767,686f, 0.0f, 64,95924f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_660, (*&Local_4 + 608)[32]);
	SQUAD_JOIN((*&Local_4 + 608)[32], Local_4.f_664);
	SET_ACTOR_FACTION((*&Local_4 + 608)[32], 1);
	(*&Local_4 + 608)[42] = Function_537(&Global_6654, &Global_7716, 5, -3118,774f, 44,17255f, 3769,988f, 0.0f, 59,74842f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_660, (*&Local_4 + 608)[42]);
	SQUAD_JOIN((*&Local_4 + 608)[42], Local_4.f_664);
	SET_ACTOR_FACTION((*&Local_4 + 608)[42], 1);
	(*&Local_4 + 608)[52] = Function_537(&Global_6654, &Global_7716, 4, -3121,328f, 44,1042f, 3759,588f, 0.0f, 158,3807f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_660, (*&Local_4 + 608)[52]);
	SQUAD_JOIN((*&Local_4 + 608)[52], Local_4.f_664);
	SET_ACTOR_FACTION((*&Local_4 + 608)[52], 1);
	return;
}

var Function_537(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x1B8EC / 112876
{
	var uVar0;
	bool bVar1;
	
	uVar0 = iParam2;
	bVar1 = Function_538(uParam0, uParam1, uVar0, iParam9, 0, 1);
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

var Function_538(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x1B9D3 / 113107
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_204(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_204(uParam0[iVar02], 2))
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
			if (!Function_204(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_201(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_540(StackVal, StackVal, StackVal, Global_6289, Function_56(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_204(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_201(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_201(uParam0[iVar02], 1);
	Function_539(StackVal, 1);
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

int Function_539(bool bParam0, bool bParam1) //Position: 0x1BB69 / 113513
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

var Function_540(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x1BC0B / 113675
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

int Function_541() //Position: 0x1BD24 / 113956
{
	return 1;
}

bool Function_542(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x1BD2B / 113963
{
	if (Function_543(&iParam0) == iParam7 || Function_332())
	{
		return 1;
	}
	return 0;
}

int Function_543(int iParam0) //Position: 0x1BD4A / 113994
{
	if (Function_287(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_544() //Position: 0x1BD62 / 114018
{
	Function_411(&Local_4 + 216, 397, 2, 0);
	Function_411(&Local_4 + 216, 976, 2, 0);
	Function_411(&Local_4 + 216, 399, 2, 0);
	Function_411(&Local_4 + 216, 977, 2, 0);
	Function_411(&Local_4 + 216, 762, 2, 0);
	Function_411(&Local_4 + 216, 767, 2, 0);
	Function_411(&Local_4 + 216, 756, 2, 0);
	Function_411(&Local_4 + 216, 757, 2, 0);
	Function_411(&Local_4 + 216, 1202, 2, 0);
	if (Function_406(&Local_4 + 216))
	{
		return 1;
	}
	return 0;
}

void Function_545(bool bParam0) //Position: 0x1BDEA / 114154
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

void Function_546(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x1BE1F / 114207
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_547(bool bParam0, bool bParam1) //Position: 0x1BE66 / 114278
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_REPORT_POSITION_AUTO(bParam0, bVar1, true);
		}
		bVar0++;
	}
	return;
}

void Function_548(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1BE9D / 114333
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

int Function_549() //Position: 0x1BEE7 / 114407
{
	if ((((((Function_550(bLocal_1099, FIND_OBJECT_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x0")) || Function_550(bLocal_1100, FIND_OBJECT_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x1"))) || Function_550(bLocal_1101, FIND_OBJECT_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x2"))) || Function_550(bLocal_1102, FIND_OBJECT_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x3"))) || Function_550(bLocal_1103, FIND_OBJECT_IN_LAYOUT(bLocal_735, "bottleSnakeOil01x4"))) || Function_550(bLocal_1104, FIND_OBJECT_IN_LAYOUT(bLocal_735, "bottleSnakeOil02x1"))) || Function_550(bLocal_1105, FIND_OBJECT_IN_LAYOUT(bLocal_735, "bottleSnakeOil02x2")))
	{
		return 1;
	}
	return 0;
}

bool Function_550(bool bParam0, bool bParam1) //Position: 0x1BFE0 / 114656
{
	if (IS_OBJECT_VALID(bParam1))
	{
		if (iLocal_743 == 1)
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
			{
				Function_418(bParam1);
				UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_735, Function_56(), "exp_snake_oil", Function_418(bParam1)), 0.0f, 0.0f, 0.0f);
				DESTROY_OBJECT(bParam1);
				EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
				Function_435(0.0f);
				Function_236("Merchant03_destroyed_stage");
				bLocal_753 = true;
				return 1;
			}
		}
		if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
		{
			Function_418(bParam1);
			UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_735, Function_56(), "exp_snake_oil", Function_418(bParam1)), 0.0f, 0.0f, 0.0f);
			DESTROY_OBJECT(bParam1);
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		}
	}
	return 0;
}

void Function_551() //Position: 0x1C08F / 114831
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_744 < 3 && iLocal_744 > 105)
	{
		Function_427();
		if (Function_419(&iLocal_918, 60.0f, 200.0f, bLocal_765, "Merchant03_obj_return", "Merchant03_too_far", &bLocal_753, 0, 0, 0, 325, 1))
		{
			if (IS_OBJECT_VALID(bLocal_1073))
			{
				Function_214(bLocal_1073);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_765)))
			{
				Function_443(2, 1, 1);
			}
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_765)))
			{
				Function_443(2, 0, 1);
			}
			if (!IS_OBJECT_VALID(bLocal_1073))
			{
				bLocal_1073 = Function_573(StackVal, StackVal, StackVal, StackVal, bLocal_735, Function_56(), *(&Local_4 + 2136[36]), *(&Local_4 + 2136[36] + 12), Global_34573, 6.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			}
		}
		Function_549();
		if (!iLocal_1063)
		{
			Function_562();
		}
		if (IS_ACTOR_VALID((*&Local_4 + 684)[02]))
		{
			Function_358((*&Local_4 + 684)[02]);
			STREAMING_LOAD_BOUNDS(Function_358((*&Local_4 + 684)[02]), 10.0f, 1);
		}
		if ((!HUD_IS_FADED() && !HUD_IS_FADING()) && iLocal_744 < 4)
		{
			Function_243((*&Local_4 + 1584)[3]);
			if (!Function_412(StackVal, StackVal, "$/cutscene/MERCHANT03_CS02/MERCHANT03_CS02", &uLocal_764, Function_243((*&Local_4 + 1584)[3]), 0, 75.0f, 150.0f, 2, 1, 2, 1, 0, 1))
			{
			}
		}
		if (SQUAD_IS_VALID(Local_4.f_664) && SQUAD_IS_VALID(Local_4.f_604))
		{
			if (((Function_561(Local_4.f_664, Global_34573) || Function_561(Local_4.f_664, bLocal_765)) || Function_561(Local_4.f_604, Global_34573)) || Function_561(Local_4.f_604, bLocal_765))
			{
				Function_236("Merchant03_killed_crowd_member");
				bLocal_753 = true;
			}
			else if (((Function_560(Local_4.f_664, Global_34573) || Function_560(Local_4.f_664, bLocal_765)) || Function_560(Local_4.f_604, Global_34573)) || Function_560(Local_4.f_604, bLocal_765))
			{
				Function_236("Merchant03_attack_crowd_member");
				bLocal_753 = true;
			}
		}
	}
	switch (iLocal_744)
	{
		case 0x00000000:
			Function_336(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			SET_ACTOR_HEALTH(bLocal_765, GET_ACTOR_MAX_HEALTH(bLocal_765));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_243((*&Local_4 + 1360)[0]);
			bLocal_766 = Function_335(StackVal, StackVal, Function_243((*&Local_4 + 1360)[0]), 0, 1, 1);
			if (!Function_334(bLocal_766))
			{
				Function_333(&Local_736);
			}
			TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 1360)[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TELEPORT_OBJECT_TO_OBJECT(bLocal_765, (*&Local_4 + 1360)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TASK_STAND_STILL(bLocal_765, -1.0f, 0, 0);
			Function_230(&iLocal_909);
			iLocal_744 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_334(Global_30679[0])) && Function_559())
			{
				Function_230(&iLocal_909);
				iLocal_744 = 2;
			}
			else if (!Function_334(Global_30679[0]))
			{
			}
			break;
		
		case 0x00000002:
			TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 1360)[3], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TELEPORT_OBJECT_TO_OBJECT(bLocal_765, (*&Local_4 + 1360)[2], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TASK_STAND_STILL(bLocal_765, -1.0f, 0, 0);
			if (!IS_ACTOR_VALID((*&Local_4 + 728)[02]))
			{
				Local_4.f_740 = CREATE_ACTORSET_IN_LAYOUT(bLocal_735, "StageCoach_S2set", 0);
				(*&Local_4 + 728)[02] = Function_304(bLocal_735, "Stagecoach_2", 1202, 976, -3142,842f, 43,22709f, 3770,54f, 0.0f, 160.0f, 0.0f, 0, 977, 976, 976, 4);
				STOP_VEHICLE((*&Local_4 + 728)[02]);
			}
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 728)[02], true);
			bVar0 = false;
			while (bVar0 <= 2)
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, (*&Local_4 + 728)[02]);
				if (IS_ACTOR_VALID(bVar1))
				{
					ACTOR_SET_GRABBED_BY_CUTSCENE(bVar1, true);
				}
				bVar0++;
			}
			GIVE_OBJECT_TO_LAYOUT(Local_4.f_740, Local_4);
			GIVE_OBJECT_TO_LAYOUT((*&Local_4 + 728)[02], Local_4);
			ADD_ACTORSET_MEMBER(Local_4.f_740, (*&Local_4 + 728)[02]);
			SET_ACTOR_INVULNERABILITY((*&Local_4 + 728)[02], true);
			bLocal_1016 = (*&Local_4 + 728)[02];
			Function_297(&(Local_962[117]), bLocal_1016, "wagon", 1, 0x5f5e100, 1);
			Function_296(bLocal_1016);
			Function_295(bLocal_1016);
			Function_531(1);
			Function_526();
			Function_501();
			ENABLE_VEHICLE_SEAT((*&Local_4 + 728)[02], false, 0);
			ENABLE_VEHICLE_SEAT((*&Local_4 + 728)[02], true, 0);
			bLocal_1017 = GET_DRAFT_ACTOR(false, bLocal_1016);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_1017, false);
			SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1017, 0);
			SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1017, false);
			bLocal_1018 = GET_DRAFT_ACTOR(true, bLocal_1016);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_1018, false);
			SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_1018, 0);
			SET_ACTOR_CAN_BE_BUMPTARGETED(bLocal_1018, false);
			bLocal_1073 = Function_573(StackVal, StackVal, StackVal, StackVal, bLocal_735, Function_56(), *(&Local_4 + 2136[36]), *(&Local_4 + 2136[36] + 12), Global_34573, 1.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			Function_443(2, 0, 1);
			Function_325(&iLocal_1117, 0, 0, 4294967295, 4294967295);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, false);
			if (!IS_ACTORSET_VALID(Local_4.f_720))
			{
				Function_530();
			}
			SET_AUTO_CONVERSATION_LOOK(bLocal_765, 0);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_765, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_765, "merchant_intro", 0);
			bLocal_1027 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &Local_4 + 1388[56], true);
			TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "merchant_intro", &Local_4 + 1388[56], -1f, 1, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_765, bLocal_1027);
			TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
			Function_544();
			Function_242(iLocal_743);
			Function_327(StackVal, StackVal, Function_242(iLocal_743), iLocal_743, Global_30628[3], Function_245(iLocal_743), 0);
			Function_230(&iLocal_909);
			if (!Function_287(&Local_736))
			{
				iLocal_744 = 3;
			}
			else
			{
				iLocal_744 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_275("$/cutscene/MERCHANT_03/MERCHANT_03", &iLocal_745, &Local_736, &iLocal_743, 57068, 113956, 118072, 118065, 52320, 52313, 0, 1, 1, 2, 2, 0, 1))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 728)[02], false);
				bVar0 = false;
				while (bVar0 <= 2)
				{
					bVar1 = GET_DRAFT_ACTOR(bVar0, (*&Local_4 + 728)[02]);
					if (IS_ACTOR_VALID(bVar1))
					{
						ACTOR_SET_GRABBED_BY_CUTSCENE(bVar1, false);
					}
					bVar0++;
				}
				Function_230(&iLocal_909);
				iLocal_744 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, false);
			Function_230(&iLocal_909);
			iLocal_744 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_402("merchant03_obj02", 7,5f, 1, 2, 0, 0, 0);
				Function_230(&iLocal_909);
				iLocal_744 = 7;
			}
			break;
		
		case 0x00000007:
			if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(bLocal_765, 4294967295) < 0 && !DECOR_CHECK_EXIST(bLocal_735, "nsalespatt"))
			{
				Function_556();
				if (!IS_MOVER_FROZEN(bLocal_765))
				{
					SET_MOVER_FROZEN(bLocal_765, true);
				}
				DECOR_SET_BOOL(bLocal_735, "nsalespatt", true);
			}
			if (Function_282(&iLocal_909) <= 1.0f)
			{
				if (((Function_555(Local_4.f_660, &Local_4 + 980[1]) + Function_555(Local_4.f_600, &Local_4 + 980[1])) > 7 || Function_552(Global_34573, Local_4.f_660, 1, 0, 0, 3212836864)) || Function_552(Global_34573, Local_4.f_600, 1, 0, 0, 3212836864))
				{
					Function_236("Merchant03_disrupt_show");
					bLocal_753 = true;
				}
			}
			if (!iLocal_1063)
			{
				if (IS_OBJECT_VALID(bLocal_1073))
				{
					if (GATEWAY_UPDATE(bLocal_1073))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						TASK_CLEAR(Global_34573);
						ABORT_SCRIPTED_CONVERSATION(1);
						bLocal_1027 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, bLocal_765, 0, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(Global_34573, bLocal_1027);
						TASK_SEQUENCE_RELEASE(bLocal_1027, 1);
						iLocal_1063 = 1;
						Function_214(bLocal_1073);
					}
				}
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					SET_AUTO_CONVERSATION_LOOK(bLocal_765, 1);
					FIRE_STOP_FLAMES_IN_VOLUME((*&Local_4 + 956)[1]);
					Function_214(bLocal_1073);
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					ACTOR_START_FORCE_HOLSTER(bLocal_765, 0, 0);
					MEMORY_ALLOW_SHOOTING(bLocal_765, false);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_765, 1);
					Function_337(0, 0x40400000);
					iLocal_745 = 1000;
					Function_230(&iLocal_909);
					Function_230(&iLocal_915);
					Function_230(&iLocal_918);
					if (IS_MOVER_FROZEN(bLocal_765))
					{
						SET_MOVER_FROZEN(bLocal_765, false);
					}
					iLocal_744 = 105;
				}
			}
			break;
		
		case 0x00000069:
			Function_230(&iLocal_909);
			Function_230(&iLocal_915);
			Function_230(&iLocal_918);
			iLocal_744 = 106;
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_767[1] = 1;
				Function_230(&iLocal_909);
				iLocal_743 = 2;
				iLocal_744 = 2;
				iLocal_767[1] = 1;
			}
			break;
	}
	return;
}

int Function_552(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1C9B3 / 117171
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_554(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	bVar1 = false;
	while (bVar1 <= GET_ACTORSET_SIZE(bParam1))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (Function_553(bParam0, bVar0, iParam2, iParam3, iParam4, iParam5))
			{
				return 1;
			}
		}
		bVar1++;
	}
	return 0;
}

bool Function_553(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1CA1F / 117279
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

int Function_554(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1CB0C / 117516
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					bVar3 = true;
					if (bParam1)
					{
						if (IS_ACTOR_CRIPPLED(bVar1, 3) || IS_ACTOR_CRIPPLED(bVar1, 4))
						{
							bVar3 = false;
						}
					}
					if (bParam2)
					{
						if (IS_ACTOR_HOGTIED(bVar1))
						{
							bVar3 = false;
						}
					}
					if (bParam3)
					{
						if (IS_ACTOR_BEING_DRAGGED(bVar1, 1.0f))
						{
							bVar3 = false;
						}
					}
					if (bParam4)
					{
						bParam4 = bParam4;
					}
					if (bParam5)
					{
						if (!IS_ACTOR_RIDING(bVar1) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
						{
							bVar3 = false;
						}
					}
					if (bVar3)
					{
						iVar0++;
					}
				}
			}
			bVar2++;
		}
	}
	return iVar0;
}

int Function_555(bool bParam0, int iParam1) //Position: 0x1CBBA / 117690
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = GET_ACTORSET_SIZE(bParam0);
	iVar3 = 0;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar1, *iParam1))
				{
					iVar3++;
				}
			}
		}
		bVar2++;
	}
	return iVar3;
}

void Function_556() //Position: 0x1CC0B / 117771
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_salesPatt_v1_AA", "Merchant03_salesPatt_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_salesPatt_v1_AB", "Merchant03_salesPatt_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_salesPatt_v1_AC", "Merchant03_salesPatt_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_salesPatt_v1_AD", "Merchant03_salesPatt_v1_AD", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_557() //Position: 0x1CD31 / 118065
{
	return 1;
}

int Function_558() //Position: 0x1CD38 / 118072
{
	return 1;
}

int Function_559() //Position: 0x1CD3F / 118079
{
	Function_411(&Local_4 + 104, 397, 2, 0);
	Function_411(&Local_4 + 104, 976, 2, 0);
	Function_411(&Local_4 + 104, 399, 2, 0);
	Function_411(&Local_4 + 104, 977, 2, 0);
	Function_411(&Local_4 + 104, 762, 2, 0);
	Function_411(&Local_4 + 104, 767, 2, 0);
	Function_411(&Local_4 + 104, 756, 2, 0);
	Function_411(&Local_4 + 104, 757, 2, 0);
	Function_411(&Local_4 + 104, 1202, 2, 0);
	if (Function_406(&Local_4 + 104))
	{
		return 1;
	}
	return 0;
}

int Function_560(bool bParam0, bool bParam1) //Position: 0x1CDC7 / 118215
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

int Function_561(bool bParam0, bool bParam1) //Position: 0x1CE3A / 118330
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

void Function_562() //Position: 0x1CEAC / 118444
{
	if (Function_282(&iLocal_1111) < (30.0f / 2.0f))
	{
		if (GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bLocal_765 && !bLocal_1114 != 4)
		{
			iLocal_1115 = bLocal_1114;
			bLocal_1114 = 4;
		}
		if (Function_572(Local_4.f_664) || (Function_572(Local_4.f_604) && !bLocal_1114 != 7))
		{
			iLocal_1115 = bLocal_1114;
			bLocal_1114 = 7;
		}
		if (GET_LAST_ATTACKER(bLocal_765) == Global_34573)
		{
			if (Function_429(GET_WEAPON_IN_HAND(Global_34573)) && !bLocal_1114 != 6)
			{
				CLEAR_LAST_HIT(bLocal_765);
				iLocal_1115 = bLocal_1114;
				bLocal_1114 = 6;
			}
			else if (!Function_429(GET_WEAPON_IN_HAND(Global_34573)) && !bLocal_1114 != 5)
			{
				CLEAR_LAST_HIT(bLocal_765);
				iLocal_1115 = bLocal_1114;
				bLocal_1114 = 5;
			}
		}
		if (Function_560(Local_4.f_664, Global_34573) || (Function_560(Local_4.f_604, Global_34573) && !bLocal_1114 != 9))
		{
			Function_571(Local_4.f_664);
			Function_571(Local_4.f_604);
			iLocal_1115 = bLocal_1114;
			bLocal_1114 = 9;
		}
		if ((IS_ACTOR_SHOOTING(Global_34573) && !IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0))) && !bLocal_1114 != 10)
		{
			iLocal_1115 = bLocal_1114;
			bLocal_1114 = 10;
		}
	}
	if (Function_549() && !bLocal_1114 != 11)
	{
		iLocal_1115 = bLocal_1114;
		bLocal_1114 = 11;
	}
	switch (bLocal_1114)
	{
		case 0x00000000:
			bLocal_1114 = true;
			break;
		
		case 0x00000002:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_282(&iLocal_1111) < 30.0f)
			{
				Function_230(&iLocal_1111);
			}
			break;
		
		case 0x00000004:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_570();
				Function_569();
			}
			break;
		
		case 0x00000005:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_568();
				Function_569();
			}
			break;
		
		case 0x00000006:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_567();
				Function_569();
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_566();
				Function_569();
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_565();
				Function_569();
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_564();
				Function_569();
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_563();
				Function_569();
			}
			break;
	}
	return;
}

void Function_563() //Position: 0x1D0AD / 118957
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_destroyTable", "Merchant03_destroyTable", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_564() //Position: 0x1D104 / 119044
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_shootRand_demo", "Merchant03_shootRand_demo", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_565() //Position: 0x1D15F / 119135
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_shootAi_demo", "Merchant03_shootAi_demo", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566() //Position: 0x1D1B6 / 119222
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_gunOnAi_demo", "Merchant03_gunOnAi_demo", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_567() //Position: 0x1D20D / 119309
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_shootsWest_demo", "Merchant03_shootsWest_demo", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x1D26A / 119402
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_assaultWest_demo", "Merchant03_assaultWest_demo", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_569() //Position: 0x1D2C9 / 119497
{
	char* cVar0[64];
	
	bLocal_1114 = iLocal_1115;
	strcpy(&cVar0, "Returning to state: ", 64);
	stradd(&cVar0, INT_TO_STRING(bLocal_1114), 64);
	Function_230(&iLocal_1111);
	return;
}

void Function_570() //Position: 0x1D300 / 119552
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_gunOnWest_demo", "Merchant03_gunOnWest_demo", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_571(bool bParam0) //Position: 0x1D35B / 119643
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
	}
	else
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_LAST_HIT(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

int Function_572(bool bParam0) //Position: 0x1D39B / 119707
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
		if (IS_ACTOR_ALIVE(bVar1))
		{
			if (GET_ACTOR_UNDER_RETICLE(Global_34573, 0) == bVar1)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_573(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x1D3E5 / 119781
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_574() //Position: 0x1D4B0 / 119984
{
	switch (iLocal_744)
	{
		case 0x00000006:
			Function_600(&Local_736, 1);
			bLocal_735 = CREATE_LAYOUT(Function_56());
			Function_599();
			Function_182(47);
			Function_165(114692);
			Function_597(9);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			iLocal_744 = 9;
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED() && Function_596())
			{
				Local_4.f_740 = CREATE_ACTORSET_IN_LAYOUT(bLocal_735, "StageCoach_S2set", 0);
				(*&Local_4 + 728)[02] = Function_304(bLocal_735, "Stagecoach_2", 1202, 976, -3142,842f, 43,22709f, 3770,54f, 0.0f, 160.0f, 0.0f, 0, 977, 976, 976, 4);
				STOP_VEHICLE((*&Local_4 + 728)[02]);
				bLocal_1016 = (*&Local_4 + 728)[02];
				Function_297(&(Local_962[117]), bLocal_1016, "wagon", 1, 0x5f5e100, 1);
				Function_296(bLocal_1016);
				Function_295(bLocal_1016);
				Function_230(&iLocal_909);
				iLocal_744 = 8;
			}
			break;
		
		case 0x00000008:
			Function_230(&iLocal_909);
			iLocal_744 = 9;
			break;
		
		case 0x00000009:
			Unknown_Function();
			if (StackVal)
			{
				Function_580();
				iLocal_744 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_908 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 980)[2]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 980)[2]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 980)[2], 15);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 956)[2]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 956)[2]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 956)[2], 15);
			RESET_ACTOR_GAITS(bLocal_765, 0);
			SET_CRIPPLE_ENABLE(bLocal_765, 0);
			SET_ACTOR_FACTION(bLocal_765, 20);
			TASK_PRIORITY_SET(bLocal_765, true);
			TASK_STAND_STILL(bLocal_765, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_765, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_765, 50.0f);
			SET_ACTOR_HEALTH(bLocal_765, GET_ACTOR_MAX_HEALTH(bLocal_765));
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_765);
			GIVE_WEAPON_TO_ACTOR(bLocal_765, 40, 0,5f, 1, 1);
			SET_ACTOR_FACTION(bLocal_765, 20);
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_765);
			bLocal_1009 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, Function_56()));
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_765, 0);
			SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 0);
			SET_WAGON_TO_WAGON_JACK_ENABLE(0, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_765, 2);
			AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_765, 0);
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_765, 0);
			UNK_0xAC72E757(1);
			REMOVE_EVENT_RESPONSE(5, 17, "p_gen_crateTnt01x");
			REMOVE_EVENT_RESPONSE(5, 27, "p_gen_crateTnt01x");
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_08", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_1117 = 0;
			Function_578(&uLocal_922, bLocal_735);
			Function_297(&(Local_962[017]), bLocal_765, "Merchant", 0, 0x5f5e100, 1);
			Function_377(&iLocal_909);
			Function_377(&iLocal_912);
			Function_377(&iLocal_915);
			Function_377(&iLocal_918);
			Function_377(&iLocal_1042);
			Function_377(&iLocal_1036);
			Function_377(&iLocal_1039);
			Function_377(&iLocal_1111);
			Function_160(Global_30679[0]);
			iLocal_743 = iLocal_762;
			iLocal_744 = 0;
			Function_576(&Local_736, &iLocal_743, &iLocal_744);
			Function_575(StackVal, StackVal, StackVal, StackVal, StackVal, Function_580(), Local_736);
			break;
	}
	return;
}

void Function_575(struct<25> Param0) //Position: 0x1D7C3 / 120771
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_743 = 1;
			break;
		
		case 0x00000002:
			iLocal_743 = 2;
			break;
		
		case 0x00000003:
			iLocal_743 = 101;
			break;
	}
}

void Function_576(int iParam0, var uParam1, int iParam2) //Position: 0x1D7FC / 120828
{
	if (Function_287(iParam0))
	{
		*uParam1 = Function_543(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_577();
	}
	return;
}

void Function_577() //Position: 0x1D830 / 120880
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

int Function_578(var uParam0, bool bParam1) //Position: 0x1D881 / 120961
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_579(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_579(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_579(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_579(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_579(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1DF21 / 122657
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
	Function_79(iParam0 + 8, bParam4);
	return 1;
}

vector3 Function_580() //Position: 0x1DFE4 / 122852
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
	
	Function_465(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Merchant03_layout");
	Local_4.f_976 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 956)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CUTSCENE01VOL", 2, -3640,593f, 43,51833f, 2142,939f, 0.0f, -45,80529f, 0.0f, 3,277596f, 3,277596f, 6,067014f);
	ADD_TO_VOLUME_SET(Local_4.f_976, (*&Local_4 + 956)[0]);
	(*&Local_4 + 956)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -3117,733f, 48,12833f, 3757,679f, 41,33096f, -90,91557f, -39,58593f, 32,10567f, 12,2545f, 38,76885f);
	ADD_TO_VOLUME_SET(Local_4.f_976, (*&Local_4 + 956)[1]);
	(*&Local_4 + 956)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -4324,901f, 25,64268f, 2724,79f, 170,8587f, -101,8083f, -170,7355f, 56,75175f, 22,16785f, 156,2397f);
	ADD_TO_VOLUME_SET(Local_4.f_976, (*&Local_4 + 956)[2]);
	(*&Local_4 + 956)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LastFadeInVol", 2, -4327,619f, 27,12691f, 2734,995f, 5,299174f, -110,6105f, -4,648317f, 19,24567f, 11,49291f, 21,88736f);
	ADD_TO_VOLUME_SET(Local_4.f_976, (*&Local_4 + 956)[3]);
	Local_4.f_1000 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageTwoVols_set");
	(*&Local_4 + 980)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CrowdVolume", 2, -3113,546f, 45,67728f, 3763,23f, 0.0f, -0,1839124f, 0.0f, 28,23199f, 5,509078f, 13,70402f);
	ADD_TO_VOLUME_SET(Local_4.f_1000, (*&Local_4 + 980)[0]);
	(*&Local_4 + 980)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "crowdtriggerVolume", 2, -3118,928f, 44,41521f, 3765,377f, -2,954698f, -2,943833f, -0,5084137f, 6,761561f, 6,081476f, 12,92866f);
	ADD_TO_VOLUME_SET(Local_4.f_1000, (*&Local_4 + 980)[1]);
	(*&Local_4 + 980)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AmbientRestrictVol", 2, -3152,384f, 45,83379f, 3775,171f, 4,136243f, -60,32667f, -0,1822008f, 87,81236f, 21,01226f, 127,3471f);
	ADD_TO_VOLUME_SET(Local_4.f_1000, (*&Local_4 + 980)[2]);
	(*&Local_4 + 980)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DrinkVol", 2, -3123,693f, 45,25932f, 3762,345f, 0.0f, -3,12009f, 0.0f, 3,99258f, 3,435834f, 2,873389f);
	ADD_TO_VOLUME_SET(Local_4.f_1000, (*&Local_4 + 980)[3]);
	Local_4.f_1024 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageThreeVols_set");
	(*&Local_4 + 1004)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WagonVolume", 2, -3128,385f, 47,26155f, 3762,235f, -3,145359f, -20,24872f, 0,4292678f, 6,761561f, 9,004595f, 12,92866f);
	ADD_TO_VOLUME_SET(Local_4.f_1024, (*&Local_4 + 1004)[0]);
	(*&Local_4 + 1004)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFinishVol", 2, -3641,142f, 31,01631f, 4005,486f, 2,034306f, 157,9162f, -0,1055517f, 42,40657f, 17,04808f, 29,07014f);
	ADD_TO_VOLUME_SET(Local_4.f_1024, (*&Local_4 + 1004)[1]);
	(*&Local_4 + 1004)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CrowdGotoVol", 2, -3227,695f, 40,08981f, 3735,933f, -103,3134f, 86,96764f, -103,9917f, 70,87827f, 6,108732f, 17,37464f);
	ADD_TO_VOLUME_SET(Local_4.f_1024, (*&Local_4 + 1004)[2]);
	(*&Local_4 + 1004)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WagonSideVol", 2, -3138,864f, 46,91533f, 3758,53f, 0.0f, -24,72786f, 0.0f, 16,48656f, 11,65354f, 38,39861f);
	ADD_TO_VOLUME_SET(Local_4.f_1024, (*&Local_4 + 1004)[3]);
	Local_4.f_1048 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageFourVols_set");
	(*&Local_4 + 1028)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SetupBlockade", 2, -3787,875f, 30,31872f, 3915,282f, 0.0f, -34,0745f, 0.0f, 54,45659f, 30,14745f, 183,8814f);
	ADD_TO_VOLUME_SET(Local_4.f_1048, (*&Local_4 + 1028)[0]);
	(*&Local_4 + 1028)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BlockadeVol", 2, -3770,881f, 8,031368f, 3672,442f, 0.0f, -133,0101f, 0.0f, 26,43497f, 11,57704f, 22,54634f);
	ADD_TO_VOLUME_SET(Local_4.f_1048, (*&Local_4 + 1028)[1]);
	(*&Local_4 + 1028)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TipVol", 2, -3849,21f, 17,96032f, 3854,046f, 0.0f, -140,8659f, 0.0f, 13,74562f, 22,24815f, 8,092411f);
	ADD_TO_VOLUME_SET(Local_4.f_1048, (*&Local_4 + 1028)[2]);
	(*&Local_4 + 1028)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "UnAttachVol", 2, -3873,824f, 22,33847f, 3872,662f, 0.0f, -168,1088f, 0.0f, 13,74562f, 22,24815f, 23,86816f);
	ADD_TO_VOLUME_SET(Local_4.f_1048, (*&Local_4 + 1028)[3]);
	Local_4.f_1100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageFiveVols_set");
	(*&Local_4 + 1052)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Spawn01Vol", 2, -3752,989f, 10,11311f, 3638,162f, -1,488266f, -119,466f, 0,8168793f, 14,17231f, 17,04808f, 36,95452f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[0]);
	(*&Local_4 + 1052)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Trigger01Vol", 2, -3743,512f, 13,16222f, 3600,964f, 6,125018f, -73,44453f, -7,626078f, 14,17231f, 17,04808f, 36,95452f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[1]);
	(*&Local_4 + 1052)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Trigger02Vol", 2, -3966,582f, 15,0184f, 3338,216f, -2,785062f, -41,35775f, 1,196311f, 346,6607f, 23,65101f, 63,20086f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[2]);
	(*&Local_4 + 1052)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Trigger03Vol", 2, -4162,983f, 16,93077f, 3109,274f, 0.0f, -90,21668f, 0.0f, 136,3146f, 34,69264f, 60,21002f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[3]);
	(*&Local_4 + 1052)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FallbackVol", 2, -4218,419f, 13,07322f, 2797,852f, 0.0f, -53,18324f, 0.0f, 73,97057f, 25,91703f, 59,10946f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[4]);
	(*&Local_4 + 1052)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RetaskWagon02Vol", 2, -4024,044f, 13,35108f, 3235,415f, 0,7024627f, 5,817784f, 1,035857f, 65,26468f, 18,51834f, 30,84537f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[5]);
	(*&Local_4 + 1052)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RetaskWagon03Vol", 2, -4179,35f, 15,68777f, 2931,174f, 0,6994101f, 2,30463f, 0,9927744f, 24,08766f, 18,51834f, 54,08066f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[6]);
	(*&Local_4 + 1052)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nCuevaSeca", 3, -4331,6f, 22,74661f, 2723,903f, 0.0f, 20.0f, 0.0f, 18,0625f, 6,680991f, 17,48279f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[7]);
	(*&Local_4 + 1052)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Trigger04Vol", 2, -4128,946f, 16,45087f, 3207,004f, 0.0f, -32,0106f, 0.0f, 17,44427f, 24,88847f, 42,3079f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[8]);
	(*&Local_4 + 1052)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BenedictsVol", 2, -3741,352f, 12,37063f, 3503,421f, 0.0f, -73,44453f, 0.0f, 20,35855f, 17,04808f, 50,84706f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[9]);
	(*&Local_4 + 1052)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StopAmbusherVol", 2, -4199,578f, 20,42557f, 2867,08f, 0.0f, -67,61597f, 0.0f, 359,5011f, 19,65131f, 124,015f);
	ADD_TO_VOLUME_SET(Local_4.f_1100, (*&Local_4 + 1052)[10]);
	Local_4.f_1104 = CREATE_VOLUME_IN_LAYOUT(Local_4, "nPlainview", 3, -3129,917f, 50,16974f, 3741,102f, 0.0f, 20.0f, 0.0f, 40,94916f, 9,023805f, 40,94916f);
	Local_4.f_1108 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	*(&Local_4 + 1112[06]) = { -1468,229f, 79,98311f, 2852,357f };
	*(&Local_4 + 1112[06] + 12) = { 0.0f, 357,3844f, 0.0f };
	(*&Local_4 + 1212)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -1468,229f, 79,98311f, 2852,357f, 0.0f, 357,3844f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[0], Local_4.f_1108);
	*(&Local_4 + 1112[16]) = { -1471,015f, 79,61814f, 2851,1f };
	*(&Local_4 + 1112[16] + 12) = { 0.0f, 718,3917f, 0.0f };
	(*&Local_4 + 1212)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -1471,015f, 79,61814f, 2851,1f, 0.0f, 718,3917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[1], Local_4.f_1108);
	*(&Local_4 + 1112[26]) = { -1470,886f, 79,61814f, 2850,964f };
	*(&Local_4 + 1112[26] + 12) = { 0.0f, 360,6386f, 0.0f };
	(*&Local_4 + 1212)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -1470,886f, 79,61814f, 2850,964f, 0.0f, 360,6386f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[2], Local_4.f_1108);
	*(&Local_4 + 1112[36]) = { -1468,32f, 79,98311f, 2852,454f };
	*(&Local_4 + 1112[36] + 12) = { 0.0f, 0.0f, 0.0f };
	(*&Local_4 + 1212)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -1468,32f, 79,98311f, 2852,454f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[3], Local_4.f_1108);
	Local_4.f_1232 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	*(&Local_4 + 1236[06]) = { -3152.0f, 43,16615f, 3764f };
	*(&Local_4 + 1236[06] + 12) = { 0.0f, 867,1954f, 0.0f };
	(*&Local_4 + 1360)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -3152.0f, 43,16615f, 3764f, 0.0f, 867,1954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1360)[0], Local_4.f_1232);
	*(&Local_4 + 1236[16]) = { -3152.0f, 43,15129f, 3768f };
	*(&Local_4 + 1236[16] + 12) = { 0.0f, -38,07305f, 0.0f };
	(*&Local_4 + 1360)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -3152.0f, 43,15129f, 3768f, 0.0f, -38,07305f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1360)[1], Local_4.f_1232);
	*(&Local_4 + 1236[26]) = { -3139,522f, 42,90112f, 3775,199f };
	*(&Local_4 + 1236[26] + 12) = { 0.0f, 285,5703f, 0.0f };
	(*&Local_4 + 1360)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -3139,522f, 42,90112f, 3775,199f, 0.0f, 285,5703f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1360)[2], Local_4.f_1232);
	*(&Local_4 + 1236[36]) = { -3143,23f, 43,478f, 3767,785f };
	*(&Local_4 + 1236[36] + 12) = { -13,04323f, 970,3284f, 9,621022f };
	(*&Local_4 + 1360)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -3143,23f, 43,478f, 3767,785f, -13,04323f, 970,3284f, 9,621022f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1360)[3], Local_4.f_1232);
	*(&Local_4 + 1236[46]) = { -3153,886f, 43,478f, 3747,108f };
	*(&Local_4 + 1236[46] + 12) = { 0.0f, 984,5681f, 0.0f };
	(*&Local_4 + 1360)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "nhorsehide", -3153,886f, 43,478f, 3747,108f, 0.0f, 984,5681f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1360)[4], Local_4.f_1232);
	Local_4.f_1384 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	*(&Local_4 + 1388[06]) = { -3133,286f, 43,3485f, 3769,591f };
	*(&Local_4 + 1388[06] + 12) = { -180.0f, 77,99518f, -180.0f };
	(*&Local_4 + 1584)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", -3133,286f, 43,3485f, 3769,591f, -180.0f, 77,99518f, -180.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1584)[0], Local_4.f_1384);
	*(&Local_4 + 1388[16]) = { -3119.0f, 44,151f, 3763,46f };
	*(&Local_4 + 1388[16] + 12) = { -180.0f, 16,3734f, 180.0f };
	(*&Local_4 + 1584)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Accuser01End03", -3119.0f, 44,151f, 3763,46f, -180.0f, 16,3734f, 180.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1584)[1], Local_4.f_1384);
	*(&Local_4 + 1388[26]) = { -3117,85f, 44,151f, 3765,45f };
	*(&Local_4 + 1388[26] + 12) = { 169,145f, -3,66307f, 177,957f };
	(*&Local_4 + 1584)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Accuser02End03", -3117,85f, 44,151f, 3765,45f, 169,145f, -3,66307f, 177,957f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1584)[2], Local_4.f_1384);
	*(&Local_4 + 1388[36]) = { -3130,224f, 43,94308f, 3766,027f };
	*(&Local_4 + 1388[36] + 12) = { -155,2861f, 96,49164f, -158,28f };
	(*&Local_4 + 1584)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -3130,224f, 43,94308f, 3766,027f, -155,2861f, 96,49164f, -158,28f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1584)[3], Local_4.f_1384);
	*(&Local_4 + 1388[46]) = { -3123,694f, 44,17206f, 3762,26f };
	*(&Local_4 + 1388[46] + 12) = { 0.0f, 634,4052f, 0.0f };
	(*&Local_4 + 1584)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -3123,694f, 44,17206f, 3762,26f, 0.0f, 634,4052f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1584)[4], Local_4.f_1384);
	*(&Local_4 + 1388[56]) = { -3124,662f, 44,09315f, 3765,123f };
	*(&Local_4 + 1388[56] + 12) = { 0.0f, 276,1848f, 0.0f };
	(*&Local_4 + 1584)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -3124,662f, 44,09315f, 3765,123f, 0.0f, 276,1848f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1584)[5], Local_4.f_1384);
	*(&Local_4 + 1388[66]) = { -3124,99f, 44,1563f, 3765,3f };
	*(&Local_4 + 1388[66] + 12) = { 179,727f, 78,4282f, 179,552f };
	(*&Local_4 + 1584)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "MiscCrowdMember01End03", -3124,99f, 44,1563f, 3765,3f, 179,727f, 78,4282f, 179,552f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1584)[6], Local_4.f_1384);
	*(&Local_4 + 1388[76]) = { -3124,87f, 44,1557f, 3764,29f };
	*(&Local_4 + 1388[76] + 12) = { 173,808f, 79,8783f, 174,442f };
	(*&Local_4 + 1584)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "MiscCrowdMember02End03", -3124,87f, 44,1557f, 3764,29f, 173,808f, 79,8783f, 174,442f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1584)[7], Local_4.f_1384);
	Local_4.f_1620 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	*(&Local_4 + 1624[06]) = { -3654,476f, 28,08202f, 4002,421f };
	*(&Local_4 + 1624[06] + 12) = { 0.0f, 799,6255f, 0.0f };
	(*&Local_4 + 1724)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -3654,476f, 28,08202f, 4002,421f, 0.0f, 799,6255f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1724)[0], Local_4.f_1620);
	*(&Local_4 + 1624[16]) = { -3654,459f, 28,08236f, 4002,366f };
	*(&Local_4 + 1624[16] + 12) = { 0.0f, 77,94804f, 0.0f };
	(*&Local_4 + 1724)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -3654,459f, 28,08236f, 4002,366f, 0.0f, 77,94804f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1724)[1], Local_4.f_1620);
	*(&Local_4 + 1624[26]) = { -3650,5f, 28,14755f, 4003,159f };
	*(&Local_4 + 1624[26] + 12) = { 0.0f, -279,7219f, 0.0f };
	(*&Local_4 + 1724)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd04", -3650,5f, 28,14755f, 4003,159f, 0.0f, -279,7219f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1724)[2], Local_4.f_1620);
	*(&Local_4 + 1624[36]) = { -3650,502f, 28,14751f, 4003,165f };
	*(&Local_4 + 1624[36] + 12) = { 0.0f, 69,96501f, 0.0f };
	(*&Local_4 + 1724)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -3650,502f, 28,14751f, 4003,165f, 0.0f, 69,96501f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1724)[3], Local_4.f_1620);
	Local_4.f_1744 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	*(&Local_4 + 1748[06]) = { -3768,804f, 7,826989f, 3674,386f };
	*(&Local_4 + 1748[06] + 12) = { 0.0f, 693,9828f, 0.0f };
	(*&Local_4 + 1848)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -3768,804f, 7,826989f, 3674,386f, 0.0f, 693,9828f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1848)[0], Local_4.f_1744);
	*(&Local_4 + 1748[16]) = { -3768,887f, 7,826715f, 3674,339f };
	*(&Local_4 + 1748[16] + 12) = { 0.0f, -12,42194f, 0.0f };
	(*&Local_4 + 1848)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd05", -3768,887f, 7,826715f, 3674,339f, 0.0f, -12,42194f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1848)[1], Local_4.f_1744);
	*(&Local_4 + 1748[26]) = { -3773,756f, 8,018215f, 3666,792f };
	*(&Local_4 + 1748[26] + 12) = { 0.0f, -354,3634f, 0.0f };
	(*&Local_4 + 1848)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd05", -3773,756f, 8,018215f, 3666,792f, 0.0f, -354,3634f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1848)[2], Local_4.f_1744);
	*(&Local_4 + 1748[36]) = { -3773,689f, 8,017825f, 3666,875f };
	*(&Local_4 + 1748[36] + 12) = { 0.0f, 12,54056f, 0.0f };
	(*&Local_4 + 1848)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -3773,689f, 8,017825f, 3666,875f, 0.0f, 12,54056f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1848)[3], Local_4.f_1744);
	Local_4.f_1868 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	*(&Local_4 + 1872[06]) = { -4323,197f, 22,80339f, 2733,389f };
	*(&Local_4 + 1872[06] + 12) = { 0.0f, 829,1189f, 0.0f };
	(*&Local_4 + 2092)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -4323,197f, 22,80339f, 2733,389f, 0.0f, 829,1189f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[0], Local_4.f_1868);
	*(&Local_4 + 1872[16]) = { -4329,911f, 23,03979f, 2734,089f };
	*(&Local_4 + 1872[16] + 12) = { 0.0f, -312,0585f, 0.0f };
	(*&Local_4 + 2092)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -4329,911f, 23,03979f, 2734,089f, 0.0f, -312,0585f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[1], Local_4.f_1868);
	*(&Local_4 + 1872[26]) = { -4329,969f, 23,04119f, 2734,031f };
	*(&Local_4 + 1872[26] + 12) = { 0.0f, 46,73194f, 0.0f };
	(*&Local_4 + 2092)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -4329,969f, 23,04119f, 2734,031f, 0.0f, 46,73194f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[2], Local_4.f_1868);
	*(&Local_4 + 1872[36]) = { -4326,782f, 22,99371f, 2735,957f };
	*(&Local_4 + 1872[36] + 12) = { 0.0f, -4,986804f, 0.0f };
	(*&Local_4 + 2092)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "nWagonLast", -4326,782f, 22,99371f, 2735,957f, 0.0f, -4,986804f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[3], Local_4.f_1868);
	*(&Local_4 + 1872[46]) = { -4325,455f, 22,11189f, 2724,625f };
	*(&Local_4 + 1872[46] + 12) = { 0.0f, -36,88176f, 0.0f };
	(*&Local_4 + 2092)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerGoto01", -4325,455f, 22,11189f, 2724,625f, 0.0f, -36,88176f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[4], Local_4.f_1868);
	*(&Local_4 + 1872[56]) = { -4328.0f, 23,22959f, 2739,746f };
	*(&Local_4 + 1872[56] + 12) = { 0.0f, -12,41291f, 0.0f };
	(*&Local_4 + 2092)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionGoto01", -4328.0f, 23,22959f, 2739,746f, 0.0f, -12,41291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[5], Local_4.f_1868);
	*(&Local_4 + 1872[66]) = { -4314,004f, 25,10001f, 2752f };
	*(&Local_4 + 1872[66] + 12) = { 0.0f, -12,41291f, 0.0f };
	(*&Local_4 + 2092)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionGoto02", -4314,004f, 25,10001f, 2752f, 0.0f, -12,41291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[6], Local_4.f_1868);
	*(&Local_4 + 1872[76]) = { -4332.0f, 23,15418f, 2736,965f };
	*(&Local_4 + 1872[76] + 12) = { 0.0f, 1014,357f, 0.0f };
	(*&Local_4 + 2092)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -4332.0f, 23,15418f, 2736,965f, 0.0f, 1014,357f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[7], Local_4.f_1868);
	*(&Local_4 + 1872[86]) = { -4321,953f, 20,86809f, 2721,954f };
	*(&Local_4 + 1872[86] + 12) = { 0.0f, -4,986804f, 0.0f };
	(*&Local_4 + 2092)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "StubGoto01", -4321,953f, 20,86809f, 2721,954f, 0.0f, -4,986804f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2092)[8], Local_4.f_1868);
	Local_4.f_2132 = CREATE_OBJECTSET_IN_LAYOUT("StageTwoSet", Local_4, 8, 0);
	*(&Local_4 + 2136[06]) = { -3117,23f, 44,1711f, 3764f };
	*(&Local_4 + 2136[06] + 12) = { -122,8496f, 92,46777f, -124,1702f };
	(*&Local_4 + 2284)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdPos", -3117,23f, 44,1711f, 3764f, -122,8496f, 92,46777f, -124,1702f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[0], Local_4.f_2132);
	*(&Local_4 + 2136[16]) = { -3157,349f, 43,19073f, 3757,108f };
	*(&Local_4 + 2136[16] + 12) = { 0.0f, -118,5009f, 0.0f };
	(*&Local_4 + 2284)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "FindRotateCrate", -3157,349f, 43,19073f, 3757,108f, 0.0f, -118,5009f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[1], Local_4.f_2132);
	*(&Local_4 + 2136[26]) = { -3124,165f, 44,96428f, 3763,337f };
	*(&Local_4 + 2136[26] + 12) = { 0.0f, -448,1093f, 0.0f };
	(*&Local_4 + 2284)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "SpawnLantern", -3124,165f, 44,96428f, 3763,337f, 0.0f, -448,1093f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[2], Local_4.f_2132);
	*(&Local_4 + 2136[36]) = { -3118,738f, 44,151f, 3764,795f };
	*(&Local_4 + 2136[36] + 12) = { 0.0f, -284,3067f, 0.0f };
	(*&Local_4 + 2284)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Finish02", -3118,738f, 44,151f, 3764,795f, 0.0f, -284,3067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[3], Local_4.f_2132);
	*(&Local_4 + 2136[46]) = { -3142,842f, 43,22709f, 3770,54f };
	*(&Local_4 + 2136[46] + 12) = { 0.0f, 160,0596f, 0.0f };
	(*&Local_4 + 2284)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "SpawnWagon", -3142,842f, 43,22709f, 3770,54f, 0.0f, 160,0596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[4], Local_4.f_2132);
	*(&Local_4 + 2136[56]) = { -3141,509f, 44,137f, 3770,473f };
	*(&Local_4 + 2136[56] + 12) = { 0.0f, 97,923f, 0.0f };
	(*&Local_4 + 2284)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Finish02Goto", -3141,509f, 44,137f, 3770,473f, 0.0f, 97,923f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[5], Local_4.f_2132);
	Local_4.f_2312 = CREATE_OBJECTSET_IN_LAYOUT("StageThreeSet", Local_4, 8, 0);
	*(&Local_4 + 2316[06]) = { -3316.0f, 41,48872f, 3721,329f };
	*(&Local_4 + 2316[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "FindPointWagon01", -3316.0f, 41,48872f, 3721,329f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_2312);
	*(&Local_4 + 2316[16]) = { -3408,936f, 31,12027f, 3882,752f };
	*(&Local_4 + 2316[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "FindPointWagon02", -3408,936f, 31,12027f, 3882,752f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_2312);
	*(&Local_4 + 2316[26]) = { -3726,095f, 27,12753f, 3961,905f };
	*(&Local_4 + 2316[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "FindPointWagon04", -3726,095f, 27,12753f, 3961,905f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_2312);
	*(&Local_4 + 2316[36]) = { -3408,73f, 31,11662f, 3883,27f };
	*(&Local_4 + 2316[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "FindPointWagon03", -3408,73f, 31,11662f, 3883,27f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_2312);
	*(&Local_4 + 2316[46]) = { -3521,05f, 19,28876f, 4204,738f };
	*(&Local_4 + 2316[46] + 12) = { 0.0f, 33,09399f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "TrainStart03", -3521,05f, 19,28876f, 4204,738f, 0.0f, 33,09399f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_2312);
	Local_4.f_2440 = CREATE_OBJECTSET_IN_LAYOUT("StageFourSet", Local_4, 8, 0);
	*(&Local_4 + 2444[06]) = { -3728.0f, 27,11482f, 3964f };
	*(&Local_4 + 2444[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerFindPointWagon01", -3728.0f, 27,11482f, 3964f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_2440);
	*(&Local_4 + 2444[16]) = { -3589,794f, 15,13289f, 3206,464f };
	*(&Local_4 + 2444[16] + 12) = { 0.0f, -45,12617f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "nTrainGoto", -3589,794f, 15,13289f, 3206,464f, 0.0f, -45,12617f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_2440);
	*(&Local_4 + 2444[26]) = { -3772,463f, 7,81495f, 3672,336f };
	*(&Local_4 + 2444[26] + 12) = { 0.0f, 139,8352f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "Blockader01ShootFrom", -3772,463f, 7,81495f, 3672,336f, 0.0f, 139,8352f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_2440);
	*(&Local_4 + 2444[36]) = { -3791,493f, 15,73465f, 3679,102f };
	*(&Local_4 + 2444[36] + 12) = { 0.0f, 172,4259f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "Blockader02ShootFrom", -3791,493f, 15,73465f, 3679,102f, 0.0f, 172,4259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_2440);
	*(&Local_4 + 2444[46]) = { -3765,447f, 8,649384f, 3676,832f };
	*(&Local_4 + 2444[46] + 12) = { 0.0f, 126,7611f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "Blockader03ShootFrom", -3765,447f, 8,649384f, 3676,832f, 0.0f, 126,7611f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_2440);
	*(&Local_4 + 2444[56]) = { -3610,603f, 20,62105f, 4089,582f };
	*(&Local_4 + 2444[56] + 12) = { 0.0f, 39,13784f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "TrainStart04", -3610,603f, 20,62105f, 4089,582f, 0.0f, 39,13784f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_2440);
	Local_4.f_2592 = CREATE_OBJECTSET_IN_LAYOUT("StageFiveSet", Local_4, 8, 0);
	*(&Local_4 + 2596[06]) = { -4321,958f, 20,86809f, 2721,95f };
	*(&Local_4 + 2596[06] + 12) = { 0.0f, 75,17954f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "nFinalGoto", -4321,958f, 20,86809f, 2721,95f, 0.0f, 75,17954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_2592);
	*(&Local_4 + 2596[16]) = { -3854,462f, 7,781368f, 3460,052f };
	*(&Local_4 + 2596[16] + 12) = { 0.0f, -328,8376f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantWagon_Chase02_Start", -3854,462f, 7,781368f, 3460,052f, 0.0f, -328,8376f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_2592);
	*(&Local_4 + 2596[26]) = { -4033,24f, 7,737687f, 3254,515f };
	*(&Local_4 + 2596[26] + 12) = { 0.0f, -312,139f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantWagon_Chase02_End", -4033,24f, 7,737687f, 3254,515f, 0.0f, -312,139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_2592);
	*(&Local_4 + 2596[36]) = { -4158,417f, 8,340924f, 3180,156f };
	*(&Local_4 + 2596[36] + 12) = { 0.0f, -310,7764f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantWagon_Chase03_Start", -4158,417f, 8,340924f, 3180,156f, 0.0f, -310,7764f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_2592);
	*(&Local_4 + 2596[46]) = { -4156,708f, 17,12236f, 2949,862f };
	*(&Local_4 + 2596[46] + 12) = { 2,311036f, -321,2716f, 1,343251f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantWagon_Chase03_End", -4156,708f, 17,12236f, 2949,862f, 2,311036f, -321,2716f, 1,343251f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_2592);
	*(&Local_4 + 2596[56]) = { -3884,017f, 10,78832f, 3209,709f };
	*(&Local_4 + 2596[56] + 12) = { 0.0f, -268,5107f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "Wagon02_Chase_Start", -3884,017f, 10,78832f, 3209,709f, 0.0f, -268,5107f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_2592);
	*(&Local_4 + 2596[66]) = { -4026,639f, 7,880773f, 3231,691f };
	*(&Local_4 + 2596[66] + 12) = { 0.0f, -295,7532f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "Wagon02_Chase_End", -4026,639f, 7,880773f, 3231,691f, 0.0f, -295,7532f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_2592);
	*(&Local_4 + 2596[76]) = { -4271,882f, 30,11435f, 3034,485f };
	*(&Local_4 + 2596[76] + 12) = { 0.0f, -328,8376f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "Wagon03_Chase_Start", -4271,882f, 30,11435f, 3034,485f, 0.0f, -328,8376f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_2592);
	*(&Local_4 + 2596[86]) = { -4170,51f, 16,56465f, 2946,51f };
	*(&Local_4 + 2596[86] + 12) = { 0.0f, -328,8376f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "Wagon03_Chase_End", -4170,51f, 16,56465f, 2946,51f, 0.0f, -328,8376f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_2592);
	Local_4.f_2816 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand", "smoking_stand", -3117,469f, 44,15486f, 3768f, 0.0f, -301,3417f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2816), 0);
	Local_4.f_2820 = CREATE_GRINGO_IN_LAYOUT(Local_4, "lean_fence_L", "lean_fence_L", -3102,916f, 45,08257f, 3760,465f, 0.0f, 41,69626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2820), 0);
	Local_4.f_2824 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_spit", "npreaching", -3119,553f, 44,06409f, 3769,622f, 0.0f, -289,302f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2824), 0);
	Local_4.f_2828 = CREATE_GRINGO_IN_LAYOUT(Local_4, "rand_idle_stand_nospawn03", "rand_idle_stand_nospawn", -3117,44f, 44,1552f, 3768f, 0.0f, 58,66973f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2828), 0);
	Local_4.f_2832 = CREATE_GRINGO_IN_LAYOUT(Local_4, "preaching_at_podium", "preaching_at_podium", -3124,671f, 44,1161f, 3765,102f, 0.0f, -85,21828f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2832), 0);
	Local_4.f_2836 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Sit_Ground_Only", "stand_dnd_rowdydrink", -3120.0f, 44,14787f, 3766,663f, 0.0f, 75,05489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2836), 0);
	Local_4.f_2840 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand1", "smoking_stand", -3121,522f, 44,15486f, 3760,104f, 0.0f, -184,1617f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2840), 0);
	Local_4.f_2844 = CREATE_GRINGO_IN_LAYOUT(Local_4, "Sit_Ground_Only1", "stand_dnd_rowdydrink", -3119,402f, 44,14787f, 3760,324f, 0.0f, 126,6882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2844), 0);
	Local_4.f_2848 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low02", -3791,302f, 15,8387f, 3679,311f, 0.0f, 170,408f, 0.0f, 4);
}

struct<8> E*TéÅ,ÛA´®­E*¸Å2YA¶4²E*®½Å6A·4éE*ÐI,ô:D(;oAccuserFollowPath01    p   xÅFB$øjEeo7ÅEoNB&ìÓEeÈÅEB(VxEf
ÅDÁB)«8Ef0ÅD&B*ÐÐEfñÅDiéB+Q:(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x2122F / 135727
{
	(!StackVal * 26412)->f_10590 = StackVal;
}

var A zEJçêÅ|ôÏA $EJe;Å}¹.A oÈEJ#ÎÅ~VË@üvEJDÅ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x215D7 / 136663
{
	int iVar16569;
	
	return StackVal;
	(*StackVal)[StackVal21] = StackVal;
	return;
	return "EIÔ¦Å€  A oJEI^ÃÅ€: AIñEHÜ¿Å€x¡A6EH›ËÅ€øA½DEH*OÅ` A	ªŒEG®{ÅUA¶uEG!€ÅÊÈAI|EFc¦Åà AÂ}EE°mÅè¯A)Ü¿EE\nÅîHA?®ED›­Å‚  A?ówECèÅ‚øAV" | 4539166, 26966;
	return;
	PatchTrap6();
	return;
	return;
	return (StackVal || StackVal * 239 * 16941[StackVal197]) > 28763 * 16786 + 16757;
	return StackVal, StackVal * 16570, 3.0f;
	Unknown_Function();
}

vector3 A<EFÖúÅÒA¢EF×Åà AÉùEEoÅèBABEDÅý	AC4¯ECÅîÅfAZÇEBýÏÅAfÕ=EB@ Å©AqQ§EAL¯ÅÿXAq±E@¸.ÅÙAôÖE?ÒZÅ¯ÄAÍ·E?BÅ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x21A13 / 137747
{
	Unknown_Function();
	*6 = Global_50561;
	return StackVal, StackVal, StackVal ^ (StackVal - 4294936683 * 15958) * 15742;
	*StackVal = StackVal;
	PatchTrap7();
	*4294938240 = StackVal;
	return StackVal, StackVal * 15546;
	return StackVal, StackVal, StackVal;
	PatchTrap3();
	return StackVal, StackVal >= StackVal, IS_ACTOR_ON_LADDER() * 15368;
}

vector3 E8ÒDÅ»A§E87/Åà AfE7Åà A}6£E6Ä¢Åà A&E5öÅÊÌAE5,ÅÀ Ar(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x21AEF / 137967
{
	int iVar130;
	
	return StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(StackVal, StackVal, StackVal) * 13404;
	return StackVal, StackVal, 28167 * 13184;
	PatchTrap5();
	return StackVal, IntToFloat(StackVal) < 26167 * 12985, iVar130;
	PatchTrapA();
	return StackVal, StackVal, 23447 * 12781;
}

vector3 AxüúE'ùµÅé3A|äE'{ôÅö1A~!E''óÅü¡A(ÓE&ýé,ô:DD;oEnemyFollowPath_Block(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x21EDF / 138975
{
	Unknown_Function();
	stradd(&cLocal_25958, StackVal, 0);
}

void A¡ºEb_Åj#³@ú	Ea¨DÅjRê@úE`gúÅj¥õ@ùE_bÅjíÚAd¿E^ÎÅk¾A{-E]ç¥Åk&CA .E]&%Åk_@÷·ÝE\xOÅkÄ1@ù*áE[³ÿÅlrò@øOúE[>?Åm/i@ù E[0ðÅmøU@ù E[¦Ån§j@ù EZÑCÅoDy@ù&,EZ@ÅoÔ@ù/EZ$iÅpdv@ù&¸EY«'ÅpÔº@ùå(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x22943 / 141635
{
	var uVar2525;
	int iVar12527;
	int iVar50350;
	
	PatchTrapA();
	PatchTrap9();
	strcpy(("" + (iScriptParam_6 * 22439 / "") * 249) * 22242, -"" * 249 * 22635, 19);
	itos((*StackVal * 22804 * 249 * 22082)[StackVal50546], StackVal, 154);
}

var AxüúE'ùµÅ$ÝA|äE'{ôÅ1ÛA~!E''óÅ8KA(ÓE&ýé,ô:Dd;otableSnakeOilSign01x0 op_gen_tableSnakeOilSign01x )ÅCi÷)B0)Ek6_)BªQ,:Dhz-   ,Ùc CT@c {T>c {,A]c {LS'ªc {Mý,c T7Ný{{-	  8 %d OoECOMPANION_STE(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8, var uParam9, var uParam10, var uParam11, bool bParam12, bool bParam13, vector3 vParam14, int iParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x2363B / 144955
{
	Unknown_Function();
	iLocal_18766 = 17236 | Global_21050;
	Call_Loc(19551 | (*17236 | Global_21050)[17236 | Global_2105010794]);
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_162(&(Global_29008[Global_30621[3]]), 4))
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
		STREAMING_REQUEST_ACTOR(" are stealing COMPANION_DUMMY! ,/q/.	8 98%f ?o5COMPANION_STEAL_ACTOR: CompanionsList out of bounds. ,/q/.	89", true, false);
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
		bParam13 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bParam13), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(Global_8492[iParam014]);
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
		Function_443(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bParam12 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bParam12 = Function_593(StackVal, uParam7);
		}
		if (bParam8)
		{
			bParam12 = Function_589(StackVal, uParam7);
		}
		if (!IS_ACTOR_VALID(bParam12))
		{
			vParam14.x = uParam3;
			vParam14.y = uParam4;
			vParam14.z = uParam5;
			if (Function_76(StackVal, StackVal, vParam14))
			{
				iParam17 = 0;
				while (iParam17 <= Global_3422)
				{
					if (IS_SCRIPT_VALID(Global_3422[iParam1740].f_108))
					{
						vParam14 = { StackVal, StackVal, *(&Global_3422[iParam1740] + 52) };
					}
					iParam17++;
				}
			}
			bParam12 = CREATE_ACTOR_IN_LAYOUT(StackVal, Global_8492[iParam014].f_12, &Global_8492[iParam014] + 20, vParam14, 0.0f, 0.0f, 0.0f);
		}
	}
	if (IS_ACTOR_VALID(bParam12))
	{
		REFERENCE_ACTOR(bParam12);
		TASK_CLEAR(bParam12);
		TASK_PRIORITY_SET(bParam12, true);
		MAKE_ACTOR_READY_FOR_ACTION(bParam12, 1);
		SET_ACTOR_UPDATE_PRIORITY(bParam12, false);
		Function_588(bParam12, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			DECOR_SET_INT(Global_8492[iParam014], "ambientFaction", GET_ACTOR_FACTION(bParam12));
		}
		SET_ACTOR_FACTION(bParam12, 20);
		MEMORY_CONSIDER_AS(bParam12, Global_34573, false);
		SET_ACTOR_ALLOW_DISARM(bParam12, false);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bParam12, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(bParam12, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(bParam12))
		{
			FREE_FROM_HOGTIE(bParam12);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(bParam12, 0);
			SET_ANIM_SET_FOR_ACTOR(bParam12, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam12, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam12, 8, 0.0f);
		}
		UNK_0x99AFD2D1(bParam12, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(bParam12, 3);
		SET_ACTOR_IS_COMPANION(bParam12, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam12, false);
		SET_ACTOR_IS_AMBIENT(bParam12, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam12, false);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam12, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bParam12, false);
		Function_520(bParam12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam12, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bParam12, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bParam12, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bParam12, 1);
		if (DECOR_CHECK_EXIST(bParam12, "hidden"))
		{
			DECOR_REMOVE(bParam12, "hidden");
		}
		SET_DRAW_ACTOR(bParam12, true);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam12, 1);
		Global_8492[iParam014].f_4 = bParam12;
		return bParam12;
	}
	return "";
}

void Function_588(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x23C06 / 146438
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

bool Function_589(bool bParam0, bool bParam1) //Position: 0x23C5A / 146522
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_352(bParam0))
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
					if (GET_ACTOR_ENUM(bVar2) == bParam0)
					{
						Function_590(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_590(bool bParam0, bool bParam1) //Position: 0x23CDA / 146650
{
	Function_592(bParam0);
	Function_591(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_591(bool bParam0) //Position: 0x23D00 / 146688
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_592(bool bParam0) //Position: 0x23D24 / 146724
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

bool Function_593(int iParam0, bool bParam1) //Position: 0x23DF3 / 146931
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

int Function_594() //Position: 0x23E86 / 147078
{
	Function_411(&Local_4 + 4, 546, 2, 0);
	Function_463(&Local_4 + 4, "p_gen_tableSnakeOilSign01x", 0, 0);
	Function_463(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_463(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_463(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/preaching", 1, 0);
	Function_463(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_463(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/preaching_at_podium", 1, 0);
	Function_463(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	if (Function_406(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

int Function_595(bool bParam0) //Position: 0x2409B / 147611
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

int Function_596() //Position: 0x240C9 / 147657
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_406(&bLocal_898))
		{
			return 0;
		}
	}
	return 1;
}

void Function_597(int iParam0) //Position: 0x240E3 / 147683
{
	Function_598(&Global_28842, iParam0);
	return;
}

void Function_598(var uParam0, var uParam1) //Position: 0x240F1 / 147697
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_599() //Position: 0x24114 / 147732
{
	Function_463(&bLocal_774, "driver_gives_ammo", 5, 0);
	Function_463(&bLocal_774, "custom/driver_gives_ammo", 8, 0);
	Function_463(&bLocal_774, "merchant_intro", 5, 0);
	Function_463(&bLocal_774, "custom/merchant_intro", 8, 0);
	Function_411(&bLocal_774, 1200, 2, 0);
	Function_411(&bLocal_774, 397, 2, 0);
	Function_411(&bLocal_774, 398, 2, 0);
	Function_411(&bLocal_774, 399, 2, 0);
	Function_411(&bLocal_774, 400, 2, 0);
	Function_411(&bLocal_774, 401, 2, 0);
	Function_411(&bLocal_774, 402, 2, 0);
	Function_411(&bLocal_774, 976, 2, 0);
	Function_411(&bLocal_774, 977, 2, 0);
	Function_411(&bLocal_774, 980, 2, 0);
	Function_411(&bLocal_774, 981, 2, 0);
	Function_411(&bLocal_774, 178, 2, 0);
	Function_411(&bLocal_774, 10, 2, 0);
	Function_411(&bLocal_774, 168, 2, 0);
	Function_411(&bLocal_774, 36, 2, 0);
	Function_411(&bLocal_774, 286, 2, 0);
	Function_411(&bLocal_774, 169, 2, 0);
	Function_411(&bLocal_774, 1166, 2, 0);
	Function_411(&bLocal_774, 1167, 2, 0);
	Function_411(&bLocal_774, 1165, 2, 0);
	Function_411(&bLocal_774, 1156, 2, 0);
	Function_411(&bLocal_774, 1160, 2, 0);
	Function_411(&bLocal_774, 1162, 2, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_bottleSnakeOil01x", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_crateTnt01x", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_crateTnt02x", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_lantern04x", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_wagonExplode01bx", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_wagonExplode01cx", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_wagonExplode01dx", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_wagonExplode01ex", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_wagonExplode01fx", 0, 0);
	Function_463(&bLocal_774, "$/fragments/p_gen_wagonExplodeYoke01x", 0, 0);
	Function_411(&bLocal_898, 976, 2, 0);
	Function_411(&bLocal_898, 1202, 2, 0);
	Function_411(&bLocal_898, 977, 2, 0);
	Function_463(&bLocal_774, "Merchant03", 10, 0);
	return;
}

void Function_600(int iParam0, bool bParam1) //Position: 0x244A2 / 148642
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_606(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_287(iParam0))
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
	if (!Function_287(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_210();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_247();
	Function_278();
	Function_236("");
	Function_605(0);
	Function_604();
	Function_188();
	Function_222();
	ENABLE_JOURNAL_REPLAY(0);
	Function_603();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_337(0, 0x40400000);
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
	Function_602(13);
	Function_602(14);
	Function_602(25);
	Function_602(24);
	Function_602(12);
	Function_602(27);
	Function_602(26);
	Function_602(15);
	Function_601();
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

void Function_601() //Position: 0x248C6 / 149702
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

void Function_602(int iParam0) //Position: 0x2493A / 149818
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_603() //Position: 0x2495A / 149850
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

void Function_604() //Position: 0x24997 / 149911
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_605(int iParam0) //Position: 0x249AB / 149931
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_191())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_606(int iParam0, int iParam1) //Position: 0x249E0 / 149984
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
			Function_607(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_607(int iParam0) //Position: 0x24A62 / 150114
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

bool Function_608(int iParam0) //Position: 0x24AB0 / 150192
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
			Function_609(iParam0, 1);
			return 1;
		}
	}
	Function_609(iParam0, 0);
	return 0;
}

void Function_609(int iParam0, bool bParam1) //Position: 0x24B37 / 150327
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

bool Function_610(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x24B5B / 150363
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
		Function_609(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_628(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_627(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_627(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_614(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_156(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_609(iParam2, 0);
														return 0;
													}
													if (Function_156(bVar17, 2))
													{
														Function_613(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_612(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_156(bVar17, 4))
													{
														Function_613(&bVar17);
														strcpy(&Var18, "", 64);
														Function_611(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_236(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_612(StackVal, iParam2, bVar17);
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
	Function_609(iParam2, 0);
	return 0;
}

void Function_611(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x24EF4 / 151284
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

void Function_612(var uParam0, int iParam1, bool bParam2) //Position: 0x24FDF / 151519
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

void Function_613(bool bParam0) //Position: 0x25055 / 151637
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_39(&iVar0, 1);
	Function_39(&iVar0, 2);
	Function_39(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_614(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x25077 / 151671
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
			return Function_625(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_618(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_625(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_615(iParam0, bVar2);
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
						bVar2 = Function_625(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_615(iParam0, bVar2);
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

var Function_615(int iParam0, bool bParam1) //Position: 0x251C1 / 152001
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_156(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_617(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_616(16);
			}
		}
	}
	else if (Function_156(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_617(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_616(256);
			}
		}
	}
	return bParam1;
}

bool Function_616(int iParam0) //Position: 0x252F4 / 152308
{
	return 2 | iParam0;
}

int Function_617(int iParam0) //Position: 0x252FE / 152318
{
	return 4 | iParam0;
}

int Function_618(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x25308 / 152328
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
				iParam3 = Function_624(iParam0, iParam1, bParam4);
				if (Function_156(iParam3, 4))
				{
					Function_79(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_616(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_619(iParam0, iParam1, 0, bParam4);
				if (Function_156(iParam3, 4))
				{
					Function_79(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_616(16);
		}
	}
	return 0;
}

int Function_619(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x253BA / 152506
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_623(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_622(iVar0, 3, 1, bParam3))
			{
				if (!Function_627(iParam0, 8, 1))
				{
					return Function_621(64, 1024, bParam2);
				}
			}
			return Function_620(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_622(iVar0, 2, 1, bParam3))
			{
				if (!Function_627(iParam0, 32, 1))
				{
					return Function_621(64, 1024, bParam2);
				}
			}
			return Function_620(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_622(iVar0, 1, 1, bParam3))
			{
				if (!Function_627(iParam0, 64, 1))
				{
					return Function_621(64, 1024, bParam2);
				}
			}
			return Function_620(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_622(iVar0, 3, 1, bParam3))
			{
				if (!Function_627(iParam0, 128, 1))
				{
					return Function_621(64, 1024, bParam2);
				}
			}
			return Function_620(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_622(iVar0, 1, 1, bParam3))
			{
				if (!Function_627(iParam0, 1024, 1))
				{
					return Function_621(64, 1024, bParam2);
				}
			}
			return Function_620(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_622(iVar0, 1, 1, bParam3))
			{
				if (!Function_627(iParam0, 1024, 1))
				{
					return Function_621(64, 1024, bParam2);
				}
			}
			return Function_620(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_620(int iParam0, int iParam1, bool bParam2) //Position: 0x25574 / 152948
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_621(int iParam0, int iParam1, bool bParam2) //Position: 0x25589 / 152969
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_622(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2559E / 152990
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_623(int iParam0) //Position: 0x255BB / 153019
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

int Function_624(var uParam0, int iParam1, bool bParam2) //Position: 0x2562A / 153130
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_623(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_622(iVar0, 3, 1, bParam2))
			{
				if (!Function_627(uParam0, 8, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000009:
			if (Function_622(iVar0, 3, 1, bParam2))
			{
				if (!Function_627(uParam0, 8, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x0000006E:
			if (Function_622(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(uParam0, 16, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x0000005B:
			if (Function_622(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(uParam0, 32, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000031:
			if (Function_622(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(uParam0, 64, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000007:
			if (Function_622(iVar0, 3, 1, bParam2))
			{
				if (!Function_627(uParam0, 128, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000008:
			if (Function_622(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(uParam0, 256, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000014:
			if (Function_622(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(uParam0, 512, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000018:
			if (Function_622(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(uParam0, 512, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000057:
			if (Function_622(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(uParam0, 1024, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000058:
			if (Function_622(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(uParam0, 1024, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_625(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x25845 / 153669
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
						return Function_624(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_627(iParam0, 2, 1))
					{
						return Function_617(8);
					}
					return Function_616(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_627(iParam0, 4, 1))
					{
						return Function_617(16);
					}
					return Function_616(16);
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
							return Function_619(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_627(iParam0, 2, 1))
						{
							return Function_617(128);
						}
						return Function_616(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_627(iParam0, 4, 1))
						{
							return Function_617(256);
						}
						return Function_616(256);
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
						return Function_619(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_627(iParam0, 2, 1))
					{
						return Function_617(8);
					}
					return Function_616(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_627(iParam0, 4, 1))
					{
						return Function_617(16);
					}
					return Function_616(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_626(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_627(iParam0, 2, 1))
					{
						return Function_617(8);
					}
					return Function_616(8);
				}
				if (!Function_627(iParam0, 4, 1))
				{
					return Function_617(16);
				}
				return Function_616(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_619(iParam0, uParam1, 1, bParam5);
							if (Function_156(iParam4, 4))
							{
								Function_79(&iParam4, 2);
								Function_39(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_468(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_616(128);
							}
							if (!Function_627(iParam0, 2, 1))
							{
								return Function_617(8);
							}
							return Function_616(8);
						}
						if (iParam4 == 2)
						{
							if (Function_468(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_616(256);
							}
							if (!Function_627(iParam0, 4, 1))
							{
								return Function_617(16);
							}
							return Function_616(16);
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

int Function_626(int iParam0, var uParam1, bool bParam2) //Position: 0x25B04 / 154372
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_623(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_622(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(iParam0, 16, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x0000005B:
			if (Function_622(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(iParam0, 32, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000057:
			if (Function_622(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(iParam0, 1024, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		case 0x00000058:
			if (Function_622(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(iParam0, 1024, 1))
				{
					return Function_617(64);
				}
			}
			return Function_616(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_627(int iParam0, bool bParam1, bool bParam2) //Position: 0x25C18 / 154648
{
	if (bParam2)
	{
		if (!Function_156(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_156(iParam0->f_40, bParam1);
}

int Function_628(int iParam0) //Position: 0x25C40 / 154688
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

void Function_629() //Position: 0x25C71 / 154737
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_WestgotShot", "Merchant03_WestgotShot", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_630() //Position: 0x25CC6 / 154822
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant03_shootsWest_escape", "Merchant03_shootsWest_escape", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_631(bool bParam0) //Position: 0x25D27 / 154919
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_632(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x25D45 / 154949
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

var Function_633(int iParam0) //Position: 0x25D83 / 155011
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_GET_PERS_CHAR_REF: CompanionsList is full.");
		return "";
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		return Global_8492[iParam014];
	}
	return "";
}

