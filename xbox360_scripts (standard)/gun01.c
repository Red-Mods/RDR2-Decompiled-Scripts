//Decompiled with MagicRDR v1.0
//Function Count : 634
//Statics Count : 1117
//Natives Count : 824
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2593> Local_4 = { 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_654 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_716 = 99;
	bLocal_717 = 6;
	iLocal_709 = 1000;
	while (Function_274())
	{
		Function_224();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_CAUSE_WEAPON_REACTIONS(Global_34573, 1);
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
		SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 1);
		AI_STOP_IGNORING_ACTOR(Global_34573);
	}
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	if (IS_ACTOR_VALID(bLocal_938))
	{
		Function_223(bLocal_938);
	}
	if (IS_DOOR_VALID(bLocal_952))
	{
		Function_222(bLocal_952);
	}
	Function_221(0);
	Function_220();
	Function_219();
	Function_218(2097152);
	Function_215();
	if (IS_ACTORSET_VALID(bLocal_931))
	{
		DESTROY_ACTORSET(bLocal_931);
	}
	if (IS_ACTORSET_VALID(bLocal_932))
	{
		DESTROY_ACTORSET(bLocal_932);
	}
	if (IS_ACTORSET_VALID(bLocal_933))
	{
		DESTROY_ACTORSET(bLocal_933);
	}
	Function_214(bLocal_935);
	Function_213(bLocal_946);
	Function_212(bLocal_987);
	Function_212(bLocal_985);
	Function_212(bLocal_986);
	Function_211();
	Function_209(1);
	Function_209(256);
	if (!bLocal_1043)
	{
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	}
	if (IS_ACTOR_VALID(bLocal_934))
	{
		SET_ACTOR_CAN_PLAY_GESTURES(bLocal_934, true);
		ACTOR_END_FORCE_HOLSTER(bLocal_934);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_934);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_934, true);
		CLEAR_ACTOR_PROOF(bLocal_934, 16);
		if (DECOR_CHECK_EXIST(bLocal_934, "Smoke_Quick_Exit"))
		{
			DECOR_REMOVE(bLocal_934, "Smoke_Quick_Exit");
		}
		if (DECOR_CHECK_EXIST(bLocal_934, "g1_bWalkToBank"))
		{
			DECOR_REMOVE(bLocal_934, "g1_bWalkToBank");
		}
	}
	Function_207(5, 0, 1);
	Function_205(5, 1, 0, 1, 1);
	if (IS_ACTOR_VALID(bLocal_940))
	{
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_940);
	}
	Function_204(bLocal_653);
	Function_204(Local_4);
	Function_203();
	Function_202(1, 1);
	Function_178(bLocal_1044, 1, 0, 1, 1, 1, 1, 1);
	REMOVE_ANIM_SET("smoking_stand_gped");
	Function_174(&bLocal_661);
	Function_174(&bLocal_698);
	Function_173();
	Function_172();
	Function_171();
	Function_170();
	Function_169();
	Function_167();
	RELEASE_LAYOUT_REF(bLocal_653);
	CLEAN_CACHE_ENTRIES();
	if (bLocal_1043)
	{
		Function_24(Local_654, 1, 1, 1, 0);
	}
	else if (bLocal_1044)
	{
		Function_20(Local_654);
	}
	else
	{
		Function_2(Local_654);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x259 / 601
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x27A / 634
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x295 / 661
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2B6 / 694
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x2CC / 716
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

void Function_7(int iParam0) //Position: 0x368 / 872
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x389 / 905
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

void Function_9() //Position: 0x3CF / 975
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x3E8 / 1000
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x43B / 1083
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

struct<16> Function_12(int iParam0) //Position: 0x55F / 1375
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x584 / 1412
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x5A4 / 1444
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x5BB / 1467
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x5D6 / 1494
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x81D / 2077
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x846 / 2118
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

bool Function_19(int iParam0) //Position: 0x86A / 2154
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x87F / 2175
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x89D / 2205
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

struct<16> Function_22(int iParam0) //Position: 0x943 / 2371
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x96D / 2413
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xBC3 / 3011
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
		Function_218(4194304);
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

void Function_25() //Position: 0xCB0 / 3248
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

int Function_26(int iParam0, bool bParam1) //Position: 0xCE0 / 3296
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

int Function_27(int iParam0) //Position: 0xD1D / 3357
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD37 / 3383
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xD4D / 3405
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1044 / 4164
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

void Function_31(char* cParam0, int iParam1) //Position: 0x10B0 / 4272
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x10E7 / 4327
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

bool Function_33(var uParam0, int iParam1) //Position: 0x115F / 4447
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1172 / 4466
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

int Function_35(int iParam0) //Position: 0x1213 / 4627
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_36(int iParam0, bool bParam1) //Position: 0x1250 / 4688
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1263 / 4707
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

void Function_38(int iParam0, int iParam1) //Position: 0x1475 / 5237
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x14AF / 5295
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

bool Function_40() //Position: 0x14F1 / 5361
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x14FA / 5370
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

void Function_42() //Position: 0x154B / 5451
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

void Function_43() //Position: 0x157E / 5502
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

void Function_44() //Position: 0x1684 / 5764
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

void Function_45() //Position: 0x16B7 / 5815
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

void Function_46() //Position: 0x1845 / 6213
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

void Function_47() //Position: 0x19F9 / 6649
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1A07 / 6663
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

var Function_49() //Position: 0x1BF8 / 7160
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1C0D / 7181
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CA8 / 7336
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F43 / 8003
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

var Function_53() //Position: 0x2570 / 9584
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2578 / 9592
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2589 / 9609
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x267E / 9854
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2697 / 9879
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x26FC / 9980
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x270E / 9998
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2720 / 10016
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

int Function_61(int iParam0) //Position: 0x2850 / 10320
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x285F / 10335
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2898 / 10392
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x28D5 / 10453
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A6F / 10863
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

int Function_66(bool bParam0) //Position: 0x2C89 / 11401
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2CCA / 11466
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

struct<8> Function_68() //Position: 0x2D53 / 11603
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

struct<8> Function_69() //Position: 0x2DEA / 11754
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

void Function_70() //Position: 0x2E69 / 11881
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2E8F / 11919
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

void Function_72() //Position: 0x3099 / 12441
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

bool Function_73(vector3 vParam0) //Position: 0x313A / 12602
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3152 / 12626
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

vector3 Function_75() //Position: 0x3239 / 12857
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(int iParam0, bool bParam1) //Position: 0x3242 / 12866
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3251 / 12881
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3267 / 12903
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x332E / 13102
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x334B / 13131
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

bool Function_81(int iParam0) //Position: 0x3827 / 14375
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x383D / 14397
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x385C / 14428
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3876 / 14454
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x38DD / 14557
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

void Function_86() //Position: 0x3AFD / 15101
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3B7D / 15229
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3ECF / 16079
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

int Function_89(int iParam0) //Position: 0x3F52 / 16210
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3F6C / 16236
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3F9A / 16282
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4237 / 16951
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

void Function_93(int iParam0, int iParam1) //Position: 0x43FA / 17402
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x4658 / 18008
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

int Function_95() //Position: 0x47DD / 18397
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

void Function_96() //Position: 0x487C / 18556
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

void Function_97(int iParam0) //Position: 0x492B / 18731
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

var Function_98(int iParam0) //Position: 0x4989 / 18825
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4A18 / 18968
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

var Function_100(int iParam0, int iParam1) //Position: 0x4BB5 / 19381
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

void Function_101() //Position: 0x4BF6 / 19446
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4C0C / 19468
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4C4C / 19532
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4C8C / 19596
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4C9B / 19611
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

int Function_106(int iParam0) //Position: 0x4E63 / 20067
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

var Function_107() //Position: 0x4EF8 / 20216
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4F1D / 20253
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x53D8 / 21464
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

var Function_110(int iParam0) //Position: 0x56ED / 22253
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5790 / 22416
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

int Function_112(int iParam0, bool bParam1) //Position: 0x598B / 22923
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5B27 / 23335
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5BF2 / 23538
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

void Function_115(int iParam0) //Position: 0x64E2 / 25826
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6651 / 26193
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x6757 / 26455
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6784 / 26500
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

var Function_119(vector3 vParam0) //Position: 0x67DB / 26587
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x6829 / 26665
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x687D / 26749
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

void Function_122() //Position: 0x6A1B / 27163
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6A21 / 27169
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6AC5 / 27333
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6B1A / 27418
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6B30 / 27440
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6B81 / 27521
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

void Function_128(var uParam0, int iParam1) //Position: 0x6BAE / 27566
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6BBD / 27581
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6BD4 / 27604
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6BE3 / 27619
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6D2D / 27949
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

bool Function_133() //Position: 0x6D78 / 28024
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6DA5 / 28069
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

int Function_135(int iParam0) //Position: 0x6F55 / 28501
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6FAC / 28588
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

var Function_137(int iParam0) //Position: 0x6FD1 / 28625
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x7027 / 28711
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

bool Function_139(bool bParam0) //Position: 0x7086 / 28806
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x7092 / 28818
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x70AE / 28846
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

int Function_142(int iParam0, int iParam1) //Position: 0x7100 / 28928
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

int Function_143(int iParam0, int iParam1) //Position: 0x7173 / 29043
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x71CF / 29135
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

int Function_145(int iParam0, int iParam1) //Position: 0x7240 / 29248
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x729A / 29338
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7546 / 30022
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

void Function_148(int iParam0, bool bParam1) //Position: 0x77D5 / 30677
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

void Function_149() //Position: 0x7834 / 30772
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

var Function_150(int iParam0, int iParam1) //Position: 0x78AF / 30895
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

int Function_151(int iParam0) //Position: 0x84A2 / 33954
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x84B7 / 33975
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x8506 / 34054
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8513 / 34067
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8564 / 34148
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

bool Function_156(int iParam0, int iParam1) //Position: 0x85D2 / 34258
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x85E5 / 34277
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

var Function_158(int iParam0) //Position: 0x86E4 / 34532
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

bool Function_159(var uParam0, int iParam1) //Position: 0x873C / 34620
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x8758 / 34648
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

bool Function_161(int iParam0) //Position: 0x87AF / 34735
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(int iParam0) //Position: 0x87C1 / 34753
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

void Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8828 / 34856
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8905 / 35077
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

void Function_165() //Position: 0x8A7E / 35454
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_166(int iParam0) //Position: 0x8A8A / 35466
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

void Function_167() //Position: 0x8AD0 / 35536
{
	Function_168();
	return;
}

void Function_168() //Position: 0x8AD9 / 35545
{
	Function_174(&Local_4 + 4);
	Function_174(&Local_4 + 116);
	Function_174(&Local_4 + 168);
	Function_174(&Local_4 + 220);
	Function_174(&Local_4 + 284);
	Function_174(&Local_4 + 384);
	Function_174(&Local_4 + 460);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_169() //Position: 0x8B18 / 35608
{
	Function_174(&Local_4 + 460);
	return;
}

void Function_170() //Position: 0x8B26 / 35622
{
	Function_174(&Local_4 + 384);
	return;
}

void Function_171() //Position: 0x8B34 / 35636
{
	Function_174(&Local_4 + 284);
	return;
}

void Function_172() //Position: 0x8B42 / 35650
{
	Function_174(&Local_4 + 220);
	return;
}

void Function_173() //Position: 0x8B4F / 35663
{
	Function_174(&Local_4 + 116);
	return;
}

void Function_174(bool bParam0) //Position: 0x8B5C / 35676
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_175(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_175(var uParam0, int iParam1) //Position: 0x8B82 / 35714
{
	if (Function_177(uParam0[iParam13], 4))
	{
		if (Function_177(uParam0[iParam13], 1))
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
			Function_176(uParam0[iParam13], 1);
			Function_176(uParam0[iParam13], 2);
			Function_176(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_176(var uParam0, int iParam1) //Position: 0x8CB0 / 36016
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_177(var uParam0, bool bParam1) //Position: 0x8CCA / 36042
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8CE7 / 36071
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
	Function_219();
	Function_198(0);
	Function_197();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_196();
	Function_195();
	Function_200();
	ENABLE_JOURNAL_REPLAY(1);
	Function_194(1);
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
		Function_193(Global_34573);
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
	Function_192(Global_28178);
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
	Function_191(1178687);
	Function_209(33039);
	Function_190(0x218003f);
	Function_189(4194560);
	Function_188();
	Function_187();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_184(0, 1, 1);
	}
	else
	{
		Function_184(0, 1, 1);
	}
	Function_183();
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
	Function_179();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_179() //Position: 0x8ED8 / 36568
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
		if (Function_182() > 3)
		{
			bVar0 *= 2;
		}
		Function_180(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_180(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x8F2E / 36654
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_181((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_181(bool bParam0) //Position: 0x8F74 / 36724
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_182() //Position: 0x8F99 / 36761
{
	return Global_12976.f_156;
}

void Function_183() //Position: 0x8FA4 / 36772
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

void Function_184(int iParam0, bool bParam1, int iParam2) //Position: 0x8FCE / 36814
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
			Function_185(Global_29006);
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

void Function_185(int iParam0) //Position: 0x90D9 / 37081
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_186())
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

bool Function_186() //Position: 0x9158 / 37208
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

void Function_187() //Position: 0x91B5 / 37301
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

void Function_188() //Position: 0x91DB / 37339
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

void Function_189(int iParam0) //Position: 0x9201 / 37377
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_190(int iParam0) //Position: 0x921E / 37406
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_191(bool bParam0) //Position: 0x9231 / 37425
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_192(int iParam0) //Position: 0x925E / 37470
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

void Function_193(bool bParam0) //Position: 0x9325 / 37669
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

void Function_194(bool bParam0) //Position: 0x93A1 / 37793
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

void Function_195() //Position: 0x9415 / 37909
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

void Function_196() //Position: 0x9456 / 37974
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

void Function_197() //Position: 0x9497 / 38039
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_198(int iParam0) //Position: 0x94AB / 38059
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_199())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_199() //Position: 0x94E7 / 38119
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

void Function_200() //Position: 0x950C / 38156
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

int Function_201() //Position: 0x9537 / 38199
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_202(bool bParam0, bool bParam1) //Position: 0x9551 / 38225
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

void Function_203() //Position: 0x959D / 38301
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_204(bool bParam0) //Position: 0x95A6 / 38310
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

int Function_205(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x95FE / 38398
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
		Function_206(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_223(StackVal);
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

void Function_206(bool bParam0) //Position: 0x991C / 39196
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_207(int iParam0, bool bParam1, bool bParam2) //Position: 0x9931 / 39217
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
						Function_223(bVar1);
					}
				}
				Function_208(bVar0);
			}
		}
	}
	return;
}

void Function_208(bool bParam0) //Position: 0x9A28 / 39464
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

void Function_209(int iParam0) //Position: 0x9A54 / 39508
{
	Function_210(&Global_28842, iParam0);
	return;
}

void Function_210(var uParam0, var uParam1) //Position: 0x9A62 / 39522
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_211() //Position: 0x9A7D / 39549
{
	Function_174(&Local_1081 + 4);
	RELEASE_LAYOUT_REF(Local_1081);
	return;
}

void Function_212(bool bParam0) //Position: 0x9A91 / 39569
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_213(bool bParam0) //Position: 0x9AA4 / 39588
{
	if (IS_BLIP_VALID(bParam0))
	{
		REMOVE_BLIP(bParam0);
	}
	return;
}

void Function_214(bool bParam0) //Position: 0x9AB7 / 39607
{
	if (IS_ACTOR_VALID(bParam0))
	{
		RELEASE_ACTOR(bParam0);
	}
	return;
}

void Function_215() //Position: 0x9ACA / 39626
{
	if (IS_ACTORSET_VALID(bLocal_931))
	{
		Function_216(bLocal_931);
	}
	if (IS_ACTORSET_VALID(bLocal_932))
	{
		Function_216(bLocal_932);
	}
	return;
}

void Function_216(bool bParam0) //Position: 0x9AEE / 39662
{
	bool bVar0;
	
	Function_217(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_217(int iParam0) //Position: 0x9B36 / 39734
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*iParam0, GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_218(bool bParam0) //Position: 0x9B8F / 39823
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

void Function_219() //Position: 0x9BC3 / 39875
{
	Global_8722 = 0.0f;
	return;
}

void Function_220() //Position: 0x9BCD / 39885
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_OBJECT_VALID(Local_720[iVar04]))
		{
			DESTROY_OBJECT(Local_720[iVar04]);
		}
		iVar0++;
	}
	return;
}

void Function_221(bool bParam0) //Position: 0x9BFC / 39932
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_OBJECT_VALID(Local_720[iVar04]))
		{
			if (bParam0)
			{
				if (!IS_BLIP_VALID(bLocal_947[iVar0]))
				{
					bLocal_947[iVar0] = ADD_BLIP_FOR_COORD(&Local_4 + 2112[iVar06], 322, 0, 2, 0);
					SET_BLIP_SCALE(bLocal_947[iVar0], 0,65f);
					SET_BLIP_NAME(bLocal_947[iVar0], "Gun01_bottleBlip");
				}
			}
			else
			{
				Function_213(bLocal_947[iVar0]);
			}
		}
		iVar0++;
	}
	return;
}

void Function_222(bool bParam0) //Position: 0x9C86 / 40070
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

void Function_223(bool bParam0) //Position: 0x9CDA / 40154
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

void Function_224() //Position: 0x9D06 / 40198
{
	var uVar0[20];
	char* cVar21;
	
	if (!Function_273())
	{
		return;
	}
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "Stage 03: Birds";
	uVar0[4] = "Stage 04: Rescue";
	uVar0[5] = "Stage 05: Escort";
	uVar0[6] = "Final Cutscene";
	uVar0[7] = "Cheat Bottles";
	uVar0[8] = "Cheat Birds";
	uVar0[9] = "Full Dead Eye";
	uVar0[10] = "Kill Banditos";
	uVar0[11] = "Reset Speech Hist";
	uVar0[12] = "GiveWeapon (Anim)";
	uVar0[13] = "GiveWeapon (NoAnim)";
	uVar0[14] = "Landon Betrayal";
	uVar0[15] = "Driver is Friendly";
	uVar0[16] = "Driver is Neutral";
	uVar0[17] = "Cower Animset";
	uVar0[18] = "Teleport Plr Horse";
	uVar0[19] = "Kill Captor";
	cVar21 = Function_259(&uLocal_702, &uVar0, &Local_654 + 4, GET_DEBUG_PADINDEX(), 0);
	if (Function_258(&cVar21, &iLocal_716, &bLocal_717, &iLocal_709))
	{
		Function_251();
		Function_250();
	}
	switch (cVar21)
	{
		case 0x00000000:
			Function_251();
			Function_250();
			Function_249(&bLocal_1043, 8);
			break;
		
		case 0x00000001:
			Function_251();
			Function_250();
			Function_248("Failed from debug menu.");
			Function_244(iLocal_716);
			Function_240(StackVal, StackVal, 5, &bLocal_1044, &iLocal_716, Function_246(iLocal_716), Function_244(iLocal_716), 0);
			break;
		
		case 0x00000002:
			Function_251();
			Function_250();
			Function_236(&bLocal_1046, 4);
			break;
		
		case 0x00000003:
			Function_251();
			Function_250();
			Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_234();
			iLocal_709 = 1000;
			iLocal_716 = 2;
			Function_231(0);
			break;
		
		case 0x00000004:
			Function_251();
			Function_250();
			Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_230();
			iLocal_709 = 1000;
			iLocal_716 = 3;
			Function_231(0);
			break;
		
		case 0x00000005:
			Function_251();
			Function_250();
			Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_229();
			iLocal_709 = 1000;
			iLocal_716 = 4;
			Function_231(0);
			break;
		
		case 0x00000006:
			Function_251();
			Function_250();
			Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_227();
			iLocal_709 = 1000;
			iLocal_716 = 101;
			Function_231(0);
			break;
		
		case 0x00000007:
			Function_251();
			iLocal_1055 = 1;
			break;
		
		case 0x00000008:
			Function_251();
			Function_226();
			iLocal_1056 = 1;
			break;
		
		case 0x00000009:
			Function_251();
			SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			break;
		
		case 0x0000000A:
			Function_251();
			if (IS_ACTORSET_VALID(bLocal_933))
			{
				Function_225(&bLocal_933);
			}
			break;
		
		case 0x0000000B:
			Function_251();
			AUDIO_RESET_SPEECH_HISTORY();
			break;
		
		case 0x0000000C:
			Function_251();
			if (IS_ACTOR_ALIVE((*&Local_4 + 620)[02]))
			{
				ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 620)[02], 5, 1);
			}
			break;
		
		case 0x0000000D:
			Function_251();
			if (IS_ACTOR_ALIVE((*&Local_4 + 620)[02]))
			{
				ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 620)[02], 5, 0);
			}
			break;
		
		case 0x0000000E:
			Function_251();
			TASK_KILL_CHAR(bLocal_934, bLocal_941);
			break;
		
		case 0x0000000F:
			Function_251();
			SET_ACTOR_FACTION(bLocal_941, 20);
			SET_ACTOR_IS_COMPANION(bLocal_941, 1);
			break;
		
		case 0x00000010:
			Function_251();
			SET_ACTOR_FACTION(bLocal_941, 21);
			SET_ACTOR_IS_COMPANION(bLocal_941, 0);
			break;
		
		case 0x00000011:
			Function_251();
			RESET_ANIM_SET_FOR_ACTOR(bLocal_941, 0);
			SET_ANIM_SET_FOR_ACTOR(bLocal_941, "knl_cower_A", 1);
			break;
		
		case 0x00000012:
			Function_251();
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[126]), 1, true, 1);
			break;
		
		case 0x00000013:
			Function_251();
			if (IS_ACTOR_ALIVE((*&Local_4 + 620)[02]))
			{
				KILL_ACTOR((*&Local_4 + 620)[02]);
			}
			break;
	}
	return;
}

void Function_225(bool bParam0) //Position: 0xA193 / 41363
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*bParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(*bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_226() //Position: 0xA1DA / 41434
{
	if (IS_ACTORSET_VALID(bLocal_931))
	{
		Function_225(&bLocal_931);
	}
	return;
}

void Function_227() //Position: 0xA1EF / 41455
{
	Function_221(0);
	Function_220();
	Function_228();
	Function_213(bLocal_946);
	Function_212(bLocal_987);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	ACTOR_END_FORCE_HOLSTER(bLocal_934);
	SET_PLAYER_CAUSE_WEAPON_REACTIONS(Global_34573, 1);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_941);
	Function_213(bLocal_946);
	Function_219();
	Function_218(2097152);
	return;
}

void Function_228() //Position: 0xA245 / 41541
{
	if (IS_ACTORSET_VALID(bLocal_931))
	{
		Function_225(&bLocal_931);
	}
	if (IS_ACTORSET_VALID(bLocal_932))
	{
		Function_225(&bLocal_932);
	}
	return;
}

void Function_229() //Position: 0xA269 / 41577
{
	Function_221(0);
	Function_220();
	Function_228();
	Function_213(bLocal_946);
	Function_212(bLocal_987);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_PLAYER_CAUSE_WEAPON_REACTIONS(Global_34573, 1);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	Function_213(bLocal_946);
	Function_207(5, 0, 1);
	if (IS_ACTORSET_VALID(bLocal_933))
	{
		Function_216(bLocal_933);
	}
	else
	{
		bLocal_933 = CREATE_ACTORSET_IN_LAYOUT(bLocal_653, "CurBanditoSet", 0);
	}
	ACTOR_END_FORCE_HOLSTER(bLocal_934);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_941);
	Function_219();
	Function_218(2097152);
	return;
}

void Function_230() //Position: 0xA30C / 41740
{
	Function_221(0);
	Function_220();
	Function_228();
	Function_213(bLocal_946);
	Function_212(bLocal_987);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_PLAYER_CAUSE_WEAPON_REACTIONS(Global_34573, 1);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	Function_213(bLocal_946);
	Function_219();
	Function_218(2097152);
	return;
}

void Function_231(int iParam0) //Position: 0xA370 / 41840
{
	char* cVar0[32];
	
	Function_232(&bLocal_988);
	Function_232(&bLocal_991);
	Function_232(&bLocal_994);
	bLocal_717 = iParam0;
	iLocal_1033 = 0;
	iLocal_1050 = 0;
	iLocal_1051 = 0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_716)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "03", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "04", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "05", 32);
			break;
		
		case 0x00000065:
			stradd(&cVar0, "FINAL", 32);
			break;
		
		default:
			LOG_ERROR("GoToGoal: Unknown stage ID!");
			break;
	}
	stradd(&cVar0, " - ", 32);
	switch (iParam0)
	{
		case 0x00000000:
			stradd(&cVar0, "INITIALIZE", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "nSTREAMING", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "POST STREAMING", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "CUTSCENE", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "POST CUTSCENE", 32);
			break;
		
		case 0x00000069:
			stradd(&cVar0, "FADE OUT", 32);
			break;
		
		case 0x0000006A:
			stradd(&cVar0, "COMPLETE", 32);
			break;
		
		default:
			if (iParam0 <= 6 && iParam0 >= 104)
			{
				stradd(&cVar0, "GOAL ", 32);
				straddi(&cVar0, (iParam0 + 1 - 6), 32);
			}
			else
			{
				LOG_ERROR("GoToGoal: Unknown goal ID!");
			}
			break;
	}
	return;
}

void Function_232(bool bParam0) //Position: 0xA53F / 42303
{
	Function_233(bParam0, 0.0f);
	return;
}

void Function_233(bool bParam0, float fParam1) //Position: 0xA54B / 42315
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(bParam0, 1);
	Function_36(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_234() //Position: 0xA56C / 42348
{
	Function_221(0);
	Function_220();
	Function_213(bLocal_946);
	Function_212(bLocal_987);
	Function_219();
	Function_218(2097152);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	return;
}

void Function_235(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xA5BE / 42430
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

void Function_236(bool bParam0, int iParam1) //Position: 0xA5E7 / 42471
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_237(iParam1);
	*bParam0 = 1;
	return;
}

void Function_237(int iParam0) //Position: 0xA60A / 42506
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_248("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_239(2) || Function_239(8)) || Function_239(9)) || Function_239(10))
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
		Function_248("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_248("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_248("");
	}
	else if (iParam0 == 8)
	{
		Function_238();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_238();
	}
	return;
}

void Function_238() //Position: 0xA701 / 42753
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_239(bool bParam0) //Position: 0xA70D / 42765
{
	int iVar0;
	
	if (!Function_28(bParam0))
	{
		return 0;
	}
	iVar0 = Function_27(bParam0);
	if (!Function_18(Function_27(bParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_240(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA743 / 42819
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_241(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_237(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_241(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA780 / 42880
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_243(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_242(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_242(int iParam0) //Position: 0xA803 / 43011
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

var Function_243(vector3 vParam0, bool bParam3) //Position: 0xACB1 / 44209
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

vector3 Function_244(int iParam0) //Position: 0xAD1C / 44316
{
	Function_245(iParam0 + 1);
	return StackVal, StackVal, Function_245(iParam0 + 1);
}

vector3 Function_245(int iParam0) //Position: 0xAD29 / 44329
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, StackVal, *(&Local_4 + 892[06]);
		
		case 0x00000001:
		case 0x00000002:
			return StackVal, StackVal, *(&Local_4 + 892[16]);
		
		case 0x00000003:
			return StackVal, StackVal, *(&Local_4 + 892[26]);
		
		case 0x00000004:
			return StackVal, StackVal, *(&Local_4 + 892[36]);
		
		default:
	}
	return StackVal, StackVal, *(&Local_4 + 892[46]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return StackVal, StackVal, *(&Local_4 + 892[06]);
}

int Function_246(int iParam0) //Position: 0xADE4 / 44516
{
	return Function_247(iParam0 + 1);
}

int Function_247(bool bParam0) //Position: 0xADF1 / 44529
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal;
		
		case 0x00000001:
		case 0x00000002:
			return StackVal;
		
		case 0x00000003:
			return StackVal;
		
		case 0x00000004:
			return StackVal;
		
		default:
	}
	return StackVal;
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return StackVal;
}

void Function_248(bool bParam0) //Position: 0xAEB8 / 44728
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_249(bool bParam0, int iParam1) //Position: 0xAF22 / 44834
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_237(iParam1);
	*bParam0 = 1;
	return;
}

void Function_250() //Position: 0xAF45 / 44869
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_251() //Position: 0xAF5A / 44890
{
	Function_253();
	Function_252(10, 3);
	return;
}

void Function_252(int iParam0, int iParam1) //Position: 0xAF69 / 44905
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

void Function_253() //Position: 0xB0A0 / 45216
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_257())
	{
		Function_256(10, 3);
	}
	else
	{
		Function_254();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_254() //Position: 0xB0EB / 45291
{
	Function_255(25, 2);
	return;
}

void Function_255(int iParam0, int iParam1) //Position: 0xB0F7 / 45303
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

void Function_256(int iParam0, int iParam1) //Position: 0xB2F5 / 45813
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

bool Function_257() //Position: 0xB42C / 46124
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

bool Function_258(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB493 / 46227
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_251();
			Function_250();
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
		Function_248("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_259(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB539 / 46393
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_272(&Var15, &Var0);
	uVar20 = Function_271(*uParam1, &Var15);
	Function_270(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_269(uParam0, uVar20);
	Function_267(StackVal, uParam0, Var15.f_12);
	Function_265(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_264(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_261(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_260(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_260(int iParam0, int iParam1, int iParam2) //Position: 0xB600 / 46592
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

bool Function_261(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB65C / 46684
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
				Function_263(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_263(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_260(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_262(bParam1->f_32);
	}
	else
	{
		Function_262(bParam1->f_32);
	}
	return 0;
}

void Function_262(bool bParam0) //Position: 0xB7E2 / 47074
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

void Function_263(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB81C / 47132
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

var Function_264(int iParam0, var uParam1, int iParam2) //Position: 0xB8CA / 47306
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_265(var uParam0, int iParam1, int iParam2) //Position: 0xB8EE / 47342
{
	switch (Function_266())
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

int Function_266() //Position: 0xB98A / 47498
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

void Function_267(var uParam0, int iParam1, int iParam2) //Position: 0xB9C6 / 47558
{
	switch (Function_268(uParam0))
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

int Function_268(int iParam0) //Position: 0xBA5E / 47710
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_153(*iParam0, 0x40000000))
		{
			Function_76(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_153(*iParam0, 0x40000000))
		{
			Function_76(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_153(*iParam0, 0x20000000))
		{
			Function_76(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_153(*iParam0, 0x20000000))
		{
			Function_76(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(iParam0, 0x20000000);
	return 0;
}

var Function_269(var uParam0, int iParam1) //Position: 0xBBA9 / 48041
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

void Function_270(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBCF8 / 48376
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

var Function_271(int iParam0, int iParam1) //Position: 0xBD8B / 48523
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_272(var uParam0, var uParam1) //Position: 0xBDA5 / 48549
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

bool Function_273() //Position: 0xBDF3 / 48627
{
	return Global_30920;
}

bool Function_274() //Position: 0xBDFC / 48636
{
	if (IS_EXITFLAG_SET())
	{
		Function_244(iLocal_716);
		Function_240(StackVal, StackVal, 4, &bLocal_1044, &iLocal_716, Function_246(iLocal_716), Function_244(iLocal_716), 0);
		return 0;
	}
	Function_633(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_654, iLocal_716, bLocal_717, &bLocal_1046, &bLocal_1043, &bLocal_1044);
	if (iLocal_716 == 99 && iLocal_716 == 100)
	{
		if (Function_632(bLocal_717))
		{
			if (iLocal_716 <= 0 && iLocal_716 >= 2)
			{
				if (!IS_PLAYER_DEADEYE(0))
				{
					ADD_PLAYER_DEADEYE_POINTS(0, 0,5f, 0);
				}
			}
			if (IS_ACTOR_DEAD(Global_34573))
			{
				Function_244(iLocal_716);
				Function_240(StackVal, StackVal, 1, &bLocal_1044, &iLocal_716, Function_246(iLocal_716), Function_244(iLocal_716), 0);
				return 1;
			}
			if (Global_3404)
			{
				Function_244(iLocal_716);
				Function_240(StackVal, StackVal, 2, &bLocal_1044, &iLocal_716, Function_246(iLocal_716), Function_244(iLocal_716), 0);
				return 1;
			}
			if (Global_3403)
			{
				Function_244(iLocal_716);
				Function_240(StackVal, StackVal, 2, &bLocal_1044, &iLocal_716, Function_246(iLocal_716), Function_244(iLocal_716), 0);
				return 1;
			}
			if (Function_612(&Local_773, &uLocal_733, &uLocal_876, cLocal_927, iLocal_1057))
			{
				if (Function_610(&uLocal_876))
				{
					Function_244(iLocal_716);
					Function_240(StackVal, StackVal, 5, &bLocal_1044, &iLocal_716, Function_246(iLocal_716), Function_244(iLocal_716), 0);
					return 1;
				}
			}
			if (IS_ACTOR_VALID(bLocal_934))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bLocal_934))
				{
					Function_248("Gunslinger_attacked");
					Function_244(iLocal_716);
					Function_240(StackVal, StackVal, 5, &bLocal_1044, &iLocal_716, Function_246(iLocal_716), Function_244(iLocal_716), 0);
					return 1;
				}
			}
			Function_609();
		}
	}
	switch (iLocal_716)
	{
		case 0x00000063:
			Function_577();
			break;
		
		case 0x00000000:
			Function_542();
			break;
		
		case 0x00000002:
			Function_507();
			break;
		
		case 0x00000003:
			Function_458();
			break;
		
		case 0x00000004:
			Function_365();
			break;
		
		case 0x00000065:
			Function_277();
			break;
		
		case 0x00000064:
			if (Function_276(&bLocal_1044))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_275(&iLocal_716, &bLocal_717, &iLocal_709))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1043)
	{
		Function_249(&bLocal_1043, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1044 && iLocal_716 == 100)
	{
		Function_244(iLocal_716);
		Function_240(StackVal, StackVal, 5, &bLocal_1044, &iLocal_716, Function_246(iLocal_716), Function_244(iLocal_716), 0);
	}
	if (bLocal_1046)
	{
		Function_236(&bLocal_1046, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_275(var uParam0, var uParam1, int iParam2) //Position: 0xC018 / 49176
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

bool Function_276(int iParam0) //Position: 0xC058 / 49240
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_277() //Position: 0xC06B / 49259
{
	switch (bLocal_717)
	{
		case 0x00000000:
			Function_361(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_218(8);
			Function_359(1);
			Function_359(256);
			Function_358((*&Local_4 + 760)[0]);
			if (!iLocal_1036[4])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!Function_357(Global_30693[0]))
				{
					Function_356(&Local_654);
				}
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Function_355();
				Function_231(1);
			}
			else
			{
				Function_354();
				Function_231(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_357(Global_30693[0])) && Function_353())
			{
				Function_354();
				Function_231(2);
			}
			else if (Function_350(&bLocal_988) < 2.0f)
			{
				Function_232(&bLocal_988);
			}
			break;
		
		case 0x00000002:
			if (Function_350(&bLocal_988) < 1.0f || iLocal_1036[4])
			{
				Function_231(3);
			}
			break;
		
		case 0x00000003:
			if (Function_280("$/cutscene/GUN01_CS03/GUN01_CS03", &iLocal_709, &Local_654, &iLocal_716, 73042, 57801, 54195, 54018, 53758, 52495, 1, 2, 1, 1, 2, 0, 1))
			{
				Function_231(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_279(bLocal_940);
				Function_278(StackVal, StackVal, bLocal_940, Function_279(bLocal_940), 0, 0, 2, 1);
				Function_169();
				bLocal_1043 = true;
			}
			break;
	}
	return;
}

void Function_278(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xC1C4 / 49604
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

vector3 Function_279(bool bParam0) //Position: 0xC2CC / 49868
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_280(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xC2DD / 49885
{
	if (!bParam15)
	{
		Function_290(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_289(iParam2) || iParam2->f_24 < 1))
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
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_288())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_287(1);
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
					Function_287(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_350(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_350(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_285(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_287(0);
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
						Function_284(1.0f);
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
						Function_282();
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
					Function_281(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_289(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_281(bool bParam0) //Position: 0xC8F1 / 51441
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

void Function_282() //Position: 0xC996 / 51606
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_283();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_283() //Position: 0xC9DB / 51675
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_284(bool bParam0) //Position: 0xC9ED / 51693
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

void Function_285(bool bParam0, bool bParam1) //Position: 0xCA0A / 51722
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
			if ((bVar3 == Global_34573 && !Function_286(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_286(bool bParam0) //Position: 0xCA8A / 51850
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

int Function_287(bool bParam0) //Position: 0xCAB9 / 51897
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

bool Function_288() //Position: 0xCB71 / 52081
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

bool Function_289(int iParam0) //Position: 0xCBAB / 52139
{
	return iParam0->f_20;
}

void Function_290(var uParam0, int iParam1) //Position: 0xCBB5 / 52149
{
	Function_291(uParam0, iParam1, 0);
	return;
}

void Function_291(var uParam0, bool bParam1, bool bParam2) //Position: 0xCBC3 / 52163
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
			Function_235(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_235(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_292() //Position: 0xCD0F / 52495
{
	if (!IS_ACTOR_VALID(bLocal_938))
	{
		bLocal_938 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_938, 1);
	}
	iLocal_1045 = 1;
	return 1;
}

bool Function_293(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xCD39 / 52537
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
	if (Global_3381 || Function_239(1))
	{
		Function_300(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_299())
		{
			return "";
		}
	}
	if (!Function_297())
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
		Function_296(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_296(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_296(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_296(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_295(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_295(StackVal, StackVal, vVar5, 0, 1, 1);
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

void Function_294(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xD091 / 53393
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

var Function_295(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD0CE / 53454
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

vector3 Function_296(bool bParam0) //Position: 0xD169 / 53609
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

bool Function_297() //Position: 0xD190 / 53648
{
	if (Function_298() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_298() //Position: 0xD1A6 / 53670
{
	return Global_12976.f_152;
}

bool Function_299() //Position: 0xD1B1 / 53681
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_300(var uParam0, bool bParam1, bool bParam2) //Position: 0xD1D1 / 53713
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

int Function_301() //Position: 0xD1FE / 53758
{
	Function_302(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_302(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xD212 / 53778
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
		Function_250();
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
	Function_281(bParam9);
}

int Function_303() //Position: 0xD302 / 54018
{
	if (!iLocal_1045)
	{
		Function_304();
	}
	return 1;
}

void Function_304() //Position: 0xD313 / 54035
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[46]), 1, true, 1);
	if (GET_MOUNT(Global_34573) != bLocal_938)
	{
		ACTOR_MOUNT_ACTOR(Global_34573, bLocal_938);
	}
	CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_940);
	ENABLE_VEHICLE_SEAT(bLocal_940, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_940, true, 0);
	ENABLE_VEHICLE_SEAT(bLocal_940, 2, 0);
	ENABLE_VEHICLE_SEAT(bLocal_940, 3, 0);
	ENABLE_VEHICLE_SEAT(bLocal_940, 4, 0);
	ENABLE_VEHICLE_SEAT(bLocal_940, 5, 0);
	TASK_STAND_STILL(bLocal_940, -1.0f, 0, 0);
	Function_305(bLocal_941);
	Function_305(bLocal_939);
	return;
}

void Function_305(bool bParam0) //Position: 0xD3A0 / 54176
{
	if (IS_ACTOR_VALID(bParam0))
	{
		DESTROY_ACTOR(bParam0);
	}
	return;
}

int Function_306() //Position: 0xD3B3 / 54195
{
	if (!IS_ACTOR_VALID(bLocal_938))
	{
		if (Function_299())
		{
			bLocal_938 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_938, 1);
		}
	}
	if (!iLocal_1080)
	{
		Function_319();
		iLocal_1080 = 1;
	}
	Function_305(bLocal_939);
	Function_307();
	return 1;
}

int Function_307() //Position: 0xD3F7 / 54263
{
	bool bVar0;
	int iVar1;
	
	if (iLocal_1065)
	{
		return 1;
	}
	if (!IS_ACTOR_VALID(bLocal_940))
	{
		return 0;
	}
	if (!Function_308(bLocal_940))
	{
		return 0;
	}
	uLocal_966[0] = Local_1081.f_44;
	uLocal_966[1] = Local_1081.f_48;
	uLocal_966[2] = Local_1081.f_52;
	uLocal_966[3] = Local_1081.f_56;
	uLocal_966[4] = Local_1081.f_60;
	uLocal_966[5] = Local_1081.f_64;
	uLocal_966[6] = Local_1081.f_68;
	uLocal_966[7] = Local_1081.f_72;
	uLocal_966[8] = Local_1081.f_76;
	uLocal_966[9] = Local_1081.f_80;
	uLocal_966[10] = Local_1081.f_84;
	uLocal_966[11] = Local_1081.f_88;
	uLocal_966[12] = Local_1081.f_92;
	uLocal_966[13] = Local_1081.f_96;
	uLocal_966[14] = Local_1081.f_100;
	uLocal_966[15] = Local_1081.f_104;
	uLocal_966[16] = Local_1081.f_108;
	uLocal_966[17] = Local_1081.f_112;
	iVar1 = 0;
	while (iVar1 <= 18)
	{
		bVar0 = uLocal_966[iVar1];
		if (IS_OBJECT_VALID(bVar0))
		{
			SET_PROP_AI_OBSTACLE_ENABLED(bVar0, 0);
			SET_OBJECT_COLLIDE_WITH_WORLD(bVar0, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar0, 0);
		}
		iVar1++;
	}
	iLocal_1065 = 1;
	return 1;
}

bool Function_308(int iParam0) //Position: 0xD529 / 54569
{
	var uVar0;
	
	Function_318(3, 2);
	uVar0 = uVar0;
	Function_316(&Local_1081 + 4, "p_gen_sackMoney01x", 0, 0);
	Function_316(&Local_1081 + 4, "p_gen_crate07x", 0, 0);
	Function_316(&Local_1081 + 4, "p_gen_crate06x", 0, 0);
	if (!Function_310(&Local_1081 + 4))
	{
		return 0;
	}
	Local_1081 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	Local_1081.f_44 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x0", "p_gen_sackMoney01x", -0,3154486f, 1,154155f, -0,9622214f, 0.0f, 0.0f, -9,321589f, 0);
	Local_1081.f_48 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x1", "p_gen_sackMoney01x", -0,2916805f, 1,196864f, -0,9578612f, 0.0f, 178,9254f, 0.0f, 1);
	Local_1081.f_52 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x2", "p_gen_sackMoney01x", 0,6156588f, 1,195278f, -1,019992f, 0.0f, -3,339726f, 0.0f, 0);
	Local_1081.f_56 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x3", "p_gen_sackMoney01x", -0,1661063f, 1,385329f, -1,016633f, 0.0f, 0.0f, -0,7161102f, 0);
	Local_1081.f_60 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x4", "p_gen_sackMoney01x", 0,2781922f, 1,297465f, -1,005139f, 181,1454f, 3,207685f, -70,33696f, 0);
	Local_1081.f_64 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x5", "p_gen_sackMoney01x", 0,2053301f, 1,52676f, -0,9958731f, -3,766711f, -180,4286f, -24,28022f, 0);
	Local_1081.f_68 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x6", "p_gen_sackMoney01x", 0,003635607f, 1,447243f, -0,9762917f, -0,341668f, -180,0235f, 93,93499f, 0);
	Local_1081.f_72 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x7", "p_gen_sackMoney01x", -0,3629942f, 1,792408f, -1,002066f, 0.0f, 0.0f, 60,03253f, 0);
	Local_1081.f_76 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x8", "p_gen_sackMoney01x", 0,3350504f, 1,629029f, -1,054297f, 0.0f, 0.0f, -12,34705f, 0);
	Local_1081.f_80 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x9", "p_gen_sackMoney01x", 0,4773167f, 1,593739f, -1,020887f, 0.0f, 0.0f, -55,31095f, 0);
	Local_1081.f_84 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x10", "p_gen_sackMoney01x", -0,2654437f, 1,557662f, -0,9422174f, -1,651038f, 180,4257f, 75,54572f, 0);
	Local_1081.f_88 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x11", "p_gen_sackMoney01x", 0,2665071f, 1,181799f, -0,2288854f, 0.0f, -90,16331f, 0.0f, 0);
	Local_1081.f_92 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x12", "p_gen_sackMoney01x", 0,193605f, 1,18296f, -0,2179785f, 0.0f, 90,47365f, 0.0f, 0);
	Local_1081.f_96 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x13", "p_gen_sackMoney01x", 0,262015f, 1,347278f, -0,4580409f, 88,95199f, -43,29229f, -89,28131f, 0);
	Local_1081.f_100 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x14", "p_gen_sackMoney01x", 0,2027059f, 1,384273f, -0,3965118f, 0.0f, 89,66659f, 0.0f, 0);
	Local_1081.f_104 = CREATE_PROP_IN_LAYOUT(Local_1081, "sackMoney01x15", "p_gen_sackMoney01x", -0,1216361f, 1,423949f, 0,121199f, 128,6321f, -5,478947f, 178,8779f, 1);
	Local_1081.f_108 = CREATE_PROP_IN_LAYOUT(Local_1081, "ncrate07x0", "p_gen_crate07x", -0,5709198f, 1,193682f, 1,084488f, 0.0f, 8,083189f, 0.0f, 1);
	Local_1081.f_112 = CREATE_PROP_IN_LAYOUT(Local_1081, "ncrate06x0", "p_gen_crate06x", -0,6212885f, 1,204079f, 0,3885851f, 0.0f, 0.0f, 0.0f, 1);
	Function_309(Local_1081, iParam0);
	return 1;
}

void Function_309(bool bParam0, bool bParam1) //Position: 0xDAD3 / 56019
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			bVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(bVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

bool Function_310(bool bParam0) //Position: 0xDB15 / 56085
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_315();
	iVar1 = 0;
	if (!Function_177(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_314(bParam0[iVar03], 8);
		}
		else if (Function_313())
		{
			iVar1 = 1;
			Function_314(bParam0[iVar03], 8);
		}
		Function_314(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_177(bParam0[iVar03], 4))
		{
			if (!Function_177(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_177(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_177(bParam0[03], 8) || iVar1));
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
				Function_314(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_177(bParam0[iVar03], 4))
		{
			if (!Function_177(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
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
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
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
	Function_311();
	return 1;
}

void Function_311() //Position: 0xDE90 / 56976
{
	if (!Function_312(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_312(int iParam0) //Position: 0xDED0 / 57040
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_313() //Position: 0xDEEC / 57068
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

void Function_314(var uParam0, int iParam1) //Position: 0xDF17 / 57111
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_315() //Position: 0xDF28 / 57128
{
	if (!Function_312(128))
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

var Function_316(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xDF6A / 57194
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_317(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_314(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_317(var uParam0, int iParam1, int iParam2) //Position: 0xDFA2 / 57250
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_177(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_314(uParam0[iVar03], 4);
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

void Function_318(int iParam0, int iParam1) //Position: 0xE066 / 57446
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

void Function_319() //Position: 0xE0AF / 57519
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

int Function_320() //Position: 0xE1C9 / 57801
{
	bool bVar0;
	
	if (Function_332() && Function_357(Global_30693[0]))
	{
		if (!IS_LAYOUTREF_VALID(Local_4))
		{
			Function_327();
		}
		if (!IS_ACTOR_VALID(bLocal_940))
		{
			Function_322();
			bLocal_940 = (*&Local_4 + 596)[02];
			if (Function_321(bLocal_940, 1))
			{
				ENABLE_VEHICLE_SEAT(bLocal_940, false, 0);
				ENABLE_VEHICLE_SEAT(bLocal_940, true, 0);
				ENABLE_VEHICLE_SEAT(bLocal_940, 2, 0);
				ENABLE_VEHICLE_SEAT(bLocal_940, 3, 0);
				ENABLE_VEHICLE_SEAT(bLocal_940, 4, 0);
				ENABLE_VEHICLE_SEAT(bLocal_940, 5, 0);
			}
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_940, *(&Local_4 + 892[176]), 1, true, 1);
		bVar0 = GET_DRAFT_ACTOR(false, bLocal_940);
		if (IS_ACTOR_VALID(bVar0))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(bVar0);
		}
		bVar0 = GET_DRAFT_ACTOR(true, bLocal_940);
		if (IS_ACTOR_VALID(bVar0))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(bVar0);
		}
		CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_940);
		CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
		Function_232(&bLocal_988);
		return 1;
	}
	if (Function_350(&bLocal_988) < 2.0f)
	{
		Function_232(&bLocal_988);
	}
	return 0;
}

bool Function_321(bool bParam0, bool bParam1) //Position: 0xE2BB / 58043
{
	if (IS_ACTOR_VALID(bParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

void Function_322() //Position: 0xE2FC / 58108
{
	(*&Local_4 + 596)[02] = Function_323(Local_4, "nBankWagon", 1196, 981, -2841,317f, 33,12941f, 4594,135f, 0.0f, -93,85719f, 0.0f, 1, 976, 976, 976, 4);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 596)[02], false);
	return;
}

var Function_323(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xE34E / 58190
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
			if (Function_326(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_325(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_324(bVar16, &iVar1))
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

bool Function_324(int iParam0, int iParam1) //Position: 0xE582 / 58754
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

var Function_325(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xE5B4 / 58804
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_326(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE5CC / 58828
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

void Function_327() //Position: 0xE5F3 / 58867
{
	var uVar0;
	
	Function_318(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Gun01_layout");
	Local_4.f_700 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Cutscene01Volumes_set");
	(*&Local_4 + 688)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol01", 2, -2709,677f, 33,31509f, 4248,861f, 0.0f, 29,87804f, 0.0f, 51,53463f, 4,401145f, 20,31111f);
	ADD_TO_VOLUME_SET(Local_4.f_700, (*&Local_4 + 688)[0]);
	(*&Local_4 + 688)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol02", 2, -2741,321f, 32,1448f, 4297,811f, 0.0f, 61,87787f, 0.0f, 9,700404f, 4,401145f, 11,15567f);
	ADD_TO_VOLUME_SET(Local_4.f_700, (*&Local_4 + 688)[1]);
	Local_4.f_712 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Cutscene02Volumes_set");
	(*&Local_4 + 704)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -2733,458f, 34,09637f, 4255,628f, 0.0f, 16,00453f, 0.0f, 6,946649f, 4,107396f, 20,23523f);
	ADD_TO_VOLUME_SET(Local_4.f_712, (*&Local_4 + 704)[0]);
	Local_4.f_724 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Cutscene03Volumes_set");
	(*&Local_4 + 716)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -2732,239f, 33,98906f, 4255,876f, 0.0f, 48,75816f, 0.0f, 23,06067f, 4,107396f, 18,88566f);
	ADD_TO_VOLUME_SET(Local_4.f_724, (*&Local_4 + 716)[0]);
	Local_4.f_756 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "PlayerReturnVolumes_set");
	(*&Local_4 + 728)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerReturnVol01", 3, -2742,25f, 33,56947f, 4268,056f, 0.0f, 20.0f, 0.0f, 13,16938f, 2,481075f, 26,9215f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 728)[0]);
	(*&Local_4 + 728)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerReturnVol02", 3, -2715,818f, 33,53601f, 4236,863f, 0.0f, 20.0f, 0.0f, 30,57804f, 2,411075f, 22,27658f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 728)[1]);
	(*&Local_4 + 728)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerReturnVol03", 3, -2705,599f, 33,50017f, 4277,215f, 0.0f, 9,486036f, 0.0f, 30,57804f, 3,277385f, 22,27658f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 728)[2]);
	(*&Local_4 + 728)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerReturnVol04", 3, -2728,781f, 35,12071f, 4261,163f, 0.0f, 9,486036f, 0.0f, 7,194406f, 3,277385f, 6,865405f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 728)[3]);
	(*&Local_4 + 728)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerReturnVol05", 3, -2688,04f, 33,90737f, 4256,896f, 0.0f, 9,486036f, 0.0f, 14,51902f, 3,277385f, 42,57685f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 728)[4]);
	(*&Local_4 + 728)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerReturnVol06", 2, -2762,693f, 33,71651f, 4270,652f, 0.0f, 15,82649f, 0.0f, 22,41126f, 5,599864f, 20,73567f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 728)[5]);
	Local_4.f_836 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ChuparosaVolumes_set");
	(*&Local_4 + 760)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TaxiVol", 2, -2761,548f, 33,43235f, 4283,491f, 0.0f, 14,92516f, 0.0f, 11,99586f, 4,107396f, 8,547808f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[0]);
	(*&Local_4 + 760)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nBottleVol", 2, -2740,996f, 33,29825f, 4298,223f, 0.0f, -28,89841f, 0.0f, 10,36101f, 4,107396f, 10,50894f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[1]);
	(*&Local_4 + 760)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BottleHomeVol", 3, -2741,571f, 32,8153f, 4298,172f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[2]);
	(*&Local_4 + 760)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PatioVol", 2, -2744,101f, 33,50801f, 4293,105f, 0.0f, -23,23163f, 0.0f, 3,054472f, 2,926493f, 3,776453f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[3]);
	(*&Local_4 + 760)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DrunkReactLeftVol", 2, -2737,182f, 32,21512f, 4295,468f, 0.0f, -28,89841f, 0.0f, 0,8860464f, 4,107396f, 1,725623f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[4]);
	(*&Local_4 + 760)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DrunkReactRightVol", 2, -2736,405f, 32,21512f, 4295,897f, 0.0f, -28,89841f, 0.0f, 0,8860464f, 4,107396f, 1,725623f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[5]);
	(*&Local_4 + 760)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DrunkReactBottleVol", 2, -2736,844f, 32,21512f, 4295,773f, 0.0f, -28,89841f, 0.0f, 0,8860464f, 4,107396f, 1,474904f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[6]);
	(*&Local_4 + 760)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BirdVol", 2, -2761,32f, 33,83716f, 4282,292f, 0.0f, 12,46887f, 0.0f, 24,93764f, 4,107396f, 43,45214f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[7]);
	(*&Local_4 + 760)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CompanionBirdVol", 2, -2759,366f, 33,76879f, 4286,129f, 0.0f, 18,23129f, 0.0f, 9,880864f, 4,051019f, 6,937664f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[8]);
	(*&Local_4 + 760)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CompanionGateWaitVol", 2, -2753,521f, 33,40255f, 4267,469f, 0.0f, 18,23129f, 0.0f, 9,880864f, 4,051019f, 11,03994f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[9]);
	(*&Local_4 + 760)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerGateWaitVol", 2, -2714,401f, 33,77802f, 4260,153f, 0.0f, 13,24638f, 0.0f, 80,13781f, 6,916871f, 40,4608f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[10]);
	(*&Local_4 + 760)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BankVol", 2, -2728,294f, 32,53136f, 4258,142f, 0.0f, 22,76826f, 0.0f, 13,43371f, 4,107396f, 14,61672f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[11]);
	(*&Local_4 + 760)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ManagerRetardVol", 2, -2745,803f, 33,60411f, 4256,521f, 0.0f, 46,3212f, 0.0f, 6,047449f, 4,107396f, 3,679657f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[12]);
	(*&Local_4 + 760)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LeaveChuparosaStartVol", 2, -2746,94f, 33,59293f, 4265,968f, 0.0f, 22,76826f, 0.0f, 38,22214f, 4,107396f, 20,10774f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[13]);
	(*&Local_4 + 760)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseImpatientVol", 2, -2761,034f, 33,54052f, 4269,835f, 0.0f, 15,49598f, 0.0f, 11,99586f, 4,107396f, 8,547808f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[14]);
	(*&Local_4 + 760)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SafeReturnVol", 2, -2788,762f, 32,64554f, 4357,014f, 0.0f, -13,58609f, 0.0f, 69,42378f, 5,91193f, 144,1286f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[15]);
	(*&Local_4 + 760)[16] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChuparosaApproachVol", 2, -2759,25f, 33,09032f, 4271,547f, 0.0f, 28,05206f, 0.0f, 17,34942f, 6,183097f, 43,45214f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[16]);
	(*&Local_4 + 760)[17] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LateCSTriggerVol", 2, -2726,594f, 33,77378f, 4257,609f, 0.0f, 41,09572f, 0.0f, 46,39699f, 6,183097f, 43,45214f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 760)[17]);
	Local_4.f_888 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CombatVolumes_set");
	(*&Local_4 + 840)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SiegeVol", 2, -2839,203f, 34,7983f, 4588,333f, 0.0f, 41,88469f, 0.0f, 41,56334f, 8,158757f, 41,66103f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[0]);
	(*&Local_4 + 840)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SiegeWagonVol", 2, -2839,011f, 34,7983f, 4591,494f, 0.0f, 85,08726f, 0.0f, 15,84207f, 8,158757f, 26,82027f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[1]);
	(*&Local_4 + 840)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CompanionSiegeVol", 2, -2829,746f, 34,7983f, 4577,383f, 0.0f, 40,71558f, 0.0f, 12,17292f, 8,158757f, 16,70416f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[2]);
	(*&Local_4 + 840)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseRoadVol", 2, -2846,514f, 34,36823f, 4578,478f, 0.0f, 47,69881f, 0.0f, 22,5677f, 6,617369f, 7,824667f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[3]);
	(*&Local_4 + 840)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ExecuteVol01", 2, -2839,962f, 39,79591f, 4599,274f, 0.0f, 76,98192f, 0.0f, 12,64904f, 59,31402f, 344,4431f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[4]);
	(*&Local_4 + 840)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ExecuteVol02", 2, -2847,142f, 39,79591f, 4594,446f, 0.0f, 23,39602f, 0.0f, 12,64904f, 59,31402f, 344,4431f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[5]);
	(*&Local_4 + 840)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerRoadblockVol", 2, -2766,289f, 35,28691f, 4388,827f, 0.0f, 26,89347f, 0.0f, 141,3574f, 11,75961f, 122,5121f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[6]);
	(*&Local_4 + 840)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CompanionRoadblockVol", 2, -2771,477f, 24,4789f, 4378,598f, 0.0f, 26,89347f, 0.0f, 444,2672f, 36,1755f, 102,2547f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[7]);
	(*&Local_4 + 840)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RoadblockWagonVol", 2, -2795,481f, 32,86611f, 4408,63f, 0.0f, 70,19115f, 0.0f, 6,641654f, 5,546166f, 16,6231f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[8]);
	(*&Local_4 + 840)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RoadblockPanicVol", 2, -2795,64f, 32,48137f, 4412,987f, 0.0f, -21,21051f, 0.0f, 6,617662f, 3,327458f, 6,819799f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[9]);
	(*&Local_4 + 840)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RoadblockKillVol", 2, -2836.0f, 14,76718f, 4372f, 0.0f, 32,95726f, 0.0f, 45,82703f, 10,85972f, 57,73615f);
	ADD_TO_VOLUME_SET(Local_4.f_888, (*&Local_4 + 840)[10]);
	*(&Local_4 + 892[06]) = { -2741,6f, 32,14339f, 4298,206f };
	*(&Local_4 + 892[06] + 12) = { 0.0f, 325,5399f, 0.0f };
	*(&Local_4 + 892[16]) = { -2757,146f, 32,12549f, 4289,622f };
	*(&Local_4 + 892[16] + 12) = { 0.0f, -365,3234f, 0.0f };
	*(&Local_4 + 892[26]) = { -2730,962f, 32,80562f, 4262,326f };
	*(&Local_4 + 892[26] + 12) = { 0.0f, -289,3771f, 0.0f };
	*(&Local_4 + 892[36]) = { -2847,755f, 33,09273f, 4594,559f };
	*(&Local_4 + 892[36] + 12) = { 0.0f, -43,35249f, 0.0f };
	*(&Local_4 + 892[46]) = { -2733,662f, 32,61979f, 4257,286f };
	*(&Local_4 + 892[46] + 12) = { 0.0f, -38,82964f, 0.0f };
	*(&Local_4 + 892[56]) = { -2742,391f, 32,12951f, 4298,045f };
	*(&Local_4 + 892[56] + 12) = { 0.0f, -20,63119f, 0.0f };
	*(&Local_4 + 892[66]) = { -2756.0f, 32,12549f, 4288f };
	*(&Local_4 + 892[66] + 12) = { 0.0f, 106,9532f, 0.0f };
	*(&Local_4 + 892[76]) = { -2731,983f, 32,80579f, 4263,076f };
	*(&Local_4 + 892[76] + 12) = { 0,1260134f, 34,67302f, 0,02682312f };
	*(&Local_4 + 892[86]) = { -2848,165f, 33,07391f, 4591,086f };
	*(&Local_4 + 892[86] + 12) = { 0.0f, -43,15279f, 0.0f };
	*(&Local_4 + 892[96]) = { -2728.0f, 32,61269f, 4256,723f };
	*(&Local_4 + 892[96] + 12) = { 0.0f, 31,58359f, 0.0f };
	*(&Local_4 + 892[106]) = { -2741,483f, 32,30319f, 4258,799f };
	*(&Local_4 + 892[106] + 12) = { 0.0f, 45,86407f, 0.0f };
	*(&Local_4 + 892[116]) = { -2741,483f, 32,30319f, 4258,799f };
	*(&Local_4 + 892[116] + 12) = { 0.0f, 45,86407f, 0.0f };
	*(&Local_4 + 892[126]) = { -2741,483f, 32,30319f, 4258,799f };
	*(&Local_4 + 892[126] + 12) = { 0.0f, 45,86407f, 0.0f };
	*(&Local_4 + 892[136]) = { -2848,939f, 33,02f, 4593,571f };
	*(&Local_4 + 892[136] + 12) = { 0.0f, -43,35249f, 0.0f };
	*(&Local_4 + 892[146]) = { -2742,596f, 32,24027f, 4260,01f };
	*(&Local_4 + 892[146] + 12) = { 0,1769326f, 54,14531f, 0,09853994f };
	*(&Local_4 + 892[156]) = { -2742,596f, 32,24027f, 4260,01f };
	*(&Local_4 + 892[156] + 12) = { 0,1769326f, 54,14531f, 0,09853994f };
	*(&Local_4 + 892[166]) = { -2756.0f, 32,12549f, 4285,659f };
	*(&Local_4 + 892[166] + 12) = { 0.0f, 6,119954f, 0.0f };
	*(&Local_4 + 892[176]) = { -2730,673f, 32,29004f, 4250,744f };
	*(&Local_4 + 892[176] + 12) = { 0.0f, -39,28831f, 0.0f };
	*(&Local_4 + 1328[06]) = { -2741,002f, 32,19243f, 4294,383f };
	*(&Local_4 + 1328[06] + 12) = { 0.0f, -110,5788f, 0.0f };
	*(&Local_4 + 1328[16]) = { -2740.0f, 32,22191f, 4294,539f };
	*(&Local_4 + 1328[16] + 12) = { 0.0f, -83,5015f, 0.0f };
	*(&Local_4 + 1328[26]) = { -2739,436f, 33,11522f, 4294,454f };
	*(&Local_4 + 1328[26] + 12) = { 0.0f, 142,8443f, 0.0f };
	*(&Local_4 + 1328[36]) = { -2757,535f, 32,12549f, 4287,701f };
	*(&Local_4 + 1328[36] + 12) = { 0.0f, -98,04256f, 0.0f };
	*(&Local_4 + 1328[46]) = { -2759,827f, 35,74706f, 4289,089f };
	*(&Local_4 + 1328[46] + 12) = { 0.0f, -110,5788f, 0.0f };
	*(&Local_4 + 1328[56]) = { -2762,856f, 48,47132f, 4280,429f };
	*(&Local_4 + 1328[56] + 12) = { 0.0f, -89,46988f, 0.0f };
	*(&Local_4 + 1328[66]) = { -2757,811f, 48,47132f, 4272,912f };
	*(&Local_4 + 1328[66] + 12) = { 0.0f, -89,46988f, 0.0f };
	*(&Local_4 + 1328[76]) = { -2767,047f, 48,47132f, 4273,267f };
	*(&Local_4 + 1328[76] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 1328[86]) = { -2757,434f, 31,97549f, 4271,287f };
	*(&Local_4 + 1328[86] + 12) = { 0.0f, 131,2716f, 0.0f };
	*(&Local_4 + 1328[96]) = { -2738,745f, 32,66573f, 4262,078f };
	*(&Local_4 + 1328[96] + 12) = { 0.0f, -128,5914f, 0.0f };
	*(&Local_4 + 1328[106]) = { -2732,575f, 32,31193f, 4251,476f };
	*(&Local_4 + 1328[106] + 12) = { 0.0f, -177,6804f, 0.0f };
	*(&Local_4 + 1328[116]) = { -2730,921f, 32,80103f, 4261,026f };
	*(&Local_4 + 1328[116] + 12) = { 0.0f, -239,8409f, 0.0f };
	*(&Local_4 + 1328[126]) = { -2734,502f, 32,52249f, 4243,025f };
	*(&Local_4 + 1328[126] + 12) = { 0.0f, -150,2162f, 0.0f };
	*(&Local_4 + 1328[136]) = { -2740,285f, 32,41903f, 4259,859f };
	*(&Local_4 + 1328[136] + 12) = { 0,1987685f, -232,2412f, -1,0256f };
	*(&Local_4 + 1328[146]) = { -2766,844f, 32,13541f, 4270,399f };
	*(&Local_4 + 1328[146] + 12) = { 0.0f, -73,91867f, 0.0f };
	*(&Local_4 + 1328[156]) = { -2765,711f, 32,13735f, 4274,011f };
	*(&Local_4 + 1328[156] + 12) = { 0.0f, -61,3947f, 0.0f };
	*(&Local_4 + 1328[166]) = { -2764,074f, 32,14268f, 4271,7f };
	*(&Local_4 + 1328[166] + 12) = { 0.0f, -71,46024f, 0.0f };
	*(&Local_4 + 1328[176]) = { -2725,689f, 32,82584f, 4263,838f };
	*(&Local_4 + 1328[176] + 12) = { 0.0f, -66,96333f, 0.0f };
	*(&Local_4 + 1328[186]) = { -2752.0f, 32,12549f, 4253,61f };
	*(&Local_4 + 1328[186] + 12) = { 0.0f, -315,5042f, 0.0f };
	*(&Local_4 + 1328[196]) = { -2739,914f, 32,40908f, 4263,521f };
	*(&Local_4 + 1328[196] + 12) = { 0.0f, -83,09573f, 0.0f };
	*(&Local_4 + 1328[206]) = { -2745,713f, 32,62653f, 4255,814f };
	*(&Local_4 + 1328[206] + 12) = { 0.0f, -34,63631f, 0.0f };
	*(&Local_4 + 1836[06]) = { -2743,361f, 32,118f, 4297,736f };
	*(&Local_4 + 1836[06] + 12) = { 0.0f, 59,842f, 0.0f };
	*(&Local_4 + 1836[16]) = { -2743,597f, 32,09972f, 4298,408f };
	*(&Local_4 + 1836[16] + 12) = { 0.0f, 64,92086f, 0.0f };
	*(&Local_4 + 1888[06]) = { -2739,184f, 33,0175f, 4294,623f };
	*(&Local_4 + 1888[06] + 12) = { 0.0f, 139,1611f, 0.0f };
	*(&Local_4 + 1888[16]) = { -2739,01f, 33,01875f, 4294,777f };
	*(&Local_4 + 1888[16] + 12) = { 0.0f, 142,8443f, 0.0f };
	*(&Local_4 + 1888[26]) = { -2738,84f, 33,015f, 4294,948f };
	*(&Local_4 + 1888[26] + 12) = { 0.0f, 140,6732f, 0.0f };
	*(&Local_4 + 1964[06]) = { -2738,888f, 33,09969f, 4295,009f };
	*(&Local_4 + 1964[06] + 12) = { 0.0f, 139,1611f, 0.0f };
	*(&Local_4 + 1964[16]) = { -2738,789f, 33,08573f, 4294,884f };
	*(&Local_4 + 1964[16] + 12) = { 0.0f, 139,1611f, 0.0f };
	*(&Local_4 + 1964[26]) = { -2739,053f, 33,19901f, 4294,831f };
	*(&Local_4 + 1964[26] + 12) = { 0.0f, 139,1611f, 0.0f };
	*(&Local_4 + 1964[36]) = { -2738,941f, 33,16768f, 4294,692f };
	*(&Local_4 + 1964[36] + 12) = { 0.0f, 139,1611f, 0.0f };
	*(&Local_4 + 1964[46]) = { -2739,237f, 33,06237f, 4294,684f };
	*(&Local_4 + 1964[46] + 12) = { 0.0f, 139,1611f, 0.0f };
	*(&Local_4 + 1964[56]) = { -2739,135f, 33,06023f, 4294,56f };
	*(&Local_4 + 1964[56] + 12) = { 0.0f, 139,1611f, 0.0f };
	*(&Local_4 + 2112[06]) = { -2739,572f, 33,0175f, 4294,287f };
	*(&Local_4 + 2112[06] + 12) = { 0.0f, 139,1611f, 0.0f };
	*(&Local_4 + 2112[16]) = { -2739,01f, 33,01875f, 4294,777f };
	*(&Local_4 + 2112[16] + 12) = { 0.0f, 142,8443f, 0.0f };
	*(&Local_4 + 2112[26]) = { -2738,448f, 33,015f, 4295,27f };
	*(&Local_4 + 2112[26] + 12) = { 0.0f, 140,6732f, 0.0f };
	*(&Local_4 + 2188[06]) = { -2841,387f, 33,08849f, 4591,688f };
	*(&Local_4 + 2188[06] + 12) = { 0.0f, -28,62082f, 0.0f };
	*(&Local_4 + 2188[16]) = { -2836,208f, 32,93369f, 4587,257f };
	*(&Local_4 + 2188[16] + 12) = { 0.0f, -65,3969f, 0.0f };
	*(&Local_4 + 2188[26]) = { -2837,485f, 32,70855f, 4585,434f };
	*(&Local_4 + 2188[26] + 12) = { 0.0f, -57,60249f, 0.0f };
	*(&Local_4 + 2188[36]) = { -2832f, 32,12549f, 4578,165f };
	*(&Local_4 + 2188[36] + 12) = { 0.0f, 137,6328f, 0.0f };
	*(&Local_4 + 2188[46]) = { -2839,851f, 33,12941f, 4592f };
	*(&Local_4 + 2188[46] + 12) = { 0.0f, 11,44669f, 0.0f };
	*(&Local_4 + 2188[56]) = { -2841,851f, 33,12941f, 4586,15f };
	*(&Local_4 + 2188[56] + 12) = { 0.0f, -178,4031f, 0.0f };
	*(&Local_4 + 2188[66]) = { -2845,287f, 32,40707f, 4579,198f };
	*(&Local_4 + 2188[66] + 12) = { 0.0f, -46,76951f, 0.0f };
	*(&Local_4 + 2188[76]) = { -2802,475f, 31,1183f, 4424,515f };
	*(&Local_4 + 2188[76] + 12) = { 0.0f, -25,17855f, 0.0f };
	*(&Local_4 + 2188[86]) = { -2797,435f, 32,06524f, 4394,651f };
	*(&Local_4 + 2188[86] + 12) = { 0.0f, 185,8862f, 0.0f };
	*(&Local_4 + 2188[96]) = { -2838,295f, 15,67522f, 4374,056f };
	*(&Local_4 + 2188[96] + 12) = { 0.0f, 105,2156f, 0.0f };
	*(&Local_4 + 2432[06]) = { -2794,754f, 30,9805f, 4410,462f };
	*(&Local_4 + 2432[06] + 12) = { 0.0f, 158,5703f, 0.0f };
	*(&Local_4 + 2432[16]) = { -2788,802f, 31,00997f, 4411,15f };
	*(&Local_4 + 2432[16] + 12) = { 0.0f, 158,5703f, 0.0f };
	*(&Local_4 + 2432[26]) = { -2803,386f, 30,81734f, 4408,59f };
	*(&Local_4 + 2432[26] + 12) = { 0.0f, 202,2342f, 0.0f };
	Local_4.f_2508 = CREATE_GRINGO_IN_LAYOUT(Local_4, "SitDrinking", "gun01_drunk", -2737,108f, 32,24866f, 4296,192f, 0.0f, -35,08794f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_2508), 0);
	DECOR_SET_BOOL(Local_4.f_2508, "ForceAllowRain", true);
	Local_4.f_2512 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nRandSmoke", "smoking_stand", -2740,996f, 32,19243f, 4294,389f, 0.0f, -110,5788f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2512, "ForceAllowRain", true);
	Local_4.f_2516 = CREATE_GRINGO_IN_LAYOUT(Local_4, "BirdIdle", "stand_pocketwatch_e_any", -2756.0f, 32,12549f, 4288f, 0.0f, 106,9532f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2516, "ForceAllowRain", true);
	Local_4.f_2520 = CREATE_GRINGO_IN_LAYOUT(Local_4, "ShootAtBirds", "Gun_01_shoot_birds", -2756.0f, 32,12549f, 4288f, 0.0f, 106,9532f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2520, "ForceAllowRain", true);
	Local_4.f_2524 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nBankSmoke", "smoking_stand_nospawn", -2732,281f, 32,78061f, 4261,275f, 0.0f, 83,78045f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2524, "ForceAllowRain", true);
	Local_4.f_2528 = CREATE_GRINGO_IN_LAYOUT(Local_4, "HoldHostage", "hold_hostage", -2840,793f, 33,1304f, 4591,881f, 0.0f, -49,7223f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2528, "ForceAllowRain", true);
	Local_4.f_2532 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "RoadblockWagonCover", -2790,036f, 31,07581f, 4409,256f, 0.0f, -110,3795f, 0.0f, 1);
	Function_330(&Local_4 + 2532);
	Local_4.f_2536 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "RoadblockWagonCover1", -2790,709f, 31,07581f, 4411,242f, 0.0f, -199,8012f, 0.0f, 1);
	Function_330(&Local_4 + 2536);
	Local_4.f_2540 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "RoadblockWagonCover2", -2798,389f, 31,07581f, 4409,692f, 0.0f, -287,8762f, 0.0f, 1);
	Function_330(&Local_4 + 2540);
	Local_4.f_2544 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "RoadblockWagonCover3", -2797,125f, 31,07581f, 4405,857f, 0.0f, -377,0923f, 0.0f, 1);
	Function_330(&Local_4 + 2544);
}

struct<112> «½EáÅ-æA÷cEÊÀÅ-gA÷|ÒE³aÅ-,øA÷&VE3Å,ÖXAöúEfqÅ,A÷´E-2Å,NA÷FEíåÅ,AöüEºÅ+£A÷"EpÅ+3A÷	wE®Å+!àA÷ ñEÎÓÅ+I©AöÿEuÅ+A÷2E<Å+áA÷4E	mÅ,CA÷EÝAÅ-¤¨A÷EGèÅ.ZAA÷	EçüÅ.¤íA÷wErÅ.qAøúüEQÀÅ.AùãE-Å.HÎAù Eþ¡Å(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211) //Position: 0x108B1 / 67761
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 4294965710 * -30264;
}

var Å.XVAý¢EÁÅ."AþEÃÅ.°,Aþ±¹EèÅ.·PAþùLE¦üÅ.©*AÿEWÅ.r?Aÿ
Eõ«Å.
SAÿ
E\Å-DB E@kÅ-hB E
9Å- äB ÑEÃÂÅ,ã¦(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x109BF / 68031
{
	int iVar24;
	
	PatchTrapD();
	return FIRE_STOP_ON_ACTOR(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, IntToFloat(StackVal + 136) * -31338) + 137;
	SQUAD_GET_SIZE(StackVal, StackVal * -31362);
}

void Function_330(int iParam0) //Position: 0x110F9 / 69881
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	Function_296(*iParam0);
	vVar0 = { StackVal, StackVal, Function_296(*iParam0) };
	Function_331(*iParam0);
	vVar3 = { StackVal, StackVal, Function_331(*iParam0) };
	strcpy(&cVar6, GET_OBJECT_NAME(*iParam0), 64);
	bVar22 = GET_OBJECT_OWNER(*iParam0);
	vVar3.x = 0.0f;
	vVar3.f_8 = 0.0f;
	vVar3.f_4 = (180.0f - vVar3.y);
	vVar3.f_4 = GET_OBJECT_HEADING(*iParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(bVar22));
	PRINTSTRING(" at ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(vVar3);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar6);
	PRINTNL();
	DESTROY_OBJECT(*iParam0);
	*iParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(bVar22, &cVar6, vVar0, vVar3, 2);
	return;
}

vector3 Function_331(bool bParam0) //Position: 0x111C5 / 70085
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

bool Function_332() //Position: 0x111EC / 70124
{
	bool bVar0;
	
	if (Function_350(&bLocal_988) < 1.0f)
	{
		bVar0 = true;
		Function_232(&bLocal_988);
	}
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_344(1))
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!Function_342())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!Function_310(&bLocal_661))
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("smoking_stand_gped"))
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_934))
	{
		bLocal_934 = Function_333(5, 0, 1, 0, 0, 0, 0, 0, 0);
		if (bVar0)
		{
		}
		return 0;
	}
	if (!Function_299())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_938))
	{
		if (bVar0)
		{
		}
		bLocal_938 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
		if (IS_ACTOR_VALID(bLocal_938))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_938, 1);
		}
		return 0;
	}
	if (!IS_ACTOR_READY_FOR_ACTION(bLocal_938))
	{
		if (bVar0)
		{
		}
		MAKE_ACTOR_READY_FOR_ACTION(bLocal_938, 1);
		return 0;
	}
	return 1;
}

bool Function_333(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x112D9 / 70361
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
		Function_207(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_341(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_336(StackVal, uParam7);
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
		Function_335(bVar1, 0, 0, 0, 0);
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
		Function_334(bVar1, 0);
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

void Function_334(bool bParam0, bool bParam1) //Position: 0x117C3 / 71619
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_335(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x117E3 / 71651
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

bool Function_336(int iParam0, bool bParam1) //Position: 0x11837 / 71735
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_340(iParam0))
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
						Function_337(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_337(bool bParam0, bool bParam1) //Position: 0x118B7 / 71863
{
	Function_339(bParam0);
	Function_338(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_338(bool bParam0) //Position: 0x118DD / 71901
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_339(bool bParam0) //Position: 0x11901 / 71937
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

bool Function_340(int iParam0) //Position: 0x119D0 / 72144
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_341(int iParam0, bool bParam1) //Position: 0x119E7 / 72167
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

bool Function_342() //Position: 0x11A7A / 72314
{
	Function_343(&Local_4 + 4, 981, 2, 0);
	Function_343(&Local_4 + 4, 1200, 2, 0);
	Function_343(&Local_4 + 4, 977, 2, 0);
	Function_316(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/gun01_drunk", 1, 0);
	Function_316(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_316(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_316(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/gun_01_shoot_birds", 1, 0);
	Function_316(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_316(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/hold_hostage", 1, 0);
	if (Function_310(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_343(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11C54 / 72788
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_177(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_314(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_314(bParam0[iVar03], 8);
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

bool Function_344(bool bParam0) //Position: 0x11D24 / 72996
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

int Function_345() //Position: 0x11D52 / 73042
{
	iLocal_1045 = 0;
	if (!bLocal_1079)
	{
		Function_348(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	}
	Function_346(StackVal, StackVal, bLocal_653, Global_34574, &Local_4 + 716[0], 0, 0, 0, 0, 1, 1);
	Function_232(&bLocal_988);
	return 1;
}

void Function_346(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x11D92 / 73106
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
				Function_347(bVar1, bParam0);
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

void Function_347(bool bParam0, bool bParam1) //Position: 0x12000 / 73728
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

void Function_348(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x12075 / 73845
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
	Function_250();
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
				Function_279(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_279(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_349()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_349()));
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
	if (Function_312(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_218(0x4000000);
	}
	if (Function_312(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_218(0x8000000);
	}
}

var Function_349() //Position: 0x1231E / 74526
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

float Function_350(bool bParam0) //Position: 0x1239D / 74653
{
	if (Function_352(bParam0))
	{
		if (Function_351(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_351(int iParam0) //Position: 0x12465 / 74853
{
	return Function_153(*iParam0, 2);
}

bool Function_352(bool bParam0) //Position: 0x12472 / 74866
{
	return Function_153(*bParam0, 1);
}

int Function_353() //Position: 0x1247F / 74879
{
	Function_343(&Local_4 + 460, 703, 2, 0);
	Function_343(&Local_4 + 460, 1196, 2, 0);
	Function_343(&Local_4 + 460, 262, 2, 0);
	if (Function_310(&Local_4 + 460))
	{
		return 1;
	}
	return 0;
}

void Function_354() //Position: 0x124BD / 74941
{
	return;
}

void Function_355() //Position: 0x124C3 / 74947
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[46]), 1, true, 1);
		if (GET_MOUNT(Global_34573) != bLocal_938)
		{
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_938);
			RESET_ACTOR_GAITS(bLocal_938, 0);
		}
	}
	else
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[46]), 1, true, 1);
		RESET_ACTOR_GAITS(Global_34573, 0);
	}
	return;
}

void Function_356(int iParam0) //Position: 0x12537 / 75063
{
	if (!Function_289(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_184(1, 0, 1);
		}
	}
	return;
}

bool Function_357(int iParam0) //Position: 0x12552 / 75090
{
	if (!Function_81(iParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[iParam0]), 4);
}

void Function_358(bool bParam0) //Position: 0x1256E / 75118
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

void Function_359(int iParam0) //Position: 0x1260B / 75275
{
	Function_360(&Global_28842, iParam0);
	return;
}

void Function_360(var uParam0, int iParam1) //Position: 0x12619 / 75289
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_361(bool bParam0) //Position: 0x1263C / 75324
{
	Function_362(0, 0x40400000);
	Function_196();
	Function_195();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_362(bool bParam0, float fParam1) //Position: 0x12670 / 75376
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
	Function_364();
	Function_363();
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

void Function_363() //Position: 0x1276E / 75630
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_364() //Position: 0x127A0 / 75680
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

void Function_365() //Position: 0x1289D / 75933
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	Function_439();
	switch (bLocal_717)
	{
		case 0x00000000:
			Function_361(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			Function_218(8);
			Function_359(1);
			Function_359(256);
			Function_358((*&Local_4 + 760)[0]);
			if (iLocal_1036[3] == 0)
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_356(&Local_654);
				Function_359(1);
				Function_359(256);
				Function_358((*&Local_4 + 760)[0]);
				Function_438();
				Function_231(1);
			}
			else
			{
				Function_409();
				Function_231(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_408()) && Function_310(&Local_1081 + 4))
			{
				Function_409();
				Function_231(2);
			}
			else if (Function_350(&bLocal_988) < 2.0f)
			{
				Function_232(&bLocal_988);
			}
			break;
		
		case 0x00000002:
			if (Function_350(&bLocal_988) < 2.0f)
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_284(1.0f);
				Function_231(6);
			}
			break;
		
		case 0x00000006:
			fVar0 = Function_407(Global_34573, bLocal_940);
			if (fVar0 < 100.0f)
			{
				Function_248("Wagon_abandoned");
				bLocal_1044 = true;
			}
			else if (fVar0 < 50.0f)
			{
				if (!iLocal_1050)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_406("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0);
					iLocal_1050 = 1;
					Function_403(&bLocal_991, 8.0f, "Wagon_return_escort", 7,5f, 2, 1);
				}
			}
			else
			{
				iLocal_1050 = 0;
				Function_401();
			}
			break;
		
		case 0x00000010:
			fVar0 = Function_407(Global_34573, bLocal_940);
			if (fVar0 < 100.0f)
			{
				Function_248("Wagon_abandoned");
				bLocal_1044 = true;
			}
			else if (!Function_400())
			{
				if (fVar0 < 50.0f)
				{
					if (!iLocal_1050)
					{
						Function_399();
						Function_406("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
				}
				else
				{
					iLocal_1050 = 0;
					if (iLocal_1033 == 0)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_398())
						{
							Function_232(&bLocal_988);
						}
						else if (Function_350(&bLocal_988) < 1.0f)
						{
							Function_397();
							iLocal_1033 = 1;
						}
					}
					else if (iLocal_1033 == 1)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_232(&bLocal_988);
						}
						else if (Function_350(&bLocal_988) < 1.0f)
						{
							Function_406("Gun01_obj05a", 7,5f, 1, 2, 0, 0, 0);
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
					else if (iLocal_1033 == 2)
					{
						if (!HUD_IS_SHOWING_OBJECTIVE() || Function_350(&bLocal_988) < 5.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_Banter1stAmbush_v1_AA"))
							{
								Function_396();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_Banter1stAmbush_v2_AA"))
							{
								Function_395();
							}
							Function_232(&bLocal_988);
							iLocal_1033 = 3;
						}
					}
				}
			}
			break;
		
		case 0x0000001A:
			fVar0 = Function_407(Global_34573, bLocal_940);
			fVar1 = Function_407(Global_34573, bLocal_945);
			if (fVar0 < fVar1)
			{
				fVar0 = fVar1;
			}
			if (fVar0 < 100.0f)
			{
				Function_248("Wagon_abandoned");
				bLocal_1044 = true;
			}
			else if (!Function_392())
			{
				if (fVar0 < 50.0f)
				{
					if (!iLocal_1050)
					{
						Function_391(0);
						Function_399();
						Function_406("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
				}
				else
				{
					Function_391(1);
					iLocal_1050 = 0;
					if (iLocal_1033 == 0)
					{
						ACTOR_END_FORCE_HOLSTER(bLocal_934);
						bVar2 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2576, 4, 1, 0, 1, 3.0f);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_4 + 2188[76], -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_934, bVar2);
						TASK_SEQUENCE_RELEASE(bVar2, 1);
						SET_PLAYER_DEADEYE_POINTS(0, 1E+07.0f, 0);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_390();
						Function_232(&bLocal_988);
						iLocal_1033 = 1;
					}
					else if (iLocal_1033 == 1)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(bLocal_941) || Function_350(&bLocal_988) < 10.0f)
						{
							Function_389();
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
					else if (iLocal_1033 == 2)
					{
						if (Function_350(&bLocal_988) < 3.0f)
						{
							Function_132("Gun01_lanternHelp", 10.0f, 1, 0, 2, 1, 0);
							Function_232(&bLocal_988);
							iLocal_1033 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000024:
			Function_379();
			fVar0 = Function_407(Global_34573, bLocal_940);
			if (fVar0 < 100.0f && !IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[15]))
			{
				Function_248("Wagon_abandoned");
				bLocal_1044 = true;
			}
			else if (!Function_375())
			{
				if (fVar0 < 50.0f && iLocal_1033 < 0)
				{
					if (!iLocal_1050)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_406("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
				}
				else
				{
					if (iLocal_1050)
					{
						HUD_CLEAR_OBJECTIVE();
						iLocal_1050 = 0;
					}
					if (iLocal_1033 == 0)
					{
						if (Function_350(&bLocal_988) < 1.0f)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_941, Local_4.f_2572, 4, 0, 0, 1, false);
							TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_934, bLocal_940, Local_4.f_2572, 4.0f, 1, 2.0f);
							ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_934, 3212836864, 3212836864, 4, 1, 0);
							Function_374();
							Function_232(&bLocal_988);
							iLocal_1033 = 1;
						}
					}
					else if (iLocal_1033 == 1)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_232(&bLocal_988);
						}
						else if (Function_350(&bLocal_988) < 1.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterTo2ndAmbush_v1_AA"))
							{
								Function_373();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterTo2ndAmbush_v2_AA"))
							{
								Function_372();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterTo2ndAmbush_v3_AA"))
							{
								Function_369();
							}
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
				}
			}
			break;
		
		case 0x0000002E:
			Function_379();
			fVar0 = Function_407(Global_34573, bLocal_940);
			if (fVar0 < 100.0f && !IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[15]))
			{
				Function_248("Wagon_abandoned");
				bLocal_1044 = true;
			}
			else if (!Function_368())
			{
				if (fVar0 < 50.0f && iLocal_1033 < 0)
				{
					if (!iLocal_1050)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_406("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
				}
				else if (iLocal_1050)
				{
					HUD_CLEAR_OBJECTIVE();
					iLocal_1050 = 0;
				}
			}
			break;
		
		case 0x00000038:
			if (Function_350(&bLocal_988) < 8.0f)
			{
				Function_231(106);
			}
			break;
		
		case 0x0000006A:
			if (bLocal_1079)
			{
				Function_367(Global_34573, 0, 1);
			}
			Function_366();
			iLocal_1036[4] = 1;
			iLocal_716 = 101;
			Function_231(0);
			break;
	}
	return;
}

void Function_366() //Position: 0x12FAA / 77738
{
	Function_170();
	return;
}

void Function_367(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12FB3 / 77747
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

bool Function_368() //Position: 0x1304D / 77901
{
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[17]))
	{
		return 0;
	}
	Function_231(106);
	return 1;
}

void Function_369() //Position: 0x1306E / 77934
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v3_AA", "Gun01_BanterTo2ndAmbush_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v3_AB", "Gun01_BanterTo2ndAmbush_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v3_AC1", "Gun01_BanterTo2ndAmbush_v3_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v3_AC2", "Gun01_BanterTo2ndAmbush_v3_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v3_AC3", "Gun01_BanterTo2ndAmbush_v3_AC3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v3_AD", "Gun01_BanterTo2ndAmbush_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v3_AE", "Gun01_BanterTo2ndAmbush_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v3_AF", "Gun01_BanterTo2ndAmbush_v3_AF", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_370(int iParam0) //Position: 0x132D6 / 78550
{
	Function_371(0, Global_34573, iParam0, 0);
	Function_371(1, bLocal_934, iParam0, 0);
	Function_371(2, bLocal_936, iParam0, 0);
	Function_371(3, bLocal_941, iParam0, 0);
	Function_371(5, bLocal_937, iParam0, 0);
	return;
}

void Function_371(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1330E / 78606
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_372() //Position: 0x13333 / 78643
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v2_AA", "Gun01_BanterTo2ndAmbush_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v2_AB", "Gun01_BanterTo2ndAmbush_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v2_AC", "Gun01_BanterTo2ndAmbush_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v2_AD", "Gun01_BanterTo2ndAmbush_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v2_AE", "Gun01_BanterTo2ndAmbush_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v2_AF", "Gun01_BanterTo2ndAmbush_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v2_AG", "Gun01_BanterTo2ndAmbush_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v2_AH", "Gun01_BanterTo2ndAmbush_v2_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v2_AI1", "Gun01_BanterTo2ndAmbush_v2_AI1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v2_AI2", "Gun01_BanterTo2ndAmbush_v2_AI2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v2_AI3", "Gun01_BanterTo2ndAmbush_v2_AI3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v2_AJ", "Gun01_BanterTo2ndAmbush_v2_AJ", true, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_373() //Position: 0x136BF / 79551
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v1_AA", "Gun01_BanterTo2ndAmbush_v1_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v1_AB1", "Gun01_BanterTo2ndAmbush_v1_AB1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v1_AB2", "Gun01_BanterTo2ndAmbush_v1_AB2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterTo2ndAmbush_v1_AC", "Gun01_BanterTo2ndAmbush_v1_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterTo2ndAmbush_v1_AD", "Gun01_BanterTo2ndAmbush_v1_AD", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_374() //Position: 0x1384A / 79946
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_DeafetedAmbush1", "Gun01_DeafetedAmbush1", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_375() //Position: 0x1389D / 80029
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_756) || (IS_ACTOR_IN_VOLUME(bLocal_940, (*&Local_4 + 760)[16]) && ACTORS_IN_RANGE(bLocal_940, Global_34573, 30.0f)))
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		Function_348(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
		Function_378(bLocal_653, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
		Function_376(-2758,716f, 37,094f, 4273,336f, 0,458f, -0,6f, -0,656f, 99999,9f, 0, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_939, *(&Local_4 + 1328[156]), 1, true, 1);
		if (!IS_ACTOR_RIDING(bLocal_934))
		{
			ACTOR_MOUNT_ACTOR(bLocal_934, bLocal_939);
		}
		if (IS_ACTOR_RIDING(Global_34573))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 1328[146]), 1, true, 1);
			if (GET_MOUNT(Global_34573) != bLocal_938)
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_938);
			}
		}
		else
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1328[146]), 1, true, 1);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_940, *(&Local_4 + 1328[166]), 1, true, 1);
		SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(bLocal_940), &vVar0);
		RESET_ACTOR_GAITS(bLocal_940, 0);
		Function_367(Global_34573, 1, 1);
		MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_934);
		MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_941);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(Global_34573, true);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_934, true);
		AI_SET_NAV_ALLOW_TWEAK_DESIRED_MOVEMENT(Global_34573, 0);
		AI_SET_NAV_ALLOW_TWEAK_DESIRED_MOVEMENT(bLocal_934, 0);
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2588, 1, 0, 0, 1, false);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(Global_34573, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2592, 1, 0, 0, 1, false);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_934, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
		AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_941, 0);
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2584, 2, 0, 0, 1, false);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_941, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
		bLocal_1079 = true;
		Function_231(56);
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(bLocal_940, (*&Local_4 + 760)[16]))
	{
		return 0;
	}
	bVar3 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2572, 2, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_941, bVar3);
	TASK_SEQUENCE_RELEASE(bVar3, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_934);
	bVar3 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(false, &Local_4 + 1328[176], 2);
	TASK_DISMOUNT(false, 1);
	TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_4 + 1328[96], true);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_934, bVar3);
	TASK_SEQUENCE_RELEASE(bVar3, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	ACTOR_START_FORCE_HOLSTER(bLocal_934, 1, 0);
	Function_231(46);
	return 1;
}

void Function_376(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, int iParam8) //Position: 0x13B7D / 80765
{
	Function_377(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	if (fParam6 >= 0.0f)
	{
		fParam6 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam0);
}

void Function_377(bool bParam0) //Position: 0x13C6C / 81004
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_378(bool bParam0, float fParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) //Position: 0x13C7D / 81021
{
	Function_202(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	Global_63098.f_12 = iParam3;
	Global_63098.f_16 = iParam4;
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

void Function_379() //Position: 0x13D56 / 81238
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (iLocal_1077)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_940, (*&Local_4 + 840)[10]))
		{
			Function_388(bLocal_940);
		}
		if (Function_352(&bLocal_1024))
		{
			if (Function_350(&bLocal_1024) < 3.0f)
			{
				if (IS_ACTOR_ALIVE((*&Local_4 + 660)[22]))
				{
					if (IS_ACTOR_RIDING_VEHICLE((*&Local_4 + 660)[22]))
					{
						KILL_ACTOR((*&Local_4 + 660)[22]);
					}
				}
				Function_387(&bLocal_1024);
			}
		}
	}
	if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 840)[8]) < 0)
	{
		if (!Function_386())
		{
			return;
		}
	}
	SET_ACTOR_MIN_SPEED(bLocal_945, 3);
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_4 + 2188[96], 3);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_945, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_945, false);
	AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_945, 0);
	bVar2 = false;
	while (bVar2 <= GET_NUM_DRAFT_POSITIONS(bLocal_945))
	{
		bVar0 = GET_DRAFT_ACTOR(bVar2, bLocal_945);
		if (Function_382(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			Function_381(bVar0);
		}
		bVar2++;
	}
	Function_380(&bLocal_1024);
	iLocal_1077 = 1;
	return;
}

void Function_380(bool bParam0) //Position: 0x13E59 / 81497
{
	if (!Function_352(bParam0))
	{
		Function_233(bParam0, 0.0f);
	}
	return;
}

void Function_381(bool bParam0) //Position: 0x13E6E / 81518
{
	int iVar0;
	
	iVar0 = FIRE_CREATE_HANDLE();
	FIRE_CREATE_ON_ACTOR(iVar0, bParam0);
	FIRE_RELEASE_HANDLE(iVar0, 1);
	return;
}

bool Function_382(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x13E86 / 81542
{
	int iVar0;
	
	if (bParam1)
	{
		Function_385(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_385(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_385(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_385(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_385(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_385(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_385(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_385(&iVar0, 1048576);
	}
	return Function_383(bParam0, iVar0);
}

int Function_383(bool bParam0, int iParam1) //Position: 0x13EF5 / 81653
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_384(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_384(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_384(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_384(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_384(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_384(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_384(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_384(iParam1, 64))
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

bool Function_384(var uParam0, int iParam1) //Position: 0x13FCE / 81870
{
	return (uParam0 && iParam1) == 0;
}

void Function_385(int iParam0, bool bParam1) //Position: 0x13FDB / 81883
{
	Function_76(iParam0, bParam1);
	return;
}

bool Function_386() //Position: 0x13FE8 / 81896
{
	if (!IS_OBJECT_VALID(bLocal_985) || !IS_OBJECT_VALID(bLocal_986))
	{
		return 1;
	}
	if (IS_PROP_BROKEN(GET_PHYSINST_FROM_OBJECT(bLocal_985)) || IS_PROP_BROKEN(GET_PHYSINST_FROM_OBJECT(bLocal_986)))
	{
		return 1;
	}
	return 0;
}

void Function_387(bool bParam0) //Position: 0x1401C / 81948
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_388(bool bParam0) //Position: 0x14030 / 81968
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
		if (IS_ACTOR_ALIVE(bVar1))
		{
			KILL_ACTOR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_389() //Position: 0x140A0 / 82080
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_RickettSpotsAmbush1", "Gun01_RickettSpotsAmbush1", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_390() //Position: 0x140FB / 82171
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Gun01_BankerSpotsAmbush1", "Gun01_BankerSpotsAmbush1", false, 1, 1, 0, 1);
		Function_370(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_391(bool bParam0) //Position: 0x14155 / 82261
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar0 = (*&Local_4 + 660)[iVar12];
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam0)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
				{
					ADD_BLIP_FOR_ACTOR(bVar0, 322, 0.0f, 2, 0);
				}
			}
			else
			{
				Function_223(bVar0);
			}
		}
		iVar1++;
	}
	return;
}

bool Function_392() //Position: 0x141A5 / 82341
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	
	if (!iLocal_1077)
	{
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			bVar0 = (*&Local_4 + 660)[iVar42];
			if (IS_ACTOR_VALID(bVar0))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bVar0))
				{
					SET_ACTOR_MIN_SPEED(bLocal_945, 3);
					bVar7 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_4 + 2188[96], 3);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_945, bVar7);
					TASK_SEQUENCE_RELEASE(bVar7, 1);
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_945, false);
					AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_945, 0);
					Function_212(Local_4.f_2532);
					if (IS_ACTOR_VALID((*&Local_4 + 660)[22]))
					{
						if (!FIRE_IS_ACTOR_ON_FIRE(bVar0))
						{
							Function_381((*&Local_4 + 660)[22]);
						}
					}
					bVar5 = false;
					while (bVar5 <= GET_NUM_DRAFT_POSITIONS(bLocal_945))
					{
						bVar1 = GET_DRAFT_ACTOR(bVar5, bLocal_945);
						if (Function_382(bVar1, 0, 0, 0, 0, 0, 0, 0, 0))
						{
							Function_381(bVar1);
						}
						bVar5++;
					}
					iLocal_1077 = 1;
					iVar4 = 999999;
				}
			}
			iVar4++;
		}
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		bVar0 = (*&Local_4 + 660)[iVar42];
		if (Function_382(bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
		{
			if (!FIRE_IS_ACTOR_ON_FIRE(bVar0))
			{
				iVar6++;
			}
		}
		iVar4++;
	}
	if (iVar6 >= 0)
	{
		if (!iLocal_1075)
		{
			bVar2 = GET_LAST_ATTACK_TARGET(Global_34573);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (IS_ACTOR_IN_ACTORSET(bLocal_933, bVar2))
				{
					if (GET_LAST_DAMAGE(bVar2) < 0.0f)
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_394();
						iLocal_1075 = 1;
					}
				}
			}
		}
		if (!iLocal_1075)
		{
			if (Function_386())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_394();
				iLocal_1075 = 1;
			}
		}
		if (iVar6 == 1)
		{
			if (!iLocal_1078)
			{
				iVar4 = 0;
				while (iVar4 <= 3)
				{
					bVar0 = (*&Local_4 + 660)[iVar42];
					if (Function_382(bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
					{
						if (!FIRE_IS_ACTOR_ON_FIRE(bVar0))
						{
							TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_941);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar0);
							AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
							bVar7 = TASK_SEQUENCE_OPEN();
							TASK_VEHICLE_LEAVE(false);
							TASK_GO_NEAR_COORD(false, &Local_4 + 2188[86], 1.0f, 4);
							TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bVar0, bVar7);
							TASK_SEQUENCE_RELEASE(bVar7, 1);
							iLocal_1078 = 1;
							iVar4 = 999999;
						}
					}
					iVar4++;
				}
			}
		}
		else
		{
			if (IS_ACTOR_ALIVE((*&Local_4 + 660)[22]))
			{
				if (GET_LAST_ATTACKER((*&Local_4 + 660)[22]) != Global_34573 || GET_ACTOR_HEALTH((*&Local_4 + 660)[22]) > GET_ACTOR_MAX_HEALTH((*&Local_4 + 660)[22]))
				{
					bVar7 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_LEAVE(false);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_4 + 2432[06], -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 660)[22], bVar7);
					TASK_SEQUENCE_RELEASE(bVar7, 1);
				}
			}
			if (IS_ACTOR_ALIVE((*&Local_4 + 660)[02]))
			{
				if (iLocal_1076)
				{
					if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 840)[9]))
					{
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 660)[02], &Local_4 + 2432[06], 3212836864);
						iLocal_1076 = 0;
					}
				}
				else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 840)[9]))
				{
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, (*&Local_4 + 660)[02], &Local_4 + 2432[26], 3212836864);
					iLocal_1076 = 1;
				}
			}
		}
		return 0;
	}
	Function_393(&Local_4 + 660);
	Function_223(bLocal_945);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_940)))
	{
		bVar3 = ADD_BLIP_FOR_ACTOR(bLocal_940, 325, 0, 2, 0);
		SET_BLIP_NAME(bVar3, "Gun01_wagonBlip");
	}
	ACTOR_START_FORCE_HOLSTER(bLocal_934, 1, 0);
	iLocal_1057 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
	Function_231(36);
	return 1;
}

void Function_393(var uParam0) //Position: 0x1451E / 83230
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar02]))
		{
			bVar1 = GET_BLIP_ON_ACTOR((*uParam0)[iVar02]);
			if (IS_BLIP_VALID(bVar1))
			{
				REMOVE_BLIP(bVar1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_394() //Position: 0x1455E / 83294
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_ShoutEncRescue", "Gun01_ShoutEncRescue", false, 2, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395() //Position: 0x145AF / 83375
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v2_AA1", "Gun01_Banter1stAmbush_v2_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v2_AA2", "Gun01_Banter1stAmbush_v2_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v2_AA3", "Gun01_Banter1stAmbush_v2_AA3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_Banter1stAmbush_v2_AB1", "Gun01_Banter1stAmbush_v2_AB1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_Banter1stAmbush_v2_AB2", "Gun01_Banter1stAmbush_v2_AB2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v2_AC1", "Gun01_Banter1stAmbush_v2_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v2_AC2", "Gun01_Banter1stAmbush_v2_AC2", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_396() //Position: 0x147BA / 83898
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Gun01_Banter1stAmbush_v1_AA", "Gun01_Banter1stAmbush_v1_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v1_AB", "Gun01_Banter1stAmbush_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_Banter1stAmbush_v1_AC", "Gun01_Banter1stAmbush_v1_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v1_AD1", "Gun01_Banter1stAmbush_v1_AD1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v1_AD2", "Gun01_Banter1stAmbush_v1_AD2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_Banter1stAmbush_v1_AE", "Gun01_Banter1stAmbush_v1_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v1_AF1", "Gun01_Banter1stAmbush_v1_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Banter1stAmbush_v1_AF2", "Gun01_Banter1stAmbush_v1_AF2", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_397() //Position: 0x14A04 / 84484
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_EscprtWagon", "Gun01_EscprtWagon", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_398() //Position: 0x14A4F / 84559
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_399() //Position: 0x14A5C / 84572
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_400() //Position: 0x14A68 / 84584
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 840)[6]))
	{
		if (!IS_ACTOR_IN_VOLUME(bLocal_934, (*&Local_4 + 840)[7]))
		{
			if (!IS_ACTOR_IN_VOLUME(bLocal_940, (*&Local_4 + 840)[7]))
			{
				return 0;
			}
		}
	}
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_941, false, "DUCK");
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2580, 4, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_941, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		bVar0 = (*&Local_4 + 660)[iVar22];
		if (Function_382(bVar0, 0, 1, 1, 0, 0, 0, 0, 0))
		{
			if (iVar2 == 0)
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_LEAVE(false);
				TASK_GO_TO_COORD(false, &Local_4 + 2432[06], 4);
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_4 + 2432[06], -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar0, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
			else if (iVar2 == 1)
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_LEAVE(false);
				TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2532), -1.0f, 1086324736);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar0, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
			else if (iVar2 == 2)
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, false);
				MEMORY_PREFER_RIDING(bVar0, false);
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_KILL_CHAR(false, Global_34573);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar0, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
		}
		iVar2++;
	}
	SET_ACTOR_PROOF(bLocal_934, 16);
	SET_ACTOR_PROOF(bLocal_941, 16);
	iLocal_1057 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 0);
	AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
	Function_231(26);
	return 1;
}

int Function_401() //Position: 0x14BFF / 84991
{
	bool bVar0;
	
	if (!Function_402(bLocal_941, bLocal_940, 0))
	{
		return 0;
	}
	SET_ACTOR_IS_COMPANION(bLocal_941, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_941, Local_4.f_2572, 4, 0, 0, 1, false);
	ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_940, 3212836864, 3212836864, 4, 1, 0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_940, Local_4.f_2572, 4.0f, 1, 2.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_934, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	Function_231(16);
	return 1;
}

bool Function_402(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14C6B / 85099
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

int Function_403(bool bParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x14C92 / 85138
{
	if (Function_350(bParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_250();
		}
		if (!Function_133())
		{
			Function_404(uParam2, uParam3, uParam4);
			Function_232(bParam0);
			return 1;
		}
		Function_233(bParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_404(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14CD7 / 85207
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_405(bParam0, bParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_132(bParam0, bParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_406(bParam0, bParam1, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, bParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_405(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x14D35 / 85301
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

void Function_406(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x14D7C / 85372
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

float Function_407(bool bParam0, bool bParam1) //Position: 0x14DCF / 85455
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

int Function_408() //Position: 0x14EC0 / 85696
{
	Function_343(&Local_4 + 384, 703, 2, 0);
	Function_343(&Local_4 + 384, 1196, 2, 0);
	Function_343(&Local_4 + 384, 262, 2, 0);
	Function_343(&Local_4 + 384, 499, 2, 0);
	Function_343(&Local_4 + 384, 502, 2, 0);
	Function_343(&Local_4 + 384, 498, 2, 0);
	if (Function_310(&Local_4 + 384))
	{
		return 1;
	}
	return 0;
}

void Function_409() //Position: 0x14F28 / 85800
{
	bool bVar0;
	
	Function_245(iLocal_716);
	Function_432(StackVal, StackVal, Function_245(iLocal_716), iLocal_716, Global_30633[0], Function_247(iLocal_716), 2);
	MEMORY_PREFER_RIDING(bLocal_934, true);
	AI_GOAL_LOOK_CLEAR(bLocal_934);
	ACTOR_START_FORCE_HOLSTER(bLocal_934, 1, 0);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_934, true);
	CLEAR_ACTOR_MAX_SPEED(bLocal_934);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_934, true);
	Function_218(8);
	Function_359(1);
	Function_359(256);
	Function_358((*&Local_4 + 760)[0]);
	Function_305(bLocal_937);
	if (!IS_ACTOR_VALID(bLocal_940))
	{
		Function_322();
		bLocal_940 = (*&Local_4 + 596)[02];
		if (Function_321(bLocal_940, 1))
		{
			ENABLE_VEHICLE_SEAT(bLocal_940, false, 0);
			ENABLE_VEHICLE_SEAT(bLocal_940, true, 0);
			ENABLE_VEHICLE_SEAT(bLocal_940, 2, 0);
			ENABLE_VEHICLE_SEAT(bLocal_940, 3, 0);
			ENABLE_VEHICLE_SEAT(bLocal_940, 4, 0);
			ENABLE_VEHICLE_SEAT(bLocal_940, 5, 0);
			Function_431(bLocal_940, 0.0f);
			Function_430(bLocal_940);
			Function_429(bLocal_940);
			Function_425(&(Local_773[517]), bLocal_940, "Wagon", 0, 0x5f5e100, 1);
			Function_423(&(Local_773[517]), 16);
		}
	}
	Function_420(&(Local_773[417]), 8, 1);
	if (!IS_ACTOR_VALID(bLocal_941))
	{
		Function_419();
		bLocal_941 = (*&Local_4 + 608)[02];
		if (Function_321(bLocal_941, 1))
		{
			SET_ANIMAL_CAN_ATTACK(bLocal_941, 0);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_941, false);
			SET_CRIPPLE_ENABLE(bLocal_941, 0);
			MEMORY_PREFER_RIDING(bLocal_941, true);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_941, 0);
			TASK_PRIORITY_SET(bLocal_941, true);
			TASK_STAND_STILL(bLocal_941, -1.0f, 0, 0);
			ACTOR_START_FORCE_HOLSTER(bLocal_941, 0, 0);
			DECOR_SET_BOOL(bLocal_941, "CanBeLasso", false);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_941, false);
			Function_425(&(Local_773[417]), bLocal_941, "Wagoner", 1, 0x5f5e100, 1);
		}
	}
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_941, true);
	SET_ACTOR_IS_COMPANION(bLocal_941, 1);
	SET_ACTOR_IS_COMPANION(bLocal_941, 1);
	SET_ACTOR_FACTION(bLocal_941, 20);
	if (!iLocal_1036[3])
	{
		if (Function_321(bLocal_939, 1))
		{
			ACCESSORIZE_HORSE(bLocal_939, 3);
			SET_ANIMAL_CAN_ATTACK(bLocal_939, 0);
			MEMORY_IDENTIFY(bLocal_934, bLocal_939);
			MEMORY_REPORT_POSITION_AUTO(bLocal_934, bLocal_939, true);
			DECOR_SET_BOOL(bLocal_939, "bNoInjuryEjection", true);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[136]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_939, *(&Local_4 + 892[86]), 1, true, 1);
		if (GET_MOUNT(Global_34573) != bLocal_938)
		{
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_938);
		}
		if (GET_MOUNT(bLocal_934) != bLocal_939)
		{
			ACTOR_MOUNT_ACTOR(bLocal_934, bLocal_939);
		}
		SET_ACTOR_IN_VEHICLE(bLocal_941, bLocal_940, false);
		TASK_CLEAR(bLocal_941);
	}
	Function_413();
	if (!iLocal_1052)
	{
		CREATE_PROP_IN_LAYOUT(bLocal_653, "Chair01", "p_gen_chair01x", *(&Local_4 + 1836[06]), *(&Local_4 + 1836[06] + 12), 0);
		CREATE_PROP_IN_LAYOUT(bLocal_653, "Chair02", "p_gen_chair01x", *(&Local_4 + 1836[16]), *(&Local_4 + 1836[16] + 12), 0);
		iLocal_1052 = 1;
	}
	Function_412(&iLocal_882);
	Function_410(Global_34573, &iLocal_882);
	Function_410(bLocal_934, &iLocal_882);
	Function_410(bLocal_941, &iLocal_882);
	Function_410(bLocal_940, &iLocal_882);
	iLocal_881 = 0;
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	iLocal_1069 = 0;
	iLocal_1053 = 0;
	Function_213(bLocal_946);
	Function_212(bLocal_987);
	Function_207(5, 0, 1);
	bVar0 = ADD_BLIP_FOR_ACTOR(bLocal_940, 325, 0.0f, 2, 0);
	SET_BLIP_NAME(bVar0, "Gun01_wagonBlip");
	return;
}

void Function_410(bool bParam0, int iParam1) //Position: 0x152B7 / 86711
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = Function_411(bParam0, iParam1);
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= *iParam1)
			{
				if (!IS_ACTOR_VALID((*iParam1)[iVar19]))
				{
					(*iParam1)[iVar19] = bParam0;
					return;
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_411(int iParam0, int iParam1) //Position: 0x152FD / 86781
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if (IS_ACTOR_VALID((*iParam1)[iVar09]))
		{
			if (iParam0 == (*iParam1)[iVar09])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_412(int iParam0) //Position: 0x15331 / 86833
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar09] = "";
		*(iParam0[iVar09] + 4) = { 0.0f, 0.0f, 0.0f };
		iParam0[iVar09]->f_16 = 0.0f;
		*(iParam0[iVar09] + 20) = { 0.0f, 0.0f, 0.0f };
		iParam0[iVar09]->f_32 = 0.0f;
		iVar0++;
	}
	return;
}

void Function_413() //Position: 0x1537F / 86911
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	if (IS_ACTOR_VALID((*&Local_4 + 648)[02]))
	{
		return;
	}
	Function_418();
	bLocal_945 = (*&Local_4 + 648)[02];
	if (Function_321(bLocal_945, 1))
	{
		SET_ACTOR_INVULNERABILITY(bLocal_945, true);
		ENABLE_VEHICLE_SEAT(bLocal_945, false, 0);
		ENABLE_VEHICLE_SEAT(bLocal_945, true, 0);
		ENABLE_VEHICLE_SEAT(bLocal_945, 2, 0);
		ENABLE_VEHICLE_SEAT(bLocal_945, 3, 0);
		ENABLE_VEHICLE_SEAT(bLocal_945, 4, 0);
		ENABLE_VEHICLE_SEAT(bLocal_945, 5, 0);
		bVar2 = CREATE_PROP_IN_LAYOUT(bLocal_653, "Prop01", "p_bat_crate02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bVar2, GET_OBJECT_FROM_ACTOR(bLocal_945), false);
		ATTACH_OBJECTS(bVar2, GET_OBJECT_FROM_ACTOR(bLocal_945), Function_53(), -0,376f, 1,238f, -0,615f, 0.0f, -101,886f, 0.0f, 4294967295);
		bVar3 = CREATE_PROP_IN_LAYOUT(bLocal_653, "Prop02", "p_bat_barrel05x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bVar3, GET_OBJECT_FROM_ACTOR(bLocal_945), false);
		ATTACH_OBJECTS(bVar3, GET_OBJECT_FROM_ACTOR(bLocal_945), Function_53(), -0,213f, 1,236f, 1,356f, 0.0f, 0.0f, 0.0f, 4294967295);
		bLocal_985 = CREATE_PROP_IN_LAYOUT(bLocal_653, "nLantern01", "p_gen_lantern04x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_985, GET_OBJECT_FROM_ACTOR(bLocal_945), false);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_985, bVar2, false);
		ATTACH_OBJECTS(bLocal_985, GET_OBJECT_FROM_ACTOR(bLocal_945), Function_53(), -0,103f, 2,311f, -0,288f, 0.0f, 98,07f, 0.0f, 4294967295);
		bVar1 = GET_PHYSINST_FROM_OBJECT(bLocal_985);
		SET_PROP_TARGETABLE(bVar1, 1, 0);
		SET_PROP_TARGETABLE_ACQUISITION_RADIUS(bVar1, 10.0f);
		SET_PROP_TARGETABLE_TARGET_BOX_SIZE(bVar1, 1.0f, 1.0f);
		SET_PROP_TARGETABLE_SCORE_BIAS(bVar1, -100.0f);
		SET_PROP_TARGETABLE_AS_ENEMY(bVar1, 1);
		bLocal_986 = CREATE_PROP_IN_LAYOUT(bLocal_653, "nLantern02", "p_gen_lantern04x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_986, GET_OBJECT_FROM_ACTOR(bLocal_945), false);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_986, bVar3, false);
		ATTACH_OBJECTS(bLocal_986, GET_OBJECT_FROM_ACTOR(bLocal_945), Function_53(), -0,46f, 2,19f, 1,434f, 0.0f, -82,358f, 0.0f, 4294967295);
		bVar1 = GET_PHYSINST_FROM_OBJECT(bLocal_986);
		SET_PROP_TARGETABLE(bVar1, 1, 0);
		SET_PROP_TARGETABLE_ACQUISITION_RADIUS(bVar1, 10.0f);
		SET_PROP_TARGETABLE_TARGET_BOX_SIZE(bVar1, 1.0f, 1.0f);
		SET_PROP_TARGETABLE_SCORE_BIAS(bVar1, -100.0f);
		SET_PROP_TARGETABLE_AS_ENEMY(bVar1, 1);
	}
	Function_417();
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		bVar0 = (*&Local_4 + 660)[iVar42];
		if (Function_321(bVar0, 1))
		{
			Function_416(bVar0, Global_34573);
			Function_416(bVar0, bLocal_934);
			Function_416(bVar0, bLocal_941);
			Function_415(bVar0, 70.0f, 2.0f, 3.0f);
			SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 359,5f);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 15, true);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
			SET_ACTOR_MAX_HEALTH(bVar0, (GET_ACTOR_MAX_HEALTH(bVar0) * 0,5f));
			Function_414(bVar0);
			AI_SET_NAV_ACTOR_WIDTH(bVar0, 0,5f);
			if (iLocal_716 == 4)
			{
				ADD_ACTORSET_MEMBER(bLocal_933, bVar0);
			}
			if (iVar4 == 0)
			{
				SET_ACTOR_IN_VEHICLE(bVar0, bLocal_945, false);
			}
			else if (iVar4 == 2)
			{
				SET_ACTOR_IN_VEHICLE(bVar0, bLocal_945, true);
			}
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
		}
		iVar4++;
	}
	return;
}

void Function_414(bool bParam0) //Position: 0x15694 / 87700
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
		}
	}
	return;
}

void Function_415(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x156B4 / 87732
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

void Function_416(bool bParam0, bool bParam1) //Position: 0x156FB / 87803
{
	MEMORY_CONSIDER_AS_ENEMY(bParam0, bParam1);
	MEMORY_IDENTIFY(bParam0, bParam1);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 1);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, true);
	return;
}

void Function_417() //Position: 0x1571D / 87837
{
	(*&Local_4 + 660)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RoadblockBandito01", 499, -2794,754f, 30,9805f, 4410,462f, 0.0f, 158,5703f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 660)[02], 19);
	(*&Local_4 + 660)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RoadblockBandito02", 502, -2790,394f, 31,04593f, 4408,135f, 0.0f, 228,097f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 660)[12], 19);
	(*&Local_4 + 660)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RoadblockBandito03", 498, -2791,672f, 30,95862f, 4412,051f, 0.0f, 159,5943f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 660)[22], 19);
	return;
}

void Function_418() //Position: 0x157FB / 88059
{
	(*&Local_4 + 648)[02] = Function_323(Local_4, "RoadblockWagon", 1200, 977, -2792,14f, 31,02058f, 4409,789f, 0.0f, 70,1304f, 0.0f, 1, 976, 976, 976, 4);
	return;
}

void Function_419() //Position: 0x15846 / 88134
{
	(*&Local_4 + 608)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Driver", 262, -2840,793f, 33,1304f, 4591,881f, 0.0f, -49,7223f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 608)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 608)[02], 20);
	return;
}

void Function_420(var uParam0, int iParam1, int iParam2) //Position: 0x15893 / 88211
{
	if (iParam1 != 100000000)
	{
		Function_422(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_421(uParam0, iParam2);
	}
	return;
}

void Function_421(int iParam0, bool bParam1) //Position: 0x158B6 / 88246
{
	iParam0->f_40 = 0;
	Function_422(iParam0, 2, bParam1);
	Function_422(iParam0, 4, bParam1);
	Function_422(iParam0, 8, bParam1);
	Function_422(iParam0, 16, bParam1);
	Function_422(iParam0, 32, bParam1);
	Function_422(iParam0, 64, bParam1);
	Function_422(iParam0, 128, bParam1);
	Function_422(iParam0, 256, bParam1);
	Function_422(iParam0, 512, bParam1);
	Function_422(iParam0, 1024, bParam1);
	return;
}

void Function_422(int iParam0, int iParam1, bool bParam2) //Position: 0x1591C / 88348
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

void Function_423(int iParam0, int iParam1) //Position: 0x15958 / 88408
{
	if (iParam1 != 100000000)
	{
		Function_424(iParam0, iParam1);
	}
	else
	{
		Function_421(iParam0, 1);
	}
	return;
}

void Function_424(int iParam0, bool bParam1) //Position: 0x15978 / 88440
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_425(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x159A3 / 88483
{
	if (!Function_428(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_427(uParam0, bParam2))
	{
		return 0;
	}
	Function_426(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_420(uParam0, iParam4, iParam5);
	return 1;
}

void Function_426(var uParam0, int iParam1) //Position: 0x159DF / 88543
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_427(int iParam0, bool bParam1) //Position: 0x159EB / 88555
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

bool Function_428(var uParam0, bool bParam1) //Position: 0x15A74 / 88692
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

void Function_429(bool bParam0) //Position: 0x15C00 / 89088
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

void Function_430(bool bParam0) //Position: 0x15C72 / 89202
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

void Function_431(bool bParam0, bool bParam1) //Position: 0x15CDD / 89309
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_INVINCIBLE -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(bParam0))
	{
		bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_432(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x15D51 / 89425
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
	if (iParam3 != Global_34165.f_48 && !Function_437())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_436(0);
	Function_435();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_434(uParam4, iVar0, iVar1);
	Function_433();
}

void Function_433() //Position: 0x15DEE / 89582
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

void Function_434(int iParam0, bool bParam1, bool bParam2) //Position: 0x15E2F / 89647
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

void Function_435() //Position: 0x15F95 / 90005
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_436(bool bParam0) //Position: 0x15FB9 / 90041
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

bool Function_437() //Position: 0x15FE8 / 90088
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_438() //Position: 0x16003 / 90115
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[36]), 1, true, 1);
	Function_218(8);
	Function_359(1);
	Function_359(256);
	Function_358((*&Local_4 + 760)[0]);
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	return;
}

void Function_439() //Position: 0x1604C / 90188
{
	if (!Function_632(bLocal_717))
	{
		return;
	}
	Function_212(DROP_ACCESSORY_ENUM(bLocal_941, 0));
	Function_456();
	Function_455();
	Function_307();
	Function_450();
	Function_446();
	Function_440(StackVal, StackVal, "$/cutscene/GUN01_CS03/GUN01_CS03", &iLocal_881, *(&Local_4 + 892[26]), 0, 150.0f, 300.0f, 2, 1, 2, 2, 0, 1);
	return;
}

int Function_440(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, var uParam13) //Position: 0x160BC / 90300
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_443(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_445()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_441();
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
	else if ((!Function_443(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_445()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_443(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_441() //Position: 0x16302 / 90882
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
			Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_442(char* cParam0, vector3 vParam1) //Position: 0x16356 / 90966
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

bool Function_443(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1647E / 91262
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_444(bParam0);
		if (VDIST(Function_444(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_444(bool bParam0) //Position: 0x16508 / 91400
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

int Function_445() //Position: 0x16572 / 91506
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_446() //Position: 0x16581 / 91521
{
	bool bVar0;
	
	if (Function_350(&bLocal_1030) > 8.0f)
	{
		return;
	}
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_ALIVE(bVar0))
	{
		if (IS_ACTOR_HUMAN(bVar0))
		{
			if (GET_ACTOR_FACTION(bVar0) == 20 && GET_ACTOR_FACTION(bVar0) == 19)
			{
				if (((bVar0 == bLocal_934 && bVar0 == bLocal_936) && bVar0 == bLocal_937) && bVar0 == bLocal_941)
				{
					if (iLocal_716 != 0 && bLocal_717 >= 36)
					{
						Function_449();
					}
					else if (iLocal_716 != 0 || (iLocal_716 != 2 && bLocal_717 == 56))
					{
						Function_448();
					}
					else
					{
						Function_447();
					}
					Function_232(&bLocal_1030);
				}
			}
		}
	}
	return;
}

void Function_447() //Position: 0x1661B / 91675
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_GunOnAmbRescue", "Gun01_GunOnAmbRescue", false, 2, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_448() //Position: 0x1666C / 91756
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_GunOnAmbBird", "Gun01_GunOnAmbBird", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_449() //Position: 0x166B9 / 91833
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_GunOnSpectBottle", "Gun01_GunOnSpectBottle", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_450() //Position: 0x1670E / 91918
{
	if (!IS_ACTOR_ALIVE(bLocal_936))
	{
		return;
	}
	if (!iLocal_1048)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_930))
		{
			SET_ACTION_NODE_FOR_ACTOR(bLocal_936, "gun01_drunk/React");
			Function_232(&bLocal_1000);
			iLocal_1048 = 1;
			bLocal_951 = "";
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_930);
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_928);
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_929);
			return;
		}
	}
	if (Function_453(0))
	{
		iLocal_1049 = 0;
		iLocal_1048 = 0;
	}
	else if (!iLocal_1049)
	{
		if (!(iLocal_716 != 0 && IS_PLAYER_DEADEYE(0)))
		{
			if (!Function_452())
			{
				Function_451();
				iLocal_1049 = 1;
			}
		}
	}
	if (Function_350(&bLocal_1000) > 8.0f)
	{
		return;
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_928))
	{
		SET_ACTION_NODE_FOR_ACTOR(bLocal_936, "gun01_drunk/reactL");
		Function_232(&bLocal_1000);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_928);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_929);
	}
	else if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_929))
	{
		SET_ACTION_NODE_FOR_ACTOR(bLocal_936, "gun01_drunk/reactR");
		Function_232(&bLocal_1000);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_928);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_929);
	}
	return;
}

void Function_451() //Position: 0x16825 / 92197
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun01_DrunkRuns", "Gun01_DrunkRuns", false, 1, 1, 0, 1);
		Function_370(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_452() //Position: 0x1686C / 92268
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_720[iVar04].f_12)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_453(bool bParam0) //Position: 0x16893 / 92307
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (bParam0)
	{
		bVar0 = GET_GRINGO_FROM_OBJECT(Local_4.f_2508);
		if (Function_454(bVar0, 1))
		{
			bVar1 = GRINGO_GET_USE_COMPONENT_EXT(bVar0, "UseCase1");
			if (IS_GRINGO_COMPONENT_VALID(bVar1))
			{
				bVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar1, 0);
				while (bVar4 >= 4294967295)
				{
					bVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar4, bVar1);
					if (IS_GRINGO_COMPONENT_VALID(bVar2))
					{
						bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar2, bVar0);
						if (IS_PHYSINST_VALID(bVar3))
						{
							if (!HAS_PHYSINST_BROKEN_APART(bVar3))
							{
								if (!IS_PHYSINST_VALID(bLocal_951))
								{
									bLocal_951 = bVar3;
								}
								Function_212(bLocal_930);
								bLocal_930 = CREATE_EVENT_TRAP("BottleTrap", 5, bLocal_653);
								EVENT_TRAP_ON_VOLUME(bLocal_930, (*&Local_4 + 760)[6]);
								return 1;
							}
						}
					}
					bVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar1, bVar4 + 1);
				}
			}
			else
			{
				LOG_ERROR("Could not find a valid 'UseCase1' component on the gringo!");
			}
		}
	}
	else
	{
		if (!DECOR_CHECK_EXIST(bLocal_936, "bNeedBottle"))
		{
			return 0;
		}
		LOG_ERROR("Found bNeedBottle decorator!");
		bLocal_951 = GET_PHYSINST_FROM_OBJECT(CREATE_PROP_IN_LAYOUT(bLocal_653, Function_53(), "p_gen_bottletequila02x", 0.0f, 5.0f, 5.0f, 0.0f, 0.0f, 0.0f, 1));
		ATTACH_OBJECTS_USING_LOCATOR(bLocal_951, bLocal_936, "wrist_l_Attachment", "grab", ATTACH_SLOT_FROM_STRING("A"));
		Function_212(bLocal_930);
		bLocal_930 = CREATE_EVENT_TRAP("BottleTrap", 5, bLocal_653);
		EVENT_TRAP_ON_VOLUME(bLocal_930, (*&Local_4 + 760)[6]);
		DECOR_REMOVE(bLocal_936, "bNeedBottle");
		return 1;
	}
	return 0;
}

bool Function_454(bool bParam0, bool bParam1) //Position: 0x16A8B / 92811
{
	if (IS_GRINGO_VALID(bParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		LOG_ERROR("AssertGringoValid: Gringo not valid!");
	}
	return 0;
}

void Function_455() //Position: 0x16ACE / 92878
{
	if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_939))
	{
		if (!IS_ACTOR_ALIVE(bLocal_938))
		{
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_939, 0);
		}
	}
	return;
}

void Function_456() //Position: 0x16AEE / 92910
{
	if (!Function_357(Global_30693[0]))
	{
		return;
	}
	if (!IS_DOOR_VALID(bLocal_952))
	{
		bLocal_952 = Function_457(Global_30693[0], "nchuparosa", "bank01props01x", 1);
	}
	if (!IS_DOOR_VALID(bLocal_952))
	{
		return;
	}
	if (iLocal_1053)
	{
		if (!IS_DOOR_LOCKED(bLocal_952))
		{
			Function_120(bLocal_952, 1);
		}
	}
	else if (IS_DOOR_LOCKED(bLocal_952))
	{
		Function_154(bLocal_952, 1);
	}
	return;
}

bool Function_457(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x16B6B / 93035
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

void Function_458() //Position: 0x16C07 / 93191
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	int iVar9;
	float fVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	
	vVar3 = { 1.0f, 0.0f, 0.0f };
	Function_506();
	switch (bLocal_717)
	{
		case 0x00000000:
			Function_361(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(19);
			if (!iLocal_1036[2])
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!Function_357(Global_30693[0]))
				{
					Function_356(&Local_654);
				}
				Function_218(8);
				Function_359(1);
				Function_359(256);
				Function_358((*&Local_4 + 760)[0]);
				Function_505();
				Function_231(1);
			}
			else
			{
				Function_504();
				Function_231(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_503()) && Function_310(&Local_1081 + 4))
			{
				if (!IS_ACTOR_VALID((*&Local_4 + 572)[02]))
				{
					Function_502();
					bLocal_937 = (*&Local_4 + 572)[02];
					TASK_STAND_STILL(bLocal_937, -1.0f, 0, 0);
					DECOR_SET_BOOL(bLocal_937, "CanBeLasso", false);
					Function_425(&(Local_773[317]), bLocal_937, "BankManager", 0, 0x5f5e100, 1);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_934, *(&Local_4 + 892[76]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_937, *(&Local_4 + 1328[116]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_939, *(&Local_4 + 892[156]), 1, true, 1);
				TASK_STAND_STILL(bLocal_934, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_937, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_939, -1.0f, 0, 0);
				if (IS_ACTOR_VALID(bLocal_938))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[126]), 1, true, 1);
					TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
				}
				if (!iLocal_1052)
				{
					CREATE_PROP_IN_LAYOUT(bLocal_653, "Chair01", "p_gen_chair01x", *(&Local_4 + 1836[06]), *(&Local_4 + 1836[06] + 12), 0);
					CREATE_PROP_IN_LAYOUT(bLocal_653, "Chair02", "p_gen_chair01x", *(&Local_4 + 1836[16]), *(&Local_4 + 1836[16] + 12), 0);
					iLocal_1052 = 1;
				}
				Function_504();
				Function_231(2);
			}
			else if (Function_350(&bLocal_988) < 2.0f)
			{
				Function_232(&bLocal_988);
			}
			break;
		
		case 0x00000002:
			if (Function_500(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_654, iLocal_716))
			{
				Function_231(3);
			}
			else
			{
				if (IS_ACTOR_VALID(bLocal_938))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[126]), 1, true, 1);
				}
				Function_499();
				Function_231(4);
			}
			break;
		
		case 0x00000003:
			if (Function_280("$/cutscene/GUN_01_CS02/GUN_01_CS02", &iLocal_709, &Local_654, &iLocal_716, 106035, 105859, 105760, 105451, 105431, 105338, 0, 2, 0, 2, 2, 0, 1))
			{
				Function_499();
				Function_231(4);
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(bLocal_938))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[126]), 1, true, 1);
			}
			if (!IS_ACTOR_ALIVE(bLocal_938))
			{
				if (!Function_299())
				{
					LOG_ERROR("We need to spawn the player horse after the mid cutscene, but it's not streamed in!");
				}
				else
				{
					bLocal_938 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
					if (Function_321(bLocal_938, 1))
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[126]), 1, true, 1);
						TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
					}
				}
			}
			Function_245(iLocal_716);
			Function_432(StackVal, StackVal, Function_245(iLocal_716), iLocal_716, Global_30633[2], Function_247(iLocal_716), 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_284(1.0f);
			Function_231(6);
			break;
		
		case 0x00000006:
			if (!Function_488())
			{
				if (!iLocal_1066)
				{
					if (IS_ACTOR_VALID(bLocal_941))
					{
						if (Function_485((*&Local_4 + 620)[02], bLocal_941, 0,5f, 1, 0))
						{
							iLocal_1066 = 1;
							SET_ANIMATION_OVERRIDE_SCALE(bLocal_941, 0.0f);
							SET_ANIMATION_OVERRIDE_SCALE((*&Local_4 + 620)[02], 0.0f);
						}
					}
				}
				fVar12 = Function_407(Global_34573, bLocal_934);
				if (fVar12 < 100.0f)
				{
					Function_248("Gunslinger_abandoned");
					bLocal_1044 = true;
				}
				else if (fVar12 < 50.0f)
				{
					if (!iLocal_1050)
					{
						Function_223(bLocal_938);
						Function_207(5, 1, 1);
						Function_399();
						Function_406("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
				}
				else
				{
					Function_207(5, 0, 1);
					if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_938)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_938, 334, 0, 2, 0);
						}
					}
					iLocal_1050 = 0;
					if (!iLocal_1067)
					{
						if (IS_ACTOR_SHOOTING(Global_34573))
						{
							if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_934, "Gun01_ShootsRandRescue", Function_53(), 0, 0, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_1067 = 1;
							}
						}
					}
					if (!iLocal_1068)
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_934, (*&Local_4 + 760)[14]))
						{
							if (!IS_ACTOR_RIDING(Global_34573))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_934, "Gun01_NoGetOnRescue", Function_53(), 0, 0, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_1068 = 1;
							}
						}
					}
					if (iLocal_1033 == 0)
					{
						if (!HUD_IS_FADING())
						{
							Function_322();
							bLocal_940 = (*&Local_4 + 596)[02];
							if (Function_321(bLocal_940, 1))
							{
								ENABLE_VEHICLE_SEAT(bLocal_940, false, 0);
								ENABLE_VEHICLE_SEAT(bLocal_940, true, 0);
								ENABLE_VEHICLE_SEAT(bLocal_940, 2, 0);
								ENABLE_VEHICLE_SEAT(bLocal_940, 3, 0);
								ENABLE_VEHICLE_SEAT(bLocal_940, 4, 0);
								ENABLE_VEHICLE_SEAT(bLocal_940, 5, 0);
								SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_940), true);
								Function_431(bLocal_940, 0.0f);
								Function_429(bLocal_940);
								Function_430(bLocal_940);
								Function_425(&(Local_773[517]), bLocal_940, "Wagon", 0, 0x5f5e100, 1);
								Function_423(&(Local_773[517]), 16);
							}
							Function_419();
							bLocal_941 = (*&Local_4 + 608)[02];
							if (Function_321(bLocal_941, 1))
							{
								TASK_STAND_STILL(bLocal_941, -1.0f, 0, 0);
								SET_CRIPPLE_ENABLE(bLocal_941, 0);
								SET_ACTOR_IS_COMPANION(bLocal_941, 0);
								DECOR_SET_BOOL(bLocal_941, "CanBeLasso", false);
								SET_ACTOR_UPDATE_PRIORITY(bLocal_941, false);
							}
							if (Function_321(bLocal_941, 1))
							{
								SET_ANIMAL_CAN_ATTACK(bLocal_941, 0);
								SET_ACTOR_UPDATE_PRIORITY(bLocal_941, false);
								SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_941, (*&Local_4 + 840)[0], 4, true);
								TASK_PRIORITY_SET(bLocal_941, true);
								TASK_STAND_STILL(bLocal_941, -1.0f, 0, 0);
								AI_IGNORE_ACTOR(bLocal_941);
								SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_941, 0);
								ACTOR_START_FORCE_HOLSTER(bLocal_941, 0, 0);
								Function_425(&(Local_773[417]), bLocal_941, "Wagoner", 0, 0x5f5e100, 1);
							}
							Function_484();
							if (!IS_ACTORSET_VALID(bLocal_933))
							{
								bLocal_933 = CREATE_ACTORSET_IN_LAYOUT(bLocal_653, "CurBanditoSet", 0);
							}
							bVar14 = false;
							while (bVar14 <= 3)
							{
								bVar0 = (*&Local_4 + 620)[bVar142];
								if (Function_321(bVar0, 1))
								{
									SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
									SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, (*&Local_4 + 840)[0], 4, true);
									SET_ACTOR_INVULNERABILITY(bVar0, true);
									SET_ACTOR_ALLOW_DISARM(bVar0, false);
									ADD_ACTORSET_MEMBER(bLocal_933, bVar0);
									AI_IGNORE_ACTOR(bVar0);
									AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
									SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
									MEMORY_CONSIDER_AS(bLocal_941, bVar0, 2);
									bVar1 = GET_MOUNT(bVar0);
									if (IS_ACTOR_VALID(bVar1))
									{
										SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
										SET_ACTOR_INVULNERABILITY(bVar1, true);
										if (bVar14 <= 2)
										{
											bLocal_942[bVar14] = bVar1;
										}
									}
									MEMORY_ALLOW_SHOOTING(bVar0, false);
									Function_415(bVar0, 70.0f, 2.0f, 3.0f);
									TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
								}
								bVar14++;
							}
							Function_483();
							Function_232(&bLocal_988);
							iLocal_1033 = 1;
						}
					}
					else if (iLocal_1033 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_350(&bLocal_988) < 10.0f)
						{
							if (!IS_ACTOR_RIDING(Global_34573))
							{
								Function_406("Gun01_obj04a", 7,5f, 1, 2, 0, 0, 0);
							}
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!Function_482())
			{
				fVar12 = Function_407(Global_34573, bLocal_934);
				if (fVar12 < 100.0f)
				{
					Function_248("Gunslinger_abandoned");
					bLocal_1044 = true;
				}
				else if (fVar12 < 50.0f)
				{
					if (!iLocal_1051)
					{
						Function_399();
						if (Function_481(bLocal_934, Global_34573, 0.0f))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_934, "Gun01_FarAheadRescue", Function_53(), 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_934, "Gun01_FarBehindRescue", Function_53(), 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						}
						iLocal_1051 = 1;
					}
					else if (!iLocal_1050)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_399();
							Function_406("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0);
							iLocal_1050 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1050 || iLocal_1051)
					{
						Function_399();
						iLocal_1050 = 0;
						iLocal_1051 = 0;
					}
					if (!iLocal_1070)
					{
						if (IS_ACTOR_ALIVE(bLocal_938))
						{
							if (IS_ACTION_NODE_PLAYING(bLocal_938, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_934, "Gun01_ThrownHorseRescue", Function_53(), 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								iLocal_1070 = 1;
							}
							else if (!IS_ACTOR_RIDING(Global_34573))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_934, "Gun01_OffHorseRescue", Function_53(), 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								iLocal_1070 = 1;
							}
						}
					}
					else if (IS_ACTOR_RIDING(Global_34573))
					{
						if (!IS_ACTION_NODE_PLAYING(bLocal_938, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
						{
							iLocal_1070 = 0;
						}
					}
					if (!iLocal_1067)
					{
						if (IS_ACTOR_SHOOTING(Global_34573))
						{
							if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_934, "Gun01_ShootsRandRescue", Function_53(), 0, 0, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_1067 = 1;
							}
						}
					}
					if (fVar12 > 50.0f)
					{
						if (!IS_ACTOR_IN_VOLUME(bLocal_934, (*&Local_4 + 760)[13]))
						{
							if (GET_ACTOR_MAX_SPEED(bLocal_934) == 4)
							{
								CLEAR_ACTOR_MAX_SPEED(bLocal_934);
								bVar13 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2560, 3, 0, 0, 1, false);
								TASK_DRAW_HOLSTER_WEAPON(false, 1);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_934, bVar13);
								TASK_SEQUENCE_RELEASE(bVar13, 1);
							}
						}
					}
					if (iLocal_1033 == 0)
					{
						if (!HUD_IS_FADING())
						{
							SET_ACTOR_MAX_SPEED(bLocal_934, 4);
							bVar13 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2560, 4, 0, 0, 1, false);
							TASK_DRAW_HOLSTER_WEAPON(false, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_934, bVar13);
							TASK_SEQUENCE_RELEASE(bVar13, 1);
							ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_934, 3212836864, 3212836864, 4, 1, 0);
							Function_207(5, 1, 1);
							Function_406("Gun01_obj04b", 7,5f, 1, 2, 0, 0, 0);
							Function_232(&bLocal_988);
							iLocal_1033 = 1;
						}
					}
					else if (iLocal_1033 == 1)
					{
						if (Function_398())
						{
							Function_232(&bLocal_988);
						}
						else if (Function_350(&bLocal_988) < 1.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterRideBank_v1_AA"))
							{
								Function_480();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterRideBank_v2_AA"))
							{
								Function_479();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterRideBank_v3_AA"))
							{
								Function_478();
							}
							else
							{
								Function_477();
							}
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
					else if (iLocal_1033 == 2)
					{
						if (Function_350(&bLocal_988) < 5.0f)
						{
							AI_SET_NAV_PATHFINDING_ENABLED(bLocal_934, true);
							Function_232(&bLocal_988);
							iLocal_1033 = 3;
						}
					}
				}
			}
			break;
		
		case 0x0000000D:
			if (iLocal_1033 == 0)
			{
				if (Function_350(&bLocal_988) < 2.0f)
				{
					bVar14 = false;
					while (bVar14 <= 3)
					{
						bVar0 = (*&Local_4 + 620)[bVar142];
						if (Function_321(bVar0, 1))
						{
							Function_476(bLocal_934, &iVar9);
							if (bVar14 == 0)
							{
								Function_212(DROP_ACCESSORY_ENUM(bVar0, 0));
								Function_212(DROP_ACCESSORY_ENUM(bLocal_941, 0));
							}
							else if (bVar14 == 1)
							{
								bVar13 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2564, 4, 0, 0, 1, false);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bVar0, bVar13);
								TASK_SEQUENCE_RELEASE(bVar13, 1);
								AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
								COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 13, true);
								MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
							}
							else
							{
								bVar13 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2568, 4, 0, 0, 1, false);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bVar0, bVar13);
								TASK_SEQUENCE_RELEASE(bVar13, 1);
								AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
								COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 13, true);
								MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
							}
						}
						bVar14++;
					}
					RESET_ACTOR_GAITS(Global_34573, 0);
					RESET_ACTOR_GAITS(bLocal_934, 0);
					RESET_ACTOR_GAITS(bLocal_938, 0);
					RESET_ACTOR_GAITS(bLocal_939, 0);
					Function_348(0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1);
					UI_PUSH("CutsceneWithMessages");
					Function_378(bLocal_653, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
					Function_376(-2816,136f, 35,458f, 4573,11f, -0,805f, 0,02f, 0,593f, 99999,9f, 0, 1);
					Function_232(&bLocal_988);
					iLocal_1033 = 1;
				}
			}
			else if (iLocal_1033 == 1)
			{
				if (Function_350(&bLocal_988) < 1.0f)
				{
					Function_399();
					Function_475();
					Function_232(&bLocal_988);
					iLocal_1033 = 2;
				}
			}
			else if (iLocal_1033 == 2)
			{
				if (Function_350(&bLocal_988) < 3.0f)
				{
					SET_PLAYER_DEADEYE_POINTS(0, 1E+07.0f, 0);
					HUD_CLEAR_HELP();
					Function_376(-2839,275f, 34,613f, 4590,109f, -0,468f, -0,242f, 0,85f, 99999,9f, 0, 1);
					Function_132("Gun01_obj04c_help", 10.0f, 1, 0, 2, 1, 0);
					Function_232(&bLocal_988);
					iLocal_1033 = 3;
				}
			}
			else if (iLocal_1033 == 3)
			{
				if (Function_350(&bLocal_988) < 3.0f)
				{
					Function_472(bLocal_938, bLocal_941);
					Function_232(&bLocal_988);
					iLocal_1033 = 4;
				}
			}
			else if (iLocal_1033 == 4)
			{
				if (Function_350(&bLocal_988) < 1.0f)
				{
					Function_207(5, 1, 1);
					Function_202(1, 1);
					Function_302(0, 1, 1, 1, 1, 1, 1, 1, 0, 1);
					UI_POP("CutsceneWithMessages");
					Function_420(&(Local_773[017]), 1024, 1);
					Function_420(&(Local_773[117]), 1024, 1);
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					STREAMING_UNLOAD_SCENE();
					TASK_CLEAR(Global_34573);
					CLEAR_ACTOR_MAX_SPEED(Global_34573);
					Function_380(&bLocal_1021);
					Function_380(&bLocal_1003);
					Function_232(&bLocal_1003);
					iLocal_1064 = 1;
					Function_231(16);
				}
			}
			break;
		
		case 0x00000010:
			if (iLocal_1033 > 1)
			{
				bVar15 = Function_463();
			}
			if (!bVar15)
			{
				fVar12 = Function_407(Global_34573, bLocal_940);
				if (fVar12 < 100.0f)
				{
					Function_248("Wagon_abandoned");
					bLocal_1044 = true;
				}
				else if (fVar12 < 50.0f && iLocal_1033 < 1)
				{
					if (!iLocal_1064)
					{
						Function_393(&Local_4 + 620);
						Function_207(5, 0, 1);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_940)))
						{
							bVar2 = ADD_BLIP_FOR_ACTOR(bLocal_940, 325, 0, 2, 0);
							SET_BLIP_NAME(bVar2, "Gun01_wagonBlip");
						}
						if (!iLocal_1050)
						{
							Function_250();
							Function_406("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0);
							iLocal_1050 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1050)
					{
						Function_223(bLocal_940);
						Function_207(5, 1, 1);
						Function_462(&Local_4 + 620, 322, 4294967295, 0.0f);
						iLocal_1050 = 0;
					}
					if (iLocal_1033 >= 1)
					{
						iLocal_1064 = 0;
					}
					if (iLocal_1033 == 0)
					{
						SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_934, (*&Local_4 + 840)[2], 4, true);
						ACTOR_END_FORCE_HOLSTER(bLocal_934);
						MEMORY_ALLOW_SHOOTING(bLocal_934, true);
						bVar13 = TASK_SEQUENCE_OPEN();
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_4 + 2188[36], -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_934, bVar13);
						TASK_SEQUENCE_RELEASE(bVar13, 1);
						AI_IGNORE_ACTOR(bLocal_941);
						AI_IGNORE_ACTOR(bLocal_940);
						bVar14 = false;
						while (bVar14 <= GET_NUM_DRAFT_POSITIONS(bLocal_940))
						{
							bVar1 = GET_DRAFT_ACTOR(bVar14, bLocal_940);
							if (IS_ACTOR_VALID(bVar1))
							{
								AI_IGNORE_ACTOR(bVar1);
							}
							bVar14++;
						}
						bVar14 = false;
						while (bVar14 <= 3)
						{
							bVar0 = (*&Local_4 + 620)[bVar142];
							if (Function_382(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
							{
								MEMORY_ALLOW_SHOOTING(bVar0, true);
								ADD_ACTOR_STAY_WITHIN_VOLUME(bVar0, (*&Local_4 + 840)[1]);
								if (bVar14 == 0)
								{
								}
								else if (bVar14 == 1)
								{
									Function_461(bVar0, -1.0f);
								}
								else if (bVar14 == 2)
								{
									Function_461(bVar0, -1.0f);
								}
							}
							bVar14++;
						}
						iLocal_1033 = 1;
					}
					else if (iLocal_1033 == 1)
					{
						if (Function_398())
						{
							Function_232(&bLocal_988);
						}
						else if (Function_350(&bLocal_988) < 1.0f)
						{
							Function_399();
							Function_406("Gun01_obj04c", 7,5f, 1, 2, 0, 0, 0);
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000042:
			fVar12 = Function_407(Global_34573, bLocal_940);
			if (fVar12 < 100.0f)
			{
				Function_248("Wagon_abandoned");
				bLocal_1044 = true;
			}
			else if (fVar12 < 50.0f)
			{
				if (!iLocal_1050)
				{
					bVar2 = ADD_BLIP_FOR_ACTOR(bLocal_940, 325, 0, 2, 0);
					SET_BLIP_NAME(bVar2, "Gun01_wagonBlip");
					Function_399();
					Function_406("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0);
					iLocal_1050 = 1;
				}
			}
			else
			{
				if (iLocal_1050)
				{
					Function_223(bLocal_940);
					Function_399();
					iLocal_1050 = 0;
				}
				if (iLocal_1033 == 0)
				{
					if (Function_350(&bLocal_1012) < 1,5f)
					{
						if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_941, "kneel") || IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_941, "cower"))
						{
							SET_ACTION_NODE_FOR_ACTOR(bLocal_941, "default_character_Main");
						}
					}
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_941, "kneel") && !IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_941, "cower"))
					{
						if (Function_350(&bLocal_988) < 1.0f)
						{
							if (IS_ACTOR_VALID(bLocal_942[0]))
							{
								ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_942[0], (*&Local_4 + 840)[3]);
							}
							if (IS_ACTOR_VALID(bLocal_942[1]))
							{
								ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_942[1], (*&Local_4 + 840)[3]);
							}
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_941);
							MEMORY_ALLOW_SHOOTING(bLocal_941, false);
							RESET_ANIM_SET_FOR_ACTOR(bLocal_941, 1);
							AI_SET_NAV_PATHFINDING_ENABLED(bLocal_941, true);
							SET_ACTOR_FACE_STYLE(bLocal_941, 1);
							UNK_0xB89CC342(bLocal_941, &vVar3, &uVar6);
							bVar13 = TASK_SEQUENCE_OPEN();
							TASK_FACE_COORD(false, &uVar6, 0);
							TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_940, 0, 2, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_941, bVar13);
							TASK_SEQUENCE_RELEASE(bVar13, 1);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_934);
							Function_399();
							Function_460();
							Function_231(106);
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_459();
				iLocal_1036[3] = 1;
				iLocal_716 = 4;
				Function_231(0);
			}
			break;
	}
	return;
}

void Function_459() //Position: 0x17FAC / 98220
{
	Function_223(bLocal_940);
	Function_171();
	return;
}

void Function_460() //Position: 0x17FBB / 98235
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Gun01_KillsAllMenBankWagon", "Gun01_KillsAllMenBankWagon", false, 1, 1, 0, 1);
		Function_370(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_461(bool bParam0, bool bParam1) //Position: 0x18030 / 98352
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

void Function_462(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1804B / 98379
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar02]))
		{
			bVar1 = GET_BLIP_ON_ACTOR((*uParam0)[iVar02]);
			if (!IS_BLIP_VALID(bVar1))
			{
				ADD_BLIP_FOR_ACTOR((*uParam0)[iVar02], bParam1, iParam3, 2, 0);
			}
			if (iParam2 != 4294967295)
			{
				HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR((*uParam0)[iVar02], iParam2);
			}
		}
		iVar0++;
	}
}

int Function_463() //Position: 0x180AA / 98474
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = (*&Local_4 + 620)[02];
	if (!iLocal_1069)
	{
		if (IS_ACTOR_SHOOTING(Global_34573))
		{
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			iLocal_1069 = 1;
		}
	}
	if (!bLocal_1073 && !iLocal_1074)
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			if (((Function_350(&bLocal_1021) < 14.0f || ACTORS_IN_RANGE(Global_34573, bVar0, 10.0f)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 840)[4])) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 840)[5]))
			{
				Function_470();
			}
		}
	}
	if (!bLocal_1073 && !iLocal_1074)
	{
		if (!Function_382(bVar0, 1, 1, 1, 0, 0, 0, 0, 0))
		{
			Function_468();
		}
		else if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bVar0), "No_Link") || DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar0), "No_Link"))
		{
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bVar0), "No_Link");
			Function_468();
		}
		else if (GET_LAST_ATTACKER(bVar0) == Global_34573)
		{
			Function_468();
			CLEAR_LAST_ATTACK(Global_34573);
		}
		else if (GET_ACTOR_HEALTH(bVar0) > GET_ACTOR_MAX_HEALTH(bVar0))
		{
			Function_468();
		}
	}
	if (!Function_352(&bLocal_1012))
	{
		if (!Function_382((*&Local_4 + 620)[12], 0, 1, 1, 0, 0, 0, 0, 0) && !Function_382((*&Local_4 + 620)[22], 0, 1, 1, 0, 0, 0, 0, 0))
		{
			MEMORY_ALLOW_SHOOTING(bLocal_934, false);
			TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_934, &Local_4 + 2188[36], 2);
			Function_380(&bLocal_1012);
		}
	}
	if (Function_467(&Local_4 + 620, 0, 1, 1, 0, 0, 0) >= 0)
	{
		if (!iLocal_1071)
		{
			bVar1 = GET_LAST_ATTACK_TARGET(Global_34573);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_ACTORSET(bLocal_933, bVar1))
				{
					if (GET_LAST_DAMAGE(bVar1) < 0.0f)
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_394();
						iLocal_1071 = 1;
					}
				}
			}
		}
		if (IS_ACTOR_SHOOTING(Global_34573))
		{
			iLocal_1072 = 1;
		}
		if (Function_350(&bLocal_1003) < 8,5f)
		{
			if (iLocal_1072)
			{
				Function_466();
			}
			else
			{
				Function_465();
			}
			iLocal_1072 = 0;
			Function_232(&bLocal_1003);
		}
		return 0;
	}
	if (!Function_352(&bLocal_1012))
	{
		Function_380(&bLocal_1012);
	}
	Function_232(&bLocal_1012);
	Function_464(&Local_4 + 660, bLocal_933);
	TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_934, &Local_4 + 2188[36], 2);
	MEMORY_ALLOW_SHOOTING(bLocal_934, true);
	ACTOR_START_FORCE_HOLSTER(bLocal_934, 1, 0);
	SET_ACTOR_IS_COMPANION(bLocal_941, 1);
	SET_ACTOR_FACTION(bLocal_941, 20);
	iLocal_1057 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	Function_231(66);
	return 1;
}

void Function_464(var uParam0, bool bParam1) //Position: 0x18327 / 99111
{
	int iVar0;
	
	if (IS_ACTORSET_VALID(bParam1))
	{
		iVar0 = 0;
		while (iVar0 < (*uParam0 - 1))
		{
			if (IS_ACTOR_VALID((*uParam0)[iVar02]))
			{
				if (!IS_ACTOR_IN_ACTORSET(bParam1, (*uParam0)[iVar02]))
				{
					ADD_ACTORSET_MEMBER(bParam1, (*uParam0)[iVar02]);
				}
			}
			iVar0++;
		}
	}
	else
	{
		LOG_ERROR("Trying to add actor(s) to INVALID actorset. Ignoring ADD_ACTORS_TO_ACTORSET()!");
	}
	return;
}

void Function_465() //Position: 0x183C9 / 99273
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_NoShootBanditsRescue", "Gun01_NoShootBanditsRescue", false, 2, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x18426 / 99366
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_RickTauntsRescue", "Gun01_RickTauntsRescue", false, 2, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_467(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x1847B / 99451
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_382((*uParam0)[iVar02], bParam1, bParam2, bParam3, bParam4, bParam5, bParam6, 0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_468() //Position: 0x184BE / 99518
{
	bool bVar0;
	
	bVar0 = (*&Local_4 + 620)[02];
	if (iLocal_1074)
	{
		LOG_ERROR("FreeHostage called when m_bHostageFreed is already true. This should never happen!");
		return;
	}
	Function_469(bVar0, bLocal_941);
	Function_420(&(Local_773[417]), 8, 1);
	SET_ACTOR_FACTION(bLocal_941, 20);
	SET_ACTOR_IS_COMPANION(bLocal_941, 1);
	TASK_CLEAR(bLocal_941);
	if (Function_382(bVar0, 1, 1, 1, 0, 0, 0, 0, 0))
	{
		Function_461(bVar0, -1.0f);
	}
	iLocal_1074 = 1;
	return;
}

void Function_469(bool bParam0, bool bParam1) //Position: 0x18570 / 99696
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
		SET_ALLOW_EXECUTE(bParam0, 1);
		SET_ACTOR_CAN_BE_TARGETED(bParam0, true);
		SET_ACTOR_CAN_BE_AIMASSISTED(bParam0, 1);
		SET_ACTOR_ALLOW_DISARM(bParam0, true);
		SET_DEADEYE_LOCKS_ON_HEAD_ONLY(bParam0, 0);
		AI_CLEAR_SHOTS_PER_BURST(bParam0);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
		SET_ACTOR_ONE_SHOT_DEATH(bParam0, false);
	}
	if (IS_ACTOR_VALID(bParam1))
	{
		Function_294(bParam1, 1, 1, 1, 1, 0, 1);
		SET_ALLOW_DEADEYE_LOCKS(bParam1, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
		SET_ALLOW_EXECUTE(bParam1, 1);
		DECOR_REMOVE(bParam1, "TaskedHostage");
	}
	return;
}

void Function_470() //Position: 0x185F7 / 99831
{
	if (bLocal_1073)
	{
		LOG_ERROR("ExecuteHostage called while m_bExecute is already true. This should never happen!");
	}
	AI_STOP_IGNORING_ACTORS();
	SET_ACTOR_IS_COMPANION(bLocal_941, 0);
	SET_ACTOR_HEALTH(bLocal_941, 1.0f);
	Function_471((*&Local_4 + 620)[02], bLocal_941);
	bLocal_1073 = true;
	return;
}

void Function_471(bool bParam0, int iParam1) //Position: 0x1867D / 99965
{
	DECOR_SET_BOOL(bParam0, "Execute", true);
	iParam1 = iParam1;
	return;
}

void Function_472(var uParam0, bool bParam1) //Position: 0x18698 / 99992
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_473(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_473(bool bParam0, vector3 vParam1) //Position: 0x186B2 / 100018
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_474(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_474(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_474(bool bParam0, vector3 vParam1) //Position: 0x186EA / 100074
{
	vector3 vVar0;
	
	Function_279(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_279(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_475() //Position: 0x1876D / 100205
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_SpotsBankWagon", "Gun01_SpotsBankWagon", false, 4, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_476(bool bParam0, int iParam1) //Position: 0x187BE / 100286
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_477() //Position: 0x187CB / 100299
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_NoTalkJon", "Gun01_NoTalkJon", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_478() //Position: 0x18812 / 100370
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v3_AA", "Gun01_BanterRideBank_v3_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AB", "Gun01_BanterRideBank_v3_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v3_AC", "Gun01_BanterRideBank_v3_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AD1", "Gun01_BanterRideBank_v3_AD1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AD2", "Gun01_BanterRideBank_v3_AD2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AD3", "Gun01_BanterRideBank_v3_AD3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v3_AE", "Gun01_BanterRideBank_v3_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AF1", "Gun01_BanterRideBank_v3_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AF2", "Gun01_BanterRideBank_v3_AF2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v3_AG", "Gun01_BanterRideBank_v3_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AH1", "Gun01_BanterRideBank_v3_AH1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AH2", "Gun01_BanterRideBank_v3_AH2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v3_AH3", "Gun01_BanterRideBank_v3_AH3", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_479() //Position: 0x18BA3 / 101283
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v2_AA", "Gun01_BanterRideBank_v2_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AB", "Gun01_BanterRideBank_v2_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AC", "Gun01_BanterRideBank_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AD", "Gun01_BanterRideBank_v2_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AE", "Gun01_BanterRideBank_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AF", "Gun01_BanterRideBank_v2_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v2_AG", "Gun01_BanterRideBank_v2_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AH", "Gun01_BanterRideBank_v2_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AI", "Gun01_BanterRideBank_v2_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AJ", "Gun01_BanterRideBank_v2_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AK", "Gun01_BanterRideBank_v2_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v2_AL", "Gun01_BanterRideBank_v2_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v2_AM", "Gun01_BanterRideBank_v2_AM", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_480() //Position: 0x18F24 / 102180
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v1_AA", "Gun01_BanterRideBank_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v1_AB", "Gun01_BanterRideBank_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v1_AC", "Gun01_BanterRideBank_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v1_AD1", "Gun01_BanterRideBank_v1_AD1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v1_AD2", "Gun01_BanterRideBank_v1_AD2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v1_AE", "Gun01_BanterRideBank_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v1_AF", "Gun01_BanterRideBank_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v1_AG", "Gun01_BanterRideBank_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v1_AH", "Gun01_BanterRideBank_v1_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v1_AI1", "Gun01_BanterRideBank_v1_AI1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v1_AI2", "Gun01_BanterRideBank_v1_AI2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterRideBank_v1_AJ", "Gun01_BanterRideBank_v1_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterRideBank_v1_AK", "Gun01_BanterRideBank_v1_AK", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_481(bool bParam0, bool bParam1, float fParam2) //Position: 0x192AD / 103085
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		GET_POSITION(bParam0, &vVar0);
		GET_POSITION(bParam1, &vVar3);
		vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vVar3, StackVal) };
		VNORMALIZE(&vVar6);
		GET_ACTOR_AXIS(bParam0, &uVar9, 2);
		if (VDOT(&uVar9, &vVar6) >= fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

bool Function_482() //Position: 0x19347 / 103239
{
	bool bVar0;
	int iVar1;
	
	if (!ACTORS_IN_RANGE(Global_34573, bLocal_940, 52.0f))
	{
		return 0;
	}
	STREAMING_UNLOAD_BOUNDS();
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_940), false);
	Function_207(5, 0, 1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar0 = (*&Local_4 + 620)[iVar12];
		if (Function_321(bVar0, 1))
		{
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
			Function_416(bVar0, Global_34573);
			Function_416(bVar0, bLocal_934);
			Function_416(bLocal_934, bVar0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		}
		iVar1++;
	}
	iLocal_1057 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_934);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
	Function_423(&(Local_773[017]), 1024);
	Function_423(&(Local_773[117]), 1024);
	ABORT_SCRIPTED_CONVERSATION(1);
	SET_ANIMATION_OVERRIDE_SCALE(bLocal_941, 1.0f);
	SET_ANIMATION_OVERRIDE_SCALE((*&Local_4 + 620)[02], 1.0f);
	ENABLE_GAME_CAMERA_FOCUS(*(&Local_4 + 2188[06]), 0,5f, 6, 1, 0, 0);
	STREAMING_LOAD_SCENE_EXT(*(&Local_4 + 2188[06]), -0,103f, -0,345f, 0,933f, 1);
	Function_413();
	CLEAR_ACTOR_MIN_SPEED(bLocal_934);
	SET_ACTOR_MAX_SPEED(bLocal_934, 4);
	MEMORY_ALLOW_SHOOTING(bLocal_934, false);
	Function_231(13);
	return 1;
}

void Function_483() //Position: 0x19471 / 103537
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_SeachForBankWagon", "Gun01_SeachForBankWagon", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_484() //Position: 0x194C8 / 103624
{
	(*&Local_4 + 620)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "SiegeBandito01", 498, -2838,425f, 33,12852f, 4592,038f, 0.0f, -14,72058f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 620)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 620)[02], 4, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 620)[02], 19);
	(*&Local_4 + 620)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "SiegeBandito02", 500, -2844,443f, 33,12941f, 4594,557f, 0.0f, -44,4551f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 620)[12], 19);
	(*&Local_4 + 620)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "SiegeBandito03", 501, -2844,413f, 33,12942f, 4593,242f, 0.0f, -112,1304f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 620)[22], 19);
	return;
}

bool Function_485(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x195B8 / 103864
{
	bool bVar0;
	float fVar1;
	void fVar2;
	bool bVar3;
	
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)) && IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
	{
		SET_ACTOR_UPDATE_PRIORITY(bParam1, false);
		SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
		SET_ACTOR_ANIM_CURRENT_TIME(bParam1, 0.0f);
		SET_ACTOR_ANIM_CURRENT_TIME(bParam0, 0.0f);
		return 1;
	}
	if (!DECOR_CHECK_EXIST(bParam1, "TaskedHostage") && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
	{
		fVar1 = GET_OBJECT_OWNER(bParam1);
		Function_279(bParam1);
		bVar0 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(fVar1, Function_53(), "hold_hostage", Function_279(bParam1), 0.0f, Function_487(bParam1), 0.0f));
		Function_294(bParam1, 1, 0, 0, 0, 0, 1);
		SET_ALLOW_DEADEYE_LOCKS(bParam1, false);
		SET_ACTOR_FACTION(bParam1, 21);
		MEMORY_CONSIDER_AS(bParam0, bParam1, 2);
		MEMORY_CONSIDER_AS(bParam1, bParam0, 2);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam1, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bParam1, false);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam1, bParam0, false);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, false);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, false);
		TASK_CLEAR(bParam0);
		TASK_PRIORITY_SET(bParam0, true);
		TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
		TASK_CLEAR(bParam1);
		TASK_PRIORITY_SET(bParam1, true);
		TASK_STAND_STILL(bParam1, -1.0f, 0, 0);
		SNAP_ACTOR_TO_GRINGO(bParam1, GET_OBJECT_FROM_GRINGO(bVar0), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(bParam1, bVar0, "UseCase1", true, 1);
		DECOR_SET_BOOL(bParam1, "TaskedHostage", true);
	}
	if (DECOR_CHECK_EXIST(bParam1, "TaskedHostage") && IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
	{
		fVar2 = GET_CURRENT_GRINGO(bParam1);
		if (SNAP_ACTOR_TO_GRINGO(bParam0, GET_OBJECT_FROM_GRINGO(fVar2), "Holder", true, 0, 0))
		{
			TASK_USE_GRINGO(bParam0, fVar2, "Holder", true, 1);
			SET_ALLOW_EXECUTE(bParam0, 0);
			SET_ALLOW_EXECUTE(bParam1, 0);
			SET_ACTOR_CAN_BE_TARGETED(bParam0, false);
			SET_ACTOR_CAN_BE_AIMASSISTED(bParam0, 0);
			SET_ACTOR_ALLOW_DISARM(bParam0, false);
			bVar3 = Function_486(bParam0, 40);
			if (bVar3 == 4294967295)
			{
				bVar3 = Function_486(bParam0, 39);
				if (bVar3 == 4294967295)
				{
					GIVE_WEAPON_TO_ACTOR(bParam0, 40, 1.0f, 1, 1);
					bVar3 = Function_486(bParam0, 40);
				}
			}
			ACTOR_PUT_WEAPON_IN_HAND(bParam0, bVar3, 1);
			DECOR_SET_BOOL(bParam0, "bNoFireOnDeath", true);
			if (bParam4)
			{
				SET_DEADEYE_LOCKS_ON_HEAD_ONLY(bParam0, 1);
			}
			if (bParam3)
			{
				SET_ACTOR_ONE_SHOT_DEATH(bParam0, true);
			}
			TASK_PRIORITY_SET(bParam0, 2);
			if (fParam2 < 0.0f)
			{
				AI_SET_SHOTS_PER_BURST(bParam0, 1);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, 0,5f);
			}
			DECOR_REMOVE(bParam1, "TaskedHostage");
		}
	}
	return 0;
}

int Function_486(bool bParam0, int iParam1) //Position: 0x1980D / 104461
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

var Function_487(bool bParam0) //Position: 0x1981E / 104478
{
	return GET_HEADING(bParam0);
}

bool Function_488() //Position: 0x19829 / 104489
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_934))
	{
		if (GET_TASK_STATUS(bLocal_934, 43) == 1 || GET_TASK_STATUS(bLocal_934, 0) != 0)
		{
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2560, 4, 0, 0, 1, false);
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_934, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
		MEMORY_PREFER_RIDING(bLocal_934, true);
		CLEAR_ACTOR_MIN_SPEED(bLocal_934);
		bVar3 = true;
		AI_SET_NAV_PATHFINDING_ENABLED(bLocal_934, false);
	}
	if (IS_ACTOR_RIDING(Global_34573))
	{
		Function_223(bLocal_938);
		HUD_CLEAR_OBJECTIVE();
		bVar0 = GET_MOUNT(Global_34573);
		if (bVar0 == bLocal_939)
		{
			bLocal_939 = bLocal_938;
			SET_ACTORS_HORSE(bLocal_934, bLocal_939);
			DECOR_SET_BOOL(bLocal_939, "bInjuryNoEjection", true);
			Function_425(&(Local_773[117]), bLocal_939, "Gunslinger_horse", 0, 0x5f5e100, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_939, 0.0f);
			if (!bVar3)
			{
				TASK_MOUNT(bLocal_934, bLocal_939, 0, 1, 1, 2147483647);
			}
		}
		if (bVar0 != bLocal_938)
		{
			bLocal_938 = bVar0;
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_938, 0.0f);
			SET_ACTORS_HORSE(Global_34573, bLocal_938);
			Function_489(bLocal_938, 0);
			DECOR_SET_BOOL(bLocal_938, "bInjuryNoEjection", true);
		}
		if (!bVar3)
		{
			SET_ACTOR_MIN_SPEED(bLocal_934, 2);
		}
		iVar2 = 1;
	}
	else if (!IS_ACTOR_ALIVE(bLocal_938))
	{
		HUD_CLEAR_OBJECTIVE();
		iVar2 = 1;
	}
	if (iVar2 && bVar3)
	{
		AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
		Function_207(5, 1, 1);
		Function_231(11);
		return 1;
	}
	return 0;
}

void Function_489(var uParam0, int iParam1) //Position: 0x199B2 / 104882
{
	Function_490(iParam1);
	Global_12976.f_72 = uParam0;
	return;
}

void Function_490(bool bParam0) //Position: 0x199C4 / 104900
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

int Function_491() //Position: 0x19B7A / 105338
{
	if (!IS_ACTOR_VALID(bLocal_938))
	{
		bLocal_938 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
		if (IS_ACTOR_VALID(bLocal_938))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[126]), 1, true, 1);
			TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_938, 1);
		}
	}
	iLocal_1045 = 1;
	return 1;
}

int Function_492() //Position: 0x19BD7 / 105431
{
	Function_302(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_493() //Position: 0x19BEB / 105451
{
	Function_494();
	return 1;
}

void Function_494() //Position: 0x19BF5 / 105461
{
	bool bVar0;
	
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 704)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 704)[0]);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 704)[0]);
	}
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_495(&(Local_773[317]));
	Function_305(bLocal_937);
	if (IS_DOOR_VALID(bLocal_952))
	{
		CLOSE_DOOR_FAST(bLocal_952);
	}
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_MOUNT(false, bLocal_939, 0, 1, 1, 2147483647);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_934, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_495(int iParam0) //Position: 0x19C6C / 105580
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

int Function_496() //Position: 0x19D20 / 105760
{
	if (!IS_ACTOR_VALID(bLocal_938))
	{
		if (Function_299())
		{
			bLocal_938 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
			if (IS_ACTOR_VALID(bLocal_938))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[126]), 1, true, 1);
				TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_938, 1);
			}
		}
	}
	Function_503();
	return 1;
}

int Function_497() //Position: 0x19D83 / 105859
{
	if (Function_332() && Function_357(Global_30693[0]))
	{
		if (iLocal_1036[2])
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_939, *(&Local_4 + 892[156]), 1, true, 1);
			TASK_STAND_STILL(bLocal_934, -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_937, -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_939, -1.0f, 0, 0);
			if (IS_ACTOR_VALID(bLocal_938))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[126]), 1, true, 1);
				TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
			}
		}
		CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
		Function_232(&bLocal_988);
		return 1;
	}
	if (Function_350(&bLocal_988) < 2.0f)
	{
		Function_232(&bLocal_988);
	}
	return 0;
}

int Function_498() //Position: 0x19E33 / 106035
{
	iLocal_1045 = 0;
	Function_348(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_346(StackVal, StackVal, bLocal_653, Global_34574, &Local_4 + 704[0], 0, 0, 0, 0, 1, 1);
	Function_232(&bLocal_988);
	return 1;
}

void Function_499() //Position: 0x19E6C / 106092
{
	return;
}

bool Function_500(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x19E72 / 106098
{
	if (Function_501(&iParam0) == iParam7 || Function_437())
	{
		return 1;
	}
	return 0;
}

int Function_501(int iParam0) //Position: 0x19E91 / 106129
{
	if (Function_289(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_502() //Position: 0x19EA9 / 106153
{
	(*&Local_4 + 572)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BankManager", 703, -2737,789f, 32,52249f, 4245,933f, 0.0f, -95,1901f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 572)[02], 20);
	return;
}

int Function_503() //Position: 0x19EF0 / 106224
{
	Function_343(&Local_4 + 284, 703, 2, 0);
	Function_343(&Local_4 + 284, 1196, 2, 0);
	Function_343(&Local_4 + 284, 262, 2, 0);
	Function_343(&Local_4 + 284, 498, 2, 0);
	Function_343(&Local_4 + 284, 500, 2, 0);
	Function_343(&Local_4 + 284, 501, 2, 0);
	Function_343(&Local_4 + 284, 499, 2, 0);
	Function_343(&Local_4 + 284, 502, 2, 0);
	if (Function_310(&Local_4 + 284))
	{
		return 1;
	}
	return 0;
}

void Function_504() //Position: 0x19F74 / 106356
{
	SET_ACTOR_MAX_SPEED(bLocal_934, 4);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_934, true);
	ACTOR_END_FORCE_HOLSTER(bLocal_934);
	TASK_PRIORITY_SET(bLocal_934, true);
	AI_GOAL_LOOK_CLEAR(bLocal_934);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_934, true);
	if (Function_321(bLocal_939, 1))
	{
		SET_ANIMAL_CAN_ATTACK(bLocal_939, 0);
		MEMORY_IDENTIFY(bLocal_934, bLocal_939);
		MEMORY_REPORT_POSITION_AUTO(bLocal_934, bLocal_939, true);
	}
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	iLocal_1053 = 0;
	if (!Function_500(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_654, iLocal_716))
	{
		Function_494();
	}
	return;
}

void Function_505() //Position: 0x19FE7 / 106471
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[26]), 1, true, 1);
	return;
}

void Function_506() //Position: 0x1A00C / 106508
{
	if (!Function_632(bLocal_717))
	{
		return;
	}
	Function_456();
	Function_455();
	Function_307();
	Function_450();
	Function_446();
	return;
}

void Function_507() //Position: 0x1A02D / 106541
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar5;
	bool bVar6;
	bool bVar7;
	
	Function_537();
	switch (bLocal_717)
	{
		case 0x00000000:
			Function_361(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			Function_359(1);
			if (!iLocal_1036[0])
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!Function_357(Global_30693[0]))
				{
					Function_356(&Local_654);
				}
				Function_218(8);
				Function_359(1);
				Function_359(256);
				Function_358((*&Local_4 + 760)[0]);
				Function_536();
				Function_231(1);
			}
			else
			{
				Function_530();
				Function_231(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_357(Global_30693[0])) && Function_529())
			{
				Function_530();
				Function_231(2);
			}
			else if (Function_350(&bLocal_988) < 2.0f)
			{
				Function_232(&bLocal_988);
			}
			break;
		
		case 0x00000002:
			if (Function_350(&bLocal_988) < 2.0f || iLocal_1036[0])
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_453(1);
				Function_284(1.0f);
				Function_380(&bLocal_1006);
				Function_233(&bLocal_1006, 7.0f);
				Function_231(6);
			}
			break;
		
		case 0x00000006:
			Function_524();
			fVar5 = Function_407(Global_34573, bLocal_934);
			if (fVar5 < 60.0f)
			{
				Function_248("Gunslinger_abandoned");
				bLocal_1044 = true;
			}
			else if ((Function_523(bLocal_932) + Function_523(bLocal_931)) <= 2)
			{
				Function_248("Gun01_birdFail");
				bLocal_1044 = true;
			}
			else if (!Function_520(2, 0, 0))
			{
				Function_248("Gun01_ammoFail");
				bLocal_1044 = true;
			}
			else if (fVar5 < 15.0f)
			{
				if (!iLocal_1051)
				{
					Function_399();
					Function_519();
					iLocal_1051 = 1;
				}
				else if (!iLocal_1050)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_406("Gunslinger_return", 7,5f, 0, 2, 1, 0, 0);
						iLocal_1050 = 1;
					}
				}
			}
			else
			{
				Function_207(5, 1, 1);
				if (iLocal_1051)
				{
					Function_399();
					iLocal_1051 = 1;
					iLocal_1050 = 0;
				}
				if (iLocal_1033 == 0)
				{
					if (!HUD_IS_FADING())
					{
						Function_518();
						Function_232(&bLocal_1003);
						Function_232(&bLocal_988);
						iLocal_1033 = 1;
					}
				}
				else if (iLocal_1033 == 1)
				{
					if (Function_350(&bLocal_988) < 1.0f)
					{
						AI_GOAL_LOOK_CLEAR(bLocal_934);
						AI_GOAL_LOOK_AT_COORD(bLocal_934, &Local_4 + 1328[46], 1, 10.0f, 2.0f, 4.0f);
						Function_232(&bLocal_1003);
						Function_232(&bLocal_988);
						iLocal_1033 = 2;
					}
				}
				else if (iLocal_1033 == 2)
				{
					if (Function_350(&bLocal_988) < 2.0f)
					{
						AI_GOAL_LOOK_CLEAR(bLocal_934);
						AI_GOAL_LOOK_AT_ACTOR(bLocal_934, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
						Function_232(&bLocal_1003);
						Function_232(&bLocal_988);
						iLocal_1033 = 3;
					}
				}
				else if (iLocal_1033 == 3)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_350(&bLocal_988) < 10.0f)
					{
						Function_231(16);
					}
				}
			}
			break;
		
		case 0x00000010:
			Function_524();
			fVar5 = Function_407(Global_34573, bLocal_934);
			if (fVar5 < 60.0f)
			{
				Function_248("Gunslinger_abandoned");
				bLocal_1044 = true;
			}
			else if ((Function_523(bLocal_932) + Function_523(bLocal_931)) <= 2)
			{
				Function_248("Gun01_birdFail");
				bLocal_1044 = true;
			}
			else if (!Function_520(2, 0, 0))
			{
				Function_248("Gun01_ammoFail");
				bLocal_1044 = true;
			}
			else if (fVar5 < 15.0f && iLocal_1033 == 2)
			{
				if (!iLocal_1051)
				{
					Function_207(5, 1, 1);
					Function_399();
					Function_519();
					iLocal_1051 = 1;
				}
				else if (!iLocal_1050)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_406("Gunslinger_return", 7,5f, 0, 2, 1, 0, 0);
						iLocal_1050 = 1;
					}
				}
			}
			else
			{
				Function_207(5, 0, 1);
				if (iLocal_1051)
				{
					Function_399();
					iLocal_1051 = 0;
					iLocal_1050 = 0;
				}
				if (iLocal_1033 == 0)
				{
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_232(&bLocal_988);
					}
					else if (Function_350(&bLocal_988) < 1.0f)
					{
						ACTOR_END_FORCE_HOLSTER(bLocal_934);
						TASK_STAND_STILL(bLocal_934, -1.0f, 0, 0);
						Function_232(&bLocal_1003);
						Function_232(&bLocal_988);
						iLocal_1033 = 1;
					}
				}
				else if (iLocal_1033 == 1)
				{
					SET_ACTOR_FACE_STYLE(bLocal_934, 2);
					Function_476(bLocal_934, &iVar2);
					bVar6 = TASK_SEQUENCE_OPEN();
					TASK_POINT_GUN_AT_COORD(0, &Local_4 + 1328[46], 1.0f);
					TASK_SHOOT_AT_COORD_FROM_POSITION(false, &Local_4 + 1328[46], &iVar2, -1.0f);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_934, bVar6);
					TASK_SEQUENCE_RELEASE(bVar6, 1);
					Function_232(&bLocal_1003);
					Function_232(&bLocal_988);
					iLocal_1033 = 2;
				}
				else if (iLocal_1033 == 2)
				{
					if ((IS_ACTOR_SHOOTING(bLocal_934) || IS_ACTOR_SHOOTING(Global_34573)) || GET_ACTORSET_SIZE(bLocal_932) > 7)
					{
						bVar7 = false;
						while (bVar7 <= GET_ACTORSET_SIZE(bLocal_932))
						{
							bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_932, bVar7);
							if (Function_382(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
							{
								REMOVE_OBJECT_FROM_ATTACHMENT(bVar0);
								bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 322, 0.0f, 2, 0);
								SET_BLIP_NAME(bVar1, "Gun01_birdBlip");
								TASK_CLEAR(bVar0);
								SET_ACTION_NODE_FOR_ACTOR(bVar0, "vulture_Main/Default/FlyGait");
								bVar6 = TASK_SEQUENCE_OPEN();
								TASK_BIRD_SOAR_AT_COORD(false, &Local_4 + 1328[56], 5.0f, 1106247680);
								TASK_BIRD_SOAR_AT_COORD(false, &Local_4 + 1328[66], 5.0f, 1106247680);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM_REPEATEDLY(bVar0, bVar6, 4294967295);
								TASK_SEQUENCE_RELEASE(bVar6, 1);
								SET_ACTOR_FACTION(bVar0, 22);
								SET_ACTOR_INVULNERABILITY(bVar0, false);
								ADD_ACTORSET_MEMBER(bLocal_931, bVar0);
								iLocal_1035 = Function_523(bLocal_931);
								if (iLocal_1035 > 4)
								{
									bVar7 = 999999;
								}
							}
							bVar7++;
						}
						bVar7 = false;
						while (bVar7 <= GET_ACTORSET_SIZE(bLocal_931))
						{
							bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_931, bVar7);
							if (IS_ACTOR_VALID(bVar0))
							{
								REMOVE_ACTORSET_MEMBER(bLocal_932, bVar0);
							}
							bVar7++;
						}
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
						SET_ANIM_SET_FOR_ACTOR(bLocal_934, "holster_spin", 1);
						bVar6 = TASK_SEQUENCE_OPEN();
						TASK_ACTION_PERFORM(false, "holster_spin");
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_934, bVar6);
						TASK_SEQUENCE_RELEASE(bVar6, 1);
						Function_232(&bLocal_1003);
						Function_380(&bLocal_1009);
						Function_231(36);
					}
				}
			}
			break;
		
		case 0x00000024:
			Function_517();
			Function_524();
			if (!Function_515())
			{
				fVar5 = Function_407(Global_34573, bLocal_934);
				if (fVar5 < 60.0f)
				{
					Function_248("Gunslinger_abandoned");
					bLocal_1044 = true;
				}
				else if (!Function_520(2, 0, 0))
				{
					Function_248("Gun01_ammoFail");
					bLocal_1044 = true;
				}
				else if (fVar5 < 15.0f)
				{
					if (!iLocal_1051)
					{
						Function_207(5, 1, 1);
						Function_399();
						Function_519();
						iLocal_1051 = 1;
					}
					else if (!iLocal_1050)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_406("Gunslinger_return", 7,5f, 0, 2, 1, 0, 0);
							iLocal_1050 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1051)
					{
						Function_399();
						iLocal_1051 = 0;
						iLocal_1050 = 0;
					}
					if (iLocal_1033 == 0)
					{
						Function_406("Gun01_obj03a", 7,5f, 1, 2, 0, 0, 0);
						Function_232(&bLocal_1003);
						Function_232(&bLocal_988);
						iLocal_1033 = 1;
					}
					else if (iLocal_1033 == 1)
					{
						if (Function_398())
						{
							Function_232(&bLocal_988);
						}
						else if (Function_350(&bLocal_988) < 1.0f)
						{
							Function_132("Gun01_obj03a_help", 7,5f, 1, 0, 2, 1, 0);
							Function_232(&bLocal_1003);
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000038:
			Function_514();
			fVar5 = Function_407(Global_34573, bLocal_934);
			if (fVar5 < 60.0f)
			{
				Function_248("Gunslinger_abandoned");
				bLocal_1044 = true;
			}
			else if (fVar5 < 15.0f)
			{
				if (!iLocal_1050)
				{
					Function_399();
					Function_406("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0);
					iLocal_1050 = 1;
				}
			}
			else
			{
				iLocal_1050 = 0;
				if (!Function_512())
				{
					if (iLocal_1033 == 0)
					{
						if (Function_350(&bLocal_988) < 1.0f)
						{
							Function_250();
							SET_PLAYER_CAUSE_WEAPON_REACTIONS(Global_34573, 1);
							SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
							Function_511();
							Function_232(&bLocal_988);
							iLocal_1033 = 1;
						}
					}
					else if (iLocal_1033 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_350(&bLocal_988) <= 2,5f)
						{
							SET_ACTOR_MAX_SPEED(bLocal_934, true);
							RESET_ANIM_SET_FOR_ACTOR(bLocal_934, 1);
							bVar6 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2552, 1, 1, 1, 1, false);
							TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_2524), "UseCase1", 4294967295, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_934, bVar6);
							TASK_SEQUENCE_RELEASE(bVar6, 1);
							Function_406("Gun01_obj03b", 7,5f, 1, 2, 0, 0, 0);
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
					else if (iLocal_1033 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_350(&bLocal_988) < 10.0f)
						{
							SET_MAX_SCRIPTED_CONVERSATION_DISTANCE(7.0f);
							Function_510();
							Function_232(&bLocal_988);
							iLocal_1033 = 3;
						}
					}
					else if (iLocal_1033 == 4)
					{
						if (Function_350(&bLocal_988) < 2.0f)
						{
							Function_509();
							Function_232(&bLocal_988);
							iLocal_1033 = 5;
						}
					}
				}
			}
			break;
		
		case 0x00000056:
			if ((Function_523(bLocal_932) + Function_523(bLocal_931)) <= 2)
			{
				Function_248("Gun01_birdFail");
				bLocal_1044 = true;
			}
			else
			{
				Function_231(16);
				iLocal_1033 = 2;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_508();
				iLocal_1036[2] = 1;
				iLocal_716 = 3;
				Function_231(0);
			}
			break;
	}
	return;
}

void Function_508() //Position: 0x1A992 / 108946
{
	Function_215();
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 760)[7]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 760)[7]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
	}
	RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
	Function_172();
	return;
}

void Function_509() //Position: 0x1A9D3 / 109011
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_JonNoFollowBirdShoo", "Gun01_JonNoFollowBirdShoo", false, 2, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_510() //Position: 0x1AA2E / 109102
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWalkBird_v2_AA1", "Gun01_BanterWalkBird_v2_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWalkBird_v2_AA2", "Gun01_BanterWalkBird_v2_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterWalkBird_v2_AB", "Gun01_BanterWalkBird_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWalkBird_v2_AC", "Gun01_BanterWalkBird_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterWalkBird_v2_AD1", "Gun01_BanterWalkBird_v2_AD1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterWalkBird_v2_AD2", "Gun01_BanterWalkBird_v2_AD2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWalkBird_v2_AE", "Gun01_BanterWalkBird_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterWalkBird_v2_AF", "Gun01_BanterWalkBird_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWalkBird_v2_AG", "Gun01_BanterWalkBird_v2_AG", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x1ACAB / 109739
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_Succes2Birds", "Gun01_Succes2Birds", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_512() //Position: 0x1ACF8 / 109816
{
	bool bVar0;
	
	if (!iLocal_1063)
	{
		if (!IS_ACTOR_IN_VOLUME(bLocal_934, (*&Local_4 + 760)[11]))
		{
			return 0;
		}
		if (!ACTORS_IN_RANGE(Global_34573, bLocal_934, 4.0f))
		{
			return 0;
		}
		iLocal_1053 = 0;
		if (IS_DOOR_VALID(bLocal_952))
		{
			if (IS_DOOR_LOCKED(bLocal_952))
			{
				Function_154(bLocal_952, 1);
			}
			OPEN_DOOR_DIRECTION(bLocal_952, true);
		}
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_4.f_2524)))
		{
			GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(Local_4.f_2524));
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_4.f_2524), false);
		}
		TASK_STAND_STILL(bLocal_934, -1.0f, 0, 0);
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			ABORT_SCRIPTED_CONVERSATION(1);
		}
		if (Function_321(bLocal_937, 1))
		{
			SET_ACTOR_MIN_SPEED(bLocal_937, 4);
			SET_ANIM_SET_FOR_ACTOR(bLocal_937, "stand_ambient", 1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &Local_4 + 1328[106], 2);
			TASK_FACE_ACTOR(false, bLocal_934, 0, 3212836864);
			TASK_ACTION_PERFORM(false, "stand_ambient/help_loop_mobile");
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_937, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
		RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
		Function_399();
		Function_513();
		Function_380(&bLocal_1018);
		iLocal_1063 = 1;
	}
	else if (Function_350(&bLocal_1018) < 3.0f && !IS_ANY_SPEECH_PLAYING(bLocal_937))
	{
		CLEAR_ACTOR_MAX_SPEED(bLocal_934);
		Function_207(5, 0, 1);
		Function_231(106);
		return 1;
	}
	return 0;
}

void Function_513() //Position: 0x1AE4B / 110155
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Gun01_BankMangrAsksHelp", "Gun01_BankMangrAsksHelp", false, 2, 1, 0, 1);
		Function_370(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x1AEA3 / 110243
{
	bool bVar0;
	
	if (iLocal_1063)
	{
		return;
	}
	if (!iLocal_1062)
	{
		if (!IS_ACTOR_IN_VOLUME(bLocal_934, (*&Local_4 + 760)[9]))
		{
			return;
		}
		if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[10]))
		{
			if (!ACTORS_IN_RANGE(Global_34573, bLocal_934, 8.0f))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_934, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_380(&bLocal_1015);
				Function_232(&bLocal_1015);
				Function_232(&bLocal_988);
				iLocal_1033 = 4;
				iLocal_1062 = 1;
				return;
			}
		}
		DECOR_SET_BOOL(bLocal_934, "g1_bWalkToBank", true);
		Function_380(&bLocal_1015);
		Function_232(&bLocal_1015);
		Function_232(&bLocal_988);
		iLocal_1062 = 1;
	}
	else if (!iLocal_1063)
	{
		if (!DECOR_CHECK_EXIST(bLocal_934, "g1_bWalkToBank"))
		{
			if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[10]) || ACTORS_IN_RANGE(Global_34573, bLocal_934, 8.0f)) || Function_350(&bLocal_1015) < 8.0f)
			{
				SET_ANIM_SET_FOR_ACTOR(bLocal_934, "comp_waiting", 1);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_ACTION_PERFORM(false, "comp_waiting");
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2552, 1, 1, 0, 1, false);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_2524), "UseCase1", 4294967295, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_934, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				DECOR_SET_BOOL(bLocal_934, "g1_bWalkToBank", true);
				Function_232(&bLocal_988);
			}
		}
	}
	return;
}

bool Function_515() //Position: 0x1B042 / 110658
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_1056)
	{
		Function_516(0);
		Function_207(5, 1, 1);
		Function_231(56);
		return 1;
	}
	iVar1 = Function_523(bLocal_931);
	bVar3 = iVar1 > iLocal_1035;
	if (bVar3)
	{
		iLocal_1034 = (iLocal_1034 + (iLocal_1035 - iVar1));
		iLocal_1035 = iVar1;
		Function_232(&bLocal_997);
		if (iLocal_1034 > 2)
		{
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			bVar2 = false;
			while (bVar2 <= GET_ACTORSET_SIZE(bLocal_932))
			{
				bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_932, bVar2);
				if (IS_ACTOR_ALIVE(bVar0))
				{
					SET_ACTOR_FACTION(bVar0, 22);
					SET_ACTOR_INVULNERABILITY(bVar0, false);
					TASK_CLEAR(bVar0);
					REMOVE_OBJECT_FROM_ATTACHMENT(bVar0);
				}
				bVar2++;
			}
			bVar2 = false;
			while (bVar2 <= GET_ACTORSET_SIZE(bLocal_931))
			{
				bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_931, bVar2);
				if (IS_ACTOR_ALIVE(bVar0))
				{
					TASK_CLEAR(bVar0);
				}
				bVar2++;
			}
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 760)[7]))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
			}
			if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 704)[0]))
			{
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 704)[0]);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 704)[0]);
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_516(0);
			Function_207(5, 1, 1);
			Function_231(56);
		}
		return 1;
	}
	if (iLocal_1034 == 0)
	{
		if (iLocal_1035 <= 2)
		{
			Function_231(86);
			return 1;
		}
		return 0;
	}
	if (Function_350(&bLocal_997) < 0,5f)
	{
		iLocal_1034 = 0;
		if (iLocal_1035 <= 2)
		{
			Function_231(86);
			return 1;
		}
	}
	return 0;
}

void Function_516(bool bParam0) //Position: 0x1B19E / 111006
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = false;
	while (bVar2 <= GET_ACTORSET_SIZE(bLocal_931))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_931, bVar2);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam0)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
				{
					bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 322, 0.0f, 2, 0);
					SET_BLIP_NAME(bVar1, "Gun01_birdBlip");
				}
			}
			else
			{
				Function_223(bVar0);
			}
		}
		bVar2++;
	}
	return;
}

void Function_517() //Position: 0x1B209 / 111113
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_352(&bLocal_1009))
	{
		return;
	}
	if (Function_350(&bLocal_1009) > 3.0f)
	{
		return;
	}
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_BIRD_FLY_NEAR_COORD(0, &Local_4 + 1328[56], 3.0f, 8.0f, 1106263409);
	TASK_BIRD_FLY_NEAR_COORD(0, &Local_4 + 1328[66], 3.0f, 8.0f, 1106263409);
	TASK_BIRD_FLY_NEAR_COORD(0, &Local_4 + 1328[76], 3.0f, 8.0f, 1106263409);
	TASK_SEQUENCE_CLOSE();
	bVar2 = false;
	while (bVar2 <= GET_ACTORSET_SIZE(bLocal_931))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_931, bVar2);
		if (Function_382(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			TASK_SEQUENCE_PERFORM_REPEATEDLY(bVar0, bVar1, 4294967295);
			Function_294(bVar0, 1, 1, 1, 1, 0, 1);
			SET_ACTOR_BASE_SCORE(bVar0, 10000.0f, 0);
			SET_ACTOR_BASE_SCORE(bVar0, 10000.0f, 1);
		}
		bVar2++;
	}
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	Function_387(&bLocal_1009);
	return;
}

void Function_518() //Position: 0x1B2D9 / 111321
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_ArriveBirds", "Gun01_ArriveBirds", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_519() //Position: 0x1B324 / 111396
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_AwayFromBird", "Gun01_AwayFromBird", false, 2, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_520(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B371 / 111473
{
	if (!ACTOR_HAS_WEAPON(Global_34573, 39) && !ACTOR_HAS_WEAPON(Global_34573, 40))
	{
		if (!bParam1)
		{
			return 0;
		}
		GIVE_WEAPON_TO_ACTOR(Global_34573, 5, false, 1, 1);
	}
	if (Function_521(Global_34573) <= iParam0)
	{
		PRINTSTRING("Out of ammo. Cattleman inventory ammo: ");
		PRINTFLOAT(_GET_AMMO_AMOUNT(Global_34573, 7, 0));
		PRINTSTRING(", Cattleman gun ammo: ");
		PRINTFLOAT(ACTOR_GET_WEAPON_AMMO(Global_34573, 4));
		PRINTNL();
		if (bParam2 >= 0)
		{
			_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, TO_FLOAT(bParam2), 1);
			return Function_521(Global_34573) <= iParam0;
		}
		return 0;
	}
	return 1;
}

int Function_521(bool bParam0) //Position: 0x1B42E / 111662
{
	bool bVar0;
	
	if (((ACTOR_HAS_WEAPON(Global_34573, 2) || ACTOR_HAS_WEAPON(Global_34573, 3)) || ACTOR_HAS_WEAPON(Global_34573, true)) || ACTOR_HAS_WEAPON(Global_34573, false))
	{
		bVar0 = _GET_AMMO_AMOUNT(bParam0, 6, 1);
	}
	if (((ACTOR_HAS_WEAPON(Global_34573, 4) || ACTOR_HAS_WEAPON(Global_34573, 6)) || ACTOR_HAS_WEAPON(Global_34573, 7)) || ACTOR_HAS_WEAPON(Global_34573, 5))
	{
		bVar0 = Function_522(bVar0, _GET_AMMO_AMOUNT(bParam0, 7, 1));
	}
	if (((ACTOR_HAS_WEAPON(Global_34573, 8) || ACTOR_HAS_WEAPON(Global_34573, 11)) || ACTOR_HAS_WEAPON(Global_34573, 10)) || ACTOR_HAS_WEAPON(Global_34573, 9))
	{
		bVar0 = Function_522(bVar0, _GET_AMMO_AMOUNT(bParam0, 8, 1));
	}
	if ((ACTOR_HAS_WEAPON(Global_34573, 13) || ACTOR_HAS_WEAPON(Global_34573, 14)) || ACTOR_HAS_WEAPON(Global_34573, 12))
	{
		bVar0 = Function_522(bVar0, _GET_AMMO_AMOUNT(bParam0, 9, 1));
	}
	if (((ACTOR_HAS_WEAPON(Global_34573, 16) || ACTOR_HAS_WEAPON(Global_34573, 17)) || ACTOR_HAS_WEAPON(Global_34573, 15)) || ACTOR_HAS_WEAPON(Global_34573, 18))
	{
		bVar0 = Function_522(bVar0, _GET_AMMO_AMOUNT(bParam0, 10, 1));
	}
	return FLOOR(bVar0);
}

float Function_522(int iParam0, int iParam1) //Position: 0x1B52A / 111914
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_523(bool bParam0) //Position: 0x1B53D / 111933
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = GET_ACTORSET_SIZE(bParam0);
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				bVar3++;
			}
		}
		bVar2++;
	}
	return bVar3;
}

void Function_524() //Position: 0x1B583 / 112003
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_350(&bLocal_1006) < 7.0f)
	{
		if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bLocal_934, -1.0f, 0,5f))
		{
			Function_528();
			Function_232(&bLocal_1003);
			Function_232(&bLocal_1006);
		}
	}
	if (((IS_ACTOR_SHOOTING(Global_34573) || IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_398()) || HUD_IS_SHOWING_HELP_TEXT())
	{
		Function_232(&bLocal_1003);
	}
	if (Function_350(&bLocal_1003) < 25.0f)
	{
		if (!IS_PLAYER_DEADEYE(0))
		{
			if (!IS_ACTORSET_VALID(bLocal_931))
			{
				Function_527();
			}
			else if (GET_ACTORSET_SIZE(bLocal_931) < 0)
			{
				Function_527();
			}
			else
			{
				Function_526();
			}
			Function_232(&bLocal_1003);
		}
	}
	if (!iLocal_1061)
	{
		if (bLocal_717 != 6 || (bLocal_717 != 16 && iLocal_1033 >= 1))
		{
			bVar1 = GET_LAST_ATTACK_TARGET(Global_34573);
			if (IS_ACTOR_VALID(bVar1))
			{
				bVar2 = false;
				while (bVar2 <= GET_ACTORSET_SIZE(bLocal_932))
				{
					bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_932, bVar2);
					if (bVar1 == bVar0)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_525();
						iLocal_1061 = 1;
						bVar2 = 999999;
					}
					bVar2++;
				}
			}
		}
	}
	return;
}

void Function_525() //Position: 0x1B673 / 112243
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_ShootsBirdB4", "Gun01_ShootsBirdB4", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x1B6C0 / 112320
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_NoShootBirds", "Gun01_NoShootBirds", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_527() //Position: 0x1B70D / 112397
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_WaitJonDraw", "Gun01_WaitJonDraw", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_528() //Position: 0x1B758 / 112472
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_AssaultsRicketBirds", "Gun01_AssaultsRicketBirds", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

int Function_529() //Position: 0x1B7B3 / 112563
{
	Function_343(&Local_4 + 220, 306, 2, 0);
	Function_343(&Local_4 + 220, 1130, 2, 0);
	Function_343(&Local_4 + 220, 1128, 2, 0);
	Function_343(&Local_4 + 220, 1129, 2, 0);
	Function_343(&Local_4 + 220, 703, 2, 0);
	if (Function_310(&Local_4 + 220))
	{
		return 1;
	}
	return 0;
}

void Function_530() //Position: 0x1B807 / 112647
{
	if (!IS_ACTOR_VALID(bLocal_936))
	{
		Function_535();
		Function_534(&bLocal_936);
	}
	Function_245(iLocal_716);
	Function_432(StackVal, StackVal, Function_245(iLocal_716), iLocal_716, Global_30633[2], Function_247(iLocal_716), 0);
	ACTOR_START_FORCE_HOLSTER(bLocal_934, 1, 0);
	AI_GOAL_LOOK_AT_ACTOR(bLocal_934, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
	Function_532();
	if (!IS_ACTOR_VALID((*&Local_4 + 572)[02]))
	{
		Function_502();
		bLocal_937 = (*&Local_4 + 572)[02];
		TASK_STAND_STILL(bLocal_937, -1.0f, 0, 0);
		DECOR_SET_BOOL(bLocal_937, "CanBeLasso", false);
		Function_425(&(Local_773[317]), bLocal_937, "BankManager", 0, 0x5f5e100, 1);
	}
	if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 760)[7]))
	{
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
	}
	if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 760)[7]))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
	}
	if (!iLocal_1052)
	{
		CREATE_PROP_IN_LAYOUT(bLocal_653, "Chair01", "p_gen_chair01x", *(&Local_4 + 1836[06]), *(&Local_4 + 1836[06] + 12), 0);
		CREATE_PROP_IN_LAYOUT(bLocal_653, "Chair02", "p_gen_chair01x", *(&Local_4 + 1836[16]), *(&Local_4 + 1836[16] + 12), 0);
		iLocal_1052 = 1;
	}
	if (!iLocal_1036[0])
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_934, *(&Local_4 + 892[66]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[116]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_939, *(&Local_4 + 892[146]), 1, true, 1);
		TASK_STAND_STILL(bLocal_934, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_939, -1.0f, 0, 0);
		Function_520(100, 1, 100);
		Function_531(&bLocal_1000, 8.0f);
	}
	Function_412(&iLocal_882);
	Function_410(Global_34573, &iLocal_882);
	Function_410(bLocal_934, &iLocal_882);
	Function_410(bLocal_937, &iLocal_882);
	iLocal_1053 = 1;
	Function_380(&bLocal_1003);
	return;
}

void Function_531(bool bParam0, float fParam1) //Position: 0x1BA32 / 113202
{
	if (!Function_352(bParam0))
	{
		Function_233(bParam0, fParam1);
	}
	return;
}

void Function_532() //Position: 0x1BA48 / 113224
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	
	if (IS_ACTORSET_VALID(bLocal_932))
	{
		return;
	}
	Function_533();
	bLocal_932 = CREATE_ACTORSET_IN_LAYOUT(bLocal_653, "PerchedBirds", 0);
	bLocal_931 = CREATE_ACTORSET_IN_LAYOUT(bLocal_653, "FlyingBirds", 0);
	Function_464(&Local_4 + 512, bLocal_932);
	bLocal_919[0] = bLocal_919[1];
	iVar4 = 0;
	while (iVar4 <= 7)
	{
		bVar0 = (*&Local_4 + 512)[iVar42];
		if (Function_321(bVar0, 1))
		{
			ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar0, 11, false);
			Function_476(bVar0, &vVar1);
			bLocal_958[iVar4] = CREATE_POINT_IN_LAYOUT(bLocal_653, Function_53(), vVar1, 0.0f, 0.0f, 0.0f);
			bLocal_919[iVar4] = ATTACH_OBJECTS_CONTINUOUS(GET_OBJECT_FROM_ACTOR(bVar0), bLocal_958[iVar4], 4294967295);
			Function_294(bVar0, 0, 0, 0, 0, 0, 0);
			SET_ACTOR_MAX_HEALTH(bVar0, 1.0f);
			SET_ACTOR_HEALTH(bVar0, 1.0f);
			SET_ACTOR_BASE_SCORE(bVar0, 10000.0f, 1);
			SET_ACTOR_BASE_SCORE(bVar0, 10000.0f, 0);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			TASK_PRIORITY_SET(bVar0, true);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
			SET_ACTOR_INVULNERABILITY(bVar0, true);
			SET_ACTOR_FACTION(bVar0, 20);
			SET_ACTOR_PROOF(bVar0, 8);
		}
		iVar4++;
	}
	iLocal_1035 = Function_523(bLocal_931);
	iLocal_1034 = 0;
	return;
}

void Function_533() //Position: 0x1BB68 / 113512
{
	(*&Local_4 + 512)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bird01", 1130, -2755,203f, 35,74334f, 4283,685f, 0.0f, 106,8502f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 512)[02], false);
	(*&Local_4 + 512)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bird02", 1128, -2754,056f, 36,36993f, 4281,686f, 0.0f, 84,64783f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 512)[12], false);
	(*&Local_4 + 512)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bird03", 1128, -2756,011f, 35,7401f, 4279,928f, 0.0f, 101,3363f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 512)[22], false);
	(*&Local_4 + 512)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bird04", 1129, -2755,575f, 35,76908f, 4281,853f, 0.0f, 99,24585f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 512)[32], false);
	(*&Local_4 + 512)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bird05", 1128, -2753,508f, 38,68306f, 4272,012f, 0.0f, 112,6857f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 512)[42], false);
	(*&Local_4 + 512)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bird06", 1128, -2749,951f, 36,17288f, 4291,04f, 0.0f, 132,7773f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 512)[52], false);
	(*&Local_4 + 512)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bird07", 1128, -2752,123f, 36,2527f, 4288,172f, 0.0f, 111,8776f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 512)[62], false);
	return;
}

void Function_534(bool bParam0) //Position: 0x1BD0B / 113931
{
	*bParam0 = (*&Local_4 + 500)[02];
	if (Function_321(*bParam0, 1))
	{
		SET_CRIPPLE_ENABLE(*bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(*bParam0, false);
		SET_ACTOR_FACTION(*bParam0, 20);
		DECOR_SET_BOOL(*bParam0, "CanBeLasso", true);
		SET_ANIMAL_CAN_ATTACK(*bParam0, 0);
	}
	Function_425(&(Local_773[217]), bLocal_936, "DrunkGuy", 0, 0x5f5e100, 1);
	return;
}

void Function_535() //Position: 0x1BD77 / 114039
{
	(*&Local_4 + 500)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DrunkGuy", 306, -2737,108f, 32,24866f, 4296,192f, 0.0f, 145,5943f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 500)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 500)[02], 23);
	return;
}

void Function_536() //Position: 0x1BDC6 / 114118
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[16]), 1, true, 1);
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	return;
}

void Function_537() //Position: 0x1BDF5 / 114165
{
	if (!Function_632(bLocal_717))
	{
		return;
	}
	Function_456();
	Function_450();
	Function_446();
	Function_539(StackVal, StackVal, "$/cutscene/GUN_01_CS02/GUN_01_CS02", &iLocal_881, &iLocal_882, *(&Local_4 + 892[26]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
	Function_538(16);
	Function_503();
	return;
}

void Function_538(float fParam0) //Position: 0x1BE61 / 114273
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_63399 && fParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_63399 && fParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_63398);
	}
	return;
}

int Function_539(bool bParam0, var uParam1, var uParam2, vector3 vParam3, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13) //Position: 0x1BE91 / 114321
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_443(StackVal, StackVal, Global_34573, vParam3, (fParam7 + ((IntToFloat(Function_445()) * (fParam8 - fParam7)) * 0,5f))))
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
		if ((uParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_OVERRIDE_ACTORS: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
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
					Function_412(uParam2);
					*uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Function_540(uParam2);
				CUTSCENE_MANAGER_RESUME_LOADING();
				*uParam1 = 3;
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_OVERRIDE_ACTORS: preload cutscene was skipped, is cutscene missing or failed to load?");
				break;
			
			default:
				*uParam1 = 0;
				break;
		}
	}
	else if (!Function_443(StackVal, StackVal, Global_34573, vParam3, (fParam8 + ((IntToFloat(Function_445()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_443(StackVal, StackVal, Global_34573, vParam3, fParam7))
	{
	}
	return 0;
}

void Function_540(int iParam0) //Position: 0x1C21E / 115230
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
			Function_541(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0), bVar0, iParam0);
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar7, &Var10);
			Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_541(bool bParam0, bool bParam1, var uParam2) //Position: 0x1C27E / 115326
{
	int iVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= *uParam2)
		{
			if (IS_ACTOR_VALID((*uParam2)[iVar09]))
			{
				if (GET_ACTOR_ENUM(bParam0) == GET_ACTOR_ENUM((*uParam2)[iVar09]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bParam1), (*uParam2)[iVar09]);
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bParam1, uParam2[iVar09] + 4, &Var1);
					uParam2[iVar09]->f_16 = (StackVal + 180.0f);
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bParam1, uParam2[iVar09] + 20, &Var1);
					uParam2[iVar09]->f_32 = (StackVal + 180.0f);
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_542() //Position: 0x1C30F / 115471
{
	float fVar0;
	bool bVar1;
	
	Function_576();
	switch (bLocal_717)
	{
		case 0x00000000:
			Function_361(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_218(8);
			Function_359(1);
			Function_359(256);
			Function_358((*&Local_4 + 760)[0]);
			if (Function_289(&Local_654))
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Function_356(&Local_654);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_575();
				Function_231(1);
			}
			else if (iLocal_1045)
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Function_356(&Local_654);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_575();
				Function_231(1);
			}
			else
			{
				Function_572();
				Function_231(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_357(Global_30693[0])) && Function_571())
			{
				if (!IS_ACTOR_VALID(bLocal_936))
				{
					Function_535();
					Function_534(&bLocal_936);
					Function_570();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_934, *(&Local_4 + 892[56]), 1, true, 1);
				TASK_STAND_STILL(bLocal_934, -1.0f, 0, 0);
				if (Function_321(bLocal_938, 1))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[106]), 1, true, 1);
					TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
				}
				Function_572();
				Function_231(2);
			}
			else if (Function_350(&bLocal_988) < 2.0f)
			{
				Function_232(&bLocal_988);
			}
			break;
		
		case 0x00000002:
			if (Function_350(&bLocal_988) < 2.0f || (!iLocal_1045 && !Function_289(&Local_654)))
			{
				if (Function_289(&Local_654) || iLocal_1045)
				{
					Function_569();
					if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 760)[7]))
					{
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[1]);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[1]);
						CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 760)[1], 15);
					}
				}
				Function_453(1);
				Function_245(iLocal_716);
				Function_432(StackVal, StackVal, Function_245(iLocal_716), iLocal_716, Global_30633[2], Function_247(iLocal_716), 0);
				Function_284(1.0f);
				Function_531(&bLocal_1006, 7.0f);
				Function_231(6);
			}
			break;
		
		case 0x00000006:
			if (Function_352(&bLocal_1027))
			{
				if (Function_350(&bLocal_1027) < 11.0f)
				{
					SET_FORCE_PLAYER_AIM_MODE(0, 0);
					Function_387(&bLocal_1027);
				}
			}
			if (!Function_563())
			{
				Function_560();
				fVar0 = Function_407(Global_34573, bLocal_934);
				if (fVar0 < 60.0f)
				{
					Function_248("Gunslinger_abandoned");
					bLocal_1044 = true;
				}
				else if (!Function_520(3, 0, 0))
				{
					Function_248("Gun01_ammoFail");
					bLocal_1044 = true;
				}
				else if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[2]))
				{
					if (!iLocal_1050)
					{
						Function_221(0);
						GATEWAY_DISABLE(bLocal_987, 0);
						if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_987)))
						{
							ADD_BLIP_FOR_OBJECT(bLocal_987, 330, 0f, 2, 0);
						}
						HUD_CLEAR_OBJECTIVE();
						Function_406("Gun01_bottleReturn", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
					else if (!iLocal_1051)
					{
						if (!ACTORS_IN_RANGE(Global_34573, bLocal_934, 15.0f))
						{
							Function_559();
							iLocal_1051 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1050)
					{
						if (GATEWAY_UPDATE(bLocal_987))
						{
							HUD_CLEAR_OBJECTIVE();
							GATEWAY_DISABLE(bLocal_987, 1);
							Function_208(bLocal_987);
							Function_207(5, 0, 1);
							Function_221(1);
							iLocal_1050 = 0;
							if (iLocal_1033 >= 1)
							{
								iLocal_1033 = 1;
							}
						}
					}
					if (iLocal_1051)
					{
						iLocal_1051 = 0;
					}
					if (!Function_558())
					{
						if (iLocal_1033 == 0)
						{
							if (!HUD_IS_FADING())
							{
								Function_221(1);
								DISABLE_GAME_CAMERA_FOCUS();
								Function_557();
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								Function_232(&bLocal_1003);
								Function_232(&bLocal_988);
								iLocal_1033 = 1;
							}
						}
						else if (iLocal_1033 == 1)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_350(&bLocal_988) < 10.0f)
							{
								Function_406("Gun01_obj01a", 7,5f, 1, 2, 0, 0, 0);
								Function_232(&bLocal_1003);
								Function_232(&bLocal_988);
								iLocal_1033 = 2;
							}
						}
						else if (iLocal_1033 == 2)
						{
							if (HUD_IS_SHOWING_OBJECTIVE())
							{
								Function_232(&bLocal_988);
							}
							else if (Function_350(&bLocal_988) < 1.0f)
							{
								Function_132("Gun01_obj01a_help", 10.0f, 1, 0, 2, 1, 0);
								Function_232(&bLocal_1003);
								Function_232(&bLocal_988);
								iLocal_1033 = 3;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000024:
			if (!Function_563())
			{
				Function_560();
				fVar0 = Function_407(Global_34573, bLocal_934);
				if (fVar0 < 60.0f)
				{
					Function_248("Gunslinger_abandoned");
					bLocal_1044 = true;
				}
				else if (!Function_520(3, 0, 0))
				{
					Function_248("Gun01_ammoFail");
					bLocal_1044 = true;
				}
				else if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[2]))
				{
					if (!iLocal_1050)
					{
						Function_221(0);
						GATEWAY_DISABLE(bLocal_987, 0);
						ADD_BLIP_FOR_OBJECT(bLocal_987, 330, 0f, 2, 0);
						HUD_CLEAR_HELP();
						HUD_CLEAR_OBJECTIVE();
						Function_406("Gun01_bottleReturn", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
					else if (!iLocal_1051)
					{
						if (!ACTORS_IN_RANGE(Global_34573, bLocal_934, 15.0f))
						{
							Function_559();
							iLocal_1051 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1050)
					{
						if (GATEWAY_UPDATE(bLocal_987))
						{
							HUD_CLEAR_OBJECTIVE();
							if (iLocal_1033 > 1)
							{
								Function_406("Gun01_obj01b", 7,5f, 1, 2, 0, 0, 0);
							}
							GATEWAY_DISABLE(bLocal_987, 1);
							Function_208(bLocal_987);
							Function_207(5, 0, 1);
							Function_221(1);
							iLocal_1050 = 0;
							if (iLocal_1033 >= 1)
							{
								iLocal_1033 = 1;
							}
						}
					}
					if (iLocal_1051)
					{
						iLocal_1051 = 0;
					}
					if (iLocal_1033 == 0)
					{
						if (Function_350(&bLocal_988) < 0,05f)
						{
							HUD_CLEAR_HELP();
							Function_132("Gun01_obj01b_help", 100.0f, 1, 0, 2, 1, 0);
							Function_232(&bLocal_1003);
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
					else if (iLocal_1033 == 1)
					{
						if (HUD_IS_SHOWING_HELP_TEXT())
						{
							Function_232(&bLocal_988);
						}
						else if (Function_350(&bLocal_988) < 0,05f)
						{
							Function_406("Gun01_obj01b", 7,5f, 1, 2, 0, 0, 0);
							Function_232(&bLocal_1003);
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
					else if (iLocal_1033 == 2)
					{
						if (Function_350(&bLocal_988) < 20.0f)
						{
							if (!HUD_IS_SHOWING_HELP_TEXT())
							{
								Function_132("Gun01_obj01b_help", 10.0f, 1, 0, 2, 1, 0);
								Function_232(&bLocal_988);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000002E:
			if (!Function_556())
			{
				fVar0 = Function_407(Global_34573, bLocal_934);
				if (fVar0 < 60.0f)
				{
					Function_248("Gunslinger_abandoned");
					bLocal_1044 = true;
				}
				else if (!Function_520(3, 0, 0))
				{
					Function_248("Gun01_ammoFail");
					bLocal_1044 = true;
				}
				else if (fVar0 < 25.0f)
				{
					if (!iLocal_1050)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_406("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
				}
				else
				{
					if (iLocal_1050)
					{
						HUD_CLEAR_OBJECTIVE();
						if (iLocal_1033 > 2)
						{
							Function_406("Gun01_obj01c", 7,5f, 1, 2, 0, 0, 0);
						}
						iLocal_1050 = 0;
					}
					if (iLocal_1033 == 0)
					{
						TASK_STAND_STILL(bLocal_934, -1.0f, 0, 0);
						HUD_CLEAR_SMALL_TEXT();
						Function_555();
						Function_232(&bLocal_988);
						iLocal_1033 = 1;
					}
					else if (iLocal_1033 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_350(&bLocal_988) < 10.0f)
						{
							CLEAR_AMBIENT_ALL_RESTRICTIONS();
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_934, (*&Local_4 + 760)[3]);
							AI_SET_NAV_ACTOR_WIDTH(bLocal_934, 0,5f);
							bVar1 = TASK_SEQUENCE_OPEN();
							TASK_STAND_STILL(false, 0,5f, 0, 0);
							TASK_FOLLOW_PATH(false, Local_4.f_2548, 1, 1, 0, 1, false);
							TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_4 + 892[66], true);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_934, bVar1);
							TASK_SEQUENCE_RELEASE(bVar1, 1);
							Function_554();
							Function_232(&bLocal_988);
							iLocal_1033 = 2;
						}
					}
					else if (iLocal_1033 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_350(&bLocal_988) < 4.0f)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_406("Gun01_obj01c", 7,5f, 1, 2, 0, 0, 0);
							Function_232(&bLocal_988);
							iLocal_1033 = 3;
						}
					}
					else if (iLocal_1033 == 3)
					{
						if (!HUD_IS_SHOWING_OBJECTIVE() || Function_350(&bLocal_988) < 4.0f)
						{
							Function_553();
							Function_232(&bLocal_988);
							iLocal_1033 = 4;
						}
					}
				}
			}
			break;
		
		case 0x00000038:
			Function_529();
			if (!Function_552())
			{
				fVar0 = Function_407(Global_34573, bLocal_934);
				if (fVar0 < 60.0f)
				{
					Function_248("Gunslinger_abandoned");
					bLocal_1044 = true;
				}
				else if (!Function_520(3, 0, 0))
				{
					Function_248("Gun01_ammoFail");
					bLocal_1044 = true;
				}
				else if (fVar0 < 25.0f)
				{
					if (!iLocal_1050)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_406("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1050 = 1;
					}
				}
				else if (iLocal_1050)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_406("Gun01_obj01c", 7,5f, 1, 2, 0, 0, 0);
					iLocal_1050 = 0;
				}
			}
			break;
		
		case 0x00000042:
			if (IS_PLAYER_DEADEYE(0))
			{
				CANCEL_DEADEYE();
			}
			if (Function_350(&bLocal_988) < 1.0f)
			{
				GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(Local_4.f_2512));
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_934, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				Function_250();
				if (IS_OBJECT_VALID(bLocal_951))
				{
					SET_ACTION_NODE_FOR_ACTOR(bLocal_936, "gun01_drunk/taunt");
				}
				else
				{
					Function_453(0);
				}
				if (iLocal_1054)
				{
					Function_551();
					iLocal_1054 = 0;
				}
				else
				{
					Function_551();
				}
				Function_213(GET_BLIP_ON_OBJECT(Local_720[04]));
				Function_213(GET_BLIP_ON_OBJECT(Local_720[14]));
				Function_213(GET_BLIP_ON_OBJECT(Local_720[24]));
				Function_547(bLocal_653, 0, Global_34573, 1, 0, 0);
				SET_PLAYER_CONTROL(0, 0, 1, 0);
				Function_231(67);
			}
			break;
		
		case 0x00000043:
			if (Function_350(&bLocal_988) < 5.0f)
			{
				if (IS_OBJECT_VALID(bLocal_951))
				{
					SET_ACTION_NODE_FOR_ACTOR(bLocal_936, "gun01_drunk/idle");
					AI_GOAL_LOOK_CLEAR(bLocal_936);
				}
				else
				{
					Function_453(0);
				}
				Function_546();
				Function_544();
				Function_231(68);
			}
			break;
		
		case 0x00000044:
			if (Function_350(&bLocal_988) < 2.0f)
			{
				ALLOW_GAME_CAMERA_AUTO_CENTERING(iLocal_718, 2);
				ALLOW_GAME_CAMERA_AUTO_TILTING(iLocal_719, 2);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_232(&bLocal_1003);
				Function_231(6);
				iLocal_1033 = 1;
			}
			break;
		
		case 0x0000006A:
			Function_543();
			iLocal_1036[0] = 1;
			iLocal_716 = 2;
			Function_231(0);
			break;
	}
	return;
}

void Function_543() //Position: 0x1CDAF / 118191
{
	int iVar0;
	
	if (DECOR_CHECK_EXIST(bLocal_934, "g1_bWalkToBank"))
	{
		DECOR_REMOVE(bLocal_934, "g1_WalkToBank");
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_720[iVar04].f_12 = 0;
		iVar0++;
	}
	Function_213(bLocal_946);
	Function_212(bLocal_987);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_934, true);
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	Function_219();
	Function_218(2097152);
	Function_173();
	return;
}

void Function_544() //Position: 0x1CE27 / 118311
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_2512), "UseCase1", 4294967295, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_934, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	Function_545();
	DECOR_SET_BOOL(Global_34573, "_EndTransition", true);
	return;
}

void Function_545() //Position: 0x1CE7F / 118399
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BottlesUp", "Gun01_BottlesUp", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_546() //Position: 0x1CEC6 / 118470
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar0 = Local_720[iVar14];
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
		Local_720[iVar14] = CREATE_PROP_IN_LAYOUT(bLocal_653, Function_53(), "$/fragments/p_gen_bottle02x", *(&Local_4 + 1888[iVar16]), *(&Local_4 + 1888[iVar16] + 12), 0);
		Local_720[iVar14].f_4 = GET_PROP_FROM_OBJECT(Local_720[iVar14]);
		Local_720[iVar14].f_12 = 0;
		SET_PHYSINST_FROZEN(StackVal, true);
		iVar1++;
	}
	if (!iLocal_1060)
	{
		iLocal_1060 = 1;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			SET_PHYSINST_FROZEN(StackVal, true);
			iVar1++;
		}
	}
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[2]))
	{
		Function_221(1);
	}
	return;
}

var Function_547(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1CFA7 / 118695
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Gun01_Cutscene02", 2, 1);
	}
	Function_548(&bVar0, uParam2);
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

void Function_548(var uParam0, char* cParam1) //Position: 0x1D025 / 118821
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_550(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_549(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "_EndTransition", 2, 0, 6.0f);
	return;
}

void Function_549(int iParam0) //Position: 0x1D08A / 118922
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2736,878f, 32,69702f, 4297,167f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,050893f, -0,019264f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_550(var uParam0) //Position: 0x1D0F4 / 119028
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2736,591f, 32,86623f, 4297,462f);
	SET_CAMERASHOT_DIRECTION(*uParam0, -0,022686f, 0,065344f, 0,997605f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_551() //Position: 0x1D15B / 119131
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun01_MissesBottles", "Gun01_MissesBottles", false, 1, 1, 0, 1);
		Function_370(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_552() //Position: 0x1D1AA / 119210
{
	if (!ACTORS_IN_RANGE(Global_34573, bLocal_934, 8.0f))
	{
		return 0;
	}
	Function_231(106);
	return 1;
}

void Function_553() //Position: 0x1D1CA / 119242
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWayBirds_v1_AA1", "Gun01_BanterWayBirds_v1_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWayBirds_v1_AA2", "Gun01_BanterWayBirds_v1_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Gun01_BanterWayBirds_v1_AB", "Gun01_BanterWayBirds_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWayBirds_v1_AC1", "Gun01_BanterWayBirds_v1_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun01_BanterWayBirds_v1_AD", "Gun01_BanterWayBirds_v1_AD", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_554() //Position: 0x1D339 / 119609
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_SetsOffTownSquare", "Gun01_SetsOffTownSquare", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_555() //Position: 0x1D390 / 119696
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_ShootsDeadEyeSuccess", "Gun01_ShootsDeadEyeSuccess", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_556() //Position: 0x1D3ED / 119789
{
	if (!IS_ACTOR_IN_VOLUME(bLocal_934, (*&Local_4 + 760)[8]))
	{
		return 0;
	}
	Function_231(56);
	return 1;
}

void Function_557() //Position: 0x1D40E / 119822
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_GivesRevolver", "Gun01_GivesRevolver", false, 1, 1, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_558() //Position: 0x1D45D / 119901
{
	if (!IS_PLAYER_DEADEYE(0))
	{
		return 0;
	}
	HUD_CLEAR_OBJECTIVE();
	Function_231(36);
	return 1;
}

void Function_559() //Position: 0x1D476 / 119926
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_RunsAwayBottles", "Gun01_RunsAwayBottles", false, 2, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x1D4C9 / 120009
{
	if (Function_350(&bLocal_1006) < 7.0f)
	{
		if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bLocal_934, 1,3f, 0,5f))
		{
			Function_562();
			Function_232(&bLocal_1003);
			Function_232(&bLocal_1006);
		}
	}
	if (((IS_ACTOR_SHOOTING(Global_34573) || IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_398()) || HUD_IS_SHOWING_HELP_TEXT())
	{
		Function_232(&bLocal_1003);
	}
	if (Function_350(&bLocal_1003) < 20.0f)
	{
		if (!IS_PLAYER_DEADEYE(0))
		{
			Function_561();
			Function_232(&bLocal_1003);
		}
	}
	return;
}

void Function_561() //Position: 0x1D537 / 120119
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_WaitJonBottles", "Gun01_WaitJonBottles", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_562() //Position: 0x1D588 / 120200
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun01_AssaultsRickBottle", "Gun01_AssaultsRickBottle", false, 1, 0, 0, 1);
		Function_370(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_563() //Position: 0x1D5E1 / 120289
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	Function_568();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_720[iVar04].f_12)
		{
			if (!IS_PHYSINST_VALID(StackVal))
			{
				Local_720[iVar04].f_12 = 1;
				Function_213(bLocal_947[iVar0]);
				iVar1 = 1;
				Function_567(GET_WEAPON_IN_HAND(Global_34573));
			}
			else if (HAS_PHYSINST_BROKEN_APART(StackVal))
			{
				Local_720[iVar04].f_12 = 1;
				Function_213(bLocal_947[iVar0]);
				iVar1 = 1;
				SET_PHYSINST_FROZEN(StackVal, false);
				vVar2 = { 0.0f, 0.0f, 1.0f };
				SET_PROP_ANGULAR_VELOCITY_DEGS(StackVal, &vVar2);
				Function_567(GET_WEAPON_IN_HAND(Global_34573));
			}
		}
		iVar0++;
	}
	if (iVar1 || iLocal_1055)
	{
		Function_232(&bLocal_997);
		return Function_566();
	}
	if (Function_565())
	{
		if (Function_350(&bLocal_997) < 0,5f)
		{
			Function_564();
			return 1;
		}
	}
	return 0;
}

void Function_564() //Position: 0x1D6BF / 120511
{
	iLocal_718 = GET_GAME_CAMERA_AUTO_CENTERING_STATE(2);
	iLocal_719 = GET_GAME_CAMERA_AUTO_TILTING_STATE(2);
	ALLOW_GAME_CAMERA_AUTO_CENTERING(0, 2);
	ALLOW_GAME_CAMERA_AUTO_TILTING(0, 2);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	Function_221(0);
	Function_232(&bLocal_1003);
	Function_231(66);
	return;
}

bool Function_565() //Position: 0x1D6FD / 120573
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_720[iVar04].f_12 == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_566() //Position: 0x1D725 / 120613
{
	int iVar0;
	
	if (iLocal_1055)
	{
		CANCEL_DEADEYE();
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ENABLE_NAV_STICK_INPUT(0, 1);
		SET_PLAYER_CONTROL_CONFIG(0, 0);
		AI_STOP_IGNORING_ACTOR(Global_34573);
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		Function_219();
		Function_218(2097152);
		HUD_CLEAR_HELP();
		Function_213(bLocal_946);
		Function_221(0);
		Function_207(5, 1, 1);
		Function_231(46);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Local_720[iVar04].f_12 = 0;
			iVar0++;
		}
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_720[iVar04].f_12 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[2]))
	{
		iLocal_1054 = 1;
		Function_564();
	}
	else
	{
		CANCEL_DEADEYE();
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ENABLE_NAV_STICK_INPUT(0, 1);
		SET_PLAYER_CONTROL_CONFIG(0, 0);
		AI_STOP_IGNORING_ACTOR(Global_34573);
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		Function_219();
		Function_218(2097152);
		HUD_CLEAR_HELP();
		Function_213(bLocal_946);
		Function_221(0);
		Function_207(5, 1, 1);
		Function_231(46);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Local_720[iVar04].f_12 = 0;
			iVar0++;
		}
	}
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	return 1;
}

void Function_567(bool bParam0) //Position: 0x1D832 / 120882
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
			break;
		
		default:
			Function_85(49, 1, 0, 0);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_85(iVar0, 1, 0, 0);
	return;
}

void Function_568() //Position: 0x1D87C / 120956
{
	void fVar0;
	vector3 vVar1;
	bool bVar4;
	
	fVar0 = GET_CURRENT_GRINGO(bLocal_936);
	if (IS_GRINGO_VALID(fVar0))
	{
		Function_296(GET_OBJECT_FROM_GRINGO(fVar0));
		vVar1 = { StackVal, StackVal, Function_296(GET_OBJECT_FROM_GRINGO(fVar0)) };
		bVar4 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 0,25f, "p_gen_bottletequila02x", 1);
		if (IS_PHYSINST_VALID(bVar4))
		{
			if (bVar4 != bLocal_951)
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar4));
			}
		}
	}
	return;
}

void Function_569() //Position: 0x1D8DE / 121054
{
	bool bVar0;
	
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_934, false);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_2512), "UseCase1", 4294967295, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_934, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_938, true);
	Function_212(bLocal_953[0]);
	Function_212(bLocal_953[1]);
	Function_212(bLocal_953[2]);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 0);
	SET_PLAYER_CONTROL_CONFIG(0, 5);
	AI_IGNORE_ACTOR(Global_34573);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 5, 0);
	ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
	Function_380(&bLocal_1027);
	ENABLE_GAME_CAMERA_FOCUS(*(&Local_4 + 1328[26]), 9999,9f, 6, 0, 1, 1);
	Function_358((*&Local_4 + 760)[0]);
	if (!iLocal_1047)
	{
		Function_546();
		iLocal_1047 = 1;
	}
	return;
}

void Function_570() //Position: 0x1D9A8 / 121256
{
	bool bVar0;
	
	bVar0 = GET_GRINGO_FROM_OBJECT(Local_4.f_2508);
	if (Function_454(bVar0, 1))
	{
		SNAP_ACTOR_TO_GRINGO(bLocal_936, GET_OBJECT_FROM_GRINGO(bVar0), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(bLocal_936, bVar0, "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET(bLocal_936, true);
	}
	else
	{
		LOG_ERROR("The drunk gringo is not valid! We are screwed!");
	}
	return;
}

int Function_571() //Position: 0x1DA2E / 121390
{
	Function_343(&Local_4 + 116, 306, 2, 0);
	Function_343(&Local_4 + 116, 1130, 2, 0);
	Function_343(&Local_4 + 116, 1128, 2, 0);
	Function_343(&Local_4 + 116, 1129, 2, 0);
	if (Function_310(&Local_4 + 116))
	{
		return 1;
	}
	return 0;
}

void Function_572() //Position: 0x1DA75 / 121461
{
	SET_PLAYER_CAUSE_WEAPON_REACTIONS(Global_34573, 0);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 0);
	ACTOR_START_FORCE_HOLSTER(bLocal_934, 0, 0);
	Function_574(10.0f);
	Function_191(2097152);
	if (!ACTOR_HAS_WEAPON(Global_34573, 5))
	{
		Function_160(5, 1, 1);
	}
	_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, 10000.0f, 1);
	bLocal_987 = Function_573(bLocal_653, "BottleHome", (*&Local_4 + 760)[2], Global_34573, 1, 330, 4294967295, 0, 0, 1);
	GATEWAY_DISABLE(bLocal_987, 1);
	Function_208(bLocal_987);
	AI_GOAL_LOOK_AT_ACTOR(bLocal_934, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
	CREATE_PROP_IN_LAYOUT(bLocal_653, "Chair01", "p_gen_chair01x", *(&Local_4 + 1836[06]), *(&Local_4 + 1836[06] + 12), 0);
	CREATE_PROP_IN_LAYOUT(bLocal_653, "Chair02", "p_gen_chair01x", *(&Local_4 + 1836[16]), *(&Local_4 + 1836[16] + 12), 0);
	iLocal_1052 = 1;
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_380(&bLocal_1003);
	Function_531(&bLocal_1000, 8.0f);
	iLocal_1053 = 1;
	Function_532();
	return;
}

bool Function_573(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x1DBA8 / 121768
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

void Function_574(var uParam0) //Position: 0x1DC25 / 121893
{
	if (Global_8722 < 0,1f)
	{
		return;
	}
	Global_8722 = uParam0;
	return;
}

void Function_575() //Position: 0x1DC3D / 121917
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[06]), 1, true, 1);
	ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	return;
}

void Function_576() //Position: 0x1DC6B / 121963
{
	if (!Function_632(bLocal_717))
	{
		return;
	}
	Function_456();
	Function_450();
	Function_446();
	Function_538(16);
	return;
}

void Function_577() //Position: 0x1DC8A / 121994
{
	switch (bLocal_717)
	{
		case 0x00000000:
		case 0x00000006:
			Function_601(&Local_654, 1);
			bLocal_653 = CREATE_LAYOUT("Gun01_DynamicLayout");
			Function_600();
			Function_218(8);
			Function_359(1);
			Function_359(256);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_380(&bLocal_988);
			if ((!Function_289(&Local_654) && Local_654.f_24 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/GUN_01/GUN_01"))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2733,88f, 32,72f, 4261,21f, -75,3f, 1, true, 1);
				Global_63097 = 1;
				bLocal_717 = 8;
			}
			else
			{
				bLocal_717 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_232(&bLocal_988);
				bLocal_717 = 8;
			}
			else if (Function_350(&bLocal_988) < 2.0f)
			{
				Function_232(&bLocal_988);
			}
			break;
		
		case 0x00000008:
			if (Function_584("$/cutscene/GUN_01/GUN_01", "$/cutscene/GUN_01_S/GUN_01_S", &iLocal_709, &Local_654, iLocal_716, 128936, 128752, 128371, 128083, 127831, 127520, 127503, 127483, 127441, 1, 2, 1, 2, 2))
			{
				Function_232(&bLocal_988);
				bLocal_717 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_332())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_327();
				}
				Function_232(&bLocal_988);
				bLocal_717 = 10;
			}
			else if (Function_350(&bLocal_988) < 2.0f)
			{
				Function_232(&bLocal_988);
			}
			break;
		
		case 0x0000000A:
			Function_580();
			iLocal_716 = 0;
			bLocal_717 = false;
			Function_578(&Local_654, &iLocal_716, &bLocal_717);
			switch (iLocal_716)
			{
				case 0x00000000:
					break;
				
				case 0x00000002:
					Function_234();
					break;
				
				case 0x00000003:
					Function_230();
					break;
				
				case 0x00000004:
					Function_229();
					break;
				
				case 0x00000065:
					Function_227();
					break;
			}
			break;
	}
	return;
}

void Function_578(int iParam0, var uParam1, var uParam2) //Position: 0x1DEB3 / 122547
{
	if (Function_289(iParam0))
	{
		*uParam1 = Function_501(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*uParam2 = 0;
		}
		Function_579();
	}
	return;
}

void Function_579() //Position: 0x1DEE7 / 122599
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

void Function_580() //Position: 0x1DF38 / 122680
{
	if (Function_321(bLocal_934, 1))
	{
		RESET_ACTOR_GAITS(bLocal_934, 0);
		SET_CRIPPLE_ENABLE(bLocal_934, 0);
		SET_ACTOR_FACTION(bLocal_934, 20);
		TASK_PRIORITY_SET(bLocal_934, true);
		AI_BEHAVIOR_SET_ALLOW(bLocal_934, 0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_934, 0);
		AI_SET_ALLOWED_MOUNT_DIRECTIONS(bLocal_934, 2);
		SET_ACTOR_MAX_HEALTH(bLocal_934, 50.0f);
		SET_ANIMAL_CAN_ATTACK(bLocal_934, 0);
		SET_ACTOR_FACE_STYLE(bLocal_934, 2);
		UNK_0x99AFD2D1(bLocal_934, 1, 0);
		DECOR_SET_BOOL(bLocal_934, "Smoke_Quick_Exit", true);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_934, false);
		Function_414(bLocal_934);
	}
	if (!IS_ACTOR_VALID(bLocal_939))
	{
		Function_583();
		bLocal_939 = (*&Local_4 + 584)[02];
		ACCESSORIZE_HORSE(bLocal_939, 3);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_939, 0.0f);
		DECOR_SET_BOOL(bLocal_939, "bNoInjuryEjection", true);
		Function_425(&(Local_773[117]), bLocal_939, "Gunslinger_horse", 0, 0x5f5e100, 1);
		TASK_STAND_STILL(bLocal_939, -1.0f, 1, 0);
	}
	SET_DISABLE_DEADEYE(0, 0);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
	Function_581(&uLocal_733, bLocal_653);
	Function_425(&(Local_773[017]), bLocal_934, "Gunslinger", 0, 0x5f5e100, 1);
	bLocal_928 = CREATE_EVENT_TRAP("DrunkTrapLeft", 5, bLocal_653);
	EVENT_TRAP_ON_VOLUME(bLocal_928, (*&Local_4 + 760)[5]);
	bLocal_929 = CREATE_EVENT_TRAP("DrunkTrapRight", 5, bLocal_653);
	EVENT_TRAP_ON_VOLUME(bLocal_929, (*&Local_4 + 760)[4]);
	cLocal_927 = CREATE_OBJECT_ITERATOR(Local_4);
	Function_232(&bLocal_988);
	Function_380(&bLocal_991);
	Function_380(&bLocal_994);
	Function_380(&bLocal_997);
	Function_531(&bLocal_1030, 8.0f);
	return;
}

int Function_581(var uParam0, bool bParam1) //Position: 0x1E0ED / 123117
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_582(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_582(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_582(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_582(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_582(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1E78D / 124813
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
	Function_76(iParam0 + 8, bParam4);
	return 1;
}

void Function_583() //Position: 0x1E850 / 125008
{
	(*&Local_4 + 584)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CompanionHorse", 981, -2742,596f, 32,24027f, 4260,01f, 0,1769326f, 54,14531f, 0,09853994f);
	TASK_STAND_STILL((*&Local_4 + 584)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 584)[02], 24);
	TASK_PRIORITY_SET((*&Local_4 + 584)[02], true);
	ACCESSORIZE_HORSE((*&Local_4 + 584)[02], 3);
	return;
}

bool Function_584(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, int iParam18) //Position: 0x1E8C9 / 125129
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_290(iParam2, uParam14);
	switch (*iParam2)
	{
		case 0x000003E8:
			if (iParam4 != 99 && (Function_289(iParam3) || iParam3->f_24 < 1))
			{
				*iParam2 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
			{
				*iParam2 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam0, 0, iParam15, iParam16, 1, 2);
				Call_Loc(uParam5);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_232(iParam2 + 4);
				*iParam2 = 1002;
			}
			else if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_288())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					Call_Loc(uParam5);
					Call_Loc(uParam7);
					Global_63097 = 0;
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					Function_232(iParam2 + 4);
					*iParam2 = 1004;
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
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_350(iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam2 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_350(iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(uParam7);
					if (StackVal)
					{
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_232(iParam2 + 4);
						*iParam2 = 1004;
					}
				}
			}
			break;
		
		case 0x000003EC:
			Call_Loc(uParam9);
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
						Function_284(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam1))
				{
					LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES: 2nd cutscene doesn't exist...");
					*iParam2 = 1105;
					return 0;
				}
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam1, 0, 1, 1, iParam17, iParam18);
				Call_Loc(uParam6);
				Global_63097 = 1;
				Function_232(iParam2 + 4);
				*iParam2 = 1005;
			}
			break;
		
		case 0x000003ED:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_350(iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam2 = 1105;
				return 0;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_350(iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!DECOR_CHECK_EXIST(Global_6289, "streamingtimer"))
				{
					DECOR_SET_FLOAT(Global_6289, "streamingtimer", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_6289, "streamingtimer")) < 2.0f)
				{
					if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
					{
						Call_Loc(uParam8);
						if (StackVal)
						{
							DECOR_REMOVE(Global_6289, "streamingtimer");
							STREAMING_RELEASE_MAIN_POI();
							CUTSCENE_MANAGER_PLAY_CUTSCENE();
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
							*iParam2 = 1006;
						}
					}
				}
				else
				{
					CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar0, &vVar3);
					STREAMING_LOAD_SCENE_EXT(vVar0, vVar3, 1);
				}
			}
			break;
		
		case 0x000003EE:
			Call_Loc(uParam10);
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
						Function_284(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				*iParam2 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(uParam11);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					Function_282();
					if (!IS_OBJECT_VALID(iParam2->f_16))
					{
						HUD_ENABLE(true);
					}
					else
					{
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(uParam12);
				if (StackVal)
				{
					Function_281(1);
					if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
					{
						DECOR_REMOVE(Global_34573, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(iParam2->f_20))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam2->f_20))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam2->f_20);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam2->f_20))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam2->f_20);
						}
						DESTROY_VOLUME(iParam2->f_20);
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
					*iParam2 = 1000;
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
				Call_Loc(uParam13);
				if (StackVal)
				{
					Call_Loc(uParam11);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam2 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam4 == 99) && !Function_289(iParam3))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam2 = 1105;
			break;
	}
	return 0;
}

int Function_585() //Position: 0x1F1D1 / 127441
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[06]), 1, true, 1);
	iLocal_1045 = 1;
	return 1;
}

int Function_586() //Position: 0x1F1FB / 127483
{
	Function_302(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_587() //Position: 0x1F20F / 127503
{
	if (!iLocal_1045)
	{
		Function_569();
	}
	return 1;
}

int Function_588() //Position: 0x1F220 / 127520
{
	bool bVar0;
	
	bVar0 = CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA();
	switch (bVar0)
	{
		case 0x00000000:
			FIRE_PROJECTILE(Global_34573, "base_pistol", 0,0001f, &Local_4 + 1964[06], &Local_4 + 1964[16]);
			CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			Function_232(&bLocal_988);
			break;
		
		case 0x00000001:
			FIRE_PROJECTILE(Global_34573, "base_pistol", 0,0001f, &Local_4 + 1964[26], &Local_4 + 1964[36]);
			CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			Function_232(&bLocal_988);
			break;
		
		case 0x00000002:
			FIRE_PROJECTILE(Global_34573, "base_pistol", 0,0001f, &Local_4 + 1964[46], &Local_4 + 1964[56]);
			CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			Function_232(&bLocal_988);
			break;
		
		case 0xFFFFFFFF:
			break;
		
		default:
			LOG_ERROR("Invalid cutscene event given!");
			CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			break;
	}
	if (!iLocal_1047)
	{
		if (Function_350(&bLocal_988) < 10.0f)
		{
			Function_212(bLocal_953[0]);
			Function_212(bLocal_953[1]);
			Function_212(bLocal_953[2]);
			Function_546();
			iLocal_1047 = 1;
		}
	}
	ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	return 1;
}

int Function_589() //Position: 0x1F357 / 127831
{
	if (!iLocal_1058)
	{
		if (Function_350(&bLocal_988) < 0,5f)
		{
			Function_590();
		}
	}
	if (!iLocal_1059)
	{
		if (STREAMING_IS_ACTOR_LOADED(558, 4294967295))
		{
			GIVE_WEAPON_TO_ACTOR(bLocal_934, 5, false, 1, 1);
			iLocal_1059 = 1;
		}
	}
	return 1;
}

void Function_590() //Position: 0x1F396 / 127894
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	if (!IS_ACTOR_VALID(bLocal_935))
	{
		LOG_ERROR("ChickenStartPath called while chicken is invalid!");
	}
	GET_PATH_POINT(bLocal_957, false, &vVar0);
	GET_PATH_POINT(bLocal_957, true, &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vVar3, StackVal) };
	TELEPORT_ACTOR_WITH_HEADING(bLocal_935, vVar0, UNK_0x9C40E671(&vVar6), 1, true, 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_935, false);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_935, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_935, 0);
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_935, false);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_935, 0);
	if (ACTOR_IS_HIDDEN_BY_CUTSCENE(bLocal_935))
	{
		CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_935);
	}
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_935, bLocal_957, 3, 1, 0, 0, false);
	iLocal_1058 = 1;
	return;
}

int Function_591() //Position: 0x1F453 / 128083
{
	if (STREAMING_IS_WORLD_LOADED() && Function_332())
	{
		bLocal_953[0] = CREATE_PROP_IN_LAYOUT(bLocal_653, "LeftCSBottle", "$/fragments/p_gen_bottle02x", *(&Local_4 + 1888[06]), *(&Local_4 + 1888[06] + 12), 0);
		bLocal_953[1] = CREATE_PROP_IN_LAYOUT(bLocal_653, "CenterCSBottle", "$/fragments/p_gen_bottle02x", *(&Local_4 + 1888[16]), *(&Local_4 + 1888[16] + 12), 0);
		bLocal_953[2] = CREATE_PROP_IN_LAYOUT(bLocal_653, "RightCSBottle", "$/fragments/p_gen_bottle02x", *(&Local_4 + 1888[26]), *(&Local_4 + 1888[26] + 12), 0);
		Function_232(&bLocal_988);
		return 1;
	}
	if (Function_350(&bLocal_988) < 2.0f)
	{
		Function_232(&bLocal_988);
	}
	return 0;
}

int Function_592() //Position: 0x1F573 / 128371
{
	if ((((STREAMING_IS_WORLD_LOADED() && Function_332()) && Function_593()) && Function_357(Global_30693[0])) && Function_571())
	{
		Function_327();
		bLocal_935 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 1016, -2725,604f, 32,68447f, 4258,396f, 0.0f, 109,3097f, 0.0f);
		if (Function_321(bLocal_935, 1))
		{
			SET_ACTOR_INVULNERABILITY(bLocal_935, true);
			AI_IGNORE_ACTOR(bLocal_935);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_935, false);
			TASK_STAND_STILL(bLocal_935, -1.0f, 1, 0);
		}
		Function_535();
		Function_534(&bLocal_936);
		Function_570();
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_934, *(&Local_4 + 892[56]), 1, true, 1);
		TASK_STAND_STILL(bLocal_934, -1.0f, 0, 0);
		if (Function_321(bLocal_938, 1))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_938, *(&Local_4 + 892[106]), 1, true, 1);
			TASK_STAND_STILL(bLocal_938, -1.0f, 0, 0);
		}
		if (!IS_ACTOR_VALID(bLocal_939))
		{
			Function_583();
			bLocal_939 = (*&Local_4 + 584)[02];
			ACCESSORIZE_HORSE(bLocal_939, 3);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_939, 0.0f);
			DECOR_SET_BOOL(bLocal_939, "bNoInjuryEjection", true);
			Function_425(&(Local_773[117]), bLocal_939, "Gunslinger_horse", 0, 0x5f5e100, 1);
			TASK_STAND_STILL(bLocal_939, -1.0f, 1, 0);
		}
		Function_232(&bLocal_988);
		return 1;
	}
	if (Function_350(&bLocal_988) < 2.0f)
	{
		Function_232(&bLocal_988);
	}
	return 0;
}

int Function_593() //Position: 0x1F6DD / 128733
{
	if (!Function_310(&bLocal_698))
	{
		return 0;
	}
	return 1;
}

int Function_594() //Position: 0x1F6F0 / 128752
{
	float fVar0;
	
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[06]), 1, true, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_653, "Cutscene01Vol02", 2, -2741,321f, 32,145f, 4297,811f, 0.0f, 61,878f, 0.0f, 9,7f, 4,401f, 11,156f);
	Function_346(StackVal, StackVal, bLocal_653, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[7]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[1]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 760)[1]);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 760)[1], 15);
	Function_232(&bLocal_988);
	return 1;
}

int Function_595() //Position: 0x1F7A8 / 128936
{
	float fVar0;
	
	Function_599();
	iLocal_1045 = 0;
	Function_348(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_653, "Cutscene01Vol01a", 2, -2709,677f, 33,315f, 4248,861f, 0.0f, 29,878f, 0.0f, 51,535f, 4,401f, 20,311f);
	Function_346(StackVal, StackVal, bLocal_653, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	Function_596();
	Function_232(&bLocal_988);
	return 1;
}

void Function_596() //Position: 0x1F822 / 129058
{
	vector3 vVar0[33];
	vector3 vVar100;
	int iVar103;
	
	vVar100 = { 0.0f, 0.0f, -1.0f };
	vVar0[03] = { 17,42885f, 0,5794648f, 0,8136859f };
	vVar0[13] = { 17,38322f, 0,6024109f, 0,6626224f };
	vVar0[23] = { 17,31449f, 0,6115423f, 0,3895724f };
	vVar0[33] = { 17,23024f, 0,6243848f, -0,02260362f };
	vVar0[43] = { 17,23092f, 0,6368651f, -0,451795f };
	vVar0[53] = { 17,21263f, 0,6521536f, -1,015109f };
	vVar0[63] = { 17,0533f, 0,6572071f, -1,404063f };
	vVar0[73] = { 16,77116f, 0,6555124f, -1,724398f };
	vVar0[83] = { 16,65177f, 0,6385251f, -1,956773f };
	vVar0[93] = { 16,70936f, 0,6734279f, -2,251606f };
	vVar0[103] = { 16,9376f, 0,686588f, -2,586254f };
	vVar0[113] = { 17,34337f, 0,7085953f, -2,980505f };
	vVar0[123] = { 17,74304f, 0,7159209f, -3,379117f };
	vVar0[133] = { 18,19065f, 0,7763395f, -4,414411f };
	vVar0[143] = { 18,52858f, 0,8267609f, -5,047154f };
	vVar0[153] = { 19,21733f, 0,8158041f, -5,524431f };
	vVar0[163] = { 19,96884f, 0,8289587f, -5,918071f };
	vVar0[173] = { 20,384f, 0,8332762f, -5,986698f };
	vVar0[183] = { 20,85136f, 0,8225191f, -5,480697f };
	vVar0[193] = { 21,07889f, 0,8099104f, -4,962402f };
	vVar0[203] = { 21,27778f, 0,7887797f, -4,138159f };
	vVar0[213] = { 21,18196f, 0,7893295f, -3,46963f };
	vVar0[223] = { 20,01147f, 0,7286519f, -2,713439f };
	vVar0[233] = { 19,17324f, 0,7402518f, -2,744792f };
	vVar0[243] = { 18,43091f, 0,7626163f, -3,387514f };
	vVar0[253] = { 18,04757f, 0,7645865f, -3,961611f };
	vVar0[263] = { 17,80935f, 0,7886862f, -4,625106f };
	vVar0[273] = { 17,98495f, 0,8130674f, -5,297006f };
	vVar0[283] = { 18,5341f, 0,8424538f, -6,121916f };
	vVar0[293] = { 18,79133f, 0,8665956f, -6,917522f };
	vVar0[303] = { 18,60849f, 0,8870133f, -7,598661f };
	vVar0[313] = { 18,38969f, 0,9041262f, -8,271118f };
	vVar0[323] = { 18,54358f, 0,9334065f, -9,102202f };
	Function_598(&vVar100, 32,5f);
	vVar100 = { StackVal, StackVal, Function_598(&vVar100, 32,5f) };
	iVar103 = 0;
	while (iVar103 <= vVar0)
	{
		UNK_0x141201A3(-2710,05f, 31,895f, 4243,7f, vVar100, &(vVar0[iVar1033]));
		iVar103++;
	}
	bLocal_957 = Function_597(bLocal_653, &vVar0);
	return;
}

bool Function_597(var uParam0, int iParam1) //Position: 0x1FB6C / 129900
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = CREATE_PATH_IN_LAYOUT(uParam0, Function_53(), *iParam1);
	iVar0 = 0;
	while (iVar0 < (*iParam1 - 1))
	{
		ADD_POINT_TO_PATH(iVar1, *iParam1[iVar03]);
		iVar0++;
	}
	return iVar1;
}

vector3 Function_598(var uParam0, bool bParam1) //Position: 0x1FBA8 / 129960
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

void Function_599() //Position: 0x1FBC2 / 129986
{
	if (!Function_289(&Local_654))
	{
		Function_343(&bLocal_698, 1016, 3, 0);
	}
	return;
}

void Function_600() //Position: 0x1FBDE / 130014
{
	Function_316(&bLocal_661, "gun01", 10, 0);
	Function_316(&bLocal_661, "custom/stand_ambient", 8, 0);
	Function_316(&bLocal_661, "custom/hold_hostage", 8, 0);
	Function_316(&bLocal_661, "custom/comp_waiting", 8, 0);
	Function_316(&bLocal_661, "custom/holster_spin", 8, 0);
	Function_316(&bLocal_661, "dead_ground_male", 5, 0);
	Function_316(&bLocal_661, "hold_hostage_male", 5, 0);
	Function_316(&bLocal_661, "comp_waiting", 5, 0);
	Function_316(&bLocal_661, "gped_ptl", 5, 0);
	Function_316(&bLocal_661, "holster_spin", 5, 0);
	Function_316(&bLocal_661, "hold_hostage", 1, 0);
	Function_316(&bLocal_661, "p_gen_chair01x", 0, 0);
	Function_316(&Local_1081 + 4, "p_gen_sackMoney01x", 0, 0);
	Function_316(&Local_1081 + 4, "p_gen_crate07x", 0, 0);
	Function_316(&Local_1081 + 4, "p_gen_crate06x", 0, 0);
	REQUEST_ANIM_SET("smoking_stand_gped", 0);
	return;
}

void Function_601(int iParam0, bool bParam1) //Position: 0x1FD97 / 130455
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_607(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_289(iParam0))
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
	if (!Function_289(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_203();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_250();
	Function_283();
	Function_248("");
	Function_606(0);
	Function_605();
	Function_196();
	Function_195();
	ENABLE_JOURNAL_REPLAY(0);
	Function_604();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_362(0, 0x40400000);
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
	Function_603(13);
	Function_603(14);
	Function_603(25);
	Function_603(24);
	Function_603(12);
	Function_603(27);
	Function_603(26);
	Function_603(15);
	Function_602();
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

void Function_602() //Position: 0x202CC / 131788
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

void Function_603(int iParam0) //Position: 0x20340 / 131904
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_604() //Position: 0x20360 / 131936
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

void Function_605() //Position: 0x2039D / 131997
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_606(int iParam0) //Position: 0x203B1 / 132017
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_199())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_607(int iParam0, int iParam1) //Position: 0x203E6 / 132070
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
			Function_608(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_608(int iParam0) //Position: 0x20468 / 132200
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

void Function_609() //Position: 0x204B6 / 132278
{
	return;
}

bool Function_610(int iParam0) //Position: 0x204BC / 132284
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
			Function_611(iParam0, 1);
			return 1;
		}
	}
	Function_611(iParam0, 0);
	return 0;
}

void Function_611(int iParam0, bool bParam1) //Position: 0x20543 / 132419
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

bool Function_612(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x20567 / 132455
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
		Function_611(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_631(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_630(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_630(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_616(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_611(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_615(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_614(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_615(&bVar17);
														strcpy(&Var18, "", 64);
														Function_613(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_248(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_614(StackVal, iParam2, bVar17);
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
	Function_611(iParam2, 0);
	return 0;
}

void Function_613(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x20900 / 133376
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

void Function_614(var uParam0, int iParam1, bool bParam2) //Position: 0x209EB / 133611
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

void Function_615(bool bParam0) //Position: 0x20A61 / 133729
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_616(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x20A83 / 133763
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
			return Function_627(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_620(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_627(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_617(iParam0, bVar2);
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
						bVar2 = Function_627(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_617(iParam0, bVar2);
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

var Function_617(int iParam0, bool bParam1) //Position: 0x20BCD / 134093
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
				bParam1 = Function_619(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_618(16);
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
				bParam1 = Function_619(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_618(256);
			}
		}
	}
	return bParam1;
}

bool Function_618(int iParam0) //Position: 0x20D00 / 134400
{
	return 2 | iParam0;
}

int Function_619(int iParam0) //Position: 0x20D0A / 134410
{
	return 4 | iParam0;
}

int Function_620(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x20D14 / 134420
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
				iParam3 = Function_626(iParam0, iParam1, bParam4);
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
			return Function_618(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_621(iParam0, iParam1, 0, bParam4);
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
			return Function_618(16);
		}
	}
	return 0;
}

int Function_621(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x20DC6 / 134598
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_625(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_624(iVar0, 3, 1, bParam3))
			{
				if (!Function_630(iParam0, 8, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_624(iVar0, 2, 1, bParam3))
			{
				if (!Function_630(iParam0, 32, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_624(iVar0, 1, 1, bParam3))
			{
				if (!Function_630(iParam0, 64, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_624(iVar0, 3, 1, bParam3))
			{
				if (!Function_630(iParam0, 128, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_624(iVar0, 1, 1, bParam3))
			{
				if (!Function_630(iParam0, 1024, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_624(iVar0, 1, 1, bParam3))
			{
				if (!Function_630(iParam0, 1024, 1))
				{
					return Function_623(64, 1024, bParam2);
				}
			}
			return Function_622(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_622(int iParam0, int iParam1, bool bParam2) //Position: 0x20F80 / 135040
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_623(int iParam0, int iParam1, bool bParam2) //Position: 0x20F95 / 135061
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_624(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x20FAA / 135082
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_625(int iParam0) //Position: 0x20FC7 / 135111
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

int Function_626(var uParam0, int iParam1, bool bParam2) //Position: 0x21036 / 135222
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_625(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_624(iVar0, 3, 1, bParam2))
			{
				if (!Function_630(uParam0, 8, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000009:
			if (Function_624(iVar0, 3, 1, bParam2))
			{
				if (!Function_630(uParam0, 8, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x0000006E:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(uParam0, 16, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x0000005B:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(uParam0, 32, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000031:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 64, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000007:
			if (Function_624(iVar0, 3, 1, bParam2))
			{
				if (!Function_630(uParam0, 128, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000008:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(uParam0, 256, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000014:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 512, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000018:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 512, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000057:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 1024, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000058:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(uParam0, 1024, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_627(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x21251 / 135761
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
						return Function_626(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_630(iParam0, 2, 1))
					{
						return Function_619(8);
					}
					return Function_618(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_630(iParam0, 4, 1))
					{
						return Function_619(16);
					}
					return Function_618(16);
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
							return Function_621(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_630(iParam0, 2, 1))
						{
							return Function_619(128);
						}
						return Function_618(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_630(iParam0, 4, 1))
						{
							return Function_619(256);
						}
						return Function_618(256);
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
						return Function_621(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_630(iParam0, 2, 1))
					{
						return Function_619(8);
					}
					return Function_618(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_630(iParam0, 4, 1))
					{
						return Function_619(16);
					}
					return Function_618(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_629(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_630(iParam0, 2, 1))
					{
						return Function_619(8);
					}
					return Function_618(8);
				}
				if (!Function_630(iParam0, 4, 1))
				{
					return Function_619(16);
				}
				return Function_618(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_621(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_628(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_618(128);
							}
							if (!Function_630(iParam0, 2, 1))
							{
								return Function_619(8);
							}
							return Function_618(8);
						}
						if (iParam4 == 2)
						{
							if (Function_628(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_618(256);
							}
							if (!Function_630(iParam0, 4, 1))
							{
								return Function_619(16);
							}
							return Function_618(16);
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

bool Function_628(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x21510 / 136464
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

int Function_629(int iParam0, var uParam1, bool bParam2) //Position: 0x215C9 / 136649
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_625(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(iParam0, 16, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x0000005B:
			if (Function_624(iVar0, 2, 1, bParam2))
			{
				if (!Function_630(iParam0, 32, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000057:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(iParam0, 1024, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		case 0x00000058:
			if (Function_624(iVar0, 1, 1, bParam2))
			{
				if (!Function_630(iParam0, 1024, 1))
				{
					return Function_619(64);
				}
			}
			return Function_618(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_630(int iParam0, bool bParam1, bool bParam2) //Position: 0x216DD / 136925
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

int Function_631(int iParam0) //Position: 0x21705 / 136965
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

bool Function_632(bool bParam0) //Position: 0x21736 / 137014
{
	switch (bParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
	}
	return 1;
}

void Function_633(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x2176D / 137069
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

