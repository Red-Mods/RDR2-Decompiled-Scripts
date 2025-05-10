//Decompiled with MagicRDR v1.0
//Function Count : 655
//Statics Count : 1091
//Natives Count : 811
//Parameters Count : 7

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_724 = 0;
	iLocal_1053 = 0;
	iLocal_1056 = 0;
	iLocal_1057 = 0;
	iLocal_1058 = 0;
	iLocal_1060 = 0;
	iLocal_1075 = 0;
	iLocal_1076 = 0;
	Local_698 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_1084 };
	iLocal_705 = 99;
	iLocal_706 = 6;
	Local_707 = 1000;
	while (Function_272())
	{
		Function_228();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x60 / 96
{
	ENABLE_CHILD_SECTOR("chu_corral01props01x");
	ENABLE_CHILD_SECTOR("chu_trainstation01Props01x");
	ENABLE_CHILD_SECTOR("emt_barn01props01x");
	ENABLE_CHILD_SECTOR("emt_barn01x");
	ENABLE_CHILD_SECTOR("emt_residence01props01x");
	ENABLE_CHILD_SECTOR("emt_residence01x");
	ENABLE_CHILD_SECTOR("emt_shack01props01x");
	ENABLE_CHILD_SECTOR("emt_shack01x");
	STREAMING_UNLOAD_SCENE();
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
	{
		MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
	}
	Function_227(Global_34207);
	Function_225(Global_34207);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_727);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	SET_AUTO_CONVERSATION_LOOK(bLocal_727, 1);
	Function_224();
	STREAMING_UNLOAD_BOUNDS();
	if ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	AUDIO_SET_PLAYER_MOOD(0, 0);
	AUDIO_ENABLE_PLAYER_TAUNTS();
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	if (IS_ACTOR_VALID((*&Local_13 + 732)[02]))
	{
		DESTROY_ACTOR((*&Local_13 + 732)[02]);
	}
	if (IS_ACTOR_VALID((*&Local_13 + 732)[12]))
	{
		DESTROY_ACTOR((*&Local_13 + 732)[12]);
	}
	if (IS_ACTOR_VALID((*&Local_13 + 732)[22]))
	{
		DESTROY_ACTOR((*&Local_13 + 732)[22]);
	}
	if (IS_ACTOR_VALID((*&Local_13 + 732)[32]))
	{
		DESTROY_ACTOR((*&Local_13 + 732)[32]);
	}
	Function_223();
	Function_222();
	Function_221();
	Function_220();
	Function_219();
	Function_218();
	if (IS_ACTOR_VALID(bLocal_728))
	{
		if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_728)))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_CURRENT_GRINGO(bLocal_728));
			TASK_CLEAR(bLocal_728);
		}
	}
	if (IS_ACTOR_VALID((*&Local_13 + 716)[02]))
	{
		if (IS_GRINGO_VALID(GET_CURRENT_GRINGO((*&Local_13 + 716)[02])))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_CURRENT_GRINGO((*&Local_13 + 716)[02]));
			TASK_CLEAR((*&Local_13 + 716)[02]);
			RELEASE_ACTOR((*&Local_13 + 716)[02]);
		}
	}
	if (IS_VOLUME_VALID(bLocal_803))
	{
		DESTROY_VOLUME(bLocal_803);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_804))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_804);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_805))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_805);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_806))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_806);
	}
	if (IS_OBJECT_VALID(bLocal_842))
	{
		DESTROY_OBJECT(bLocal_842);
	}
	if (IS_BLIP_VALID(bLocal_848))
	{
		REMOVE_BLIP(bLocal_848);
	}
	if (IS_BLIP_VALID(bLocal_849))
	{
		REMOVE_BLIP(bLocal_849);
	}
	if (IS_ITERATOR_VALID(bLocal_781))
	{
		DESTROY_ITERATOR(bLocal_781);
	}
	if (IS_OBJECT_VALID(bLocal_841))
	{
		Function_217(bLocal_841);
	}
	if (IS_BLIP_VALID(bLocal_847))
	{
		REMOVE_BLIP(bLocal_847);
	}
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_727, true);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_727);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_728);
	Function_215(5, 0, 1);
	if (Function_214(5))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 0);
		Function_211(5, 0, 0, 1, 1);
		Function_210(bLocal_727, -624.0f, 15.0f, 3562.0f, 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(bLocal_828))
	{
		RELEASE_ACTOR(bLocal_828);
		Function_210(bLocal_828, -624.0f, 15.0f, 3562.0f, 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(bLocal_829))
	{
		AUDIO_TURN_ON_PAIN_VOCALS(bLocal_829);
	}
	Function_209(&Global_6815, &Global_7954, bLocal_834, 0);
	if (Function_214(8))
	{
		Function_211(8, 0, 0, 1, 1);
	}
	Function_208(bLocal_697);
	Function_208(Local_13);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_182(bLocal_715, 1, 0, 1, 1, 1, 1, 1);
	Function_178(&bLocal_741);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_781))
	{
		DESTROY_ITERATOR(bLocal_781);
	}
	RELEASE_LAYOUT_REF(bLocal_697);
	if (bLocal_714)
	{
		DISABLE_CHILD_SECTOR("emt_caveDoor01x");
		ENABLE_CHILD_SECTOR("emt_caveDoor02x");
		Function_24(Local_698, 1, 1, 1, 0);
	}
	else if (bLocal_715)
	{
		DISABLE_CHILD_SECTOR("emt_caveDoor02x");
		ENABLE_CHILD_SECTOR("emt_caveDoor01x");
		Function_20(Local_698);
	}
	else
	{
		DISABLE_CHILD_SECTOR("emt_caveDoor02x");
		ENABLE_CHILD_SECTOR("emt_caveDoor01x");
		Function_2(Local_698);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x484 / 1156
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x4A5 / 1189
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x4C0 / 1216
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x4E1 / 1249
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x4F7 / 1271
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

void Function_7(int iParam0) //Position: 0x593 / 1427
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x5B4 / 1460
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

void Function_9() //Position: 0x5FA / 1530
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x613 / 1555
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x666 / 1638
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

struct<16> Function_12(int iParam0) //Position: 0x78A / 1930
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x7AF / 1967
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x7CF / 1999
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x7E6 / 2022
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x801 / 2049
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA48 / 2632
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0xA71 / 2673
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

bool Function_19(int iParam0) //Position: 0xA95 / 2709
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0xAAA / 2730
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0xAC8 / 2760
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

struct<16> Function_22(int iParam0) //Position: 0xB6E / 2926
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0xB98 / 2968
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xDEE / 3566
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

void Function_25() //Position: 0xEDB / 3803
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

int Function_26(int iParam0, bool bParam1) //Position: 0xF0B / 3851
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

int Function_27(int iParam0) //Position: 0xF48 / 3912
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xF62 / 3938
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xF78 / 3960
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x126F / 4719
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

void Function_31(char* cParam0, int iParam1) //Position: 0x12DB / 4827
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x1312 / 4882
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

bool Function_33(var uParam0, int iParam1) //Position: 0x138A / 5002
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x139D / 5021
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

int Function_35(int iParam0) //Position: 0x143E / 5182
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x147B / 5243
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x148E / 5262
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

void Function_38(int iParam0, int iParam1) //Position: 0x16A0 / 5792
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x16DA / 5850
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

bool Function_40() //Position: 0x171C / 5916
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1725 / 5925
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

void Function_42() //Position: 0x1776 / 6006
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

void Function_43() //Position: 0x17A9 / 6057
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

void Function_44() //Position: 0x18AF / 6319
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

void Function_45() //Position: 0x18E2 / 6370
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

void Function_46() //Position: 0x1A70 / 6768
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

void Function_47() //Position: 0x1C24 / 7204
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1C32 / 7218
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

var Function_49() //Position: 0x1E23 / 7715
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1E38 / 7736
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1ED3 / 7891
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x216E / 8558
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

bool Function_53() //Position: 0x279B / 10139
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x27A3 / 10147
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x27B4 / 10164
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x28A9 / 10409
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x28C2 / 10434
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2927 / 10535
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2939 / 10553
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x294B / 10571
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

int Function_61(int iParam0) //Position: 0x2A7B / 10875
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2A8A / 10890
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2AC3 / 10947
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2B00 / 11008
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C9A / 11418
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

int Function_66(bool bParam0) //Position: 0x2EB4 / 11956
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2EF5 / 12021
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

struct<8> Function_68() //Position: 0x2F7E / 12158
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

struct<8> Function_69() //Position: 0x3015 / 12309
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

void Function_70() //Position: 0x3094 / 12436
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x30BA / 12474
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

void Function_72() //Position: 0x32C4 / 12996
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

bool Function_73(vector3 vParam0) //Position: 0x3365 / 13157
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x337D / 13181
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

vector3 Function_75() //Position: 0x3464 / 13412
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x346D / 13421
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x347C / 13436
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3492 / 13458
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3559 / 13657
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3576 / 13686
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

bool Function_81(int iParam0) //Position: 0x3A52 / 14930
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3A68 / 14952
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3A87 / 14983
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3AA1 / 15009
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3B08 / 15112
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

void Function_86() //Position: 0x3D28 / 15656
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3DA8 / 15784
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
	Function_178(&Local_13 + 4);
	Function_178(&Local_13 + 176);
	Function_178(&Local_13 + 264);
	Function_178(&Local_13 + 424);
	Function_178(&Local_13 + 512);
	Function_178(&Local_13 + 684);
	Function_178(&Local_13 + 700);
	Function_170(&Global_7002, &Global_8231, 0, 0);
	Function_170(&Global_7002, &Global_8231, 2, 0);
	Function_170(&Global_7002, &Global_8231, 1, 0);
	Function_170(&Global_7002, &Global_8231, 4, 0);
	RELEASE_LAYOUT_REF(Local_13);
	return;
}

void Function_170(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8DAC / 36268
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

void Function_171(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8E46 / 36422
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

int Function_172(int iParam0) //Position: 0x8F95 / 36757
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

int Function_173(int iParam0) //Position: 0x8FC0 / 36800
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

void Function_174(var uParam0, int iParam1) //Position: 0x8FF4 / 36852
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_175(bool bParam0) //Position: 0x9003 / 36867
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

void Function_176(var uParam0, int iParam1) //Position: 0x909D / 37021
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_177(var uParam0, int iParam1) //Position: 0x90B4 / 37044
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178(bool bParam0) //Position: 0x90D0 / 37072
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_179(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x90F6 / 37110
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

void Function_180(var uParam0, int iParam1) //Position: 0x9224 / 37412
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_181(var uParam0, bool bParam1) //Position: 0x923E / 37438
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_182(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x925B / 37467
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_207());
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
	Function_224();
	CLEAR_PRINTED_OBJECTIVE();
	Function_206();
	Function_204(0);
	Function_203();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_202();
	Function_201();
	Function_224();
	ENABLE_JOURNAL_REPLAY(1);
	Function_200(1);
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
		Function_199(Global_34573);
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
	Function_198(Global_28178);
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
	Function_197(1178687);
	Function_195(33039);
	Function_194(0x218003f);
	Function_193(4194560);
	Function_192();
	Function_191();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_188(0, 1, 1);
	}
	else
	{
		Function_188(0, 1, 1);
	}
	Function_187();
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
	Function_183();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_183() //Position: 0x944C / 37964
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
		if (Function_186() > 3)
		{
			bVar0 *= 2;
		}
		Function_184(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_184(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x94A2 / 38050
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_185((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_185(bool bParam0) //Position: 0x94E8 / 38120
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_186() //Position: 0x950D / 38157
{
	return Global_12976.f_156;
}

void Function_187() //Position: 0x9518 / 38168
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

void Function_188(int iParam0, bool bParam1, int iParam2) //Position: 0x9542 / 38210
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
			Function_189(Global_29006);
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

void Function_189(int iParam0) //Position: 0x964D / 38477
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_190())
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

bool Function_190() //Position: 0x96CC / 38604
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

void Function_191() //Position: 0x9729 / 38697
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

void Function_192() //Position: 0x974F / 38735
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

void Function_193(int iParam0) //Position: 0x9775 / 38773
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_194(int iParam0) //Position: 0x9792 / 38802
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_195(int iParam0) //Position: 0x97A5 / 38821
{
	Function_196(&Global_28842, iParam0);
	return;
}

void Function_196(var uParam0, int iParam1) //Position: 0x97B3 / 38835
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_197(bool bParam0) //Position: 0x97CE / 38862
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_198(int iParam0) //Position: 0x97FB / 38907
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

void Function_199(bool bParam0) //Position: 0x98C2 / 39106
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

void Function_200(bool bParam0) //Position: 0x993E / 39230
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

void Function_201() //Position: 0x99B2 / 39346
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

void Function_202() //Position: 0x99F3 / 39411
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

void Function_203() //Position: 0x9A34 / 39476
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_204(int iParam0) //Position: 0x9A48 / 39496
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_205())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_205() //Position: 0x9A84 / 39556
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

void Function_206() //Position: 0x9AA9 / 39593
{
	Global_8722 = 0.0f;
	return;
}

int Function_207() //Position: 0x9AB3 / 39603
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_208(bool bParam0) //Position: 0x9ACD / 39629
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

void Function_209(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x9B25 / 39717
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (GET_ACTOR_FROM_PERS_CHAR(StackVal) == bParam2)
			{
				Function_170(uParam0, uParam1, iVar0, iParam3);
			}
		}
		iVar0++;
	}
}

void Function_210(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x9B6D / 39789
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

int Function_211(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9C75 / 40053
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
		Function_213(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_212(StackVal);
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

void Function_212(bool bParam0) //Position: 0x9F93 / 40851
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

void Function_213(bool bParam0) //Position: 0x9FBF / 40895
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

bool Function_214(int iParam0) //Position: 0x9FD4 / 40916
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_HAS_BEEN_STOLEN: CompanionsList out of bounds.");
		return 0;
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
		return GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", &uVar2);
	}
	return IS_ACTOR_VALID(StackVal);
}

void Function_215(int iParam0, bool bParam1, bool bParam2) //Position: 0xA093 / 41107
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
						Function_212(bVar1);
					}
				}
				Function_216(bVar0);
			}
		}
	}
	return;
}

void Function_216(bool bParam0) //Position: 0xA18A / 41354
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

void Function_217(bool bParam0) //Position: 0xA1B6 / 41398
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

void Function_218() //Position: 0xA240 / 41536
{
	Function_178(&Local_13 + 700);
	return;
}

void Function_219() //Position: 0xA24E / 41550
{
	Function_178(&Local_13 + 684);
	return;
}

void Function_220() //Position: 0xA25C / 41564
{
	Function_178(&Local_13 + 512);
	return;
}

void Function_221() //Position: 0xA26A / 41578
{
	Function_178(&Local_13 + 424);
	return;
}

void Function_222() //Position: 0xA278 / 41592
{
	Function_178(&Local_13 + 264);
	return;
}

void Function_223() //Position: 0xA286 / 41606
{
	Function_178(&Local_13 + 176);
	return;
}

void Function_224() //Position: 0xA293 / 41619
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

int Function_225(bool bParam0) //Position: 0xA2BE / 41662
{
	if (!Function_226(bParam0, "TRAIN_RELEASE"))
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

bool Function_226(int iParam0, int iParam1) //Position: 0xA30D / 41741
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_227(int iParam0) //Position: 0xA31C / 41756
{
	if (iParam0 == Global_34207)
	{
		(&Global_34208 + 12)->f_616 = 16383;
	}
	else if (iParam0 == Global_34206)
	{
		(&Global_34208 + 724)->f_616 = 16383;
	}
	return;
}

void Function_228() //Position: 0xA34C / 41804
{
	var uVar0[18];
	int iVar19;
	
	if (Function_271())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "01.5 - After Train Ride";
		uVar0[4] = "02 - Meet Carlos";
		uVar0[5] = "03 - Clear Caves/Find MexGirl";
		uVar0[6] = "05 - Escape w/ MexGirl";
		uVar0[7] = "Cutscene 06 - Mission End";
		uVar0[8] = "DEBUG - Hogtie MexGirl";
		uVar0[9] = "DEBUG - Teleport";
		uVar0[10] = "Assign Gringo";
		uVar0[11] = "Gringo Deactivate";
		uVar0[12] = "nTele Down";
		uVar0[13] = "Tele Up";
		uVar0[14] = "Walk DOWN NOPATH";
		uVar0[15] = "Walk UP NOPATH";
		uVar0[16] = "Walk Up";
		uVar0[17] = "TOGGLE ANIM BOOL";
		iVar19 = Function_257(&uLocal_717, &uVar0, &Local_698 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_256(&iVar19, &iLocal_705, &iLocal_706, &Local_707))
		{
			Function_249();
			Function_248();
		}
		if (iVar19 == 0)
		{
			Function_249();
			Function_248();
			Function_247(&bLocal_714, 8);
			Local_707 = 1000;
		}
		else if (iVar19 == 1)
		{
			Function_249();
			Function_248();
			Function_243(iLocal_705);
			Function_239(StackVal, StackVal, 5, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
			Local_707 = 1000;
		}
		else if (iVar19 == 2)
		{
			Function_249();
			Function_248();
			Function_234(&bLocal_716, 4);
		}
		else if (iVar19 == 3)
		{
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_232(&bLocal_782);
			iLocal_856 = 1;
			iLocal_705 = 1;
			iLocal_706 = 0;
			Local_707 = 1000;
		}
		else if (iVar19 == 4)
		{
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_232(&bLocal_782);
			iLocal_705 = 2;
			iLocal_706 = 0;
			Local_707 = 1000;
		}
		else if (iVar19 == 5)
		{
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_232(&bLocal_782);
			iLocal_705 = 3;
			iLocal_706 = 0;
			Local_707 = 1000;
		}
		else if (iVar19 == 6)
		{
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_232(&bLocal_782);
			iLocal_705 = 4;
			iLocal_706 = 0;
			Local_707 = 1000;
		}
		else if (iVar19 == 7)
		{
			Function_249();
			Function_248();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_232(&bLocal_782);
			iLocal_705 = 101;
			iLocal_706 = 0;
			Local_707 = 1000;
		}
		else if (iVar19 == 8)
		{
			Function_249();
			Function_248();
		}
		else if (iVar19 == 9)
		{
			Function_249();
			Function_248();
			Function_231((*&Local_13 + 1992)[6]);
			Function_230(StackVal, StackVal, Global_34573, Function_231((*&Local_13 + 1992)[6]), 1, 1, 1);
		}
		else if (iVar19 == 10)
		{
			Function_249();
			Function_248();
		}
		else if (iVar19 == 11)
		{
			Function_249();
			Function_248();
		}
		else if (iVar19 == 12)
		{
			Function_229(bLocal_727, (*&Local_13 + 1816)[10], 1, 1, 1);
			TASK_CLEAR(bLocal_727);
			TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
		}
		else if (iVar19 == 13)
		{
			Function_249();
			Function_248();
			Function_229(bLocal_727, (*&Local_13 + 1816)[15], 1, 1, 1);
			TASK_CLEAR(bLocal_727);
			TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
		}
		else if (iVar19 == 14)
		{
			Function_249();
			Function_248();
			TASK_CLEAR(bLocal_727);
			TASK_GO_TO_OBJECT(bLocal_727, (*&Local_13 + 1816)[10], 1, 0, 0);
		}
		else if (iVar19 == 15)
		{
			Function_249();
			Function_248();
			TASK_CLEAR(bLocal_727);
			TASK_GO_TO_OBJECT(bLocal_727, (*&Local_13 + 1816)[10], 1, 0, 0);
			TASK_GO_TO_OBJECT(bLocal_727, (*&Local_13 + 1816)[15], 1, 0, 0);
		}
		else if (iVar19 == 16)
		{
			Function_249();
			Function_248();
			TASK_CLEAR(bLocal_727);
			TASK_GO_TO_OBJECT(bLocal_727, (*&Local_13 + 1816)[10], 1, 0, 1);
		}
		else if (iVar19 == 17)
		{
			Function_249();
			Function_248();
			iLocal_912 = 0;
		}
	}
	return;
}

void Function_229(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xA7DF / 42975
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

void Function_230(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA8E6 / 43238
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR(bVar0, &uParam1, iParam4, iParam5, iParam6);
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR(bVar0, &uParam1, iParam4, iParam5, iParam6);
			}
			else
			{
				TELEPORT_ACTOR(bParam0, &uParam1, iParam4, iParam5, iParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED got an invalid ACTOR");
	}
}

vector3 Function_231(bool bParam0) //Position: 0xA975 / 43381
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

void Function_232(bool bParam0) //Position: 0xA99C / 43420
{
	Function_233(bParam0, 0.0f);
	return;
}

void Function_233(int iParam0, float fParam1) //Position: 0xA9A8 / 43432
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_234(bool bParam0, int iParam1) //Position: 0xA9C9 / 43465
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_235(iParam1);
	*bParam0 = 1;
	return;
}

void Function_235(int iParam0) //Position: 0xA9EC / 43500
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_238("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_237(2) || Function_237(8)) || Function_237(9)) || Function_237(10))
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
		Function_238("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_238("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_238("");
	}
	else if (iParam0 == 8)
	{
		Function_236();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_236();
	}
	return;
}

void Function_236() //Position: 0xAAE3 / 43747
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_237(int iParam0) //Position: 0xAAEF / 43759
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

void Function_238(bool bParam0) //Position: 0xAB25 / 43813
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_239(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xAB8F / 43919
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_240(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_235(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_240(vector3 vParam0, var uParam3, var uParam4) //Position: 0xABCC / 43980
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_242(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_241(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_241(int iParam0) //Position: 0xAC4F / 44111
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

var Function_242(vector3 vParam0, bool bParam3) //Position: 0xB0FD / 45309
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

vector3 Function_243(int iParam0) //Position: 0xB168 / 45416
{
	Function_244(iParam0 + 1);
	return StackVal, StackVal, Function_244(iParam0 + 1);
}

vector3 Function_244(int iParam0) //Position: 0xB175 / 45429
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_231((*&Local_13 + 1816)[4]);
			return StackVal, StackVal, Function_231((*&Local_13 + 1816)[4]);
			break;
		
		case 0x00000001:
			Function_231((*&Local_13 + 1900)[0]);
			return StackVal, StackVal, Function_231((*&Local_13 + 1900)[0]);
			break;
		
		case 0x00000002:
			Function_231((*&Local_13 + 1992)[10]);
			return StackVal, StackVal, Function_231((*&Local_13 + 1992)[10]);
			break;
		
		case 0x00000003:
			Function_231((*&Local_13 + 2116)[11]);
			return StackVal, StackVal, Function_231((*&Local_13 + 2116)[11]);
			break;
		
		case 0x00000004:
			Function_231((*&Local_13 + 2208)[2]);
			return StackVal, StackVal, Function_231((*&Local_13 + 2208)[2]);
			break;
		
		default:
			Function_231((*&Local_13 + 1768)[0]);
			return StackVal, StackVal, Function_231((*&Local_13 + 1768)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_231((*&Local_13 + 1816)[4]);
	return StackVal, StackVal, Function_231((*&Local_13 + 1816)[4]);
}

int Function_245(int iParam0) //Position: 0xB26B / 45675
{
	return Function_246(iParam0 + 1);
}

int Function_246(int iParam0) //Position: 0xB278 / 45688
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_13 + 1816)[4]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_13 + 1900)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_13 + 1992)[10]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_13 + 2116)[11]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_13 + 2208)[2]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_13 + 1768)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_13 + 1816)[4]);
}

void Function_247(bool bParam0, int iParam1) //Position: 0xB36E / 45934
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_235(iParam1);
	*bParam0 = 1;
	return;
}

void Function_248() //Position: 0xB391 / 45969
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_249() //Position: 0xB3A6 / 45990
{
	Function_251();
	Function_250(10, 3);
	return;
}

void Function_250(int iParam0, int iParam1) //Position: 0xB3B5 / 46005
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

void Function_251() //Position: 0xB4EC / 46316
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_255())
	{
		Function_254(10, 3);
	}
	else
	{
		Function_252();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_252() //Position: 0xB537 / 46391
{
	Function_253(25, 2);
	return;
}

void Function_253(int iParam0, int iParam1) //Position: 0xB543 / 46403
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

void Function_254(int iParam0, int iParam1) //Position: 0xB741 / 46913
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

bool Function_255() //Position: 0xB878 / 47224
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

bool Function_256(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB8DF / 47327
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_249();
			Function_248();
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
		Function_238("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB985 / 47493
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_270(&Var15, &Var0);
	uVar20 = Function_269(*uParam1, &Var15);
	Function_268(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_267(uParam0, uVar20);
	Function_265(StackVal, uParam0, Var15.f_12);
	Function_263(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_262(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_259(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_258(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_258(int iParam0, int iParam1, int iParam2) //Position: 0xBA4C / 47692
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

bool Function_259(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xBAA8 / 47784
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
				Function_261(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_261(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_258(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_260(bParam1->f_32);
	}
	else
	{
		Function_260(bParam1->f_32);
	}
	return 0;
}

void Function_260(bool bParam0) //Position: 0xBC2E / 48174
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

void Function_261(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xBC68 / 48232
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

var Function_262(int iParam0, var uParam1, int iParam2) //Position: 0xBD16 / 48406
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_263(var uParam0, int iParam1, int iParam2) //Position: 0xBD3A / 48442
{
	switch (Function_264())
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

int Function_264() //Position: 0xBDD6 / 48598
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

void Function_265(var uParam0, int iParam1, int iParam2) //Position: 0xBE12 / 48658
{
	switch (Function_266(uParam0))
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

int Function_266(bool bParam0) //Position: 0xBEAA / 48810
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

var Function_267(var uParam0, int iParam1) //Position: 0xBFF5 / 49141
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

void Function_268(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC146 / 49478
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

var Function_269(int iParam0, int iParam1) //Position: 0xC1D9 / 49625
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_270(var uParam0, var uParam1) //Position: 0xC1F3 / 49651
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

bool Function_271() //Position: 0xC241 / 49729
{
	return Global_30920;
}

bool Function_272() //Position: 0xC24A / 49738
{
	if (IS_EXITFLAG_SET())
	{
		Function_243(iLocal_705);
		Function_239(StackVal, StackVal, 4, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
		return 0;
	}
	if (Local_698.f_24 != 4)
	{
		Function_654(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_698, iLocal_705, iLocal_706, &bLocal_716, &bLocal_714, &bLocal_715);
	}
	else if (iLocal_705 == 99 && iLocal_706 < 12)
	{
		bLocal_716 = true;
		bLocal_714 = false;
		bLocal_715 = false;
	}
	if (iLocal_705 == 99 && iLocal_705 == 100)
	{
		if (!IS_ACTOR_ALIVE(Global_34573))
		{
			Function_243(iLocal_705);
			Function_239(StackVal, StackVal, 1, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
			return 1;
		}
		if (Function_653(2048))
		{
			Function_243(iLocal_705);
			Function_239(StackVal, StackVal, 3, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
			return 1;
		}
		if (iLocal_706 < 3 && iLocal_705 > 3)
		{
			if (Global_3403 || Global_3404)
			{
				Function_243(iLocal_705);
				Function_239(StackVal, StackVal, 2, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
				return 1;
			}
			if (IS_ACTOR_VALID((*&Local_13 + 732)[02]))
			{
				if (GET_LAST_ATTACKER((*&Local_13 + 732)[02]) == Global_34573)
				{
					Function_243(iLocal_705);
					Function_239(StackVal, StackVal, 2, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
					return 1;
				}
			}
			if (IS_ACTOR_VALID((*&Local_13 + 732)[12]))
			{
				if (GET_LAST_ATTACKER((*&Local_13 + 732)[12]) == Global_34573)
				{
					Function_243(iLocal_705);
					Function_239(StackVal, StackVal, 2, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
					return 1;
				}
			}
			if (IS_ACTOR_VALID((*&Local_13 + 732)[22]))
			{
				if (GET_LAST_ATTACKER((*&Local_13 + 732)[22]) == Global_34573)
				{
					Function_243(iLocal_705);
					Function_239(StackVal, StackVal, 2, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
					return 1;
				}
			}
			if (IS_ACTOR_VALID((*&Local_13 + 732)[32]))
			{
				if (GET_LAST_ATTACKER((*&Local_13 + 732)[32]) == Global_34573)
				{
					Function_243(iLocal_705);
					Function_239(StackVal, StackVal, 2, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
					return 1;
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_727))
		{
			if (!IS_ACTOR_ALIVE(bLocal_727))
			{
				Function_238("Gun03_companion_dead");
				Function_243(iLocal_705);
				Function_239(StackVal, StackVal, 5, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
				return 1;
			}
			if (GET_LAST_ATTACKER(bLocal_727) == Global_34573)
			{
				Function_238("Gun03_assault_gunslinger");
				Function_243(iLocal_705);
				Function_239(StackVal, StackVal, 5, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
				return 1;
			}
		}
		if ((iLocal_705 != 3 || iLocal_705 != 4) && iLocal_706 < 3)
		{
			if (IS_ACTOR_VALID(bLocal_829))
			{
				if (!IS_ACTOR_ALIVE(bLocal_829))
				{
					Function_238("Gun03_mexgirl_dead");
					Function_243(iLocal_705);
					Function_239(StackVal, StackVal, 5, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
					return 1;
				}
			}
		}
		if (Function_633(&Local_962, &uLocal_922, &uLocal_1048, bLocal_781, uLocal_907))
		{
			if (Function_624(&uLocal_1048))
			{
				Function_243(iLocal_705);
				Function_239(StackVal, StackVal, 5, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
				return 1;
			}
		}
	}
	switch (iLocal_705)
	{
		case 0x00000063:
			Function_591();
			break;
		
		case 0x00000000:
			Function_573();
			break;
		
		case 0x00000001:
			Function_551();
			break;
		
		case 0x00000002:
			Function_473();
			break;
		
		case 0x00000003:
			Function_444();
			break;
		
		case 0x00000004:
			Function_348();
			break;
		
		case 0x00000065:
			Function_275();
			break;
		
		case 0x00000064:
			if (Function_274(&bLocal_715))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_273(&iLocal_705, &iLocal_706, &Local_707))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_714)
	{
		Function_247(&bLocal_714, 8);
		Function_1();
		return 0;
	}
	if (bLocal_715 && iLocal_705 == 100)
	{
		Function_243(iLocal_705);
		Function_239(StackVal, StackVal, 5, &bLocal_715, &iLocal_705, Function_245(iLocal_705), Function_243(iLocal_705), 0);
	}
	if (bLocal_716)
	{
		Function_234(&bLocal_716, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_273(var uParam0, var uParam1, int iParam2) //Position: 0xC604 / 50692
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

bool Function_274(int iParam0) //Position: 0xC644 / 50756
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_275() //Position: 0xC657 / 50775
{
	struct<9> Var0;
	
	switch (iLocal_706)
	{
		case 0x00000000:
			Function_344(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			iLocal_916 = 0;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_730[4] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				DISABLE_CHILD_SECTOR("emt_caveDoor01x");
				ENABLE_CHILD_SECTOR("emt_caveDoor02x");
				iLocal_729 = Global_30633[1];
				if (!Function_343(iLocal_729))
				{
					Function_342(&Local_698);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_229(Global_34573, (*&Local_13 + 1768)[0], 1, 1, 1);
				Function_229(bLocal_727, (*&Local_13 + 1768)[2], 1, 1, 1);
				Function_232(&bLocal_782);
				iLocal_706 = 1;
			}
			else
			{
				Function_232(&bLocal_782);
				iLocal_706 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_343(iLocal_729) || iLocal_729 != 4294967295)) && Function_335())
			{
				Function_232(&bLocal_782);
				iLocal_706 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(bLocal_727))
			{
				Function_231((*&Local_13 + 1768)[8]);
				vVar0 = { StackVal, StackVal, Function_231((*&Local_13 + 1768)[8]) };
				bLocal_727 = Function_327(5, 0, 1, vVar0.x, vVar0.y, vVar0.z, 0, 0, 0);
			}
			else if (!SQUAD_IS_VALID(Local_13.f_1184))
			{
				Function_326();
			}
			else
			{
				Function_324(&iLocal_1059, 0, 0, 4294967295, 4294967295);
				Function_232(&bLocal_782);
				iLocal_706 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_287("$/cutscene/GUN_03_END/GUN_03_END", &Local_707, &Local_698, &iLocal_705, 59856, 59849, 59584, 56586, 56326, 56315, 0, 1, 1, 2, 2, 0, 1))
			{
				if (iLocal_919)
				{
					if (IS_OBJECT_VALID(Global_63098))
					{
						END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
						DESTROY_OBJECT(Global_63098);
						CAMERA_RESET(0);
					}
					Function_286(&bLocal_782, 8,1f);
				}
				else
				{
					Function_232(&bLocal_782);
				}
				iLocal_706 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_283(&bLocal_782) > 7.0f)
			{
				if (iLocal_1056 == 0)
				{
					Function_282();
					if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(bLocal_828)))
					{
						DESTROY_ACTOR(GET_MOST_RECENT_MOUNT(bLocal_828));
					}
					Function_281(&Local_13 + 1200);
					if (IS_ACTOR_VALID(bLocal_829))
					{
						DESTROY_ACTOR(bLocal_829);
					}
					else
					{
						iLocal_1056 = 1;
					}
				}
				else if (iLocal_1056 == 1)
				{
					if (!IS_ACTOR_VALID(bLocal_829))
					{
						Function_231((*&Local_13 + 1768)[8]);
						vVar3 = { StackVal, StackVal, Function_231((*&Local_13 + 1768)[8]) };
						bLocal_829 = Function_327(8, 0, 1, vVar3.x, vVar3.y, vVar3.z, 0, 0, 0);
					}
					else if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_829, 1))
					{
						if (!IS_ACTOR_VALID(bLocal_828))
						{
							Function_278();
							bLocal_828 = (*&Local_13 + 1188)[02];
						}
						else if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_828, 1))
						{
							SET_ACTOR_FACTION(bLocal_828, 20);
							Function_229(bLocal_829, (*&Local_13 + 1768)[8], 1, 1, 1);
							TASK_STAND_STILL(bLocal_829, -1.0f, 0, 0);
							Function_276(bLocal_828, (*&Local_13 + 1768)[8], 1, 1, 1);
							TASK_STAND_STILL(bLocal_828, -1.0f, 0, 0);
							ACTOR_MOUNT_ACTOR(bLocal_727, (*&Local_13 + 1156)[02]);
							Function_276(bLocal_727, (*&Local_13 + 1768)[8], 1, 1, 1);
							iLocal_1056 = 2;
						}
					}
				}
				else if (iLocal_1056 == 2)
				{
					if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_829, 1))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_829, 0);
						SET_ANIM_SET_FOR_ACTOR(bLocal_829, "fema_ride_passenger", 0);
						if (HAS_ANIM_SET_LOADED("fema_ride_passenger"))
						{
							Function_232(&bLocal_782);
							iLocal_1056 = 3;
						}
					}
				}
				else if (iLocal_1056 == 3)
				{
					if (ACTOR_HAS_ANIM_SET(bLocal_829, "fema_ride_passenger"))
					{
						SET_MOUNTS_AS_PASSENGER(bLocal_829, 1);
						ACTOR_MOUNT_ACTOR(bLocal_829, GET_MOUNT(bLocal_828));
						MEMORY_PREFER_RIDING(bLocal_727, true);
						MEMORY_PREFER_RIDING(bLocal_828, true);
						MEMORY_PREFER_RIDING(bLocal_829, true);
						Function_232(&bLocal_782);
						iLocal_1056 = 4;
					}
				}
				else if (iLocal_1056 == 4)
				{
					TASK_STAND_STILL(bLocal_829, -1.0f, 0, 0);
					Function_276(bLocal_828, (*&Local_13 + 1768)[7], 1, 1, 1);
					TASK_STAND_STILL(bLocal_828, -1.0f, 0, 0);
					Function_276(bLocal_727, (*&Local_13 + 1768)[3], 1, 1, 1);
					iLocal_1056 = 5;
				}
				else if (iLocal_1056 == 5)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_828, false);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_828, false);
					TASK_CLEAR(bLocal_828);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_828, Local_13.f_2592, 3, 1, 0, 0, 0.0f);
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, 3);
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, false);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_727, false);
					TASK_CLEAR(bLocal_727);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_727, Local_13.f_2592, 3, 1, 0, 0, 3.0f);
					iLocal_1056 = 6;
				}
			}
			else
			{
				if (IS_ACTOR_VALID(bLocal_828))
				{
					if (IS_ACTOR_VALID(GET_MOUNT(bLocal_828)))
					{
						DESTROY_ACTOR(GET_MOUNT(bLocal_828));
					}
					DESTROY_ACTOR(bLocal_828);
				}
				if (Function_214(8))
				{
					Function_211(8, 1, 0, 1, 1);
				}
				if (Function_214(5))
				{
					if (IS_ACTOR_VALID(GET_MOUNT(bLocal_727)))
					{
						DESTROY_ACTOR(GET_MOUNT(bLocal_727));
					}
					Function_211(5, 1, 0, 1, 1);
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_232(&bLocal_782);
				iLocal_706 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_219();
				bLocal_714 = true;
			}
			break;
	}
	return;
}

void Function_276(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCB83 / 52099
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
				Function_277(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
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

void Function_277(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0xCC9A / 52378
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

void Function_278() //Position: 0xCD53 / 52563
{
	Local_13.f_1200 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "nS5_Carlos"));
	(*&Local_13 + 1188)[02] = Function_279(Local_13, "S5_aCarlos", 615, Function_53(), 976, -328f, 26,22432f, 3443,831f, 0.0f, 221,9975f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1188)[02], Local_13.f_1200);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_13 + 1188)[02], false);
	SET_ACTOR_FACTION((*&Local_13 + 1188)[02], 1);
	return;
}

var Function_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0xCDD3 / 52691
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_280(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_280(bParam4))
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

bool Function_280(int iParam0) //Position: 0xCEF8 / 52984
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_281(var uParam0) //Position: 0xCF0F / 53007
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

void Function_282() //Position: 0xCF8E / 53134
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

float Function_283(bool bParam0) //Position: 0xD0A8 / 53416
{
	if (Function_285(bParam0))
	{
		if (Function_284(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_284(int iParam0) //Position: 0xD170 / 53616
{
	return Function_153(*iParam0, 2);
}

bool Function_285(int iParam0) //Position: 0xD17D / 53629
{
	return Function_153(*iParam0, 1);
}

void Function_286(bool bParam0, float fParam1) //Position: 0xD18A / 53642
{
	if (!Function_285(bParam0))
	{
		Function_233(bParam0, fParam1);
	}
	return;
}

bool Function_287(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xD1A0 / 53664
{
	if (!bParam15)
	{
		Function_297(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_296(iParam2) || iParam2->f_24 < 1))
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
				Function_232(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_295())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_294(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_232(iParam1 + 4);
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
					Function_294(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_283(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_283(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_292(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_294(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_232(iParam1 + 4);
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
						Function_291(1.0f);
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
						Function_289();
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
					Function_288(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_296(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_288(bool bParam0) //Position: 0xD7B4 / 55220
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

void Function_289() //Position: 0xD859 / 55385
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_290();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_290() //Position: 0xD89E / 55454
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_291(bool bParam0) //Position: 0xD8B0 / 55472
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

void Function_292(bool bParam0, bool bParam1) //Position: 0xD8CD / 55501
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
			if ((bVar3 == Global_34573 && !Function_293(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_293(bool bParam0) //Position: 0xD94D / 55629
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

int Function_294(bool bParam0) //Position: 0xD97C / 55676
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

bool Function_295() //Position: 0xDA34 / 55860
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

bool Function_296(int iParam0) //Position: 0xDA6E / 55918
{
	return iParam0->f_20;
}

void Function_297(var uParam0, int iParam1) //Position: 0xDA78 / 55928
{
	Function_298(uParam0, iParam1, 0);
	return;
}

void Function_298(var uParam0, bool bParam1, bool bParam2) //Position: 0xDA86 / 55942
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
			Function_299(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_299(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_299(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xDBD2 / 56274
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

int Function_300() //Position: 0xDBFB / 56315
{
	iLocal_919 = 1;
	return 1;
}

int Function_301() //Position: 0xDC06 / 56326
{
	Function_302(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_302(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xDC1A / 56346
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
		Function_248();
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
	Function_288(iParam9);
}

int Function_303() //Position: 0xDD0A / 56586
{
	if (iLocal_705 == 0)
	{
		if (iLocal_706 == 104)
		{
			SET_ACTOR_IN_VEHICLE(bLocal_727, Function_313(Global_34207), 11);
			if (UNK_0xCDA6BB6C())
			{
				CANCEL_CUTSCENE_TUNER_PLAYBACK();
			}
			else if (IS_OBJECT_VALID(Local_707.f_16))
			{
				DESTROY_OBJECT(Local_707.f_16);
			}
			Function_311(bLocal_697, 43.0f, 1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0, 0, 0, 0);
			Function_310(-2692,45f, 35,114f, 4202,831f, 0,102f, -0,175f, 0,979f, -2692,486f, 38,602f, 4202,509f, 0,822f, -0,091f, 0,562f, 5,1f, 0, 1, 1, 6);
			TRAIN_SET_ENGINE_ENABLED(Global_34207, 1);
			TRAIN_SET_AUTOPILOT_ENABLE(Global_34207, 1);
			TRAIN_SET_TARGET_SPEED(Global_34207, 10.0f);
		}
		else
		{
			Function_229(bLocal_727, (*&Local_13 + 1816)[5], 1, 1, 1);
			TASK_CLEAR(bLocal_727);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_727, "gun03_train_wave", 1);
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, false);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_727, false);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_727, false);
			bLocal_838 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2616, 1, 1, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_838);
			TASK_SEQUENCE_RELEASE(bLocal_838, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			ACTOR_POP_NEXT_GAIT(bLocal_727, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
			ENABLE_CHILD_SECTOR("chu_corral01props01x");
			ENABLE_CHILD_SECTOR("chu_trainstation01Props01x");
		}
	}
	else if (iLocal_705 == 1)
	{
		if (iLocal_706 == 3)
		{
			TASK_CLEAR(bLocal_727);
			Function_229(bLocal_727, (*&Local_13 + 1900)[20], 1, 1, 1);
			TASK_CLEAR(Global_34573);
			Function_229(Global_34573, (*&Local_13 + 1900)[7], 1, 1, 1);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2620, 1, 1, 0, 1, false);
			TASK_MOUNT(false, (*&Local_13 + 716)[02], 0, 0, 1, 2147483647);
			TASK_GO_TO_OBJECT(false, (*&Local_13 + 1816)[1], 1, 0, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_PRIORITY_SET(bLocal_727, true);
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, false);
		}
	}
	else if (iLocal_705 == 2)
	{
		if (Function_343(Global_30633[1]))
		{
			OPEN_DOOR_DIRECTION(Function_308("elmatadero", "slaughterhouse", 1), true);
			OPEN_DOOR_DIRECTION(Function_308("elmatadero", "slaughterhouse", 2), false);
		}
		SET_ACTOR_SPEED(Global_34573, 0.0f);
		Function_229(Global_34573, (*&Local_13 + 1992)[4], 1, 1, 1);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
		Function_229(bLocal_727, (*&Local_13 + 1992)[21], 1, 1, 1);
		Function_229(bLocal_828, (*&Local_13 + 1992)[5], 1, 1, 1);
		TASK_CLEAR(bLocal_828);
		bLocal_835 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2604, 1, 0, 0, 1, false);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_828, bLocal_835);
		TASK_SEQUENCE_RELEASE(bLocal_835, 1);
		TASK_PRIORITY_SET(bLocal_828, true);
		AI_SET_NAV_PATHFINDING_ENABLED(bLocal_828, true);
		TASK_CLEAR(bLocal_727);
		bLocal_835 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2584, 1, 0, 0, 1, false);
		TASK_CROUCH(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
		TASK_SEQUENCE_RELEASE(bLocal_835, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, false);
		ENABLE_CHILD_SECTOR("emt_barn01props01x");
		ENABLE_CHILD_SECTOR("emt_barn01x");
		ENABLE_CHILD_SECTOR("emt_residence01props01x");
		ENABLE_CHILD_SECTOR("emt_residence01x");
		ENABLE_CHILD_SECTOR("emt_shack01props01x");
		ENABLE_CHILD_SECTOR("emt_shack01x");
	}
	else if (iLocal_705 == 3)
	{
		Function_306(&bLocal_829, &bLocal_727);
		DELETE_ACCESSORY("ANKLE_BIND", bLocal_829);
		DELETE_ACCESSORY("WRIST_BIND", bLocal_829);
		if (IS_OBJECT_VALID(bLocal_860))
		{
			Function_154(bLocal_860, 1);
			OPEN_DOOR_DIRECTION_FAST(bLocal_860, true);
			SET_DOOR_AUTO_CLOSE(bLocal_860, 0);
			HIDE_PHYSINST(bLocal_860);
		}
		Function_229(Global_34573, (*&Local_13 + 2116)[19], 1, 1, 1);
		Function_229(bLocal_727, (*&Local_13 + 2116)[12], 1, 1, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
		STOP_FORCE_LOOK_AT_COORD(bLocal_727);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
		TASK_CLEAR(bLocal_727);
		Function_231((*&Local_13 + 2384)[4]);
		vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2384)[4]) };
		bLocal_835 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_OBJECT(false, (*&Local_13 + 2384)[2], 2, 0, 1);
		TASK_FACE_COORD(false, &vLocal_819, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
		TASK_SEQUENCE_RELEASE(bLocal_835, 1);
		TASK_PRIORITY_SET(bLocal_727, true);
		ACTOR_POP_NEXT_GAIT(bLocal_829, 0, false);
		ACTOR_POP_NEXT_GAIT(bLocal_727, 2, false);
		Function_215(5, 1, 1);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_727, 0);
		SET_ACTOR_PROOF(bLocal_727, 4294967295);
		SET_CRIPPLE_ENABLE(bLocal_727, 0);
		SET_ACTOR_INVULNERABILITY(bLocal_727, true);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 1);
		MEMORY_ALLOW_SHOOTING(bLocal_727, false);
		ACTOR_START_FORCE_HOLSTER(bLocal_727, 1, 0);
		MEMORY_PREFER_WALKING(bLocal_727, true);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
		if (IS_ACTOR_VALID((*&Local_13 + 1364)[02]))
		{
			DESTROY_ACTOR((*&Local_13 + 1364)[02]);
		}
		iLocal_874 = 0;
	}
	else if (iLocal_705 == 101)
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		ACTOR_HOLSTER_WEAPON(Global_34573, 1);
		Function_229(Global_34573, (*&Local_13 + 1768)[1], 1, 1, 1);
		if (UNK_0xCDA6BB6C())
		{
			CANCEL_CUTSCENE_TUNER_PLAYBACK();
		}
		else if (IS_OBJECT_VALID(Local_707.f_16))
		{
			DESTROY_OBJECT(Local_707.f_16);
		}
		Function_311(bLocal_697, 43.0f, 1, 0.0f, 7.0f, 1, 7, 0, 0, 0, 0, 0, 0, 0);
		Function_304(-227,538f, 32,148f, 3606,051f, -0,834f, -0,063f, -0,548f, 8.0f, 0, 1);
	}
	return 1;
}

void Function_304(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, var uParam8) //Position: 0xE2C3 / 58051
{
	Function_305(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
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

void Function_305(bool bParam0) //Position: 0xE3B2 / 58290
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_306(bool bParam0, bool bParam1) //Position: 0xE3C3 / 58307
{
	vector3 vVar0;
	bool bVar3;
	
	Function_307(*bParam0);
	vVar0 = { StackVal, StackVal, Function_307(*bParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &vVar0, 0,2f, 1);
	GRINGO_UPDATE_OBJECT_REF(bVar3, "GlobalSettings", "Owner", *bParam1);
	GRINGO_UPDATE_INT(bVar3, "GlobalSettings", "CurrentState", 1);
	MAKE_ACTOR_READY_FOR_ACTION(*bParam1, 1);
	SET_ANIM_SET_FOR_ACTOR(*bParam1, "gent_hog", 0);
	SET_ACTION_NODE_FOR_ACTOR(*bParam1, "default_character_main/lassoed/carry_hogtied/carry/carrying/carrying_stn");
	SET_LINKED_ANIM_TARGET(*bParam1, *bParam0);
	SET_INTENDED_HOGTIE_MASTER(GET_HOGTIED_MASTER(*bParam0), *bParam1);
	ATTACH_HOGTIE_ACTOR_TO_ACTOR(*bParam0, *bParam1);
	SET_ACTOR_GRINGO_RESTRICTION(*bParam1, bVar3);
	return;
}

vector3 Function_307(bool bParam0) //Position: 0xE4CF / 58575
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_308(var uParam0, bool bParam1, int iParam2) //Position: 0xE4E0 / 58592
{
	return Function_309(Global_29006, uParam0, bParam1, iParam2);
}

int Function_309(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xE4F2 / 58610
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

void Function_310(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13, int iParam14, int iParam15, bool bParam16) //Position: 0xE58E / 58766
{
	Function_305(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	Function_305(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	if (fParam12 >= 0.0f)
	{
		fParam12 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam0);
}

void Function_311(bool bParam0, float fParam1, bool bParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) //Position: 0xE718 / 59160
{
	Function_312(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	Global_63098.f_12 = fParam3;
	Global_63098.f_16 = fParam4;
	Global_63098.f_20 = iParam5;
	Global_63098.f_24 = iParam6;
	Global_63098.f_28 = iParam7;
	Global_63098.f_32 = iParam8;
	Global_63098.f_36 = iParam9;
	Global_63098.f_40 = iParam10;
	Global_63098.f_44 = iParam11;
	(&Global_63098 + 44)->f_4 = iParam12;
	(&Global_63098 + 44)->f_8 = iParam13;
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

void Function_312(bool bParam0, bool bParam1) //Position: 0xE7F1 / 59377
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

bool Function_313(bool bParam0) //Position: 0xE83D / 59453
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (bParam0 == 4294967295)
	{
		return "";
	}
	bVar0 = true;
	iVar1 = TRAIN_GET_NUM_CARS(bParam0);
	if (iVar1 > 1)
	{
		bVar0 = true;
		while (bVar0 < (iVar1 - 1))
		{
			bVar2 = TRAIN_GET_CAR(bParam0, bVar0);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (Function_314(bVar2) != 1165 || Function_314(bVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bParam0, bVar0));
				}
			}
			bVar0++;
		}
	}
	return "";
}

int Function_314(bool bParam0) //Position: 0xE8A5 / 59557
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

int Function_315() //Position: 0xE8C0 / 59584
{
	if (iLocal_705 == 0)
	{
		if (iLocal_706 == 104)
		{
		}
	}
	else if (iLocal_705 == 1)
	{
		if (iLocal_706 == 3)
		{
			if (!iLocal_916)
			{
				Function_316((*&Local_13 + 1816)[9]);
				vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1816)[9]) };
				UNK_0x44986367(&vLocal_819, vLocal_822.y);
				Function_231((*&Local_13 + 1816)[9]);
				vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[9]) };
				TRAIN_SET_POSITION_DIRECTION_PRECISELY(Global_34207, &vLocal_822, &vLocal_819, 14);
				TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
				if (IS_OBJECT_VALID(Global_63098))
				{
					DESTROY_OBJECT(Global_63098);
				}
				iLocal_916 = 1;
			}
		}
	}
	else if (iLocal_705 == 101)
	{
		if (!iLocal_916)
		{
			Function_229(GET_MOST_RECENT_MOUNT(Global_34573), (*&Local_13 + 1768)[8], 1, 1, 1);
			TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(Global_34573), -1.0f, 0, 0);
			MEMORY_PREFER_RIDING(bLocal_727, true);
			Function_229(GET_MOST_RECENT_MOUNT(bLocal_727), (*&Local_13 + 1768)[9], 1, 1, 1);
			TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(bLocal_727), -1.0f, 0, 0);
			iLocal_916 = 1;
		}
	}
	return 1;
}

vector3 Function_316(bool bParam0) //Position: 0xE9A2 / 59810
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

int Function_317() //Position: 0xE9C9 / 59849
{
	return 1;
}

int Function_318() //Position: 0xE9D0 / 59856
{
	float fVar0;
	
	Function_321(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol", 2, Global_34574, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	Function_319(StackVal, StackVal, Global_6289, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_319(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0xEA2B / 59947
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

void Function_320(bool bParam0, bool bParam1) //Position: 0xEC99 / 60569
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

void Function_321(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xED0E / 60686
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
	Function_248();
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
				Function_307(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_307(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
		Function_162(0x4000000);
	}
	if (Function_322(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_322(int iParam0) //Position: 0xEFB7 / 61367
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_323() //Position: 0xEFD3 / 61395
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

void Function_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xF052 / 61522
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_325(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_325(int iParam0) //Position: 0xF076 / 61558
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

void Function_326() //Position: 0xF5B3 / 62899
{
	Local_13.f_1184 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "HorsesStageFour"));
	(*&Local_13 + 1156)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CompanionHorse04", 976, -365,4985f, 16,93851f, 3941,273f, 0.0f, 3.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1156)[02], Local_13.f_1184);
	ACCESSORIZE_HORSE((*&Local_13 + 1156)[02], 3);
	TASK_STAND_STILL((*&Local_13 + 1156)[02], -1.0f, 0, 0);
	(*&Local_13 + 1156)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "SpareHorse01", 977, -372,6984f, 15,98389f, 3945,207f, 0.0f, 3.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1156)[12], Local_13.f_1184);
	ACCESSORIZE_HORSE((*&Local_13 + 1156)[12], 3);
	TASK_STAND_STILL((*&Local_13 + 1156)[12], -1.0f, 0, 0);
	(*&Local_13 + 1156)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "SpareHorse03", 976, -368f, 16,81926f, 3948.0f, 0.0f, 3.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1156)[22], Local_13.f_1184);
	ACCESSORIZE_HORSE((*&Local_13 + 1156)[22], 3);
	TASK_STAND_STILL((*&Local_13 + 1156)[22], -1.0f, 0, 0);
	return;
}

bool Function_327(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0xF6F0 / 63216
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
		Function_215(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_334(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_330(StackVal, iParam7);
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
		Function_329(bVar1, 0, 0, 0, 0);
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
		Function_328(bVar1, 0);
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

void Function_328(bool bParam0, bool bParam1) //Position: 0xFBDA / 64474
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_329(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFBFA / 64506
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

bool Function_330(int iParam0, bool bParam1) //Position: 0xFC4E / 64590
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_280(iParam0))
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
						Function_331(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_331(bool bParam0, bool bParam1) //Position: 0xFCCE / 64718
{
	Function_333(bParam0);
	Function_332(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_332(bool bParam0) //Position: 0xFCF4 / 64756
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_333(bool bParam0) //Position: 0xFD18 / 64792
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

bool Function_334(int iParam0, bool bParam1) //Position: 0xFDE7 / 64999
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

int Function_335() //Position: 0xFE7A / 65146
{
	Function_341(&Local_13 + 684, 615, 2, 0);
	if (Function_336(&Local_13 + 684))
	{
		return 1;
	}
	return 0;
}

bool Function_336(bool bParam0) //Position: 0xFE9C / 65180
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_340();
	iVar1 = 0;
	if (!Function_181(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_339(bParam0[iVar03], 8);
		}
		else if (Function_338())
		{
			iVar1 = 1;
			Function_339(bParam0[iVar03], 8);
		}
		Function_339(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_181(bParam0[iVar03], 4))
		{
			if (!Function_181(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_181(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_181(bParam0[03], 8) || iVar1));
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
				Function_339(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_181(bParam0[iVar03], 4))
		{
			if (!Function_181(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
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
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
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
	Function_337();
	return 1;
}

void Function_337() //Position: 0x10218 / 66072
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

bool Function_338() //Position: 0x10258 / 66136
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

void Function_339(var uParam0, int iParam1) //Position: 0x10283 / 66179
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_340() //Position: 0x10294 / 66196
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

var Function_341(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x102D6 / 66262
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_181(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_339(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_339(bParam0[iVar03], 8);
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

void Function_342(int iParam0) //Position: 0x103A6 / 66470
{
	if (!Function_296(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_188(1, 0, 1);
		}
	}
	return;
}

bool Function_343(int iParam0) //Position: 0x103C1 / 66497
{
	if (!Function_81(iParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[iParam0]), 4);
}

void Function_344(bool bParam0) //Position: 0x103DD / 66525
{
	Function_345(0, 0x40400000);
	Function_202();
	Function_201();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_345(bool bParam0, float fParam1) //Position: 0x10411 / 66577
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
	Function_347();
	Function_346();
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

void Function_346() //Position: 0x1050F / 66831
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_347() //Position: 0x10541 / 66881
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

void Function_348() //Position: 0x1063E / 67134
{
	if (iLocal_706 < 5 && iLocal_706 > 105)
	{
		if (iLocal_706 >= 8)
		{
			Function_436(&bLocal_782, 110.0f, 180.0f, bLocal_727, "Gunslinger_return", "Gunslinger_abandoned", &bLocal_715, 0, 0, 0, 325, 1);
		}
		if (IS_ACTOR_VALID((*&Local_13 + 1188)[02]))
		{
			Function_231((*&Local_13 + 1768)[0]);
			Function_431(StackVal, StackVal, "$/cutscene/GUN_03_END/GUN_03_END", &iLocal_726, Function_231((*&Local_13 + 1768)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
			if (GET_LAST_ATTACKER((*&Local_13 + 1188)[02]) == Global_34573)
			{
				Function_238("Gun03_assault_insideman");
				bLocal_715 = true;
			}
			else if (!IS_ACTOR_ALIVE((*&Local_13 + 1188)[02]))
			{
				Function_238("Gun03_assault_insideman");
				bLocal_715 = true;
			}
			if (IS_ACTOR_VALID(bLocal_833))
			{
				if (GET_LAST_ATTACKER(bLocal_833) == Global_34573)
				{
					Function_238("Gun03_killed_ally_horse");
					bLocal_715 = true;
				}
				else if (!IS_ACTOR_ALIVE(bLocal_833))
				{
					Function_238("Gun03_killed_ally_horse");
					bLocal_715 = true;
				}
			}
		}
	}
	switch (iLocal_706)
	{
		case 0x00000000:
			Function_344(0);
			iLocal_915 = 0;
			Function_430(&bLocal_816);
			Function_430(&bLocal_800);
			Function_430(&bLocal_794);
			Function_430(&bLocal_797);
			Function_232(&bLocal_782);
			SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_727, (*&Local_13 + 1532)[13], 4, 1);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_730[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				DISABLE_CHILD_SECTOR("emt_caveDoor01x");
				ENABLE_CHILD_SECTOR("emt_caveDoor02x");
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_729 = Global_30633[1];
				if (!Function_343(iLocal_729))
				{
					Function_342(&Local_698);
				}
				Function_229(Global_34573, (*&Local_13 + 2208)[2], 1, 1, 1);
				Function_229(bLocal_727, (*&Local_13 + 2208)[3], 0, 1, 1);
				Function_429();
				iLocal_706 = 1;
			}
			else
			{
				iLocal_706 = 1;
			}
			break;
		
		case 0x00000001:
			if (iLocal_730[3] == 0)
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_343(iLocal_729) || iLocal_729 != 4294967295)) && Function_429())
				{
					if (Function_427())
					{
						Function_424();
						Function_232(&bLocal_782);
						iLocal_706 = 2;
					}
				}
			}
			else if (Function_429())
			{
				Function_232(&bLocal_782);
				iLocal_706 = 2;
			}
			break;
		
		case 0x00000002:
			Function_244(iLocal_705);
			Function_418(StackVal, StackVal, Function_244(iLocal_705), iLocal_705, Global_30633[1], Function_246(iLocal_705), 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
			Function_232(&bLocal_782);
			iLocal_706 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!HUD_IS_FADING())
			{
				Function_417();
				CLEAR_ACTOR_MAX_SPEED(bLocal_727);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, true);
				TASK_CLEAR(bLocal_727);
				MEMORY_PREFER_RIDING(bLocal_727, false);
				Function_416(&bLocal_727, &Local_13 + 1156[02], 0, 1);
				Function_232(&bLocal_782);
				iLocal_706 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_283(&bLocal_782) <= 5.0f)
			{
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					Function_415("Gun03_obj05", 0x40f00000, 1, 2, 0, 0, 0);
				}
				Function_413();
				Function_411();
				Function_406();
				Function_232(&bLocal_782);
				iLocal_706 = 8;
			}
			break;
		
		case 0x00000008:
			if (GET_TASK_STATUS(bLocal_727, 0) != 0 && GET_TASK_STATUS(bLocal_727, 11) == 1)
			{
				DECOR_SET_BOOL(bLocal_829, "DisablePlayerCarry", true);
				TASK_MOUNT(bLocal_727, (*&Local_13 + 1156)[02], 0, 1, 2, 2147483647);
			}
			else if (GET_TASK_STATUS(bLocal_727, 0) != 4 || (Function_283(&bLocal_782) <= 25.0f && !iLocal_902))
			{
				FREE_FROM_HOGTIE(bLocal_829);
				ATTACH_HOGTIE_ACTOR_TO_ACTOR(bLocal_829, (*&Local_13 + 1156)[02]);
				ACTOR_RESET_ANIMS(bLocal_727, 1);
				AI_QUICK_EXIT_GRINGO(bLocal_727, 1);
				iLocal_902 = 1;
			}
			if (iLocal_902)
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_727, 1))
				{
					TASK_CLEAR(bLocal_727);
					ACTOR_MOUNT_ACTOR(bLocal_727, (*&Local_13 + 1156)[02]);
					iLocal_902 = 0;
				}
			}
			if (IS_ACTOR_RIDING(Global_34573) || (IS_ACTOR_RIDING(bLocal_727) && Function_405(bLocal_727, Global_34573) > 8.0f))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_232(&bLocal_782);
				iLocal_706 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_349())
			{
				Function_232(&bLocal_782);
				iLocal_706 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_283(&bLocal_782) <= 0,5f)
			{
				Function_232(&bLocal_782);
				iLocal_706 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				Function_220();
				Function_335();
				iLocal_730[4] = 1;
				Function_232(&bLocal_782);
				iLocal_705 = 101;
				iLocal_706 = 0;
			}
			break;
	}
	return;
}

bool Function_349() //Position: 0x10B59 / 68441
{
	if (iLocal_1060 < 2 && iLocal_1060 >= 3)
	{
		Function_401();
		if (iLocal_1060 == 3)
		{
			Function_386(4);
			Function_382();
		}
	}
	switch (iLocal_1060)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(bLocal_727, 0) != 0 && GET_TASK_STATUS(bLocal_727, 11) == 1)
			{
				DECOR_SET_BOOL(bLocal_829, "DisablePlayerCarry", true);
				TASK_MOUNT(bLocal_727, (*&Local_13 + 1156)[02], 0, 1, 2, 2147483647);
			}
			else if (GET_TASK_STATUS(bLocal_727, 0) == 4)
			{
				FREE_FROM_HOGTIE(bLocal_829);
				ATTACH_HOGTIE_ACTOR_TO_ACTOR(bLocal_829, (*&Local_13 + 1156)[02]);
				ACTOR_RESET_ANIMS(bLocal_727, 1);
				AI_QUICK_EXIT_GRINGO(bLocal_727, 1);
				DELETE_ACCESSORY("ANKLE_BIND", bLocal_829);
				DELETE_ACCESSORY("WRIST_BIND", bLocal_829);
				iLocal_902 = 1;
			}
			if (iLocal_902)
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_727, 1))
				{
					TASK_CLEAR(bLocal_727);
					TASK_MOUNT(bLocal_727, (*&Local_13 + 1156)[02], 0, 1, 2, 2147483647);
					iLocal_902 = 0;
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) || (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_727) && Function_405(bLocal_727, Global_34573) > 8.0f))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_415("Gun03_obj05b", 0x40f00000, 1, 2, 0, 0, 0);
				Function_212(bLocal_728);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_727)))
				{
					Function_215(5, 1, 1);
				}
				Function_232(&bLocal_782);
				iLocal_1060 = 1;
			}
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bLocal_727, 0) != 0 && GET_TASK_STATUS(bLocal_727, 11) == 1)
			{
				DECOR_SET_BOOL(bLocal_829, "DisablePlayerCarry", true);
				TASK_MOUNT(bLocal_727, (*&Local_13 + 1156)[02], 0, 1, 2, 2147483647);
			}
			else if (GET_TASK_STATUS(bLocal_727, 0) == 4)
			{
				FREE_FROM_HOGTIE(bLocal_829);
				ATTACH_HOGTIE_ACTOR_TO_ACTOR(bLocal_829, (*&Local_13 + 1156)[02]);
				ACTOR_RESET_ANIMS(bLocal_727, 1);
				AI_QUICK_EXIT_GRINGO(bLocal_727, 1);
				DELETE_ACCESSORY("ANKLE_BIND", bLocal_829);
				DELETE_ACCESSORY("WRIST_BIND", bLocal_829);
				iLocal_902 = 1;
			}
			if (iLocal_902)
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_727, 1))
				{
					TASK_CLEAR(bLocal_727);
					TASK_MOUNT(bLocal_727, (*&Local_13 + 1156)[02], 0, 1, 2, 2147483647);
					iLocal_902 = 0;
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_727))
			{
				ACTOR_END_FORCE_HOLSTER(bLocal_727);
				MEMORY_ALLOW_SHOOTING(bLocal_727, true);
				SET_ACTOR_INVULNERABILITY((*&Local_13 + 1156)[02], true);
				SET_ACTOR_PROOF((*&Local_13 + 1156)[02], 4294967295);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_727, true);
				TASK_CLEAR(bLocal_727);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_727, Local_13.f_2596, 5, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, 2);
				SET_ACTOR_INVULNERABILITY(GET_MOUNT(bLocal_727), true);
				SET_ALLOW_JACK(GET_MOUNT(bLocal_727), 0);
				SET_ACTORS_HORSE(bLocal_727, GET_MOUNT(bLocal_727));
				DECOR_SET_BOOL(GET_MOUNT(bLocal_727), "bNoInjuryEjection", true);
				MEMORY_PREFER_RIDING(bLocal_727, true);
				GET_POSITION(bLocal_727, &vLocal_865);
				Function_381();
				iLocal_1058 = 0;
				Function_232(&bLocal_782);
				iLocal_1060 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1640)[3]) || IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1640)[3]))
			{
				Function_376(Local_13.f_1312, Global_34573, 1);
				Function_376(Local_13.f_1272, Global_34573, 1);
				Function_375(Local_13.f_1272, bLocal_727, 1);
				Function_374(Local_13.f_1272, 150.0f);
				Function_324(&iLocal_1059, 41, 0, 4294967295, 4294967295);
				Function_232(&bLocal_794);
				Function_232(&bLocal_782);
				iLocal_1060 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_373(Local_13.f_1344, 0, 1, 1, 1, 0))
			{
				Function_372();
				Function_232(&bLocal_797);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, 2);
				Function_324(&iLocal_1059, 6, 0, 4294967295, 4294967295);
				Function_232(&bLocal_782);
				iLocal_1060 = 4;
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1640)[9]) && !iLocal_1055)
			{
				Function_376(Local_13.f_1312, Global_34573, 1);
				Function_375(Local_13.f_1312, Global_34573, 1);
				Function_374(Local_13.f_1312, 150.0f);
				iLocal_1055 = 1;
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1640)[8]) && !iLocal_1054)
			{
				Function_376(Local_13.f_1344, Global_34573, 1);
				Function_375(Local_13.f_1344, bLocal_727, 1);
				Function_374(Local_13.f_1344, 150.0f);
				iLocal_1054 = 1;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1640)[7]) && !iLocal_901)
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, true);
				iLocal_901 = 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1640)[7]) && iLocal_901)
			{
				Function_371();
				Function_232(&bLocal_782);
				iLocal_1060 = 5;
			}
			break;
		
		case 0x00000005:
			Function_232(&bLocal_782);
			iLocal_1060 = 6;
			break;
		
		case 0x00000006:
			if (Function_283(&bLocal_782) <= 7.0f)
			{
				Function_370();
				Function_232(&bLocal_782);
				iLocal_1060 = 7;
			}
			break;
		
		case 0x00000007:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_232(&bLocal_782);
			iLocal_1060 = 11;
			break;
		
		case 0x0000000B:
			if (Function_283(&bLocal_782) < 5.0f)
			{
				if (Function_361())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_415("Gun03_obj05c", 0x40f00000, 1, 2, 0, 0, 0);
					Function_232(&bLocal_782);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_727, "aiming_point", 0);
					iLocal_1060 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			if (Function_283(&bLocal_782) < 7.0f)
			{
				if (Function_360(bLocal_727, bLocal_828))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_359();
					Function_232(&bLocal_782);
					iLocal_1060 = 14;
				}
			}
			break;
		
		case 0x0000000E:
			if (Function_283(&bLocal_782) < 5.0f)
			{
				if (!iLocal_906)
				{
					AI_GOAL_AIM_CLEAR(bLocal_727);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 1);
					TASK_CLEAR(bLocal_727);
					iLocal_906 = 1;
				}
				if ((IS_ACTOR_IN_VOLUME(bLocal_828, (*&Local_13 + 1640)[6]) || Function_356(bLocal_828, (*&Local_13 + 1640)[6], 8.0f)) || Function_353(bLocal_828, bLocal_727, 8.0f))
				{
					Function_350();
					Function_232(&bLocal_782);
					iLocal_1060 = 15;
				}
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_283(&bLocal_782) <= 4.0f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				TASK_CLEAR(bLocal_727);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_727);
				bLocal_838 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 1);
				TASK_GO_NEAR_OBJECT(0, (*&Local_13 + 2536)[2], 4.0f, 1, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_838);
				TASK_SEQUENCE_RELEASE(bLocal_838, 1);
				TASK_CLEAR(bLocal_828);
				bLocal_838 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(0, (*&Local_13 + 2536)[2], 4.0f, 1, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_828, bLocal_838);
				TASK_SEQUENCE_RELEASE(bLocal_838, 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				TASK_CLEAR(Global_34573);
				bLocal_838 = TASK_SEQUENCE_OPEN();
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					TASK_DISMOUNT(false, 1);
				}
				TASK_GO_NEAR_OBJECT(0, (*&Local_13 + 2536)[2], 4.0f, 1, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bLocal_838);
				TASK_SEQUENCE_RELEASE(bLocal_838, 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_212(bLocal_828);
				Function_232(&bLocal_782);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_350() //Position: 0x1123B / 70203
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Gun03_CarlosRidesUp", "Gun03_CarlosRidesUp", false, 1, 1, 0, 1);
		Function_351(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_351(int iParam0) //Position: 0x1128B / 70283
{
	Function_352(0, Global_34573, iParam0, 0);
	Function_352(1, bLocal_727, iParam0, 0);
	Function_352(4, bLocal_828, iParam0, 0);
	Function_352(5, (*&Local_13 + 804)[02], iParam0, 0);
	Function_352(6, (*&Local_13 + 804)[12], iParam0, 0);
	Function_352(11, (*&Local_13 + 860)[12], iParam0, 0);
	Function_352(12, (*&Local_13 + 1276)[32], iParam0, 0);
	Function_352(13, (*&Local_13 + 1236)[12], iParam0, 0);
	return;
}

void Function_352(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x112FD / 70397
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

int Function_353(var uParam0, var uParam1, float fParam2) //Position: 0x11322 / 70434
{
	float fVar0;
	
	fVar0 = Function_354(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_354(bool bParam0, bool bParam1) //Position: 0x1133F / 70463
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_355(&uVar0, &uVar3);
	return iVar6;
}

var Function_355(var uParam0, int iParam1) //Position: 0x1135E / 70494
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_356(bool bParam0, var uParam1, float fParam2) //Position: 0x1137C / 70524
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_358(uParam1);
		Function_357(bParam0);
		if (VDIST(Function_358(uParam1), Function_357(bParam0)) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("\Attempting to check whether an INVALID actor is in range of volume centre. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_357(bool bParam0) //Position: 0x11406 / 70662
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

vector3 Function_358(bool bParam0) //Position: 0x11470 / 70768
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_359() //Position: 0x11481 / 70785
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SpottsCarlosArrive", "Gun03_SpottsCarlosArrive", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_360(bool bParam0, bool bParam1) //Position: 0x114DA / 70874
{
	if (!ACTOR_HAS_ANIM_SET(bParam0, "aiming_point"))
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
		SET_ANIM_SET_FOR_ACTOR(bParam0, "aiming_point", 0);
	}
	else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "aiming_point"))
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "aiming_point");
		STOP_FORCE_LOOK_AT_COORD(bParam0);
		AI_GOAL_AIM_AT_OBJECT(bParam0, bParam1, 0);
		SET_AUTO_CONVERSATION_LOOK(bParam0, 0);
		return 1;
	}
	return 0;
}

bool Function_361() //Position: 0x1155A / 71002
{
	if (!IS_ACTOR_VALID((*&Local_13 + 1188)[02]))
	{
		Function_278();
		bLocal_828 = (*&Local_13 + 1188)[02];
	}
	else
	{
		bLocal_833 = GET_MOUNT(bLocal_828);
		Function_363(&(Local_962[317]), bLocal_828, "Carlos", 0, 0x5f5e100, 1);
		if (!Function_362((*&Local_13 + 2208)[6], 0x3f800000, 0x42960000, 1, 1, 0))
		{
			Function_276(bLocal_828, (*&Local_13 + 2208)[6], 1, 1, 1);
			bLocal_838 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2600, 2, 0, 0, 1, false);
			TASK_FACE_ACTOR(false, bLocal_829, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_828, bLocal_838);
			TASK_SEQUENCE_RELEASE(bLocal_838, 1);
			TASK_PRIORITY_SET(bLocal_828, true);
			SET_ACTOR_FACTION(bLocal_828, 20);
			return 1;
		}
		Function_276(bLocal_828, (*&Local_13 + 2208)[5], 1, 1, 1);
		bLocal_838 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2596, 2, 0, 0, 1, false);
		TASK_FACE_ACTOR(false, bLocal_829, 0, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_828, bLocal_838);
		TASK_SEQUENCE_RELEASE(bLocal_838, 1);
		TASK_PRIORITY_SET(bLocal_828, true);
		SET_ACTOR_FACTION(bLocal_828, 20);
		return 1;
	}
	return 0;
}

bool Function_362(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11680 / 71296
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bParam0, fParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_363(bool bParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1169A / 71322
{
	if (!Function_369(bParam0, uParam1))
	{
		return 0;
	}
	if (!Function_368(bParam0, bParam2))
	{
		return 0;
	}
	Function_367(bParam0, iParam3);
	bParam0->f_40 = 0;
	Function_364(bParam0, iParam4, iParam5);
	return 1;
}

void Function_364(var uParam0, int iParam1, int iParam2) //Position: 0x116D6 / 71382
{
	if (iParam1 != 100000000)
	{
		Function_366(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_365(uParam0, iParam2);
	}
	return;
}

void Function_365(int iParam0, bool bParam1) //Position: 0x116F9 / 71417
{
	iParam0->f_40 = 0;
	Function_366(iParam0, 2, bParam1);
	Function_366(iParam0, 4, bParam1);
	Function_366(iParam0, 8, bParam1);
	Function_366(iParam0, 16, bParam1);
	Function_366(iParam0, 32, bParam1);
	Function_366(iParam0, 64, bParam1);
	Function_366(iParam0, 128, bParam1);
	Function_366(iParam0, 256, bParam1);
	Function_366(iParam0, 512, bParam1);
	Function_366(iParam0, 1024, bParam1);
	return;
}

void Function_366(int iParam0, int iParam1, bool bParam2) //Position: 0x1175F / 71519
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

void Function_367(var uParam0, int iParam1) //Position: 0x1179B / 71579
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_368(int iParam0, bool bParam1) //Position: 0x117A7 / 71591
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

bool Function_369(int iParam0, bool bParam1) //Position: 0x11830 / 71728
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

void Function_370() //Position: 0x119BC / 72124
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_RickWaitingCarlos", "Gun03_RickWaitingCarlos", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_371() //Position: 0x11A13 / 72211
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ArriveMeetingPlace", "Gun03_ArriveMeetingPlace", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_372() //Position: 0x11A6C / 72300
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_NoFollowRickIntoCaves", "Gun03_NoFollowRickIntoCaves", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_373(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x11ACB / 72395
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

void Function_374(bool bParam0, bool bParam1) //Position: 0x11B7F / 72575
{
	void fVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	fVar0 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (fVar0 - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(bVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(bVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_375(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11BD8 / 72664
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

void Function_376(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11C43 / 72771
{
	Function_375(bParam0, bParam1, 1);
	Function_380(bParam0, 1);
	Function_379(bParam0, bParam1, 4);
	Function_378(bParam0, bParam1);
	if (bParam2)
	{
		Function_377(bParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_377(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x11C83 / 72835
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

void Function_378(bool bParam0, bool bParam1) //Position: 0x11D6D / 73069
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

void Function_379(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11DBF / 73151
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

void Function_380(bool bParam0, int iParam1) //Position: 0x11E04 / 73220
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

void Function_381() //Position: 0x11E45 / 73285
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_EscapeTrewCanyon", "Gun03_EscapeTrewCanyon", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_382() //Position: 0x11E9A / 73370
{
	if (iLocal_1058 == 0)
	{
		if (!Function_373(Local_13.f_1272, 0, 1, 1, 1, 0))
		{
			Function_324(&iLocal_1059, 11, 0, 4294967295, 4294967295);
			iLocal_1058 = 1;
		}
		else
		{
			Function_324(&iLocal_1059, 41, 0, 4294967295, 4294967295);
		}
	}
	else if (iLocal_1058 == 1)
	{
		if (Function_373(Local_13.f_1312, 0, 1, 1, 1, 0))
		{
			if (Function_385(Global_34573, Local_13.f_1312, 1, 0, 0, 3212836864) || Function_383(Local_13.f_1312, Global_34573, 1, 0, 0))
			{
				Function_324(&iLocal_1059, 41, 0, 4294967295, 4294967295);
				iLocal_1058 = 2;
			}
		}
	}
	else if (iLocal_1058 == 2)
	{
		if (!Function_373(Local_13.f_1312, 0, 1, 1, 1, 0))
		{
			Function_324(&iLocal_1059, 11, 0, 4294967295, 4294967295);
			iLocal_1058 = 3;
		}
	}
	else if (iLocal_1058 == 3)
	{
		if (Function_373(Local_13.f_1344, 0, 1, 1, 1, 0))
		{
			if (Function_385(Global_34573, Local_13.f_1344, 1, 0, 0, 3212836864) || Function_383(Local_13.f_1344, Global_34573, 1, 0, 0))
			{
				Function_324(&iLocal_1059, 41, 0, 4294967295, 4294967295);
				iLocal_1058 = 3;
			}
		}
	}
	return;
}

int Function_383(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x11F9B / 73627
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
			if (Function_384(bVar1, bParam1, bParam2, bParam3, bParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_384(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x11FFE / 73726
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

int Function_385(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x120EB / 73963
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
			if (Function_384(bParam0, bVar1, iParam2, iParam3, iParam4, iParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_386(int iParam0) //Position: 0x1214B / 74059
{
	if (IS_ACTOR_SHOOTING(Global_34573))
	{
		Function_232(&bLocal_794);
	}
	if (Function_283(&bLocal_788) < 1.0f)
	{
		if ((Function_405(Global_34573, bLocal_727) < 35.0f && !IS_PLAYER_IN_COMBAT(0)) && Function_400(Global_34573, Local_13.f_2596) < Function_400(bLocal_727, Local_13.f_2596))
		{
			if (!iLocal_915)
			{
				Function_399();
				iLocal_915 = 1;
			}
		}
		else
		{
			iLocal_915 = 0;
			if (Function_283(&bLocal_797) < 12.0f)
			{
				if (IS_ACTOR_VALID((*&Local_13 + 1276)[32]))
				{
					if (IS_ACTOR_ALIVE((*&Local_13 + 1276)[32]))
					{
						if (Function_405(Global_34573, (*&Local_13 + 1276)[32]) > 25.0f)
						{
							Function_398();
							Function_232(&bLocal_797);
						}
					}
				}
				if (IS_ACTOR_VALID((*&Local_13 + 1236)[12]))
				{
					if (IS_ACTOR_ALIVE((*&Local_13 + 1236)[12]))
					{
						if (Function_405(Global_34573, (*&Local_13 + 1236)[12]) > 25.0f)
						{
							Function_397();
							Function_232(&bLocal_797);
						}
					}
				}
				if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_727, 1))
				{
					if (iLocal_705 != 2 && iLocal_706 > 13)
					{
						Function_396();
					}
					else
					{
						Function_395();
					}
					Function_232(&bLocal_797);
				}
				else if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_829, 1))
				{
					Function_394();
					Function_232(&bLocal_797);
				}
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && iParam0 != 4)
				{
					if (DECOR_CHECK_EXIST(Global_34573, "beingBucked"))
					{
						Function_393();
						Function_232(&bLocal_797);
					}
					else
					{
						Function_392();
						Function_232(&bLocal_797);
					}
				}
				else if ((Function_391(iParam0) && IS_AI_ACTOR_ENGAGED_IN_COMBAT(bLocal_727)) && IS_AI_ACTOR_IN_COMBAT(bLocal_727))
				{
					if (Function_283(&bLocal_794) < 15.0f)
					{
						if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 350.0f)
						{
							if (iParam0 == 4)
							{
								if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
								{
									Function_390();
								}
							}
							else
							{
								Function_390();
							}
							Function_232(&bLocal_797);
							Function_232(&bLocal_794);
						}
						else
						{
							if (iParam0 == 4)
							{
								if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
								{
									Function_389();
								}
							}
							else
							{
								Function_389();
							}
							Function_232(&bLocal_797);
							Function_232(&bLocal_794);
						}
					}
					else if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
					{
						if (iParam0 >= 2)
						{
							if (iParam0 == 4)
							{
								if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
								{
									Function_388();
								}
							}
							else
							{
								Function_388();
							}
						}
						else
						{
							Function_387();
						}
						Function_232(&bLocal_797);
					}
					else
					{
						if (iParam0 == 4)
						{
							if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
							{
								Function_388();
							}
						}
						else
						{
							Function_388();
						}
						Function_232(&bLocal_797);
					}
				}
			}
		}
	}
	return;
}

void Function_387() //Position: 0x123BB / 74683
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_TauntsEnemies", "Gun03_TauntsEnemies", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_388() //Position: 0x1240A / 74762
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ShoutsEnc", "Gun03_ShoutsEnc", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_389() //Position: 0x12451 / 74833
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_RickCoverMe", "Gun03_RickCoverMe", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_390() //Position: 0x1249C / 74908
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_NoHelpShootEscape", "Gun03_NoHelpShootEscape", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_391(int iParam0) //Position: 0x124F3 / 74995
{
	if (iParam0 == 5)
	{
		return Function_373(Local_13.f_1232, 0, 1, 1, 1, 0);
	}
	if (iParam0 == 4)
	{
		if ((Function_373(Local_13.f_1272, 0, 1, 1, 1, 0) || Function_373(Local_13.f_1312, 0, 1, 1, 1, 0)) || Function_373(Local_13.f_1344, 0, 1, 1, 1, 0))
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 3)
	{
		if (Function_373(Local_13.f_1104, 0, 1, 1, 1, 0) || Function_373(Local_13.f_1152, 0, 1, 1, 1, 0))
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 2)
	{
		if ((((((Function_373(Local_13.f_888, 0, 1, 1, 1, 0) || Function_373(Local_13.f_912, 0, 1, 1, 1, 0)) || Function_373(Local_13.f_936, 0, 1, 1, 1, 0)) || Function_373(Local_13.f_960, 0, 1, 1, 1, 0)) || Function_373(Local_13.f_984, 0, 1, 1, 1, 0)) || Function_373(Local_13.f_1008, 0, 1, 1, 1, 0)) || Function_373(Local_13.f_1032, 0, 1, 1, 1, 0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_392() //Position: 0x125EC / 75244
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_OffHorseDuringEscape", "Gun03_OffHorseDuringEscape", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_393() //Position: 0x12649 / 75337
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_TrownOffHorseEscape", "Gun03_TrownOffHorseEscape", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_394() //Position: 0x126A4 / 75428
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_TargetsLisa", "Gun03_TargetsLisa", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395() //Position: 0x126EF / 75503
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_TargetsRickEscape", "Gun03_TargetsRickEscape", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_396() //Position: 0x12746 / 75590
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_GunOnRickB4Caves", "Gun03_GunOnRickB4Caves", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_397() //Position: 0x1279B / 75675
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(13, "Gun03_SoldiersCanyonYell3", "Gun03_SoldiersCanyonYell3", false, 2, 1, 0, 1);
		Function_351(8193);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_398() //Position: 0x127F9 / 75769
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(12, "Gun03_SoldiersCanyonYell2", "Gun03_SoldiersCanyonYell2", false, 2, 1, 0, 1);
		Function_351(4097);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_399() //Position: 0x12857 / 75863
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_RidesOffCombat", "Gun03_RidesOffCombat", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_400(bool bParam0, bool bParam1) //Position: 0x128A8 / 75944
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_357(bParam0);
		vVar4 = { StackVal, StackVal, Function_357(bParam0) };
		return VDIST(vVar4, vVar0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_401() //Position: 0x12935 / 76085
{
	if (Function_283(&bLocal_816) < 1.0f)
	{
		if (Function_400(Global_34573, Local_13.f_2596) < (Function_400(bLocal_727, Local_13.f_2596) + 3.0f) && !IS_ACTOR_SHOOTING(bLocal_727))
		{
			if (Function_283(&bLocal_800) < 15.0f)
			{
				Function_404();
				Function_232(&bLocal_797);
				Function_232(&bLocal_800);
			}
		}
		if ((Function_400(Global_34573, Local_13.f_2596) < (Function_400(bLocal_727, Local_13.f_2596) - 9.0f) && !IS_ACTOR_SHOOTING(bLocal_727)) && !iLocal_909)
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
			iLocal_909 = 1;
			Function_232(&bLocal_816);
		}
		else if (IS_ACTOR_SHOOTING(bLocal_727) && !iLocal_908)
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
			if (Function_403(StackVal, StackVal, bLocal_727, vLocal_865) < 25.0f)
			{
				TASK_CLEAR(GET_MOUNT(bLocal_727));
				TASK_STAND_STILL(GET_MOUNT(bLocal_727), 0,1f, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bLocal_727), "horse_Main/Melee/RearUp");
				GET_POSITION(bLocal_727, &vLocal_865);
			}
			if (Function_283(&bLocal_800) < 15.0f)
			{
				Function_402();
				Function_232(&bLocal_800);
				Function_232(&bLocal_797);
			}
			Function_232(&bLocal_816);
			iLocal_908 = 1;
		}
		else if ((iLocal_908 || iLocal_909) && (Function_400(Global_34573, Local_13.f_2596) + 9.0f) > Function_400(bLocal_727, Local_13.f_2596))
		{
			iLocal_908 = 0;
			iLocal_909 = 0;
			if (iLocal_901)
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, true);
			}
			else
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, 2);
			}
			Function_232(&bLocal_816);
		}
		Function_232(&bLocal_816);
	}
	return;
}

void Function_402() //Position: 0x12AB4 / 76468
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SpotsMoreEnemies", "Gun03_SpotsMoreEnemies", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_403(bool bParam0, vector3 vParam1) //Position: 0x12B09 / 76553
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_357(bParam0);
		vVar0 = { StackVal, StackVal, Function_357(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_404() //Position: 0x12B83 / 76675
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_RickMoveForward", "Gun03_RickMoveForward", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_405(bool bParam0, bool bParam1) //Position: 0x12BD6 / 76758
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

void Function_406() //Position: 0x12CC7 / 76999
{
	if (!SQUAD_IS_VALID(Local_13.f_1344))
	{
		Function_409();
	}
	Function_408(&Local_13 + 1344, 1);
	Function_407(Local_13.f_1344, 0, -1.0f);
	Function_376(Local_13.f_1344, bLocal_727, 0);
	Function_376(Local_13.f_1344, Global_34573, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_13.f_1344, 1);
	TASK_OVERRIDE_SET_POSTURE((*&Local_13 + 1316)[02], true);
	TASK_CROUCH((*&Local_13 + 1316)[22], -1.0f);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_13 + 1316)[02], -1.0f);
	return;
}

void Function_407(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12D35 / 77109
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
			TASK_SHOOT_ENEMIES_FROM_POSITION(bVar1, &uVar2, bVar5, bParam2);
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_408(var uParam0, bool bParam1) //Position: 0x12D8E / 77198
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

void Function_409() //Position: 0x12E2A / 77354
{
	Local_13.f_1344 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S4_EscapeGs_Wv3"));
	(*&Local_13 + 1316)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv3_e08", 386, -229,4948f, 31,72498f, 3634,978f, 0.0f, 177.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1316)[02], Local_13.f_1344);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1316)[02], 42, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1316)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1316)[02], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1316)[02], 1);
	Function_410((*&Local_13 + 1316)[02]);
	(*&Local_13 + 1316)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv3_e05", 383, -226,2479f, 34,85741f, 3627,258f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1316)[12], Local_13.f_1344);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1316)[12], 41, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1316)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1316)[12], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1316)[12], 1);
	Function_410((*&Local_13 + 1316)[12]);
	(*&Local_13 + 1316)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv3_e09", 387, -235,6647f, 35,24493f, 3631,67f, 0.0f, 202.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1316)[22], Local_13.f_1344);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1316)[22], 41, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1316)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1316)[22], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1316)[22], 1);
	Function_410((*&Local_13 + 1316)[22]);
	return;
}

void Function_410(bool bParam0) //Position: 0x12FEA / 77802
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

void Function_411() //Position: 0x1301E / 77854
{
	if (!SQUAD_IS_VALID(Local_13.f_1312))
	{
		Function_412();
	}
	Function_408(&Local_13 + 1312, 1);
	Function_376(Local_13.f_1312, Global_34573, 0);
	Function_407(Local_13.f_1312, 0, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_13.f_1312, 1);
	TASK_CROUCH((*&Local_13 + 1276)[02], -1.0f);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_13 + 1276)[12], -1.0f);
	TASK_CROUCH((*&Local_13 + 1276)[32], -1.0f);
	return;
}

void Function_412() //Position: 0x13080 / 77952
{
	Local_13.f_1312 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S4_EscapeGs_Wv2"));
	(*&Local_13 + 1276)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv2_e02", 380, -266,5293f, 32,79571f, 3772.0f, 0.0f, 162.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1276)[02], Local_13.f_1312);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1276)[02], 40, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1276)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1276)[02], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1276)[02], 1);
	Function_410((*&Local_13 + 1276)[02]);
	(*&Local_13 + 1276)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv2_e04", 382, -234,8638f, 35,20123f, 3753,179f, 0.0f, 120,0396f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1276)[12], Local_13.f_1312);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1276)[12], 41, 0,999f, 1, 1);
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_13 + 1276)[12], true);
	TASK_STAND_STILL((*&Local_13 + 1276)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1276)[12], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1276)[12], 1);
	Function_410((*&Local_13 + 1276)[12]);
	(*&Local_13 + 1276)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv2_e11", 389, -222,3332f, 35,4324f, 3741,045f, 0.0f, 120,0396f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1276)[22], Local_13.f_1312);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1276)[22], 40, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1276)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1276)[22], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1276)[22], 1);
	Function_410((*&Local_13 + 1276)[22]);
	(*&Local_13 + 1276)[32] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv2_m03", 393, -224,1118f, 32,9645f, 3721,389f, 0.0f, 162,6998f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1276)[32], Local_13.f_1312);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1276)[32], 41, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1276)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1276)[32], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1276)[32], 1);
	Function_410((*&Local_13 + 1276)[32]);
	return;
}

void Function_413() //Position: 0x132D5 / 78549
{
	if (!SQUAD_IS_VALID(Local_13.f_1272))
	{
		Function_414();
	}
	Function_408(&Local_13 + 1272, 1);
	Function_407(Local_13.f_1272, 0, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_13.f_1272, 1);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*&Local_13 + 1236)[02], -1.0f);
	TASK_CROUCH((*&Local_13 + 1236)[02], -1.0f);
	TASK_CROUCH((*&Local_13 + 1236)[12], -1.0f);
	return;
}

void Function_414() //Position: 0x1332B / 78635
{
	Local_13.f_1272 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S4_EscapeGs_Wv1"));
	(*&Local_13 + 1236)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv1_e01", 379, -327,9216f, 20,55877f, 3869,244f, 0.0f, 120,0396f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1236)[02], Local_13.f_1272);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1236)[02], 40, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1236)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1236)[02], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1236)[02], 1);
	Function_410((*&Local_13 + 1236)[02]);
	(*&Local_13 + 1236)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv1_m02", 395, -281,7752f, 32,84133f, 3829,209f, 0.0f, 211,2998f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1236)[12], Local_13.f_1272);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1236)[12], 40, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1236)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1236)[12], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1236)[12], 1);
	Function_410((*&Local_13 + 1236)[12]);
	(*&Local_13 + 1236)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv1_e03", 381, -280,3831f, 35,76176f, 3859,794f, 0.0f, 120,0396f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1236)[22], Local_13.f_1272);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1236)[22], 41, 0,999f, 1, 1);
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_13 + 1236)[22], true);
	TASK_STAND_STILL((*&Local_13 + 1236)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1236)[22], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1236)[22], 1);
	Function_410((*&Local_13 + 1236)[22]);
	(*&Local_13 + 1236)[32] = CREATE_ACTOR_IN_LAYOUT(Local_13, "s4_wv1_e10", 388, -264,8758f, 32,56327f, 3836,876f, 0.0f, 120,0396f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1236)[32], Local_13.f_1272);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1236)[32], 40, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1236)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1236)[32], 19);
	TASK_DRAW_HOLSTER_WEAPON((*&Local_13 + 1236)[32], 1);
	Function_410((*&Local_13 + 1236)[32]);
	return;
}

void Function_415(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x13580 / 79232
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

int Function_416(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x135D3 / 79315
{
	var uVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		LOG_ERROR("HOGTIE CARRIER not valid.");
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		LOG_ERROR("HOGTIE VICTIM not valid.");
		return 0;
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(*uParam0, "head", &uVar0))
	{
		LOG_ERROR("NAMED BONE not valid for actor.");
		return 0;
	}
	iVar3 = 0;
	bVar5 = GET_ATTACHED_HOGTIE_VICTIM(*uParam0);
	if (IS_ACTOR_VALID(bVar5))
	{
		bVar4 = GET_GRINGO_FROM_OBJECT(DECOR_GET_OBJECT(bVar5, "HogtieGringoAttached"));
	}
	while (!IS_GRINGO_VALID(bVar4) && iVar3 > 5)
	{
		GET_OBJECT_NAMED_BONE_POSITION(*uParam0, "head", &uVar0);
		bVar4 = LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &uVar0, 0,5f, 1);
		iVar3++;
	}
	if (iVar3 > 5)
	{
		return 0;
	}
	TASK_PRIORITY_SET(*uParam1, true);
	TASK_STAND_STILL(*uParam1, -1.0f, 0, 0);
	bVar6 = GET_HEADING(*uParam1);
	vVar7 = { 0.0f, 0.0f, 0.0f };
	if (bParam2)
	{
		GET_OBJECT_RELATIVE_POSITION(*uParam1, 1,0011f, 0,0002f, 0,2262f, &vVar7);
		DECOR_SET_BOOL(*uParam0, "Hogtie_PutOnHorse_L", false);
		bVar6 = (bVar6 + 90.0f);
	}
	else
	{
		GET_OBJECT_RELATIVE_POSITION(*uParam1, -1,3385f, 0,0002f, 0,0723f, &vVar7);
		DECOR_SET_BOOL(*uParam0, "Hogtie_PutOnHorse_L", true);
		bVar6 = (bVar6 + 250.0f);
	}
	bVar10 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_PRECISELY(0, &vVar7, iParam3, bVar6, 0,1f, 0.0f, 0, 0);
	TASK_USE_GRINGO(false, bVar4, "PutOn_Horse", true, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(*uParam0, bVar10);
	TASK_SEQUENCE_RELEASE(bVar10, 1);
	return 1;
}

void Function_417() //Position: 0x137D8 / 79832
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_BothExitCaves", "Gun03_BothExitCaves", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_418(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x13827 / 79911
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
	if (iParam3 != Global_34165.f_48 && !Function_423())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_422(0);
	Function_421();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_420(uParam4, iVar0, iVar1);
	Function_419();
}

void Function_419() //Position: 0x138C4 / 80068
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

void Function_420(int iParam0, bool bParam1, bool bParam2) //Position: 0x13905 / 80133
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

void Function_421() //Position: 0x13A6B / 80491
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_422(bool bParam0) //Position: 0x13A8F / 80527
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

bool Function_423() //Position: 0x13ABE / 80574
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_424() //Position: 0x13AD9 / 80601
{
	if (IS_OBJECT_VALID(bLocal_841))
	{
		Function_217(bLocal_841);
	}
	if (IS_BLIP_VALID(bLocal_847))
	{
		REMOVE_BLIP(bLocal_847);
	}
	SET_ACTOR_FACTION(bLocal_829, 20);
	Function_215(8, 0, 1);
	DECOR_SET_BOOL(bLocal_829, "bDisableCutFree", true);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_829, 0);
	TASK_CLEAR(bLocal_727);
	TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_727);
	Function_215(5, 0, 1);
	ACTOR_END_FORCE_HOLSTER(bLocal_727);
	MEMORY_ALLOW_SHOOTING(bLocal_727, true);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_727, true);
	AUDIO_SET_PLAYER_MOOD(1, 0);
	Function_425();
	iLocal_874 = 0;
	Function_363(&(Local_962[017]), bLocal_727, "Gunslinger", 0, 0x5f5e100, 1);
	Function_363(&(Local_962[217]), bLocal_829, "Mexgirl", 0, 0x5f5e100, 1);
	return;
}

void Function_425() //Position: 0x13BA9 / 80809
{
	if (!SQUAD_IS_VALID(Local_13.f_1184))
	{
		Function_326();
		SQUAD_LEAVE((*&Local_13 + 1156)[02]);
		SET_ALLOW_RIDE_BY_PLAYER((*&Local_13 + 1156)[02], 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_13 + 1156)[02], 0);
		SET_CRIPPLE_ENABLE((*&Local_13 + 1156)[02], 0);
		SET_ACTOR_CAN_BE_TARGETED((*&Local_13 + 1156)[02], false);
		Function_426(Local_13.f_1184);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_13.f_1184, false, 1, 4294967295);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		Function_363(&(Local_962[417]), (*&Local_13 + 1156)[02], "Gunslinger_horse", 0, 0x5f5e100, 1);
	}
	return;
}

void Function_426(bool bParam0) //Position: 0x13C40 / 80960
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

bool Function_427() //Position: 0x13C72 / 81010
{
	if (iLocal_1053 == 0)
	{
		if (!IS_ACTOR_VALID(bLocal_829))
		{
			bLocal_829 = Function_327(8, 0, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_829, 0);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_829, false);
			Function_229(bLocal_829, (*&Local_13 + 2208)[3], 1, 1, 1);
			if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_829, 1))
			{
				SET_ANIM_SET_FOR_ACTOR(bLocal_829, "ngun03_hog", 0);
				if (HAS_ANIM_SET_LOADED("ngun03_hog"))
				{
					if (ACTOR_HAS_ANIM_SET(bLocal_829, "ngun03_hog"))
					{
						Function_428(&bLocal_782);
						iLocal_1053 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_1053 == 1)
	{
		if (IS_ACTOR_HOGTIED(bLocal_829))
		{
			if (Function_283(&bLocal_782) < 1.0f)
			{
				AUDIO_TURN_OFF_PAIN_VOCALS(bLocal_829);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_829, 0);
				DELETE_ACCESSORY("ANKLE_BIND", bLocal_829);
				DELETE_ACCESSORY("WRIST_BIND", bLocal_829);
				iLocal_1053 = 2;
				Function_306(&bLocal_829, &bLocal_727);
				ACTOR_POP_NEXT_GAIT(bLocal_829, 0, false);
				return 1;
			}
		}
		HOGTIE_ACTOR(bLocal_829);
		Function_232(&bLocal_782);
	}
	return 0;
}

void Function_428(var uParam0) //Position: 0x13D82 / 81282
{
	uParam0->f_4 = 0.0f;
	uParam0->f_8 = 0.0f;
	*uParam0 = 0;
	return;
}

bool Function_429() //Position: 0x13D96 / 81302
{
	Function_341(&Local_13 + 512, 615, 2, 0);
	Function_341(&Local_13 + 512, 394, 2, 0);
	Function_341(&Local_13 + 512, 395, 2, 0);
	Function_341(&Local_13 + 512, 396, 2, 0);
	Function_341(&Local_13 + 512, 379, 2, 0);
	Function_341(&Local_13 + 512, 381, 2, 0);
	Function_341(&Local_13 + 512, 388, 2, 0);
	Function_341(&Local_13 + 512, 380, 2, 0);
	Function_341(&Local_13 + 512, 382, 2, 0);
	Function_341(&Local_13 + 512, 389, 2, 0);
	Function_341(&Local_13 + 512, 393, 2, 0);
	Function_341(&Local_13 + 512, 386, 2, 0);
	Function_341(&Local_13 + 512, 383, 2, 0);
	Function_341(&Local_13 + 512, 387, 2, 0);
	if (Function_336(&Local_13 + 512))
	{
		return 1;
	}
	return 0;
}

void Function_430(bool bParam0) //Position: 0x13E6E / 81518
{
	if (!Function_285(bParam0))
	{
		Function_233(bParam0, 0.0f);
	}
	return;
}

bool Function_431(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x13E83 / 81539
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_434(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_435()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
	{
		if (!bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && *iParam1 == 0)
		{
			if (*iParam1 != 5)
			{
				*iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			*iParam1 = 0;
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
		switch (*iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					*iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam8, iParam9, iParam10, iParam11);
					*iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_432();
					CUTSCENE_MANAGER_RESUME_LOADING();
					*iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					*iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				*iParam1 = 0;
				break;
		}
	}
	else if ((!Function_434(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_435()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*iParam1 = 0;
	}
	else if (!Function_434(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_432() //Position: 0x14138 / 82232
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
			Function_433(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_433(char* cParam0, vector3 vParam1) //Position: 0x1418C / 82316
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

bool Function_434(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x142B4 / 82612
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_357(bParam0);
		if (VDIST(Function_357(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_435() //Position: 0x1433E / 82750
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_436(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1434D / 82765
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_443(Global_34573, bParam3, bParam2))
	{
		Function_238(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_443(Global_34573, bParam3, bParam1))
	{
		if (!Function_442(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_415(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_441(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_440(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_440(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_442(2))
	{
		Function_439(2);
		if (!Function_438())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_437();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_212(bParam3);
				Function_216(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_440(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_440(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_437() //Position: 0x144E1 / 83169
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

bool Function_438() //Position: 0x1450C / 83212
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

void Function_439(bool bParam0) //Position: 0x14550 / 83280
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

void Function_440(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x145B3 / 83379
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

void Function_441(bool bParam0) //Position: 0x14654 / 83540
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

bool Function_442(bool bParam0) //Position: 0x146B7 / 83639
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

bool Function_443(bool bParam0, bool bParam1, bool bParam2) //Position: 0x146FE / 83710
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

void Function_444() //Position: 0x1480F / 83983
{
	if (iLocal_706 < 5 && iLocal_706 > 105)
	{
		Function_471();
		if (iLocal_706 > 8)
		{
			Function_454();
		}
		Function_436(&bLocal_791, 60.0f, 130.0f, bLocal_727, "Gun03_obj_return", "Gun03_too_far", &bLocal_715, 0, 0, 0, 325, 1);
		if (!SQUAD_IS_VALID(Local_13.f_1184))
		{
			Function_425();
		}
	}
	switch (iLocal_706)
	{
		case 0x00000000:
			if (!IS_ACTOR_VALID(bLocal_829))
			{
				bLocal_829 = Function_327(8, 0, 1, 0, 0, 0, 0, 0, 0);
				Function_229(bLocal_829, (*&Local_13 + 2116)[13], 0, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_829, 0);
			}
			else if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_829, 1))
			{
				SET_ANIM_SET_FOR_ACTOR(bLocal_829, "ngun03_hog", 0);
				if (HAS_ANIM_SET_LOADED("ngun03_hog"))
				{
					if (ACTOR_HAS_ANIM_SET(bLocal_829, "ngun03_hog"))
					{
						if (IS_ACTOR_HOGTIED(bLocal_829))
						{
							AUDIO_TURN_OFF_PAIN_VOCALS(bLocal_829);
							AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_829, 0);
							SET_ACTOR_FACTION(bLocal_727, 20);
							SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
							DELETE_ACCESSORY("ANKLE_BIND", bLocal_829);
							DELETE_ACCESSORY("WRIST_BIND", bLocal_829);
							ACTOR_POP_NEXT_GAIT(bLocal_829, 0, false);
							TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
							Function_344(0);
							SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
							SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
							if (iLocal_730[2] == 0)
							{
								if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
								{
									HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
									HUD_FADE_OUT(0.0f, 1f, 1);
								}
								FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
								iLocal_729 = Global_30633[1];
								if (!Function_343(iLocal_729))
								{
									Function_342(&Local_698);
								}
								Function_229(Global_34573, (*&Local_13 + 2116)[19], 1, 1, 1);
								Function_229(bLocal_727, (*&Local_13 + 2116)[12], 1, 1, 1);
								Function_306(&bLocal_829, &bLocal_727);
								Function_232(&bLocal_782);
								iLocal_706 = 1;
							}
							else
							{
								Function_453();
								Function_306(&bLocal_829, &Local_13 + 1364[02]);
								Function_232(&bLocal_782);
								iLocal_706 = 2;
							}
						}
						else
						{
							HOGTIE_ACTOR(bLocal_829);
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_343(iLocal_729) || iLocal_729 != 4294967295)) && Function_452())
			{
				Function_232(&bLocal_782);
				iLocal_706 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_917 = Function_450(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_698, iLocal_705);
			Function_244(iLocal_705);
			Function_418(StackVal, StackVal, Function_244(iLocal_705), iLocal_705, Global_30633[1], Function_246(iLocal_705), 0);
			Function_449();
			Function_232(&bLocal_782);
			iLocal_706 = 6;
			break;
		
		case 0x00000006:
			if (iLocal_917)
			{
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
					CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
				}
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 2)
				{
					DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					ENABLE_CHILD_SECTOR("emt_caveDoor02x");
					CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
				}
				if (Function_287("$/cutscene/GUN03_CS05/GUN03_CS05", &Local_707, &Local_698, &iLocal_705, 59856, 59849, 85988, 56586, 56326, 85981, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
					iLocal_706 = 7;
				}
			}
			else
			{
				if (IS_OBJECT_VALID(bLocal_859))
				{
					DESTROY_OBJECT(bLocal_859);
				}
				if (IS_OBJECT_VALID(bLocal_858))
				{
					DESTROY_OBJECT(bLocal_858);
				}
				DISABLE_CHILD_SECTOR("emt_caveDoor01x");
				ENABLE_CHILD_SECTOR("emt_caveDoor02x");
				DECOR_SET_BOOL(bLocal_829, "bDisableCutFree", true);
				DELETE_ACCESSORY("ANKLE_BIND", bLocal_829);
				DELETE_ACCESSORY("WRIST_BIND", bLocal_829);
				Function_229(bLocal_727, (*&Local_13 + 2116)[12], 1, 1, 1);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
				STOP_FORCE_LOOK_AT_COORD(bLocal_727);
				TASK_CLEAR(bLocal_727);
				Function_231((*&Local_13 + 2384)[4]);
				vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2384)[4]) };
				bLocal_835 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(false, (*&Local_13 + 2384)[2], 2, 0, 1);
				TASK_FACE_COORD(false, &vLocal_819, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
				TASK_SEQUENCE_RELEASE(bLocal_835, 1);
				TASK_PRIORITY_SET(bLocal_727, true);
				ACTOR_POP_NEXT_GAIT(bLocal_727, 2, false);
				Function_215(5, 1, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_727, 0);
				SET_ACTOR_PROOF(bLocal_727, 4294967295);
				SET_CRIPPLE_ENABLE(bLocal_727, 0);
				SET_ACTOR_INVULNERABILITY(bLocal_727, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 1);
				MEMORY_ALLOW_SHOOTING(bLocal_727, false);
				ACTOR_START_FORCE_HOLSTER(bLocal_727, 1, 0);
				MEMORY_PREFER_WALKING(bLocal_727, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 1);
				iLocal_874 = 0;
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_829)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_829));
				}
				if (IS_OBJECT_VALID(bLocal_841))
				{
					Function_217(bLocal_841);
				}
				if (IS_BLIP_VALID(bLocal_848))
				{
					REMOVE_BLIP(bLocal_848);
				}
				Function_229(Global_34573, (*&Local_13 + 2116)[19], 1, 1, 1);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
				Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
				iLocal_706 = 7;
			}
			break;
		
		case 0x00000007:
			if (iLocal_917)
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_232(&bLocal_782);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				if (IS_BLIP_VALID(bLocal_848))
				{
					REMOVE_BLIP(bLocal_848);
				}
				bLocal_848 = ADD_BLIP_FOR_OBJECT((*&Local_13 + 2116)[20], 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(bLocal_848, 3);
				Function_291(1.0f);
				Function_446();
			}
			Function_232(&bLocal_782);
			iLocal_706 = 8;
			break;
		
		case 0x00000008:
			if (!iLocal_917)
			{
				if (Function_283(&bLocal_782) < 1.0f)
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_232(&bLocal_782);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					if (IS_BLIP_VALID(bLocal_848))
					{
						REMOVE_BLIP(bLocal_848);
					}
					bLocal_848 = ADD_BLIP_FOR_OBJECT((*&Local_13 + 2116)[20], 330, 0f, 2, 0);
					SET_BLIP_PRIORITY(bLocal_848, 3);
					Function_291(1.0f);
					Function_446();
					iLocal_917 = 1;
				}
			}
			if (Function_283(&bLocal_782) < 4.0f)
			{
				Function_415("Gun03_obj03f", 5.0f, 1, 2, 0, 0, 0);
				Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
				Function_232(&bLocal_782);
				iLocal_706 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_283(&bLocal_782) < 5.0f)
			{
				if (SQUAD_IS_VALID(Local_13.f_1152))
				{
					Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
					Function_232(&bLocal_782);
					iLocal_706 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (!Function_373(Local_13.f_1104, 0, 1, 1, 1, 0) && !Function_373(Local_13.f_1152, 0, 1, 1, 1, 0))
			{
				Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
				Function_232(&bLocal_782);
				iLocal_706 = 106;
			}
			else
			{
				Function_445();
			}
			break;
		
		case 0x0000006A:
			if (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1532)[19]))
			{
				if (IS_BLIP_VALID(bLocal_848))
				{
					REMOVE_BLIP(bLocal_848);
				}
				Function_429();
				MEMORY_PREFER_RIDING(bLocal_727, false);
				iLocal_730[3] = 1;
				Function_232(&bLocal_782);
				iLocal_705 = 4;
				iLocal_706 = 0;
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[19]))
			{
				if (IS_BLIP_VALID(bLocal_848))
				{
					REMOVE_BLIP(bLocal_848);
					HUD_CLEAR_OBJECTIVE();
					Function_415("Gun03_Obj015a", 0x40f00000, 1, 2, 0, 0, 0);
				}
			}
			break;
	}
	return;
}

void Function_445() //Position: 0x14EE7 / 85735
{
	if (iLocal_1058 == 0)
	{
		if (Function_373(Local_13.f_1104, 0, 1, 1, 1, 0))
		{
			if (Function_385(Global_34573, Local_13.f_1104, 1, 0, 0, 3212836864) || Function_383(Local_13.f_1104, Global_34573, 1, 0, 0))
			{
				Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
				iLocal_1058 = 1;
			}
		}
	}
	else if (iLocal_1058 == 1)
	{
		iLocal_1058 = 2;
	}
	else if (iLocal_1058 == 2)
	{
		if (Function_373(Local_13.f_1152, 0, 1, 1, 1, 0))
		{
			if (Function_385(Global_34573, Local_13.f_1152, 1, 0, 0, 3212836864) || Function_383(Local_13.f_1152, Global_34573, 1, 0, 0))
			{
				Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
				iLocal_1058 = 3;
			}
		}
	}
	return;
}

void Function_446() //Position: 0x14F94 / 85908
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SetOffLisa", "Gun03_SetOffLisa", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_447() //Position: 0x14FDD / 85981
{
	return 1;
}

int Function_448() //Position: 0x14FE4 / 85988
{
	return 1;
}

void Function_449() //Position: 0x14FEB / 85995
{
	Function_229(bLocal_829, (*&Local_13 + 2116)[13], 1, 1, 1);
	TASK_CLEAR(bLocal_829);
	TASK_STAND_STILL(bLocal_829, -1.0f, 0, 0);
	HOGTIE_ACTOR(bLocal_829);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_829, 0);
	AUDIO_TURN_OFF_PAIN_VOCALS(bLocal_829);
	DELETE_ACCESSORY("ANKLE_BIND", bLocal_829);
	DELETE_ACCESSORY("WRIST_BIND", bLocal_829);
	AUDIO_SET_PLAYER_MOOD(1, 0);
	Function_363(&(Local_962[017]), bLocal_727, "Gunslinger", 0, 0x5f5e100, 1);
	Function_363(&(Local_962[217]), bLocal_829, "Mexgirl", 0, 0x5f5e100, 1);
	return;
}

bool Function_450(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x1508F / 86159
{
	if (Function_451(&iParam0) == iParam7 || Function_423())
	{
		return 1;
	}
	return 0;
}

int Function_451(int iParam0) //Position: 0x150AE / 86190
{
	if (Function_296(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_452() //Position: 0x150C6 / 86214
{
	Function_341(&Local_13 + 424, 380, 2, 0);
	Function_341(&Local_13 + 424, 379, 2, 0);
	Function_341(&Local_13 + 424, 395, 2, 0);
	Function_341(&Local_13 + 424, 392, 2, 0);
	Function_341(&Local_13 + 424, 381, 2, 0);
	Function_341(&Local_13 + 424, 382, 2, 0);
	Function_341(&Local_13 + 424, 384, 2, 0);
	if (Function_336(&Local_13 + 424))
	{
		return 1;
	}
	return 0;
}

void Function_453() //Position: 0x1513C / 86332
{
	Local_13.f_1376 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "hogtiebuddygroup"));
	(*&Local_13 + 1364)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "hogtiebuddy", 384, -280,864f, 24,26138f, 3981,405f, 0.0f, 75.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1364)[02], Local_13.f_1376);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 1364)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1364)[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1364)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1364)[02], 19);
	return;
}

void Function_454() //Position: 0x151E0 / 86496
{
	if (Function_383(Local_13.f_1152, Global_34573, 1, 0, 0) || Function_383(Local_13.f_1104, Global_34573, 1, 0, 0))
	{
		Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
	}
	if (IS_VOLUME_VALID((*&Local_13 + 1740)[3]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1740)[3]))
		{
			iLocal_920 = 1;
		}
	}
	if (IS_VOLUME_VALID((*&Local_13 + 1532)[24]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[24]))
		{
			iLocal_921 = 1;
			DESTROY_VOLUME((*&Local_13 + 1532)[24]);
		}
	}
	if (iLocal_874 == 0)
	{
		iLocal_874 = 1;
	}
	else if (iLocal_874 == 1)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1740)[0]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1740)[0]))
		{
			Function_460();
			Function_232(&bLocal_788);
			Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
			iLocal_874 = 2;
		}
	}
	else if (iLocal_874 == 2)
	{
		if ((Function_283(&bLocal_788) < 6.0f && !Function_133()) && !iLocal_879[5])
		{
			Function_404();
			iLocal_879[5] = 1;
		}
		if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(bLocal_727, 4294967295) >= 0)
		{
			if (!IS_MOVER_FROZEN(bLocal_727))
			{
				SET_MOVER_FROZEN(bLocal_727, true);
			}
		}
		if (!Function_373(Local_13.f_1104, 0, 1, 1, 1, 0) && iLocal_920)
		{
			if (IS_MOVER_FROZEN(bLocal_727))
			{
				SET_MOVER_FROZEN(bLocal_727, false);
			}
			TASK_CLEAR(bLocal_727);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_727, Local_13.f_2596, 2, 0, 0, 1, false);
			Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
			Function_232(&bLocal_788);
			iLocal_874 = 3;
		}
	}
	else if (iLocal_874 == 3)
	{
		if ((IS_ACTOR_ALIVE((*&Local_13 + 1108)[02]) || IS_ACTOR_ALIVE((*&Local_13 + 1108)[22])) && (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1740)[3]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1740)[3])))
		{
			if (IS_ACTOR_ALIVE((*&Local_13 + 1108)[02]))
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE((*&Local_13 + 1108)[02], Global_34573, 2.0f, 2);
			}
			if (IS_ACTOR_ALIVE((*&Local_13 + 1108)[22]))
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE((*&Local_13 + 1108)[22], Global_34573, 2.0f, 2);
			}
			Function_231((*&Local_13 + 2384)[4]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2384)[4]) };
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(false, (*&Local_13 + 2384)[2], 2, 0, 1);
			TASK_FACE_COORD(false, &vLocal_819, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
			Function_232(&bLocal_788);
			iLocal_874 = 4;
		}
		else if ((!Function_456((*&Local_13 + 1108)[02], 0, 1, 1, 1, 0, 0, 0, 0) && !Function_456((*&Local_13 + 1108)[22], 0, 1, 1, 1, 0, 0, 0, 0)) && !iLocal_879[10])
		{
			Function_455();
			iLocal_879[10] = 1;
		}
		else if ((iLocal_921 && !Function_456((*&Local_13 + 1108)[02], 0, 1, 1, 1, 0, 0, 0, 0)) && !Function_456((*&Local_13 + 1108)[22], 0, 1, 1, 1, 0, 0, 0, 0))
		{
			if (IS_MOVER_FROZEN(bLocal_727))
			{
				SET_MOVER_FROZEN(bLocal_727, false);
			}
			TASK_CLEAR(bLocal_727);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_727, Local_13.f_2596, 2, 0, 0, 1, false);
			Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
			Function_232(&bLocal_788);
			iLocal_874 = 4;
		}
	}
	else if (iLocal_874 == 4)
	{
		if (!Function_373(Local_13.f_1152, 0, 1, 1, 1, 0))
		{
			if (IS_MOVER_FROZEN(bLocal_727))
			{
				SET_MOVER_FROZEN(bLocal_727, false);
			}
			TASK_CLEAR(bLocal_727);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_727, Local_13.f_2596, 2, 0, 0, 1, false);
			Function_232(&bLocal_788);
			Function_372();
			Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
			iLocal_874 = 5;
		}
		else if ((!Function_456((*&Local_13 + 1108)[02], 0, 1, 1, 1, 0, 0, 0, 0) && !Function_456((*&Local_13 + 1108)[22], 0, 1, 1, 1, 0, 0, 0, 0)) && !iLocal_879[10])
		{
			Function_455();
			iLocal_879[10] = 1;
		}
		else if (((!Function_456((*&Local_13 + 1108)[02], 0, 1, 1, 1, 0, 0, 0, 0) && !Function_456((*&Local_13 + 1108)[22], 0, 1, 1, 1, 0, 0, 0, 0)) && !iLocal_879[7]) && iLocal_921)
		{
			Function_231((*&Local_13 + 2384)[5]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2384)[5]) };
			if (IS_MOVER_FROZEN(bLocal_727))
			{
				SET_MOVER_FROZEN(bLocal_727, false);
			}
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(false, (*&Local_13 + 2384)[1], 2, 0, 1);
			TASK_FACE_COORD(false, &vLocal_819, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
			iLocal_879[7] = 1;
		}
		else
		{
			if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(bLocal_727, 4294967295) >= 0)
			{
				if (!IS_MOVER_FROZEN(bLocal_727))
				{
					SET_MOVER_FROZEN(bLocal_727, true);
					Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
				}
			}
			if (!iLocal_879[6])
			{
				if (IS_ACTOR_ALIVE((*&Local_13 + 1108)[02]))
				{
					if (IS_ACTOR_IN_VOLUME((*&Local_13 + 1108)[02], (*&Local_13 + 1740)[3]))
					{
						Function_402();
						iLocal_879[6] = 1;
					}
				}
				if (IS_ACTOR_ALIVE((*&Local_13 + 1108)[22]))
				{
					if (IS_ACTOR_IN_VOLUME((*&Local_13 + 1108)[22], (*&Local_13 + 1740)[3]))
					{
						Function_402();
						iLocal_879[6] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_874 == 5)
	{
		if (!Function_373(Local_13.f_1152, 0, 1, 1, 1, 0))
		{
			Function_324(&iLocal_1059, 11, 0, 4294967295, 4294967295);
			TASK_CLEAR(bLocal_727);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_727, Local_13.f_2596, 2, 0, 0, 1, false);
			Function_372();
			Function_232(&bLocal_788);
			iLocal_874 = 6;
		}
	}
	return;
}

void Function_455() //Position: 0x156FA / 87802
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_StealthKillB4Carlo", "Gun03_StealthKillB4Carlo", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_456(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x15753 / 87891
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_459(&bVar0, 1);
	}
	if (bParam2)
	{
		Function_459(&bVar0, 2);
	}
	if (bParam3)
	{
		Function_459(&bVar0, 4);
	}
	if (bParam4)
	{
		Function_459(&bVar0, 8);
	}
	if (bParam5)
	{
		Function_459(&bVar0, 1024);
	}
	if (bParam7)
	{
		Function_459(&bVar0, 16);
	}
	if (bParam8)
	{
		Function_459(&bVar0, 32);
	}
	if (bParam6)
	{
		Function_459(&bVar0, 1048576);
	}
	return Function_457(uParam0, bVar0);
}

int Function_457(bool bParam0, int iParam1) //Position: 0x157C2 / 88002
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_458(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_458(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_458(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_458(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_458(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_458(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_458(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_458(iParam1, 64))
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

bool Function_458(var uParam0, int iParam1) //Position: 0x1589B / 88219
{
	return (uParam0 && iParam1) == 0;
}

void Function_459(bool bParam0, bool bParam1) //Position: 0x158A8 / 88232
{
	Function_76(bParam0, bParam1);
	return;
}

void Function_460() //Position: 0x158B5 / 88245
{
	if (!SQUAD_IS_VALID(Local_13.f_1152))
	{
		Function_470();
		Function_408(&Local_13 + 1152, 1);
		Function_377(Local_13.f_1152, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_461(Local_13.f_1152);
	}
	return;
}

void Function_461(bool bParam0) //Position: 0x158F6 / 88310
{
	if (!IS_OBJECTSET_VALID(bLocal_844))
	{
		bLocal_844 = CREATE_OBJECTSET_IN_LAYOUT("s3_guardset", bLocal_697, 15, 1);
	}
	Function_469(bParam0, bLocal_844);
	Function_462(bParam0);
	Function_231((*&Local_13 + 2116)[6]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[6]) };
	Function_316((*&Local_13 + 2116)[6]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[6]) };
	bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
	bLocal_835 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2612, 4, 0, 0, 1, false);
	if (IS_COVER_LOCATION_VALID(bLocal_861))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_861, -1.0f, 6.0f);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, vLocal_822.y, 3212836864);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_13 + 1084)[02], bLocal_835);
	TASK_SEQUENCE_RELEASE(bLocal_835, 1);
	Function_231((*&Local_13 + 2116)[7]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[7]) };
	Function_316((*&Local_13 + 2116)[7]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[7]) };
	bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
	bLocal_835 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2612, 4, 0, 0, 1, false);
	if (IS_COVER_LOCATION_VALID(bLocal_861))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_861, -1.0f, 6.0f);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, vLocal_822.y, 3212836864);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_13 + 1084)[12], bLocal_835);
	TASK_SEQUENCE_RELEASE(bLocal_835, 1);
	Function_231((*&Local_13 + 2416)[4]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2416)[4]) };
	Function_316((*&Local_13 + 2416)[4]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2416)[4]) };
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 1108)[32], &vLocal_819, vLocal_822.y, 3212836864);
	Function_231((*&Local_13 + 2416)[1]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2416)[1]) };
	Function_316((*&Local_13 + 2416)[1]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2416)[1]) };
	bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 180.0f, 4);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 1108)[12], bLocal_861, -1.0f, 6.0f);
	Function_231((*&Local_13 + 2416)[2]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2416)[2]) };
	Function_316((*&Local_13 + 2416)[2]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2416)[2]) };
	bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 180.0f, 4);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 1108)[42], bLocal_861, -1.0f, 6.0f);
	return;
}

void Function_462(bool bParam0) //Position: 0x15AFE / 88830
{
	SQUAD_GOALS_CLEAR(bParam0);
	Function_426(bParam0);
	SQUAD_SET_FACTION(bParam0, 19);
	Function_468(bParam0, Global_34573, 1);
	Function_468(bParam0, bLocal_727, 1);
	Function_467(bParam0, 0);
	Function_466(bParam0, 1);
	Function_465(bParam0, 41, 1.0f);
	Function_465(bParam0, 40, 1.0f);
	Function_464(bLocal_727, bParam0, 1);
	Function_463(bParam0, 0);
	Function_377(bParam0, 322, 322, 0.0f, 20.0f, 0x3f800000, 2048, 0);
	SQUAD_GOAL_ADD_COMBAT(bParam0, 0, 4294967295, 0);
	return;
}

void Function_463(bool bParam0, int iParam1) //Position: 0x15B75 / 88949
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

void Function_464(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15BAC / 89004
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

void Function_465(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15C01 / 89089
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

void Function_466(bool bParam0, bool bParam1) //Position: 0x15C4D / 89165
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_467(bool bParam0, bool bParam1) //Position: 0x15C88 / 89224
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

void Function_468(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15CC9 / 89289
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

int Function_469(bool bParam0, bool bParam1) //Position: 0x15D28 / 89384
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_OBJECTSET_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar1, bParam1);
		}
		bVar0++;
	}
	return 1;
}

void Function_470() //Position: 0x15D79 / 89465
{
	Local_13.f_1152 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S3_ExitCaves_Wv02"));
	(*&Local_13 + 1108)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "EC_wv02_H01", 395, -328,0974f, 19,32866f, 3964,211f, 0.0f, 191,0333f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1108)[02], Local_13.f_1152);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 1108)[02]);
	TASK_STAND_STILL((*&Local_13 + 1108)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1108)[02], 19);
	(*&Local_13 + 1108)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "ec_wv02_M02", 392, -325,3642f, 19,09998f, 3954,983f, 0.0f, 89,54765f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1108)[12], Local_13.f_1152);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 1108)[12]);
	TASK_STAND_STILL((*&Local_13 + 1108)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1108)[12], 19);
	(*&Local_13 + 1108)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "ec_wv02_E03", 381, -329,2181f, 19,38497f, 3966,354f, 0.0f, 207,5771f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1108)[22], Local_13.f_1152);
	TASK_STAND_STILL((*&Local_13 + 1108)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1108)[22], 19);
	(*&Local_13 + 1108)[32] = CREATE_ACTOR_IN_LAYOUT(Local_13, "ec_wv02_E04", 382, -333,2782f, 19,25056f, 3953,345f, 0.0f, 198,3233f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1108)[32], Local_13.f_1152);
	TASK_STAND_STILL((*&Local_13 + 1108)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1108)[32], 19);
	(*&Local_13 + 1108)[42] = CREATE_ACTOR_IN_LAYOUT(Local_13, "ec_wv02_E05", 382, -336,8761f, 19,01925f, 3946,203f, 0.0f, 198,3233f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1108)[42], Local_13.f_1152);
	TASK_STAND_STILL((*&Local_13 + 1108)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1108)[42], 19);
	return;
}

void Function_471() //Position: 0x15F91 / 90001
{
	if (!Function_285(&bLocal_810))
	{
		Function_430(&bLocal_810);
	}
	else if (Function_283(&bLocal_810) < 4.0f)
	{
		if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[23]))
		{
			Function_472((*&Local_13 + 1532)[23]);
		}
		Function_232(&bLocal_810);
	}
	return;
}

void Function_472(bool bParam0) //Position: 0x15FDA / 90074
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", Global_6288, 4294967295, 0);
		if (IS_OBJECTSET_VALID(bVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(bParam0, bVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(bVar1) - 1))
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bVar1);
				if (IS_OBJECT_VALID(bVar2))
				{
					bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (bVar3 != GET_PLAYER_ACTOR(0))
						{
							DESTROY_ACTOR(bVar3);
						}
					}
				}
				bVar0++;
			}
			DESTROY_OBJECTSET(bVar1);
		}
	}
	return;
}

void Function_473() //Position: 0x16077 / 90231
{
	int iVar0;
	var uVar3;
	
	if (iLocal_706 < 3 && iLocal_706 > 105)
	{
		Function_471();
		Function_436(&bLocal_791, 60.0f, 130.0f, bLocal_727, "Gun03_obj_return", "Gun03_too_far", &bLocal_715, 0, 0, 0, 325, 1);
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[20]) || IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1532)[20]))
		{
			iLocal_896 = 1;
		}
		if (iLocal_896 && !iLocal_895)
		{
			if (IS_ACTOR_VALID((*&Local_13 + 860)[12]))
			{
				Function_550();
				iLocal_895 = 1;
			}
		}
		if (iLocal_706 >= 7)
		{
			Function_545();
			Function_520();
		}
		if (iLocal_706 <= 12)
		{
			Function_514();
			Function_513();
		}
		if (iLocal_706 >= 14)
		{
			Function_231((*&Local_13 + 1992)[28]);
			Function_431(StackVal, StackVal, "$/cutscene/GUN03_CS05/GUN03_CS05", &iLocal_726, Function_231((*&Local_13 + 1992)[28]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
			Function_512();
		}
		if (iLocal_706 >= 15)
		{
			Function_510();
		}
	}
	switch (iLocal_706)
	{
		case 0x00000000:
			Function_344(0);
			iLocal_874 = 0;
			SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
			ACTOR_HOLSTER_WEAPON(Global_34573, 1);
			TASK_DRAW_HOLSTER_WEAPON(Global_34573, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			SET_ACTOR_FACTION(bLocal_727, 20);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
			if (iLocal_730[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_729 = Global_30633[1];
				if (!Function_343(iLocal_729))
				{
					Function_342(&Local_698);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_229(Global_34573, (*&Local_13 + 1992)[10], 1, 1, 1);
				Function_229(bLocal_727, (*&Local_13 + 1992)[11], 1, 1, 1);
				Function_231((*&Local_13 + 1900)[16]);
				vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 1900)[16]) };
				bLocal_830 = LOCATE_ACTOR_OF_TYPE(vLocal_819, 20.0f, 23, 4294967295);
				if (IS_ACTOR_VALID(bLocal_830))
				{
					DESTROY_ACTOR(bLocal_830);
				}
				bLocal_830 = LOCATE_ACTOR_OF_TYPE(vLocal_819, 20.0f, 23, 4294967295);
				if (IS_ACTOR_VALID(bLocal_830))
				{
					DESTROY_ACTOR(bLocal_830);
				}
				Function_232(&bLocal_782);
				iLocal_706 = 1;
			}
			else
			{
				Function_232(&bLocal_782);
				iLocal_706 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_343(iLocal_729) || iLocal_729 != 4294967295)) && Function_509())
			{
				Function_231((*&Local_13 + 1900)[16]);
				if (Function_501(StackVal, StackVal, Function_231((*&Local_13 + 1900)[16])))
				{
					Function_497();
					Function_496();
					Function_232(&bLocal_782);
					iLocal_706 = 2;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_917 = Function_450(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_698, iLocal_705);
			Function_244(iLocal_705);
			Function_418(StackVal, StackVal, Function_244(iLocal_705), iLocal_705, Global_30633[1], Function_246(iLocal_705), 0);
			Function_495((*&Local_13 + 804)[02], &iVar0);
			uVar3 = Function_494((*&Local_13 + 804)[02]);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			SET_ANIM_SET_FOR_ACTOR((*&Local_13 + 804)[02], "talking_stand", 1);
			TASK_CLEAR(false);
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_ACTION_PERFORM_AT_POSITION(0, "talking_stand/Talk_A", &iVar0, uVar3, -1.0f, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*&Local_13 + 804)[02], bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			Function_495((*&Local_13 + 804)[12], &iVar0);
			uVar3 = Function_494((*&Local_13 + 804)[12]);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			SET_ANIM_SET_FOR_ACTOR((*&Local_13 + 804)[12], "talking_stand", 1);
			TASK_CLEAR(false);
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_ACTION_PERFORM_AT_POSITION(0, "talking_stand/Listen_B", &iVar0, uVar3, -1.0f, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*&Local_13 + 804)[12], bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			Function_493(Local_13.f_824, 0);
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
			MEMORY_PREFER_WALKING(bLocal_727, true);
			SET_ACTOR_FACTION(bLocal_727, 20);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
			Function_324(&iLocal_1059, 0, 0, 4294967295, 4294967295);
			if (iLocal_917)
			{
				Function_232(&bLocal_782);
				iLocal_706 = 3;
			}
			else
			{
				if (Function_343(Global_30633[1]))
				{
					OPEN_DOOR_DIRECTION(Function_308("elmatadero", "slaughterhouse", 1), true);
					OPEN_DOOR_DIRECTION(Function_308("elmatadero", "slaughterhouse", 2), false);
				}
				SET_ACTOR_SPEED(Global_34573, 0.0f);
				Function_229(Global_34573, (*&Local_13 + 1992)[4], 1, 1, 1);
				Function_229(bLocal_727, (*&Local_13 + 1992)[21], 1, 1, 1);
				Function_229(bLocal_828, (*&Local_13 + 1992)[5], 1, 1, 1);
				TASK_CLEAR(bLocal_828);
				bLocal_835 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2604, 1, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_828, bLocal_835);
				TASK_SEQUENCE_RELEASE(bLocal_835, 1);
				TASK_PRIORITY_SET(bLocal_828, true);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_828, true);
				TASK_CLEAR(bLocal_727);
				bLocal_835 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2584, 1, 0, 0, 1, false);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
				TASK_SEQUENCE_RELEASE(bLocal_835, 1);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
				Function_232(&bLocal_782);
				iLocal_706 = 6;
			}
			break;
		
		case 0x00000003:
			if (Function_287("$/cutscene/GUN03_CS04/GUN03_CS04", &Local_707, &Local_698, &iLocal_705, 59856, 96406, 85988, 56586, 56326, 85981, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_232(&bLocal_782);
				iLocal_706 = 6;
			}
			break;
		
		case 0x00000006:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ADD_COMPANION_PERMANENT();
			if (HUD_IS_SHOWING_SMALL_TEXT())
			{
				HUD_CLEAR_SMALL_TEXT();
				HUD_CLEAR_SMALL_TEXT_QUEUE();
			}
			Function_324(&iLocal_1059, 6, 0, 4294967295, 4294967295);
			MEMORY_ALLOW_SHOOTING(bLocal_727, false);
			SET_ANIM_SET_FOR_ACTOR(bLocal_828, "talking_stand", 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_828, true);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_828, false);
			ACTOR_START_FORCE_HOLSTER(bLocal_727, 0, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_727, true);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_727, 0);
			Function_215(5, 1, 1);
			Function_379(Local_13.f_824, bLocal_828, 2);
			Function_379(Local_13.f_824, Global_34573, 2);
			Function_379(Local_13.f_824, bLocal_727, 2);
			Function_491(bLocal_828, Local_13.f_824, 2);
			Function_491(bLocal_727, Local_13.f_824, 2);
			SET_ACTOR_FACTION(bLocal_727, 20);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
			Function_232(&bLocal_782);
			iLocal_706 = 7;
			break;
		
		case 0x00000007:
			if (Function_283(&bLocal_782) < 0,2f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				else
				{
					Function_232(&bLocal_782);
					iLocal_706 = 8;
					Function_490();
				}
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_283(&bLocal_782) <= 5.0f)
			{
				Function_489();
				iLocal_875 = 4294967295;
				iLocal_874 = 0;
				Function_232(&bLocal_782);
				Function_232(&bLocal_788);
				Function_232(&bLocal_791);
				iLocal_706 = 9;
			}
			break;
		
		case 0x00000009:
			if (!iLocal_898[0])
			{
				if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_283(&bLocal_782) <= 1.0f) || Function_283(&bLocal_782) <= 5.0f)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
					Function_415("Gun03_obj02b", 0x40f00000, 1, 2, 0, 0, 0);
					iLocal_898[0] = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1456)[1]))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_232(&bLocal_813);
				Function_415("Gun03_obj02c", 7,5f, 1, 2, 0, 0, 0);
				Function_194(256);
				Function_231((*&Local_13 + 1992)[26]);
				Function_316((*&Local_13 + 1992)[26]);
				bLocal_841 = Function_488(StackVal, StackVal, StackVal, StackVal, bLocal_697, Function_53(), Function_231((*&Local_13 + 1992)[26]), Function_316((*&Local_13 + 1992)[26]), Global_34573, 3.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_232(&bLocal_791);
				iLocal_706 = 10;
			}
			break;
		
		case 0x0000000A:
			if (GATEWAY_UPDATE(bLocal_841))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_324(&iLocal_1059, 8, 0, 4294967295, 4294967295);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, 2);
				Function_217(bLocal_841);
				Function_232(&bLocal_791);
				iLocal_706 = 11;
			}
			break;
		
		case 0x0000000B:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_828, "stand_ambient/one_hnd") || iLocal_875 != 3)
			{
				MEMORY_ALLOW_SHOOTING(bLocal_727, true);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_828, true);
				SET_ACTOR_FACTION(bLocal_727, 20);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
				Function_232(&bLocal_791);
				iLocal_706 = 12;
			}
			break;
		
		case 0x0000000C:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_283(&bLocal_791) < 8.0f) || Function_283(&bLocal_791) < 12.0f)
			{
				if (bLocal_878)
				{
					Function_324(&iLocal_1059, 34, 0, 4294967295, 4294967295);
				}
				else
				{
					Function_324(&iLocal_1059, 11, 0, 4294967295, 4294967295);
					Function_487();
				}
				SET_AUTO_CONVERSATION_LOOK(bLocal_727, 0);
				AUDIO_ENABLE_PLAYER_TAUNTS();
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_828, true);
				MEMORY_ALLOW_SHOOTING(bLocal_727, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 0);
				GIVE_WEAPON_TO_ACTOR(bLocal_727, 39, 1.0f, 0, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_727, 39, 1);
				SET_ACTOR_FACTION(bLocal_727, 20);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
				Function_232(&bLocal_791);
				iLocal_706 = 13;
			}
			break;
		
		case 0x0000000D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_283(&bLocal_791) < 7.0f)
			{
				Function_232(&bLocal_782);
				iLocal_706 = 14;
			}
			break;
		
		case 0x0000000E:
			if (!Function_373(Local_13.f_1032, 0, 1, 1, 1, 0) && iLocal_874 != 11)
			{
				Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
				Function_486();
				MEMORY_ALLOW_SHOOTING(bLocal_727, false);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 1);
				if (IS_BLIP_VALID(bLocal_848))
				{
					REMOVE_BLIP(bLocal_848);
				}
				Function_232(&bLocal_782);
				iLocal_706 = 15;
			}
			break;
		
		case 0x0000000F:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !Function_133()) || Function_283(&bLocal_782) < 7.0f)
			{
				Function_415("Gun03_obj03c", 7,5f, 1, 2, 0, 0, 0);
				Function_484(Local_13.f_936);
				Function_484(Local_13.f_960);
				Function_484(Local_13.f_984);
				Function_484(Local_13.f_1008);
				iLocal_1058 = 0;
				Function_482();
				Function_324(&iLocal_1059, 35, 0, 4294967295, 4294967295);
				Function_232(&bLocal_782);
				iLocal_706 = 16;
			}
			break;
		
		case 0x00000010:
			if (DECOR_GET_BOOL(bLocal_727, "rigtaskseq02") && GET_TASK_STATUS(bLocal_727, 0) != 0)
			{
				TASK_CLEAR(bLocal_727);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 0);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
				ACTOR_END_FORCE_HOLSTER(bLocal_727);
				MEMORY_ALLOW_SHOOTING(bLocal_727, true);
				Function_231((*&Local_13 + 2116)[17]);
				vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[17]) };
				Function_316((*&Local_13 + 2116)[17]);
				vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[17]) };
				bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
				bLocal_835 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_861, -1.0f, 3.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
				TASK_SEQUENCE_RELEASE(bLocal_835, 1);
				TASK_PRIORITY_SET(bLocal_727, false);
				SET_ACTOR_FACTION(bLocal_727, 20);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
				DECOR_REMOVE(bLocal_727, "rigtaskseq02");
			}
			if (!Function_373(Local_13.f_1056, 0, 1, 1, 1, 0))
			{
				Function_324(&iLocal_1059, 35, 0, 4294967295, 4294967295);
				Function_480();
				Function_232(&bLocal_782);
				iLocal_706 = 17;
			}
			break;
		
		case 0x00000011:
			if (DECOR_GET_BOOL(bLocal_727, "rigtaskseq02") && GET_TASK_STATUS(bLocal_727, 0) != 0)
			{
				TASK_CLEAR(bLocal_727);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 1);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
				ACTOR_END_FORCE_HOLSTER(bLocal_727);
				MEMORY_ALLOW_SHOOTING(bLocal_727, true);
				Function_231((*&Local_13 + 2116)[17]);
				vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[17]) };
				Function_316((*&Local_13 + 2116)[17]);
				vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[17]) };
				bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
				bLocal_835 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_861, -1.0f, 3.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
				TASK_SEQUENCE_RELEASE(bLocal_835, 1);
				TASK_PRIORITY_SET(bLocal_727, false);
				SET_ACTOR_FACTION(bLocal_727, 20);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
				DECOR_REMOVE(bLocal_727, "rigtaskseq02");
			}
			if ((((((Function_479(Local_13.f_936, 1, 1, 1, 1, 0) >= 0 && Function_479(Local_13.f_960, 1, 1, 1, 1, 0) >= 0) && Function_479(Local_13.f_984, 1, 1, 1, 1, 0) >= 0) && Function_479(Local_13.f_1008, 1, 1, 1, 1, 0) >= 0) && Function_479(Local_13.f_1032, 1, 1, 1, 1, 0) >= 0) && Function_479(Local_13.f_1056, 1, 1, 1, 1, 0) >= 0) && Function_479(Local_13.f_1080, 1, 1, 1, 1, 0) >= 0)
			{
				if (Function_283(&bLocal_782) < 3.0f)
				{
					Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
					Function_478();
					SET_ACTOR_FACTION(bLocal_727, 20);
					SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
					Function_231((*&Local_13 + 2116)[4]);
					Function_316((*&Local_13 + 2116)[4]);
					bLocal_841 = Function_488(StackVal, StackVal, StackVal, StackVal, bLocal_697, Function_53(), Function_231((*&Local_13 + 2116)[4]), Function_316((*&Local_13 + 2116)[4]), Global_34573, 3.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					Function_215(5, 0, 1);
					Function_232(&bLocal_782);
					Function_232(&bLocal_788);
					Function_232(&bLocal_791);
					iLocal_706 = 18;
				}
			}
			else
			{
				Function_232(&bLocal_782);
			}
			break;
		
		case 0x00000012:
			if (Function_474(bLocal_841, 0, 1, 0, 0, 0))
			{
				Function_324(&iLocal_1059, 7, 0, 4294967295, 4294967295);
				Function_452();
				Function_232(&bLocal_782);
				iLocal_730[2] = 1;
				Function_222();
				iLocal_705 = 3;
				iLocal_706 = 0;
				DESTROY_OBJECT(bLocal_841);
			}
			if ((!Function_133() && !DECOR_CHECK_EXIST(bLocal_697, "obj03d")) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_415("Gun03_obj03d", 7,5f, 1, 2, 0, 0, 0);
				DECOR_SET_BOOL(bLocal_697, "obj03d", true);
			}
			break;
	}
	return;
}

bool Function_474(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16D98 / 93592
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_477(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_476(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_476(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_475(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_475(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_475(int iParam0, int iParam1) //Position: 0x16FAA / 94122
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_73(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_73(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_476(bool bParam0, bool bParam1) //Position: 0x17015 / 94229
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_477(bool bParam0, bool bParam1) //Position: 0x17034 / 94260
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
	else if (!bParam1 || Function_476(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_478() //Position: 0x17091 / 94353
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_StandBack", "Gun03_StandBack", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_479(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x170D8 / 94424
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

void Function_480() //Position: 0x17192 / 94610
{
	Function_481();
	Function_408(&Local_13 + 1080, 1);
	Function_462(Local_13.f_1080);
	Function_231((*&Local_13 + 2116)[15]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[15]) };
	Function_316((*&Local_13 + 2116)[15]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[15]) };
	bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
	bLocal_835 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2612, 4, 0, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, vLocal_822.y, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_13 + 1060)[02], bLocal_835);
	TASK_SEQUENCE_RELEASE(bLocal_835, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_13 + 1060)[02], false);
	Function_231((*&Local_13 + 2116)[16]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[16]) };
	Function_316((*&Local_13 + 2116)[16]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[16]) };
	bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
	bLocal_835 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2612, 4, 0, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, vLocal_822.y, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_13 + 1060)[12], bLocal_835);
	TASK_SEQUENCE_RELEASE(bLocal_835, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_13 + 1060)[12], false);
	return;
}

void Function_481() //Position: 0x172AC / 94892
{
	Local_13.f_1080 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_CaveRushers_Wv02"));
	(*&Local_13 + 1060)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CR_wv02_H01", 394, -329,3142f, 19,27778f, 3966,351f, 0.0f, 191,0333f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1060)[02], Local_13.f_1080);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 1060)[02]);
	SET_ACTOR_FACTION((*&Local_13 + 1060)[02], 19);
	(*&Local_13 + 1060)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CR_wv02_E01", 379, -329,9125f, 19,39374f, 3962,487f, 0.0f, 189,5325f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1060)[12], Local_13.f_1080);
	SET_ACTOR_FACTION((*&Local_13 + 1060)[12], 19);
	return;
}

void Function_482() //Position: 0x17382 / 95106
{
	Function_483();
	Function_408(&Local_13 + 1056, 1);
	Function_462(Local_13.f_1056);
	Function_231((*&Local_13 + 2116)[6]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[6]) };
	Function_316((*&Local_13 + 2116)[6]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[6]) };
	bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
	bLocal_835 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2612, 4, 0, 0, 1, false);
	if (IS_COVER_LOCATION_VALID(bLocal_861))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_861, -1.0f, 3.0f);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, vLocal_822.y, 3212836864);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_13 + 1036)[02], bLocal_835);
	TASK_SEQUENCE_RELEASE(bLocal_835, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_13 + 1036)[02], false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_13 + 1036)[02], 8, 1.0f);
	Function_231((*&Local_13 + 2116)[7]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[7]) };
	Function_316((*&Local_13 + 2116)[7]);
	vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[7]) };
	bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
	bLocal_835 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2612, 4, 0, 0, 1, false);
	if (IS_COVER_LOCATION_VALID(bLocal_861))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_861, -1.0f, 3.0f);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, vLocal_822.y, 3212836864);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_13 + 1036)[12], bLocal_835);
	TASK_SEQUENCE_RELEASE(bLocal_835, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_13 + 1036)[12], false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_13 + 1036)[12], 8, 1.0f);
	return;
}

void Function_483() //Position: 0x174DE / 95454
{
	Local_13.f_1056 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_CaveRushers_Wv01"));
	(*&Local_13 + 1036)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CR_wv01_E02", 380, -329,3142f, 19,27778f, 3966,351f, 0.0f, 191,0333f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1036)[02], Local_13.f_1056);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 1036)[02]);
	SET_ACTOR_FACTION((*&Local_13 + 1036)[02], 19);
	(*&Local_13 + 1036)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CR_wv01_M02", 392, -329,9125f, 19,39374f, 3962,487f, 0.0f, 189,5325f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1036)[12], Local_13.f_1056);
	SET_ACTOR_FACTION((*&Local_13 + 1036)[12], 19);
	return;
}

void Function_484(bool bParam0) //Position: 0x175B4 / 95668
{
	if (SQUAD_IS_VALID(bParam0))
	{
		if (Function_485(bParam0) >= 0)
		{
			SQUAD_GOALS_CLEAR(bParam0);
			Function_426(bParam0);
			Function_468(bParam0, Global_34573, 1);
			Function_468(bParam0, bLocal_727, 1);
			SQUAD_GOAL_ADD_COMBAT(bParam0, 0, 4294967295, 0);
		}
	}
	return;
}

int Function_485(bool bParam0) //Position: 0x175F0 / 95728
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

void Function_486() //Position: 0x17640 / 95808
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ReachLuisaCell", "Gun03_ReachLuisaCell", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487() //Position: 0x17691 / 95889
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SetOffCaves", "Gun03_SetOffCaves", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_488(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x176DC / 95964
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_489() //Position: 0x177A7 / 96167
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SetOffSlaughter", "Gun03_SetOffSlaughter", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_490() //Position: 0x177FA / 96250
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Gun03_CarlosWalksOut", "Gun03_CarlosWalksOut", false, 1, 1, 0, 1);
		Function_351(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1784C / 96332
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

int Function_492() //Position: 0x17896 / 96406
{
	if (iLocal_705 == 0)
	{
		DISABLE_CHILD_SECTOR("chu_corral01props01x");
		DISABLE_CHILD_SECTOR("chu_trainstation01Props01x");
	}
	else
	{
		DISABLE_CHILD_SECTOR("emt_barn01props01x");
		DISABLE_CHILD_SECTOR("emt_barn01x");
		DISABLE_CHILD_SECTOR("emt_residence01props01x");
		DISABLE_CHILD_SECTOR("emt_residence01x");
		DISABLE_CHILD_SECTOR("emt_shack01props01x");
		DISABLE_CHILD_SECTOR("emt_shack01x");
	}
	return 1;
}

void Function_493(bool bParam0, bool bParam1) //Position: 0x17968 / 96616
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

var Function_494(bool bParam0) //Position: 0x179B0 / 96688
{
	return GET_HEADING(bParam0);
}

void Function_495(bool bParam0, int iParam1) //Position: 0x179BB / 96699
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_496() //Position: 0x179C8 / 96712
{
	Local_13.f_1360 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "nS2_Horses"));
	(*&Local_13 + 1348)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "S2_CompanionHorse", 976, -414,4468f, 23,76431f, 3918,616f, 0.0f, -25,4743f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1348)[02], Local_13.f_1360);
	ACCESSORIZE_HORSE((*&Local_13 + 1348)[02], 3);
	return;
}

void Function_497() //Position: 0x17A3E / 96830
{
	if (!IS_ACTOR_VALID(bLocal_828))
	{
		Function_499();
	}
	if (!SQUAD_IS_VALID(Local_13.f_824))
	{
		Function_498();
		bLocal_876 = false;
		while (bLocal_876 <= SQUAD_GET_SIZE(Local_13.f_824))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(SQUAD_GET_ACTOR_BY_INDEX(Local_13.f_824, bLocal_876), true);
			bLocal_876++;
		}
		TASK_STAND_STILL((*&Local_13 + 804)[02], -1.0f, 0, 0);
		TASK_STAND_STILL((*&Local_13 + 804)[12], -1.0f, 0, 0);
		SQUAD_SET_FACTION(Local_13.f_824, 19);
		SET_ACTOR_HEARING_MAX_RANGE((*&Local_13 + 804)[02], 30.0f);
		SET_ACTOR_VISION_MAX_RANGE((*&Local_13 + 804)[02], 30.0f, 1);
		SET_ACTOR_HEARING_MAX_RANGE((*&Local_13 + 804)[12], 30.0f);
		SET_ACTOR_VISION_MAX_RANGE((*&Local_13 + 804)[12], 30.0f, 1);
	}
	bLocal_860 = Function_309(Global_30707[0], "elMatadero", "caveInterior01", 3);
	if (IS_DOOR_VALID(bLocal_860))
	{
		SHOW_PHYSINST(bLocal_860);
		CLOSE_DOOR_FAST(bLocal_860);
		Function_120(bLocal_860, 0);
	}
	else
	{
		LOG_ERROR("door was NOT valid");
	}
	return;
}

void Function_498() //Position: 0x17B5A / 97114
{
	Local_13.f_824 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S3_CaveGuardsEntrance"));
	(*&Local_13 + 804)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CaveGuardEntrance01", 380, -360,8039f, 17,66677f, 3943,41f, 0.0f, 88,34389f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 804)[02], Local_13.f_824);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_13 + 804)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 804)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 804)[02], 42, 0,5f, 1, 1);
	(*&Local_13 + 804)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CaveGuardEntrance02", 379, -360,9928f, 17,83106f, 3947,257f, 0.0f, 100,6623f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 804)[12], Local_13.f_824);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_13 + 804)[12], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 804)[12], 42, 0,5f, 1, 1);
	return;
}

void Function_499() //Position: 0x17C68 / 97384
{
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1456)[0]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1456)[0]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1456)[14]);
	Function_500();
	bLocal_828 = (*&Local_13 + 788)[02];
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_828, 8, "FASTWALK");
	Function_363(&(Local_962[317]), bLocal_828, "Carlos", 0, 0x5f5e100, 1);
	Function_363(&(Local_962[017]), bLocal_727, "Gunslinger", 0, 0x5f5e100, 1);
	TASK_STAND_STILL((*&Local_13 + 788)[02], -1.0f, 1, 0);
	return;
}

void Function_500() //Position: 0x17CFD / 97533
{
	Local_13.f_800 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_InsideManGroup"));
	(*&Local_13 + 788)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nInsideMan", 615, -398,0501f, 24,16975f, 3894,677f, 0.0f, 148,3281f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 788)[02], Local_13.f_800);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_13 + 788)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 788)[02]);
	SET_ACTOR_FACTION((*&Local_13 + 788)[02], 20);
	return;
}

bool Function_501(vector3 vParam0) //Position: 0x17D8A / 97674
{
	if (!iLocal_911)
	{
		if (GET_MOUNT(Global_34573) != bLocal_728)
		{
			if (IS_ACTOR_VALID(bLocal_728))
			{
				DESTROY_ACTOR(bLocal_728);
			}
		}
		iLocal_911 = 1;
	}
	if (!IS_ACTOR_VALID(bLocal_728))
	{
		bLocal_728 = Function_502(1, 1, vParam0.x, vParam0.y, vParam0.z, 0, 1, 0);
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_728, 1))
	{
		SET_ACTOR_UPDATE_PRIORITY(bLocal_728, false);
		return 0;
	}
	return 1;
}

bool Function_502(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x17DEF / 97775
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
	if (Global_3381 || Function_237(1))
	{
		Function_508(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_507())
		{
			return "";
		}
	}
	if (!Function_505())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && iParam6) && uParam0)
	{
		Function_231(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_231(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_231(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_231(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_504(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_504(StackVal, StackVal, vVar5, 0, 1, 1);
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

void Function_503(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x18148 / 98632
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

var Function_504(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x18185 / 98693
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

bool Function_505() //Position: 0x18220 / 98848
{
	if (Function_506() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_506() //Position: 0x18236 / 98870
{
	return Global_12976.f_152;
}

bool Function_507() //Position: 0x18241 / 98881
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_508(var uParam0, bool bParam1, bool bParam2) //Position: 0x18261 / 98913
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

int Function_509() //Position: 0x1828E / 98958
{
	Function_341(&Local_13 + 264, 976, 2, 0);
	Function_341(&Local_13 + 264, 615, 2, 0);
	Function_341(&Local_13 + 264, 380, 2, 0);
	Function_341(&Local_13 + 264, 379, 2, 0);
	Function_341(&Local_13 + 264, 391, 2, 0);
	Function_341(&Local_13 + 264, 392, 2, 0);
	Function_341(&Local_13 + 264, 384, 2, 0);
	Function_341(&Local_13 + 264, 396, 2, 0);
	Function_341(&Local_13 + 264, 385, 2, 0);
	Function_341(&Local_13 + 264, 386, 2, 0);
	Function_341(&Local_13 + 264, 381, 2, 0);
	Function_341(&Local_13 + 264, 390, 2, 0);
	Function_341(&Local_13 + 264, 394, 2, 0);
	if (Function_336(&Local_13 + 264))
	{
		return 1;
	}
	return 0;
}

void Function_510() //Position: 0x18358 / 99160
{
	if (iLocal_1058 == 0)
	{
		if (Function_373(Local_13.f_1056, 0, 1, 1, 1, 0))
		{
			if (Function_385(Global_34573, Local_13.f_1056, 1, 0, 0, 3212836864) || Function_383(Local_13.f_1056, Global_34573, 1, 0, 0))
			{
				Function_511();
				Function_324(&iLocal_1059, 35, 0, 4294967295, 4294967295);
				iLocal_1058 = 1;
			}
		}
	}
	else if (iLocal_1058 == 1)
	{
		if (!Function_373(Local_13.f_1056, 0, 1, 1, 1, 0))
		{
			Function_324(&iLocal_1059, 12, 0, 4294967295, 4294967295);
			iLocal_1058 = 2;
		}
	}
	else if (iLocal_1058 == 2)
	{
		if (Function_373(Local_13.f_1080, 0, 1, 1, 1, 0))
		{
			if (Function_385(Global_34573, Local_13.f_1080, 1, 0, 0, 3212836864) || Function_383(Local_13.f_1080, Global_34573, 1, 0, 0))
			{
				Function_324(&iLocal_1059, 35, 0, 4294967295, 4294967295);
				iLocal_1058 = 3;
			}
		}
	}
	return;
}

void Function_511() //Position: 0x18424 / 99364
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_NoKillEnemiesCell", "Gun03_NoKillEnemiesCell", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x1847B / 99451
{
	if (!DECOR_CHECK_EXIST(bLocal_727, "rigtaskseq01"))
	{
		Function_231((*&Local_13 + 2116)[17]);
		vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2116)[17]) };
		Function_316((*&Local_13 + 2116)[17]);
		vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2116)[17]) };
		TASK_CLEAR(bLocal_727);
		bLocal_835 = TASK_SEQUENCE_OPEN();
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_13.f_2560), "usecase1", true, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
		TASK_SEQUENCE_RELEASE(bLocal_835, 1);
		TASK_PRIORITY_SET(bLocal_727, true);
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, true);
		MEMORY_ALLOW_PICKUP_WEAPONS(bLocal_727, 0);
		DECOR_SET_BOOL(bLocal_727, "rigtaskseq02", true);
		DECOR_SET_BOOL(bLocal_727, "rigtaskseq01", true);
	}
	return;
}

void Function_513() //Position: 0x18537 / 99639
{
	if (!iLocal_905)
	{
		if (IS_DOOR_VALID(Function_308("elmatadero", "slaughterhouse", 1)) && IS_DOOR_VALID(Function_308("elmatadero", "slaughterhouse", 2)))
		{
			if (!IS_DOOR_OPENED(Function_308("elmatadero", "slaughterhouse", 1)))
			{
				OPEN_DOOR_DIRECTION(Function_308("elmatadero", "slaughterhouse", 1), true);
			}
			if (!IS_DOOR_OPENED(Function_308("elmatadero", "slaughterhouse", 2)))
			{
				OPEN_DOOR_DIRECTION(Function_308("elmatadero", "slaughterhouse", 2), false);
			}
			iLocal_905 = 1;
		}
	}
	return;
}

void Function_514() //Position: 0x18634 / 99892
{
	if (((Function_385(Global_34573, Local_13.f_824, 1, 0, 0, 3212836864) || (IS_ACTOR_SHOOTING(Global_34573) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1456)[1]))) || (Function_519(Local_13.f_824, Global_34573) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[2]))) && !bLocal_878)
	{
		if (IS_BLIP_VALID(bLocal_848))
		{
			REMOVE_BLIP(bLocal_848);
		}
		if (IS_OBJECT_VALID(bLocal_841))
		{
			Function_217(bLocal_841);
		}
		Function_518();
		TASK_FOLLOW_OBJECT_AT_DISTANCE((*&Local_13 + 828)[02], Global_34573, 15.0f, 2);
		TASK_FOLLOW_OBJECT_AT_DISTANCE((*&Local_13 + 828)[12], Global_34573, 15.0f, 2);
		TASK_FOLLOW_OBJECT_AT_DISTANCE((*&Local_13 + 828)[22], bLocal_727, 15.0f, 2);
		Function_517(Local_13.f_856, 2);
		Function_377(Local_13.f_856, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_516(Local_13.f_824);
		SQUAD_GOALS_CLEAR(Local_13.f_824);
		Function_426(Local_13.f_824);
		Function_493(Local_13.f_824, 1);
		Function_377(Local_13.f_824, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_307((*&Local_13 + 804)[02]);
		vLocal_819 = { StackVal, StackVal, Function_307((*&Local_13 + 804)[02]) };
		TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 804)[02], &vLocal_819, 90.0f, -1.0f);
		Function_231((*&Local_13 + 2308)[14]);
		vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[14]) };
		TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 804)[12], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 5.0f, 90.0f, 60.0f, 7), -1.0f, 1086324736);
		MEMORY_ALLOW_SHOOTING(bLocal_727, true);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 0);
		GIVE_WEAPON_TO_ACTOR(bLocal_727, 39, 1.0f, 0, 1);
		ACTOR_PUT_WEAPON_IN_HAND(bLocal_727, 39, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, 2);
		AI_SET_NAV_PATHFINDING_ENABLED(bLocal_828, true);
		HUD_CLEAR_OBJECTIVE();
		AUDIO_SET_PLAYER_MOOD(1, 0);
		Function_324(&iLocal_1059, 34, 0, 4294967295, 4294967295);
		bLocal_878 = true;
		iLocal_874 = 1;
		iLocal_875 = 4;
		Function_515();
		Function_232(&bLocal_791);
		iLocal_706 = 12;
	}
	return;
}

void Function_515() //Position: 0x18800 / 100352
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_NoHelpCarlos", "Gun03_NoHelpCarlos", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516(bool bParam0) //Position: 0x1884D / 100429
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

void Function_517(bool bParam0, bool bParam1) //Position: 0x18882 / 100482
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
				TASK_OVERRIDE_SET_MOVETYPE(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_518() //Position: 0x188CA / 100554
{
	Local_13.f_856 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_entranceagrobackup"));
	(*&Local_13 + 828)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CaveGuardFrontEscape01", 391, -338,739f, 18,82721f, 3947,613f, 0.0f, 153,4671f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 828)[02], Local_13.f_856);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 828)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 828)[02], 43, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 828)[02], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_13 + 828)[02], 19);
	(*&Local_13 + 828)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CaveGuardFrontEscape02", 392, -337,2628f, 19,37782f, 3953,792f, 0.0f, 366,8994f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 828)[12], Local_13.f_856);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 828)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 828)[12], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 828)[12], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_13 + 828)[12], 19);
	(*&Local_13 + 828)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CaveGuardFrontEscape03", 384, -334,4087f, 19,39574f, 3954,907f, 0.0f, 51,27706f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 828)[22], Local_13.f_856);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 828)[22], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_13 + 828)[22], 19);
	return;
}

int Function_519(bool bParam0, bool bParam1) //Position: 0x18A83 / 100995
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

void Function_520() //Position: 0x18AD9 / 101081
{
	if (iLocal_874 < 3 && iLocal_874 >= 10)
	{
		Function_386(2);
	}
	if (iLocal_874 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1456)[12]))
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 1);
			Function_232(&bLocal_788);
			iLocal_874 = 4294967293;
		}
	}
	else if (iLocal_874 == 4294967295)
	{
		if (Function_283(&bLocal_788) < 3.0f)
		{
			STOP_FORCE_LOOK_AT_COORD(bLocal_727);
			TASK_CLEAR(bLocal_727);
			Function_232(&bLocal_788);
			iLocal_874 = 4294967294;
		}
	}
	else if (iLocal_874 == 4294967294)
	{
		if (GET_TASK_STATUS(bLocal_727, 19) == 0)
		{
			TASK_CLEAR(bLocal_727);
			FORCE_LOOK_AT_ACTOR(bLocal_727, Global_34573, 3.0f);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			Function_232(&bLocal_788);
			iLocal_874 = 4294967295;
		}
	}
	else if (iLocal_874 == 1)
	{
		if (iLocal_706 > 12)
		{
			AI_STOP_IGNORING_ACTORS();
			STOP_FORCE_LOOK_AT_COORD(bLocal_727);
			ACTOR_END_FORCE_HOLSTER(bLocal_727);
			SQUAD_JOIN(bLocal_727, bLocal_839);
			Function_374(bLocal_839, 40.0f);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_727, true);
			Function_464(bLocal_727, Local_13.f_824, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_727, 1);
			MEMORY_ALLOW_SHOOTING(bLocal_727, true);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 0);
			GIVE_WEAPON_TO_ACTOR(bLocal_727, 39, 1.0f, 0, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bLocal_727, 39, 1);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_727)))
			{
				Function_215(5, 1, 1);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_727, 100.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_727, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_727, 54, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_727, 31, -1.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_727, 59, 0.0f);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_727, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_727, true);
			Function_231((*&Local_13 + 2252)[8]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[8]) };
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &vLocal_819, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, 280.0f, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			SET_ACTOR_FACTION(bLocal_727, 20);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
			Function_232(&bLocal_788);
			if (!bLocal_878)
			{
				Function_231((*&Local_13 + 2252)[3]);
				vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[3]) };
				TASK_CLEAR(bLocal_727);
				bLocal_835 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2640, 2, 1, 0, 1, false);
				TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
				TASK_SEQUENCE_RELEASE(bLocal_835, 1);
				TASK_PRIORITY_SET(bLocal_727, true);
				Function_544();
				iLocal_874 = 2;
			}
			else
			{
				Function_324(&iLocal_1059, 34, 0, 4294967295, 4294967295);
				iLocal_874 = 10;
			}
		}
	}
	else if (iLocal_874 == 10)
	{
		if (iLocal_875 < 6 || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[14]))
		{
			Function_231((*&Local_13 + 2252)[3]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[3]) };
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2640, 2, 1, 0, 1, false);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			Function_543();
			Function_232(&bLocal_788);
			iLocal_874 = 2;
		}
	}
	else if (iLocal_874 == 2)
	{
		if (Function_283(&bLocal_788) < 7,5f && !iLocal_898[1])
		{
			if (IS_BLIP_VALID(bLocal_848))
			{
				REMOVE_BLIP(bLocal_848);
			}
			if (!IS_BLIP_VALID(bLocal_848))
			{
				bLocal_848 = ADD_BLIP_FOR_OBJECT((*&Local_13 + 1992)[24], 330, 0f, 2, 0);
			}
			Function_415("Gun03_obj03b", 0x40f00000, 1, 2, 0, 0, 0);
			iLocal_898[1] = 1;
		}
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[14]))
		{
			if (!iLocal_898[1])
			{
				if (IS_BLIP_VALID(bLocal_848))
				{
					REMOVE_BLIP(bLocal_848);
				}
				if (!IS_BLIP_VALID(bLocal_848))
				{
					bLocal_848 = ADD_BLIP_FOR_OBJECT((*&Local_13 + 1992)[24], 330, 0f, 2, 0);
				}
				Function_415("Gun03_obj03b", 0x40f00000, 1, 2, 0, 0, 0);
				iLocal_898[1] = 1;
			}
			if (!bLocal_878)
			{
				Function_542(Local_13.f_824);
			}
			Function_540(bLocal_828);
			Function_539();
			Function_377(Local_13.f_936, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_538();
			Function_377(Local_13.f_888, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_537();
			Function_377(Local_13.f_960, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_532();
			Function_377(Local_13.f_912, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_531();
			Function_377(Local_13.f_984, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_530();
			Function_377(Local_13.f_1008, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_529();
			Function_377(Local_13.f_1032, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR((*&Local_13 + 860)[12], 0);
			Function_324(&iLocal_1059, 34, 0, 4294967295, 4294967295);
			AUDIO_SET_PLAYER_MOOD(1, 0);
			Function_528();
			Function_232(&bLocal_788);
			iLocal_874 = 3;
		}
	}
	else if (iLocal_874 == 3)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[15]))
		{
			Function_430(&bLocal_794);
			Function_430(&bLocal_797);
			Function_430(&bLocal_800);
			MEMORY_ATTACK_ON_SIGHT(bLocal_727, 1);
			Function_231((*&Local_13 + 2252)[3]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[3]) };
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2640, 2, 1, 0, 1, false);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&vLocal_819, 4.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			Function_232(&bLocal_788);
			iLocal_874 = 4;
		}
	}
	else if (iLocal_874 == 4)
	{
		if (Function_283(&bLocal_800) < 8.0f && !iLocal_897)
		{
			TASK_CLEAR((*&Local_13 + 916)[02]);
			Function_527((*&Local_13 + 916)[02], 3212836864);
			iLocal_897 = 1;
		}
		if (!Function_456((*&Local_13 + 916)[02], 0, 1, 1, 1, 0, 0, 0, 0) && !Function_456((*&Local_13 + 860)[12], 0, 1, 1, 1, 0, 0, 0, 0))
		{
			Function_231((*&Local_13 + 2252)[4]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[4]) };
			TASK_CLEAR(bLocal_727);
			TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_727, FIND_NEAREST_COVER_LOCATION(&vLocal_819, 4.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
			Function_232(&bLocal_788);
			iLocal_874 = 5;
		}
	}
	else if (iLocal_874 == 5)
	{
		if (!Function_373(Local_13.f_888, 0, 1, 1, 1, 0) && !Function_373(Local_13.f_936, 0, 1, 1, 1, 0))
		{
			Function_526();
			Function_231((*&Local_13 + 2252)[9]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[9]) };
			TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_727, FIND_NEAREST_COVER_LOCATION(&vLocal_819, 4.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
			TASK_PRIORITY_SET(bLocal_727, true);
			Function_232(&bLocal_788);
			iLocal_874 = 6;
		}
	}
	else if (iLocal_874 == 6)
	{
		if (!Function_373(Local_13.f_912, 0, 1, 1, 1, 0) && !Function_373(Local_13.f_960, 0, 1, 1, 1, 0))
		{
			Function_525();
			Function_231((*&Local_13 + 2252)[6]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[6]) };
			Function_524();
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2644, 2, 0, 0, 1, false);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, 197.0f, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			Function_232(&bLocal_788);
			iLocal_874 = 7;
		}
		else if ((IS_PLAYER_USING_COVER(0) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[21])) && !iLocal_913)
		{
			Function_231((*&Local_13 + 2252)[11]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[11]) };
			TASK_CLEAR(bLocal_727);
			TASK_SHOOT_ENEMIES_FROM_POSITION(bLocal_727, &vLocal_819, 175.0f, -1.0f);
			TASK_PRIORITY_SET(bLocal_727, true);
			iLocal_913 = 1;
		}
	}
	else if (iLocal_874 == 7)
	{
		if (!Function_373(Local_13.f_984, 0, 1, 1, 1, 0))
		{
			Function_523();
			Function_521();
			bLocal_861 = GET_COVER_LOCATION_FROM_OBJECT(Local_13.f_2580);
			TASK_CLEAR(bLocal_727);
			if (IS_COVER_LOCATION_VALID(bLocal_861))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_727, bLocal_861, -1.0f, 3.0f);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_POSITION(bLocal_727, &vLocal_819, vLocal_822.y, 3212836864);
			}
			TASK_PRIORITY_SET(bLocal_727, true);
			Function_232(&bLocal_788);
			iLocal_874 = 8;
		}
	}
	else if (iLocal_874 == 8)
	{
		if (!Function_373(Local_13.f_1008, 0, 1, 1, 1, 0))
		{
			Function_231((*&Local_13 + 2252)[7]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2252)[7]) };
			Function_316((*&Local_13 + 2252)[7]);
			vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 2252)[7]) };
			bLocal_861 = FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, vLocal_822.y, 90.0f, 4);
			vLocal_825 = { -0,1180153f, 0,09604158f, 0.0f };
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_SHOOT_AT_COORD(false, &vLocal_825, 4.0f);
			if (IS_COVER_LOCATION_VALID(bLocal_861))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_861, -1.0f, 3.0f);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, vLocal_822.y, 3212836864);
			}
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_727, 8, 1.0f);
			Function_232(&bLocal_788);
			iLocal_874 = 9;
		}
	}
	else if (iLocal_874 == 9)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1532)[22]))
		{
			Function_232(&bLocal_788);
			iLocal_874 = 11;
		}
	}
	return;
}

void Function_521() //Position: 0x193BB / 103355
{
	Function_426(Local_13.f_1032);
	Function_408(&Local_13 + 1032, 1);
	Function_463(Local_13.f_1032, 0);
	Function_376(Local_13.f_1032, Global_34573, 0);
	Function_522(Local_13.f_1032);
	Function_464(bLocal_727, Local_13.f_1032, 1);
	Function_231((*&Local_13 + 2308)[13]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[13]) };
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 1012)[02], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 15.0f, 30.0f, 1), -1.0f, 1086324736);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 1012)[12], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 15.0f, 30.0f, 2), -1.0f, 1086324736);
	return;
}

void Function_522(bool bParam0) //Position: 0x19452 / 103506
{
	bLocal_876 = false;
	while (bLocal_876 <= SQUAD_GET_SIZE(bParam0))
	{
		bLocal_830 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_876);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_830, 15, true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_830, 20, 0,8f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_830, 49, 6.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_830, 0,6f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_830, 8, 80.0f);
		bLocal_876++;
	}
	return;
}

void Function_523() //Position: 0x194B4 / 103604
{
	Function_426(Local_13.f_1008);
	Function_408(&Local_13 + 1008, 1);
	Function_463(Local_13.f_1008, 0);
	Function_376(Local_13.f_1008, Global_34573, 0);
	Function_522(Local_13.f_1008);
	Function_464(bLocal_727, Local_13.f_1008, 1);
	Function_231((*&Local_13 + 2308)[8]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[8]) };
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 988)[02], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 90.0f, 30.0f, 7), -1.0f, 1086324736);
	Function_231((*&Local_13 + 2308)[12]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[12]) };
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 988)[12], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 90.0f, 30.0f, 7), -1.0f, 1086324736);
	return;
}

void Function_524() //Position: 0x1955C / 103772
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_2FarBehindEscape", "Gun03_2FarBehindEscape", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_525() //Position: 0x195B1 / 103857
{
	Function_426(Local_13.f_984);
	Function_408(&Local_13 + 984, 1);
	Function_463(Local_13.f_984, 0);
	Function_376(Local_13.f_984, Global_34573, 0);
	Function_522(Local_13.f_984);
	Function_464(bLocal_727, Local_13.f_984, 1);
	Function_231((*&Local_13 + 2308)[9]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[9]) };
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 964)[12], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 90.0f, 30.0f, 7), -1.0f, 1086324736);
	Function_231((*&Local_13 + 2308)[10]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[10]) };
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 964)[02], &vLocal_819, 83.0f, -1.0f);
	return;
}

void Function_526() //Position: 0x1964A / 104010
{
	Function_426(Local_13.f_912);
	Function_408(&Local_13 + 912, 1);
	Function_463(Local_13.f_912, 0);
	Function_376(Local_13.f_912, bLocal_727, 0);
	Function_522(Local_13.f_912);
	Function_464(bLocal_727, Local_13.f_912, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 892)[02], 43, 1.0f, 0, 0);
	Function_231((*&Local_13 + 2308)[15]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[15]) };
	bLocal_835 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2652, 2, 1, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, 2.0f, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_13 + 892)[02], bLocal_835);
	TASK_SEQUENCE_RELEASE(bLocal_835, 1);
	TASK_PRIORITY_SET((*&Local_13 + 892)[02], true);
	Function_231((*&Local_13 + 2308)[7]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[7]) };
	bLocal_835 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2660, 2, 1, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_819, 2.0f, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_13 + 892)[12], bLocal_835);
	TASK_SEQUENCE_RELEASE(bLocal_835, 1);
	TASK_PRIORITY_SET((*&Local_13 + 892)[12], true);
	Function_426(Local_13.f_960);
	Function_408(&Local_13 + 960, 1);
	Function_463(Local_13.f_960, 0);
	Function_376(Local_13.f_960, Global_34573, 0);
	Function_522(Local_13.f_960);
	Function_231((*&Local_13 + 2308)[5]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[5]) };
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 940)[02], &vLocal_819, vLocal_819.y, -1.0f);
	Function_231((*&Local_13 + 2308)[6]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[6]) };
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 940)[12], &vLocal_819, 20.0f, -1.0f);
	return;
}

void Function_527(bool bParam0, bool bParam1) //Position: 0x197B3 / 104371
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

void Function_528() //Position: 0x197CE / 104398
{
	Function_426(Local_13.f_888);
	Function_408(&Local_13 + 888, 1);
	Function_463(Local_13.f_888, 0);
	Function_376(Local_13.f_888, bLocal_727, 0);
	Function_522(Local_13.f_888);
	Function_464(bLocal_727, Local_13.f_888, 1);
	Function_231((*&Local_13 + 2308)[4]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[4]) };
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 860)[02], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 3.0f, 78.0f, 40.0f, 7), -1.0f, 1086324736);
	Function_231((*&Local_13 + 2308)[0]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[0]) };
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_13 + 860)[12], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 10.0f, 40.0f, 7), 10.0f, 1086324736);
	Function_231((*&Local_13 + 2308)[16]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[16]) };
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 860)[22], &vLocal_819, vLocal_819.y, -1.0f);
	Function_426(Local_13.f_936);
	Function_408(&Local_13 + 936, 1);
	Function_463(Local_13.f_936, 0);
	Function_376(Local_13.f_936, Global_34573, 0);
	Function_522(Local_13.f_936);
	Function_231((*&Local_13 + 2308)[2]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[2]) };
	TASK_HIDE_AT_COVER((*&Local_13 + 916)[02], FIND_NEAREST_COVER_LOCATION(&vLocal_819, 2.0f, 110.0f, 40.0f, 7), -1.0f, 2.0f, 0);
	Function_231((*&Local_13 + 2308)[3]);
	vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 2308)[3]) };
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_13 + 916)[12], &vLocal_819, 78.0f, -1.0f);
	TASK_OVERRIDE_SET_POSTURE((*&Local_13 + 916)[12], true);
	return;
}

void Function_529() //Position: 0x1992B / 104747
{
	Local_13.f_1032 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_CaveWave05"));
	(*&Local_13 + 1012)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "W05_E12", 390, -291,6348f, 24,2366f, 3982,291f, -0,4006985f, 14,96064f, -1,11101f);
	SQUAD_JOIN((*&Local_13 + 1012)[02], Local_13.f_1032);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 1012)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1012)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1012)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1012)[02], 19);
	(*&Local_13 + 1012)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nW05_Med01", 391, -292,4781f, 24,24315f, 3982,365f, 0.0f, 17.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 1012)[12], Local_13.f_1032);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 1012)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 1012)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 1012)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 1012)[12], 19);
	return;
}

void Function_530() //Position: 0x19A4C / 105036
{
	Local_13.f_1008 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_CaveWave04"));
	(*&Local_13 + 988)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "W04_E09", 381, -293,8453f, 23,93514f, 3971,358f, 3,799238f, 105,3518f, 4,057407f);
	SQUAD_JOIN((*&Local_13 + 988)[02], Local_13.f_1008);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 988)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 988)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 988)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 988)[02], 19);
	(*&Local_13 + 988)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "W04_E10", 384, -291,2085f, 24,12651f, 3974,141f, 0.0f, 103.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 988)[12], Local_13.f_1008);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 988)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 988)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 988)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 988)[12], 19);
	return;
}

void Function_531() //Position: 0x19B6B / 105323
{
	Local_13.f_984 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_CaveWave03"));
	(*&Local_13 + 964)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "W03_E07", 385, -304,8282f, 22,78553f, 3976,723f, 3,799238f, 105,3518f, 4,057407f);
	SQUAD_JOIN((*&Local_13 + 964)[02], Local_13.f_984);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 964)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 964)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 964)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 964)[02], 19);
	(*&Local_13 + 964)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "W03_E08", 386, -309,5842f, 22,18947f, 3974,299f, 0.0f, 103.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 964)[12], Local_13.f_984);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 964)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 964)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 964)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 964)[12], 19);
	return;
}

void Function_532() //Position: 0x19C8A / 105610
{
	Local_13.f_912 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_Cave_w02_Landon"));
	(*&Local_13 + 892)[02] = Function_533(&Global_7002, &Global_8231, 1, -340,8309f, 22,02752f, 3974,433f, 0.0f, 267.0f, 0.0f, 1);
	SQUAD_JOIN((*&Local_13 + 892)[02], Local_13.f_912);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 892)[02]);
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_13 + 892)[02], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 892)[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 892)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 892)[02], 19);
	(*&Local_13 + 892)[12] = Function_533(&Global_7002, &Global_8231, 4, -342,4362f, 22,00925f, 3973,949f, 0.0f, 255,271f, 0.0f, 1);
	SQUAD_JOIN((*&Local_13 + 892)[12], Local_13.f_912);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 892)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 892)[12], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 892)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 892)[12], 19);
	return;
}

var Function_533(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x19DA4 / 105892
{
	var uVar0;
	bool bVar1;
	
	uVar0 = iParam2;
	bVar1 = Function_534(uParam0, uParam1, uVar0, iParam9, 0, 1);
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

bool Function_534(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x19E8B / 106123
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
		uParam1[iVar03]->f_8 = Function_536(StackVal, StackVal, StackVal, Global_6289, Function_53(), (*uParam1)[iVar03], vVar2, 0x42700000);
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
	Function_535(StackVal, 1);
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

int Function_535(bool bParam0, bool bParam1) //Position: 0x1A021 / 106529
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

var Function_536(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x1A0C3 / 106691
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

void Function_537() //Position: 0x1A1DC / 106972
{
	Local_13.f_960 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_CaveWave02"));
	(*&Local_13 + 940)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nW02_Med03", 396, -317,5042f, 20,72618f, 3977,203f, 0.0f, 80,23764f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 940)[02], Local_13.f_960);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 940)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 940)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 940)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 940)[02], 19);
	(*&Local_13 + 940)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "W02_E06", 384, -314,6934f, 21,28231f, 3977,09f, 0.0f, 75.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 940)[12], Local_13.f_960);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 940)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 940)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 940)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 940)[12], 19);
	return;
}

void Function_538() //Position: 0x1A2F5 / 107253
{
	Local_13.f_888 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_Cave_w01_Landon"));
	(*&Local_13 + 860)[02] = Function_533(&Global_7002, &Global_8231, 0, -329,602f, 19,38f, 3968,637f, 0.0f, 17,93967f, 0.0f, 1);
	SQUAD_JOIN((*&Local_13 + 860)[02], Local_13.f_888);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 860)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 860)[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 860)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 860)[02], 19);
	(*&Local_13 + 860)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "Lw01_E02", 380, -326,5492f, 19,12764f, 3962,958f, 0.0f, 59.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 860)[12], Local_13.f_888);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 860)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 860)[12], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 860)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 860)[12], 19);
	(*&Local_13 + 860)[22] = Function_533(&Global_7002, &Global_8231, 2, -331,2998f, 19,63851f, 3962,738f, 0.0f, 6.0f, 0.0f, 1);
	SQUAD_JOIN((*&Local_13 + 860)[22], Local_13.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 860)[22], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 860)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 860)[22], 19);
	return;
}

void Function_539() //Position: 0x1A46F / 107631
{
	Local_13.f_936 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "S2_CaveWave01"));
	(*&Local_13 + 916)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nW01_Med01", 391, -321,1276f, 18,09723f, 3947,334f, 0.0f, 100.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 916)[02], Local_13.f_936);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_13 + 916)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_13 + 916)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 916)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 916)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 916)[02], 19);
	(*&Local_13 + 916)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "nW01_Med02", 392, -322,4942f, 18,89796f, 3955,659f, 0.0f, 59.0f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 916)[12], Local_13.f_936);
	GIVE_WEAPON_TO_ACTOR((*&Local_13 + 916)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_13 + 916)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_13 + 916)[12], 19);
	return;
}

int Function_540(bool bParam0) //Position: 0x1A58B / 107915
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!Function_541(bParam0))
		{
			RELEASE_ACTOR(bParam0);
			return 1;
		}
	}
	return 0;
}

bool Function_541(bool bParam0) //Position: 0x1A5AA / 107946
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

void Function_542(bool bParam0) //Position: 0x1A5CC / 107980
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

void Function_543() //Position: 0x1A610 / 108048
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_GuardsDefMoveIn", "Gun03_GuardsDefMoveIn", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_544() //Position: 0x1A663 / 108131
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_GuardsAttackCarlos", "Gun03_GuardsAttackCarlos", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_545() //Position: 0x1A6BC / 108220
{
	if (Function_385(Global_34573, Local_13.f_824, 1, 0, 0, 3212836864) && !iLocal_904)
	{
		if ((iLocal_875 != 2 || iLocal_875 != 3) || iLocal_875 <= 6)
		{
			if (IS_ACTOR_ALIVE((*&Local_13 + 804)[02]))
			{
				TASK_KILL_CHAR((*&Local_13 + 804)[02], Global_34573);
				ADD_BLIP_FOR_ACTOR((*&Local_13 + 804)[02], 322, 0, 2, 0);
				MEMORY_ALLOW_SHOOTING((*&Local_13 + 804)[02], true);
			}
			if (IS_ACTOR_ALIVE((*&Local_13 + 804)[12]))
			{
				TASK_KILL_CHAR((*&Local_13 + 804)[12], Global_34573);
				ADD_BLIP_FOR_ACTOR((*&Local_13 + 804)[12], 322, 0, 2, 0);
				MEMORY_ALLOW_SHOOTING((*&Local_13 + 804)[12], true);
			}
			iLocal_904 = 1;
		}
	}
	if (iLocal_875 == 4294967295)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_828, (*&Local_13 + 1456)[10]))
		{
			Function_231((*&Local_13 + 1992)[27]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 1992)[27]) };
			Function_316((*&Local_13 + 1992)[27]);
			vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1992)[27]) };
			ACTOR_START_FORCE_HOLSTER(bLocal_828, 0, 0);
			TASK_CLEAR(bLocal_828);
			TASK_ACTION_PERFORM_AT_POSITION(bLocal_828, "talking_stand/Talk_A", &vLocal_819, vLocal_822.y, -1.0f, 1, 3212836864);
			SET_ANIM_SET_FOR_ACTOR((*&Local_13 + 804)[02], "talking_stand", 1);
			Function_231((*&Local_13 + 1992)[18]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 1992)[18]) };
			Function_316((*&Local_13 + 1992)[18]);
			vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1992)[18]) };
			TASK_CLEAR((*&Local_13 + 804)[02]);
			TASK_ACTION_PERFORM_AT_POSITION((*&Local_13 + 804)[02], "talking_stand/Talk_A", &vLocal_819, vLocal_822.y, -1.0f, 1, 3212836864);
			Function_232(&bLocal_813);
			iLocal_875 = 10;
		}
	}
	else if (iLocal_875 == 10)
	{
		if (Function_283(&bLocal_813) < 0,5f)
		{
			SET_ANIM_SET_FOR_ACTOR((*&Local_13 + 804)[12], "talking_stand", 1);
			Function_231((*&Local_13 + 1992)[17]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 1992)[17]) };
			Function_316((*&Local_13 + 1992)[17]);
			vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1992)[17]) };
			TASK_CLEAR((*&Local_13 + 804)[12]);
			TASK_ACTION_PERFORM_AT_POSITION((*&Local_13 + 804)[12], "talking_stand/Listen_B", &vLocal_819, vLocal_822.y, -1.0f, 1, 3212836864);
			Function_232(&bLocal_813);
			iLocal_875 = 0;
		}
	}
	else if (iLocal_875 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1456)[12]))
		{
			Function_549();
			Function_232(&bLocal_813);
			iLocal_875 = 1;
		}
	}
	else if (iLocal_875 == 1)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_283(&bLocal_813) < 38.0f)
		{
			ABORT_SCRIPTED_CONVERSATION(0);
			STOP_FORCE_LOOK_AT_COORD(bLocal_828);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_828, 1);
			TASK_CLEAR(bLocal_828);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_828, Local_13.f_2596, 2, 0, 0, 1, false);
			iLocal_875 = 2;
			Function_232(&bLocal_813);
		}
	}
	else if (iLocal_875 == 2)
	{
		if (Function_283(&bLocal_813) < 1.0f)
		{
			RESET_ANIM_SET_FOR_ACTOR((*&Local_13 + 804)[02], 1);
			RESET_ANIM_SET_FOR_ACTOR((*&Local_13 + 804)[12], 1);
			if (IS_ACTOR_VALID((*&Local_13 + 804)[02]))
			{
				TASK_CLEAR((*&Local_13 + 804)[02]);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_13 + 804)[02], Local_13.f_2596, 2, 1, 0, 1, false);
			}
			if (IS_ACTOR_VALID((*&Local_13 + 804)[12]))
			{
				TASK_CLEAR((*&Local_13 + 804)[12]);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_13 + 804)[12], Local_13.f_2596, 2, 1, 0, 1, false);
			}
			iLocal_875 = 3;
			Function_232(&bLocal_813);
		}
	}
	else if (iLocal_875 == 3)
	{
		if (Function_283(&bLocal_813) < 2.0f)
		{
			iLocal_879[9] = 1;
			iLocal_875 = 6;
			iLocal_874 = 1;
			Function_232(&bLocal_813);
		}
	}
	else if (iLocal_875 == 4)
	{
		TASK_CLEAR(bLocal_828);
		bLocal_835 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, (*&Local_13 + 1992)[23], 0,5f, 2, 1, 1);
		TASK_FACE_ACTOR(false, bLocal_727, 0, 3212836864);
		TASK_CROUCH(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_828, bLocal_835);
		TASK_SEQUENCE_RELEASE(bLocal_835, 1);
		TASK_PRIORITY_SET(bLocal_828, true);
		iLocal_875 = 5;
		Function_232(&bLocal_813);
	}
	else if (iLocal_875 == 5)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[14]))
		{
			iLocal_875 = 6;
			Function_232(&bLocal_813);
		}
		else if (!Function_373(Local_13.f_824, 0, 1, 1, 1, 0) && !Function_373(Local_13.f_856, 0, 1, 1, 1, 0))
		{
			Function_231((*&Local_13 + 1992)[25]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 1992)[25]) };
			Function_316((*&Local_13 + 1992)[25]);
			vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1992)[25]) };
			RESET_ANIM_SET_FOR_ACTOR(bLocal_828, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_828, "stand_ambient", 0);
			TASK_CLEAR(bLocal_828);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(0, (*&Local_13 + 1992)[25], 0,5f, 4, 1, 1);
			TASK_FACE_ACTOR(false, bLocal_727, 0, 3212836864);
			TASK_ACTION_PERFORM_AT_POSITION(false, "stand_ambient/one_hnd", &vLocal_819, vLocal_822.y, -1.0f, 1, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_828, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_828, true);
			FORCE_LOOK_AT_ACTOR(bLocal_828, bLocal_727, -1.0f);
			iLocal_875 = 6;
			Function_232(&bLocal_813);
		}
	}
	else if (iLocal_875 == 6)
	{
		if (!iLocal_879[9])
		{
			Function_548();
			iLocal_879[9] = 1;
		}
		if ((GET_TASK_STATUS(bLocal_828, 14) != 0 || Function_405(bLocal_828, Global_34573) > 5.0f) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1532)[14]))
		{
			STOP_FORCE_LOOK_AT_COORD(bLocal_828);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_828, 1);
			TASK_CLEAR(bLocal_828);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_828, Local_13.f_2596, 2, 0, 0, 1, false);
			Function_232(&bLocal_788);
			iLocal_875 = 7;
			Function_232(&bLocal_813);
		}
	}
	else if (iLocal_875 == 7)
	{
		if (Function_283(&bLocal_813) < 7,5f)
		{
			iLocal_875 = 8;
			Function_232(&bLocal_813);
		}
	}
	else if (iLocal_875 == 8)
	{
		if (IS_ACTOR_VALID(bLocal_828))
		{
			if ((GET_TASK_STATUS(bLocal_828, 43) != 0 || GET_TASK_STATUS(bLocal_828, 43) != 4) || !Function_443(Global_34573, bLocal_828, 200.0f))
			{
				if (!Function_547(bLocal_828, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					Function_546(&(Local_962[317]));
					DESTROY_ACTOR(bLocal_828);
				}
			}
		}
		if (IS_ACTOR_VALID((*&Local_13 + 804)[02]))
		{
			if ((GET_TASK_STATUS((*&Local_13 + 804)[02], 43) != 0 || GET_TASK_STATUS((*&Local_13 + 804)[02], 43) != 4) || !Function_443(Global_34573, (*&Local_13 + 804)[02], 200.0f))
			{
				if (!Function_547((*&Local_13 + 804)[02], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR((*&Local_13 + 804)[02]);
				}
			}
		}
		if (IS_ACTOR_VALID((*&Local_13 + 804)[12]))
		{
			if ((GET_TASK_STATUS((*&Local_13 + 804)[12], 43) != 0 || GET_TASK_STATUS((*&Local_13 + 804)[12], 43) != 4) || !Function_443(Global_34573, (*&Local_13 + 804)[12], 200.0f))
			{
				if (!Function_547((*&Local_13 + 804)[12], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR((*&Local_13 + 804)[12]);
				}
			}
		}
	}
	return;
}

void Function_546(bool bParam0) //Position: 0x1AD90 / 109968
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

bool Function_547(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1AE44 / 110148
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_548() //Position: 0x1AE5E / 110174
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Gun03_2GuardsDefCarloLeav", "Gun03_2GuardsDefCarloLeav", false, 2, 1, 0, 1);
		Function_351(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_549() //Position: 0x1AEBA / 110266
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AA", "Gun03_DistrakGuard_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Gun03_DistrakGuard_v1_AB", "Gun03_DistrakGuard_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AC", "Gun03_DistrakGuard_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Gun03_DistrakGuard_v1_AD", "Gun03_DistrakGuard_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AE", "Gun03_DistrakGuard_v1_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(6, "Gun03_DistrakGuard_v1_AF", "Gun03_DistrakGuard_v1_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AG", "Gun03_DistrakGuard_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(6, "Gun03_DistrakGuard_v1_AH", "Gun03_DistrakGuard_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Gun03_DistrakGuard_v1_AI", "Gun03_DistrakGuard_v1_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AJ", "Gun03_DistrakGuard_v1_AJ", false, 1, 1, 0, 1);
		Function_351(113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_550() //Position: 0x1B14B / 110923
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(11, "Gun03_SoldiersCanyonYell1", "Gun03_SoldiersCanyonYell1", false, 2, 1, 0, 1);
		Function_351(2049);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_551() //Position: 0x1B1A9 / 111017
{
	if (iLocal_706 < 3 && iLocal_706 > 105)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1456)[7]))
		{
			if (!iLocal_910)
			{
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_727, 10.0f);
				iLocal_910 = 1;
			}
		}
		if (iLocal_706 >= 11)
		{
			Function_513();
		}
		if (iLocal_910)
		{
			Function_571();
		}
		if (!bLocal_894)
		{
			if (GET_LAST_ATTACKER((*&Local_13 + 716)[02]) != Global_34573 && !IS_ACTOR_ALIVE((*&Local_13 + 716)[02]))
			{
				Function_238("Gun03_killed_ally_horse");
				bLocal_715 = true;
			}
			else if (!IS_ACTOR_ALIVE((*&Local_13 + 716)[02]))
			{
				Function_238("Gun03_killed_ally_horse");
				bLocal_715 = true;
			}
			else if (!IS_ACTOR_ALIVE(bLocal_728))
			{
				Function_238("Gun03_killed_your_horse");
				bLocal_715 = true;
			}
			if (iLocal_706 < 9 && iLocal_706 > 12)
			{
				Function_565();
			}
		}
		if (IS_ACTOR_VALID((*&Local_13 + 804)[02]))
		{
			if ((IS_ACTOR_SHOOTING((*&Local_13 + 804)[02]) || GET_LAST_ATTACKER((*&Local_13 + 804)[02]) != Global_34573) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1380)[4]))
			{
				Function_238("Gun03_fail_attention");
				bLocal_715 = true;
			}
		}
		if (IS_ACTOR_VALID((*&Local_13 + 804)[12]))
		{
			if ((IS_ACTOR_SHOOTING((*&Local_13 + 804)[12]) || GET_LAST_ATTACKER((*&Local_13 + 804)[12]) != Global_34573) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1380)[4]))
			{
				Function_238("Gun03_fail_attention");
				bLocal_715 = true;
			}
		}
		if (!bLocal_894 && !iLocal_877)
		{
			Function_436(&bLocal_791, 60.0f, 130.0f, bLocal_727, "Gun03_obj_return", "Gun03_too_far", &bLocal_715, 0, 0, 0, 325, 1);
		}
		if (iLocal_877)
		{
			Function_436(&bLocal_791, 35.0f, 60.0f, bLocal_727, "Gun03_obj_return", "Gun03_too_far", &bLocal_715, 0, 0, 0, 325, 1);
		}
		if (IS_ACTOR_VALID((*&Local_13 + 788)[02]))
		{
			Function_231((*&Local_13 + 1992)[10]);
			Function_431(StackVal, StackVal, "$/cutscene/GUN03_CS04/GUN03_CS04", &iLocal_726, Function_231((*&Local_13 + 1992)[10]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
		if (Function_564(Global_30633[1]))
		{
			Function_157(Global_30633[1]);
		}
	}
	switch (iLocal_706)
	{
		case 0x00000000:
			bLocal_843 = Function_563(Global_34207, 0);
			if (IS_OBJECT_VALID(bLocal_843))
			{
				Function_344(0);
				Function_215(5, 0, 1);
				iLocal_916 = 0;
				SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 1);
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
				SET_ACTOR_FACTION(bLocal_727, 20);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
				ACTOR_HOLSTER_WEAPON(Global_34573, 0);
				TASK_DRAW_HOLSTER_WEAPON(Global_34573, 0);
				if (iLocal_730[0] == 0)
				{
					if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
					{
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_OUT(0.0f, 1f, 1);
					}
					Function_316((*&Local_13 + 1816)[13]);
					vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1816)[13]) };
					UNK_0x44986367(&vLocal_819, vLocal_822.y);
					Function_231((*&Local_13 + 1816)[9]);
					vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[9]) };
					TRAIN_SET_POSITION_DIRECTION(Global_34207, &vLocal_822, &vLocal_819);
					TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
					TRAIN_SET_SPEED(Global_34207, 0.0f);
					vLocal_819 = { 0.0f, 0.0f, 0.0f };
					Function_229(Global_34573, (*&Local_13 + 1900)[9], 1, 1, 1);
					Function_229(bLocal_727, (*&Local_13 + 1900)[10], 1, 1, 1);
					FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
					Function_232(&bLocal_782);
					iLocal_706 = 1;
				}
				else
				{
					Function_316((*&Local_13 + 1816)[13]);
					vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1816)[13]) };
					UNK_0x44986367(&vLocal_819, vLocal_822.y);
					Function_231((*&Local_13 + 1816)[13]);
					vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[13]) };
					TRAIN_SET_POSITION_DIRECTION(Global_34207, &vLocal_822, &vLocal_819);
					Function_231((*&Local_13 + 1816)[9]);
					vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[9]) };
					TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
					TRAIN_SET_SPEED(Global_34207, 0.0f);
					vLocal_819 = { 0.0f, 0.0f, 0.0f };
					Function_232(&bLocal_782);
					if (iLocal_856)
					{
						iLocal_706 = 1;
					}
					else
					{
						iLocal_706 = 2;
					}
				}
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_343(Global_30707[2])) && Function_562())
			{
				vLocal_819 = { -785,7535f, 13,05098f, 3748,595f };
				bLocal_830 = LOCATE_ACTOR_OF_TYPE(vLocal_819, 20.0f, 23, 4294967295);
				if (IS_ACTOR_VALID(bLocal_830))
				{
					DESTROY_ACTOR(bLocal_830);
				}
				bLocal_830 = LOCATE_ACTOR_OF_TYPE(vLocal_819, 20.0f, 23, 4294967295);
				if (IS_ACTOR_VALID(bLocal_830))
				{
					DESTROY_ACTOR(bLocal_830);
				}
				Function_232(&bLocal_782);
				iLocal_706 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(bLocal_727))
			{
				Function_231((*&Local_13 + 1816)[1]);
				vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[1]) };
				if (Function_501(StackVal, StackVal, vLocal_819))
				{
					Function_244(iLocal_705);
					Function_418(StackVal, StackVal, Function_244(iLocal_705), iLocal_705, Global_30633[1], Function_246(iLocal_705), 0);
					if (IS_BLIP_VALID(bLocal_848))
					{
						REMOVE_BLIP(bLocal_848);
					}
					if (IS_OBJECT_VALID(bLocal_841))
					{
						Function_217(bLocal_841);
					}
					Function_231((*&Local_13 + 1816)[9]);
					vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[9]) };
					TRAIN_SET_TARGET_POS(Global_34207, &vLocal_822);
					TRAIN_SET_TARGET_SPEED(Global_34207, 10.0f);
					TRAIN_SET_SPEED(Global_34207, 10.0f);
					Function_561((*&Local_13 + 1900)[3]);
					vLocal_819 = { StackVal, StackVal, Function_561((*&Local_13 + 1900)[3]) };
					bLocal_845 = LOCATE_GRINGO_OF_TYPE("shoe", &vLocal_819, 10.0f, 1);
					if (IS_GRINGO_VALID(bLocal_845))
					{
						GRINGO_ALLOW_ACTIVATION(bLocal_845, false);
					}
					Function_561((*&Local_13 + 1900)[2]);
					vLocal_819 = { StackVal, StackVal, Function_561((*&Local_13 + 1900)[2]) };
					bLocal_845 = LOCATE_GRINGO_OF_TYPE("tend", &vLocal_819, 10.0f, 1);
					if (IS_GRINGO_VALID(bLocal_845))
					{
						GRINGO_ALLOW_ACTIVATION(bLocal_845, false);
					}
					if (SQUAD_IS_VALID(Local_13.f_728))
					{
						Function_560(Local_13.f_728);
					}
					Function_559();
					Function_229((*&Local_13 + 716)[02], (*&Local_13 + 1900)[2], 1, 1, 1);
					TASK_STAND_STILL((*&Local_13 + 716)[02], -1.0f, 0, 0);
					SET_ALLOW_RIDE_BY_PLAYER((*&Local_13 + 716)[02], 0);
					Function_229(bLocal_728, (*&Local_13 + 1900)[3], 1, 1, 1);
					TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
					if (IS_BLIP_VALID(bLocal_847))
					{
						REMOVE_BLIP(bLocal_847);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_728)))
					{
						bLocal_847 = ADD_BLIP_FOR_ACTOR(bLocal_728, 334, 0, 2, 0);
					}
					REMOVE_OBJECT_FROM_ATTACHMENT(bLocal_727);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_727, true);
					Function_363(&(Local_962[017]), bLocal_727, "Gunslinger", 0, 0x5f5e100, 1);
					TASK_CLEAR(Global_34573);
					if (iLocal_730[0] == 1)
					{
						Function_232(&bLocal_782);
						iLocal_706 = 104;
					}
					else
					{
						TASK_CLEAR(bLocal_727);
						Function_229(bLocal_727, (*&Local_13 + 1900)[20], 1, 1, 1);
						TASK_CLEAR(Global_34573);
						Function_229(Global_34573, (*&Local_13 + 1900)[7], 1, 1, 1);
						TASK_CLEAR(bLocal_727);
						bLocal_835 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2620, 1, 1, 0, 1, false);
						TASK_MOUNT(false, (*&Local_13 + 716)[02], 0, 0, 1, 1);
						TASK_GO_TO_OBJECT(false, (*&Local_13 + 1816)[1], 1, 0, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET(bLocal_727, true);
						TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
						TASK_SEQUENCE_RELEASE(bLocal_835, 1);
						Function_324(&iLocal_1059, 1, 0, 4294967295, 4294967295);
						Function_291(1.0f);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						Function_248();
						Function_558();
						Function_232(&bLocal_782);
						iLocal_706 = 6;
					}
				}
			}
			else if (!IS_ACTOR_VALID(bLocal_727))
			{
				bLocal_727 = Function_327(5, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 0x00000068:
			Function_311(bLocal_697, 43.0f, 1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0, 0, 0, 0);
			Function_310(-767,106f, 16,594f, 3766,493f, -0,834f, -0,011f, 0,551f, -764,795f, 14,485f, 3763,51f, -0,891f, 0,161f, 0,425f, 14.0f, 0, 1, 1, 6);
			Function_291(0,5f);
			HUD_ENABLE(false);
			SET_CUTSCENE_STREAMING_LOAD_SCENE(Global_63098, 0);
			Function_232(&bLocal_782);
			iLocal_706 = 3;
			break;
		
		case 0x00000003:
			if (Function_283(&bLocal_782) <= 13,9f)
			{
				if (Function_287("$/cutscene/GUN_03_exit_train/GUN_03_exit_train", &Local_707, &Local_698, &iLocal_705, 59856, 59849, 59584, 56586, 56326, 85981, 0, 1, 1, 2, 2, 0, 1))
				{
					if (IS_ACTOR_VALID((*&Local_13 + 732)[02]))
					{
						DESTROY_ACTOR((*&Local_13 + 732)[02]);
					}
					if (IS_ACTOR_VALID((*&Local_13 + 732)[12]))
					{
						DESTROY_ACTOR((*&Local_13 + 732)[12]);
					}
					if (IS_ACTOR_VALID((*&Local_13 + 732)[22]))
					{
						DESTROY_ACTOR((*&Local_13 + 732)[22]);
					}
					if (IS_ACTOR_VALID((*&Local_13 + 732)[32]))
					{
						DESTROY_ACTOR((*&Local_13 + 732)[32]);
					}
					HUD_ENABLE(true);
					Function_324(&iLocal_1059, 1, 0, 4294967295, 4294967295);
					Function_291(1.0f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_558();
					Function_232(&bLocal_782);
					Function_232(&bLocal_791);
					iLocal_706 = 6;
				}
			}
			else
			{
				Function_231((*&Local_13 + 1900)[5]);
				Function_431(StackVal, StackVal, "$/cutscene/GUN_03_exit_train/GUN_03_exit_train", &iLocal_726, Function_231((*&Local_13 + 1900)[5]), 0, 200.0f, 400.0f, 2, 1, 2, 2, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (Function_283(&bLocal_791) <= 4.0f)
			{
				Function_415("Gun03_obj01d", 7,5f, 1, 2, 0, 0, 0);
				Function_232(&bLocal_782);
				Function_232(&bLocal_788);
				Function_232(&bLocal_791);
				iLocal_706 = 7;
			}
			break;
		
		case 0x00000007:
			if (GET_TASK_STATUS(bLocal_727, 0) == 4)
			{
				TASK_CLEAR(bLocal_727);
				if (IS_ACTOR_VALID(bLocal_728))
				{
					if (IS_ACTOR_ALIVE(bLocal_728))
					{
						TASK_MOUNT(bLocal_727, bLocal_728, 0, 0, 1, 1);
					}
					else
					{
						Function_238("Gun03_killed_ally_horse");
						bLocal_715 = true;
					}
				}
			}
			if ((IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && !IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_727)) && iLocal_1057 != 0)
			{
				Function_324(&iLocal_1059, 11, 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				Function_215(5, 1, 1);
				if (IS_BLIP_VALID(bLocal_847))
				{
					REMOVE_BLIP(bLocal_847);
				}
				iLocal_1057 = 1;
			}
			if ((IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_727) && !IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573)) && !iLocal_879[0])
			{
				TASK_CLEAR(bLocal_727);
				DECOR_SET_BOOL(GET_MOUNT(bLocal_727), "bNoInjuryEjection", true);
				MEMORY_PREFER_RIDING(bLocal_727, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_727, Local_13.f_2624, 4, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_727, true);
				Function_232(&bLocal_788);
				iLocal_879[0] = 1;
			}
			if ((((IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_727) && !IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573)) && Function_283(&bLocal_788) <= 5.0f) && IS_ACTOR_VALID(bLocal_728)) && !iLocal_879[4])
			{
				Function_557();
				iLocal_879[4] = 1;
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_727))
			{
				if (IS_BLIP_VALID(bLocal_847))
				{
					REMOVE_BLIP(bLocal_847);
				}
				if (!iLocal_879[0])
				{
					TASK_CLEAR(bLocal_727);
					DECOR_SET_BOOL(GET_MOUNT(bLocal_727), "bNoInjuryEjection", true);
					MEMORY_PREFER_RIDING(bLocal_727, true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_727, Local_13.f_2624, 4, 0, 0, 1, false);
				}
				else
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_727);
				}
				Function_324(&iLocal_1059, 11, 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				Function_215(5, 1, 1);
				Function_556();
				Function_232(&bLocal_788);
				Function_232(&bLocal_791);
				iLocal_706 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_283(&bLocal_791) <= 6.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_415("Gun03_obj01_FollowLandon", 7,5f, 1, 2, 0, 0, 0);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_727, -1.0f, -1.0f, 4, 1, 1);
				iLocal_857 = 1;
				Function_232(&bLocal_782);
				Function_232(&bLocal_788);
				Function_232(&bLocal_791);
				iLocal_706 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_283(&bLocal_782) <= 5.0f)
			{
				if (!bLocal_894)
				{
					Function_509();
					Function_232(&bLocal_791);
					iLocal_706 = 10;
				}
				else if (Function_555(Global_34573, (*&Local_13 + 1900)[17], 110.0f))
				{
					Function_509();
					Function_232(&bLocal_791);
					iLocal_706 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (!bLocal_894)
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1456)[7]))
				{
					Function_227(Global_34207);
					Function_225(Global_34207);
					Function_232(&bLocal_782);
					iLocal_706 = 11;
				}
			}
			else if (Function_283(&bLocal_782) > 900.0f)
			{
				if (!iLocal_879[11])
				{
					if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
					{
						Function_554();
						iLocal_879[11] = 1;
					}
				}
				if (Function_553(Global_34573, (*&Local_13 + 1900)[17]) > 100.0f)
				{
					if (IS_ACTOR_VALID((*&Local_13 + 732)[02]))
					{
						DESTROY_ACTOR((*&Local_13 + 732)[02]);
					}
					if (IS_ACTOR_VALID((*&Local_13 + 732)[12]))
					{
						DESTROY_ACTOR((*&Local_13 + 732)[12]);
					}
					if (IS_ACTOR_VALID((*&Local_13 + 732)[22]))
					{
						DESTROY_ACTOR((*&Local_13 + 732)[22]);
					}
					if (IS_ACTOR_VALID((*&Local_13 + 732)[32]))
					{
						DESTROY_ACTOR((*&Local_13 + 732)[32]);
					}
					TELEPORT_ACTOR_WITH_HEADING(bLocal_727, -409,783f, 24,196f, 3912,021f, 117,782f, 1, true, 1);
					if (Function_434(bLocal_727, -409,783f, 24,196f, 3912,021f, 20.0f))
					{
						bLocal_837 = false;
						while (bLocal_837 <= GET_NUM_AVAILABLE_SEATS(Function_313(Global_34207)))
						{
							ENABLE_VEHICLE_SEAT(Function_313(Global_34207), bLocal_837, 1);
							bLocal_837++;
						}
						Function_227(Global_34207);
						TRAIN_SET_AUTOPILOT_ENABLE(Global_34207, 1);
						TRAIN_SET_ENGINE_ENABLED(Global_34207, 1);
						Function_225(Global_34207);
						TASK_PRIORITY_SET(bLocal_727, true);
						TASK_CLEAR(bLocal_727);
						TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
						Function_415("Gun03_obj02_slaughter", 0x40f00000, 1, 2, 0, 0, 0);
						Function_215(5, 1, 1);
						SET_ACTOR_FACTION(bLocal_727, 20);
						SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
						Function_224();
						if (IS_BLIP_VALID(bLocal_849))
						{
							REMOVE_BLIP(bLocal_849);
						}
						Function_232(&bLocal_782);
						iLocal_706 = 11;
					}
				}
			}
			else
			{
				Function_238("gun03_timeout");
				bLocal_715 = true;
			}
			break;
		
		case 0x0000000B:
			if (bLocal_894)
			{
				if (!Function_434(bLocal_727, -409,783f, 24,196f, 3912,021f, 20.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(bLocal_727, -409,783f, 24,196f, 3912,021f, 117,782f, 1, true, 1);
				}
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_283(&bLocal_782) < 5.0f)
			{
				Function_232(&bLocal_782);
				iLocal_706 = 12;
			}
			break;
		
		case 0x0000000C:
			if (bLocal_894)
			{
				if (!Function_434(bLocal_727, -409,783f, 24,196f, 3912,021f, 20.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(bLocal_727, -409,783f, 24,196f, 3912,021f, 117,782f, 1, true, 1);
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && !IS_ACTOR_VALID(bLocal_832))
			{
				bLocal_832 = GET_MOUNT(Global_34573);
			}
			if ((!iLocal_879[1] && !bLocal_894) && Function_283(&bLocal_782) <= 5.0f)
			{
				Function_324(&iLocal_1059, 6, 0, 4294967295, 4294967295);
				Function_552();
				iLocal_879[1] = 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1456)[11]))
			{
				Function_497();
				iLocal_910 = 1;
				iLocal_877 = 1;
				HUD_CLEAR_OBJECTIVE();
				Function_324(&iLocal_1059, 6, 0, 4294967295, 4294967295);
				Function_215(5, 1, 1);
				Function_232(&bLocal_782);
				iLocal_706 = 13;
			}
			break;
		
		case 0x0000000D:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1456)[0]) || (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_13 + 1456)[0]) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1456)[16])))
			{
				ACTOR_HOLSTER_WEAPON(Global_34573, 1);
				TASK_DRAW_HOLSTER_WEAPON(Global_34573, 0);
				Function_324(&iLocal_1059, 0, 0, 4294967295, 4294967295);
				Function_232(&bLocal_782);
				iLocal_706 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_223();
			iLocal_874 = 0;
			iLocal_730[2] = 1;
			Function_232(&bLocal_782);
			iLocal_705 = 2;
			iLocal_706 = 0;
			break;
	}
	return;
}

void Function_552() //Position: 0x1C16A / 115050
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_RideIntoElMat", "Gun03_RideIntoElMat", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_553(bool bParam0, bool bParam1) //Position: 0x1C1B9 / 115129
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_357(bParam0);
			vVar0 = { StackVal, StackVal, Function_357(bParam0) };
			Function_561(bParam1);
			vVar3 = { StackVal, StackVal, Function_561(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_554() //Position: 0x1C259 / 115289
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_JumpsHorseTrain", "Gun03_JumpsHorseTrain", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_555(bool bParam0, bool bParam1, float fParam2) //Position: 0x1C2AC / 115372
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_357(bParam0);
			Function_561(bParam1);
			if (VDIST(Function_357(bParam0), Function_561(bParam1)) >= fParam2)
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

void Function_556() //Position: 0x1C3C6 / 115654
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SettOffElMat", "Gun03_SettOffElMat", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_557() //Position: 0x1C413 / 115731
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_WaitingJonMountHors", "Gun03_WaitingJonMountHors", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x1C46E / 115822
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ArrivesCasaMa", "Gun03_ArrivesCasaMa", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x1C4BD / 115901
{
	Local_13.f_728 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_13, "Horses"));
	(*&Local_13 + 716)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "CompanionHorse", 976, -403,1336f, 21,08235f, 4039,019f, 0.0f, 45,85695f, 0.0f);
	SQUAD_JOIN((*&Local_13 + 716)[02], Local_13.f_728);
	ACCESSORIZE_HORSE((*&Local_13 + 716)[02], 3);
	return;
}

void Function_560(bool bParam0) //Position: 0x1C52D / 116013
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

vector3 Function_561(bool bParam0) //Position: 0x1C571 / 116081
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

int Function_562() //Position: 0x1C5DD / 116189
{
	Function_341(&Local_13 + 176, 976, 2, 0);
	Function_341(&Local_13 + 176, 48, 2, 0);
	Function_341(&Local_13 + 176, 54, 2, 0);
	Function_341(&Local_13 + 176, 268, 2, 0);
	Function_341(&Local_13 + 176, 291, 2, 0);
	Function_341(&Local_13 + 176, 650, 2, 0);
	Function_341(&Local_13 + 176, 651, 2, 0);
	if (Function_336(&Local_13 + 176))
	{
		return 1;
	}
	return 0;
}

bool Function_563(bool bParam0, bool bParam1) //Position: 0x1C649 / 116297
{
	bool bVar0;
	
	Function_197(16384);
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

bool Function_564(bool bParam0) //Position: 0x1C6BC / 116412
{
	if (!Function_81(bParam0))
	{
		return 0;
	}
	return Function_159(&(Global_29008[bParam0]), 4096);
}

void Function_565() //Position: 0x1C6DA / 116442
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_283(&bLocal_782) <= 5.0f && !iLocal_879[8])
		{
			Function_570();
			iLocal_879[8] = 1;
		}
	}
	if (iLocal_879[8])
	{
		if (Function_405(Global_34573, bLocal_727) < 30.0f)
		{
			if (!iLocal_915)
			{
				Function_569();
				iLocal_915 = 1;
			}
		}
		else
		{
			if (iLocal_915)
			{
				Function_568();
				iLocal_915 = 0;
			}
			if (!Function_285(&iLocal_807))
			{
				Function_286(&iLocal_807, 13,1f);
			}
			else if (Function_283(&iLocal_807) < 13.0f)
			{
				if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_727, 1))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_396();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "Gun03_GunOnRickB4Caves", "Gun03_GunOnRickB4Caves", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					Function_232(&iLocal_807);
				}
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					if (IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(Global_34573)))
					{
						if (DECOR_CHECK_EXIST(Global_34573, "beingBucked"))
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "Gun03_OffHorseElMat", "Gun03_OffHorseElMat", 0, 1, 0, 0, 1, 0, 0, 1000, 0, 0);
							}
							else
							{
								Function_567();
							}
							Function_232(&iLocal_807);
						}
						else
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "Gun03_ThrownHorseElMat", "Gun03_ThrownHorseElMat", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
							}
							else
							{
								Function_566();
							}
							Function_232(&iLocal_807);
						}
					}
				}
			}
		}
	}
	return;
}

void Function_566() //Position: 0x1C8A2 / 116898
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ThrownHorseElMat", "Gun03_ThrownHorseElMat", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_567() //Position: 0x1C8F7 / 116983
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_OffHorseElMat", "Gun03_OffHorseElMat", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x1C946 / 117062
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ComesBackRideElMat", "Gun03_ComesBackRideElMat", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_569() //Position: 0x1C99F / 117151
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_WrongDirElMat", "Gun03_WrongDirElMat", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_570() //Position: 0x1C9EE / 117230
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_BanterWayElMat_v1_AA1", "Gun03_BanterWayElMat_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_BanterWayElMat_v1_AA2", "Gun03_BanterWayElMat_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_BanterWayElMat_v1_AA3", "Gun03_BanterWayElMat_v1_AA3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun03_BanterWayElMat_v1_AB", "Gun03_BanterWayElMat_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun03_BanterWayElMat_v1_AC", "Gun03_BanterWayElMat_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_BanterWayElMat_v1_AD1", "Gun03_BanterWayElMat_v1_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_BanterWayElMat_v1_AD2", "Gun03_BanterWayElMat_v1_AD2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun03_BanterWayElMat_v1_AE", "Gun03_BanterWayElMat_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_BanterWayElMat_v1_AF1", "Gun03_BanterWayElMat_v1_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_BanterWayElMat_v1_AF2", "Gun03_BanterWayElMat_v1_AF2", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_571() //Position: 0x1CCB4 / 117940
{
	if (iLocal_874 == 0)
	{
		if (GET_TASK_STATUS(bLocal_727, 43) == 0)
		{
			bLocal_831 = GET_MOUNT(bLocal_727);
			TASK_STAND_STILL(bLocal_831, -1.0f, 0, 0);
			TASK_CLEAR(bLocal_727);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 1);
			Function_231((*&Local_13 + 1900)[13]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 1900)[13]) };
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_DISMOUNT(false, 1);
			TASK_GO_TO_OBJECT(false, (*&Local_13 + 1900)[18], 1, 0, 1);
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			MEMORY_PREFER_WALKING(bLocal_727, false);
			iLocal_874 = 1;
		}
	}
	else if (iLocal_874 == 1)
	{
		if (!IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_727) && iLocal_877)
		{
			Function_572();
			iLocal_879[2] = 1;
			if (iLocal_857)
			{
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_727);
				iLocal_857 = 0;
			}
			TASK_CLEAR(bLocal_727);
			bLocal_835 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(false, (*&Local_13 + 1900)[18], 1, 1, 1);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_13.f_2556), "UseCase1", 4294967295, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_835);
			TASK_SEQUENCE_RELEASE(bLocal_835, 1);
			TASK_PRIORITY_SET(bLocal_727, true);
			Function_232(&bLocal_788);
			CLEAR_ACTOR_MAX_SPEED(bLocal_727);
			iLocal_874 = 2;
		}
	}
	return;
}

void Function_572() //Position: 0x1CDEA / 118250
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_Look4Carlos", "Gun03_Look4Carlos", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_573() //Position: 0x1CE35 / 118325
{
	vector3 vVar0;
	
	Function_590();
	if (!iLocal_918)
	{
		if (!IS_ACTOR_VALID(bLocal_834))
		{
			bLocal_834 = Function_534(&Global_6815, &Global_7954, 0, 0, 0, 1);
		}
		else
		{
			Function_231((*&Local_13 + 1816)[18]);
			vVar0 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[18]) };
			bLocal_864 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/stand_bartender_bar_work", &vVar0, 10.0f, 0);
			if (IS_GRINGO_VALID(bLocal_864))
			{
				SNAP_ACTOR_TO_GRINGO(bLocal_834, GET_OBJECT_FROM_GRINGO(bLocal_864), "UseCase1", true, 1, 1);
				TASK_USE_GRINGO(bLocal_834, bLocal_864, "UseCase1", 4294967295, 1);
				iLocal_918 = 1;
			}
		}
	}
	if (iLocal_706 < 8 && iLocal_706 >= 9)
	{
		if (Function_443(Global_34573, Function_313(Global_34207), 20.0f))
		{
			Function_231((*&Local_13 + 1412)[6]);
			if (Function_431(StackVal, StackVal, "$/cutscene/GUN_03_enter_train/GUN_03_enter_train", &iLocal_726, Function_231((*&Local_13 + 1412)[6]), 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
			{
			}
		}
	}
	switch (iLocal_706)
	{
		case 0x00000000:
			Function_344(0);
			if (!HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_ACTOR_FACTION(bLocal_727, 20);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_729 = Global_30633[2];
			if (!Function_343(iLocal_729))
			{
				Function_342(&Local_698);
			}
			Global_63097 = 0;
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Global_3422[3240] + 52), 0.0f, 1, true, 1);
			Function_232(&bLocal_782);
			iLocal_706 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_343(iLocal_729) || iLocal_729 != 4294967295)) && Function_562())
			{
				Function_232(&bLocal_782);
				iLocal_706 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_450(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_698, iLocal_705))
			{
				Function_588();
				Function_232(&bLocal_782);
				iLocal_706 = 3;
			}
			else
			{
				Function_587(Global_34207, 16, 0);
				Function_587(Global_34207, 2048, 0);
				bLocal_843 = Function_563(Global_34207, 0);
				if (IS_OBJECT_VALID(bLocal_843))
				{
					Function_588();
					Function_586();
					if (!Function_585((*&Local_13 + 732)[02], Function_313(Global_34207), 1))
					{
						Function_584(&Local_13 + 732[02]);
						SET_ACTOR_IN_VEHICLE((*&Local_13 + 732)[02], Function_313(Global_34207), true);
						Function_583((*&Local_13 + 732)[02]);
					}
					if (!Function_585((*&Local_13 + 732)[12], Function_313(Global_34207), 12))
					{
						Function_584(&Local_13 + 732[12]);
						SET_ACTOR_IN_VEHICLE((*&Local_13 + 732)[12], Function_313(Global_34207), 12);
						Function_583((*&Local_13 + 732)[12]);
					}
					if (!Function_585((*&Local_13 + 732)[22], Function_313(Global_34207), 8))
					{
						Function_584(&Local_13 + 732[22]);
						SET_ACTOR_IN_VEHICLE((*&Local_13 + 732)[22], Function_313(Global_34207), 8);
						Function_583((*&Local_13 + 732)[22]);
					}
					if (!Function_585((*&Local_13 + 732)[32], Function_313(Global_34207), 6))
					{
						Function_584(&Local_13 + 732[32]);
						SET_ACTOR_IN_VEHICLE((*&Local_13 + 732)[32], Function_313(Global_34207), 6);
						Function_583((*&Local_13 + 732)[32]);
					}
					bLocal_837 = false;
					while (bLocal_837 <= (GET_NUM_AVAILABLE_SEATS(Function_313(Global_34207)) - 4))
					{
						ENABLE_VEHICLE_SEAT(Function_313(Global_34207), bLocal_837, 0);
						bLocal_837++;
					}
					ENABLE_VEHICLE_SEAT(Function_313(Global_34207), 4, 1);
					TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
					Function_316((*&Local_13 + 1816)[7]);
					vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1816)[7]) };
					UNK_0x44986367(&vLocal_819, vLocal_822.y);
					Function_231((*&Local_13 + 1816)[7]);
					vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[7]) };
					TRAIN_SET_POSITION_DIRECTION_PRECISELY(Global_34207, &vLocal_822, &vLocal_819, 14);
					Function_231((*&Local_13 + 1816)[9]);
					vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[9]) };
					TRAIN_SET_TARGET_POS(Global_34207, &vLocal_822);
					TRAIN_SET_ENGINE_ENABLED(Global_34207, 1);
					TRAIN_SET_AUTOPILOT_ENABLE(Global_34207, 1);
					TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
					TRAIN_SET_SPEED(Global_34207, 0.0f);
					vLocal_819 = { 0.0f, 0.0f, 0.0f };
					TASK_CLEAR(bLocal_727);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_727, "gun03_train_wave", 1);
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_727, true);
					SET_ACTOR_CAN_PLAY_GESTURES(bLocal_727, false);
					bLocal_838 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_13.f_2616, 1, 1, 0, 1, false);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, Function_313(Global_34207), 16, 1, 0);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, Function_313(Global_34207), 11, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_838);
					TASK_SEQUENCE_RELEASE(bLocal_838, 1);
					TASK_PRIORITY_SET(bLocal_727, true);
					ACTOR_POP_NEXT_GAIT(bLocal_727, 1, false);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
					Function_232(&bLocal_782);
					iLocal_706 = 6;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_287("$/cutscene/GUN_03/GUN_03", &Local_707, &Local_698, &iLocal_705, 59856, 96406, 85988, 56586, 56326, 85981, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_232(&bLocal_782);
				iLocal_706 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_450(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_698, iLocal_705))
			{
				Function_587(Global_34207, 16, 0);
				Function_587(Global_34207, 2048, 0);
				bLocal_843 = Function_563(Global_34207, 0);
				if (IS_OBJECT_VALID(bLocal_843))
				{
					bLocal_837 = false;
					while (bLocal_837 <= (GET_NUM_AVAILABLE_SEATS(Function_313(Global_34207)) - 4))
					{
						ENABLE_VEHICLE_SEAT(Function_313(Global_34207), bLocal_837, 0);
						bLocal_837++;
					}
					ENABLE_VEHICLE_SEAT(Function_313(Global_34207), 4, 1);
					Function_586();
					if (!Function_585((*&Local_13 + 732)[02], Function_313(Global_34207), 1))
					{
						Function_584(&Local_13 + 732[02]);
						SET_ACTOR_IN_VEHICLE((*&Local_13 + 732)[02], Function_313(Global_34207), true);
						Function_583((*&Local_13 + 732)[02]);
					}
					if (!Function_585((*&Local_13 + 732)[12], Function_313(Global_34207), 12))
					{
						Function_584(&Local_13 + 732[12]);
						SET_ACTOR_IN_VEHICLE((*&Local_13 + 732)[12], Function_313(Global_34207), 12);
						Function_583((*&Local_13 + 732)[12]);
					}
					if (!Function_585((*&Local_13 + 732)[22], Function_313(Global_34207), 8))
					{
						Function_584(&Local_13 + 732[22]);
						SET_ACTOR_IN_VEHICLE((*&Local_13 + 732)[22], Function_313(Global_34207), 8);
						Function_583((*&Local_13 + 732)[22]);
					}
					if (!Function_585((*&Local_13 + 732)[32], Function_313(Global_34207), 6))
					{
						Function_584(&Local_13 + 732[32]);
						SET_ACTOR_IN_VEHICLE((*&Local_13 + 732)[32], Function_313(Global_34207), 6);
						Function_583((*&Local_13 + 732)[32]);
					}
					TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
					Function_316((*&Local_13 + 1816)[7]);
					vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1816)[7]) };
					UNK_0x44986367(&vLocal_819, vLocal_822.y);
					Function_231((*&Local_13 + 1816)[7]);
					vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[7]) };
					TRAIN_SET_POSITION_DIRECTION_PRECISELY(Global_34207, &vLocal_822, &vLocal_819, 14);
					Function_231((*&Local_13 + 1816)[9]);
					vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[9]) };
					TRAIN_SET_TARGET_POS(Global_34207, &vLocal_822);
					TRAIN_SET_ENGINE_ENABLED(Global_34207, 1);
					TRAIN_SET_AUTOPILOT_ENABLE(Global_34207, 1);
					TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
					TRAIN_SET_SPEED(Global_34207, 0.0f);
					vLocal_819 = { 0.0f, 0.0f, 0.0f };
					Function_244(iLocal_705);
					Function_418(StackVal, StackVal, Function_244(iLocal_705), iLocal_705, Global_30633[2], Function_246(iLocal_705), 0);
					Function_291(1.0f);
					Function_215(5, 1, 1);
					if (!IS_BLIP_VALID(bLocal_849))
					{
						vLocal_853 = { -414,16f, 23,769f, 3913,01f };
						bLocal_849 = ADD_BLIP_FOR_COORD(&vLocal_853, 330, 0, 2, 0);
					}
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_232(&bLocal_782);
					iLocal_706 = 7;
				}
			}
			else
			{
				Function_244(iLocal_705);
				Function_418(StackVal, StackVal, Function_244(iLocal_705), iLocal_705, Global_30633[2], Function_246(iLocal_705), 0);
				Function_291(1.0f);
				Function_215(5, 1, 1);
				if (!IS_BLIP_VALID(bLocal_849))
				{
					vLocal_853 = { -414,16f, 23,769f, 3913,01f };
					bLocal_849 = ADD_BLIP_FOR_COORD(&vLocal_853, 330, 0, 2, 0);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_232(&bLocal_782);
				iLocal_706 = 7;
			}
			break;
		
		case 0x00000007:
			if (!HUD_IS_FADING())
			{
				Function_582();
				Function_324(&iLocal_1059, 1, 0, 4294967295, 4294967295);
				Function_232(&bLocal_782);
				iLocal_706 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_283(&bLocal_782) <= 6.0f)
			{
				Function_415("Gun03_obj01a", 7,5f, 1, 2, 0, 0, 0);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_727, true);
				Function_232(&bLocal_788);
				Function_232(&bLocal_782);
				iLocal_706 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_283(&bLocal_782) <= 12,5f && !iLocal_879[3])
			{
				Function_581();
				iLocal_879[3] = 1;
			}
			if (!Function_443(Global_34573, bLocal_727, 30.0f))
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else if (!Function_285(&iLocal_807))
			{
				Function_286(&iLocal_807, 13,1f);
			}
			else if (Function_283(&iLocal_807) < 13.0f)
			{
				if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_727, 1))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_396();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "Gun03_GunOnRickB4Caves", "Gun03_GunOnRickB4Caves", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					Function_232(&iLocal_807);
				}
			}
			if (!iLocal_903)
			{
				if (GET_TASK_STATUS(bLocal_727, 0) == 0)
				{
					bLocal_838 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, Function_313(Global_34207), 16, 1, 0);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, Function_313(Global_34207), 11, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_838);
					TASK_SEQUENCE_RELEASE(bLocal_838, 1);
					iLocal_903 = 1;
				}
			}
			else if (GET_TASK_STATUS(bLocal_727, 0) == 4)
			{
				if (!Function_585(bLocal_727, Function_313(Global_34207), 11))
				{
					TASK_CLEAR(bLocal_727);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_727, false);
					SET_ACTOR_IN_VEHICLE(bLocal_727, Function_313(Global_34207), 11);
				}
			}
			if (Function_443(Global_34573, bLocal_727, 80.0f) && !bLocal_894)
			{
				if (!IS_OBJECT_VALID(bLocal_841))
				{
					if (!IS_BLIP_VALID(bLocal_849))
					{
						vLocal_853 = { -414,16f, 23,769f, 3913,01f };
						bLocal_849 = ADD_BLIP_FOR_COORD(&vLocal_853, 330, 0, 2, 0);
						HUD_CLEAR_OBJECTIVE();
						Function_415("Gun03_obj01a", 7,5f, 1, 2, 0, 0, 0);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_727)))
					{
						Function_215(5, 1, 1);
					}
				}
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1412)[3]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1412)[4]))
				{
					if (!IS_OBJECT_VALID(bLocal_841))
					{
						HUD_CLEAR_OBJECTIVE();
						Function_415("Gun03_obj01_SitNextTo", 0x40f00000, 1, 2, 0, 0, 0);
						vLocal_868 = { 0.0f, 0,242f, 0,6f };
						GET_ACTOR_OFFSET_WORLD_COORDS(Function_313(Global_34207), &vLocal_868, &vLocal_871);
						Function_316((*&Local_13 + 1816)[3]);
						bLocal_841 = Function_488(StackVal, StackVal, StackVal, StackVal, bLocal_697, Function_53(), vLocal_871, Function_316((*&Local_13 + 1816)[3]), Global_34573, 1.0f, 1, 3, 330, 1, 0, 3212836864, 3212836864, 1);
						Function_215(5, 0, 1);
						Function_232(&bLocal_788);
						if (IS_BLIP_VALID(bLocal_849))
						{
							REMOVE_BLIP(bLocal_849);
						}
					}
				}
				else if (IS_OBJECT_VALID(bLocal_841))
				{
					Function_217(bLocal_841);
					iLocal_912 = 0;
				}
				if (Function_585(bLocal_727, Function_313(Global_34207), 11))
				{
					if (Function_283(&bLocal_788) < 4.0f)
					{
						Function_580();
						Function_232(&bLocal_788);
						Function_579(&bLocal_788);
					}
					if (!iLocal_912)
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1412)[3]))
						{
							SET_ACTION_NODE_FOR_ACTOR(bLocal_727, "gun03_train_wave/back");
							iLocal_912 = 1;
						}
						else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1412)[4]))
						{
							SET_ACTION_NODE_FOR_ACTOR(bLocal_727, "gun03_train_wave/front");
							iLocal_912 = 1;
						}
					}
				}
				else if (!IS_VOLUME_VALID(bLocal_803))
				{
					bLocal_803 = CREATE_VOLUME_IN_LAYOUT(Local_13, "LandonTrainCarBaggage", 2, -2696.0f, 34.0f, 4210.0f, 0.0f, 0.0f, 0.0f, 7,2f, 3,5f, 4.0f);
				}
				else if (IS_ACTOR_IN_VOLUME(bLocal_727, bLocal_803))
				{
					LOG_ERROR("Landon ventured into the baggage train car. Warping him into his seat");
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_727, false);
					SET_ACTOR_IN_VEHICLE(bLocal_727, Function_313(Global_34207), 11);
				}
				if (IS_OBJECT_VALID(bLocal_841))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (GATEWAY_UPDATE(bLocal_841) || Function_578())
						{
							ACTOR_HOLSTER_WEAPON(Global_34573, 1);
							TASK_DRAW_HOLSTER_WEAPON(Global_34573, 0);
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							Function_248();
							Function_215(5, 0, 1);
							AI_SET_NAV_PATHFINDING_ENABLED(bLocal_727, true);
							iLocal_706 = 104;
							Function_232(&bLocal_782);
							Function_217(bLocal_841);
						}
					}
				}
			}
			else
			{
				if ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
					iLocal_726 = 0;
				}
				Function_509();
				TASK_CLEAR(bLocal_727);
				if (!Function_585(bLocal_727, Function_313(Global_34207), 11))
				{
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_727, false);
					SET_ACTOR_IN_VEHICLE(bLocal_727, Function_313(Global_34207), 11);
				}
				Function_197(1);
				Function_324(&iLocal_1059, 3, 0, 4294967295, 4294967295);
				Function_215(5, 0, 1);
				TRAIN_SET_ENGINE_ENABLED(Global_34207, 1);
				TRAIN_SET_AUTOPILOT_ENABLE(Global_34207, 1);
				TRAIN_SET_TARGET_SPEED(Global_34207, 10.0f);
				Function_576(StackVal, StackVal, vLocal_853, 0, 48, 1);
				bLocal_894 = true;
				iLocal_874 = 1;
				iLocal_705 = 1;
				iLocal_706 = 10;
			}
			break;
		
		case 0x00000068:
			if (Function_287("$/cutscene/GUN_03_enter_train/GUN_03_enter_train", &Local_707, &Local_698, &iLocal_705, 59856, 59849, 59584, 56586, 56326, 85981, 0, 1, 1, 2, 2, 0, 1))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_232(&bLocal_782);
				iLocal_706 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_291(0,5f);
			Function_232(&bLocal_782);
			iLocal_706 = 11;
			break;
		
		case 0x0000000B:
			if (Function_283(&bLocal_782) < 5.0f)
			{
				SET_ACTOR_IN_VEHICLE(Global_34573, Function_313(Global_34207), 4);
				if (IS_OBJECT_VALID(Global_63098))
				{
					DESTROY_OBJECT(Global_63098);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_157(Global_30633[1]);
				HUD_ENABLE(true);
				Function_316((*&Local_13 + 1816)[9]);
				vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1816)[9]) };
				bLocal_848 = ADD_BLIP_FOR_OBJECT((*&Local_13 + 1816)[9], 330, 0f, 2, 0);
				Function_324(&iLocal_1059, 5, 0, 4294967295, 4294967295);
				Function_232(&bLocal_782);
				Function_232(&bLocal_788);
				Function_232(&bLocal_791);
				iLocal_706 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_231((*&Local_13 + 1816)[9]);
			vLocal_819 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[9]) };
			Function_561(bLocal_843);
			if (VDIST(Function_561(bLocal_843), vLocal_819) >= 175.0f)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_806))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_806);
				}
				Function_231((*&Local_13 + 1900)[5]);
				if (Function_431(StackVal, StackVal, "$/cutscene/GUN_03_exit_train/GUN_03_exit_train", &iLocal_726, Function_231((*&Local_13 + 1900)[5]), 0, 174.0f, 300.0f, 2, 1, 2, 2, 0, 1))
				{
				}
			}
			else if (Function_283(&bLocal_782) < 1,2f)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_806))
				{
					bLocal_806 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, 6, false, 0, 0, 0, 4294967295, 0);
				}
			}
			if (Function_283(&bLocal_782) < 1,2f)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_806))
				{
					if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_806))
					{
						if ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
						{
							CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
						}
						Function_575();
						Function_85(17, 1, 0, 0);
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_806);
						iLocal_856 = 1;
						Function_232(&bLocal_782);
						iLocal_706 = 105;
					}
				}
			}
			Function_561(bLocal_843);
			if (VDIST(Function_561(bLocal_843), vLocal_819) >= 120.0f)
			{
				TRAIN_SET_TARGET_SPEED(Global_34207, 5.0f);
				if (IS_BLIP_VALID(bLocal_848))
				{
					REMOVE_BLIP(bLocal_848);
				}
				Function_232(&bLocal_782);
				iLocal_730[0] = 1;
				iLocal_705 = 1;
				iLocal_706 = 2;
			}
			break;
		
		case 0x0000000D:
			break;
		
		case 0x00000069:
			if ((iLocal_856 && !IS_SCRIPTED_CONVERSATION_ONGOING()) || (iLocal_856 && Function_283(&bLocal_782) < 5.0f))
			{
				Function_357(Global_34573);
				Function_574(VDIST(Function_357(Global_34573), vLocal_819));
				Function_248();
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_232(&bLocal_782);
				iLocal_706 = 106;
			}
			else if (!iLocal_856)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_232(&bLocal_782);
				iLocal_706 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				if (IS_ACTOR_VALID((*&Local_13 + 732)[02]))
				{
					RELEASE_ACTOR((*&Local_13 + 732)[02]);
				}
				if (IS_ACTOR_VALID((*&Local_13 + 732)[12]))
				{
					RELEASE_ACTOR((*&Local_13 + 732)[12]);
				}
				if (IS_ACTOR_VALID((*&Local_13 + 732)[22]))
				{
					RELEASE_ACTOR((*&Local_13 + 732)[22]);
				}
				if (IS_ACTOR_VALID((*&Local_13 + 732)[32]))
				{
					RELEASE_ACTOR((*&Local_13 + 732)[32]);
				}
				vLocal_819 = { 0.0f, 0.0f, 0.0f };
				TASK_CLEAR(bLocal_727);
				Function_229(bLocal_727, (*&Local_13 + 1816)[17], 1, 1, 1);
				TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_727, true);
				TASK_CLEAR(Global_34573);
				Function_229(Global_34573, (*&Local_13 + 1816)[16], 1, 1, 1);
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				Function_316((*&Local_13 + 1816)[13]);
				vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1816)[13]) };
				UNK_0x44986367(&vLocal_819, vLocal_822.y);
				Function_231((*&Local_13 + 1816)[13]);
				vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[13]) };
				TRAIN_SET_POSITION_DIRECTION(Global_34207, &vLocal_822, &vLocal_819);
				Function_231((*&Local_13 + 1816)[9]);
				vLocal_822 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[9]) };
				TRAIN_SET_TARGET_SPEED(Global_34207, 0.0f);
				TRAIN_SET_SPEED(Global_34207, 0.0f);
				Function_209(&Global_6815, &Global_7954, bLocal_834, 0);
				Function_232(&bLocal_782);
				iLocal_730[0] = 1;
				iLocal_705 = 1;
				iLocal_706 = 0;
			}
			break;
	}
	return;
}

void Function_574(bool bParam0) //Position: 0x1DFC4 / 122820
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

void Function_575() //Position: 0x1DFDC / 122844
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SkipsTrainJourney", "Gun03_SkipsTrainJourney", false, 4, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_576(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x1E033 / 122931
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = uParam3;
	Global_28185.f_16 = uParam4;
	if (uParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (uParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_577(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_577(bool bParam0) //Position: 0x1E0EF / 123119
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

int Function_578() //Position: 0x1E12F / 123183
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_13 + 1412)[8]))
	{
		return 1;
	}
	return 0;
}

void Function_579(int iParam0) //Position: 0x1E14D / 123213
{
	if (Function_285(iParam0))
	{
		if (!Function_284(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_76(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_580() //Position: 0x1E20C / 123404
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_WaitingSitTrain", "Gun03_WaitingSitTrain", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581() //Position: 0x1E25F / 123487
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SpecialBant_v1_AA", "Gun03_SpecialBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun03_SpecialBant_v1_AB", "Gun03_SpecialBant_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SpecialBant_v1_AC", "Gun03_SpecialBant_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun03_SpecialBant_v1_AD", "Gun03_SpecialBant_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SpecialBant_v1_AE", "Gun03_SpecialBant_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun03_SpecialBant_v1_AF", "Gun03_SpecialBant_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun03_SpecialBant_v1_AG", "Gun03_SpecialBant_v1_AG", false, 1, 0, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_582() //Position: 0x1E424 / 123940
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_TakeTrainOrSolo", "Gun03_TakeTrainOrSolo", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_583(bool bParam0) //Position: 0x1E477 / 124023
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

void Function_584(int iParam0) //Position: 0x1E4C3 / 124099
{
	if (!IS_ACTOR_VALID(*iParam0))
	{
		return;
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(*iParam0, true);
	if (IS_ACTOR_MALE(*iParam0))
	{
		SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(*iParam0, 1);
	}
	else
	{
		SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(*iParam0, 0);
	}
	Function_503(*iParam0, 0, 0, 0, 1, 0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(*iParam0);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(*iParam0, 1);
	TASK_FAILURE_MODE_SET(*iParam0, 0);
	return;
}

bool Function_585(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1E515 / 124181
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

void Function_586() //Position: 0x1E53C / 124220
{
	(*&Local_13 + 732)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "npassenger", 48, -2684,437f, 31,3633f, 4207,469f, 0.0f, 0.0f, 0.0f);
	(*&Local_13 + 732)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "passenger1", 54, -2685,025f, 32,08701f, 4209,78f, 0.0f, 0.0f, 0.0f);
	(*&Local_13 + 732)[22] = CREATE_ACTOR_IN_LAYOUT(Local_13, "passenger2", 268, -2688,508f, 31,28456f, 4207,282f, 0.0f, 0.0f, 0.0f);
	(*&Local_13 + 732)[32] = CREATE_ACTOR_IN_LAYOUT(Local_13, "passenger4", 291, -2690,423f, 31,34438f, 4206,25f, 0.0f, 0.0f, 0.0f);
	return;
}

void Function_587(int iParam0, int iParam1, bool bParam2) //Position: 0x1E5FB / 124411
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == Global_34207)
	{
		if (bParam2)
		{
			(&Global_34208 + 12)->f_616 = ((&Global_34208 + 12)->f_616 || iParam1);
		}
		else
		{
			(&Global_34208 + 12)->f_616 = ((&Global_34208 + 12)->f_616 - ((&Global_34208 + 12)->f_616 && iParam1));
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= 14)
			{
				if (SHIFT_LEFT(true, (&Global_34208 + 12 + 380[iVar04])->f_12) == iParam1)
				{
					TASK_VEHICLE_LEAVE(StackVal);
					if (IS_ACTOR_VALID(StackVal))
					{
						DESTROY_ACTOR(StackVal);
					}
				}
				iVar0++;
			}
		}
	}
	else if (iParam0 == Global_34206)
	{
		if (bParam2)
		{
			(&Global_34208 + 724)->f_616 = ((&Global_34208 + 724)->f_616 || iParam1);
		}
		else
		{
			(&Global_34208 + 724)->f_616 = ((&Global_34208 + 724)->f_616 - ((&Global_34208 + 724)->f_616 && iParam1));
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 14)
			{
				if (SHIFT_LEFT(true, (&Global_34208 + 724 + 380[iVar14])->f_12) == iParam1)
				{
					TASK_VEHICLE_LEAVE(StackVal);
					if (IS_ACTOR_VALID(StackVal))
					{
						DESTROY_ACTOR(StackVal);
					}
				}
				iVar1++;
			}
		}
	}
	return;
}

void Function_588() //Position: 0x1E751 / 124753
{
	Function_589();
	Function_231((*&Local_13 + 1816)[11]);
	vLocal_850 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[11]) };
	bLocal_862 = LOCATE_GRINGO_OF_TYPE("MEX_DRUNK_SITTABLE", &vLocal_850, 2.0f, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_13 + 768)[02], GET_OBJECT_FROM_GRINGO(bLocal_862), "UseCase1", true, 0, 0);
	Function_583((*&Local_13 + 768)[02]);
	Function_231((*&Local_13 + 1816)[12]);
	vLocal_850 = { StackVal, StackVal, Function_231((*&Local_13 + 1816)[12]) };
	bLocal_863 = LOCATE_GRINGO_OF_TYPE("MEX_DRUNK_SITTABLE", &vLocal_850, 2.0f, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_13 + 768)[12], GET_OBJECT_FROM_GRINGO(bLocal_863), "UseCase1", true, 0, 0);
	Function_583((*&Local_13 + 768)[12]);
	Function_229(Global_34573, (*&Local_13 + 1816)[4], 1, 1, 1);
	Function_229(bLocal_727, (*&Local_13 + 1816)[5], 1, 1, 1);
	Function_229(bLocal_728, (*&Local_13 + 1816)[6], 1, 1, 1);
	TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_727);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_727, 0);
	TASK_FACE_ACTOR(bLocal_727, Global_34573, 1, 3212836864);
	Function_363(&(Local_962[017]), bLocal_727, "Gunslinger", 0, 0x5f5e100, 1);
	return;
}

void Function_589() //Position: 0x1E893 / 125075
{
	(*&Local_13 + 768)[02] = CREATE_ACTOR_IN_LAYOUT(Local_13, "Emilio", 650, -2689,848f, 31,3633f, 4289,829f, 0.0f, 0.0f, 0.0f);
	(*&Local_13 + 768)[12] = CREATE_ACTOR_IN_LAYOUT(Local_13, "EmilioFriend", 651, -2690,423f, 31,34438f, 4288,61f, 0.0f, 0.0f, 0.0f);
	return;
}

void Function_590() //Position: 0x1E8F5 / 125173
{
	if (iLocal_706 <= 11)
	{
		if (iLocal_892 && iLocal_893)
		{
			if (Function_283(&bLocal_782) < 1,5f && Function_283(&bLocal_782) > 14.0f)
			{
				if (!iLocal_914)
				{
					if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX(Global_34573), 6, 0, 0))
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_SMALL_TEXT();
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_OUT(1.0f, 1f, 1);
						iLocal_914 = 1;
					}
				}
				else if (HUD_IS_FADED())
				{
					if (IS_BLIP_VALID(bLocal_849))
					{
						REMOVE_BLIP(bLocal_849);
					}
					Function_85(20, 1, 0, 0);
					Function_302(2, 0, 0, 0, 0, 1, 1, 1, 1, 1);
					Function_282();
					HUD_ENABLE(true);
					TRAIN_SET_ENGINE_ENABLED(Global_34207, 1);
					TRAIN_SET_TARGET_SPEED(Global_34207, 10.0f);
					TRAIN_SET_AUTOPILOT_ENABLE(Global_34207, 1);
					Function_316((*&Local_13 + 1816)[9]);
					vLocal_822 = { StackVal, StackVal, Function_316((*&Local_13 + 1816)[9]) };
					if (!IS_BLIP_VALID(bLocal_848))
					{
						bLocal_848 = ADD_BLIP_FOR_OBJECT((*&Local_13 + 1816)[9], 330, 0f, 2, 0);
					}
					Function_291(1.0f);
					iLocal_892 = 0;
					iLocal_893 = 0;
					Function_233(&bLocal_782, 17.0f);
					iLocal_706 = 11;
				}
			}
		}
	}
	return;
}

void Function_591() //Position: 0x1E9F4 / 125428
{
	switch (iLocal_706)
	{
		case 0x00000006:
			Function_615(&Local_698, 1);
			bLocal_697 = CREATE_LAYOUT(Function_53());
			Function_614();
			ENABLE_CHILD_SECTOR("emt_caveDoor01x");
			DISABLE_CHILD_SECTOR("emt_caveDoor02x");
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_1059 = 0;
			Function_197(16384);
			iLocal_706 = 7;
			break;
		
		case 0x00000007:
			iLocal_706 = 8;
			break;
		
		case 0x00000008:
			if (Function_609())
			{
				Function_597();
				iLocal_706 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(Local_13))
			{
				bLocal_781 = CREATE_OBJECT_ITERATOR(Local_13);
			}
			Function_162(32769);
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (!IS_ACTOR_VALID(bLocal_727))
			{
				bLocal_727 = Function_327(5, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			Function_215(5, 1, 1);
			Function_215(8, 0, 1);
			RESET_ACTOR_GAITS(bLocal_727, 0);
			SET_CRIPPLE_ENABLE(bLocal_727, 0);
			SET_ACTOR_FACTION(bLocal_727, 20);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_727, false);
			TASK_PRIORITY_SET(bLocal_727, true);
			TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_727, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_727, 50.0f);
			SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
			TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_727, 8, "FASTWALK");
			SET_ACTOR_UPDATE_PRIORITY(bLocal_727, false);
			RESET_ACTOR_GAITS(bLocal_728, 0);
			TASK_PRIORITY_SET(bLocal_728, true);
			TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_728, 50.0f);
			SET_ACTOR_HEALTH(bLocal_728, GET_ACTOR_MAX_HEALTH(bLocal_728));
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_727, Global_34573, 60.0f, 10.0f, 50.0f);
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_727);
			bLocal_839 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_697, "ncompsquad"));
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_829, 0);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1412)[1]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1412)[1]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_13 + 1412)[1], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_13 + 1380)[5]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1380)[5]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1380)[5]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_13 + 1380)[5], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_13 + 1532)[0]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1532)[0]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1532)[0]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_13 + 1532)[0], 15);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1696)[6]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1696)[6]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_13 + 1696)[6], 15);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1696)[6]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1696)[6]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_13 + 1696)[6], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_13 + 1412)[7]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1412)[7]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_13 + 1412)[7]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_13 + 1412)[7], 15);
			Function_595(&uLocal_922, bLocal_697);
			Function_430(&bLocal_782);
			Function_430(&fLocal_785);
			Function_430(&bLocal_788);
			Function_430(&bLocal_791);
			Function_430(&bLocal_813);
			Function_430(&bLocal_794);
			Function_430(&bLocal_797);
			TOGGLE_COVER_PROPS(0);
			iLocal_874 = 0;
			iLocal_875 = 4294967295;
			iLocal_705 = iLocal_724;
			iLocal_706 = 0;
			Function_593(&Local_698, &iLocal_705, &iLocal_706);
			Function_592(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_698);
			switch (iLocal_705)
			{
				case 0x00000000:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					Function_229(Global_34573, (*&Local_13 + 2116)[11], 1, 1, 1);
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
			if (Local_698.f_24 == 4)
			{
				Function_229(Global_34573, (*&Local_13 + 1992)[4], 1, 1, 1);
				Function_229(bLocal_727, (*&Local_13 + 1992)[5], 1, 1, 1);
				iLocal_706 = 12;
			}
			break;
	}
	return;
}

void Function_592(struct<25> Param0) //Position: 0x1EDAE / 126382
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_705 = 0;
			break;
		
		case 0x00000002:
			iLocal_705 = 2;
			break;
		
		case 0x00000003:
			iLocal_705 = 3;
			break;
		
		case 0x00000004:
			iLocal_705 = 4;
			break;
		
		case 0x00000005:
			iLocal_705 = 4;
			break;
		
		case 0x00000006:
			iLocal_705 = 5;
			break;
		
		case 0x00000007:
			iLocal_705 = 6;
			break;
		
		case 0x00000008:
			iLocal_705 = 7;
			break;
		
		case 0x00000009:
			iLocal_705 = 8;
			break;
		
		case 0x0000000A:
			iLocal_705 = 101;
			break;
	}
}

void Function_593(int iParam0, var uParam1, int iParam2) //Position: 0x1EE43 / 126531
{
	if (Function_296(iParam0))
	{
		*uParam1 = Function_451(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_594();
	}
	return;
}

void Function_594() //Position: 0x1EE77 / 126583
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

int Function_595(var uParam0, bool bParam1) //Position: 0x1EEC8 / 126664
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_596(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_596(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_596(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_596(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1F568 / 128360
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

void Function_597() //Position: 0x1F62B / 128555
{
	var uVar0;
	
	Function_608(4, 1);
	uVar0 = uVar0;
	Local_13 = CREATE_LAYOUT("Gun03_layout");
	Local_13.f_1408 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "CutsceneVol_set");
	(*&Local_13 + 1380)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Cutscene01Vol", 2, -2685,231f, 32,50514f, 4216,396f, 0.0f, -11,55684f, 0.0f, 11,43215f, 6.0f, 5,518432f);
	ADD_TO_VOLUME_SET(Local_13.f_1408, (*&Local_13 + 1380)[0]);
	(*&Local_13 + 1380)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Cutscene02Vol", 2, -425,1237f, 23,09019f, 4012,801f, 0.0f, -49,26702f, 0.0f, 30,87534f, 6.0f, 10,73514f);
	ADD_TO_VOLUME_SET(Local_13.f_1408, (*&Local_13 + 1380)[1]);
	(*&Local_13 + 1380)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "trainarrivalVol", 2, -802,8974f, 13,18986f, 3781,645f, 0.0f, -133,8604f, 0.0f, 22,38633f, 2,707919f, 8,061681f);
	ADD_TO_VOLUME_SET(Local_13.f_1408, (*&Local_13 + 1380)[2]);
	(*&Local_13 + 1380)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Cutscene10Vol", 2, -230,1292f, 30,90152f, 3616f, 0.0f, 57,07958f, 0.0f, 11,93224f, 6.0f, 10,54885f);
	ADD_TO_VOLUME_SET(Local_13.f_1408, (*&Local_13 + 1380)[3]);
	(*&Local_13 + 1380)[4] = CREATE_VOLUME_IN_LAYOUT(Local_13, "caveagrobox", 2, -366,4774f, 16,94271f, 3945,918f, 0.0f, 86.0f, 0.0f, 10,76027f, 11,94619f, 11,22717f);
	ADD_TO_VOLUME_SET(Local_13.f_1408, (*&Local_13 + 1380)[4]);
	(*&Local_13 + 1380)[5] = CREATE_VOLUME_IN_LAYOUT(Local_13, "introVol", 2, -2688,283f, 32,14169f, 4288,949f, 0.0f, -1,278747f, 0.0f, 13,02267f, 11,33665f, 11,39821f);
	ADD_TO_VOLUME_SET(Local_13.f_1408, (*&Local_13 + 1380)[5]);
	Local_13.f_1452 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "StageOneVols_set");
	(*&Local_13 + 1412)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "TrainStation", 2, -2685,22f, 34,5153f, 4215,859f, 0.0f, -15.0f, 0.0f, 37,61857f, 11,33665f, 17,59026f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[0]);
	(*&Local_13 + 1412)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "HorseRestrictVol", 2, -788,5385f, 14,76881f, 3751,461f, 0.0f, -43,4996f, 0.0f, 5,411997f, 4,629043f, 14,27383f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[1]);
	(*&Local_13 + 1412)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CompTrain01", 2, -2690,919f, 34,33663f, 4210,772f, 0.0f, -11.0f, 0.0f, 1,97681f, 3,682609f, 1,698111f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[2]);
	(*&Local_13 + 1412)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "PlayerTrainL", 2, -2686,394f, 34,29287f, 4211,657f, 0.0f, -11.0f, 0.0f, 7,170128f, 3,682609f, 2,892138f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[3]);
	(*&Local_13 + 1412)[4] = CREATE_VOLUME_IN_LAYOUT(Local_13, "PlayerTrainR", 2, -2679,314f, 33,63758f, 4213,205f, 0.0f, -15,79779f, 0.0f, 9,635283f, 3,682609f, 2,892138f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[4]);
	(*&Local_13 + 1412)[5] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CompBoarding", 2, -2691,234f, 33,91287f, 4212,395f, 0.0f, -11.0f, 0.0f, 1,97681f, 3,682609f, 2,686046f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[5]);
	(*&Local_13 + 1412)[6] = CREATE_VOLUME_IN_LAYOUT(Local_13, "playerseat", 2, -2683,152f, 34,29287f, 4212,29f, 0.0f, -11.0f, 0.0f, 3,668948f, 3,682609f, 2,892138f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[6]);
	(*&Local_13 + 1412)[7] = CREATE_VOLUME_IN_LAYOUT(Local_13, "restrictvolwalk", 2, -2697,301f, 34,5153f, 4254,272f, 0.0f, -94,24332f, 0.0f, 85,56531f, 11,33665f, 17,59026f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[7]);
	(*&Local_13 + 1412)[8] = CREATE_VOLUME_IN_LAYOUT(Local_13, "PassengerVol", 2, -2680,791f, 33,02016f, 4212,918f, 0.0f, -15,1873f, 0.0f, 11,02099f, 3,682609f, 2,649331f);
	ADD_TO_VOLUME_SET(Local_13.f_1452, (*&Local_13 + 1412)[8]);
	Local_13.f_1528 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "StageTwoVols_set");
	(*&Local_13 + 1456)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Smokehouse", 2, -405,059f, 25,14553f, 3894,499f, 0.0f, 62,57905f, 0.0f, 7,762209f, 2,960223f, 4,073874f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[0]);
	(*&Local_13 + 1456)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Finish02", 2, -367,852f, -18,1463f, 3962,036f, 0.0f, 82.0f, 0.0f, 105,9806f, 135,2161f, 52,01504f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[1]);
	(*&Local_13 + 1456)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesWarning", 2, -387,3716f, 26,45159f, 3901,065f, 0.0f, -16,60537f, 0.0f, 1.0f, 12,82964f, 24,74814f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[2]);
	(*&Local_13 + 1456)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "ElMataWarnVol", 2, -455,3017f, 21,10264f, 3926,207f, 0.0f, 71,92312f, 0.0f, 197,3687f, 33,18869f, 135,1619f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[3]);
	(*&Local_13 + 1456)[4] = CREATE_VOLUME_IN_LAYOUT(Local_13, "ElMataFailVol", 2, -477,1811f, 21,10264f, 3926,053f, 0.0f, 77,85197f, 0.0f, 279,9383f, 33,18869f, 208,7399f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[4]);
	(*&Local_13 + 1456)[5] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Box", 2, -2696,65f, 31,12157f, 4268,405f, 0.0f, 0.0f, 0.0f, 14,50078f, 8,717788f, 6,033511f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[5]);
	(*&Local_13 + 1456)[6] = CREATE_VOLUME_IN_LAYOUT(Local_13, "TunnelTrainCam", 2, -1336,02f, 18,61152f, 4130,321f, 0.0f, 45.0f, 0.0f, 93,40838f, 18,76752f, 16,45882f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[6]);
	(*&Local_13 + 1456)[7] = CREATE_VOLUME_IN_LAYOUT(Local_13, "ArriveMatVol", 2, -456,7144f, 21,10264f, 3924,638f, 0.0f, 42.0f, 0.0f, 143,5299f, 33,18869f, 122,5895f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[7]);
	(*&Local_13 + 1456)[8] = CREATE_VOLUME_IN_LAYOUT(Local_13, "EnterSlaughterHouse", 2, -409,2598f, 27,68888f, 3903,641f, 0.0f, 59.0f, 0.0f, 41,42346f, 11,94619f, 28,36759f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[8]);
	(*&Local_13 + 1456)[9] = CREATE_VOLUME_IN_LAYOUT(Local_13, "SlaughterHouseFront", 2, -409,9618f, 26,02801f, 3910,41f, 0.0f, 60.0f, 0.0f, 5,138498f, 4,373862f, 5,924598f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[9]);
	(*&Local_13 + 1456)[10] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CarlosDistractBox", 2, -366,4774f, 16,94271f, 3945,918f, 0.0f, 86.0f, 0.0f, 10,76027f, 11,94619f, 11,22717f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[10]);
	(*&Local_13 + 1456)[11] = CREATE_VOLUME_IN_LAYOUT(Local_13, "SlaughterHouseHorse", 2, -416,4457f, 25,78259f, 3919,628f, 0.0f, 63.0f, 0.0f, 22,96374f, 12,61965f, 27,17104f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[11]);
	(*&Local_13 + 1456)[12] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CarlosDistractOne", 2, -378,77f, 21,30621f, 3926,851f, 0.0f, -12,10209f, 0.0f, 6,399157f, 10,25409f, 6,190296f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[12]);
	(*&Local_13 + 1456)[13] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CompHorseHitch", 2, -408,4279f, 25,78259f, 3918,491f, 0.0f, 63.0f, 0.0f, 8,868859f, 4,873855f, 10,49377f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[13]);
	(*&Local_13 + 1456)[14] = CREATE_VOLUME_IN_LAYOUT(Local_13, "caveRestrictionPop", 2, -330,1334f, 35,2714f, 3963,759f, 0.0f, -10,19938f, 0.0f, 135,2772f, 54,25456f, 66,2943f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[14]);
	(*&Local_13 + 1456)[15] = CREATE_VOLUME_IN_LAYOUT(Local_13, "SlaughterHouseDoor", 2, -409,4651f, 27,15714f, 3910,073f, 0.0f, 61.0f, 0.0f, 1,761035f, 8,132387f, 10,74397f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[15]);
	(*&Local_13 + 1456)[16] = CREATE_VOLUME_IN_LAYOUT(Local_13, "slaughterhouse", 2, -404,631f, 25,78259f, 3901,02f, 0.0f, 63.0f, 0.0f, 19,2774f, 4,873855f, 11,89443f);
	ADD_TO_VOLUME_SET(Local_13.f_1528, (*&Local_13 + 1456)[16]);
	Local_13.f_1636 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "StageThreeVols_set");
	(*&Local_13 + 1532)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Caves", 2, -314,3846f, 25,47548f, 3965,935f, -0,7387468f, -15,31663f, 5,421587f, 110,4157f, 16,27423f, 38,29015f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[0]);
	(*&Local_13 + 1532)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "RestrictVol", 2, -320,5518f, 33,70432f, 3970,724f, 3,158319f, 70,89893f, 5,013691f, 71,1985f, 36,36105f, 132,2838f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[1]);
	(*&Local_13 + 1532)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CaveEntrance", 2, -365,5661f, 18,35822f, 3945,963f, 0.0f, 0.0f, 0.0f, 47,80951f, 12,34816f, 19,69703f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[2]);
	(*&Local_13 + 1532)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesFront", 2, -331,523f, 26,45024f, 3958,329f, 0.0f, -90,55269f, 0.0f, 30,89874f, 22,17093f, 17,7872f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[3]);
	(*&Local_13 + 1532)[4] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesBackLeft", 2, -305,5204f, 26,02388f, 3954,366f, 0.0f, -2,763729f, 0.0f, 30,16141f, 15,11039f, 15,31691f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[4]);
	(*&Local_13 + 1532)[5] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesBackRight", 2, -303,5889f, 29,29765f, 3978,478f, -0,481213f, -5,524535f, 3,759063f, 36,38427f, 18,15247f, 26,99455f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[5]);
	(*&Local_13 + 1532)[6] = CREATE_VOLUME_IN_LAYOUT(Local_13, "UpperCaveTrigger", 2, -329,188f, 22,57287f, 3964,332f, 0.0f, 4.0f, 0.0f, 14,41893f, 12,34816f, 9,381137f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[6]);
	(*&Local_13 + 1532)[7] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesPrisonArea", 2, -279,4097f, 31,55452f, 3980,436f, -0,1098528f, -0,1708494f, -0,01351718f, 25,57194f, 18,15247f, 26,99455f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[7]);
	(*&Local_13 + 1532)[8] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesFailVol", 2, -320,5518f, 33,70432f, 3970,724f, 3,158319f, 70,89893f, 5,013691f, 171,732f, 36,36105f, 247,5288f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[8]);
	(*&Local_13 + 1532)[9] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CaveCliffs", 2, -375,3528f, 26,30666f, 3972,449f, 0.0f, -90,55269f, 0.0f, 6,056333f, 11,89941f, 11,52528f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[9]);
	(*&Local_13 + 1532)[10] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesWarnVol", 2, -320,5518f, 33,70432f, 3970,724f, 3,158319f, 70,89893f, 5,013691f, 131,4396f, 36,36105f, 183,013f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[10]);
	(*&Local_13 + 1532)[11] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesDefendPrisonArea", 2, -288,227f, 31,5566f, 3980,41f, -0,1098528f, -0,1708494f, -0,01351718f, 39,0273f, 18,15247f, 26,99455f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[11]);
	(*&Local_13 + 1532)[12] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CavesOutsideDoor", 2, -291,5258f, 31,56335f, 3983,518f, -0,1107728f, -7,391642f, 0,0004062949f, 23,0466f, 18,15247f, 10,33276f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[12]);
	(*&Local_13 + 1532)[13] = CREATE_VOLUME_IN_LAYOUT(Local_13, "AssaultVol", 2, -378,8857f, 19,95065f, 3942,62f, 0.0f, -12,10209f, 0.0f, 7,862772f, 10,25409f, 33,5055f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[13]);
	(*&Local_13 + 1532)[14] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Cave_EntranceVol", 2, -358,5951f, 18,30742f, 3946,144f, 0.0f, 0.0f, 0.0f, 14,1828f, 12,34816f, 19,69703f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[14]);
	(*&Local_13 + 1532)[15] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Cave_Vol02", 2, -346,7885f, 18,35822f, 3950,09f, 0.0f, 0.0f, 0.0f, 14,1828f, 12,34816f, 10,62477f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[15]);
	(*&Local_13 + 1532)[16] = CREATE_VOLUME_IN_LAYOUT(Local_13, "ExitCaves_B", 2, -334,6738f, 26,45024f, 3950,37f, 0.0f, -90,55269f, 0.0f, 12,0556f, 22,17093f, 12,0546f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[16]);
	(*&Local_13 + 1532)[17] = CREATE_VOLUME_IN_LAYOUT(Local_13, "ExitCaves_A", 2, -328,9201f, 19,3961f, 3969,725f, 0.0f, -90,55269f, 0.0f, 11,34548f, 22,17093f, 11,25895f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[17]);
	(*&Local_13 + 1532)[18] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CaptureBullet", 2, -285,1189f, 25,13069f, 3986,8f, -0,1107728f, -7,391642f, 0,0004062949f, 1,037901f, 1,86428f, 1,739923f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[18]);
	(*&Local_13 + 1532)[19] = CREATE_VOLUME_IN_LAYOUT(Local_13, "StgEnd", 2, -357,3404f, 19,08478f, 3946,557f, 0.0f, 86.0f, 0.0f, 10,76027f, 11,94619f, 2,84517f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[19]);
	(*&Local_13 + 1532)[20] = CREATE_VOLUME_IN_LAYOUT(Local_13, "alertshoutbox", 2, -345,8617f, 19,08478f, 3949,655f, 0.0f, 86.0f, 0.0f, 10,76027f, 11,94619f, 2,84517f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[20]);
	(*&Local_13 + 1532)[21] = CREATE_VOLUME_IN_LAYOUT(Local_13, "playercovervol", 2, -327,5525f, 19,85407f, 3960,943f, 0.0f, 4.0f, 0.0f, 4,191616f, 3,64509f, 3,686561f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[21]);
	(*&Local_13 + 1532)[22] = CREATE_VOLUME_IN_LAYOUT(Local_13, "plantTNTvol", 2, -280,8574f, 29,29765f, 3978,478f, -0,481213f, -5,524535f, 3,759063f, 36,38427f, 18,15247f, 26,99455f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[22]);
	(*&Local_13 + 1532)[23] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Caves1", 2, -314,3846f, 39,03355f, 3965,935f, -0,7387468f, -15,31663f, 5,421587f, 110,4157f, 16,27423f, 45,3014f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[23]);
	(*&Local_13 + 1532)[24] = CREATE_VOLUME_IN_LAYOUT(Local_13, "playerstop5", 2, -331,368f, 22,57287f, 3954,787f, 0.0f, 10,58473f, 0.0f, 14,41893f, 12,34816f, 9,381137f);
	ADD_TO_VOLUME_SET(Local_13.f_1636, (*&Local_13 + 1532)[24]);
	Local_13.f_1692 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "StageFourVols_set");
	(*&Local_13 + 1640)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Wave02", 2, -247,127f, 30,67823f, 3779,21f, 0.0f, -31.0f, 0.0f, 51,8041f, 43,29697f, 203,0987f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[0]);
	(*&Local_13 + 1640)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nLock_LR02", 2, -246,7531f, 39,89701f, 3747,396f, 0.0f, -25.0f, 0.0f, 101,8238f, 43,29697f, 153,4509f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[1]);
	(*&Local_13 + 1640)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "FinalFightGate", 2, -224,5288f, 51,67003f, 3594,629f, 0.0f, 2.0f, 0.0f, 110,5183f, 43,29697f, 134,5376f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[2]);
	(*&Local_13 + 1640)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "nLock_LR01", 2, -331,991f, 27,35041f, 3874,927f, -2,931224f, -68,98803f, -2,310138f, 36,437f, 43,29697f, 54,44566f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[3]);
	(*&Local_13 + 1640)[4] = CREATE_VOLUME_IN_LAYOUT(Local_13, "Wave05", 2, -212,4258f, 40,31428f, 3669,908f, 0.0f, -21.0f, 0.0f, 101,8238f, 43,29697f, 231,2156f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[4]);
	(*&Local_13 + 1640)[5] = CREATE_VOLUME_IN_LAYOUT(Local_13, "s4_HorseWander", 2, -368,527f, 18,35575f, 3947,617f, 2,73814f, -91,00113f, -2,640882f, 10,39173f, 11,48572f, 14,85366f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[5]);
	(*&Local_13 + 1640)[6] = CREATE_VOLUME_IN_LAYOUT(Local_13, "MeetCarlos", 2, -229,135f, 30,4965f, 3596,177f, 0.0f, 6.0f, 0.0f, 17,88551f, 11,54025f, 20,11608f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[6]);
	(*&Local_13 + 1640)[7] = CREATE_VOLUME_IN_LAYOUT(Local_13, "FinalFightCage", 2, -220,9778f, 51,67003f, 3585,051f, 0.0f, 0.0f, 0.0f, 101,6896f, 43,29697f, 88,29236f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[7]);
	(*&Local_13 + 1640)[8] = CREATE_VOLUME_IN_LAYOUT(Local_13, "AlertWave03", 2, -221,7635f, 43,19818f, 3673,819f, 0.0f, 2.0f, 0.0f, 110,5183f, 43,29697f, 49,48666f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[8]);
	(*&Local_13 + 1640)[9] = CREATE_VOLUME_IN_LAYOUT(Local_13, "AlertWave02", 2, -274,4434f, 48,79067f, 3828,092f, 0.0f, -12.0f, 0.0f, 110,5183f, 43,29697f, 49,48666f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[9]);
	(*&Local_13 + 1640)[10] = CREATE_VOLUME_IN_LAYOUT(Local_13, "finalFightVol", 2, -217,8628f, 51,67003f, 3589,972f, 0.0f, -19.0f, 0.0f, 105,6529f, 43,29697f, 55,11265f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[10]);
	(*&Local_13 + 1640)[11] = CREATE_VOLUME_IN_LAYOUT(Local_13, "restricvol", 2, -226,3728f, 30,4965f, 3598,389f, 0.0f, 6.0f, 0.0f, 11,61492f, 11,54025f, 11,88835f);
	ADD_TO_VOLUME_SET(Local_13.f_1692, (*&Local_13 + 1640)[11]);
	Local_13.f_1736 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "StageFiveVols_set");
	(*&Local_13 + 1696)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "FinishVol05", 2, -227,6223f, 30,70741f, 3595,261f, 0.0f, 9,654322f, 0.0f, 33,12624f, 12,04003f, 60,88321f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[0]);
	(*&Local_13 + 1696)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "TriggerMiddle", 2, -272,48f, 30,67823f, 3837f, 0.0f, -10,19938f, 0.0f, 101,8238f, 43,29697f, 10,54885f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[1]);
	(*&Local_13 + 1696)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "TriggerEnd", 2, -246,314f, 30,9717f, 3753,081f, 0.0f, -27,46268f, 0.0f, 164,7787f, 48,77829f, 10,54885f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[2]);
	(*&Local_13 + 1696)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CombatEndZone", 2, -229,5786f, 32,57224f, 3607,78f, 0.0f, -6,326312f, 0.0f, 15,23446f, 9,512454f, 16,34731f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[3]);
	(*&Local_13 + 1696)[4] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CombatFrontZone01", 2, -358,7943f, 18,75965f, 3886,49f, 3,923321f, 34,72558f, -5,576751f, 14,64612f, 12,68379f, 12,78698f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[4]);
	(*&Local_13 + 1696)[5] = CREATE_VOLUME_IN_LAYOUT(Local_13, "CombatFrontZone02", 2, -325,8779f, 22,65186f, 3872,177f, 3,274609f, 10,10904f, -7,238645f, 14,64612f, 12,68379f, 12,78698f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[5]);
	(*&Local_13 + 1696)[6] = CREATE_VOLUME_IN_LAYOUT(Local_13, "HorseRestrictCanyonVol", 2, -224,1524f, 54,06115f, 3717,34f, 0.0f, -10,19938f, 0.0f, 159,0084f, 54,25456f, 290,2056f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[6]);
	(*&Local_13 + 1696)[7] = CREATE_VOLUME_IN_LAYOUT(Local_13, "NoSpawn", 2, -370,401f, 23,72901f, 3925,363f, -18,11041f, 81,15002f, -11,17208f, 93,41571f, 33,3944f, 46,68706f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[7]);
	(*&Local_13 + 1696)[8] = CREATE_VOLUME_IN_LAYOUT(Local_13, "AbandonLandon", 2, -391,6123f, 25,29111f, 3899,884f, 0.0f, -6,326312f, 0.0f, 15,23446f, 9,512454f, 16,34731f);
	ADD_TO_VOLUME_SET(Local_13.f_1736, (*&Local_13 + 1696)[8]);
	Local_13.f_1760 = CREATE_VOLUME_SET_IN_LAYOUT(Local_13, "LandonEscapeVols_set");
	(*&Local_13 + 1740)[0] = CREATE_VOLUME_IN_LAYOUT(Local_13, "stop01", 2, -295,3604f, 23,68226f, 3977,641f, 0.0f, -45,91341f, 0.0f, 6,317288f, 5,691771f, 13,40098f);
	ADD_TO_VOLUME_SET(Local_13.f_1760, (*&Local_13 + 1740)[0]);
	(*&Local_13 + 1740)[1] = CREATE_VOLUME_IN_LAYOUT(Local_13, "stop02", 2, -331,2242f, 20,98374f, 3960,125f, 0.0f, 91.0f, 0.0f, 1,991383f, 5,691771f, 14,47915f);
	ADD_TO_VOLUME_SET(Local_13.f_1760, (*&Local_13 + 1740)[1]);
	(*&Local_13 + 1740)[2] = CREATE_VOLUME_IN_LAYOUT(Local_13, "stop03", 2, -337,4864f, 20,4096f, 3950,093f, 0.0f, 2,78192f, 0.0f, 1,991383f, 5,691771f, 10,30119f);
	ADD_TO_VOLUME_SET(Local_13.f_1760, (*&Local_13 + 1740)[2]);
	(*&Local_13 + 1740)[3] = CREATE_VOLUME_IN_LAYOUT(Local_13, "stop04", 2, -313,3755f, 23,61343f, 3976,763f, 0.0f, 13.0f, 0.0f, 16,4102f, 5,691771f, 10,30119f);
	ADD_TO_VOLUME_SET(Local_13.f_1760, (*&Local_13 + 1740)[3]);
	Local_13.f_1764 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene10Set", Local_13, 8, 0);
	(*&Local_13 + 1768)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStart10", -228,6567f, 30,44905f, 3607,265f, 0.0f, 182,9025f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[0], Local_13.f_1764);
	(*&Local_13 + 1768)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerEnd10", -226,7194f, 30,23503f, 3601,266f, -0,064671f, 16,04705f, 1,061484f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[1], Local_13.f_1764);
	(*&Local_13 + 1768)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionStart10", -230,0478f, 30,74862f, 3612,522f, 0.0f, -142,0327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[2], Local_13.f_1764);
	(*&Local_13 + 1768)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionEnd10", -223,8321f, 30,82714f, 3597,135f, -6,934178f, 378,8872f, -5,450884f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[3], Local_13.f_1764);
	(*&Local_13 + 1768)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "MexGirlEnd10", -228,3931f, 30,42128f, 3599,463f, 0.0f, -54,66875f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[4], Local_13.f_1764);
	(*&Local_13 + 1768)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayersHorseStart10", -228,8763f, 30,54517f, 3603,236f, 0.0f, 479.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[5], Local_13.f_1764);
	(*&Local_13 + 1768)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "MexGirlStart10", -226,4764f, 30,36216f, 3610,562f, 0.0f, 121,0069f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[6], Local_13.f_1764);
	(*&Local_13 + 1768)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "CarlosStart10", -233,0473f, 30,42128f, 3582,262f, 0.0f, 385,7571f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[7], Local_13.f_1764);
	(*&Local_13 + 1768)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "Playershorsehide", -212f, 30,28165f, 3592.0f, 0.0f, 479.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[8], Local_13.f_1764);
	(*&Local_13 + 1768)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "Playershorsehide1", -212.0f, 29,62697f, 3596f, 0.0f, 479.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1768)[9], Local_13.f_1764);
	Local_13.f_1812 = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", Local_13, 8, 0);
	(*&Local_13 + 1816)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "LocateTrainSitGringos", -2683,361f, 33,369f, 4213,727f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[0], Local_13.f_1812);
	(*&Local_13 + 1816)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "CompWait", -778,847f, 13,05098f, 3753,153f, 0.0f, -133,3304f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[1], Local_13.f_1812);
	(*&Local_13 + 1816)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "TeleComp01", -446,468f, 22,01449f, 3942,468f, 0.0f, -226,0053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[2], Local_13.f_1812);
	(*&Local_13 + 1816)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainSeatPlayer", -2683,2f, 32,6f, 4211,2f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[3], Local_13.f_1812);
	(*&Local_13 + 1816)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStart01", -2688,396f, 31,35937f, 4287,166f, 0.0f, 83,06501f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[4], Local_13.f_1812);
	(*&Local_13 + 1816)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionStart01", -2691,524f, 31,40393f, 4286,347f, 0.0f, 82,99824f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[5], Local_13.f_1812);
	(*&Local_13 + 1816)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerHorseStart01", -2640,006f, 30,86114f, 4258,543f, 0.0f, 94,95278f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[6], Local_13.f_1812);
	(*&Local_13 + 1816)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainStart01", -2661,331f, 32,0646f, 4219,049f, 0.0f, 255,8521f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[7], Local_13.f_1812);
	(*&Local_13 + 1816)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "Finish01", -455,3792f, 20,21464f, 3903,593f, 0.0f, -226,0053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[8], Local_13.f_1812);
	(*&Local_13 + 1816)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainEnd01", -785,7498f, 13,25401f, 3774,417f, 0.0f, 315,204f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[9], Local_13.f_1812);
	(*&Local_13 + 1816)[10] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainStartStream", -2690,455f, 32,581f, 4212,914f, 0.0f, 345.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[10], Local_13.f_1812);
	(*&Local_13 + 1816)[11] = CREATE_POINT_IN_LAYOUT(Local_13, "Pos_Emilio", -2687,704f, 31,84922f, 4290,638f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[11], Local_13.f_1812);
	(*&Local_13 + 1816)[12] = CREATE_POINT_IN_LAYOUT(Local_13, "Pos_EmilioFriend", -2688,622f, 31,84925f, 4290,096f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[12], Local_13.f_1812);
	(*&Local_13 + 1816)[13] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainStart02", -833,8668f, 12,06535f, 3821,297f, 0.0f, 315,204f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[13], Local_13.f_1812);
	(*&Local_13 + 1816)[14] = CREATE_POINT_IN_LAYOUT(Local_13, "CasaMadGate", -776.0f, 13,34598f, 3748.0f, 0.0f, -133,3304f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[14], Local_13.f_1812);
	(*&Local_13 + 1816)[15] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainStartStream1", -2690,165f, 33,338f, 4210,815f, 0.0f, 177.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[15], Local_13.f_1812);
	(*&Local_13 + 1816)[16] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStartstream", -815,9625f, 13,0619f, 3796,415f, 0.0f, 227,8713f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[16], Local_13.f_1812);
	(*&Local_13 + 1816)[17] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionStartstream", -820.0f, 13,05098f, 3796f, 0.0f, 250,1919f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[17], Local_13.f_1812);
	(*&Local_13 + 1816)[18] = CREATE_POINT_IN_LAYOUT(Local_13, "bararea", -2701,75f, 31,88216f, 4288,431f, 0.0f, -96,75059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1816)[18], Local_13.f_1812);
	Local_13.f_1896 = CREATE_OBJECTSET_IN_LAYOUT("StageOneHalfSet", Local_13, 8, 0);
	(*&Local_13 + 1900)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStart015", -802,13f, 14,344f, 3788,158f, 0.0f, -45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[0], Local_13.f_1896);
	(*&Local_13 + 1900)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionStart015", -800,285f, 14,343f, 3790,115f, 0.0f, 315.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[1], Local_13.f_1896);
	(*&Local_13 + 1900)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerHorseStart015", -783,798f, 13,05098f, 3750,393f, 0.0f, 224,3453f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[2], Local_13.f_1896);
	(*&Local_13 + 1900)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "CompHorseStart015", -785,9161f, 13,05098f, 3750,895f, 0.0f, -132,1099f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[3], Local_13.f_1896);
	(*&Local_13 + 1900)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainDeBoard", -796,457f, 13,551f, 3781,076f, 0.0f, 405.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[4], Local_13.f_1896);
	(*&Local_13 + 1900)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainJumpOff", -795,1423f, 14,452f, 3782,589f, 0.0f, 405.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[5], Local_13.f_1896);
	(*&Local_13 + 1900)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "TrainDeBoardObs", -796,5263f, 13,395f, 3777,608f, 0.0f, 13.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[6], Local_13.f_1896);
	(*&Local_13 + 1900)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "DeboardGoto", -796,8191f, 13,81917f, 3771,611f, 0.0f, 328,1447f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[7], Local_13.f_1896);
	(*&Local_13 + 1900)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerSpawn", -796,8861f, 13,50911f, 3780,768f, 0.0f, 379.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[8], Local_13.f_1896);
	(*&Local_13 + 1900)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStart016", -812,0688f, 13,53179f, 3785,091f, 0.0f, -45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[9], Local_13.f_1896);
	(*&Local_13 + 1900)[10] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionStart016", -814,0406f, 13,56218f, 3783,809f, 0.0f, 315.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[10], Local_13.f_1896);
	(*&Local_13 + 1900)[11] = CREATE_POINT_IN_LAYOUT(Local_13, "MatGateway", -451,4734f, 20,35105f, 3910,081f, 0.0f, -226,0053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[11], Local_13.f_1896);
	(*&Local_13 + 1900)[12] = CREATE_POINT_IN_LAYOUT(Local_13, "HorseHitchComp", -414,5997f, 23,76431f, 3912,87f, 0.0f, -397.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[12], Local_13.f_1896);
	(*&Local_13 + 1900)[13] = CREATE_POINT_IN_LAYOUT(Local_13, "HorseHitchLook", -462,0805f, 20,51696f, 3918,129f, 0.0f, -274.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[13], Local_13.f_1896);
	(*&Local_13 + 1900)[14] = CREATE_POINT_IN_LAYOUT(Local_13, "HitchPlayerGringo", -446,2885f, 22,16883f, 3923,126f, 0.0f, -226,0053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[14], Local_13.f_1896);
	(*&Local_13 + 1900)[15] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerHitchPos", -446,7572f, 21,15385f, 3922,507f, 0.0f, -98.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[15], Local_13.f_1896);
	(*&Local_13 + 1900)[16] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerHitchPos1", -417,2662f, 23,772f, 3913,196f, 0.0f, 323.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[16], Local_13.f_1896);
	(*&Local_13 + 1900)[17] = CREATE_POINT_IN_LAYOUT(Local_13, "HitchPlayerGringo1", -414,4588f, 24,23531f, 3912,573f, 0.0f, -226,0053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[17], Local_13.f_1896);
	(*&Local_13 + 1900)[18] = CREATE_POINT_IN_LAYOUT(Local_13, "CompSlaughterHouse", -410,016f, 24,15965f, 3911,199f, 0.0f, -226,0053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[18], Local_13.f_1896);
	(*&Local_13 + 1900)[19] = CREATE_POINT_IN_LAYOUT(Local_13, "CompHorseGoto", -409,7141f, 23,76431f, 3914,553f, 0.0f, -387.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[19], Local_13.f_1896);
	(*&Local_13 + 1900)[20] = CREATE_POINT_IN_LAYOUT(Local_13, "DeboardGoto1", -795,3037f, 13,05098f, 3768,358f, 0.0f, 330,6402f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1900)[20], Local_13.f_1896);
	Local_13.f_1988 = CREATE_OBJECTSET_IN_LAYOUT("StageTwoSet", Local_13, 8, 0);
	(*&Local_13 + 1992)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "S2_PatrolFlag1", -484.0f, 20,07843f, 4004.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[0], Local_13.f_1988);
	(*&Local_13 + 1992)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "S2_PatrolFlag2", -504.0f, 18,07058f, 3964.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[1], Local_13.f_1988);
	(*&Local_13 + 1992)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "S2_PatrolFlag3", -424f, 23,09019f, 3984.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[2], Local_13.f_1988);
	(*&Local_13 + 1992)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "S2_PatrolFlag4", -448f, 22,08627f, 3936.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[3], Local_13.f_1988);
	(*&Local_13 + 1992)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "SlaughterPlayerStart02", -407,3572f, 24,1203f, 3901,744f, 0.0f, -194,6223f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[4], Local_13.f_1988);
	(*&Local_13 + 1992)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "SlaughterCompStart02", -409,4275f, 24,08166f, 3910,393f, 0.0f, -193.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[5], Local_13.f_1988);
	(*&Local_13 + 1992)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "nDebugTele", -462,1412f, 18,53711f, 4086,141f, 0.0f, 53,18034f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[6], Local_13.f_1988);
	(*&Local_13 + 1992)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "MiniCut_Comp", -386,1845f, 23,94416f, 3899,498f, 0.0f, -84,00574f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[7], Local_13.f_1988);
	(*&Local_13 + 1992)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "MiniCut_Player", -385,7877f, 23,90608f, 3901,337f, -3,671902f, -70,61158f, 3,336052f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[8], Local_13.f_1988);
	(*&Local_13 + 1992)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "GunslingerGoto02", -405,7273f, 24,12927f, 3901,375f, 0.0f, -190.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[9], Local_13.f_1988);
	(*&Local_13 + 1992)[10] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStart02", -406,3367f, 24,09405f, 3892.0f, 0.0f, 197.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[10], Local_13.f_1988);
	(*&Local_13 + 1992)[11] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionStart02", -406,9493f, 24,04499f, 3893,47f, 0.0f, 202.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[11], Local_13.f_1988);
	(*&Local_13 + 1992)[12] = CREATE_POINT_IN_LAYOUT(Local_13, "CompHorseStart02", -461,8379f, 21,08234f, 3941,838f, 0.0f, -69,53682f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[12], Local_13.f_1988);
	(*&Local_13 + 1992)[13] = CREATE_POINT_IN_LAYOUT(Local_13, "VillageQuestDocks", -445,6328f, 22,48436f, 3926,945f, 0.0f, 53,18034f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[13], Local_13.f_1988);
	(*&Local_13 + 1992)[14] = CREATE_POINT_IN_LAYOUT(Local_13, "VillageQuestBarn", -473,7541f, 21,08235f, 3937,754f, 0.0f, 53,18034f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[14], Local_13.f_1988);
	(*&Local_13 + 1992)[15] = CREATE_POINT_IN_LAYOUT(Local_13, "SlingerConvo01", -469,8733f, 20,58581f, 3917,766f, 0.0f, 88.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[15], Local_13.f_1988);
	(*&Local_13 + 1992)[16] = CREATE_POINT_IN_LAYOUT(Local_13, "SlingerConvo02", -471,4741f, 20,58581f, 3917,694f, 0.0f, -93.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[16], Local_13.f_1988);
	(*&Local_13 + 1992)[17] = CREATE_POINT_IN_LAYOUT(Local_13, "DistractGuard02", -364,8885f, 17,18475f, 3946,509f, -1,667085f, 75,23365f, -1,500059f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[17], Local_13.f_1988);
	(*&Local_13 + 1992)[18] = CREATE_POINT_IN_LAYOUT(Local_13, "DistractGuard01", -364,9862f, 17,121f, 3944,4f, 0.0f, 97,15676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[18], Local_13.f_1988);
	(*&Local_13 + 1992)[19] = CREATE_POINT_IN_LAYOUT(Local_13, "LandonDistract", -394,1369f, 27,61761f, 3898,522f, 0.0f, 89.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[19], Local_13.f_1988);
	(*&Local_13 + 1992)[20] = CREATE_POINT_IN_LAYOUT(Local_13, "LandonGotoDistract", -396,16f, 24,273f, 3908,175f, 0.0f, -24.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[20], Local_13.f_1988);
	(*&Local_13 + 1992)[21] = CREATE_POINT_IN_LAYOUT(Local_13, "SlaughterCompStart03", -408,9032f, 24,19855f, 3907,068f, 0.0f, -196,1155f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[21], Local_13.f_1988);
	(*&Local_13 + 1992)[22] = CREATE_POINT_IN_LAYOUT(Local_13, "landonSpeakWait", -379,3726f, 20,44775f, 3927,616f, 0.0f, 29.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[22], Local_13.f_1988);
	(*&Local_13 + 1992)[23] = CREATE_POINT_IN_LAYOUT(Local_13, "carlosSpeakWait", -380,4211f, 16,90464f, 3952,351f, 0.0f, -361,4053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[23], Local_13.f_1988);
	(*&Local_13 + 1992)[24] = CREATE_POINT_IN_LAYOUT(Local_13, "OutsidePrisonBlip", -286,7323f, 24,2615f, 3979,468f, 0.0f, -453,0235f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[24], Local_13.f_1988);
	(*&Local_13 + 1992)[25] = CREATE_POINT_IN_LAYOUT(Local_13, "CarlosWave_Dudes", -366,6552f, 16,98829f, 3946,152f, -0,9567491f, 63,00837f, -0,785497f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[25], Local_13.f_1988);
	(*&Local_13 + 1992)[26] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerChevronfor_Carlos", -378,6414f, 20,67705f, 3927,19f, 0.0f, 168.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[26], Local_13.f_1988);
	(*&Local_13 + 1992)[27] = CREATE_POINT_IN_LAYOUT(Local_13, "CarlosDistractGuards", -366,6348f, 17,02288f, 3945,656f, 0.0f, 260.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[27], Local_13.f_1988);
	(*&Local_13 + 1992)[28] = CREATE_POINT_IN_LAYOUT(Local_13, "TeleportPlayer03", -290,4931f, 24,22197f, 3981,896f, 0.0f, -498.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 1992)[28], Local_13.f_1988);
	Local_13.f_2112 = CREATE_OBJECTSET_IN_LAYOUT("StageThreeSet", Local_13, 8, 0);
	(*&Local_13 + 2116)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "TakeMexGirl", -355,2306f, 18,36169f, 3948,845f, 0.0f, -104,9485f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[0], Local_13.f_2112);
	(*&Local_13 + 2116)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "Entrance03", -354,4962f, 18,28556f, 3946,518f, 0.0f, -269,7657f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[1], Local_13.f_2112);
	(*&Local_13 + 2116)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "PrisonDoor", -285,312f, 24,27388f, 3986,975f, 0.0f, -452,6049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[2], Local_13.f_2112);
	(*&Local_13 + 2116)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "GunslingerGotoAfterBomb", -294,5369f, 24,24358f, 3981,827f, 0.0f, -120,2974f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[3], Local_13.f_2112);
	(*&Local_13 + 2116)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "FinishAfterBomb", -293,3893f, 24,20052f, 3979,369f, 0.0f, -127,5973f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[4], Local_13.f_2112);
	(*&Local_13 + 2116)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "BombLoc", -284,6946f, 24,27506f, 3986,985f, 0.0f, -452,6049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[5], Local_13.f_2112);
	(*&Local_13 + 2116)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "RusherShootFrom01", -292,348f, 24,03638f, 3973,568f, 0.0f, -535,4736f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[6], Local_13.f_2112);
	(*&Local_13 + 2116)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "RusherShootFrom02", -295,9978f, 23,80153f, 3970,812f, 0.0f, -531,2138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[7], Local_13.f_2112);
	(*&Local_13 + 2116)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "OutsidePrisonDoor", -286,293f, 24,2615f, 3986,959f, 0.0f, -453,0235f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[8], Local_13.f_2112);
	(*&Local_13 + 2116)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "InsidePrisonDoor", -281,9997f, 24,35036f, 3987,421f, 0.0f, -453,0235f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[9], Local_13.f_2112);
	(*&Local_13 + 2116)[10] = CREATE_POINT_IN_LAYOUT(Local_13, "GunslingerInitialCover", -379,0038f, 20,605f, 3928,251f, 0.0f, 245.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[10], Local_13.f_2112);
	(*&Local_13 + 2116)[11] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStart03", -381,513f, 23,77284f, 3902,71f, 0.0f, -140,0233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[11], Local_13.f_2112);
	(*&Local_13 + 2116)[12] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionStart03", -293,8308f, 24,14849f, 3977,581f, 0.0f, -310,7387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[12], Local_13.f_2112);
	(*&Local_13 + 2116)[13] = CREATE_POINT_IN_LAYOUT(Local_13, "MexGirlStart03", -280,3255f, 24,42975f, 3981,202f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[13], Local_13.f_2112);
	(*&Local_13 + 2116)[14] = CREATE_POINT_IN_LAYOUT(Local_13, "InsideManGoto", -369,4212f, 16,06273f, 3929,421f, 0.0f, 187,2934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[14], Local_13.f_2112);
	(*&Local_13 + 2116)[15] = CREATE_POINT_IN_LAYOUT(Local_13, "RusherShootFrom03", -293,3001f, 24,01451f, 3975,28f, 0.0f, -537.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[15], Local_13.f_2112);
	(*&Local_13 + 2116)[16] = CREATE_POINT_IN_LAYOUT(Local_13, "RusherShootFrom04", -294,6035f, 24,04187f, 3978,059f, 0.0f, -531.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[16], Local_13.f_2112);
	(*&Local_13 + 2116)[17] = CREATE_POINT_IN_LAYOUT(Local_13, "TNTLoc", -293,0761f, 24,244f, 3982,188f, 0.0f, 14.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[17], Local_13.f_2112);
	(*&Local_13 + 2116)[18] = CREATE_POINT_IN_LAYOUT(Local_13, "TNTLoc1", -291,5595f, 24,23439f, 3982,101f, 0.0f, -452,6049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[18], Local_13.f_2112);
	(*&Local_13 + 2116)[19] = CREATE_POINT_IN_LAYOUT(Local_13, "S3_PlayerEnd", -291,1665f, 24,15351f, 3979,207f, -2,494836f, 53,64082f, -1,654915f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[19], Local_13.f_2112);
	(*&Local_13 + 2116)[20] = CREATE_POINT_IN_LAYOUT(Local_13, "S3_CaveExit", -359,516f, 17,685f, 3946,188f, 0.0f, 22,85951f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2116)[20], Local_13.f_2112);
	Local_13.f_2204 = CREATE_OBJECTSET_IN_LAYOUT("StageFiveSet", Local_13, 8, 0);
	(*&Local_13 + 2208)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "Finish05", -230,041f, 30,74862f, 3612,454f, 0.0f, -86,26677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[0], Local_13.f_2204);
	(*&Local_13 + 2208)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "StreamingLoadScene05", -377,549f, 22,61509f, 3479,967f, 0.0f, -86,26677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[1], Local_13.f_2204);
	(*&Local_13 + 2208)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "PlayerStart05", -359,516f, 17,685f, 3946,188f, 0.0f, 22,85951f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[2], Local_13.f_2204);
	(*&Local_13 + 2208)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "CompanionStart05", -365,1646f, 17,08877f, 3945,165f, 0.0f, 39,99954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[3], Local_13.f_2204);
	(*&Local_13 + 2208)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "MexGirlStart05", -365,3661f, 17,06666f, 3948.0f, 0.0f, 17,32102f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[4], Local_13.f_2204);
	(*&Local_13 + 2208)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "s5_CarlosPt02", -290,3505f, 30,88897f, 3610,827f, 0.0f, -30,93691f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[5], Local_13.f_2204);
	(*&Local_13 + 2208)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "s5_CarlosPt01", -208,0001f, 33,91497f, 3524f, 0.0f, 151,6423f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[6], Local_13.f_2204);
	(*&Local_13 + 2208)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "Landon_Wait4Carlos01", -228,1971f, 30,29038f, 3603,384f, 0.0f, 4,939013f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[7], Local_13.f_2204);
	(*&Local_13 + 2208)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "GW_Player_Wait4Carlos", -225,9373f, 30,23503f, 3603,33f, 0.0f, -4.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2208)[8], Local_13.f_2204);
	Local_13.f_2248 = CREATE_OBJECTSET_IN_LAYOUT("S2_LandonCoverSet", Local_13, 8, 0);
	(*&Local_13 + 2252)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover01", -377,1807f, 21,03133f, 3926,47f, -1,192441f, 182,001f, -0,8820832f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[0], Local_13.f_2248);
	(*&Local_13 + 2252)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover02", -363,911f, 17,212f, 3947,576f, 0.0f, 261.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[1], Local_13.f_2248);
	(*&Local_13 + 2252)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover03", -352,1685f, 18,566f, 3945,611f, 0.0f, 245.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[2], Local_13.f_2248);
	(*&Local_13 + 2252)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover04", -336,801f, 18,928f, 3946,762f, 0.0f, 195.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[3], Local_13.f_2248);
	(*&Local_13 + 2252)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_ShootFrom02", -332,797f, 19,2377f, 3953,626f, 0.0f, 197.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[4], Local_13.f_2248);
	(*&Local_13 + 2252)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover05", -303,3815f, 23,207f, 3972,805f, 0.0f, 276.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[5], Local_13.f_2248);
	(*&Local_13 + 2252)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_ShootFrom03", -317,2108f, 20,75409f, 3975,157f, 0.0f, -483.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[6], Local_13.f_2248);
	(*&Local_13 + 2252)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover06", -295,9978f, 23,80153f, 3970,812f, 0.0f, 182.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[7], Local_13.f_2248);
	(*&Local_13 + 2252)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_ShootFrom04", -380,469f, 17,048f, 3950,228f, 0.0f, 279,2443f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[8], Local_13.f_2248);
	(*&Local_13 + 2252)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover07", -328,1769f, 18,88347f, 3960,562f, 0.0f, 197.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[9], Local_13.f_2248);
	(*&Local_13 + 2252)[10] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover08", -380,0234f, 17,51275f, 3948,809f, 0.0f, 197.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[10], Local_13.f_2248);
	(*&Local_13 + 2252)[11] = CREATE_POINT_IN_LAYOUT(Local_13, "gs_Cover09", -330,4247f, 19,37003f, 3965,808f, 0.0f, 197.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2252)[11], Local_13.f_2248);
	Local_13.f_2304 = CREATE_OBJECTSET_IN_LAYOUT("S2_CaveGuards_CoverSet", Local_13, 8, 0);
	(*&Local_13 + 2308)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_01", -332,068f, 19,53f, 3956,092f, 0.0f, 7.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[0], Local_13.f_2304);
	(*&Local_13 + 2308)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_02", -327,6471f, 18,98501f, 3949,19f, 0.0f, 106.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[1], Local_13.f_2304);
	(*&Local_13 + 2308)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_03", -328,0554f, 18,98501f, 3947,766f, 0.0f, 114.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[2], Local_13.f_2304);
	(*&Local_13 + 2308)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_04", -327,284f, 19,054f, 3952,94f, 0.0f, 78.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[3], Local_13.f_2304);
	(*&Local_13 + 2308)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_05", -326,494f, 19,05f, 3955,263f, 0.0f, 78.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[4], Local_13.f_2304);
	(*&Local_13 + 2308)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_06", -329,602f, 19,38f, 3968,637f, 0.0f, 9.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[5], Local_13.f_2304);
	(*&Local_13 + 2308)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_07", -328,1284f, 19,45394f, 3971,063f, 0.0f, 20.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[6], Local_13.f_2304);
	(*&Local_13 + 2308)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_08", -331,555f, 21,317f, 3971,26f, 0.0f, 2.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[7], Local_13.f_2304);
	(*&Local_13 + 2308)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_09", -294,136f, 23,919f, 3971,812f, 0.0f, 98.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[8], Local_13.f_2304);
	(*&Local_13 + 2308)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_010", -312,0334f, 21,774f, 3976,134f, 0.0f, 97.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[9], Local_13.f_2304);
	(*&Local_13 + 2308)[10] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_011", -309,3814f, 22,014f, 3979,26f, 0.0f, 83.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[10], Local_13.f_2304);
	(*&Local_13 + 2308)[11] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_012", -293,1289f, 24,145f, 3976,828f, 0.0f, 64.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[11], Local_13.f_2304);
	(*&Local_13 + 2308)[12] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_014", -291,0887f, 24,154f, 3974,635f, 0.0f, 96.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[12], Local_13.f_2304);
	(*&Local_13 + 2308)[13] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_013", -292,2103f, 24,2304f, 3982,239f, 0.0f, 15.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[13], Local_13.f_2304);
	(*&Local_13 + 2308)[14] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_015", -360,1425f, 17,59475f, 3947,916f, 0.0f, 70,81441f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[14], Local_13.f_2304);
	(*&Local_13 + 2308)[15] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_016", -332,0539f, 21,317f, 3969,124f, 0.0f, -22,8958f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[15], Local_13.f_2304);
	(*&Local_13 + 2308)[16] = CREATE_POINT_IN_LAYOUT(Local_13, "caveCov_017", -326,4125f, 19,18701f, 3962,187f, 0.0f, 32,73092f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2308)[16], Local_13.f_2304);
	Local_13.f_2380 = CREATE_OBJECTSET_IN_LAYOUT("S3_LouisaCoverSet", Local_13, 8, 0);
	(*&Local_13 + 2384)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "lCover01", -297,6746f, 24,31715f, 3981,011f, 0.0f, 276,9139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2384)[0], Local_13.f_2380);
	(*&Local_13 + 2384)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "lCover02", -333,0059f, 19,881f, 3960,351f, 0.0f, -532.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2384)[1], Local_13.f_2380);
	(*&Local_13 + 2384)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "lCover03", -311,0483f, 21,99806f, 3974,563f, 0.0f, -567,7631f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2384)[2], Local_13.f_2380);
	(*&Local_13 + 2384)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "nlLookAt01", -294,6594f, 24,03874f, 3978,106f, 0.0f, 161.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2384)[3], Local_13.f_2380);
	(*&Local_13 + 2384)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "nlLookAt02", -315,1067f, 21,21079f, 3979,273f, 0.0f, 161.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2384)[4], Local_13.f_2380);
	(*&Local_13 + 2384)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "nlLookAt03", -330,4594f, 19,49639f, 3959,951f, 0.0f, 161.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2384)[5], Local_13.f_2380);
	Local_13.f_2412 = CREATE_OBJECTSET_IN_LAYOUT("S3_ExitGuards_CoverSet", Local_13, 8, 0);
	(*&Local_13 + 2416)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "exitCov_01", -292,3871f, 24,033f, 3973,625f, 0.0f, 186.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2416)[0], Local_13.f_2412);
	(*&Local_13 + 2416)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "exitCov_02", -332,8451f, 19,2389f, 3953,672f, 0.0f, -159,9138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2416)[1], Local_13.f_2412);
	(*&Local_13 + 2416)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "exitCov_03", -336,7276f, 18,92268f, 3946,49f, 0.0f, -155.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2416)[2], Local_13.f_2412);
	(*&Local_13 + 2416)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "exitCov_04", -326,7343f, 19,02724f, 3948,398f, 0.0f, -253,6992f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2416)[3], Local_13.f_2412);
	(*&Local_13 + 2416)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "exitCov_05", -345,8617f, 19,08478f, 3949,655f, 0.0f, -467,8211f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2416)[4], Local_13.f_2412);
	Local_13.f_2440 = CREATE_OBJECTSET_IN_LAYOUT("StageFourSet", Local_13, 8, 0);
	(*&Local_13 + 2444)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "FinishSPAWN", -230,041f, 30,74862f, 3612,454f, 0.0f, -86,26677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2444)[0], Local_13.f_2440);
	(*&Local_13 + 2444)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Wait4Carlos", -228,0526f, 30,70618f, 3594,681f, 0.0f, -86,26677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2444)[1], Local_13.f_2440);
	(*&Local_13 + 2444)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Wait4Carlos1", -228,0288f, 30,70741f, 3594,7f, 0.0f, -86,26677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2444)[2], Local_13.f_2440);
	(*&Local_13 + 2444)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "S4_PlayerHorseStart", -368.0f, 16,87624f, 3944.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2444)[3], Local_13.f_2440);
	Local_13.f_2464 = CREATE_OBJECTSET_IN_LAYOUT("S4_BaddiePosSet", Local_13, 8, 0);
	(*&Local_13 + 2468)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01_a", -327,73f, 20,563f, 3869,377f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[0], Local_13.f_2464);
	(*&Local_13 + 2468)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01_b", -265,763f, 32,468f, 3837,467f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[1], Local_13.f_2464);
	(*&Local_13 + 2468)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01c", -279,375f, 36,1f, 3860,222f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[2], Local_13.f_2464);
	(*&Local_13 + 2468)[3] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01c1", -272,635f, 31,257f, 3814,527f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[3], Local_13.f_2464);
	(*&Local_13 + 2468)[4] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01c2", -266,657f, 32,779f, 3772,182f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[4], Local_13.f_2464);
	(*&Local_13 + 2468)[5] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01c3", -263,2292f, 35,333f, 3762,071f, 0.0f, -207.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[5], Local_13.f_2464);
	(*&Local_13 + 2468)[6] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01c4", -235,531f, 35,038f, 3753,158f, 0.0f, -207.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[6], Local_13.f_2464);
	(*&Local_13 + 2468)[7] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01c5", -222,331f, 35,391f, 3740,964f, 0.0f, -252.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[7], Local_13.f_2464);
	(*&Local_13 + 2468)[8] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01c6", -225,31f, 31,454f, 3728,615f, 0.0f, -230.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[8], Local_13.f_2464);
	(*&Local_13 + 2468)[9] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01c7", -214,603f, 32,63f, 3728,638f, 0.0f, -218.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[9], Local_13.f_2464);
	(*&Local_13 + 2468)[10] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01_a1", -285,596f, 27,122f, 3861,254f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[10], Local_13.f_2464);
	(*&Local_13 + 2468)[11] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv01_a2", -280,031f, 35,933f, 3859,819f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[11], Local_13.f_2464);
	(*&Local_13 + 2468)[12] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv04_a", -232,6391f, 31,48899f, 3634,202f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[12], Local_13.f_2464);
	(*&Local_13 + 2468)[13] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv04_b", -230,3817f, 31,45073f, 3634,575f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[13], Local_13.f_2464);
	(*&Local_13 + 2468)[14] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_Baddie_wv04_c", -230,5022f, 31,41393f, 3638,167f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2468)[14], Local_13.f_2464);
	Local_13.f_2532 = CREATE_OBJECTSET_IN_LAYOUT("S4_LandonWaitPosSet", Local_13, 8, 0);
	(*&Local_13 + 2536)[0] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_LandonWt1", -291,1363f, 26,9903f, 3859,686f, 0.0f, -393.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2536)[0], Local_13.f_2532);
	(*&Local_13 + 2536)[1] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_LandonWt2", -272,635f, 31,257f, 3814,527f, 0.0f, -256.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2536)[1], Local_13.f_2532);
	(*&Local_13 + 2536)[2] = CREATE_POINT_IN_LAYOUT(Local_13, "s4_LandonWt3", -229,2244f, 30,70764f, 3595,608f, 0.0f, 182.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_13 + 2536)[2], Local_13.f_2532);
	Local_13.f_2552 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand_nospawn", "smoking_stand_nospawn", -408,9398f, 24,167f, 3911,665f, 0.0f, 482.0f, 0.0f);
	Local_13.f_2556 = CREATE_GRINGO_IN_LAYOUT(Local_13, "leaning_stand_indef1", "smoking_stand", -405,5659f, 24,12927f, 3896,926f, 0.0f, -572,3745f, 0.0f);
	Local_13.f_2560 = CREATE_GRINGO_IN_LAYOUT(Local_13, "ricketts_tnt_crates", "ricketts_tnt_crates", -292,5454f, 24,24111f, 3982,518f, 0.0f, 371,6663f, 0.0f);
	GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(Local_13.f_2560), "UseCase1", 0);
	Local_13.f_2564 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "cover_end01", -222,8867f, 29,8357f, 3602,833f, 0.0f, 158,1336f, 0.0f, 4);
	Local_13.f_2568 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "cover_end02", -236.0f, 31,49134f, 3606,716f, 0.0f, 183,881f, 0.0f, 4);
	Local_13.f_2572 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "CaveCornerCoverBackRight01", -312,4316f, 21,81039f, 3976,556f, 0.0f, -202,8072f, 0.0f, 1);
	Local_13.f_2576 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "CaveCornerCoverBackRight04", -301,3563f, 23,49955f, 3973,251f, 0.0f, -524,4532f, 0.0f, 1);
	Local_13.f_2580 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_13, "gs_CoverL_01", -302,5293f, 23,30809f, 3973,411f, 0.0f, -612.0f, 0.0f, 1);
}

void AÁ>EsãÃ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194) //Position: 0x2449F / 148639
{
	PatchTrap7();
	*"AÁýEtÃÌ}JAÁEtYÃÌæAÀÔE" = 4294951330 * 29698;
}

var ÊExSÝ,Ç:D
;o	exitpath   p   ÌÃlkÊAð·§E_bÃpÖAíçE_*rÃvëAí2ÍE^ßßÃ}%=Aé5ãE^ªÃÇ·AäÖsE^?Ã¬ÙAáÌE^ÑÃÇ®AàE^uÃõ AÝkJE^u¿Ãn6AÚQHE^rPÃ;AØ8qE^\¥ÃøAÖE^ZVÃÃ©AÒE^55Ã²9AÐ9GE^(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141) //Position: 0x246C2 / 149186
{
	Unknown_Function();
	strcpy(&cLocal_65, StackVal, 155);
	Unknown_Function();
	PatchTrap7();
	PatchTrap6();
	PatchTrapB();
	Unknown_Function();
	Unknown_Function();
	CallPatch();
	PatchRet();
	Unknown_Function();
	Local_13.f_2592 = -44;
}

struct<8> EsÐ§ÃË
­AÀÀ§EsêÃËmAÀÀEsûâÃËUyAÀÀtEtÃË¿SAÀÀwEt(\ÃÌoÆAÀÀ|EtE7ÃÌ®ÄAÀkªEtUÃÌÏNAÀ'*EtaôÃÌßAÁ(§EtlÀÃÌàrAÁ_HEtqÞÃÌØÊAÁEtvùÃÌÆmAÁèEt|þÃÌ­zAÁ~áEt#ÃÌ~~AÁpEt±ÃÌ*·AÀùõEt±ÃËyA¿(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x24BDB / 150491
{
	Unknown_Function();
}

void A¬nEuÉÃ½áA«ÒEu(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194) //Position: 0x24DAB / 150955
{
	var uVar17584;
	
}

struct<8> Ã¾°oA¬%EvÃ¾ÇQA&Ev&ÒÃ¾×_AªEv5GÃ¾àýAEvCÓÃ¾äA¢EvRkÃ¾âÐAÉEvaÃ¾ÝÃA5EvoÃ¾(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x24E7F / 151167
{
	return StackVal, StackVal->f_16783;
}

var qEjïÄ5AQVÍEjõVÄýARNHEjý2Äì­AS ÕEkÌÄÖAS&ÔEk	mÄÂAUÁEkÚÄ³ÇAX~lEk%pÄ´³A\SEkBaÄÏùA_¼àEkjfÄòÛAbÝEkÁÄýAf OEk¿ðÄ?AhÞEkë×Äi®AkOElÄSAn"1ElEºÄÂkAp)Els[Äå$Ar¿ElÓÄ}AuqElËÄ
L,AxmJElüÄ	¶A{E(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x255FA / 153082
{
	uLocal_17773 = StackVal;
	SET_CRIPPLE_ENABLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
	Unknown_Function();
	return -!4294934779 * 28051 + 196;
}

void Eo,Ä^ºAºEoiGÄÚÇAWEo¦¼ÄWcA½MEoäDÄÓAEp!¿ÄNoA Ep_Ä ÆÎA7¹EpùÄ <3A,(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x2573F / 153407
{
	return;
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	PatchTrap8();
	return Global_4296360;
	return 4294937877 * 29067 * 29126;
	strcpy((*4294938710)[4294967295 != "" >= (6.0f->f_158 && 4294937506) * 2900869], StackVal * 28888, 0);
	return;
	PatchTrap7();
	(*cLocal_195)[4294939160 * 2924269] = StackVal;
	Global_4551336 = 4294940121;
	((4294939632 || 5.0f * 29298) >= 7)->f_59201 = StackVal;
	PatchTrap0();
	iLocal_69 = 4294940998;
	itos(3.0f * 29400, StackVal, 6);
	197 = 241;
	return 195, 4294941260;
	return 4294941511;
	cLocal_195 = StackVal * 29483 * 29512;
}

var GEvã
Ã»FÄAOEvÚaÃºñ6A~¦,EvÕfÃº7A~¦~EvËmÃ¹´<AßEvÅÃ¸®A-Ev·¡Ã·ÿÿA¬ Ev±ÍÃ¶  A^Ev§øÃµñA	<Ev£(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126) //Position: 0x25ABA / 154298
{
	cLocal_195 = 4294937875 * 30369;
	return 4294938297;
}

struct<276> EwãAÃ¤!]AÀßEwíÂÃ£ïÑAÖEwúU(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x25CDF / 154847
{
	int iVar104;
	float fVar59650;
	
	PatchTrap6();
	PatchTrap6();
	stradd(&cLocal_195, 4294941495 * 30729, 96);
	PatchTrap6();
	PatchTrap5();
	PatchTrap5();
	PatchTrap4();
	Unknown_Function();
	uLocal_167 = &Global_17784;
	PatchTrap4();
	PatchTrap1();
	PatchRet();
}

var Function_607(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9) //Position: 0x264DB / 156891
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	uParam9 = uParam9;
	return "";
}

void Function_608(int iParam0, int iParam1) //Position: 0x26505 / 156933
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

bool Function_609() //Position: 0x2654E / 157006
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_611())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_336(&bLocal_741))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_727))
		{
			bLocal_727 = Function_327(5, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_507())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_728))
		{
			bLocal_728 = Function_502(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_610())
		{
			return 0;
		}
	}
	return 1;
}

bool Function_610() //Position: 0x265C4 / 157124
{
	if (Global_34207 <= 0)
	{
		return 0;
	}
	return 1;
}

bool Function_611() //Position: 0x265D4 / 157140
{
	Function_341(&Local_13 + 4, 976, 2, 0);
	Function_341(&Local_13 + 4, 977, 2, 0);
	Function_341(&Local_13 + 4, Global_8231[03], 2, 0);
	Function_612(&Local_13 + 4, "p_gen_campfireCombined01x", 0, 0);
	Function_612(&Local_13 + 4, "p_gen_tent01x", 0, 0);
	Function_612(&Local_13 + 4, "p_bat_wagon03x", 0, 0);
	Function_612(&Local_13 + 4, "p_gen_dynamite01x", 0, 0);
	Function_612(&Local_13 + 4, "p_uti_cover1x2x", 0, 0);
	Function_612(&Local_13 + 4, "p_uti_cover2x1x", 0, 0);
	Function_612(&Local_13 + 4, "p_uti_cover1x1x", 0, 0);
	Function_612(&Local_13 + 4, "p_gen_dynamite02x", 0, 0);
	Function_612(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_612(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_612(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/ricketts_tnt_crates", 1, 0);
	if (Function_336(&Local_13 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_612(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x267D0 / 157648
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_613(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_339(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_613(var uParam0, int iParam1, int iParam2) //Position: 0x26808 / 157704
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_181(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_339(uParam0[iVar03], 4);
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

void Function_614() //Position: 0x268CC / 157900
{
	Function_612(&bLocal_741, "Gun03", 10, 0);
	Function_612(&bLocal_741, "talking_stand", 5, 0);
	Function_612(&bLocal_741, "custom/talking_stand", 8, 0);
	Function_612(&bLocal_741, "custom/stand_ambient", 8, 0);
	Function_612(&bLocal_741, "aiming_point", 5, 0);
	Function_612(&bLocal_741, "custom/aiming_point", 8, 0);
	Function_612(&bLocal_741, "ngun03_hog", 5, 0);
	Function_612(&bLocal_741, "fema_ride_passenger", 5, 0);
	Function_612(&bLocal_741, "gun03_train_wave", 5, 0);
	Function_612(&bLocal_741, "custom/gun03_train_wave", 8, 0);
	Function_612(&bLocal_741, "throw_dynamite01x", 0, 0);
	Function_341(&bLocal_741, 555, 3, 0);
	Function_341(&bLocal_741, 558, 3, 0);
	return;
}

void Function_615(int iParam0, bool bParam1) //Position: 0x26A20 / 158240
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_622(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_296(iParam0))
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
	if (!Function_296(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_621();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_248();
	Function_290();
	Function_238("");
	Function_620(0);
	Function_619();
	Function_202();
	Function_201();
	ENABLE_JOURNAL_REPLAY(0);
	Function_618();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_345(0, 0x40400000);
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
	Function_617(13);
	Function_617(14);
	Function_617(25);
	Function_617(24);
	Function_617(12);
	Function_617(27);
	Function_617(26);
	Function_617(15);
	Function_616();
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

void Function_616() //Position: 0x26E44 / 159300
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

void Function_617(int iParam0) //Position: 0x26EB8 / 159416
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_618() //Position: 0x26ED8 / 159448
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

void Function_619() //Position: 0x26F15 / 159509
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_620(int iParam0) //Position: 0x26F29 / 159529
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_205())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_621() //Position: 0x26F5E / 159582
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_622(int iParam0, int iParam1) //Position: 0x26F67 / 159591
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
			Function_623(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_623(int iParam0) //Position: 0x26FE9 / 159721
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

bool Function_624(int iParam0) //Position: 0x27037 / 159799
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
						if (iLocal_705 <= 2)
						{
							Function_632();
						}
						else
						{
							Function_631();
						}
					}
					else
					{
						Function_630();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						Function_629();
					}
					break;
				
				case 0x00000003:
					if (!iParam0->f_12)
					{
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
						if (iLocal_705 <= 2)
						{
							Function_628();
						}
						else
						{
							Function_627();
						}
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						Function_626();
					}
					break;
				
				case 0x00000003:
					if (!iParam0->f_12)
					{
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
			Function_625(iParam0, 1);
			return 1;
		}
	}
	Function_625(iParam0, 0);
	return 0;
}

void Function_625(int iParam0, bool bParam1) //Position: 0x2715C / 160092
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

void Function_626() //Position: 0x27180 / 160128
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_AssaultsLisa", "Gun03_AssaultsLisa", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_627() //Position: 0x271CD / 160205
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_AssaultsRickEscape", "Gun03_AssaultsRickEscape", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_628() //Position: 0x27226 / 160294
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_AssaultsRickB4Caves", "Gun03_AssaultsRickB4Caves", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_629() //Position: 0x27281 / 160385
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ShootsLisa", "Gun03_ShootsLisa", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_630() //Position: 0x272CA / 160458
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ShootsRickettsDuEscape", "Gun03_ShootsRickettsDuEscape", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_631() //Position: 0x2732B / 160555
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ShootsRickEscape", "Gun03_ShootsRickEscape", false, 2, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_632() //Position: 0x27380 / 160640
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun03_ShootsRickB4Caves", "Gun03_ShootsRickB4Caves", false, 1, 1, 0, 1);
		Function_351(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_633(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x273D7 / 160727
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
		Function_625(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_652(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_651(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_651(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_637(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_625(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_636(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_635(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_636(&bVar17);
														strcpy(&Var18, "", 64);
														Function_634(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_238(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_635(StackVal, iParam2, bVar17);
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
	Function_625(iParam2, 0);
	return 0;
}

void Function_634(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x27770 / 161648
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

void Function_635(var uParam0, int iParam1, bool bParam2) //Position: 0x2785B / 161883
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

void Function_636(bool bParam0) //Position: 0x278D1 / 162001
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_637(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x278F3 / 162035
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
			return Function_648(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_641(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_648(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_638(iParam0, bVar2);
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
						bVar2 = Function_648(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_638(iParam0, bVar2);
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

var Function_638(int iParam0, bool bParam1) //Position: 0x27A3D / 162365
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
				bParam1 = Function_640(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_639(16);
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
				bParam1 = Function_640(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_639(256);
			}
		}
	}
	return bParam1;
}

bool Function_639(int iParam0) //Position: 0x27B70 / 162672
{
	return 2 | iParam0;
}

int Function_640(int iParam0) //Position: 0x27B7A / 162682
{
	return 4 | iParam0;
}

int Function_641(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x27B84 / 162692
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
				iParam3 = Function_647(iParam0, iParam1, bParam4);
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
			return Function_639(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_642(iParam0, iParam1, 0, bParam4);
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
			return Function_639(16);
		}
	}
	return 0;
}

int Function_642(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x27C36 / 162870
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_646(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_645(iVar0, 3, 1, bParam3))
			{
				if (!Function_651(iParam0, 8, 1))
				{
					return Function_644(64, 1024, bParam2);
				}
			}
			return Function_643(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_645(iVar0, 2, 1, bParam3))
			{
				if (!Function_651(iParam0, 32, 1))
				{
					return Function_644(64, 1024, bParam2);
				}
			}
			return Function_643(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_645(iVar0, 1, 1, bParam3))
			{
				if (!Function_651(iParam0, 64, 1))
				{
					return Function_644(64, 1024, bParam2);
				}
			}
			return Function_643(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_645(iVar0, 3, 1, bParam3))
			{
				if (!Function_651(iParam0, 128, 1))
				{
					return Function_644(64, 1024, bParam2);
				}
			}
			return Function_643(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_645(iVar0, 1, 1, bParam3))
			{
				if (!Function_651(iParam0, 1024, 1))
				{
					return Function_644(64, 1024, bParam2);
				}
			}
			return Function_643(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_645(iVar0, 1, 1, bParam3))
			{
				if (!Function_651(iParam0, 1024, 1))
				{
					return Function_644(64, 1024, bParam2);
				}
			}
			return Function_643(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_643(int iParam0, int iParam1, bool bParam2) //Position: 0x27DF0 / 163312
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_644(int iParam0, int iParam1, bool bParam2) //Position: 0x27E05 / 163333
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_645(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x27E1A / 163354
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_646(int iParam0) //Position: 0x27E37 / 163383
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

int Function_647(var uParam0, int iParam1, bool bParam2) //Position: 0x27EA6 / 163494
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_646(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_645(iVar0, 3, 1, bParam2))
			{
				if (!Function_651(uParam0, 8, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000009:
			if (Function_645(iVar0, 3, 1, bParam2))
			{
				if (!Function_651(uParam0, 8, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x0000006E:
			if (Function_645(iVar0, 2, 1, bParam2))
			{
				if (!Function_651(uParam0, 16, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x0000005B:
			if (Function_645(iVar0, 2, 1, bParam2))
			{
				if (!Function_651(uParam0, 32, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000031:
			if (Function_645(iVar0, 1, 1, bParam2))
			{
				if (!Function_651(uParam0, 64, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000007:
			if (Function_645(iVar0, 3, 1, bParam2))
			{
				if (!Function_651(uParam0, 128, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000008:
			if (Function_645(iVar0, 2, 1, bParam2))
			{
				if (!Function_651(uParam0, 256, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000014:
			if (Function_645(iVar0, 1, 1, bParam2))
			{
				if (!Function_651(uParam0, 512, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000018:
			if (Function_645(iVar0, 1, 1, bParam2))
			{
				if (!Function_651(uParam0, 512, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000057:
			if (Function_645(iVar0, 1, 1, bParam2))
			{
				if (!Function_651(uParam0, 1024, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000058:
			if (Function_645(iVar0, 1, 1, bParam2))
			{
				if (!Function_651(uParam0, 1024, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_648(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x280C3 / 164035
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
						return Function_647(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_651(iParam0, 2, 1))
					{
						return Function_640(8);
					}
					return Function_639(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_651(iParam0, 4, 1))
					{
						return Function_640(16);
					}
					return Function_639(16);
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
							return Function_642(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_651(iParam0, 2, 1))
						{
							return Function_640(128);
						}
						return Function_639(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_651(iParam0, 4, 1))
						{
							return Function_640(256);
						}
						return Function_639(256);
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
						return Function_642(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_651(iParam0, 2, 1))
					{
						return Function_640(8);
					}
					return Function_639(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_651(iParam0, 4, 1))
					{
						return Function_640(16);
					}
					return Function_639(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_650(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_651(iParam0, 2, 1))
					{
						return Function_640(8);
					}
					return Function_639(8);
				}
				if (!Function_651(iParam0, 4, 1))
				{
					return Function_640(16);
				}
				return Function_639(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_642(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_649(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_639(128);
							}
							if (!Function_651(iParam0, 2, 1))
							{
								return Function_640(8);
							}
							return Function_639(8);
						}
						if (iParam4 == 2)
						{
							if (Function_649(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_639(256);
							}
							if (!Function_651(iParam0, 4, 1))
							{
								return Function_640(16);
							}
							return Function_639(16);
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

bool Function_649(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x28382 / 164738
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

int Function_650(int iParam0, var uParam1, bool bParam2) //Position: 0x2843B / 164923
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_646(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_645(iVar0, 2, 1, bParam2))
			{
				if (!Function_651(iParam0, 16, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x0000005B:
			if (Function_645(iVar0, 2, 1, bParam2))
			{
				if (!Function_651(iParam0, 32, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000057:
			if (Function_645(iVar0, 1, 1, bParam2))
			{
				if (!Function_651(iParam0, 1024, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		case 0x00000058:
			if (Function_645(iVar0, 1, 1, bParam2))
			{
				if (!Function_651(iParam0, 1024, 1))
				{
					return Function_640(64);
				}
			}
			return Function_639(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_651(int iParam0, bool bParam1, bool bParam2) //Position: 0x2854F / 165199
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

int Function_652(int iParam0) //Position: 0x28577 / 165239
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

bool Function_653(bool bParam0) //Position: 0x285A8 / 165288
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_654(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x285C6 / 165318
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

