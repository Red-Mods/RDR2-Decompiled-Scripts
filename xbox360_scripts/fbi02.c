//Decompiled with MagicRDR v1.0
//Function Count : 592
//Statics Count : 1125
//Natives Count : 797
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	struct<2773> Local_5 = { 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_795 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_802 = 99;
	iLocal_803 = 6;
	Local_804 = 1000;
	while (Function_257())
	{
		Function_212();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	DECOR_REMOVE(Global_34573, "GringoNoQuit");
	FREE_FROM_HOGTIE(Global_34573);
	if (IS_ACTOR_VALID(Global_34573))
	{
		AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_821, Global_34573, 0,5f, 0);
	}
	AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	if (IS_ACTOR_HOGTIED(bLocal_821))
	{
		FREE_FROM_HOGTIE(bLocal_821);
	}
	if (IS_ACTOR_VALID(bLocal_821))
	{
		EQUIP_ACCESSORY(bLocal_821, 0, 1);
	}
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	if (IS_ACTOR_VALID((*&Local_5 + 820)[02]))
	{
		EQUIP_ACCESSORY((*&Local_5 + 820)[02], 0, 1);
	}
	Function_211();
	Function_210();
	Function_209();
	Function_208();
	Function_204(&bLocal_875);
	Function_204(&bLocal_838);
	DISABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
	DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
	DISABLE_CHILD_SECTOR("blk_policeStation_int_01x");
	DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
	ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
	SET_DUST_LEVEL_MODIFIER(0);
	if (IS_OBJECT_VALID(bLocal_972))
	{
		if (DECOR_CHECK_EXIST(bLocal_972, "bIgnoreStuckState"))
		{
			DECOR_REMOVE(bLocal_972, "bIgnoreStuckState");
		}
	}
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1115))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1115);
	}
	HUD_CLEAR_HELP_QUEUE();
	if (IS_BLIP_VALID(bLocal_975))
	{
		REMOVE_BLIP(bLocal_975);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_821);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_822);
	Function_201(10, 1, 0, 1, 1);
	Function_200(bLocal_794);
	Function_200(Local_5);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_1116, 0);
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_1117, 0);
	Function_199();
	Function_198();
	Function_171(bLocal_812, 1, 1, 1, 1, 1, 1, 1);
	Function_204(&bLocal_831);
	Function_204(&bLocal_875);
	Function_204(&bLocal_838);
	Function_211();
	Function_210();
	Function_209();
	Function_208();
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_936))
	{
		DESTROY_ITERATOR(bLocal_936);
	}
	RELEASE_LAYOUT_REF(bLocal_794);
	if (bLocal_811)
	{
		Function_24(Local_795, 1, 0, 1, 0);
	}
	else if (bLocal_812)
	{
		Function_20(Local_795);
	}
	else
	{
		Function_2(Local_795);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x2BF / 703
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x2E0 / 736
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2FB / 763
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x31C / 796
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x332 / 818
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

void Function_7(int iParam0) //Position: 0x3CE / 974
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x3EF / 1007
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

void Function_9() //Position: 0x435 / 1077
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x44E / 1102
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x4A1 / 1185
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

struct<16> Function_12(int iParam0) //Position: 0x5C5 / 1477
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x5EA / 1514
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x60A / 1546
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x621 / 1569
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x63C / 1596
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x883 / 2179
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x8AC / 2220
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

bool Function_19(int iParam0) //Position: 0x8D0 / 2256
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x8E5 / 2277
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x903 / 2307
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

struct<16> Function_22(int iParam0) //Position: 0x9A9 / 2473
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x9D3 / 2515
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC29 / 3113
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

void Function_25() //Position: 0xD16 / 3350
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

int Function_26(int iParam0, bool bParam1) //Position: 0xD46 / 3398
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

int Function_27(int iParam0) //Position: 0xD83 / 3459
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD9D / 3485
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xDB3 / 3507
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10AA / 4266
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

void Function_31(char* cParam0, int iParam1) //Position: 0x1116 / 4374
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x114D / 4429
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

bool Function_33(var uParam0, int iParam1) //Position: 0x11C5 / 4549
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x11D8 / 4568
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

int Function_35(int iParam0) //Position: 0x1279 / 4729
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x12B6 / 4790
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12C9 / 4809
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

void Function_38(int iParam0, int iParam1) //Position: 0x14DB / 5339
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x1515 / 5397
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

bool Function_40() //Position: 0x1557 / 5463
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1560 / 5472
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

void Function_42() //Position: 0x15B1 / 5553
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

void Function_43() //Position: 0x15E4 / 5604
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

void Function_44() //Position: 0x16EA / 5866
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

void Function_45() //Position: 0x171D / 5917
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

void Function_46() //Position: 0x18AB / 6315
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

void Function_47() //Position: 0x1A5F / 6751
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1A6D / 6765
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

var Function_49() //Position: 0x1C5E / 7262
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1C73 / 7283
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D0E / 7438
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1FA9 / 8105
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

bool Function_53() //Position: 0x25D6 / 9686
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x25DE / 9694
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25EF / 9711
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x26E4 / 9956
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26FD / 9981
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2762 / 10082
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2774 / 10100
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2786 / 10118
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

int Function_61(int iParam0) //Position: 0x28B6 / 10422
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x28C5 / 10437
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x28FE / 10494
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x293B / 10555
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AD5 / 10965
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

int Function_66(bool bParam0) //Position: 0x2CEF / 11503
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2D30 / 11568
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

struct<8> Function_68() //Position: 0x2DB9 / 11705
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

struct<8> Function_69() //Position: 0x2E50 / 11856
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

void Function_70() //Position: 0x2ECF / 11983
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2EF5 / 12021
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

void Function_72() //Position: 0x30FF / 12543
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

bool Function_73(vector3 vParam0) //Position: 0x31A0 / 12704
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x31B8 / 12728
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

vector3 Function_75() //Position: 0x329F / 12959
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x32A8 / 12968
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x32B7 / 12983
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x32CD / 13005
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3394 / 13204
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x33B1 / 13233
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

bool Function_81(int iParam0) //Position: 0x388D / 14477
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x38A3 / 14499
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x38C2 / 14530
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x38DC / 14556
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3943 / 14659
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

void Function_86() //Position: 0x3B63 / 15203
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3BE3 / 15331
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3F35 / 16181
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

int Function_89(int iParam0) //Position: 0x3FB8 / 16312
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3FD2 / 16338
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x4000 / 16384
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x429C / 17052
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

void Function_93(int iParam0, int iParam1) //Position: 0x445F / 17503
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x46BD / 18109
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

int Function_95() //Position: 0x4842 / 18498
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

void Function_96() //Position: 0x48E1 / 18657
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

void Function_97(int iParam0) //Position: 0x4990 / 18832
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

var Function_98(int iParam0) //Position: 0x49EE / 18926
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4A7D / 19069
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

var Function_100(int iParam0, int iParam1) //Position: 0x4C1A / 19482
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

void Function_101() //Position: 0x4C5B / 19547
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4C71 / 19569
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4CB1 / 19633
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4CF1 / 19697
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4D00 / 19712
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

int Function_106(int iParam0) //Position: 0x4EC8 / 20168
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

var Function_107() //Position: 0x4F5D / 20317
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4F82 / 20354
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x543D / 21565
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

var Function_110(int iParam0) //Position: 0x5752 / 22354
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x57F5 / 22517
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

int Function_112(int iParam0, bool bParam1) //Position: 0x59F0 / 23024
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5B8C / 23436
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5C57 / 23639
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

void Function_115(int iParam0) //Position: 0x6547 / 25927
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x66B6 / 26294
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x67BC / 26556
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x67E9 / 26601
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

var Function_119(vector3 vParam0) //Position: 0x6840 / 26688
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x688E / 26766
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x68E2 / 26850
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

void Function_122() //Position: 0x6A80 / 27264
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6A86 / 27270
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6B2A / 27434
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6B7F / 27519
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6B95 / 27541
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6BE6 / 27622
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

void Function_128(var uParam0, int iParam1) //Position: 0x6C13 / 27667
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6C22 / 27682
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6C39 / 27705
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6C48 / 27720
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

void Function_132(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6D92 / 28050
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_133() //Position: 0x6DDD / 28125
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6E0A / 28170
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

int Function_135(int iParam0) //Position: 0x6FBA / 28602
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x7011 / 28689
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

var Function_137(int iParam0) //Position: 0x7036 / 28726
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x708C / 28812
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

bool Function_139(bool bParam0) //Position: 0x70EB / 28907
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x70F7 / 28919
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x7113 / 28947
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

int Function_142(int iParam0, int iParam1) //Position: 0x7165 / 29029
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

int Function_143(int iParam0, int iParam1) //Position: 0x71D8 / 29144
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7234 / 29236
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

int Function_145(int iParam0, int iParam1) //Position: 0x72A5 / 29349
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x72FF / 29439
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x75AB / 30123
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

void Function_148(int iParam0, bool bParam1) //Position: 0x783A / 30778
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

void Function_149() //Position: 0x7899 / 30873
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

var Function_150(int iParam0, int iParam1) //Position: 0x7914 / 30996
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

int Function_151(int iParam0) //Position: 0x8506 / 34054
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x851B / 34075
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x856A / 34154
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8577 / 34167
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x85C8 / 34248
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

bool Function_156(int iParam0, int iParam1) //Position: 0x8636 / 34358
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8649 / 34377
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

var Function_158(int iParam0) //Position: 0x8748 / 34632
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

bool Function_159(var uParam0, int iParam1) //Position: 0x87A0 / 34720
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x87BC / 34748
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

bool Function_161(int iParam0) //Position: 0x8813 / 34835
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x8825 / 34853
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

void Function_163(int iParam0) //Position: 0x8859 / 34905
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x88C0 / 35008
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x899D / 35229
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

void Function_166() //Position: 0x8B16 / 35606
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8B22 / 35618
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

void Function_168() //Position: 0x8B68 / 35688
{
	Function_170();
	if (IS_LAYOUTREF_VALID(Local_699))
	{
		Function_169();
	}
	return;
}

void Function_169() //Position: 0x8B7D / 35709
{
	Function_204(&Local_699 + 4);
	RELEASE_LAYOUT_REF(Local_699);
	return;
}

void Function_170() //Position: 0x8B91 / 35729
{
	Function_204(&Local_5 + 4);
	Function_204(&Local_5 + 236);
	Function_204(&Local_5 + 504);
	Function_204(&Local_5 + 520);
	Function_204(&Local_5 + 596);
	RELEASE_LAYOUT_REF(Local_5);
	return;
}

void Function_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8BC2 / 35778
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_197());
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
	Function_196();
	CLEAR_PRINTED_OBJECTIVE();
	Function_195();
	Function_193(0);
	Function_192();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_191();
	Function_190();
	Function_196();
	ENABLE_JOURNAL_REPLAY(1);
	Function_189(1);
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
		Function_188(Global_34573);
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
	Function_187(Global_28178);
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
	Function_186(1178687);
	Function_184(33039);
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
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_172() //Position: 0x8DB3 / 36275
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

void Function_173(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x8E09 / 36361
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_174((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_174(bool bParam0) //Position: 0x8E4F / 36431
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_175() //Position: 0x8E74 / 36468
{
	return Global_12976.f_156;
}

void Function_176() //Position: 0x8E7F / 36479
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

void Function_177(int iParam0, bool bParam1, int iParam2) //Position: 0x8EA9 / 36521
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

void Function_178(int iParam0) //Position: 0x8FB4 / 36788
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

bool Function_179() //Position: 0x9033 / 36915
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

void Function_180() //Position: 0x9090 / 37008
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

void Function_181() //Position: 0x90B6 / 37046
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

void Function_182(int iParam0) //Position: 0x90DC / 37084
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_183(int iParam0) //Position: 0x90F9 / 37113
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_184(int iParam0) //Position: 0x910C / 37132
{
	Function_185(&Global_28842, iParam0);
	return;
}

void Function_185(var uParam0, int iParam1) //Position: 0x911A / 37146
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_186(bool bParam0) //Position: 0x9135 / 37173
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_187(int iParam0) //Position: 0x9162 / 37218
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

void Function_188(bool bParam0) //Position: 0x9229 / 37417
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

void Function_189(bool bParam0) //Position: 0x92A5 / 37541
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

void Function_190() //Position: 0x9319 / 37657
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

void Function_191() //Position: 0x935A / 37722
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

void Function_192() //Position: 0x939B / 37787
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_193(int iParam0) //Position: 0x93AF / 37807
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_194())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_194() //Position: 0x93EB / 37867
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

void Function_195() //Position: 0x9410 / 37904
{
	Global_8722 = 0.0f;
	return;
}

void Function_196() //Position: 0x941A / 37914
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

int Function_197() //Position: 0x9445 / 37957
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_198() //Position: 0x945F / 37983
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

void Function_199() //Position: 0x9579 / 38265
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_200(bool bParam0) //Position: 0x9582 / 38274
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

int Function_201(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x95DA / 38362
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
		Function_203(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_202(StackVal);
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

void Function_202(bool bParam0) //Position: 0x98F8 / 39160
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

void Function_203(bool bParam0) //Position: 0x9924 / 39204
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_204(bool bParam0) //Position: 0x9939 / 39225
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_205(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_205(var uParam0, int iParam1) //Position: 0x995F / 39263
{
	if (Function_207(uParam0[iParam13], 4))
	{
		if (Function_207(uParam0[iParam13], 1))
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
			Function_206(uParam0[iParam13], 1);
			Function_206(uParam0[iParam13], 2);
			Function_206(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_206(var uParam0, int iParam1) //Position: 0x9A8D / 39565
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_207(int iParam0, int iParam1) //Position: 0x9AA7 / 39591
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_208() //Position: 0x9AC4 / 39620
{
	Function_204(&Local_5 + 596);
	return;
}

void Function_209() //Position: 0x9AD2 / 39634
{
	Function_204(&Local_5 + 520);
	return;
}

void Function_210() //Position: 0x9AE0 / 39648
{
	Function_204(&Local_5 + 504);
	return;
}

void Function_211() //Position: 0x9AEE / 39662
{
	Function_204(&Local_5 + 236);
	return;
}

void Function_212() //Position: 0x9AFB / 39675
{
	var uVar0[9];
	int iVar10;
	
	if (Function_256())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02";
		uVar0[4] = "Stage 03";
		uVar0[5] = "Stage 04";
		uVar0[6] = "Last Stage";
		uVar0[7] = "Roll the logs";
		uVar0[8] = "end cutscene";
		iVar10 = Function_242(&uLocal_814, &uVar0, &Local_795 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_241(&iVar10, &iLocal_802, &iLocal_803, &Local_804))
		{
			Function_234();
			Function_233();
		}
		if (iVar10 == 0)
		{
			Function_234();
			Function_233();
			Function_232(&bLocal_811, 8);
		}
		else if (iVar10 == 1)
		{
			Function_234();
			Function_233();
			Function_228(iLocal_802);
			Function_224(StackVal, StackVal, 5, &bLocal_812, &iLocal_802, Function_230(iLocal_802), Function_228(iLocal_802), 0);
		}
		else if (iVar10 == 2)
		{
			Function_234();
			Function_233();
			Function_219(&bLocal_813, 4);
		}
		else if (iVar10 == 3)
		{
			Function_234();
			Function_233();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217();
			Function_215(&iLocal_937);
			iLocal_802 = 1;
			iLocal_803 = 0;
			Local_804 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_234();
			Function_233();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217();
			Function_215(&iLocal_937);
			iLocal_802 = 2;
			iLocal_803 = 0;
			Local_804 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_234();
			Function_233();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217();
			Function_215(&iLocal_937);
			iLocal_802 = 3;
			iLocal_803 = 0;
			Local_804 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_234();
			Function_233();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_215(&iLocal_937);
			iLocal_802 = 101;
			iLocal_803 = 0;
			Local_804 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_234();
			Function_233();
			Function_214();
		}
		else if (iVar10 == 8)
		{
			Function_234();
			Function_233();
			Function_213(&Local_5 + 1136);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_5 + 808)[02], *(&Local_5 + 2496), 1, true, 1);
			TASK_FOLLOW_PATH_FROM_POINT((*&Local_5 + 820)[02], Local_5.f_2748, 2, 28, 0, 0, 1, 0);
			iLocal_803 = 9;
		}
	}
	return;
}

void Function_213(var uParam0) //Position: 0x9D57 / 40279
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

void Function_214() //Position: 0x9D9E / 40350
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	vVar9 = { 0.0f, 0.0f, 0.0f };
	GET_OBJECT_AXIS((*&Local_5 + 808)[02], &vVar0, 0);
	GET_OBJECT_AXIS((*&Local_5 + 808)[02], &vVar3, 2);
	GET_OBJECT_AXIS((*&Local_5 + 808)[02], &vVar6, 1);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, Vector(vVar3, StackVal, StackVal) * Vector(0,25f, 0,25f, 0,25f), StackVal) * Vector(-0,07f, -0,07f, -0,07f), StackVal, StackVal), StackVal) * Vector(-0,07f, -0,07f, -0,07f), StackVal, StackVal) };
	SET_PROP_ANGULAR_VELOCITY_DEGS(GET_PHYSINST_FROM_ACTOR((*&Local_5 + 808)[02]), &vVar9);
	GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(bLocal_972));
	return;
}

void Function_215(int iParam0) //Position: 0x9E2F / 40495
{
	Function_216(iParam0, 0.0f);
	return;
}

void Function_216(int iParam0, float fParam1) //Position: 0x9E3B / 40507
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_217() //Position: 0x9E5C / 40540
{
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
	{
		GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(Global_34573));
	}
	Function_204(&bLocal_838);
	Function_218(0);
	AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING((*&Local_5 + 820)[02], 1);
	return;
}

void Function_218(int iParam0) //Position: 0x9E8E / 40590
{
	iParam0 = iParam0;
	return;
}

void Function_219(bool bParam0, int iParam1) //Position: 0x9E98 / 40600
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_220(iParam1);
	*bParam0 = 1;
	return;
}

void Function_220(int iParam0) //Position: 0x9EBB / 40635
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_223("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_222(2) || Function_222(8)) || Function_222(9)) || Function_222(10))
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
		Function_223("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_223("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_223("");
	}
	else if (iParam0 == 8)
	{
		Function_221();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_221();
	}
	return;
}

void Function_221() //Position: 0x9FB2 / 40882
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_222(int iParam0) //Position: 0x9FBE / 40894
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

void Function_223(bool bParam0) //Position: 0x9FF4 / 40948
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_224(int iParam0, bool bParam1, bool bParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA05E / 41054
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*bParam2 != 100)
	{
		Function_225(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_220(iParam0);
		*bParam1 = 1;
		*bParam2 = 100;
	}
}

void Function_225(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA09B / 41115
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_227(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_226(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_226(int iParam0) //Position: 0xA11E / 41246
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

var Function_227(vector3 vParam0, bool bParam3) //Position: 0xA5CC / 42444
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

vector3 Function_228(bool bParam0) //Position: 0xA637 / 42551
{
	Function_229(bParam0 + 1);
	return StackVal, StackVal, Function_229(bParam0 + 1);
}

vector3 Function_229(bool bParam0) //Position: 0xA644 / 42564
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal, StackVal, *(&Local_5 + 1404[06]);
			break;
		
		case 0x00000001:
			return StackVal, StackVal, *(&Local_5 + 1460[06]);
			break;
		
		case 0x00000002:
			return StackVal, StackVal, *(&Local_5 + 1588[06]);
			break;
		
		case 0x00000003:
			return StackVal, StackVal, *(&Local_5 + 1692[16]);
			break;
		
		case 0x00000004:
		case 0x00000065:
			return StackVal, StackVal, *(&Local_5 + 2392);
			break;
	}
	PRINTSTRING("Tried to pass in SID ");
	PRINTINT(bParam0);
	PRINTNL();
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal, StackVal, *(&Local_5 + 1404[06]);
}

int Function_230(bool bParam0) //Position: 0xA749 / 42825
{
	return Function_231(bParam0 + 1);
}

int Function_231(bool bParam0) //Position: 0xA756 / 42838
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
		case 0x00000065:
			return StackVal;
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal;
}

void Function_232(bool bParam0, int iParam1) //Position: 0xA844 / 43076
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_220(iParam1);
	*bParam0 = 1;
	return;
}

void Function_233() //Position: 0xA867 / 43111
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_234() //Position: 0xA87C / 43132
{
	Function_236();
	Function_235(10, 3);
	return;
}

void Function_235(int iParam0, int iParam1) //Position: 0xA88B / 43147
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

void Function_236() //Position: 0xA9C2 / 43458
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_240())
	{
		Function_239(10, 3);
	}
	else
	{
		Function_237();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_237() //Position: 0xAA0D / 43533
{
	Function_238(25, 2);
	return;
}

void Function_238(int iParam0, int iParam1) //Position: 0xAA19 / 43545
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

void Function_239(int iParam0, int iParam1) //Position: 0xAC17 / 44055
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

bool Function_240() //Position: 0xAD4E / 44366
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

bool Function_241(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xADB5 / 44469
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_234();
			Function_233();
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
		Function_223("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAE5B / 44635
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_255(&Var15, &Var0);
	uVar20 = Function_254(*uParam1, &Var15);
	Function_253(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_252(uParam0, uVar20);
	Function_250(StackVal, uParam0, Var15.f_12);
	Function_248(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_247(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_244(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_243(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_243(int iParam0, int iParam1, int iParam2) //Position: 0xAF22 / 44834
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

bool Function_244(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xAF7E / 44926
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
				Function_246(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_246(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_243(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_245(bParam1->f_32);
	}
	else
	{
		Function_245(bParam1->f_32);
	}
	return 0;
}

void Function_245(bool bParam0) //Position: 0xB104 / 45316
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

void Function_246(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB13E / 45374
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

var Function_247(int iParam0, var uParam1, int iParam2) //Position: 0xB1EC / 45548
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_248(var uParam0, int iParam1, int iParam2) //Position: 0xB210 / 45584
{
	switch (Function_249())
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

int Function_249() //Position: 0xB2AC / 45740
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

void Function_250(var uParam0, int iParam1, int iParam2) //Position: 0xB2E8 / 45800
{
	switch (Function_251(uParam0))
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

int Function_251(bool bParam0) //Position: 0xB380 / 45952
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

var Function_252(var uParam0, int iParam1) //Position: 0xB4CB / 46283
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

void Function_253(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB61A / 46618
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

var Function_254(int iParam0, int iParam1) //Position: 0xB6AD / 46765
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_255(var uParam0, var uParam1) //Position: 0xB6C7 / 46791
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

bool Function_256() //Position: 0xB715 / 46869
{
	return Global_30920;
}

bool Function_257() //Position: 0xB71E / 46878
{
	if (IS_EXITFLAG_SET())
	{
		Function_228(iLocal_802);
		Function_224(StackVal, StackVal, 4, &bLocal_812, &iLocal_802, Function_230(iLocal_802), Function_228(iLocal_802), 0);
		return 0;
	}
	Function_591(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_795, iLocal_802, iLocal_803, &bLocal_813, &bLocal_811, &bLocal_812);
	Function_589();
	Function_588(4);
	if (iLocal_802 == 99 && iLocal_802 == 100)
	{
		Function_587();
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_228(iLocal_802);
			Function_224(StackVal, StackVal, 1, &bLocal_812, &iLocal_802, Function_230(iLocal_802), Function_228(iLocal_802), 0);
			return 1;
		}
		if (Function_586(2048))
		{
			Function_228(iLocal_802);
			Function_224(StackVal, StackVal, 3, &bLocal_812, &iLocal_802, Function_230(iLocal_802), Function_228(iLocal_802), 0);
			return 1;
		}
		if (Function_566(&Local_1022, &uLocal_982, &uLocal_1108, bLocal_936, iLocal_964))
		{
			if (Function_564(&uLocal_1108))
			{
				Function_228(iLocal_802);
				Function_224(StackVal, StackVal, 5, &bLocal_812, &iLocal_802, Function_230(iLocal_802), Function_228(iLocal_802), 0);
				return 1;
			}
		}
	}
	switch (iLocal_802)
	{
		case 0x00000063:
			Function_519();
			break;
		
		case 0x00000000:
			Function_456();
			break;
		
		case 0x00000001:
			Function_425();
			break;
		
		case 0x00000002:
			Function_401();
			break;
		
		case 0x00000003:
			Function_343();
			break;
		
		case 0x00000004:
		case 0x00000065:
			Function_260();
			break;
		
		case 0x00000064:
			if (Function_259(&bLocal_812))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_258(&iLocal_802, &iLocal_803, &Local_804))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_813)
	{
		Function_219(&bLocal_813, 4);
		Function_1();
		return 0;
	}
	if (bLocal_811)
	{
		Function_232(&bLocal_811, 8);
		Function_1();
		return 0;
	}
	if (bLocal_812 && iLocal_802 == 100)
	{
		Function_228(iLocal_802);
		Function_224(StackVal, StackVal, 5, &bLocal_812, &iLocal_802, Function_230(iLocal_802), Function_228(iLocal_802), 0);
	}
	return 1;
}

bool Function_258(var uParam0, var uParam1, int iParam2) //Position: 0xB8BE / 47294
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

bool Function_259(int iParam0) //Position: 0xB8FE / 47358
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_260() //Position: 0xB911 / 47377
{
	if (iLocal_803 < 3 && iLocal_803 > 105)
	{
		Function_342((*&Local_5 + 808)[02]);
		Function_341(Local_5.f_2728);
		if (iLocal_803 <= 7 && iLocal_803 > 15)
		{
			Function_340();
		}
		if (IS_VOLUME_VALID(Local_5.f_1316))
		{
			if (IS_ACTOR_IN_VOLUME((*&Local_5 + 808)[02], Local_5.f_1316))
			{
				DESTROY_VOLUME(Local_5.f_1316);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_1136, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_5 + 820)[02], true);
				Function_337(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 15;
			}
		}
	}
	switch (iLocal_803)
	{
		case 0x00000000:
			Function_333(0);
			SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			bLocal_825 = Function_332(StackVal, StackVal, *(&Local_5 + 1692[16]), 0, 1, 1);
			if (!Function_331(bLocal_825))
			{
				Function_329(&Local_795);
			}
			if (iLocal_826[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_326();
				bLocal_825 = Function_332(StackVal, StackVal, *(&Local_5 + 2392), 0, 1, 1);
				if (!Function_331(bLocal_825))
				{
					Function_329(&Local_795);
				}
				Function_317(1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_5 + 2392), 1, true, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 1;
			}
			else
			{
				Function_215(&iLocal_937);
				Function_337(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				iLocal_803 = 15;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_331(bLocal_825) || bLocal_825 != 4294967295))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_5 + 808)[02], *(&Local_5 + 2496), 1, true, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_315())
			{
				if (Function_309(&bLocal_875))
				{
					if (Function_308((*&Local_5 + 808)[02]))
					{
						if (Function_306(Global_34573))
						{
							Function_229(iLocal_802);
							Function_300(StackVal, StackVal, Function_229(iLocal_802), iLocal_802, Global_30637[0], Function_231(iLocal_802), 3);
							Function_299();
							DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
							if (HUD_IS_FADED())
							{
								HUD_FADE_IN(1.0f, 1065353216);
							}
							TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_5 + 820)[02]);
							START_VEHICLE((*&Local_5 + 808)[02]);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_5 + 820)[02], true);
							TOGGLE_COVER_PROPS(0);
							MEMORY_ALLOW_SHOOTING(bLocal_821, false);
							MEMORY_ALLOW_SHOOTING((*&Local_5 + 820)[02], false);
							DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_821);
							DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
							Function_294(&(Local_1022[017]), bLocal_821, "FBI_Ross", 1, 0x5f5e100, 1);
							Function_294(&(Local_1022[117]), (*&Local_5 + 820)[02], "FBI_Fordham", 1, 0x5f5e100, 1);
							Function_294(&(Local_1022[217]), Local_5.f_992, "AmericanSoldier", 1, 0x5f5e100, 1);
							Function_293(&(Local_1022[217]), 3);
							Function_289(&(Local_1022[217]), 42);
							iLocal_964 = 1;
							TASK_FOLLOW_PATH_FROM_POINT((*&Local_5 + 820)[02], Local_5.f_2748, 2, 28, 0, 0, 1, 0);
							Function_215(&iLocal_937);
							iLocal_803 = 6;
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			if (!IS_GRINGO_VALID(bLocal_974))
			{
				Function_288();
			}
			break;
		
		case 0x0000000F:
			Local_804 = 1000;
			Function_274();
			TELEPORT_ACTOR(bLocal_821, &Local_5 + 2520, 1, 1, 1);
			TELEPORT_ACTOR(Global_34573, &Local_5 + 2392, 1, 1, 1);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_273(&Local_5 + 992);
			bLocal_823 = CREATE_ACTOR_IN_LAYOUT(Local_5, "fbi02_fakePlayer", GET_ACTOR_ENUM(Global_34573), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			SET_ACTOR_IN_VEHICLE(bLocal_823, (*&Local_5 + 808)[02], false);
			Function_215(&iLocal_937);
			iLocal_803 = 16;
			break;
		
		case 0x00000010:
			if (Function_270(&iLocal_937) <= 1,5f)
			{
				Function_215(&iLocal_937);
				iLocal_803 = 17;
			}
			break;
		
		case 0x00000011:
			if (IS_ACTOR_VALID(bLocal_823))
			{
				if (!Function_306(bLocal_823))
				{
					DESTROY_ACTOR(bLocal_823);
				}
			}
			if (IS_ACTOR_IN_VOLUME((*&Local_5 + 808)[02], Local_5.f_1376))
			{
				SET_TIME_WARP(0,25f, 1000.0f, 15.0f);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_804.f_16);
				Function_267();
				Function_214();
				Function_266(&Local_5 + 2368, "DynamiteExplosion", 0, 1);
				TASK_STAND_STILL((*&Local_5 + 820)[02], -1.0f, 0, 0);
				Function_215(&iLocal_937);
				Function_216(&iLocal_949, 10.0f);
				iLocal_803 = 18;
			}
			break;
		
		case 0x00000012:
			Function_264();
			if (Function_270(&iLocal_937) <= 0,6f)
			{
				CANCEL_TIME_WARP(0);
				Function_215(&iLocal_937);
				Function_216(&iLocal_949, 10.0f);
				iLocal_803 = 19;
			}
			break;
		
		case 0x00000013:
			Function_264();
			if (Function_270(&iLocal_937) <= 0,4f)
			{
				Local_804 = 1000;
				HUD_SET_FADE_COLOR(1.0f, 1.0f, 1.0f, 1.0f);
				HUD_FADE_OUT(0,8f, 1.0f, 0);
				Function_215(&iLocal_937);
				iLocal_803 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				Function_273(&Local_5 + 992);
				Function_273(&Local_5 + 1136);
				Function_262(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_804.f_16);
				DESTROY_OBJECT(Local_804.f_16);
				Function_261(Local_5.f_912);
				bLocal_811 = true;
			}
			break;
	}
	return;
}

void Function_261(bool bParam0) //Position: 0xBE35 / 48693
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (!IS_ACTOR_MOUNTED(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_262(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xBE72 / 48754
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
		Function_233();
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
	Function_263(iParam9);
}

void Function_263(bool bParam0) //Position: 0xBF62 / 48994
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

void Function_264() //Position: 0xC007 / 49159
{
	if (Function_265((*&Local_5 + 808)[02], 0) > 0,05f)
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_5 + 808)[02]), true);
	}
	else
	{
		PRINTSTRING("car speed = ");
		PRINTFLOAT(Function_265((*&Local_5 + 808)[02], 0));
		PRINTNL();
	}
	return;
}

float Function_265(bool bParam0, bool bParam1) //Position: 0xC058 / 49240
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_266(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0xC077 / 49271
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_267() //Position: 0xC093 / 49299
{
	if (!Function_268(StackVal, StackVal, Global_34573, *(&Local_5 + 2272), 5.0f))
	{
		if (MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
		{
			TELEPORT_ACTOR(Global_34573, &Local_5 + 2272, 1, 1, 1);
			TELEPORT_ACTOR(bLocal_823, &Local_5 + 2272, 1, 1, 1);
		}
	}
	return;
}

bool Function_268(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xC0D1 / 49361
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_269(bParam0);
		if (VDIST(Function_269(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_269(bool bParam0) //Position: 0xC15B / 49499
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

float Function_270(int iParam0) //Position: 0xC1C5 / 49605
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

bool Function_271(int iParam0) //Position: 0xC28D / 49805
{
	return Function_153(*iParam0, 2);
}

bool Function_272(int iParam0) //Position: 0xC29A / 49818
{
	return Function_153(*iParam0, 1);
}

void Function_273(var uParam0) //Position: 0xC2A7 / 49831
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

void Function_274() //Position: 0xC326 / 49958
{
	CANCEL_TIME_WARP(0);
	Local_804.f_16 = Function_276(Local_5, 0, 1, 0, 0);
	Function_275(Local_804.f_16, 0);
	return;
}

void Function_275(bool bParam0, bool bParam1) //Position: 0xC347 / 49991
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_276(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC35C / 50012
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 10, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "FBI02_blow_up_car", 10, 1);
	}
	Function_277(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_277(int iParam0) //Position: 0xC3DB / 50139
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_287(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_286(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_285(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_284(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_283(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_282(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 6);
	Function_281(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 7);
	Function_280(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 8);
	Function_279(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 9);
	Function_278(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 1,5f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 1,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 4, 5, 0,3f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 6, 7, 0,3f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 8, 9, 1,2f, 4, 0);
	return;
}

void Function_278(int iParam0) //Position: 0xC4C7 / 50375
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,14928f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -181,0103f, 125,3636f, 1727,742f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,144037f, -0,794752f, 1,479853f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_279(int iParam0) //Position: 0xC535 / 50485
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,59877f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -180,2914f, 125,2682f, 1729,521f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,124462f, -0,426869f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_280(int iParam0) //Position: 0xC59F / 50591
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,05008f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -175,1508f, 124,6126f, 1726,251f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,430636f, 0,659477f, -0,982671f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_281(int iParam0) //Position: 0xC60D / 50701
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,05008f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -174,4657f, 125,0564f, 1726,685f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,447747f, 0,474279f, 0,489938f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_282(int iParam0) //Position: 0xC67B / 50811
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 44,56033f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -179,2683f, 125,2721f, 1725,44f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,283794f, -0,933792f, 0,113683f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_283(int iParam0) //Position: 0xC6E9 / 50921
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 44,56033f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -178,1153f, 124,9899f, 1727,527f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,320472f, -0,318956f, -0,614522f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_284(int iParam0) //Position: 0xC757 / 51031
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46,25515f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -179,197f, 125,4814f, 1726,458f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,099909f, -0,689374f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_285(int iParam0) //Position: 0xC7C1 / 51137
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -172,0601f, 124,9264f, 1725,607f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,145432f, 0,872368f, -0,205756f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_286(int iParam0) //Position: 0xC82F / 51247
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36,41512f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -183,4919f, 128,1906f, 1715,962f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,141874f, 1,034385f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_287(var uParam0) //Position: 0xC899 / 51353
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 36,41512f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -179,0473f, 127,9341f, 1715,992f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,15202f, 1,192513f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_288() //Position: 0xC903 / 51459
{
	var uVar0;
	
	GET_OBJECT_POSITION(Local_5.f_2772, &uVar0);
	bLocal_974 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_detonator", &uVar0, 2.0f, 0);
	if (IS_GRINGO_VALID(bLocal_974))
	{
		bLocal_824 = CREATE_ACTOR_IN_LAYOUT(Local_5, "", 471, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bLocal_824, GET_OBJECT_FROM_GRINGO(bLocal_974), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(bLocal_824, bLocal_974, "UseCase1", 4294967295, 1);
		SET_ACTOR_INVULNERABILITY(bLocal_824, true);
	}
	return;
}

void Function_289(int iParam0, int iParam1) //Position: 0xC9AE / 51630
{
	if (iParam1 != 100000000)
	{
		Function_292(iParam0, iParam1);
	}
	else
	{
		Function_290(iParam0, 1);
	}
	return;
}

void Function_290(int iParam0, bool bParam1) //Position: 0xC9CE / 51662
{
	iParam0->f_40 = 0;
	Function_291(iParam0, 2, bParam1);
	Function_291(iParam0, 4, bParam1);
	Function_291(iParam0, 8, bParam1);
	Function_291(iParam0, 16, bParam1);
	Function_291(iParam0, 32, bParam1);
	Function_291(iParam0, 64, bParam1);
	Function_291(iParam0, 128, bParam1);
	Function_291(iParam0, 256, bParam1);
	Function_291(iParam0, 512, bParam1);
	Function_291(iParam0, 1024, bParam1);
	return;
}

void Function_291(int iParam0, int iParam1, bool bParam2) //Position: 0xCA34 / 51764
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

void Function_292(int iParam0, bool bParam1) //Position: 0xCA70 / 51824
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_293(var uParam0, bool bParam1) //Position: 0xCA9B / 51867
{
	if (!IS_OBJECT_VALID(*uParam0))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_KILL_LIMIT: Fail Target object invalid!");
		return 0;
	}
	if (uParam0->f_28 != 15 || uParam0->f_28 != 8)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_KILL_LIMIT: Fail Target object type unsupported!");
		return 0;
	}
	if (bParam1 >= 0)
	{
		DECOR_SET_INT(*uParam0, "MFT_LimitHuman", bParam1);
		DECOR_SET_INT(*uParam0, "MFT_LimitHorse", bParam1);
	}
	else
	{
		if (DECOR_CHECK_EXIST(*uParam0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(*uParam0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(*uParam0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(*uParam0, "MFT_LimitHorse");
		}
	}
	return 1;
}

int Function_294(float fParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xCBF6 / 52214
{
	if (!Function_298(fParam0, uParam1))
	{
		return 0;
	}
	if (!Function_297(fParam0, bParam2))
	{
		return 0;
	}
	Function_296(fParam0, iParam3);
	fParam0->f_40 = 0;
	Function_295(fParam0, iParam4, iParam5);
	return 1;
}

void Function_295(var uParam0, int iParam1, int iParam2) //Position: 0xCC32 / 52274
{
	if (iParam1 != 100000000)
	{
		Function_291(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_290(uParam0, iParam2);
	}
	return;
}

void Function_296(var uParam0, int iParam1) //Position: 0xCC55 / 52309
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_297(int iParam0, bool bParam1) //Position: 0xCC61 / 52321
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

bool Function_298(int iParam0, bool bParam1) //Position: 0xCCEA / 52458
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

void Function_299() //Position: 0xCE76 / 52854
{
	if (!IS_ACTOR_RIDING_VEHICLE((*&Local_5 + 820)[02]))
	{
		SET_ACTOR_IN_VEHICLE((*&Local_5 + 820)[02], (*&Local_5 + 808)[02], false);
	}
	if (iLocal_802 == 2)
	{
		SET_ACTOR_INVULNERABILITY((*&Local_5 + 820)[02], true);
		SET_ACTOR_PROOF((*&Local_5 + 820)[02], 8);
		SET_ACTOR_PROOF((*&Local_5 + 820)[02], 16);
	}
	if (!IS_ACTOR_RIDING_VEHICLE(bLocal_821))
	{
		SET_ACTOR_IN_VEHICLE(bLocal_821, (*&Local_5 + 808)[02], true);
	}
	if (iLocal_802 == 2)
	{
		SET_ACTOR_INVULNERABILITY(bLocal_821, true);
		SET_ACTOR_PROOF(bLocal_821, 8);
		SET_ACTOR_PROOF(bLocal_821, 16);
	}
	return;
}

void Function_300(vector3 vParam0, bool bParam3, var uParam4, int iParam5, int iParam6) //Position: 0xCF05 / 52997
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
	if (bParam3 != Global_34165.f_48 && !Function_305())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_304(0);
	Function_303();
	Global_34165.f_48 = bParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_302(uParam4, iVar0, iVar1);
	Function_301();
}

void Function_301() //Position: 0xCFA2 / 53154
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

void Function_302(int iParam0, bool bParam1, bool bParam2) //Position: 0xCFE3 / 53219
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

void Function_303() //Position: 0xD149 / 53577
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_304(bool bParam0) //Position: 0xD16D / 53613
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

bool Function_305() //Position: 0xD19C / 53660
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_306(bool bParam0) //Position: 0xD1B7 / 53687
{
	if (IS_GRINGO_READY(bLocal_972))
	{
		if (!Function_307(bParam0))
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "attached"))
			{
				if (!DECOR_CHECK_EXIST(bLocal_971, "bAttemptingAttach"))
				{
					DECOR_SET_BOOL(bLocal_972, "bIgnoreStuckState", true);
					SNAP_ACTOR_TO_GRINGO(bParam0, bLocal_972, "MaximShootTruck", true, 0, 0);
					DECOR_SET_BOOL(bLocal_971, "bAttemptingAttach", true);
				}
				if (!IS_OBJECT_VALID(bLocal_972))
				{
				}
			}
		}
		else if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "attached"))
		{
			if (DECOR_CHECK_EXIST(bLocal_971, "bAttemptingAttach"))
			{
				DECOR_REMOVE(bLocal_971, "bAttemptingAttach");
			}
			if (DECOR_CHECK_EXIST(bLocal_972, "bIgnoreStuckState"))
			{
				DECOR_REMOVE(bLocal_972, "bIgnoreStuckState");
			}
			return 1;
		}
	}
	return 0;
}

bool Function_307(bool bParam0) //Position: 0xD2F0 / 54000
{
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_972)))
	{
	}
	else if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "attached"))
	{
		return 1;
	}
	return 0;
}

bool Function_308(bool bParam0) //Position: 0xD31C / 54044
{
	if (IS_ACTOR_VALID(bParam0))
	{
		bLocal_971 = FIND_OBJECT_IN_OBJECT(bParam0, "maximgun");
		if (IS_OBJECT_VALID(bLocal_971))
		{
			bLocal_972 = FIND_OBJECT_IN_OBJECT(bLocal_971, "shootbabyshoot");
			DECOR_SET_BOOL(bLocal_972, "IndefinateUse", true);
			return 1;
		}
	}
	return 0;
}

bool Function_309(bool bParam0) //Position: 0xD381 / 54145
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_314();
	iVar1 = 0;
	if (!Function_207(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_313(bParam0[iVar03], 8);
		}
		else if (Function_312())
		{
			iVar1 = 1;
			Function_313(bParam0[iVar03], 8);
		}
		Function_313(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_207(bParam0[iVar03], 4))
		{
			if (!Function_207(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_207(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_207(bParam0[03], 8) || iVar1));
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
				Function_313(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_207(bParam0[iVar03], 4))
		{
			if (!Function_207(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_313(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_313(bParam0[iVar03], 2);
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
							Function_313(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_313(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_313(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_313(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_313(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_313(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_313(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_313(bParam0[iVar03], 2);
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
	Function_310();
	return 1;
}

void Function_310() //Position: 0xD6FC / 55036
{
	if (!Function_311(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_311(int iParam0) //Position: 0xD73C / 55100
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_312() //Position: 0xD758 / 55128
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

void Function_313(var uParam0, int iParam1) //Position: 0xD783 / 55171
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_314() //Position: 0xD794 / 55188
{
	if (!Function_311(128))
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

bool Function_315() //Position: 0xD7D6 / 55254
{
	Function_316(&Local_5 + 596, 472, 2, 0);
	Function_316(&Local_5 + 596, 471, 2, 0);
	Function_316(&Local_5 + 596, 467, 2, 0);
	Function_316(&Local_5 + 596, 468, 2, 0);
	Function_316(&Local_5 + 596, 469, 2, 0);
	Function_316(&Local_5 + 596, 1196, 2, 0);
	if (Function_309(&Local_5 + 596))
	{
		return 1;
	}
	return 0;
}

var Function_316(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD83E / 55358
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_207(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_313(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_313(bParam0[iVar03], 8);
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

void Function_317(bool bParam0) //Position: 0xD90E / 55566
{
	Function_324(10, 0, 1);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 808)[02], false);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (bParam0)
	{
		if (!SQUAD_IS_VALID(Local_5.f_992))
		{
			Function_323();
		}
		if (!SQUAD_IS_VALID(Local_5.f_912))
		{
			Function_322();
		}
	}
	if (!SQUAD_IS_VALID(Local_5.f_832))
	{
		Function_321();
	}
	if (SQUAD_IS_VALID(Local_5.f_992))
	{
		if (!Function_320(Local_5.f_992))
		{
			Function_319(Local_5.f_992, Local_5.f_912);
		}
	}
	if (!ACTOR_HAS_ANIM_SET((*&Local_5 + 820)[02], "arm_veh"))
	{
		SET_ANIM_SET_FOR_ACTOR((*&Local_5 + 820)[02], "arm_veh", 1);
	}
	if (!IS_ACTOR_RIDING_VEHICLE((*&Local_5 + 820)[02]))
	{
		SET_ACTOR_IN_VEHICLE((*&Local_5 + 820)[02], (*&Local_5 + 808)[02], false);
	}
	if (!IS_ACTOR_RIDING_VEHICLE(bLocal_821))
	{
		SET_ACTOR_IN_VEHICLE(bLocal_821, (*&Local_5 + 808)[02], true);
	}
	DECOR_SET_BOOL(Global_34573, "GringoNoQuit", true);
	SET_ACTOR_IS_COMPANION((*&Local_5 + 820)[02], 1);
	DEEQUIP_ACCESSORY(bLocal_821, 0);
	DEEQUIP_ACCESSORY((*&Local_5 + 820)[02], 0);
	AI_SET_ENABLE_REACTION_VO((*&Local_5 + 820)[02], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS((*&Local_5 + 820)[02], 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_821);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
	SET_VEHICLE_EJECTION_ENABLED((*&Local_5 + 808)[02], 0);
	TASK_CLEAR((*&Local_5 + 820)[02]);
	if (SQUAD_IS_VALID(Local_5.f_992))
	{
		Function_318(Local_5.f_992);
	}
	return;
}

void Function_318(bool bParam0) //Position: 0xDA7B / 55931
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

void Function_319(bool bParam0, bool bParam1) //Position: 0xDAAD / 55981
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if ((SQUAD_GET_SIZE(bParam1) - 1) > bVar0)
		{
			ACTOR_MOUNT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0));
		}
		else
		{
			PRINTSTRING("SQUAD_SET_MOUNTED_ON_HORSESQUAD: Unable to find a mount for ");
			PRINTINT(bVar0);
			PRINTSTRING(": ");
			PRINTSTRING(GET_ACTOR_NAME(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)));
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

bool Function_320(bool bParam0) //Position: 0xDB62 / 56162
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (!IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

void Function_321() //Position: 0xDB9F / 56223
{
	Local_5.f_832 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "s1_WagonCrew"));
	(*&Local_5 + 820)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "wagonCrewS1", 641, 783,9999f, 78,30585f, 1235,043f, 0.0f, 150,3013f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 820)[02], Local_5.f_832);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
	SET_ACTOR_INVULNERABILITY((*&Local_5 + 820)[02], true);
	SET_ACTOR_FACTION((*&Local_5 + 820)[02], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 820)[02], 0.0f);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 820)[02], 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_5 + 820)[02], 0.0f);
	SET_ACTOR_PROOF((*&Local_5 + 820)[02], 16);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED((*&Local_5 + 820)[02], 0, 0);
	DECOR_SET_BOOL((*&Local_5 + 820)[02], "Warwagon_Driver", true);
	SET_ACTOR_CAN_PLAY_GESTURES((*&Local_5 + 820)[02], false);
	SET_ACTOR_FACTION((*&Local_5 + 820)[02], 20);
	UNK_0x2E84E682((*&Local_5 + 820)[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 820)[02], 7, true);
	AI_GOAL_LOOK_AT_NEUTRAL((*&Local_5 + 820)[02], -1.0f);
	return;
}

void Function_322() //Position: 0xDCC4 / 56516
{
	Local_5.f_912 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "ns1_horses"));
	(*&Local_5 + 836)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_1", 983, 428f, 108,4235f, 1581,943f, 0.0f, 81,49139f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[02], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[02], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[02], true);
	(*&Local_5 + 836)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_2", 977, 434,7123f, 108,4235f, 1582,712f, 0.0f, 102,0327f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[12], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[12], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[12], true);
	(*&Local_5 + 836)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_3", 976, 436f, 108,0798f, 1577,612f, 0.0f, 242,0061f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[22], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[22], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[22], true);
	(*&Local_5 + 836)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_4", 980, 430,0766f, 108,4235f, 1576f, 0.0f, 109,9136f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[32], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[32], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[32], true);
	(*&Local_5 + 836)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_5", 981, 426,7328f, 108,374f, 1570,115f, 0.0f, 145,7382f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[42], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[42], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[42], true);
	(*&Local_5 + 836)[52] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_6", 986, 422,2706f, 108,5547f, 1575,781f, 0.0f, 43,1324f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[52], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[52], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[52], true);
	(*&Local_5 + 836)[62] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_7", 984, 424f, 108,4235f, 1578,355f, 0.0f, -32,93537f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[62], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[62], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[62], true);
	(*&Local_5 + 836)[72] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_8", 977, 433,9545f, 108,1748f, 1572.0f, 0.0f, 229,8503f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[72], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[72], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[72], true);
	(*&Local_5 + 836)[82] = CREATE_ACTOR_IN_LAYOUT(Local_5, "s1_horse_9", 976, 430,5646f, 108,281f, 1570,394f, 0.0f, 153,125f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 836)[82], Local_5.f_912);
	ACCESSORIZE_HORSE((*&Local_5 + 836)[82], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_5 + 836)[82], true);
	return;
}

void Function_323() //Position: 0xE023 / 57379
{
	Local_5.f_992 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "USCav"));
	(*&Local_5 + 916)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav1", 376, 419,5067f, 107,6271f, 1544,783f, 0.0f, 63,21554f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[02], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[02], 41, 0,999f, 1, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_5 + 916)[02], 0.0f);
	SET_ACTOR_FACTION((*&Local_5 + 916)[02], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[02], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[02], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[02], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[02], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[02], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[02], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[02], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[02], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[02], 54, 1.0f);
	(*&Local_5 + 916)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav2", 373, 417,2692f, 107,6469f, 1545,558f, 0.0f, 283,3599f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[12], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[12], 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 916)[12], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[12], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[12], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[12], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[12], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[12], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[12], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[12], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[12], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[12], 54, 1.0f);
	(*&Local_5 + 916)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav3", 374, 417,5426f, 107,471f, 1543,789f, 0.0f, 238,0538f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[22], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[22], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 916)[22], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[22], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[22], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[22], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[22], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[22], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[22], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[22], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[22], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[22], 54, 1.0f);
	(*&Local_5 + 916)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav4", 370, 418,7441f, 107,1915f, 1542,569f, 0.0f, 206,8686f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[32], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[32], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 916)[32], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[32], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[32], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[32], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[32], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[32], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[32], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[32], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[32], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[32], 54, 1.0f);
	(*&Local_5 + 916)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav5", 375, 419,3146f, 107,0234f, 1541,096f, 0.0f, 195,0684f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[42], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[42], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 916)[42], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[42], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[42], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[42], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[42], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[42], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[42], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[42], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[42], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[42], 54, 1.0f);
	(*&Local_5 + 916)[52] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav6", 372, 417,0201f, 107,8437f, 1544,633f, 0.0f, 268,3319f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[52], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[52]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[52], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 916)[52], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[52], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[52], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[52], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[52], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[52], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[52], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[52], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[52], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[52], 54, 1.0f);
	(*&Local_5 + 916)[62] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav7", 371, 415,5003f, 107,6974f, 1543,635f, 0.0f, 255,384f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[62], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[62]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[62], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 916)[62], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[62], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[62], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[62], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[62], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[62], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[62], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[62], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[62], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[62], 54, 1.0f);
	(*&Local_5 + 916)[72] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav8", 369, 417,9794f, 107,3114f, 1541,179f, 0.0f, 200,7349f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[72], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[72]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[72], 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 916)[72], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[72], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[72], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[72], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[72], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[72], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[72], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[72], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[72], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[72], 54, 1.0f);
	(*&Local_5 + 916)[82] = CREATE_ACTOR_IN_LAYOUT(Local_5, "usCav9", 373, 417,5725f, 107,0741f, 1542,48f, 0.0f, 223,0621f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 916)[82], Local_5.f_992);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 916)[82]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 916)[82], 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 916)[82], 20);
	AI_RIDING_SET_ENABLED((*&Local_5 + 916)[82], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 916)[82], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_5 + 916)[82], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[82], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[82], 0);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 916)[82], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 916)[82], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 916)[82], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_5 + 916)[82], 54, 1.0f);
	return;
}

void Function_324(int iParam0, bool bParam1, bool bParam2) //Position: 0xE85C / 59484
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
						Function_202(bVar1);
					}
				}
				Function_325(bVar0);
			}
		}
	}
	return;
}

void Function_325(bool bParam0) //Position: 0xE953 / 59731
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

void Function_326() //Position: 0xE97F / 59775
{
	if (HUD_IS_FADED())
	{
		Function_177(1, 0, 1);
	}
	Function_182(47);
	Function_183(256);
	Function_162(16396);
	Function_327(9);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1124);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1125);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1126);
	return;
}

void Function_327(int iParam0) //Position: 0xE9B9 / 59833
{
	Function_328(&Global_28842, iParam0);
	return;
}

void Function_328(var uParam0, int iParam1) //Position: 0xE9C7 / 59847
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_329(int iParam0) //Position: 0xE9EA / 59882
{
	if (!Function_330(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_177(1, 0, 1);
		}
	}
	return;
}

bool Function_330(int iParam0) //Position: 0xEA05 / 59909
{
	return iParam0->f_20;
}

bool Function_331(bool bParam0) //Position: 0xEA0F / 59919
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

bool Function_332(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0xEA2B / 59947
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

void Function_333(bool bParam0) //Position: 0xEABB / 60091
{
	Function_334(0, 0x40400000);
	Function_191();
	Function_190();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_334(bool bParam0, float fParam1) //Position: 0xEAEF / 60143
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
	Function_336();
	Function_335();
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

void Function_335() //Position: 0xEBED / 60397
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_336() //Position: 0xEC1F / 60447
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

void Function_337(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xED1C / 60700
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
	Function_233();
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
				Function_339(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_339(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_338()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_338()));
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
	if (Function_311(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_311(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_338() //Position: 0xEFC5 / 61381
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

vector3 Function_339(bool bParam0) //Position: 0xF044 / 61508
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_340() //Position: 0xF055 / 61525
{
	if (!Function_307(Global_34573))
	{
		if (!DECOR_CHECK_EXIST(bLocal_972, "fTimeOffGun"))
		{
			DECOR_SET_FLOAT(bLocal_972, "fTimeOffGun", GET_CURRENT_GAME_TIME());
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_972, "fTimeOffGun")) < 1.0f)
		{
			if (IS_ACTOR_ALIVE(Global_34573))
			{
				DECOR_REMOVE(bLocal_972, "fTimeOffGun");
				Function_223("missionFail_playerDead");
				bLocal_812 = true;
				KILL_ACTOR(Global_34573);
			}
		}
	}
	return;
}

void Function_341(int iParam0) //Position: 0xF0F9 / 61689
{
	bool bVar0;
	
	if (!IS_ACTOR_DRIVING_VEHICLE((*&Local_5 + 820)[02]))
	{
		if (IS_ACTOR_RIDING_VEHICLE(bLocal_821))
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, (*&Local_5 + 808)[02], 0, 4, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, iParam0, 4, 0, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*&Local_5 + 820)[02], bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
		else
		{
			TASK_FOLLOW_ACTOR((*&Local_5 + 820)[02], (*&Local_5 + 808)[02]);
		}
	}
	if (!IS_ACTOR_RIDING_VEHICLE(bLocal_821))
	{
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_821, (*&Local_5 + 808)[02], 1, 4, 0);
	}
	return;
}

void Function_342(bool bParam0) //Position: 0xF17D / 61821
{
	if (!IS_VEHICLE_ENGINE_RUNNING(bParam0) || !IS_VEHICLE_ALLOWED_TO_DRIVE(bParam0))
	{
		START_VEHICLE(bParam0);
		SET_VEHICLE_ENGINE_RUNNING(bParam0, 1);
	}
	return;
}

void Function_343() //Position: 0xF19E / 61854
{
	if (iLocal_803 < 3 && iLocal_803 > 105)
	{
		Function_342((*&Local_5 + 808)[02]);
		Function_341(Local_5.f_2728);
		Function_399(StackVal, StackVal, bLocal_980, *(&Local_5 + 2248), 0x43160000, 0);
		if (iLocal_803 <= 7 && iLocal_803 > 15)
		{
			Function_340();
		}
		Function_398();
		Function_395((*&Local_5 + 1140)[02], Global_34573, bLocal_1113, 0x40c00000);
		if (IS_VOLUME_VALID(Local_5.f_1316))
		{
			if (IS_ACTOR_IN_VOLUME((*&Local_5 + 808)[02], Local_5.f_1316))
			{
				DESTROY_VOLUME(Local_5.f_1316);
				SQUAD_GOALS_CLEAR(Local_5.f_1136);
				Function_318(Local_5.f_1136);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_1136, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_5 + 820)[02], true);
				Function_215(&iLocal_937);
				iLocal_803 = 106;
			}
		}
		Function_381(Local_5.f_1136);
		Function_377((*&Local_5 + 1140)[02], Global_34573, 110.0f, "fbi02_tntWagon_1", 5.0f);
	}
	switch (iLocal_803)
	{
		case 0x00000000:
			Function_333(0);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_FBI02_STAGE4", &uLocal_1116);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_FBI02_STAGE4_DEBRIS", &uLocal_1117);
			iLocal_962 = 1;
			SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			bLocal_825 = Function_332(StackVal, StackVal, *(&Local_5 + 1692[16]), 0, 1, 1);
			if (!Function_331(bLocal_825))
			{
				Function_329(&Local_795);
			}
			if (iLocal_826[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				if (!SQUAD_IS_VALID(bLocal_980))
				{
					bLocal_980 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "looseHorses"));
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_326();
				bLocal_825 = Function_332(StackVal, StackVal, *(&Local_5 + 1692[16]), 0, 1, 1);
				if (!Function_331(bLocal_825))
				{
					Function_329(&Local_795);
				}
				Function_317(1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_5 + 1692[16]), 1, true, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 1;
			}
			else
			{
				Function_215(&iLocal_937);
				iLocal_803 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_331(bLocal_825))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_5 + 808)[02], *(&Local_5 + 1692[06]), 1, true, 1);
				Function_371(StackVal, StackVal, StackVal, StackVal, Local_5.f_992, *(&Local_5 + 1692[26]), *(&Local_5 + 1692[26] + 12), 3, 6.0f, 2.0f, 0, 0);
				Function_215(&iLocal_937);
				iLocal_803 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_315())
			{
				if (Function_309(&bLocal_875))
				{
					if (Function_308((*&Local_5 + 808)[02]))
					{
						if (Function_306(Global_34573))
						{
							Function_229(iLocal_802);
							Function_300(StackVal, StackVal, Function_229(iLocal_802), iLocal_802, Global_30637[0], Function_231(iLocal_802), 3);
							Function_299();
							DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
							Function_370(Local_5.f_992, &bLocal_980);
							Function_369();
							Function_367(Local_5.f_992, Local_5.f_1136, 2);
							SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_1136, false, 1, 4294967295);
							TASK_CROUCH(false, -1.0f);
							Function_362();
							bLocal_1113 = CREATE_EVENT_TRAP(Function_53(), 5, (*&Local_5 + 1140)[02]);
							EVENT_TRAP_ON_TARGET(bLocal_1113, (*&Local_5 + 1140)[02]);
							Function_354(Local_5.f_992, 4);
							Function_353(Local_5.f_992, (*&Local_5 + 808)[02], Local_5.f_2740, Local_5.f_2732, Local_5.f_2736, Local_5.f_2744, 6.0f, (2,3f * 12.0f), 1, 1);
							TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_5 + 820)[02]);
							START_VEHICLE((*&Local_5 + 808)[02]);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_5 + 820)[02], true);
							TOGGLE_COVER_PROPS(0);
							MEMORY_ALLOW_SHOOTING(bLocal_821, false);
							MEMORY_ALLOW_SHOOTING((*&Local_5 + 820)[02], false);
							DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_821);
							DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
							Function_294(&(Local_1022[017]), bLocal_821, "FBI_Ross", 1, 0x5f5e100, 1);
							Function_294(&(Local_1022[117]), (*&Local_5 + 820)[02], "FBI_Fordham", 1, 0x5f5e100, 1);
							Function_294(&(Local_1022[217]), Local_5.f_992, "AmericanSoldier", 1, 0x5f5e100, 1);
							Function_293(&(Local_1022[217]), 3);
							Function_289(&(Local_1022[217]), 42);
							iLocal_964 = 1;
							if (iLocal_826[2])
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_5 + 820)[02], Local_5.f_2748, 4, 0, 0, 1, false);
								Function_215(&iLocal_937);
								iLocal_803 = 6;
							}
							else
							{
								Function_215(&iLocal_937);
								iLocal_803 = 5;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (Function_351(6,867f, 117,547f, 1688,251f, -0,93f, -0,111f, 0,35f))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_5 + 820)[02], Local_5.f_2748, 4, 0, 0, 1, false);
				Function_215(&iLocal_937);
				iLocal_803 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_270(&iLocal_937) <= 1.0f || iLocal_826[2])
			{
				if (!HUD_IS_FADED())
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_5.f_1348))
					{
						vLocal_968 = { 0.0f, 0.0f, -15.0f };
						GET_OBJECT_RELATIVE_POSITION((*&Local_5 + 808)[02], vLocal_968, &vLocal_968);
						Function_350();
						Function_215(&iLocal_937);
						iLocal_803 = 7;
					}
				}
				else if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_348((*&Local_5 + 1140)[02], (*&Local_5 + 808)[02]);
			if (IS_ACTOR_VALID((*&Local_5 + 916)[02]))
			{
				SET_ACTOR_INVULNERABILITY((*&Local_5 + 916)[02], true);
			}
			Function_347((*&Local_5 + 1140)[02], Local_5.f_992);
			if (!IS_ACTOR_VALID((*&Local_5 + 1140)[02]))
			{
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_IN_MOVING_CAR_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_353(Local_5.f_992, (*&Local_5 + 808)[02], Local_5.f_2740, Local_5.f_2732, Local_5.f_2736, Local_5.f_2744, 6.0f, 0x41400000, 1, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_270(&iLocal_937) <= 7.0f)
			{
				DYNAMICMIXER_DETRIGGERSTATE(uLocal_1117, 0);
				Function_344();
				Function_215(&iLocal_937);
				iLocal_803 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_GRINGO_VALID(bLocal_974))
			{
				Function_288();
			}
			break;
		
		case 0x0000006A:
			Function_261(Local_5.f_912);
			iLocal_826[3] = 1;
			Function_215(&iLocal_937);
			iLocal_802 = 101;
			iLocal_803 = 0;
			break;
	}
	return;
}

void Function_344() //Position: 0xF821 / 63521
{
	bool bVar0;
	
	SQUAD_LEAVE((*&Local_5 + 916)[02]);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_5 + 916)[02], (*&Local_5 + 820)[02], Local_5.f_2744, -25.0f, 1, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_5 + 916)[02], 0.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_MOUNT((*&Local_5 + 916)[02]), 0.0f);
	bVar0 = Function_345(Local_5.f_992, Global_34573, 1, 0);
	SQUAD_LEAVE(bVar0);
	TASK_FOLLOW_OBJECT_ALONG_PATH(bVar0, (*&Local_5 + 820)[02], Local_5.f_2744, -20.0f, 1, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_MOUNT(bVar0), 0.0f);
	return;
}

bool Function_345(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF8A8 / 63656
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
			fVar3 = Function_346(bVar4, bParam1);
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

float Function_346(bool bParam0, bool bParam1) //Position: 0xF962 / 63842
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

void Function_347(bool bParam0, bool bParam1) //Position: 0xFA53 / 64083
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_ALIVE(bVar1))
		{
			Function_395(bParam0, bVar1, bLocal_1113, 0x40c00000);
		}
		bVar0++;
	}
	return;
}

void Function_348(bool bParam0, bool bParam1) //Position: 0xFA94 / 64148
{
	var uVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		vVar3 = { 0.0f, 0.0f, -9.0f };
		GET_OBJECT_RELATIVE_POSITION(bParam1, vVar3, &uVar0);
		TASK_GO_TO_COORD_NONSTOP(bParam0, &uVar0, 3, 3212836864);
		Function_349(bParam0);
		SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
		if (IS_OBJECT_VALID(bLocal_981))
		{
			DESTROY_OBJECT(bLocal_981);
		}
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bParam0), false);
		ACTIVATE_PHYSINST(GET_PHYSINST_FROM_ACTOR(bParam0));
		START_VEHICLE(bParam0);
		bLocal_981 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_794, Function_53(), (*&Local_5 + 1140)[02], 0.0f, 8.0f, 0.0f, 160.0f, 180.0f);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_981, "fbi02_lookAtWagon");
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_981, 1);
	}
	return;
}

void Function_349(bool bParam0) //Position: 0xFB3C / 64316
{
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, false);
	AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 0);
	AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bParam0, 0);
	TASK_OVERRIDE_SET_MOVETYPE(bParam0, 3);
	return;
}

void Function_350() //Position: 0xFB5A / 64346
{
	bool bVar0;
	
	bVar0 = ADD_BLIP_FOR_ACTOR((*&Local_5 + 1140)[02], 322, 0, 2, 0);
	SET_BLIP_SCALE(bVar0, 1,25f);
	SET_BLIP_NAME(bVar0, "fbi02_explodingWagonBlip");
	return;
}

bool Function_351(vector3 vParam0, vector3 vParam3) //Position: 0xFB9D / 64413
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	VSCALE(&vVar0, 5.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	ENABLE_GAME_CAMERA_FOCUS(vVar0, -1.0f, 6, 1, 1, 0);
	if (!Function_352(StackVal, StackVal, vVar0, -0,9f, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_352(vector3 vParam0, float fParam3, bool bParam4) //Position: 0xFBE2 / 64482
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

void Function_353(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xFC61 / 64609
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = false;
	if (bParam9)
	{
		SQUAD_GOALS_CLEAR(bParam0);
	}
	bVar2 = iParam7;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (((bParam8 && IS_ACTOR_RIDING(bVar3)) || !bParam8) || bParam9)
		{
			if (bVar1 >= 3)
			{
				bVar1 = false;
				bVar2 = (bVar2 + fParam6);
			}
			switch (bVar1)
			{
				case 0x00000000:
					if (bParam9)
					{
						SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, bVar0, 0, 1);
						TASK_FOLLOW_OBJECT_ALONG_PATH(false, bParam1, uParam2, bVar2, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(bVar3, bParam1, uParam2, bVar2, 1, 0);
					}
					break;
				
				case 0x00000001:
					if (bParam9)
					{
						SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, bVar0, 0, 1);
						TASK_FOLLOW_OBJECT_ALONG_PATH(false, bParam1, uParam3, bVar2, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(bVar3, bParam1, uParam3, bVar2, 1, 0);
					}
					break;
				
				case 0x00000002:
					if (bParam9)
					{
						SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, bVar0, 0, 1);
						TASK_FOLLOW_OBJECT_ALONG_PATH(false, bParam1, uParam4, bVar2, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(bVar3, bParam1, uParam4, bVar2, 1, 0);
					}
					break;
				
				case 0x00000003:
					if (bParam9)
					{
						SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, bVar0, 0, 1);
						TASK_FOLLOW_OBJECT_ALONG_PATH(false, bParam1, uParam5, bVar2, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(bVar3, bParam1, uParam5, bVar2, 1, 0);
					}
					break;
			}
			PRINTSTRING("Added guy with back offset ");
			PRINTFLOAT(bVar2);
			PRINTNL();
			bVar1++;
		}
		bVar0++;
	}
}

void Function_354(bool bParam0, int iParam1) //Position: 0xFDC6 / 64966
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	iVar0 = 0;
	bVar1 = (iParam1 - Function_361(bParam0));
	PRINTSTRING("Squad has ");
	PRINTINT(Function_360(bParam0));
	PRINTSTRING("guys in it, which makes iNumToSpawn ");
	PRINTINT(bVar1);
	PRINTNL();
	if (bVar1 >= 0)
	{
		vVar4 = { 7.0f, 0.0f, 15.0f };
		GET_OBJECT_RELATIVE_POSITION((*&Local_5 + 808)[02], vVar4, &vVar7);
		FIND_GROUND_INTERSECTION(&vVar7, 10.0f, &vVar7, &vVar4);
		if (WOULD_ACTOR_BE_VISIBLE(976, &vVar7, 3212836864))
		{
			vVar4 = { 7.0f, 0.0f, -15.0f };
			GET_OBJECT_RELATIVE_POSITION((*&Local_5 + 808)[02], vVar4, &vVar7);
			FIND_GROUND_INTERSECTION(&vVar7, 10.0f, &vVar7, &vVar4);
		}
		iVar0 = 1;
		while (iVar0 < iParam1)
		{
			bVar3 = CREATE_ACTOR_IN_LAYOUT(Local_5, Function_53(), Function_359(), vVar7, 0.0f, 0.0f, 0.0f);
			bVar2 = CREATE_ACTOR_IN_LAYOUT(Local_5, Function_53(), Function_358(), vVar7, 0.0f, 0.0f, 0.0f);
			ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bVar2, 0, 0);
			Function_355(bVar3, Global_34573);
			ACTOR_MOUNT_ACTOR(bVar2, bVar3);
			SQUAD_JOIN(bVar2, bParam0);
			SET_ACTOR_FACTION(bVar2, 20);
			iVar0++;
		}
	}
	return;
}

void Function_355(bool bParam0, bool bParam1) //Position: 0xFEF1 / 65265
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_356(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_356(bool bParam0, vector3 vParam1) //Position: 0xFF0B / 65291
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_357(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_357(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_357(bool bParam0, vector3 vParam1) //Position: 0xFF43 / 65347
{
	vector3 vVar0;
	
	Function_339(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_339(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

int Function_358() //Position: 0xFFC6 / 65478
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = RAND_INT_RANGE(false, 2);
	switch (bVar0)
	{
		case 0x00000000:
			return 372;
			break;
		
		case 0x00000001:
			return 373;
			break;
		
		case 0x00000002:
			return 374;
			break;
	}
	return 372;
}

int Function_359() //Position: 0x10007 / 65543
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
			return 980;
			break;
		
		case 0x00000003:
			return 981;
			break;
		
		case 0x00000004:
			return 983;
			break;
		
		case 0x00000005:
			return 984;
			break;
	}
	return 976;
}

int Function_360(bool bParam0) //Position: 0x1006F / 65647
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int Function_361(bool bParam0) //Position: 0x100BF / 65727
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			bVar1++;
		}
		bVar0++;
	}
	return bVar1;
}

void Function_362() //Position: 0x100F8 / 65784
{
	(*&Local_5 + 1140)[02] = Function_363(Local_5, "tntWagon01", 1196, 976, -147,9999f, 122,4784f, 1778,86f, 0.0f, -35,65685f, 0.0f, 1, 976, 976, 976, 4);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_5 + 1140)[02]), false);
	(*&Local_5 + 1140)[12] = Function_363(Local_5, "tntWagon02", 1196, 976, -165,6537f, 125,6235f, 1769,653f, 0.0f, -43,6316f, 0.0f, 1, 976, 976, 976, 4);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_5 + 1140)[12]), false);
	return;
}

var Function_363(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x1019E / 65950
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
			if (Function_366(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_365(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_364(bVar16, &iVar1))
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

bool Function_364(int iParam0, int iParam1) //Position: 0x103D2 / 66514
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

var Function_365(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x10404 / 66564
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_366(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1041C / 66588
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

void Function_367(bool bParam0, bool bParam1, int iParam2) //Position: 0x10443 / 66627
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
			Function_368(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_368(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10492 / 66706
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

void Function_369() //Position: 0x104DC / 66780
{
	Local_5.f_1136 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "Ambush_2"));
	(*&Local_5 + 1092)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rider_ambush2_6", 472, -168,2829f, 126,821f, 1704,282f, 0.0f, 238,5933f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 1092)[02], Local_5.f_1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 1092)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 1092)[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 1092)[02], 1);
	SET_ACTOR_FACTION((*&Local_5 + 1092)[02], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 1092)[02], 0);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 1092)[02], 50.0f, 1);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 1092)[02], true);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 1092)[02], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 1092)[02], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 1092)[02], 359.0f);
	(*&Local_5 + 1092)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rider_ambush2_8", 471, -165,6311f, 127,4979f, 1700,557f, 0.0f, 231,116f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 1092)[12], Local_5.f_1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 1092)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 1092)[12], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 1092)[12], 1);
	SET_ACTOR_FACTION((*&Local_5 + 1092)[12], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 1092)[12], 0);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 1092)[12], 50.0f, 1);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 1092)[12], true);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 1092)[12], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 1092)[12], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 1092)[12], 359.0f);
	(*&Local_5 + 1092)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "nambush2_1", 467, -129,5336f, 121,5519f, 1701,336f, 0.0f, 261,4771f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 1092)[22], Local_5.f_1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 1092)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 1092)[22], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 1092)[22], 1);
	SET_ACTOR_FACTION((*&Local_5 + 1092)[22], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 1092)[22], 0);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 1092)[22], 50.0f, 1);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 1092)[22], true);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 1092)[22], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 1092)[22], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 1092)[22], 359.0f);
	(*&Local_5 + 1092)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "nambush2_2", 468, -126,5477f, 122,0079f, 1716f, 0.0f, 261,4771f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 1092)[32], Local_5.f_1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 1092)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 1092)[32], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 1092)[32], 1);
	SET_ACTOR_FACTION((*&Local_5 + 1092)[32], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 1092)[32], 0);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 1092)[32], 50.0f, 1);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 1092)[32], true);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 1092)[32], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 1092)[32], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 1092)[32], 359.0f);
	(*&Local_5 + 1092)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "nambush2_3", 469, -139,216f, 122,2996f, 1709,072f, 0.0f, 261,4771f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 1092)[42], Local_5.f_1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 1092)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 1092)[42], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 1092)[42], 1);
	SET_ACTOR_FACTION((*&Local_5 + 1092)[42], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 1092)[42], 0);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_5 + 1092)[42], 50.0f, 1);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 1092)[42], true);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 1092)[42], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 1092)[42], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 1092)[42], 359.0f);
	return;
}

void Function_370(bool bParam0, bool bParam1) //Position: 0x10925 / 67877
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
			SQUAD_JOIN(GET_MOUNT(bVar1), *bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_371(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8, float fParam9, bool bParam10, float fParam11) //Position: 0x10965 / 67941
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
			if ((bParam10 && !Function_376(bVar1, 0x3f800000, 0x42960000, 1, 1, 0)) || !bParam10)
			{
				if (!Function_373(bVar1, Global_34573, fParam11))
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
					Function_372(StackVal, StackVal, bVar1, vVar2, uVar16, 1, 1, 1);
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
						PRINTFLOAT(Function_346(Global_34573, bVar1));
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

void Function_372(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x10B6D / 68461
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

bool Function_373(bool bParam0, bool bParam1, float fParam2) //Position: 0x10C26 / 68646
{
	float fVar0;
	
	fVar0 = Function_374(bParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_374(bool bParam0, bool bParam1) //Position: 0x10C43 / 68675
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_375(&uVar0, &uVar3);
	return iVar6;
}

var Function_375(var uParam0, bool bParam1) //Position: 0x10C62 / 68706
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_376(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10C80 / 68736
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_377(bool bParam0, bool bParam1, float fParam2, var uParam3, var uParam4) //Position: 0x10C9A / 68762
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!DECOR_CHECK_EXIST(bParam0, "bSpoke"))
		{
			if (Function_373(bParam0, bParam1, fParam2))
			{
				DECOR_SET_BOOL(bParam0, "bSpoke", true);
				uParam3 = uParam3;
				uParam4 = uParam4;
				Function_378();
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
	}
}

void Function_378() //Position: 0x10D13 / 68883
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_InWagons", "FBI02_InWagons", false, 2, 1, 0, 1);
		Function_379(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_379(int iParam0) //Position: 0x10D58 / 68952
{
	Function_380(0, Global_34573, iParam0, 0);
	Function_380(1, bLocal_821, iParam0, 0);
	Function_380(2, (*&Local_5 + 820)[02], iParam0, 0);
	Function_380(3, (*&Local_5 + 996)[02], iParam0, 0);
	Function_380(4, (*&Local_5 + 916)[02], iParam0, 0);
	Function_380(5, FIND_ACTOR_IN_LAYOUT(Local_5, "blkArmy_sgt"), iParam0, 0);
	return;
}

void Function_380(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x10DB9 / 69049
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_381(bool bParam0) //Position: 0x10DDE / 69086
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		bVar2 = DECOR_CHECK_EXIST(bVar1, "bThrowStuff");
		if (bVar2)
		{
			if (ACTOR_HAS_WEAPON(bVar1, 23))
			{
				SET_ACTOR_ONE_SHOT_DEATH(bVar1, true);
				if (!IS_ACTOR_ALIVE(bVar1))
				{
					DECOR_REMOVE(bVar1, "bThrowStuff");
					GET_POSITION(bVar1, &cVar3);
					Function_266(&cVar3, "FireBottleExplosion", 0, 1);
				}
			}
		}
		if (IS_ACTOR_ALIVE(bVar1))
		{
			if (GET_TASK_STATUS(bVar1, 18) == 1 && GET_TASK_STATUS(bVar1, 78) == 1)
			{
				if (((bVar2 && (Function_393(Local_5.f_992, bVar1, 70.0f, 1) || Function_373(bVar1, Global_34573, 70.0f))) || (!bVar2 && (Function_373(bVar1, Global_34573, 60.0f) || Function_392(Global_34573, bVar1, 1, 0, 0, 3212836864)))) || Function_392(Global_34573, bVar1, 1, 0, 0, 3212836864))
				{
					if (!iLocal_962)
					{
						Function_391(Local_5.f_992, 0);
						iLocal_962 = 1;
						Function_390();
						AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_IN_MOVING_CAR_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
						Function_353(Local_5.f_992, (*&Local_5 + 808)[02], Local_5.f_2740, Local_5.f_2732, Local_5.f_2736, Local_5.f_2744, 10.0f, 0x41400000, 1, 1);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
					{
						ADD_BLIP_FOR_ACTOR(bVar1, 322, 0, 2, 0);
					}
					Function_389(Local_5.f_992, bVar1, 4);
					Function_388(&bVar1, Global_34573, 1);
					if (bVar2)
					{
						if (RAND_INT_RANGE(false, true) >= 0)
						{
							Function_385(bVar1, 23, 40.0f);
						}
						else
						{
							Function_385(bVar1, 24, 50.0f);
							Function_384(bVar1);
						}
					}
					else
					{
						if (DECOR_CHECK_EXIST(bVar1, "bLieInGrass"))
						{
							Function_383(bVar1);
							DECOR_REMOVE(bVar1, "bLieInGrass");
						}
						Function_382(bVar1, 3212836864);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_382(bool bParam0, bool bParam1) //Position: 0x10FFE / 69630
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

void Function_383(bool bParam0) //Position: 0x11019 / 69657
{
	SET_ACTION_NODE_FOR_ACTOR(bParam0, "FBI02_ambush/Ambush");
	Function_389(Local_5.f_992, bParam0, 4);
	MEMORY_ALLOW_SHOOTING(bParam0, true);
	SET_ACTOR_POSTURE(bParam0, 1);
	return;
}

void Function_384(bool bParam0) //Position: 0x11052 / 69714
{
	bool bVar0;
	
	bVar0 = CREATE_POINT_IN_LAYOUT(Local_5, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ATTACH_OBJECTS(bVar0, bParam0, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_973);
	return;
}

void Function_385(bool bParam0, bool bParam1, int iParam2) //Position: 0x11083 / 69763
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	UNK_0x2E84E682(bParam0, 0);
	GIVE_WEAPON_TO_ACTOR(bParam0, bParam1, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(bParam0, bParam1, 1);
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, false);
	TASK_PRIORITY_SET(bParam0, true);
	Function_339((*&Local_5 + 808)[02]);
	Function_339(bParam0);
	Function_387(StackVal, StackVal, StackVal, StackVal, Function_339((*&Local_5 + 808)[02]), Function_339(bParam0), iParam2);
	vVar0 = { StackVal, StackVal, Function_387(StackVal, StackVal, StackVal, StackVal, Function_339((*&Local_5 + 808)[02]), Function_339(bParam0), iParam2) };
	FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &uVar6);
	bVar9 = TASK_SEQUENCE_OPEN();
	Function_386(StackVal, StackVal, bParam0, vVar3, 5.0f);
	Function_382(bParam0, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar9);
	TASK_SEQUENCE_RELEASE(bVar9, 1);
	return;
}

void Function_386(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1110C / 69900
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_AT_COORD_FROM_POSITION(bParam0, &uParam1, &uVar0, bParam4);
}

vector3 Function_387(vector3 vParam0, vector3 vParam3, bool bParam6) //Position: 0x11126 / 69926
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, bParam6);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	return StackVal, StackVal, vVar0;
}

void Function_388(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11158 / 69976
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_269(bParam1);
			vVar0 = { StackVal, StackVal, Function_269(bParam1) };
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

void Function_389(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11260 / 70240
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

void Function_390() //Position: 0x112A5 / 70309
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_EnemyBehindRox", "FBI02_EnemyBehindRox", false, 2, 1, 0, 1);
		Function_379(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_391(bool bParam0, bool bParam1) //Position: 0x112F6 / 70390
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_SET_NAV_PATHFINDING_ENABLED(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

bool Function_392(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x11335 / 70453
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

bool Function_393(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x11422 / 70690
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
					if (!Function_394(bVar1, 1) || iParam3)
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

bool Function_394(bool bParam0, int iParam1) //Position: 0x114BB / 70843
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

void Function_395(bool bParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0x11505 / 70917
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (Function_373(bParam0, bParam1, fParam3) || EVENT_TRAP_SUCCESSFUL_TRAP(bParam2))
			{
				Function_339(bParam0);
				vVar0 = { StackVal, StackVal, Function_339(bParam0) };
				Function_397(bParam0);
				vVar3 = { StackVal, StackVal, Function_397(bParam0) };
				GET_OBJECT_AXIS(bParam0, &vVar6, 2);
				VSCALE(&vVar6, -3,5f);
				vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vVar6, StackVal) };
				Function_266(&vVar0, "Merchant03BlockadeExplosion", 0, 1);
				if (Function_373(bParam0, bParam1, (fParam3 * 2.0f)))
				{
					if (bParam1 == Global_34573)
					{
						Function_214();
					}
					KILL_ACTOR(bParam1);
				}
				else
				{
					PRINTSTRING("Target dist = ");
					PRINTFLOAT(Function_346(bParam0, bParam1));
					PRINTNL();
				}
				DESTROY_OBJECT(bParam0);
				if (IS_OBJECT_VALID(bLocal_981))
				{
					DESTROY_OBJECT(bLocal_981);
				}
				Function_396(StackVal, StackVal, StackVal, StackVal, "p_gen_wagonExplode01bx", vVar0, vVar3);
				Function_396(StackVal, StackVal, StackVal, StackVal, "p_gen_wagonExplode01cx", vVar0, vVar3);
				Function_396(StackVal, StackVal, StackVal, StackVal, "p_gen_wagonExplode01dx", vVar0, vVar3);
				Function_396(StackVal, StackVal, StackVal, StackVal, "p_gen_wagonExplode01ex", vVar0, vVar3);
				Function_396(StackVal, StackVal, StackVal, StackVal, "p_gen_wagonExplode01fx", vVar0, vVar3);
			}
		}
	}
}

void Function_396(bool bParam0, vector3 vParam1, vector3 vParam4) //Position: 0x11690 / 71312
{
	bool bVar0;
	struct<9> Var1;
	
	vVar1 = RAND_FLOAT_RANGE(4.0f, 9.0f);
	vVar1.f_4 = RAND_FLOAT_RANGE(8.0f, 14.0f);
	vVar1.f_8 = RAND_FLOAT_RANGE(4.0f, 9.0f);
	if (RAND_INT_RANGE(false, 10) <= 6)
	{
		vVar1 = (vVar1.x * -1.0f);
	}
	if (RAND_INT_RANGE(false, 10) <= 6)
	{
		vVar1.f_8 = (vVar1.z * -1.0f);
	}
	bVar0 = CREATE_PROP_IN_LAYOUT(bLocal_794, Function_53(), bParam0, vParam1, vParam4, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar0, 0);
	ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar0));
	SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bVar0), &vVar1);
	VSCALE(&vVar1, 0,25f);
	SET_PROP_ANGULAR_VELOCITY_DEGS(GET_PHYSINST_FROM_OBJECT(bVar0), &vVar1);
}

vector3 Function_397(bool bParam0) //Position: 0x11729 / 71465
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

void Function_398() //Position: 0x11750 / 71504
{
	return;
}

void Function_399(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5) //Position: 0x11756 / 71510
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (!IS_ACTOR_MOUNTED(bVar1))
				{
					if (bParam5)
					{
						SET_ACTOR_FACTION(bVar1, 21);
					}
					if (Function_73(StackVal, StackVal, vParam1))
					{
						TASK_FLEE_ACTOR(bVar1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_GO_TO_COORD(bVar1, &vParam1, 3);
					}
					if (!Function_400(bVar1, Global_34573, bParam4))
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

bool Function_400(bool bParam0, bool bParam1, bool bParam2) //Position: 0x117DC / 71644
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

void Function_401() //Position: 0x118ED / 71917
{
	if (iLocal_803 < 3 && iLocal_803 > 105)
	{
		Function_424(bLocal_977, Global_34573, 200.0f, 1);
		Function_342((*&Local_5 + 808)[02]);
		Function_341(Local_5.f_2728);
		Function_419(Local_5.f_804);
		if (iLocal_803 > 6)
		{
			Function_340();
		}
		Function_370(Local_5.f_992, &bLocal_980);
		Function_399(StackVal, StackVal, bLocal_980, *(&Local_5 + 2248), 0x43160000, 0);
		Function_398();
	}
	switch (iLocal_803)
	{
		case 0x00000000:
			Function_333(0);
			Function_418(&Local_5 + 1088, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			bLocal_825 = Function_332(StackVal, StackVal, *(&Local_5 + 1588[06]), 0, 1, 1);
			if (!Function_331(bLocal_825))
			{
			}
			if (!iLocal_826[1])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_177(1, 0, 1);
				if (!SQUAD_IS_VALID(bLocal_980))
				{
					bLocal_980 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "looseHorses"));
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_326();
				bLocal_825 = Function_332(StackVal, StackVal, *(&Local_5 + 1588[06]), 0, 1, 1);
				if (!Function_331(bLocal_825))
				{
					Function_329(&Local_795);
				}
				Function_317(1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_5 + 1588[06]), 1, true, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 1;
			}
			else
			{
				Function_215(&iLocal_937);
				iLocal_803 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_331(bLocal_825) || bLocal_825 != 4294967295)) && Function_415())
			{
				if (!IS_LAYOUTREF_VALID(Local_699))
				{
					Function_413();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_5 + 808)[02], *(&Local_5 + 1588[16]), 1, true, 1);
				Function_371(StackVal, StackVal, StackVal, StackVal, Local_5.f_992, *(&Local_5 + 1588[36]), *(&Local_5 + 1588[36] + 12), 3, 6.0f, 2.0f, 0, 0);
				Function_215(&iLocal_937);
				iLocal_803 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_412())
			{
				if (Function_309(&bLocal_875))
				{
					if (Function_308((*&Local_5 + 808)[02]))
					{
						if (Function_306(Global_34573))
						{
							TOGGLE_COVER_PROPS(0);
							Function_229(iLocal_802);
							Function_300(StackVal, StackVal, Function_229(iLocal_802), iLocal_802, Global_30637[0], Function_231(iLocal_802), 3);
							Function_299();
							DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
							Function_411();
							Function_367(Local_5.f_992, Local_5.f_804, 2);
							Function_367(Local_5.f_804, Local_5.f_992, 2);
							SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_804, false, 1, 4294967295);
							TASK_CROUCH(false, -1.0f);
							Function_410((*&Local_5 + 672)[102]);
							Function_410((*&Local_5 + 672)[112]);
							Function_410((*&Local_5 + 672)[122]);
							if (!iLocal_826[1])
							{
								if (!SQUAD_IS_VALID(bLocal_977))
								{
									bLocal_977 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "nbackSquad"));
								}
								Function_409();
								Function_408(Local_5.f_1160, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
								SQUADS_MERGE(Local_5.f_1160, bLocal_977);
								DESTROY_OBJECT(Local_5.f_1160);
								Function_367(Local_5.f_992, Local_5.f_1160, 4);
								Function_407();
							}
							MEMORY_ALLOW_SHOOTING(bLocal_821, false);
							MEMORY_ALLOW_SHOOTING((*&Local_5 + 820)[02], false);
							DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_821);
							DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
							Function_294(&(Local_1022[017]), bLocal_821, "FBI_Ross", 1, 0x5f5e100, 1);
							Function_294(&(Local_1022[117]), (*&Local_5 + 820)[02], "FBI_Fordham", 1, 0x5f5e100, 1);
							Function_294(&(Local_1022[217]), Local_5.f_992, "AmericanSoldier", 1, 0x5f5e100, 1);
							Function_293(&(Local_1022[217]), 3);
							Function_289(&(Local_1022[217]), 42);
							Function_294(&(Local_1022[417]), Local_5.f_912, "AmericanSoldier_horse", 1, 0x5f5e100, 1);
							Function_289(&(Local_1022[417]), 42);
							iLocal_964 = 1;
							Function_353(Local_5.f_992, (*&Local_5 + 808)[02], Local_5.f_2740, Local_5.f_2732, Local_5.f_2736, Local_5.f_2744, 6.0f, 0x41400000, 1, 1);
							START_VEHICLE((*&Local_5 + 808)[02]);
							TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_5 + 820)[02]);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_5 + 820)[02], true);
							if (iLocal_826[1])
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_5 + 820)[02], Local_5.f_2728, 4, 0, 0, 1, false);
								Function_215(&iLocal_937);
								iLocal_803 = 6;
							}
							else
							{
								Function_215(&iLocal_937);
								iLocal_803 = 5;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (Function_351(367,008f, 114,736f, 1504,961f, -0,814f, -0,007f, 0,581f))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_5 + 820)[02], Local_5.f_2728, 4, 0, 0, 1, false);
				Function_215(&iLocal_937);
				iLocal_803 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_270(&iLocal_937) < 1.0f || iLocal_826[1])
			{
				if (!HUD_IS_FADED())
				{
					Function_403();
					if (iLocal_962 && IS_VOLUME_VALID(Local_5.f_1372))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_5.f_1372))
						{
							DESTROY_VOLUME(Local_5.f_1372);
						}
						Function_402();
					}
					Function_381(Local_5.f_804);
					if (IS_ACTOR_IN_VOLUME((*&Local_5 + 808)[02], Local_5.f_1304))
					{
						Function_215(&iLocal_937);
						iLocal_803 = 106;
					}
				}
				else if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_261(Local_5.f_912);
				iLocal_826[2] = 1;
				Function_215(&iLocal_937);
				iLocal_802 = 3;
				iLocal_803 = 0;
			}
			break;
	}
	return;
}

void Function_402() //Position: 0x11E65 / 73317
{
	bool bVar0;
	
	if (fLocal_959 >= 0.0f)
	{
		fLocal_959 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(6.0f, 10.0f));
	}
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && GET_CURRENT_GAME_TIME() < fLocal_959)
	{
		if (iLocal_802 == 2)
		{
			bVar0 = RAND_INT_RANGE(2, 4);
		}
		else
		{
			bVar0 = RAND_INT_RANGE(false, 4);
		}
		if (((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) <= 45.0f && GET_LAST_ATTACK_TIME(Global_34573) < 0.0f) || (GET_LAST_ATTACK_TIME(Global_34573) >= 0.0f && Function_270(&iLocal_940) <= 45.0f))
		{
			bVar0 = RAND_INT_RANGE(5, 6);
		}
		switch (bVar0)
		{
			case 0x00000000:
				SAY_SINGLE_LINE_SCRIPTED(bLocal_821, "FBI02_TauntsAttakrs", false, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				SAY_SINGLE_LINE_SCRIPTED((*&Local_5 + 820)[02], "FBI02_FordTaunts", false, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000003:
				SAY_SINGLE_LINE_SCRIPTED(bLocal_821, "FBI02_RossShoutsEnc", false, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000004:
				SAY_SINGLE_LINE_SCRIPTED((*&Local_5 + 820)[02], "FBI02_FordShoutsEnc", false, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000005:
				SAY_SINGLE_LINE_SCRIPTED(bLocal_821, "FBI02_JonNoShootGat", false, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000006:
				SAY_SINGLE_LINE_SCRIPTED((*&Local_5 + 820)[02], "FBI02_JonNoShootGat2", false, 0, 0, 0, 0, 0);
				break;
		}
		fLocal_959 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(6.0f, 10.0f));
	}
	return;
}

void Function_403() //Position: 0x12009 / 73737
{
	if (IS_VOLUME_VALID(Local_5.f_1364))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, Local_5.f_1364))
		{
			DESTROY_VOLUME(Local_5.f_1364);
			switch (RAND_INT_RANGE(false, true))
			{
				case 0x00000000:
					Function_406();
					break;
				
				case 0x00000001:
					Function_406();
					break;
				}
			}
	}
	if (IS_VOLUME_VALID(Local_5.f_1368))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, Local_5.f_1368))
		{
			DESTROY_VOLUME(Local_5.f_1368);
			switch (RAND_INT_RANGE(false, true))
			{
				case 0x00000000:
					Function_405();
					break;
				
				case 0x00000001:
					Function_404();
					break;
				}
			}
	}
	return;
}

void Function_404() //Position: 0x12095 / 73877
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI02_CommentsOffRoad_v4_AA", "FBI02_CommentsOffRoad_v4_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1720", "", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_CommentsOffRoad_v4_AB", "FBI02_CommentsOffRoad_v4_AB", false, 2, 0, 0, 1);
		Function_379(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_405() //Position: 0x12158 / 74072
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_CommentsOffRoad_v3_AA", "FBI02_CommentsOffRoad_v3_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_CommentsOffRoad_v3_AB", "FBI02_CommentsOffRoad_v3_AB", false, 2, 0, 0, 1);
		Function_379(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_406() //Position: 0x121FC / 74236
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI02_CommentsOffRoad_v1_AA", "FBI02_CommentsOffRoad_v1_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_CommentsOffRoad_v1_AB", "FBI02_CommentsOffRoad_v1_AB", false, 2, 0, 0, 1);
		Function_379(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_407() //Position: 0x122A0 / 74400
{
	bool bVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	bVar0 = false;
	bLocal_953 = TASK_SEQUENCE_OPEN();
	TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 1, 0, 0);
	TASK_SEQUENCE_CLOSE();
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_977, false, 1, 4294967295);
	TASK_SEQUENCE_PERFORM(false, bLocal_953);
	TASK_SEQUENCE_RELEASE(bLocal_953, 1);
	iVar1 = SQUAD_GET_SIZE(bLocal_977);
	if (iVar1 >= 5)
	{
		iVar1 = 5;
	}
	bVar0 = false;
	while (bVar0 < (iVar1 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_977, bVar0);
		switch (bVar0)
		{
			case 0x00000000:
				uVar2 = Local_5.f_2728;
				break;
			
			case 0x00000001:
				uVar2 = Local_5.f_2732;
				break;
			
			case 0x00000002:
				uVar2 = Local_5.f_2736;
				break;
			
			case 0x00000003:
				uVar2 = Local_5.f_2740;
				break;
			
			case 0x00000004:
				uVar2 = Local_5.f_2744;
				break;
		}
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar3, uVar2, 4, 0, 0, 1, false);
		bVar0++;
	}
	return;
}

void Function_408(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x12369 / 74601
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
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_409() //Position: 0x12453 / 74835
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_5.f_1160 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "s3_runningGuys"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "runningGuy_1", 470, 315,9331f, 113,7242f, 1573,942f, 0.0f, 85,20281f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1160);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 23, 0,5f, 1, 1);
	MEMORY_CONSIDER_AS(bVar0, Global_34573, 2);
	SET_ACTOR_FACTION(bVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bVar0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "runningGuy_2", 471, 282,6664f, 114,447f, 1552.0f, 0.0f, 149,2935f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1160);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 23, 0,5f, 1, 1);
	AI_SHOOT_TARGET_SET_OFFSET(bVar0, Global_34573, 0.0f, 0.0f, 9.0f);
	MEMORY_CONSIDER_AS(bVar0, Global_34573, 2);
	SET_ACTOR_FACTION(bVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bVar0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "runningGuy_3", 472, 284.0f, 114,447f, 1566,184f, 0.0f, 134,1721f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1160);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bVar0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "runningGuy_4", 470, 314,787f, 112,7554f, 1554,782f, 0.0f, 120,1469f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1160);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 23, 0,5f, 1, 1);
	AI_SHOOT_TARGET_SET_OFFSET(bVar0, Global_34573, 0.0f, 0.0f, 9.0f);
	SET_ACTOR_FACTION(bVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bVar0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "runningGuy_5", 471, 277,2505f, 114,3998f, 1539,976f, 0.0f, -195,7852f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1160);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bVar0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "runningGuy_6", 472, 300.0f, 114,2173f, 1566,943f, 0.0f, 128,3285f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1160);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bVar0, 0, 0);
	return;
}

void Function_410(bool bParam0) //Position: 0x126CB / 75467
{
	SET_ANIM_SET_FOR_ACTOR(bParam0, "FBI02_ambush", 0);
	SET_ACTION_NODE_FOR_ACTOR(bParam0, "FBI02_ambush/Idle");
	Function_389(Local_5.f_992, bParam0, 2);
	MEMORY_ALLOW_SHOOTING(bParam0, false);
	return;
}

void Function_411() //Position: 0x12712 / 75538
{
	Local_5.f_804 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "Ambush_1"));
	(*&Local_5 + 672)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "nraider1_1", 470, 209,1733f, 121,4643f, 1623,475f, 0.0f, -68,84229f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[02], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[02], 41, 0,5f, 1, 1);
	DECOR_SET_BOOL((*&Local_5 + 672)[02], "bThrowStuff", true);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[02], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[02], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[02], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[02], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[02], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[02], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[02], 359.0f);
	(*&Local_5 + 672)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "nraider1_2", 471, 236,0338f, 117,4632f, 1638,638f, 0.0f, -14,16725f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[12], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[12], 41, 0,5f, 1, 1);
	DECOR_SET_BOOL((*&Local_5 + 672)[12], "bThrowStuff", true);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[12], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[12], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[12], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[12], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[12], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[12], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[12], 359.0f);
	(*&Local_5 + 672)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "nraider1_3", 472, 122,3131f, 123,4823f, 1670,846f, 0.0f, 255,3872f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[22], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[22], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[22], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[22], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[22], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[22], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[22], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[22], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[22], 359.0f);
	(*&Local_5 + 672)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "nraider1_4", 470, 138,0918f, 121,4745f, 1671,222f, 0.0f, -68,60242f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[32], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[32], 41, 0,5f, 1, 1);
	DECOR_SET_BOOL((*&Local_5 + 672)[32], "bThrowStuff", true);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[32], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[32], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[32], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[32], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[32], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[32], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[32], 359.0f);
	(*&Local_5 + 672)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "nraider1_6", 472, 127,6142f, 121,4745f, 1680,138f, 0.0f, 254,3575f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[42], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[42], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[42], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[42], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[42], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[42], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[42], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[42], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[42], 359.0f);
	(*&Local_5 + 672)[52] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_10", 470, 14,3372f, 115,785f, 1716f, 0.0f, -61,93494f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[52], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[52]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[52], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[52], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[52], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[52], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[52], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[52], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[52], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[52], 359.0f);
	(*&Local_5 + 672)[62] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_11", 471, 25,7993f, 115,5098f, 1706,003f, 0.0f, -78,34709f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[62], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[62]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[62], 23, 0,5f, 1, 1);
	AI_SHOOT_TARGET_SET_OFFSET((*&Local_5 + 672)[62], Global_34573, 0.0f, 0.0f, 9.0f);
	DECOR_SET_BOOL((*&Local_5 + 672)[62], "bThrowStuff", true);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[62], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[62], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[62], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[62], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[62], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[62], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[62], 359.0f);
	(*&Local_5 + 672)[72] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_12", 472, 0,8033489f, 114,2182f, 1680,939f, 0.0f, 255,3872f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[72], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[72]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[72], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[72], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[72], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[72], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[72], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[72], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[72], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[72], 359.0f);
	(*&Local_5 + 672)[82] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_16", 472, 174,1234f, 125,4901f, 1637,638f, 0.0f, -96,10498f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[82], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[82]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[82], 41, 0,77816f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[82], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[82], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[82], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[82], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[82], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[82], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[82], 359.0f);
	(*&Local_5 + 672)[92] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_17", 471, 189,8876f, 123,3036f, 1627,92f, 0.0f, -84,81548f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[92], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[92]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[92], 41, 0,77816f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[92], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[92], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[92], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[92], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[92], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[92], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[92], 359.0f);
	(*&Local_5 + 672)[102] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_grass_1", 476, 219,556f, 119,497f, 1614,867f, 0.0f, -41,43051f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[102], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[102]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[102], 41, 0,77816f, 1, 1);
	DECOR_SET_BOOL((*&Local_5 + 672)[102], "bLieInGrass", true);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[102], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[102], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[102], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[102], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[102], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[102], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[102], 359.0f);
	(*&Local_5 + 672)[112] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_grass_3", 470, 60,013f, 116,2084f, 1699,948f, 0.0f, -89,55028f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[112], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[112]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[112], 41, 0,77816f, 1, 1);
	DECOR_SET_BOOL((*&Local_5 + 672)[112], "bLieInGrass", true);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[112], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[112], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[112], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[112], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[112], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[112], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[112], 359.0f);
	(*&Local_5 + 672)[122] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_grass_4", 471, 54,087f, 116,3005f, 1688,851f, 0.0f, -89,55028f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[122], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[122]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[122], 41, 0,77816f, 1, 1);
	DECOR_SET_BOOL((*&Local_5 + 672)[122], "bLieInGrass", true);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[122], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[122], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[122], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[122], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[122], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[122], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[122], 359.0f);
	(*&Local_5 + 672)[132] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_18", 472, 203,44f, 123,5412f, 1641,915f, 0.0f, 297,2941f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[132], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[132]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[132], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[132], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[132], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[132], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[132], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[132], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[132], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[132], 359.0f);
	(*&Local_5 + 672)[142] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_19", 468, 180,555f, 124,4862f, 1645,694f, 0.0f, -62,70588f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[142], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[142]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[142], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[142], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[142], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[142], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[142], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[142], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[142], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[142], 359.0f);
	(*&Local_5 + 672)[152] = CREATE_ACTOR_IN_LAYOUT(Local_5, "raider1_21", 475, 108,962f, 117,2741f, 1713,029f, 0.0f, -66,51694f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[152], Local_5.f_804);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 672)[152]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[152], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 672)[152], 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[152], 19);
	SET_CRIPPLE_ENABLE((*&Local_5 + 672)[152], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 672)[152], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 672)[152], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH((*&Local_5 + 672)[152], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_5 + 672)[152], 359.0f);
	return;
}

bool Function_412() //Position: 0x13477 / 78967
{
	Function_316(&Local_5 + 520, 470, 2, 0);
	Function_316(&Local_5 + 520, 471, 2, 0);
	Function_316(&Local_5 + 520, 472, 2, 0);
	Function_316(&Local_5 + 520, 476, 2, 0);
	Function_316(&Local_5 + 520, 468, 2, 0);
	Function_316(&Local_5 + 520, 475, 2, 0);
	if (Function_309(&Local_5 + 520))
	{
		return 1;
	}
	return 0;
}

void Function_413() //Position: 0x134DF / 79071
{
	var uVar0;
	
	Function_414(4, 1);
	uVar0 = uVar0;
	Local_699 = CREATE_LAYOUT("Fbi02_armycamp_layout");
	Local_699.f_308 = CREATE_GRINGO_IN_LAYOUT(Local_699, "look_distance_binocs", "look_distance_binocs", 453,3785f, 101,497f, 1515,082f, 0.0f, -427,0073f, 0.0f);
	Local_699.f_312 = CREATE_GRINGO_IN_LAYOUT(Local_699, "look_distance_binocs1", "look_distance_binocs", 394,1541f, 118,581f, 1472,063f, 0.0f, -231,2571f, 0.0f);
	Local_699.f_316 = CREATE_GRINGO_IN_LAYOUT(Local_699, "look_distance_binocs2", "look_distance_binocs", 388,4677f, 109,4749f, 1546,983f, 0.0f, -282,3839f, 0.0f);
	Local_699.f_320 = CREATE_GRINGO_IN_LAYOUT(Local_699, "sit_ground_smoke_indef", "sit_ground_smoke_indef", 419,9046f, 106,4962f, 1524,937f, 0.0f, -26,92577f, 0.0f);
	Local_699.f_324 = CREATE_GRINGO_IN_LAYOUT(Local_699, "Sit_Ground_Campfire_Tend_indef", "Sit_Ground_Campfire_Tend_indef", 418,4863f, 106,527f, 1523,237f, 0.0f, -82,53272f, 0.0f);
	Local_699.f_328 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_699, "ncover_low", 402,1702f, 108,6218f, 1550,744f, 0.0f, 94,68436f, 0.0f, 4);
	Local_699.f_332 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_699, "cover_low1", 404,2731f, 108,4822f, 1544,991f, 0.0f, 68,87098f, 0.0f, 4);
	Local_699.f_336 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_699, "cover_low2", 378,4546f, 112,3012f, 1499,364f, 0.0f, 174,3452f, 0.0f, 4);
	Local_699.f_340 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_699, "cover_low3", 376,5225f, 112,4385f, 1499,118f, 0.0f, 153,3905f, 0.0f, 4);
	Local_699.f_344 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_699, "cover_low4", 375,956f, 112,617f, 1497,827f, 0.0f, 103,3632f, 0.0f, 4);
	Local_699.f_348 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_699, "cover_low5", 376,1976f, 112,8397f, 1495,864f, 0.0f, 103,3632f, 0.0f, 4);
	Local_699.f_352 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_699, "cover_low6", 406,4937f, 108,4756f, 1539,422f, 0.0f, 60,39168f, 0.0f, 4);
	Local_699.f_356 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_699, "cover_low7", 406,8357f, 108,4685f, 1542,813f, 0.0f, 53,40545f, 0.0f, 4);
	CREATE_PROP_IN_LAYOUT(Local_699, "campfireCombined01x0", "p_gen_campfireCombined01x", 411,064f, 107,655f, 1531,178f, -3,683969f, -0,643417f, -7,06261f, 1);
	Local_699.f_360 = CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x0", "p_gen_crate16x", 417,1959f, 107,2949f, 1537,26f, -1,888012f, -0,5854804f, -5,769275f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ncrate02x0", "p_gen_crate02x", 420,6118f, 106,6589f, 1530,347f, 3,536665f, 134,8675f, -6,802464f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateWeapons01x0", "p_gen_crateWeapons01x", 829,2085f, 110,4314f, 554,7914f, 0.0f, 144,9008f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x0", "p_gen_tent01x", 425,6691f, 105,6355f, 1525,503f, -5,102506f, 53,43818f, -13,35043f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x1", "p_gen_tent01x", 426,8347f, 105,3195f, 1523,072f, -6,049973f, 59,37539f, -14,33522f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x2", "p_gen_tent01x", 428,5924f, 104,9102f, 1520,67f, -5,524034f, 64,24527f, -13,02293f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x3", "p_gen_tent01x", 409,6927f, 107,5858f, 1523,464f, -4,4681f, -41,11765f, -3,53403f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x4", "p_gen_tent01x", 407,8672f, 108,4189f, 1534,267f, -179,0215f, 41,1004f, -182,08f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x5", "p_gen_tent01x", 405,9298f, 108,358f, 1532,577f, -180,0789f, 38,2014f, -179,7905f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x6", "p_gen_tent01x", 403,8558f, 108,5154f, 1531,077f, -179,9667f, 38,23446f, -190,2087f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x7", "p_gen_tent01x", 405,869f, 107,9951f, 1523,047f, -7,130809f, 61,78443f, -12,7664f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x8", "p_gen_tent01x", 411,5623f, 107,4941f, 1525,501f, -4,663695f, -43,79419f, -3,244348f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent01x9", "p_gen_tent01x", 403,2255f, 108,5773f, 1527,748f, -8,275621f, 51,00029f, -11,95623f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ntent01x10", "p_gen_tent01x", 404,5331f, 108,281f, 1525,45f, -3,02156f, 52,55341f, -8,757248f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ntent01x11", "p_gen_tent01x", 413,8942f, 107,3619f, 1527,74f, -4,663695f, -43,79419f, -3,244348f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ntent01x12", "p_gen_tent01x", 423,9755f, 105,975f, 1527,665f, -2,967471f, 46,30334f, -10,66498f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "campFire01x0", "p_gen_campFire01x", 419,4054f, 106,4267f, 1522,862f, -4,975491f, -35,68994f, -4,891445f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateWeapons02x0", "p_gen_crateWeapons02x", 414,7395f, 107,7464f, 1535,324f, 2,820395f, -42,969f, -11,49121f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateWeapons02x1", "p_gen_crateWeapons02x", 413,6996f, 107,8756f, 1536,585f, 2,558888f, -36,25008f, -11,08174f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x1", "p_gen_crate16x", 416,3072f, 107,3882f, 1538,545f, -2,794163f, 62,0979f, -9,357506f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x2", "p_gen_crate16x", 415,6345f, 108,5148f, 1537,194f, 2,08659f, 128,7953f, -5,261193f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "lantern05x0", "p_gen_lantern05x", 412,1043f, 108,7266f, 1539,968f, 0.0f, 0.0f, -5,076805f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ntable04x0", "p_gen_table04x", 411,2194f, 108,0594f, 1540,268f, -3,277082f, -40,6016f, -6,759641f, 1);
	Local_699.f_364 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), Local_699, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x0", "p_bat_flourSack01x", 385,9764f, 109,7499f, 1565,798f, -104,3442f, 81,19582f, -100,875f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x1", "p_bat_flourSack01x", 385,7733f, 109,6033f, 1564,128f, -189,5169f, 119,7505f, -185,6219f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x2", "p_bat_flourSack01x", 386,4424f, 109,5462f, 1562,62f, -184,9492f, 133,0641f, -185,1741f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x0", "p_bat_flourSack02x", 389,0233f, 109,8016f, 1532,485f, 0.0f, 69,60867f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x1", "p_bat_flourSack02x", 388,4067f, 109,8132f, 1524,399f, 0.0f, -236,2592f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x3", "p_bat_flourSack01x", 387,0255f, 110,234f, 1567,25f, -159,7046f, 57,3027f, -152,5943f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x4", "p_bat_flourSack01x", 387,6384f, 109,5507f, 1549,35f, -137,6001f, 83,73592f, -138,9546f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x5", "p_bat_flourSack01x", 387,5385f, 109,4577f, 1547,56f, -7,147091f, 72,77776f, -12,4533f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x6", "p_bat_flourSack01x", 388,3583f, 109,3339f, 1550,924f, 0.0f, 116,5692f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x2", "p_bat_flourSack02x", 388,7671f, 108,8984f, 1545,124f, 0.0f, 141,7215f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x3", "p_bat_flourSack02x", 388,559f, 108,8077f, 1552,009f, 0.0f, 57,12818f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x4", "p_bat_flourSack02x", 388,595f, 109,1059f, 1560,864f, 0.0f, 120,4057f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x7", "p_bat_flourSack01x", 392,2057f, 118,5574f, 1471,987f, 41,07465f, -258,4477f, 36,84415f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x8", "p_bat_flourSack01x", 393,3272f, 118,4866f, 1473,132f, -3,868252f, -233,3289f, -3,040926f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x9", "p_bat_flourSack01x", 394,6819f, 118,2733f, 1474,023f, -6,330058f, -213,3555f, -7,162781f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x10", "p_bat_flourSack01x", 396,1122f, 118,2205f, 1473,725f, 3,40242f, -168,6672f, -0,5680826f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x11", "p_bat_flourSack01x", 386,979f, 110,2373f, 1526,703f, 0.0f, 59,74313f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x12", "p_bat_flourSack01x", 386,8881f, 110,3626f, 1528,475f, -70,38712f, 84,28273f, -70,29659f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x13", "p_bat_flourSack01x", 387,494f, 110,3412f, 1530,031f, -174,2152f, 65,32664f, -172,3003f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x14", "p_bat_flourSack01x", 388,6706f, 110,4054f, 1531,305f, -181,9521f, 48,34349f, -178,3685f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x3", "p_gen_crate16x", 403,3308f, 109,8428f, 1533,729f, -10,30375f, 3,4597f, -13,23177f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x4", "p_gen_crate16x", 403,3849f, 109,0677f, 1535,39f, 8,574318f, -206,4716f, -7,433196f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "crateWeapons02x2", "p_gen_crateWeapons02x", 401,8834f, 109,0597f, 1532,708f, -14,42371f, -55,5336f, -2,128053f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x5", "p_bat_flourSack02x", 380,3189f, 111,596f, 1500,877f, 0.0f, -254,8191f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "crateWeapons02x3", "p_gen_crateWeapons02x", 377,4356f, 113,0202f, 1495,226f, 20,93113f, -53,3825f, -24,72054f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x15", "p_bat_flourSack01x", 374,7879f, 112,7747f, 1497,062f, -347,5254f, 70,40131f, -349,0211f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x16", "p_bat_flourSack01x", 375,0489f, 112,5256f, 1498,64f, -211,0956f, 81,93536f, -211,6382f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x17", "p_bat_flourSack01x", 379,2047f, 112,2125f, 1500,264f, -180,206f, -7,589703f, -180,2876f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x18", "p_bat_flourSack01x", 377,5465f, 112,3744f, 1500,456f, -180,7195f, 18,44005f, -176,9465f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x19", "p_bat_flourSack01x", 375,9757f, 112,3794f, 1499,955f, -181,1288f, 52,79261f, -177,618f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x6", "p_bat_flourSack02x", 454,892f, 101,0668f, 1517,177f, 0.0f, -0,710117f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x7", "p_bat_flourSack02x", 453,8491f, 101,0543f, 1513,571f, 0.0f, -115,4457f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x20", "p_bat_flourSack01x", 455,9283f, 101,3611f, 1515,933f, -168,3553f, 62,29498f, -169,6598f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "ncrate02x1", "p_gen_crate02x", 390,6351f, 110,2262f, 1564,814f, -17,15241f, 43,90225f, -3,46805f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x5", "p_gen_crate16x", 391,0736f, 109,9949f, 1563,37f, -23,60545f, 61,72784f, -12,80111f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x6", "p_gen_crate16x", 390,7832f, 110,8969f, 1564,024f, 32,8244f, 114,7644f, 41,23474f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x21", "p_bat_flourSack01x", 403,1539f, 108,9601f, 1534,12f, -164,2247f, 53,20502f, -174,3324f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x22", "p_bat_flourSack01x", 415,3774f, 107,6979f, 1537,61f, 0.0f, 144,2912f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x8", "p_bat_flourSack02x", 409,4127f, 107,4805f, 1528,54f, 0.0f, 454,7915f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x9", "p_bat_flourSack02x", 408,7675f, 107,5335f, 1529,282f, 0.0f, 343,7823f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x10", "p_bat_flourSack02x", 408,6759f, 107,6621f, 1528,246f, 0.0f, 198,0812f, 0.0f, 1), Local_699.f_364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x23", "p_bat_flourSack01x", 413,4308f, 107,9393f, 1537,225f, -7,868567f, 55,31015f, -9,541054f, 1), Local_699.f_364);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent03x0", "p_bat_tent03x", 410,9334f, 108,4193f, 1543,818f, -6,356432f, 50,066f, -10,238f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "tent03x1", "p_bat_tent03x", 416,812f, 107,342f, 1535,339f, -5,505f, 41,307f, -8,306f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ntable04x1", "p_gen_table04x", 417,4608f, 107,1411f, 1531,324f, -3,277082f, -40,6016f, -6,759641f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x7", "p_gen_crate16x", 418,6788f, 107,802f, 1531,82f, 2,291467f, -145,4831f, -7,087502f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x8", "p_gen_crate16x", 417,6502f, 107,2074f, 1533,652f, -2,334753f, -323,9683f, -7,162451f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "cot01x0", "p_gen_cot01x", 416,6261f, 107,3494f, 1533,047f, -2,021317f, 44,46125f, -5,282106f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ncrate02x2", "p_gen_crate02x", 418,4755f, 106,9502f, 1529,932f, 6,019142f, 135,0748f, -3,294034f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x0", "p_bat_rockGreatPlains01x", 359,7465f, 110,2085f, 1532,453f, 0.0f, 80,27997f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x1", "p_bat_rockGreatPlains01x", 360f, 109,9181f, 1572.0f, 0.0f, 276,1015f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x2", "p_bat_rockGreatPlains01x", 346,9407f, 110,5879f, 1524,561f, 0.0f, 243,8274f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "nwagon02x0", "p_bat_wagon02x", 344,1985f, 112,076f, 1538,475f, 0.0f, 73,09178f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x3", "p_bat_rockGreatPlains01x", 368,6876f, 109,9282f, 1555,06f, 0.0f, -101,3021f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x4", "p_bat_rockGreatPlains01x", 369,4876f, 109,8038f, 1567,918f, 0.0f, 93,56078f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x5", "p_bat_rockGreatPlains01x", 371,3437f, 109,6727f, 1526,27f, 0.0f, -130,3594f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x6", "p_bat_rockGreatPlains01x", 369,954f, 109,8419f, 1545,039f, 0.0f, 63,93962f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x7", "p_bat_rockGreatPlains01x", 359,0331f, 110,7675f, 1520,233f, 0.0f, 226,7108f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "rockGreatPlains01x8", "p_bat_rockGreatPlains01x", 191,5294f, 122,5669f, 1627,529f, 38,58346f, -104,5197f, -39,49326f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "wagonBroken02x0", "p_gen_wagonBroken02x", 567,2713f, 87,85955f, 1410,846f, -0,07290947f, 137,136f, -10,3562f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateBreak02x0", "p_gen_crateBreak02x", 567,3553f, 87,80026f, 1415,45f, 9,612803f, 89,90281f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateBreak02x1", "p_gen_crateBreak02x", 566,9315f, 89,40697f, 1413,904f, 0,04668765f, 69,65842f, -9,569015f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateWeapons02x4", "p_gen_crateWeapons02x", 408,0776f, 108,4502f, 1545,2f, -1,957979f, -50,95555f, -0,4521722f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerItem01x0", "p_gen_crateMultiplayerItem01x", 410,277f, 108,3928f, 1545,77f, 0.0f, -46,46017f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "nwagon03x0", "p_bat_wagon03x", 407,4763f, 108,4755f, 1548,059f, 0.0f, 61,77194f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "nwagon01x0", "p_gen_wagon01x", 405,0728f, 108,5046f, 1541,731f, 0,3082116f, 52,52235f, -2,595515f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "nwagon01x1", "p_gen_wagon01x", 403,0171f, 108,5122f, 1547,782f, 177,9286f, 138,8989f, 177,0296f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerItem01x1", "p_gen_crateMultiplayerItem01x", 409,7261f, 108,3928f, 1545,351f, 0.0f, -46,46017f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerItem01x2", "p_gen_crateMultiplayerItem01x", 410,0289f, 108,3928f, 1545,064f, 0.0f, -46,46017f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerItem01x3", "p_gen_crateMultiplayerItem01x", 410,5861f, 108,3928f, 1545,489f, 0.0f, -46,46017f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerItem01x4", "p_gen_crateMultiplayerItem01x", 410,3193f, 108,597f, 1545,743f, 0.0f, -46,46017f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerItem01x5", "p_gen_crateMultiplayerItem01x", 409,8971f, 108,597f, 1545,166f, 0.0f, -46,46017f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x24", "p_bat_flourSack01x", 403,7032f, 108,5993f, 1542,25f, 0.0f, 58,44306f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x25", "p_bat_flourSack01x", 402,8658f, 108,5993f, 1543,88f, 0.0f, 66,49752f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x26", "p_bat_flourSack01x", 402,1163f, 108,6595f, 1545,603f, -7,390171f, 66,28865f, -8,062958f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x27", "p_bat_flourSack01x", 401,4846f, 108,6274f, 1547,328f, -10,49772f, 73,50739f, -11,36543f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x28", "p_bat_flourSack01x", 401,3022f, 108,7227f, 1549,089f, -33,23282f, 84,58438f, -34,40601f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x29", "p_bat_flourSack01x", 401,2979f, 108,8202f, 1550,969f, -107,6696f, 84,03652f, -108,9641f, 1);
	Local_699.f_368 = CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x11", "p_bat_flourSack02x", 400,6299f, 108,3466f, 1551,937f, 0.0f, 17,84182f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ncrate02x3", "p_gen_crate02x", 403,1916f, 108,5319f, 1544,478f, 11,59121f, 74,94587f, 3,337426f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerWeapon01x0", "p_gen_crateMultiplayerWeapon01x", 402,5735f, 108,8683f, 1545,118f, 3,744503f, 70,87244f, 3,962634f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerWeapon01x1", "p_gen_crateMultiplayerWeapon01x", 402,5575f, 108,5873f, 1545,164f, 3,744503f, 70,87244f, 3,962634f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crateMultiplayerWeapon01x2", "p_gen_crateMultiplayerWeapon01x", 416,4292f, 107,3764f, 1537,555f, -3,170882f, 48,81967f, -4,855439f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "ncrate16x9", "p_gen_crate16x", 410,2775f, 108,3946f, 1546,952f, 2,319519f, -48,10269f, -5,430342f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "crate16x10", "p_gen_crate16x", 410,2131f, 108,5943f, 1546,921f, 2,017446f, -39,84898f, -4,99643f, 1);
	CREATE_PROP_IN_LAYOUT(Local_699, "flourSack01x30", "p_bat_flourSack01x", 404,6546f, 108,5448f, 1540,701f, -8,092105f, 58,08849f, -9,508478f, 1);
	Local_699.f_372 = CREATE_PROP_IN_LAYOUT(Local_699, "flourSack02x12", "p_bat_flourSack02x", 406,1143f, 107,98f, 1538,146f, 0.0f, 144,6192f, 0.0f, 1);
	Local_699.f_376 = CREATE_PROP_IN_LAYOUT(Local_699, "flag05x0", "p_gen_flag05x", 408,882f, 108,271f, 1528,83f, 0.0f, 19,158f, 0.0f, 1);
	return;
}

void Function_414(int iParam0, int iParam1) //Position: 0x159B5 / 88501
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

bool Function_415() //Position: 0x159FE / 88574
{
	Function_416(&Local_699 + 4, "p_gen_campfireCombined01x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_crate16x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_crate02x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_crateWeapons01x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_tent01x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_campFire01x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_crateWeapons02x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_lantern05x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_table04x", 0, 0);
	Function_416(&Local_699 + 4, "p_bat_flourSack01x", 0, 0);
	Function_416(&Local_699 + 4, "p_bat_flourSack02x", 0, 0);
	Function_416(&Local_699 + 4, "p_bat_tent03x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_cot01x", 0, 0);
	Function_416(&Local_699 + 4, "p_bat_rockGreatPlains01x", 0, 0);
	Function_416(&Local_699 + 4, "p_bat_wagon02x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_wagonBroken02x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_crateBreak02x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_crateMultiplayerItem01x", 0, 0);
	Function_416(&Local_699 + 4, "p_bat_wagon03x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_wagon01x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_crateMultiplayerWeapon01x", 0, 0);
	Function_416(&Local_699 + 4, "p_gen_flag05x", 0, 0);
	Function_416(&Local_699 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_416(&Local_699 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_indef", 1, 0);
	Function_416(&Local_699 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend_indef", 1, 0);
	if (Function_309(&Local_699 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_416(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x15DBA / 89530
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_417(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_313(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_417(var uParam0, int iParam1, int iParam2) //Position: 0x15DF2 / 89586
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_207(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_313(uParam0[iVar03], 4);
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

void Function_418(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15EB6 / 89782
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
					if (!Function_376(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_376(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_376(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_376(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_376(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_419(bool bParam0) //Position: 0x160B4 / 90292
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	
	bVar0 = false;
	fVar5 = 999999,9f;
	bVar2 = bVar2;
	bVar1 = 4294967295;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (Function_346(bVar4, Global_34573) > fVar5)
		{
			if (IS_ACTOR_ALIVE(bVar4))
			{
				if (!DECOR_CHECK_EXIST(bVar4, "bKill"))
				{
					if (Function_373(bVar4, Global_34573, 30.0f))
					{
						PRINTSTRING(GET_ACTOR_NAME(bVar4));
						PRINTSTRING(" is in range");
						PRINTNL();
						if (Function_422(bVar4, (*&Local_5 + 808)[02], 0,5f))
						{
							bVar1 = bVar0;
							fVar5 = Function_346(bVar4, Global_34573);
							DECOR_SET_BOOL(bVar4, "bKill", true);
						}
						else
						{
							PRINTSTRING(GET_ACTOR_NAME(bVar4));
							PRINTSTRING(" is in range but not behind!");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar1 >= 0)
	{
		PRINTSTRING("iClosestIndex = ");
		PRINTINT(bVar1);
		PRINTNL();
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		Function_421(Local_5.f_992, bVar3);
		fVar5 = 999999,9f;
		bVar1 = 4294967295;
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(Local_5.f_992) - 1))
		{
			bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (DECOR_CHECK_EXIST(bVar4, "oTgt"))
			{
				if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(bVar4, "oTgt"))))
				{
					DECOR_REMOVE(bVar4, "oTgt");
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar2, 30.0f);
				}
			}
			if (Function_346(bVar4, bVar3) > fVar5)
			{
				if (IS_ACTOR_ALIVE(bVar4))
				{
					if (!DECOR_CHECK_EXIST(bVar4, "oTgt"))
					{
						if (MEMORY_GET_IS_VISIBLE(bVar4, bVar3))
						{
							bVar1 = bVar0;
							fVar5 = Function_346(bVar4, bVar3);
						}
					}
				}
			}
			bVar0++;
		}
		if (bVar1 >= 0)
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_992, bVar1);
			SET_ACTOR_ONE_SHOT_DEATH(bVar3, true);
			Function_420(bVar2, bVar3);
			DECOR_SET_OBJECT(bVar2, "oTgt", bVar3);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar2, 200.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar2, 54, 1.0f);
		}
	}
	return;
}

void Function_420(bool bParam0, bool bParam1) //Position: 0x162C2 / 90818
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &uVar0);
	return;
}

void Function_421(bool bParam0, bool bParam1) //Position: 0x162D8 / 90840
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_GOAL_SHOOT_AT_OBJECT(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_422(bool bParam0, bool bParam1, float fParam2) //Position: 0x16325 / 90917
{
	var uVar0;
	vector3 vVar3;
	
	GET_OBJECT_AXIS(bParam1, &uVar0, 2);
	Function_423(bParam0);
	Function_423(bParam1);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_423(bParam1), Function_423(bParam0), StackVal) };
	VNORMALIZE(&vVar3);
	if (VDOT(&vVar3, &uVar0) <= fParam2)
	{
		return 1;
	}
	return 0;
}

vector3 Function_423(bool bParam0) //Position: 0x16358 / 90968
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

void Function_424(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1637F / 91007
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
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!Function_400(bParam1, bVar1, bParam2))
			{
				SQUAD_LEAVE(bVar1);
				RELEASE_ACTOR(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_RIDING(bVar1))
					{
						RELEASE_ACTOR(GET_MOUNT(bVar1));
					}
				}
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
}

void Function_425() //Position: 0x163FE / 91134
{
	if (iLocal_803 < 5 && iLocal_803 > 105)
	{
		Function_342((*&Local_5 + 808)[02]);
		if (iLocal_803 > 7)
		{
			Function_340();
		}
		Function_399(StackVal, StackVal, bLocal_980, *(&Local_5 + 1768[26]), 0x43160000, 0);
	}
	switch (iLocal_803)
	{
		case 0x00000000:
			Function_333(0);
			Function_211();
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1115))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1115);
			}
			SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_826[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_177(1, 0, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_326();
				bLocal_825 = Function_332(StackVal, StackVal, *(&Local_5 + 1460[06]), 0, 1, 1);
				if (!Function_331(bLocal_825))
				{
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_5 + 1460[06]), 1, true, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 1;
			}
			else
			{
				Function_215(&iLocal_937);
				iLocal_803 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_331(bLocal_825) || bLocal_825 != 4294967295)) && Function_415())
			{
				if (!IS_LAYOUTREF_VALID(Local_699))
				{
					Function_413();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_5 + 808)[02], *(&Local_5 + 1460[26]), 1, true, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_455())
			{
				if (Function_270(&iLocal_937) <= 1.0f)
				{
					if (Function_308((*&Local_5 + 808)[02]))
					{
						if (Function_306(Global_34573) || iLocal_826[0])
						{
							TOGGLE_COVER_PROPS(0);
							if (iLocal_826[0] == 0)
							{
								Function_317(1);
								Function_213(&Local_5 + 992);
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								Function_323();
								SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_992, false, 1, 4294967295);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_912, false, 1, 4294967295);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								Function_454();
								SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_1088, false, 1, 4294967295);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								Function_453();
							}
							Function_229(iLocal_802);
							Function_300(StackVal, StackVal, Function_229(iLocal_802), iLocal_802, Global_30637[0], Function_231(iLocal_802), 3);
							DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_821);
							bLocal_977 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "nbackSquad"));
							bLocal_978 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "midSquad"));
							bLocal_979 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "frontSquad"));
							bLocal_980 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "looseHorses"));
							Function_452(bLocal_977, (*&Local_5 + 1224)[0], 0, 2);
							Function_452(bLocal_977, (*&Local_5 + 1224)[1], 0, 2);
							Function_452(bLocal_977, (*&Local_5 + 1224)[2], 0, 2);
							Function_452(bLocal_978, (*&Local_5 + 1244)[0], 0, 4);
							Function_452(bLocal_978, (*&Local_5 + 1244)[1], 0, 4);
							Function_452(bLocal_979, Local_5.f_1344, 0, 4294967295);
							bLocal_952 = 20;
							Function_294(&(Local_1022[017]), bLocal_821, "FBI_Ross", 1, 0x5f5e100, 1);
							Function_294(&(Local_1022[117]), (*&Local_5 + 820)[02], "FBI_Fordham", 1, 0x5f5e100, 1);
							Function_294(&(Local_1022[217]), Local_5.f_992, "AmericanSoldier", 1, 0x5f5e100, 1);
							Function_289(&(Local_1022[217]), 34);
							iLocal_964 = 1;
							Function_294(&(Local_1022[417]), Local_5.f_912, "AmericanSoldier_horse", 1, 0x5f5e100, 1);
							AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
							if (!iLocal_826[0])
							{
								Function_215(&iLocal_937);
								iLocal_803 = 5;
							}
							else
							{
								Function_215(&iLocal_937);
								iLocal_803 = 6;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (Function_352(StackVal, StackVal, *(&Local_5 + 1768[06]), -0,8f, 1))
			{
				DISABLE_GAME_CAMERA_FOCUS();
				Function_215(&iLocal_937);
				iLocal_803 = 6;
			}
			else
			{
				ENABLE_GAME_CAMERA_FOCUS(*(&Local_5 + 1768[06]), -1.0f, 6, 1, 1, 0);
			}
			break;
		
		case 0x00000006:
			if (Function_270(&iLocal_937) < 1.0f || iLocal_826[0])
			{
				if (!HUD_IS_FADED())
				{
					if (!iLocal_963)
					{
						if (Function_270(&iLocal_937) <= 6.0f)
						{
							iLocal_963 = 1;
							Function_451();
						}
					}
					if (Function_270(&iLocal_937) < 20.0f && Function_309(&bLocal_875))
					{
						Function_450();
						AI_GOAL_LOOK_AT_COORD_NEW(bLocal_821, &Local_5 + 1768[06], -1.0f);
						AI_GOAL_LOOK_AT_COORD_NEW((*&Local_5 + 820)[02], &Local_5 + 1768[06], -1.0f);
						AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_IN_CAR", 0, 4294967295, 4294967295, 3212836864, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[02], 0);
						TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_5 + 916)[02], GET_COVER_LOCATION_FROM_OBJECT(Local_5.f_2604), -1.0f, 1086324736);
						Function_449(Local_5.f_992, 0);
						Function_449(Local_5.f_1088, 0);
						Function_448(Local_5.f_1088, 20, 1.0f);
						Function_448(Local_5.f_992, 20, 1.0f);
						Function_215(&iLocal_937);
						iLocal_803 = 7;
					}
				}
				else if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_439();
			Function_435(bLocal_978, 2);
			Function_402();
			PRINTSTRING("iEnemiesTotal = ");
			PRINTINT(bLocal_956);
			PRINTNL();
			PRINTSTRING("numEnemiesLeft = ");
			PRINTINT(bLocal_952);
			PRINTNL();
			if ((bLocal_952 >= 0 && bLocal_956 >= 4) && (GET_CURRENT_GAME_TIME() - fLocal_960) < 3.0f)
			{
				SQUADS_MERGE(bLocal_979, bLocal_977);
				SQUADS_MERGE(bLocal_978, bLocal_977);
				SQUAD_GOALS_CLEAR(bLocal_977);
				Function_318(bLocal_977);
				Function_434(bLocal_977, 10.0f);
				Function_407();
				Function_215(&iLocal_937);
				iLocal_803 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_270(&iLocal_937) <= 2.0f)
			{
				Function_433();
				AI_GOAL_LOOK_CLEAR(bLocal_821);
				AI_GOAL_LOOK_CLEAR((*&Local_5 + 820)[02]);
				Function_215(&iLocal_937);
				iLocal_803 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_270(&iLocal_937) <= 2.0f)
			{
				Function_432();
				Function_431(Local_5.f_992, Local_5.f_912, 1);
				Function_430(Local_5.f_992, Local_5.f_912, 0);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION((*&Local_5 + 820)[02], (*&Local_5 + 808)[02], 0, 2, 0);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_821, (*&Local_5 + 808)[02], 1, 2, 0);
				SQUAD_GOALS_CLEAR(Local_5.f_992);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_992, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_215(&iLocal_937);
				iLocal_803 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_270(&iLocal_937) <= 3.0f)
			{
				Function_215(&iLocal_937);
				iLocal_803 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_427();
			if (IS_ACTOR_RIDING_VEHICLE(bLocal_821) && IS_ACTOR_DRIVING_VEHICLE((*&Local_5 + 820)[02]))
			{
				START_VEHICLE((*&Local_5 + 808)[02]);
				DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 820)[02]);
				TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_5 + 820)[02]);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_5 + 820)[02], Local_5.f_2756, 4, 0, 0, 1, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_5 + 820)[02], true);
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_IN_MOVING_CAR", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_215(&iLocal_937);
				iLocal_803 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_426((*&Local_5 + 820)[02], Local_5.f_2756) > 3.0f || GET_TASK_STATUS((*&Local_5 + 820)[02], 43) != 0)
			{
				TASK_STAND_STILL((*&Local_5 + 820)[02], -1.0f, 0, 0);
				if (Function_361(Local_5.f_992) <= 6)
				{
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_5 + 820)[02], 0.0f);
					STOP_VEHICLE((*&Local_5 + 808)[02]);
				}
				Function_215(&iLocal_937);
				iLocal_803 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_360(Local_5.f_992) <= 6)
			{
				Function_354(Local_5.f_992, 6);
			}
			if (Function_361(Local_5.f_992) > 1)
			{
				Function_449(Local_5.f_992, 1);
				Function_215(&iLocal_937);
				iLocal_803 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_826[1] = 1;
			Function_215(&iLocal_937);
			iLocal_802 = 2;
			iLocal_803 = 0;
			break;
	}
	return;
}

float Function_426(bool bParam0, float fParam1) //Position: 0x16C04 / 93188
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = (GET_PATH_NUM_POINTS(fParam1) - 1);
	GET_PATH_POINT(fParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_269(bParam0);
		vVar4 = { StackVal, StackVal, Function_269(bParam0) };
		return VDIST(vVar4, vVar0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_427() //Position: 0x16C91 / 93329
{
	if (!Function_429(StackVal, StackVal, Local_5.f_912, *(&Local_5 + 2320), 2.0f))
	{
		if (!Function_428(StackVal, StackVal, *(&Local_5 + 2320), 0x3f800000, 0x42960000, 1, 1, 0))
		{
			Function_371(StackVal, StackVal, StackVal, StackVal, Local_5.f_912, *(&Local_5 + 2320), *(&Local_5 + 2320 + 12), 4, 3.0f, 0,5f, 1, 0);
		}
	}
	return;
}

bool Function_428(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7) //Position: 0x16CE7 / 93415
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, uParam7);
}

bool Function_429(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x16D03 / 93443
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_73(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_269(bVar1);
				if (VDIST(Function_269(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_430(bool bParam0, bool bParam1, int iParam2) //Position: 0x16D71 / 93553
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if ((SQUAD_GET_SIZE(bParam1) - 1) > bVar0)
		{
			TASK_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), iParam2, 1, 2, 2147483647);
		}
		else
		{
			PRINTSTRING("SQUAD_MOUNT_HORSESQUAD: Unable to find a mount for ");
			PRINTINT(bVar0);
			PRINTSTRING(": ");
			PRINTSTRING(GET_ACTOR_NAME(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)));
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_431(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16E25 / 93733
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
					Function_388(&bVar0, bVar1, bParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_432() //Position: 0x16EA0 / 93856
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = (SQUAD_GET_SIZE(Local_5.f_992) - SQUAD_GET_SIZE(Local_5.f_912));
	while (iVar1 < 0 && bVar0 > (Function_360(Local_5.f_1088) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_1088, bVar0);
		if (IS_ACTOR_ALIVE(bVar2))
		{
			SQUAD_LEAVE(bVar2);
			SQUAD_JOIN(bVar2, Local_5.f_992);
			iVar1 = (iVar1 - 1);
		}
		bVar0++;
	}
	return;
}

void Function_433() //Position: 0x16F03 / 93955
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI02_EnemysRetreat", "FBI02_EnemysRetreat", false, 2, 1, 0, 1);
		Function_379(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434(bool bParam0, bool bParam1) //Position: 0x16F52 / 94034
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
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_435(bool bParam0, int iParam1) //Position: 0x16F9A / 94106
{
	bool bVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = false;
	iVar1 = 0;
	fVar2 = 99999,9f;
	bVar3 = false;
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_ALIVE(bVar4) && !IS_ACTOR_CRIPPLED(bVar4, 5))
		{
			if (GET_TASK_STATUS(bVar4, 8) != 1 || GET_TASK_STATUS(bVar4, 27) != 1)
			{
				iVar1++;
			}
			else if (Function_346(bVar4, Global_34573) > fVar2)
			{
				fVar2 = Function_346(bVar4, Global_34573);
				bVar3 = bVar0;
			}
		}
		bVar0++;
	}
	bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar3);
	if (iVar1 <= iParam1)
	{
		if (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(bVar4)) != 41)
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar4);
			GIVE_WEAPON_TO_ACTOR(bVar4, 41, 1.0f, 1, 1);
		}
		Function_436(bVar4, Global_34573, 15.0f, 0, -1.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar4, 70.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar4, 13, false);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar4, 15, false);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar4, 9, 0.0f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bVar4, 0.0f, 1.0f);
	}
	return;
}

void Function_436(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x1708A / 94346
{
	bool bVar0;
	
	bVar0 = Function_437(bParam0, uParam2);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
		PRINTSTRING("Failed to find cover location for ");
		PRINTSTRING(GET_ACTOR_NAME(bParam0));
		PRINTSTRING(", shooting from any cover instead.");
		PRINTNL();
		Function_420(bParam0, uParam1);
		TASK_PRIORITY_SET(bParam0, bParam3);
	}
	else
	{
		TASK_SHOOT_FROM_COVER(bParam0, uParam1, bVar0, bParam4, 1086324736);
		TASK_PRIORITY_SET(bParam0, bParam3);
	}
}

var Function_437(bool bParam0, bool bParam1) //Position: 0x17127 / 94503
{
	var uVar0;
	
	Function_438(bParam0, &uVar0);
	return FIND_NEAREST_COVER_LOCATION(&uVar0, bParam1, GET_HEADING(bParam0), 120.0f, 7);
}

void Function_438(bool bParam0, int iParam1) //Position: 0x17146 / 94534
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_439() //Position: 0x17153 / 94547
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	bool bVar8;
	
	bVar1 = false;
	bVar8 = "";
	if (iLocal_957 >= 4)
	{
		iLocal_957 = 0;
	}
	bLocal_956 = ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_977) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_978)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_979));
	switch (iLocal_957)
	{
		case 0x00000000:
			Function_447(Local_5.f_992, 1.0f, 2.0f);
			Function_447(Local_5.f_1088, 2.0f, 2.0f);
			break;
		
		case 0x00000001:
			if (bLocal_952 >= 0)
			{
				if ((8 - bLocal_956) >= 3)
				{
					fLocal_960 = GET_CURRENT_GAME_TIME();
					bVar1 = false;
					while (bVar1 < 3)
					{
						bVar0 = RAND_INT_RANGE(false, (Local_5.f_1768 - 1));
						if (bVar0 == 0)
						{
							bVar8 = Function_445(StackVal, StackVal, bLocal_977, *(&Local_5 + 1768[bVar06]), 120.0f, 0);
						}
						else
						{
							bVar8 = Function_445(StackVal, StackVal, bLocal_977, *(&Local_5 + 1768[bVar06]), 120.0f, 1);
						}
						GET_VOLUME_CENTER(Function_444(bVar8, &Local_5 + 1224), &uVar5);
						bVar4 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &uVar5, 8.0f, 3);
						TASK_DISMOUNT(false, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar8, bVar4);
						TASK_SEQUENCE_RELEASE(bVar4, 1);
						if (IS_ACTOR_VALID(GET_MOUNT(bVar8)))
						{
							SQUAD_JOIN(GET_MOUNT(bVar8), bLocal_980);
						}
						bLocal_952 = (bLocal_952 - 1);
						bVar1++;
					}
				}
			}
			break;
		
		case 0x00000002:
			bVar8 = "";
			iVar2 = Function_442(bLocal_977, &Local_5 + 1224);
			iVar3 = Function_442(bLocal_978, &Local_5 + 1244);
			if (iVar2 >= 1)
			{
				bVar8 = Function_345(bLocal_977, Global_34573, 1, 1);
				if (IS_ACTOR_VALID(bVar8))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar8);
					SQUAD_LEAVE(bVar8);
					SQUAD_JOIN(bVar8, bLocal_978);
					AI_ENABLE_PERCEPTION(bVar8);
				}
			}
			break;
		
		case 0x00000003:
			bVar8 = "";
			iVar3 = Function_442(bLocal_978, &Local_5 + 1244);
			if (iVar3 >= 4)
			{
				bVar8 = Function_345(bLocal_978, Global_34573, 1, 1);
				if (IS_ACTOR_VALID(bVar8))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar8);
					SQUAD_LEAVE(bVar8);
					SQUAD_JOIN(bVar8, bLocal_979);
					AI_ENABLE_PERCEPTION(bVar8);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar8);
					if (RAND_INT_RANGE(false, 10) >= 5)
					{
						GIVE_WEAPON_TO_ACTOR(bVar8, 23, false, 1, 1);
					}
					else
					{
						GIVE_WEAPON_TO_ACTOR(bVar8, 24, false, 1, 1);
						Function_384(bVar8);
					}
				}
			}
			break;
		
		case 0x00000004:
			bVar8 = "";
			iVar2 = Function_442(bLocal_977, &Local_5 + 1224);
			iVar3 = Function_442(bLocal_978, &Local_5 + 1244);
			if (iVar3 >= 0)
			{
				if (Function_270(&iLocal_937) <= fLocal_958)
				{
					bVar8 = Function_345(bLocal_978, Global_34573, 1, 1);
					if (IS_ACTOR_VALID(bVar8))
					{
						Function_440(bVar8, Global_34573, 24, 25.0f, 20.0f, 50.0f);
						Function_384(bVar8);
					}
					fLocal_958 = (5.0f + RAND_FLOAT_RANGE(0.0f, 4.0f));
					Function_215(&iLocal_937);
				}
			}
			else if (iVar2 >= 0)
			{
				if (Function_270(&iLocal_937) <= fLocal_958)
				{
					bVar8 = Function_345(bLocal_977, Global_34573, 1, 1);
					if (IS_ACTOR_VALID(bVar8))
					{
						Function_440(bVar8, Global_34573, 24, 25.0f, 20.0f, 50.0f);
						Function_384(bVar8);
					}
					fLocal_958 = (5.0f + RAND_FLOAT_RANGE(0.0f, 4.0f));
					Function_215(&iLocal_937);
				}
			}
			break;
		
		case 0x00000005:
			bVar1 = false;
			while (bVar1 < (SQUAD_GET_SIZE(bLocal_977) - 1))
			{
				bVar8 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_977, bVar1);
				if (!IS_ACTOR_RIDING(bVar8))
				{
					AI_ENABLE_PERCEPTION(bVar8);
				}
				bVar1++;
			}
			break;
	}
	iLocal_957++;
	return;
}

void Function_440(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1745C / 95324
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_POSITION(bParam1, &vVar3);
	GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar0);
	vVar0.f_4 = 0.0f;
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, RAND_FLOAT_RANGE(bParam4, bParam3));
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vVar3, StackVal) };
	Function_441(StackVal, StackVal, StackVal, StackVal, vVar6, vVar3, RAND_FLOAT_RANGE(((fParam5 / 2.0f) * -1.0f), (fParam5 / 2.0f)));
	vVar6 = { StackVal, StackVal, Function_441(StackVal, StackVal, StackVal, StackVal, vVar6, vVar3, RAND_FLOAT_RANGE(((fParam5 / 2.0f) * -1.0f), (fParam5 / 2.0f))) };
	if (!IS_WEAPONENUM_LOCKED(bParam2))
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, bParam2, false, 1, 1);
		_SET_ACTOR_INFINITE_AMMO_FLAG(bParam0, GET_AMMO_ENUM(bParam2), false);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(bParam2), 1.0f, 0);
		ACTOR_PUT_WEAPON_IN_HAND(bParam0, bParam2, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, false);
		Function_386(StackVal, StackVal, bParam0, vVar6, 10.0f);
		Function_339(bParam0);
		AI_SET_WEAPON_MAX_RANGE(bParam0, (VDIST(Function_339(bParam0), vVar6) + 5.0f));
		TASK_PRIORITY_SET(bParam0, true);
	}
}

vector3 Function_441(vector3 vParam0) //Position: 0x17517 / 95511
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

int Function_442(bool bParam0, int iParam1) //Position: 0x17591 / 95633
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam1 - 1))
	{
		iVar1 = (iVar1 + Function_443(bParam0, (*iParam1)[iVar0]));
		iVar0++;
	}
	return iVar1;
}

int Function_443(bool bParam0, bool bParam1) //Position: 0x175C5 / 95685
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(bVar2, bParam1))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

var Function_444(bool bParam0, bool bParam1) //Position: 0x17617 / 95767
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = 1,001638E+07.0f;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam1 - 1))
	{
		Function_423(bParam0);
		Function_423((*bParam1)[iVar0]);
		if (VDIST(Function_423(bParam0), Function_423((*bParam1)[iVar0])) > bVar2)
		{
			Function_423(bParam0);
			Function_423((*bParam1)[iVar0]);
			bVar2 = VDIST(Function_423(bParam0), Function_423((*bParam1)[iVar0]));
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return (*bParam1)[iVar1];
}

var Function_445(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5) //Position: 0x17674 / 95860
{
	bool bVar0;
	bool bVar1;
	
	if (bParam5)
	{
		Function_75();
		bVar1 = CREATE_ACTOR_IN_LAYOUT(Local_5, Function_53(), Function_359(), vParam1, Function_75());
		Function_75();
		bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, Function_53(), Function_446(), vParam1, Function_75());
		ACTOR_MOUNT_ACTOR(bVar0, bVar1);
		Function_355(bVar1, Global_34573);
	}
	else
	{
		Function_75();
		bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, Function_53(), Function_446(), vParam1, Function_75());
		Function_355(bVar0, Global_34573);
		SET_ACTOR_POSTURE(bVar0, 1);
	}
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bVar0, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, false, 1, 1);
	if (bParam4 <= 0.0f)
	{
		SET_ACTOR_VISION_MAX_RANGE(bVar0, bParam4, 1);
	}
	SET_ACTOR_VISION_XRAY(bVar0, true);
	SQUAD_JOIN(bVar0, bParam0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 120.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 90.0f);
	AI_ACTOR_FORCE_SPEED(bVar0, 3);
	AI_SHOOT_TARGET_SET_BONE(bVar0, Global_34573, "head");
	Function_388(&bVar0, Global_34573, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	AI_GOAL_SHOOT_AT_OBJECT(bVar0, Global_34573);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 54, 1.0f);
	return bVar0;
}

int Function_446() //Position: 0x17771 / 96113
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = RAND_INT_RANGE(false, 5);
	switch (bVar0)
	{
		case 0x00000000:
			return 470;
			break;
		
		case 0x00000001:
			return 471;
			break;
		
		case 0x00000002:
			return 472;
			break;
		
		case 0x00000003:
			return 474;
			break;
		
		case 0x00000004:
			return 475;
			break;
		
		case 0x00000005:
			return 476;
			break;
	}
	return 470;
}

void Function_447(bool bParam0, float fParam1, float fParam2) //Position: 0x177D9 / 96217
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	
	bVar0 = false;
	if (!DECOR_CHECK_EXIST(bParam0, "fUpdateFreq"))
	{
		DECOR_SET_FLOAT(bParam0, "fUpdateFreq", 1.0f);
	}
	if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bParam0, "fUpdateFreq")) < fParam2)
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (Function_265(bVar1, 0) > 1,5f)
			{
				if (Function_360(bLocal_978) >= 0)
				{
					bVar2 = Function_345(bLocal_978, bVar1, 1, 0);
				}
				else
				{
					bVar2 = Function_345(bLocal_977, bVar1, 1, 0);
				}
				if (Function_373(bVar2, bVar1, 150.0f))
				{
					GET_POSITION(bVar2, &vVar3);
					PRINTSTRING("position of target = ");
					PRINTVECTOR(vVar3);
					PRINTNL();
					GET_OBJECT_AXIS(bVar2, &vVar6, 0);
					VSCALE(&vVar6, RAND_FLOAT_RANGE(-5.0f, 5.0f));
					vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar6, vVar3, StackVal) };
					vVar3.f_4 = (vVar3.y + RAND_FLOAT_RANGE(0,1f, 5.0f));
					PRINTSTRING("after adjustment = ");
					PRINTVECTOR(vVar3);
					PRINTNL();
					Function_386(StackVal, StackVal, bVar1, vVar3, -1.0f);
					if (fParam1 < 0.0f)
					{
						if (GET_TASK_STATUS(bVar1, 33) != 1)
						{
							TASK_CROUCH(bVar1, -1.0f);
							fParam1 = (fParam1 - 1.0f);
						}
					}
					DECOR_SET_FLOAT(bParam0, "fUpdateFreq", GET_CURRENT_GAME_TIME());
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_448(bool bParam0, int iParam1, bool bParam2) //Position: 0x17953 / 96595
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

void Function_449(bool bParam0, bool bParam1) //Position: 0x1799D / 96669
{
	bool bVar0;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (bParam1)
		{
			AI_ENABLE_PERCEPTION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		}
		else
		{
			AI_DISABLE_PERCEPTION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		}
		bVar0++;
	}
	return;
}

void Function_450() //Position: 0x179E4 / 96740
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_SpotsEnemsHorizon", "FBI02_SpotsEnemsHorizon", false, 2, 1, 0, 1);
		Function_379(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_451() //Position: 0x17A3B / 96827
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_WaitEnemAttaks", "FBI02_WaitEnemAttaks", false, 2, 1, 0, 1);
		Function_379(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_452(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x17A8C / 96908
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return iVar0;
	}
	iVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, iParam2, bParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, iVar0);
	return iVar0;
}

void Function_453() //Position: 0x17AC7 / 96967
{
	RELEASE_ACTOR((*&Local_5 + 996)[52]);
	RELEASE_ACTOR((*&Local_5 + 996)[62]);
	RELEASE_ACTOR((*&Local_5 + 996)[72]);
	RELEASE_ACTOR((*&Local_5 + 996)[82]);
	SQUAD_GOALS_CLEAR(Local_5.f_1088);
	Function_318(Local_5.f_1088);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_5 + 996)[42], GET_COVER_LOCATION_FROM_OBJECT(Local_5.f_2596), -1.0f, 1086324736);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_5 + 996)[102], GET_COVER_LOCATION_FROM_OBJECT(Local_5.f_2592), -1.0f, 1086324736);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_5 + 996)[92], GET_COVER_LOCATION_FROM_OBJECT(Local_5.f_2600), -1.0f, 1086324736);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_5.f_1088, 0, Local_5.f_1336, 4);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_5.f_1088, 5, Local_5.f_1340, 4294967295);
	SQUAD_GOALS_CLEAR(Local_5.f_992);
	Function_318(Local_5.f_992);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_5.f_992, 0, Local_5.f_1324, 3);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_5.f_992, 0, Local_5.f_1328, 2);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_5.f_992, 0, Local_5.f_1332, 3);
	TASK_USE_GRINGO((*&Local_5 + 916)[02], GET_GRINGO_FROM_OBJECT(Local_699.f_316), "UseCase1", 4294967295, 2);
	return;
}

void Function_454() //Position: 0x17BD8 / 97240
{
	Local_5.f_1088 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "nRearGuard"));
	(*&Local_5 + 996)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard1", 373, 453,8115f, 101,5502f, 1516,708f, 0.0f, 302,9411f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[02], Local_5.f_1088);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[02], 13, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_5 + 996)[02], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[02], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[02], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[02], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[02], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[02], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[02], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[02], 13, true);
	(*&Local_5 + 996)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard2", 374, 453,2494f, 101,5224f, 1515,108f, 0.0f, -59,61174f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[12], Local_5.f_1088);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[12], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[12], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[12], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[12], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[12], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[12], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[12], 13, true);
	(*&Local_5 + 996)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard3", 373, 418,3743f, 106,6682f, 1523,332f, 0.0f, -70,41425f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[22], Local_5.f_1088);
	AI_GOAL_LOOK_AT_ACTOR((*&Local_5 + 996)[22], Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[22], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[22], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[22], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[22], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[22], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[22], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[22], 13, true);
	(*&Local_5 + 996)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard4", 372, 419,9846f, 106,5184f, 1525,123f, 0.0f, -27,33479f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[32], Local_5.f_1088);
	AI_GOAL_LOOK_AT_ACTOR((*&Local_5 + 996)[32], Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[32], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[32], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[32], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[32], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[32], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[32], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[32], 13, true);
	(*&Local_5 + 996)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard5", 371, 394,3388f, 118,5625f, 1472f, 0.0f, 147,6008f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[42], Local_5.f_1088);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[42], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[42], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[42], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[42], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[42], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[42], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[42], 13, true);
	(*&Local_5 + 996)[52] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard6", 370, 420,4122f, 106,8644f, 1533,038f, 0.0f, 218,0132f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[52], Local_5.f_1088);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 996)[52], 0);
	AI_GOAL_LOOK_AT_ACTOR((*&Local_5 + 996)[52], Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[52]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[52], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[52], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[52], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[52], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[52], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[52], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[52], 13, true);
	(*&Local_5 + 996)[62] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard7", 369, 419,2176f, 107,0408f, 1534,097f, 0.0f, 222,8706f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[62], Local_5.f_1088);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 996)[62], 0);
	AI_GOAL_LOOK_AT_ACTOR((*&Local_5 + 996)[62], Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[62]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[62], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[62], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[62], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[62], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[62], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[62], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[62], 13, true);
	(*&Local_5 + 996)[72] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard8", 378, 411,593f, 108,0688f, 1540,804f, 0.0f, -93,45993f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[72], Local_5.f_1088);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[72]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[72], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[72], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[72], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[72], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[72], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[72], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[72], 13, true);
	(*&Local_5 + 996)[82] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard9", 375, 413,9012f, 107,6956f, 1540,845f, 0.0f, 82,24022f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[82], Local_5.f_1088);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[82]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[82], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[82], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[82], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[82], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[82], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[82], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[82], 13, true);
	(*&Local_5 + 996)[92] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard10", 373, 393,0771f, 118,657f, 1471,106f, 0.0f, 127,7862f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[92], Local_5.f_1088);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[92]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[92], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[92], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[92], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[92], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[92], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[92], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[92], 13, true);
	(*&Local_5 + 996)[102] = CREATE_ACTOR_IN_LAYOUT(Local_5, "rearGuard11", 374, 394,957f, 118,4667f, 1472,995f, 0.0f, 154,1053f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 996)[102], Local_5.f_1088);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 996)[102]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 996)[102], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 996)[102], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_5 + 996)[102], 0.0f);
	AI_RIDING_SET_ENABLED((*&Local_5 + 996)[102], 0);
	SET_ACTOR_VISION_XRAY((*&Local_5 + 996)[102], true);
	AI_SET_WEAPON_MAX_RANGE((*&Local_5 + 996)[102], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_5 + 996)[102], 13, true);
	return;
}

bool Function_455() //Position: 0x18481 / 99457
{
	Function_316(&Local_5 + 504, 378, 2, 0);
	if (Function_309(&Local_5 + 504))
	{
		return 1;
	}
	return 0;
}

void Function_456() //Position: 0x184A3 / 99491
{
	if (iLocal_803 < 4 && iLocal_803 > 105)
	{
		SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
		Function_516(Local_5.f_992, 7.0f);
		Function_516(Local_5.f_1088, 7.0f);
		Function_513();
		Function_509();
		Function_342((*&Local_5 + 808)[02]);
		if (iLocal_803 <= 11)
		{
			Function_341(Local_5.f_2720);
		}
		Function_508();
		Function_494();
		if (SQUAD_IS_VALID(Local_5.f_1164))
		{
			if (!DECOR_CHECK_EXIST(Local_5.f_1164, "bFlyAway"))
			{
				if (Function_493(Global_34573, Local_5.f_1164, 1, 0, 0, 3212836864))
				{
					Function_318(Local_5.f_1164);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_1164, false, 1, 4294967295);
					TASK_BIRD_SOAR_AT_COORD(false, &Local_5 + 2344, -1.0f, 1106247680);
					Function_492();
					DECOR_SET_BOOL(Local_5.f_1164, "bFlyAway", true);
				}
			}
		}
		if (IS_ACTOR_VALID((*&Local_5 + 996)[12]))
		{
			if (!DECOR_CHECK_EXIST((*&Local_5 + 996)[12], "bSpoke"))
			{
				if (!HUD_IS_FADED())
				{
					if (Function_373(Global_34573, (*&Local_5 + 996)[12], 24.0f))
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_5 + 820)[02], 4.0f);
						Function_491();
						DECOR_SET_BOOL((*&Local_5 + 996)[12], "bSpoke", true);
					}
				}
			}
		}
		Function_489();
		if (iLocal_803 <= 9)
		{
			Function_488();
		}
	}
	switch (iLocal_803)
	{
		case 0x00000000:
			Function_333(0);
			CLEAR_LAST_ATTACK(Global_34573);
			iLocal_966 = 0;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(50);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_825 = Function_332(StackVal, StackVal, *(&Local_5 + 1404[06]), 0, 1, 1);
			if (!Function_331(bLocal_825))
			{
			}
			Function_326();
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_5 + 1404[06]), 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_821, *(&Local_5 + 1404[16]), 1, true, 1);
			Function_324(10, 0, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_317(1);
			Function_213(&Local_5 + 992);
			Function_213(&Local_5 + 912);
			Function_215(&iLocal_943);
			Function_215(&iLocal_937);
			iLocal_803 = 1;
			break;
		
		case 0x00000001:
			Function_477();
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_331(bLocal_825) || bLocal_825 != 4294967295)
				{
					if (Function_476())
					{
						if (Function_309(&bLocal_838))
						{
							if (MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
							{
								Function_218(1);
								Function_215(&iLocal_937);
								iLocal_803 = 2;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_308((*&Local_5 + 808)[02]))
			{
				Function_299();
				Function_475();
				Function_472();
				Function_471();
				Function_470();
				Function_469();
				TOGGLE_COVER_PROPS(0);
				Function_215(&iLocal_937);
				iLocal_803 = 3;
				if (Function_330(&Local_795))
				{
					Function_468();
				}
				Function_229(iLocal_802);
				Function_300(StackVal, StackVal, Function_229(iLocal_802), iLocal_802, Global_30637[0], Function_231(iLocal_802), 3);
			}
			break;
		
		case 0x00000003:
			if (Function_477())
			{
				Function_215(&iLocal_937);
				iLocal_803 = 4;
			}
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			START_VEHICLE((*&Local_5 + 808)[02]);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_821);
			Function_294(&(Local_1022[017]), bLocal_821, "FBI_Ross", 1, 0x5f5e100, 1);
			Function_294(&(Local_1022[117]), (*&Local_5 + 820)[02], "FBI_Fordham", 1, 0x5f5e100, 1);
			Function_216(&iLocal_940, 10.0f);
			bLocal_1114 = CREATE_EVENT_TRAP("shootNearSoldiers", 5, Local_5);
			EVENT_TRAP_ON_VOLUME(bLocal_1114, Local_5.f_1400);
			Function_215(&iLocal_937);
			iLocal_803 = 5;
			break;
		
		case 0x00000005:
			if ((Function_270(&iLocal_937) < 2.0f || !HUD_IS_FADED()) && Function_307(Global_34573))
			{
				TASK_FOLLOW_PATH((*&Local_5 + 820)[02], Local_5.f_2720, 4, 1, 0, 1, false);
				UI_SHOW("reticule");
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_215(&iLocal_937);
				iLocal_803 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "DRAMATIC_IN_CAR", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_215(&iLocal_937);
				iLocal_803 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_268(StackVal, StackVal, Global_34573, *(&Local_5 + 2164), 250.0f))
			{
				if (Function_415())
				{
					if (!IS_LAYOUTREF_VALID(Local_699))
					{
						Function_413();
					}
				}
			}
			if ((Function_268(StackVal, StackVal, Global_34573, *(&Local_5 + 2164), 15.0f) && iLocal_954 >= 1) || Function_463())
			{
				Function_218(0);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1115))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1115);
				}
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				bLocal_953 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_ACTION_PERFORM(false, "FBI02_soldiers_stn/Soldiers_pre");
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_5 + 996)[02], bLocal_953);
				TASK_SEQUENCE_RELEASE(bLocal_953, 1);
				AI_GOAL_LOOK_AT_ACTOR((*&Local_5 + 996)[02], Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
				TASK_FACE_ACTOR((*&Local_5 + 996)[12], Global_34573, 1, 3212836864);
				Function_211();
				Function_455();
				Function_215(&iLocal_937);
				iLocal_803 = 8;
			}
			break;
		
		case 0x00000008:
			if (!DECOR_CHECK_EXIST((*&Local_5 + 916)[02], "bLooking"))
			{
				if (IS_ACTOR_VALID((*&Local_5 + 916)[02]))
				{
					if (Function_400(bLocal_821, (*&Local_5 + 916)[02], 30.0f))
					{
						Function_462(Local_5.f_992, Global_34573);
						AI_GOAL_LOOK_CLEAR((*&Local_5 + 916)[02]);
						AI_GOAL_LOOK_AT_ACTOR((*&Local_5 + 916)[02], bLocal_821, 1, 1065353216, 3212836864, 3212836864, 0);
						RESET_ANIM_SET_FOR_ACTOR((*&Local_5 + 916)[02], 1);
						TASK_FACE_ACTOR((*&Local_5 + 916)[02], bLocal_821, 1, 3212836864);
						DECOR_SET_BOOL((*&Local_5 + 916)[02], "bLooking", true);
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME((*&Local_5 + 808)[02], Local_5.f_1312))
			{
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING((*&Local_5 + 820)[02], 1);
				AI_GOAL_LOOK_AT_ACTOR(bLocal_821, (*&Local_5 + 916)[02], 1, 1065353216, 3212836864, 3212836864, 0);
				AI_GOAL_LOOK_AT_ACTOR((*&Local_5 + 820)[02], (*&Local_5 + 916)[02], 1, 1065353216, 3212836864, 3212836864, 0);
				SET_ACTOR_CAN_PLAY_BORED_IDLES((*&Local_5 + 916)[02], 0);
				Function_461();
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_5 + 820)[02], 0.0f);
				STOP_VEHICLE((*&Local_5 + 808)[02]);
				TASK_STAND_STILL((*&Local_5 + 820)[02], -1.0f, 0, 0);
				SQUAD_GOALS_CLEAR(Local_5.f_992);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_992, false, 1, 4294967295);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				Function_215(&iLocal_937);
				iLocal_803 = 9;
			}
			break;
		
		case 0x00000009:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_270(&iLocal_937) <= 10.0f) || Function_270(&iLocal_937) <= 35.0f)
			{
				if (IS_OBJECT_VALID(bLocal_1114))
				{
					DESTROY_OBJECT(bLocal_1114);
				}
				AI_GOAL_LOOK_CLEAR(bLocal_821);
				AI_GOAL_LOOK_CLEAR((*&Local_5 + 820)[02]);
				AI_GOAL_LOOK_CLEAR((*&Local_5 + 916)[02]);
				Function_460(Local_5.f_992);
				Function_460(Local_5.f_1088);
				iLocal_954 = 0;
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_215(&iLocal_937);
				iLocal_803 = 10;
			}
			else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_270(&iLocal_940) < 1.0f)
				{
					Function_461();
					Function_215(&iLocal_940);
				}
			}
			break;
		
		case 0x0000000A:
			Function_457();
			if (Function_270(&iLocal_937) <= 1.0f)
			{
				START_VEHICLE((*&Local_5 + 808)[02]);
				TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_5 + 820)[02]);
				TASK_FOLLOW_PATH((*&Local_5 + 820)[02], Local_5.f_2724, 2, 0, 0, 1, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_5 + 820)[02], true);
				Function_215(&iLocal_937);
				iLocal_803 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_457();
			if ((Function_426((*&Local_5 + 820)[02], Local_5.f_2724) > 3.0f || GET_TASK_STATUS((*&Local_5 + 820)[02], 16) != 0) || GET_TASK_STATUS((*&Local_5 + 820)[02], 16) != 4)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_5 + 820)[02], 0.0f);
				STOP_VEHICLE((*&Local_5 + 808)[02]);
				AI_ACTOR_FORCE_SPEED((*&Local_5 + 820)[02], 5);
				TASK_STAND_STILL((*&Local_5 + 820)[02], -1.0f, 0, 0);
				Function_215(&iLocal_937);
				iLocal_803 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_457();
			if (Function_265((*&Local_5 + 820)[02], 0) > 1.0f)
			{
				Function_215(&iLocal_937);
				iLocal_803 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_204(&bLocal_838);
			Function_211();
			iLocal_826[0] = 1;
			Function_215(&iLocal_937);
			iLocal_802 = 1;
			iLocal_803 = 0;
			break;
	}
	return;
}

void Function_457() //Position: 0x18D68 / 101736
{
	var uVar0;
	
	switch (iLocal_954)
	{
		case 0x00000000:
			SQUAD_COMPUTE_CENTROID(Local_5.f_992, &uVar0);
			TASK_FACE_COORD((*&Local_5 + 916)[02], &uVar0, 1);
			Function_215(&iLocal_946);
			iLocal_954 = 1;
			break;
		
		case 0x00000001:
			if (Function_270(&iLocal_946) <= 1,5f)
			{
				SAY_SINGLE_LINE_SCRIPTED((*&Local_5 + 916)[42], "FBI02_InFormation_v1_AB", false, 1, 1, 0, 0, 0);
				Function_215(&iLocal_946);
				iLocal_954 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_270(&iLocal_946) <= 1,5f)
			{
				Function_215(&iLocal_946);
				iLocal_954 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_270(&iLocal_946) <= 1,5f)
			{
				Function_459(Local_5.f_992, 0);
				Function_453();
				Function_215(&iLocal_946);
				iLocal_954 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_270(&iLocal_946) <= 1,5f)
			{
				Function_458();
				Function_215(&iLocal_946);
				iLocal_954 = 5;
			}
			break;
	}
	return;
}

void Function_458() //Position: 0x18E64 / 101988
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_MovePositions_v1_AA", "FBI02_MovePositions_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI01_RideOutDutch_v2_AB", "FBI01_RideOutDutch_v2_AB", true, 2, 1, 0, 1);
		Function_379(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_459(bool bParam0, int iParam1) //Position: 0x18EFE / 102142
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
			RESET_ANIM_SET_FOR_ACTOR(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_460(bool bParam0) //Position: 0x18F3E / 102206
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_GOAL_LOOK_CLEAR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_461() //Position: 0x18F7F / 102271
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_RossTalksAtCamp_v1_AA", "FBI02_RossTalksAtCamp_v1_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "FBI02_RossTalksAtCamp_v1_AB", "FBI02_RossTalksAtCamp_v1_AB", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_RossTalksAtCamp_v1_AC", "FBI02_RossTalksAtCamp_v1_AC", false, 2, 0, 0, 1);
		Function_379(19);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462(bool bParam0, bool bParam1) //Position: 0x19069 / 102505
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
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_GOAL_LOOK_AT_ACTOR(bVar1, bParam1, 1, 1.0f, 1000.0f, 1001.0f, 1);
		}
		bVar0++;
	}
	return;
}

int Function_463() //Position: 0x190C3 / 102595
{
	vector3 vVar0;
	
	switch (iLocal_954)
	{
		case 0x00000000:
			if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1115))
			{
				bLocal_1115 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, 6, false, 0, 0, 0, 4294967295, 0);
				iLocal_954 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1115))
			{
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1115))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1115);
					Function_85(17, 1, 0, 0);
					HUD_CLEAR_SMALL_TEXT();
					ABORT_SCRIPTED_CONVERSATION(0);
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
					iLocal_954 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				if (IS_LAYOUTREF_VALID(Local_699))
				{
					SET_ACTOR_SPEED((*&Local_5 + 808)[02], 0.0f);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_5 + 808)[02], *(&Local_5 + 2164), 1, true, 1);
					if (IS_VOLUME_VALID((*&Local_5 + 1260)[4]))
					{
						Function_467(Local_5.f_1168);
						Function_467(Local_5.f_1172);
						DESTROY_VOLUME((*&Local_5 + 1260)[4]);
						Function_213(&Local_5 + 1176);
						Function_466();
						Function_464();
						Function_218(0);
					}
					TASK_STAND_STILL((*&Local_5 + 820)[02], -1.0f, 0, 0);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					iLocal_954 = 3;
				}
				else if (Function_415())
				{
					if (!IS_LAYOUTREF_VALID(Local_699))
					{
						iLocal_965 = 1;
						Function_413();
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Function_268(StackVal, StackVal, (*&Local_5 + 808)[02], *(&Local_5 + 2164), 5.0f))
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (!IS_VEHICLE_ENGINE_RUNNING((*&Local_5 + 808)[02]))
					{
						START_VEHICLE((*&Local_5 + 808)[02]);
					}
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_5 + 820)[02], Local_5.f_2720, 4, 1, 0, 1, false);
					iLocal_954 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (Function_306(Global_34573))
			{
				ACTIVATE_PHYSINST(GET_PHYSINST_FROM_ACTOR((*&Local_5 + 808)[02]));
				vVar0 = { 0.0f, -0,1f, 0.0f };
				SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR((*&Local_5 + 808)[02]), &vVar0);
				ACTIVATE_PHYSINST(GET_PHYSINST_FROM_ACTOR((*&Local_5 + 820)[02]));
				vVar0 = { 0.0f, -0,1f, 0.0f };
				SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR((*&Local_5 + 820)[02]), &vVar0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				AI_ACTOR_FORCE_SPEED((*&Local_5 + 820)[02], 4);
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_954 = 5;
			}
			break;
		
		case 0x00000005:
			if (!HUD_IS_FADING())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_464() //Position: 0x192FB / 103163
{
	if (SQUAD_IS_VALID(Local_5.f_992))
	{
		Function_273(&Local_5 + 992);
		DESTROY_OBJECT(Local_5.f_992);
	}
	if (SQUAD_IS_VALID(Local_5.f_912))
	{
		Function_273(&Local_5 + 912);
		DESTROY_OBJECT(Local_5.f_912);
	}
	Function_322();
	Function_323();
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_5 + 916)[02], 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_992, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_912, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_454();
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_1088, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_USE_GRINGO((*&Local_5 + 996)[12], GET_GRINGO_FROM_OBJECT(Local_699.f_308), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO((*&Local_5 + 996)[42], GET_GRINGO_FROM_OBJECT(Local_699.f_312), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO((*&Local_5 + 996)[32], GET_GRINGO_FROM_OBJECT(Local_699.f_320), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO((*&Local_5 + 996)[22], GET_GRINGO_FROM_OBJECT(Local_699.f_324), "UseCase1", 4294967295, 1);
	Function_465();
	SET_ANIM_SET_FOR_ACTOR((*&Local_5 + 996)[02], "FBI02_soldiers_stn", 0);
	SET_ACTION_NODE_FOR_ACTOR((*&Local_5 + 996)[02], "FBI02_soldiers_stn/Soldiers_idl");
	Function_294(&(Local_1022[217]), Local_5.f_992, "AmericanSoldier", 1, 0x5f5e100, 1);
	Function_289(&(Local_1022[217]), 42);
	Function_294(&(Local_1022[317]), Local_5.f_1088, "AmericanSoldier", 1, 0x5f5e100, 1);
	Function_289(&(Local_1022[317]), 42);
	Function_294(&(Local_1022[417]), Local_5.f_912, "AmericanSoldier_horse", 1, 0x5f5e100, 1);
	Function_289(&(Local_1022[417]), 42);
	return;
}

void Function_465() //Position: 0x194FB / 103675
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_5.f_992) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_992, bVar0);
		ACTOR_DRAW_ANY_WEAPON(bVar1, 0);
		RESET_ANIM_SET_FOR_ACTOR(bVar1, 0);
		SET_ANIM_SET_FOR_ACTOR(bVar1, "fbi02_rifle_stand", 0);
		switch (RAND_INT_RANGE(false, 2))
		{
			case 0x00000000:
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "fbi02_rifle_stand/A");
				break;
			
			case 0x00000001:
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "fbi02_rifle_stand/B");
				break;
			
			case 0x00000002:
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "fbi02_rifle_stand/C");
				break;
		}
		bVar0++;
	}
	RESET_ANIM_SET_FOR_ACTOR((*&Local_5 + 916)[02], 0);
	SET_ANIM_SET_FOR_ACTOR((*&Local_5 + 916)[02], "fbi_commander", 0);
	SET_ACTION_NODE_FOR_ACTOR((*&Local_5 + 916)[02], "fbi_commander/talking");
	return;
}

void Function_466() //Position: 0x19619 / 103961
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_5.f_1164 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "theBirds"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "bird1", 1132, 567,7019f, 89,29438f, 1411,659f, 0.0f, 175,0234f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1164);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "bird2", 1132, 567,3667f, 89,31069f, 1413,338f, 0.0f, 358,2055f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1164);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "bird3", 1132, 567,3114f, 89,63567f, 1412,429f, 0.0f, 238,8174f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1164);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "bird4", 1132, 567,9818f, 89,19457f, 1412,028f, 0.0f, 238,8174f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1164);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "bird5", 1132, 568,3037f, 89,19457f, 1411,766f, 0.0f, 219,1082f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1164);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "bird6", 1132, 567,6915f, 89,32242f, 1412,504f, 0.0f, 113,533f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1164);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	return;
}

void Function_467(bool bParam0) //Position: 0x1979B / 104347
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

void Function_468() //Position: 0x197E0 / 104416
{
	bool bVar0;
	
	bVar0 = GET_GRINGO_FROM_OBJECT(bLocal_972);
	TELEPORT_OBJECT_TO_OBJECT(Global_34573, bLocal_972, 0.0f, 0.0f, 0,5f, 0.0f, 0.0f, 0.0f, 1065353216);
	GRINGO_SET_USABLE_BY_PLAYER(bVar0, "MaximShootTruck", 0);
	GRINGO_SET_USABLE_BY_PLAYER(bVar0, "MaximShoot", 1);
	SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_972, "MaximShoot", true, 0, 0);
	UI_HIDE("reticule");
	return;
}

void Function_469() //Position: 0x1985A / 104538
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bLocal_971))
	{
		REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(bLocal_971));
		GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT((*&Local_5 + 808)[02]), "gattling_attach", &vVar0, &vVar3);
		ATTACH_OBJECTS(bLocal_971, (*&Local_5 + 808)[02], Function_53(), vVar0, vVar3, 4294967295);
	}
	return;
}

void Function_470() //Position: 0x198B2 / 104626
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_5.f_1176) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_1176, bVar0);
		TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
		ACTOR_PUT_WEAPON_IN_HAND(bVar1, 13, 0);
		SET_ANIM_SET_FOR_ACTOR(bVar1, "FBI02_soldiers_stn", 0);
		SET_ACTION_NODE_FOR_ACTOR(bVar1, "FBI02_soldiers_stn/Soldiers_idl");
		if (bVar0 >= 0)
		{
			AI_GOAL_LOOK_AT_NEUTRAL(bVar1, -1.0f);
		}
		else
		{
			AI_GOAL_LOOK_AT_ACTOR(bVar1, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
		}
		bVar0++;
	}
	return;
}

void Function_471() //Position: 0x1995B / 104795
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_5.f_1176 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "blkArmy"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "blkArmy_sgt", 375, 785,4946f, 78,30585f, 1249,259f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "nblkArmy_1", 374, 785,5227f, 78,30585f, 1256,132f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "nblkArmy_8", 369, 784,0264f, 78,30585f, 1252,65f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "nblkArmy_2", 373, 785,5715f, 78,30585f, 1254,398f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "nblkArmy_3", 371, 784,1702f, 78,30585f, 1254,592f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "nblkArmy_4", 370, 784,1055f, 78,30585f, 1256,07f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "nblkArmy_5", 372, 785,4901f, 78,30586f, 1250,917f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "nblkArmy_6", 373, 785,4409f, 78,30585f, 1252,668f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "nblkArmy_7", 369, 784,0623f, 78,30585f, 1250,865f, 0.0f, -89,76551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_5.f_1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	return;
}

void Function_472() //Position: 0x19C7F / 105599
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_5.f_1172 = CREATE_OBJECTSET_IN_LAYOUT("townFolk_2", Local_5, 15, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_3", 52, 745,9465f, 78,30585f, 1389,185f, 0.0f, -66,81185f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1172);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = Function_473(Local_5, "townGuy_speaker_5", 87, Function_53(), 984, 772,0708f, 78,30721f, 1387,651f, 0.0f, -68,87864f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1172);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = Function_473(Local_5, "horseGuy_rdm_1", 228, Function_53(), 985, 773,0982f, 78,30721f, 1390,311f, 0.0f, -68,87864f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1172);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "walker1_rdm_1", 53, 745,6218f, 78,30585f, 1387,688f, 0.0f, -74,80203f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1172);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "walker2_rdm_1", 89, 728,213f, 78,30585f, 1381,394f, 0.0f, 183,5235f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1172);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "walker2_rdm_2", 87, 729,435f, 78,30585f, 1381,815f, 0.0f, 178,893f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1172);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	return;
}

bool Function_473(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x19F0E / 106254
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_474(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_474(bParam4))
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

bool Function_474(int iParam0) //Position: 0x1A033 / 106547
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_475() //Position: 0x1A04A / 106570
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_5.f_1168 = CREATE_OBJECTSET_IN_LAYOUT("townFolk_1", Local_5, 15, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_1", 160, 796,5785f, 78,30591f, 1325,698f, 0.0f, 195,8002f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_2", 161, 798,4022f, 78,47489f, 1293,726f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_6", 45, 780,794f, 78,30585f, 1345,855f, 0.0f, -25,31391f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_rdm_1", 96, 801,4587f, 78,47489f, 1292,484f, 0.0f, -50,79493f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_rdm_2", 151, 802,3169f, 78,47489f, 1291,784f, 0.0f, -237,1222f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_rdm_3", 169, 796,2884f, 79,6116f, 1264,465f, 0.0f, 83,33788f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_PRIORITY_SET(bVar0, 2);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_rdm_4", 166, 796,274f, 79,6116f, 1263,737f, 0.0f, 83,33788f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_PRIORITY_SET(bVar0, 2);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_rdm_5", 89, 779,9691f, 78,30585f, 1294,843f, 0.0f, 183,6397f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_rdm_6", 223, 780,1486f, 78,30585f, 1295,922f, 0.0f, 4,356511f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "ngun_rdm_1", 87, 780,0002f, 78,30585f, 1312,527f, 0.0f, -2,961067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_4", 229, 780,7594f, 78,30585f, 1312,28f, 0.0f, 29,90821f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "ngun_rdm_3", 146, 780,0002f, 78,30585f, 1311,137f, 0.0f, 211,3952f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "fact_rdm_1", 41, 796,6411f, 78,30591f, 1327,522f, 0.0f, 7,898496f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "fact_rdm_2", 159, 799,027f, 78,30591f, 1327,48f, 0.0f, -39,18901f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "fact_rdm_3", 158, 800,4258f, 78,30591f, 1325,725f, 0.0f, 132,8452f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_5, "townGuy_rdm_7", 44, 781,2634f, 78,30585f, 1346,459f, 0.0f, -25,31391f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar0, Local_5.f_1168);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(bVar0, Global_34573, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	TASK_PRIORITY_SET(bVar0, 2);
	return;
}

bool Function_476() //Position: 0x1A6A9 / 108201
{
	Function_316(&Local_5 + 236, 378, 2, 0);
	Function_316(&Local_5 + 236, 1132, 2, 0);
	Function_316(&Local_5 + 236, 160, 2, 0);
	Function_316(&Local_5 + 236, 161, 2, 0);
	Function_316(&Local_5 + 236, 45, 2, 0);
	Function_316(&Local_5 + 236, 96, 2, 0);
	Function_316(&Local_5 + 236, 151, 2, 0);
	Function_316(&Local_5 + 236, 169, 2, 0);
	Function_316(&Local_5 + 236, 166, 2, 0);
	Function_316(&Local_5 + 236, 89, 2, 0);
	Function_316(&Local_5 + 236, 223, 2, 0);
	Function_316(&Local_5 + 236, 87, 2, 0);
	Function_316(&Local_5 + 236, 229, 2, 0);
	Function_316(&Local_5 + 236, 146, 2, 0);
	Function_316(&Local_5 + 236, 41, 2, 0);
	Function_316(&Local_5 + 236, 159, 2, 0);
	Function_316(&Local_5 + 236, 158, 2, 0);
	Function_316(&Local_5 + 236, 44, 2, 0);
	Function_316(&Local_5 + 236, 52, 2, 0);
	Function_316(&Local_5 + 236, 228, 2, 0);
	Function_316(&Local_5 + 236, 985, 2, 0);
	Function_316(&Local_5 + 236, 53, 2, 0);
	if (Function_309(&Local_5 + 236))
	{
		return 1;
	}
	return 0;
}

bool Function_477() //Position: 0x1A7C7 / 108487
{
	Function_485(&Local_804, 1);
	switch (Local_804)
	{
		case 0x000003E8:
			if (Function_330(&Local_795) || Local_795.f_24 < 1)
			{
				Local_804 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/FBI_02_Seq/FBI_02_Seq"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_804 = 1106;
				return 0;
			}
			ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
			ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
			ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
			ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
			DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_337(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_483(StackVal, StackVal, bLocal_794, *(&Global_3422[4740] + 52), &Local_804 + 20, 0, 0, 0, 0, 1, 1);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(50);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_326();
			Function_177(1, 0, 1);
			Global_63097 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/FBI_02_Seq/FBI_02_Seq", 0, 2, 1, 2, 2);
			Local_804.f_24 = 0;
			Function_215(&Local_804 + 4);
			Local_804 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_270(&Local_804 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_804 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_804 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_482();
			Function_309(&bLocal_831);
			if (IS_ACTOR_VALID((*&Local_5 + 808)[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_5 + 808)[02]);
			}
			if (IS_ACTOR_VALID(bLocal_821))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_821);
			}
			if (IS_ACTOR_VALID((*&Local_5 + 820)[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_5 + 820)[02]);
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_804 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Function_481(bLocal_794, 37,33f, 1, 0.0f, 2.0f, 1, 7, 0, 0, 0, 0, 0, 0, 0);
				Function_479(786,545f, 80,996f, 1225,384f, -0,006f, -0,051f, 0,999f, 0x40a00000, 0, 1);
				Function_468();
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x000003ED:
			if (Function_307(Global_34573))
			{
				TASK_FOLLOW_PATH((*&Local_5 + 820)[02], Local_5.f_2720, 4, 1, 0, 1, false);
				Function_215(&Local_804 + 4);
				Local_804 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (Function_270(&Local_804 + 4) <= 1.0f)
			{
				Function_198();
				Function_215(&Local_804 + 4);
				Local_804 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_270(&Local_804 + 4) <= 2.0f)
			{
				Local_804 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (iLocal_803 != 3 && iLocal_802 != 0)
				{
					Function_478(1, 1);
					DISABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
					DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
					DISABLE_CHILD_SECTOR("blk_policeStation_int_01x");
					DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
					ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
					AI_STOP_IGNORING_ACTORS();
					if (Local_804.f_24)
					{
						Function_468();
					}
					Global_63097 = 0;
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_804.f_20);
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_804.f_20);
					DESTROY_VOLUME(Local_804.f_20);
					Function_262(2, 1, 0, 1, 1, 1, 0, 1, 1, 1);
					Local_804 = 1000;
				}
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
				Local_804.f_24 = 1;
				Local_804 = 1104;
			}
			break;
		
		case 0x00000452:
			Global_63097 = 0;
			Local_804 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_478(bool bParam0, bool bParam1) //Position: 0x1ACE0 / 109792
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

void Function_479(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, var uParam8) //Position: 0x1AD2C / 109868
{
	Function_480(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
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

void Function_480(bool bParam0) //Position: 0x1AE1B / 110107
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_481(bool bParam0, float fParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0x1AE2C / 110124
{
	Function_478(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
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

bool Function_482() //Position: 0x1AF05 / 110341
{
	Function_316(&Local_5 + 4, 1193, 2, 0);
	Function_316(&Local_5 + 4, 641, 2, 0);
	Function_316(&Local_5 + 4, 983, 2, 0);
	Function_316(&Local_5 + 4, 977, 2, 0);
	Function_316(&Local_5 + 4, 976, 2, 0);
	Function_316(&Local_5 + 4, 980, 2, 0);
	Function_316(&Local_5 + 4, 981, 2, 0);
	Function_316(&Local_5 + 4, 986, 2, 0);
	Function_316(&Local_5 + 4, 984, 2, 0);
	Function_316(&Local_5 + 4, 376, 2, 0);
	Function_316(&Local_5 + 4, 373, 2, 0);
	Function_316(&Local_5 + 4, 374, 2, 0);
	Function_316(&Local_5 + 4, 370, 2, 0);
	Function_316(&Local_5 + 4, 375, 2, 0);
	Function_316(&Local_5 + 4, 372, 2, 0);
	Function_316(&Local_5 + 4, 371, 2, 0);
	Function_316(&Local_5 + 4, 369, 2, 0);
	Function_416(&Local_5 + 4, "p_gen_detonator01x", 0, 0);
	Function_416(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	if (Function_309(&Local_5 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_483(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x1B052 / 110674
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
				Function_484(bVar1, bParam0);
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

void Function_484(bool bParam0, bool bParam1) //Position: 0x1B2C0 / 111296
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

void Function_485(var uParam0, int iParam1) //Position: 0x1B335 / 111413
{
	Function_486(uParam0, iParam1, 0);
	return;
}

void Function_486(var uParam0, bool bParam1, bool bParam2) //Position: 0x1B343 / 111427
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
			Function_487(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_487(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_487(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x1B48F / 111759
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

void Function_488() //Position: 0x1B4B8 / 111800
{
	if (IS_ACTOR_SHOOTING(Global_34573))
	{
		if (Function_270(&iLocal_940) < 10.0f)
		{
			if (!IS_ACTOR_IN_VOLUME((*&Local_5 + 808)[02], Local_5.f_1312))
			{
				Function_215(&iLocal_940);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_821, "FBI02_ShootsBeforeENems", "FBI02_ShootsBeforeENems", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
			}
		}
	}
	return;
}

void Function_489() //Position: 0x1B537 / 111927
{
	bool bVar0;
	
	bVar0 = GET_LAST_ATTACK_TARGET(Global_34573);
	if (!bLocal_812)
	{
		if (IS_ACTOR_SHOOTING(Global_34573) && IS_ACTOR_VALID(bVar0))
		{
			if (((((bVar0 == (*&Local_5 + 808)[02] && bVar0 == bLocal_821) && bVar0 == (*&Local_5 + 820)[02]) && !Function_490(bVar0, Local_5.f_1088, 1)) && !Function_490(bVar0, Local_5.f_992, 1)) && (IS_ACTOR_MOUNTED(bVar0) || !IS_ACTOR_ANIMAL(bVar0)))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, Local_5.f_1360))
				{
					if (Function_490(bVar0, Local_5.f_1176, 1))
					{
						RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
					}
					Function_223("Fbi02_fail_firedEarly");
					bLocal_812 = true;
				}
			}
		}
	}
	return;
}

bool Function_490(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B5E3 / 112099
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

void Function_491() //Position: 0x1B623 / 112163
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "FBI02_SpotsWarWagon", "FBI02_SpotsWarWagon", false, 2, 1, 0, 1);
		Function_379(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x1B673 / 112243
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_ShootsObjects", "FBI02_ShootsObjects", false, 2, 1, 0, 1);
		Function_379(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_493(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1B6C2 / 112322
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
			if (Function_392(bParam0, bVar1, uParam2, uParam3, uParam4, uParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_494() //Position: 0x1B722 / 112418
{
	Function_506();
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[4]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[4]))
		{
			Function_467(Local_5.f_1168);
			Function_505(Local_5.f_1172);
			DESTROY_VOLUME((*&Local_5 + 1260)[4]);
			iLocal_967 = 1;
			Function_213(&Local_5 + 1176);
			Function_466();
			Function_218(0);
		}
	}
	else if (Function_415())
	{
		if (!iLocal_965)
		{
			if (!IS_LAYOUTREF_VALID(Local_699))
			{
				Function_413();
				Function_464();
				iLocal_965 = 1;
			}
		}
	}
	if (IS_VOLUME_VALID(Local_5.f_1400))
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1114))
		{
			DESTROY_VOLUME(Local_5.f_1400);
			DESTROY_OBJECT(bLocal_1114);
			Function_459(Local_5.f_1176, 0);
			SQUAD_GOALS_CLEAR(Local_5.f_1176);
			Function_318(Local_5.f_1176);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_5.f_1176, false, 0, 4294967295);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
			Function_389(Local_5.f_1176, Global_34573, 4);
		}
	}
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[8]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[8]))
		{
			DESTROY_VOLUME((*&Local_5 + 1260)[8]);
			Function_504();
		}
	}
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[0]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[0]))
		{
			DESTROY_VOLUME((*&Local_5 + 1260)[0]);
			Function_503();
		}
	}
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[1]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[1]))
		{
			DESTROY_VOLUME((*&Local_5 + 1260)[1]);
			Function_502();
		}
	}
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[2]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[2]))
		{
			DESTROY_VOLUME((*&Local_5 + 1260)[2]);
			Function_501();
		}
	}
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[3]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[3]))
		{
			DESTROY_VOLUME((*&Local_5 + 1260)[3]);
			Function_499();
		}
	}
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[5]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[5]))
		{
			DESTROY_VOLUME((*&Local_5 + 1260)[5]);
			Function_498();
		}
	}
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[6]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[6]))
		{
			DESTROY_VOLUME((*&Local_5 + 1260)[6]);
			Function_497();
		}
	}
	if (IS_VOLUME_VALID((*&Local_5 + 1260)[7]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_821, (*&Local_5 + 1260)[7]))
		{
			DESTROY_VOLUME((*&Local_5 + 1260)[7]);
			Function_495();
		}
	}
	return;
}

void Function_495() //Position: 0x1B95F / 112991
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_5, "walker2_rdm_1");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_5, "walker2_rdm_2");
	AI_AVOID_IGNORE_ACTOR(bVar0, bVar1);
	Function_496(bVar0, Local_5.f_2768, 0,7f, 1);
	Function_496(bVar1, Local_5.f_2768, -0,7f, 1);
	return;
}

void Function_496(bool bParam0, float fParam1, bool bParam2, bool bParam3) //Position: 0x1B9BA / 113082
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(false, fParam1, 1, 0, 0, 1, bParam2);
	if (bParam3)
	{
		TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
	}
	else
	{
		TASK_STAND_STILL(false, -1.0f, 0, 0);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(bParam0, 2);
	AI_GOAL_LOOK_AT_ACTOR(bParam0, bLocal_821, 1, 1.0f, 100.0f, 1000.0f, 1);
}

void Function_497() //Position: 0x1BA1A / 113178
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_3");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_5, "walker1_rdm_1");
	AI_AVOID_IGNORE_ACTOR(bVar0, bVar1);
	Function_496(bVar0, Local_5.f_2764, 0,7f, 1);
	Function_496(bVar1, Local_5.f_2764, -0,7f, 1);
	return;
}

void Function_498() //Position: 0x1BA79 / 113273
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_5");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_5, "horseGuy_rdm_1");
	AI_AVOID_IGNORE_ACTOR(bVar0, bVar1);
	Function_496(bVar0, Local_5.f_2760, -1,2f, 0);
	Function_496(bVar1, Local_5.f_2760, 1,2f, 0);
	ADD_OBJECT_TO_OBJECTSET(GET_MOUNT(bVar0), Local_5.f_1172);
	ADD_OBJECT_TO_OBJECTSET(GET_MOUNT(bVar1), Local_5.f_1172);
	return;
}

void Function_499() //Position: 0x1BAF5 / 113397
{
	Function_500("townGuy_speaker_1", "fact_react_1", 1, "null", "null", 0);
	Function_500("fact_rdm_1", "fact_react_2", 1, "null", "null", 0);
	Function_500("fact_rdm_2", "fact_react_3", 1, "null", "null", 0);
	Function_500("fact_rdm_3", "fact_react_4", 1, "null", "null", 0);
	TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_6"), Global_34573, 1, 3212836864);
	TASK_PRIORITY_SET(FIND_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_6"), 2);
	TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_5, "townGuy_rdm_7"), Global_34573, 1, 3212836864);
	TASK_PRIORITY_SET(FIND_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_6"), 2);
	return;
}

void Function_500(bool bParam0, bool bParam1, int iParam2, var uParam3, int iParam4, bool bParam5) //Position: 0x1BC3E / 113726
{
	var uVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	uParam3 = uParam3;
	iParam4 = iParam4;
	bVar4 = FIND_ACTOR_IN_LAYOUT(Local_5, bParam0);
	bVar3 = FIND_OBJECT_IN_LAYOUT(Local_5, bParam1);
	GET_OBJECT_POSITION(bVar3, &uVar0);
	AI_SET_NAV_PATHFINDING_ENABLED(bVar4, false);
	bVar5 = TASK_SEQUENCE_OPEN();
	if (bParam5 < 0.0f)
	{
		TASK_STAND_STILL(false, bParam5, 0, 0);
	}
	TASK_GO_TO_COORD(false, &uVar0, iParam2);
	TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bVar4, bVar5);
	TASK_SEQUENCE_RELEASE(bVar5, 1);
	TASK_PRIORITY_SET(bVar4, 2);
	AI_GOAL_LOOK_AT_ACTOR(bVar4, bLocal_821, 1, 1.0f, 100.0f, 1000.0f, 1);
}

void Function_501() //Position: 0x1BCC2 / 113858
{
	Function_500("ngun_rdm_1", "gun_react_1", 1, "null", "null", 0);
	Function_500("townGuy_speaker_4", "gun_react_2", 1, "null", "null", 0);
	Function_500("ngun_rdm_3", "gun_react_3", 1, "null", "null", 0);
	return;
}

void Function_502() //Position: 0x1BD57 / 114007
{
	Function_500("townGuy_rdm_5", "tailor_react_1", 1, "null", "null", 0);
	Function_500("townGuy_rdm_6", "tailor_react_2", 1, "null", "null", 0);
	return;
}

void Function_503() //Position: 0x1BDC5 / 114117
{
	Function_500("townGuy_speaker_2", "docks_react_1", 2, "null", "null", 0);
	Function_500("townGuy_rdm_1", "docks_react_3", 2, "talking_stand", "talking_stand/Listen_B", 0,2f);
	Function_500("townGuy_rdm_2", "docks_react_2", 2, "talking_stand", "talking_stand/Listen_B", 0.0f);
	return;
}

void Function_504() //Position: 0x1BEA2 / 114338
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_SetOffForCamp", "FBI02_SetOffForCamp", false, 2, 1, 0, 1);
		Function_379(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505(bool bParam0) //Position: 0x1BEF1 / 114417
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
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_506() //Position: 0x1BF36 / 114486
{
	Function_507("townGuy_speaker_1", 1, 12.0f, 0);
	Function_507("townGuy_speaker_2", 2, 22.0f, 1);
	Function_507("townGuy_speaker_3", 3, 21.0f, 1);
	Function_507("townGuy_speaker_4", 4, 17.0f, 0);
	Function_507("townGuy_speaker_5", 5, 18.0f, 0);
	Function_507("townGuy_speaker_6", 6, 18.0f, 0);
	if (DECOR_CHECK_EXIST(FIND_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_3"), "bSpoke"))
	{
		TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_5, "townGuy_speaker_3"), Global_34573, 1, 3212836864);
		TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_5, "walker1_rdm_1"), Global_34573, 1, 3212836864);
	}
	return;
}

void Function_507(bool bParam0, int iParam1, float fParam2, bool bParam3) //Position: 0x1C06D / 114797
{
	bool bVar0;
	char* cVar1[24];
	
	strcpy(&cVar1, "FBI02_Amazed_0", 24);
	straddi(&cVar1, iParam1, 24);
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_5, bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (!DECOR_CHECK_EXIST(bVar0, "bSpoke"))
		{
			if (Function_373(bVar0, bLocal_821, fParam2))
			{
				DECOR_SET_BOOL(bVar0, "bSpoke", true);
				SAY_SINGLE_LINE_SCRIPTED(bVar0, &cVar1, false, 1, 1, 0, 0, 0);
				if (bParam3)
				{
					SET_ANIM_SET_FOR_ACTOR(bVar0, "aiming_point", 0);
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "aiming_point");
					AI_GOAL_AIM_AT_OBJECT(bVar0, bLocal_821, 0);
					DECOR_SET_FLOAT(bVar0, "fPointTimeStart", GET_CURRENT_GAME_TIME());
				}
				PRINTSTRING("tried to say ");
				PRINTSTRING(&cVar1);
				PRINTNL();
			}
		}
		else if (DECOR_CHECK_EXIST(bVar0, "fPointTimeStart"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar0, "fPointTimeStart")) < 2,6f)
			{
				AI_GOAL_AIM_CLEAR(bVar0);
				RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				DECOR_REMOVE(bVar0, "fPointTimeStart");
			}
		}
	}
}

void Function_508() //Position: 0x1C1B0 / 115120
{
	if (iLocal_966)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_5 + 820)[02]);
			iLocal_966 = 0;
		}
	}
	return;
}

void Function_509() //Position: 0x1C1D2 / 115154
{
	bool bVar0;
	
	if (iLocal_967)
	{
		if (!IS_ACTOR_SHOOTING(Global_34573) && Function_270(&iLocal_940) < 10.0f)
		{
			if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI02_reactionBanter_v1_AA"))
			{
				Function_512();
				bVar0 = 5,3f;
			}
			else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI02_BanterToCamp_v2_AA1"))
			{
				Function_511();
				bVar0 = 4.0f;
			}
			else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI02_BanterToCamp_v3_AA1"))
			{
				Function_510();
				bVar0 = 3,5f;
			}
			iLocal_967 = 0;
			iLocal_966 = 1;
			TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_5 + 820)[02], bVar0);
		}
	}
	return;
}

void Function_510() //Position: 0x1C294 / 115348
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AA1", "FBI02_BanterToCamp_v3_AA1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AA2", "FBI02_BanterToCamp_v3_AA2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v3_AB", "FBI02_BanterToCamp_v3_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_BanterToCamp_v3_AC", "FBI02_BanterToCamp_v3_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v3_AD1", "FBI02_BanterToCamp_v3_AD1", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v3_AD2", "FBI02_BanterToCamp_v3_AD2", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AE1", "FBI02_BanterToCamp_v3_AE1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AE2", "FBI02_BanterToCamp_v3_AE2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AE3", "FBI02_BanterToCamp_v3_AE3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v3_AF", "FBI02_BanterToCamp_v3_AF", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AG1", "FBI02_BanterToCamp_v3_AG1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AG2", "FBI02_BanterToCamp_v3_AG2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AG3", "FBI02_BanterToCamp_v3_AG3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v3_AH", "FBI02_BanterToCamp_v3_AH", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AI1", "FBI02_BanterToCamp_v3_AI1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AI2", "FBI02_BanterToCamp_v3_AI2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v3_AJ", "FBI02_BanterToCamp_v3_AJ", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v3_AK", "FBI02_BanterToCamp_v3_AK", false, 2, 1, 0, 1);
		Function_379(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x1C734 / 116532
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AA1", "FBI02_BanterToCamp_v2_AA1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AA2", "FBI02_BanterToCamp_v2_AA2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v2_AB", "FBI02_BanterToCamp_v2_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AC1", "FBI02_BanterToCamp_v2_AC1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AC2", "FBI02_BanterToCamp_v2_AC2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v2_AD", "FBI02_BanterToCamp_v2_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AE1", "FBI02_BanterToCamp_v2_AE1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AE2", "FBI02_BanterToCamp_v2_AE2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v2_AF", "FBI02_BanterToCamp_v2_AF", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_BanterToCamp_v2_AG", "FBI02_BanterToCamp_v2_AG", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v2_AH", "FBI02_BanterToCamp_v2_AH", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AI1", "FBI02_BanterToCamp_v2_AI1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AI2", "FBI02_BanterToCamp_v2_AI2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AI3", "FBI02_BanterToCamp_v2_AI3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AI4", "FBI02_BanterToCamp_v2_AI4", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v2_AJ", "FBI02_BanterToCamp_v2_AJ", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v2_AK", "FBI02_BanterToCamp_v2_AK", false, 2, 1, 0, 1);
		Function_379(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x1CB91 / 117649
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "FBI02_reactionBanter_v1_AA", "FBI02_reactionBanter_v1_AA", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_reactionBanter_v1_AB", "FBI02_reactionBanter_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_reactionBanter_v1_AC", "FBI02_reactionBanter_v1_AC", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_620", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_reactionBanter_v1_AD1", "FBI02_reactionBanter_v1_AD1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_reactionBanter_v1_AD2", "FBI02_reactionBanter_v1_AD2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "SFX_PAUSE_3000", "", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v1_AA1", "FBI02_BanterToCamp_v1_AA1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v1_AA2", "FBI02_BanterToCamp_v1_AA2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_BanterToCamp_v1_AB", "FBI02_BanterToCamp_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v1_AC", "FBI02_BanterToCamp_v1_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1300", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI02_BanterToCamp_v1_AD", "FBI02_BanterToCamp_v1_AD", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI02_BanterToCamp_v1_AE", "FBI02_BanterToCamp_v1_AE", true, 2, 1, 0, 1);
		Function_379(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x1CED4 / 118484
{
	if (SQUAD_IS_VALID(Local_5.f_1176))
	{
		if (SQUAD_GET_SIZE(Local_5.f_1176) >= 0)
		{
			if (!DECOR_CHECK_EXIST(Local_5.f_1176, "iDrillState"))
			{
				DECOR_SET_INT(Local_5.f_1176, "iDrillState", false);
			}
			else
			{
				switch (DECOR_GET_INT(Local_5.f_1176, "iDrillState"))
				{
					case 0x00000000:
						Function_515(Local_5.f_1176, "FBI02_soldiers_stn/Soldiers_idl");
						DECOR_SET_INT(Local_5.f_1176, "iDrillState", true);
						break;
					
					case 0x00000001:
						if (Function_393(Local_5.f_1176, Global_34573, 15.0f, 1))
						{
							SAY_SINGLE_LINE_SCRIPTED(FIND_ACTOR_IN_LAYOUT(Local_5, "blkArmy_sgt"), "FBI02_InFormation_v1_AA", false, 1, 1, 0, 0, 0);
							Function_514(Local_5.f_1176, 3, 0);
							DECOR_SET_FLOAT(Local_5.f_1176, "fShoulderTime", GET_CURRENT_GAME_TIME());
							DECOR_SET_INT(Local_5.f_1176, "iDrillState", 2);
						}
						break;
					
					case 0x00000002:
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_5.f_1176, "fShoulderTime")) < 0,05f)
						{
							DECOR_SET_FLOAT(Local_5.f_1176, "fShoulderTime", GET_CURRENT_GAME_TIME());
							Function_514(Local_5.f_1176, 3, 1);
							DECOR_SET_INT(Local_5.f_1176, "iDrillState", 3);
						}
						break;
					
					case 0x00000003:
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_5.f_1176, "fShoulderTime")) < 0,05f)
						{
							DECOR_REMOVE(Local_5.f_1176, "fShoulderTime");
							Function_514(Local_5.f_1176, 3, 2);
							DECOR_SET_INT(Local_5.f_1176, "iDrillState", 4);
						}
						break;
					}
				}
			}
	}
	return;
}

void Function_514(bool bParam0, int iParam1, int iParam2) //Position: 0x1D0F2 / 119026
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if ((bVar0 % iParam1) == iParam2)
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			SET_ACTION_NODE_FOR_ACTOR(bVar1, "FBI02_soldiers_stn/Soldiers_pre");
		}
		bVar0++;
	}
	return;
}

void Function_515(bool bParam0, bool bParam1) //Position: 0x1D14E / 119118
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
			SET_ACTION_NODE_FOR_ACTOR(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_516(bool bParam0, float fParam1) //Position: 0x1D18F / 119183
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	struct<9> Var6;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (bVar2 != (*&Local_5 + 916)[02])
			{
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_ALIVE(bVar2))
					{
						Function_518(GET_EVENT_LAYOUT(), 5);
						vVar3 = { StackVal, StackVal, Function_518(GET_EVENT_LAYOUT(), 5) };
						if (Function_517(StackVal, StackVal, bVar2, vVar3) >= fParam1)
						{
							vVar6 = { StackVal, StackVal, *(&Local_5 + 2544) };
							vVar6 = (vVar6.x + RAND_FLOAT_RANGE(-6.0f, 5.0f));
							vVar6.f_8 = (vVar6.z + RAND_FLOAT_RANGE(-6.0f, 5.0f));
							bVar1 = TASK_SEQUENCE_OPEN();
							if (Function_373(bVar2, Global_34573, 30.0f))
							{
								TASK_GO_NEAR_COORD(false, &vVar6, 1.0f, 3);
								TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
							}
							else
							{
								TASK_CROUCH(false, 10.0f);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
							}
							TASK_SEQUENCE_CLOSE();
							if ((RAND_INT_RANGE(false, 10) % 3) == 0)
							{
								AUDIO_PLAY_VOCAL_EFFECT(bVar2, 10, 1);
							}
							else
							{
								SAY_SINGLE_LINE_STRING(bVar2, "MINOR_SHOCK", false, false, 0, 0, true, false);
							}
							RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
							TASK_SEQUENCE_PERFORM(bVar2, bVar1);
							TASK_SEQUENCE_RELEASE(bVar1, 1);
						}
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

float Function_517(bool bParam0, vector3 vParam1) //Position: 0x1D2A6 / 119462
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_269(bParam0);
		vVar0 = { StackVal, StackVal, Function_269(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_518(bool bParam0, int iParam1) //Position: 0x1D320 / 119584
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0.0f, 0.0f, 0.0f;
	}
	bVar3 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar3, GET_EVENT_LAYOUT());
	bVar4 = START_OBJECT_ITERATOR(bVar3);
	if (IS_OBJECT_VALID(bVar4))
	{
		while (IS_OBJECT_VALID(bVar4))
		{
			bVar5 = GET_EVENT_FROM_OBJECT(bVar4);
			if (IS_EVENT_VALID(bVar5))
			{
				if (GET_EVENT_TYPE(bVar5) == iParam1)
				{
					GET_OBJECT_POSITION(GET_OBJECT_FROM_EVENT(bVar5), &vVar0);
					DESTROY_ITERATOR(bVar3);
					return StackVal, StackVal, vVar0;
				}
			}
			bVar4 = OBJECT_ITERATOR_NEXT(bVar3);
		}
	}
	DESTROY_ITERATOR(bVar3);
	return 0.0f, 0.0f, 0.0f;
}

void Function_519() //Position: 0x1D399 / 119705
{
	switch (iLocal_803)
	{
		case 0x00000006:
			Function_555(&Local_795, 1);
			bLocal_794 = CREATE_LAYOUT(Function_53());
			SET_DUST_LEVEL_MODIFIER(4294967295);
			Function_554();
			Local_804 = 1000;
			iLocal_803 = 7;
			break;
		
		case 0x00000007:
			if (Local_804 != 1004 || Function_477())
			{
				iLocal_803 = 8;
			}
			break;
		
		case 0x00000008:
			Function_477();
			if (Function_537())
			{
				iLocal_803 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(Local_5))
			{
				bLocal_936 = CREATE_OBJECT_ITERATOR(Local_5);
			}
			AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_GETTING_BEHIND_GATLING");
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_324(10, 1, 1);
			RESET_ACTOR_GAITS(bLocal_821, 0);
			SET_CRIPPLE_ENABLE(bLocal_821, 0);
			SET_ACTOR_FACTION(bLocal_821, 20);
			TASK_PRIORITY_SET(bLocal_821, true);
			TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_821, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_821, 50.0f);
			SET_ACTOR_HEALTH(bLocal_821, GET_ACTOR_MAX_HEALTH(bLocal_821));
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_821, 0);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_821, 0.0f);
			SET_ACTOR_PROOF(bLocal_821, 16);
			UNK_0x2E84E682(bLocal_821, 0);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_821, 7, true);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_821, false);
			AI_GOAL_LOOK_AT_NEUTRAL(bLocal_821, -1.0f);
			RESET_ACTOR_GAITS(bLocal_822, 0);
			TASK_PRIORITY_SET(bLocal_822, true);
			TASK_STAND_STILL(bLocal_822, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_822, 50.0f);
			SET_ACTOR_HEALTH(bLocal_822, GET_ACTOR_MAX_HEALTH(bLocal_822));
			SET_WEAPONENUM_LOCKED(17, 0);
			SET_WEAPONENUM_LOCKED(2, 0);
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_821, Global_34573, 60.0f, 10.0f, 50.0f);
			DECOR_SET_BOOL(Global_34573, "GringoNoQuit", true);
			Function_324(10, 0, 1);
			Function_529();
			Function_527((*&Local_5 + 808)[02], 4);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_5.f_1396);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_5.f_1396);
			bLocal_973 = CREATE_OBJECTSET_IN_LAYOUT("osTNTSPLOSIONS", Local_5, 8, 0);
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			Function_526(&iLocal_937);
			Function_526(&iLocal_940);
			Function_526(&iLocal_943);
			Function_526(&iLocal_946);
			Function_526(&iLocal_949);
			Function_524(&uLocal_982, bLocal_794);
			iLocal_802 = 0;
			iLocal_803 = 0;
			Function_521(&Local_795, &iLocal_802, &iLocal_803);
			Function_520(StackVal, StackVal, StackVal, StackVal, StackVal, Function_531(), Local_795);
			break;
	}
	return;
}

void Function_520(struct<25> Param0) //Position: 0x1D5C2 / 120258
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_802 = 0;
			break;
		
		case 0x00000002:
			iLocal_802 = 1;
			break;
		
		case 0x00000003:
			iLocal_802 = 2;
			break;
		
		case 0x00000004:
			iLocal_802 = 3;
			break;
		
		case 0x00000005:
			iLocal_802 = 4;
			break;
		
		case 0x00000006:
			iLocal_802 = 5;
			break;
		
		case 0x00000007:
			iLocal_802 = 6;
			break;
		
		case 0x00000008:
			iLocal_802 = 7;
			break;
		
		case 0x00000009:
			iLocal_802 = 8;
			break;
		
		case 0x0000000A:
			iLocal_802 = 101;
			break;
	}
}

void Function_521(int iParam0, var uParam1, int iParam2) //Position: 0x1D657 / 120407
{
	if (Function_330(iParam0))
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

void Function_522() //Position: 0x1D68B / 120459
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

var Function_523(int iParam0) //Position: 0x1D6DC / 120540
{
	if (Function_330(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_524(var uParam0, bool bParam1) //Position: 0x1D6F4 / 120564
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_525(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_525(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_525(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_525(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_525(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1DD94 / 122260
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

void Function_526(int iParam0) //Position: 0x1DE57 / 122455
{
	if (!Function_272(iParam0))
	{
		Function_216(iParam0, 0.0f);
	}
	return;
}

void Function_527(bool bParam0, int iParam1) //Position: 0x1DE6C / 122476
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(bParam0) == 1194 && GET_ACTOR_ENUM(bParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "carSettings"))
	{
		Function_528(bParam0);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	Function_76(&bVar0, iParam1);
	DECOR_SET_INT(bParam0, "carSettings", bVar0);
	return;
}

void Function_528(bool bParam0) //Position: 0x1DEE1 / 122593
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(bParam0) == 1194 && GET_ACTOR_ENUM(bParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "carSettings"))
	{
		DECOR_SET_INT(bParam0, "carSettings", false);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	Function_76(&bVar0, 1);
	Function_36(&bVar0, 2);
	Function_36(&bVar0, 4);
	Function_76(&bVar0, 8);
	Function_76(&bVar0, 16);
	Function_76(&bVar0, 32);
	Function_76(&bVar0, 64);
	Function_76(&bVar0, 128);
	Function_76(&bVar0, 256);
	Function_76(&bVar0, 512);
	DECOR_SET_INT(bParam0, "carSettings", bVar0);
	return;
}

void Function_529() //Position: 0x1DFA4 / 122788
{
	(*&Local_5 + 808)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "WarWagon", 1193, 789,067f, 78,299f, 1226,797f, 0.0f, 176,456f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 808)[02], false);
	Function_530((*&Local_5 + 808)[02], 1);
	SET_VEHICLE_EJECTION_ENABLED((*&Local_5 + 808)[02], 0);
	return;
}

void Function_530(bool bParam0, int iParam1) //Position: 0x1DFFF / 122879
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(bParam0) == 1194 && GET_ACTOR_ENUM(bParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "carSettings"))
	{
		Function_528(bParam0);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	Function_36(&bVar0, iParam1);
	DECOR_SET_INT(bParam0, "carSettings", bVar0);
	return;
}

var Function_531() //Position: 0x1E074 / 122996
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
	
	Function_414(4, 1);
	uVar0 = uVar0;
	Local_5 = CREATE_LAYOUT("Fbi02_layout");
	Local_5.f_1220 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "CutsceneVol_set");
	(*&Local_5 + 1180)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene01Vol", 2, 815,7831f, 114,0187f, 561,9284f, 0.0f, 0.0f, 0.0f, 9,534748f, 12,32802f, 34,15328f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[0]);
	(*&Local_5 + 1180)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene02Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[1]);
	(*&Local_5 + 1180)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene03Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[2]);
	(*&Local_5 + 1180)[3] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene04Vol", 2, -262,8722f, 138,832f, 1712,067f, 0.0f, -37,32303f, 0.0f, 27,40369f, 14,1944f, 30,82307f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[3]);
	(*&Local_5 + 1180)[4] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene06Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[4]);
	(*&Local_5 + 1180)[5] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene07Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[5]);
	(*&Local_5 + 1180)[6] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene08Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[6]);
	(*&Local_5 + 1180)[7] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene09Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[7]);
	(*&Local_5 + 1180)[8] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene10Vol", 2, -2178,029f, 16,44929f, 2611,982f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1220, (*&Local_5 + 1180)[8]);
	Local_5.f_1240 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "bv_back_set");
	(*&Local_5 + 1224)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "nbv_back_2", 2, 344,2489f, 112,4391f, 1536,322f, 0.0f, -8,277484f, 0.0f, 10,33553f, 14,3807f, 30,46423f);
	ADD_TO_VOLUME_SET(Local_5.f_1240, (*&Local_5 + 1224)[0]);
	(*&Local_5 + 1224)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "nbv_back_3", 2, 344,4681f, 112,4391f, 1566,642f, 0.0f, 1,630945f, 0.0f, 14,11672f, 14,3807f, 21,06984f);
	ADD_TO_VOLUME_SET(Local_5.f_1240, (*&Local_5 + 1224)[1]);
	(*&Local_5 + 1224)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "nbv_back_4", 2, 369,3867f, 111,4353f, 1535,236f, 0.0f, -8,403739f, 0.0f, 7,699083f, 14,3807f, 24,22723f);
	ADD_TO_VOLUME_SET(Local_5.f_1240, (*&Local_5 + 1224)[2]);
	Local_5.f_1256 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "bv_mid_set");
	(*&Local_5 + 1244)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "bv_mid_1", 2, 357,5548f, 111,4353f, 1563,212f, 0.0f, 7,233166f, 0.0f, 10,08987f, 14,3807f, 22,50257f);
	ADD_TO_VOLUME_SET(Local_5.f_1256, (*&Local_5 + 1244)[0]);
	(*&Local_5 + 1244)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "bv_mid_2", 2, 358,1025f, 111,4353f, 1534,403f, 0.0f, -8,937272f, 0.0f, 9,811433f, 14,3807f, 34,26941f);
	ADD_TO_VOLUME_SET(Local_5.f_1256, (*&Local_5 + 1244)[1]);
	Local_5.f_1300 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "reactTriggers_set");
	(*&Local_5 + 1260)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "dockReactTrig", 2, 787,9281f, 78,30589f, 1267,447f, 0.0f, 0.0f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[0]);
	(*&Local_5 + 1260)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "TailorReactTrig", 2, 787,9281f, 78,30589f, 1272,054f, 0.0f, 0.0f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[1]);
	(*&Local_5 + 1260)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "gunsmithReact", 2, 787,9281f, 78,30589f, 1291,596f, 0.0f, 0.0f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[2]);
	(*&Local_5 + 1260)[3] = CREATE_VOLUME_IN_LAYOUT(Local_5, "factoryReact", 2, 787,9281f, 78,30589f, 1301,562f, 0.0f, 0.0f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[3]);
	(*&Local_5 + 1260)[4] = CREATE_VOLUME_IN_LAYOUT(Local_5, "startBanter", 2, 749,1542f, 80,3516f, 1395,758f, 0.0f, -79,03985f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[4]);
	(*&Local_5 + 1260)[5] = CREATE_VOLUME_IN_LAYOUT(Local_5, "horsesGo", 2, 788,2354f, 78,30588f, 1283,344f, 0.0f, 0.0f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[5]);
	(*&Local_5 + 1260)[6] = CREATE_VOLUME_IN_LAYOUT(Local_5, "walkers1_go", 2, 786,377f, 80,3516f, 1360,464f, 0.0f, -1,190624f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[6]);
	(*&Local_5 + 1260)[7] = CREATE_VOLUME_IN_LAYOUT(Local_5, "walkers2_go", 2, 779,8836f, 80,3516f, 1382,381f, 0.0f, -62,08088f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[7]);
	(*&Local_5 + 1260)[8] = CREATE_VOLUME_IN_LAYOUT(Local_5, "fingerOffTrigger", 2, 787,7109f, 78,30588f, 1255,065f, 0.0f, -0,03992511f, 0.0f, 29,0003f, 16,38764f, 5,643216f);
	ADD_TO_VOLUME_SET(Local_5.f_1300, (*&Local_5 + 1260)[8]);
	Local_5.f_1304 = CREATE_VOLUME_IN_LAYOUT(Local_5, "S3_end", 2, 6,212352f, 116,4946f, 1695,253f, 0.0f, 102,181f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1308 = CREATE_VOLUME_IN_LAYOUT(Local_5, "s4_end", 2, -239,8221f, 137,5025f, 1721,903f, 0.0f, 55,92413f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1312 = CREATE_VOLUME_IN_LAYOUT(Local_5, "meetCav", 2, 428,8682f, 108,3147f, 1545,806f, 0.0f, 149,8101f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1316 = CREATE_VOLUME_IN_LAYOUT(Local_5, "triggerS3Ambush", 2, -165,1945f, 118,5166f, 1718,628f, 0.0f, 106,3051f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1320 = CREATE_VOLUME_IN_LAYOUT(Local_5, "s4_end_backup", 2, -262,805f, 137,5025f, 1706,356f, 0.0f, 55,92413f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1324 = CREATE_VOLUME_IN_LAYOUT(Local_5, "bunker_1", 2, 387,1876f, 109,4274f, 1564,064f, 0.0f, -19,4055f, 0.0f, 5,439455f, 7,286525f, 10,62235f);
	Local_5.f_1328 = CREATE_VOLUME_IN_LAYOUT(Local_5, "bunker_2", 2, 389,1004f, 109,4274f, 1548,134f, 0.0f, 0,01178728f, 0.0f, 5,439455f, 7,286525f, 7,702875f);
	Local_5.f_1332 = CREATE_VOLUME_IN_LAYOUT(Local_5, "bunker_3", 2, 388,4063f, 109,4274f, 1527,957f, 0.0f, 4,676243f, 0.0f, 6,480597f, 7,286525f, 11,55157f);
	Local_5.f_1336 = CREATE_VOLUME_IN_LAYOUT(Local_5, "bunker_4", 2, 377,1512f, 112,4076f, 1497,935f, 0.0f, 44,90334f, 0.0f, 6,310698f, 7,286525f, 9,018141f);
	Local_5.f_1340 = CREATE_VOLUME_IN_LAYOUT(Local_5, "campRear", 2, 412,6877f, 108,8746f, 1539,846f, 0.0f, 1,994218f, 0.0f, 19,45747f, 11,19291f, 30,39388f);
	Local_5.f_1344 = CREATE_VOLUME_IN_LAYOUT(Local_5, "bv_close_1", 2, 368,8326f, 111,4353f, 1561,153f, 0.0f, 4,576015f, 0.0f, 7,72825f, 14,3807f, 23,35022f);
	Local_5.f_1348 = CREATE_VOLUME_IN_LAYOUT(Local_5, "rollWagon_1", 2, -26,14577f, 115,4243f, 1701,272f, 0.0f, 110,2697f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1352 = CREATE_VOLUME_IN_LAYOUT(Local_5, "rollWagon_2", 2, -80,5292f, 119,6164f, 1718,741f, 0.0f, 110,2697f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1356 = CREATE_VOLUME_IN_LAYOUT(Local_5, "rollWagon_3", 2, -133,1719f, 115,4243f, 1726,555f, 0.0f, 55,12092f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1360 = CREATE_VOLUME_IN_LAYOUT(Local_5, "blackWaterVol", 2, 713,6379f, 96,94091f, 1284,931f, 0.0f, 0.0f, 0.0f, 177,3676f, 47,97482f, 251,901f);
	Local_5.f_1364 = CREATE_VOLUME_IN_LAYOUT(Local_5, "offRoadbanter_1", 2, 320,6332f, 112,4392f, 1518,061f, 0.0f, 137,3721f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1368 = CREATE_VOLUME_IN_LAYOUT(Local_5, "offRoadbanter_2", 2, 287,0046f, 112,4392f, 1554,596f, 0.0f, 137,3721f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1372 = CREATE_VOLUME_IN_LAYOUT(Local_5, "stopTaunts", 2, 107,1959f, 116,4946f, 1691,093f, 0.0f, 102,181f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1376 = CREATE_VOLUME_IN_LAYOUT(Local_5, "blowTNT", 2, -176,4535f, 118,5166f, 1721,921f, 0.0f, 106,3051f, 0.0f, 66,58469f, 37,39709f, 3,517241f);
	Local_5.f_1396 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "stayOffStreets_set");
	(*&Local_5 + 1380)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "stayOffStreets_1", 2, 788,087f, 79,56884f, 1299,159f, 0.0f, 0.0f, 0.0f, 9,360932f, 17,34166f, 175,1804f);
	ADD_TO_VOLUME_SET(Local_5.f_1396, (*&Local_5 + 1380)[0]);
	(*&Local_5 + 1380)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "stayOffStreets_2", 2, 757,8166f, 79,56884f, 1391,508f, 0.0f, -69,72727f, 0.0f, 9,360932f, 17,34166f, 59,04287f);
	ADD_TO_VOLUME_SET(Local_5.f_1396, (*&Local_5 + 1380)[1]);
	(*&Local_5 + 1380)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "stayOffStreets_3", 2, 703,0756f, 79,56884f, 1404,799f, 0.0f, -81,07839f, 0.0f, 9,360932f, 17,34166f, 59,04287f);
	ADD_TO_VOLUME_SET(Local_5.f_1396, (*&Local_5 + 1380)[2]);
	Local_5.f_1400 = CREATE_VOLUME_IN_LAYOUT(Local_5, "soldiersReactVol", 2, 784,632f, 81,25748f, 1252,821f, 0.0f, 1,98556f, 0.0f, 17,60086f, 7,727757f, 22,82952f);
	*(&Local_5 + 1404[06]) = { 782,2799f, 78,30585f, 1236f };
	*(&Local_5 + 1404[06] + 12) = { 0.0f, -124,0031f, 0.0f };
	*(&Local_5 + 1404[16]) = { 783,9999f, 78,30585f, 1237,487f };
	*(&Local_5 + 1404[16] + 12) = { 0.0f, 52,93388f, 0.0f };
	Local_5.f_1456 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_5, 8, 0);
	*(&Local_5 + 1460[06]) = { 394,005f, 109,4274f, 1538,005f };
	*(&Local_5 + 1460[06] + 12) = { 0.0f, 75,9081f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerStart02", 394,005f, 109,4274f, 1538,005f, 0.0f, 75,9081f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_5.f_1456);
	*(&Local_5 + 1460[16]) = { 324,5222f, 111,9052f, 1691,187f };
	*(&Local_5 + 1460[16] + 12) = { 0.0f, -90.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerEnd02", 324,5222f, 111,9052f, 1691,187f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_5.f_1456);
	*(&Local_5 + 1460[26]) = { 393,5218f, 109,4328f, 1536,925f };
	*(&Local_5 + 1460[26] + 12) = { 0.0f, -6,288388f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_5, "CompanionStart02", 393,5218f, 109,4328f, 1536,925f, 0.0f, -6,288388f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_5.f_1456);
	*(&Local_5 + 1460[36]) = { 326,2187f, 111,7031f, 1689,259f };
	*(&Local_5 + 1460[36] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_5, "CompanionEnd02", 326,2187f, 111,7031f, 1689,259f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_5.f_1456);
	*(&Local_5 + 1460[46]) = { 280,6942f, 112,3031f, 1736,73f };
	*(&Local_5 + 1460[46] + 12) = { 0.0f, 159,1154f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_5, "CavTP02", 280,6942f, 112,3031f, 1736,73f, 0.0f, 159,1154f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_5.f_1456);
	Local_5.f_1584 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_5, 8, 0);
	*(&Local_5 + 1588[06]) = { 365,6226f, 111,6644f, 1516,344f };
	*(&Local_5 + 1588[06] + 12) = { 0.0f, -285,1503f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerStart03", 365,6226f, 111,6644f, 1516,344f, 0.0f, -285,1503f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_5.f_1584);
	*(&Local_5 + 1588[16]) = { 361,6671f, 112,1746f, 1507,68f };
	*(&Local_5 + 1588[16] + 12) = { 0.0f, 69,99233f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_5, "CompanionStart03", 361,6671f, 112,1746f, 1507,68f, 0.0f, 69,99233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_5.f_1584);
	*(&Local_5 + 1588[26]) = { -60,95473f, 116,6154f, 1744,574f };
	*(&Local_5 + 1588[26] + 12) = { 0.0f, 40,47247f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_5, "CompanionEnd03", -60,95473f, 116,6154f, 1744,574f, 0.0f, 40,47247f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_5.f_1584);
	*(&Local_5 + 1588[36]) = { 369,7011f, 111,5975f, 1512,907f };
	*(&Local_5 + 1588[36] + 12) = { 0.0f, 70,99059f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_5, "CavTP03", 369,7011f, 111,5975f, 1512,907f, 0.0f, 70,99059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_5.f_1584);
	Local_5.f_1688 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_5, 8, 0);
	*(&Local_5 + 1692[06]) = { 0,8774205f, 114,0902f, 1690,381f };
	*(&Local_5 + 1692[06] + 12) = { 0.0f, 86,48029f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_5, "CompanionStart04", 0,8774205f, 114,0902f, 1690,381f, 0.0f, 86,48029f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_5.f_1688);
	*(&Local_5 + 1692[16]) = { 1,939613f, 114,1288f, 1694,133f };
	*(&Local_5 + 1692[16] + 12) = { 0.0f, 55,71302f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerStart04", 1,939613f, 114,1288f, 1694,133f, 0.0f, 55,71302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_5.f_1688);
	*(&Local_5 + 1692[26]) = { 5,107378f, 115,0238f, 1701,969f };
	*(&Local_5 + 1692[26] + 12) = { 0.0f, 91,07485f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_5, "CavTP04", 5,107378f, 115,0238f, 1701,969f, 0.0f, 91,07485f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_5.f_1688);
	*(&Local_5 + 1768[06]) = { 291,843f, 114,0812f, 1543,791f };
	*(&Local_5 + 1768[06] + 12) = { 0.0f, -81,33614f, 0.0f };
	*(&Local_5 + 1768[16]) = { 324,8949f, 117,052f, 1626,85f };
	*(&Local_5 + 1768[16] + 12) = { 0.0f, -9,575944f, 0.0f };
	*(&Local_5 + 1768[26]) = { 226,3534f, 117,5693f, 1470,353f };
	*(&Local_5 + 1768[26] + 12) = { 0.0f, -123,5144f, 0.0f };
	*(&Local_5 + 1768[36]) = { 332.0f, 119,4667f, 1441,184f };
	*(&Local_5 + 1768[36] + 12) = { 0.0f, -182,0139f, 0.0f };
	Local_5.f_1868 = CREATE_OBJECTSET_IN_LAYOUT("reactPointsSet", Local_5, 8, 0);
	*(&Local_5 + 1872[06]) = { 796,6031f, 78,47311f, 1292,255f };
	*(&Local_5 + 1872[06] + 12) = { 0.0f, 36,52666f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_5, "docks_react_1", 796,6031f, 78,47311f, 1292,255f, 0.0f, 36,52666f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_5.f_1868);
	*(&Local_5 + 1872[16]) = { 795,0814f, 78,47311f, 1289,368f };
	*(&Local_5 + 1872[16] + 12) = { 0.0f, 75,60387f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_5, "docks_react_2", 795,0814f, 78,47311f, 1289,368f, 0.0f, 75,60387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_5.f_1868);
	*(&Local_5 + 1872[26]) = { 795,4435f, 78,47311f, 1290,733f };
	*(&Local_5 + 1872[26] + 12) = { 0.0f, 62,17315f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_5, "docks_react_3", 795,4435f, 78,47311f, 1290,733f, 0.0f, 62,17315f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_5.f_1868);
	*(&Local_5 + 1872[36]) = { 781,503f, 78,30585f, 1292,795f };
	*(&Local_5 + 1872[36] + 12) = { 0.0f, -45,63672f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_5, "tailor_react_1", 781,503f, 78,30585f, 1292,795f, 0.0f, -45,63672f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_5.f_1868);
	*(&Local_5 + 1872[46]) = { 781,6802f, 78,30585f, 1293,671f };
	*(&Local_5 + 1872[46] + 12) = { 0.0f, -60,71291f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_5, "tailor_react_2", 781,6802f, 78,30585f, 1293,671f, 0.0f, -60,71291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_5.f_1868);
	*(&Local_5 + 1872[56]) = { 784,4751f, 78,30585f, 1309,238f };
	*(&Local_5 + 1872[56] + 12) = { 0.0f, -60,71291f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_5, "gun_react_1", 784,4751f, 78,30585f, 1309,238f, 0.0f, -60,71291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_5.f_1868);
	*(&Local_5 + 1872[66]) = { 784,1608f, 78,30585f, 1311,316f };
	*(&Local_5 + 1872[66] + 12) = { 0.0f, -60,71291f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_5, "gun_react_2", 784,1608f, 78,30585f, 1311,316f, 0.0f, -60,71291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_5.f_1868);
	*(&Local_5 + 1872[76]) = { 784,1828f, 78,30585f, 1307,509f };
	*(&Local_5 + 1872[76] + 12) = { 0.0f, -45,65202f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_5, "gun_react_3", 784,1828f, 78,30585f, 1307,509f, 0.0f, -45,65202f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_5.f_1868);
	*(&Local_5 + 1872[86]) = { 793,8182f, 78,3059f, 1324,581f };
	*(&Local_5 + 1872[86] + 12) = { 0.0f, 67,03926f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_5, "fact_react_1", 793,8182f, 78,3059f, 1324,581f, 0.0f, 67,03926f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_5.f_1868);
	*(&Local_5 + 1872[96]) = { 793,7115f, 78,3059f, 1325,906f };
	*(&Local_5 + 1872[96] + 12) = { 0.0f, 67,03926f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_5, "fact_react_2", 793,7115f, 78,3059f, 1325,906f, 0.0f, 67,03926f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_5.f_1868);
	*(&Local_5 + 1872[106]) = { 792,6205f, 78,3059f, 1327,351f };
	*(&Local_5 + 1872[106] + 12) = { 0.0f, 67,03926f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_5, "fact_react_3", 792,6205f, 78,3059f, 1327,351f, 0.0f, 67,03926f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_5.f_1868);
	*(&Local_5 + 1872[116]) = { 791,8589f, 78,3059f, 1329,776f };
	*(&Local_5 + 1872[116] + 12) = { 0.0f, 67,03926f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_5, "fact_react_4", 791,8589f, 78,3059f, 1329,776f, 0.0f, 67,03926f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_5.f_1868);
	*(&Local_5 + 2164) = { 465,6306f, 98,60591f, 1499,899f };
	*(&Local_5 + 2164 + 12) = { 0.0f, 128,2891f, 0.0f };
	Local_5.f_2188 = CREATE_POINT_IN_LAYOUT(Local_5, "skipGoHere", 465,6306f, 98,60591f, 1499,899f, 0.0f, 128,2891f, 0.0f);
	*(&Local_5 + 2192) = { 338,1498f, 118,0941f, 821,873f };
	*(&Local_5 + 2192 + 12) = { 0.0f, -128,6968f, 0.0f };
	Local_5.f_2216 = CREATE_POINT_IN_LAYOUT(Local_5, "truckSpawn22", 338,1498f, 118,0941f, 821,873f, 0.0f, -128,6968f, 0.0f);
	*(&Local_5 + 2220) = { 321,2591f, 119,4478f, 802,741f };
	*(&Local_5 + 2220 + 12) = { 0.0f, -144,4964f, 0.0f };
	Local_5.f_2244 = CREATE_POINT_IN_LAYOUT(Local_5, "cavSpawn22", 321,2591f, 119,4478f, 802,741f, 0.0f, -144,4964f, 0.0f);
	*(&Local_5 + 2248) = { -286,2458f, 141,3958f, 1746,245f };
	*(&Local_5 + 2248 + 12) = { 0.0f, -56,67029f, 0.0f };
	*(&Local_5 + 2272) = { -124,1309f, 120,8568f, 1714,777f };
	*(&Local_5 + 2272 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_5 + 2296) = { 34,51505f, 115,3308f, 1694,515f };
	*(&Local_5 + 2296 + 12) = { 0.0f, -56,67029f, 0.0f };
	*(&Local_5 + 2320) = { 401,7699f, 108,0834f, 1517,697f };
	*(&Local_5 + 2320 + 12) = { 0.0f, 89,48291f, 0.0f };
	*(&Local_5 + 2344) = { 532,9803f, 104,6659f, 1433,335f };
	*(&Local_5 + 2344 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_5 + 2368) = { -177,8353f, 125,161f, 1718,184f };
	*(&Local_5 + 2368 + 12) = { 0.0f, 185,9178f, 0.0f };
	*(&Local_5 + 2392) = { -145,0322f, 122,4783f, 1776f };
	*(&Local_5 + 2392 + 12) = { 0.0f, 185,9178f, 0.0f };
	Local_5.f_2416 = CREATE_OBJECTSET_IN_LAYOUT("clear_GrassSet", Local_5, 8, 0);
	*(&Local_5 + 2420[06]) = { 423,874f, 105,7884f, 1522,312f };
	*(&Local_5 + 2420[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_5, "clearGrass_1", 423,874f, 105,7884f, 1522,312f, 0.0f, 0.0f, 0.0f);
	Function_423(bVar25);
	CLEAR_AREA_OF_GRASS(Function_423(bVar25), 7.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_5.f_2416);
	*(&Local_5 + 2420[16]) = { 416,9778f, 107,5178f, 1536,939f };
	*(&Local_5 + 2420[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_5, "clearGrass_2", 416,9778f, 107,5178f, 1536,939f, 0.0f, 0.0f, 0.0f);
	Function_423(bVar26);
	CLEAR_AREA_OF_GRASS(Function_423(bVar26), 11.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_5.f_2416);
	*(&Local_5 + 2420[26]) = { 406,9558f, 108,1482f, 1528,532f };
	*(&Local_5 + 2420[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_5, "clearGrass_3", 406,9558f, 108,1482f, 1528,532f, 0.0f, 0.0f, 0.0f);
	Function_423(bVar27);
	CLEAR_AREA_OF_GRASS(Function_423(bVar27), 8.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_5.f_2416);
	*(&Local_5 + 2496) = { -159,1444f, 123,0038f, 1718,328f };
	*(&Local_5 + 2496 + 12) = { 0.0f, 105,9981f, 0.0f };
	*(&Local_5 + 2520) = { -143,9999f, 122,4784f, 1778,626f };
	*(&Local_5 + 2520 + 12) = { 0.0f, 185,9178f, 0.0f };
	*(&Local_5 + 2544) = { 395,2312f, 109,4274f, 1531,144f };
	*(&Local_5 + 2544 + 12) = { 0.0f, -83,4408f, 0.0f };
	Local_5.f_2568 = CREATE_GRINGO_IN_LAYOUT(Local_5, "nlean_rail", "nlean_rail", 796,274f, 79,6116f, 1263,737f, 0.0f, 91,12948f, 0.0f);
	Local_5.f_2572 = CREATE_GRINGO_IN_LAYOUT(Local_5, "lean_rail1", "nlean_rail", 796,2884f, 79,6116f, 1264,465f, 0.0f, 91,12948f, 0.0f);
	Local_5.f_2576 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low_def_2", 325,2711f, 121,1839f, 633,2513f, 0.0f, 23,48793f, 0.0f, 4);
	Local_5.f_2580 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low_def_3", 323,7151f, 121,4686f, 633,6918f, 0.0f, 18,44679f, 0.0f, 4);
	Local_5.f_2584 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low9", 827,2305f, 110,4314f, 555,8179f, 0.0f, -33,22537f, 0.0f, 4);
	Local_5.f_2588 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low10", 830,1528f, 110,4314f, 569,1914f, 0.0f, -180,7273f, 0.0f, 4);
	Local_5.f_2592 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low109", 394,916f, 118,425f, 1472,959f, 0.0f, 166,8041f, 0.0f, 4);
	Local_5.f_2596 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low110", 393,925f, 118,5433f, 1472,385f, 0.0f, 132,5398f, 0.0f, 4);
	Local_5.f_2600 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low111", 393,1105f, 118,526f, 1471,172f, 0.0f, 109,2635f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low113", 388,1169f, 109,9822f, 1526,166f, 0.0f, 68,29737f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low114", 388,8074f, 110,1116f, 1530,193f, 0.0f, 122,968f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low115", 387,951f, 110,1308f, 1528,165f, 0.0f, 96,40691f, 0.0f, 4);
	Local_5.f_2604 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low116", 388,8631f, 109,4274f, 1546,736f, 0.0f, 68,56435f, 0.0f, 4);
	Local_5.f_2608 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low117", 388,4439f, 109,4412f, 1548,245f, 0.0f, 90,52711f, 0.0f, 4);
	Local_5.f_2612 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low118", 389,0094f, 109,4454f, 1549,928f, 0.0f, 113,6965f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low119", 388,222f, 109,5153f, 1562,233f, 0.0f, 35,37614f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low120", 386,9906f, 109,5385f, 1563,939f, 0.0f, 81,39385f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low121", 387,2291f, 109,9233f, 1565,678f, 0.0f, 105,699f, 0.0f, 4);
	Local_5.f_2616 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "ncover_low", 357,1089f, 111,2029f, 1533,028f, 0.0f, -95,47557f, 0.0f, 4);
	Local_5.f_2620 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low128", 357,2636f, 110,8181f, 1531,414f, 0.0f, -95,47557f, 0.0f, 4);
	Local_5.f_2624 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low129", 369,5695f, 110,5238f, 1525,993f, 0.0f, -127,0309f, 0.0f, 4);
	Local_5.f_2628 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low130", 370,4431f, 110,5238f, 1524,835f, 0.0f, -127,0309f, 0.0f, 4);
	Local_5.f_2632 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low131", 367,6453f, 110,4313f, 1543,899f, 0.0f, -106,6651f, 0.0f, 4);
	Local_5.f_2636 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low132", 367,2588f, 110,4313f, 1545,19f, 0.0f, -106,6651f, 0.0f, 4);
	Local_5.f_2640 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low133", 366,9903f, 110,5398f, 1554,009f, 0.0f, -98,93766f, 0.0f, 4);
	Local_5.f_2644 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low134", 366,8124f, 110,5398f, 1555,817f, 0.0f, -90,09119f, 0.0f, 4);
	Local_5.f_2648 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low135", 366,9899f, 110,4313f, 1567,936f, 0.0f, -80,90719f, 0.0f, 4);
	Local_5.f_2652 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low136", 367,2048f, 110,4313f, 1569,279f, 0.0f, -78,11464f, 0.0f, 4);
	Local_5.f_2656 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low137", 358,4018f, 110,4711f, 1573,11f, 0.0f, -78,11464f, 0.0f, 4);
	Local_5.f_2660 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low138", 358,0848f, 110,6104f, 1571,486f, 0.0f, -83,57352f, 0.0f, 4);
	Local_5.f_2664 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low139", 352,8519f, 111,7704f, 1555,97f, 0.0f, -83,57352f, 0.0f, 4);
	Local_5.f_2668 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low140", 353,1076f, 111,7704f, 1558,514f, 0.0f, -79,9073f, 0.0f, 4);
	Local_5.f_2672 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low141", 354,0071f, 111,6565f, 1563,99f, 0.0f, -68,71457f, 0.0f, 4);
	Local_5.f_2676 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low142", 353,0031f, 111,4353f, 1549,183f, 0.0f, -94,64856f, 0.0f, 4);
	Local_5.f_2680 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low143", 347,0593f, 112,2025f, 1561,651f, 0.0f, -60,12757f, 0.0f, 4);
	Local_5.f_2684 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low145", 342,5257f, 112,4391f, 1566,805f, 0.0f, -78,72852f, 0.0f, 4);
	Local_5.f_2688 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low146", 345,6051f, 111,2666f, 1570,796f, 0.0f, -78,72852f, 0.0f, 4);
	Local_5.f_2692 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low147", 341,0582f, 112,3625f, 1547,914f, 0.0f, -78,72852f, 0.0f, 4);
	Local_5.f_2696 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low148", 341,0293f, 112,3625f, 1545,395f, 0.0f, -99,4157f, 0.0f, 4);
	Local_5.f_2700 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low149", 341,9179f, 112,2822f, 1538,267f, 0.0f, -99,4157f, 0.0f, 4);
	Local_5.f_2704 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low150", 342,1736f, 112,2822f, 1536,725f, 0.0f, -99,4157f, 0.0f, 4);
	Local_5.f_2708 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low151", 345,6431f, 111,4353f, 1523,694f, 0.0f, -115,609f, 0.0f, 4);
	Local_5.f_2712 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low152", 358,6421f, 111,6835f, 1518,241f, 0.0f, -140,502f, 0.0f, 4);
	Local_5.f_2716 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "cover_low153", 357,6692f, 111,6444f, 1519,205f, 0.0f, -132,37f, 0.0f, 4);
}

void }CØBÒÎD¿-CÓ*NB×DÂÓç,á:D
 ;ogoToShootPos   p   ´CÕæBÕeDÁ {CÓB×dDÁ}1CÐtBØ<ÎDÁÑ§CÎ×BØ¬DÂ&lCÍp`BÚKDÂüCÌMBÚÎDÂÝÌCÊQfBÚõ#DÂû"CÈwLBÚþ0DÂÓDCÇBÛ?DÂ¼CÆLBÛåDÂbCÆ	ÌBÛ
tDÂ*CÅôBÛDÁ×ÓCÄõWBÚúYDÁOÏCÄ¢(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x205B2 / 132530
{
	((StackVal - StackVal <= StackVal - 9493))->f_49324 = StackVal;
}

vector3 CC*áBù :DÍscC72ÓBù4DÎ^.C0Bö]öDÏ}C*ñBõCDÏò¯C!îBòûQDÐcC:±BðVDÑVéC£ÈBîý1DÒZyBý¬BïQDÒîvBî;ÐBïDÒæëBá	mBï8 DÓêBÓ_<BïpòDÓ  BÁìBì^DÓeB¬+BêåDÔWB{Bé¶DÔÖ;BBèÈ#DÕlBdk(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, bool bParam67) //Position: 0x20A13 / 133651
{
}

vector3 C/>BôJJDÑÅC$ÌÔBòLDÑûCp?(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, int iParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x2144B / 136267
{
	int iVar23806;
	
	(StackVal - 4078)->f_53892 = StackVal;
	PatchTrap1();
	(StackVal >= (Vector(StackVal, (StackVal / StackVal + 67) - 4425, Global_4510541))->f_1299 - 4208)->f_54263 = StackVal;
	PatchTrap7();
	return StackVal, StackVal, StackVal - 3355 - 4125;
	StackVal->f_54363 = StackVal;
	(IntToFloat(4.0f - 4433))->f_54368 = StackVal - 7500;
	(-3.0f - 4384)->f_54367 = StackVal - 10782;
	(StackVal - 14042 - 5147)->f_54423 = StackVal;
	itos(StackVal - 18418, StackVal, 66);
	176->f_54556 = StackVal;
	straddi(Global_36420, (StackVal - 21919)->f_66, 66);
	PatchTrap3();
	((StackVal * 4 - 5911))->f_54958 = StackVal;
	PatchTrap1();
	(&iVar23806 + 8192 - 6273)->f_54762 = (StackVal + 21939)->f_17128;
	return;
	(4294965738 - 6305)->f_54759 = StackVal;
	PatchTrapE();
	0.0f->f_54624 = 4294934528 - 6393;
	Unknown_Function();
	PatchTrap6();
	PatchTrapA();
	Unknown_Function();
	(&Global_17125 ^ &Global_16467157)->f_54562 = StackVal;
}

vector3 Â\BçÍ'DÖ(;Â<-BébDÖRÂ­¬vBë_¯DÖ"ÑÂ·>OBëß)DÕøWÂÀ BìSÎDÖúÂÆ¦¡Bìu´DÖxÂÍìkBìÆDÖZ©ÂÖtBìD×	5ÂÞÝûBðD×âUÂíÝBòc!DØT¤Âú[BôDØ$ÜÃ¥&BôQD×æÃ4¤Bô#óDÖ"ÃBôq¼DÖUµÃ6 Bù>¹D×¼dÃS²-BþºDÙLrÃ_ÆaC  bDÙUÑÃg%hCrDØô3ÃmúyC&gDØr:Ã}$BCüDÖùäÃ>ÞC0DÖn(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x21723 / 136995
{
	return StackVal, StackVal, StackVal;
	PatchTrap1();
	StackVal->f_1427->f_54742 = StackVal;
	return StackVal, StackVal, StackVal;
	Local_5.f_2748 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, StackVal);
}

void D¬hDCBðBD«¯DCQ2BD©,á:D
Ì;owalker_2_path  p   TD6+pBD¬Ô»D6,}BD­ñ¼D5üwBD®æD5UBD®@D4í·BD®Z®D4EËBD®n{D-/B D®ëÛ,á:D
Ð(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65) //Position: 0x21A4F / 137807
{
	Local_5.f_2772 = CREATE_PROP_IN_LAYOUT(Local_5, "detonator01x0", "p_gen_detonator01x", -195,763f, 129,7899f, 1707,672f, 0.0f, -132,1044f, 0.0f, 1);
	return;
}

bool Function_537() //Position: 0x21B33 / 138035
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_482())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_309(&bLocal_831))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_821))
		{
			bLocal_821 = Function_546(10, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_822))
		{
			bLocal_822 = Function_539(1, 0, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_538("MINI_GAMES_AND_JOBS\\CAR"))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_538(bool bParam0) //Position: 0x21BB8 / 138168
{
	if (REQUEST_MISSION_AUDIO_BANK(bParam0))
	{
		return 1;
	}
	return 0;
}

bool Function_539(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x21BC9 / 138185
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
	if (Global_3381 || Function_222(1))
	{
		Function_545(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_544())
		{
			return "";
		}
	}
	if (!Function_542())
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
		Function_423(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_423(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_423(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_423(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_541(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_541(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_540(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

void Function_540(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x21F21 / 139041
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

var Function_541(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x21F5E / 139102
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

bool Function_542() //Position: 0x21FF9 / 139257
{
	if (Function_543() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_543() //Position: 0x2200F / 139279
{
	return Global_12976.f_152;
}

bool Function_544() //Position: 0x2201A / 139290
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_545(var uParam0, bool bParam1, bool bParam2) //Position: 0x2203A / 139322
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

bool Function_546(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x22067 / 139367
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
		Function_324(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_553(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_549(StackVal, uParam7);
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
		Function_548(bVar1, 0, 0, 0, 0);
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
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar1, 0);
		Function_547(bVar1, 0);
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

void Function_547(bool bParam0, bool bParam1) //Position: 0x22551 / 140625
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_548(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x22571 / 140657
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

bool Function_549(int iParam0, bool bParam1) //Position: 0x225C5 / 140741
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_474(iParam0))
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
						Function_550(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_550(bool bParam0, bool bParam1) //Position: 0x22645 / 140869
{
	Function_552(bParam0);
	Function_551(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_551(bool bParam0) //Position: 0x2266B / 140907
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_552(bool bParam0) //Position: 0x2268F / 140943
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

bool Function_553(int iParam0, bool bParam1) //Position: 0x2275E / 141150
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

void Function_554() //Position: 0x227F1 / 141297
{
	Function_416(&bLocal_831, "fbi02", 10, 0);
	Function_416(&bLocal_831, "arm_veh", 5, 0);
	Function_416(&bLocal_838, "talking_stand", 5, 0);
	Function_416(&bLocal_838, "custom/talking_stand", 8, 0);
	Function_416(&bLocal_838, "aiming_point", 5, 0);
	Function_416(&bLocal_838, "custom/aiming_point", 8, 0);
	Function_416(&bLocal_838, "one_handed_wave", 5, 0);
	Function_416(&bLocal_838, "custom/one_handed_wave", 8, 0);
	Function_416(&bLocal_838, "FBI02_rifle_stand", 5, 0);
	Function_416(&bLocal_838, "custom/FBI02_rifle_stand", 8, 0);
	Function_416(&bLocal_838, "FBI_commander", 5, 0);
	Function_416(&bLocal_838, "custom/FBI_commander", 8, 0);
	Function_416(&bLocal_838, "FBI02_soldiers_stn", 5, 0);
	Function_416(&bLocal_838, "custom/FBI02_soldiers_stn", 8, 0);
	Function_416(&bLocal_875, "p_gen_wagonExplode01ax", 0, 0);
	Function_416(&bLocal_875, "p_gen_wagonExplode01bx", 0, 0);
	Function_416(&bLocal_875, "p_gen_wagonExplode01cx", 0, 0);
	Function_416(&bLocal_875, "p_gen_wagonExplode01dx", 0, 0);
	Function_416(&bLocal_875, "p_gen_wagonExplode01ex", 0, 0);
	Function_416(&bLocal_875, "p_gen_wagonExplode01fx", 0, 0);
	Function_316(&bLocal_875, 976, 2, 0);
	Function_316(&bLocal_875, 977, 2, 0);
	Function_316(&bLocal_875, 980, 2, 0);
	Function_316(&bLocal_875, 981, 2, 0);
	Function_316(&bLocal_875, 983, 2, 0);
	Function_316(&bLocal_875, 984, 2, 0);
	Function_316(&bLocal_875, 470, 2, 0);
	Function_316(&bLocal_875, 471, 2, 0);
	Function_316(&bLocal_875, 472, 2, 0);
	Function_316(&bLocal_875, 474, 2, 0);
	Function_316(&bLocal_875, 475, 2, 0);
	Function_316(&bLocal_875, 476, 2, 0);
	Function_416(&bLocal_875, "FBI02_ambush", 5, 0);
	Function_416(&bLocal_875, "custom/FBI02_ambush", 8, 0);
	return;
}

void Function_555(int iParam0, bool bParam1) //Position: 0x22B20 / 142112
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_562(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_330(iParam0))
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
	if (!Function_330(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_199();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_233();
	Function_561();
	Function_223("");
	Function_560(0);
	Function_559();
	Function_191();
	Function_190();
	ENABLE_JOURNAL_REPLAY(0);
	Function_558();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_334(0, 0x40400000);
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
	Function_557(13);
	Function_557(14);
	Function_557(25);
	Function_557(24);
	Function_557(12);
	Function_557(27);
	Function_557(26);
	Function_557(15);
	Function_556();
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

void Function_556() //Position: 0x22F44 / 143172
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

void Function_557(int iParam0) //Position: 0x22FB8 / 143288
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_558() //Position: 0x22FD8 / 143320
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

void Function_559() //Position: 0x23015 / 143381
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_560(int iParam0) //Position: 0x23029 / 143401
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_194())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_561() //Position: 0x2305E / 143454
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_562(int iParam0, int iParam1) //Position: 0x23070 / 143472
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
			Function_563(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_563(int iParam0) //Position: 0x230F2 / 143602
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

bool Function_564(int iParam0) //Position: 0x23140 / 143680
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
			Function_565(iParam0, 1);
			return 1;
		}
	}
	Function_565(iParam0, 0);
	return 0;
}

void Function_565(int iParam0, bool bParam1) //Position: 0x231C7 / 143815
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

bool Function_566(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x231EB / 143851
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
		Function_565(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_585(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_584(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_584(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_570(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_565(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_569(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_568(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_569(&bVar17);
														strcpy(&Var18, "", 64);
														Function_567(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_223(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_568(StackVal, iParam2, bVar17);
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
	Function_565(iParam2, 0);
	return 0;
}

void Function_567(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x23584 / 144772
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

void Function_568(var uParam0, int iParam1, bool bParam2) //Position: 0x2366F / 145007
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

void Function_569(bool bParam0) //Position: 0x236E5 / 145125
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_570(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23707 / 145159
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
			return Function_581(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_574(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_581(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_571(iParam0, bVar2);
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
						bVar2 = Function_581(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_571(iParam0, bVar2);
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

var Function_571(int iParam0, bool bParam1) //Position: 0x23851 / 145489
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
				bParam1 = Function_573(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_572(16);
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
				bParam1 = Function_573(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_572(256);
			}
		}
	}
	return bParam1;
}

bool Function_572(int iParam0) //Position: 0x23984 / 145796
{
	return 2 | iParam0;
}

int Function_573(int iParam0) //Position: 0x2398E / 145806
{
	return 4 | iParam0;
}

int Function_574(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23998 / 145816
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
				iParam3 = Function_580(iParam0, iParam1, bParam4);
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
			return Function_572(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_575(iParam0, iParam1, 0, bParam4);
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
			return Function_572(16);
		}
	}
	return 0;
}

int Function_575(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x23A4A / 145994
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_579(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_578(iVar0, 3, 1, bParam3))
			{
				if (!Function_584(iParam0, 8, 1))
				{
					return Function_577(64, 1024, bParam2);
				}
			}
			return Function_576(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_578(iVar0, 2, 1, bParam3))
			{
				if (!Function_584(iParam0, 32, 1))
				{
					return Function_577(64, 1024, bParam2);
				}
			}
			return Function_576(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_578(iVar0, 1, 1, bParam3))
			{
				if (!Function_584(iParam0, 64, 1))
				{
					return Function_577(64, 1024, bParam2);
				}
			}
			return Function_576(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_578(iVar0, 3, 1, bParam3))
			{
				if (!Function_584(iParam0, 128, 1))
				{
					return Function_577(64, 1024, bParam2);
				}
			}
			return Function_576(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_578(iVar0, 1, 1, bParam3))
			{
				if (!Function_584(iParam0, 1024, 1))
				{
					return Function_577(64, 1024, bParam2);
				}
			}
			return Function_576(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_578(iVar0, 1, 1, bParam3))
			{
				if (!Function_584(iParam0, 1024, 1))
				{
					return Function_577(64, 1024, bParam2);
				}
			}
			return Function_576(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_576(int iParam0, int iParam1, bool bParam2) //Position: 0x23C04 / 146436
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_577(int iParam0, int iParam1, bool bParam2) //Position: 0x23C19 / 146457
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_578(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x23C2E / 146478
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_579(int iParam0) //Position: 0x23C4B / 146507
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

int Function_580(var uParam0, int iParam1, bool bParam2) //Position: 0x23CBA / 146618
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_579(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_578(iVar0, 3, 1, bParam2))
			{
				if (!Function_584(uParam0, 8, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000009:
			if (Function_578(iVar0, 3, 1, bParam2))
			{
				if (!Function_584(uParam0, 8, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x0000006E:
			if (Function_578(iVar0, 2, 1, bParam2))
			{
				if (!Function_584(uParam0, 16, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x0000005B:
			if (Function_578(iVar0, 2, 1, bParam2))
			{
				if (!Function_584(uParam0, 32, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000031:
			if (Function_578(iVar0, 1, 1, bParam2))
			{
				if (!Function_584(uParam0, 64, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000007:
			if (Function_578(iVar0, 3, 1, bParam2))
			{
				if (!Function_584(uParam0, 128, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000008:
			if (Function_578(iVar0, 2, 1, bParam2))
			{
				if (!Function_584(uParam0, 256, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000014:
			if (Function_578(iVar0, 1, 1, bParam2))
			{
				if (!Function_584(uParam0, 512, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000018:
			if (Function_578(iVar0, 1, 1, bParam2))
			{
				if (!Function_584(uParam0, 512, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000057:
			if (Function_578(iVar0, 1, 1, bParam2))
			{
				if (!Function_584(uParam0, 1024, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000058:
			if (Function_578(iVar0, 1, 1, bParam2))
			{
				if (!Function_584(uParam0, 1024, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_581(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x23ED5 / 147157
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
						return Function_580(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_584(iParam0, 2, 1))
					{
						return Function_573(8);
					}
					return Function_572(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_584(iParam0, 4, 1))
					{
						return Function_573(16);
					}
					return Function_572(16);
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
							return Function_575(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_584(iParam0, 2, 1))
						{
							return Function_573(128);
						}
						return Function_572(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_584(iParam0, 4, 1))
						{
							return Function_573(256);
						}
						return Function_572(256);
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
						return Function_575(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_584(iParam0, 2, 1))
					{
						return Function_573(8);
					}
					return Function_572(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_584(iParam0, 4, 1))
					{
						return Function_573(16);
					}
					return Function_572(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_583(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_584(iParam0, 2, 1))
					{
						return Function_573(8);
					}
					return Function_572(8);
				}
				if (!Function_584(iParam0, 4, 1))
				{
					return Function_573(16);
				}
				return Function_572(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_575(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_582(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_572(128);
							}
							if (!Function_584(iParam0, 2, 1))
							{
								return Function_573(8);
							}
							return Function_572(8);
						}
						if (iParam4 == 2)
						{
							if (Function_582(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_572(256);
							}
							if (!Function_584(iParam0, 4, 1))
							{
								return Function_573(16);
							}
							return Function_572(16);
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

bool Function_582(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x24195 / 147861
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

int Function_583(int iParam0, var uParam1, bool bParam2) //Position: 0x2424E / 148046
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_579(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_578(iVar0, 2, 1, bParam2))
			{
				if (!Function_584(iParam0, 16, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x0000005B:
			if (Function_578(iVar0, 2, 1, bParam2))
			{
				if (!Function_584(iParam0, 32, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000057:
			if (Function_578(iVar0, 1, 1, bParam2))
			{
				if (!Function_584(iParam0, 1024, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		case 0x00000058:
			if (Function_578(iVar0, 1, 1, bParam2))
			{
				if (!Function_584(iParam0, 1024, 1))
				{
					return Function_573(64);
				}
			}
			return Function_572(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_584(int iParam0, bool bParam1, bool bParam2) //Position: 0x24362 / 148322
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

int Function_585(int iParam0) //Position: 0x2438A / 148362
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

bool Function_586(int iParam0) //Position: 0x243BB / 148411
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_587() //Position: 0x243D9 / 148441
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if ((iLocal_955 % 2) == 0)
	{
		if (IS_OBJECTSET_VALID(bLocal_973))
		{
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_973) - 1))
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_973);
				if (DECOR_CHECK_EXIST(bVar2, "nfDropTime"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar2, "nfDropTime")) < 3.0f)
					{
						GET_OBJECT_POSITION(bVar2, &uVar3);
						Function_266(&uVar3, "DynamiteExplosion", 0, 1);
						REMOVE_OBJECT_FROM_OBJECTSET(bVar2, bLocal_973);
						DESTROY_OBJECT(bVar2);
					}
				}
				else
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(GET_OBJECT_ATTACHED_TO(_GET_OBJECT_ATTACHMENT(bVar2)));
					if (!IS_ACTOR_ALIVE(bVar1))
					{
						DECOR_SET_FLOAT(bVar2, "nfDropTime", GET_CURRENT_GAME_TIME());
					}
				}
				bVar0++;
			}
		}
	}
	iLocal_955++;
	return;
}

void Function_588(var uParam0) //Position: 0x244AB / 148651
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_63399 && uParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_63399 && uParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_63398);
	}
	return;
}

void Function_589() //Position: 0x244DB / 148699
{
	if (IS_ACTOR_VALID((*&Local_5 + 808)[02]))
	{
		if (GET_ACTOR_STUCK_STATE((*&Local_5 + 808)[02]) != 0)
		{
			Function_339((*&Local_5 + 808)[02]);
			Function_590(StackVal, StackVal, Function_339((*&Local_5 + 808)[02]), 10.0f);
		}
	}
	return;
}

void Function_590(vector3 vParam0, float fParam3) //Position: 0x24511 / 148753
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_423(bVar1);
		if (GET_OBJECT_TYPE(bVar1) != 29 && VDIST(vParam0, Function_423(bVar1)) >= fParam3)
		{
			DESTROY_OBJECT(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

void Function_591(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x24567 / 148839
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

