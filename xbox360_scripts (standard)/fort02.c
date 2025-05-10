//Decompiled with MagicRDR v1.0
//Function Count : 601
//Statics Count : 987
//Natives Count : 756
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2785> Local_4 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_729 = 99;
	iLocal_730 = 0;
	Local_748 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_729 = 99;
	iLocal_730 = 6;
	Local_731 = 1000;
	while (Function_271())
	{
		Function_220();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x49 / 73
{
	SET_ACTOR_MAX_HEALTH(bLocal_755, 50.0f);
	if (IS_ACTOR_VALID((*&Local_4 + 928)[72]))
	{
		SET_ACTOR_PERMANENT((*&Local_4 + 928)[72], 0);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 928)[82]))
	{
		SET_ACTOR_PERMANENT((*&Local_4 + 928)[82], 0);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_755);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_756);
	if (IS_OBJECT_VALID(Local_703.f_96))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_703.f_96)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_703.f_96));
		}
	}
	Function_219(1);
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_878, 0);
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	TASK_CLEAR(bLocal_755);
	AI_DONT_SLOW_DOWN_TO_WALK_FOR_TURNS(bLocal_755, true);
	Function_216(0, 0, 1, 1, 1);
	Function_215(Local_4.f_2516);
	Function_214(StackVal, StackVal, bLocal_755, Function_215(Local_4.f_2516), 393264, 3, 1, 1);
	Function_213(bLocal_728);
	Function_213(Local_4);
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_755, true);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(23, 1);
	Function_212();
	Function_208(3, 0, 0);
	ALLOW_TUMBLEWEEDS(1);
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	Function_207();
	Function_206();
	Function_181(bLocal_739, 1, 0, 1, 1, 1, 1, 1);
	Function_177(&bLocal_764);
	Function_177(&bLocal_798);
	Function_177(&bLocal_805);
	Function_176();
	Function_175();
	Function_174();
	Function_173();
	Function_172();
	Function_171();
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_809))
	{
		DESTROY_ITERATOR(bLocal_809);
	}
	RELEASE_LAYOUT_REF(bLocal_728);
	if (bLocal_738)
	{
		Function_160(4);
		Function_29(Local_748, 1, 0, 1, 0);
		Function_28(1);
		AUDIO_MUSIC_ONE_SHOT("FORT02_STEREO_SONG", "IDLE", 0.0f, 0.0f, 0, 1);
		AUDIO_MUSIC_RELEASE_CONTROL(30000, 1);
		Function_26(0x8000000);
		Function_24(0, 0);
		Global_25265 = (GET_CURRENT_GAME_TIME() + 280.0f);
	}
	else if (bLocal_739)
	{
		Function_20(Local_748);
	}
	else
	{
		Function_2(Local_748);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x1FC / 508
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x21D / 541
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x238 / 568
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x259 / 601
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x26F / 623
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

void Function_7(int iParam0) //Position: 0x30B / 779
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x32C / 812
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

void Function_9() //Position: 0x372 / 882
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x38B / 907
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x3DE / 990
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

struct<16> Function_12(int iParam0) //Position: 0x502 / 1282
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x527 / 1319
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x547 / 1351
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x55E / 1374
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x579 / 1401
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7C0 / 1984
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x7E9 / 2025
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

bool Function_19(int iParam0) //Position: 0x80D / 2061
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x822 / 2082
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x840 / 2112
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

struct<16> Function_22(int iParam0) //Position: 0x8E6 / 2278
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x910 / 2320
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

void Function_24(int iParam0, int iParam1) //Position: 0xB66 / 2918
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
			Function_25(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_25(int iParam0) //Position: 0xBE8 / 3048
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

void Function_26(bool bParam0) //Position: 0xC36 / 3126
{
	if (Function_27(bParam0, 1) && !Function_27(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_27(bool bParam0, bool bParam1) //Position: 0xC63 / 3171
{
	return (bParam0 && bParam1) == 0;
}

void Function_28(int iParam0) //Position: 0xC70 / 3184
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

void Function_29(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xCC2 / 3266
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
		Function_159(&(Global_3422[iVar240]));
		Function_158(4194304);
		if (bParam3)
		{
			Function_119(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_113(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_119(iVar2, &uVar0, 0);
		}
		bVar1 = Function_112();
		if (bParam1)
		{
			Function_96(iVar2, bParam0, bVar1);
			Function_95();
		}
	}
	Function_42(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_34(iVar2, bVar1);
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
	Function_30();
}

void Function_30() //Position: 0xDAF / 3503
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_31(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_31(int iParam0, bool bParam1) //Position: 0xDDF / 3551
{
	int iVar0;
	
	iVar0 = Function_32(iParam0);
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

int Function_32(int iParam0) //Position: 0xE1C / 3612
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_33(int iParam0) //Position: 0xE36 / 3638
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_34(int iParam0, bool bParam1) //Position: 0xE4C / 3660
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
							Function_35(Global_34573, 0x1000000, 3, 0);
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
							Function_35(Global_34573, 0x1000000, 3, 0);
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
							Function_35(Global_34573, 0x1000000, 3, 0);
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
							Function_35(Global_34573, 0x1000000, 3, 0);
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
							Function_35(Global_34573, 0x1000000, 3, 0);
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
							Function_35(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_34(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_34(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_34(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_34(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_34(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_34(57, 0);
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

void Function_35(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1143 / 4419
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_37(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_36(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_36(char* cParam0, int iParam1) //Position: 0x11AF / 4527
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

bool Function_37(bool bParam0, var uParam1, int iParam2) //Position: 0x11E6 / 4582
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
		if (Function_40(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_39(uVar0))
		{
			case 0x00000002:
				if (!Function_38(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x125E / 4702
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_39(char* cParam0) //Position: 0x1271 / 4721
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

int Function_40(int iParam0) //Position: 0x1312 / 4882
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_41(&bVar1, 2147483648);
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x134F / 4943
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_42(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1362 / 4962
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
		Function_91();
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
			Function_85(bParam0);
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
			Function_46(1);
			Function_44(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_43(bParam0, &Var14);
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

void Function_43(int iParam0, int iParam1) //Position: 0x1574 / 5492
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_44(bool bParam0, int iParam1) //Position: 0x15AE / 5550
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_45())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_45() //Position: 0x15F0 / 5616
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_46(bool bParam0) //Position: 0x15F9 / 5625
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_77();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_41(&Global_63095, 1);
		Function_41(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_47() //Position: 0x164A / 5706
{
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_55();
	Function_55();
	if (!Function_45())
	{
		Function_52();
		Function_51();
		Function_50();
		Function_49();
	}
	Function_48();
	return;
}

void Function_48() //Position: 0x167D / 5757
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

void Function_49() //Position: 0x1783 / 6019
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

void Function_50() //Position: 0x17B6 / 6070
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

void Function_51() //Position: 0x1944 / 6468
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

void Function_52() //Position: 0x1AF8 / 6904
{
	Function_53(&Global_28260, 1, 0);
	return;
}

void Function_53(int iParam0, bool bParam1, var uParam2) //Position: 0x1B06 / 6918
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
	
	bVar0 = Function_54();
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

var Function_54() //Position: 0x1CF7 / 7415
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_55() //Position: 0x1D0C / 7436
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
				iVar2 = ((Function_71((50 + iVar4)) + Function_71((183 + iVar4))) + Function_71((90 + iVar4)));
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
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DA7 / 7591
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
		Function_70(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_69(iParam0);
	if (bParam2)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2042 / 8258
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_68(390))), 32);
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
					bVar19 = (Function_67(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_67(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_65(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_62(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_59(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_58(), &Var9);
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

bool Function_58() //Position: 0x266F / 9839
{
	int iVar0;
	
	return iVar0;
}

var Function_59(int iParam0) //Position: 0x2677 / 9847
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_60(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2688 / 9864
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_61(char* cParam0, char* cParam1) //Position: 0x277D / 10109
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2796 / 10134
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_64(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_63(Function_64(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_63(int iParam0, int iParam1) //Position: 0x27FB / 10235
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_64(int iParam0, bool bParam1) //Position: 0x280D / 10253
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_65(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x281F / 10271
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
	if (((Function_66(iParam0) != 19 || Function_66(iParam0) != 17) || Function_66(iParam0) != 10) || Function_66(iParam0) != 9)
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

int Function_66(int iParam0) //Position: 0x294F / 10575
{
	return Global_35278[iParam020].f_48;
}

float Function_67(int iParam0) //Position: 0x295E / 10590
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_68(int iParam0) //Position: 0x2997 / 10647
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_69(int iParam0) //Position: 0x29D4 / 10708
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B6E / 11118
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

int Function_71(bool bParam0) //Position: 0x2D88 / 11656
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_72() //Position: 0x2DC9 / 11721
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
		iVar2 = ((Function_71((50 + iVar3) + 15) + Function_71((183 + iVar3) + 15)) + Function_71((90 + iVar3) + 15));
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
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x2E52 / 11858
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
			iVar2 = ((Function_71((50 + iVar3) + 8) + Function_71((183 + iVar3) + 8)) + Function_71((90 + iVar3) + 8));
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
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_74() //Position: 0x2EE9 / 12009
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
		iVar2 = ((Function_71((50 + iVar3)) + Function_71((183 + iVar3))) + Function_71((90 + iVar3)));
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
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_75() //Position: 0x2F68 / 12136
{
	Function_76(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x2F8E / 12174
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
	Function_70(iParam0, bParam1, 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_57(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_77() //Position: 0x3198 / 12696
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_78(StackVal, StackVal, vVar0))
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

bool Function_78(vector3 vParam0) //Position: 0x3239 / 12857
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_79(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3251 / 12881
{
	int iVar0;
	
	iVar0 = Function_83(uParam2, uParam3);
	if (Function_82(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_81(&Global_63095, 1);
			Function_41(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_81(&Global_63095, 2);
			Function_41(&Global_63095, 1);
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
		Function_81(&Global_63095, 2);
		Function_41(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_80();
	return StackVal, StackVal, Function_80();
}

vector3 Function_80() //Position: 0x3338 / 13112
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_81(bool bParam0, bool bParam1) //Position: 0x3341 / 13121
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_82(int iParam0) //Position: 0x3350 / 13136
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0, bool bParam1) //Position: 0x3366 / 13158
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
				fVar2 = Function_84(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_84(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_82(bVar0) && !bParam1)
	{
		bVar0 = Function_83(bParam0, 1);
	}
	return bVar0;
}

float Function_84(vector3 vParam0, vector3 vParam3) //Position: 0x342D / 13357
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_85(bool bParam0) //Position: 0x344A / 13386
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
				Function_90(12, 1, 0, 0);
				Function_89(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_90(13, 1, 0, 0);
				Function_89(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_90(14, 1, 0, 0);
				Function_89(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_90(15, 1, 0, 0);
				Function_89(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_90(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_88(bParam0) == 1)
					{
						iVar0 = Function_87(bParam0);
						if (Function_86(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_89(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_89(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_89(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_89(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_89(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_89(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_89(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_89(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_89(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_89(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_89(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_89(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_89(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_89(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_89(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_89(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_89(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_89(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_89(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_89(4, 19);
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
								Function_90(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_90(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_90(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_87(bParam0) == 0)
			{
				if (Function_88(bParam0) == 1)
				{
					Function_90(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_86(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_89(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_89(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_89(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_89(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_89(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_89(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_89(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_89(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_88(bParam0) == 1)
			{
				Function_90(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_90(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_89(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_89(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_89(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_90(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_89(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_89(6, 9);
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

bool Function_86(int iParam0) //Position: 0x3926 / 14630
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_87(bool bParam0) //Position: 0x393C / 14652
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_88(bool bParam0) //Position: 0x395B / 14683
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_89(int iParam0, bool bParam1) //Position: 0x3975 / 14709
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

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x39DC / 14812
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
	Function_70(iParam0, TO_FLOAT(bParam1), 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_91() //Position: 0x3BFC / 15356
{
	int iVar0;
	int iVar1;
	
	if (!Function_33(Global_6269))
	{
		return;
	}
	iVar0 = Function_71(24);
	iVar1 = Function_32(Global_6269);
	if (!Function_33(iVar0) && Function_94(iVar1) < 0)
	{
		Function_56(24, Global_6269, 0);
		Function_92(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_94(Function_32(iVar0)))
	{
		Function_56(24, Global_6269, 0);
		Function_92(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_92(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3C7C / 15484
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
		Function_93(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_93(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3FCE / 16334
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

int Function_94(int iParam0) //Position: 0x4052 / 16466
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_95() //Position: 0x406C / 16492
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

void Function_96(int iParam0, int iParam1, bool bParam2) //Position: 0x409A / 16538
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
	
	if (!Function_33(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_111(iParam0);
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
				bVar0 = (Function_71(42) - Global_34165.f_116);
				bVar1 = (Function_71(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_68(49)) - Global_34165.f_124);
				bVar3 = (Function_71(49) - Global_34165.f_128);
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
				bVar4 = (Function_71(355) - Global_34165.f_116);
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
		iVar15 = Function_110(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_97(50, 1, 0);
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

void Function_97(int iParam0, bool bParam1, bool bParam2) //Position: 0x4336 / 17206
{
	int iVar0;
	bool bVar1;
	
	if (Function_109(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_71(3);
	Function_106();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_104(3, bVar1);
		if (!bParam2)
		{
			if (!Function_38(Global_76848, 4))
			{
				Function_35(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_90(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_67(3));
	iVar0 = Function_71(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_99(4, Function_103(Global_12976.f_156), 1);
				Function_98(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_99(4, Function_103(Global_12976.f_156), 1);
				Function_98(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_99(4, Function_103(Global_12976.f_156), 1);
				Function_98(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_99(4, Function_103(Global_12976.f_156), 1);
				Function_98(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_99(4, Function_103(Global_12976.f_156), 1);
				Function_98(Global_12976.f_152, Global_12976.f_156);
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

void Function_98(int iParam0, int iParam1) //Position: 0x44F9 / 17657
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

int Function_99(int iParam0, char* cParam1, bool bParam2) //Position: 0x4757 / 18263
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
	Function_92(iParam0, cParam1, 0, 1);
	iVar1 = Function_100();
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

int Function_100() //Position: 0x48DC / 18652
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
	Function_101();
	return 0;
}

void Function_101() //Position: 0x497B / 18811
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
		Function_102(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_102(int iParam0) //Position: 0x4A2A / 18986
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

var Function_103(int iParam0) //Position: 0x4A88 / 19080
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

int Function_104(int iParam0, bool bParam1) //Position: 0x4B17 / 19223
{
	bool bVar0;
	int iVar1;
	
	Function_90(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_105(iParam0, 4294967295);
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
	iVar1 = Function_100();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_105(int iParam0, int iParam1) //Position: 0x4CB4 / 19636
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

void Function_106() //Position: 0x4CF5 / 19701
{
	Function_108(3, 0.0f);
	Function_107(3, 10000.0f);
	return;
}

int Function_107(int iParam0, int iParam1) //Position: 0x4D0B / 19723
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_108(int iParam0, int iParam1) //Position: 0x4D4B / 19787
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_109(int iParam0) //Position: 0x4D8B / 19851
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_110(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4D9A / 19866
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

int Function_111(int iParam0) //Position: 0x4F62 / 20322
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

var Function_112() //Position: 0x4FF7 / 20471
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_113(int iParam0) //Position: 0x501C / 20508
{
	if (!Function_33(iParam0))
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
			Function_97(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_97(25, 1, 0);
			Function_118(1, 1);
			break;
		
		case 0x00000015:
			Function_118(50, 1);
			Function_97(250, 1, 0);
			Function_114(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_97(75, 1, 0);
			Function_114(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_97(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_118(50, 1);
			Function_97(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_118(5, 1);
			Function_114(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_97(75, 1, 0);
			Function_114(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_118(5, 1);
			Function_97(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_97(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_114(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_118(25, 1);
			Function_97(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_118(10, 1);
			Function_97(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_97(50, 1, 0);
			Function_114(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_97(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_97(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_114(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_118(20, 1);
			Function_97(75, 1, 0);
			Function_114(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_118(25, 1);
			Function_97(150, 1, 0);
			Function_114(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_118(10, 1);
			Function_97(150, 1, 0);
			Function_114(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_97(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_114(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_114(100, 1, 0);
			Function_118(5, 1);
			break;
		
		case 0x0000000F:
			Function_118(3, 1);
			Function_97(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_114(125, 1, 0);
			Function_97(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_118(50, 1);
			Function_97(100, 1, 0);
			Function_114(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_118(50, 1);
			Function_97(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_118(75, 1);
			Function_97(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_97(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_97(75, 1, 0);
			Function_114(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_97(250, 1, 0);
			Function_114(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_97(75, 1, 0);
			Function_114(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_97(200, 1, 0);
			Function_114(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_97(75, 1, 0);
			Function_114(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_97(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_118(50, 1);
			Function_97(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_118(100, 1);
			Function_97(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_97(200, 1, 0);
			Function_114(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_97(300, 1, 0);
			Function_114(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_97(300, 1, 0);
			Function_114(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_97(300, 1, 0);
			Function_114(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_97(500, 1, 0);
			Function_114(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_97(150, 1, 0);
			Function_114(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_114(25, 1, 0);
			Function_118(100, 1);
			break;
		
		case 0x0000002A:
			Function_97(150, 1, 0);
			Function_114(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_114(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_114(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_114(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_114(150, 1, 0);
			Function_118(100, 1);
			break;
		
		case 0x00000035:
			Function_114(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_114(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_114(150, 1, 0);
			Function_118(100, 1);
			break;
		
		case 0x00000032:
			Function_114(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_114(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_114(int iParam0, bool bParam1, bool bParam2) //Position: 0x54D7 / 21719
{
	int iVar0;
	bool bVar1;
	
	if (Function_109(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_71(1);
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
			Function_104(1, bVar1);
			if (!bParam2)
			{
				if (!Function_38(Global_76848, 1))
				{
					Function_35(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_117(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_38(Global_76848, 2))
				{
					Function_35(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_90(1, bVar1, 0, 0);
	}
	else
	{
		Function_116(1, (4294967295 * bVar1), 0);
	}
	if (Function_71(1) <= 4294962296)
	{
		Function_56(1, 4294962296, 0);
	}
	else if (Function_71(1) >= 5000)
	{
		Function_56(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_67(1));
	iVar0 = Function_71(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_99(2, Function_115(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_99(2, Function_115(Global_12976.f_152), 0);
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
				Function_99(2, Function_115(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_99(2, Function_115(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_99(2, Function_115(Global_12976.f_152), 1);
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
				Function_99(2, Function_115(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_99(2, Function_115(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_99(2, Function_115(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_99(2, Function_115(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_99(2, Function_115(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_99(2, Function_115(Global_12976.f_152), 1);
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
				Function_99(2, Function_115(Global_12976.f_152), 0);
			}
			break;
	}
	Function_98(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_115(int iParam0) //Position: 0x57EC / 22508
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

int Function_116(int iParam0, bool bParam1, int iParam2) //Position: 0x588F / 22671
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
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_117(int iParam0, bool bParam1) //Position: 0x5A8A / 23178
{
	bool bVar0;
	int iVar1;
	
	Function_116(iParam0, bParam1, 0);
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
	iVar1 = Function_105(iParam0, 4294967295);
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
	iVar1 = Function_100();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_118(bool bParam0, bool bParam1) //Position: 0x5C26 / 23590
{
	bool bVar0;
	
	bVar0 = Function_71(0);
	if ((Function_71(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_90(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_71(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_90(597, bParam0, 0, 0);
	}
	if ((Function_71(597) + Function_71(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_119(int iParam0, var uParam1, bool bParam2) //Position: 0x5CF1 / 23793
{
	struct<4> Var0;
	
	if (!Function_33(iParam0))
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
			Function_156(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_153(Global_30640[0]);
			Function_153(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_151(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_153(Global_30668[0]);
			Function_160(0);
			Function_149(2, 1);
			Function_149(0, 1);
			Function_149(1, 1);
			break;
		
		case 0x00000003:
			Function_153(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_153(Global_30668[0]);
			Function_153(Global_30640[0]);
			Function_147(0, 1);
			Function_147(15, 1);
			Function_147(9, 1);
			Function_147(12, 1);
			Function_147(16, 1);
			Function_149(3, 1);
			break;
		
		case 0x00000005:
			Function_153(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_151(21, bParam2, 4);
			Function_153(Global_30668[0]);
			Function_149(39, 1);
			break;
		
		case 0x00000007:
			Function_153(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_153(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_146(4))
					{
						Function_136(4, 0, 0, 1);
					}
				}
			}
			Function_153(Global_30640[0]);
			Function_153(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_153(Global_30640[0]);
			Function_153(Global_30668[2]);
			Function_135(&(Global_29008[Global_30668[2]]), 32768);
			Function_134(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_151(9, bParam2, 4);
			Function_153(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_153(Global_30640[0]);
			Function_153(Global_30658[0]);
			Function_135(&(Global_29008[Global_30658[0]]), 32768);
			Function_134(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_153(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_153(Global_30640[0]);
			Function_153(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_153(Global_30640[1]);
			Function_153(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_153(Global_30679[0]);
			Function_153(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_153(Global_30658[5]);
			Function_153(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_151(21, bParam2, 4);
			Function_153(Global_30640[4]);
			Function_153(Global_30658[4]);
			Function_133(&Global_76847, 0x2000000);
			Function_133(&Global_76847, 0x4000000);
			Function_133(&Global_76847, 4096);
			Function_133(&Global_76847, 8);
			Function_133(&Global_76847, 8388608);
			Function_133(&Global_76847, 524288);
			Function_133(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_153(Global_30640[4]);
			Function_153(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_134(&(Global_29008[Global_30640[4]]), 256);
			Function_153(Global_30640[4]);
			Function_153(Global_30658[0]);
			Function_135(&(Global_29008[Global_30658[0]]), 32768);
			Function_134(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_153(Global_30640[0]);
			Function_153(Global_30640[5]);
			Function_151(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_153(Global_30658[3]);
			Function_135(&(Global_29008[Global_30658[3]]), 32768);
			Function_134(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_151(9, bParam2, 4);
			Function_153(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_135(&(Global_29008[Global_30679[1]]), 32768);
			Function_153(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_151(12, bParam2, 4);
			Function_134(&(Global_29008[Global_30679[1]]), 256);
			Function_153(Global_30668[3]);
			Function_153(Global_30693[0]);
			Function_153(Global_30685[0]);
			Function_160(4);
			Function_147(13, 1);
			Function_147(1, 1);
			Function_147(18, 1);
			Function_149(34, 1);
			Function_149(44, 1);
			Function_149(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_151(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_153(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_153(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_153(Global_30693[0]);
			Function_153(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_153(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_153(Global_30685[0]);
			Function_153(Global_30693[0]);
			Function_153(Global_30693[1]);
			Function_153(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_151(23, bParam2, 3);
			Function_147(23, 1);
			Function_153(Global_30685[0]);
			Function_153(Global_30685[2]);
			Function_135(&(Global_29008[Global_30685[2]]), 32768);
			Function_134(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_151(19, bParam2, 4);
			Function_153(Global_30685[0]);
			Function_153(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_151(24, bParam2, 3);
			Function_147(24, 1);
			Function_153(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_153(Global_30685[0]);
			Function_153(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_153(Global_30693[12]);
			Function_153(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_153(Global_30693[12]);
			Function_153(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_151(25, bParam2, 10);
			Function_153(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_153(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_153(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_151(13, bParam2, 4);
			Function_153(Global_30693[2]);
			Function_153(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_146(8))
				{
					Function_136(8, 0, 0, 1);
				}
			}
			Function_153(Global_30685[0]);
			Function_160(9);
			Function_147(7, 1);
			Function_147(11, 1);
			Function_147(3, 1);
			Function_147(20, 1);
			Function_149(57, 1);
			break;
		
		case 0x0000002A:
			Function_151(2, bParam2, 4);
			Function_153(Global_30717[0]);
			Function_153(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_153(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_153(Global_30717[0]);
			Function_153(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_153(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_153(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_153(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_151(17, bParam2, 4);
			Function_153(Global_30723[0]);
			Function_153(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_131(15))
				{
					Function_126(15, 0, 1);
				}
			}
			Function_134(&(Global_29008[Global_30717[1]]), 256);
			Function_160(11);
			Function_153(Global_30717[1]);
			Function_153(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_153(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_153(Global_30717[1]);
			Function_153(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_153(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_153(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_153(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_153(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_153(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_153(Global_30717[1]);
			Function_120(11);
			Function_160(12);
			Global_16537[1121].f_40 = 0;
			Function_149(56, 1);
			if (!bParam2)
			{
				if (!Function_146(9))
				{
					Function_136(9, 0, 0, 0);
				}
				if (!Function_146(10))
				{
					Function_136(10, 0, 0, 1);
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

void Function_120(int iParam0) //Position: 0x65E1 / 26081
{
	bool bVar0;
	
	if (!Function_82(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_125(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_125(Global_16537[iParam021].f_72, 0);
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
			Function_121(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_121(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6750 / 26448
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
		Function_123(Function_124(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_123(Function_124(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_123(StackVal);
				vVar1 = { StackVal, StackVal, Function_123(StackVal) };
				if (Function_122(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_122(vector3 vParam0, vector3 vParam3) //Position: 0x6856 / 26710
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_123(int iParam0) //Position: 0x6883 / 26755
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

var Function_124(vector3 vParam0) //Position: 0x68DA / 26842
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

void Function_125(bool bParam0, bool bParam1) //Position: 0x6928 / 26920
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

void Function_126(bool bParam0, bool bParam1, bool bParam2) //Position: 0x697C / 27004
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_131(bParam0))
	{
		if (!Function_146(bParam0))
		{
			Function_136(bParam0, 1, 0, 0);
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
		Function_90(457, 1, 0, 0);
		Function_129(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_128(0, 0, 1, 1))
			{
				Function_46(1);
				Function_44(1, 0);
			}
			else
			{
				Function_127();
			}
		}
	}
	return;
}

void Function_127() //Position: 0x6B1A / 27418
{
	return;
}

bool Function_128(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6B20 / 27424
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

void Function_129(bool bParam0, int iParam1) //Position: 0x6BC4 / 27588
{
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_130(int iParam0) //Position: 0x6C19 / 27673
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_131(int iParam0) //Position: 0x6C2F / 27695
{
	if (!Function_130(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_132(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_132(int iParam0, int iParam1) //Position: 0x6C80 / 27776
{
	int iVar0;
	
	if (!Function_130(iParam0))
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

void Function_133(var uParam0, int iParam1) //Position: 0x6CAD / 27821
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_134(var uParam0, int iParam1) //Position: 0x6CBC / 27836
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x6CD3 / 27859
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6CE2 / 27874
{
	struct<8> Var0;
	
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_145(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_146(bParam0))
	{
		Function_90(456, 1, 0, 0);
		Function_129(bParam0, 2);
		if (bParam2)
		{
			if (!Function_128(0, 0, 1, 1))
			{
				Function_46(1);
				Function_44(1, 5);
			}
			else
			{
				Function_127();
			}
		}
		Function_139(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_138() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_138() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_137(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_38(Global_76846, 2))
		{
			Function_35(Global_34573, 2, 1, 0);
		}
	}
}

void Function_137(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6E2C / 28204
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

bool Function_138() //Position: 0x6E77 / 28279
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_139(bool bParam0) //Position: 0x6EA4 / 28324
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
			if (Function_143(bParam0, Function_144(bVar24)))
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
			if (Function_143(bParam0, Function_144(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_142(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_141(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_140(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_140(int iParam0) //Position: 0x7054 / 28756
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_130(iParam0))
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

void Function_141(bool bParam0, bool bParam1) //Position: 0x70AB / 28843
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

var Function_142(int iParam0) //Position: 0x70D0 / 28880
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_130(iParam0))
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

bool Function_143(bool bParam0, bool bParam1) //Position: 0x7126 / 28966
{
	int iVar0;
	
	if (!Function_130(bParam0))
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

bool Function_144(bool bParam0) //Position: 0x7185 / 29061
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_145(int iParam0) //Position: 0x7191 / 29073
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_146(int iParam0) //Position: 0x71AD / 29101
{
	if (!Function_130(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_132(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_147(int iParam0, int iParam1) //Position: 0x71FF / 29183
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_148(iParam0, iParam1);
	Function_35(Global_34573, 1, 4, 1);
	return 1;
}

int Function_148(int iParam0, int iParam1) //Position: 0x7272 / 29298
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_149(int iParam0, int iParam1) //Position: 0x72CE / 29390
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_150(iParam0, iParam1);
	Function_35(Global_34573, 1, 4, 1);
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0x733F / 29503
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_151(bool bParam0, bool bParam1, int iParam2) //Position: 0x7399 / 29593
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_152(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_156(bParam0, 0, 0);
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

bool Function_152(int iParam0, int iParam1) //Position: 0x7407 / 29703
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_153(int iParam0) //Position: 0x741A / 29722
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_155(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_135(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_90(473, 1, 0, 0);
		iVar0 = Function_154(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_90(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_90(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_90(476, 1, 0, 0);
		}
	}
	bVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_89(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_89(7, 30);
	}
	if (Function_67(473) <= Function_68(473))
	{
		if (!Function_45())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_154(int iParam0) //Position: 0x7519 / 29977
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_86(iParam0))
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

bool Function_155(var uParam0, int iParam1) //Position: 0x7571 / 30065
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_156(bool bParam0, bool bParam1, int iParam2) //Position: 0x758D / 30093
{
	if (!Function_157(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_54(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_54(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_54(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_157(int iParam0) //Position: 0x75E4 / 30180
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_158(bool bParam0) //Position: 0x75F6 / 30198
{
	bool bVar0;
	
	if (Function_27(bParam0, 1) && Function_27(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_159(int iParam0) //Position: 0x762A / 30250
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
			Function_208(4, 0, 0);
		}
	}
	return;
}

void Function_160(int iParam0) //Position: 0x7691 / 30353
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_82(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_167(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_167(Global_16537[iParam021].f_72, 0);
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
			Function_90(468, 1, 0, 0);
			Function_89(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_137("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_121(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_136(14, 1, 0, 0);
				Function_161(14, 1, 0, 0, 0);
			}
			if (!Function_128(0, 0, 1, 1))
			{
				Function_46(1);
				Function_44(1, 6);
			}
			else
			{
				Function_127();
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
			Function_137("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_90(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_89(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_161(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x793D / 31037
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_145(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_132(bParam0, 2))
	{
		Function_90(456, 1, 0, 0);
		Function_129(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_137(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_143(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_129(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_128(0, 0, 1, 1))
			{
				Function_46(1);
				Function_44(1, 0);
			}
			else
			{
				Function_127();
			}
		}
		Function_139(bParam0);
		if (StackVal && !Function_27(((((!Function_138() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_27((((Function_138() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_38(Global_76846, 2))
		{
			Function_35(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_163();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_162(3, bParam1);
				break;
			
			case 0x00000005:
				Function_162(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_162(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_162(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_162(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_162(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_89(2, 24);
				break;
			
			case 0x00000003:
				Function_89(2, 25);
				break;
			
			case 0x0000000F:
				Function_89(2, 26);
				break;
			
			case 0x0000000D:
				Function_89(2, 27);
				break;
			
			case 0x0000000E:
				Function_89(2, 28);
				break;
			}
	}
}

void Function_162(int iParam0, bool bParam1) //Position: 0x7BCC / 31692
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

void Function_163() //Position: 0x7C2B / 31787
{
	if (Function_130(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_166(Global_28180);
			Global_28180.f_8 = Function_164(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_166(Global_28180);
			Global_28180.f_8 = Function_164(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_164(int iParam0, int iParam1) //Position: 0x7CA6 / 31910
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
					if (Function_31(6, 0) || Function_31(12, 0))
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
					if (Function_165(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_31(5, 0))
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
					if (Function_165(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_165(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_165(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_165(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_31(26, 0))
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
					if (Function_165(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_165(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_165(27) && iVar18)
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
					if (Function_165(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_165(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_165(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_165(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_31(17, 0) && iVar15)
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
					if (Function_165(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_31(6, 0) && Function_165(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_165(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_31(9, 0) && Function_165(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_165(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_31(8, 0) && iVar19)
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
	if (Function_78(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_78(StackVal, StackVal, vVar3))
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
	if (!Function_78(StackVal, StackVal, vVar3))
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

int Function_165(int iParam0) //Position: 0x8898 / 34968
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_166(int iParam0) //Position: 0x88AD / 34989
{
	int iVar0;
	int iVar1;
	
	if (!Function_130(iParam0))
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

void Function_167(bool bParam0, bool bParam1) //Position: 0x88FC / 35068
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

void Function_168() //Position: 0x894D / 35149
{
	Function_170();
	Function_169();
	return;
}

void Function_169() //Position: 0x8959 / 35161
{
	Function_177(&Local_703 + 4);
	RELEASE_LAYOUT_REF(Local_703);
	return;
}

void Function_170() //Position: 0x896D / 35181
{
	Function_177(&Local_4 + 4);
	Function_177(&Local_4 + 68);
	Function_177(&Local_4 + 144);
	Function_177(&Local_4 + 232);
	Function_177(&Local_4 + 320);
	Function_177(&Local_4 + 420);
	Function_177(&Local_4 + 508);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_171() //Position: 0x89AC / 35244
{
	Function_177(&Local_4 + 420);
	return;
}

void Function_172() //Position: 0x89BA / 35258
{
	Function_177(&Local_4 + 320);
	return;
}

void Function_173() //Position: 0x89C8 / 35272
{
	Function_177(&Local_4 + 232);
	return;
}

void Function_174() //Position: 0x89D5 / 35285
{
	Function_177(&Local_4 + 144);
	return;
}

void Function_175() //Position: 0x89E2 / 35298
{
	Function_177(&Local_4 + 508);
	return;
}

void Function_176() //Position: 0x89F0 / 35312
{
	Function_177(&Local_4 + 68);
	return;
}

void Function_177(bool bParam0) //Position: 0x89FD / 35325
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_178(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_178(var uParam0, int iParam1) //Position: 0x8A23 / 35363
{
	if (Function_180(uParam0[iParam13], 4))
	{
		if (Function_180(uParam0[iParam13], 1))
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
			Function_179(uParam0[iParam13], 1);
			Function_179(uParam0[iParam13], 2);
			Function_179(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x8B51 / 35665
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_180(var uParam0, bool bParam1) //Position: 0x8B6B / 35691
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8B88 / 35720
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
	Function_219(1);
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
		Function_197(Global_34573);
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
	Function_196(Global_28178);
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
	Function_26(1178687);
	Function_194(33039);
	Function_193(0x218003f);
	Function_192(4194560);
	Function_191();
	Function_190();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_187(0, 1, 1);
	}
	else
	{
		Function_187(0, 1, 1);
	}
	Function_186();
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
	Function_182();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_41(&Global_12976 + 36 + 20, 16);
}

void Function_182() //Position: 0x8D79 / 36217
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
		if (Function_185() > 3)
		{
			bVar0 *= 2;
		}
		Function_183(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_183(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x8DCF / 36303
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_184((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_184(bool bParam0) //Position: 0x8E15 / 36373
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_185() //Position: 0x8E3A / 36410
{
	return Global_12976.f_156;
}

void Function_186() //Position: 0x8E45 / 36421
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_134(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_187(int iParam0, bool bParam1, int iParam2) //Position: 0x8E6F / 36463
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
		if (Function_86(Global_29006))
		{
			Function_135(&(Global_29008[Global_29006]), 131072);
			Function_134(&(Global_29008[Global_29006]), 2097152);
			Function_188(Global_29006);
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
				if (Function_155(&(Global_29008[iVar0]), 4) || Function_155(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_134(&(Global_29008[iVar0]), 2097155);
					Function_135(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_45())
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

void Function_188(int iParam0) //Position: 0x8F7A / 36730
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_189())
			{
				return;
			}
		}
		if (!Function_155(&(Global_29008[iParam0]), 2048))
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

bool Function_189() //Position: 0x8FF9 / 36857
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_155(&(Global_29008[iVar0]), 4) || Function_155(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_190() //Position: 0x9056 / 36950
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

void Function_191() //Position: 0x907C / 36988
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

void Function_192(int iParam0) //Position: 0x90A2 / 37026
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_193(int iParam0) //Position: 0x90BF / 37055
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_194(int iParam0) //Position: 0x90D2 / 37074
{
	Function_195(&Global_28842, iParam0);
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0x90E0 / 37088
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_196(int iParam0) //Position: 0x90FB / 37115
{
	int iVar0;
	
	if (!Function_130(iParam0))
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

void Function_197(bool bParam0) //Position: 0x91C2 / 37314
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

void Function_198() //Position: 0x923E / 37438
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

void Function_199() //Position: 0x927F / 37503
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

void Function_200() //Position: 0x92C0 / 37568
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_201(int iParam0) //Position: 0x92D4 / 37588
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

bool Function_202() //Position: 0x9310 / 37648
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

void Function_203() //Position: 0x9335 / 37685
{
	Global_8722 = 0.0f;
	return;
}

void Function_204() //Position: 0x933F / 37695
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

int Function_205() //Position: 0x936A / 37738
{
	bool bVar0;
	
	bVar0 = Function_54();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_206() //Position: 0x9384 / 37764
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_207() //Position: 0x938D / 37773
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

void Function_208(bool bParam0, bool bParam1, bool bParam2) //Position: 0x94A7 / 38055
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
		Function_209(Global_16524, bVar0, 1);
	}
	return;
}

void Function_209(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9584 / 38276
{
	int iVar0;
	
	Function_211(bParam0);
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
	Function_210();
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

void Function_210() //Position: 0x96FD / 38653
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_211(int iParam0) //Position: 0x9709 / 38665
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

void Function_212() //Position: 0x974F / 38735
{
	Global_16517.f_8 = -1.0f;
	Global_16517.f_12 = -1.0f;
	Global_16517.f_16 = 0;
	return;
}

void Function_213(bool bParam0) //Position: 0x9767 / 38759
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

void Function_214(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x97BF / 38847
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
	if (!Function_78(StackVal, StackVal, vParam1))
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

vector3 Function_215(bool bParam0) //Position: 0x98C7 / 39111
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

int Function_216(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x98EE / 39150
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
		Function_218(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_217(StackVal);
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

void Function_217(bool bParam0) //Position: 0x9C0C / 39948
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

void Function_218(bool bParam0) //Position: 0x9C38 / 39992
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_219(bool bParam0) //Position: 0x9C4D / 40013
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

void Function_220() //Position: 0x9CC1 / 40129
{
	var uVar0[10];
	int iVar11;
	
	if (Function_270())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02";
		uVar0[4] = "Stage 03";
		uVar0[5] = "Stage 04";
		uVar0[6] = "Stage 05";
		uVar0[7] = "Last Stage";
		uVar0[8] = "TP first TNT guy";
		uVar0[9] = "TP near end";
		iVar11 = Function_256(&uLocal_741, &uVar0, &Local_748 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_255(&iVar11, &iLocal_729, &iLocal_730, &Local_731))
		{
			Function_253();
			Function_252();
			Function_245();
			Function_244();
		}
		if (iVar11 == 0)
		{
			Function_245();
			Function_244();
			Function_243(&bLocal_738, 8);
		}
		else if (iVar11 == 1)
		{
			Function_245();
			Function_244();
			Function_239(iLocal_729);
			Function_235(StackVal, StackVal, 5, &bLocal_739, &iLocal_729, Function_241(iLocal_729), Function_239(iLocal_729), 0);
		}
		else if (iVar11 == 2)
		{
			Function_245();
			Function_244();
			Function_230(&bLocal_740, 4);
		}
		else if (iVar11 == 3)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_810);
			iLocal_729 = 1;
			iLocal_730 = 0;
			Local_731 = 1000;
			Function_253();
			Function_252();
		}
		else if (iVar11 == 4)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_810);
			iLocal_729 = 2;
			iLocal_730 = 0;
			Local_731 = 1000;
			Function_253();
			Function_252();
		}
		else if (iVar11 == 5)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_810);
			iLocal_729 = 3;
			iLocal_730 = 0;
			Local_731 = 1000;
			Function_253();
			Function_252();
		}
		else if (iVar11 == 6)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_810);
			iLocal_729 = 4;
			iLocal_730 = 0;
			Local_731 = 1000;
			Function_253();
			Function_252();
		}
		else if (iVar11 == 7)
		{
			Function_245();
			Function_244();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_810);
			iLocal_729 = 101;
			iLocal_730 = 0;
			Local_731 = 1000;
			Function_253();
			if (IS_OBJECT_VALID(bLocal_861))
			{
				DESTROY_OBJECT(bLocal_861);
			}
		}
		else if (iVar11 == 8)
		{
			Function_245();
			Function_244();
			Function_252();
			Function_223(StackVal, (&Local_4 + 2420 - 180.0f));
			Function_222();
		}
		else if (iVar11 == 9)
		{
			Function_245();
			Function_244();
			Function_252();
			iLocal_730 = 8;
			Function_221(&Local_4 + 1028);
			Function_223(StackVal, &Local_4 + 2444);
			iLocal_841 = 61;
			Function_222();
		}
	}
	return;
}

void Function_221(var uParam0) //Position: 0x9F8D / 40845
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

void Function_222() //Position: 0x9FD4 / 40916
{
	bLocal_978 = ATTACH_OBJECTS(Global_34573, Local_703.f_28, Function_58(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02]), false);
	return;
}

void Function_223(bool bParam0, bool bParam1) //Position: 0xA001 / 40961
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { StackVal, StackVal, *bParam0 };
	vVar0.f_4 = (vVar0.y + 100.0f);
	vVar3 = { StackVal, StackVal, *bParam0 };
	vVar3.f_4 = (vVar3.y - 100.0f);
}

int Function_224(var uParam0, bool bParam1) //Position: 0xA0F1 / 41201
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	bVar0 = Function_226(uParam0, bParam1);
	GET_PATH_POINT(bParam1, bVar0, &vVar1);
	if (Function_225(StackVal, StackVal, uParam0, vVar1) < 0.0f)
	{
		bVar0++;
	}
	if (bVar0 > GET_PATH_NUM_POINTS(bParam1))
	{
		bVar0 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	}
	return bVar0;
}

float Function_225(bool bParam0, vector3 vParam1) //Position: 0xA135 / 41269
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

int Function_226(bool bParam0, bool bParam1) //Position: 0xA168 / 41320
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
		Function_227(bParam0);
		bVar6 = VDIST(Function_227(bParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

vector3 Function_227(bool bParam0) //Position: 0xA1BC / 41404
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_228(bool bParam0) //Position: 0xA1CD / 41421
{
	Function_229(bParam0, 0.0f);
	return;
}

void Function_229(bool bParam0, bool bParam1) //Position: 0xA1D9 / 41433
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_81(bParam0, 1);
	Function_41(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_230(bool bParam0, int iParam1) //Position: 0xA1FA / 41466
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_231(iParam1);
	*bParam0 = 1;
	return;
}

void Function_231(int iParam0) //Position: 0xA21D / 41501
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

void Function_232() //Position: 0xA314 / 41748
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_233(int iParam0) //Position: 0xA320 / 41760
{
	int iVar0;
	
	if (!Function_33(iParam0))
	{
		return 0;
	}
	iVar0 = Function_32(iParam0);
	if (!Function_18(Function_32(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_234(bool bParam0) //Position: 0xA356 / 41814
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_235(int iParam0, bool bParam1, bool bParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA3C0 / 41920
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*bParam2 != 100)
	{
		Function_236(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_231(iParam0);
		*bParam1 = 1;
		*bParam2 = 100;
	}
}

void Function_236(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA3FD / 41981
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

var Function_237(int iParam0) //Position: 0xA480 / 42112
{
	if (!Function_86(iParam0))
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

var Function_238(vector3 vParam0, bool bParam3) //Position: 0xA92E / 43310
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

vector3 Function_239(bool bParam0) //Position: 0xA999 / 43417
{
	Function_240(bParam0 + 1);
	return StackVal, StackVal, Function_240(bParam0 + 1);
}

vector3 Function_240(int iParam0) //Position: 0xA9A6 / 43430
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, StackVal, *(&Local_4 + 1300[06]);
			break;
		
		case 0x00000001:
			return StackVal, StackVal, *(&Local_4 + 1652[66]);
			break;
		
		case 0x00000002:
			return StackVal, StackVal, *(&Local_4 + 1652[76]);
			break;
		
		case 0x00000003:
			return StackVal, StackVal, *(&Local_4 + 1652[86]);
			break;
		
		case 0x00000004:
			return StackVal, StackVal, *(&Local_4 + 1652[96]);
			break;
		
		case 0x00000065:
			return StackVal, StackVal, *(&Local_4 + 1428[16]);
			break;
		
		default:
			return StackVal, StackVal, *(&Local_4 + 1428[06]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal, StackVal, *(&Local_4 + 1428[06]);
}

int Function_241(bool bParam0) //Position: 0xAAA9 / 43689
{
	return Function_242(bParam0 + 1);
}

int Function_242(bool bParam0) //Position: 0xAAB6 / 43702
{
	switch (bParam0)
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
			return StackVal;
			break;
		
		case 0x00000004:
			return StackVal;
			break;
		
		case 0x00000065:
			return StackVal;
			break;
		
		default:
			return StackVal;
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal;
}

void Function_243(bool bParam0, int iParam1) //Position: 0xABC9 / 43977
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_231(iParam1);
	*bParam0 = 1;
	return;
}

void Function_244() //Position: 0xABEC / 44012
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_245() //Position: 0xAC01 / 44033
{
	Function_247();
	Function_246(10, 3);
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0xAC10 / 44048
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

void Function_247() //Position: 0xAD47 / 44359
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
	SET_ACTOR_INVULNERABILITY(Function_54(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_54());
	UI_POP("nDebugMenu");
	return;
}

void Function_248() //Position: 0xAD92 / 44434
{
	Function_249(25, 2);
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0xAD9E / 44446
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

void Function_250(int iParam0, int iParam1) //Position: 0xAF9C / 44956
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

bool Function_251() //Position: 0xB0D3 / 45267
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
				if (!Function_27(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_252() //Position: 0xB13A / 45370
{
	if (IS_OBJECT_ATTACHED(bLocal_755))
	{
		REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_755));
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_861, Global_34573, false);
	SET_OBJECT_COLLIDE_WITH_OBJECT(Global_34573, bLocal_861, false);
	if (IS_OBJECT_VALID(bLocal_861))
	{
		DESTROY_OBJECT(bLocal_861);
	}
	return;
}

void Function_253() //Position: 0xB175 / 45429
{
	Function_254(bLocal_854[0]);
	Function_254(bLocal_854[1]);
	Function_254(bLocal_854[2]);
	Function_254(bLocal_854[3]);
	Function_254(bLocal_854[4]);
	if (SQUAD_IS_VALID(Local_4.f_536))
	{
		Function_221(&Local_4 + 536);
	}
	RESET_ANIM_SET_FOR_ACTOR(bLocal_755, 0);
	return;
}

void Function_254(bool bParam0) //Position: 0xB1C2 / 45506
{
	if (IS_OBJECT_VALID(bParam0))
	{
		LEASH_DETACH_OBJECT(bParam0, 0);
		LEASH_DETACH_OBJECT(bParam0, 1);
		DESTROY_OBJECT(bParam0);
	}
	return;
}

bool Function_255(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB1E3 / 45539
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

var Function_256(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB289 / 45705
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

void Function_257(int iParam0, int iParam1, int iParam2) //Position: 0xB350 / 45904
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

bool Function_258(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB3AC / 45996
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

void Function_259(bool bParam0) //Position: 0xB532 / 46386
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

void Function_260(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB56C / 46444
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

var Function_261(int iParam0, var uParam1, int iParam2) //Position: 0xB61A / 46618
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_262(var uParam0, int iParam1, int iParam2) //Position: 0xB63E / 46654
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

int Function_263() //Position: 0xB6DA / 46810
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

void Function_264(var uParam0, int iParam1, int iParam2) //Position: 0xB716 / 46870
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

int Function_265(bool bParam0) //Position: 0xB7AE / 47022
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_54()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_27(*bParam0, 0x40000000))
		{
			Function_81(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_27(*bParam0, 0x40000000))
		{
			Function_81(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_41(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_54()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_27(*bParam0, 0x20000000))
		{
			Function_81(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_27(*bParam0, 0x20000000))
		{
			Function_81(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_41(bParam0, 0x20000000);
	return 0;
}

var Function_266(var uParam0, int iParam1) //Position: 0xB8F9 / 47353
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

void Function_267(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBA48 / 47688
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

var Function_268(int iParam0, int iParam1) //Position: 0xBADB / 47835
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_269(var uParam0, var uParam1) //Position: 0xBAF5 / 47861
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

bool Function_270() //Position: 0xBB43 / 47939
{
	return Global_30920;
}

bool Function_271() //Position: 0xBB4C / 47948
{
	if (IS_EXITFLAG_SET())
	{
		Function_239(iLocal_729);
		Function_235(StackVal, StackVal, 4, &bLocal_739, &iLocal_729, Function_241(iLocal_729), Function_239(iLocal_729), 0);
		return 0;
	}
	Function_600(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_748, iLocal_729, iLocal_730, &bLocal_740, &bLocal_738, &bLocal_739);
	if (iLocal_729 == 99 && iLocal_729 == 100)
	{
		Function_599(1,5f);
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_239(iLocal_729);
			Function_235(StackVal, StackVal, 1, &bLocal_739, &iLocal_729, Function_241(iLocal_729), Function_239(iLocal_729), 0);
			return 1;
		}
		if (Function_598(2048))
		{
			Function_239(iLocal_729);
			Function_235(StackVal, StackVal, 3, &bLocal_739, &iLocal_729, Function_241(iLocal_729), Function_239(iLocal_729), 0);
			return 1;
		}
		if (Function_578(&Local_921, &uLocal_881, &uLocal_973, bLocal_809, iLocal_835))
		{
			if (Function_572(&uLocal_973))
			{
				Function_239(iLocal_729);
				Function_235(StackVal, StackVal, 5, &bLocal_739, &iLocal_729, Function_241(iLocal_729), Function_239(iLocal_729), 0);
				return 1;
			}
		}
		Function_569();
		Function_568();
		Function_555();
		Function_552();
		Function_548();
		Function_547();
		Function_545();
		Function_540(Function_543(&uLocal_831, &uLocal_850, 1, 6.0f, iLocal_835));
	}
	switch (iLocal_729)
	{
		case 0x00000063:
			Function_491();
			break;
		
		case 0x00000000:
			Function_456();
			break;
		
		case 0x00000001:
			Function_440();
			break;
		
		case 0x00000002:
			Function_431();
			break;
		
		case 0x00000003:
			Function_420();
			break;
		
		case 0x00000004:
			Function_330();
			break;
		
		case 0x00000065:
			Function_274();
			break;
		
		case 0x00000064:
			if (Function_273(&bLocal_739))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_272(&iLocal_729, &iLocal_730, &Local_731))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_740)
	{
		Function_230(&bLocal_740, 4);
		Function_1();
		return 0;
	}
	if (bLocal_738)
	{
		Function_243(&bLocal_738, 8);
		Function_1();
		return 0;
	}
	if (bLocal_739 && iLocal_729 == 100)
	{
		Function_239(iLocal_729);
		Function_235(StackVal, StackVal, 5, &bLocal_739, &iLocal_729, Function_241(iLocal_729), Function_239(iLocal_729), 0);
	}
	return 1;
}

bool Function_272(var uParam0, var uParam1, int iParam2) //Position: 0xBD16 / 48406
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

bool Function_273(int iParam0) //Position: 0xBD56 / 48470
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_274() //Position: 0xBD69 / 48489
{
	switch (iLocal_730)
	{
		case 0x00000000:
			Function_326(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_755);
			SET_ACTOR_HEALTH(bLocal_755, GET_ACTOR_MAX_HEALTH(bLocal_755));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_325(Global_30633[2]);
			Function_322();
			bLocal_757 = Function_321(StackVal, StackVal, *(&Local_4 + 1428[06]), 0, 1, 1);
			if (!iLocal_758[4])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1428[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_755, *(&Local_4 + 1428[26]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_756, *(&Local_4 + 1428[46]), 1, true, 1);
				Function_320();
				Function_228(&bLocal_810);
				iLocal_730 = 1;
			}
			else
			{
				Local_731 = 1000;
				Function_228(&bLocal_810);
				iLocal_730 = 3;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_319(bLocal_757) || bLocal_757 != 4294967295)
				{
					if (Function_317())
					{
						if (Function_311())
						{
							if (!SQUAD_IS_VALID(Local_4.f_912))
							{
								Function_310();
							}
							Local_731 = 1000;
							Function_228(&bLocal_810);
							iLocal_730 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_309();
			if (Function_307(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_748, iLocal_729))
			{
				Local_731 = 1000;
				Function_228(&bLocal_810);
				iLocal_730 = 3;
			}
			else
			{
				Function_306();
				Function_304();
				Function_228(&bLocal_810);
				iLocal_730 = 4;
			}
			Function_297(&(Local_921[017]), bLocal_755, "Outlaw", 1, 0x5f5e100, 1);
			Function_240(iLocal_729);
			Function_291(StackVal, StackVal, Function_240(iLocal_729), iLocal_729, Global_30633[2], Function_242(iLocal_729), 0);
			break;
		
		case 0x00000003:
			if (Function_275())
			{
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02]), false);
				TASK_GO_NEAR_COORD((*&Local_4 + 916)[02], &Local_4 + 1428[76], 25.0f, 4);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 916)[02], 2.0f);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				TASK_MOUNT(Global_34573, bLocal_756, 0, 1, 1, 2147483647);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_228(&bLocal_810);
				iLocal_730 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				Function_228(&bLocal_810);
				iLocal_730 = 6;
			}
			break;
		
		case 0x00000006:
			Function_137("fort02_endMessage", 0x41200000, 1, 0, 2, 1, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_228(&bLocal_810);
			iLocal_730 = 106;
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_738 = true;
			}
			break;
	}
	return;
}

bool Function_275() //Position: 0xC012 / 49170
{
	Function_288(&Local_731, 0);
	switch (Local_731)
	{
		case 0x000003E8:
			if (iLocal_729 != 99 && (Function_287(&Local_748) || Local_748.f_24 < 1))
			{
				Local_731 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/FORT_02_END/FORT_02_END"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_731 = 1106;
				return 0;
			}
			Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Local_731.f_24 = 0;
			Function_282(StackVal, StackVal, bLocal_728, *(&Local_4 + 1428[06]), &Local_731 + 20, 0, 0, 0, 0, 1, 1);
			Global_63097 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/FORT_02_END/FORT_02_END", 0, 2, 1, 2, 2);
			Function_228(&Local_731 + 4);
			Local_731 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_279(&Local_731 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_731 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (IS_ACTOR_VALID((*&Local_4 + 916)[02]))
				{
					CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_4 + 916)[02]);
				}
				Function_278();
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_731 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (!DECOR_CHECK_EXIST(bLocal_728, "hidhorse"))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_756);
				DECOR_SET_BOOL(bLocal_728, "hidhorse", true);
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_731 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Function_306();
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_731.f_20);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_731.f_20);
				DESTROY_VOLUME(Local_731.f_20);
				if (IS_ACTOR_VALID((*&Local_4 + 928)[72]))
				{
					SET_ACTOR_PERMANENT((*&Local_4 + 928)[72], 0);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 928)[82]))
				{
					SET_ACTOR_PERMANENT((*&Local_4 + 928)[82], 0);
				}
				if (Local_731.f_24)
				{
					Function_306();
				}
				Function_276(1, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				ACTOR_HOLSTER_WEAPON(Global_34573, 0);
				Local_731 = 1000;
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
				Local_731.f_24 = 1;
				Local_731 = 1104;
			}
			break;
		
		case 0x00000452:
			Local_731 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_276(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xC32E / 49966
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
		bVar0 = Function_54();
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
			if (Function_45())
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
		Function_90(21, 1, 0, 0);
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

void Function_277(bool bParam0) //Position: 0xC41E / 50206
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

void Function_278() //Position: 0xC4C3 / 50371
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS() - 1))
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			PRINTSTRING("Actor ");
			PRINTINT(bVar0);
			PRINTSTRING(" is named ");
			PRINTSTRING(GET_ACTOR_NAME(bVar1));
			PRINTSTRING(". His enum is ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0)));
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

float Function_279(bool bParam0) //Position: 0xC53C / 50492
{
	if (Function_281(bParam0))
	{
		if (Function_280(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_280(int iParam0) //Position: 0xC604 / 50692
{
	return Function_27(*iParam0, 2);
}

bool Function_281(bool bParam0) //Position: 0xC611 / 50705
{
	return Function_27(*bParam0, 1);
}

void Function_282(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xC61E / 50718
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
				Function_283(bVar1, bParam0);
			}
		}
		if (!Function_78(StackVal, StackVal, vVar2))
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

void Function_283(bool bParam0, bool bParam1) //Position: 0xC88C / 51340
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

void Function_284(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xC901 / 51457
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
		bVar1 = Function_54();
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
			if (Function_45())
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
				Function_227(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_58(), 2, Function_227(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_90(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_286()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_286()));
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
	if (Function_285(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_158(0x4000000);
	}
	if (Function_285(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_158(0x8000000);
	}
}

bool Function_285(int iParam0) //Position: 0xCBAA / 52138
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_286() //Position: 0xCBC6 / 52166
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

bool Function_287(int iParam0) //Position: 0xCC45 / 52293
{
	return iParam0->f_20;
}

void Function_288(int iParam0, int iParam1) //Position: 0xCC4F / 52303
{
	Function_289(iParam0, iParam1, 0);
	return;
}

void Function_289(var uParam0, bool bParam1, bool bParam2) //Position: 0xCC5D / 52317
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
		Function_90(20, 1, 0, 0);
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
				Function_90(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_290(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xCDA9 / 52649
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

void Function_291(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0xCDD2 / 52690
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
	if (iParam3 != Global_34165.f_48 && !Function_296())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_295(0);
	Function_294();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_293(uParam4, iVar0, iVar1);
	Function_292();
}

void Function_292() //Position: 0xCE6F / 52847
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

void Function_293(int iParam0, bool bParam1, bool bParam2) //Position: 0xCEB0 / 52912
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
	if (Function_86(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_294() //Position: 0xD016 / 53270
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_295(bool bParam0) //Position: 0xD03A / 53306
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

bool Function_296() //Position: 0xD069 / 53353
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

int Function_297(bool bParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xD084 / 53380
{
	if (!Function_303(bParam0, uParam1))
	{
		return 0;
	}
	if (!Function_302(bParam0, bParam2))
	{
		return 0;
	}
	Function_301(bParam0, iParam3);
	bParam0->f_40 = 0;
	Function_298(bParam0, iParam4, iParam5);
	return 1;
}

void Function_298(var uParam0, int iParam1, int iParam2) //Position: 0xD0C0 / 53440
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

void Function_299(int iParam0, bool bParam1) //Position: 0xD0E3 / 53475
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

void Function_300(int iParam0, int iParam1, bool bParam2) //Position: 0xD149 / 53577
{
	bool bVar0;
	
	Function_81(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_81(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_41(iParam0 + 40, bVar0);
	}
	else
	{
		Function_81(iParam0 + 40, bVar0);
	}
	return;
}

void Function_301(var uParam0, int iParam1) //Position: 0xD185 / 53637
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_302(int iParam0, bool bParam1) //Position: 0xD191 / 53649
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

bool Function_303(int iParam0, bool bParam1) //Position: 0xD21A / 53786
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

void Function_304() //Position: 0xD3A6 / 54182
{
	bool bVar0;
	
	if (IS_ACTOR_VALID((*&Local_4 + 892)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 892)[02]);
	}
	if (!IS_ACTOR_RIDING(bLocal_755))
	{
		ACTOR_MOUNT_ACTOR(bLocal_755, (*&Local_4 + 892)[12]);
		Function_305(StackVal, StackVal, StackVal, bLocal_755, *(&Local_4 + 1428[36]), 1, 1, 1);
	}
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &Local_4 + 1428[86], 10.0f, 3);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_755, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	AI_RIDING_SET_ENABLED(bLocal_755, 0);
	ACTOR_HOLSTER_WEAPON(Global_34573, 0);
	AI_ACTOR_FORCE_SPEED(bLocal_755, 4);
	SET_ACTOR_MIN_SPEED(bLocal_755, 4);
	return;
}

void Function_305(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0xD443 / 54339
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

void Function_306() //Position: 0xD4FC / 54524
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1428[16]), 1, false, 0);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_756, *(&Local_4 + 1428[46]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 916)[02], *(&Local_4 + 1428[66]), 1, true, 1);
	TELEPORT_ACTOR((*&Local_4 + 892)[02], &Local_4 + 1300[06], 1, 1, 1);
	DESTROY_ACTOR((*&Local_4 + 892)[02]);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 892)[12], *(&Local_4 + 1428[36]), 1, true, 1);
	ACTOR_MOUNT_ACTOR(bLocal_755, (*&Local_4 + 892)[12]);
	Function_304();
	CAMERA_RESET(0);
	return;
}

bool Function_307(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0xD5BF / 54719
{
	if (Function_308(&iParam0) == iParam7 || Function_296())
	{
		return 1;
	}
	return 0;
}

int Function_308(int iParam0) //Position: 0xD5DE / 54750
{
	if (Function_287(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_309() //Position: 0xD5F6 / 54774
{
	Function_26(1178687);
	Function_194(33039);
	Function_193(0x218003f);
	Function_192(256);
	Function_191();
	Function_190();
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	return;
}

void Function_310() //Position: 0xD626 / 54822
{
	Local_4.f_912 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nC2_Horses"));
	(*&Local_4 + 892)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nC2_Horse1", 976, -1458,864f, 13,05f, 3401,7f, 0.0f, 239,236f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 892)[02], Local_4.f_912);
	ACCESSORIZE_HORSE((*&Local_4 + 892)[02], false);
	TASK_STAND_STILL((*&Local_4 + 892)[02], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 892)[02], false);
	(*&Local_4 + 892)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "C2_RealHorse", 976, -1371,347f, 39,02652f, 3495,619f, 0.0f, 239,236f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 892)[12], Local_4.f_912);
	TASK_STAND_STILL((*&Local_4 + 892)[12], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 892)[12], false);
	TASK_STAND_STILL((*&Local_4 + 892)[12], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 892)[12], false);
	return;
}

bool Function_311() //Position: 0xD72A / 55082
{
	if (!iLocal_833)
	{
		if (Function_312(&bLocal_805))
		{
			if (IS_ACTOR_VALID(bLocal_756))
			{
				DESTROY_ACTOR(bLocal_756);
			}
			bLocal_756 = CREATE_ACTOR_IN_LAYOUT(Local_4, "fort02NewPlayerHorse", iLocal_832, *(&Local_4 + 1428[56]), *(&Local_4 + 1428[56] + 12));
			ACCESSORIZE_HORSE(bLocal_756, 4);
			TASK_STAND_STILL(bLocal_756, -1.0f, 0, 0);
			iLocal_833 = 1;
			return 1;
		}
	}
	return 1;
	return 0;
}

bool Function_312(bool bParam0) //Position: 0xD7A4 / 55204
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_316();
	iVar1 = 0;
	if (!Function_180(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_315(bParam0[iVar03], 8);
		}
		else if (Function_314())
		{
			iVar1 = 1;
			Function_315(bParam0[iVar03], 8);
		}
		Function_315(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_180(bParam0[iVar03], 4))
		{
			if (!Function_180(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_180(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_180(bParam0[03], 8) || iVar1));
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
				Function_315(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_180(bParam0[iVar03], 4))
		{
			if (!Function_180(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_315(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_315(bParam0[iVar03], 2);
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
							Function_315(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_315(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_315(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_315(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_315(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_315(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_315(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_315(bParam0[iVar03], 2);
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
	Function_313();
	return 1;
}

void Function_313() //Position: 0xDB1F / 56095
{
	if (!Function_285(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_314() //Position: 0xDB5F / 56159
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

void Function_315(var uParam0, int iParam1) //Position: 0xDB8A / 56202
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_316() //Position: 0xDB9B / 56219
{
	if (!Function_285(128))
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

bool Function_317() //Position: 0xDBDD / 56285
{
	Function_318(&Local_4 + 508, 976, 2, 0);
	if (Function_312(&Local_4 + 508))
	{
		return 1;
	}
	return 0;
}

var Function_318(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xDBFF / 56319
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_180(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_315(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_315(bParam0[iVar03], 8);
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

int Function_319(bool bParam0) //Position: 0xDCCF / 56527
{
	if (!Function_86(bParam0))
	{
		return 1;
	}
	return Function_155(&(Global_29008[bParam0]), 4);
}

void Function_320() //Position: 0xDCEB / 56555
{
	bLocal_832 = 981;
	Function_318(&bLocal_805, bLocal_832, 2, 0);
	return;
}

int Function_321(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0xDD03 / 56579
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

void Function_322() //Position: 0xDD93 / 56723
{
	Function_192(47);
	Function_193(256);
	Function_158(13);
	Function_323(9);
	return;
}

void Function_323(int iParam0) //Position: 0xDDAE / 56750
{
	Function_324(&Global_28842, iParam0);
	return;
}

void Function_324(var uParam0, int iParam1) //Position: 0xDDBC / 56764
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_325(int iParam0) //Position: 0xDDDF / 56799
{
	if (!Function_86(iParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_135(&(Global_29008[Global_29155[iParam010]]), 1024);
	}
	return;
}

void Function_326(bool bParam0) //Position: 0xDE3A / 56890
{
	Function_327(0, 0x40400000);
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

void Function_327(bool bParam0, float fParam1) //Position: 0xDE6E / 56942
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

void Function_328() //Position: 0xDF6C / 57196
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_329() //Position: 0xDF9E / 57246
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

void Function_330() //Position: 0xE09B / 57499
{
	if (iLocal_730 < 3 && iLocal_730 > 105)
	{
		Function_418();
		Function_416();
		Function_385();
		Function_311();
		Function_384();
		if (Function_383((*&Local_4 + 916)[02], Local_4.f_2728) > 30.0f)
		{
			Function_381();
		}
	}
	switch (iLocal_730)
	{
		case 0x00000000:
			Function_326(0);
			iLocal_877 = 0;
			Function_380(Local_4.f_536);
			Function_378(&Local_4 + 648, 0, 0, 0);
			Function_378(&Local_4 + 728, 0, 0, 0);
			Function_378(&Local_4 + 584, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_755, GET_ACTOR_MAX_HEALTH(bLocal_755));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			Function_325(Global_30633[1]);
			if (iLocal_758[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				if (!ACTOR_DRAW_LAST_WEAPON(Global_34573, 1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(Global_34573, Function_377(Global_34573, 42), 1);
				}
				fLocal_847 = 2.0f;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				Function_376(&Local_748);
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 1652[36]), 20.0f, 0);
				Function_228(&bLocal_810);
				iLocal_730 = 1;
			}
			else
			{
				Function_375(&bLocal_822);
				Function_228(&bLocal_810);
				iLocal_730 = 2;
			}
			TOGGLE_COVER_PROPS(0);
			Function_320();
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Local_4 + 1652[36]), 20.0f))
				{
					if (Function_374())
					{
						Function_223(StackVal, &Local_4 + 1652[36]);
						Function_228(&bLocal_810);
						iLocal_730 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_279(&bLocal_810) < 1.0f)
			{
				STREAMING_UNLOAD_BOUNDS();
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE_2", 0, 4294967295, 4294967295, 3212836864, 0);
				iLocal_835 = 1;
				Function_373();
				MEMORY_CONSIDER_AS(bLocal_755, (*&Local_4 + 928)[72], false);
				MEMORY_CONSIDER_AS(bLocal_755, (*&Local_4 + 928)[82], false);
				if (SQUAD_IS_VALID(Local_4.f_888))
				{
					SQUADS_MERGE(Local_4.f_888, Local_4.f_1028);
				}
				Function_371(Local_4.f_1028, 0x41700000);
				Function_370(Local_4.f_1028, bLocal_756, 0);
				Function_370(Local_4.f_1028, (*&Local_4 + 892)[02], 0);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_756, 0.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_4 + 892)[02], 0.0f);
				Function_240(iLocal_729);
				Function_291(StackVal, StackVal, Function_240(iLocal_729), iLocal_729, Global_30633[2], Function_242(iLocal_729), 0);
				if (!iLocal_758[3])
				{
					Function_222();
					Function_368((*&Local_4 + 916)[02], 0.0f, 0.0f, 0.0f);
				}
				Function_297(&(Local_921[017]), bLocal_755, "Outlaw", 1, 0x5f5e100, 1);
				Function_367();
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_1028, 0, (*&Local_4 + 1244)[4], 4294967295);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_1028, 0, (*&Local_4 + 1244)[5], 4294967295);
				Function_366((*&Local_4 + 928)[42], 3212836864);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 928)[32], 15.0f);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 928)[42], 15.0f);
				Function_365(Local_4.f_1028, 1);
				Function_363(Local_4.f_1028, Global_34573, 1);
				if (IS_OBJECT_VALID(bLocal_871))
				{
					DESTROY_OBJECT(bLocal_871);
				}
				bLocal_871 = CREATE_EVENT_TRAP("etTNTExplosion", 17, Local_4);
				EVENT_TRAP_ON_SPHERE(bLocal_871, *(&Local_4 + 1652[16]), 90.0f);
				if (!Function_281(&bLocal_828))
				{
					Function_228(&bLocal_828);
				}
				Function_228(&bLocal_810);
				iLocal_730 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_362(Global_34573, Local_703.f_28, 7.0f))
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					REMOVE_OBJECT_ATTACHMENT(bLocal_978);
					Function_228(&bLocal_810);
					iLocal_730 = 7;
				}
			}
			else
			{
				PRINTSTRING("Player is ");
				PRINTFLOAT(Function_360(Global_34573, Local_703.f_28));
				PRINTSTRING("m from raft, waiting for him to teleport to it");
				PRINTNL();
			}
			break;
		
		case 0x00000007:
			Function_356();
			Function_355();
			if (!DECOR_CHECK_EXIST((*&Local_4 + 916)[02], "bPlayedBeachSound"))
			{
				if (Function_353(StackVal, StackVal, (*&Local_4 + 916)[02], *(&Local_4 + 1428[66]), 9.0f))
				{
					DECOR_SET_BOOL((*&Local_4 + 916)[02], "bPlayedBeachSound", true);
					PLAY_SOUND_FROM_OBJECT((*&Local_4 + 916)[02], "RAFT_SKID_MASTER");
				}
			}
			if ((IS_ACTOR_IN_VOLUME((*&Local_4 + 916)[02], Local_4.f_1200) || GET_TASK_STATUS((*&Local_4 + 916)[02], 61) != 0) || Function_383((*&Local_4 + 916)[02], Local_4.f_2728) > 13.0f)
			{
				if (IS_OBJECT_VALID(bLocal_880))
				{
					DESTROY_OBJECT(bLocal_880);
				}
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02]), true);
				Function_228(&bLocal_810);
				iLocal_730 = 8;
			}
			break;
		
		case 0x00000008:
			Function_345(&bLocal_819, 30.0f, 100.0f, bLocal_755, "Outlaw_return", "Outlaw_abandoned", &bLocal_739, 0, 0, 0, 325, 1);
			if (!Function_342(Global_34573, bLocal_755, 30.0f))
			{
				Function_340(0, 1, 1);
			}
			else
			{
				Function_340(0, 0, 1);
			}
			if (Function_339((*&Local_4 + 928)[72], 1) && Function_339((*&Local_4 + 928)[82], 1))
			{
				if (IS_ATTACHMENT_VALID(_GET_OBJECT_ATTACHMENT(bLocal_755)))
				{
					REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_755));
				}
				iLocal_835 = 0;
				Function_338();
				Function_337();
				Function_228(&bLocal_810);
				iLocal_730 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(bLocal_860))
			{
				bLocal_860 = Function_336(StackVal, StackVal, Local_4, "gateEndMission", *(&Local_4 + 1428[06]), 0.0f, 0.0f, 0.0f, Global_34573, 8,5f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			}
			if (IS_OBJECT_VALID(bLocal_860))
			{
				if (GATEWAY_UPDATE(bLocal_860))
				{
					DESTROY_OBJECT(bLocal_860);
					Function_228(&bLocal_810);
					iLocal_730 = 106;
				}
				if (Function_279(&bLocal_810) <= 5.0f)
				{
					Function_335("Fort02_obj04", 0x40f00000, 1, 2, 0, 0, 0);
					Function_228(&bLocal_816);
					Function_228(&bLocal_810);
					iLocal_730 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_345(&bLocal_819, 30.0f, 100.0f, bLocal_755, "Outlaw_return", "Outlaw_abandoned", &bLocal_739, 0, 0, 0, 325, 1);
			if (!Function_342(Global_34573, bLocal_755, 30.0f))
			{
				Function_340(0, 1, 1);
				if (IS_OBJECT_VALID(bLocal_860))
				{
					DESTROY_OBJECT(bLocal_860);
				}
			}
			else
			{
				if (!IS_OBJECT_VALID(bLocal_860))
				{
					bLocal_860 = Function_336(StackVal, StackVal, Local_4, "gateEndMission", *(&Local_4 + 1428[06]), 0.0f, 0.0f, 0.0f, Global_34573, 8,5f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				}
				Function_340(0, 0, 1);
			}
			if (IS_OBJECT_VALID(bLocal_860))
			{
				if (GATEWAY_UPDATE(bLocal_860))
				{
					DESTROY_OBJECT(bLocal_860);
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					Function_228(&bLocal_810);
					iLocal_730 = 106;
				}
				else if (Function_279(&bLocal_816) <= 16.0f)
				{
					Function_229(&bLocal_816, 4.0f);
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_703.f_20))
					{
						Function_334();
					}
					else
					{
						Function_331();
					}
					SET_ANIM_SET_FOR_ACTOR(bLocal_755, "stand_ambient", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_755, "stand_ambient/one_hnd");
				}
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_279(&bLocal_810) <= 5.0f)
			{
				iLocal_758[4] = 1;
				Function_228(&bLocal_810);
				iLocal_729 = 101;
				iLocal_730 = 0;
			}
			break;
	}
	return;
}

void Function_331() //Position: 0xE854 / 59476
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_WaitignForJonBeach", "Fort02_WaitignForJonBeach", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_332(int iParam0) //Position: 0xE8AF / 59567
{
	Function_333(0, Global_34573, iParam0, 0);
	Function_333(1, bLocal_755, iParam0, 0);
	Function_333(2, (*&Local_4 + 540)[22], iParam0, 0);
	return;
}

void Function_333(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xE8D8 / 59608
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_27(uParam2, Function_144(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_334() //Position: 0xE8FD / 59645
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_WaitingForJon2Off", "Fort02_WaitingForJon2Off", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_335(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xE956 / 59734
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

bool Function_336(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0xE9A9 / 59817
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_337() //Position: 0xEA74 / 60020
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_RaftDocksGetsOff", "Fort02_RaftDocksGetsOff", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_338() //Position: 0xEACB / 60107
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "oGOTO", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ATTACH_OBJECTS(bVar1, (*&Local_4 + 916)[02], "", 0.0f, 0.0f, -9.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_VEHICLE_LEAVE(false);
	TASK_GO_TO_OBJECT(0, bVar1, 1, 1, 0);
	TASK_GO_TO_COORD(false, &Local_4 + 1428[26], 1);
	TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_755, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

bool Function_339(bool bParam0, int iParam1) //Position: 0xEB3F / 60223
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

void Function_340(int iParam0, bool bParam1, bool bParam2) //Position: 0xEB89 / 60297
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
						Function_217(bVar1);
					}
				}
				Function_341(bVar0);
			}
		}
	}
	return;
}

void Function_341(bool bParam0) //Position: 0xEC80 / 60544
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

bool Function_342(bool bParam0, bool bParam1, bool bParam2) //Position: 0xECAC / 60588
{
	float fVar0;
	
	fVar0 = Function_343(bParam0, bParam1);
	if (fVar0 >= bParam2)
	{
		return 1;
	}
	return 0;
}

var Function_343(bool bParam0, bool bParam1) //Position: 0xECC9 / 60617
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_344(&uVar0, &uVar3);
	return iVar6;
}

var Function_344(var uParam0, bool bParam1) //Position: 0xECE8 / 60648
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_345(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xED06 / 60678
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_352(Global_34573, bParam3, bParam2))
	{
		Function_234(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_352(Global_34573, bParam3, bParam1))
	{
		if (!Function_351(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_335(bParam4, 7,5f, 0, 2, iParam7, 0, 0);
				}
				Function_350(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_349(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_349(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_351(2))
	{
		Function_348(2);
		if (!Function_347())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_346();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_217(bParam3);
				Function_341(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_349(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_349(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_346() //Position: 0xEE9A / 61082
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

bool Function_347() //Position: 0xEEC5 / 61125
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

void Function_348(bool bParam0) //Position: 0xEF09 / 61193
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_41(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_349(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xEF6C / 61292
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

void Function_350(bool bParam0) //Position: 0xF00D / 61453
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_81(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_351(bool bParam0) //Position: 0xF070 / 61552
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_27(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_352(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF0B7 / 61623
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

bool Function_353(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xF1C8 / 61896
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_354(bParam0);
		if (VDIST(Function_354(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_354(bool bParam0) //Position: 0xF252 / 62034
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

void Function_355() //Position: 0xF2BC / 62140
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_227((*&Local_4 + 916)[02]);
	vVar0 = { StackVal, StackVal, Function_227((*&Local_4 + 916)[02]) };
	Function_227(Global_34573);
	vVar3 = { StackVal, StackVal, Function_227(Global_34573) };
	if (VDIST(vVar0, vVar3) < 7.0f)
	{
		vVar0.x = 0.0f;
		vVar0.f_8 = 0.0f;
		vVar3.x = 0.0f;
		vVar3.f_8 = 0.0f;
		if (VDIST(vVar0, vVar3) < 0,1f)
		{
			if (GET_ACTOR_HEALTH(Global_34573) < 0.0f)
			{
				Function_234("Outlaw_abandoned");
				bLocal_739 = true;
			}
		}
	}
	return;
}

void Function_356() //Position: 0xF334 / 62260
{
	Function_359();
	Function_358();
	if (IS_ACTOR_VALID((*&Local_4 + 916)[02]))
	{
		Function_357((*&Local_4 + 916)[02], Local_4.f_2728, 12.0f, 1, &iLocal_841);
		if (iLocal_730 != 95)
		{
			if (!Function_362(bLocal_755, Local_703.f_92, 1,5f))
			{
				Function_367();
			}
		}
	}
	return;
}

void Function_357(bool bParam0, bool bParam1, bool bParam2, int iParam3, var uParam4) //Position: 0xF386 / 62342
{
	vector3 vVar0;
	bool bVar3;
	
	GET_PATH_POINT(bParam1, *uParam4, &vVar0);
	if (StackVal || Function_353(StackVal, GET_TASK_STATUS(bParam0, 61) != 0, bParam0, vVar0, bParam2))
	{
		if (*uParam4 <= (GET_PATH_NUM_POINTS(bParam1) - 1))
		{
			*uParam4++;
		}
		GET_PATH_POINT(bParam1, *uParam4, &vVar0);
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &vVar0, bParam2, iParam3);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
	}
	else if (GET_TASK_STATUS(bParam0, 61) == 2)
	{
		GET_PATH_POINT(bParam1, *uParam4, &vVar0);
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &vVar0, bParam2, iParam3);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
	}
}

void Function_358() //Position: 0xF433 / 62515
{
	if (!IS_ACTOR_IN_VOLUME(bLocal_755, Local_703.f_20))
	{
		if (IS_ACTOR_ALIVE(bLocal_755))
		{
			TELEPORT_OBJECT_TO_OBJECT(bLocal_755, Local_703.f_24, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
		}
	}
	return;
}

void Function_359() //Position: 0xF46B / 62571
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_4.f_1052 - 1))
	{
		if (IS_VOLUME_VALID((*&Local_4 + 1052)[iVar0]))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_755, (*&Local_4 + 1052)[iVar0]))
			{
				if (DECOR_CHECK_EXIST((*&Local_4 + 1052)[iVar0], "speed"))
				{
					if (DECOR_CHECK_EXIST((*&Local_4 + 916)[02], "fLastSpeed"))
					{
						DECOR_REMOVE((*&Local_4 + 916)[02], "fLastSpeed");
					}
					fLocal_847 = DECOR_GET_FLOAT((*&Local_4 + 1052)[iVar0], "speed");
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 916)[02], fLocal_847);
					PRINTSTRING("new speed = ");
					PRINTFLOAT(DECOR_GET_FLOAT((*&Local_4 + 1052)[iVar0], "speed"));
					PRINTNL();
					DECOR_REMOVE((*&Local_4 + 1052)[iVar0], "speed");
				}
			}
		}
		iVar0++;
	}
	return;
}

var Function_360(bool bParam0, bool bParam1) //Position: 0xF55E / 62814
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_354(bParam0);
			vVar0 = { StackVal, StackVal, Function_354(bParam0) };
			Function_361(bParam1);
			vVar3 = { StackVal, StackVal, Function_361(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_361(bool bParam0) //Position: 0xF5FE / 62974
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

bool Function_362(bool bParam0, bool bParam1, float fParam2) //Position: 0xF66A / 63082
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_354(bParam0);
			Function_361(bParam1);
			if (VDIST(Function_354(bParam0), Function_361(bParam1)) >= fParam2)
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

void Function_363(bool bParam0, bool bParam1, int iParam2) //Position: 0xF784 / 63364
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
			Function_364(&bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_364(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF7C9 / 63433
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_354(bParam1);
			vVar0 = { StackVal, StackVal, Function_354(bParam1) };
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

void Function_365(bool bParam0, bool bParam1) //Position: 0xF8D1 / 63697
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

void Function_366(bool bParam0, bool bParam1) //Position: 0xF919 / 63769
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

void Function_367() //Position: 0xF934 / 63796
{
	if (iLocal_846 != 3)
	{
		if (iLocal_846 != 1)
		{
			if (!ACTOR_HAS_ANIM_SET(bLocal_755, "nirish_ptl"))
			{
				SET_ANIM_SET_FOR_ACTOR(bLocal_755, "nirish_ptl", 1);
			}
			if (!ACTOR_HAS_WEAPON(bLocal_755, 4))
			{
				GIVE_WEAPON_TO_ACTOR(bLocal_755, 4, 1.0f, 1, 1);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_755, 10.0f);
			TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_755, GET_COVER_LOCATION_FROM_OBJECT(Local_703.f_92), -1.0f, 1086324736);
			iLocal_846 = 1;
		}
	}
	return;
}

void Function_368(bool bParam0, vector3 vParam1) //Position: 0xF9AA / 63914
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { StackVal, StackVal, vVar0 };
	vVar6 = { StackVal, StackVal, vVar6 };
	vParam1 = { StackVal, StackVal, vParam1 };
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_ACTOR(bParam0), "lanternAttach_1", &vVar3, &vVar6);
	GET_OBJECT_RELATIVE_OFFSET(bParam0, vVar3, &vVar0);
	Function_369(StackVal, StackVal, bParam0, vVar3, 0.0f, "noLantern1");
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_ACTOR(bParam0), "lanternAttach_2", &vVar3, &vVar6);
	GET_OBJECT_RELATIVE_OFFSET(bParam0, vVar3, &vVar0);
	Function_369(StackVal, StackVal, bParam0, vVar3, 0.0f, "noLantern2");
}

void Function_369(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5) //Position: 0xFA4C / 64076
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	GET_OBJECT_RELATIVE_POSITION(bParam0, vParam1, &vVar2);
	PRINTSTRING("Creating lantern at ");
	PRINTVECTOR(vVar2);
	PRINTNL();
	vVar2.f_4 = (vVar2.y - bParam4);
	bVar1 = CREATE_PROP_IN_LAYOUT(GET_OBJECT_OWNER(bParam0), bParam5, "throw_lantern01x", vVar2, 0.0f, 0.0f, 0.0f, 0);
	bVar0 = CREATE_LEASH_OBJECT(bParam0, Function_58(), bParam4, 8, 1, 0,008f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT(bVar0, bParam0, vParam1, 0.0f, 0.0f, 0.0f, 0, 1);
	LEASH_ATTACH_TO_OBJECT(bVar0, bVar1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
	LEASH_CONSTRAIN(bVar0);
	LEASH_STAY_CONSTRAINED(bVar0, 1);
}

void Function_370(bool bParam0, bool bParam1, bool bParam2) //Position: 0xFB19 / 64281
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

void Function_371(bool bParam0, bool bParam1) //Position: 0xFB5E / 64350
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		Function_372(bVar1, bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_MOUNT(bVar1), 0.0f);
			ACCESSORIZE_HORSE(GET_MOUNT(bVar1), false);
			SQUAD_JOIN(GET_MOUNT(bVar1), bLocal_879);
		}
		bVar0++;
	}
	return;
}

void Function_372(bool bParam0, bool bParam1) //Position: 0xFBB8 / 64440
{
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, false);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 80.0f, 1);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, 80.0f);
	AI_SET_WEAPON_MAX_RANGE(bParam0, 80.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0,1f);
	SET_ACTOR_HEALTH(bParam0, RAND_FLOAT_RANGE(11.0f, 24.0f));
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, true);
	TASK_CROUCH(bParam0, -1.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, bParam1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 0.0f);
	UNK_0x2E84E682(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.0f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 1.0f);
	Function_364(&bParam0, Global_34573, 1);
	return;
}

void Function_373() //Position: 0xFC6A / 64618
{
	Local_4.f_1028 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S4_Snipers"));
	(*&Local_4 + 928)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_51", 410, -1288,775f, 18,95344f, 3343,827f, 0.0f, 35,88849f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[02], Local_4.f_1028);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 928)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[02], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[02], 19);
	(*&Local_4 + 928)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_52", 402, -1286,737f, 19,02643f, 3345,75f, 0.0f, 45,03505f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[12], Local_4.f_1028);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[12], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[12], 19);
	(*&Local_4 + 928)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_54", 408, -1288,158f, 19,10096f, 3344,898f, 0.0f, 52,34415f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[22], Local_4.f_1028);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[22], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[22], 19);
	(*&Local_4 + 928)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_77", 410, -1411,815f, 19,27408f, 3382,361f, 0.0f, -20,16989f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[32], Local_4.f_1028);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[32], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[32], 19);
	(*&Local_4 + 928)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_79", 408, -1410,308f, 19,40298f, 3381,836f, 0.0f, -12,90855f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[42], Local_4.f_1028);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[42], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[42], 19);
	(*&Local_4 + 928)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_84", 411, -1409,474f, 19,5107f, 3382,688f, 0.0f, -8,909209f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[52], Local_4.f_1028);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[52], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[52], 19);
	(*&Local_4 + 928)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_80", 410, -1410,982f, 19,32303f, 3383,471f, 0.0f, -3,208958f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[62], Local_4.f_1028);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[62], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[62], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[62], 19);
	(*&Local_4 + 928)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_87", 410, -1471,875f, 14,68375f, 3401,481f, 0.0f, -43,5574f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[72], Local_4.f_1028);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 928)[72]);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 928)[72], false);
	SET_ACTOR_PERMANENT((*&Local_4 + 928)[72], 1);
	TASK_STAND_STILL((*&Local_4 + 928)[72], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[72], 19);
	(*&Local_4 + 928)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_88", 411, -1470,58f, 14,62235f, 3401,466f, 0.0f, -20,40954f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[82], Local_4.f_1028);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 928)[82]);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 928)[82], false);
	SET_ACTOR_PERMANENT((*&Local_4 + 928)[82], 1);
	TASK_STAND_STILL((*&Local_4 + 928)[82], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[82], 19);
	(*&Local_4 + 928)[92] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_92", 414, -1376,271f, 18,16106f, 3360,378f, 0.0f, -25,25646f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[92], Local_4.f_1028);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[92], 24, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[92], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[92], 19);
	(*&Local_4 + 928)[102] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_93", 412, -1312,234f, 25,99467f, 3358,51f, 0.0f, 14,70974f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[102], Local_4.f_1028);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 928)[102]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[102], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[102], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[102], 19);
	(*&Local_4 + 928)[112] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_94", 414, -1312,356f, 25,99467f, 3357,144f, 0.0f, 14,70974f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 928)[112], Local_4.f_1028);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 928)[112]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[112], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 928)[112], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 928)[112], 19);
	return;
}

bool Function_374() //Position: 0x10279 / 66169
{
	Function_318(&Local_4 + 420, 976, 2, 0);
	Function_318(&Local_4 + 420, 410, 2, 0);
	Function_318(&Local_4 + 420, 402, 2, 0);
	Function_318(&Local_4 + 420, 408, 2, 0);
	Function_318(&Local_4 + 420, 411, 2, 0);
	Function_318(&Local_4 + 420, 414, 2, 0);
	Function_318(&Local_4 + 420, 412, 2, 0);
	if (Function_312(&Local_4 + 420))
	{
		return 1;
	}
	return 0;
}

void Function_375(bool bParam0) //Position: 0x102EF / 66287
{
	if (!Function_281(bParam0))
	{
		Function_229(bParam0, 0.0f);
	}
	return;
}

void Function_376(int iParam0) //Position: 0x10304 / 66308
{
	if (!Function_287(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_187(1, 0, 1);
		}
	}
	return;
}

var Function_377(bool bParam0, int iParam1) //Position: 0x1031F / 66335
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_378(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10330 / 66352
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
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_379(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_379(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar2);
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
				if (IS_ACTOR_VALID(bVar2))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_379(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_379(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
						}
						DESTROY_ACTOR(bVar2);
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
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else
			{
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
				}
				else if (bParam2)
				{
					if (!Function_379(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_379(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1052E / 66862
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_380(bool bParam0) //Position: 0x10548 / 66888
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

int Function_381() //Position: 0x1058C / 66956
{
	var uVar0;
	var uVar3;
	bool bVar6;
	int iVar7;
	
	switch (Local_731)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/FORT_02_END/FORT_02_END"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/FORT_02_END/FORT_02_END", 0, 2, 2, 2, 2);
				Local_731 = 1004;
			}
			else
			{
				Local_731 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_731 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_731 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar6 = false;
			while (bVar6 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar6, &uVar0, &uVar3))
				{
					iVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6);
					if (Function_382(iVar7))
					{
						if (iVar7 == 976)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), (*&Local_4 + 892)[02]);
						}
						if (iVar7 == GET_ACTOR_ENUM(Global_34573))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), Global_34573);
						}
						if (iVar7 == GET_ACTOR_ENUM(bLocal_755))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), bLocal_755);
						}
					}
				}
				bVar6++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_731 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_731 = 1104;
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

bool Function_382(int iParam0) //Position: 0x106E3 / 67299
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

float Function_383(bool bParam0, bool bParam1) //Position: 0x106FA / 67322
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_354(bParam0);
		vVar4 = { StackVal, StackVal, Function_354(bParam0) };
		return VDIST(vVar4, vVar0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_384() //Position: 0x10787 / 67463
{
	if (IS_VOLUME_VALID(Local_4.f_1296))
	{
		if (SQUAD_IS_VALID(Local_4.f_1028))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1296) || (((((((((Function_339((*&Local_4 + 928)[02], 0) && Function_339((*&Local_4 + 928)[12], 0)) && Function_339((*&Local_4 + 928)[22], 0)) && Function_339((*&Local_4 + 928)[32], 0)) && Function_339((*&Local_4 + 928)[42], 0)) && Function_339((*&Local_4 + 928)[52], 0)) && Function_339((*&Local_4 + 928)[62], 0)) && Function_339((*&Local_4 + 928)[92], 0)) && Function_339((*&Local_4 + 928)[102], 0)) && Function_339((*&Local_4 + 928)[112], 0)))
			{
				DESTROY_VOLUME(Local_4.f_1296);
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE_2", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
	}
	switch (iLocal_877)
	{
		case 0x00000000:
			if (Function_339((*&Local_4 + 928)[72], 0) && Function_339((*&Local_4 + 928)[82], 0))
			{
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
				iLocal_877 = 1;
			}
			break;
	}
	return;
}

void Function_385() //Position: 0x108BC / 67772
{
	Function_410();
	Function_407(Local_4.f_888);
	Function_407(Local_4.f_1028);
	Function_401((*&Local_4 + 928)[92], &Local_4 + 2792, &(uLocal_872[3]), 70.0f, 2, 0x40800000);
	Function_215((*&Local_4 + 2472)[8]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[22], Local_4.f_2664, Function_215((*&Local_4 + 2472)[8]), 10.0f);
	Function_215((*&Local_4 + 2472)[8]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[12], Local_4.f_2660, Function_215((*&Local_4 + 2472)[8]), 10.0f);
	Function_215((*&Local_4 + 2472)[9]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[32], Local_4.f_2668, Function_215((*&Local_4 + 2472)[9]), 5.0f);
	Function_215((*&Local_4 + 2472)[9]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[52], Local_4.f_2596, Function_215((*&Local_4 + 2472)[9]), 5.0f);
	Function_215((*&Local_4 + 2472)[9]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[62], Local_4.f_2720, Function_215((*&Local_4 + 2472)[9]), 5.0f);
	if (IS_VOLUME_VALID(Local_4.f_1188))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1188))
		{
			DESTROY_VOLUME(Local_4.f_1188);
			iLocal_837 = 1;
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[02], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[12], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[22], 322, 0, 2, 0);
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 928)[02], 4);
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 928)[12], 4);
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 928)[22], 4);
			Function_394((*&Local_4 + 928)[02], Local_4.f_2752, Local_4.f_2716, 4, 0x41700000);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 928)[22], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2664), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 928)[12], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2660), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 928)[102], &Local_4 + 1900[56], 3212836864);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 928)[112], &Local_4 + 1900[96], 3212836864);
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1192))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1192))
		{
			DESTROY_VOLUME(Local_4.f_1192);
			Function_391();
			iLocal_837 = 1;
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[32], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[52], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[62], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[42], 322, 0, 2, 0);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 928)[32], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2668), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 928)[52], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2596), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 928)[62], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2720), -1.0f, 1086324736);
			Function_390(StackVal, StackVal, (*&Local_4 + 928)[42], *(&Local_4 + 1900[66]));
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1196))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1196))
		{
			DESTROY_VOLUME(Local_4.f_1196);
			iLocal_837 = 1;
			MEMORY_ALLOW_SHOOTING(bLocal_755, true);
			if (!Function_339((*&Local_4 + 928)[72], 1) && !Function_339((*&Local_4 + 928)[82], 0))
			{
				Function_389();
			}
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_FINAL", 0, 4294967295, 4294967295, 3212836864, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[72], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 928)[82], 322, 0, 2, 0);
			GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[72], 40, false, 1, 1);
			GIVE_WEAPON_TO_ACTOR((*&Local_4 + 928)[82], 40, false, 1, 1);
			MEMORY_ALLOW_SHOOTING((*&Local_4 + 928)[72], true);
			MEMORY_ALLOW_SHOOTING((*&Local_4 + 928)[82], true);
			Function_370(Local_4.f_1028, bLocal_756, 0);
			Function_387(Local_4.f_1028, Local_4.f_912, 0);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 928)[72], &Local_4 + 1900[76], 3212836864);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 928)[82], &Local_4 + 1900[86], 3212836864);
			MEMORY_CONSIDER_AS(bLocal_755, (*&Local_4 + 928)[72], 4);
			MEMORY_CONSIDER_AS(bLocal_755, (*&Local_4 + 928)[82], 4);
		}
	}
	Function_386(Local_4.f_1028, 0x42f00000);
	return;
}

void Function_386(bool bParam0, int iParam1) //Position: 0x10D0B / 68875
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bVar1)) > 1.0f)
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
					}
					ADD_BLIP_FOR_ACTOR(bVar1, 322, 0, 2, 0);
				}
				if (!Function_352(GET_PLAYER_ACTOR(0), bVar1, iParam1))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_387(bool bParam0, bool bParam1, int iParam2) //Position: 0x10D94 / 69012
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
			Function_388(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_388(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10DE3 / 69091
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

void Function_389() //Position: 0x10E2D / 69165
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_7thWaveAttack", "Fort02_7thWaveAttack", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_390(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x10E7E / 69246
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 0);
		Function_364(&bParam0, Global_34573, 1);
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &uParam1, 3.0f, 4);
		TASK_GO_TO_COORD(false, &uParam1, 1);
		TASK_CROUCH(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
	}
}

void Function_391() //Position: 0x10EC6 / 69318
{
	if (!SQUAD_IS_VALID(Local_4.f_912))
	{
		Function_310();
	}
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_756, *(&Local_4 + 1428[56]), 1, true, 1);
	Function_297(&(Local_921[117]), Local_4.f_912, "fort02_Horse", 1, 0x5f5e100, 1);
	Function_392(&(Local_921[117]), 200);
	Function_297(&(Local_921[217]), bLocal_756, "fort02_Horse", 1, 0x5f5e100, 1);
	Function_392(&(Local_921[217]), 200);
	return;
}

void Function_392(int iParam0, int iParam1) //Position: 0x10F58 / 69464
{
	if (iParam1 != 100000000)
	{
		Function_393(iParam0, iParam1);
	}
	else
	{
		Function_299(iParam0, 1);
	}
	return;
}

void Function_393(int iParam0, bool bParam1) //Position: 0x10F78 / 69496
{
	bool bVar0;
	
	Function_41(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_81(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_41(iParam0 + 40, bVar0);
	return;
}

void Function_394(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x10FA3 / 69539
{
	bool bVar0;
	vector3 vVar1;
	
	Function_215(bParam2);
	vVar1 = { StackVal, StackVal, Function_215(bParam2) };
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(false, bParam1, iParam3, 1, 0, 1, false);
	TASK_GO_NEAR_COORD(false, &vVar1, bParam4, iParam3);
	TASK_DISMOUNT(false, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(bParam2), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
}

void Function_395(bool bParam0, bool bParam1, vector3 vParam2, float fParam5) //Position: 0x10FF3 / 69619
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_ALIVE(bParam0))
		{
			if (!DECOR_CHECK_EXIST(bParam0, "bSentBackup"))
			{
				if (!Function_362(bParam0, bParam1, fParam5))
				{
					bVar0 = Function_399(StackVal, StackVal, vParam2);
					SQUAD_JOIN(bVar0, SQUAD_GET(bParam0));
					Function_396(bVar0, bParam1);
					AI_ACTOR_FORCE_SPEED(bVar0, 4);
					TASK_SHOOT_ENEMIES_FROM_COVER(bVar0, GET_COVER_LOCATION_FROM_OBJECT(bParam1), -1.0f, 1086324736);
					ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
					SET_ACTOR_FACTION(bVar0, 19);
					DECOR_SET_BOOL(bParam0, "bSentBackup", true);
				}
			}
		}
	}
}

void Function_396(var uParam0, bool bParam1) //Position: 0x11088 / 69768
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	Function_397(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_397(bool bParam0, vector3 vParam1) //Position: 0x1109F / 69791
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_398(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_398(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_398(bool bParam0, vector3 vParam1) //Position: 0x110D7 / 69847
{
	vector3 vVar0;
	
	Function_227(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_227(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

var Function_399(vector3 vParam0) //Position: 0x1115A / 69978
{
	bool bVar0;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, Function_58(), Function_400(), vParam0, 0.0f, 0.0f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	Function_372(bVar0, 0x41700000);
	return bVar0;
}

int Function_400() //Position: 0x11193 / 70035
{
	switch (RAND_INT_RANGE(true, 4))
	{
		case 0x00000001:
			return 407;
			break;
		
		case 0x00000002:
			return 408;
			break;
		
		case 0x00000003:
			return 410;
			break;
		
		case 0x00000004:
			return 411;
			break;
	}
	return 407;
}

void Function_401(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x111DA / 70106
{
	vector3 vVar0;
	bool bVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "iThrowState"))
	{
		DECOR_SET_INT(bParam0, "iThrowState", false);
	}
	bVar3 = DECOR_GET_INT(bParam0, "iThrowState");
	if (bVar3 <= 6)
	{
		if (Function_342(Global_34573, bParam0, 90.0f))
		{
			if (!DECOR_CHECK_EXIST(*uParam1, "fDeathTime"))
			{
				if (IS_ACTOR_VALID(bParam0))
				{
					if (!IS_ACTOR_ALIVE(bParam0))
					{
						if (Function_362(bParam0, *uParam1, 10.0f))
						{
							DECOR_SET_FLOAT(*uParam1, "fDeathTime", GET_CURRENT_GAME_TIME());
						}
					}
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(*uParam1, "fDeathTime")) < 3.0f)
			{
				Function_215(bParam0);
				vVar0 = { StackVal, StackVal, Function_215(bParam0) };
				DESTROY_OBJECT(*uParam1);
				Function_406(&vVar0, "DynamiteExplosion", 0, 1);
				bVar3 = 6;
			}
		}
		if (bVar3 <= 6)
		{
			if (IS_OBJECT_VALID(*uParam2))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(*uParam2))
				{
					EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam2);
					EVENT_TRAP_CLEAR_EVENTS(*uParam2);
					bVar3 = 6;
				}
			}
		}
	}
	if (IS_OBJECT_VALID(bLocal_871))
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_871))
		{
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (IS_OBJECT_VALID(*uParam1))
				{
					Function_405();
				}
			}
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_871);
			EVENT_TRAP_CLEAR_EVENTS(bLocal_871);
			DESTROY_OBJECT(bLocal_871);
		}
	}
	switch (bVar3)
	{
		case 0x00000000:
			DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
			GIVE_WEAPON_TO_ACTOR(bParam0, 24, 1.0f, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bParam0, 24, 1);
			UNK_0x2E84E682(bParam0, 0);
			AI_SET_WEAPON_MAX_RANGE(bParam0, bParam3);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam5, 3.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, false);
			TASK_CROUCH(bParam0, -1.0f);
			MEMORY_ALLOW_THROWING_EXPLOSIVES(bParam0, 0);
			*uParam2 = CREATE_EVENT_TRAP(Function_58(), 5, Local_4);
			EVENT_TRAP_ON_TARGET(*uParam2, *uParam1);
			bVar3 = true;
			break;
		
		case 0x00000001:
			if (Function_342(Global_34573, bParam0, bParam3))
			{
				MEMORY_ALLOW_THROWING_EXPLOSIVES(bParam0, 1);
				DECOR_SET_INT(bParam0, "iNumWarningShotsLeft", bParam4);
				DECOR_SET_FLOAT(bParam0, "fLastAttackTime", (GET_CURRENT_GAME_TIME() - fParam5));
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
				{
					ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				}
				Function_366(bParam0, 3212836864);
				iLocal_837 = 1;
				bVar3 = 2;
			}
			break;
		
		case 0x00000002:
			if (DECOR_GET_INT(bParam0, "iNumWarningShotsLeft") >= 0)
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bParam0, "fLastAttackTime")) <= fParam5)
				{
					Function_402(bParam0, Global_34573, 23.0f, 33.0f, 0.0f, 0x41200000);
					CLEAR_LAST_ATTACK(bParam0);
					bVar3 = 3;
				}
			}
			else
			{
				DECOR_REMOVE(bParam0, "iNumWarningShotsLeft");
				DECOR_REMOVE(bParam0, "fLastAttackTime");
				AI_SHOOT_TARGET_SET_OFFSET(bParam0, (*&Local_4 + 916)[02], 0.0f, 0.0f, 0.0f);
				Function_366(bParam0, 3212836864);
				bVar3 = 4;
			}
			break;
		
		case 0x00000003:
			if (GET_LAST_ATTACK_TIME(bParam0) < 0.0f)
			{
				DECOR_SET_FLOAT(bParam0, "fLastAttackTime", GET_CURRENT_GAME_TIME());
				DECOR_SET_INT(bParam0, "iNumWarningShotsLeft", (DECOR_GET_INT(bParam0, "iNumWarningShotsLeft") - 1));
				bVar3 = 2;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
			if (IS_PHYSINST_VALID(GET_PHYSINST_FROM_OBJECT(bParam0)))
			{
				vVar0 = { 0.0f, 10.0f, -7.0f };
				if (IS_ACTOR_ALIVE(bParam0))
				{
					KILL_ACTOR(bParam0);
				}
				SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(bParam0), &vVar0);
			}
			bVar3++;
			break;
	}
	DECOR_SET_INT(bParam0, "iThrowState", bVar3);
}

void Function_402(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x115D9 / 71129
{
	struct<5> Var0;
	struct<5> Var6;
	
	bParam4 = bParam4;
	GET_POSITION(bParam1, &vVar3);
	GET_POSITION(bParam0, &Var6);
	Function_404(StackVal, StackVal, StackVal, StackVal, Var6, vVar3, (RAND_FLOAT_RANGE(bParam2, bParam3) - fParam5));
	Var0 = { StackVal, StackVal, Function_404(StackVal, StackVal, StackVal, StackVal, Var6, vVar3, (RAND_FLOAT_RANGE(bParam2, bParam3) - fParam5)) };
	Function_403(StackVal, StackVal, StackVal, StackVal, Var0, vVar3, RAND_FLOAT_RANGE(-(FABS(bParam4) / 2.0f), (FABS(bParam4) / 2.0f)));
	Function_403(StackVal, StackVal, StackVal, StackVal, Var0, vVar3, RAND_FLOAT_RANGE(-(FABS(bParam4) / 2.0f), (FABS(bParam4) / 2.0f)));
	Var0.f_4 = StackVal;
	Var0.f_4 = (StackVal + 2.0f);
	bVar9 = TASK_SEQUENCE_OPEN();
	TASK_SHOOT_AT_COORD_FROM_POSITION(false, &Var0, &Var6, 3212836864);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar9);
}

vector3 Function_403(vector3 vParam0) //Position: 0x11661 / 71265
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

vector3 Function_404(vector3 vParam0, vector3 vParam3, bool bParam6) //Position: 0x116DB / 71387
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, bParam6);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	return StackVal, StackVal, vVar0;
}

void Function_405() //Position: 0x1170D / 71437
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_DynamiteWarning1", "Fort02_DynamiteWarning1", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_406(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x11764 / 71524
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_407(bool bParam0) //Position: 0x11780 / 71552
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if ((iLocal_843 % 4) == 0)
	{
		if (SQUAD_GET_SIZE(bParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (!Function_342(bVar1, Global_34573, 50.0f))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
					{
						if (Function_409(bVar1, 0x41f00000))
						{
							if (!Function_408(bVar1))
							{
								if (!Function_379(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									PRINTSTRING(GET_ACTOR_NAME(bVar1));
									PRINTSTRING(" is out of range, get rid of him");
									PRINTNL();
									if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
									{
										REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
									}
									SQUAD_LEAVE(bVar1);
									DESTROY_ACTOR(bVar1);
								}
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

bool Function_408(bool bParam0) //Position: 0x11852 / 71762
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

bool Function_409(bool bParam0, int iParam1) //Position: 0x11874 / 71796
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	iParam1 = iParam1;
	vVar6 = { StackVal, StackVal, vVar6 };
	GET_OBJECT_AXIS((*&Local_4 + 916)[02], &uVar0, 2);
	Function_215(bParam0);
	Function_215((*&Local_4 + 916)[02]);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_215((*&Local_4 + 916)[02]), Function_215(bParam0), StackVal) };
	VNORMALIZE(&vVar3);
	VSCALE(&uVar0, -1.0f);
	if (VDOT(&vVar3, &uVar0) >= -0,4f)
	{
		if ((((GET_TASK_STATUS(bParam0, 28) != 1 || GET_TASK_STATUS(bParam0, 8) != 1) || GET_TASK_STATUS(bParam0, 18) != 1) && IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0))) && !IS_ACTOR_RIDING(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_410() //Position: 0x118F8 / 71928
{
	if (!Function_415(Local_4.f_2320, Global_34573, 10.0f))
	{
		if (Function_279(&bLocal_825) <= 15.0f)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (((((Function_411(Local_4.f_584) || Function_411(Local_4.f_648)) || Function_411(Local_4.f_728)) || Function_411(Local_4.f_888)) || Function_411(Local_4.f_1028)) || Function_411(Local_4.f_768))
				{
					if (RAND_INT_RANGE(false, 10) >= 4)
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_755, "Fort02_IrishTauntsAttacks", false, 1, 1, 0, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_755, "Outlaw03_TauntsAttckersMac", false, 1, 1, 0, 0, 0);
					}
					Function_229(&bLocal_825, RAND_FLOAT_RANGE(0.0f, (15.0f - 10.0f)));
				}
			}
		}
	}
	return;
}

int Function_411(bool bParam0) //Position: 0x119D9 / 72153
{
	float fVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (Function_413(bParam0, Global_34573, 1, 0, 0))
		{
			return 1;
		}
		fVar0 = Function_412(bParam0);
		if (fVar0 < 0.0f && (GET_CURRENT_GAME_TIME() - fVar0) > 2.0f)
		{
			return 1;
		}
	}
	return 0;
}

var Function_412(bool bParam0) //Position: 0x11A14 / 72212
{
	bool bVar0;
	bool bVar1;
	void fVar2;
	
	bVar0 = false;
	fVar2 = -1.0f;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (GET_LAST_ATTACK_TIME(bVar1) < fVar2)
			{
				fVar2 = GET_LAST_ATTACK_TIME(bVar1);
			}
			bVar0++;
		}
	}
	return fVar2;
}

bool Function_413(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4) //Position: 0x11A5D / 72285
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
			if (Function_414(bVar1, bParam1, uParam2, uParam3, uParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_414(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x11AC0 / 72384
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

bool Function_415(bool bParam0, bool bParam1, float fParam2) //Position: 0x11BAD / 72621
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = false;
	GET_POSITION(bParam1, &vVar1);
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
		Function_215(bVar4);
		if (VDIST(vVar1, Function_215(bVar4)) >= fParam2)
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

void Function_416() //Position: 0x11BF3 / 72691
{
	float fVar0;
	float fVar1;
	
	fVar0 = _GET_AMMO_AMOUNT(Global_34573, 9, 1);
	fVar1 = (_GET_MAX_AMMO_AMOUNT(Global_34573, 9) * 0,375f);
	if ((iLocal_729 == 0 && iLocal_729 == 0) && !IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_281(&bLocal_828))
		{
			if (fVar0 > (fVar1 * 0,25f))
			{
				if (!iLocal_839)
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_703.f_96)))
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							SET_BLIP_BLINK(ADD_BLIP_FOR_OBJECT(Local_703.f_96, 335, 0f, 2, 0), 1, 0, 5f);
							if (Function_279(&bLocal_828) < 15.0f)
							{
								Function_417();
								Function_228(&bLocal_828);
							}
							iLocal_839 = 1;
						}
					}
				}
			}
			else if (iLocal_839)
			{
				iLocal_839 = 0;
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_703.f_96)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_703.f_96));
				}
			}
		}
	}
	if (Function_362(Global_34573, Local_703.f_96, 1,25f))
	{
		if (fVar0 > (fVar1 * 0,75f))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 9, (fVar1 - fVar0), 0, 1);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_703.f_96)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_703.f_96));
			}
		}
	}
	return;
}

void Function_417() //Position: 0x11CFE / 72958
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_MoreAmmo", "Fort02_MoreAmmo", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_418() //Position: 0x11D45 / 73029
{
	if (fLocal_848 < -1.0f)
	{
		if (GET_CURRENT_GAME_TIME() <= fLocal_848)
		{
			fLocal_848 = -1.0f;
			Function_419(cLocal_853, 6.0f, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_419(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11D6C / 73068
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

void Function_420() //Position: 0x11DB3 / 73139
{
	if (iLocal_730 < 3 && iLocal_730 > 105)
	{
		Function_418();
		Function_416();
		Function_356();
		Function_429();
		Function_427();
	}
	switch (iLocal_730)
	{
		case 0x00000000:
			Function_326(0);
			iLocal_835 = 0;
			iLocal_877 = 0;
			Function_380(Local_4.f_536);
			Function_378(&Local_4 + 648, 0, 0, 0);
			Function_378(&Local_4 + 728, 0, 0, 0);
			Function_378(&Local_4 + 584, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_755, GET_ACTOR_MAX_HEALTH(bLocal_755));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			Function_325(Global_30633[1]);
			if (iLocal_758[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				if (!ACTOR_DRAW_LAST_WEAPON(Global_34573, 1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(Global_34573, Function_377(Global_34573, 42), 1);
				}
				bLocal_847 = 2.0f;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				Function_376(&Local_748);
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 1652[26]), 20.0f, 0);
				Function_228(&bLocal_810);
				iLocal_730 = 1;
			}
			else
			{
				if (SQUAD_IS_VALID(Local_4.f_648))
				{
					Function_365(Local_4.f_648, 0);
				}
				Function_375(&bLocal_822);
				Function_228(&bLocal_810);
				iLocal_730 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Local_4 + 1652[26]), 20.0f))
				{
					if (Function_426())
					{
						Function_223(StackVal, &Local_4 + 1652[26]);
						Function_228(&bLocal_810);
						iLocal_730 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			TOGGLE_COVER_PROPS(0);
			STREAMING_UNLOAD_BOUNDS();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_424();
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				SQUADS_MERGE(Local_4.f_728, Local_4.f_888);
			}
			Function_371(Local_4.f_888, 0x41700000);
			Function_240(iLocal_729);
			Function_291(StackVal, StackVal, Function_240(iLocal_729), iLocal_729, Global_30633[2], Function_242(iLocal_729), 0);
			if (!iLocal_758[2])
			{
				Function_222();
				Function_368((*&Local_4 + 916)[02], 0.0f, 0.0f, 0.0f);
				TASK_FACE_ACTOR(bLocal_755, Global_34573, 1, 3212836864);
				iLocal_846 = 2;
			}
			Function_297(&(Local_921[017]), bLocal_755, "Outlaw", 1, 0x5f5e100, 1);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_888, 0, (*&Local_4 + 1244)[0], 4294967295);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_888, 0, (*&Local_4 + 1244)[1], 4294967295);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_888, 0, (*&Local_4 + 1244)[2], 4294967295);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_888, 0, (*&Local_4 + 1244)[3], 4294967295);
			Function_423(Local_4.f_888, 1.0f, -1.0f, 0x40c00000);
			TASK_CROUCH((*&Local_4 + 772)[82], -1.0f);
			TASK_CROUCH((*&Local_4 + 772)[32], -1.0f);
			TASK_CROUCH((*&Local_4 + 772)[42], -1.0f);
			TASK_CROUCH((*&Local_4 + 772)[62], -1.0f);
			TASK_CROUCH((*&Local_4 + 772)[112], -1.0f);
			TASK_CROUCH((*&Local_4 + 772)[102], -1.0f);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 772)[22], 15.0f);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 772)[62], 15.0f);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 772)[102], 15.0f);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 772)[112], 15.0f);
			Function_365(Local_4.f_888, 1);
			Function_363(Local_4.f_888, Global_34573, 1);
			if (IS_OBJECT_VALID(bLocal_871))
			{
				DESTROY_OBJECT(bLocal_871);
			}
			bLocal_871 = CREATE_EVENT_TRAP("etTNTExplosion", 17, Local_4);
			Function_215(Local_4.f_2784);
			EVENT_TRAP_ON_SPHERE(bLocal_871, Function_215(Local_4.f_2784), 90.0f);
			if (!Function_281(&bLocal_828))
			{
				Function_228(&bLocal_828);
			}
			Function_228(&bLocal_810);
			iLocal_730 = 6;
			break;
		
		case 0x00000006:
			if (Function_362(Global_34573, Local_703.f_28, 7.0f))
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					if (!iLocal_758[2])
					{
						Function_421(-18,422f, 117,117f, 1684,762f, -0,973f, -0,188f, 0,136f);
					}
					REMOVE_OBJECT_ATTACHMENT(bLocal_978);
					Function_228(&bLocal_810);
					iLocal_730 = 7;
				}
			}
			else
			{
				PRINTSTRING("Player is ");
				PRINTFLOAT(Function_360(Global_34573, Local_703.f_28));
				PRINTSTRING("m from raft, waiting for him to teleport to it");
				PRINTNL();
			}
			break;
		
		case 0x00000007:
			Function_374();
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1156))
			{
				Function_228(&bLocal_810);
				iLocal_730 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_172();
			iLocal_758[3] = 1;
			Function_228(&bLocal_810);
			iLocal_729 = 4;
			iLocal_730 = 0;
			break;
	}
	return;
}

int Function_421(vector3 vParam0, vector3 vParam3) //Position: 0x12242 / 74306
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	VSCALE(&vVar0, 5.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	ENABLE_GAME_CAMERA_FOCUS(vVar0, -1.0f, 6, 1, 1, 0);
	if (!Function_422(StackVal, StackVal, vVar0, -0,9f, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_422(vector3 vParam0, float fParam3, bool bParam4) //Position: 0x12287 / 74375
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &uVar0);
	GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vParam0, StackVal) };
	VNORMALIZE(&vVar6);
	if (VDOT(&uVar0, &vVar6) >= fParam3)
	{
		return 1;
	}
	if (bParam4)
	{
		PRINTSTRING("IS_GAME_CAMERA_FACING_DIRECTION: vdot = ");
		PRINTFLOAT(VDOT(&uVar0, &vVar6));
		PRINTNL();
	}
	return 0;
}

void Function_423(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x12306 / 74502
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		GET_POSITION(bVar1, &uVar3);
		bVar2 = FIND_NEAREST_COVER_LOCATION(&uVar3, bParam1, GET_HEADING(bVar1), 180.0f, 7);
		if (IS_COVER_LOCATION_VALID(bVar2))
		{
			TASK_SHOOT_ENEMIES_FROM_COVER(bVar1, bVar2, bParam2, iParam3);
		}
		bVar0++;
	}
}

void Function_424() //Position: 0x12360 / 74592
{
	Local_4.f_888 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S3_Snipers"));
	(*&Local_4 + 772)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_27", 410, -1073,745f, 34,76276f, 3349,226f, 0.0f, 14,59907f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[02], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[02], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[02], 19);
	(*&Local_4 + 772)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_29", 407, -1132.0f, 24,88931f, 3299,161f, 0.0f, 27,16955f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[12], Local_4.f_888);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 772)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[12], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[12], 19);
	(*&Local_4 + 772)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_30", 411, -1078,784f, 32,8193f, 3348,742f, 0.0f, 21,23525f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[22], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[22], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[22], 19);
	(*&Local_4 + 772)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_32", 410, -1062,856f, 19,59035f, 3306,212f, 0.0f, 261,4389f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[32], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[32], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[32], 19);
	(*&Local_4 + 772)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_33", 408, -1061,887f, 19,60049f, 3307,281f, 0.0f, 261,4389f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[42], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[42], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[42], 19);
	(*&Local_4 + 772)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_36", 410, -1168,153f, 19,18698f, 3304,921f, 0.0f, 38,37735f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[52], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[52], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[52], 19);
	(*&Local_4 + 772)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_39", 412, -1251,865f, 23,76303f, 3306,822f, 0.0f, -52,34008f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[62], Local_4.f_888);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 772)[62]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[62], 24, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[62], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[62], 19);
	(*&Local_4 + 772)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_63", 410, -1169,531f, 19,42233f, 3302,212f, 0.0f, 47,73506f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[72], Local_4.f_888);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 772)[72]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[72], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[72], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[72], 19);
	(*&Local_4 + 772)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_72", 412, -1060,452f, 19,59035f, 3307,523f, 0.0f, 261,4389f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[82], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[82], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[82], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[82], 19);
	(*&Local_4 + 772)[92] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_73", 408, -1168,632f, 19,22011f, 3303,855f, 0.0f, 40,90493f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[92], Local_4.f_888);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 772)[92]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[92], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[92], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[92], 19);
	(*&Local_4 + 772)[102] = Function_425(Local_4, "cover_sniper_74", 411, Function_58(), 976, -1212f, 37,66484f, 3347,044f, 0.0f, 34,12252f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[102], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[102], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[102], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[102], 19);
	(*&Local_4 + 772)[112] = Function_425(Local_4, "cover_sniper_75", 410, Function_58(), 977, -1209,88f, 37,36953f, 3349,879f, 0.0f, 34,12252f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[112], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[112], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[112], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[112], 19);
	(*&Local_4 + 772)[122] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_86", 408, -1082,258f, 31,3709f, 3348,222f, 0.0f, 21,23525f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[122], Local_4.f_888);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 772)[122]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[122], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[122], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[122], 19);
	(*&Local_4 + 772)[132] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_91", 413, -1135,582f, 24,04642f, 3287,021f, 0.0f, -61,54863f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 772)[132], Local_4.f_888);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 772)[132]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 772)[132], 24, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 772)[132], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 772)[132], 19);
	return;
}

var Function_425(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x12A71 / 76401
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_382(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_382(bParam4))
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

bool Function_426() //Position: 0x12B96 / 76694
{
	Function_318(&Local_4 + 232, 411, 2, 0);
	Function_318(&Local_4 + 232, 410, 2, 0);
	Function_318(&Local_4 + 232, 983, 2, 0);
	Function_318(&Local_4 + 232, 408, 2, 0);
	Function_318(&Local_4 + 232, 976, 2, 0);
	Function_318(&Local_4 + 232, 977, 2, 0);
	Function_318(&Local_4 + 232, 407, 2, 0);
	if (Function_312(&Local_4 + 232))
	{
		return 1;
	}
	return 0;
}

void Function_427() //Position: 0x12C04 / 76804
{
	if (SQUAD_IS_VALID(Local_4.f_888))
	{
		if (IS_VOLUME_VALID(Local_4.f_1292))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1292) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_888) >= 1)
			{
				DESTROY_VOLUME(Local_4.f_1292);
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE_2", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
		switch (iLocal_877)
		{
			case 0x00000000:
				if ((((Function_339((*&Local_4 + 772)[02], 0) && Function_339((*&Local_4 + 772)[12], 0)) && Function_339((*&Local_4 + 772)[22], 0)) && Function_339((*&Local_4 + 772)[122], 0)) && Function_339((*&Local_4 + 772)[132], 0))
				{
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					iLocal_877 = 1;
				}
				break;
			
			case 0x00000001:
				if ((Function_428((*&Local_4 + 772)[52]) || Function_428((*&Local_4 + 772)[72])) || Function_428((*&Local_4 + 772)[92]))
				{
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_2", 0, 4294967295, 4294967295, 3212836864, 0);
					iLocal_877 = 2;
				}
				break;
			}
	}
	return;
}

int Function_428(bool bParam0) //Position: 0x12D42 / 77122
{
	if (GET_LAST_ATTACK_TARGET(bParam0) == Global_34573)
	{
		return 1;
	}
	if (IS_ACTOR_SHOOTING(bParam0))
	{
		return 1;
	}
	if (Function_379(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
	{
		return 1;
	}
	return 0;
}

void Function_429() //Position: 0x12D77 / 77175
{
	Function_410();
	Function_407(Local_4.f_728);
	Function_407(Local_4.f_888);
	Function_401((*&Local_4 + 772)[62], &Local_4 + 2784, &(uLocal_872[1]), 70.0f, 2, 0x40800000);
	Function_401((*&Local_4 + 772)[132], &Local_4 + 2788, &(uLocal_872[2]), 70.0f, 2, 0x40800000);
	Function_215((*&Local_4 + 2472)[7]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[42], Local_4.f_2644, Function_215((*&Local_4 + 2472)[7]), 7.0f);
	Function_215((*&Local_4 + 2472)[7]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[32], Local_4.f_2640, Function_215((*&Local_4 + 2472)[7]), 7.0f);
	Function_215((*&Local_4 + 2472)[5]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[02], Local_4.f_2632, Function_215((*&Local_4 + 2472)[5]), 20.0f);
	Function_215((*&Local_4 + 2472)[5]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[22], Local_4.f_2648, Function_215((*&Local_4 + 2472)[5]), 20.0f);
	Function_215((*&Local_4 + 2472)[5]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[12], Local_4.f_2636, Function_215((*&Local_4 + 2472)[5]), 20.0f);
	Function_215((*&Local_4 + 2472)[6]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[72], Local_4.f_2600, Function_215((*&Local_4 + 2472)[6]), 20.0f);
	Function_215((*&Local_4 + 2472)[6]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[52], Local_4.f_2652, Function_215((*&Local_4 + 2472)[6]), 20.0f);
	if (IS_VOLUME_VALID(Local_4.f_1160))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1160))
		{
			DESTROY_VOLUME(Local_4.f_1160);
			iLocal_837 = 1;
			Function_367();
			iLocal_835 = 1;
			Function_430();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[82], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[42], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[32], 322, 0, 2, 0);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 772)[82], &Local_4 + 1900[06], -1.0f);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 772)[42], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2644), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 772)[32], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2640), -1.0f, 1086324736);
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1164))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1164))
		{
			DESTROY_VOLUME(Local_4.f_1164);
			iLocal_837 = 1;
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[02], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[12], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[22], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[122], 322, 0, 2, 0);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 772)[02], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2632), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 772)[22], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2648), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 772)[12], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2636), -1.0f, 1086324736);
			Function_390(StackVal, StackVal, (*&Local_4 + 772)[122], *(&Local_4 + 1900[46]));
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1168))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1168))
		{
			DESTROY_VOLUME(Local_4.f_1168);
			iLocal_837 = 1;
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[52], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[92], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 772)[72], 322, 0, 2, 0);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 772)[72], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2600), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 772)[52], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2652), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 772)[92], &Local_4 + 1900[26], -1.0f);
		}
	}
	else if ((IS_ACTOR_VALID((*&Local_4 + 772)[02]) && !IS_ACTOR_ALIVE((*&Local_4 + 772)[02])) && (IS_ACTOR_VALID((*&Local_4 + 772)[22]) && !IS_ACTOR_ALIVE((*&Local_4 + 772)[22])))
	{
		TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 916)[02], 4.0f);
	}
	Function_386(Local_4.f_888, 0x42f00000);
	return;
}

void Function_430() //Position: 0x13185 / 78213
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_5thWaveAttack", "Fort02_5thWaveAttack", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x131D6 / 78294
{
	if (iLocal_730 < 3 && iLocal_730 > 105)
	{
		Function_356();
		Function_355();
		Function_418();
		Function_416();
		Function_435();
		if (IS_VOLUME_VALID(Local_4.f_1284))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1284) || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_728) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_768)) >= 2)
			{
				DESTROY_VOLUME(Local_4.f_1284);
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
		if (IS_VOLUME_VALID(Local_4.f_1288))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1288) || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_728) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_768)) >= 0)
			{
				DESTROY_VOLUME(Local_4.f_1288);
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
	}
	switch (iLocal_730)
	{
		case 0x00000000:
			Function_326(0);
			Function_380(Local_4.f_536);
			Function_378(&Local_4 + 648, 0, 0, 0);
			Function_378(&Local_4 + 584, 0, 0, 0);
			Function_325(Global_30633[1]);
			SET_ACTOR_HEALTH(bLocal_755, GET_ACTOR_MAX_HEALTH(bLocal_755));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			if (iLocal_758[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				bLocal_847 = 2.0f;
				if (!ACTOR_DRAW_LAST_WEAPON(Global_34573, 1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(Global_34573, Function_377(Global_34573, 42), 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				Function_376(&Local_748);
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 1652[16]), 20.0f, 0);
				Function_228(&bLocal_810);
				iLocal_730 = 1;
			}
			else
			{
				if (SQUAD_IS_VALID(Local_4.f_648))
				{
					Function_365(Local_4.f_648, 0);
				}
				Function_375(&bLocal_822);
				Function_228(&bLocal_810);
				iLocal_730 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Local_4 + 1652[16]), 20.0f))
				{
					if (Function_426())
					{
						Function_223(StackVal, &Local_4 + 1652[16]);
						Function_421(353,18f, 115,541f, 1504,362f, -0,942f, -0,012f, -0,337f);
						Function_228(&bLocal_810);
						iLocal_730 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			TOGGLE_COVER_PROPS(0);
			STREAMING_UNLOAD_BOUNDS();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE_2", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_835 = 1;
			Function_434();
			if (SQUAD_IS_VALID(Local_4.f_648))
			{
				SQUADS_MERGE(Local_4.f_648, Local_4.f_728);
			}
			Function_371(Local_4.f_728, 0x41700000);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1224)[0], 4294967295);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1224)[1], 4294967295);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1224)[2], 4294967295);
			Function_240(iLocal_729);
			Function_291(StackVal, StackVal, Function_240(iLocal_729), iLocal_729, Global_30633[2], Function_242(iLocal_729), 0);
			Function_297(&(Local_921[017]), bLocal_755, "Outlaw", 1, 0x5f5e100, 1);
			Function_367();
			if (!iLocal_758[1])
			{
				Function_222();
				Function_368((*&Local_4 + 916)[02], 0.0f, 0.0f, 0.0f);
			}
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 652)[52], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2604), -1.0f, 1086324736);
			Function_423(Local_4.f_728, 1.0f, -1.0f, 0x40c00000);
			if (IS_OBJECT_VALID(bLocal_871))
			{
				DESTROY_OBJECT(bLocal_871);
			}
			Function_365(Local_4.f_728, 1);
			Function_363(Local_4.f_728, Global_34573, 1);
			if (IS_OBJECT_VALID(bLocal_871))
			{
				DESTROY_OBJECT(bLocal_871);
			}
			bLocal_871 = CREATE_EVENT_TRAP("etTNTExplosion", 17, Local_4);
			EVENT_TRAP_ON_SPHERE(bLocal_871, *(&Local_4 + 1652[16]), 90.0f);
			if (!Function_281(&bLocal_828))
			{
				Function_228(&bLocal_828);
			}
			Function_228(&bLocal_810);
			iLocal_730 = 6;
			break;
		
		case 0x00000006:
			if (Function_362(Global_34573, Local_703.f_28, 7.0f))
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					REMOVE_OBJECT_ATTACHMENT(bLocal_978);
					Function_228(&bLocal_810);
					iLocal_730 = 7;
				}
			}
			else
			{
				PRINTSTRING("Player is ");
				PRINTFLOAT(Function_360(Global_34573, Local_703.f_28));
				PRINTSTRING("m from raft, waiting for him to teleport to it");
				PRINTNL();
			}
			break;
		
		case 0x00000007:
			if (!IS_VOLUME_VALID(Local_4.f_1184))
			{
				if ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_728) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_768)) < 0)
				{
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 916)[02], 4.0f);
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1276))
			{
				TASK_FACE_ACTOR(bLocal_755, Global_34573, 1, 3212836864);
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_755, true);
				iLocal_846 = 2;
				iLocal_835 = 0;
				Function_433();
				Function_228(&bLocal_810);
				iLocal_730 = 8;
			}
			break;
		
		case 0x00000008:
			Function_432();
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1152))
			{
				Function_228(&bLocal_810);
				iLocal_730 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_173();
			iLocal_758[2] = 1;
			Function_228(&bLocal_810);
			iLocal_729 = 3;
			iLocal_730 = 0;
			break;
	}
	return;
}

int Function_432() //Position: 0x136F0 / 79600
{
	Function_318(&Local_4 + 320, 410, 2, 0);
	Function_318(&Local_4 + 320, 407, 2, 0);
	Function_318(&Local_4 + 320, 411, 2, 0);
	Function_318(&Local_4 + 320, 408, 2, 0);
	Function_318(&Local_4 + 320, 412, 2, 0);
	Function_318(&Local_4 + 320, 976, 2, 0);
	Function_318(&Local_4 + 320, 977, 2, 0);
	Function_318(&Local_4 + 320, 413, 2, 0);
	if (Function_312(&Local_4 + 320))
	{
		return 1;
	}
	return 0;
}

void Function_433() //Position: 0x13774 / 79732
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Fort02_NearDockPointBant_v1_AA", "Fort02_NearDockPointBant_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NearDockPointBant_v1_AB1", "Fort02_NearDockPointBant_v1_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NearDockPointBant_v1_AB2", "Fort02_NearDockPointBant_v1_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NearDockPointBant_v1_AB3", "Fort02_NearDockPointBant_v1_AB3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NearDockPointBant_v1_AB4", "Fort02_NearDockPointBant_v1_AB4", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_NearDockPointBant_v1_AC", "Fort02_NearDockPointBant_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NearDockPointBant_v1_AD", "Fort02_NearDockPointBant_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_NearDockPointBant_v1_AE", "Fort02_NearDockPointBant_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NearDockPointBant_v1_AF", "Fort02_NearDockPointBant_v1_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_NearDockPointBant_v1_AG1", "Fort02_NearDockPointBant_v1_AG1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_NearDockPointBant_v1_AG2", "Fort02_NearDockPointBant_v1_AG2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NearDockPointBant_v1_AH", "Fort02_NearDockPointBant_v1_AH", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x13B1E / 80670
{
	Local_4.f_728 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S2_Snipers"));
	(*&Local_4 + 652)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_58", 411, -748,2838f, 27,09094f, 3220.0f, 0.0f, 1,809183f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[02], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[02], 41, 0,001f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[02], 19);
	(*&Local_4 + 652)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_64", 410, -714,8033f, 23,37604f, 3201,621f, 0.0f, 54,03433f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[12], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[12], 41, 0,001f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[12], 19);
	(*&Local_4 + 652)[22] = Function_425(Local_4, "csHorseGuy_1", 411, Function_58(), 983, -737,6996f, 37,07335f, 3248.0f, 0.0f, 87,95112f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[22], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[22], 41, 0,001f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[22], 19);
	(*&Local_4 + 652)[32] = Function_425(Local_4, "csHorseGuy_2", 408, Function_58(), 976, -729,5435f, 38,02248f, 3248.0f, 0.0f, 86,49689f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[32], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[32], 41, 0,001f, 1, 1);
	ACCESSORIZE_HORSE(GET_MOUNT((*&Local_4 + 652)[32]), false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[32], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[32], 19);
	(*&Local_4 + 652)[42] = Function_425(Local_4, "csHorseGuy_3", 411, Function_58(), 977, -722,5855f, 40,95351f, 3248.0f, 0.0f, 81,04793f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[42], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[42], 41, 0,001f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[42], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[42], 19);
	(*&Local_4 + 652)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_60", 408, -714,5438f, 23,8117f, 3202,85f, 0.0f, 68,0382f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[52], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[52], 41, 0,001f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[52], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[52], 19);
	(*&Local_4 + 652)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_85", 407, -715,9759f, 23,88839f, 3202,675f, 0.0f, 70,58333f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[62], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[62], 41, 0,001f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[62], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[62], 19);
	(*&Local_4 + 652)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_89", 411, -858,8304f, 20,62528f, 3265,546f, 0.0f, 24,9693f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[72], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[72], 41, 0,001f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[72], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[72], 19);
	(*&Local_4 + 652)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_90", 407, -860,3883f, 20,4644f, 3265,505f, 0.0f, 65,08241f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[82], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[82], 41, 0,001f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[82], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[82], 19);
	return;
}

void Function_435() //Position: 0x13F79 / 81785
{
	Function_410();
	Function_407(Local_4.f_728);
	Function_407(Local_4.f_768);
	Function_215((*&Local_4 + 2472)[2]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[12], Local_4.f_2604, Function_215((*&Local_4 + 2472)[2]), 15.0f);
	Function_215((*&Local_4 + 2472)[2]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[62], Local_4.f_2608, Function_215((*&Local_4 + 2472)[2]), 15.0f);
	Function_215((*&Local_4 + 2472)[2]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[22], Local_4.f_2672, Function_215((*&Local_4 + 2472)[2]), 20.0f);
	Function_215((*&Local_4 + 2472)[2]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[32], Local_4.f_2704, Function_215((*&Local_4 + 2472)[2]), 20.0f);
	Function_215((*&Local_4 + 2472)[2]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[32], Local_4.f_2712, Function_215((*&Local_4 + 2472)[2]), 20.0f);
	Function_215((*&Local_4 + 2472)[3]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[02], Local_4.f_2628, Function_215((*&Local_4 + 2472)[3]), 20.0f);
	Function_215((*&Local_4 + 2472)[3]);
	Function_395(StackVal, StackVal, (*&Local_4 + 652)[22], Local_4.f_2620, Function_215((*&Local_4 + 2472)[3]), 20.0f);
	if (IS_VOLUME_VALID(Local_4.f_1180))
	{
		if (((IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1180) || Function_379((*&Local_4 + 652)[12], 0x3f800000, 0x42960000, 1, 1, 0)) || Function_379((*&Local_4 + 652)[52], 0x3f800000, 0x42960000, 1, 1, 0)) || Function_379((*&Local_4 + 652)[62], 0x3f800000, 0x42960000, 1, 1, 0))
		{
			DESTROY_VOLUME(Local_4.f_1180);
			iLocal_837 = 1;
			Function_439();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 652)[12], 4);
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 652)[52], 4);
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 652)[62], 4);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[12], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[52], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[62], 322, 0, 2, 0);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 652)[12], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2604), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 652)[52], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2612), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 652)[62], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2608), -1.0f, 1086324736);
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1140))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1140))
		{
			DESTROY_VOLUME(Local_4.f_1140);
			iLocal_837 = 1;
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[22], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[32], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[42], 322, 0, 2, 0);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[02], 322, 0, 2, 0);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 652)[02], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2616), -1.0f, 1086324736);
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 652)[02], 3);
			Function_394((*&Local_4 + 652)[22], Local_4.f_2740, Local_4.f_2672, 4, 20.0f);
			Function_394((*&Local_4 + 652)[32], Local_4.f_2740, Local_4.f_2708, 4, 0x41700000);
			Function_394((*&Local_4 + 652)[42], Local_4.f_2740, Local_4.f_2704, 4, 0x41700000);
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1184))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1184))
		{
			DESTROY_VOLUME(Local_4.f_1184);
			iLocal_837 = 1;
			Function_438();
			Function_371(Local_4.f_768, 0x41700000);
			Function_437(Local_4.f_768, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_768, 0, (*&Local_4 + 1224)[0], 4294967295);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_768, 0, (*&Local_4 + 1224)[1], 4294967295);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_768, 0, (*&Local_4 + 1224)[2], 4294967295);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[72], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_4 + 652)[82], 322, 0, 2, 0);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 652)[72], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2680), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 652)[82], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2724), -1.0f, 1086324736);
			Function_436((*&Local_4 + 732)[32], Local_4.f_2712, 3);
			Function_394((*&Local_4 + 732)[02], Local_4.f_2744, Local_4.f_2628, 3, 0x41700000);
			Function_394((*&Local_4 + 732)[12], Local_4.f_2744, Local_4.f_2624, 3, 0x41700000);
			Function_394((*&Local_4 + 732)[22], Local_4.f_2744, Local_4.f_2620, 3, 0x41700000);
		}
	}
	Function_386(Local_4.f_728, 0x42f00000);
	return;
}

void Function_436(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14411 / 82961
{
	bool bVar0;
	vector3 vVar1;
	
	Function_215(bParam1);
	vVar1 = { StackVal, StackVal, Function_215(bParam1) };
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &vVar1, 7.0f, bParam2);
	TASK_STAND_STILL(false, 0,5f, 0, 0);
	TASK_DISMOUNT(false, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(bParam1), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_437(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1445D / 83037
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

void Function_438() //Position: 0x14547 / 83271
{
	Local_4.f_768 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "s3_riders_1"));
	(*&Local_4 + 732)[02] = Function_425(Local_4, "csHorseGuy_4", 411, Function_58(), 983, -760.0f, 21,83868f, 3201,575f, 0.0f, 150,0733f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 732)[02], Local_4.f_768);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 732)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 732)[02], 41, 0,001f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 732)[02], 19);
	(*&Local_4 + 732)[12] = Function_425(Local_4, "csHorseGuy_5", 408, Function_58(), 976, -750,1601f, 21,83868f, 3200.0f, 0.0f, 121,9727f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 732)[12], Local_4.f_768);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 732)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 732)[12], 41, 0,001f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 732)[12], 19);
	(*&Local_4 + 732)[22] = Function_425(Local_4, "csHorseGuy_6", 411, Function_58(), 977, -741,886f, 22,66055f, 3197,886f, 0.0f, 116,5238f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 732)[22], Local_4.f_768);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 732)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 732)[22], 41, 0,001f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 732)[22], 19);
	(*&Local_4 + 732)[32] = Function_425(Local_4, "csHorseGuy_7", 411, Function_58(), 983, -758,8859f, 32,0336f, 3253,89f, 0.0f, 38,97453f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 732)[32], Local_4.f_768);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 732)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 732)[32], 41, 0,001f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 732)[32], 19);
	return;
}

void Function_439() //Position: 0x14744 / 83780
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_2ndWaveAttack", "Fort02_2ndWaveAttack", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_440() //Position: 0x14795 / 83861
{
	if (iLocal_730 < 3 && iLocal_730 > 105)
	{
		Function_356();
		Function_355();
		Function_416();
		Function_455();
		if (IS_VOLUME_VALID(Local_4.f_1280))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1280) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_648) >= 1)
			{
				DESTROY_VOLUME(Local_4.f_1280);
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE_2", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
	}
	switch (iLocal_730)
	{
		case 0x00000000:
			Function_326(0);
			if (iLocal_758[0] != 1)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				bLocal_847 = 2.0f;
				Function_325(Global_30633[1]);
				SET_ACTOR_HEALTH(bLocal_755, GET_ACTOR_MAX_HEALTH(bLocal_755));
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_322();
				Function_376(&Local_748);
				bLocal_757 = Function_321(StackVal, StackVal, *(&Local_4 + 1300[06]), 0, 1, 1);
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 1652[06]), 20.0f, 0);
				Function_228(&bLocal_810);
				iLocal_730 = 1;
			}
			else
			{
				Function_375(&bLocal_822);
				Function_228(&bLocal_810);
				iLocal_730 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Local_4 + 1652[06]), 20.0f))
				{
					if (Function_454() && Function_453())
					{
						Function_223(StackVal, &Local_4 + 1652[06]);
						Function_451();
						Function_437(Local_4.f_584, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 540)[32])))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 540)[32]));
						}
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 540)[42])))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 540)[42]));
						}
						Function_228(&bLocal_810);
						iLocal_730 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			iLocal_835 = 1;
			TOGGLE_COVER_PROPS(0);
			STREAMING_UNLOAD_BOUNDS();
			Function_240(iLocal_729);
			Function_291(StackVal, StackVal, Function_240(iLocal_729), iLocal_729, Global_30633[2], Function_242(iLocal_729), 0);
			Function_297(&(Local_921[017]), bLocal_755, "Outlaw", 1, 0x5f5e100, 1);
			iLocal_846 = 2;
			Function_367();
			if (!iLocal_758[0])
			{
				Function_222();
				Function_368((*&Local_4 + 916)[02], 0.0f, 0.0f, 0.0f);
			}
			if (IS_OBJECT_VALID(bLocal_871))
			{
				DESTROY_OBJECT(bLocal_871);
			}
			bLocal_871 = CREATE_EVENT_TRAP("etTNTExplosion", 17, Local_4);
			EVENT_TRAP_ON_SPHERE(bLocal_871, *(&Local_4 + 1652[16]), 90.0f);
			Function_228(&bLocal_810);
			iLocal_730 = 6;
			break;
		
		case 0x00000006:
			if (Function_362(Global_34573, Local_703.f_28, 7.0f))
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					if (!SQUAD_IS_VALID(Local_4.f_648))
					{
						Function_450();
					}
					if (SQUAD_IS_VALID(Local_4.f_584))
					{
						SQUADS_MERGE(Local_4.f_584, Local_4.f_648);
					}
					Function_371(Local_4.f_648, 0x41700000);
					Function_363(Local_4.f_648, Global_34573, 1);
					Function_363(Local_4.f_648, bLocal_755, 1);
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 588)[42], 15.0f);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_648, 0, Local_4.f_1220, 4294967295);
					Function_449(Local_4.f_648, &bLocal_879);
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_879, false, 1, 4294967295);
					TASK_GO_TO_COORD(false, &Local_4 + 2144[16], 4);
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_2", 0, 4294967295, 4294967295, 3212836864, 0);
					REMOVE_OBJECT_ATTACHMENT(bLocal_978);
					Function_228(&bLocal_810);
					iLocal_730 = 7;
				}
			}
			else
			{
				PRINTSTRING("Player is ");
				PRINTFLOAT(Function_360(Global_34573, Local_703.f_28));
				PRINTSTRING("m from raft, waiting for him to teleport to it");
				PRINTNL();
			}
			break;
		
		case 0x00000007:
			if (Function_279(&bLocal_810) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_448();
				if (SQUAD_IS_VALID(Local_4.f_584))
				{
					Function_371(Local_4.f_584, 0x41700000);
				}
				Function_447(Local_4.f_584, Local_4.f_584, 1);
				Function_446((*&Local_4 + 540)[02], (*&Local_4 + 540)[32], 0);
				Function_446((*&Local_4 + 540)[12], (*&Local_4 + 540)[42], 4);
				if (IS_ACTOR_VALID((*&Local_4 + 540)[22]))
				{
					MEMORY_PREFER_WALKING((*&Local_4 + 540)[22], true);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 540)[22], &Local_4 + 2396, -1.0f);
				}
				Function_228(&bLocal_810);
				iLocal_730 = 8;
			}
			break;
		
		case 0x00000008:
			Function_228(&bLocal_810);
			iLocal_730 = 9;
			break;
		
		case 0x00000009:
			if (Function_279(&bLocal_810) <= 7.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_445();
				Function_228(&bLocal_810);
				iLocal_730 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_OBJECT_VALID(bLocal_862))
			{
				if (Function_279(&bLocal_810) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_444();
					Function_228(&bLocal_810);
					iLocal_730 = 11;
				}
			}
			else
			{
				Function_228(&bLocal_810);
				iLocal_730 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_279(&bLocal_810) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_417();
				Function_228(&bLocal_828);
				Function_228(&bLocal_810);
				iLocal_730 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_345(&bLocal_819, 60.0f, 200.0f, bLocal_755, "Outlaw_return", "Outlaw_abandoned", &bLocal_739, 0, 0, 0, 325, 1))
			{
				Function_442(&bLocal_819, 1920.0f, "Fort02_obj02", 7,5f, 2, 0);
			}
			Function_426();
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1148))
			{
				if (SQUAD_IS_VALID(Local_4.f_584))
				{
					Function_441(Local_4.f_584);
					SQUAD_GOALS_CLEAR(Local_4.f_584);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_584, false, 1, 4294967295);
					TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 1, 0, 0);
				}
				Function_228(&bLocal_810);
				iLocal_730 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_174();
			Function_176();
			iLocal_758[1] = 1;
			Function_228(&bLocal_810);
			iLocal_729 = 2;
			iLocal_730 = 0;
			break;
		
		case 0x0000005F:
			if (Function_279(&bLocal_810) <= 6.0f)
			{
				bLocal_739 = true;
			}
			break;
	}
	return;
}

void Function_441(bool bParam0) //Position: 0x14DB3 / 85427
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

int Function_442(bool bParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x14DE5 / 85477
{
	if (Function_279(bParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_244();
		}
		if (!Function_138())
		{
			Function_443(uParam2, uParam3, uParam4);
			Function_228(bParam0);
			return 1;
		}
		Function_229(bParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_443(bool bParam0, bool bParam1, int iParam2) //Position: 0x14E2A / 85546
{
	switch (iParam2)
	{
		case 0x00000000:
			Function_419(bParam0, bParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_137(bParam0, bParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_335(bParam0, bParam1, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, bParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_444() //Position: 0x14E88 / 85640
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_UseRifleBack", "Fort02_UseRifleBack", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_445() //Position: 0x14ED7 / 85719
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_RaftFlowsDown", "Fort02_RaftFlowsDown", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14F28 / 85800
{
	var uVar0;
	bool bVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_PATH_POINT(Local_4.f_2732, bParam2, &uVar0);
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_MOUNT(false, bParam1, 0, 1, 2, 2147483647);
		TASK_SHOOT_ENEMIES_FROM_POSITION(false, &uVar0, 70.0f, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
	}
	return;
}

void Function_447(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14F75 / 85877
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(bParam1) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar3);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_364(&bVar0, bVar1, bParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_448() //Position: 0x14FF0 / 86000
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_MoreFlowsDown", "Fort02_MoreFlowsDown", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449(bool bParam0, var uParam1) //Position: 0x15041 / 86081
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
		{
			SQUAD_JOIN(GET_MOUNT(bVar1), *uParam1);
		}
		bVar0++;
	}
	return;
}

void Function_450() //Position: 0x15081 / 86145
{
	Local_4.f_648 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S1_Snipers"));
	(*&Local_4 + 588)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_1", 410, -533,3492f, 22,06974f, 3174,001f, 0.0f, 17,39186f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 588)[02], Local_4.f_648);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[02], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 588)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[02], 19);
	(*&Local_4 + 588)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_2", 406, -532,3179f, 22,07685f, 3173,5f, 0.0f, 17,34667f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 588)[12], Local_4.f_648);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 588)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[12], 41, 0,50854f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 588)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[12], 19);
	(*&Local_4 + 588)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_3", 408, -597,4387f, 126,3887f, 2682,515f, 0.0f, 225,777f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 588)[22], Local_4.f_648);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[22], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 588)[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[22], 19);
	(*&Local_4 + 588)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_4", 407, -596,7108f, 126,3887f, 2681,386f, 0.0f, 225,777f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 588)[32], Local_4.f_648);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[32], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 588)[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[32], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[32], 19);
	(*&Local_4 + 588)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "cover_sniper_6", 411, -691,4291f, 30,50838f, 3192,332f, 0.0f, -39,28607f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 588)[42], Local_4.f_648);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 588)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[42], 24, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 588)[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[42], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[42], 19);
	(*&Local_4 + 588)[52] = Function_425(Local_4, "cover_sniper_26", 407, Function_58(), 976, -534,5287f, 22,08321f, 3176,432f, 0.0f, 40,54522f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 588)[52], Local_4.f_648);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[52], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 588)[52], -1.0f, 0, 0);
	TASK_STAND_STILL((*&Local_4 + 588)[52], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[52], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[52], 19);
	(*&Local_4 + 588)[62] = Function_425(Local_4, "cover_sniper_48", 408, Function_58(), 977, -529,6265f, 21,83596f, 3181,13f, 0.0f, 45,91138f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 588)[62], Local_4.f_648);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[62], 41, 0,001f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 588)[62], -1.0f, 0, 0);
	TASK_STAND_STILL((*&Local_4 + 588)[62], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[62], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[62], 19);
	return;
}

void Function_451() //Position: 0x1546F / 87151
{
	Local_4.f_584 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "AmbushSnipers"));
	(*&Local_4 + 540)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "sniper_1", 410, -424,495f, 21,45673f, 3146,385f, 0.0f, 61,12287f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 540)[02], Local_4.f_584);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 540)[02], 12, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 540)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 540)[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[02], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 540)[02], 100.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 540)[02], 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[02], 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[02], 2, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[02], 3, false);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[02], 0);
	Function_452((*&Local_4 + 540)[02], 0, 0, 0, 1, 0, 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_4 + 540)[02], 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[02], 9, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[02], 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[02], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[02], 54, 1.0f);
	(*&Local_4 + 540)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "sniper_2", 411, -469,275f, 22,74606f, 3161,138f, 0.0f, -19,4067f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 540)[12], Local_4.f_584);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 540)[12], 12, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 540)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 540)[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[12], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 540)[12], 100.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 540)[12], 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[12], 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[12], 2, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[12], 3, false);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[12], 0);
	Function_452((*&Local_4 + 540)[12], 0, 0, 0, 1, 0, 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_4 + 540)[12], 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[12], 9, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[12], 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[12], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[12], 54, 1.0f);
	(*&Local_4 + 540)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "npistolGuy", 409, -447,5457f, 21,61139f, 3148,479f, 0.0f, 0,2700076f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 540)[22], Local_4.f_584);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 540)[22], 12, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 540)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 540)[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[22], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_4 + 540)[22], 100.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 540)[22], 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[22], 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[22], 2, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[22], 3, false);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[22], 0);
	Function_452((*&Local_4 + 540)[22], 0, 0, 0, 1, 0, 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_4 + 540)[22], 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[22], 9, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[22], 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[22], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[22], 54, 1.0f);
	(*&Local_4 + 540)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "amsHorse_2", 980, -441,2231f, 22,91322f, 3157,85f, 0.0f, 99,40668f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 540)[32], Local_4.f_584);
	TASK_STAND_STILL((*&Local_4 + 540)[32], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 540)[32], 3);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[32], 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[32], 2, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[32], 3, false);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[32], 0);
	Function_452((*&Local_4 + 540)[32], 0, 0, 0, 1, 0, 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_4 + 540)[32], 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[32], 9, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[32], 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[32], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[32], 54, 1.0f);
	(*&Local_4 + 540)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "amsHorse_3", 981, -452,6661f, 23,03213f, 3160,666f, 0.0f, 67,74175f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 540)[42], Local_4.f_584);
	TASK_STAND_STILL((*&Local_4 + 540)[42], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 540)[42], 3);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[42], 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[42], 2, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 540)[42], 3, false);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[42], 0);
	Function_452((*&Local_4 + 540)[42], 0, 0, 0, 1, 0, 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_4 + 540)[42], 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[42], 9, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[42], 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[42], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 540)[42], 54, 1.0f);
	return;
}

void Function_452(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x159E3 / 88547
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

bool Function_453() //Position: 0x15A20 / 88608
{
	Function_318(&Local_4 + 68, 96, 2, 0);
	Function_318(&Local_4 + 68, 410, 2, 0);
	Function_318(&Local_4 + 68, 411, 2, 0);
	Function_318(&Local_4 + 68, 409, 2, 0);
	Function_318(&Local_4 + 68, 980, 2, 0);
	Function_318(&Local_4 + 68, 981, 2, 0);
	if (Function_312(&Local_4 + 68))
	{
		return 1;
	}
	return 0;
}

int Function_454() //Position: 0x15A80 / 88704
{
	Function_318(&Local_4 + 144, 410, 2, 0);
	Function_318(&Local_4 + 144, 406, 2, 0);
	Function_318(&Local_4 + 144, 408, 2, 0);
	Function_318(&Local_4 + 144, 407, 2, 0);
	Function_318(&Local_4 + 144, 411, 2, 0);
	Function_318(&Local_4 + 144, 976, 2, 0);
	Function_318(&Local_4 + 144, 977, 2, 0);
	if (Function_312(&Local_4 + 144))
	{
		return 1;
	}
	return 0;
}

void Function_455() //Position: 0x15AEE / 88814
{
	Function_410();
	Function_407(Local_4.f_584);
	Function_407(Local_4.f_648);
	Function_386(Local_4.f_648, 0x42f00000);
	Function_401((*&Local_4 + 588)[42], &Local_4 + 2780, &(uLocal_872[0]), 70.0f, 2, 0x40800000);
	Function_215((*&Local_4 + 2472)[0]);
	Function_395(StackVal, StackVal, (*&Local_4 + 588)[62], Local_4.f_2592, Function_215((*&Local_4 + 2472)[0]), 20.0f);
	Function_215((*&Local_4 + 2472)[0]);
	Function_395(StackVal, StackVal, (*&Local_4 + 588)[52], Local_4.f_2588, Function_215((*&Local_4 + 2472)[0]), 20.0f);
	Function_215((*&Local_4 + 2472)[1]);
	Function_395(StackVal, StackVal, (*&Local_4 + 540)[02], Local_4.f_2700, Function_215((*&Local_4 + 2472)[1]), 20.0f);
	Function_215((*&Local_4 + 2472)[1]);
	Function_395(StackVal, StackVal, (*&Local_4 + 540)[12], Local_4.f_2696, Function_215((*&Local_4 + 2472)[1]), 20.0f);
	if (IS_VOLUME_VALID(Local_4.f_1172))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1172))
		{
			DESTROY_VOLUME(Local_4.f_1172);
			iLocal_837 = 1;
			if (IS_ACTOR_VALID((*&Local_4 + 588)[62]))
			{
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 588)[62], true);
				Function_394((*&Local_4 + 588)[62], Local_4.f_2736, Local_4.f_2592, 4, 0x41700000);
				ADD_BLIP_FOR_ACTOR((*&Local_4 + 588)[62], 322, 0, 2, 0);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 588)[52]))
			{
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 588)[52], true);
				Function_394((*&Local_4 + 588)[52], Local_4.f_2736, Local_4.f_2588, 4, 0x41700000);
				ADD_BLIP_FOR_ACTOR((*&Local_4 + 588)[52], 322, 0, 2, 0);
			}
		}
		else
		{
			if (IS_ACTOR_VALID((*&Local_4 + 588)[62]))
			{
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 588)[62], false);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 588)[52]))
			{
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 588)[52], false);
			}
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1132))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1132))
		{
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH((*&Local_4 + 540)[02], Global_34573, Local_4.f_2732, -5.0f, 1, false);
			DESTROY_VOLUME(Local_4.f_1132);
			iLocal_837 = 1;
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1136))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1136))
		{
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH((*&Local_4 + 540)[12], Global_34573, Local_4.f_2732, -5.0f, 1, false);
			DESTROY_VOLUME(Local_4.f_1136);
			iLocal_837 = 1;
		}
	}
	if (IS_VOLUME_VALID(Local_4.f_1144))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1144))
		{
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 588)[02], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2584), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 588)[12], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2572), -1.0f, 1086324736);
			if (IS_ACTOR_VALID((*&Local_4 + 588)[02]))
			{
				ADD_BLIP_FOR_ACTOR((*&Local_4 + 588)[02], 322, 0, 2, 0);
				MEMORY_CLEAR_RIDING_PREFERENCE((*&Local_4 + 540)[02]);
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 588)[02], true);
				Function_436((*&Local_4 + 540)[02], Local_4.f_2700, 4);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 588)[12]))
			{
				ADD_BLIP_FOR_ACTOR((*&Local_4 + 588)[12], 322, 0, 2, 0);
				MEMORY_ALLOW_SHOOTING((*&Local_4 + 588)[12], true);
				MEMORY_CLEAR_RIDING_PREFERENCE((*&Local_4 + 540)[12]);
				Function_436((*&Local_4 + 540)[12], Local_4.f_2696, 4);
			}
			DESTROY_VOLUME(Local_4.f_1144);
			iLocal_837 = 1;
		}
		else
		{
			MEMORY_ALLOW_SHOOTING((*&Local_4 + 588)[02], false);
			MEMORY_ALLOW_SHOOTING((*&Local_4 + 588)[12], false);
		}
	}
	return;
}

void Function_456() //Position: 0x15E1F / 89631
{
	if (iLocal_730 < 3 && iLocal_730 > 105)
	{
		Function_416();
		Function_359();
		Function_355();
		Function_386(Local_4.f_648, 0x42f00000);
		if (!Function_342(bLocal_755, (*&Local_4 + 916)[02], 7.0f))
		{
			KILL_ACTOR(bLocal_755);
		}
		if (!iLocal_838)
		{
			if ((((EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_866) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_867)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_868)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_869)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_870))
			{
				Function_234("Fort02_shotRope");
				Function_490();
				bLocal_739 = true;
			}
		}
		if (iLocal_730 == 106 && iLocal_730 == 13)
		{
			Function_487();
		}
		if (iLocal_730 == 95 && iLocal_730 > 10)
		{
			if (Function_485(Local_4.f_584, Global_34573, 0, 1))
			{
				Function_483();
				Function_228(&bLocal_810);
				iLocal_730 = 10;
			}
		}
	}
	switch (iLocal_730)
	{
		case 0x00000000:
			Function_326(0);
			iLocal_838 = 0;
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_755, false);
			iLocal_841 = 0;
			bLocal_847 = 2.0f;
			Function_325(Global_30633[1]);
			SET_ACTOR_HEALTH(bLocal_755, GET_ACTOR_MAX_HEALTH(bLocal_755));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_322();
			Function_376(&Local_748);
			bLocal_757 = Function_321(StackVal, StackVal, *(&Local_4 + 1300[06]), 0, 1, 1);
			STREAMING_LOAD_BOUNDS(*(&Local_4 + 1300[26]), 20.0f, 0);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1300[06]), 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_755, *(&Local_4 + 1300[16]), 1, true, 1);
			Function_228(&bLocal_810);
			iLocal_730 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_319(bLocal_757) || bLocal_757 != 4294967295))
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Local_4 + 1300[26]), 20.0f))
				{
					if (Function_453())
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_4 + 916)[02], *(&Local_4 + 1300[36]), 1, true, 1);
						SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02]), true);
						Function_228(&bLocal_810);
						iLocal_730 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_353(StackVal, StackVal, (*&Local_4 + 916)[02], *(&Local_4 + 1300[36]), 5.0f))
			{
				Function_240(iLocal_729);
				Function_291(StackVal, StackVal, Function_240(iLocal_729), iLocal_729, Global_30633[1], Function_242(iLocal_729), 0);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02]), true);
				TOGGLE_COVER_PROPS(0);
				TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 916)[02], 0,373f, 0,324f, -1,793f, 0.0f, 0.0f, 0.0f, 1065353216);
				TELEPORT_OBJECT_TO_OBJECT(bLocal_755, (*&Local_4 + 916)[02], -1,293f, 0,324f, -1,685f, 0.0f, 0.0f, 0.0f, 1065353216);
				ATTACH_OBJECTS(bLocal_755, (*&Local_4 + 916)[02], "", -1,293f, 0,324f, -1,685f, 0.0f, 10.0f, 0.0f, 4294967295);
				Function_482();
				ATTACH_OBJECTS(bLocal_861, (*&Local_4 + 916)[02], "", -1,393f, 1,324f, -1,685f, 0.0f, 0.0f, 0.0f, 4294967295);
				SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_4 + 916)[02], bLocal_861, false);
				SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_861, (*&Local_4 + 916)[02], false);
				Function_481();
				Function_451();
				Function_480(Local_4.f_728, 70.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_584, false, 1, 4294967295);
				TASK_CROUCH(false, -1.0f);
				Function_365(Local_4.f_584, 0);
				ENABLE_VEHICLE_SEAT((*&Local_4 + 916)[02], false, 0);
				bLocal_866 = CREATE_EVENT_TRAP("shootRope1", 5, Local_4);
				bLocal_867 = CREATE_EVENT_TRAP("shootRope2", 5, Local_4);
				bLocal_868 = CREATE_EVENT_TRAP("shootRope3", 5, Local_4);
				bLocal_869 = CREATE_EVENT_TRAP("shootRope4", 5, Local_4);
				bLocal_870 = CREATE_EVENT_TRAP("shootRope5", 5, Local_4);
				EVENT_TRAP_ON_TARGET(bLocal_866, bLocal_854[0]);
				EVENT_TRAP_ON_TARGET(bLocal_867, bLocal_854[1]);
				EVENT_TRAP_ON_TARGET(bLocal_868, bLocal_854[2]);
				EVENT_TRAP_ON_TARGET(bLocal_869, bLocal_854[3]);
				EVENT_TRAP_ON_TARGET(bLocal_870, bLocal_854[4]);
				SET_ANIM_SET_FOR_ACTOR(bLocal_755, "npull_raft", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_755, "npull_raft");
				SET_REACT_NODE_FOR_ACTOR(bLocal_755, "npull_raft");
				SET_ACTOR_INVULNERABILITY(bLocal_755, true);
				bLocal_847 = 2.0f;
				TASK_GO_TO_COORD((*&Local_4 + 916)[02], &Local_4 + 2324, 2);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 916)[02], bLocal_847);
				Function_368((*&Local_4 + 916)[02], 0.0f, 0.0f, 0.0f);
				Function_297(&(Local_921[017]), bLocal_755, "Outlaw", 1, 0x5f5e100, 1);
				Function_392(&(Local_921[117]), 2);
				iLocal_835 = 0;
				Function_228(&bLocal_810);
				iLocal_730 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_470())
			{
				if (Function_287(&Local_748))
				{
					LEASH_DETACH_OBJECT(bLocal_854[0], 1);
					LEASH_ATTACH_TO_OBJECT(bLocal_854[0], (*&Local_703 + 48)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
				}
				Function_469(1,5f, RAND_FLOAT_RANGE(0.0f, 360.0f));
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02]), false);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_228(&bLocal_810);
				iLocal_730 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				Function_468();
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_228(&bLocal_810);
				iLocal_730 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_353(StackVal, StackVal, (*&Local_4 + 916)[02], *(&Local_4 + 2324), 10.0f) || Function_485(Local_4.f_584, Global_34573, 0, 1))
			{
				Function_483();
				Function_467(StackVal, StackVal, *(&Local_4 + 2520), 1);
				Function_228(&bLocal_810);
				iLocal_730 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_279(&bLocal_810) < 1,1f)
			{
				iLocal_838 = 1;
				Function_467(StackVal, StackVal, *(&Local_4 + 2520), 0);
				Function_466();
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				TASK_OVERRIDE_CLEAR_POSTURE((*&Local_4 + 540)[02]);
				TASK_OVERRIDE_CLEAR_POSTURE((*&Local_4 + 540)[12]);
				if (IS_ACTOR_ALIVE((*&Local_4 + 540)[02]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 540)[02], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2576), -1.0f, 1086324736);
				}
				if (IS_ACTOR_ALIVE((*&Local_4 + 540)[12]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 540)[12], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2580), -1.0f, 1086324736);
				}
				if (IS_ACTOR_ALIVE((*&Local_4 + 540)[22]))
				{
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 540)[22], &Local_4 + 2396, 3212836864);
					TASK_PRIORITY_SET((*&Local_4 + 540)[22], true);
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				GIVE_WEAPON_TO_ACTOR(bLocal_755, 22, false, 1, 1);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_755, "pull_raft/pull_raft_pst");
				SET_REACT_NODE_FOR_ACTOR(bLocal_755, "pull_raft/pull_raft_pst");
				GET_OBJECT_AXIS((*&Local_4 + 916)[02], &vLocal_863, 0);
				VSCALE(&vLocal_863, -1.0f);
				SET_ACTOR_HEADING(bLocal_755, UNK_0x9C40E671(&vLocal_863), 1);
				Function_465();
				Function_464(Local_4.f_584, 1, 1, 1);
				Function_437(Local_4.f_584, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 540)[32])))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 540)[32]));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 540)[42])))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 540)[42]));
				}
				Function_370(Local_4.f_584, bLocal_755, 2);
				Function_228(&bLocal_810);
				iLocal_730 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_454();
			if (Function_279(&bLocal_810) <= 4.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_463();
				AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
				Function_370(Local_4.f_584, Global_34573, 4);
				Function_228(&bLocal_810);
				iLocal_730 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_279(&bLocal_810) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_462();
				Function_228(&bLocal_810);
				iLocal_730 = 13;
			}
			break;
		
		case 0x0000000D:
			if (DECOR_CHECK_EXIST(bLocal_755, "bCutRope"))
			{
				DESTROY_OBJECT(bLocal_854[1]);
				DESTROY_OBJECT(bLocal_854[2]);
				DESTROY_OBJECT(bLocal_854[3]);
				LEASH_SET_LEASH_LENGTH(bLocal_854[4], 60.0f);
				LEASH_SET_CONSTRAINT_LENGTH(bLocal_854[4], 60.0f);
				LEASH_DETACH_OBJECT(bLocal_854[0], 1);
				LEASH_DETACH_OBJECT(bLocal_854[4], 0);
				TASK_FOLLOW_PATH((*&Local_4 + 916)[02], Local_4.f_2728, 2, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 916)[02], 2.0f);
				Function_228(&bLocal_810);
				iLocal_730 = 14;
			}
			break;
		
		case 0x0000000E:
			if (DECOR_CHECK_EXIST(bLocal_755, "bRemoveAttach"))
			{
				DECOR_REMOVE(bLocal_755, "bRemoveAttach");
				Function_252();
				iLocal_846 = 2;
				Function_367();
				Function_228(&bLocal_810);
				iLocal_730 = 15;
			}
			break;
		
		case 0x0000000F:
			if (!IS_ACTION_NODE_PLAYING(bLocal_755, "pull_raft/pull_raft_pst"))
			{
				if (!ACTOR_HAS_ANIM_SET(bLocal_755, "nirish_ptl"))
				{
					SET_ANIM_SET_FOR_ACTOR(bLocal_755, "nirish_ptl", 1);
				}
				SET_ACTOR_INVULNERABILITY(bLocal_755, false);
				RESET_REACT_NODE_FOR_ACTOR(bLocal_755);
				Function_228(&bLocal_810);
				iLocal_730 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_279(&bLocal_810) <= 1.0f)
			{
				Function_461();
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "GUNFIGHT_2", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_228(&bLocal_810);
				iLocal_730 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_362(bLocal_755, Local_703.f_24, 1.0f) || Function_279(&bLocal_810) <= 5.0f)
			{
				Function_460(Local_4.f_584, 13, 0);
				Function_457();
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_755, true);
				iLocal_758[0] = 1;
				Function_228(&bLocal_810);
				iLocal_729 = 1;
				iLocal_730 = 0;
			}
			break;
		
		case 0x0000005F:
			if (Function_279(&bLocal_810) <= 6.0f)
			{
				bLocal_739 = true;
			}
			break;
	}
	return;
}

void Function_457() //Position: 0x16807 / 92167
{
	Function_459(Local_703.f_44);
	Function_458();
	return;
}

void Function_458() //Position: 0x16818 / 92184
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (bLocal_854 - 1))
	{
		if (IS_OBJECT_VALID(bLocal_854[iVar0]))
		{
			DESTROY_OBJECT(bLocal_854[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_459(bool bParam0) //Position: 0x1684E / 92238
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

void Function_460(bool bParam0, int iParam1, bool bParam2) //Position: 0x16893 / 92307
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

void Function_461() //Position: 0x168DD / 92381
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort02_BanditYells1", "Fort02_BanditYells1", false, 2, 1, 0, 1);
		Function_332(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462() //Position: 0x1692C / 92460
{
	bool bVar0;
	
	DESTROY_OBJECT(bLocal_854[1]);
	Function_215((*&Local_703 + 48)[1]);
	Function_215((*&Local_703 + 48)[3]);
	bVar0 = VDIST(Function_215((*&Local_703 + 48)[1]), Function_215((*&Local_703 + 48)[3]));
	bVar0 = (bVar0 - 0,5f);
	bLocal_854[1] = CREATE_LEASH_OBJECT((*&Local_4 + 916)[02], Function_58(), bVar0, 3, 1, 0,018f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[1], (*&Local_703 + 48)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[1], (*&Local_703 + 48)[3], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
	LEASH_STAY_CONSTRAINED(bLocal_854[1], 1);
	Function_215((*&Local_703 + 48)[3]);
	Function_215((*&Local_703 + 48)[4]);
	bVar0 = VDIST(Function_215((*&Local_703 + 48)[3]), Function_215((*&Local_703 + 48)[4]));
	bLocal_854[2] = CREATE_LEASH_OBJECT((*&Local_4 + 916)[02], Function_58(), bVar0, 3, 1, 0,018f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[2], (*&Local_703 + 48)[3], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[2], (*&Local_703 + 48)[4], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
	LEASH_STAY_CONSTRAINED(bLocal_854[2], 1);
	return;
}

void Function_463() //Position: 0x16A75 / 92789
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Fort02_CutRaftFree", "Fort02_CutRaftFree", true, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_464(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x16AC2 / 92866
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_452(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, iParam2, bParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_465() //Position: 0x16AF8 / 92920
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_BanditsShootRaft", "Fort02_BanditsShootRaft", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x16B4F / 93007
{
	bool bVar0;
	
	Function_458();
	Function_215((*&Local_703 + 48)[0]);
	Function_215((*&Local_703 + 48)[1]);
	bVar0 = VDIST(Function_215((*&Local_703 + 48)[0]), Function_215((*&Local_703 + 48)[1]));
	bLocal_854[0] = CREATE_LEASH_OBJECT((*&Local_4 + 916)[02], Function_58(), bVar0, 11, 1, 0,018f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[0], (*&Local_703 + 48)[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[0], (*&Local_703 + 48)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
	Function_215((*&Local_703 + 48)[1]);
	Function_215((*&Local_703 + 48)[4]);
	bVar0 = VDIST(Function_215((*&Local_703 + 48)[1]), Function_215((*&Local_703 + 48)[4]));
	bLocal_854[1] = CREATE_LEASH_OBJECT((*&Local_4 + 916)[02], Function_58(), bVar0, 11, 1, 0,018f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[1], (*&Local_703 + 48)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[1], (*&Local_703 + 48)[4], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
	Function_215((*&Local_703 + 48)[4]);
	Function_215((*&Local_703 + 48)[5]);
	bVar0 = VDIST(Function_215((*&Local_703 + 48)[4]), Function_215((*&Local_703 + 48)[5]));
	bLocal_854[3] = CREATE_LEASH_OBJECT((*&Local_4 + 916)[02], Function_58(), bVar0, 11, 1, 0,018f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[3], (*&Local_703 + 48)[4], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	LEASH_ATTACH_TO_OBJECT(bLocal_854[3], (*&Local_703 + 48)[5], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
	LEASH_STAY_CONSTRAINED(bLocal_854[0], 1);
	LEASH_STAY_CONSTRAINED(bLocal_854[1], 1);
	LEASH_STAY_CONSTRAINED(bLocal_854[2], 1);
	LEASH_STAY_CONSTRAINED(bLocal_854[3], 1);
	return;
}

void Function_467(vector3 vParam0, bool bParam3) //Position: 0x16D2E / 93486
{
	vector3 vVar0;
	struct<5> Var3;
	
	GET_POSITION((*&Local_4 + 916)[02], &Var3);
	GET_ACTOR_AXIS((*&Local_4 + 916)[02], &vVar0, 0);
	VSCALE(&vVar0, RAND_FLOAT_RANGE(0,25f, 1,1f));
	Var3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, Var3, StackVal) };
	GET_ACTOR_AXIS((*&Local_4 + 916)[02], &vVar0, 2);
	VSCALE(&vVar0, RAND_FLOAT_RANGE(0,15f, 0,4f));
	VSCALE(&vVar0, -1.0f);
	Var3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, Var3, StackVal) };
	if (bParam3)
	{
		Var3.f_4 = (StackVal + 1,85f);
	}
	PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_HI_POWER_MASTER", vParam0);
	FIRE_PROJECTILE(false, "base_sniperrifle", 0,0001f, &vParam0, &Var3);
}

void Function_468() //Position: 0x16E02 / 93698
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Fort02_BanterRaft_v1_AA", "Fort02_BanterRaft_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_BanterRaft_v1_AB", "Fort02_BanterRaft_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_BanterRaft_v1_AC", "Fort02_BanterRaft_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_BanterRaft_v1_AD", "Fort02_BanterRaft_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_BanterRaft_v1_AE", "Fort02_BanterRaft_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_BanterRaft_v1_AF1", "Fort02_BanterRaft_v1_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_BanterRaft_v1_AF2", "Fort02_BanterRaft_v1_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_BanterRaft_v1_AG", "Fort02_BanterRaft_v1_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_BanterRaft_v1_AH", "Fort02_BanterRaft_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_BanterRaft_v1_AI", "Fort02_BanterRaft_v1_AI", true, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_469(float fParam0, bool bParam1) //Position: 0x17082 / 94338
{
	Global_16517.f_8 = fParam0;
	Global_16517.f_12 = bParam1;
	Global_16517.f_16 = 1;
	return;
}

bool Function_470() //Position: 0x1709C / 94364
{
	Function_288(&Local_731, 1);
	switch (Local_731)
	{
		case 0x000003E8:
			if (Function_287(&Local_748) || Local_748.f_24 < 1)
			{
				Local_731 = 1106;
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/FORT_02/FORT_02"))
			{
				LOG_ERROR("Cutscene file does not exist!");
				Local_731 = 1106;
			}
			else
			{
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				Local_731.f_20 = CREATE_VOLUME_IN_LAYOUT(bLocal_728, "cut1Vol", 2, *(&Global_3422[2540] + 52), 0.0f, 0.0f, 0.0f, 100.0f, 50.0f, 100.0f);
				Function_282(StackVal, StackVal, bLocal_728, *(&Global_3422[2540] + 52), &Local_731 + 20, 1, 0, 0, 0, 1, 1);
				Function_322();
				Function_187(1, 0, 1);
				Global_63097 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/FORT_02/FORT_02", 0, 2, 1, 2, 2);
				Function_318(&bLocal_798, 96, 2, 0);
				Function_478(&bLocal_798, "throw_lantern01x", 0, 0);
				Function_228(&Local_731 + 4);
				Local_731 = 1002;
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_279(&Local_731 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_731 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (Function_312(&bLocal_798))
				{
					Global_63097 = 0;
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					Function_228(&Local_731 + 4);
					Local_731 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (!IS_ACTOR_VALID(bLocal_979))
			{
				bLocal_979 = CREATE_ACTOR_IN_LAYOUT(bLocal_728, "introDocksGuy", 96, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				TASK_STAND_STILL(bLocal_979, -1.0f, 0, 0);
			}
			if (IS_ACTOR_VALID(bLocal_755))
			{
				if (!Function_353(StackVal, StackVal, bLocal_755, *(&Local_4 + 1300[16]), 3.0f))
				{
					TELEPORT_ACTOR(bLocal_755, &Local_4 + 1300[16], 1, 1, 1);
					TASK_STAND_STILL(bLocal_755, -1.0f, 0, 0);
				}
			}
			Function_477();
			Function_312(&bLocal_764);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_228(&Local_731 + 4);
				Local_731 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				bLocal_854[0] = CREATE_LEASH_OBJECT(bLocal_728, Function_58(), Function_476(Local_4.f_2392, Local_4.f_2388), 8, 1, 0,018f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				LEASH_ATTACH_TO_OBJECT(bLocal_854[0], Local_4.f_2392, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
				LEASH_ATTACH_TO_OBJECT(bLocal_854[0], Local_4.f_2388, 0.0f, 1,1f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
				Function_472();
				if (IS_ACTOR_VALID((*&Local_4 + 916)[02]))
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02]), false);
				}
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x000003ED:
			if (IS_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02])))
			{
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 916)[02]), false);
			}
			if (Function_279(&Local_731 + 4) <= 3.0f)
			{
				Function_207();
				Local_731 = 1006;
			}
			break;
		
		case 0x000003EE:
			Function_487();
			if (Function_279(&Local_731 + 4) <= 8.0f)
			{
				Local_731 = 1007;
			}
			break;
		
		case 0x000003EF:
			Function_487();
			if (iLocal_730 != 3 && iLocal_729 != 0)
			{
				Local_731 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (iLocal_730 != 3 && iLocal_729 != 0)
				{
					AI_STOP_IGNORING_ACTORS();
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_731.f_20);
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_731.f_20);
					DESTROY_VOLUME(Local_731.f_20);
					Function_471(0, 1);
					if (IS_ACTOR_VALID(bLocal_979))
					{
						DESTROY_ACTOR(bLocal_979);
					}
					Function_276(2, 0, 1, 1, 1, 0, 0, 1, 1, 1);
					iLocal_834 = 0;
					Local_731 = 1000;
				}
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				Local_731 = 1104;
			}
			break;
		
		case 0x00000452:
			Local_731 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_471(bool bParam0, bool bParam1) //Position: 0x17515 / 95509
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

void Function_472() //Position: 0x17561 / 95585
{
	Function_475(bLocal_728, 43.0f, 1, 0.0f, 5.0f, 1, 7, 0, 0, 0, 0, 0, 0, 0);
	Function_473(-490,979f, 20,218f, 3049,918f, 0,329f, 0,097f, 0,939f, 0x40a00000, 0, 1);
	return;
}

void Function_473(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, var uParam8) //Position: 0x175A6 / 95654
{
	Function_474(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
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

void Function_474(bool bParam0) //Position: 0x17695 / 95893
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_475(bool bParam0, float fParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0x176A6 / 95910
{
	Function_471(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 2, 1);
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

var Function_476(bool bParam0, bool bParam1) //Position: 0x1777F / 96127
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_361(bParam0);
			vVar0 = { StackVal, StackVal, Function_361(bParam0) };
			Function_361(bParam1);
			vVar3 = { StackVal, StackVal, Function_361(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

bool Function_477() //Position: 0x1781A / 96282
{
	Function_318(&Local_4 + 4, 1190, 2, 0);
	Function_478(&Local_4 + 4, "p_gen_crate02x", 0, 0);
	Function_478(&Local_4 + 4, "p_gen_crate01x", 0, 0);
	Function_478(&Local_4 + 4, "p_gen_crateTnt01x", 0, 0);
	Function_478(&Local_4 + 4, "p_gen_torch01x", 0, 0);
	if (Function_312(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_478(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x178A9 / 96425
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_479(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_315(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_479(var uParam0, int iParam1, int iParam2) //Position: 0x178E1 / 96481
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_180(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_315(uParam0[iVar03], 4);
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

void Function_480(bool bParam0, bool bParam1) //Position: 0x179A5 / 96677
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
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

void Function_481() //Position: 0x179FE / 96766
{
	char* cVar0[16];
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	bVar4 = false;
	DESTROY_OBJECT(bLocal_854[0]);
	ATTACH_OBJECTS((*&Local_703 + 48)[5], Local_4.f_2388, Function_58(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	ATTACH_OBJECTS((*&Local_703 + 48)[3], bLocal_755, "wrist_l_Attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	ATTACH_OBJECTS((*&Local_703 + 48)[2], bLocal_755, "wrist_r_Attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	ATTACH_OBJECTS((*&Local_703 + 48)[0], Local_4.f_2392, Function_58(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	iVar5 = 3;
	bVar4 = false;
	while (bVar4 < (Local_703.f_48 - 2))
	{
		strcpy(&cVar0, "segment_", 16);
		straddi(&cVar0, bVar4, 16);
		Function_215((*&Local_703 + 48)[bVar4]);
		Function_215((*&Local_703 + 48)[bVar4 + 1]);
		bVar6 = VDIST(Function_215((*&Local_703 + 48)[bVar4]), Function_215((*&Local_703 + 48)[bVar4 + 1]));
		if (bVar6 < 10.0f)
		{
			iVar5 = 11;
		}
		else
		{
			iVar5 = 3;
		}
		bLocal_854[bVar4] = CREATE_LEASH_OBJECT((*&Local_4 + 916)[02], &cVar0, bVar6, iVar5, 1, 0,018f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
		LEASH_ATTACH_TO_OBJECT(bLocal_854[bVar4], (*&Local_703 + 48)[bVar4], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
		LEASH_ATTACH_TO_OBJECT(bLocal_854[bVar4], (*&Local_703 + 48)[bVar4 + 1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1);
		LEASH_STAY_CONSTRAINED(bLocal_854[bVar4], 1);
		PRINTSTRING("created rope segnent ");
		PRINTINT(bVar4);
		PRINTSTRING(" with len ");
		PRINTFLOAT(bVar6);
		PRINTNL();
		bVar4++;
	}
	return;
}

void Function_482() //Position: 0x17BBD / 97213
{
	bLocal_861 = CREATE_PROP_IN_LAYOUT(Local_703, "oIrishBoundBlocker", "raftBlockerBounds03x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_861, bLocal_755, false);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_755, bLocal_861, false);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_861, (*&Local_4 + 916)[02], false);
	SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_4 + 916)[02], bLocal_861, false);
	return;
}

void Function_483() //Position: 0x17C31 / 97329
{
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_NARROWLY_MISSED");
	Function_365(Local_4.f_584, 1);
	Function_363(Local_4.f_584, bLocal_755, 1);
	Function_363(Local_4.f_584, Global_34573, 1);
	Function_447(Local_4.f_584, Local_4.f_536, 1);
	Function_480(Local_4.f_584, 100.0f);
	Function_484((*&Local_4 + 540)[02], (*&Local_4 + 916)[02]);
	Function_484((*&Local_4 + 540)[12], (*&Local_4 + 916)[02]);
	Function_484((*&Local_4 + 540)[22], (*&Local_4 + 916)[02]);
	Function_460(Local_4.f_584, 13, 1);
	TASK_OVERRIDE_SET_POSTURE((*&Local_4 + 540)[02], true);
	TASK_OVERRIDE_SET_POSTURE((*&Local_4 + 540)[12], true);
	iLocal_838 = 1;
	SQUAD_GOALS_CLEAR(Local_4.f_584);
	return;
}

void Function_484(bool bParam0, bool bParam1) //Position: 0x17CF7 / 97527
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &uVar0);
	return;
}

bool Function_485(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17D0D / 97549
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
		if (Function_486(bVar1, bParam1, bParam2, bParam3) || Function_486(bVar2, bParam1, bParam2, bParam3))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_486(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17D5F / 97631
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

void Function_487() //Position: 0x17DA6 / 97702
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	int iVar11;
	
	fVar10 = -0,01f;
	Function_489(bLocal_755, (*&Local_703 + 48)[3], (*&Local_703 + 48)[2], (*&Local_703 + 48)[1]);
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 < (Local_703.f_48 - 2))
	{
		Function_215((*&Local_703 + 48)[iVar11]);
		vVar0 = { StackVal, StackVal, Function_215((*&Local_703 + 48)[iVar11]) };
		Function_215((*&Local_703 + 48)[iVar11 + 1]);
		vVar3 = { StackVal, StackVal, Function_215((*&Local_703 + 48)[iVar11 + 1]) };
		bVar9 = VDIST(vVar0, vVar3);
		bVar9 = (bVar9 + (bVar9 * fVar10));
		LEASH_SET_LEASH_LENGTH(bLocal_854[iVar11], bVar9);
		Function_488(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3);
		Var6 = { StackVal, StackVal, Function_488(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3) };
		Var6.f_4 = (StackVal + 0,2f);
		iVar11++;
	}
	iVar11 = 0;
	while (iVar11 < (Local_703.f_48 - 1))
	{
		Function_215((*&Local_703 + 48)[iVar11]);
		vVar0 = { StackVal, StackVal, Function_215((*&Local_703 + 48)[iVar11]) };
		iVar11++;
	}
	return;
}

vector3 Function_488(vector3 vParam0, vector3 vParam3) //Position: 0x17E77 / 97911
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam3, vParam0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f) };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam3, vVar0, StackVal) };
	return StackVal, StackVal, vVar0;
}

void Function_489(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x17EAC / 97964
{
	uParam3 = uParam3;
	if (!DECOR_CHECK_EXIST(bParam0, "niRopeHand"))
	{
		DECOR_SET_INT(bParam0, "niRopeHand", false);
	}
	if (DECOR_CHECK_EXIST(bParam0, "b_holdRope_L") && DECOR_CHECK_EXIST(bParam0, "b_holdRope_R"))
	{
		if (DECOR_GET_INT(bParam0, "niRopeHand") != 0)
		{
			DECOR_SET_INT(bParam0, "niRopeHand", false);
			REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bParam2));
			ATTACH_OBJECTS(bParam2, bParam0, "wrist_r_Attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "b_holdRope_L") && DECOR_CHECK_EXIST(bParam0, "b_holdRope_R"))
	{
		if (DECOR_GET_INT(bParam0, "niRopeHand") != 1)
		{
			DECOR_SET_INT(bParam0, "niRopeHand", true);
		}
	}
	else if (DECOR_CHECK_EXIST(bParam0, "b_holdRope_L") && !DECOR_CHECK_EXIST(bParam0, "b_holdRope_R"))
	{
		if (DECOR_GET_INT(bParam0, "niRopeHand") != 2)
		{
			DECOR_SET_INT(bParam0, "niRopeHand", 2);
			REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bParam2));
			ATTACH_OBJECTS(bParam2, bParam1, Function_58(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		}
	}
	else if (DECOR_GET_INT(bParam0, "niRopeHand") != 3)
	{
		DECOR_SET_INT(bParam0, "niRopeHand", 3);
		REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bParam2));
		ATTACH_OBJECTS(bParam2, bParam1, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
}

void Function_490() //Position: 0x18073 / 98419
{
	TASK_STAND_STILL(bLocal_755, -1.0f, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_755, 1);
	LEASH_DETACH_OBJECT(bLocal_854[1], 1);
	DESTROY_OBJECT(bLocal_854[2]);
	return;
}

void Function_491() //Position: 0x1809D / 98461
{
	switch (iLocal_730)
	{
		case 0x00000006:
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_533(&Local_748, 1);
			bLocal_728 = CREATE_LAYOUT(Function_58());
			Function_532();
			Function_469(0,5f, RAND_FLOAT_RANGE(0.0f, 360.0f));
			Function_530(2, 0, 0, 10, 0);
			vLocal_863 = { 0.0f, 0.0f, 0.0f };
			TELEPORT_ACTOR(bLocal_756, &vLocal_863, 1, 1, 1);
			TASK_STAND_STILL(bLocal_756, -1.0f, 0, 0);
			Local_731 = 1000;
			iLocal_730 = 7;
			break;
		
		case 0x00000007:
			if (Local_731 != 1004 || Function_470())
			{
				iLocal_730 = 8;
			}
			break;
		
		case 0x00000008:
			Function_470();
			if (Function_513())
			{
				Function_510();
				iLocal_730 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_470() || Local_731 != 1005)
			{
				if (IS_LAYOUTREF_VALID(Local_4))
				{
					bLocal_809 = CREATE_OBJECT_ITERATOR(Local_4);
				}
				CAMERA_RESET(0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				RESET_ACTOR_GAITS(bLocal_755, 0);
				SET_CRIPPLE_ENABLE(bLocal_755, 0);
				SET_ACTOR_FACTION(bLocal_755, 20);
				TASK_PRIORITY_SET(bLocal_755, true);
				TASK_STAND_STILL(bLocal_755, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_755, 0, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_755, 13, true);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_755, 104, 0);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_755, true);
				SET_ACTOR_MAX_HEALTH(bLocal_755, 90.0f);
				SET_ACTOR_HEALTH(bLocal_755, 200.0f);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_755);
				RESET_ACTOR_GAITS(bLocal_756, 0);
				TASK_PRIORITY_SET(bLocal_756, true);
				TASK_STAND_STILL(bLocal_756, -1.0f, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_756, 50.0f);
				SET_ACTOR_HEALTH(bLocal_756, GET_ACTOR_MAX_HEALTH(bLocal_756));
				SET_WEAPONENUM_LOCKED(12, 0);
				SET_WEAPONENUM_LOCKED(24, 0);
				SET_WEAPONENUM_LOCKED(23, 0);
				LIQUID_TEST_SET_VELOCITY_SCALE(0.0f);
				Function_375(&bLocal_810);
				Function_375(&bLocal_813);
				Function_375(&bLocal_816);
				Function_375(&bLocal_819);
				Function_375(&bLocal_825);
				iLocal_844 = 0;
				Function_508(&uLocal_881, bLocal_728);
				SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
				Function_504();
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_755, 1.0f);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_755, 0);
				ALLOW_TUMBLEWEEDS(0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_755, true);
				Function_340(0, 0, 1);
				iLocal_730 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_501((*&Local_4 + 916)[02]))
			{
				Function_500();
				iLocal_729 = 0;
				iLocal_730 = 0;
				Function_498(&Local_748, &iLocal_729, &iLocal_730);
				Function_497();
				if (!ACTOR_HAS_WEAPON(Global_34573, 12))
				{
					bLocal_862 = Function_496(Local_703, 12, Local_703.f_40, 0, 10, 1.0f, 0, 3212836864);
					ATTACH_OBJECTS(bLocal_862, Local_703.f_40, Function_58(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				}
				if (iLocal_729 > 1)
				{
					if (!ACTOR_HAS_ANIM_SET(bLocal_755, "nirish_ptl"))
					{
						SET_ANIM_SET_FOR_ACTOR(bLocal_755, "nirish_ptl", 1);
					}
				}
				bLocal_879 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "spareHorsesSquad"));
				LIQUID_TEST_SET_VELOCITY_SCALE(0.0f);
				Function_219(0);
				Function_495(80.0f);
				iLocal_837 = 0;
				iLocal_845 = 0;
				iLocal_846 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_FORT02", &uLocal_878);
				ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 5, 0);
				Function_494(StackVal, StackVal, StackVal, StackVal, StackVal, Function_510(), Local_748);
				Function_492();
			}
			break;
	}
	return;
}

void Function_492() //Position: 0x183A2 / 99234
{
	switch (iLocal_729)
	{
		case 0x00000000:
		case 0x00000063:
			Function_469(0,5f, RAND_FLOAT_RANGE(0.0f, 360.0f));
			Function_530(2, 0, 0, 10, 0);
			Function_493(0.0f);
			break;
		
		default:
			Function_469(1,5f, RAND_FLOAT_RANGE(0.0f, 360.0f));
			Function_530(2, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_493(int iParam0) //Position: 0x183F9 / 99321
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_494(struct<25> Param0) //Position: 0x1840E / 99342
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_729 = 0;
			break;
		
		case 0x0000000A:
			iLocal_729 = 101;
			break;
	}
}

void Function_495(bool bParam0) //Position: 0x1843A / 99386
{
	if (Global_8722 < 0,1f)
	{
		return;
	}
	Global_8722 = bParam0;
	return;
}

var Function_496(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, int iParam7) //Position: 0x18452 / 99410
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

void Function_497() //Position: 0x184D0 / 99536
{
	switch (iLocal_729)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			break;
		
		default:
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			break;
	}
	return;
}

void Function_498(int iParam0, var uParam1, var uParam2) //Position: 0x18506 / 99590
{
	if (Function_287(iParam0))
	{
		*uParam1 = Function_308(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*uParam2 = 0;
		}
		Function_499();
	}
	return;
}

void Function_499() //Position: 0x1853A / 99642
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

void Function_500() //Position: 0x1858B / 99723
{
	if (IS_OBJECT_VALID(Local_703.f_96))
	{
		if (!iLocal_840)
		{
			SET_OBJECT_COLLIDE_WITH_OBJECT(Local_703.f_96, (*&Local_4 + 916)[02], false);
			iLocal_840 = 1;
		}
	}
	return;
}

bool Function_501(int iParam0) //Position: 0x185B8 / 99768
{
	var uVar0;
	
	Function_503(3, 2);
	uVar0 = uVar0;
	Function_478(&Local_703 + 4, "p_gen_crateMultiplayerAmmoFull01x", 0, 0);
	if (!Function_312(&Local_703 + 4))
	{
		return 0;
	}
	Local_703 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_58()));
	Local_703.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_703, "nVolOnRaft", 2, 0.0f, 1,904086f, -0,1696359f, 0.0f, 0.0f, 0.0f, 4,297637f, 4,883924f, 10,50905f);
	Local_703.f_24 = CREATE_POINT_IN_LAYOUT(Local_703, "outlawSpawn", 0,09132823f, 0,3050971f, 1,761046f, 0.0f, 90,49936f, 0.0f);
	Local_703.f_28 = CREATE_POINT_IN_LAYOUT(Local_703, "playerSpawn", -0,2105147f, 0,3050971f, -1,807461f, 0.0f, 1,919207f, 0.0f);
	Local_703.f_32 = CREATE_POINT_IN_LAYOUT(Local_703, "outlawPull", -1,293815f, 0,3050971f, -1,685432f, 0.0f, 0,1587292f, 0.0f);
	Local_703.f_36 = CREATE_POINT_IN_LAYOUT(Local_703, "outlawShoot", -0,4410188f, 0,3050971f, 1,765685f, 0.0f, 90,49936f, 0.0f);
	Local_703.f_40 = CREATE_POINT_IN_LAYOUT(Local_703, "riflePickup", -1,193f, 1,243f, 0,055f, -23,541f, 0,153f, 90.0f);
	Local_703.f_44 = CREATE_OBJECTSET_IN_LAYOUT("ropePointsSet", Local_703, 8, 0);
	(*&Local_703 + 48)[0] = CREATE_POINT_IN_LAYOUT(Local_703, "farDock", -1,474332f, 0,3200568f, -9,023594f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_703 + 48)[0], Local_703.f_44);
	(*&Local_703 + 48)[1] = CREATE_POINT_IN_LAYOUT(Local_703, "raftPulley_front", -1,619711f, 1,564806f, -2,80635f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_703 + 48)[1], Local_703.f_44);
	(*&Local_703 + 48)[2] = CREATE_POINT_IN_LAYOUT(Local_703, "outlaw_hand_R", -1,651318f, 1,564806f, 2,476081f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_703 + 48)[2], Local_703.f_44);
	(*&Local_703 + 48)[3] = CREATE_POINT_IN_LAYOUT(Local_703, "outlaw_hand_L", -1,651318f, 1,564806f, 2,476081f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_703 + 48)[3], Local_703.f_44);
	(*&Local_703 + 48)[4] = CREATE_POINT_IN_LAYOUT(Local_703, "raftPulley_back", -1,651318f, 1,564806f, 2,476081f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_703 + 48)[4], Local_703.f_44);
	(*&Local_703 + 48)[5] = CREATE_POINT_IN_LAYOUT(Local_703, "ncloseDock", -1,474332f, 0,3200568f, -9,023594f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_703 + 48)[5], Local_703.f_44);
	Local_703.f_76 = CREATE_OBJECTSET_IN_LAYOUT("attachLanternsSet", Local_703, 8, 0);
	(*&Local_703 + 80)[0] = CREATE_POINT_IN_LAYOUT(Local_703, "nlantern_1", 0,6026322f, 2,761955f, -1,15833f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_703 + 80)[0], Local_703.f_76);
	(*&Local_703 + 80)[1] = CREATE_POINT_IN_LAYOUT(Local_703, "nlantern_2", 0,7676695f, 2,747f, 4,211444f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_703 + 80)[1], Local_703.f_76);
	Local_703.f_92 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_703, "ncover_low", 0,09132823f, 0,3050971f, 1,761046f, 0.0f, 90,03915f, 0.0f, 4);
	Local_703.f_96 = CREATE_PROP_IN_LAYOUT(Local_703, "crateMultiplayerAmmoFull01x0", "p_gen_crateMultiplayerAmmoFull01x", 1,512929f, 0,3196506f, 1,772598f, 0.0f, 0.0f, 0.0f, 1);
	Function_502(Local_703, iParam0);
	return 1;
}

void Function_502(bool bParam0, bool bParam1) //Position: 0x18A12 / 100882
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			bVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_58(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(bVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

void Function_503(int iParam0, int iParam1) //Position: 0x18A54 / 100948
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

void Function_504() //Position: 0x18A9D / 101021
{
	Function_507();
	bLocal_880 = CREATE_PROP_IN_LAYOUT(Local_4, "raftBounds", "raftBlockerBounds02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	ATTACH_OBJECTS(bLocal_880, (*&Local_4 + 916)[02], Function_58(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_4 + 916)[02], bLocal_880, false);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_880, (*&Local_4 + 916)[02], false);
	Function_505((*&Local_4 + 916)[02]);
	return;
}

void Function_505(int iParam0) //Position: 0x18B1B / 101147
{
	float fVar0;
	
	fVar0 = -0,23f;
	Function_506(iParam0, 0.0f, fVar0, 0.0f);
	fLocal_851 = GET_CURRENT_GAME_TIME();
	return;
}

void Function_506(bool bParam0, vector3 vParam1) //Position: 0x18B37 / 101175
{
}

void Function_507() //Position: 0x18B6B / 101227
{
	(*&Local_4 + 916)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Raft", 1190, -487,641f, 18,63467f, 3045,609f, 0.0f, 201,612f, 0.0f);
	return;
}

int Function_508(var uParam0, bool bParam1) //Position: 0x18B9E / 101278
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_509(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_509(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_509(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_509(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_509(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1923E / 102974
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
	Function_81(iParam0 + 8, iParam4);
	return 1;
}

vector3 Function_510() //Position: 0x19301 / 103169
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
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	
	Function_503(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Fort02_layout");
	Local_4.f_1048 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 1032)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -483,5461f, 24,81921f, 3041,904f, 0.0f, -73,79053f, 0.0f, 38,71524f, 27,73247f, 38,04257f);
	ADD_TO_VOLUME_SET(Local_4.f_1048, (*&Local_4 + 1032)[0]);
	(*&Local_4 + 1032)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -1455,144f, 14,79926f, 3407,727f, 0.0f, 29,20106f, 0.0f, 41,94102f, 35,35353f, 55,3552f);
	ADD_TO_VOLUME_SET(Local_4.f_1048, (*&Local_4 + 1032)[1]);
	(*&Local_4 + 1032)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1048, (*&Local_4 + 1032)[2]);
	Local_4.f_1120 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "speedControl_set");
	(*&Local_4 + 1052)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_1", 2, -504,2463f, 26,91732f, 3087,555f, 0.0f, -64,17133f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[0], "speed", 2,2f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[0]);
	(*&Local_4 + 1052)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_2", 2, -531,1182f, 25,74325f, 3143,416f, 0.0f, -75,17401f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[1], "speed", 2,6f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[1]);
	(*&Local_4 + 1052)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_4", 2, -1341,181f, 21,98886f, 3284,485f, 0.0f, -70,18236f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[2], "speed", 3,5f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[2]);
	(*&Local_4 + 1052)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_7", 2, -486,2783f, 26,91732f, 3056,733f, 0.0f, 18,71787f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[3], "speed", 1,35f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[3]);
	(*&Local_4 + 1052)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_11", 2, -1088,213f, 21,98886f, 3261,511f, 0.0f, -89,40917f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[4], "speed", 4,3f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[4]);
	(*&Local_4 + 1052)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_12", 2, -1148,416f, 21,98886f, 3257,815f, 0.0f, -82,49759f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[5], "speed", 2,2f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[5]);
	(*&Local_4 + 1052)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_13", 2, -1003,881f, 21,98886f, 3283,08f, 0.0f, -89,40917f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[6], "speed", 2,5f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[6]);
	(*&Local_4 + 1052)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_15", 2, -702,2052f, 25,74325f, 3172,375f, 0.0f, -86,24805f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[7], "speed", 3.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[7]);
	(*&Local_4 + 1052)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_16", 2, -1203,323f, 21,98886f, 3265,046f, 0.0f, -76,37187f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[8], "speed", 3,3f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[8]);
	(*&Local_4 + 1052)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_17", 2, -884,1132f, 23,89964f, 3202,687f, 0.0f, -57,70618f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[9], "speed", 2,6f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[9]);
	(*&Local_4 + 1052)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_18", 2, -752,2421f, 25,74325f, 3175,656f, 0.0f, -86,24805f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[10], "speed", 2,5f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[10]);
	(*&Local_4 + 1052)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_19", 2, -837,0665f, 25,74325f, 3185,85f, 0.0f, -56,18378f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[11], "speed", 3.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[11]);
	(*&Local_4 + 1052)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_20", 2, -915,829f, 21,98886f, 3268,644f, 0.0f, -69,49654f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[12], "speed", 1,8f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[12]);
	(*&Local_4 + 1052)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_21", 2, -1261,267f, 21,98886f, 3279,094f, 0.0f, -76,37187f, 0.0f, 170,2275f, 28,90335f, 19,04518f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[13], "speed", 4,5f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[13]);
	(*&Local_4 + 1052)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_22", 2, -1288,153f, 21,98886f, 3285,459f, 0.0f, -66,94658f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[14], "speed", 2,2f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[14]);
	(*&Local_4 + 1052)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "speedChange_23", 2, -1376,577f, 21,98886f, 3297,241f, 0.0f, -70,18236f, 0.0f, 170,2275f, 28,90335f, 4,405743f);
	DECOR_SET_FLOAT((*&Local_4 + 1052)[15], "speed", 2,5f);
	ADD_TO_VOLUME_SET(Local_4.f_1120, (*&Local_4 + 1052)[15]);
	Local_4.f_1124 = CREATE_VOLUME_IN_LAYOUT(Local_4, "SnipePilot", 2, -469,3892f, 23,07247f, 3123,752f, 0.0f, 23,23898f, 0.0f, 180,8612f, 12,26639f, 1.0f);
	Local_4.f_1128 = CREATE_VOLUME_IN_LAYOUT(Local_4, "ngoHorse_1", 2, -513,7783f, 16,06274f, 3105,189f, 0.0f, 8,466541f, 0.0f, 1.0f, 41,15757f, 168,8153f);
	Local_4.f_1132 = CREATE_VOLUME_IN_LAYOUT(Local_4, "ngoHorse_2", 2, -491,8518f, 16,06274f, 3101,925f, 0.0f, 8,466541f, 0.0f, 1.0f, 41,15757f, 168,8153f);
	Local_4.f_1136 = CREATE_VOLUME_IN_LAYOUT(Local_4, "ngoHorse_3", 2, -505,7325f, 16,06274f, 3103,991f, 0.0f, 8,466541f, 0.0f, 1.0f, 41,15757f, 168,8153f);
	Local_4.f_1140 = CREATE_VOLUME_IN_LAYOUT(Local_4, "ngoHorse_4", 2, -740,0529f, 27,33504f, 3155,459f, 0.0f, 18,65007f, 0.0f, 1,664907f, 41,15757f, 165,0067f);
	Local_4.f_1144 = CREATE_VOLUME_IN_LAYOUT(Local_4, "runToCover_1", 2, -501,4315f, 16,06274f, 3101,92f, 0.0f, 12,02847f, 0.0f, 1.0f, 41,15757f, 168,8153f);
	Local_4.f_1148 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S1_End", 2, -697,5724f, 29,49648f, 3110,515f, 0.0f, 16,30713f, 0.0f, 3,079553f, 41,15757f, 165,0067f);
	Local_4.f_1152 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S2_End", 2, -969,7384f, 24,67426f, 3274,62f, 0.0f, 3,981866f, 0.0f, 1,664907f, 41,15757f, 165,0067f);
	Local_4.f_1156 = CREATE_VOLUME_IN_LAYOUT(Local_4, "S3_End", 2, -1267,845f, 19,68396f, 3269,329f, 0.0f, 19,27008f, 0.0f, 1,664907f, 41,15757f, 165,0067f);
	Local_4.f_1160 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_1", 2, -1003,22f, 26,73732f, 3287,467f, 0.0f, 0,5630243f, 0.0f, 5,912744f, 47,01119f, 167,18f);
	Local_4.f_1164 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_2", 2, -1031,156f, 26,73732f, 3268,571f, 0.0f, 0,8947588f, 0.0f, 6,35057f, 47,01119f, 129,1175f);
	Local_4.f_1168 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_3", 2, -1128,627f, 26,73732f, 3254,763f, 0.0f, 8,163625f, 0.0f, 5,327755f, 47,01119f, 129,1175f);
	Local_4.f_1172 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_6", 2, -560,5912f, 13,46315f, 3103,328f, 0.0f, 196,1346f, 0.0f, 5,327755f, 47,01119f, 192,3288f);
	Local_4.f_1176 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_7", 2, -1248,427f, 9,043129f, 3274,01f, 0.0f, 206,0513f, 0.0f, 5,327755f, 47,01119f, 192,3288f);
	Local_4.f_1180 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_9", 2, -702,7512f, 14,78627f, 3117,506f, 0.0f, 196,1346f, 0.0f, 5,327755f, 47,01119f, 192,3288f);
	Local_4.f_1184 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_10", 2, -820,5825f, 24,53779f, 3166,996f, 0.0f, 220,1185f, 0.0f, 5,327755f, 47,01119f, 192,3288f);
	Local_4.f_1188 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_11", 2, -1276,404f, 9,043129f, 3287,687f, 0.0f, 206,0513f, 0.0f, 5,327755f, 47,01119f, 192,3288f);
	Local_4.f_1192 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_12", 2, -1326,152f, 9,043129f, 3312,006f, 0.0f, 206,0513f, 0.0f, 5,327755f, 47,01119f, 192,3288f);
	Local_4.f_1196 = CREATE_VOLUME_IN_LAYOUT(Local_4, "cliff_ambush_13", 2, -1451,315f, 9,043521f, 3374,37f, 0.0f, 206,0513f, 0.0f, 5,327755f, 47,01119f, 192,3288f);
	Local_4.f_1200 = CREATE_VOLUME_IN_LAYOUT(Local_4, "landingZone", 2, -1455,688f, 12,38707f, 3397,208f, 0.0f, 20,22396f, 0.0f, 24,41935f, 21,13461f, 15,5334f);
	Local_4.f_1220 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "riverSide_1_set");
	(*&Local_4 + 1204)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside1_2", 2, -608,4197f, 22,08627f, 3193,771f, 0.0f, 34,60656f, 0.0f, 73,16438f, 20,76284f, 25,51912f);
	ADD_TO_VOLUME_SET(Local_4.f_1220, (*&Local_4 + 1204)[0]);
	(*&Local_4 + 1204)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside1_1", 2, -554,7856f, 22,08627f, 3168,477f, 0.0f, 5,797261f, 0.0f, 63,67875f, 20,76284f, 15,65704f);
	ADD_TO_VOLUME_SET(Local_4.f_1220, (*&Local_4 + 1204)[1]);
	(*&Local_4 + 1204)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside1_3", 2, -653,8322f, 22,08627f, 3201,608f, 0.0f, -8,536243f, 0.0f, 36,0773f, 20,76284f, 17,878f);
	ADD_TO_VOLUME_SET(Local_4.f_1220, (*&Local_4 + 1204)[2]);
	Local_4.f_1240 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "riverSide_2_set");
	(*&Local_4 + 1224)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside2_1", 2, -751,2836f, 22,57248f, 3198,552f, 0.0f, 5,032284f, 0.0f, 49,88055f, 20,76284f, 20,48246f);
	ADD_TO_VOLUME_SET(Local_4.f_1240, (*&Local_4 + 1224)[0]);
	(*&Local_4 + 1224)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside2_2", 2, -817,1538f, 22,57248f, 3226,449f, 0.0f, 19,48513f, 0.0f, 70,21261f, 12,3709f, 22,03604f);
	ADD_TO_VOLUME_SET(Local_4.f_1240, (*&Local_4 + 1224)[1]);
	(*&Local_4 + 1224)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside2_3", 2, -895,5433f, 23,83123f, 3280,757f, 0.0f, 31,40264f, 0.0f, 108,4439f, 12,3709f, 22,03604f);
	ADD_TO_VOLUME_SET(Local_4.f_1240, (*&Local_4 + 1224)[2]);
	Local_4.f_1272 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "riverSide_3_set");
	(*&Local_4 + 1244)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside3_1", 2, -1052,269f, 19,55822f, 3312,837f, 0.0f, 5,032284f, 0.0f, 49,88055f, 20,76284f, 20,48246f);
	ADD_TO_VOLUME_SET(Local_4.f_1272, (*&Local_4 + 1244)[0]);
	(*&Local_4 + 1244)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside3_2", 2, -1098,155f, 23,10233f, 3302,849f, 0.0f, -24,92418f, 0.0f, 37,1337f, 20,76284f, 10,49976f);
	ADD_TO_VOLUME_SET(Local_4.f_1272, (*&Local_4 + 1244)[1]);
	(*&Local_4 + 1244)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside3_3", 2, -1194,646f, 18,60625f, 3293,827f, 0.0f, 17,36357f, 0.0f, 50,07011f, 20,76284f, 15,54807f);
	ADD_TO_VOLUME_SET(Local_4.f_1272, (*&Local_4 + 1244)[2]);
	(*&Local_4 + 1244)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside3_4", 2, -1256,562f, 27,49734f, 3311,978f, 0.0f, 17,36357f, 0.0f, 56,92538f, 14,90919f, 15,54807f);
	ADD_TO_VOLUME_SET(Local_4.f_1272, (*&Local_4 + 1244)[3]);
	(*&Local_4 + 1244)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside3_5", 2, -1319,592f, 17,64349f, 3335,382f, 0.0f, 17,36357f, 0.0f, 56,92538f, 14,90919f, 15,54807f);
	ADD_TO_VOLUME_SET(Local_4.f_1272, (*&Local_4 + 1244)[4]);
	(*&Local_4 + 1244)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "riverside3_6", 2, -1383,079f, 23,3256f, 3365,308f, 0.0f, 27,72733f, 0.0f, 76,86009f, 14,90919f, 19,7005f);
	ADD_TO_VOLUME_SET(Local_4.f_1272, (*&Local_4 + 1244)[5]);
	Local_4.f_1276 = CREATE_VOLUME_IN_LAYOUT(Local_4, "s3_startBanter_2", 2, -914,4521f, 24,67426f, 3265,216f, 0.0f, 20,46315f, 0.0f, 1,664907f, 41,15757f, 165,0067f);
	Local_4.f_1280 = CREATE_VOLUME_IN_LAYOUT(Local_4, "change_music_s2", 2, -688,7852f, 29,49648f, 3107,944f, 0.0f, 16,30713f, 0.0f, 3,079553f, 41,15757f, 165,0067f);
	Local_4.f_1284 = CREATE_VOLUME_IN_LAYOUT(Local_4, "change_music_s3", 2, -895,158f, 22,17157f, 3256,254f, 0.0f, 24,52253f, 0.0f, 3,079553f, 41,15757f, 165,0067f);
	Local_4.f_1288 = CREATE_VOLUME_IN_LAYOUT(Local_4, "change_music_s3_end", 2, -910,9079f, 22,17157f, 3263,387f, 0.0f, 20,81643f, 0.0f, 3,079553f, 41,15757f, 165,0067f);
	Local_4.f_1292 = CREATE_VOLUME_IN_LAYOUT(Local_4, "change_music_s4", 2, -1256.0f, 9,043129f, 3284f, 0.0f, 19,38524f, 0.0f, 3,079553f, 41,15757f, 165,0067f);
	Local_4.f_1296 = CREATE_VOLUME_IN_LAYOUT(Local_4, "change_music_s5", 2, -1429,951f, 12,52149f, 3358,135f, 0.0f, 25,72456f, 0.0f, 3,079553f, 41,15757f, 165,0067f);
	*(&Local_4 + 1300[06]) = { -489,2803f, 20,08626f, 3028,58f };
	*(&Local_4 + 1300[06] + 12) = { 0.0f, -202,9032f, 0.0f };
	*(&Local_4 + 1300[16]) = { -490,294f, 20,06867f, 3029,875f };
	*(&Local_4 + 1300[16] + 12) = { 0.0f, 335,8927f, 0.0f };
	*(&Local_4 + 1300[26]) = { -487,5175f, 18,63384f, 3045,808f };
	*(&Local_4 + 1300[26] + 12) = { 0.0f, -158,388f, 0.0f };
	*(&Local_4 + 1300[36]) = { -487,5191f, 18,63431f, 3045,809f };
	*(&Local_4 + 1300[36] + 12) = { 0.0f, -158,388f, 0.0f };
	*(&Local_4 + 1300[46]) = { -485,9344f, 20,36161f, 3022,186f };
	*(&Local_4 + 1300[46] + 12) = { 0.0f, -78,90632f, 0.0f };
	Local_4.f_1424 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	*(&Local_4 + 1428[06]) = { -1459,12f, 11,82016f, 3398,762f };
	*(&Local_4 + 1428[06] + 12) = { 0.0f, -76,14388f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -1459,12f, 11,82016f, 3398,762f, 0.0f, -76,14388f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_1424);
	*(&Local_4 + 1428[16]) = { -1456,789f, 12,00607f, 3399,111f };
	*(&Local_4 + 1428[16] + 12) = { 0.0f, -152,9494f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -1456,789f, 12,00607f, 3399,111f, 0.0f, -152,9494f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_1424);
	*(&Local_4 + 1428[26]) = { -1457,404f, 12,0063f, 3399,031f };
	*(&Local_4 + 1428[26] + 12) = { 0.0f, 55,41964f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -1457,404f, 12,0063f, 3399,031f, 0.0f, 55,41964f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_1424);
	*(&Local_4 + 1428[36]) = { -1446,782f, 17,29993f, 3423,063f };
	*(&Local_4 + 1428[36] + 12) = { 0.0f, 216,006f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -1446,782f, 17,29993f, 3423,063f, 0.0f, 216,006f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_1424);
	*(&Local_4 + 1428[46]) = { -1455,451f, 11,82f, 3401,464f };
	*(&Local_4 + 1428[46] + 12) = { 0.0f, -112,7825f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "horseEnd", -1455,451f, 11,82f, 3401,464f, 0.0f, -112,7825f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_1424);
	*(&Local_4 + 1428[56]) = { -1456,61f, 13,04197f, 3402,912f };
	*(&Local_4 + 1428[56] + 12) = { 0.0f, -100,7612f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "horseStart02", -1456,61f, 13,04197f, 3402,912f, 0.0f, -100,7612f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_1424);
	*(&Local_4 + 1428[66]) = { -1457,855f, 12,31869f, 3387,675f };
	*(&Local_4 + 1428[66] + 12) = { 0.0f, -252,0856f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "nraftEnd02", -1457,855f, 12,31869f, 3387,675f, 0.0f, -252,0856f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_1424);
	*(&Local_4 + 1428[76]) = { -1557,223f, 12,55379f, 3391,195f };
	*(&Local_4 + 1428[76] + 12) = { 0.0f, -204,2464f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "raftGoToEnd02", -1557,223f, 12,55379f, 3391,195f, 0.0f, -204,2464f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_1424);
	*(&Local_4 + 1428[86]) = { -1390,644f, 36,28318f, 3497,789f };
	*(&Local_4 + 1428[86] + 12) = { 0.0f, 210,2339f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "irishRideTo02", -1390,644f, 36,28318f, 3497,789f, 0.0f, 210,2339f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_1424);
	Local_4.f_1648 = CREATE_OBJECTSET_IN_LAYOUT("RaftTPsSet", Local_4, 8, 0);
	*(&Local_4 + 1652[06]) = { -463,5544f, 17,99503f, 3128,297f };
	*(&Local_4 + 1652[06] + 12) = { 0.0f, 121,5381f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "RaftTP1", -463,5544f, 17,99503f, 3128,297f, 0.0f, 121,5381f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_1648);
	*(&Local_4 + 1652[16]) = { -678,3026f, 16,14544f, 3167,598f };
	*(&Local_4 + 1652[16] + 12) = { 0.0f, 91,8412f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "RaftTP2", -678,3026f, 16,14544f, 3167,598f, 0.0f, 91,8412f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_1648);
	*(&Local_4 + 1652[26]) = { -969,645f, 15,14394f, 3290,778f };
	*(&Local_4 + 1652[26] + 12) = { 0.0f, 115,1609f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "RaftTP3", -969,645f, 15,14394f, 3290,778f, 0.0f, 115,1609f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_1648);
	*(&Local_4 + 1652[36]) = { -1258,507f, 13,08407f, 3284,292f };
	*(&Local_4 + 1652[36] + 12) = { 0.0f, 104,2286f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "RaftTP4", -1258,507f, 13,08407f, 3284,292f, 0.0f, 104,2286f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_1648);
	*(&Local_4 + 1652[46]) = { -1644,575f, 11,785f, 3699,687f };
	*(&Local_4 + 1652[46] + 12) = { 0.0f, -233,059f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "RaftTP5", -1644,575f, 11,785f, 3699,687f, 0.0f, -233,059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_1648);
	*(&Local_4 + 1652[56]) = { -1713,807f, 11,462f, 3738,916f };
	*(&Local_4 + 1652[56] + 12) = { 0.0f, -233,059f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "RaftTP6", -1713,807f, 11,462f, 3738,916f, 0.0f, -233,059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_1648);
	*(&Local_4 + 1652[66]) = { -466,3325f, 23,18385f, 3166,333f };
	*(&Local_4 + 1652[66] + 12) = { 0.0f, -233,059f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "playerStart2", -466,3325f, 23,18385f, 3166,333f, 0.0f, -233,059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_1648);
	*(&Local_4 + 1652[76]) = { -718,7415f, 48,67949f, 3261,288f };
	*(&Local_4 + 1652[76] + 12) = { 0.0f, -233,059f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "playerStart3", -718,7415f, 48,67949f, 3261,288f, 0.0f, -233,059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_1648);
	*(&Local_4 + 1652[86]) = { -956,5762f, 39,52521f, 3348,926f };
	*(&Local_4 + 1652[86] + 12) = { 0.0f, -233,059f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "playerStart4", -956,5762f, 39,52521f, 3348,926f, 0.0f, -233,059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_1648);
	*(&Local_4 + 1652[96]) = { -1225,336f, 53,37962f, 3384,311f };
	*(&Local_4 + 1652[96] + 12) = { 0.0f, -233,059f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "playerStart5", -1225,336f, 53,37962f, 3384,311f, 0.0f, -233,059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_1648);
	Local_4.f_1896 = CREATE_OBJECTSET_IN_LAYOUT("ShootFromCliffsSet", Local_4, 8, 0);
	*(&Local_4 + 1900[06]) = { -1055,688f, 19,66734f, 3309,124f };
	*(&Local_4 + 1900[06] + 12) = { 0.0f, -58,24075f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_1", -1055,688f, 19,66734f, 3309,124f, 0.0f, -58,24075f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_1896);
	*(&Local_4 + 1900[16]) = { -1189,389f, 18,58586f, 3290,304f };
	*(&Local_4 + 1900[16] + 12) = { 0.0f, -31,25748f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_2", -1189,389f, 18,58586f, 3290,304f, 0.0f, -31,25748f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_4.f_1896);
	*(&Local_4 + 1900[26]) = { -1195,749f, 18,57664f, 3294,158f };
	*(&Local_4 + 1900[26] + 12) = { 0.0f, -23,04498f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_3", -1195,749f, 18,57664f, 3294,158f, 0.0f, -23,04498f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_4.f_1896);
	*(&Local_4 + 1900[36]) = { -1277,712f, 24,33801f, 3320,406f };
	*(&Local_4 + 1900[36] + 12) = { 0.0f, -18,3226f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_4", -1277,712f, 24,33801f, 3320,406f, 0.0f, -18,3226f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_4.f_1896);
	*(&Local_4 + 1900[46]) = { -1112.0f, 24,71721f, 3298,309f };
	*(&Local_4 + 1900[46] + 12) = { 0.0f, -36,31868f, -0,8825396f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_6", -1112.0f, 24,71721f, 3298,309f, 0.0f, -36,31868f, -0,8825396f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_4.f_1896);
	*(&Local_4 + 1900[56]) = { -1338,086f, 21,77208f, 3348,685f };
	*(&Local_4 + 1900[56] + 12) = { 0.0f, -14,9102f, -0,8825396f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_5", -1338,086f, 21,77208f, 3348,685f, 0.0f, -14,9102f, -0,8825396f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_4.f_1896);
	*(&Local_4 + 1900[66]) = { -1390,788f, 18,44237f, 3368,464f };
	*(&Local_4 + 1900[66] + 12) = { 0.0f, -18,3226f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_7", -1390,788f, 18,44237f, 3368,464f, 0.0f, -18,3226f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_4.f_1896);
	*(&Local_4 + 1900[76]) = { -1462,761f, 12,27263f, 3397,57f };
	*(&Local_4 + 1900[76] + 12) = { 0.0f, -18,3226f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_8", -1462,761f, 12,27263f, 3397,57f, 0.0f, -18,3226f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_4.f_1896);
	*(&Local_4 + 1900[86]) = { -1464.0f, 12,79381f, 3397,214f };
	*(&Local_4 + 1900[86] + 12) = { 0.0f, -26,59525f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_9", -1464.0f, 12,79381f, 3397,214f, 0.0f, -26,59525f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_4.f_1896);
	*(&Local_4 + 1900[96]) = { -1300,389f, 21,55582f, 3338,313f };
	*(&Local_4 + 1900[96] + 12) = { 0.0f, -36,31868f, -0,8825396f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_4, "shootPos_10", -1300,389f, 21,55582f, 3338,313f, 0.0f, -36,31868f, -0,8825396f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_4.f_1896);
	*(&Local_4 + 2144[06]) = { -521,7397f, 22,08627f, 3194,26f };
	*(&Local_4 + 2144[06] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2144[16]) = { -570,0782f, 19,34961f, 3224.0f };
	*(&Local_4 + 2144[16] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2144[26]) = { -692.0f, 20,11536f, 3212,79f };
	*(&Local_4 + 2144[26] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2144[36]) = { -437,2362f, 27,07792f, 3176.0f };
	*(&Local_4 + 2144[36] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2244[06]) = { -1078,002f, 32,80713f, 3348,001f };
	*(&Local_4 + 2244[06] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2244[16]) = { -1096,303f, 30,96283f, 3333,9f };
	*(&Local_4 + 2244[16] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2244[26]) = { -1208.0f, 37,34035f, 3350,097f };
	*(&Local_4 + 2244[26] + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_2320 = CREATE_OBJECTSET_IN_LAYOUT("convTriggersSet", Local_4, 8, 0);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_1", -554,4406f, 17,51962f, 3140,31f, 0.0f, 104,4792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_4.f_2320);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_2", -569,4933f, 17,30736f, 3144,415f, 0.0f, 104,4792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_4.f_2320);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_3", -734,5502f, 15,33034f, 3169,234f, 0.0f, 104,4792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_4.f_2320);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_4", -763,5544f, 15,28744f, 3172,902f, 0.0f, 104,4792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_4.f_2320);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_5", -869,9374f, 15,01459f, 3236,482f, 0.0f, 139,0345f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_4.f_2320);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_6", -1048,467f, 13,51747f, 3291,324f, 0.0f, 74,88021f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_4.f_2320);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_7", -1151,2f, 13,11354f, 3259,78f, 0.0f, 74,88021f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_4.f_2320);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_8", -1246,823f, 12,4326f, 3280,729f, 0.0f, 74,88021f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_4.f_2320);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_9", -1285,69f, 12,34332f, 3300,727f, 0.0f, 116,6803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_4.f_2320);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_10", -1318,713f, 12,38418f, 3313,514f, 0.0f, 116,6803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_4.f_2320);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_11", -1343,332f, 12,42244f, 3325,724f, 0.0f, 116,6803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_4.f_2320);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_12", -1428,774f, 12,53975f, 3358,215f, 0.0f, 116,6803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_4.f_2320);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_4, "convStart_13", -1451,367f, 11,81254f, 3373,66f, 0.0f, 116,6803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_4.f_2320);
	*(&Local_4 + 2324) = { -463,3431f, 18,03497f, 3106,156f };
	*(&Local_4 + 2324 + 12) = { 0.0f, -166,118f, 0.0f };
	Local_4.f_2348 = CREATE_POINT_IN_LAYOUT(Local_4, "RaftGoToDock", -463,3431f, 18,03497f, 3106,156f, 0.0f, -166,118f, 0.0f);
	*(&Local_4 + 2352) = { -1788f, 12,64156f, 3734,369f };
	*(&Local_4 + 2352 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_2376 = CREATE_POINT_IN_LAYOUT(Local_4, "BeachPoint", -1788f, 12,64156f, 3734,369f, 0.0f, 0.0f, 0.0f);
	Local_4.f_2380 = CREATE_POINT_IN_LAYOUT(Local_4, "RopeAnchor_1", -484,7585f, 18,89287f, 3046,891f, 0.0f, 0.0f, 0.0f);
	Local_4.f_2384 = CREATE_POINT_IN_LAYOUT(Local_4, "RopeAnchor_2", -486,2415f, 18,98736f, 3042,404f, 0.0f, 0.0f, 0.0f);
	Local_4.f_2388 = CREATE_POINT_IN_LAYOUT(Local_4, "RopeAnchor_3", -483,4081f, 18,74299f, 3049,402f, 0.0f, 0.0f, 0.0f);
	Local_4.f_2392 = CREATE_POINT_IN_LAYOUT(Local_4, "RopeAnchor_4", -454,0355f, 18,84646f, 3129,185f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 2396) = { -452,0862f, 18,64699f, 3130,42f };
	*(&Local_4 + 2396 + 12) = { 0.0f, 81,57917f, 0.0f };
	*(&Local_4 + 2420) = { -585,992f, 17,17401f, 3148,844f };
	*(&Local_4 + 2420 + 12) = { 0.0f, 103,1424f, 0.0f };
	*(&Local_4 + 2444) = { -1457,839f, 12,21379f, 3384,048f };
	*(&Local_4 + 2444 + 12) = { 0.0f, 178,2049f, 0.0f };
	Local_4.f_2468 = CREATE_OBJECTSET_IN_LAYOUT("spawnBackupSet", Local_4, 8, 0);
	(*&Local_4 + 2472)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_1", -594,5516f, 19,0582f, 3204,018f, 0.0f, 2,706139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[0], Local_4.f_2468);
	(*&Local_4 + 2472)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_2", -550,6877f, 21,70804f, 3185,313f, 0.0f, 2,706139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[1], Local_4.f_2468);
	(*&Local_4 + 2472)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_3", -753,069f, 26,00483f, 3221,738f, 0.0f, 2,706139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[2], Local_4.f_2468);
	(*&Local_4 + 2472)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_4", -801,069f, 26,00483f, 3241,046f, 0.0f, 2,706139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[3], Local_4.f_2468);
	(*&Local_4 + 2472)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_5", -857,547f, 20,75335f, 3265,278f, 0.0f, 2,706139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[4], Local_4.f_2468);
	(*&Local_4 + 2472)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_6", -1110,372f, 29,00231f, 3321,628f, 0.0f, 2,706139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[5], Local_4.f_2468);
	(*&Local_4 + 2472)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_7", -1200,542f, 18,57981f, 3301,21f, 0.0f, -54,02406f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[6], Local_4.f_2468);
	(*&Local_4 + 2472)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_8", -1061,016f, 19,59545f, 3306,827f, 0.0f, -134,189f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[7], Local_4.f_2468);
	(*&Local_4 + 2472)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_9", -1325,184f, 17,36715f, 3338,721f, 0.0f, -240,8696f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[8], Local_4.f_2468);
	(*&Local_4 + 2472)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "spb_10", -1410,911f, 19,63486f, 3384,283f, 0.0f, -380,9245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2472)[9], Local_4.f_2468);
	Local_4.f_2516 = CREATE_POINT_IN_LAYOUT(Local_4, "IrishShack", -3840,962f, 2,776f, 4225,928f, 0.0f, 178,2049f, 0.0f);
	*(&Local_4 + 2520) = { -444,7763f, 23,18016f, 3147,209f };
	*(&Local_4 + 2520 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2544) = { -453,1364f, 23,18016f, 3147,209f };
	*(&Local_4 + 2544 + 12) = { 0.0f, 0.0f, 0.0f };
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low2", -597,3307f, 126,3887f, 2683,331f, 0.0f, -93,06503f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low3", -596,2442f, 126,3887f, 2681,146f, 0.0f, -120,2593f, 0.0f, 4);
	Local_4.f_2568 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low8", -689,1892f, 30,11757f, 3197,115f, 0.0f, -395,0285f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low42", -691,3262f, 30,42291f, 3192,278f, 0.0f, -393,7304f, 0.0f, 4);
	Local_4.f_2572 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low43", -535,9985f, 21,90169f, 3163,117f, 0.0f, -763,4354f, 0.0f, 4);
	Local_4.f_2576 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "ncover_low", -444,1727f, 21,87029f, 3149,778f, 0.0f, 22,74892f, 0.0f, 4);
	Local_4.f_2580 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low45", -453,1499f, 21,83947f, 3149,162f, 0.0f, 10,69858f, 0.0f, 4);
	Local_4.f_2584 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low46", -560,6866f, 21,08236f, 3167,625f, 0.0f, -762,3959f, 0.0f, 4);
	Local_4.f_2588 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low47", -598,0732f, 18,64299f, 3186,44f, 0.0f, -758,5114f, 0.0f, 4);
	Local_4.f_2592 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low48", -602,6094f, 19,07452f, 3195,218f, 0.0f, -718,3669f, 0.0f, 4);
	Local_4.f_2596 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low56", -1388,343f, 18,44278f, 3368,001f, 0.0f, -380,8739f, 0.0f, 4);
	Local_4.f_2600 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low71", -1173,628f, 18,58565f, 3291,841f, 0.0f, -404,1263f, 0.0f, 4);
	Local_4.f_2604 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low72", -731,4021f, 23,07348f, 3190,988f, 0.0f, -404,3503f, 0.0f, 4);
	Local_4.f_2608 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low73", -736,306f, 22,66055f, 3190,385f, 0.0f, -384,7463f, 0.0f, 4);
	Local_4.f_2612 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low74", -749,2466f, 21,83868f, 3197,042f, 0.0f, -370,6505f, 0.0f, 4);
	Local_4.f_2616 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low75", -764,0654f, 21,83868f, 3199,512f, 0.0f, -363,5441f, 0.0f, 4);
	Local_4.f_2620 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low81", -884,862f, 20,02532f, 3272,201f, 0.0f, -365,0637f, 0.0f, 4);
	Local_4.f_2624 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low82", -897,3671f, 20,02531f, 3279,422f, 0.0f, -360,1606f, 0.0f, 4);
	Local_4.f_2628 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low83", -906,0853f, 20,02531f, 3285,161f, 0.0f, -365,2025f, 0.0f, 4);
	Local_4.f_2632 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low84", -1087,243f, 23,10233f, 3306,905f, 0.0f, -395,6211f, 0.0f, 4);
	Local_4.f_2636 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low85", -1129,775f, 24,2943f, 3288.0f, 0.0f, -390,0369f, 0.0f, 4);
	Local_4.f_2640 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low86", -1042,817f, 19,68454f, 3310,977f, 0.0f, -77,61385f, 0.0f, 4);
	Local_4.f_2644 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low87", -1031,365f, 19,89775f, 3315,594f, 0.0f, -77,61385f, 0.0f, 4);
	Local_4.f_2648 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low89", -1096,239f, 23,10233f, 3305,431f, 0.0f, -383,755f, 0.0f, 4);
	Local_4.f_2652 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low90", -1182,678f, 18,59354f, 3288,938f, 0.0f, -407,025f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low92", -1251,18f, 23,76218f, 3308,144f, 0.0f, -390,8117f, 0.0f, 4);
	Local_4.f_2656 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low93", -1265,792f, 24,01828f, 3313,937f, 0.0f, -367,2701f, 0.0f, 4);
	Local_4.f_2660 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low95", -1301,766f, 17,4806f, 3332,259f, 0.0f, -375,1877f, 0.0f, 4);
	Local_4.f_2664 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low96", -1311,056f, 17,61379f, 3332,759f, 0.0f, -382,8427f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low97", -1353,961f, 21,61005f, 3357,071f, 0.0f, -373,0076f, 0.0f, 4);
	Local_4.f_2668 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low98", -1379,887f, 17,86507f, 3361,654f, 0.0f, -336,9817f, 0.0f, 4);
	Local_4.f_2672 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low99", -794,1299f, 21,37297f, 3217,87f, 0.0f, -372,4454f, 0.0f, 4);
	Local_4.f_2676 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low100", -627,4614f, 18,2623f, 3208,91f, 0.0f, -718,3669f, 0.0f, 4);
	Local_4.f_2680 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low101", -865,3641f, 19,66378f, 3259,682f, 0.0f, -349,8519f, 0.0f, 4);
	Local_4.f_2684 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low102", -611,138f, 19,11067f, 3209,218f, 0.0f, -705,8144f, 0.0f, 4);
	Local_4.f_2688 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low103", -616.0f, 17,98046f, 3203,142f, 0.0f, -713,9884f, 0.0f, 4);
	Local_4.f_2692 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low104", -642,1226f, 18,53963f, 3210,576f, 0.0f, -731,5035f, 0.0f, 4);
	Local_4.f_2696 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low105", -528,0957f, 22,08627f, 3169,363f, 0.0f, -744,5886f, 0.0f, 4);
	Local_4.f_2700 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low106", -537,3182f, 21,67317f, 3161,983f, 0.0f, -762,6816f, 0.0f, 4);
	Local_4.f_2704 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low107", -804,7771f, 21,37297f, 3214,707f, 0.0f, -373,6323f, 0.0f, 4);
	Local_4.f_2708 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low108", -817,8376f, 21,37297f, 3221,026f, 0.0f, -373,6323f, 0.0f, 4);
	Local_4.f_2712 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low109", -831,4274f, 21,2613f, 3229,958f, 0.0f, -343,5495f, 0.0f, 4);
	Local_4.f_2716 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low110", -1336,336f, 17,45667f, 3344,072f, 0.0f, -358,0631f, 0.0f, 4);
	Local_4.f_2720 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low111", -1402,549f, 18,44456f, 3370,339f, 0.0f, -380,8739f, 0.0f, 4);
	Local_4.f_2724 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low112", -888,8189f, 20,02532f, 3274,168f, 0.0f, -349,8519f, 0.0f, 4);
}

vector3 Äg9ßAlßELÄkÊðAk(ØEMJfÄokbAgAKEMâÄukAz:çEN Ä{*uA`HQENm·ÄÞA[2ENÀÄQAXýEMà¯ÄÊBAWôEMOiÄÃAVELôÄ [AUgvEL:¢ÄÌíAT>µEK³Ä~AR;EK¬êÄfAN}EL6Ä}AL¦EL[²ÄìÇAJó1ELÆ"Ä°AHËELä¹Ä$ADJEMX#ÄAEEM²ûÄ ÿAE½ENr«Ä£AEÔENî<(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x1C45F / 115807
{
	float fVar125;
	
	PatchTrap7();
	PatchTrap2();
	(*17959 * 20249 * -15193)[StackVal227] = StackVal;
	PatchTrap4();
	Unknown_Function();
	PatchTrapE();
	PatchTrap7();
	return StackVal < (StackVal + (*18067 * 20381)[StackVal50345]) * 20540, -fVar125, 18246;
}

vector3 EFL,³:D
¬;oHorsePath2 p   `Ä3A°ÏEF`Ä|_AªÎEEÐ°Ä¥A£h¨EE©_ÄïwA ¼^EE¯Ä}A¤EEíÆÄÏ³APûEF"ÄÙ¡A1MEFu(var uParam0) //Position: 0x1C66E / 116334
{
}

bool Function_513() //Position: 0x1CE29 / 118313
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_529(0))
		{
			return 0;
		}
		if (!Function_477())
		{
			return 0;
		}
		if (!Function_312(&bLocal_764))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_755))
		{
			bLocal_755 = Function_521(0, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_520())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_756))
		{
			bLocal_756 = Function_515(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_756, 1))
		{
			return 0;
		}
		if (!Function_514("MINI_GAMES_AND_JOBS\\RAFT"))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_514(bool bParam0) //Position: 0x1CEC8 / 118472
{
	if (REQUEST_MISSION_AUDIO_BANK(bParam0))
	{
		return 1;
	}
	return 0;
}

bool Function_515(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x1CED9 / 118489
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
		Function_519(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_520())
		{
			return "";
		}
	}
	if (!Function_517())
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
		Function_215(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_215(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_215(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_215(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_516(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_516(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_45() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
				if (!Function_78(StackVal, StackVal, vVar10))
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
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
		Function_452(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_45() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

var Function_516(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1D231 / 119345
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

bool Function_517() //Position: 0x1D2CC / 119500
{
	if (Function_518() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_518() //Position: 0x1D2E2 / 119522
{
	return Global_12976.f_152;
}

void Function_519(var uParam0, bool bParam1, bool bParam2) //Position: 0x1D2ED / 119533
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_81(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_81(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_520() //Position: 0x1D31A / 119578
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

bool Function_521(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x1D33A / 119610
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
		if (!Function_155(&(Global_29008[Global_30621[3]]), 4))
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
		Function_340(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_528(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_524(StackVal, uParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = uParam3;
			vVar3.y = uParam4;
			vVar3.z = uParam5;
			if (Function_78(StackVal, StackVal, vVar3))
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
		Function_523(bVar1, 0, 0, 0, 0);
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
		Function_522(bVar1, 0);
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

void Function_522(bool bParam0, bool bParam1) //Position: 0x1D824 / 120868
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_523(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1D844 / 120900
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

bool Function_524(int iParam0, bool bParam1) //Position: 0x1D898 / 120984
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_382(iParam0))
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
						Function_525(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_525(bool bParam0, bool bParam1) //Position: 0x1D918 / 121112
{
	Function_527(bParam0);
	Function_526(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_526(bool bParam0) //Position: 0x1D93E / 121150
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_527(bool bParam0) //Position: 0x1D962 / 121186
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

bool Function_528(int iParam0, bool bParam1) //Position: 0x1DA31 / 121393
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

bool Function_529(bool bParam0) //Position: 0x1DAC4 / 121540
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

void Function_530(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1DAF2 / 121586
{
	int iVar0;
	bool bVar1;
	
	Function_211(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_531(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_209(StackVal, bVar1, bParam4);
		}
	}
}

void Function_531(int iParam0, var uParam1) //Position: 0x1DB64 / 121700
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_211(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_209(iParam0, iVar0, uParam1);
	return;
}

void Function_532() //Position: 0x1DB89 / 121737
{
	Function_318(&bLocal_764, 1190, 2, 0);
	Function_478(&bLocal_764, "fort02", 10, 0);
	Function_478(&bLocal_764, "npull_raft", 5, 0);
	Function_478(&bLocal_764, "custom/pull_raft", 8, 0);
	Function_478(&bLocal_764, "raftBlockerBounds02x", 0, 0);
	Function_478(&bLocal_764, "raftBlockerBounds03x", 0, 0);
	Function_478(&bLocal_764, "throw_lantern01x", 0, 0);
	Function_478(&bLocal_764, "rifle_springfield01x", 0, 0);
	Function_478(&bLocal_764, "stand_ambient", 5, 0);
	Function_478(&bLocal_764, "custom/stand_ambient", 8, 0);
	return;
}

void Function_533(int iParam0, bool bParam1) //Position: 0x1DC96 / 122006
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_24(0, 0);
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
	Function_206();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244();
	Function_539();
	Function_234("");
	Function_538(0);
	Function_537();
	Function_199();
	Function_198();
	ENABLE_JOURNAL_REPLAY(0);
	Function_536();
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
	Function_535(13);
	Function_535(14);
	Function_535(25);
	Function_535(24);
	Function_535(12);
	Function_535(27);
	Function_535(26);
	Function_535(15);
	Function_534();
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

void Function_534() //Position: 0x1E0BA / 123066
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

void Function_535(int iParam0) //Position: 0x1E12E / 123182
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_536() //Position: 0x1E14E / 123214
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

void Function_537() //Position: 0x1E18B / 123275
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_538(int iParam0) //Position: 0x1E19F / 123295
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

void Function_539() //Position: 0x1E1D4 / 123348
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_540(bool bParam0) //Position: 0x1E1E6 / 123366
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam0 == bLocal_755)
		{
			if (iLocal_729 >= 0)
			{
				if (iLocal_729 != 4 && iLocal_730 <= 8)
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_542();
				}
				else
				{
					Function_541();
				}
			}
		}
	}
	return;
}

void Function_541() //Position: 0x1E220 / 123424
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_GunOnIrish", "Fort02_GunOnIrish", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_542() //Position: 0x1E26B / 123499
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_AssaultsIrishMexico", "Fort02_AssaultsIrishMexico", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_543(var uParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x1E2C8 / 123592
{
	bool bVar0;
	
	if (Function_544(GET_WEAPON_IN_HAND(Global_34573)))
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
							if (Function_342(*uParam0, Global_34573, 50.0f))
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

bool Function_544(bool bParam0) //Position: 0x1E390 / 123792
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

void Function_545() //Position: 0x1E3D6 / 123862
{
	float fVar0;
	
	fVar0 = (GET_ACTOR_MAX_HEALTH(bLocal_755) / 4.0f);
	switch (iLocal_845)
	{
		case 0x00000000:
			if (GET_ACTOR_HEALTH(bLocal_755) >= (fVar0 * 3.0f))
			{
				Function_546();
				iLocal_845 = 1;
			}
			break;
		
		case 0x00000001:
			if (GET_ACTOR_HEALTH(bLocal_755) >= (fVar0 * 2.0f))
			{
				Function_546();
				iLocal_845 = 2;
			}
			break;
		
		case 0x00000002:
			if (GET_ACTOR_HEALTH(bLocal_755) >= (fVar0 * 1.0f))
			{
				Function_546();
				iLocal_845 = 3;
			}
			break;
	}
	return;
}

void Function_546() //Position: 0x1E448 / 123976
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_IrishTakesDamage", "Fort02_IrishTakesDamage", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_547() //Position: 0x1E49F / 124063
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if ((iLocal_843 % 2) == 0)
	{
		if (SQUAD_GET_SIZE(bLocal_879) >= 0)
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bLocal_879) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_879, bVar0);
				if ((!Function_379(bVar1, 0x3f800000, 0x42960000, 1, 1, 0) && !IS_ACTOR_MOUNTED(bVar1)) && !Function_342(Global_34573, bVar1, 40.0f))
				{
					RELEASE_ACTOR(bVar1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_548() //Position: 0x1E50F / 124175
{
	if (iLocal_835)
	{
		if (!bLocal_836)
		{
			if (!iLocal_837)
			{
				Function_551();
				Function_550();
			}
			else if (Function_549())
			{
				Function_367();
			}
		}
		else if (Function_549())
		{
			Function_367();
		}
	}
	else if (Function_549())
	{
		Function_550();
		iLocal_837 = 0;
	}
	return;
}

bool Function_549() //Position: 0x1E558 / 124248
{
	if (DECOR_CHECK_EXIST((*&Local_4 + 916)[02], "fLastSpeed"))
	{
		bLocal_847 = DECOR_GET_FLOAT((*&Local_4 + 916)[02], "fLastSpeed");
		TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 916)[02], bLocal_847);
		DECOR_REMOVE((*&Local_4 + 916)[02], "fLastSpeed");
		PRINTSTRING("Back to normal speed: ");
		PRINTFLOAT(bLocal_847);
		PRINTNL();
		return 1;
	}
	return 0;
}

void Function_550() //Position: 0x1E5E3 / 124387
{
	if (iLocal_846 != 3)
	{
		if (iLocal_846 != 2)
		{
			TASK_STAND_STILL(bLocal_755, -1.0f, 0, 0);
			iLocal_846 = 2;
		}
	}
	return;
}

int Function_551() //Position: 0x1E604 / 124420
{
	if (!DECOR_CHECK_EXIST((*&Local_4 + 916)[02], "fLastSpeed"))
	{
		DECOR_SET_FLOAT((*&Local_4 + 916)[02], "fLastSpeed", bLocal_847);
		bLocal_847 = 4,5f;
		TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 916)[02], bLocal_847);
		PRINTSTRING("Not in combat. full ahead! ");
		PRINTFLOAT(bLocal_847);
		PRINTNL();
		return 1;
	}
	return 0;
}

void Function_552() //Position: 0x1E685 / 124549
{
	if ((iLocal_843 + 1 % 2) == 0)
	{
		if (GET_LAST_ATTACK_TIME(Global_34573) < 0.0f)
		{
			fLocal_849 = GET_LAST_ATTACK_TIME(Global_34573);
		}
		switch (iLocal_844)
		{
			case 0x00000000:
				if (bLocal_836)
				{
					CLEAR_LAST_ATTACK(Global_34573);
					fLocal_849 = GET_CURRENT_GAME_TIME();
					iLocal_844 = 1;
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_SHOOTING(Global_34573) || !bLocal_836)
				{
					Function_228(&bLocal_816);
					iLocal_844 = 0;
				}
				if ((GET_CURRENT_GAME_TIME() - fLocal_849) < 10.0f && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_554();
					iLocal_844 = 2;
					Function_228(&bLocal_816);
				}
				break;
			
			case 0x00000002:
				if (Function_279(&bLocal_816) < 5.0f)
				{
					CLEAR_LAST_ATTACK(Global_34573);
					Function_228(&bLocal_816);
					iLocal_844 = 3;
					SET_ACTOR_IS_COMPANION(bLocal_755, 0);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_755, 1,5f);
					Function_553();
				}
				break;
			
			case 0x00000003:
				if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)) || !bLocal_836)
				{
					Function_228(&bLocal_816);
					iLocal_844 = 0;
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
					SET_ACTOR_IS_COMPANION(bLocal_755, 1);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_755, 1.0f);
					iLocal_846 = 2;
					Function_367();
				}
				if (Function_279(&bLocal_816) <= 12.0f)
				{
					Function_554();
					Function_228(&bLocal_816);
				}
				break;
			}
	}
	return;
}

void Function_553() //Position: 0x1E7A5 / 124837
{
	if (iLocal_846 != 3)
	{
		TASK_STAND_STILL(bLocal_755, -1.0f, 0, 0);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_755, 0.0f);
		iLocal_846 = 3;
	}
	return;
}

void Function_554() //Position: 0x1E7C6 / 124870
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NoShootAttacks", "Fort02_NoShootAttacks", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_555() //Position: 0x1E819 / 124953
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (GET_OBJECTSET_SIZE(Local_4.f_2320) >= 0)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(Local_4.f_2320) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Local_4.f_2320);
			if (Function_362((*&Local_4 + 916)[02], bVar1, 15.0f))
			{
				Function_556(bVar0);
			}
			bVar0++;
		}
	}
	return;
}

void Function_556(bool bParam0) //Position: 0x1E86F / 125039
{
	switch (bParam0)
	{
		case 0x00000000:
			if (!Function_27(bLocal_842, 1))
			{
				Function_567();
				Function_81(&bLocal_842, 1);
			}
			break;
		
		case 0x00000001:
			if (!Function_27(bLocal_842, 2))
			{
				if (IS_ACTOR_ALIVE((*&Local_4 + 588)[62]) && IS_ACTOR_ALIVE((*&Local_4 + 588)[52]))
				{
					Function_566();
				}
				Function_81(&bLocal_842, 2);
			}
			break;
		
		case 0x00000002:
			if (!Function_27(bLocal_842, 4))
			{
				Function_565();
				Function_81(&bLocal_842, 4);
			}
			break;
		
		case 0x00000003:
			if (!Function_27(bLocal_842, 8))
			{
				Function_564();
				Function_81(&bLocal_842, 8);
			}
			break;
		
		case 0x00000004:
			if (!Function_27(bLocal_842, 16))
			{
				Function_563();
				Function_81(&bLocal_842, 16);
			}
			break;
		
		case 0x00000005:
			if (!Function_27(bLocal_842, 32))
			{
				Function_562();
				Function_81(&bLocal_842, 32);
			}
			break;
		
		case 0x00000006:
			if (!Function_27(bLocal_842, 64))
			{
				Function_561();
				Function_81(&bLocal_842, 64);
			}
			break;
		
		case 0x00000007:
			if (!Function_27(bLocal_842, 128))
			{
				Function_560();
				Function_81(&bLocal_842, 128);
			}
			break;
		
		case 0x00000008:
			if (!Function_27(bLocal_842, 256))
			{
				Function_439();
				Function_81(&bLocal_842, 256);
			}
			break;
		
		case 0x00000009:
			if (!Function_27(bLocal_842, 512))
			{
				Function_559();
				Function_81(&bLocal_842, 512);
			}
			break;
		
		case 0x0000000A:
			if (!Function_27(bLocal_842, 1024))
			{
				Function_561();
				Function_81(&bLocal_842, 1024);
			}
			break;
		
		case 0x0000000B:
			if (!Function_27(bLocal_842, 2048))
			{
				Function_558();
				Function_81(&bLocal_842, 2048);
			}
			break;
		
		case 0x0000000C:
			if (!Function_27(bLocal_842, 4096))
			{
				Function_557();
				Function_81(&bLocal_842, 4096);
				MEMORY_ALLOW_SHOOTING(bLocal_755, false);
			}
			break;
		
		case 0x0000000D:
			if (!Function_27(bLocal_842, 8192))
			{
				Function_389();
				Function_81(&bLocal_842, 8192);
			}
			break;
	}
	PRINTSTRING("Just played ");
	PRINTINT(bParam0);
	PRINTNL();
	return;
}

void Function_557() //Position: 0x1EA7D / 125565
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_NearDockingPoint", "Fort02_NearDockingPoint", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x1EAD4 / 125652
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ExchLullBanter_v6_AA", "Fort02_ExchLullBanter_v6_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_ExchLullBanter_v6_AB", "Fort02_ExchLullBanter_v6_AB", true, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x1EB78 / 125816
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Fort02_ExchLullBanter_v5_AA", "Fort02_ExchLullBanter_v5_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ExchLullBanter_v5_AB", "Fort02_ExchLullBanter_v5_AB", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x1EC1C / 125980
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ExchLullBanter_v4_AA", "Fort02_ExchLullBanter_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_ExchLullBanter_v4_AB", "Fort02_ExchLullBanter_v4_AB", true, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_561() //Position: 0x1ECC0 / 126144
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_8thWaveAttack", "Fort02_8thWaveAttack", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_562() //Position: 0x1ED11 / 126225
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Fort02_ExchLullBanter_v3_AA", "Fort02_ExchLullBanter_v3_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ExchLullBanter_v3_AB", "Fort02_ExchLullBanter_v3_AB", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_563() //Position: 0x1EDB5 / 126389
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ExchLullBanter_v2_AA", "Fort02_ExchLullBanter_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort02_ExchLullBanter_v2_AB", "Fort02_ExchLullBanter_v2_AB", true, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_564() //Position: 0x1EE59 / 126553
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Fort02_4t5AttacksBant_v1_AB", "Fort02_4t5AttacksBant_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_4t5AttacksBant_v1_AC1", "Fort02_4t5AttacksBant_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_4t5AttacksBant_v1_AC2", "Fort02_4t5AttacksBant_v1_AC2", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_565() //Position: 0x1EF46 / 126790
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Fort02_ExchLullBanter_v1_AA", "Fort02_ExchLullBanter_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ExchLullBanter_v1_AB", "Fort02_ExchLullBanter_v1_AB", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566() //Position: 0x1EFEA / 126954
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_4thWaveAttack", "Fort02_4thWaveAttack", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_567() //Position: 0x1F03B / 127035
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_1stWaveAttack", "Fort02_1stWaveAttack", false, 2, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x1F08C / 127116
{
	iLocal_843++;
	if (iLocal_843 >= 30)
	{
		iLocal_843 = 0;
	}
	return;
}

void Function_569() //Position: 0x1F0A6 / 127142
{
	if ((iLocal_843 % 2) == 0)
	{
		bLocal_836 = Function_570();
		if (bLocal_836)
		{
			iLocal_837 = 0;
		}
	}
	return;
}

int Function_570() //Position: 0x1F0C5 / 127173
{
	if (((((Function_571(Local_4.f_584, 0x40800000) || Function_571(Local_4.f_648, 0x40800000)) || Function_571(Local_4.f_728, 0x40800000)) || Function_571(Local_4.f_888, 0x40800000)) || Function_571(Local_4.f_1028, 0x40800000)) || Function_571(Local_4.f_768, 0x40800000))
	{
		return 1;
	}
	return 0;
}

int Function_571(bool bParam0, float fParam1) //Position: 0x1F124 / 127268
{
	float fVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0) >= 0)
		{
			fVar0 = Function_412(bParam0);
			if (fVar0 < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - fVar0) > fParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_572(int iParam0) //Position: 0x1F158 / 127320
{
	switch (iParam0->f_16)
	{
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					Function_577();
					break;
				
				case 0x00000001:
					if (iLocal_729 == 0)
					{
						Function_576();
					}
					else
					{
						Function_575();
					}
					break;
				
				case 0x00000002:
					Function_575();
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
					if (iLocal_729 != 4 && iLocal_730 < 8)
					{
						Function_542();
					}
					else
					{
						Function_574();
					}
					break;
				
				case 0x00000001:
					if (iLocal_729 == 0)
					{
						Function_576();
					}
					else
					{
						Function_575();
					}
					break;
				
				case 0x00000002:
					Function_575();
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
			Function_573(iParam0, 1);
			return 1;
		}
	}
	Function_573(iParam0, 0);
	return 0;
}

void Function_573(int iParam0, bool bParam1) //Position: 0x1F250 / 127568
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

void Function_574() //Position: 0x1F274 / 127604
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_AssaultsIrish", "Fort02_AssaultsIrish", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_575() //Position: 0x1F2C5 / 127685
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ShootsHorsesBeach", "Fort02_ShootsHorsesBeach", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_576() //Position: 0x1F31E / 127774
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ShootsRaftDriver", "Fort02_ShootsRaftDriver", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_577() //Position: 0x1F375 / 127861
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort02_ShootsIrish", "Fort02_ShootsIrish", false, 1, 1, 0, 1);
		Function_332(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_578(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1F3C2 / 127938
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
		Function_573(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_597(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_596(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_596(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_582(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_27(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_573(iParam2, 0);
														return 0;
													}
													if (Function_27(bVar17, 2))
													{
														Function_581(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_580(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_27(bVar17, 4))
													{
														Function_581(&bVar17);
														strcpy(&Var18, "", 64);
														Function_579(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_234(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_580(StackVal, iParam2, bVar17);
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
	Function_573(iParam2, 0);
	return 0;
}

void Function_579(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1F75B / 128859
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

void Function_580(var uParam0, int iParam1, bool bParam2) //Position: 0x1F846 / 129094
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
			Function_41(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_41(&bParam2, 2);
			break;
	}
	Function_41(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_581(bool bParam0) //Position: 0x1F8BC / 129212
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_41(&iVar0, 1);
	Function_41(&iVar0, 2);
	Function_41(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_582(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1F8DE / 129246
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
			return Function_593(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_586(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_593(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_583(iParam0, bVar2);
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
						bVar2 = Function_593(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_583(iParam0, bVar2);
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

var Function_583(int iParam0, bool bParam1) //Position: 0x1FA28 / 129576
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_27(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_585(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_584(16);
			}
		}
	}
	else if (Function_27(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_585(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_584(256);
			}
		}
	}
	return bParam1;
}

bool Function_584(int iParam0) //Position: 0x1FB5B / 129883
{
	return 2 | iParam0;
}

int Function_585(int iParam0) //Position: 0x1FB65 / 129893
{
	return 4 | iParam0;
}

int Function_586(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1FB6F / 129903
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
				iParam3 = Function_592(iParam0, iParam1, bParam4);
				if (Function_27(iParam3, 4))
				{
					Function_81(&iParam3, 2);
					Function_41(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_584(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_587(iParam0, iParam1, 0, bParam4);
				if (Function_27(iParam3, 4))
				{
					Function_81(&iParam3, 2);
					Function_41(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_584(16);
		}
	}
	return 0;
}

int Function_587(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1FC21 / 130081
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_591(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_590(iVar0, 3, 1, bParam3))
			{
				if (!Function_596(iParam0, 8, 1))
				{
					return Function_589(64, 1024, bParam2);
				}
			}
			return Function_588(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_590(iVar0, 2, 1, bParam3))
			{
				if (!Function_596(iParam0, 32, 1))
				{
					return Function_589(64, 1024, bParam2);
				}
			}
			return Function_588(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_590(iVar0, 1, 1, bParam3))
			{
				if (!Function_596(iParam0, 64, 1))
				{
					return Function_589(64, 1024, bParam2);
				}
			}
			return Function_588(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_590(iVar0, 3, 1, bParam3))
			{
				if (!Function_596(iParam0, 128, 1))
				{
					return Function_589(64, 1024, bParam2);
				}
			}
			return Function_588(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_590(iVar0, 1, 1, bParam3))
			{
				if (!Function_596(iParam0, 1024, 1))
				{
					return Function_589(64, 1024, bParam2);
				}
			}
			return Function_588(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_590(iVar0, 1, 1, bParam3))
			{
				if (!Function_596(iParam0, 1024, 1))
				{
					return Function_589(64, 1024, bParam2);
				}
			}
			return Function_588(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_588(int iParam0, int iParam1, bool bParam2) //Position: 0x1FDDB / 130523
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_589(int iParam0, int iParam1, bool bParam2) //Position: 0x1FDF0 / 130544
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_590(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1FE05 / 130565
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_591(int iParam0) //Position: 0x1FE22 / 130594
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

int Function_592(var uParam0, int iParam1, bool bParam2) //Position: 0x1FE91 / 130705
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_591(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_590(iVar0, 3, 1, bParam2))
			{
				if (!Function_596(uParam0, 8, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000009:
			if (Function_590(iVar0, 3, 1, bParam2))
			{
				if (!Function_596(uParam0, 8, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x0000006E:
			if (Function_590(iVar0, 2, 1, bParam2))
			{
				if (!Function_596(uParam0, 16, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x0000005B:
			if (Function_590(iVar0, 2, 1, bParam2))
			{
				if (!Function_596(uParam0, 32, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000031:
			if (Function_590(iVar0, 1, 1, bParam2))
			{
				if (!Function_596(uParam0, 64, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000007:
			if (Function_590(iVar0, 3, 1, bParam2))
			{
				if (!Function_596(uParam0, 128, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000008:
			if (Function_590(iVar0, 2, 1, bParam2))
			{
				if (!Function_596(uParam0, 256, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000014:
			if (Function_590(iVar0, 1, 1, bParam2))
			{
				if (!Function_596(uParam0, 512, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000018:
			if (Function_590(iVar0, 1, 1, bParam2))
			{
				if (!Function_596(uParam0, 512, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000057:
			if (Function_590(iVar0, 1, 1, bParam2))
			{
				if (!Function_596(uParam0, 1024, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000058:
			if (Function_590(iVar0, 1, 1, bParam2))
			{
				if (!Function_596(uParam0, 1024, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_593(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x200AE / 131246
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
						return Function_592(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_596(iParam0, 2, 1))
					{
						return Function_585(8);
					}
					return Function_584(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_596(iParam0, 4, 1))
					{
						return Function_585(16);
					}
					return Function_584(16);
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
							return Function_587(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_596(iParam0, 2, 1))
						{
							return Function_585(128);
						}
						return Function_584(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_596(iParam0, 4, 1))
						{
							return Function_585(256);
						}
						return Function_584(256);
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
						return Function_587(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_596(iParam0, 2, 1))
					{
						return Function_585(8);
					}
					return Function_584(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_596(iParam0, 4, 1))
					{
						return Function_585(16);
					}
					return Function_584(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_595(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_596(iParam0, 2, 1))
					{
						return Function_585(8);
					}
					return Function_584(8);
				}
				if (!Function_596(iParam0, 4, 1))
				{
					return Function_585(16);
				}
				return Function_584(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_587(iParam0, uParam1, 1, bParam5);
							if (Function_27(iParam4, 4))
							{
								Function_81(&iParam4, 2);
								Function_41(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_594(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_584(128);
							}
							if (!Function_596(iParam0, 2, 1))
							{
								return Function_585(8);
							}
							return Function_584(8);
						}
						if (iParam4 == 2)
						{
							if (Function_594(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_584(256);
							}
							if (!Function_596(iParam0, 4, 1))
							{
								return Function_585(16);
							}
							return Function_584(16);
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

bool Function_594(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2036D / 131949
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

int Function_595(int iParam0, var uParam1, bool bParam2) //Position: 0x20426 / 132134
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_591(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_590(iVar0, 2, 1, bParam2))
			{
				if (!Function_596(iParam0, 16, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x0000005B:
			if (Function_590(iVar0, 2, 1, bParam2))
			{
				if (!Function_596(iParam0, 32, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000057:
			if (Function_590(iVar0, 1, 1, bParam2))
			{
				if (!Function_596(iParam0, 1024, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		case 0x00000058:
			if (Function_590(iVar0, 1, 1, bParam2))
			{
				if (!Function_596(iParam0, 1024, 1))
				{
					return Function_585(64);
				}
			}
			return Function_584(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_596(int iParam0, bool bParam1, bool bParam2) //Position: 0x2053A / 132410
{
	if (bParam2)
	{
		if (!Function_27(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_27(iParam0->f_40, bParam1);
}

int Function_597(int iParam0) //Position: 0x20562 / 132450
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_58());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_58());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_598(int iParam0) //Position: 0x20593 / 132499
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_599(bool bParam0) //Position: 0x205B1 / 132529
{
	if (IS_OBJECT_VALID(bLocal_852) && fLocal_851 < 0.0f)
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_851) < bParam0)
		{
			UNK_0x6745191B(bLocal_852, 0.0f, 0.0f, 0.0f);
			fLocal_851 = 0.0f;
		}
	}
	return;
}

void Function_600(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x205E1 / 132577
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_45())
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

